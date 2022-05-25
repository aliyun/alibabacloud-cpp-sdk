// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/tdsr_20200101.hpp>
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

using namespace Alibabacloud_Tdsr20200101;

Alibabacloud_Tdsr20200101::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  _endpointMap = make_shared<map<string, string>>(map<string, string>({
    {"cn-hangzhou", "lyj.cn-hangzhou.aliyuncs.com"}
  })
);
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("tdsr"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Tdsr20200101::Client::getEndpoint(shared_ptr<string> productId,
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

AddMosaicsResponse Alibabacloud_Tdsr20200101::Client::addMosaicsWithOptions(shared_ptr<AddMosaicsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->markPosition)) {
    query->insert(pair<string, string>("MarkPosition", *request->markPosition));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subSceneId)) {
    query->insert(pair<string, string>("SubSceneId", *request->subSceneId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddMosaics"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddMosaicsResponse(callApi(params, req, runtime));
}

AddMosaicsResponse Alibabacloud_Tdsr20200101::Client::addMosaics(shared_ptr<AddMosaicsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addMosaicsWithOptions(request, runtime);
}

AddProjectResponse Alibabacloud_Tdsr20200101::Client::addProjectWithOptions(shared_ptr<AddProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->businessId)) {
    query->insert(pair<string, long>("BusinessId", *request->businessId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddProject"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddProjectResponse(callApi(params, req, runtime));
}

AddProjectResponse Alibabacloud_Tdsr20200101::Client::addProject(shared_ptr<AddProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addProjectWithOptions(request, runtime);
}

AddRelativePositionResponse Alibabacloud_Tdsr20200101::Client::addRelativePositionWithOptions(shared_ptr<AddRelativePositionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->relativePosition)) {
    query->insert(pair<string, string>("RelativePosition", *request->relativePosition));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sceneId)) {
    query->insert(pair<string, string>("SceneId", *request->sceneId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddRelativePosition"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddRelativePositionResponse(callApi(params, req, runtime));
}

AddRelativePositionResponse Alibabacloud_Tdsr20200101::Client::addRelativePosition(shared_ptr<AddRelativePositionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addRelativePositionWithOptions(request, runtime);
}

AddRoomPlanResponse Alibabacloud_Tdsr20200101::Client::addRoomPlanWithOptions(shared_ptr<AddRoomPlanRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->sceneId)) {
    query->insert(pair<string, string>("SceneId", *request->sceneId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddRoomPlan"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddRoomPlanResponse(callApi(params, req, runtime));
}

AddRoomPlanResponse Alibabacloud_Tdsr20200101::Client::addRoomPlan(shared_ptr<AddRoomPlanRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addRoomPlanWithOptions(request, runtime);
}

AddSceneResponse Alibabacloud_Tdsr20200101::Client::addSceneWithOptions(shared_ptr<AddSceneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->customerUid)) {
    query->insert(pair<string, string>("CustomerUid", *request->customerUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    query->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddScene"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddSceneResponse(callApi(params, req, runtime));
}

AddSceneResponse Alibabacloud_Tdsr20200101::Client::addScene(shared_ptr<AddSceneRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addSceneWithOptions(request, runtime);
}

AddSubSceneResponse Alibabacloud_Tdsr20200101::Client::addSubSceneWithOptions(shared_ptr<AddSubSceneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sceneId)) {
    query->insert(pair<string, string>("SceneId", *request->sceneId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uploadType)) {
    query->insert(pair<string, string>("UploadType", *request->uploadType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddSubScene"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddSubSceneResponse(callApi(params, req, runtime));
}

AddSubSceneResponse Alibabacloud_Tdsr20200101::Client::addSubScene(shared_ptr<AddSubSceneRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addSubSceneWithOptions(request, runtime);
}

CheckUserPropertyResponse Alibabacloud_Tdsr20200101::Client::checkUserPropertyWithOptions(shared_ptr<CheckUserPropertyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->uid)) {
    query->insert(pair<string, string>("Uid", *request->uid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CheckUserProperty"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CheckUserPropertyResponse(callApi(params, req, runtime));
}

CheckUserPropertyResponse Alibabacloud_Tdsr20200101::Client::checkUserProperty(shared_ptr<CheckUserPropertyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return checkUserPropertyWithOptions(request, runtime);
}

CopySceneResponse Alibabacloud_Tdsr20200101::Client::copySceneWithOptions(shared_ptr<CopySceneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->sceneId)) {
    query->insert(pair<string, string>("SceneId", *request->sceneId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sceneName)) {
    query->insert(pair<string, string>("SceneName", *request->sceneName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CopyScene"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CopySceneResponse(callApi(params, req, runtime));
}

CopySceneResponse Alibabacloud_Tdsr20200101::Client::copyScene(shared_ptr<CopySceneRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return copySceneWithOptions(request, runtime);
}

DetailProjectResponse Alibabacloud_Tdsr20200101::Client::detailProjectWithOptions(shared_ptr<DetailProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    query->insert(pair<string, string>("Id", *request->id));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DetailProject"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DetailProjectResponse(callApi(params, req, runtime));
}

DetailProjectResponse Alibabacloud_Tdsr20200101::Client::detailProject(shared_ptr<DetailProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return detailProjectWithOptions(request, runtime);
}

DetailSceneResponse Alibabacloud_Tdsr20200101::Client::detailSceneWithOptions(shared_ptr<DetailSceneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    query->insert(pair<string, string>("Id", *request->id));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DetailScene"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DetailSceneResponse(callApi(params, req, runtime));
}

DetailSceneResponse Alibabacloud_Tdsr20200101::Client::detailScene(shared_ptr<DetailSceneRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return detailSceneWithOptions(request, runtime);
}

DetailSubSceneResponse Alibabacloud_Tdsr20200101::Client::detailSubSceneWithOptions(shared_ptr<DetailSubSceneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    query->insert(pair<string, string>("Id", *request->id));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DetailSubScene"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DetailSubSceneResponse(callApi(params, req, runtime));
}

DetailSubSceneResponse Alibabacloud_Tdsr20200101::Client::detailSubScene(shared_ptr<DetailSubSceneRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return detailSubSceneWithOptions(request, runtime);
}

DropProjectResponse Alibabacloud_Tdsr20200101::Client::dropProjectWithOptions(shared_ptr<DropProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    query->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DropProject"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DropProjectResponse(callApi(params, req, runtime));
}

DropProjectResponse Alibabacloud_Tdsr20200101::Client::dropProject(shared_ptr<DropProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return dropProjectWithOptions(request, runtime);
}

DropSceneResponse Alibabacloud_Tdsr20200101::Client::dropSceneWithOptions(shared_ptr<DropSceneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    query->insert(pair<string, string>("Id", *request->id));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DropScene"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DropSceneResponse(callApi(params, req, runtime));
}

DropSceneResponse Alibabacloud_Tdsr20200101::Client::dropScene(shared_ptr<DropSceneRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return dropSceneWithOptions(request, runtime);
}

DropSubSceneResponse Alibabacloud_Tdsr20200101::Client::dropSubSceneWithOptions(shared_ptr<DropSubSceneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    query->insert(pair<string, string>("Id", *request->id));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DropSubScene"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DropSubSceneResponse(callApi(params, req, runtime));
}

DropSubSceneResponse Alibabacloud_Tdsr20200101::Client::dropSubScene(shared_ptr<DropSubSceneRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return dropSubSceneWithOptions(request, runtime);
}

GetConnDataResponse Alibabacloud_Tdsr20200101::Client::getConnDataWithOptions(shared_ptr<GetConnDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->sceneId)) {
    query->insert(pair<string, string>("SceneId", *request->sceneId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetConnData"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetConnDataResponse(callApi(params, req, runtime));
}

GetConnDataResponse Alibabacloud_Tdsr20200101::Client::getConnData(shared_ptr<GetConnDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getConnDataWithOptions(request, runtime);
}

GetCopySceneTaskStatusResponse Alibabacloud_Tdsr20200101::Client::getCopySceneTaskStatusWithOptions(shared_ptr<GetCopySceneTaskStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    query->insert(pair<string, string>("TaskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetCopySceneTaskStatus"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetCopySceneTaskStatusResponse(callApi(params, req, runtime));
}

GetCopySceneTaskStatusResponse Alibabacloud_Tdsr20200101::Client::getCopySceneTaskStatus(shared_ptr<GetCopySceneTaskStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getCopySceneTaskStatusWithOptions(request, runtime);
}

GetHotspotConfigResponse Alibabacloud_Tdsr20200101::Client::getHotspotConfigWithOptions(shared_ptr<GetHotspotConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domain)) {
    query->insert(pair<string, string>("Domain", *request->domain));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enabled)) {
    query->insert(pair<string, bool>("Enabled", *request->enabled));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->previewToken)) {
    query->insert(pair<string, string>("PreviewToken", *request->previewToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->type)) {
    query->insert(pair<string, long>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetHotspotConfig"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetHotspotConfigResponse(callApi(params, req, runtime));
}

GetHotspotConfigResponse Alibabacloud_Tdsr20200101::Client::getHotspotConfig(shared_ptr<GetHotspotConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getHotspotConfigWithOptions(request, runtime);
}

GetHotspotSceneDataResponse Alibabacloud_Tdsr20200101::Client::getHotspotSceneDataWithOptions(shared_ptr<GetHotspotSceneDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domain)) {
    query->insert(pair<string, string>("Domain", *request->domain));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enabled)) {
    query->insert(pair<string, bool>("Enabled", *request->enabled));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->previewToken)) {
    query->insert(pair<string, string>("PreviewToken", *request->previewToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->type)) {
    query->insert(pair<string, long>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetHotspotSceneData"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetHotspotSceneDataResponse(callApi(params, req, runtime));
}

GetHotspotSceneDataResponse Alibabacloud_Tdsr20200101::Client::getHotspotSceneData(shared_ptr<GetHotspotSceneDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getHotspotSceneDataWithOptions(request, runtime);
}

GetHotspotTagResponse Alibabacloud_Tdsr20200101::Client::getHotspotTagWithOptions(shared_ptr<GetHotspotTagRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domain)) {
    query->insert(pair<string, string>("Domain", *request->domain));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enabled)) {
    query->insert(pair<string, bool>("Enabled", *request->enabled));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->previewToken)) {
    query->insert(pair<string, string>("PreviewToken", *request->previewToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subSceneUuid)) {
    query->insert(pair<string, string>("SubSceneUuid", *request->subSceneUuid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetHotspotTag"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetHotspotTagResponse(callApi(params, req, runtime));
}

GetHotspotTagResponse Alibabacloud_Tdsr20200101::Client::getHotspotTag(shared_ptr<GetHotspotTagRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getHotspotTagWithOptions(request, runtime);
}

GetLayoutDataResponse Alibabacloud_Tdsr20200101::Client::getLayoutDataWithOptions(shared_ptr<GetLayoutDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->subSceneId)) {
    query->insert(pair<string, string>("SubSceneId", *request->subSceneId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetLayoutData"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetLayoutDataResponse(callApi(params, req, runtime));
}

GetLayoutDataResponse Alibabacloud_Tdsr20200101::Client::getLayoutData(shared_ptr<GetLayoutDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getLayoutDataWithOptions(request, runtime);
}

GetOriginLayoutDataResponse Alibabacloud_Tdsr20200101::Client::getOriginLayoutDataWithOptions(shared_ptr<GetOriginLayoutDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->subSceneId)) {
    query->insert(pair<string, string>("SubSceneId", *request->subSceneId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetOriginLayoutData"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetOriginLayoutDataResponse(callApi(params, req, runtime));
}

GetOriginLayoutDataResponse Alibabacloud_Tdsr20200101::Client::getOriginLayoutData(shared_ptr<GetOriginLayoutDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getOriginLayoutDataWithOptions(request, runtime);
}

GetOssPolicyResponse Alibabacloud_Tdsr20200101::Client::getOssPolicyWithOptions(shared_ptr<GetOssPolicyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->subSceneId)) {
    query->insert(pair<string, string>("SubSceneId", *request->subSceneId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetOssPolicy"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetOssPolicyResponse(callApi(params, req, runtime));
}

GetOssPolicyResponse Alibabacloud_Tdsr20200101::Client::getOssPolicy(shared_ptr<GetOssPolicyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getOssPolicyWithOptions(request, runtime);
}

GetPackSceneTaskStatusResponse Alibabacloud_Tdsr20200101::Client::getPackSceneTaskStatusWithOptions(shared_ptr<GetPackSceneTaskStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    query->insert(pair<string, string>("TaskId", *request->taskId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetPackSceneTaskStatus"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetPackSceneTaskStatusResponse(callApi(params, req, runtime));
}

GetPackSceneTaskStatusResponse Alibabacloud_Tdsr20200101::Client::getPackSceneTaskStatus(shared_ptr<GetPackSceneTaskStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getPackSceneTaskStatusWithOptions(request, runtime);
}

GetRectifyImageResponse Alibabacloud_Tdsr20200101::Client::getRectifyImageWithOptions(shared_ptr<GetRectifyImageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->subSceneId)) {
    query->insert(pair<string, string>("SubSceneId", *request->subSceneId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetRectifyImage"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetRectifyImageResponse(callApi(params, req, runtime));
}

GetRectifyImageResponse Alibabacloud_Tdsr20200101::Client::getRectifyImage(shared_ptr<GetRectifyImageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getRectifyImageWithOptions(request, runtime);
}

GetSceneBuildTaskStatusResponse Alibabacloud_Tdsr20200101::Client::getSceneBuildTaskStatusWithOptions(shared_ptr<GetSceneBuildTaskStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->sceneId)) {
    query->insert(pair<string, string>("SceneId", *request->sceneId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSceneBuildTaskStatus"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSceneBuildTaskStatusResponse(callApi(params, req, runtime));
}

GetSceneBuildTaskStatusResponse Alibabacloud_Tdsr20200101::Client::getSceneBuildTaskStatus(shared_ptr<GetSceneBuildTaskStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSceneBuildTaskStatusWithOptions(request, runtime);
}

GetScenePackUrlResponse Alibabacloud_Tdsr20200101::Client::getScenePackUrlWithOptions(shared_ptr<GetScenePackUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->sceneId)) {
    query->insert(pair<string, string>("SceneId", *request->sceneId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetScenePackUrl"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetScenePackUrlResponse(callApi(params, req, runtime));
}

GetScenePackUrlResponse Alibabacloud_Tdsr20200101::Client::getScenePackUrl(shared_ptr<GetScenePackUrlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getScenePackUrlWithOptions(request, runtime);
}

GetScenePreviewDataResponse Alibabacloud_Tdsr20200101::Client::getScenePreviewDataWithOptions(shared_ptr<GetScenePreviewDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domain)) {
    query->insert(pair<string, string>("Domain", *request->domain));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enabled)) {
    query->insert(pair<string, bool>("Enabled", *request->enabled));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->previewToken)) {
    query->insert(pair<string, string>("PreviewToken", *request->previewToken));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->showTag)) {
    query->insert(pair<string, bool>("ShowTag", *request->showTag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetScenePreviewData"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetScenePreviewDataResponse(callApi(params, req, runtime));
}

GetScenePreviewDataResponse Alibabacloud_Tdsr20200101::Client::getScenePreviewData(shared_ptr<GetScenePreviewDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getScenePreviewDataWithOptions(request, runtime);
}

GetScenePreviewInfoResponse Alibabacloud_Tdsr20200101::Client::getScenePreviewInfoWithOptions(shared_ptr<GetScenePreviewInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domain)) {
    query->insert(pair<string, string>("Domain", *request->domain));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enabled)) {
    query->insert(pair<string, bool>("Enabled", *request->enabled));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modelToken)) {
    query->insert(pair<string, string>("ModelToken", *request->modelToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetScenePreviewInfo"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetScenePreviewInfoResponse(callApi(params, req, runtime));
}

GetScenePreviewInfoResponse Alibabacloud_Tdsr20200101::Client::getScenePreviewInfo(shared_ptr<GetScenePreviewInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getScenePreviewInfoWithOptions(request, runtime);
}

GetScenePreviewResourceResponse Alibabacloud_Tdsr20200101::Client::getScenePreviewResourceWithOptions(shared_ptr<GetScenePreviewResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->previewToken)) {
    query->insert(pair<string, string>("PreviewToken", *request->previewToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetScenePreviewResource"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetScenePreviewResourceResponse(callApi(params, req, runtime));
}

GetScenePreviewResourceResponse Alibabacloud_Tdsr20200101::Client::getScenePreviewResource(shared_ptr<GetScenePreviewResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getScenePreviewResourceWithOptions(request, runtime);
}

GetSingleConnDataResponse Alibabacloud_Tdsr20200101::Client::getSingleConnDataWithOptions(shared_ptr<GetSingleConnDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->subSceneId)) {
    query->insert(pair<string, string>("SubSceneId", *request->subSceneId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSingleConnData"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSingleConnDataResponse(callApi(params, req, runtime));
}

GetSingleConnDataResponse Alibabacloud_Tdsr20200101::Client::getSingleConnData(shared_ptr<GetSingleConnDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSingleConnDataWithOptions(request, runtime);
}

GetSourcePackStatusResponse Alibabacloud_Tdsr20200101::Client::getSourcePackStatusWithOptions(shared_ptr<GetSourcePackStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    query->insert(pair<string, string>("TaskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSourcePackStatus"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSourcePackStatusResponse(callApi(params, req, runtime));
}

GetSourcePackStatusResponse Alibabacloud_Tdsr20200101::Client::getSourcePackStatus(shared_ptr<GetSourcePackStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSourcePackStatusWithOptions(request, runtime);
}

GetSubSceneTaskStatusResponse Alibabacloud_Tdsr20200101::Client::getSubSceneTaskStatusWithOptions(shared_ptr<GetSubSceneTaskStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->subSceneId)) {
    query->insert(pair<string, string>("SubSceneId", *request->subSceneId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSubSceneTaskStatus"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSubSceneTaskStatusResponse(callApi(params, req, runtime));
}

GetSubSceneTaskStatusResponse Alibabacloud_Tdsr20200101::Client::getSubSceneTaskStatus(shared_ptr<GetSubSceneTaskStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSubSceneTaskStatusWithOptions(request, runtime);
}

GetTaskStatusResponse Alibabacloud_Tdsr20200101::Client::getTaskStatusWithOptions(shared_ptr<GetTaskStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    query->insert(pair<string, string>("TaskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTaskStatus"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTaskStatusResponse(callApi(params, req, runtime));
}

GetTaskStatusResponse Alibabacloud_Tdsr20200101::Client::getTaskStatus(shared_ptr<GetTaskStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getTaskStatusWithOptions(request, runtime);
}

GetWindowConfigResponse Alibabacloud_Tdsr20200101::Client::getWindowConfigWithOptions(shared_ptr<GetWindowConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->previewToken)) {
    query->insert(pair<string, string>("PreviewToken", *request->previewToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetWindowConfig"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetWindowConfigResponse(callApi(params, req, runtime));
}

GetWindowConfigResponse Alibabacloud_Tdsr20200101::Client::getWindowConfig(shared_ptr<GetWindowConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getWindowConfigWithOptions(request, runtime);
}

LabelBuildResponse Alibabacloud_Tdsr20200101::Client::labelBuildWithOptions(shared_ptr<LabelBuildRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->mode)) {
    query->insert(pair<string, string>("Mode", *request->mode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modelStyle)) {
    query->insert(pair<string, string>("ModelStyle", *request->modelStyle));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->optimizeWallWidth)) {
    query->insert(pair<string, string>("OptimizeWallWidth", *request->optimizeWallWidth));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->planStyle)) {
    query->insert(pair<string, string>("PlanStyle", *request->planStyle));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sceneId)) {
    query->insert(pair<string, string>("SceneId", *request->sceneId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->wallHeight)) {
    query->insert(pair<string, long>("WallHeight", *request->wallHeight));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("LabelBuild"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return LabelBuildResponse(callApi(params, req, runtime));
}

LabelBuildResponse Alibabacloud_Tdsr20200101::Client::labelBuild(shared_ptr<LabelBuildRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return labelBuildWithOptions(request, runtime);
}

LinkImageResponse Alibabacloud_Tdsr20200101::Client::linkImageWithOptions(shared_ptr<LinkImageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->cameraHeight)) {
    query->insert(pair<string, long>("CameraHeight", *request->cameraHeight));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileName)) {
    query->insert(pair<string, string>("FileName", *request->fileName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->platform)) {
    query->insert(pair<string, string>("Platform", *request->platform));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subSceneId)) {
    query->insert(pair<string, string>("SubSceneId", *request->subSceneId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("LinkImage"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return LinkImageResponse(callApi(params, req, runtime));
}

LinkImageResponse Alibabacloud_Tdsr20200101::Client::linkImage(shared_ptr<LinkImageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return linkImageWithOptions(request, runtime);
}

ListProjectResponse Alibabacloud_Tdsr20200101::Client::listProjectWithOptions(shared_ptr<ListProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
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
    {"action", boost::any(string("ListProject"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListProjectResponse(callApi(params, req, runtime));
}

ListProjectResponse Alibabacloud_Tdsr20200101::Client::listProject(shared_ptr<ListProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listProjectWithOptions(request, runtime);
}

ListSceneResponse Alibabacloud_Tdsr20200101::Client::listSceneWithOptions(shared_ptr<ListSceneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    query->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListScene"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListSceneResponse(callApi(params, req, runtime));
}

ListSceneResponse Alibabacloud_Tdsr20200101::Client::listScene(shared_ptr<ListSceneRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSceneWithOptions(request, runtime);
}

ListSubSceneResponse Alibabacloud_Tdsr20200101::Client::listSubSceneWithOptions(shared_ptr<ListSubSceneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sceneId)) {
    query->insert(pair<string, string>("SceneId", *request->sceneId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->showLayoutData)) {
    query->insert(pair<string, bool>("ShowLayoutData", *request->showLayoutData));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortField)) {
    query->insert(pair<string, string>("SortField", *request->sortField));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSubScene"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListSubSceneResponse(callApi(params, req, runtime));
}

ListSubSceneResponse Alibabacloud_Tdsr20200101::Client::listSubScene(shared_ptr<ListSubSceneRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSubSceneWithOptions(request, runtime);
}

OptimizeRightAngleResponse Alibabacloud_Tdsr20200101::Client::optimizeRightAngleWithOptions(shared_ptr<OptimizeRightAngleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->subSceneId)) {
    query->insert(pair<string, string>("SubSceneId", *request->subSceneId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("OptimizeRightAngle"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return OptimizeRightAngleResponse(callApi(params, req, runtime));
}

OptimizeRightAngleResponse Alibabacloud_Tdsr20200101::Client::optimizeRightAngle(shared_ptr<OptimizeRightAngleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return optimizeRightAngleWithOptions(request, runtime);
}

PackSceneResponse Alibabacloud_Tdsr20200101::Client::packSceneWithOptions(shared_ptr<PackSceneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->sceneId)) {
    query->insert(pair<string, string>("SceneId", *request->sceneId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PackScene"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PackSceneResponse(callApi(params, req, runtime));
}

PackSceneResponse Alibabacloud_Tdsr20200101::Client::packScene(shared_ptr<PackSceneRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return packSceneWithOptions(request, runtime);
}

PackSourceResponse Alibabacloud_Tdsr20200101::Client::packSourceWithOptions(shared_ptr<PackSourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->sceneId)) {
    query->insert(pair<string, string>("SceneId", *request->sceneId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PackSource"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PackSourceResponse(callApi(params, req, runtime));
}

PackSourceResponse Alibabacloud_Tdsr20200101::Client::packSource(shared_ptr<PackSourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return packSourceWithOptions(request, runtime);
}

PredImageResponse Alibabacloud_Tdsr20200101::Client::predImageWithOptions(shared_ptr<PredImageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->correctVertical)) {
    query->insert(pair<string, bool>("CorrectVertical", *request->correctVertical));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->countDetectDoor)) {
    query->insert(pair<string, long>("CountDetectDoor", *request->countDetectDoor));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->detectDoor)) {
    query->insert(pair<string, bool>("DetectDoor", *request->detectDoor));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subSceneId)) {
    query->insert(pair<string, string>("SubSceneId", *request->subSceneId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PredImage"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PredImageResponse(callApi(params, req, runtime));
}

PredImageResponse Alibabacloud_Tdsr20200101::Client::predImage(shared_ptr<PredImageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return predImageWithOptions(request, runtime);
}

PredictionWallLineResponse Alibabacloud_Tdsr20200101::Client::predictionWallLineWithOptions(shared_ptr<PredictionWallLineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->cameraHeight)) {
    query->insert(pair<string, long>("CameraHeight", *request->cameraHeight));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->url)) {
    query->insert(pair<string, string>("Url", *request->url));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PredictionWallLine"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PredictionWallLineResponse(callApi(params, req, runtime));
}

PredictionWallLineResponse Alibabacloud_Tdsr20200101::Client::predictionWallLine(shared_ptr<PredictionWallLineRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return predictionWallLineWithOptions(request, runtime);
}

PublishHotspotResponse Alibabacloud_Tdsr20200101::Client::publishHotspotWithOptions(shared_ptr<PublishHotspotRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->paramTag)) {
    query->insert(pair<string, string>("ParamTag", *request->paramTag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subSceneUuid)) {
    query->insert(pair<string, string>("SubSceneUuid", *request->subSceneUuid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PublishHotspot"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PublishHotspotResponse(callApi(params, req, runtime));
}

PublishHotspotResponse Alibabacloud_Tdsr20200101::Client::publishHotspot(shared_ptr<PublishHotspotRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return publishHotspotWithOptions(request, runtime);
}

PublishSceneResponse Alibabacloud_Tdsr20200101::Client::publishSceneWithOptions(shared_ptr<PublishSceneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->sceneId)) {
    query->insert(pair<string, string>("SceneId", *request->sceneId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PublishScene"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PublishSceneResponse(callApi(params, req, runtime));
}

PublishSceneResponse Alibabacloud_Tdsr20200101::Client::publishScene(shared_ptr<PublishSceneRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return publishSceneWithOptions(request, runtime);
}

PublishStatusResponse Alibabacloud_Tdsr20200101::Client::publishStatusWithOptions(shared_ptr<PublishStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->sceneId)) {
    query->insert(pair<string, string>("SceneId", *request->sceneId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PublishStatus"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PublishStatusResponse(callApi(params, req, runtime));
}

PublishStatusResponse Alibabacloud_Tdsr20200101::Client::publishStatus(shared_ptr<PublishStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return publishStatusWithOptions(request, runtime);
}

RecoveryOriginImageResponse Alibabacloud_Tdsr20200101::Client::recoveryOriginImageWithOptions(shared_ptr<RecoveryOriginImageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->subSceneId)) {
    query->insert(pair<string, string>("SubSceneId", *request->subSceneId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RecoveryOriginImage"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RecoveryOriginImageResponse(callApi(params, req, runtime));
}

RecoveryOriginImageResponse Alibabacloud_Tdsr20200101::Client::recoveryOriginImage(shared_ptr<RecoveryOriginImageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return recoveryOriginImageWithOptions(request, runtime);
}

RectVerticalResponse Alibabacloud_Tdsr20200101::Client::rectVerticalWithOptions(shared_ptr<RectVerticalRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->countDetectDoor)) {
    query->insert(pair<string, long>("CountDetectDoor", *request->countDetectDoor));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->detectDoor)) {
    query->insert(pair<string, bool>("DetectDoor", *request->detectDoor));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subSceneId)) {
    query->insert(pair<string, string>("SubSceneId", *request->subSceneId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->verticalRect)) {
    query->insert(pair<string, string>("VerticalRect", *request->verticalRect));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RectVertical"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RectVerticalResponse(callApi(params, req, runtime));
}

RectVerticalResponse Alibabacloud_Tdsr20200101::Client::rectVertical(shared_ptr<RectVerticalRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return rectVerticalWithOptions(request, runtime);
}

RectifyImageResponse Alibabacloud_Tdsr20200101::Client::rectifyImageWithOptions(shared_ptr<RectifyImageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->cameraHeight)) {
    query->insert(pair<string, long>("CameraHeight", *request->cameraHeight));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->url)) {
    query->insert(pair<string, string>("Url", *request->url));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RectifyImage"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RectifyImageResponse(callApi(params, req, runtime));
}

RectifyImageResponse Alibabacloud_Tdsr20200101::Client::rectifyImage(shared_ptr<RectifyImageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return rectifyImageWithOptions(request, runtime);
}

RollbackSubSceneResponse Alibabacloud_Tdsr20200101::Client::rollbackSubSceneWithOptions(shared_ptr<RollbackSubSceneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    query->insert(pair<string, string>("Id", *request->id));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RollbackSubScene"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RollbackSubSceneResponse(callApi(params, req, runtime));
}

RollbackSubSceneResponse Alibabacloud_Tdsr20200101::Client::rollbackSubScene(shared_ptr<RollbackSubSceneRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return rollbackSubSceneWithOptions(request, runtime);
}

SaveHotspotConfigResponse Alibabacloud_Tdsr20200101::Client::saveHotspotConfigWithOptions(shared_ptr<SaveHotspotConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->paramTag)) {
    query->insert(pair<string, string>("ParamTag", *request->paramTag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->previewToken)) {
    query->insert(pair<string, string>("PreviewToken", *request->previewToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SaveHotspotConfig"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SaveHotspotConfigResponse(callApi(params, req, runtime));
}

SaveHotspotConfigResponse Alibabacloud_Tdsr20200101::Client::saveHotspotConfig(shared_ptr<SaveHotspotConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveHotspotConfigWithOptions(request, runtime);
}

SaveHotspotTagResponse Alibabacloud_Tdsr20200101::Client::saveHotspotTagWithOptions(shared_ptr<SaveHotspotTagRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->paramTag)) {
    query->insert(pair<string, string>("ParamTag", *request->paramTag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subSceneUuid)) {
    query->insert(pair<string, string>("SubSceneUuid", *request->subSceneUuid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SaveHotspotTag"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SaveHotspotTagResponse(callApi(params, req, runtime));
}

SaveHotspotTagResponse Alibabacloud_Tdsr20200101::Client::saveHotspotTag(shared_ptr<SaveHotspotTagRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return saveHotspotTagWithOptions(request, runtime);
}

ScenePublishResponse Alibabacloud_Tdsr20200101::Client::scenePublishWithOptions(shared_ptr<ScenePublishRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->sceneId)) {
    query->insert(pair<string, string>("SceneId", *request->sceneId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ScenePublish"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ScenePublishResponse(callApi(params, req, runtime));
}

ScenePublishResponse Alibabacloud_Tdsr20200101::Client::scenePublish(shared_ptr<ScenePublishRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return scenePublishWithOptions(request, runtime);
}

TempPreviewResponse Alibabacloud_Tdsr20200101::Client::tempPreviewWithOptions(shared_ptr<TempPreviewRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->sceneId)) {
    query->insert(pair<string, string>("SceneId", *request->sceneId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TempPreview"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TempPreviewResponse(callApi(params, req, runtime));
}

TempPreviewResponse Alibabacloud_Tdsr20200101::Client::tempPreview(shared_ptr<TempPreviewRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return tempPreviewWithOptions(request, runtime);
}

TempPreviewStatusResponse Alibabacloud_Tdsr20200101::Client::tempPreviewStatusWithOptions(shared_ptr<TempPreviewStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->sceneId)) {
    query->insert(pair<string, string>("SceneId", *request->sceneId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TempPreviewStatus"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TempPreviewStatusResponse(callApi(params, req, runtime));
}

TempPreviewStatusResponse Alibabacloud_Tdsr20200101::Client::tempPreviewStatus(shared_ptr<TempPreviewStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return tempPreviewStatusWithOptions(request, runtime);
}

UpdateConnDataResponse Alibabacloud_Tdsr20200101::Client::updateConnDataWithOptions(shared_ptr<UpdateConnDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->connData)) {
    query->insert(pair<string, string>("ConnData", *request->connData));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sceneId)) {
    query->insert(pair<string, string>("SceneId", *request->sceneId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateConnData"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateConnDataResponse(callApi(params, req, runtime));
}

UpdateConnDataResponse Alibabacloud_Tdsr20200101::Client::updateConnData(shared_ptr<UpdateConnDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateConnDataWithOptions(request, runtime);
}

UpdateLayoutDataResponse Alibabacloud_Tdsr20200101::Client::updateLayoutDataWithOptions(shared_ptr<UpdateLayoutDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->layoutData)) {
    query->insert(pair<string, string>("LayoutData", *request->layoutData));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subSceneId)) {
    query->insert(pair<string, string>("SubSceneId", *request->subSceneId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateLayoutData"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateLayoutDataResponse(callApi(params, req, runtime));
}

UpdateLayoutDataResponse Alibabacloud_Tdsr20200101::Client::updateLayoutData(shared_ptr<UpdateLayoutDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateLayoutDataWithOptions(request, runtime);
}

UpdateProjectResponse Alibabacloud_Tdsr20200101::Client::updateProjectWithOptions(shared_ptr<UpdateProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->businessId)) {
    query->insert(pair<string, string>("BusinessId", *request->businessId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    query->insert(pair<string, string>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateProject"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateProjectResponse(callApi(params, req, runtime));
}

UpdateProjectResponse Alibabacloud_Tdsr20200101::Client::updateProject(shared_ptr<UpdateProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateProjectWithOptions(request, runtime);
}

UpdateSceneResponse Alibabacloud_Tdsr20200101::Client::updateSceneWithOptions(shared_ptr<UpdateSceneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    query->insert(pair<string, string>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateScene"))},
    {"version", boost::any(string("2020-01-01"))},
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

UpdateSceneResponse Alibabacloud_Tdsr20200101::Client::updateScene(shared_ptr<UpdateSceneRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateSceneWithOptions(request, runtime);
}

UpdateSubSceneResponse Alibabacloud_Tdsr20200101::Client::updateSubSceneWithOptions(shared_ptr<UpdateSubSceneRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateSubSceneShrinkRequest> request = make_shared<UpdateSubSceneShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<double>>(tmpReq->viewPoint)) {
    request->viewPointShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->viewPoint, make_shared<string>("ViewPoint"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->id)) {
    query->insert(pair<string, string>("Id", *request->id));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->viewPointShrink)) {
    query->insert(pair<string, string>("ViewPoint", *request->viewPointShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateSubScene"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateSubSceneResponse(callApi(params, req, runtime));
}

UpdateSubSceneResponse Alibabacloud_Tdsr20200101::Client::updateSubScene(shared_ptr<UpdateSubSceneRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateSubSceneWithOptions(request, runtime);
}

UpdateSubSceneSeqResponse Alibabacloud_Tdsr20200101::Client::updateSubSceneSeqWithOptions(shared_ptr<UpdateSubSceneSeqRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateSubSceneSeqShrinkRequest> request = make_shared<UpdateSubSceneSeqShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->sortSubSceneIds)) {
    request->sortSubSceneIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->sortSubSceneIds, make_shared<string>("SortSubSceneIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->sceneId)) {
    query->insert(pair<string, string>("SceneId", *request->sceneId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortSubSceneIdsShrink)) {
    query->insert(pair<string, string>("SortSubSceneIds", *request->sortSubSceneIdsShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateSubSceneSeq"))},
    {"version", boost::any(string("2020-01-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateSubSceneSeqResponse(callApi(params, req, runtime));
}

UpdateSubSceneSeqResponse Alibabacloud_Tdsr20200101::Client::updateSubSceneSeq(shared_ptr<UpdateSubSceneSeqRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateSubSceneSeqWithOptions(request, runtime);
}

