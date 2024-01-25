// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/aiops_20200806.hpp>
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

using namespace Alibabacloud_Aiops20200806;

Alibabacloud_Aiops20200806::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("aiops"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Aiops20200806::Client::getEndpoint(shared_ptr<string> productId,
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

AddAlgorithmResponse Alibabacloud_Aiops20200806::Client::addAlgorithmWithOptions(shared_ptr<AddAlgorithmRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->algorithmId)) {
    query->insert(pair<string, string>("AlgorithmId", *request->algorithmId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->algorithmType)) {
    query->insert(pair<string, long>("AlgorithmType", *request->algorithmType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->businessGroupId)) {
    query->insert(pair<string, string>("BusinessGroupId", *request->businessGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->expandInformation)) {
    query->insert(pair<string, string>("ExpandInformation", *request->expandInformation));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->indexId)) {
    query->insert(pair<string, string>("IndexId", *request->indexId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    query->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productType)) {
    query->insert(pair<string, string>("ProductType", *request->productType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    query->insert(pair<string, long>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddAlgorithm"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddAlgorithmResponse(callApi(params, req, runtime));
}

AddAlgorithmResponse Alibabacloud_Aiops20200806::Client::addAlgorithm(shared_ptr<AddAlgorithmRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addAlgorithmWithOptions(request, runtime);
}

AddBusinessGroupResponse Alibabacloud_Aiops20200806::Client::addBusinessGroupWithOptions(shared_ptr<AddBusinessGroupRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<AddBusinessGroupShrinkRequest> request = make_shared<AddBusinessGroupShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->instanceList)) {
    request->instanceListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->instanceList, make_shared<string>("InstanceList"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aliUid)) {
    query->insert(pair<string, string>("AliUid", *request->aliUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->businessGroupDesc)) {
    query->insert(pair<string, string>("BusinessGroupDesc", *request->businessGroupDesc));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->businessGroupName)) {
    query->insert(pair<string, string>("BusinessGroupName", *request->businessGroupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->createUser)) {
    query->insert(pair<string, string>("CreateUser", *request->createUser));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceListShrink)) {
    query->insert(pair<string, string>("InstanceList", *request->instanceListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    query->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceType)) {
    query->insert(pair<string, long>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->updateUser)) {
    query->insert(pair<string, string>("UpdateUser", *request->updateUser));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddBusinessGroup"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddBusinessGroupResponse(callApi(params, req, runtime));
}

AddBusinessGroupResponse Alibabacloud_Aiops20200806::Client::addBusinessGroup(shared_ptr<AddBusinessGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addBusinessGroupWithOptions(request, runtime);
}

AddBusinessGroupOneResponse Alibabacloud_Aiops20200806::Client::addBusinessGroupOneWithOptions(shared_ptr<AddBusinessGroupOneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    query->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->businessGroupDesc)) {
    body->insert(pair<string, string>("BusinessGroupDesc", *request->businessGroupDesc));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->businessGroupName)) {
    body->insert(pair<string, string>("BusinessGroupName", *request->businessGroupName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddBusinessGroupOne"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddBusinessGroupOneResponse(callApi(params, req, runtime));
}

AddBusinessGroupOneResponse Alibabacloud_Aiops20200806::Client::addBusinessGroupOne(shared_ptr<AddBusinessGroupOneRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addBusinessGroupOneWithOptions(request, runtime);
}

AddScenarioResponse Alibabacloud_Aiops20200806::Client::addScenarioWithOptions(shared_ptr<AddScenarioRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->alertSettingId)) {
    query->insert(pair<string, long>("AlertSettingId", *request->alertSettingId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->level)) {
    query->insert(pair<string, long>("Level", *request->level));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    query->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddScenario"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddScenarioResponse(callApi(params, req, runtime));
}

AddScenarioResponse Alibabacloud_Aiops20200806::Client::addScenario(shared_ptr<AddScenarioRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addScenarioWithOptions(request, runtime);
}

AddSceneListResponse Alibabacloud_Aiops20200806::Client::addSceneListWithOptions(shared_ptr<AddSceneListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddSceneList"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddSceneListResponse(callApi(params, req, runtime));
}

AddSceneListResponse Alibabacloud_Aiops20200806::Client::addSceneList(shared_ptr<AddSceneListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addSceneListWithOptions(request, runtime);
}

AddScriptResponse Alibabacloud_Aiops20200806::Client::addScriptWithOptions(shared_ptr<AddScriptRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->handleSuggestDesc)) {
    query->insert(pair<string, string>("HandleSuggestDesc", *request->handleSuggestDesc));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->metricName)) {
    query->insert(pair<string, string>("MetricName", *request->metricName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    query->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    query->insert(pair<string, string>("ProductCode", *request->productCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->rootCauseDesc)) {
    query->insert(pair<string, string>("RootCauseDesc", *request->rootCauseDesc));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->rootCausesLog)) {
    query->insert(pair<string, string>("RootCausesLog", *request->rootCausesLog));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sceneId)) {
    query->insert(pair<string, string>("SceneId", *request->sceneId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->script)) {
    query->insert(pair<string, string>("Script", *request->script));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scriptDesc)) {
    query->insert(pair<string, string>("ScriptDesc", *request->scriptDesc));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scriptLanguage)) {
    query->insert(pair<string, string>("ScriptLanguage", *request->scriptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scriptName)) {
    query->insert(pair<string, string>("ScriptName", *request->scriptName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scriptVersion)) {
    query->insert(pair<string, string>("ScriptVersion", *request->scriptVersion));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->status)) {
    query->insert(pair<string, long>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->type)) {
    query->insert(pair<string, long>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddScript"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddScriptResponse(callApi(params, req, runtime));
}

AddScriptResponse Alibabacloud_Aiops20200806::Client::addScript(shared_ptr<AddScriptRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addScriptWithOptions(request, runtime);
}

AddTagInfoResponse Alibabacloud_Aiops20200806::Client::addTagInfoWithOptions(shared_ptr<AddTagInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddTagInfo"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddTagInfoResponse(callApi(params, req, runtime));
}

AddTagInfoResponse Alibabacloud_Aiops20200806::Client::addTagInfo(shared_ptr<AddTagInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addTagInfoWithOptions(request, runtime);
}

AgainSubmitApplyPermissionResponse Alibabacloud_Aiops20200806::Client::againSubmitApplyPermissionWithOptions(shared_ptr<AgainSubmitApplyPermissionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->switchFrontOperaUid)) {
    query->insert(pair<string, string>("SwitchFrontOperaUid", *request->switchFrontOperaUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->uid)) {
    query->insert(pair<string, long>("Uid", *request->uid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AgainSubmitApplyPermission"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AgainSubmitApplyPermissionResponse(callApi(params, req, runtime));
}

AgainSubmitApplyPermissionResponse Alibabacloud_Aiops20200806::Client::againSubmitApplyPermission(shared_ptr<AgainSubmitApplyPermissionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return againSubmitApplyPermissionWithOptions(request, runtime);
}

ApplyAuthorizationResponse Alibabacloud_Aiops20200806::Client::applyAuthorizationWithOptions(shared_ptr<ApplyAuthorizationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->switchFrontOperaUid)) {
    query->insert(pair<string, string>("SwitchFrontOperaUid", *request->switchFrontOperaUid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->uid)) {
    query->insert(pair<string, long>("Uid", *request->uid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ApplyAuthorization"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ApplyAuthorizationResponse(callApi(params, req, runtime));
}

ApplyAuthorizationResponse Alibabacloud_Aiops20200806::Client::applyAuthorization(shared_ptr<ApplyAuthorizationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return applyAuthorizationWithOptions(request, runtime);
}

CheckDataSourceLinkConnectionResponse Alibabacloud_Aiops20200806::Client::checkDataSourceLinkConnectionWithOptions(shared_ptr<CheckDataSourceLinkConnectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dataSourceParams)) {
    query->insert(pair<string, string>("DataSourceParams", *request->dataSourceParams));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->dataSourceType)) {
    query->insert(pair<string, long>("DataSourceType", *request->dataSourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    query->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CheckDataSourceLinkConnection"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CheckDataSourceLinkConnectionResponse(callApi(params, req, runtime));
}

CheckDataSourceLinkConnectionResponse Alibabacloud_Aiops20200806::Client::checkDataSourceLinkConnection(shared_ptr<CheckDataSourceLinkConnectionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkDataSourceLinkConnectionWithOptions(request, runtime);
}

CheckLogResponse Alibabacloud_Aiops20200806::Client::checkLogWithOptions(shared_ptr<CheckLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->dataSourceId)) {
    query->insert(pair<string, long>("DataSourceId", *request->dataSourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    query->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CheckLog"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CheckLogResponse(callApi(params, req, runtime));
}

CheckLogResponse Alibabacloud_Aiops20200806::Client::checkLog(shared_ptr<CheckLogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkLogWithOptions(request, runtime);
}

CloseEventResponse Alibabacloud_Aiops20200806::Client::closeEventWithOptions(shared_ptr<CloseEventRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->closeDesc)) {
    query->insert(pair<string, string>("CloseDesc", *request->closeDesc));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    query->insert(pair<string, string>("Id", *request->id));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CloseEvent"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CloseEventResponse(callApi(params, req, runtime));
}

CloseEventResponse Alibabacloud_Aiops20200806::Client::closeEvent(shared_ptr<CloseEventRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return closeEventWithOptions(request, runtime);
}

ConfirmAuthorizationResponse Alibabacloud_Aiops20200806::Client::confirmAuthorizationWithOptions(shared_ptr<ConfirmAuthorizationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->permissionType)) {
    query->insert(pair<string, long>("PermissionType", *request->permissionType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->switchFrontOperaUid)) {
    query->insert(pair<string, string>("SwitchFrontOperaUid", *request->switchFrontOperaUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->uid)) {
    query->insert(pair<string, long>("Uid", *request->uid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ConfirmAuthorization"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ConfirmAuthorizationResponse(callApi(params, req, runtime));
}

ConfirmAuthorizationResponse Alibabacloud_Aiops20200806::Client::confirmAuthorization(shared_ptr<ConfirmAuthorizationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return confirmAuthorizationWithOptions(request, runtime);
}

CountLatestReportsResponse Alibabacloud_Aiops20200806::Client::countLatestReportsWithOptions(shared_ptr<CountLatestReportsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->logStore)) {
    query->insert(pair<string, string>("LogStore", *request->logStore));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    query->insert(pair<string, string>("ProductCode", *request->productCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->uid)) {
    query->insert(pair<string, long>("Uid", *request->uid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CountLatestReports"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CountLatestReportsResponse(callApi(params, req, runtime));
}

CountLatestReportsResponse Alibabacloud_Aiops20200806::Client::countLatestReports(shared_ptr<CountLatestReportsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return countLatestReportsWithOptions(request, runtime);
}

CreateAlertContactResponse Alibabacloud_Aiops20200806::Client::createAlertContactWithOptions(shared_ptr<CreateAlertContactRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->email)) {
    body->insert(pair<string, string>("Email", *request->email));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    body->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phone)) {
    body->insert(pair<string, string>("Phone", *request->phone));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->webhook)) {
    body->insert(pair<string, string>("Webhook", *request->webhook));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateAlertContact"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateAlertContactResponse(callApi(params, req, runtime));
}

CreateAlertContactResponse Alibabacloud_Aiops20200806::Client::createAlertContact(shared_ptr<CreateAlertContactRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAlertContactWithOptions(request, runtime);
}

CreateAlertContactGroupResponse Alibabacloud_Aiops20200806::Client::createAlertContactGroupWithOptions(shared_ptr<CreateAlertContactGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->alertContactGroupJson)) {
    body->insert(pair<string, string>("AlertContactGroupJson", *request->alertContactGroupJson));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contactIdsJson)) {
    body->insert(pair<string, string>("ContactIdsJson", *request->contactIdsJson));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    body->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateAlertContactGroup"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateAlertContactGroupResponse(callApi(params, req, runtime));
}

CreateAlertContactGroupResponse Alibabacloud_Aiops20200806::Client::createAlertContactGroup(shared_ptr<CreateAlertContactGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAlertContactGroupWithOptions(request, runtime);
}

CreateCommandResponse Alibabacloud_Aiops20200806::Client::createCommandWithOptions(shared_ptr<CreateCommandRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->commandContent)) {
    query->insert(pair<string, string>("CommandContent", *request->commandContent));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workingDir)) {
    query->insert(pair<string, string>("WorkingDir", *request->workingDir));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->timeout)) {
    query->insert(pair<string, long>("timeout", *request->timeout));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateCommand"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateCommandResponse(callApi(params, req, runtime));
}

CreateCommandResponse Alibabacloud_Aiops20200806::Client::createCommand(shared_ptr<CreateCommandRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createCommandWithOptions(request, runtime);
}

CreateDumpResponse Alibabacloud_Aiops20200806::Client::createDumpWithOptions(shared_ptr<CreateDumpRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->eventId)) {
    query->insert(pair<string, string>("EventId", *request->eventId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDump"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDumpResponse(callApi(params, req, runtime));
}

CreateDumpResponse Alibabacloud_Aiops20200806::Client::createDump(shared_ptr<CreateDumpRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDumpWithOptions(request, runtime);
}

CreateInspectionRecordResponse Alibabacloud_Aiops20200806::Client::createInspectionRecordWithOptions(shared_ptr<CreateInspectionRecordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    body->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    body->insert(pair<string, string>("ProductCode", *request->productCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceId)) {
    body->insert(pair<string, string>("ResourceId", *request->resourceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateInspectionRecord"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateInspectionRecordResponse(callApi(params, req, runtime));
}

CreateInspectionRecordResponse Alibabacloud_Aiops20200806::Client::createInspectionRecord(shared_ptr<CreateInspectionRecordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createInspectionRecordWithOptions(request, runtime);
}

CreateMessageResponse Alibabacloud_Aiops20200806::Client::createMessageWithOptions(shared_ptr<CreateMessageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->eventId)) {
    query->insert(pair<string, string>("EventId", *request->eventId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateMessage"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateMessageResponse(callApi(params, req, runtime));
}

CreateMessageResponse Alibabacloud_Aiops20200806::Client::createMessage(shared_ptr<CreateMessageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createMessageWithOptions(request, runtime);
}

CreateSceneResponse Alibabacloud_Aiops20200806::Client::createSceneWithOptions(shared_ptr<CreateSceneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->flowName)) {
    body->insert(pair<string, string>("FlowName", *request->flowName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->metricListJson)) {
    body->insert(pair<string, string>("MetricListJson", *request->metricListJson));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeListJson)) {
    body->insert(pair<string, string>("NodeListJson", *request->nodeListJson));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    body->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sceneDesc)) {
    body->insert(pair<string, string>("SceneDesc", *request->sceneDesc));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sceneName)) {
    body->insert(pair<string, string>("SceneName", *request->sceneName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sceneOwner)) {
    body->insert(pair<string, string>("SceneOwner", *request->sceneOwner));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sceneWebhook)) {
    body->insert(pair<string, string>("SceneWebhook", *request->sceneWebhook));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateScene"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateSceneResponse(callApi(params, req, runtime));
}

CreateSceneResponse Alibabacloud_Aiops20200806::Client::createScene(shared_ptr<CreateSceneRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSceneWithOptions(request, runtime);
}

CreateSceneModelResponse Alibabacloud_Aiops20200806::Client::createSceneModelWithOptions(shared_ptr<CreateSceneModelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->fcFunctionName)) {
    body->insert(pair<string, string>("FcFunctionName", *request->fcFunctionName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fcHandler)) {
    body->insert(pair<string, string>("FcHandler", *request->fcHandler));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fcInitializer)) {
    body->insert(pair<string, string>("FcInitializer", *request->fcInitializer));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fcRegionNo)) {
    body->insert(pair<string, string>("FcRegionNo", *request->fcRegionNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fcServiceName)) {
    body->insert(pair<string, string>("FcServiceName", *request->fcServiceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modelDesc)) {
    body->insert(pair<string, string>("ModelDesc", *request->modelDesc));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->modelLanguage)) {
    body->insert(pair<string, long>("ModelLanguage", *request->modelLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modelMemo)) {
    body->insert(pair<string, string>("ModelMemo", *request->modelMemo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modelName)) {
    body->insert(pair<string, string>("ModelName", *request->modelName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->modelType)) {
    body->insert(pair<string, long>("ModelType", *request->modelType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    body->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->rootCauseDesc)) {
    body->insert(pair<string, string>("RootCauseDesc", *request->rootCauseDesc));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->rootCauseSolution)) {
    body->insert(pair<string, string>("RootCauseSolution", *request->rootCauseSolution));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateSceneModel"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateSceneModelResponse(callApi(params, req, runtime));
}

CreateSceneModelResponse Alibabacloud_Aiops20200806::Client::createSceneModel(shared_ptr<CreateSceneModelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSceneModelWithOptions(request, runtime);
}

CreateSceneModelApplyResponse Alibabacloud_Aiops20200806::Client::createSceneModelApplyWithOptions(shared_ptr<CreateSceneModelApplyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->modelId)) {
    body->insert(pair<string, long>("ModelId", *request->modelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    body->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateSceneModelApply"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateSceneModelApplyResponse(callApi(params, req, runtime));
}

CreateSceneModelApplyResponse Alibabacloud_Aiops20200806::Client::createSceneModelApply(shared_ptr<CreateSceneModelApplyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSceneModelApplyWithOptions(request, runtime);
}

DelBusinessGroupResponse Alibabacloud_Aiops20200806::Client::delBusinessGroupWithOptions(shared_ptr<DelBusinessGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DelBusinessGroup"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DelBusinessGroupResponse(callApi(params, req, runtime));
}

DelBusinessGroupResponse Alibabacloud_Aiops20200806::Client::delBusinessGroup(shared_ptr<DelBusinessGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return delBusinessGroupWithOptions(request, runtime);
}

DeleteAlertContactResponse Alibabacloud_Aiops20200806::Client::deleteAlertContactWithOptions(shared_ptr<DeleteAlertContactRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    query->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->contactIdListJson)) {
    body->insert(pair<string, string>("ContactIdListJson", *request->contactIdListJson));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->groupId)) {
    body->insert(pair<string, long>("GroupId", *request->groupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteAlertContact"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteAlertContactResponse(callApi(params, req, runtime));
}

DeleteAlertContactResponse Alibabacloud_Aiops20200806::Client::deleteAlertContact(shared_ptr<DeleteAlertContactRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAlertContactWithOptions(request, runtime);
}

DeleteAlertContactFromGroupResponse Alibabacloud_Aiops20200806::Client::deleteAlertContactFromGroupWithOptions(shared_ptr<DeleteAlertContactFromGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    query->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->contactIdListJson)) {
    body->insert(pair<string, string>("ContactIdListJson", *request->contactIdListJson));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->groupId)) {
    body->insert(pair<string, long>("GroupId", *request->groupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteAlertContactFromGroup"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteAlertContactFromGroupResponse(callApi(params, req, runtime));
}

DeleteAlertContactFromGroupResponse Alibabacloud_Aiops20200806::Client::deleteAlertContactFromGroup(shared_ptr<DeleteAlertContactFromGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAlertContactFromGroupWithOptions(request, runtime);
}

DeleteAlertContactGroupResponse Alibabacloud_Aiops20200806::Client::deleteAlertContactGroupWithOptions(shared_ptr<DeleteAlertContactGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    query->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->groupId)) {
    body->insert(pair<string, long>("GroupId", *request->groupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteAlertContactGroup"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteAlertContactGroupResponse(callApi(params, req, runtime));
}

DeleteAlertContactGroupResponse Alibabacloud_Aiops20200806::Client::deleteAlertContactGroup(shared_ptr<DeleteAlertContactGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAlertContactGroupWithOptions(request, runtime);
}

DeleteAlertSettingResponse Alibabacloud_Aiops20200806::Client::deleteAlertSettingWithOptions(shared_ptr<DeleteAlertSettingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    query->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->alertSettingId)) {
    body->insert(pair<string, long>("AlertSettingId", *request->alertSettingId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteAlertSetting"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteAlertSettingResponse(callApi(params, req, runtime));
}

DeleteAlertSettingResponse Alibabacloud_Aiops20200806::Client::deleteAlertSetting(shared_ptr<DeleteAlertSettingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAlertSettingWithOptions(request, runtime);
}

DeleteAlertSettingListResponse Alibabacloud_Aiops20200806::Client::deleteAlertSettingListWithOptions(shared_ptr<DeleteAlertSettingListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    query->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->customerIdsJson)) {
    body->insert(pair<string, string>("CustomerIdsJson", *request->customerIdsJson));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteAlertSettingList"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteAlertSettingListResponse(callApi(params, req, runtime));
}

DeleteAlertSettingListResponse Alibabacloud_Aiops20200806::Client::deleteAlertSettingList(shared_ptr<DeleteAlertSettingListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAlertSettingListWithOptions(request, runtime);
}

DeleteAlgorithmInfoResponse Alibabacloud_Aiops20200806::Client::deleteAlgorithmInfoWithOptions(shared_ptr<DeleteAlgorithmInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    query->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteAlgorithmInfo"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteAlgorithmInfoResponse(callApi(params, req, runtime));
}

DeleteAlgorithmInfoResponse Alibabacloud_Aiops20200806::Client::deleteAlgorithmInfo(shared_ptr<DeleteAlgorithmInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAlgorithmInfoWithOptions(request, runtime);
}

DeleteBusinessGroupResponse Alibabacloud_Aiops20200806::Client::deleteBusinessGroupWithOptions(shared_ptr<DeleteBusinessGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteBusinessGroup"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteBusinessGroupResponse(callApi(params, req, runtime));
}

DeleteBusinessGroupResponse Alibabacloud_Aiops20200806::Client::deleteBusinessGroup(shared_ptr<DeleteBusinessGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteBusinessGroupWithOptions(request, runtime);
}

DeleteBusinessResourceTagResponse Alibabacloud_Aiops20200806::Client::deleteBusinessResourceTagWithOptions(shared_ptr<DeleteBusinessResourceTagRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteBusinessResourceTag"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteBusinessResourceTagResponse(callApi(params, req, runtime));
}

DeleteBusinessResourceTagResponse Alibabacloud_Aiops20200806::Client::deleteBusinessResourceTag(shared_ptr<DeleteBusinessResourceTagRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteBusinessResourceTagWithOptions(request, runtime);
}

DeleteDataSourceConfigResponse Alibabacloud_Aiops20200806::Client::deleteDataSourceConfigWithOptions(shared_ptr<DeleteDataSourceConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    query->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDataSourceConfig"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteDataSourceConfigResponse(callApi(params, req, runtime));
}

DeleteDataSourceConfigResponse Alibabacloud_Aiops20200806::Client::deleteDataSourceConfig(shared_ptr<DeleteDataSourceConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDataSourceConfigWithOptions(request, runtime);
}

DeleteGroupTopologyTagLogResponse Alibabacloud_Aiops20200806::Client::deleteGroupTopologyTagLogWithOptions(shared_ptr<DeleteGroupTopologyTagLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteGroupTopologyTagLog"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteGroupTopologyTagLogResponse(callApi(params, req, runtime));
}

DeleteGroupTopologyTagLogResponse Alibabacloud_Aiops20200806::Client::deleteGroupTopologyTagLog(shared_ptr<DeleteGroupTopologyTagLogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteGroupTopologyTagLogWithOptions(request, runtime);
}

DeleteRealSceneInfoResponse Alibabacloud_Aiops20200806::Client::deleteRealSceneInfoWithOptions(shared_ptr<DeleteRealSceneInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteRealSceneInfo"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteRealSceneInfoResponse(callApi(params, req, runtime));
}

DeleteRealSceneInfoResponse Alibabacloud_Aiops20200806::Client::deleteRealSceneInfo(shared_ptr<DeleteRealSceneInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteRealSceneInfoWithOptions(request, runtime);
}

DeleteReportEmailConfigResponse Alibabacloud_Aiops20200806::Client::deleteReportEmailConfigWithOptions(shared_ptr<DeleteReportEmailConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->mailConfigId)) {
    body->insert(pair<string, long>("MailConfigId", *request->mailConfigId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    body->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteReportEmailConfig"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteReportEmailConfigResponse(callApi(params, req, runtime));
}

DeleteReportEmailConfigResponse Alibabacloud_Aiops20200806::Client::deleteReportEmailConfig(shared_ptr<DeleteReportEmailConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteReportEmailConfigWithOptions(request, runtime);
}

DeleteResourceWhitelistResponse Alibabacloud_Aiops20200806::Client::deleteResourceWhitelistWithOptions(shared_ptr<DeleteResourceWhitelistRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->inspectionWhitelistId)) {
    body->insert(pair<string, long>("InspectionWhitelistId", *request->inspectionWhitelistId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    body->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteResourceWhitelist"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteResourceWhitelistResponse(callApi(params, req, runtime));
}

DeleteResourceWhitelistResponse Alibabacloud_Aiops20200806::Client::deleteResourceWhitelist(shared_ptr<DeleteResourceWhitelistRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteResourceWhitelistWithOptions(request, runtime);
}

DeleteScenarioResponse Alibabacloud_Aiops20200806::Client::deleteScenarioWithOptions(shared_ptr<DeleteScenarioRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    query->insert(pair<string, string>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    query->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteScenario"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteScenarioResponse(callApi(params, req, runtime));
}

DeleteScenarioResponse Alibabacloud_Aiops20200806::Client::deleteScenario(shared_ptr<DeleteScenarioRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteScenarioWithOptions(request, runtime);
}

DeleteSceneResponse Alibabacloud_Aiops20200806::Client::deleteSceneWithOptions(shared_ptr<DeleteSceneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    body->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->sceneId)) {
    body->insert(pair<string, long>("SceneId", *request->sceneId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteScene"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteSceneResponse(callApi(params, req, runtime));
}

DeleteSceneResponse Alibabacloud_Aiops20200806::Client::deleteScene(shared_ptr<DeleteSceneRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteSceneWithOptions(request, runtime);
}

DeleteSceneListResponse Alibabacloud_Aiops20200806::Client::deleteSceneListWithOptions(shared_ptr<DeleteSceneListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteSceneList"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteSceneListResponse(callApi(params, req, runtime));
}

DeleteSceneListResponse Alibabacloud_Aiops20200806::Client::deleteSceneList(shared_ptr<DeleteSceneListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteSceneListWithOptions(request, runtime);
}

DeleteSceneModelResponse Alibabacloud_Aiops20200806::Client::deleteSceneModelWithOptions(shared_ptr<DeleteSceneModelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->modelId)) {
    body->insert(pair<string, long>("ModelId", *request->modelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    body->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->sureDelete)) {
    body->insert(pair<string, bool>("SureDelete", *request->sureDelete));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteSceneModel"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteSceneModelResponse(callApi(params, req, runtime));
}

DeleteSceneModelResponse Alibabacloud_Aiops20200806::Client::deleteSceneModel(shared_ptr<DeleteSceneModelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteSceneModelWithOptions(request, runtime);
}

DeleteTagInfoResponse Alibabacloud_Aiops20200806::Client::deleteTagInfoWithOptions(shared_ptr<DeleteTagInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteTagInfo"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteTagInfoResponse(callApi(params, req, runtime));
}

DeleteTagInfoResponse Alibabacloud_Aiops20200806::Client::deleteTagInfo(shared_ptr<DeleteTagInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteTagInfoWithOptions(request, runtime);
}

DescribeAccountAlertEventResponse Alibabacloud_Aiops20200806::Client::describeAccountAlertEventWithOptions(shared_ptr<DescribeAccountAlertEventRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->eventId)) {
    query->insert(pair<string, string>("EventId", *request->eventId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    query->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAccountAlertEvent"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAccountAlertEventResponse(callApi(params, req, runtime));
}

DescribeAccountAlertEventResponse Alibabacloud_Aiops20200806::Client::describeAccountAlertEvent(shared_ptr<DescribeAccountAlertEventRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAccountAlertEventWithOptions(request, runtime);
}

DescribeAdvisorInspectionProductsResponse Alibabacloud_Aiops20200806::Client::describeAdvisorInspectionProductsWithOptions(shared_ptr<DescribeAdvisorInspectionProductsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    body->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAdvisorInspectionProducts"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAdvisorInspectionProductsResponse(callApi(params, req, runtime));
}

DescribeAdvisorInspectionProductsResponse Alibabacloud_Aiops20200806::Client::describeAdvisorInspectionProducts(shared_ptr<DescribeAdvisorInspectionProductsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAdvisorInspectionProductsWithOptions(request, runtime);
}

DescribeAlertBusinessGroupWithAlertSettingIdResponse Alibabacloud_Aiops20200806::Client::describeAlertBusinessGroupWithAlertSettingIdWithOptions(shared_ptr<DescribeAlertBusinessGroupWithAlertSettingIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->alertSettingId)) {
    body->insert(pair<string, long>("AlertSettingId", *request->alertSettingId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAlertBusinessGroupWithAlertSettingId"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAlertBusinessGroupWithAlertSettingIdResponse(callApi(params, req, runtime));
}

DescribeAlertBusinessGroupWithAlertSettingIdResponse Alibabacloud_Aiops20200806::Client::describeAlertBusinessGroupWithAlertSettingId(shared_ptr<DescribeAlertBusinessGroupWithAlertSettingIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAlertBusinessGroupWithAlertSettingIdWithOptions(request, runtime);
}

DescribeAlertContactResponse Alibabacloud_Aiops20200806::Client::describeAlertContactWithOptions(shared_ptr<DescribeAlertContactRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    body->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    body->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchBy)) {
    body->insert(pair<string, string>("SearchBy", *request->searchBy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchLike)) {
    body->insert(pair<string, string>("SearchLike", *request->searchLike));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAlertContact"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAlertContactResponse(callApi(params, req, runtime));
}

DescribeAlertContactResponse Alibabacloud_Aiops20200806::Client::describeAlertContact(shared_ptr<DescribeAlertContactRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAlertContactWithOptions(request, runtime);
}

DescribeAlertContactGroupResponse Alibabacloud_Aiops20200806::Client::describeAlertContactGroupWithOptions(shared_ptr<DescribeAlertContactGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    body->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    body->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchLike)) {
    body->insert(pair<string, string>("SearchLike", *request->searchLike));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAlertContactGroup"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAlertContactGroupResponse(callApi(params, req, runtime));
}

DescribeAlertContactGroupResponse Alibabacloud_Aiops20200806::Client::describeAlertContactGroup(shared_ptr<DescribeAlertContactGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAlertContactGroupWithOptions(request, runtime);
}

DescribeAlertContactWithAlertSettingIdResponse Alibabacloud_Aiops20200806::Client::describeAlertContactWithAlertSettingIdWithOptions(shared_ptr<DescribeAlertContactWithAlertSettingIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->alertSettingId)) {
    body->insert(pair<string, long>("AlertSettingId", *request->alertSettingId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->contactType)) {
    body->insert(pair<string, long>("ContactType", *request->contactType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAlertContactWithAlertSettingId"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAlertContactWithAlertSettingIdResponse(callApi(params, req, runtime));
}

DescribeAlertContactWithAlertSettingIdResponse Alibabacloud_Aiops20200806::Client::describeAlertContactWithAlertSettingId(shared_ptr<DescribeAlertContactWithAlertSettingIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAlertContactWithAlertSettingIdWithOptions(request, runtime);
}

DescribeAlertContactWithGroupIdResponse Alibabacloud_Aiops20200806::Client::describeAlertContactWithGroupIdWithOptions(shared_ptr<DescribeAlertContactWithGroupIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->groupId)) {
    body->insert(pair<string, long>("GroupId", *request->groupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAlertContactWithGroupId"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAlertContactWithGroupIdResponse(callApi(params, req, runtime));
}

DescribeAlertContactWithGroupIdResponse Alibabacloud_Aiops20200806::Client::describeAlertContactWithGroupId(shared_ptr<DescribeAlertContactWithGroupIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAlertContactWithGroupIdWithOptions(request, runtime);
}

DescribeAlertDetailDataResponse Alibabacloud_Aiops20200806::Client::describeAlertDetailDataWithOptions(shared_ptr<DescribeAlertDetailDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->alertId)) {
    query->insert(pair<string, long>("AlertId", *request->alertId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    query->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAlertDetailData"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAlertDetailDataResponse(callApi(params, req, runtime));
}

DescribeAlertDetailDataResponse Alibabacloud_Aiops20200806::Client::describeAlertDetailData(shared_ptr<DescribeAlertDetailDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAlertDetailDataWithOptions(request, runtime);
}

DescribeAlertDetailTrendDataResponse Alibabacloud_Aiops20200806::Client::describeAlertDetailTrendDataWithOptions(shared_ptr<DescribeAlertDetailTrendDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->alertId)) {
    query->insert(pair<string, long>("AlertId", *request->alertId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->beginTime)) {
    query->insert(pair<string, long>("BeginTime", *request->beginTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    query->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAlertDetailTrendData"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAlertDetailTrendDataResponse(callApi(params, req, runtime));
}

DescribeAlertDetailTrendDataResponse Alibabacloud_Aiops20200806::Client::describeAlertDetailTrendData(shared_ptr<DescribeAlertDetailTrendDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAlertDetailTrendDataWithOptions(request, runtime);
}

DescribeAlertEventResponse Alibabacloud_Aiops20200806::Client::describeAlertEventWithOptions(shared_ptr<DescribeAlertEventRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->eventId)) {
    query->insert(pair<string, string>("EventId", *request->eventId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    query->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAlertEvent"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAlertEventResponse(callApi(params, req, runtime));
}

DescribeAlertEventResponse Alibabacloud_Aiops20200806::Client::describeAlertEvent(shared_ptr<DescribeAlertEventRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAlertEventWithOptions(request, runtime);
}

DescribeAlertFinalDataListResponse Alibabacloud_Aiops20200806::Client::describeAlertFinalDataListWithOptions(shared_ptr<DescribeAlertFinalDataListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->metricName)) {
    query->insert(pair<string, string>("MetricName", *request->metricName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    query->insert(pair<string, string>("ProductCode", *request->productCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    query->insert(pair<string, long>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uid)) {
    query->insert(pair<string, string>("Uid", *request->uid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAlertFinalDataList"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAlertFinalDataListResponse(callApi(params, req, runtime));
}

DescribeAlertFinalDataListResponse Alibabacloud_Aiops20200806::Client::describeAlertFinalDataList(shared_ptr<DescribeAlertFinalDataListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAlertFinalDataListWithOptions(request, runtime);
}

DescribeAlertResourceResponse Alibabacloud_Aiops20200806::Client::describeAlertResourceWithOptions(shared_ptr<DescribeAlertResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->eventId)) {
    query->insert(pair<string, string>("EventId", *request->eventId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    query->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAlertResource"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAlertResourceResponse(callApi(params, req, runtime));
}

DescribeAlertResourceResponse Alibabacloud_Aiops20200806::Client::describeAlertResource(shared_ptr<DescribeAlertResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAlertResourceWithOptions(request, runtime);
}

DescribeAlertSettingResponse Alibabacloud_Aiops20200806::Client::describeAlertSettingWithOptions(shared_ptr<DescribeAlertSettingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    body->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->customerName)) {
    body->insert(pair<string, string>("CustomerName", *request->customerName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    body->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchKeyword)) {
    body->insert(pair<string, string>("SearchKeyword", *request->searchKeyword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->settingStatus)) {
    body->insert(pair<string, string>("SettingStatus", *request->settingStatus));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->uid)) {
    body->insert(pair<string, long>("Uid", *request->uid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAlertSetting"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAlertSettingResponse(callApi(params, req, runtime));
}

DescribeAlertSettingResponse Alibabacloud_Aiops20200806::Client::describeAlertSetting(shared_ptr<DescribeAlertSettingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAlertSettingWithOptions(request, runtime);
}

DescribeAlertSettingByIdResponse Alibabacloud_Aiops20200806::Client::describeAlertSettingByIdWithOptions(shared_ptr<DescribeAlertSettingByIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->alertSettingId)) {
    body->insert(pair<string, long>("AlertSettingId", *request->alertSettingId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAlertSettingById"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAlertSettingByIdResponse(callApi(params, req, runtime));
}

DescribeAlertSettingByIdResponse Alibabacloud_Aiops20200806::Client::describeAlertSettingById(shared_ptr<DescribeAlertSettingByIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAlertSettingByIdWithOptions(request, runtime);
}

DescribeAllAlertContactResponse Alibabacloud_Aiops20200806::Client::describeAllAlertContactWithOptions(shared_ptr<DescribeAllAlertContactRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    query->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAllAlertContact"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAllAlertContactResponse(callApi(params, req, runtime));
}

DescribeAllAlertContactResponse Alibabacloud_Aiops20200806::Client::describeAllAlertContact(shared_ptr<DescribeAllAlertContactRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAllAlertContactWithOptions(request, runtime);
}

DescribeAllAlertContactGroupResponse Alibabacloud_Aiops20200806::Client::describeAllAlertContactGroupWithOptions(shared_ptr<DescribeAllAlertContactGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    body->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAllAlertContactGroup"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAllAlertContactGroupResponse(callApi(params, req, runtime));
}

DescribeAllAlertContactGroupResponse Alibabacloud_Aiops20200806::Client::describeAllAlertContactGroup(shared_ptr<DescribeAllAlertContactGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAllAlertContactGroupWithOptions(request, runtime);
}

DescribeAllBusinessGroupInfoResponse Alibabacloud_Aiops20200806::Client::describeAllBusinessGroupInfoWithOptions(shared_ptr<DescribeAllBusinessGroupInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    query->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAllBusinessGroupInfo"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAllBusinessGroupInfoResponse(callApi(params, req, runtime));
}

DescribeAllBusinessGroupInfoResponse Alibabacloud_Aiops20200806::Client::describeAllBusinessGroupInfo(shared_ptr<DescribeAllBusinessGroupInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAllBusinessGroupInfoWithOptions(request, runtime);
}

DescribeAllSceneModelResponse Alibabacloud_Aiops20200806::Client::describeAllSceneModelWithOptions(shared_ptr<DescribeAllSceneModelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    body->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAllSceneModel"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAllSceneModelResponse(callApi(params, req, runtime));
}

DescribeAllSceneModelResponse Alibabacloud_Aiops20200806::Client::describeAllSceneModel(shared_ptr<DescribeAllSceneModelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAllSceneModelWithOptions(request, runtime);
}

DescribeAnalysisDataListResponse Alibabacloud_Aiops20200806::Client::describeAnalysisDataListWithOptions(shared_ptr<DescribeAnalysisDataListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->metricExtend)) {
    query->insert(pair<string, string>("MetricExtend", *request->metricExtend));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->metricName)) {
    query->insert(pair<string, string>("MetricName", *request->metricName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    query->insert(pair<string, string>("ProductCode", *request->productCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    query->insert(pair<string, long>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAnalysisDataList"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAnalysisDataListResponse(callApi(params, req, runtime));
}

DescribeAnalysisDataListResponse Alibabacloud_Aiops20200806::Client::describeAnalysisDataList(shared_ptr<DescribeAnalysisDataListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAnalysisDataListWithOptions(request, runtime);
}

DescribeBusinessAnalysisDataListResponse Alibabacloud_Aiops20200806::Client::describeBusinessAnalysisDataListWithOptions(shared_ptr<DescribeBusinessAnalysisDataListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiPath)) {
    query->insert(pair<string, string>("ApiPath", *request->apiPath));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resource)) {
    query->insert(pair<string, string>("Resource", *request->resource));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    query->insert(pair<string, long>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeBusinessAnalysisDataList"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeBusinessAnalysisDataListResponse(callApi(params, req, runtime));
}

DescribeBusinessAnalysisDataListResponse Alibabacloud_Aiops20200806::Client::describeBusinessAnalysisDataList(shared_ptr<DescribeBusinessAnalysisDataListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeBusinessAnalysisDataListWithOptions(request, runtime);
}

DescribeDiagnoseResponse Alibabacloud_Aiops20200806::Client::describeDiagnoseWithOptions(shared_ptr<DescribeDiagnoseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->product)) {
    query->insert(pair<string, string>("Product", *request->product));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDiagnose"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDiagnoseResponse(callApi(params, req, runtime));
}

DescribeDiagnoseResponse Alibabacloud_Aiops20200806::Client::describeDiagnose(shared_ptr<DescribeDiagnoseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDiagnoseWithOptions(request, runtime);
}

DescribeDiagnoseResultResponse Alibabacloud_Aiops20200806::Client::describeDiagnoseResultWithOptions(shared_ptr<DescribeDiagnoseResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->checkId)) {
    query->insert(pair<string, string>("CheckId", *request->checkId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDiagnoseResult"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDiagnoseResultResponse(callApi(params, req, runtime));
}

DescribeDiagnoseResultResponse Alibabacloud_Aiops20200806::Client::describeDiagnoseResult(shared_ptr<DescribeDiagnoseResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDiagnoseResultWithOptions(request, runtime);
}

DescribeEventTopologyResponse Alibabacloud_Aiops20200806::Client::describeEventTopologyWithOptions(shared_ptr<DescribeEventTopologyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->eventId)) {
    query->insert(pair<string, string>("EventId", *request->eventId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    query->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeEventTopology"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeEventTopologyResponse(callApi(params, req, runtime));
}

DescribeEventTopologyResponse Alibabacloud_Aiops20200806::Client::describeEventTopology(shared_ptr<DescribeEventTopologyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeEventTopologyWithOptions(request, runtime);
}

DescribeEventTopologyDetailResponse Alibabacloud_Aiops20200806::Client::describeEventTopologyDetailWithOptions(shared_ptr<DescribeEventTopologyDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->eventId)) {
    query->insert(pair<string, string>("EventId", *request->eventId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    query->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->tagId)) {
    query->insert(pair<string, long>("TagId", *request->tagId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeEventTopologyDetail"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeEventTopologyDetailResponse(callApi(params, req, runtime));
}

DescribeEventTopologyDetailResponse Alibabacloud_Aiops20200806::Client::describeEventTopologyDetail(shared_ptr<DescribeEventTopologyDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeEventTopologyDetailWithOptions(request, runtime);
}

DescribeFcFunctionResponse Alibabacloud_Aiops20200806::Client::describeFcFunctionWithOptions(shared_ptr<DescribeFcFunctionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->limit)) {
    body->insert(pair<string, long>("Limit", *request->limit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    body->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    body->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prefix)) {
    body->insert(pair<string, string>("Prefix", *request->prefix));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionCode)) {
    body->insert(pair<string, string>("RegionCode", *request->regionCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceName)) {
    body->insert(pair<string, string>("ServiceName", *request->serviceName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeFcFunction"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeFcFunctionResponse(callApi(params, req, runtime));
}

DescribeFcFunctionResponse Alibabacloud_Aiops20200806::Client::describeFcFunction(shared_ptr<DescribeFcFunctionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeFcFunctionWithOptions(request, runtime);
}

DescribeFcRegionResponse Alibabacloud_Aiops20200806::Client::describeFcRegionWithOptions(shared_ptr<DescribeFcRegionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    body->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeFcRegion"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeFcRegionResponse(callApi(params, req, runtime));
}

DescribeFcRegionResponse Alibabacloud_Aiops20200806::Client::describeFcRegion(shared_ptr<DescribeFcRegionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeFcRegionWithOptions(request, runtime);
}

DescribeFcServiceResponse Alibabacloud_Aiops20200806::Client::describeFcServiceWithOptions(shared_ptr<DescribeFcServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->limit)) {
    body->insert(pair<string, long>("Limit", *request->limit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    body->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    body->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prefix)) {
    body->insert(pair<string, string>("Prefix", *request->prefix));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionCode)) {
    body->insert(pair<string, string>("RegionCode", *request->regionCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeFcService"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeFcServiceResponse(callApi(params, req, runtime));
}

DescribeFcServiceResponse Alibabacloud_Aiops20200806::Client::describeFcService(shared_ptr<DescribeFcServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeFcServiceWithOptions(request, runtime);
}

DescribeHistoryRiskResponse Alibabacloud_Aiops20200806::Client::describeHistoryRiskWithOptions(shared_ptr<DescribeHistoryRiskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    body->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lastFindTimeEnd)) {
    body->insert(pair<string, string>("LastFindTimeEnd", *request->lastFindTimeEnd));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lastFindTimeStart)) {
    body->insert(pair<string, string>("LastFindTimeStart", *request->lastFindTimeStart));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    body->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    body->insert(pair<string, string>("ProductCode", *request->productCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->severity)) {
    body->insert(pair<string, long>("Severity", *request->severity));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeHistoryRisk"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeHistoryRiskResponse(callApi(params, req, runtime));
}

DescribeHistoryRiskResponse Alibabacloud_Aiops20200806::Client::describeHistoryRisk(shared_ptr<DescribeHistoryRiskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeHistoryRiskWithOptions(request, runtime);
}

DescribeInspectionProgressResponse Alibabacloud_Aiops20200806::Client::describeInspectionProgressWithOptions(shared_ptr<DescribeInspectionProgressRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->inspectionRecordId)) {
    body->insert(pair<string, long>("InspectionRecordId", *request->inspectionRecordId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    body->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeInspectionProgress"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeInspectionProgressResponse(callApi(params, req, runtime));
}

DescribeInspectionProgressResponse Alibabacloud_Aiops20200806::Client::describeInspectionProgress(shared_ptr<DescribeInspectionProgressRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInspectionProgressWithOptions(request, runtime);
}

DescribeInspectionResourcesResponse Alibabacloud_Aiops20200806::Client::describeInspectionResourcesWithOptions(shared_ptr<DescribeInspectionResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->keyword)) {
    body->insert(pair<string, string>("Keyword", *request->keyword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    body->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    body->insert(pair<string, string>("ProductCode", *request->productCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeInspectionResources"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeInspectionResourcesResponse(callApi(params, req, runtime));
}

DescribeInspectionResourcesResponse Alibabacloud_Aiops20200806::Client::describeInspectionResources(shared_ptr<DescribeInspectionResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInspectionResourcesWithOptions(request, runtime);
}

DescribeInspectionResultResponse Alibabacloud_Aiops20200806::Client::describeInspectionResultWithOptions(shared_ptr<DescribeInspectionResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->continuousDays)) {
    body->insert(pair<string, long>("ContinuousDays", *request->continuousDays));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    body->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    body->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->riskCode)) {
    body->insert(pair<string, string>("RiskCode", *request->riskCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->severity)) {
    body->insert(pair<string, long>("Severity", *request->severity));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeInspectionResult"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeInspectionResultResponse(callApi(params, req, runtime));
}

DescribeInspectionResultResponse Alibabacloud_Aiops20200806::Client::describeInspectionResult(shared_ptr<DescribeInspectionResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInspectionResultWithOptions(request, runtime);
}

DescribeInspectionSettingsResponse Alibabacloud_Aiops20200806::Client::describeInspectionSettingsWithOptions(shared_ptr<DescribeInspectionSettingsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    body->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    body->insert(pair<string, string>("ProductCode", *request->productCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->productType)) {
    body->insert(pair<string, long>("ProductType", *request->productType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->riskDesc)) {
    body->insert(pair<string, string>("RiskDesc", *request->riskDesc));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->riskEnableStatus)) {
    body->insert(pair<string, long>("RiskEnableStatus", *request->riskEnableStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->riskName)) {
    body->insert(pair<string, string>("RiskName", *request->riskName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->riskType)) {
    body->insert(pair<string, long>("RiskType", *request->riskType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeInspectionSettings"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeInspectionSettingsResponse(callApi(params, req, runtime));
}

DescribeInspectionSettingsResponse Alibabacloud_Aiops20200806::Client::describeInspectionSettings(shared_ptr<DescribeInspectionSettingsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInspectionSettingsWithOptions(request, runtime);
}

DescribeInspectionThresholdResponse Alibabacloud_Aiops20200806::Client::describeInspectionThresholdWithOptions(shared_ptr<DescribeInspectionThresholdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    body->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->riskCode)) {
    body->insert(pair<string, string>("RiskCode", *request->riskCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeInspectionThreshold"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeInspectionThresholdResponse(callApi(params, req, runtime));
}

DescribeInspectionThresholdResponse Alibabacloud_Aiops20200806::Client::describeInspectionThreshold(shared_ptr<DescribeInspectionThresholdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInspectionThresholdWithOptions(request, runtime);
}

DescribeInspectionWhitelistsResponse Alibabacloud_Aiops20200806::Client::describeInspectionWhitelistsWithOptions(shared_ptr<DescribeInspectionWhitelistsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    body->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    body->insert(pair<string, string>("ProductCode", *request->productCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeInspectionWhitelists"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeInspectionWhitelistsResponse(callApi(params, req, runtime));
}

DescribeInspectionWhitelistsResponse Alibabacloud_Aiops20200806::Client::describeInspectionWhitelists(shared_ptr<DescribeInspectionWhitelistsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInspectionWhitelistsWithOptions(request, runtime);
}

DescribeInvocationResultsResponse Alibabacloud_Aiops20200806::Client::describeInvocationResultsWithOptions(shared_ptr<DescribeInvocationResultsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->commandId)) {
    query->insert(pair<string, string>("CommandId", *request->commandId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->invokeId)) {
    query->insert(pair<string, string>("InvokeId", *request->invokeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeInvocationResults"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeInvocationResultsResponse(callApi(params, req, runtime));
}

DescribeInvocationResultsResponse Alibabacloud_Aiops20200806::Client::describeInvocationResults(shared_ptr<DescribeInvocationResultsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeInvocationResultsWithOptions(request, runtime);
}

DescribeLastInspectionSummaryResponse Alibabacloud_Aiops20200806::Client::describeLastInspectionSummaryWithOptions(shared_ptr<DescribeLastInspectionSummaryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    body->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeLastInspectionSummary"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeLastInspectionSummaryResponse(callApi(params, req, runtime));
}

DescribeLastInspectionSummaryResponse Alibabacloud_Aiops20200806::Client::describeLastInspectionSummary(shared_ptr<DescribeLastInspectionSummaryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLastInspectionSummaryWithOptions(request, runtime);
}

DescribeModelRelationScenesResponse Alibabacloud_Aiops20200806::Client::describeModelRelationScenesWithOptions(shared_ptr<DescribeModelRelationScenesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->modelId)) {
    body->insert(pair<string, long>("ModelId", *request->modelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    body->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeModelRelationScenes"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeModelRelationScenesResponse(callApi(params, req, runtime));
}

DescribeModelRelationScenesResponse Alibabacloud_Aiops20200806::Client::describeModelRelationScenes(shared_ptr<DescribeModelRelationScenesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeModelRelationScenesWithOptions(request, runtime);
}

DescribeProductRiskPieResponse Alibabacloud_Aiops20200806::Client::describeProductRiskPieWithOptions(shared_ptr<DescribeProductRiskPieRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    body->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeProductRiskPie"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeProductRiskPieResponse(callApi(params, req, runtime));
}

DescribeProductRiskPieResponse Alibabacloud_Aiops20200806::Client::describeProductRiskPie(shared_ptr<DescribeProductRiskPieRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeProductRiskPieWithOptions(request, runtime);
}

DescribeReportDataResponse Alibabacloud_Aiops20200806::Client::describeReportDataWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeReportData"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeReportDataResponse(callApi(params, req, runtime));
}

DescribeReportDataResponse Alibabacloud_Aiops20200806::Client::describeReportData() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeReportDataWithOptions(runtime);
}

DescribeReportEmailConfigsResponse Alibabacloud_Aiops20200806::Client::describeReportEmailConfigsWithOptions(shared_ptr<DescribeReportEmailConfigsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    body->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeReportEmailConfigs"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeReportEmailConfigsResponse(callApi(params, req, runtime));
}

DescribeReportEmailConfigsResponse Alibabacloud_Aiops20200806::Client::describeReportEmailConfigs(shared_ptr<DescribeReportEmailConfigsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeReportEmailConfigsWithOptions(request, runtime);
}

DescribeReportSubscriptionsResponse Alibabacloud_Aiops20200806::Client::describeReportSubscriptionsWithOptions(shared_ptr<DescribeReportSubscriptionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    body->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeReportSubscriptions"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeReportSubscriptionsResponse(callApi(params, req, runtime));
}

DescribeReportSubscriptionsResponse Alibabacloud_Aiops20200806::Client::describeReportSubscriptions(shared_ptr<DescribeReportSubscriptionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeReportSubscriptionsWithOptions(request, runtime);
}

DescribeResourceMetricResponse Alibabacloud_Aiops20200806::Client::describeResourceMetricWithOptions(shared_ptr<DescribeResourceMetricRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->eventId)) {
    query->insert(pair<string, string>("EventId", *request->eventId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->firstLoad)) {
    query->insert(pair<string, long>("FirstLoad", *request->firstLoad));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    query->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    query->insert(pair<string, string>("ProductCode", *request->productCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeResourceMetric"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeResourceMetricResponse(callApi(params, req, runtime));
}

DescribeResourceMetricResponse Alibabacloud_Aiops20200806::Client::describeResourceMetric(shared_ptr<DescribeResourceMetricRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeResourceMetricWithOptions(request, runtime);
}

DescribeRiskResponse Alibabacloud_Aiops20200806::Client::describeRiskWithOptions(shared_ptr<DescribeRiskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    query->insert(pair<string, long>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->types)) {
    query->insert(pair<string, string>("Types", *request->types));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->uid)) {
    query->insert(pair<string, long>("Uid", *request->uid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRisk"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRiskResponse(callApi(params, req, runtime));
}

DescribeRiskResponse Alibabacloud_Aiops20200806::Client::describeRisk(shared_ptr<DescribeRiskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRiskWithOptions(request, runtime);
}

DescribeRiskConfigResponse Alibabacloud_Aiops20200806::Client::describeRiskConfigWithOptions(shared_ptr<DescribeRiskConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    body->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRiskConfig"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRiskConfigResponse(callApi(params, req, runtime));
}

DescribeRiskConfigResponse Alibabacloud_Aiops20200806::Client::describeRiskConfig(shared_ptr<DescribeRiskConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRiskConfigWithOptions(request, runtime);
}

DescribeRiskEventDetailsResponse Alibabacloud_Aiops20200806::Client::describeRiskEventDetailsWithOptions(shared_ptr<DescribeRiskEventDetailsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRiskEventDetails"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRiskEventDetailsResponse(callApi(params, req, runtime));
}

DescribeRiskEventDetailsResponse Alibabacloud_Aiops20200806::Client::describeRiskEventDetails(shared_ptr<DescribeRiskEventDetailsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRiskEventDetailsWithOptions(request, runtime);
}

DescribeRiskEventListResponse Alibabacloud_Aiops20200806::Client::describeRiskEventListWithOptions(shared_ptr<DescribeRiskEventListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRiskEventList"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRiskEventListResponse(callApi(params, req, runtime));
}

DescribeRiskEventListResponse Alibabacloud_Aiops20200806::Client::describeRiskEventList(shared_ptr<DescribeRiskEventListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRiskEventListWithOptions(request, runtime);
}

DescribeRiskEventTopologyResponse Alibabacloud_Aiops20200806::Client::describeRiskEventTopologyWithOptions(shared_ptr<DescribeRiskEventTopologyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->eventId)) {
    query->insert(pair<string, long>("EventId", *request->eventId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    query->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRiskEventTopology"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRiskEventTopologyResponse(callApi(params, req, runtime));
}

DescribeRiskEventTopologyResponse Alibabacloud_Aiops20200806::Client::describeRiskEventTopology(shared_ptr<DescribeRiskEventTopologyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRiskEventTopologyWithOptions(request, runtime);
}

DescribeRiskResultSeveritySummaryResponse Alibabacloud_Aiops20200806::Client::describeRiskResultSeveritySummaryWithOptions(shared_ptr<DescribeRiskResultSeveritySummaryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->continuousDays)) {
    body->insert(pair<string, long>("ContinuousDays", *request->continuousDays));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    body->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    body->insert(pair<string, string>("ProductCode", *request->productCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRiskResultSeveritySummary"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRiskResultSeveritySummaryResponse(callApi(params, req, runtime));
}

DescribeRiskResultSeveritySummaryResponse Alibabacloud_Aiops20200806::Client::describeRiskResultSeveritySummary(shared_ptr<DescribeRiskResultSeveritySummaryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRiskResultSeveritySummaryWithOptions(request, runtime);
}

DescribeRiskResultStatisticalResponse Alibabacloud_Aiops20200806::Client::describeRiskResultStatisticalWithOptions(shared_ptr<DescribeRiskResultStatisticalRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->continuousDays)) {
    body->insert(pair<string, long>("ContinuousDays", *request->continuousDays));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    body->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    body->insert(pair<string, string>("ProductCode", *request->productCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRiskResultStatistical"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRiskResultStatisticalResponse(callApi(params, req, runtime));
}

DescribeRiskResultStatisticalResponse Alibabacloud_Aiops20200806::Client::describeRiskResultStatistical(shared_ptr<DescribeRiskResultStatisticalRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRiskResultStatisticalWithOptions(request, runtime);
}

DescribeSceneDetailResponse Alibabacloud_Aiops20200806::Client::describeSceneDetailWithOptions(shared_ptr<DescribeSceneDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    body->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->sceneId)) {
    body->insert(pair<string, long>("SceneId", *request->sceneId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSceneDetail"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSceneDetailResponse(callApi(params, req, runtime));
}

DescribeSceneDetailResponse Alibabacloud_Aiops20200806::Client::describeSceneDetail(shared_ptr<DescribeSceneDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSceneDetailWithOptions(request, runtime);
}

DescribeSceneModelByTypeResponse Alibabacloud_Aiops20200806::Client::describeSceneModelByTypeWithOptions(shared_ptr<DescribeSceneModelByTypeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->modelType)) {
    body->insert(pair<string, long>("ModelType", *request->modelType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    body->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSceneModelByType"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSceneModelByTypeResponse(callApi(params, req, runtime));
}

DescribeSceneModelByTypeResponse Alibabacloud_Aiops20200806::Client::describeSceneModelByType(shared_ptr<DescribeSceneModelByTypeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSceneModelByTypeWithOptions(request, runtime);
}

DescribeSceneModelDetailResponse Alibabacloud_Aiops20200806::Client::describeSceneModelDetailWithOptions(shared_ptr<DescribeSceneModelDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->modelId)) {
    body->insert(pair<string, long>("ModelId", *request->modelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    body->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSceneModelDetail"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSceneModelDetailResponse(callApi(params, req, runtime));
}

DescribeSceneModelDetailResponse Alibabacloud_Aiops20200806::Client::describeSceneModelDetail(shared_ptr<DescribeSceneModelDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSceneModelDetailWithOptions(request, runtime);
}

DescribeSceneModelVersionHistoryResponse Alibabacloud_Aiops20200806::Client::describeSceneModelVersionHistoryWithOptions(shared_ptr<DescribeSceneModelVersionHistoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->modelId)) {
    body->insert(pair<string, long>("ModelId", *request->modelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    body->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSceneModelVersionHistory"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSceneModelVersionHistoryResponse(callApi(params, req, runtime));
}

DescribeSceneModelVersionHistoryResponse Alibabacloud_Aiops20200806::Client::describeSceneModelVersionHistory(shared_ptr<DescribeSceneModelVersionHistoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSceneModelVersionHistoryWithOptions(request, runtime);
}

DescribeSceneModelsResponse Alibabacloud_Aiops20200806::Client::describeSceneModelsWithOptions(shared_ptr<DescribeSceneModelsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->applyStatus)) {
    body->insert(pair<string, long>("ApplyStatus", *request->applyStatus));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    body->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modelName)) {
    body->insert(pair<string, string>("ModelName", *request->modelName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->modelType)) {
    body->insert(pair<string, long>("ModelType", *request->modelType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    body->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSceneModels"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSceneModelsResponse(callApi(params, req, runtime));
}

DescribeSceneModelsResponse Alibabacloud_Aiops20200806::Client::describeSceneModels(shared_ptr<DescribeSceneModelsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSceneModelsWithOptions(request, runtime);
}

DescribeSceneSystemModelResponse Alibabacloud_Aiops20200806::Client::describeSceneSystemModelWithOptions(shared_ptr<DescribeSceneSystemModelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    body->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modelName)) {
    body->insert(pair<string, string>("ModelName", *request->modelName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->modelStatus)) {
    body->insert(pair<string, long>("ModelStatus", *request->modelStatus));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->modelType)) {
    body->insert(pair<string, long>("ModelType", *request->modelType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    body->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->typeId_)) {
    body->insert(pair<string, long>("TypeId_", *request->typeId_));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeSceneSystemModel"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSceneSystemModelResponse(callApi(params, req, runtime));
}

DescribeSceneSystemModelResponse Alibabacloud_Aiops20200806::Client::describeSceneSystemModel(shared_ptr<DescribeSceneSystemModelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSceneSystemModelWithOptions(request, runtime);
}

DescribeScenesResponse Alibabacloud_Aiops20200806::Client::describeScenesWithOptions(shared_ptr<DescribeScenesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    body->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->flowName)) {
    body->insert(pair<string, string>("FlowName", *request->flowName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->modelId)) {
    body->insert(pair<string, long>("ModelId", *request->modelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    body->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sceneName)) {
    body->insert(pair<string, string>("SceneName", *request->sceneName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->sceneStatus)) {
    body->insert(pair<string, long>("SceneStatus", *request->sceneStatus));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeScenes"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeScenesResponse(callApi(params, req, runtime));
}

DescribeScenesResponse Alibabacloud_Aiops20200806::Client::describeScenes(shared_ptr<DescribeScenesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeScenesWithOptions(request, runtime);
}

DescribeStatisticalDataByProductResponse Alibabacloud_Aiops20200806::Client::describeStatisticalDataByProductWithOptions(shared_ptr<DescribeStatisticalDataByProductRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    body->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeStatisticalDataByProduct"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeStatisticalDataByProductResponse(callApi(params, req, runtime));
}

DescribeStatisticalDataByProductResponse Alibabacloud_Aiops20200806::Client::describeStatisticalDataByProduct(shared_ptr<DescribeStatisticalDataByProductRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeStatisticalDataByProductWithOptions(request, runtime);
}

DescribeStatisticalDataByRiskCodeResponse Alibabacloud_Aiops20200806::Client::describeStatisticalDataByRiskCodeWithOptions(shared_ptr<DescribeStatisticalDataByRiskCodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    body->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeStatisticalDataByRiskCode"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeStatisticalDataByRiskCodeResponse(callApi(params, req, runtime));
}

DescribeStatisticalDataByRiskCodeResponse Alibabacloud_Aiops20200806::Client::describeStatisticalDataByRiskCode(shared_ptr<DescribeStatisticalDataByRiskCodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeStatisticalDataByRiskCodeWithOptions(request, runtime);
}

DescribeWhitelistResourcesResponse Alibabacloud_Aiops20200806::Client::describeWhitelistResourcesWithOptions(shared_ptr<DescribeWhitelistResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->keyword)) {
    body->insert(pair<string, string>("Keyword", *request->keyword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    body->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    body->insert(pair<string, string>("ProductCode", *request->productCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeWhitelistResources"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeWhitelistResourcesResponse(callApi(params, req, runtime));
}

DescribeWhitelistResourcesResponse Alibabacloud_Aiops20200806::Client::describeWhitelistResources(shared_ptr<DescribeWhitelistResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeWhitelistResourcesWithOptions(request, runtime);
}

EndScriptListResponse Alibabacloud_Aiops20200806::Client::endScriptListWithOptions(shared_ptr<EndScriptListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EndScriptList"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EndScriptListResponse(callApi(params, req, runtime));
}

EndScriptListResponse Alibabacloud_Aiops20200806::Client::endScriptList(shared_ptr<EndScriptListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return endScriptListWithOptions(request, runtime);
}

FeedbackAlertAlgorithmResponse Alibabacloud_Aiops20200806::Client::feedbackAlertAlgorithmWithOptions(shared_ptr<FeedbackAlertAlgorithmRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->alertId)) {
    query->insert(pair<string, long>("AlertId", *request->alertId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->algorithmAccurateDescribe)) {
    query->insert(pair<string, string>("AlgorithmAccurateDescribe", *request->algorithmAccurateDescribe));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->algorithmAccurateState)) {
    query->insert(pair<string, long>("AlgorithmAccurateState", *request->algorithmAccurateState));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->feedbackType)) {
    query->insert(pair<string, long>("FeedbackType", *request->feedbackType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    query->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("FeedbackAlertAlgorithm"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return FeedbackAlertAlgorithmResponse(callApi(params, req, runtime));
}

FeedbackAlertAlgorithmResponse Alibabacloud_Aiops20200806::Client::feedbackAlertAlgorithm(shared_ptr<FeedbackAlertAlgorithmRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return feedbackAlertAlgorithmWithOptions(request, runtime);
}

GetAiopsEventListResponse Alibabacloud_Aiops20200806::Client::getAiopsEventListWithOptions(shared_ptr<GetAiopsEventListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->businessGroupId)) {
    query->insert(pair<string, string>("BusinessGroupId", *request->businessGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->businessGroupName)) {
    query->insert(pair<string, string>("BusinessGroupName", *request->businessGroupName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->eventType)) {
    query->insert(pair<string, long>("EventType", *request->eventType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventUniqueId)) {
    query->insert(pair<string, string>("EventUniqueId", *request->eventUniqueId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->feedbackStatus)) {
    query->insert(pair<string, long>("FeedbackStatus", *request->feedbackStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    query->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->predictionState)) {
    query->insert(pair<string, long>("PredictionState", *request->predictionState));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->severity)) {
    query->insert(pair<string, long>("Severity", *request->severity));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->status)) {
    query->insert(pair<string, long>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->uid)) {
    query->insert(pair<string, long>("Uid", *request->uid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAiopsEventList"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAiopsEventListResponse(callApi(params, req, runtime));
}

GetAiopsEventListResponse Alibabacloud_Aiops20200806::Client::getAiopsEventList(shared_ptr<GetAiopsEventListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAiopsEventListWithOptions(request, runtime);
}

GetAiopsEventNewListResponse Alibabacloud_Aiops20200806::Client::getAiopsEventNewListWithOptions(shared_ptr<GetAiopsEventNewListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    query->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->uid)) {
    query->insert(pair<string, long>("Uid", *request->uid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAiopsEventNewList"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAiopsEventNewListResponse(callApi(params, req, runtime));
}

GetAiopsEventNewListResponse Alibabacloud_Aiops20200806::Client::getAiopsEventNewList(shared_ptr<GetAiopsEventNewListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAiopsEventNewListWithOptions(request, runtime);
}

GetAlertDetailTrendDataResponse Alibabacloud_Aiops20200806::Client::getAlertDetailTrendDataWithOptions(shared_ptr<GetAlertDetailTrendDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->abnormalId)) {
    query->insert(pair<string, long>("AbnormalId", *request->abnormalId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->alertId)) {
    query->insert(pair<string, long>("AlertId", *request->alertId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->beginTime)) {
    query->insert(pair<string, long>("BeginTime", *request->beginTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    query->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAlertDetailTrendData"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAlertDetailTrendDataResponse(callApi(params, req, runtime));
}

GetAlertDetailTrendDataResponse Alibabacloud_Aiops20200806::Client::getAlertDetailTrendData(shared_ptr<GetAlertDetailTrendDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAlertDetailTrendDataWithOptions(request, runtime);
}

GetAlertListResponse Alibabacloud_Aiops20200806::Client::getAlertListWithOptions(shared_ptr<GetAlertListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aliUid)) {
    query->insert(pair<string, string>("AliUid", *request->aliUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventId)) {
    query->insert(pair<string, string>("EventId", *request->eventId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    query->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAlertList"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAlertListResponse(callApi(params, req, runtime));
}

GetAlertListResponse Alibabacloud_Aiops20200806::Client::getAlertList(shared_ptr<GetAlertListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAlertListWithOptions(request, runtime);
}

GetAlertTrentResponse Alibabacloud_Aiops20200806::Client::getAlertTrentWithOptions(shared_ptr<GetAlertTrentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aliUid)) {
    query->insert(pair<string, string>("AliUid", *request->aliUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventId)) {
    query->insert(pair<string, string>("EventId", *request->eventId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    query->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAlertTrent"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAlertTrentResponse(callApi(params, req, runtime));
}

GetAlertTrentResponse Alibabacloud_Aiops20200806::Client::getAlertTrent(shared_ptr<GetAlertTrentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAlertTrentWithOptions(request, runtime);
}

GetAlgorithmResponse Alibabacloud_Aiops20200806::Client::getAlgorithmWithOptions(shared_ptr<GetAlgorithmRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->expandInformation)) {
    query->insert(pair<string, string>("ExpandInformation", *request->expandInformation));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->metricName)) {
    query->insert(pair<string, string>("MetricName", *request->metricName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    query->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAlgorithm"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAlgorithmResponse(callApi(params, req, runtime));
}

GetAlgorithmResponse Alibabacloud_Aiops20200806::Client::getAlgorithm(shared_ptr<GetAlgorithmRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAlgorithmWithOptions(request, runtime);
}

GetAlgorithmConfigResponse Alibabacloud_Aiops20200806::Client::getAlgorithmConfigWithOptions(shared_ptr<GetAlgorithmConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->algorithmTypeCode)) {
    query->insert(pair<string, string>("AlgorithmTypeCode", *request->algorithmTypeCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    query->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAlgorithmConfig"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAlgorithmConfigResponse(callApi(params, req, runtime));
}

GetAlgorithmConfigResponse Alibabacloud_Aiops20200806::Client::getAlgorithmConfig(shared_ptr<GetAlgorithmConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAlgorithmConfigWithOptions(request, runtime);
}

GetAlgorithmDataResponse Alibabacloud_Aiops20200806::Client::getAlgorithmDataWithOptions(shared_ptr<GetAlgorithmDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAlgorithmData"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAlgorithmDataResponse(callApi(params, req, runtime));
}

GetAlgorithmDataResponse Alibabacloud_Aiops20200806::Client::getAlgorithmData(shared_ptr<GetAlgorithmDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAlgorithmDataWithOptions(request, runtime);
}

GetAlgorithmDetailsResponse Alibabacloud_Aiops20200806::Client::getAlgorithmDetailsWithOptions(shared_ptr<GetAlgorithmDetailsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    query->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAlgorithmDetails"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAlgorithmDetailsResponse(callApi(params, req, runtime));
}

GetAlgorithmDetailsResponse Alibabacloud_Aiops20200806::Client::getAlgorithmDetails(shared_ptr<GetAlgorithmDetailsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAlgorithmDetailsWithOptions(request, runtime);
}

GetAlgorithmForecastDataResponse Alibabacloud_Aiops20200806::Client::getAlgorithmForecastDataWithOptions(shared_ptr<GetAlgorithmForecastDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aliUid)) {
    query->insert(pair<string, string>("AliUid", *request->aliUid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    query->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    query->insert(pair<string, long>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAlgorithmForecastData"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAlgorithmForecastDataResponse(callApi(params, req, runtime));
}

GetAlgorithmForecastDataResponse Alibabacloud_Aiops20200806::Client::getAlgorithmForecastData(shared_ptr<GetAlgorithmForecastDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAlgorithmForecastDataWithOptions(request, runtime);
}

GetAlgorithmForecastDetailsResponse Alibabacloud_Aiops20200806::Client::getAlgorithmForecastDetailsWithOptions(shared_ptr<GetAlgorithmForecastDetailsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aliUid)) {
    query->insert(pair<string, string>("AliUid", *request->aliUid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    query->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAlgorithmForecastDetails"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAlgorithmForecastDetailsResponse(callApi(params, req, runtime));
}

GetAlgorithmForecastDetailsResponse Alibabacloud_Aiops20200806::Client::getAlgorithmForecastDetails(shared_ptr<GetAlgorithmForecastDetailsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAlgorithmForecastDetailsWithOptions(request, runtime);
}

GetAlgorithmListResponse Alibabacloud_Aiops20200806::Client::getAlgorithmListWithOptions(shared_ptr<GetAlgorithmListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAlgorithmList"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAlgorithmListResponse(callApi(params, req, runtime));
}

GetAlgorithmListResponse Alibabacloud_Aiops20200806::Client::getAlgorithmList(shared_ptr<GetAlgorithmListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAlgorithmListWithOptions(request, runtime);
}

GetAllAlgorithmConfigResponse Alibabacloud_Aiops20200806::Client::getAllAlgorithmConfigWithOptions(shared_ptr<GetAllAlgorithmConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    query->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAllAlgorithmConfig"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAllAlgorithmConfigResponse(callApi(params, req, runtime));
}

GetAllAlgorithmConfigResponse Alibabacloud_Aiops20200806::Client::getAllAlgorithmConfig(shared_ptr<GetAllAlgorithmConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAllAlgorithmConfigWithOptions(request, runtime);
}

GetAllTagResourceNumListResponse Alibabacloud_Aiops20200806::Client::getAllTagResourceNumListWithOptions(shared_ptr<GetAllTagResourceNumListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAllTagResourceNumList"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAllTagResourceNumListResponse(callApi(params, req, runtime));
}

GetAllTagResourceNumListResponse Alibabacloud_Aiops20200806::Client::getAllTagResourceNumList(shared_ptr<GetAllTagResourceNumListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAllTagResourceNumListWithOptions(request, runtime);
}

GetAnalysisProcessResponse Alibabacloud_Aiops20200806::Client::getAnalysisProcessWithOptions(shared_ptr<GetAnalysisProcessRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAnalysisProcess"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAnalysisProcessResponse(callApi(params, req, runtime));
}

GetAnalysisProcessResponse Alibabacloud_Aiops20200806::Client::getAnalysisProcess(shared_ptr<GetAnalysisProcessRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAnalysisProcessWithOptions(request, runtime);
}

GetAuthorizationResponse Alibabacloud_Aiops20200806::Client::getAuthorizationWithOptions(shared_ptr<GetAuthorizationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAuthorization"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAuthorizationResponse(callApi(params, req, runtime));
}

GetAuthorizationResponse Alibabacloud_Aiops20200806::Client::getAuthorization(shared_ptr<GetAuthorizationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAuthorizationWithOptions(request, runtime);
}

GetAvgRepairTimeResponse Alibabacloud_Aiops20200806::Client::getAvgRepairTimeWithOptions(shared_ptr<GetAvgRepairTimeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    query->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->uid)) {
    query->insert(pair<string, long>("Uid", *request->uid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAvgRepairTime"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAvgRepairTimeResponse(callApi(params, req, runtime));
}

GetAvgRepairTimeResponse Alibabacloud_Aiops20200806::Client::getAvgRepairTime(shared_ptr<GetAvgRepairTimeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAvgRepairTimeWithOptions(request, runtime);
}

GetBackScriptListResponse Alibabacloud_Aiops20200806::Client::getBackScriptListWithOptions(shared_ptr<GetBackScriptListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetBackScriptList"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetBackScriptListResponse(callApi(params, req, runtime));
}

GetBackScriptListResponse Alibabacloud_Aiops20200806::Client::getBackScriptList(shared_ptr<GetBackScriptListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getBackScriptListWithOptions(request, runtime);
}

GetBusinessGroupResponse Alibabacloud_Aiops20200806::Client::getBusinessGroupWithOptions(shared_ptr<GetBusinessGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetBusinessGroup"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetBusinessGroupResponse(callApi(params, req, runtime));
}

GetBusinessGroupResponse Alibabacloud_Aiops20200806::Client::getBusinessGroup(shared_ptr<GetBusinessGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getBusinessGroupWithOptions(request, runtime);
}

GetBusinessGroupAllResponse Alibabacloud_Aiops20200806::Client::getBusinessGroupAllWithOptions(shared_ptr<GetBusinessGroupAllRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->businessGroupName)) {
    query->insert(pair<string, string>("BusinessGroupName", *request->businessGroupName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    query->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->status)) {
    query->insert(pair<string, long>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetBusinessGroupAll"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetBusinessGroupAllResponse(callApi(params, req, runtime));
}

GetBusinessGroupAllResponse Alibabacloud_Aiops20200806::Client::getBusinessGroupAll(shared_ptr<GetBusinessGroupAllRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getBusinessGroupAllWithOptions(request, runtime);
}

GetBusinessGroupIndexResponse Alibabacloud_Aiops20200806::Client::getBusinessGroupIndexWithOptions(shared_ptr<GetBusinessGroupIndexRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetBusinessGroupIndex"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetBusinessGroupIndexResponse(callApi(params, req, runtime));
}

GetBusinessGroupIndexResponse Alibabacloud_Aiops20200806::Client::getBusinessGroupIndex(shared_ptr<GetBusinessGroupIndexRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getBusinessGroupIndexWithOptions(request, runtime);
}

GetBusinessGroupInfoResponse Alibabacloud_Aiops20200806::Client::getBusinessGroupInfoWithOptions(shared_ptr<GetBusinessGroupInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->businessGroupId)) {
    query->insert(pair<string, string>("BusinessGroupId", *request->businessGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    query->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetBusinessGroupInfo"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetBusinessGroupInfoResponse(callApi(params, req, runtime));
}

GetBusinessGroupInfoResponse Alibabacloud_Aiops20200806::Client::getBusinessGroupInfo(shared_ptr<GetBusinessGroupInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getBusinessGroupInfoWithOptions(request, runtime);
}

GetBusinessGroupOverviewListResponse Alibabacloud_Aiops20200806::Client::getBusinessGroupOverviewListWithOptions(shared_ptr<GetBusinessGroupOverviewListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aliUid)) {
    query->insert(pair<string, string>("AliUid", *request->aliUid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    query->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetBusinessGroupOverviewList"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetBusinessGroupOverviewListResponse(callApi(params, req, runtime));
}

GetBusinessGroupOverviewListResponse Alibabacloud_Aiops20200806::Client::getBusinessGroupOverviewList(shared_ptr<GetBusinessGroupOverviewListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getBusinessGroupOverviewListWithOptions(request, runtime);
}

GetBusinessLogAlertDetailResponse Alibabacloud_Aiops20200806::Client::getBusinessLogAlertDetailWithOptions(shared_ptr<GetBusinessLogAlertDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    query->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetBusinessLogAlertDetail"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetBusinessLogAlertDetailResponse(callApi(params, req, runtime));
}

GetBusinessLogAlertDetailResponse Alibabacloud_Aiops20200806::Client::getBusinessLogAlertDetail(shared_ptr<GetBusinessLogAlertDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getBusinessLogAlertDetailWithOptions(request, runtime);
}

GetBusinessLogAlertListResponse Alibabacloud_Aiops20200806::Client::getBusinessLogAlertListWithOptions(shared_ptr<GetBusinessLogAlertListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->eventId)) {
    query->insert(pair<string, long>("EventId", *request->eventId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    query->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetBusinessLogAlertList"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetBusinessLogAlertListResponse(callApi(params, req, runtime));
}

GetBusinessLogAlertListResponse Alibabacloud_Aiops20200806::Client::getBusinessLogAlertList(shared_ptr<GetBusinessLogAlertListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getBusinessLogAlertListWithOptions(request, runtime);
}

GetBusinessLogAlertTopNResponse Alibabacloud_Aiops20200806::Client::getBusinessLogAlertTopNWithOptions(shared_ptr<GetBusinessLogAlertTopNRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->alertType)) {
    query->insert(pair<string, string>("AlertType", *request->alertType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventId)) {
    query->insert(pair<string, string>("EventId", *request->eventId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    query->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->topNum)) {
    query->insert(pair<string, long>("TopNum", *request->topNum));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetBusinessLogAlertTopN"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetBusinessLogAlertTopNResponse(callApi(params, req, runtime));
}

GetBusinessLogAlertTopNResponse Alibabacloud_Aiops20200806::Client::getBusinessLogAlertTopN(shared_ptr<GetBusinessLogAlertTopNRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getBusinessLogAlertTopNWithOptions(request, runtime);
}

GetBusinessMetricAlertDetailListResponse Alibabacloud_Aiops20200806::Client::getBusinessMetricAlertDetailListWithOptions(shared_ptr<GetBusinessMetricAlertDetailListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->eventId)) {
    query->insert(pair<string, string>("EventId", *request->eventId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->metricName)) {
    query->insert(pair<string, string>("MetricName", *request->metricName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    query->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetBusinessMetricAlertDetailList"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetBusinessMetricAlertDetailListResponse(callApi(params, req, runtime));
}

GetBusinessMetricAlertDetailListResponse Alibabacloud_Aiops20200806::Client::getBusinessMetricAlertDetailList(shared_ptr<GetBusinessMetricAlertDetailListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getBusinessMetricAlertDetailListWithOptions(request, runtime);
}

GetBusinessMetricAlertListResponse Alibabacloud_Aiops20200806::Client::getBusinessMetricAlertListWithOptions(shared_ptr<GetBusinessMetricAlertListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->eventId)) {
    query->insert(pair<string, string>("EventId", *request->eventId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    query->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetBusinessMetricAlertList"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetBusinessMetricAlertListResponse(callApi(params, req, runtime));
}

GetBusinessMetricAlertListResponse Alibabacloud_Aiops20200806::Client::getBusinessMetricAlertList(shared_ptr<GetBusinessMetricAlertListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getBusinessMetricAlertListWithOptions(request, runtime);
}

GetBusinessMetricAlertTopNResponse Alibabacloud_Aiops20200806::Client::getBusinessMetricAlertTopNWithOptions(shared_ptr<GetBusinessMetricAlertTopNRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->alertType)) {
    query->insert(pair<string, string>("AlertType", *request->alertType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventId)) {
    query->insert(pair<string, string>("EventId", *request->eventId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    query->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->topNum)) {
    query->insert(pair<string, long>("TopNum", *request->topNum));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetBusinessMetricAlertTopN"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetBusinessMetricAlertTopNResponse(callApi(params, req, runtime));
}

GetBusinessMetricAlertTopNResponse Alibabacloud_Aiops20200806::Client::getBusinessMetricAlertTopN(shared_ptr<GetBusinessMetricAlertTopNRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getBusinessMetricAlertTopNWithOptions(request, runtime);
}

GetBusinessMetricAllListResponse Alibabacloud_Aiops20200806::Client::getBusinessMetricAllListWithOptions(shared_ptr<GetBusinessMetricAllListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    query->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetBusinessMetricAllList"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetBusinessMetricAllListResponse(callApi(params, req, runtime));
}

GetBusinessMetricAllListResponse Alibabacloud_Aiops20200806::Client::getBusinessMetricAllList(shared_ptr<GetBusinessMetricAllListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getBusinessMetricAllListWithOptions(request, runtime);
}

GetBusinessMetricForecastListResponse Alibabacloud_Aiops20200806::Client::getBusinessMetricForecastListWithOptions(shared_ptr<GetBusinessMetricForecastListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetBusinessMetricForecastList"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetBusinessMetricForecastListResponse(callApi(params, req, runtime));
}

GetBusinessMetricForecastListResponse Alibabacloud_Aiops20200806::Client::getBusinessMetricForecastList(shared_ptr<GetBusinessMetricForecastListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getBusinessMetricForecastListWithOptions(request, runtime);
}

GetBusinessMetricResourceByMetricIdResponse Alibabacloud_Aiops20200806::Client::getBusinessMetricResourceByMetricIdWithOptions(shared_ptr<GetBusinessMetricResourceByMetricIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    query->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetBusinessMetricResourceByMetricId"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetBusinessMetricResourceByMetricIdResponse(callApi(params, req, runtime));
}

GetBusinessMetricResourceByMetricIdResponse Alibabacloud_Aiops20200806::Client::getBusinessMetricResourceByMetricId(shared_ptr<GetBusinessMetricResourceByMetricIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getBusinessMetricResourceByMetricIdWithOptions(request, runtime);
}

GetBusinessMetricSceneListResponse Alibabacloud_Aiops20200806::Client::getBusinessMetricSceneListWithOptions(shared_ptr<GetBusinessMetricSceneListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    query->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetBusinessMetricSceneList"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetBusinessMetricSceneListResponse(callApi(params, req, runtime));
}

GetBusinessMetricSceneListResponse Alibabacloud_Aiops20200806::Client::getBusinessMetricSceneList(shared_ptr<GetBusinessMetricSceneListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getBusinessMetricSceneListWithOptions(request, runtime);
}

GetCidInfoResponse Alibabacloud_Aiops20200806::Client::getCidInfoWithOptions(shared_ptr<GetCidInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->uid)) {
    query->insert(pair<string, long>("Uid", *request->uid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetCidInfo"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetCidInfoResponse(callApi(params, req, runtime));
}

GetCidInfoResponse Alibabacloud_Aiops20200806::Client::getCidInfo(shared_ptr<GetCidInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getCidInfoWithOptions(request, runtime);
}

GetCloudAllResourceListResponse Alibabacloud_Aiops20200806::Client::getCloudAllResourceListWithOptions(shared_ptr<GetCloudAllResourceListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    query->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uid)) {
    query->insert(pair<string, string>("Uid", *request->uid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetCloudAllResourceList"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetCloudAllResourceListResponse(callApi(params, req, runtime));
}

GetCloudAllResourceListResponse Alibabacloud_Aiops20200806::Client::getCloudAllResourceList(shared_ptr<GetCloudAllResourceListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getCloudAllResourceListWithOptions(request, runtime);
}

GetCloudResourceResponse Alibabacloud_Aiops20200806::Client::getCloudResourceWithOptions(shared_ptr<GetCloudResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cloudTypeName)) {
    query->insert(pair<string, string>("CloudTypeName", *request->cloudTypeName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    query->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->status)) {
    query->insert(pair<string, long>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetCloudResource"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetCloudResourceResponse(callApi(params, req, runtime));
}

GetCloudResourceResponse Alibabacloud_Aiops20200806::Client::getCloudResource(shared_ptr<GetCloudResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getCloudResourceWithOptions(request, runtime);
}

GetCloudResourceListResponse Alibabacloud_Aiops20200806::Client::getCloudResourceListWithOptions(shared_ptr<GetCloudResourceListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->businessGroupId)) {
    query->insert(pair<string, string>("BusinessGroupId", *request->businessGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cloudRegionId)) {
    query->insert(pair<string, string>("CloudRegionId", *request->cloudRegionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    query->insert(pair<string, string>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceName)) {
    query->insert(pair<string, string>("InstanceName", *request->instanceName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->isOptional)) {
    query->insert(pair<string, long>("IsOptional", *request->isOptional));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    query->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->privateIp)) {
    query->insert(pair<string, string>("PrivateIp", *request->privateIp));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->releaseStatus)) {
    query->insert(pair<string, long>("ReleaseStatus", *request->releaseStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagName)) {
    query->insert(pair<string, string>("TagName", *request->tagName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uid)) {
    query->insert(pair<string, string>("Uid", *request->uid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetCloudResourceList"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetCloudResourceListResponse(callApi(params, req, runtime));
}

GetCloudResourceListResponse Alibabacloud_Aiops20200806::Client::getCloudResourceList(shared_ptr<GetCloudResourceListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getCloudResourceListWithOptions(request, runtime);
}

GetConnectInstancesResponse Alibabacloud_Aiops20200806::Client::getConnectInstancesWithOptions(shared_ptr<GetConnectInstancesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->uid)) {
    query->insert(pair<string, long>("Uid", *request->uid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetConnectInstances"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetConnectInstancesResponse(callApi(params, req, runtime));
}

GetConnectInstancesResponse Alibabacloud_Aiops20200806::Client::getConnectInstances(shared_ptr<GetConnectInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getConnectInstancesWithOptions(request, runtime);
}

GetDataSourceDetailResponse Alibabacloud_Aiops20200806::Client::getDataSourceDetailWithOptions(shared_ptr<GetDataSourceDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    query->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDataSourceDetail"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDataSourceDetailResponse(callApi(params, req, runtime));
}

GetDataSourceDetailResponse Alibabacloud_Aiops20200806::Client::getDataSourceDetail(shared_ptr<GetDataSourceDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDataSourceDetailWithOptions(request, runtime);
}

GetDataSourceListResponse Alibabacloud_Aiops20200806::Client::getDataSourceListWithOptions(shared_ptr<GetDataSourceListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataSourceName)) {
    query->insert(pair<string, string>("DataSourceName", *request->dataSourceName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->dataSourceType)) {
    query->insert(pair<string, long>("DataSourceType", *request->dataSourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    query->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDataSourceList"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDataSourceListResponse(callApi(params, req, runtime));
}

GetDataSourceListResponse Alibabacloud_Aiops20200806::Client::getDataSourceList(shared_ptr<GetDataSourceListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDataSourceListWithOptions(request, runtime);
}

GetDataSourceTargetParamListResponse Alibabacloud_Aiops20200806::Client::getDataSourceTargetParamListWithOptions(shared_ptr<GetDataSourceTargetParamListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->dataSourceType)) {
    query->insert(pair<string, long>("DataSourceType", *request->dataSourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    query->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDataSourceTargetParamList"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDataSourceTargetParamListResponse(callApi(params, req, runtime));
}

GetDataSourceTargetParamListResponse Alibabacloud_Aiops20200806::Client::getDataSourceTargetParamList(shared_ptr<GetDataSourceTargetParamListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDataSourceTargetParamListWithOptions(request, runtime);
}

GetDataVolumeResponse Alibabacloud_Aiops20200806::Client::getDataVolumeWithOptions(shared_ptr<GetDataVolumeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    query->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDataVolume"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDataVolumeResponse(callApi(params, req, runtime));
}

GetDataVolumeResponse Alibabacloud_Aiops20200806::Client::getDataVolume(shared_ptr<GetDataVolumeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDataVolumeWithOptions(request, runtime);
}

GetDiagInfoResponse Alibabacloud_Aiops20200806::Client::getDiagInfoWithOptions(shared_ptr<GetDiagInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->diagnosticId)) {
    query->insert(pair<string, string>("DiagnosticId", *request->diagnosticId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    query->insert(pair<string, long>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->uid)) {
    query->insert(pair<string, long>("Uid", *request->uid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDiagInfo"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDiagInfoResponse(callApi(params, req, runtime));
}

GetDiagInfoResponse Alibabacloud_Aiops20200806::Client::getDiagInfo(shared_ptr<GetDiagInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDiagInfoWithOptions(request, runtime);
}

GetDomainConfigResponse Alibabacloud_Aiops20200806::Client::getDomainConfigWithOptions(shared_ptr<GetDomainConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->businessGroupId)) {
    query->insert(pair<string, string>("BusinessGroupId", *request->businessGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventId)) {
    query->insert(pair<string, string>("EventId", *request->eventId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    query->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->productId)) {
    query->insert(pair<string, long>("ProductId", *request->productId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDomainConfig"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDomainConfigResponse(callApi(params, req, runtime));
}

GetDomainConfigResponse Alibabacloud_Aiops20200806::Client::getDomainConfig(shared_ptr<GetDomainConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDomainConfigWithOptions(request, runtime);
}

GetEventAbNormalDetailResponse Alibabacloud_Aiops20200806::Client::getEventAbNormalDetailWithOptions(shared_ptr<GetEventAbNormalDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetEventAbNormalDetail"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetEventAbNormalDetailResponse(callApi(params, req, runtime));
}

GetEventAbNormalDetailResponse Alibabacloud_Aiops20200806::Client::getEventAbNormalDetail(shared_ptr<GetEventAbNormalDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getEventAbNormalDetailWithOptions(request, runtime);
}

GetEventAbNormalDetailTrendDataResponse Alibabacloud_Aiops20200806::Client::getEventAbNormalDetailTrendDataWithOptions(shared_ptr<GetEventAbNormalDetailTrendDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetEventAbNormalDetailTrendData"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetEventAbNormalDetailTrendDataResponse(callApi(params, req, runtime));
}

GetEventAbNormalDetailTrendDataResponse Alibabacloud_Aiops20200806::Client::getEventAbNormalDetailTrendData(shared_ptr<GetEventAbNormalDetailTrendDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getEventAbNormalDetailTrendDataWithOptions(request, runtime);
}

GetEventAbNormalListResponse Alibabacloud_Aiops20200806::Client::getEventAbNormalListWithOptions(shared_ptr<GetEventAbNormalListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetEventAbNormalList"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetEventAbNormalListResponse(callApi(params, req, runtime));
}

GetEventAbNormalListResponse Alibabacloud_Aiops20200806::Client::getEventAbNormalList(shared_ptr<GetEventAbNormalListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getEventAbNormalListWithOptions(request, runtime);
}

GetEventBusinessMetricListResponse Alibabacloud_Aiops20200806::Client::getEventBusinessMetricListWithOptions(shared_ptr<GetEventBusinessMetricListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->eventId)) {
    query->insert(pair<string, string>("EventId", *request->eventId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    query->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetEventBusinessMetricList"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetEventBusinessMetricListResponse(callApi(params, req, runtime));
}

GetEventBusinessMetricListResponse Alibabacloud_Aiops20200806::Client::getEventBusinessMetricList(shared_ptr<GetEventBusinessMetricListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getEventBusinessMetricListWithOptions(request, runtime);
}

GetEventDetailResponse Alibabacloud_Aiops20200806::Client::getEventDetailWithOptions(shared_ptr<GetEventDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->eventId)) {
    query->insert(pair<string, string>("EventId", *request->eventId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    query->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetEventDetail"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetEventDetailResponse(callApi(params, req, runtime));
}

GetEventDetailResponse Alibabacloud_Aiops20200806::Client::getEventDetail(shared_ptr<GetEventDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getEventDetailWithOptions(request, runtime);
}

GetEventRootCauseResponse Alibabacloud_Aiops20200806::Client::getEventRootCauseWithOptions(shared_ptr<GetEventRootCauseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->eventId)) {
    query->insert(pair<string, string>("EventId", *request->eventId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    query->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetEventRootCause"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetEventRootCauseResponse(callApi(params, req, runtime));
}

GetEventRootCauseResponse Alibabacloud_Aiops20200806::Client::getEventRootCause(shared_ptr<GetEventRootCauseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getEventRootCauseWithOptions(request, runtime);
}

GetEventSequentialTrentResponse Alibabacloud_Aiops20200806::Client::getEventSequentialTrentWithOptions(shared_ptr<GetEventSequentialTrentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aliUid)) {
    query->insert(pair<string, string>("AliUid", *request->aliUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventId)) {
    query->insert(pair<string, string>("EventId", *request->eventId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    query->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetEventSequentialTrent"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetEventSequentialTrentResponse(callApi(params, req, runtime));
}

GetEventSequentialTrentResponse Alibabacloud_Aiops20200806::Client::getEventSequentialTrent(shared_ptr<GetEventSequentialTrentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getEventSequentialTrentWithOptions(request, runtime);
}

GetEventStatisticsResponse Alibabacloud_Aiops20200806::Client::getEventStatisticsWithOptions(shared_ptr<GetEventStatisticsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    query->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->uid)) {
    query->insert(pair<string, long>("Uid", *request->uid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetEventStatistics"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetEventStatisticsResponse(callApi(params, req, runtime));
}

GetEventStatisticsResponse Alibabacloud_Aiops20200806::Client::getEventStatistics(shared_ptr<GetEventStatisticsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getEventStatisticsWithOptions(request, runtime);
}

GetEventTrentResponse Alibabacloud_Aiops20200806::Client::getEventTrentWithOptions(shared_ptr<GetEventTrentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->granularityType)) {
    query->insert(pair<string, string>("GranularityType", *request->granularityType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    query->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->timeType)) {
    query->insert(pair<string, string>("TimeType", *request->timeType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->uid)) {
    query->insert(pair<string, long>("Uid", *request->uid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetEventTrent"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetEventTrentResponse(callApi(params, req, runtime));
}

GetEventTrentResponse Alibabacloud_Aiops20200806::Client::getEventTrent(shared_ptr<GetEventTrentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getEventTrentWithOptions(request, runtime);
}

GetEventTypeResponse Alibabacloud_Aiops20200806::Client::getEventTypeWithOptions(shared_ptr<GetEventTypeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetEventType"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetEventTypeResponse(callApi(params, req, runtime));
}

GetEventTypeResponse Alibabacloud_Aiops20200806::Client::getEventType(shared_ptr<GetEventTypeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getEventTypeWithOptions(request, runtime);
}

GetExceptionsResponse Alibabacloud_Aiops20200806::Client::getExceptionsWithOptions(shared_ptr<GetExceptionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    query->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetExceptions"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetExceptionsResponse(callApi(params, req, runtime));
}

GetExceptionsResponse Alibabacloud_Aiops20200806::Client::getExceptions(shared_ptr<GetExceptionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getExceptionsWithOptions(request, runtime);
}

GetExtendResponse Alibabacloud_Aiops20200806::Client::getExtendWithOptions(shared_ptr<GetExtendRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetExtend"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return GetExtendResponse(callApi(params, req, runtime));
}

GetExtendResponse Alibabacloud_Aiops20200806::Client::getExtend(shared_ptr<GetExtendRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getExtendWithOptions(request, runtime);
}

GetForecastBusinessMetricResponse Alibabacloud_Aiops20200806::Client::getForecastBusinessMetricWithOptions(shared_ptr<GetForecastBusinessMetricRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetForecastBusinessMetric"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetForecastBusinessMetricResponse(callApi(params, req, runtime));
}

GetForecastBusinessMetricResponse Alibabacloud_Aiops20200806::Client::getForecastBusinessMetric(shared_ptr<GetForecastBusinessMetricRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getForecastBusinessMetricWithOptions(request, runtime);
}

GetFunctionValidInfoResponse Alibabacloud_Aiops20200806::Client::getFunctionValidInfoWithOptions(shared_ptr<GetFunctionValidInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->functionName)) {
    body->insert(pair<string, string>("FunctionName", *request->functionName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    body->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionCode)) {
    body->insert(pair<string, string>("RegionCode", *request->regionCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceName)) {
    body->insert(pair<string, string>("ServiceName", *request->serviceName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetFunctionValidInfo"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetFunctionValidInfoResponse(callApi(params, req, runtime));
}

GetFunctionValidInfoResponse Alibabacloud_Aiops20200806::Client::getFunctionValidInfo(shared_ptr<GetFunctionValidInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getFunctionValidInfoWithOptions(request, runtime);
}

GetGroupByDimensionDataResponse Alibabacloud_Aiops20200806::Client::getGroupByDimensionDataWithOptions(shared_ptr<GetGroupByDimensionDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->end)) {
    query->insert(pair<string, long>("End", *request->end));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->flag)) {
    query->insert(pair<string, string>("Flag", *request->flag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupBy)) {
    query->insert(pair<string, string>("GroupBy", *request->groupBy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->metricId)) {
    query->insert(pair<string, string>("MetricId", *request->metricId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    query->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->start)) {
    query->insert(pair<string, long>("Start", *request->start));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetGroupByDimensionData"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetGroupByDimensionDataResponse(callApi(params, req, runtime));
}

GetGroupByDimensionDataResponse Alibabacloud_Aiops20200806::Client::getGroupByDimensionData(shared_ptr<GetGroupByDimensionDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getGroupByDimensionDataWithOptions(request, runtime);
}

GetGroupResourceNumResponse Alibabacloud_Aiops20200806::Client::getGroupResourceNumWithOptions(shared_ptr<GetGroupResourceNumRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->businessGroupId)) {
    query->insert(pair<string, string>("BusinessGroupId", *request->businessGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    query->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetGroupResourceNum"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetGroupResourceNumResponse(callApi(params, req, runtime));
}

GetGroupResourceNumResponse Alibabacloud_Aiops20200806::Client::getGroupResourceNum(shared_ptr<GetGroupResourceNumRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getGroupResourceNumWithOptions(request, runtime);
}

GetGroupTopologyTagResponse Alibabacloud_Aiops20200806::Client::getGroupTopologyTagWithOptions(shared_ptr<GetGroupTopologyTagRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetGroupTopologyTag"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetGroupTopologyTagResponse(callApi(params, req, runtime));
}

GetGroupTopologyTagResponse Alibabacloud_Aiops20200806::Client::getGroupTopologyTag(shared_ptr<GetGroupTopologyTagRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getGroupTopologyTagWithOptions(request, runtime);
}

GetIncidentAllResponse Alibabacloud_Aiops20200806::Client::getIncidentAllWithOptions(shared_ptr<GetIncidentAllRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    query->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetIncidentAll"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetIncidentAllResponse(callApi(params, req, runtime));
}

GetIncidentAllResponse Alibabacloud_Aiops20200806::Client::getIncidentAll(shared_ptr<GetIncidentAllRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getIncidentAllWithOptions(request, runtime);
}

GetIndexDialysisArrayResponse Alibabacloud_Aiops20200806::Client::getIndexDialysisArrayWithOptions(shared_ptr<GetIndexDialysisArrayRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->businessGroupId)) {
    query->insert(pair<string, string>("BusinessGroupId", *request->businessGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cloudResourceId)) {
    query->insert(pair<string, string>("CloudResourceId", *request->cloudResourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cloudTypeName)) {
    query->insert(pair<string, string>("CloudTypeName", *request->cloudTypeName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->indexCode)) {
    query->insert(pair<string, string>("IndexCode", *request->indexCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    query->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetIndexDialysisArray"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetIndexDialysisArrayResponse(callApi(params, req, runtime));
}

GetIndexDialysisArrayResponse Alibabacloud_Aiops20200806::Client::getIndexDialysisArray(shared_ptr<GetIndexDialysisArrayRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getIndexDialysisArrayWithOptions(request, runtime);
}

GetIndexDialysisListResponse Alibabacloud_Aiops20200806::Client::getIndexDialysisListWithOptions(shared_ptr<GetIndexDialysisListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->businessGroupId)) {
    query->insert(pair<string, string>("BusinessGroupId", *request->businessGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cloudResourceId)) {
    query->insert(pair<string, string>("CloudResourceId", *request->cloudResourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cloudTypeName)) {
    query->insert(pair<string, string>("CloudTypeName", *request->cloudTypeName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->indexCode)) {
    query->insert(pair<string, string>("IndexCode", *request->indexCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    query->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetIndexDialysisList"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetIndexDialysisListResponse(callApi(params, req, runtime));
}

GetIndexDialysisListResponse Alibabacloud_Aiops20200806::Client::getIndexDialysisList(shared_ptr<GetIndexDialysisListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getIndexDialysisListWithOptions(request, runtime);
}

GetIndexDialysisListLineResponse Alibabacloud_Aiops20200806::Client::getIndexDialysisListLineWithOptions(shared_ptr<GetIndexDialysisListLineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->beginTime)) {
    query->insert(pair<string, long>("BeginTime", *request->beginTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cloudResourceId)) {
    query->insert(pair<string, string>("CloudResourceId", *request->cloudResourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cloudTypeName)) {
    query->insert(pair<string, string>("CloudTypeName", *request->cloudTypeName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->indexCode)) {
    query->insert(pair<string, string>("IndexCode", *request->indexCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->metricExtend)) {
    query->insert(pair<string, string>("MetricExtend", *request->metricExtend));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    query->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetIndexDialysisListLine"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetIndexDialysisListLineResponse(callApi(params, req, runtime));
}

GetIndexDialysisListLineResponse Alibabacloud_Aiops20200806::Client::getIndexDialysisListLine(shared_ptr<GetIndexDialysisListLineRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getIndexDialysisListLineWithOptions(request, runtime);
}

GetInspectionReportDownloadUrlResponse Alibabacloud_Aiops20200806::Client::getInspectionReportDownloadUrlWithOptions(shared_ptr<GetInspectionReportDownloadUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->downloadReportListJson)) {
    body->insert(pair<string, string>("DownloadReportListJson", *request->downloadReportListJson));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    body->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetInspectionReportDownloadUrl"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetInspectionReportDownloadUrlResponse(callApi(params, req, runtime));
}

GetInspectionReportDownloadUrlResponse Alibabacloud_Aiops20200806::Client::getInspectionReportDownloadUrl(shared_ptr<GetInspectionReportDownloadUrlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getInspectionReportDownloadUrlWithOptions(request, runtime);
}

GetInstancesNumResponse Alibabacloud_Aiops20200806::Client::getInstancesNumWithOptions(shared_ptr<GetInstancesNumRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    query->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetInstancesNum"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetInstancesNumResponse(callApi(params, req, runtime));
}

GetInstancesNumResponse Alibabacloud_Aiops20200806::Client::getInstancesNum(shared_ptr<GetInstancesNumRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getInstancesNumWithOptions(request, runtime);
}

GetLogSampleResponse Alibabacloud_Aiops20200806::Client::getLogSampleWithOptions(shared_ptr<GetLogSampleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appField)) {
    query->insert(pair<string, string>("AppField", *request->appField));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appValue)) {
    query->insert(pair<string, string>("AppValue", *request->appValue));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->dataSourceId)) {
    query->insert(pair<string, long>("DataSourceId", *request->dataSourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->logField)) {
    query->insert(pair<string, string>("LogField", *request->logField));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    query->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetLogSample"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetLogSampleResponse(callApi(params, req, runtime));
}

GetLogSampleResponse Alibabacloud_Aiops20200806::Client::getLogSample(shared_ptr<GetLogSampleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getLogSampleWithOptions(request, runtime);
}

GetLogSampleColumnResponse Alibabacloud_Aiops20200806::Client::getLogSampleColumnWithOptions(shared_ptr<GetLogSampleColumnRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->dataSourceId)) {
    query->insert(pair<string, long>("DataSourceId", *request->dataSourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    query->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetLogSampleColumn"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetLogSampleColumnResponse(callApi(params, req, runtime));
}

GetLogSampleColumnResponse Alibabacloud_Aiops20200806::Client::getLogSampleColumn(shared_ptr<GetLogSampleColumnRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getLogSampleColumnWithOptions(request, runtime);
}

GetMetricEventSequentialTrentResponse Alibabacloud_Aiops20200806::Client::getMetricEventSequentialTrentWithOptions(shared_ptr<GetMetricEventSequentialTrentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aliUid)) {
    query->insert(pair<string, string>("AliUid", *request->aliUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventId)) {
    query->insert(pair<string, string>("EventId", *request->eventId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    query->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMetricEventSequentialTrent"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetMetricEventSequentialTrentResponse(callApi(params, req, runtime));
}

GetMetricEventSequentialTrentResponse Alibabacloud_Aiops20200806::Client::getMetricEventSequentialTrent(shared_ptr<GetMetricEventSequentialTrentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMetricEventSequentialTrentWithOptions(request, runtime);
}

GetNewOptimizationItemDataResponse Alibabacloud_Aiops20200806::Client::getNewOptimizationItemDataWithOptions(shared_ptr<GetNewOptimizationItemDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetNewOptimizationItemData"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetNewOptimizationItemDataResponse(callApi(params, req, runtime));
}

GetNewOptimizationItemDataResponse Alibabacloud_Aiops20200806::Client::getNewOptimizationItemData(shared_ptr<GetNewOptimizationItemDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getNewOptimizationItemDataWithOptions(request, runtime);
}

GetPatrolInspectionDetailListResponse Alibabacloud_Aiops20200806::Client::getPatrolInspectionDetailListWithOptions(shared_ptr<GetPatrolInspectionDetailListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetPatrolInspectionDetailList"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetPatrolInspectionDetailListResponse(callApi(params, req, runtime));
}

GetPatrolInspectionDetailListResponse Alibabacloud_Aiops20200806::Client::getPatrolInspectionDetailList(shared_ptr<GetPatrolInspectionDetailListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getPatrolInspectionDetailListWithOptions(request, runtime);
}

GetPatrolInspectionDetailThrendDataResponse Alibabacloud_Aiops20200806::Client::getPatrolInspectionDetailThrendDataWithOptions(shared_ptr<GetPatrolInspectionDetailThrendDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    query->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->requestContent)) {
    query->insert(pair<string, string>("RequestContent", *request->requestContent));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    query->insert(pair<string, long>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetPatrolInspectionDetailThrendData"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetPatrolInspectionDetailThrendDataResponse(callApi(params, req, runtime));
}

GetPatrolInspectionDetailThrendDataResponse Alibabacloud_Aiops20200806::Client::getPatrolInspectionDetailThrendData(shared_ptr<GetPatrolInspectionDetailThrendDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getPatrolInspectionDetailThrendDataWithOptions(request, runtime);
}

GetPatrolInspectionItemsListResponse Alibabacloud_Aiops20200806::Client::getPatrolInspectionItemsListWithOptions(shared_ptr<GetPatrolInspectionItemsListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetPatrolInspectionItemsList"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetPatrolInspectionItemsListResponse(callApi(params, req, runtime));
}

GetPatrolInspectionItemsListResponse Alibabacloud_Aiops20200806::Client::getPatrolInspectionItemsList(shared_ptr<GetPatrolInspectionItemsListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getPatrolInspectionItemsListWithOptions(request, runtime);
}

GetPatrolInspectionListResponse Alibabacloud_Aiops20200806::Client::getPatrolInspectionListWithOptions(shared_ptr<GetPatrolInspectionListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetPatrolInspectionList"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetPatrolInspectionListResponse(callApi(params, req, runtime));
}

GetPatrolInspectionListResponse Alibabacloud_Aiops20200806::Client::getPatrolInspectionList(shared_ptr<GetPatrolInspectionListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getPatrolInspectionListWithOptions(request, runtime);
}

GetPatrolInspectionStatusResponse Alibabacloud_Aiops20200806::Client::getPatrolInspectionStatusWithOptions(shared_ptr<GetPatrolInspectionStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetPatrolInspectionStatus"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetPatrolInspectionStatusResponse(callApi(params, req, runtime));
}

GetPatrolInspectionStatusResponse Alibabacloud_Aiops20200806::Client::getPatrolInspectionStatus(shared_ptr<GetPatrolInspectionStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getPatrolInspectionStatusWithOptions(request, runtime);
}

GetProductInstanceResponse Alibabacloud_Aiops20200806::Client::getProductInstanceWithOptions(shared_ptr<GetProductInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    query->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    query->insert(pair<string, string>("ProductCode", *request->productCode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetProductInstance"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetProductInstanceResponse(callApi(params, req, runtime));
}

GetProductInstanceResponse Alibabacloud_Aiops20200806::Client::getProductInstance(shared_ptr<GetProductInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getProductInstanceWithOptions(request, runtime);
}

GetProductMetricListResponse Alibabacloud_Aiops20200806::Client::getProductMetricListWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetProductMetricList"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetProductMetricListResponse(callApi(params, req, runtime));
}

GetProductMetricListResponse Alibabacloud_Aiops20200806::Client::getProductMetricList() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getProductMetricListWithOptions(runtime);
}

GetRealDataResponse Alibabacloud_Aiops20200806::Client::getRealDataWithOptions(shared_ptr<GetRealDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endTimestamp)) {
    query->insert(pair<string, string>("EndTimestamp", *request->endTimestamp));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->flowName)) {
    query->insert(pair<string, string>("FlowName", *request->flowName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTimestamp)) {
    query->insert(pair<string, string>("StartTimestamp", *request->startTimestamp));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->uid)) {
    query->insert(pair<string, long>("Uid", *request->uid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetRealData"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetRealDataResponse(callApi(params, req, runtime));
}

GetRealDataResponse Alibabacloud_Aiops20200806::Client::getRealData(shared_ptr<GetRealDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getRealDataWithOptions(request, runtime);
}

GetRegionListResponse Alibabacloud_Aiops20200806::Client::getRegionListWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetRegionList"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetRegionListResponse(callApi(params, req, runtime));
}

GetRegionListResponse Alibabacloud_Aiops20200806::Client::getRegionList() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getRegionListWithOptions(runtime);
}

GetRepairScriptResponse Alibabacloud_Aiops20200806::Client::getRepairScriptWithOptions(shared_ptr<GetRepairScriptRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->eventId)) {
    query->insert(pair<string, string>("EventId", *request->eventId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    query->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetRepairScript"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetRepairScriptResponse(callApi(params, req, runtime));
}

GetRepairScriptResponse Alibabacloud_Aiops20200806::Client::getRepairScript(shared_ptr<GetRepairScriptRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getRepairScriptWithOptions(request, runtime);
}

GetResourceListResponse Alibabacloud_Aiops20200806::Client::getResourceListWithOptions(shared_ptr<GetResourceListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    query->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetResourceList"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetResourceListResponse(callApi(params, req, runtime));
}

GetResourceListResponse Alibabacloud_Aiops20200806::Client::getResourceList(shared_ptr<GetResourceListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getResourceListWithOptions(request, runtime);
}

GetResourceTagDropListResponse Alibabacloud_Aiops20200806::Client::getResourceTagDropListWithOptions(shared_ptr<GetResourceTagDropListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetResourceTagDropList"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetResourceTagDropListResponse(callApi(params, req, runtime));
}

GetResourceTagDropListResponse Alibabacloud_Aiops20200806::Client::getResourceTagDropList(shared_ptr<GetResourceTagDropListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getResourceTagDropListWithOptions(request, runtime);
}

GetResourceTypeListResponse Alibabacloud_Aiops20200806::Client::getResourceTypeListWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetResourceTypeList"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetResourceTypeListResponse(callApi(params, req, runtime));
}

GetResourceTypeListResponse Alibabacloud_Aiops20200806::Client::getResourceTypeList() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getResourceTypeListWithOptions(runtime);
}

GetRiskInAllResponse Alibabacloud_Aiops20200806::Client::getRiskInAllWithOptions(shared_ptr<GetRiskInAllRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    query->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->screen)) {
    query->insert(pair<string, long>("Screen", *request->screen));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetRiskInAll"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetRiskInAllResponse(callApi(params, req, runtime));
}

GetRiskInAllResponse Alibabacloud_Aiops20200806::Client::getRiskInAll(shared_ptr<GetRiskInAllRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getRiskInAllWithOptions(request, runtime);
}

GetRiskInspectStatisticsResponse Alibabacloud_Aiops20200806::Client::getRiskInspectStatisticsWithOptions(shared_ptr<GetRiskInspectStatisticsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetRiskInspectStatistics"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetRiskInspectStatisticsResponse(callApi(params, req, runtime));
}

GetRiskInspectStatisticsResponse Alibabacloud_Aiops20200806::Client::getRiskInspectStatistics(shared_ptr<GetRiskInspectStatisticsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getRiskInspectStatisticsWithOptions(request, runtime);
}

GetRiskInspectionTypeListResponse Alibabacloud_Aiops20200806::Client::getRiskInspectionTypeListWithOptions(shared_ptr<GetRiskInspectionTypeListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetRiskInspectionTypeList"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetRiskInspectionTypeListResponse(callApi(params, req, runtime));
}

GetRiskInspectionTypeListResponse Alibabacloud_Aiops20200806::Client::getRiskInspectionTypeList(shared_ptr<GetRiskInspectionTypeListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getRiskInspectionTypeListWithOptions(request, runtime);
}

GetRiskPatrolDetailListResponse Alibabacloud_Aiops20200806::Client::getRiskPatrolDetailListWithOptions(shared_ptr<GetRiskPatrolDetailListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetRiskPatrolDetailList"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetRiskPatrolDetailListResponse(callApi(params, req, runtime));
}

GetRiskPatrolDetailListResponse Alibabacloud_Aiops20200806::Client::getRiskPatrolDetailList(shared_ptr<GetRiskPatrolDetailListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getRiskPatrolDetailListWithOptions(request, runtime);
}

GetRiskPatrolListResponse Alibabacloud_Aiops20200806::Client::getRiskPatrolListWithOptions(shared_ptr<GetRiskPatrolListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->businessGroupId)) {
    query->insert(pair<string, string>("BusinessGroupId", *request->businessGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->businessGroupName)) {
    query->insert(pair<string, string>("BusinessGroupName", *request->businessGroupName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    query->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->patrolId)) {
    query->insert(pair<string, long>("PatrolId", *request->patrolId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->riskPatrolItem)) {
    query->insert(pair<string, string>("RiskPatrolItem", *request->riskPatrolItem));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->severityLevel)) {
    query->insert(pair<string, long>("SeverityLevel", *request->severityLevel));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->status)) {
    query->insert(pair<string, long>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetRiskPatrolList"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetRiskPatrolListResponse(callApi(params, req, runtime));
}

GetRiskPatrolListResponse Alibabacloud_Aiops20200806::Client::getRiskPatrolList(shared_ptr<GetRiskPatrolListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getRiskPatrolListWithOptions(request, runtime);
}

GetRiskPatrolStatisticalTrendsResponse Alibabacloud_Aiops20200806::Client::getRiskPatrolStatisticalTrendsWithOptions(shared_ptr<GetRiskPatrolStatisticalTrendsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetRiskPatrolStatisticalTrends"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetRiskPatrolStatisticalTrendsResponse(callApi(params, req, runtime));
}

GetRiskPatrolStatisticalTrendsResponse Alibabacloud_Aiops20200806::Client::getRiskPatrolStatisticalTrends(shared_ptr<GetRiskPatrolStatisticalTrendsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getRiskPatrolStatisticalTrendsWithOptions(request, runtime);
}

GetRiskPatrolStatisticsResponse Alibabacloud_Aiops20200806::Client::getRiskPatrolStatisticsWithOptions(shared_ptr<GetRiskPatrolStatisticsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetRiskPatrolStatistics"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetRiskPatrolStatisticsResponse(callApi(params, req, runtime));
}

GetRiskPatrolStatisticsResponse Alibabacloud_Aiops20200806::Client::getRiskPatrolStatistics(shared_ptr<GetRiskPatrolStatisticsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getRiskPatrolStatisticsWithOptions(request, runtime);
}

GetRiskPatrolStatusResponse Alibabacloud_Aiops20200806::Client::getRiskPatrolStatusWithOptions(shared_ptr<GetRiskPatrolStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetRiskPatrolStatus"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetRiskPatrolStatusResponse(callApi(params, req, runtime));
}

GetRiskPatrolStatusResponse Alibabacloud_Aiops20200806::Client::getRiskPatrolStatus(shared_ptr<GetRiskPatrolStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getRiskPatrolStatusWithOptions(request, runtime);
}

GetRoleResponse Alibabacloud_Aiops20200806::Client::getRoleWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetRole"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetRoleResponse(callApi(params, req, runtime));
}

GetRoleResponse Alibabacloud_Aiops20200806::Client::getRole() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getRoleWithOptions(runtime);
}

GetRootCauseResponse Alibabacloud_Aiops20200806::Client::getRootCauseWithOptions(shared_ptr<GetRootCauseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->eventId)) {
    query->insert(pair<string, string>("EventId", *request->eventId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->rootCauseId)) {
    query->insert(pair<string, string>("RootCauseId", *request->rootCauseId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetRootCause"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetRootCauseResponse(callApi(params, req, runtime));
}

GetRootCauseResponse Alibabacloud_Aiops20200806::Client::getRootCause(shared_ptr<GetRootCauseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getRootCauseWithOptions(request, runtime);
}

GetScenarioDetailResponse Alibabacloud_Aiops20200806::Client::getScenarioDetailWithOptions(shared_ptr<GetScenarioDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    query->insert(pair<string, string>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    query->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetScenarioDetail"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetScenarioDetailResponse(callApi(params, req, runtime));
}

GetScenarioDetailResponse Alibabacloud_Aiops20200806::Client::getScenarioDetail(shared_ptr<GetScenarioDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getScenarioDetailWithOptions(request, runtime);
}

GetScenarioListResponse Alibabacloud_Aiops20200806::Client::getScenarioListWithOptions(shared_ptr<GetScenarioListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    query->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scenarioName)) {
    query->insert(pair<string, string>("ScenarioName", *request->scenarioName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sceneSelectLabel)) {
    query->insert(pair<string, string>("SceneSelectLabel", *request->sceneSelectLabel));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetScenarioList"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetScenarioListResponse(callApi(params, req, runtime));
}

GetScenarioListResponse Alibabacloud_Aiops20200806::Client::getScenarioList(shared_ptr<GetScenarioListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getScenarioListWithOptions(request, runtime);
}

GetScenarioStatisticsListResponse Alibabacloud_Aiops20200806::Client::getScenarioStatisticsListWithOptions(shared_ptr<GetScenarioStatisticsListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    query->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scenarioIds)) {
    query->insert(pair<string, string>("ScenarioIds", *request->scenarioIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetScenarioStatisticsList"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetScenarioStatisticsListResponse(callApi(params, req, runtime));
}

GetScenarioStatisticsListResponse Alibabacloud_Aiops20200806::Client::getScenarioStatisticsList(shared_ptr<GetScenarioStatisticsListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getScenarioStatisticsListWithOptions(request, runtime);
}

GetSceneByIdResponse Alibabacloud_Aiops20200806::Client::getSceneByIdWithOptions(shared_ptr<GetSceneByIdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSceneById"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSceneByIdResponse(callApi(params, req, runtime));
}

GetSceneByIdResponse Alibabacloud_Aiops20200806::Client::getSceneById(shared_ptr<GetSceneByIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSceneByIdWithOptions(request, runtime);
}

GetSceneDetailsListResponse Alibabacloud_Aiops20200806::Client::getSceneDetailsListWithOptions(shared_ptr<GetSceneDetailsListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSceneDetailsList"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSceneDetailsListResponse(callApi(params, req, runtime));
}

GetSceneDetailsListResponse Alibabacloud_Aiops20200806::Client::getSceneDetailsList(shared_ptr<GetSceneDetailsListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSceneDetailsListWithOptions(request, runtime);
}

GetSceneListResponse Alibabacloud_Aiops20200806::Client::getSceneListWithOptions(shared_ptr<GetSceneListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    query->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageTotal)) {
    query->insert(pair<string, long>("PageTotal", *request->pageTotal));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sceneType)) {
    query->insert(pair<string, string>("SceneType", *request->sceneType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchName)) {
    query->insert(pair<string, string>("SearchName", *request->searchName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchValue)) {
    query->insert(pair<string, string>("SearchValue", *request->searchValue));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->status)) {
    query->insert(pair<string, long>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSceneList"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSceneListResponse(callApi(params, req, runtime));
}

GetSceneListResponse Alibabacloud_Aiops20200806::Client::getSceneList(shared_ptr<GetSceneListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSceneListWithOptions(request, runtime);
}

GetSceneMetricTableResponse Alibabacloud_Aiops20200806::Client::getSceneMetricTableWithOptions(shared_ptr<GetSceneMetricTableRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->end)) {
    query->insert(pair<string, long>("End", *request->end));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->metricId)) {
    query->insert(pair<string, string>("MetricId", *request->metricId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    query->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->start)) {
    query->insert(pair<string, long>("Start", *request->start));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSceneMetricTable"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSceneMetricTableResponse(callApi(params, req, runtime));
}

GetSceneMetricTableResponse Alibabacloud_Aiops20200806::Client::getSceneMetricTable(shared_ptr<GetSceneMetricTableRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSceneMetricTableWithOptions(request, runtime);
}

GetScriptEventRootCauseResponse Alibabacloud_Aiops20200806::Client::getScriptEventRootCauseWithOptions(shared_ptr<GetScriptEventRootCauseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetScriptEventRootCause"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetScriptEventRootCauseResponse(callApi(params, req, runtime));
}

GetScriptEventRootCauseResponse Alibabacloud_Aiops20200806::Client::getScriptEventRootCause(shared_ptr<GetScriptEventRootCauseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getScriptEventRootCauseWithOptions(request, runtime);
}

GetSlsLogDataResponse Alibabacloud_Aiops20200806::Client::getSlsLogDataWithOptions(shared_ptr<GetSlsLogDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->code)) {
    query->insert(pair<string, string>("Code", *request->code));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domain)) {
    query->insert(pair<string, string>("Domain", *request->domain));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    query->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    query->insert(pair<string, long>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->url)) {
    query->insert(pair<string, string>("Url", *request->url));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSlsLogData"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSlsLogDataResponse(callApi(params, req, runtime));
}

GetSlsLogDataResponse Alibabacloud_Aiops20200806::Client::getSlsLogData(shared_ptr<GetSlsLogDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSlsLogDataWithOptions(request, runtime);
}

GetSynCloudResourceListResponse Alibabacloud_Aiops20200806::Client::getSynCloudResourceListWithOptions(shared_ptr<GetSynCloudResourceListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    query->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSynCloudResourceList"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSynCloudResourceListResponse(callApi(params, req, runtime));
}

GetSynCloudResourceListResponse Alibabacloud_Aiops20200806::Client::getSynCloudResourceList(shared_ptr<GetSynCloudResourceListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSynCloudResourceListWithOptions(request, runtime);
}

GetTagBusinessGroupListResponse Alibabacloud_Aiops20200806::Client::getTagBusinessGroupListWithOptions(shared_ptr<GetTagBusinessGroupListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTagBusinessGroupList"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTagBusinessGroupListResponse(callApi(params, req, runtime));
}

GetTagBusinessGroupListResponse Alibabacloud_Aiops20200806::Client::getTagBusinessGroupList(shared_ptr<GetTagBusinessGroupListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getTagBusinessGroupListWithOptions(request, runtime);
}

GetTagDropListResponse Alibabacloud_Aiops20200806::Client::getTagDropListWithOptions(shared_ptr<GetTagDropListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTagDropList"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTagDropListResponse(callApi(params, req, runtime));
}

GetTagDropListResponse Alibabacloud_Aiops20200806::Client::getTagDropList(shared_ptr<GetTagDropListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getTagDropListWithOptions(request, runtime);
}

GetTargetDimensionDataResponse Alibabacloud_Aiops20200806::Client::getTargetDimensionDataWithOptions(shared_ptr<GetTargetDimensionDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->end)) {
    query->insert(pair<string, long>("End", *request->end));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->flag)) {
    query->insert(pair<string, string>("Flag", *request->flag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->label)) {
    query->insert(pair<string, string>("Label", *request->label));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->labelValue)) {
    query->insert(pair<string, string>("LabelValue", *request->labelValue));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->metricId)) {
    query->insert(pair<string, string>("MetricId", *request->metricId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    query->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->start)) {
    query->insert(pair<string, long>("Start", *request->start));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTargetDimensionData"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTargetDimensionDataResponse(callApi(params, req, runtime));
}

GetTargetDimensionDataResponse Alibabacloud_Aiops20200806::Client::getTargetDimensionData(shared_ptr<GetTargetDimensionDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getTargetDimensionDataWithOptions(request, runtime);
}

GetThresholdListResponse Alibabacloud_Aiops20200806::Client::getThresholdListWithOptions(shared_ptr<GetThresholdListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    query->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetThresholdList"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetThresholdListResponse(callApi(params, req, runtime));
}

GetThresholdListResponse Alibabacloud_Aiops20200806::Client::getThresholdList(shared_ptr<GetThresholdListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getThresholdListWithOptions(request, runtime);
}

GetThroughPutResponse Alibabacloud_Aiops20200806::Client::getThroughPutWithOptions(shared_ptr<GetThroughPutRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    query->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetThroughPut"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetThroughPutResponse(callApi(params, req, runtime));
}

GetThroughPutResponse Alibabacloud_Aiops20200806::Client::getThroughPut(shared_ptr<GetThroughPutRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getThroughPutWithOptions(request, runtime);
}

GetTrendSlsReportsResponse Alibabacloud_Aiops20200806::Client::getTrendSlsReportsWithOptions(shared_ptr<GetTrendSlsReportsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    query->insert(pair<string, string>("ProductCode", *request->productCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->severity)) {
    query->insert(pair<string, string>("Severity", *request->severity));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->uid)) {
    query->insert(pair<string, long>("Uid", *request->uid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTrendSlsReports"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTrendSlsReportsResponse(callApi(params, req, runtime));
}

GetTrendSlsReportsResponse Alibabacloud_Aiops20200806::Client::getTrendSlsReports(shared_ptr<GetTrendSlsReportsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getTrendSlsReportsWithOptions(request, runtime);
}

GetUserInfoResponse Alibabacloud_Aiops20200806::Client::getUserInfoWithOptions(shared_ptr<GetUserInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetUserInfo"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetUserInfoResponse(callApi(params, req, runtime));
}

GetUserInfoResponse Alibabacloud_Aiops20200806::Client::getUserInfo(shared_ptr<GetUserInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getUserInfoWithOptions(request, runtime);
}

GetUserLoginInfoResponse Alibabacloud_Aiops20200806::Client::getUserLoginInfoWithOptions(shared_ptr<GetUserLoginInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->accountName)) {
    query->insert(pair<string, string>("AccountName", *request->accountName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->accountPrincipalName)) {
    query->insert(pair<string, string>("AccountPrincipalName", *request->accountPrincipalName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->accountType)) {
    query->insert(pair<string, string>("AccountType", *request->accountType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->currentPk)) {
    query->insert(pair<string, string>("CurrentPk", *request->currentPk));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mainAccountPk)) {
    query->insert(pair<string, string>("MainAccountPk", *request->mainAccountPk));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetUserLoginInfo"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetUserLoginInfoResponse(callApi(params, req, runtime));
}

GetUserLoginInfoResponse Alibabacloud_Aiops20200806::Client::getUserLoginInfo(shared_ptr<GetUserLoginInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getUserLoginInfoWithOptions(request, runtime);
}

GetUserOrderConfigResponse Alibabacloud_Aiops20200806::Client::getUserOrderConfigWithOptions(shared_ptr<GetUserOrderConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    query->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetUserOrderConfig"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetUserOrderConfigResponse(callApi(params, req, runtime));
}

GetUserOrderConfigResponse Alibabacloud_Aiops20200806::Client::getUserOrderConfig(shared_ptr<GetUserOrderConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getUserOrderConfigWithOptions(request, runtime);
}

IgnoreAlarmsResponse Alibabacloud_Aiops20200806::Client::ignoreAlarmsWithOptions(shared_ptr<IgnoreAlarmsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->alarmId)) {
    query->insert(pair<string, string>("AlarmId", *request->alarmId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("IgnoreAlarms"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return IgnoreAlarmsResponse(callApi(params, req, runtime));
}

IgnoreAlarmsResponse Alibabacloud_Aiops20200806::Client::ignoreAlarms(shared_ptr<IgnoreAlarmsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return ignoreAlarmsWithOptions(request, runtime);
}

ListApplyAuthorizationResponse Alibabacloud_Aiops20200806::Client::listApplyAuthorizationWithOptions(shared_ptr<ListApplyAuthorizationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->permissionType)) {
    query->insert(pair<string, long>("PermissionType", *request->permissionType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->switchFrontOperaUid)) {
    query->insert(pair<string, string>("SwitchFrontOperaUid", *request->switchFrontOperaUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->uid)) {
    query->insert(pair<string, long>("Uid", *request->uid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListApplyAuthorization"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListApplyAuthorizationResponse(callApi(params, req, runtime));
}

ListApplyAuthorizationResponse Alibabacloud_Aiops20200806::Client::listApplyAuthorization(shared_ptr<ListApplyAuthorizationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listApplyAuthorizationWithOptions(request, runtime);
}

ListAuthResponse Alibabacloud_Aiops20200806::Client::listAuthWithOptions(shared_ptr<ListAuthRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAuth"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAuthResponse(callApi(params, req, runtime));
}

ListAuthResponse Alibabacloud_Aiops20200806::Client::listAuth(shared_ptr<ListAuthRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAuthWithOptions(request, runtime);
}

ListAuthorizedUidResponse Alibabacloud_Aiops20200806::Client::listAuthorizedUidWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAuthorizedUid"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAuthorizedUidResponse(callApi(params, req, runtime));
}

ListAuthorizedUidResponse Alibabacloud_Aiops20200806::Client::listAuthorizedUid() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAuthorizedUidWithOptions(runtime);
}

ListCausePlanResponse Alibabacloud_Aiops20200806::Client::listCausePlanWithOptions(shared_ptr<ListCausePlanRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->eventId)) {
    query->insert(pair<string, string>("EventId", *request->eventId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->rootCauseId)) {
    query->insert(pair<string, string>("RootCauseId", *request->rootCauseId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListCausePlan"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListCausePlanResponse(callApi(params, req, runtime));
}

ListCausePlanResponse Alibabacloud_Aiops20200806::Client::listCausePlan(shared_ptr<ListCausePlanRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listCausePlanWithOptions(request, runtime);
}

ListConfirmAuthorizationResponse Alibabacloud_Aiops20200806::Client::listConfirmAuthorizationWithOptions(shared_ptr<ListConfirmAuthorizationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->permissionType)) {
    query->insert(pair<string, long>("PermissionType", *request->permissionType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->switchFrontOperaUid)) {
    query->insert(pair<string, string>("SwitchFrontOperaUid", *request->switchFrontOperaUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->uid)) {
    query->insert(pair<string, long>("Uid", *request->uid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListConfirmAuthorization"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListConfirmAuthorizationResponse(callApi(params, req, runtime));
}

ListConfirmAuthorizationResponse Alibabacloud_Aiops20200806::Client::listConfirmAuthorization(shared_ptr<ListConfirmAuthorizationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listConfirmAuthorizationWithOptions(request, runtime);
}

ListEventResponse Alibabacloud_Aiops20200806::Client::listEventWithOptions(shared_ptr<ListEventRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->uid)) {
    query->insert(pair<string, long>("Uid", *request->uid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListEvent"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListEventResponse(callApi(params, req, runtime));
}

ListEventResponse Alibabacloud_Aiops20200806::Client::listEvent(shared_ptr<ListEventRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listEventWithOptions(request, runtime);
}

ListNotAuthorizedUidResponse Alibabacloud_Aiops20200806::Client::listNotAuthorizedUidWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListNotAuthorizedUid"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListNotAuthorizedUidResponse(callApi(params, req, runtime));
}

ListNotAuthorizedUidResponse Alibabacloud_Aiops20200806::Client::listNotAuthorizedUid() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listNotAuthorizedUidWithOptions(runtime);
}

ListReportsResponse Alibabacloud_Aiops20200806::Client::listReportsWithOptions(shared_ptr<ListReportsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->uid)) {
    query->insert(pair<string, long>("Uid", *request->uid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListReports"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListReportsResponse(callApi(params, req, runtime));
}

ListReportsResponse Alibabacloud_Aiops20200806::Client::listReports(shared_ptr<ListReportsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listReportsWithOptions(request, runtime);
}

ListRootCauseResponse Alibabacloud_Aiops20200806::Client::listRootCauseWithOptions(shared_ptr<ListRootCauseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->eventId)) {
    query->insert(pair<string, string>("EventId", *request->eventId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->rootCauseId)) {
    query->insert(pair<string, string>("RootCauseId", *request->rootCauseId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListRootCause"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListRootCauseResponse(callApi(params, req, runtime));
}

ListRootCauseResponse Alibabacloud_Aiops20200806::Client::listRootCause(shared_ptr<ListRootCauseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listRootCauseWithOptions(request, runtime);
}

ListSlsReportsResponse Alibabacloud_Aiops20200806::Client::listSlsReportsWithOptions(shared_ptr<ListSlsReportsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->currentPage)) {
    query->insert(pair<string, long>("CurrentPage", *request->currentPage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->logStore)) {
    query->insert(pair<string, string>("LogStore", *request->logStore));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    query->insert(pair<string, string>("ProductCode", *request->productCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->severity)) {
    query->insert(pair<string, string>("Severity", *request->severity));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->uid)) {
    query->insert(pair<string, long>("Uid", *request->uid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSlsReports"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListSlsReportsResponse(callApi(params, req, runtime));
}

ListSlsReportsResponse Alibabacloud_Aiops20200806::Client::listSlsReports(shared_ptr<ListSlsReportsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSlsReportsWithOptions(request, runtime);
}

PutAlertContactResponse Alibabacloud_Aiops20200806::Client::putAlertContactWithOptions(shared_ptr<PutAlertContactRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    query->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->email)) {
    body->insert(pair<string, string>("Email", *request->email));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    body->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->phone)) {
    body->insert(pair<string, string>("Phone", *request->phone));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->webhook)) {
    body->insert(pair<string, string>("Webhook", *request->webhook));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PutAlertContact"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PutAlertContactResponse(callApi(params, req, runtime));
}

PutAlertContactResponse Alibabacloud_Aiops20200806::Client::putAlertContact(shared_ptr<PutAlertContactRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return putAlertContactWithOptions(request, runtime);
}

PutAlertContactGroupResponse Alibabacloud_Aiops20200806::Client::putAlertContactGroupWithOptions(shared_ptr<PutAlertContactGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    query->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->alertContactGroupJson)) {
    body->insert(pair<string, string>("AlertContactGroupJson", *request->alertContactGroupJson));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contactIdsJson)) {
    body->insert(pair<string, string>("ContactIdsJson", *request->contactIdsJson));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PutAlertContactGroup"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PutAlertContactGroupResponse(callApi(params, req, runtime));
}

PutAlertContactGroupResponse Alibabacloud_Aiops20200806::Client::putAlertContactGroup(shared_ptr<PutAlertContactGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return putAlertContactGroupWithOptions(request, runtime);
}

PutAlertContactToGroupResponse Alibabacloud_Aiops20200806::Client::putAlertContactToGroupWithOptions(shared_ptr<PutAlertContactToGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    query->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->contactIdListJson)) {
    body->insert(pair<string, string>("ContactIdListJson", *request->contactIdListJson));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->groupId)) {
    body->insert(pair<string, long>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupIdListJson)) {
    body->insert(pair<string, string>("GroupIdListJson", *request->groupIdListJson));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PutAlertContactToGroup"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PutAlertContactToGroupResponse(callApi(params, req, runtime));
}

PutAlertContactToGroupResponse Alibabacloud_Aiops20200806::Client::putAlertContactToGroup(shared_ptr<PutAlertContactToGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return putAlertContactToGroupWithOptions(request, runtime);
}

PutAlertIgnoreResponse Alibabacloud_Aiops20200806::Client::putAlertIgnoreWithOptions(shared_ptr<PutAlertIgnoreRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->alertId)) {
    query->insert(pair<string, long>("AlertId", *request->alertId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    query->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PutAlertIgnore"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PutAlertIgnoreResponse(callApi(params, req, runtime));
}

PutAlertIgnoreResponse Alibabacloud_Aiops20200806::Client::putAlertIgnore(shared_ptr<PutAlertIgnoreRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return putAlertIgnoreWithOptions(request, runtime);
}

PutAlertSettingResponse Alibabacloud_Aiops20200806::Client::putAlertSettingWithOptions(shared_ptr<PutAlertSettingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->alertSilenceConfig)) {
    query->insert(pair<string, string>("AlertSilenceConfig", *request->alertSilenceConfig));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->alarmLevel)) {
    body->insert(pair<string, string>("AlarmLevel", *request->alarmLevel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->alertName)) {
    body->insert(pair<string, string>("AlertName", *request->alertName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->alertSettingId)) {
    body->insert(pair<string, long>("AlertSettingId", *request->alertSettingId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->businessGroupIdsJson)) {
    body->insert(pair<string, string>("BusinessGroupIdsJson", *request->businessGroupIdsJson));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contactGroupIdsJson)) {
    body->insert(pair<string, string>("ContactGroupIdsJson", *request->contactGroupIdsJson));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contactIdsJson)) {
    body->insert(pair<string, string>("ContactIdsJson", *request->contactIdsJson));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->customerUid)) {
    body->insert(pair<string, long>("CustomerUid", *request->customerUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    body->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->sendDingtalkNotice)) {
    body->insert(pair<string, bool>("SendDingtalkNotice", *request->sendDingtalkNotice));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->sendEmailNotice)) {
    body->insert(pair<string, bool>("SendEmailNotice", *request->sendEmailNotice));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->sendSmsNotice)) {
    body->insert(pair<string, bool>("SendSmsNotice", *request->sendSmsNotice));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->stopDuration)) {
    body->insert(pair<string, long>("StopDuration", *request->stopDuration));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PutAlertSetting"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PutAlertSettingResponse(callApi(params, req, runtime));
}

PutAlertSettingResponse Alibabacloud_Aiops20200806::Client::putAlertSetting(shared_ptr<PutAlertSettingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return putAlertSettingWithOptions(request, runtime);
}

PutAlertSettingListResponse Alibabacloud_Aiops20200806::Client::putAlertSettingListWithOptions(shared_ptr<PutAlertSettingListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->alertSettingEditRequestListJson)) {
    body->insert(pair<string, string>("AlertSettingEditRequestListJson", *request->alertSettingEditRequestListJson));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contactGroupIdsJson)) {
    body->insert(pair<string, string>("ContactGroupIdsJson", *request->contactGroupIdsJson));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contactIdsJson)) {
    body->insert(pair<string, string>("ContactIdsJson", *request->contactIdsJson));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PutAlertSettingList"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PutAlertSettingListResponse(callApi(params, req, runtime));
}

PutAlertSettingListResponse Alibabacloud_Aiops20200806::Client::putAlertSettingList(shared_ptr<PutAlertSettingListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return putAlertSettingListWithOptions(request, runtime);
}

PutAlertSettingStatusResponse Alibabacloud_Aiops20200806::Client::putAlertSettingStatusWithOptions(shared_ptr<PutAlertSettingStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->alertSettingId)) {
    body->insert(pair<string, long>("AlertSettingId", *request->alertSettingId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    body->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->settingStatus)) {
    body->insert(pair<string, long>("SettingStatus", *request->settingStatus));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PutAlertSettingStatus"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PutAlertSettingStatusResponse(callApi(params, req, runtime));
}

PutAlertSettingStatusResponse Alibabacloud_Aiops20200806::Client::putAlertSettingStatus(shared_ptr<PutAlertSettingStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return putAlertSettingStatusWithOptions(request, runtime);
}

PutDataSourceConfigResponse Alibabacloud_Aiops20200806::Client::putDataSourceConfigWithOptions(shared_ptr<PutDataSourceConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dataSourceDescribe)) {
    query->insert(pair<string, string>("DataSourceDescribe", *request->dataSourceDescribe));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataSourceName)) {
    query->insert(pair<string, string>("DataSourceName", *request->dataSourceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataSourceParams)) {
    query->insert(pair<string, string>("DataSourceParams", *request->dataSourceParams));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataSourceParamsMapping)) {
    query->insert(pair<string, string>("DataSourceParamsMapping", *request->dataSourceParamsMapping));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->dataSourceType)) {
    query->insert(pair<string, long>("DataSourceType", *request->dataSourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    query->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PutDataSourceConfig"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PutDataSourceConfigResponse(callApi(params, req, runtime));
}

PutDataSourceConfigResponse Alibabacloud_Aiops20200806::Client::putDataSourceConfig(shared_ptr<PutDataSourceConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return putDataSourceConfigWithOptions(request, runtime);
}

PutGroupResourceTagResponse Alibabacloud_Aiops20200806::Client::putGroupResourceTagWithOptions(shared_ptr<PutGroupResourceTagRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PutGroupResourceTag"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PutGroupResourceTagResponse(callApi(params, req, runtime));
}

PutGroupResourceTagResponse Alibabacloud_Aiops20200806::Client::putGroupResourceTag(shared_ptr<PutGroupResourceTagRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return putGroupResourceTagWithOptions(request, runtime);
}

PutGroupTopologyTagLogResponse Alibabacloud_Aiops20200806::Client::putGroupTopologyTagLogWithOptions(shared_ptr<PutGroupTopologyTagLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PutGroupTopologyTagLog"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PutGroupTopologyTagLogResponse(callApi(params, req, runtime));
}

PutGroupTopologyTagLogResponse Alibabacloud_Aiops20200806::Client::putGroupTopologyTagLog(shared_ptr<PutGroupTopologyTagLogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return putGroupTopologyTagLogWithOptions(request, runtime);
}

PutReportEmailConfigResponse Alibabacloud_Aiops20200806::Client::putReportEmailConfigWithOptions(shared_ptr<PutReportEmailConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->email)) {
    body->insert(pair<string, string>("Email", *request->email));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    body->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PutReportEmailConfig"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PutReportEmailConfigResponse(callApi(params, req, runtime));
}

PutReportEmailConfigResponse Alibabacloud_Aiops20200806::Client::putReportEmailConfig(shared_ptr<PutReportEmailConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return putReportEmailConfigWithOptions(request, runtime);
}

PutResourceWhitelistResponse Alibabacloud_Aiops20200806::Client::putResourceWhitelistWithOptions(shared_ptr<PutResourceWhitelistRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    body->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    body->insert(pair<string, string>("ProductCode", *request->productCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceId)) {
    body->insert(pair<string, string>("ResourceId", *request->resourceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PutResourceWhitelist"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PutResourceWhitelistResponse(callApi(params, req, runtime));
}

PutResourceWhitelistResponse Alibabacloud_Aiops20200806::Client::putResourceWhitelist(shared_ptr<PutResourceWhitelistRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return putResourceWhitelistWithOptions(request, runtime);
}

ReplaceScriptListResponse Alibabacloud_Aiops20200806::Client::replaceScriptListWithOptions(shared_ptr<ReplaceScriptListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ReplaceScriptList"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ReplaceScriptListResponse(callApi(params, req, runtime));
}

ReplaceScriptListResponse Alibabacloud_Aiops20200806::Client::replaceScriptList(shared_ptr<ReplaceScriptListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return replaceScriptListWithOptions(request, runtime);
}

RevokeSubmitApplyPermissionResponse Alibabacloud_Aiops20200806::Client::revokeSubmitApplyPermissionWithOptions(shared_ptr<RevokeSubmitApplyPermissionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->switchFrontOperaUid)) {
    query->insert(pair<string, string>("SwitchFrontOperaUid", *request->switchFrontOperaUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->uid)) {
    query->insert(pair<string, long>("Uid", *request->uid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RevokeSubmitApplyPermission"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RevokeSubmitApplyPermissionResponse(callApi(params, req, runtime));
}

RevokeSubmitApplyPermissionResponse Alibabacloud_Aiops20200806::Client::revokeSubmitApplyPermission(shared_ptr<RevokeSubmitApplyPermissionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return revokeSubmitApplyPermissionWithOptions(request, runtime);
}

RunAnalysisProcessResponse Alibabacloud_Aiops20200806::Client::runAnalysisProcessWithOptions(shared_ptr<RunAnalysisProcessRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RunAnalysisProcess"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RunAnalysisProcessResponse(callApi(params, req, runtime));
}

RunAnalysisProcessResponse Alibabacloud_Aiops20200806::Client::runAnalysisProcess(shared_ptr<RunAnalysisProcessRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return runAnalysisProcessWithOptions(request, runtime);
}

RunCommandResponse Alibabacloud_Aiops20200806::Client::runCommandWithOptions(shared_ptr<RunCommandRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->commandContent)) {
    query->insert(pair<string, string>("CommandContent", *request->commandContent));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceIds)) {
    query->insert(pair<string, string>("InstanceIds", *request->instanceIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RunCommand"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RunCommandResponse(callApi(params, req, runtime));
}

RunCommandResponse Alibabacloud_Aiops20200806::Client::runCommand(shared_ptr<RunCommandRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return runCommandWithOptions(request, runtime);
}

RunForecastAnalyzeResponse Alibabacloud_Aiops20200806::Client::runForecastAnalyzeWithOptions(shared_ptr<RunForecastAnalyzeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->eventId)) {
    query->insert(pair<string, string>("EventId", *request->eventId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    query->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RunForecastAnalyze"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RunForecastAnalyzeResponse(callApi(params, req, runtime));
}

RunForecastAnalyzeResponse Alibabacloud_Aiops20200806::Client::runForecastAnalyze(shared_ptr<RunForecastAnalyzeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return runForecastAnalyzeWithOptions(request, runtime);
}

RunPatrolInspectionResponse Alibabacloud_Aiops20200806::Client::runPatrolInspectionWithOptions(shared_ptr<RunPatrolInspectionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RunPatrolInspection"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RunPatrolInspectionResponse(callApi(params, req, runtime));
}

RunPatrolInspectionResponse Alibabacloud_Aiops20200806::Client::runPatrolInspection(shared_ptr<RunPatrolInspectionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return runPatrolInspectionWithOptions(request, runtime);
}

RunRepairScriptResponse Alibabacloud_Aiops20200806::Client::runRepairScriptWithOptions(shared_ptr<RunRepairScriptRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->eventId)) {
    query->insert(pair<string, string>("EventId", *request->eventId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    query->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RunRepairScript"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RunRepairScriptResponse(callApi(params, req, runtime));
}

RunRepairScriptResponse Alibabacloud_Aiops20200806::Client::runRepairScript(shared_ptr<RunRepairScriptRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return runRepairScriptWithOptions(request, runtime);
}

RunRiskPatrolResponse Alibabacloud_Aiops20200806::Client::runRiskPatrolWithOptions(shared_ptr<RunRiskPatrolRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RunRiskPatrol"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RunRiskPatrolResponse(callApi(params, req, runtime));
}

RunRiskPatrolResponse Alibabacloud_Aiops20200806::Client::runRiskPatrol(shared_ptr<RunRiskPatrolRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return runRiskPatrolWithOptions(request, runtime);
}

SwitchUserTopResponse Alibabacloud_Aiops20200806::Client::switchUserTopWithOptions(shared_ptr<SwitchUserTopRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->switchFrontOperaUid)) {
    query->insert(pair<string, string>("SwitchFrontOperaUid", *request->switchFrontOperaUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->uid)) {
    query->insert(pair<string, long>("Uid", *request->uid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SwitchUserTop"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SwitchUserTopResponse(callApi(params, req, runtime));
}

SwitchUserTopResponse Alibabacloud_Aiops20200806::Client::switchUserTop(shared_ptr<SwitchUserTopRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return switchUserTopWithOptions(request, runtime);
}

UpdBusinessGroupResponse Alibabacloud_Aiops20200806::Client::updBusinessGroupWithOptions(shared_ptr<UpdBusinessGroupRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdBusinessGroupShrinkRequest> request = make_shared<UpdBusinessGroupShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->instanceList)) {
    request->instanceListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->instanceList, make_shared<string>("InstanceList"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aliUid)) {
    query->insert(pair<string, string>("AliUid", *request->aliUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->businessGroupDesc)) {
    query->insert(pair<string, string>("BusinessGroupDesc", *request->businessGroupDesc));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->businessGroupId)) {
    query->insert(pair<string, string>("BusinessGroupId", *request->businessGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->businessGroupName)) {
    query->insert(pair<string, string>("BusinessGroupName", *request->businessGroupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceListShrink)) {
    query->insert(pair<string, string>("InstanceList", *request->instanceListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceType)) {
    query->insert(pair<string, long>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->updateUser)) {
    query->insert(pair<string, string>("UpdateUser", *request->updateUser));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdBusinessGroup"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdBusinessGroupResponse(callApi(params, req, runtime));
}

UpdBusinessGroupResponse Alibabacloud_Aiops20200806::Client::updBusinessGroup(shared_ptr<UpdBusinessGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updBusinessGroupWithOptions(request, runtime);
}

UpdateAuthorizationResponse Alibabacloud_Aiops20200806::Client::updateAuthorizationWithOptions(shared_ptr<UpdateAuthorizationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateAuthorization"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateAuthorizationResponse(callApi(params, req, runtime));
}

UpdateAuthorizationResponse Alibabacloud_Aiops20200806::Client::updateAuthorization(shared_ptr<UpdateAuthorizationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateAuthorizationWithOptions(request, runtime);
}

UpdateBindMetricResponse Alibabacloud_Aiops20200806::Client::updateBindMetricWithOptions(shared_ptr<UpdateBindMetricRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    query->insert(pair<string, string>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->metricId)) {
    query->insert(pair<string, long>("MetricId", *request->metricId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    query->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateBindMetric"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateBindMetricResponse(callApi(params, req, runtime));
}

UpdateBindMetricResponse Alibabacloud_Aiops20200806::Client::updateBindMetric(shared_ptr<UpdateBindMetricRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateBindMetricWithOptions(request, runtime);
}

UpdateBusinessGroupResponse Alibabacloud_Aiops20200806::Client::updateBusinessGroupWithOptions(shared_ptr<UpdateBusinessGroupRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateBusinessGroupShrinkRequest> request = make_shared<UpdateBusinessGroupShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->instanceList)) {
    request->instanceListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->instanceList, make_shared<string>("InstanceList"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->aliUid)) {
    query->insert(pair<string, string>("AliUid", *request->aliUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->businessGroupDesc)) {
    query->insert(pair<string, string>("BusinessGroupDesc", *request->businessGroupDesc));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->businessGroupId)) {
    query->insert(pair<string, string>("BusinessGroupId", *request->businessGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->businessGroupName)) {
    query->insert(pair<string, string>("BusinessGroupName", *request->businessGroupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cloudResourceTypeId)) {
    query->insert(pair<string, string>("CloudResourceTypeId", *request->cloudResourceTypeId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->dealType)) {
    query->insert(pair<string, long>("DealType", *request->dealType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceListShrink)) {
    query->insert(pair<string, string>("InstanceList", *request->instanceListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    query->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceType)) {
    query->insert(pair<string, long>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->updateUser)) {
    query->insert(pair<string, string>("UpdateUser", *request->updateUser));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateBusinessGroup"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateBusinessGroupResponse(callApi(params, req, runtime));
}

UpdateBusinessGroupResponse Alibabacloud_Aiops20200806::Client::updateBusinessGroup(shared_ptr<UpdateBusinessGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateBusinessGroupWithOptions(request, runtime);
}

UpdateBusinessMetricAlertConfigResponse Alibabacloud_Aiops20200806::Client::updateBusinessMetricAlertConfigWithOptions(shared_ptr<UpdateBusinessMetricAlertConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateBusinessMetricAlertConfig"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateBusinessMetricAlertConfigResponse(callApi(params, req, runtime));
}

UpdateBusinessMetricAlertConfigResponse Alibabacloud_Aiops20200806::Client::updateBusinessMetricAlertConfig(shared_ptr<UpdateBusinessMetricAlertConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateBusinessMetricAlertConfigWithOptions(request, runtime);
}

UpdateBusinessMetricResourceResponse Alibabacloud_Aiops20200806::Client::updateBusinessMetricResourceWithOptions(shared_ptr<UpdateBusinessMetricResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->businessMetricId)) {
    query->insert(pair<string, long>("BusinessMetricId", *request->businessMetricId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    query->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceList)) {
    query->insert(pair<string, string>("ResourceList", *request->resourceList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateBusinessMetricResource"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateBusinessMetricResourceResponse(callApi(params, req, runtime));
}

UpdateBusinessMetricResourceResponse Alibabacloud_Aiops20200806::Client::updateBusinessMetricResource(shared_ptr<UpdateBusinessMetricResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateBusinessMetricResourceWithOptions(request, runtime);
}

UpdateDataSourceConfigResponse Alibabacloud_Aiops20200806::Client::updateDataSourceConfigWithOptions(shared_ptr<UpdateDataSourceConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dataSourceDescribe)) {
    query->insert(pair<string, string>("DataSourceDescribe", *request->dataSourceDescribe));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataSourceName)) {
    query->insert(pair<string, string>("DataSourceName", *request->dataSourceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataSourceParams)) {
    query->insert(pair<string, string>("DataSourceParams", *request->dataSourceParams));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataSourceParamsMapping)) {
    query->insert(pair<string, string>("DataSourceParamsMapping", *request->dataSourceParamsMapping));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->dataSourceType)) {
    query->insert(pair<string, long>("DataSourceType", *request->dataSourceType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    query->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateDataSourceConfig"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateDataSourceConfigResponse(callApi(params, req, runtime));
}

UpdateDataSourceConfigResponse Alibabacloud_Aiops20200806::Client::updateDataSourceConfig(shared_ptr<UpdateDataSourceConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateDataSourceConfigWithOptions(request, runtime);
}

UpdateHandleRiskResponse Alibabacloud_Aiops20200806::Client::updateHandleRiskWithOptions(shared_ptr<UpdateHandleRiskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateHandleRisk"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateHandleRiskResponse(callApi(params, req, runtime));
}

UpdateHandleRiskResponse Alibabacloud_Aiops20200806::Client::updateHandleRisk(shared_ptr<UpdateHandleRiskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateHandleRiskWithOptions(request, runtime);
}

UpdateHandleRiskBaseResponse Alibabacloud_Aiops20200806::Client::updateHandleRiskBaseWithOptions(shared_ptr<UpdateHandleRiskBaseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateHandleRiskBase"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateHandleRiskBaseResponse(callApi(params, req, runtime));
}

UpdateHandleRiskBaseResponse Alibabacloud_Aiops20200806::Client::updateHandleRiskBase(shared_ptr<UpdateHandleRiskBaseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateHandleRiskBaseWithOptions(request, runtime);
}

UpdateIgnoreRiskResponse Alibabacloud_Aiops20200806::Client::updateIgnoreRiskWithOptions(shared_ptr<UpdateIgnoreRiskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateIgnoreRisk"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateIgnoreRiskResponse(callApi(params, req, runtime));
}

UpdateIgnoreRiskResponse Alibabacloud_Aiops20200806::Client::updateIgnoreRisk(shared_ptr<UpdateIgnoreRiskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateIgnoreRiskWithOptions(request, runtime);
}

UpdateIgnoreRiskBaseResponse Alibabacloud_Aiops20200806::Client::updateIgnoreRiskBaseWithOptions(shared_ptr<UpdateIgnoreRiskBaseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateIgnoreRiskBase"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateIgnoreRiskBaseResponse(callApi(params, req, runtime));
}

UpdateIgnoreRiskBaseResponse Alibabacloud_Aiops20200806::Client::updateIgnoreRiskBase(shared_ptr<UpdateIgnoreRiskBaseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateIgnoreRiskBaseWithOptions(request, runtime);
}

UpdateInspectionSettingStatusResponse Alibabacloud_Aiops20200806::Client::updateInspectionSettingStatusWithOptions(shared_ptr<UpdateInspectionSettingStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    body->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->riskCode)) {
    body->insert(pair<string, string>("RiskCode", *request->riskCode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->riskEnableStatus)) {
    body->insert(pair<string, long>("RiskEnableStatus", *request->riskEnableStatus));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateInspectionSettingStatus"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateInspectionSettingStatusResponse(callApi(params, req, runtime));
}

UpdateInspectionSettingStatusResponse Alibabacloud_Aiops20200806::Client::updateInspectionSettingStatus(shared_ptr<UpdateInspectionSettingStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateInspectionSettingStatusWithOptions(request, runtime);
}

UpdateInspectionThresholdResponse Alibabacloud_Aiops20200806::Client::updateInspectionThresholdWithOptions(shared_ptr<UpdateInspectionThresholdRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    body->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->riskCode)) {
    body->insert(pair<string, string>("RiskCode", *request->riskCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thresholdItemListJson)) {
    body->insert(pair<string, string>("ThresholdItemListJson", *request->thresholdItemListJson));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateInspectionThreshold"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateInspectionThresholdResponse(callApi(params, req, runtime));
}

UpdateInspectionThresholdResponse Alibabacloud_Aiops20200806::Client::updateInspectionThreshold(shared_ptr<UpdateInspectionThresholdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateInspectionThresholdWithOptions(request, runtime);
}

UpdateOperationPermissionResponse Alibabacloud_Aiops20200806::Client::updateOperationPermissionWithOptions(shared_ptr<UpdateOperationPermissionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->permissionType)) {
    query->insert(pair<string, long>("PermissionType", *request->permissionType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->switchFrontOperaUid)) {
    query->insert(pair<string, string>("SwitchFrontOperaUid", *request->switchFrontOperaUid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->uid)) {
    query->insert(pair<string, long>("Uid", *request->uid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateOperationPermission"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateOperationPermissionResponse(callApi(params, req, runtime));
}

UpdateOperationPermissionResponse Alibabacloud_Aiops20200806::Client::updateOperationPermission(shared_ptr<UpdateOperationPermissionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateOperationPermissionWithOptions(request, runtime);
}

UpdateReportEmailConfigStatusResponse Alibabacloud_Aiops20200806::Client::updateReportEmailConfigStatusWithOptions(shared_ptr<UpdateReportEmailConfigStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->configStatus)) {
    body->insert(pair<string, long>("ConfigStatus", *request->configStatus));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->mailConfigId)) {
    body->insert(pair<string, long>("MailConfigId", *request->mailConfigId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    body->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateReportEmailConfigStatus"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateReportEmailConfigStatusResponse(callApi(params, req, runtime));
}

UpdateReportEmailConfigStatusResponse Alibabacloud_Aiops20200806::Client::updateReportEmailConfigStatus(shared_ptr<UpdateReportEmailConfigStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateReportEmailConfigStatusWithOptions(request, runtime);
}

UpdateReportSubscriptionResponse Alibabacloud_Aiops20200806::Client::updateReportSubscriptionWithOptions(shared_ptr<UpdateReportSubscriptionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->dayOfWeek)) {
    body->insert(pair<string, long>("DayOfWeek", *request->dayOfWeek));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->hourOfDay)) {
    body->insert(pair<string, long>("HourOfDay", *request->hourOfDay));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    body->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->reportName)) {
    body->insert(pair<string, string>("ReportName", *request->reportName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->subscribe)) {
    body->insert(pair<string, long>("Subscribe", *request->subscribe));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateReportSubscription"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateReportSubscriptionResponse(callApi(params, req, runtime));
}

UpdateReportSubscriptionResponse Alibabacloud_Aiops20200806::Client::updateReportSubscription(shared_ptr<UpdateReportSubscriptionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateReportSubscriptionWithOptions(request, runtime);
}

UpdateScenarioResponse Alibabacloud_Aiops20200806::Client::updateScenarioWithOptions(shared_ptr<UpdateScenarioRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->alertSettingId)) {
    query->insert(pair<string, long>("AlertSettingId", *request->alertSettingId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    query->insert(pair<string, string>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->level)) {
    query->insert(pair<string, long>("Level", *request->level));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    query->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateScenario"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateScenarioResponse(callApi(params, req, runtime));
}

UpdateScenarioResponse Alibabacloud_Aiops20200806::Client::updateScenario(shared_ptr<UpdateScenarioRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateScenarioWithOptions(request, runtime);
}

UpdateSceneResponse Alibabacloud_Aiops20200806::Client::updateSceneWithOptions(shared_ptr<UpdateSceneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->flowName)) {
    body->insert(pair<string, string>("FlowName", *request->flowName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->metricListJson)) {
    body->insert(pair<string, string>("MetricListJson", *request->metricListJson));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nodeListJson)) {
    body->insert(pair<string, string>("NodeListJson", *request->nodeListJson));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    body->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sceneDesc)) {
    body->insert(pair<string, string>("SceneDesc", *request->sceneDesc));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->sceneId)) {
    body->insert(pair<string, long>("SceneId", *request->sceneId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sceneName)) {
    body->insert(pair<string, string>("SceneName", *request->sceneName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sceneOwner)) {
    body->insert(pair<string, string>("SceneOwner", *request->sceneOwner));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sceneWebhook)) {
    body->insert(pair<string, string>("SceneWebhook", *request->sceneWebhook));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateScene"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateSceneResponse(callApi(params, req, runtime));
}

UpdateSceneResponse Alibabacloud_Aiops20200806::Client::updateScene(shared_ptr<UpdateSceneRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateSceneWithOptions(request, runtime);
}

UpdateSceneModelResponse Alibabacloud_Aiops20200806::Client::updateSceneModelWithOptions(shared_ptr<UpdateSceneModelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->fcFunctionName)) {
    body->insert(pair<string, string>("FcFunctionName", *request->fcFunctionName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fcHandler)) {
    body->insert(pair<string, string>("FcHandler", *request->fcHandler));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fcInitializer)) {
    body->insert(pair<string, string>("FcInitializer", *request->fcInitializer));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fcRegionNo)) {
    body->insert(pair<string, string>("FcRegionNo", *request->fcRegionNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fcServiceName)) {
    body->insert(pair<string, string>("FcServiceName", *request->fcServiceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modelDesc)) {
    body->insert(pair<string, string>("ModelDesc", *request->modelDesc));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->modelId)) {
    body->insert(pair<string, long>("ModelId", *request->modelId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->modelLanguage)) {
    body->insert(pair<string, long>("ModelLanguage", *request->modelLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modelMemo)) {
    body->insert(pair<string, string>("ModelMemo", *request->modelMemo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modelName)) {
    body->insert(pair<string, string>("ModelName", *request->modelName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->modelType)) {
    body->insert(pair<string, long>("ModelType", *request->modelType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    body->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->rootCauseDesc)) {
    body->insert(pair<string, string>("RootCauseDesc", *request->rootCauseDesc));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->rootCauseSolution)) {
    body->insert(pair<string, string>("RootCauseSolution", *request->rootCauseSolution));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateSceneModel"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateSceneModelResponse(callApi(params, req, runtime));
}

UpdateSceneModelResponse Alibabacloud_Aiops20200806::Client::updateSceneModel(shared_ptr<UpdateSceneModelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateSceneModelWithOptions(request, runtime);
}

UpdateSceneModelApplyResponse Alibabacloud_Aiops20200806::Client::updateSceneModelApplyWithOptions(shared_ptr<UpdateSceneModelApplyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->applyContent)) {
    body->insert(pair<string, string>("ApplyContent", *request->applyContent));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->applyId)) {
    body->insert(pair<string, long>("ApplyId", *request->applyId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->applyStatus)) {
    body->insert(pair<string, long>("ApplyStatus", *request->applyStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    body->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateSceneModelApply"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateSceneModelApplyResponse(callApi(params, req, runtime));
}

UpdateSceneModelApplyResponse Alibabacloud_Aiops20200806::Client::updateSceneModelApply(shared_ptr<UpdateSceneModelApplyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateSceneModelApplyWithOptions(request, runtime);
}

UpdateSceneModelCurVersionResponse Alibabacloud_Aiops20200806::Client::updateSceneModelCurVersionWithOptions(shared_ptr<UpdateSceneModelCurVersionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->extId)) {
    body->insert(pair<string, long>("ExtId", *request->extId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->modelId)) {
    body->insert(pair<string, long>("ModelId", *request->modelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    body->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateSceneModelCurVersion"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateSceneModelCurVersionResponse(callApi(params, req, runtime));
}

UpdateSceneModelCurVersionResponse Alibabacloud_Aiops20200806::Client::updateSceneModelCurVersion(shared_ptr<UpdateSceneModelCurVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateSceneModelCurVersionWithOptions(request, runtime);
}

UpdateSceneSystemModelStatusResponse Alibabacloud_Aiops20200806::Client::updateSceneSystemModelStatusWithOptions(shared_ptr<UpdateSceneSystemModelStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->modelId)) {
    body->insert(pair<string, long>("ModelId", *request->modelId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->modelStatus)) {
    body->insert(pair<string, long>("ModelStatus", *request->modelStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    body->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateSceneSystemModelStatus"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateSceneSystemModelStatusResponse(callApi(params, req, runtime));
}

UpdateSceneSystemModelStatusResponse Alibabacloud_Aiops20200806::Client::updateSceneSystemModelStatus(shared_ptr<UpdateSceneSystemModelStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateSceneSystemModelStatusWithOptions(request, runtime);
}

UpdateScenestatusResponse Alibabacloud_Aiops20200806::Client::updateScenestatusWithOptions(shared_ptr<UpdateScenestatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateScenestatus"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateScenestatusResponse(callApi(params, req, runtime));
}

UpdateScenestatusResponse Alibabacloud_Aiops20200806::Client::updateScenestatus(shared_ptr<UpdateScenestatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateScenestatusWithOptions(request, runtime);
}

UpdateScriptResponse Alibabacloud_Aiops20200806::Client::updateScriptWithOptions(shared_ptr<UpdateScriptRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->handleSuggestDesc)) {
    query->insert(pair<string, string>("HandleSuggestDesc", *request->handleSuggestDesc));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->id)) {
    query->insert(pair<string, long>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->metricName)) {
    query->insert(pair<string, string>("MetricName", *request->metricName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    query->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->productCode)) {
    query->insert(pair<string, string>("ProductCode", *request->productCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->rootCauseDesc)) {
    query->insert(pair<string, string>("RootCauseDesc", *request->rootCauseDesc));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->rootCausesLog)) {
    query->insert(pair<string, string>("RootCausesLog", *request->rootCausesLog));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sceneId)) {
    query->insert(pair<string, string>("SceneId", *request->sceneId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->script)) {
    query->insert(pair<string, string>("Script", *request->script));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scriptLanguage)) {
    query->insert(pair<string, string>("ScriptLanguage", *request->scriptLanguage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scriptName)) {
    query->insert(pair<string, string>("ScriptName", *request->scriptName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->status)) {
    query->insert(pair<string, long>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->type)) {
    query->insert(pair<string, long>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateScript"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateScriptResponse(callApi(params, req, runtime));
}

UpdateScriptResponse Alibabacloud_Aiops20200806::Client::updateScript(shared_ptr<UpdateScriptRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateScriptWithOptions(request, runtime);
}

UpdateStatusOfSceneResponse Alibabacloud_Aiops20200806::Client::updateStatusOfSceneWithOptions(shared_ptr<UpdateStatusOfSceneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->operaUid)) {
    body->insert(pair<string, string>("OperaUid", *request->operaUid));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->sceneId)) {
    body->insert(pair<string, long>("SceneId", *request->sceneId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->sceneStatus)) {
    body->insert(pair<string, long>("SceneStatus", *request->sceneStatus));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateStatusOfScene"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateStatusOfSceneResponse(callApi(params, req, runtime));
}

UpdateStatusOfSceneResponse Alibabacloud_Aiops20200806::Client::updateStatusOfScene(shared_ptr<UpdateStatusOfSceneRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateStatusOfSceneWithOptions(request, runtime);
}

UpdateTagInfoResponse Alibabacloud_Aiops20200806::Client::updateTagInfoWithOptions(shared_ptr<UpdateTagInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateTagInfo"))},
    {"version", boost::any(string("2020-08-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateTagInfoResponse(callApi(params, req, runtime));
}

UpdateTagInfoResponse Alibabacloud_Aiops20200806::Client::updateTagInfo(shared_ptr<UpdateTagInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateTagInfoWithOptions(request, runtime);
}

