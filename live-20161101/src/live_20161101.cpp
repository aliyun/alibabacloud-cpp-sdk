// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/live_20161101.hpp>
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

using namespace Alibabacloud_Live20161101;

Alibabacloud_Live20161101::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  _endpointMap = make_shared<map<string, string>>(map<string, string>({
    {"cn-qingdao", "live.aliyuncs.com"},
    {"cn-beijing", "live.aliyuncs.com"},
    {"cn-hangzhou", "live.aliyuncs.com"},
    {"cn-shanghai", "live.aliyuncs.com"},
    {"cn-shenzhen", "live.aliyuncs.com"},
    {"ap-southeast-1", "live.aliyuncs.com"},
    {"ap-southeast-5", "live.aliyuncs.com"},
    {"ap-northeast-1", "live.aliyuncs.com"},
    {"eu-central-1", "live.aliyuncs.com"},
    {"ap-south-1", "live.aliyuncs.com"},
    {"ap-northeast-2-pop", "live.aliyuncs.com"},
    {"ap-southeast-2", "live.aliyuncs.com"},
    {"ap-southeast-3", "live.aliyuncs.com"},
    {"cn-beijing-finance-1", "live.aliyuncs.com"},
    {"cn-beijing-finance-pop", "live.aliyuncs.com"},
    {"cn-beijing-gov-1", "live.aliyuncs.com"},
    {"cn-beijing-nu16-b01", "live.aliyuncs.com"},
    {"cn-chengdu", "live.aliyuncs.com"},
    {"cn-edge-1", "live.aliyuncs.com"},
    {"cn-fujian", "live.aliyuncs.com"},
    {"cn-haidian-cm12-c01", "live.aliyuncs.com"},
    {"cn-hangzhou-bj-b01", "live.aliyuncs.com"},
    {"cn-hangzhou-finance", "live.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1", "live.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1", "live.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2", "live.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3", "live.aliyuncs.com"},
    {"cn-hangzhou-test-306", "live.aliyuncs.com"},
    {"cn-hongkong", "live.aliyuncs.com"},
    {"cn-hongkong-finance-pop", "live.aliyuncs.com"},
    {"cn-huhehaote", "live.aliyuncs.com"},
    {"cn-huhehaote-nebula-1", "live.aliyuncs.com"},
    {"cn-north-2-gov-1", "live.aliyuncs.com"},
    {"cn-qingdao-nebula", "live.aliyuncs.com"},
    {"cn-shanghai-et15-b01", "live.aliyuncs.com"},
    {"cn-shanghai-et2-b01", "live.aliyuncs.com"},
    {"cn-shanghai-finance-1", "live.aliyuncs.com"},
    {"cn-shanghai-inner", "live.aliyuncs.com"},
    {"cn-shanghai-internal-test-1", "live.aliyuncs.com"},
    {"cn-shenzhen-finance-1", "live.aliyuncs.com"},
    {"cn-shenzhen-inner", "live.aliyuncs.com"},
    {"cn-shenzhen-st4-d01", "live.aliyuncs.com"},
    {"cn-shenzhen-su18-b01", "live.aliyuncs.com"},
    {"cn-wuhan", "live.aliyuncs.com"},
    {"cn-wulanchabu", "live.aliyuncs.com"},
    {"cn-yushanfang", "live.aliyuncs.com"},
    {"cn-zhangbei", "live.aliyuncs.com"},
    {"cn-zhangbei-na61-b01", "live.aliyuncs.com"},
    {"cn-zhangjiakou", "live.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01", "live.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1", "live.aliyuncs.com"},
    {"eu-west-1", "live.aliyuncs.com"},
    {"eu-west-1-oxs", "live.aliyuncs.com"},
    {"me-east-1", "live.aliyuncs.com"},
    {"rus-west-1-pop", "live.aliyuncs.com"},
    {"us-east-1", "live.aliyuncs.com"},
    {"us-west-1", "live.aliyuncs.com"}
  })
);
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("live"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Live20161101::Client::getEndpoint(shared_ptr<string> productId,
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

AddCasterComponentResponse Alibabacloud_Live20161101::Client::addCasterComponentWithOptions(shared_ptr<AddCasterComponentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->captionLayerContent)) {
    query->insert(pair<string, string>("CaptionLayerContent", *request->captionLayerContent));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->casterId)) {
    query->insert(pair<string, string>("CasterId", *request->casterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->componentLayer)) {
    query->insert(pair<string, string>("ComponentLayer", *request->componentLayer));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->componentName)) {
    query->insert(pair<string, string>("ComponentName", *request->componentName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->componentType)) {
    query->insert(pair<string, string>("ComponentType", *request->componentType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->effect)) {
    query->insert(pair<string, string>("Effect", *request->effect));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->htmlLayerContent)) {
    query->insert(pair<string, string>("HtmlLayerContent", *request->htmlLayerContent));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageLayerContent)) {
    query->insert(pair<string, string>("ImageLayerContent", *request->imageLayerContent));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->layerOrder)) {
    query->insert(pair<string, string>("LayerOrder", *request->layerOrder));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->locationId)) {
    query->insert(pair<string, string>("LocationId", *request->locationId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->textLayerContent)) {
    query->insert(pair<string, string>("TextLayerContent", *request->textLayerContent));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddCasterComponent"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddCasterComponentResponse(callApi(params, req, runtime));
}

AddCasterComponentResponse Alibabacloud_Live20161101::Client::addCasterComponent(shared_ptr<AddCasterComponentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addCasterComponentWithOptions(request, runtime);
}

AddCasterEpisodeResponse Alibabacloud_Live20161101::Client::addCasterEpisodeWithOptions(shared_ptr<AddCasterEpisodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->casterId)) {
    query->insert(pair<string, string>("CasterId", *request->casterId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->componentId)) {
    query->insert(pair<string, vector<string>>("ComponentId", *request->componentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->episodeName)) {
    query->insert(pair<string, string>("EpisodeName", *request->episodeName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->episodeType)) {
    query->insert(pair<string, string>("EpisodeType", *request->episodeType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceId)) {
    query->insert(pair<string, string>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->switchType)) {
    query->insert(pair<string, string>("SwitchType", *request->switchType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddCasterEpisode"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddCasterEpisodeResponse(callApi(params, req, runtime));
}

AddCasterEpisodeResponse Alibabacloud_Live20161101::Client::addCasterEpisode(shared_ptr<AddCasterEpisodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addCasterEpisodeWithOptions(request, runtime);
}

AddCasterEpisodeGroupResponse Alibabacloud_Live20161101::Client::addCasterEpisodeGroupWithOptions(shared_ptr<AddCasterEpisodeGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->callbackUrl)) {
    query->insert(pair<string, string>("CallbackUrl", *request->callbackUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<vector<AddCasterEpisodeGroupRequestItem>>(request->item)) {
    query->insert(pair<string, vector<AddCasterEpisodeGroupRequestItem>>("Item", *request->item));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->repeatNum)) {
    query->insert(pair<string, long>("RepeatNum", *request->repeatNum));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sideOutputUrl)) {
    query->insert(pair<string, string>("SideOutputUrl", *request->sideOutputUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddCasterEpisodeGroup"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddCasterEpisodeGroupResponse(callApi(params, req, runtime));
}

AddCasterEpisodeGroupResponse Alibabacloud_Live20161101::Client::addCasterEpisodeGroup(shared_ptr<AddCasterEpisodeGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addCasterEpisodeGroupWithOptions(request, runtime);
}

AddCasterEpisodeGroupContentResponse Alibabacloud_Live20161101::Client::addCasterEpisodeGroupContentWithOptions(shared_ptr<AddCasterEpisodeGroupContentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->content)) {
    query->insert(pair<string, string>("Content", *request->content));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddCasterEpisodeGroupContent"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddCasterEpisodeGroupContentResponse(callApi(params, req, runtime));
}

AddCasterEpisodeGroupContentResponse Alibabacloud_Live20161101::Client::addCasterEpisodeGroupContent(shared_ptr<AddCasterEpisodeGroupContentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addCasterEpisodeGroupContentWithOptions(request, runtime);
}

AddCasterLayoutResponse Alibabacloud_Live20161101::Client::addCasterLayoutWithOptions(shared_ptr<AddCasterLayoutRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<AddCasterLayoutRequestAudioLayer>>(request->audioLayer)) {
    query->insert(pair<string, vector<AddCasterLayoutRequestAudioLayer>>("AudioLayer", *request->audioLayer));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->blendList)) {
    query->insert(pair<string, vector<string>>("BlendList", *request->blendList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->casterId)) {
    query->insert(pair<string, string>("CasterId", *request->casterId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->mixList)) {
    query->insert(pair<string, vector<string>>("MixList", *request->mixList));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<AddCasterLayoutRequestVideoLayer>>(request->videoLayer)) {
    query->insert(pair<string, vector<AddCasterLayoutRequestVideoLayer>>("VideoLayer", *request->videoLayer));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddCasterLayout"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddCasterLayoutResponse(callApi(params, req, runtime));
}

AddCasterLayoutResponse Alibabacloud_Live20161101::Client::addCasterLayout(shared_ptr<AddCasterLayoutRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addCasterLayoutWithOptions(request, runtime);
}

AddCasterProgramResponse Alibabacloud_Live20161101::Client::addCasterProgramWithOptions(shared_ptr<AddCasterProgramRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->casterId)) {
    query->insert(pair<string, string>("CasterId", *request->casterId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<AddCasterProgramRequestEpisode>>(request->episode)) {
    query->insert(pair<string, vector<AddCasterProgramRequestEpisode>>("Episode", *request->episode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddCasterProgram"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddCasterProgramResponse(callApi(params, req, runtime));
}

AddCasterProgramResponse Alibabacloud_Live20161101::Client::addCasterProgram(shared_ptr<AddCasterProgramRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addCasterProgramWithOptions(request, runtime);
}

AddCasterVideoResourceResponse Alibabacloud_Live20161101::Client::addCasterVideoResourceWithOptions(shared_ptr<AddCasterVideoResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->beginOffset)) {
    query->insert(pair<string, long>("BeginOffset", *request->beginOffset));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->casterId)) {
    query->insert(pair<string, string>("CasterId", *request->casterId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endOffset)) {
    query->insert(pair<string, long>("EndOffset", *request->endOffset));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->fixedDelayDuration)) {
    query->insert(pair<string, long>("FixedDelayDuration", *request->fixedDelayDuration));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->liveStreamUrl)) {
    query->insert(pair<string, string>("LiveStreamUrl", *request->liveStreamUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->locationId)) {
    query->insert(pair<string, string>("LocationId", *request->locationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->materialId)) {
    query->insert(pair<string, string>("MaterialId", *request->materialId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ptsCallbackInterval)) {
    query->insert(pair<string, long>("PtsCallbackInterval", *request->ptsCallbackInterval));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->repeatNum)) {
    query->insert(pair<string, long>("RepeatNum", *request->repeatNum));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceName)) {
    query->insert(pair<string, string>("ResourceName", *request->resourceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->streamId)) {
    query->insert(pair<string, string>("StreamId", *request->streamId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vodUrl)) {
    query->insert(pair<string, string>("VodUrl", *request->vodUrl));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddCasterVideoResource"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddCasterVideoResourceResponse(callApi(params, req, runtime));
}

AddCasterVideoResourceResponse Alibabacloud_Live20161101::Client::addCasterVideoResource(shared_ptr<AddCasterVideoResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addCasterVideoResourceWithOptions(request, runtime);
}

AddCustomLiveStreamTranscodeResponse Alibabacloud_Live20161101::Client::addCustomLiveStreamTranscodeWithOptions(shared_ptr<AddCustomLiveStreamTranscodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->app)) {
    query->insert(pair<string, string>("App", *request->app));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->audioBitrate)) {
    query->insert(pair<string, long>("AudioBitrate", *request->audioBitrate));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->audioChannelNum)) {
    query->insert(pair<string, long>("AudioChannelNum", *request->audioChannelNum));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->audioCodec)) {
    query->insert(pair<string, string>("AudioCodec", *request->audioCodec));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->audioProfile)) {
    query->insert(pair<string, string>("AudioProfile", *request->audioProfile));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->audioRate)) {
    query->insert(pair<string, long>("AudioRate", *request->audioRate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domain)) {
    query->insert(pair<string, string>("Domain", *request->domain));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->encryptParameters)) {
    query->insert(pair<string, string>("EncryptParameters", *request->encryptParameters));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->FPS)) {
    query->insert(pair<string, long>("FPS", *request->FPS));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gop)) {
    query->insert(pair<string, string>("Gop", *request->gop));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->height)) {
    query->insert(pair<string, long>("Height", *request->height));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->kmsKeyExpireInterval)) {
    query->insert(pair<string, string>("KmsKeyExpireInterval", *request->kmsKeyExpireInterval));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->kmsKeyID)) {
    query->insert(pair<string, string>("KmsKeyID", *request->kmsKeyID));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->kmsUID)) {
    query->insert(pair<string, string>("KmsUID", *request->kmsUID));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->profile)) {
    query->insert(pair<string, long>("Profile", *request->profile));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->template_)) {
    query->insert(pair<string, string>("Template_", *request->template_));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateType)) {
    query->insert(pair<string, string>("TemplateType", *request->templateType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->videoBitrate)) {
    query->insert(pair<string, long>("VideoBitrate", *request->videoBitrate));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->width)) {
    query->insert(pair<string, long>("Width", *request->width));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddCustomLiveStreamTranscode"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddCustomLiveStreamTranscodeResponse(callApi(params, req, runtime));
}

AddCustomLiveStreamTranscodeResponse Alibabacloud_Live20161101::Client::addCustomLiveStreamTranscode(shared_ptr<AddCustomLiveStreamTranscodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addCustomLiveStreamTranscodeWithOptions(request, runtime);
}

AddLiveAppRecordConfigResponse Alibabacloud_Live20161101::Client::addLiveAppRecordConfigWithOptions(shared_ptr<AddLiveAppRecordConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->onDemand)) {
    query->insert(pair<string, long>("OnDemand", *request->onDemand));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ossBucket)) {
    query->insert(pair<string, string>("OssBucket", *request->ossBucket));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ossEndpoint)) {
    query->insert(pair<string, string>("OssEndpoint", *request->ossEndpoint));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<AddLiveAppRecordConfigRequestRecordFormat>>(request->recordFormat)) {
    query->insert(pair<string, vector<AddLiveAppRecordConfigRequestRecordFormat>>("RecordFormat", *request->recordFormat));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->streamName)) {
    query->insert(pair<string, string>("StreamName", *request->streamName));
  }
  if (!Darabonba_Util::Client::isUnset<vector<AddLiveAppRecordConfigRequestTranscodeRecordFormat>>(request->transcodeRecordFormat)) {
    query->insert(pair<string, vector<AddLiveAppRecordConfigRequestTranscodeRecordFormat>>("TranscodeRecordFormat", *request->transcodeRecordFormat));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->transcodeTemplates)) {
    query->insert(pair<string, vector<string>>("TranscodeTemplates", *request->transcodeTemplates));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddLiveAppRecordConfig"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddLiveAppRecordConfigResponse(callApi(params, req, runtime));
}

AddLiveAppRecordConfigResponse Alibabacloud_Live20161101::Client::addLiveAppRecordConfig(shared_ptr<AddLiveAppRecordConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addLiveAppRecordConfigWithOptions(request, runtime);
}

AddLiveAppSnapshotConfigResponse Alibabacloud_Live20161101::Client::addLiveAppSnapshotConfigWithOptions(shared_ptr<AddLiveAppSnapshotConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->callback)) {
    query->insert(pair<string, string>("Callback", *request->callback));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ossBucket)) {
    query->insert(pair<string, string>("OssBucket", *request->ossBucket));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ossEndpoint)) {
    query->insert(pair<string, string>("OssEndpoint", *request->ossEndpoint));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->overwriteOssObject)) {
    query->insert(pair<string, string>("OverwriteOssObject", *request->overwriteOssObject));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sequenceOssObject)) {
    query->insert(pair<string, string>("SequenceOssObject", *request->sequenceOssObject));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->timeInterval)) {
    query->insert(pair<string, long>("TimeInterval", *request->timeInterval));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddLiveAppSnapshotConfig"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddLiveAppSnapshotConfigResponse(callApi(params, req, runtime));
}

AddLiveAppSnapshotConfigResponse Alibabacloud_Live20161101::Client::addLiveAppSnapshotConfig(shared_ptr<AddLiveAppSnapshotConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addLiveAppSnapshotConfigWithOptions(request, runtime);
}

AddLiveAudioAuditConfigResponse Alibabacloud_Live20161101::Client::addLiveAudioAuditConfigWithOptions(shared_ptr<AddLiveAudioAuditConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizType)) {
    query->insert(pair<string, string>("BizType", *request->bizType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ossBucket)) {
    query->insert(pair<string, string>("OssBucket", *request->ossBucket));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ossEndpoint)) {
    query->insert(pair<string, string>("OssEndpoint", *request->ossEndpoint));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ossObject)) {
    query->insert(pair<string, string>("OssObject", *request->ossObject));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->streamName)) {
    query->insert(pair<string, string>("StreamName", *request->streamName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddLiveAudioAuditConfig"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddLiveAudioAuditConfigResponse(callApi(params, req, runtime));
}

AddLiveAudioAuditConfigResponse Alibabacloud_Live20161101::Client::addLiveAudioAuditConfig(shared_ptr<AddLiveAudioAuditConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addLiveAudioAuditConfigWithOptions(request, runtime);
}

AddLiveAudioAuditNotifyConfigResponse Alibabacloud_Live20161101::Client::addLiveAudioAuditNotifyConfigWithOptions(shared_ptr<AddLiveAudioAuditNotifyConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->callback)) {
    query->insert(pair<string, string>("Callback", *request->callback));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->callbackTemplate)) {
    query->insert(pair<string, string>("CallbackTemplate", *request->callbackTemplate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddLiveAudioAuditNotifyConfig"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddLiveAudioAuditNotifyConfigResponse(callApi(params, req, runtime));
}

AddLiveAudioAuditNotifyConfigResponse Alibabacloud_Live20161101::Client::addLiveAudioAuditNotifyConfig(shared_ptr<AddLiveAudioAuditNotifyConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addLiveAudioAuditNotifyConfigWithOptions(request, runtime);
}

AddLiveDetectNotifyConfigResponse Alibabacloud_Live20161101::Client::addLiveDetectNotifyConfigWithOptions(shared_ptr<AddLiveDetectNotifyConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notifyUrl)) {
    query->insert(pair<string, string>("NotifyUrl", *request->notifyUrl));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddLiveDetectNotifyConfig"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddLiveDetectNotifyConfigResponse(callApi(params, req, runtime));
}

AddLiveDetectNotifyConfigResponse Alibabacloud_Live20161101::Client::addLiveDetectNotifyConfig(shared_ptr<AddLiveDetectNotifyConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addLiveDetectNotifyConfigWithOptions(request, runtime);
}

AddLiveDomainResponse Alibabacloud_Live20161101::Client::addLiveDomainWithOptions(shared_ptr<AddLiveDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->checkUrl)) {
    query->insert(pair<string, string>("CheckUrl", *request->checkUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->liveDomainType)) {
    query->insert(pair<string, string>("LiveDomainType", *request->liveDomainType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("Region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scope)) {
    query->insert(pair<string, string>("Scope", *request->scope));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->topLevelDomain)) {
    query->insert(pair<string, string>("TopLevelDomain", *request->topLevelDomain));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddLiveDomain"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddLiveDomainResponse(callApi(params, req, runtime));
}

AddLiveDomainResponse Alibabacloud_Live20161101::Client::addLiveDomain(shared_ptr<AddLiveDomainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addLiveDomainWithOptions(request, runtime);
}

AddLiveDomainMappingResponse Alibabacloud_Live20161101::Client::addLiveDomainMappingWithOptions(shared_ptr<AddLiveDomainMappingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pullDomain)) {
    query->insert(pair<string, string>("PullDomain", *request->pullDomain));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pushDomain)) {
    query->insert(pair<string, string>("PushDomain", *request->pushDomain));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddLiveDomainMapping"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddLiveDomainMappingResponse(callApi(params, req, runtime));
}

AddLiveDomainMappingResponse Alibabacloud_Live20161101::Client::addLiveDomainMapping(shared_ptr<AddLiveDomainMappingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addLiveDomainMappingWithOptions(request, runtime);
}

AddLiveDomainPlayMappingResponse Alibabacloud_Live20161101::Client::addLiveDomainPlayMappingWithOptions(shared_ptr<AddLiveDomainPlayMappingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->playDomain)) {
    query->insert(pair<string, string>("PlayDomain", *request->playDomain));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pullDomain)) {
    query->insert(pair<string, string>("PullDomain", *request->pullDomain));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddLiveDomainPlayMapping"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddLiveDomainPlayMappingResponse(callApi(params, req, runtime));
}

AddLiveDomainPlayMappingResponse Alibabacloud_Live20161101::Client::addLiveDomainPlayMapping(shared_ptr<AddLiveDomainPlayMappingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addLiveDomainPlayMappingWithOptions(request, runtime);
}

AddLivePullStreamInfoConfigResponse Alibabacloud_Live20161101::Client::addLivePullStreamInfoConfigWithOptions(shared_ptr<AddLivePullStreamInfoConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceUrl)) {
    query->insert(pair<string, string>("SourceUrl", *request->sourceUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->streamName)) {
    query->insert(pair<string, string>("StreamName", *request->streamName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddLivePullStreamInfoConfig"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddLivePullStreamInfoConfigResponse(callApi(params, req, runtime));
}

AddLivePullStreamInfoConfigResponse Alibabacloud_Live20161101::Client::addLivePullStreamInfoConfig(shared_ptr<AddLivePullStreamInfoConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addLivePullStreamInfoConfigWithOptions(request, runtime);
}

AddLiveRecordNotifyConfigResponse Alibabacloud_Live20161101::Client::addLiveRecordNotifyConfigWithOptions(shared_ptr<AddLiveRecordNotifyConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->needStatusNotify)) {
    query->insert(pair<string, bool>("NeedStatusNotify", *request->needStatusNotify));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notifyUrl)) {
    query->insert(pair<string, string>("NotifyUrl", *request->notifyUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->onDemandUrl)) {
    query->insert(pair<string, string>("OnDemandUrl", *request->onDemandUrl));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddLiveRecordNotifyConfig"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddLiveRecordNotifyConfigResponse(callApi(params, req, runtime));
}

AddLiveRecordNotifyConfigResponse Alibabacloud_Live20161101::Client::addLiveRecordNotifyConfig(shared_ptr<AddLiveRecordNotifyConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addLiveRecordNotifyConfigWithOptions(request, runtime);
}

AddLiveRecordVodConfigResponse Alibabacloud_Live20161101::Client::addLiveRecordVodConfigWithOptions(shared_ptr<AddLiveRecordVodConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->autoCompose)) {
    query->insert(pair<string, string>("AutoCompose", *request->autoCompose));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->composeVodTranscodeGroupId)) {
    query->insert(pair<string, string>("ComposeVodTranscodeGroupId", *request->composeVodTranscodeGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->cycleDuration)) {
    query->insert(pair<string, long>("CycleDuration", *request->cycleDuration));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->storageLocation)) {
    query->insert(pair<string, string>("StorageLocation", *request->storageLocation));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->streamName)) {
    query->insert(pair<string, string>("StreamName", *request->streamName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vodTranscodeGroupId)) {
    query->insert(pair<string, string>("VodTranscodeGroupId", *request->vodTranscodeGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddLiveRecordVodConfig"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddLiveRecordVodConfigResponse(callApi(params, req, runtime));
}

AddLiveRecordVodConfigResponse Alibabacloud_Live20161101::Client::addLiveRecordVodConfig(shared_ptr<AddLiveRecordVodConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addLiveRecordVodConfigWithOptions(request, runtime);
}

AddLiveSnapshotDetectPornConfigResponse Alibabacloud_Live20161101::Client::addLiveSnapshotDetectPornConfigWithOptions(shared_ptr<AddLiveSnapshotDetectPornConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->interval)) {
    query->insert(pair<string, long>("Interval", *request->interval));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ossBucket)) {
    query->insert(pair<string, string>("OssBucket", *request->ossBucket));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ossEndpoint)) {
    query->insert(pair<string, string>("OssEndpoint", *request->ossEndpoint));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ossObject)) {
    query->insert(pair<string, string>("OssObject", *request->ossObject));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->scene)) {
    query->insert(pair<string, vector<string>>("Scene", *request->scene));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddLiveSnapshotDetectPornConfig"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddLiveSnapshotDetectPornConfigResponse(callApi(params, req, runtime));
}

AddLiveSnapshotDetectPornConfigResponse Alibabacloud_Live20161101::Client::addLiveSnapshotDetectPornConfig(shared_ptr<AddLiveSnapshotDetectPornConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addLiveSnapshotDetectPornConfigWithOptions(request, runtime);
}

AddLiveSnapshotNotifyConfigResponse Alibabacloud_Live20161101::Client::addLiveSnapshotNotifyConfigWithOptions(shared_ptr<AddLiveSnapshotNotifyConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notifyAuthKey)) {
    query->insert(pair<string, string>("NotifyAuthKey", *request->notifyAuthKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notifyReqAuth)) {
    query->insert(pair<string, string>("NotifyReqAuth", *request->notifyReqAuth));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notifyUrl)) {
    query->insert(pair<string, string>("NotifyUrl", *request->notifyUrl));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddLiveSnapshotNotifyConfig"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddLiveSnapshotNotifyConfigResponse(callApi(params, req, runtime));
}

AddLiveSnapshotNotifyConfigResponse Alibabacloud_Live20161101::Client::addLiveSnapshotNotifyConfig(shared_ptr<AddLiveSnapshotNotifyConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addLiveSnapshotNotifyConfigWithOptions(request, runtime);
}

AddLiveStreamTranscodeResponse Alibabacloud_Live20161101::Client::addLiveStreamTranscodeWithOptions(shared_ptr<AddLiveStreamTranscodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->app)) {
    query->insert(pair<string, string>("App", *request->app));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domain)) {
    query->insert(pair<string, string>("Domain", *request->domain));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->encryptParameters)) {
    query->insert(pair<string, string>("EncryptParameters", *request->encryptParameters));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lazy)) {
    query->insert(pair<string, string>("Lazy", *request->lazy));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->template_)) {
    query->insert(pair<string, string>("Template_", *request->template_));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddLiveStreamTranscode"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddLiveStreamTranscodeResponse(callApi(params, req, runtime));
}

AddLiveStreamTranscodeResponse Alibabacloud_Live20161101::Client::addLiveStreamTranscode(shared_ptr<AddLiveStreamTranscodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addLiveStreamTranscodeWithOptions(request, runtime);
}

AddLiveStreamWatermarkResponse Alibabacloud_Live20161101::Client::addLiveStreamWatermarkWithOptions(shared_ptr<AddLiveStreamWatermarkRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->height)) {
    query->insert(pair<string, long>("Height", *request->height));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->offsetCorner)) {
    query->insert(pair<string, string>("OffsetCorner", *request->offsetCorner));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pictureUrl)) {
    query->insert(pair<string, string>("PictureUrl", *request->pictureUrl));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->refHeight)) {
    query->insert(pair<string, long>("RefHeight", *request->refHeight));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->refWidth)) {
    query->insert(pair<string, long>("RefWidth", *request->refWidth));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->transparency)) {
    query->insert(pair<string, long>("Transparency", *request->transparency));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->type)) {
    query->insert(pair<string, long>("Type", *request->type));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->XOffset)) {
    query->insert(pair<string, double>("XOffset", *request->XOffset));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->YOffset)) {
    query->insert(pair<string, double>("YOffset", *request->YOffset));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddLiveStreamWatermark"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddLiveStreamWatermarkResponse(callApi(params, req, runtime));
}

AddLiveStreamWatermarkResponse Alibabacloud_Live20161101::Client::addLiveStreamWatermark(shared_ptr<AddLiveStreamWatermarkRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addLiveStreamWatermarkWithOptions(request, runtime);
}

AddLiveStreamWatermarkRuleResponse Alibabacloud_Live20161101::Client::addLiveStreamWatermarkRuleWithOptions(shared_ptr<AddLiveStreamWatermarkRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->app)) {
    query->insert(pair<string, string>("App", *request->app));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domain)) {
    query->insert(pair<string, string>("Domain", *request->domain));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stream)) {
    query->insert(pair<string, string>("Stream", *request->stream));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    query->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddLiveStreamWatermarkRule"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddLiveStreamWatermarkRuleResponse(callApi(params, req, runtime));
}

AddLiveStreamWatermarkRuleResponse Alibabacloud_Live20161101::Client::addLiveStreamWatermarkRule(shared_ptr<AddLiveStreamWatermarkRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addLiveStreamWatermarkRuleWithOptions(request, runtime);
}

AddMultiRateConfigResponse Alibabacloud_Live20161101::Client::addMultiRateConfigWithOptions(shared_ptr<AddMultiRateConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->app)) {
    query->insert(pair<string, string>("App", *request->app));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->avFormat)) {
    query->insert(pair<string, string>("AvFormat", *request->avFormat));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->isLazy)) {
    query->insert(pair<string, string>("IsLazy", *request->isLazy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->isTimeAlign)) {
    query->insert(pair<string, string>("IsTimeAlign", *request->isTimeAlign));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templates)) {
    query->insert(pair<string, string>("Templates", *request->templates));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddMultiRateConfig"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddMultiRateConfigResponse(callApi(params, req, runtime));
}

AddMultiRateConfigResponse Alibabacloud_Live20161101::Client::addMultiRateConfig(shared_ptr<AddMultiRateConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addMultiRateConfigWithOptions(request, runtime);
}

AddPlaylistItemsResponse Alibabacloud_Live20161101::Client::addPlaylistItemsWithOptions(shared_ptr<AddPlaylistItemsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->casterId)) {
    query->insert(pair<string, string>("CasterId", *request->casterId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->programConfig)) {
    query->insert(pair<string, string>("ProgramConfig", *request->programConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->programId)) {
    query->insert(pair<string, string>("ProgramId", *request->programId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->programItems)) {
    query->insert(pair<string, string>("ProgramItems", *request->programItems));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddPlaylistItems"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddPlaylistItemsResponse(callApi(params, req, runtime));
}

AddPlaylistItemsResponse Alibabacloud_Live20161101::Client::addPlaylistItems(shared_ptr<AddPlaylistItemsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addPlaylistItemsWithOptions(request, runtime);
}

AddRtsLiveStreamTranscodeResponse Alibabacloud_Live20161101::Client::addRtsLiveStreamTranscodeWithOptions(shared_ptr<AddRtsLiveStreamTranscodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->app)) {
    query->insert(pair<string, string>("App", *request->app));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->audioBitrate)) {
    query->insert(pair<string, long>("AudioBitrate", *request->audioBitrate));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->audioChannelNum)) {
    query->insert(pair<string, long>("AudioChannelNum", *request->audioChannelNum));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->audioCodec)) {
    query->insert(pair<string, string>("AudioCodec", *request->audioCodec));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->audioProfile)) {
    query->insert(pair<string, string>("AudioProfile", *request->audioProfile));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->audioRate)) {
    query->insert(pair<string, long>("AudioRate", *request->audioRate));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->deleteBframes)) {
    query->insert(pair<string, bool>("DeleteBframes", *request->deleteBframes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domain)) {
    query->insert(pair<string, string>("Domain", *request->domain));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->FPS)) {
    query->insert(pair<string, long>("FPS", *request->FPS));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gop)) {
    query->insert(pair<string, string>("Gop", *request->gop));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->height)) {
    query->insert(pair<string, long>("Height", *request->height));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->lazy)) {
    query->insert(pair<string, string>("Lazy", *request->lazy));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->opus)) {
    query->insert(pair<string, bool>("Opus", *request->opus));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->profile)) {
    query->insert(pair<string, long>("Profile", *request->profile));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->template_)) {
    query->insert(pair<string, string>("Template_", *request->template_));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateType)) {
    query->insert(pair<string, string>("TemplateType", *request->templateType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->videoBitrate)) {
    query->insert(pair<string, long>("VideoBitrate", *request->videoBitrate));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->width)) {
    query->insert(pair<string, long>("Width", *request->width));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddRtsLiveStreamTranscode"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddRtsLiveStreamTranscodeResponse(callApi(params, req, runtime));
}

AddRtsLiveStreamTranscodeResponse Alibabacloud_Live20161101::Client::addRtsLiveStreamTranscode(shared_ptr<AddRtsLiveStreamTranscodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addRtsLiveStreamTranscodeWithOptions(request, runtime);
}

AddShowIntoShowListResponse Alibabacloud_Live20161101::Client::addShowIntoShowListWithOptions(shared_ptr<AddShowIntoShowListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->casterId)) {
    query->insert(pair<string, string>("CasterId", *request->casterId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->duration)) {
    query->insert(pair<string, long>("Duration", *request->duration));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->liveInputType)) {
    query->insert(pair<string, long>("LiveInputType", *request->liveInputType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->repeatTimes)) {
    query->insert(pair<string, long>("RepeatTimes", *request->repeatTimes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceId)) {
    query->insert(pair<string, string>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceUrl)) {
    query->insert(pair<string, string>("ResourceUrl", *request->resourceUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->showName)) {
    query->insert(pair<string, string>("ShowName", *request->showName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->spot)) {
    query->insert(pair<string, long>("Spot", *request->spot));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isBatchMode)) {
    query->insert(pair<string, bool>("isBatchMode", *request->isBatchMode));
  }
  if (!Darabonba_Util::Client::isUnset<vector<AddShowIntoShowListRequestShowList>>(request->showList)) {
    query->insert(pair<string, vector<AddShowIntoShowListRequestShowList>>("showList", *request->showList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddShowIntoShowList"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddShowIntoShowListResponse(callApi(params, req, runtime));
}

AddShowIntoShowListResponse Alibabacloud_Live20161101::Client::addShowIntoShowList(shared_ptr<AddShowIntoShowListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addShowIntoShowListWithOptions(request, runtime);
}

AddStudioLayoutResponse Alibabacloud_Live20161101::Client::addStudioLayoutWithOptions(shared_ptr<AddStudioLayoutRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bgImageConfig)) {
    query->insert(pair<string, string>("BgImageConfig", *request->bgImageConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->casterId)) {
    query->insert(pair<string, string>("CasterId", *request->casterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->commonConfig)) {
    query->insert(pair<string, string>("CommonConfig", *request->commonConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->layerOrderConfigList)) {
    query->insert(pair<string, string>("LayerOrderConfigList", *request->layerOrderConfigList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->layoutName)) {
    query->insert(pair<string, string>("LayoutName", *request->layoutName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->layoutType)) {
    query->insert(pair<string, string>("LayoutType", *request->layoutType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaInputConfigList)) {
    query->insert(pair<string, string>("MediaInputConfigList", *request->mediaInputConfigList));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->screenInputConfigList)) {
    query->insert(pair<string, string>("ScreenInputConfigList", *request->screenInputConfigList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddStudioLayout"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddStudioLayoutResponse(callApi(params, req, runtime));
}

AddStudioLayoutResponse Alibabacloud_Live20161101::Client::addStudioLayout(shared_ptr<AddStudioLayoutRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addStudioLayoutWithOptions(request, runtime);
}

AddTrancodeSEIResponse Alibabacloud_Live20161101::Client::addTrancodeSEIWithOptions(shared_ptr<AddTrancodeSEIRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->delay)) {
    query->insert(pair<string, long>("Delay", *request->delay));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pattern)) {
    query->insert(pair<string, string>("Pattern", *request->pattern));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->repeat)) {
    query->insert(pair<string, long>("Repeat", *request->repeat));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->streamName)) {
    query->insert(pair<string, string>("StreamName", *request->streamName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->text)) {
    query->insert(pair<string, string>("Text", *request->text));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddTrancodeSEI"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddTrancodeSEIResponse(callApi(params, req, runtime));
}

AddTrancodeSEIResponse Alibabacloud_Live20161101::Client::addTrancodeSEI(shared_ptr<AddTrancodeSEIRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addTrancodeSEIWithOptions(request, runtime);
}

AllowPushStreamResponse Alibabacloud_Live20161101::Client::allowPushStreamWithOptions(shared_ptr<AllowPushStreamRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->roomId)) {
    query->insert(pair<string, string>("RoomId", *request->roomId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AllowPushStream"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AllowPushStreamResponse(callApi(params, req, runtime));
}

AllowPushStreamResponse Alibabacloud_Live20161101::Client::allowPushStream(shared_ptr<AllowPushStreamRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return allowPushStreamWithOptions(request, runtime);
}

BatchDeleteLiveDomainConfigsResponse Alibabacloud_Live20161101::Client::batchDeleteLiveDomainConfigsWithOptions(shared_ptr<BatchDeleteLiveDomainConfigsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainNames)) {
    query->insert(pair<string, string>("DomainNames", *request->domainNames));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->functionNames)) {
    query->insert(pair<string, string>("FunctionNames", *request->functionNames));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BatchDeleteLiveDomainConfigs"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BatchDeleteLiveDomainConfigsResponse(callApi(params, req, runtime));
}

BatchDeleteLiveDomainConfigsResponse Alibabacloud_Live20161101::Client::batchDeleteLiveDomainConfigs(shared_ptr<BatchDeleteLiveDomainConfigsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchDeleteLiveDomainConfigsWithOptions(request, runtime);
}

BatchSetLiveDomainConfigsResponse Alibabacloud_Live20161101::Client::batchSetLiveDomainConfigsWithOptions(shared_ptr<BatchSetLiveDomainConfigsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainNames)) {
    query->insert(pair<string, string>("DomainNames", *request->domainNames));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->functions)) {
    query->insert(pair<string, string>("Functions", *request->functions));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BatchSetLiveDomainConfigs"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BatchSetLiveDomainConfigsResponse(callApi(params, req, runtime));
}

BatchSetLiveDomainConfigsResponse Alibabacloud_Live20161101::Client::batchSetLiveDomainConfigs(shared_ptr<BatchSetLiveDomainConfigsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchSetLiveDomainConfigsWithOptions(request, runtime);
}

CancelMuteAllGroupUserResponse Alibabacloud_Live20161101::Client::cancelMuteAllGroupUserWithOptions(shared_ptr<CancelMuteAllGroupUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    body->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operatorUserId)) {
    body->insert(pair<string, string>("OperatorUserId", *request->operatorUserId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CancelMuteAllGroupUser"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CancelMuteAllGroupUserResponse(callApi(params, req, runtime));
}

CancelMuteAllGroupUserResponse Alibabacloud_Live20161101::Client::cancelMuteAllGroupUser(shared_ptr<CancelMuteAllGroupUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelMuteAllGroupUserWithOptions(request, runtime);
}

CloseLiveShiftResponse Alibabacloud_Live20161101::Client::closeLiveShiftWithOptions(shared_ptr<CloseLiveShiftRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->streamName)) {
    query->insert(pair<string, string>("StreamName", *request->streamName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CloseLiveShift"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CloseLiveShiftResponse(callApi(params, req, runtime));
}

CloseLiveShiftResponse Alibabacloud_Live20161101::Client::closeLiveShift(shared_ptr<CloseLiveShiftRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return closeLiveShiftWithOptions(request, runtime);
}

CopyCasterResponse Alibabacloud_Live20161101::Client::copyCasterWithOptions(shared_ptr<CopyCasterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->casterName)) {
    query->insert(pair<string, string>("CasterName", *request->casterName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->srcCasterId)) {
    query->insert(pair<string, string>("SrcCasterId", *request->srcCasterId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CopyCaster"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CopyCasterResponse(callApi(params, req, runtime));
}

CopyCasterResponse Alibabacloud_Live20161101::Client::copyCaster(shared_ptr<CopyCasterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return copyCasterWithOptions(request, runtime);
}

CopyCasterSceneConfigResponse Alibabacloud_Live20161101::Client::copyCasterSceneConfigWithOptions(shared_ptr<CopyCasterSceneConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->casterId)) {
    query->insert(pair<string, string>("CasterId", *request->casterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fromSceneId)) {
    query->insert(pair<string, string>("FromSceneId", *request->fromSceneId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->toSceneId)) {
    query->insert(pair<string, string>("ToSceneId", *request->toSceneId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CopyCasterSceneConfig"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CopyCasterSceneConfigResponse(callApi(params, req, runtime));
}

CopyCasterSceneConfigResponse Alibabacloud_Live20161101::Client::copyCasterSceneConfig(shared_ptr<CopyCasterSceneConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return copyCasterSceneConfigWithOptions(request, runtime);
}

CreateCasterResponse Alibabacloud_Live20161101::Client::createCasterWithOptions(shared_ptr<CreateCasterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->casterName)) {
    query->insert(pair<string, string>("CasterName", *request->casterName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->casterTemplate)) {
    query->insert(pair<string, string>("CasterTemplate", *request->casterTemplate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->chargeType)) {
    query->insert(pair<string, string>("ChargeType", *request->chargeType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->expireTime)) {
    query->insert(pair<string, string>("ExpireTime", *request->expireTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->normType)) {
    query->insert(pair<string, long>("NormType", *request->normType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->purchaseTime)) {
    query->insert(pair<string, string>("PurchaseTime", *request->purchaseTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateCaster"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateCasterResponse(callApi(params, req, runtime));
}

CreateCasterResponse Alibabacloud_Live20161101::Client::createCaster(shared_ptr<CreateCasterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createCasterWithOptions(request, runtime);
}

CreateCustomTemplateResponse Alibabacloud_Live20161101::Client::createCustomTemplateWithOptions(shared_ptr<CreateCustomTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->customTemplate)) {
    query->insert(pair<string, string>("CustomTemplate", *request->customTemplate));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->template_)) {
    query->insert(pair<string, string>("Template_", *request->template_));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateCustomTemplate"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateCustomTemplateResponse(callApi(params, req, runtime));
}

CreateCustomTemplateResponse Alibabacloud_Live20161101::Client::createCustomTemplate(shared_ptr<CreateCustomTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createCustomTemplateWithOptions(request, runtime);
}

CreateLiveRealTimeLogDeliveryResponse Alibabacloud_Live20161101::Client::createLiveRealTimeLogDeliveryWithOptions(shared_ptr<CreateLiveRealTimeLogDeliveryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateLiveRealTimeLogDelivery"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateLiveRealTimeLogDeliveryResponse(callApi(params, req, runtime));
}

CreateLiveRealTimeLogDeliveryResponse Alibabacloud_Live20161101::Client::createLiveRealTimeLogDelivery(shared_ptr<CreateLiveRealTimeLogDeliveryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createLiveRealTimeLogDeliveryWithOptions(request, runtime);
}

CreateLiveStreamMonitorResponse Alibabacloud_Live20161101::Client::createLiveStreamMonitorWithOptions(shared_ptr<CreateLiveStreamMonitorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->app)) {
    query->insert(pair<string, string>("App", *request->app));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domain)) {
    query->insert(pair<string, string>("Domain", *request->domain));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputList)) {
    query->insert(pair<string, string>("InputList", *request->inputList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->monitorName)) {
    query->insert(pair<string, string>("MonitorName", *request->monitorName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outputTemplate)) {
    query->insert(pair<string, string>("OutputTemplate", *request->outputTemplate));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stream)) {
    query->insert(pair<string, string>("Stream", *request->stream));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateLiveStreamMonitor"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateLiveStreamMonitorResponse(callApi(params, req, runtime));
}

CreateLiveStreamMonitorResponse Alibabacloud_Live20161101::Client::createLiveStreamMonitor(shared_ptr<CreateLiveStreamMonitorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createLiveStreamMonitorWithOptions(request, runtime);
}

CreateLiveStreamRecordIndexFilesResponse Alibabacloud_Live20161101::Client::createLiveStreamRecordIndexFilesWithOptions(shared_ptr<CreateLiveStreamRecordIndexFilesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ossBucket)) {
    query->insert(pair<string, string>("OssBucket", *request->ossBucket));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ossEndpoint)) {
    query->insert(pair<string, string>("OssEndpoint", *request->ossEndpoint));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ossObject)) {
    query->insert(pair<string, string>("OssObject", *request->ossObject));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->streamName)) {
    query->insert(pair<string, string>("StreamName", *request->streamName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateLiveStreamRecordIndexFiles"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateLiveStreamRecordIndexFilesResponse(callApi(params, req, runtime));
}

CreateLiveStreamRecordIndexFilesResponse Alibabacloud_Live20161101::Client::createLiveStreamRecordIndexFiles(shared_ptr<CreateLiveStreamRecordIndexFilesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createLiveStreamRecordIndexFilesWithOptions(request, runtime);
}

CreateLiveTranscodeTemplateResponse Alibabacloud_Live20161101::Client::createLiveTranscodeTemplateWithOptions(shared_ptr<CreateLiveTranscodeTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateConfig)) {
    query->insert(pair<string, string>("TemplateConfig", *request->templateConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateLiveTranscodeTemplate"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateLiveTranscodeTemplateResponse(callApi(params, req, runtime));
}

CreateLiveTranscodeTemplateResponse Alibabacloud_Live20161101::Client::createLiveTranscodeTemplate(shared_ptr<CreateLiveTranscodeTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createLiveTranscodeTemplateWithOptions(request, runtime);
}

CreateMessageAppResponse Alibabacloud_Live20161101::Client::createMessageAppWithOptions(shared_ptr<CreateMessageAppRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateMessageAppShrinkRequest> request = make_shared<CreateMessageAppShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(tmpReq->appConfig)) {
    request->appConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->appConfig, make_shared<string>("AppConfig"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(tmpReq->extension)) {
    request->extensionShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->extension, make_shared<string>("Extension"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appConfigShrink)) {
    body->insert(pair<string, string>("AppConfig", *request->appConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    body->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extensionShrink)) {
    body->insert(pair<string, string>("Extension", *request->extensionShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateMessageApp"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateMessageAppResponse(callApi(params, req, runtime));
}

CreateMessageAppResponse Alibabacloud_Live20161101::Client::createMessageApp(shared_ptr<CreateMessageAppRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createMessageAppWithOptions(request, runtime);
}

CreateMessageGroupResponse Alibabacloud_Live20161101::Client::createMessageGroupWithOptions(shared_ptr<CreateMessageGroupRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateMessageGroupShrinkRequest> request = make_shared<CreateMessageGroupShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(tmpReq->extension)) {
    request->extensionShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->extension, make_shared<string>("Extension"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->creatorId)) {
    body->insert(pair<string, string>("CreatorId", *request->creatorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extensionShrink)) {
    body->insert(pair<string, string>("Extension", *request->extensionShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateMessageGroup"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateMessageGroupResponse(callApi(params, req, runtime));
}

CreateMessageGroupResponse Alibabacloud_Live20161101::Client::createMessageGroup(shared_ptr<CreateMessageGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createMessageGroupWithOptions(request, runtime);
}

CreateMixStreamResponse Alibabacloud_Live20161101::Client::createMixStreamWithOptions(shared_ptr<CreateMixStreamRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->callbackConfig)) {
    query->insert(pair<string, string>("CallbackConfig", *request->callbackConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputStreamList)) {
    query->insert(pair<string, string>("InputStreamList", *request->inputStreamList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->layoutId)) {
    query->insert(pair<string, string>("LayoutId", *request->layoutId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outputConfig)) {
    query->insert(pair<string, string>("OutputConfig", *request->outputConfig));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateMixStream"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateMixStreamResponse(callApi(params, req, runtime));
}

CreateMixStreamResponse Alibabacloud_Live20161101::Client::createMixStream(shared_ptr<CreateMixStreamRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createMixStreamWithOptions(request, runtime);
}

DeleteCasterResponse Alibabacloud_Live20161101::Client::deleteCasterWithOptions(shared_ptr<DeleteCasterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->casterId)) {
    query->insert(pair<string, string>("CasterId", *request->casterId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteCaster"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteCasterResponse(callApi(params, req, runtime));
}

DeleteCasterResponse Alibabacloud_Live20161101::Client::deleteCaster(shared_ptr<DeleteCasterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteCasterWithOptions(request, runtime);
}

DeleteCasterComponentResponse Alibabacloud_Live20161101::Client::deleteCasterComponentWithOptions(shared_ptr<DeleteCasterComponentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->casterId)) {
    query->insert(pair<string, string>("CasterId", *request->casterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->componentId)) {
    query->insert(pair<string, string>("ComponentId", *request->componentId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteCasterComponent"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteCasterComponentResponse(callApi(params, req, runtime));
}

DeleteCasterComponentResponse Alibabacloud_Live20161101::Client::deleteCasterComponent(shared_ptr<DeleteCasterComponentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteCasterComponentWithOptions(request, runtime);
}

DeleteCasterEpisodeResponse Alibabacloud_Live20161101::Client::deleteCasterEpisodeWithOptions(shared_ptr<DeleteCasterEpisodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->casterId)) {
    query->insert(pair<string, string>("CasterId", *request->casterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->episodeId)) {
    query->insert(pair<string, string>("EpisodeId", *request->episodeId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteCasterEpisode"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteCasterEpisodeResponse(callApi(params, req, runtime));
}

DeleteCasterEpisodeResponse Alibabacloud_Live20161101::Client::deleteCasterEpisode(shared_ptr<DeleteCasterEpisodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteCasterEpisodeWithOptions(request, runtime);
}

DeleteCasterEpisodeGroupResponse Alibabacloud_Live20161101::Client::deleteCasterEpisodeGroupWithOptions(shared_ptr<DeleteCasterEpisodeGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->programId)) {
    query->insert(pair<string, string>("ProgramId", *request->programId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteCasterEpisodeGroup"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteCasterEpisodeGroupResponse(callApi(params, req, runtime));
}

DeleteCasterEpisodeGroupResponse Alibabacloud_Live20161101::Client::deleteCasterEpisodeGroup(shared_ptr<DeleteCasterEpisodeGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteCasterEpisodeGroupWithOptions(request, runtime);
}

DeleteCasterLayoutResponse Alibabacloud_Live20161101::Client::deleteCasterLayoutWithOptions(shared_ptr<DeleteCasterLayoutRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->casterId)) {
    query->insert(pair<string, string>("CasterId", *request->casterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->layoutId)) {
    query->insert(pair<string, string>("LayoutId", *request->layoutId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteCasterLayout"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteCasterLayoutResponse(callApi(params, req, runtime));
}

DeleteCasterLayoutResponse Alibabacloud_Live20161101::Client::deleteCasterLayout(shared_ptr<DeleteCasterLayoutRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteCasterLayoutWithOptions(request, runtime);
}

DeleteCasterProgramResponse Alibabacloud_Live20161101::Client::deleteCasterProgramWithOptions(shared_ptr<DeleteCasterProgramRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->casterId)) {
    query->insert(pair<string, string>("CasterId", *request->casterId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteCasterProgram"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteCasterProgramResponse(callApi(params, req, runtime));
}

DeleteCasterProgramResponse Alibabacloud_Live20161101::Client::deleteCasterProgram(shared_ptr<DeleteCasterProgramRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteCasterProgramWithOptions(request, runtime);
}

DeleteCasterSceneConfigResponse Alibabacloud_Live20161101::Client::deleteCasterSceneConfigWithOptions(shared_ptr<DeleteCasterSceneConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->casterId)) {
    query->insert(pair<string, string>("CasterId", *request->casterId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
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
    {"action", boost::any(string("DeleteCasterSceneConfig"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteCasterSceneConfigResponse(callApi(params, req, runtime));
}

DeleteCasterSceneConfigResponse Alibabacloud_Live20161101::Client::deleteCasterSceneConfig(shared_ptr<DeleteCasterSceneConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteCasterSceneConfigWithOptions(request, runtime);
}

DeleteCasterVideoResourceResponse Alibabacloud_Live20161101::Client::deleteCasterVideoResourceWithOptions(shared_ptr<DeleteCasterVideoResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->casterId)) {
    query->insert(pair<string, string>("CasterId", *request->casterId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceId)) {
    query->insert(pair<string, string>("ResourceId", *request->resourceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteCasterVideoResource"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteCasterVideoResourceResponse(callApi(params, req, runtime));
}

DeleteCasterVideoResourceResponse Alibabacloud_Live20161101::Client::deleteCasterVideoResource(shared_ptr<DeleteCasterVideoResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteCasterVideoResourceWithOptions(request, runtime);
}

DeleteCustomTemplateResponse Alibabacloud_Live20161101::Client::deleteCustomTemplateWithOptions(shared_ptr<DeleteCustomTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->template_)) {
    query->insert(pair<string, string>("Template_", *request->template_));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteCustomTemplate"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteCustomTemplateResponse(callApi(params, req, runtime));
}

DeleteCustomTemplateResponse Alibabacloud_Live20161101::Client::deleteCustomTemplate(shared_ptr<DeleteCustomTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteCustomTemplateWithOptions(request, runtime);
}

DeleteLiveAppRecordConfigResponse Alibabacloud_Live20161101::Client::deleteLiveAppRecordConfigWithOptions(shared_ptr<DeleteLiveAppRecordConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->streamName)) {
    query->insert(pair<string, string>("StreamName", *request->streamName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteLiveAppRecordConfig"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteLiveAppRecordConfigResponse(callApi(params, req, runtime));
}

DeleteLiveAppRecordConfigResponse Alibabacloud_Live20161101::Client::deleteLiveAppRecordConfig(shared_ptr<DeleteLiveAppRecordConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteLiveAppRecordConfigWithOptions(request, runtime);
}

DeleteLiveAppSnapshotConfigResponse Alibabacloud_Live20161101::Client::deleteLiveAppSnapshotConfigWithOptions(shared_ptr<DeleteLiveAppSnapshotConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteLiveAppSnapshotConfig"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteLiveAppSnapshotConfigResponse(callApi(params, req, runtime));
}

DeleteLiveAppSnapshotConfigResponse Alibabacloud_Live20161101::Client::deleteLiveAppSnapshotConfig(shared_ptr<DeleteLiveAppSnapshotConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteLiveAppSnapshotConfigWithOptions(request, runtime);
}

DeleteLiveAudioAuditConfigResponse Alibabacloud_Live20161101::Client::deleteLiveAudioAuditConfigWithOptions(shared_ptr<DeleteLiveAudioAuditConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->streamName)) {
    query->insert(pair<string, string>("StreamName", *request->streamName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteLiveAudioAuditConfig"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteLiveAudioAuditConfigResponse(callApi(params, req, runtime));
}

DeleteLiveAudioAuditConfigResponse Alibabacloud_Live20161101::Client::deleteLiveAudioAuditConfig(shared_ptr<DeleteLiveAudioAuditConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteLiveAudioAuditConfigWithOptions(request, runtime);
}

DeleteLiveAudioAuditNotifyConfigResponse Alibabacloud_Live20161101::Client::deleteLiveAudioAuditNotifyConfigWithOptions(shared_ptr<DeleteLiveAudioAuditNotifyConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteLiveAudioAuditNotifyConfig"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteLiveAudioAuditNotifyConfigResponse(callApi(params, req, runtime));
}

DeleteLiveAudioAuditNotifyConfigResponse Alibabacloud_Live20161101::Client::deleteLiveAudioAuditNotifyConfig(shared_ptr<DeleteLiveAudioAuditNotifyConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteLiveAudioAuditNotifyConfigWithOptions(request, runtime);
}

DeleteLiveDetectNotifyConfigResponse Alibabacloud_Live20161101::Client::deleteLiveDetectNotifyConfigWithOptions(shared_ptr<DeleteLiveDetectNotifyConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteLiveDetectNotifyConfig"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteLiveDetectNotifyConfigResponse(callApi(params, req, runtime));
}

DeleteLiveDetectNotifyConfigResponse Alibabacloud_Live20161101::Client::deleteLiveDetectNotifyConfig(shared_ptr<DeleteLiveDetectNotifyConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteLiveDetectNotifyConfigWithOptions(request, runtime);
}

DeleteLiveDomainResponse Alibabacloud_Live20161101::Client::deleteLiveDomainWithOptions(shared_ptr<DeleteLiveDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteLiveDomain"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteLiveDomainResponse(callApi(params, req, runtime));
}

DeleteLiveDomainResponse Alibabacloud_Live20161101::Client::deleteLiveDomain(shared_ptr<DeleteLiveDomainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteLiveDomainWithOptions(request, runtime);
}

DeleteLiveDomainMappingResponse Alibabacloud_Live20161101::Client::deleteLiveDomainMappingWithOptions(shared_ptr<DeleteLiveDomainMappingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pullDomain)) {
    query->insert(pair<string, string>("PullDomain", *request->pullDomain));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pushDomain)) {
    query->insert(pair<string, string>("PushDomain", *request->pushDomain));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteLiveDomainMapping"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteLiveDomainMappingResponse(callApi(params, req, runtime));
}

DeleteLiveDomainMappingResponse Alibabacloud_Live20161101::Client::deleteLiveDomainMapping(shared_ptr<DeleteLiveDomainMappingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteLiveDomainMappingWithOptions(request, runtime);
}

DeleteLiveDomainPlayMappingResponse Alibabacloud_Live20161101::Client::deleteLiveDomainPlayMappingWithOptions(shared_ptr<DeleteLiveDomainPlayMappingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->playDomain)) {
    query->insert(pair<string, string>("PlayDomain", *request->playDomain));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pullDomain)) {
    query->insert(pair<string, string>("PullDomain", *request->pullDomain));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteLiveDomainPlayMapping"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteLiveDomainPlayMappingResponse(callApi(params, req, runtime));
}

DeleteLiveDomainPlayMappingResponse Alibabacloud_Live20161101::Client::deleteLiveDomainPlayMapping(shared_ptr<DeleteLiveDomainPlayMappingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteLiveDomainPlayMappingWithOptions(request, runtime);
}

DeleteLiveEdgeTransferResponse Alibabacloud_Live20161101::Client::deleteLiveEdgeTransferWithOptions(shared_ptr<DeleteLiveEdgeTransferRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteLiveEdgeTransfer"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteLiveEdgeTransferResponse(callApi(params, req, runtime));
}

DeleteLiveEdgeTransferResponse Alibabacloud_Live20161101::Client::deleteLiveEdgeTransfer(shared_ptr<DeleteLiveEdgeTransferRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteLiveEdgeTransferWithOptions(request, runtime);
}

DeleteLiveLazyPullStreamInfoConfigResponse Alibabacloud_Live20161101::Client::deleteLiveLazyPullStreamInfoConfigWithOptions(shared_ptr<DeleteLiveLazyPullStreamInfoConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteLiveLazyPullStreamInfoConfig"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteLiveLazyPullStreamInfoConfigResponse(callApi(params, req, runtime));
}

DeleteLiveLazyPullStreamInfoConfigResponse Alibabacloud_Live20161101::Client::deleteLiveLazyPullStreamInfoConfig(shared_ptr<DeleteLiveLazyPullStreamInfoConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteLiveLazyPullStreamInfoConfigWithOptions(request, runtime);
}

DeleteLivePullStreamInfoConfigResponse Alibabacloud_Live20161101::Client::deleteLivePullStreamInfoConfigWithOptions(shared_ptr<DeleteLivePullStreamInfoConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->streamName)) {
    query->insert(pair<string, string>("StreamName", *request->streamName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteLivePullStreamInfoConfig"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteLivePullStreamInfoConfigResponse(callApi(params, req, runtime));
}

DeleteLivePullStreamInfoConfigResponse Alibabacloud_Live20161101::Client::deleteLivePullStreamInfoConfig(shared_ptr<DeleteLivePullStreamInfoConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteLivePullStreamInfoConfigWithOptions(request, runtime);
}

DeleteLiveRealTimeLogLogstoreResponse Alibabacloud_Live20161101::Client::deleteLiveRealTimeLogLogstoreWithOptions(shared_ptr<DeleteLiveRealTimeLogLogstoreRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteLiveRealTimeLogLogstore"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteLiveRealTimeLogLogstoreResponse(callApi(params, req, runtime));
}

DeleteLiveRealTimeLogLogstoreResponse Alibabacloud_Live20161101::Client::deleteLiveRealTimeLogLogstore(shared_ptr<DeleteLiveRealTimeLogLogstoreRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteLiveRealTimeLogLogstoreWithOptions(request, runtime);
}

DeleteLiveRealtimeLogDeliveryResponse Alibabacloud_Live20161101::Client::deleteLiveRealtimeLogDeliveryWithOptions(shared_ptr<DeleteLiveRealtimeLogDeliveryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteLiveRealtimeLogDelivery"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteLiveRealtimeLogDeliveryResponse(callApi(params, req, runtime));
}

DeleteLiveRealtimeLogDeliveryResponse Alibabacloud_Live20161101::Client::deleteLiveRealtimeLogDelivery(shared_ptr<DeleteLiveRealtimeLogDeliveryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteLiveRealtimeLogDeliveryWithOptions(request, runtime);
}

DeleteLiveRecordNotifyConfigResponse Alibabacloud_Live20161101::Client::deleteLiveRecordNotifyConfigWithOptions(shared_ptr<DeleteLiveRecordNotifyConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteLiveRecordNotifyConfig"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteLiveRecordNotifyConfigResponse(callApi(params, req, runtime));
}

DeleteLiveRecordNotifyConfigResponse Alibabacloud_Live20161101::Client::deleteLiveRecordNotifyConfig(shared_ptr<DeleteLiveRecordNotifyConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteLiveRecordNotifyConfigWithOptions(request, runtime);
}

DeleteLiveRecordVodConfigResponse Alibabacloud_Live20161101::Client::deleteLiveRecordVodConfigWithOptions(shared_ptr<DeleteLiveRecordVodConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->streamName)) {
    query->insert(pair<string, string>("StreamName", *request->streamName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteLiveRecordVodConfig"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteLiveRecordVodConfigResponse(callApi(params, req, runtime));
}

DeleteLiveRecordVodConfigResponse Alibabacloud_Live20161101::Client::deleteLiveRecordVodConfig(shared_ptr<DeleteLiveRecordVodConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteLiveRecordVodConfigWithOptions(request, runtime);
}

DeleteLiveSnapshotDetectPornConfigResponse Alibabacloud_Live20161101::Client::deleteLiveSnapshotDetectPornConfigWithOptions(shared_ptr<DeleteLiveSnapshotDetectPornConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteLiveSnapshotDetectPornConfig"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteLiveSnapshotDetectPornConfigResponse(callApi(params, req, runtime));
}

DeleteLiveSnapshotDetectPornConfigResponse Alibabacloud_Live20161101::Client::deleteLiveSnapshotDetectPornConfig(shared_ptr<DeleteLiveSnapshotDetectPornConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteLiveSnapshotDetectPornConfigWithOptions(request, runtime);
}

DeleteLiveSnapshotNotifyConfigResponse Alibabacloud_Live20161101::Client::deleteLiveSnapshotNotifyConfigWithOptions(shared_ptr<DeleteLiveSnapshotNotifyConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteLiveSnapshotNotifyConfig"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteLiveSnapshotNotifyConfigResponse(callApi(params, req, runtime));
}

DeleteLiveSnapshotNotifyConfigResponse Alibabacloud_Live20161101::Client::deleteLiveSnapshotNotifyConfig(shared_ptr<DeleteLiveSnapshotNotifyConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteLiveSnapshotNotifyConfigWithOptions(request, runtime);
}

DeleteLiveSpecificStagingConfigResponse Alibabacloud_Live20161101::Client::deleteLiveSpecificStagingConfigWithOptions(shared_ptr<DeleteLiveSpecificStagingConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->configId)) {
    query->insert(pair<string, string>("ConfigId", *request->configId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteLiveSpecificStagingConfig"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteLiveSpecificStagingConfigResponse(callApi(params, req, runtime));
}

DeleteLiveSpecificStagingConfigResponse Alibabacloud_Live20161101::Client::deleteLiveSpecificStagingConfig(shared_ptr<DeleteLiveSpecificStagingConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteLiveSpecificStagingConfigWithOptions(request, runtime);
}

DeleteLiveStreamMonitorResponse Alibabacloud_Live20161101::Client::deleteLiveStreamMonitorWithOptions(shared_ptr<DeleteLiveStreamMonitorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->monitorId)) {
    query->insert(pair<string, string>("MonitorId", *request->monitorId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteLiveStreamMonitor"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteLiveStreamMonitorResponse(callApi(params, req, runtime));
}

DeleteLiveStreamMonitorResponse Alibabacloud_Live20161101::Client::deleteLiveStreamMonitor(shared_ptr<DeleteLiveStreamMonitorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteLiveStreamMonitorWithOptions(request, runtime);
}

DeleteLiveStreamRecordIndexFilesResponse Alibabacloud_Live20161101::Client::deleteLiveStreamRecordIndexFilesWithOptions(shared_ptr<DeleteLiveStreamRecordIndexFilesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->recordId)) {
    query->insert(pair<string, vector<string>>("RecordId", *request->recordId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->removeFile)) {
    query->insert(pair<string, string>("RemoveFile", *request->removeFile));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->streamName)) {
    query->insert(pair<string, string>("StreamName", *request->streamName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteLiveStreamRecordIndexFiles"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteLiveStreamRecordIndexFilesResponse(callApi(params, req, runtime));
}

DeleteLiveStreamRecordIndexFilesResponse Alibabacloud_Live20161101::Client::deleteLiveStreamRecordIndexFiles(shared_ptr<DeleteLiveStreamRecordIndexFilesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteLiveStreamRecordIndexFilesWithOptions(request, runtime);
}

DeleteLiveStreamTranscodeResponse Alibabacloud_Live20161101::Client::deleteLiveStreamTranscodeWithOptions(shared_ptr<DeleteLiveStreamTranscodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->app)) {
    query->insert(pair<string, string>("App", *request->app));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domain)) {
    query->insert(pair<string, string>("Domain", *request->domain));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->template_)) {
    query->insert(pair<string, string>("Template_", *request->template_));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteLiveStreamTranscode"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteLiveStreamTranscodeResponse(callApi(params, req, runtime));
}

DeleteLiveStreamTranscodeResponse Alibabacloud_Live20161101::Client::deleteLiveStreamTranscode(shared_ptr<DeleteLiveStreamTranscodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteLiveStreamTranscodeWithOptions(request, runtime);
}

DeleteLiveStreamWatermarkResponse Alibabacloud_Live20161101::Client::deleteLiveStreamWatermarkWithOptions(shared_ptr<DeleteLiveStreamWatermarkRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    query->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteLiveStreamWatermark"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteLiveStreamWatermarkResponse(callApi(params, req, runtime));
}

DeleteLiveStreamWatermarkResponse Alibabacloud_Live20161101::Client::deleteLiveStreamWatermark(shared_ptr<DeleteLiveStreamWatermarkRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteLiveStreamWatermarkWithOptions(request, runtime);
}

DeleteLiveStreamWatermarkRuleResponse Alibabacloud_Live20161101::Client::deleteLiveStreamWatermarkRuleWithOptions(shared_ptr<DeleteLiveStreamWatermarkRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->app)) {
    query->insert(pair<string, string>("App", *request->app));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domain)) {
    query->insert(pair<string, string>("Domain", *request->domain));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleId)) {
    query->insert(pair<string, string>("RuleId", *request->ruleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stream)) {
    query->insert(pair<string, string>("Stream", *request->stream));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteLiveStreamWatermarkRule"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteLiveStreamWatermarkRuleResponse(callApi(params, req, runtime));
}

DeleteLiveStreamWatermarkRuleResponse Alibabacloud_Live20161101::Client::deleteLiveStreamWatermarkRule(shared_ptr<DeleteLiveStreamWatermarkRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteLiveStreamWatermarkRuleWithOptions(request, runtime);
}

DeleteLiveStreamsNotifyUrlConfigResponse Alibabacloud_Live20161101::Client::deleteLiveStreamsNotifyUrlConfigWithOptions(shared_ptr<DeleteLiveStreamsNotifyUrlConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteLiveStreamsNotifyUrlConfig"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteLiveStreamsNotifyUrlConfigResponse(callApi(params, req, runtime));
}

DeleteLiveStreamsNotifyUrlConfigResponse Alibabacloud_Live20161101::Client::deleteLiveStreamsNotifyUrlConfig(shared_ptr<DeleteLiveStreamsNotifyUrlConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteLiveStreamsNotifyUrlConfigWithOptions(request, runtime);
}

DeleteMessageAppResponse Alibabacloud_Live20161101::Client::deleteMessageAppWithOptions(shared_ptr<DeleteMessageAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteMessageApp"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteMessageAppResponse(callApi(params, req, runtime));
}

DeleteMessageAppResponse Alibabacloud_Live20161101::Client::deleteMessageApp(shared_ptr<DeleteMessageAppRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteMessageAppWithOptions(request, runtime);
}

DeleteMixStreamResponse Alibabacloud_Live20161101::Client::deleteMixStreamWithOptions(shared_ptr<DeleteMixStreamRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mixStreamId)) {
    query->insert(pair<string, string>("MixStreamId", *request->mixStreamId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->streamName)) {
    query->insert(pair<string, string>("StreamName", *request->streamName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteMixStream"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteMixStreamResponse(callApi(params, req, runtime));
}

DeleteMixStreamResponse Alibabacloud_Live20161101::Client::deleteMixStream(shared_ptr<DeleteMixStreamRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteMixStreamWithOptions(request, runtime);
}

DeleteMultiRateConfigResponse Alibabacloud_Live20161101::Client::deleteMultiRateConfigWithOptions(shared_ptr<DeleteMultiRateConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->app)) {
    query->insert(pair<string, string>("App", *request->app));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deleteAll)) {
    query->insert(pair<string, string>("DeleteAll", *request->deleteAll));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templates)) {
    query->insert(pair<string, string>("Templates", *request->templates));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteMultiRateConfig"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteMultiRateConfigResponse(callApi(params, req, runtime));
}

DeleteMultiRateConfigResponse Alibabacloud_Live20161101::Client::deleteMultiRateConfig(shared_ptr<DeleteMultiRateConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteMultiRateConfigWithOptions(request, runtime);
}

DeletePlaylistResponse Alibabacloud_Live20161101::Client::deletePlaylistWithOptions(shared_ptr<DeletePlaylistRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->programId)) {
    query->insert(pair<string, string>("ProgramId", *request->programId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeletePlaylist"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeletePlaylistResponse(callApi(params, req, runtime));
}

DeletePlaylistResponse Alibabacloud_Live20161101::Client::deletePlaylist(shared_ptr<DeletePlaylistRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deletePlaylistWithOptions(request, runtime);
}

DeletePlaylistItemsResponse Alibabacloud_Live20161101::Client::deletePlaylistItemsWithOptions(shared_ptr<DeletePlaylistItemsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->programId)) {
    query->insert(pair<string, string>("ProgramId", *request->programId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->programItemIds)) {
    query->insert(pair<string, string>("ProgramItemIds", *request->programItemIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeletePlaylistItems"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeletePlaylistItemsResponse(callApi(params, req, runtime));
}

DeletePlaylistItemsResponse Alibabacloud_Live20161101::Client::deletePlaylistItems(shared_ptr<DeletePlaylistItemsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deletePlaylistItemsWithOptions(request, runtime);
}

DeleteRoomResponse Alibabacloud_Live20161101::Client::deleteRoomWithOptions(shared_ptr<DeleteRoomRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->roomId)) {
    query->insert(pair<string, string>("RoomId", *request->roomId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteRoom"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteRoomResponse(callApi(params, req, runtime));
}

DeleteRoomResponse Alibabacloud_Live20161101::Client::deleteRoom(shared_ptr<DeleteRoomRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteRoomWithOptions(request, runtime);
}

DeleteSnapshotCallbackAuthResponse Alibabacloud_Live20161101::Client::deleteSnapshotCallbackAuthWithOptions(shared_ptr<DeleteSnapshotCallbackAuthRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteSnapshotCallbackAuth"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteSnapshotCallbackAuthResponse(callApi(params, req, runtime));
}

DeleteSnapshotCallbackAuthResponse Alibabacloud_Live20161101::Client::deleteSnapshotCallbackAuth(shared_ptr<DeleteSnapshotCallbackAuthRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteSnapshotCallbackAuthWithOptions(request, runtime);
}

DeleteSnapshotFilesResponse Alibabacloud_Live20161101::Client::deleteSnapshotFilesWithOptions(shared_ptr<DeleteSnapshotFilesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->createTimestampList)) {
    query->insert(pair<string, vector<long>>("CreateTimestampList", *request->createTimestampList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->removeFile)) {
    query->insert(pair<string, bool>("RemoveFile", *request->removeFile));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->streamName)) {
    query->insert(pair<string, string>("StreamName", *request->streamName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteSnapshotFiles"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteSnapshotFilesResponse(callApi(params, req, runtime));
}

DeleteSnapshotFilesResponse Alibabacloud_Live20161101::Client::deleteSnapshotFiles(shared_ptr<DeleteSnapshotFilesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteSnapshotFilesWithOptions(request, runtime);
}

DeleteStudioLayoutResponse Alibabacloud_Live20161101::Client::deleteStudioLayoutWithOptions(shared_ptr<DeleteStudioLayoutRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->casterId)) {
    query->insert(pair<string, string>("CasterId", *request->casterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->layoutId)) {
    query->insert(pair<string, string>("LayoutId", *request->layoutId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteStudioLayout"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteStudioLayoutResponse(callApi(params, req, runtime));
}

DeleteStudioLayoutResponse Alibabacloud_Live20161101::Client::deleteStudioLayout(shared_ptr<DeleteStudioLayoutRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteStudioLayoutWithOptions(request, runtime);
}

DescribeAutoShowListTasksResponse Alibabacloud_Live20161101::Client::describeAutoShowListTasksWithOptions(shared_ptr<DescribeAutoShowListTasksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->casterId)) {
    query->insert(pair<string, string>("CasterId", *request->casterId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAutoShowListTasks"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAutoShowListTasksResponse(callApi(params, req, runtime));
}

DescribeAutoShowListTasksResponse Alibabacloud_Live20161101::Client::describeAutoShowListTasks(shared_ptr<DescribeAutoShowListTasksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAutoShowListTasksWithOptions(request, runtime);
}

DescribeCasterChannelsResponse Alibabacloud_Live20161101::Client::describeCasterChannelsWithOptions(shared_ptr<DescribeCasterChannelsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->casterId)) {
    query->insert(pair<string, string>("CasterId", *request->casterId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeCasterChannels"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeCasterChannelsResponse(callApi(params, req, runtime));
}

DescribeCasterChannelsResponse Alibabacloud_Live20161101::Client::describeCasterChannels(shared_ptr<DescribeCasterChannelsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCasterChannelsWithOptions(request, runtime);
}

DescribeCasterComponentsResponse Alibabacloud_Live20161101::Client::describeCasterComponentsWithOptions(shared_ptr<DescribeCasterComponentsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->casterId)) {
    query->insert(pair<string, string>("CasterId", *request->casterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->componentId)) {
    query->insert(pair<string, string>("ComponentId", *request->componentId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeCasterComponents"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeCasterComponentsResponse(callApi(params, req, runtime));
}

DescribeCasterComponentsResponse Alibabacloud_Live20161101::Client::describeCasterComponents(shared_ptr<DescribeCasterComponentsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCasterComponentsWithOptions(request, runtime);
}

DescribeCasterConfigResponse Alibabacloud_Live20161101::Client::describeCasterConfigWithOptions(shared_ptr<DescribeCasterConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->casterId)) {
    query->insert(pair<string, string>("CasterId", *request->casterId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeCasterConfig"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeCasterConfigResponse(callApi(params, req, runtime));
}

DescribeCasterConfigResponse Alibabacloud_Live20161101::Client::describeCasterConfig(shared_ptr<DescribeCasterConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCasterConfigWithOptions(request, runtime);
}

DescribeCasterLayoutsResponse Alibabacloud_Live20161101::Client::describeCasterLayoutsWithOptions(shared_ptr<DescribeCasterLayoutsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->casterId)) {
    query->insert(pair<string, string>("CasterId", *request->casterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->layoutId)) {
    query->insert(pair<string, string>("LayoutId", *request->layoutId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeCasterLayouts"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeCasterLayoutsResponse(callApi(params, req, runtime));
}

DescribeCasterLayoutsResponse Alibabacloud_Live20161101::Client::describeCasterLayouts(shared_ptr<DescribeCasterLayoutsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCasterLayoutsWithOptions(request, runtime);
}

DescribeCasterProgramResponse Alibabacloud_Live20161101::Client::describeCasterProgramWithOptions(shared_ptr<DescribeCasterProgramRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->casterId)) {
    query->insert(pair<string, string>("CasterId", *request->casterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->episodeId)) {
    query->insert(pair<string, string>("EpisodeId", *request->episodeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->episodeType)) {
    query->insert(pair<string, string>("EpisodeType", *request->episodeType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->status)) {
    query->insert(pair<string, long>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeCasterProgram"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeCasterProgramResponse(callApi(params, req, runtime));
}

DescribeCasterProgramResponse Alibabacloud_Live20161101::Client::describeCasterProgram(shared_ptr<DescribeCasterProgramRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCasterProgramWithOptions(request, runtime);
}

DescribeCasterSceneAudioResponse Alibabacloud_Live20161101::Client::describeCasterSceneAudioWithOptions(shared_ptr<DescribeCasterSceneAudioRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->casterId)) {
    query->insert(pair<string, string>("CasterId", *request->casterId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sceneId)) {
    query->insert(pair<string, string>("SceneId", *request->sceneId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeCasterSceneAudio"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeCasterSceneAudioResponse(callApi(params, req, runtime));
}

DescribeCasterSceneAudioResponse Alibabacloud_Live20161101::Client::describeCasterSceneAudio(shared_ptr<DescribeCasterSceneAudioRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCasterSceneAudioWithOptions(request, runtime);
}

DescribeCasterScenesResponse Alibabacloud_Live20161101::Client::describeCasterScenesWithOptions(shared_ptr<DescribeCasterScenesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->casterId)) {
    query->insert(pair<string, string>("CasterId", *request->casterId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sceneId)) {
    query->insert(pair<string, string>("SceneId", *request->sceneId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeCasterScenes"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeCasterScenesResponse(callApi(params, req, runtime));
}

DescribeCasterScenesResponse Alibabacloud_Live20161101::Client::describeCasterScenes(shared_ptr<DescribeCasterScenesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCasterScenesWithOptions(request, runtime);
}

DescribeCasterStreamUrlResponse Alibabacloud_Live20161101::Client::describeCasterStreamUrlWithOptions(shared_ptr<DescribeCasterStreamUrlRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->casterId)) {
    query->insert(pair<string, string>("CasterId", *request->casterId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeCasterStreamUrl"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeCasterStreamUrlResponse(callApi(params, req, runtime));
}

DescribeCasterStreamUrlResponse Alibabacloud_Live20161101::Client::describeCasterStreamUrl(shared_ptr<DescribeCasterStreamUrlRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCasterStreamUrlWithOptions(request, runtime);
}

DescribeCasterSyncGroupResponse Alibabacloud_Live20161101::Client::describeCasterSyncGroupWithOptions(shared_ptr<DescribeCasterSyncGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->casterId)) {
    query->insert(pair<string, string>("CasterId", *request->casterId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeCasterSyncGroup"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeCasterSyncGroupResponse(callApi(params, req, runtime));
}

DescribeCasterSyncGroupResponse Alibabacloud_Live20161101::Client::describeCasterSyncGroup(shared_ptr<DescribeCasterSyncGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCasterSyncGroupWithOptions(request, runtime);
}

DescribeCasterVideoResourcesResponse Alibabacloud_Live20161101::Client::describeCasterVideoResourcesWithOptions(shared_ptr<DescribeCasterVideoResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->casterId)) {
    query->insert(pair<string, string>("CasterId", *request->casterId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeCasterVideoResources"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeCasterVideoResourcesResponse(callApi(params, req, runtime));
}

DescribeCasterVideoResourcesResponse Alibabacloud_Live20161101::Client::describeCasterVideoResources(shared_ptr<DescribeCasterVideoResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCasterVideoResourcesWithOptions(request, runtime);
}

DescribeCastersResponse Alibabacloud_Live20161101::Client::describeCastersWithOptions(shared_ptr<DescribeCastersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->casterId)) {
    query->insert(pair<string, string>("CasterId", *request->casterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->casterName)) {
    query->insert(pair<string, string>("CasterName", *request->casterName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->chargeType)) {
    query->insert(pair<string, long>("ChargeType", *request->chargeType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->normType)) {
    query->insert(pair<string, string>("NormType", *request->normType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderByModifyAsc)) {
    query->insert(pair<string, string>("OrderByModifyAsc", *request->orderByModifyAsc));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->status)) {
    query->insert(pair<string, long>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeCasters"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeCastersResponse(callApi(params, req, runtime));
}

DescribeCastersResponse Alibabacloud_Live20161101::Client::describeCasters(shared_ptr<DescribeCastersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCastersWithOptions(request, runtime);
}

DescribeDomainUsageDataResponse Alibabacloud_Live20161101::Client::describeDomainUsageDataWithOptions(shared_ptr<DescribeDomainUsageDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->area)) {
    query->insert(pair<string, string>("Area", *request->area));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataProtocol)) {
    query->insert(pair<string, string>("DataProtocol", *request->dataProtocol));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->field)) {
    query->insert(pair<string, string>("Field", *request->field));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->interval)) {
    query->insert(pair<string, string>("Interval", *request->interval));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDomainUsageData"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDomainUsageDataResponse(callApi(params, req, runtime));
}

DescribeDomainUsageDataResponse Alibabacloud_Live20161101::Client::describeDomainUsageData(shared_ptr<DescribeDomainUsageDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDomainUsageDataWithOptions(request, runtime);
}

DescribeDomainWithIntegrityResponse Alibabacloud_Live20161101::Client::describeDomainWithIntegrityWithOptions(shared_ptr<DescribeDomainWithIntegrityRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeDomainWithIntegrity"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeDomainWithIntegrityResponse(callApi(params, req, runtime));
}

DescribeDomainWithIntegrityResponse Alibabacloud_Live20161101::Client::describeDomainWithIntegrity(shared_ptr<DescribeDomainWithIntegrityRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeDomainWithIntegrityWithOptions(request, runtime);
}

DescribeForbidPushStreamRoomListResponse Alibabacloud_Live20161101::Client::describeForbidPushStreamRoomListWithOptions(shared_ptr<DescribeForbidPushStreamRoomListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->order)) {
    query->insert(pair<string, string>("Order", *request->order));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
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
    {"action", boost::any(string("DescribeForbidPushStreamRoomList"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeForbidPushStreamRoomListResponse(callApi(params, req, runtime));
}

DescribeForbidPushStreamRoomListResponse Alibabacloud_Live20161101::Client::describeForbidPushStreamRoomList(shared_ptr<DescribeForbidPushStreamRoomListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeForbidPushStreamRoomListWithOptions(request, runtime);
}

DescribeHlsLiveStreamRealTimeBpsDataResponse Alibabacloud_Live20161101::Client::describeHlsLiveStreamRealTimeBpsDataWithOptions(shared_ptr<DescribeHlsLiveStreamRealTimeBpsDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeHlsLiveStreamRealTimeBpsData"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeHlsLiveStreamRealTimeBpsDataResponse(callApi(params, req, runtime));
}

DescribeHlsLiveStreamRealTimeBpsDataResponse Alibabacloud_Live20161101::Client::describeHlsLiveStreamRealTimeBpsData(shared_ptr<DescribeHlsLiveStreamRealTimeBpsDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeHlsLiveStreamRealTimeBpsDataWithOptions(request, runtime);
}

DescribeLiveAudioAuditConfigResponse Alibabacloud_Live20161101::Client::describeLiveAudioAuditConfigWithOptions(shared_ptr<DescribeLiveAudioAuditConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->streamName)) {
    query->insert(pair<string, string>("StreamName", *request->streamName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeLiveAudioAuditConfig"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeLiveAudioAuditConfigResponse(callApi(params, req, runtime));
}

DescribeLiveAudioAuditConfigResponse Alibabacloud_Live20161101::Client::describeLiveAudioAuditConfig(shared_ptr<DescribeLiveAudioAuditConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLiveAudioAuditConfigWithOptions(request, runtime);
}

DescribeLiveAudioAuditNotifyConfigResponse Alibabacloud_Live20161101::Client::describeLiveAudioAuditNotifyConfigWithOptions(shared_ptr<DescribeLiveAudioAuditNotifyConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeLiveAudioAuditNotifyConfig"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeLiveAudioAuditNotifyConfigResponse(callApi(params, req, runtime));
}

DescribeLiveAudioAuditNotifyConfigResponse Alibabacloud_Live20161101::Client::describeLiveAudioAuditNotifyConfig(shared_ptr<DescribeLiveAudioAuditNotifyConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLiveAudioAuditNotifyConfigWithOptions(request, runtime);
}

DescribeLiveCertificateDetailResponse Alibabacloud_Live20161101::Client::describeLiveCertificateDetailWithOptions(shared_ptr<DescribeLiveCertificateDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->certName)) {
    query->insert(pair<string, string>("CertName", *request->certName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeLiveCertificateDetail"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeLiveCertificateDetailResponse(callApi(params, req, runtime));
}

DescribeLiveCertificateDetailResponse Alibabacloud_Live20161101::Client::describeLiveCertificateDetail(shared_ptr<DescribeLiveCertificateDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLiveCertificateDetailWithOptions(request, runtime);
}

DescribeLiveCertificateListResponse Alibabacloud_Live20161101::Client::describeLiveCertificateListWithOptions(shared_ptr<DescribeLiveCertificateListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeLiveCertificateList"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeLiveCertificateListResponse(callApi(params, req, runtime));
}

DescribeLiveCertificateListResponse Alibabacloud_Live20161101::Client::describeLiveCertificateList(shared_ptr<DescribeLiveCertificateListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLiveCertificateListWithOptions(request, runtime);
}

DescribeLiveDetectNotifyConfigResponse Alibabacloud_Live20161101::Client::describeLiveDetectNotifyConfigWithOptions(shared_ptr<DescribeLiveDetectNotifyConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeLiveDetectNotifyConfig"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeLiveDetectNotifyConfigResponse(callApi(params, req, runtime));
}

DescribeLiveDetectNotifyConfigResponse Alibabacloud_Live20161101::Client::describeLiveDetectNotifyConfig(shared_ptr<DescribeLiveDetectNotifyConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLiveDetectNotifyConfigWithOptions(request, runtime);
}

DescribeLiveDetectPornDataResponse Alibabacloud_Live20161101::Client::describeLiveDetectPornDataWithOptions(shared_ptr<DescribeLiveDetectPornDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->app)) {
    query->insert(pair<string, string>("App", *request->app));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fee)) {
    query->insert(pair<string, string>("Fee", *request->fee));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("Region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scene)) {
    query->insert(pair<string, string>("Scene", *request->scene));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->splitBy)) {
    query->insert(pair<string, string>("SplitBy", *request->splitBy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stream)) {
    query->insert(pair<string, string>("Stream", *request->stream));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeLiveDetectPornData"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeLiveDetectPornDataResponse(callApi(params, req, runtime));
}

DescribeLiveDetectPornDataResponse Alibabacloud_Live20161101::Client::describeLiveDetectPornData(shared_ptr<DescribeLiveDetectPornDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLiveDetectPornDataWithOptions(request, runtime);
}

DescribeLiveDomainBpsDataResponse Alibabacloud_Live20161101::Client::describeLiveDomainBpsDataWithOptions(shared_ptr<DescribeLiveDomainBpsDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->interval)) {
    query->insert(pair<string, string>("Interval", *request->interval));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ispNameEn)) {
    query->insert(pair<string, string>("IspNameEn", *request->ispNameEn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->locationNameEn)) {
    query->insert(pair<string, string>("LocationNameEn", *request->locationNameEn));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeLiveDomainBpsData"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeLiveDomainBpsDataResponse(callApi(params, req, runtime));
}

DescribeLiveDomainBpsDataResponse Alibabacloud_Live20161101::Client::describeLiveDomainBpsData(shared_ptr<DescribeLiveDomainBpsDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLiveDomainBpsDataWithOptions(request, runtime);
}

DescribeLiveDomainBpsDataByLayerResponse Alibabacloud_Live20161101::Client::describeLiveDomainBpsDataByLayerWithOptions(shared_ptr<DescribeLiveDomainBpsDataByLayerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->interval)) {
    query->insert(pair<string, string>("Interval", *request->interval));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ispNameEn)) {
    query->insert(pair<string, string>("IspNameEn", *request->ispNameEn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->layer)) {
    query->insert(pair<string, string>("Layer", *request->layer));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->locationNameEn)) {
    query->insert(pair<string, string>("LocationNameEn", *request->locationNameEn));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeLiveDomainBpsDataByLayer"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeLiveDomainBpsDataByLayerResponse(callApi(params, req, runtime));
}

DescribeLiveDomainBpsDataByLayerResponse Alibabacloud_Live20161101::Client::describeLiveDomainBpsDataByLayer(shared_ptr<DescribeLiveDomainBpsDataByLayerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLiveDomainBpsDataByLayerWithOptions(request, runtime);
}

DescribeLiveDomainBpsDataByTimeStampResponse Alibabacloud_Live20161101::Client::describeLiveDomainBpsDataByTimeStampWithOptions(shared_ptr<DescribeLiveDomainBpsDataByTimeStampRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ispNames)) {
    query->insert(pair<string, string>("IspNames", *request->ispNames));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->locationNames)) {
    query->insert(pair<string, string>("LocationNames", *request->locationNames));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->timePoint)) {
    query->insert(pair<string, string>("TimePoint", *request->timePoint));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeLiveDomainBpsDataByTimeStamp"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeLiveDomainBpsDataByTimeStampResponse(callApi(params, req, runtime));
}

DescribeLiveDomainBpsDataByTimeStampResponse Alibabacloud_Live20161101::Client::describeLiveDomainBpsDataByTimeStamp(shared_ptr<DescribeLiveDomainBpsDataByTimeStampRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLiveDomainBpsDataByTimeStampWithOptions(request, runtime);
}

DescribeLiveDomainCertificateInfoResponse Alibabacloud_Live20161101::Client::describeLiveDomainCertificateInfoWithOptions(shared_ptr<DescribeLiveDomainCertificateInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeLiveDomainCertificateInfo"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeLiveDomainCertificateInfoResponse(callApi(params, req, runtime));
}

DescribeLiveDomainCertificateInfoResponse Alibabacloud_Live20161101::Client::describeLiveDomainCertificateInfo(shared_ptr<DescribeLiveDomainCertificateInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLiveDomainCertificateInfoWithOptions(request, runtime);
}

DescribeLiveDomainConfigsResponse Alibabacloud_Live20161101::Client::describeLiveDomainConfigsWithOptions(shared_ptr<DescribeLiveDomainConfigsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->functionNames)) {
    query->insert(pair<string, string>("FunctionNames", *request->functionNames));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeLiveDomainConfigs"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeLiveDomainConfigsResponse(callApi(params, req, runtime));
}

DescribeLiveDomainConfigsResponse Alibabacloud_Live20161101::Client::describeLiveDomainConfigs(shared_ptr<DescribeLiveDomainConfigsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLiveDomainConfigsWithOptions(request, runtime);
}

DescribeLiveDomainDetailResponse Alibabacloud_Live20161101::Client::describeLiveDomainDetailWithOptions(shared_ptr<DescribeLiveDomainDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeLiveDomainDetail"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeLiveDomainDetailResponse(callApi(params, req, runtime));
}

DescribeLiveDomainDetailResponse Alibabacloud_Live20161101::Client::describeLiveDomainDetail(shared_ptr<DescribeLiveDomainDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLiveDomainDetailWithOptions(request, runtime);
}

DescribeLiveDomainFrameRateAndBitRateDataResponse Alibabacloud_Live20161101::Client::describeLiveDomainFrameRateAndBitRateDataWithOptions(shared_ptr<DescribeLiveDomainFrameRateAndBitRateDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->queryTime)) {
    query->insert(pair<string, string>("QueryTime", *request->queryTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeLiveDomainFrameRateAndBitRateData"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeLiveDomainFrameRateAndBitRateDataResponse(callApi(params, req, runtime));
}

DescribeLiveDomainFrameRateAndBitRateDataResponse Alibabacloud_Live20161101::Client::describeLiveDomainFrameRateAndBitRateData(shared_ptr<DescribeLiveDomainFrameRateAndBitRateDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLiveDomainFrameRateAndBitRateDataWithOptions(request, runtime);
}

DescribeLiveDomainLimitResponse Alibabacloud_Live20161101::Client::describeLiveDomainLimitWithOptions(shared_ptr<DescribeLiveDomainLimitRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeLiveDomainLimit"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeLiveDomainLimitResponse(callApi(params, req, runtime));
}

DescribeLiveDomainLimitResponse Alibabacloud_Live20161101::Client::describeLiveDomainLimit(shared_ptr<DescribeLiveDomainLimitRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLiveDomainLimitWithOptions(request, runtime);
}

DescribeLiveDomainLogResponse Alibabacloud_Live20161101::Client::describeLiveDomainLogWithOptions(shared_ptr<DescribeLiveDomainLogRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeLiveDomainLog"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeLiveDomainLogResponse(callApi(params, req, runtime));
}

DescribeLiveDomainLogResponse Alibabacloud_Live20161101::Client::describeLiveDomainLog(shared_ptr<DescribeLiveDomainLogRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLiveDomainLogWithOptions(request, runtime);
}

DescribeLiveDomainMappingResponse Alibabacloud_Live20161101::Client::describeLiveDomainMappingWithOptions(shared_ptr<DescribeLiveDomainMappingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeLiveDomainMapping"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeLiveDomainMappingResponse(callApi(params, req, runtime));
}

DescribeLiveDomainMappingResponse Alibabacloud_Live20161101::Client::describeLiveDomainMapping(shared_ptr<DescribeLiveDomainMappingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLiveDomainMappingWithOptions(request, runtime);
}

DescribeLiveDomainOnlineUserNumResponse Alibabacloud_Live20161101::Client::describeLiveDomainOnlineUserNumWithOptions(shared_ptr<DescribeLiveDomainOnlineUserNumRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->queryTime)) {
    query->insert(pair<string, string>("QueryTime", *request->queryTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeLiveDomainOnlineUserNum"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeLiveDomainOnlineUserNumResponse(callApi(params, req, runtime));
}

DescribeLiveDomainOnlineUserNumResponse Alibabacloud_Live20161101::Client::describeLiveDomainOnlineUserNum(shared_ptr<DescribeLiveDomainOnlineUserNumRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLiveDomainOnlineUserNumWithOptions(request, runtime);
}

DescribeLiveDomainPushBpsDataResponse Alibabacloud_Live20161101::Client::describeLiveDomainPushBpsDataWithOptions(shared_ptr<DescribeLiveDomainPushBpsDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->interval)) {
    query->insert(pair<string, string>("Interval", *request->interval));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ispNameEn)) {
    query->insert(pair<string, string>("IspNameEn", *request->ispNameEn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->locationNameEn)) {
    query->insert(pair<string, string>("LocationNameEn", *request->locationNameEn));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeLiveDomainPushBpsData"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeLiveDomainPushBpsDataResponse(callApi(params, req, runtime));
}

DescribeLiveDomainPushBpsDataResponse Alibabacloud_Live20161101::Client::describeLiveDomainPushBpsData(shared_ptr<DescribeLiveDomainPushBpsDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLiveDomainPushBpsDataWithOptions(request, runtime);
}

DescribeLiveDomainPushTrafficDataResponse Alibabacloud_Live20161101::Client::describeLiveDomainPushTrafficDataWithOptions(shared_ptr<DescribeLiveDomainPushTrafficDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->interval)) {
    query->insert(pair<string, string>("Interval", *request->interval));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ispNameEn)) {
    query->insert(pair<string, string>("IspNameEn", *request->ispNameEn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->locationNameEn)) {
    query->insert(pair<string, string>("LocationNameEn", *request->locationNameEn));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeLiveDomainPushTrafficData"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeLiveDomainPushTrafficDataResponse(callApi(params, req, runtime));
}

DescribeLiveDomainPushTrafficDataResponse Alibabacloud_Live20161101::Client::describeLiveDomainPushTrafficData(shared_ptr<DescribeLiveDomainPushTrafficDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLiveDomainPushTrafficDataWithOptions(request, runtime);
}

DescribeLiveDomainPvUvDataResponse Alibabacloud_Live20161101::Client::describeLiveDomainPvUvDataWithOptions(shared_ptr<DescribeLiveDomainPvUvDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeLiveDomainPvUvData"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeLiveDomainPvUvDataResponse(callApi(params, req, runtime));
}

DescribeLiveDomainPvUvDataResponse Alibabacloud_Live20161101::Client::describeLiveDomainPvUvData(shared_ptr<DescribeLiveDomainPvUvDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLiveDomainPvUvDataWithOptions(request, runtime);
}

DescribeLiveDomainRealTimeBpsDataResponse Alibabacloud_Live20161101::Client::describeLiveDomainRealTimeBpsDataWithOptions(shared_ptr<DescribeLiveDomainRealTimeBpsDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeLiveDomainRealTimeBpsData"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeLiveDomainRealTimeBpsDataResponse(callApi(params, req, runtime));
}

DescribeLiveDomainRealTimeBpsDataResponse Alibabacloud_Live20161101::Client::describeLiveDomainRealTimeBpsData(shared_ptr<DescribeLiveDomainRealTimeBpsDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLiveDomainRealTimeBpsDataWithOptions(request, runtime);
}

DescribeLiveDomainRealTimeHttpCodeDataResponse Alibabacloud_Live20161101::Client::describeLiveDomainRealTimeHttpCodeDataWithOptions(shared_ptr<DescribeLiveDomainRealTimeHttpCodeDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ispNameEn)) {
    query->insert(pair<string, string>("IspNameEn", *request->ispNameEn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->locationNameEn)) {
    query->insert(pair<string, string>("LocationNameEn", *request->locationNameEn));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeLiveDomainRealTimeHttpCodeData"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeLiveDomainRealTimeHttpCodeDataResponse(callApi(params, req, runtime));
}

DescribeLiveDomainRealTimeHttpCodeDataResponse Alibabacloud_Live20161101::Client::describeLiveDomainRealTimeHttpCodeData(shared_ptr<DescribeLiveDomainRealTimeHttpCodeDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLiveDomainRealTimeHttpCodeDataWithOptions(request, runtime);
}

DescribeLiveDomainRealTimeTrafficDataResponse Alibabacloud_Live20161101::Client::describeLiveDomainRealTimeTrafficDataWithOptions(shared_ptr<DescribeLiveDomainRealTimeTrafficDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ispNameEn)) {
    query->insert(pair<string, string>("IspNameEn", *request->ispNameEn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->locationNameEn)) {
    query->insert(pair<string, string>("LocationNameEn", *request->locationNameEn));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeLiveDomainRealTimeTrafficData"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeLiveDomainRealTimeTrafficDataResponse(callApi(params, req, runtime));
}

DescribeLiveDomainRealTimeTrafficDataResponse Alibabacloud_Live20161101::Client::describeLiveDomainRealTimeTrafficData(shared_ptr<DescribeLiveDomainRealTimeTrafficDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLiveDomainRealTimeTrafficDataWithOptions(request, runtime);
}

DescribeLiveDomainRealtimeLogDeliveryResponse Alibabacloud_Live20161101::Client::describeLiveDomainRealtimeLogDeliveryWithOptions(shared_ptr<DescribeLiveDomainRealtimeLogDeliveryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeLiveDomainRealtimeLogDelivery"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeLiveDomainRealtimeLogDeliveryResponse(callApi(params, req, runtime));
}

DescribeLiveDomainRealtimeLogDeliveryResponse Alibabacloud_Live20161101::Client::describeLiveDomainRealtimeLogDelivery(shared_ptr<DescribeLiveDomainRealtimeLogDeliveryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLiveDomainRealtimeLogDeliveryWithOptions(request, runtime);
}

DescribeLiveDomainRecordDataResponse Alibabacloud_Live20161101::Client::describeLiveDomainRecordDataWithOptions(shared_ptr<DescribeLiveDomainRecordDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->recordType)) {
    query->insert(pair<string, string>("RecordType", *request->recordType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeLiveDomainRecordData"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeLiveDomainRecordDataResponse(callApi(params, req, runtime));
}

DescribeLiveDomainRecordDataResponse Alibabacloud_Live20161101::Client::describeLiveDomainRecordData(shared_ptr<DescribeLiveDomainRecordDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLiveDomainRecordDataWithOptions(request, runtime);
}

DescribeLiveDomainRecordUsageDataResponse Alibabacloud_Live20161101::Client::describeLiveDomainRecordUsageDataWithOptions(shared_ptr<DescribeLiveDomainRecordUsageDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->splitBy)) {
    query->insert(pair<string, string>("SplitBy", *request->splitBy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeLiveDomainRecordUsageData"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeLiveDomainRecordUsageDataResponse(callApi(params, req, runtime));
}

DescribeLiveDomainRecordUsageDataResponse Alibabacloud_Live20161101::Client::describeLiveDomainRecordUsageData(shared_ptr<DescribeLiveDomainRecordUsageDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLiveDomainRecordUsageDataWithOptions(request, runtime);
}

DescribeLiveDomainSnapshotDataResponse Alibabacloud_Live20161101::Client::describeLiveDomainSnapshotDataWithOptions(shared_ptr<DescribeLiveDomainSnapshotDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeLiveDomainSnapshotData"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeLiveDomainSnapshotDataResponse(callApi(params, req, runtime));
}

DescribeLiveDomainSnapshotDataResponse Alibabacloud_Live20161101::Client::describeLiveDomainSnapshotData(shared_ptr<DescribeLiveDomainSnapshotDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLiveDomainSnapshotDataWithOptions(request, runtime);
}

DescribeLiveDomainStagingConfigResponse Alibabacloud_Live20161101::Client::describeLiveDomainStagingConfigWithOptions(shared_ptr<DescribeLiveDomainStagingConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->functionNames)) {
    query->insert(pair<string, string>("FunctionNames", *request->functionNames));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeLiveDomainStagingConfig"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeLiveDomainStagingConfigResponse(callApi(params, req, runtime));
}

DescribeLiveDomainStagingConfigResponse Alibabacloud_Live20161101::Client::describeLiveDomainStagingConfig(shared_ptr<DescribeLiveDomainStagingConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLiveDomainStagingConfigWithOptions(request, runtime);
}

DescribeLiveDomainStreamTranscodeDataResponse Alibabacloud_Live20161101::Client::describeLiveDomainStreamTranscodeDataWithOptions(shared_ptr<DescribeLiveDomainStreamTranscodeDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->interval)) {
    query->insert(pair<string, string>("Interval", *request->interval));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->split)) {
    query->insert(pair<string, string>("Split", *request->split));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeLiveDomainStreamTranscodeData"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeLiveDomainStreamTranscodeDataResponse(callApi(params, req, runtime));
}

DescribeLiveDomainStreamTranscodeDataResponse Alibabacloud_Live20161101::Client::describeLiveDomainStreamTranscodeData(shared_ptr<DescribeLiveDomainStreamTranscodeDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLiveDomainStreamTranscodeDataWithOptions(request, runtime);
}

DescribeLiveDomainTimeShiftDataResponse Alibabacloud_Live20161101::Client::describeLiveDomainTimeShiftDataWithOptions(shared_ptr<DescribeLiveDomainTimeShiftDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->interval)) {
    query->insert(pair<string, string>("Interval", *request->interval));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeLiveDomainTimeShiftData"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeLiveDomainTimeShiftDataResponse(callApi(params, req, runtime));
}

DescribeLiveDomainTimeShiftDataResponse Alibabacloud_Live20161101::Client::describeLiveDomainTimeShiftData(shared_ptr<DescribeLiveDomainTimeShiftDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLiveDomainTimeShiftDataWithOptions(request, runtime);
}

DescribeLiveDomainTrafficDataResponse Alibabacloud_Live20161101::Client::describeLiveDomainTrafficDataWithOptions(shared_ptr<DescribeLiveDomainTrafficDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->interval)) {
    query->insert(pair<string, string>("Interval", *request->interval));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ispNameEn)) {
    query->insert(pair<string, string>("IspNameEn", *request->ispNameEn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->locationNameEn)) {
    query->insert(pair<string, string>("LocationNameEn", *request->locationNameEn));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeLiveDomainTrafficData"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeLiveDomainTrafficDataResponse(callApi(params, req, runtime));
}

DescribeLiveDomainTrafficDataResponse Alibabacloud_Live20161101::Client::describeLiveDomainTrafficData(shared_ptr<DescribeLiveDomainTrafficDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLiveDomainTrafficDataWithOptions(request, runtime);
}

DescribeLiveDomainTranscodeDataResponse Alibabacloud_Live20161101::Client::describeLiveDomainTranscodeDataWithOptions(shared_ptr<DescribeLiveDomainTranscodeDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeLiveDomainTranscodeData"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeLiveDomainTranscodeDataResponse(callApi(params, req, runtime));
}

DescribeLiveDomainTranscodeDataResponse Alibabacloud_Live20161101::Client::describeLiveDomainTranscodeData(shared_ptr<DescribeLiveDomainTranscodeDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLiveDomainTranscodeDataWithOptions(request, runtime);
}

DescribeLiveDrmUsageDataResponse Alibabacloud_Live20161101::Client::describeLiveDrmUsageDataWithOptions(shared_ptr<DescribeLiveDrmUsageDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->interval)) {
    query->insert(pair<string, string>("Interval", *request->interval));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->splitBy)) {
    query->insert(pair<string, string>("SplitBy", *request->splitBy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeLiveDrmUsageData"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeLiveDrmUsageDataResponse(callApi(params, req, runtime));
}

DescribeLiveDrmUsageDataResponse Alibabacloud_Live20161101::Client::describeLiveDrmUsageData(shared_ptr<DescribeLiveDrmUsageDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLiveDrmUsageDataWithOptions(request, runtime);
}

DescribeLiveEdgeTransferResponse Alibabacloud_Live20161101::Client::describeLiveEdgeTransferWithOptions(shared_ptr<DescribeLiveEdgeTransferRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeLiveEdgeTransfer"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeLiveEdgeTransferResponse(callApi(params, req, runtime));
}

DescribeLiveEdgeTransferResponse Alibabacloud_Live20161101::Client::describeLiveEdgeTransfer(shared_ptr<DescribeLiveEdgeTransferRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLiveEdgeTransferWithOptions(request, runtime);
}

DescribeLiveLazyPullStreamConfigResponse Alibabacloud_Live20161101::Client::describeLiveLazyPullStreamConfigWithOptions(shared_ptr<DescribeLiveLazyPullStreamConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeLiveLazyPullStreamConfig"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeLiveLazyPullStreamConfigResponse(callApi(params, req, runtime));
}

DescribeLiveLazyPullStreamConfigResponse Alibabacloud_Live20161101::Client::describeLiveLazyPullStreamConfig(shared_ptr<DescribeLiveLazyPullStreamConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLiveLazyPullStreamConfigWithOptions(request, runtime);
}

DescribeLiveProducerUsageDataResponse Alibabacloud_Live20161101::Client::describeLiveProducerUsageDataWithOptions(shared_ptr<DescribeLiveProducerUsageDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instance)) {
    query->insert(pair<string, string>("Instance", *request->instance));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->interval)) {
    query->insert(pair<string, string>("Interval", *request->interval));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("Region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->splitBy)) {
    query->insert(pair<string, string>("SplitBy", *request->splitBy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->app)) {
    query->insert(pair<string, string>("app", *request->app));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeLiveProducerUsageData"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeLiveProducerUsageDataResponse(callApi(params, req, runtime));
}

DescribeLiveProducerUsageDataResponse Alibabacloud_Live20161101::Client::describeLiveProducerUsageData(shared_ptr<DescribeLiveProducerUsageDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLiveProducerUsageDataWithOptions(request, runtime);
}

DescribeLivePullStreamConfigResponse Alibabacloud_Live20161101::Client::describeLivePullStreamConfigWithOptions(shared_ptr<DescribeLivePullStreamConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeLivePullStreamConfig"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeLivePullStreamConfigResponse(callApi(params, req, runtime));
}

DescribeLivePullStreamConfigResponse Alibabacloud_Live20161101::Client::describeLivePullStreamConfig(shared_ptr<DescribeLivePullStreamConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLivePullStreamConfigWithOptions(request, runtime);
}

DescribeLiveRealtimeDeliveryAccResponse Alibabacloud_Live20161101::Client::describeLiveRealtimeDeliveryAccWithOptions(shared_ptr<DescribeLiveRealtimeDeliveryAccRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->interval)) {
    query->insert(pair<string, string>("Interval", *request->interval));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->logStore)) {
    query->insert(pair<string, string>("LogStore", *request->logStore));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->project)) {
    query->insert(pair<string, string>("Project", *request->project));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeLiveRealtimeDeliveryAcc"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeLiveRealtimeDeliveryAccResponse(callApi(params, req, runtime));
}

DescribeLiveRealtimeDeliveryAccResponse Alibabacloud_Live20161101::Client::describeLiveRealtimeDeliveryAcc(shared_ptr<DescribeLiveRealtimeDeliveryAccRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLiveRealtimeDeliveryAccWithOptions(request, runtime);
}

DescribeLiveRealtimeLogAuthorizedResponse Alibabacloud_Live20161101::Client::describeLiveRealtimeLogAuthorizedWithOptions(shared_ptr<DescribeLiveRealtimeLogAuthorizedRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeLiveRealtimeLogAuthorized"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeLiveRealtimeLogAuthorizedResponse(callApi(params, req, runtime));
}

DescribeLiveRealtimeLogAuthorizedResponse Alibabacloud_Live20161101::Client::describeLiveRealtimeLogAuthorized(shared_ptr<DescribeLiveRealtimeLogAuthorizedRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLiveRealtimeLogAuthorizedWithOptions(request, runtime);
}

DescribeLiveRecordConfigResponse Alibabacloud_Live20161101::Client::describeLiveRecordConfigWithOptions(shared_ptr<DescribeLiveRecordConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->order)) {
    query->insert(pair<string, string>("Order", *request->order));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->streamName)) {
    query->insert(pair<string, string>("StreamName", *request->streamName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeLiveRecordConfig"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeLiveRecordConfigResponse(callApi(params, req, runtime));
}

DescribeLiveRecordConfigResponse Alibabacloud_Live20161101::Client::describeLiveRecordConfig(shared_ptr<DescribeLiveRecordConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLiveRecordConfigWithOptions(request, runtime);
}

DescribeLiveRecordNotifyConfigResponse Alibabacloud_Live20161101::Client::describeLiveRecordNotifyConfigWithOptions(shared_ptr<DescribeLiveRecordNotifyConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeLiveRecordNotifyConfig"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeLiveRecordNotifyConfigResponse(callApi(params, req, runtime));
}

DescribeLiveRecordNotifyConfigResponse Alibabacloud_Live20161101::Client::describeLiveRecordNotifyConfig(shared_ptr<DescribeLiveRecordNotifyConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLiveRecordNotifyConfigWithOptions(request, runtime);
}

DescribeLiveRecordVodConfigsResponse Alibabacloud_Live20161101::Client::describeLiveRecordVodConfigsWithOptions(shared_ptr<DescribeLiveRecordVodConfigsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->streamName)) {
    query->insert(pair<string, string>("StreamName", *request->streamName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeLiveRecordVodConfigs"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeLiveRecordVodConfigsResponse(callApi(params, req, runtime));
}

DescribeLiveRecordVodConfigsResponse Alibabacloud_Live20161101::Client::describeLiveRecordVodConfigs(shared_ptr<DescribeLiveRecordVodConfigsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLiveRecordVodConfigsWithOptions(request, runtime);
}

DescribeLiveShiftConfigsResponse Alibabacloud_Live20161101::Client::describeLiveShiftConfigsWithOptions(shared_ptr<DescribeLiveShiftConfigsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeLiveShiftConfigs"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeLiveShiftConfigsResponse(callApi(params, req, runtime));
}

DescribeLiveShiftConfigsResponse Alibabacloud_Live20161101::Client::describeLiveShiftConfigs(shared_ptr<DescribeLiveShiftConfigsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLiveShiftConfigsWithOptions(request, runtime);
}

DescribeLiveSnapshotConfigResponse Alibabacloud_Live20161101::Client::describeLiveSnapshotConfigWithOptions(shared_ptr<DescribeLiveSnapshotConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->order)) {
    query->insert(pair<string, string>("Order", *request->order));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeLiveSnapshotConfig"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeLiveSnapshotConfigResponse(callApi(params, req, runtime));
}

DescribeLiveSnapshotConfigResponse Alibabacloud_Live20161101::Client::describeLiveSnapshotConfig(shared_ptr<DescribeLiveSnapshotConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLiveSnapshotConfigWithOptions(request, runtime);
}

DescribeLiveSnapshotDetectPornConfigResponse Alibabacloud_Live20161101::Client::describeLiveSnapshotDetectPornConfigWithOptions(shared_ptr<DescribeLiveSnapshotDetectPornConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->order)) {
    query->insert(pair<string, string>("Order", *request->order));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeLiveSnapshotDetectPornConfig"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeLiveSnapshotDetectPornConfigResponse(callApi(params, req, runtime));
}

DescribeLiveSnapshotDetectPornConfigResponse Alibabacloud_Live20161101::Client::describeLiveSnapshotDetectPornConfig(shared_ptr<DescribeLiveSnapshotDetectPornConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLiveSnapshotDetectPornConfigWithOptions(request, runtime);
}

DescribeLiveSnapshotNotifyConfigResponse Alibabacloud_Live20161101::Client::describeLiveSnapshotNotifyConfigWithOptions(shared_ptr<DescribeLiveSnapshotNotifyConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeLiveSnapshotNotifyConfig"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeLiveSnapshotNotifyConfigResponse(callApi(params, req, runtime));
}

DescribeLiveSnapshotNotifyConfigResponse Alibabacloud_Live20161101::Client::describeLiveSnapshotNotifyConfig(shared_ptr<DescribeLiveSnapshotNotifyConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLiveSnapshotNotifyConfigWithOptions(request, runtime);
}

DescribeLiveStreamAuthCheckingResponse Alibabacloud_Live20161101::Client::describeLiveStreamAuthCheckingWithOptions(shared_ptr<DescribeLiveStreamAuthCheckingRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->url)) {
    query->insert(pair<string, string>("Url", *request->url));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeLiveStreamAuthChecking"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeLiveStreamAuthCheckingResponse(callApi(params, req, runtime));
}

DescribeLiveStreamAuthCheckingResponse Alibabacloud_Live20161101::Client::describeLiveStreamAuthChecking(shared_ptr<DescribeLiveStreamAuthCheckingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLiveStreamAuthCheckingWithOptions(request, runtime);
}

DescribeLiveStreamBitRateDataResponse Alibabacloud_Live20161101::Client::describeLiveStreamBitRateDataWithOptions(shared_ptr<DescribeLiveStreamBitRateDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->streamName)) {
    query->insert(pair<string, string>("StreamName", *request->streamName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeLiveStreamBitRateData"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeLiveStreamBitRateDataResponse(callApi(params, req, runtime));
}

DescribeLiveStreamBitRateDataResponse Alibabacloud_Live20161101::Client::describeLiveStreamBitRateData(shared_ptr<DescribeLiveStreamBitRateDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLiveStreamBitRateDataWithOptions(request, runtime);
}

DescribeLiveStreamCountResponse Alibabacloud_Live20161101::Client::describeLiveStreamCountWithOptions(shared_ptr<DescribeLiveStreamCountRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeLiveStreamCount"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeLiveStreamCountResponse(callApi(params, req, runtime));
}

DescribeLiveStreamCountResponse Alibabacloud_Live20161101::Client::describeLiveStreamCount(shared_ptr<DescribeLiveStreamCountRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLiveStreamCountWithOptions(request, runtime);
}

DescribeLiveStreamDelayConfigResponse Alibabacloud_Live20161101::Client::describeLiveStreamDelayConfigWithOptions(shared_ptr<DescribeLiveStreamDelayConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeLiveStreamDelayConfig"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeLiveStreamDelayConfigResponse(callApi(params, req, runtime));
}

DescribeLiveStreamDelayConfigResponse Alibabacloud_Live20161101::Client::describeLiveStreamDelayConfig(shared_ptr<DescribeLiveStreamDelayConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLiveStreamDelayConfigWithOptions(request, runtime);
}

DescribeLiveStreamHistoryUserNumResponse Alibabacloud_Live20161101::Client::describeLiveStreamHistoryUserNumWithOptions(shared_ptr<DescribeLiveStreamHistoryUserNumRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->streamName)) {
    query->insert(pair<string, string>("StreamName", *request->streamName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeLiveStreamHistoryUserNum"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeLiveStreamHistoryUserNumResponse(callApi(params, req, runtime));
}

DescribeLiveStreamHistoryUserNumResponse Alibabacloud_Live20161101::Client::describeLiveStreamHistoryUserNum(shared_ptr<DescribeLiveStreamHistoryUserNumRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLiveStreamHistoryUserNumWithOptions(request, runtime);
}

DescribeLiveStreamMetricDetailDataResponse Alibabacloud_Live20161101::Client::describeLiveStreamMetricDetailDataWithOptions(shared_ptr<DescribeLiveStreamMetricDetailDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextPageToken)) {
    query->insert(pair<string, string>("NextPageToken", *request->nextPageToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->protocol)) {
    query->insert(pair<string, string>("Protocol", *request->protocol));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->streamName)) {
    query->insert(pair<string, string>("StreamName", *request->streamName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeLiveStreamMetricDetailData"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeLiveStreamMetricDetailDataResponse(callApi(params, req, runtime));
}

DescribeLiveStreamMetricDetailDataResponse Alibabacloud_Live20161101::Client::describeLiveStreamMetricDetailData(shared_ptr<DescribeLiveStreamMetricDetailDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLiveStreamMetricDetailDataWithOptions(request, runtime);
}

DescribeLiveStreamMonitorListResponse Alibabacloud_Live20161101::Client::describeLiveStreamMonitorListWithOptions(shared_ptr<DescribeLiveStreamMonitorListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->monitorId)) {
    query->insert(pair<string, string>("MonitorId", *request->monitorId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->orderRule)) {
    query->insert(pair<string, long>("OrderRule", *request->orderRule));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("PageNum", *request->pageNum));
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
    {"action", boost::any(string("DescribeLiveStreamMonitorList"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeLiveStreamMonitorListResponse(callApi(params, req, runtime));
}

DescribeLiveStreamMonitorListResponse Alibabacloud_Live20161101::Client::describeLiveStreamMonitorList(shared_ptr<DescribeLiveStreamMonitorListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLiveStreamMonitorListWithOptions(request, runtime);
}

DescribeLiveStreamOptimizedFeatureConfigResponse Alibabacloud_Live20161101::Client::describeLiveStreamOptimizedFeatureConfigWithOptions(shared_ptr<DescribeLiveStreamOptimizedFeatureConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->configName)) {
    query->insert(pair<string, string>("ConfigName", *request->configName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeLiveStreamOptimizedFeatureConfig"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeLiveStreamOptimizedFeatureConfigResponse(callApi(params, req, runtime));
}

DescribeLiveStreamOptimizedFeatureConfigResponse Alibabacloud_Live20161101::Client::describeLiveStreamOptimizedFeatureConfig(shared_ptr<DescribeLiveStreamOptimizedFeatureConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLiveStreamOptimizedFeatureConfigWithOptions(request, runtime);
}

DescribeLiveStreamRecordContentResponse Alibabacloud_Live20161101::Client::describeLiveStreamRecordContentWithOptions(shared_ptr<DescribeLiveStreamRecordContentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->streamName)) {
    query->insert(pair<string, string>("StreamName", *request->streamName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeLiveStreamRecordContent"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeLiveStreamRecordContentResponse(callApi(params, req, runtime));
}

DescribeLiveStreamRecordContentResponse Alibabacloud_Live20161101::Client::describeLiveStreamRecordContent(shared_ptr<DescribeLiveStreamRecordContentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLiveStreamRecordContentWithOptions(request, runtime);
}

DescribeLiveStreamRecordIndexFileResponse Alibabacloud_Live20161101::Client::describeLiveStreamRecordIndexFileWithOptions(shared_ptr<DescribeLiveStreamRecordIndexFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->recordId)) {
    query->insert(pair<string, string>("RecordId", *request->recordId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->streamName)) {
    query->insert(pair<string, string>("StreamName", *request->streamName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeLiveStreamRecordIndexFile"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeLiveStreamRecordIndexFileResponse(callApi(params, req, runtime));
}

DescribeLiveStreamRecordIndexFileResponse Alibabacloud_Live20161101::Client::describeLiveStreamRecordIndexFile(shared_ptr<DescribeLiveStreamRecordIndexFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLiveStreamRecordIndexFileWithOptions(request, runtime);
}

DescribeLiveStreamRecordIndexFilesResponse Alibabacloud_Live20161101::Client::describeLiveStreamRecordIndexFilesWithOptions(shared_ptr<DescribeLiveStreamRecordIndexFilesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->order)) {
    query->insert(pair<string, string>("Order", *request->order));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->streamName)) {
    query->insert(pair<string, string>("StreamName", *request->streamName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeLiveStreamRecordIndexFiles"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeLiveStreamRecordIndexFilesResponse(callApi(params, req, runtime));
}

DescribeLiveStreamRecordIndexFilesResponse Alibabacloud_Live20161101::Client::describeLiveStreamRecordIndexFiles(shared_ptr<DescribeLiveStreamRecordIndexFilesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLiveStreamRecordIndexFilesWithOptions(request, runtime);
}

DescribeLiveStreamSnapshotInfoResponse Alibabacloud_Live20161101::Client::describeLiveStreamSnapshotInfoWithOptions(shared_ptr<DescribeLiveStreamSnapshotInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->limit)) {
    query->insert(pair<string, long>("Limit", *request->limit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->order)) {
    query->insert(pair<string, string>("Order", *request->order));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->streamName)) {
    query->insert(pair<string, string>("StreamName", *request->streamName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeLiveStreamSnapshotInfo"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeLiveStreamSnapshotInfoResponse(callApi(params, req, runtime));
}

DescribeLiveStreamSnapshotInfoResponse Alibabacloud_Live20161101::Client::describeLiveStreamSnapshotInfo(shared_ptr<DescribeLiveStreamSnapshotInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLiveStreamSnapshotInfoWithOptions(request, runtime);
}

DescribeLiveStreamStateResponse Alibabacloud_Live20161101::Client::describeLiveStreamStateWithOptions(shared_ptr<DescribeLiveStreamStateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->streamName)) {
    query->insert(pair<string, string>("StreamName", *request->streamName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeLiveStreamState"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeLiveStreamStateResponse(callApi(params, req, runtime));
}

DescribeLiveStreamStateResponse Alibabacloud_Live20161101::Client::describeLiveStreamState(shared_ptr<DescribeLiveStreamStateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLiveStreamStateWithOptions(request, runtime);
}

DescribeLiveStreamTranscodeInfoResponse Alibabacloud_Live20161101::Client::describeLiveStreamTranscodeInfoWithOptions(shared_ptr<DescribeLiveStreamTranscodeInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainTranscodeName)) {
    query->insert(pair<string, string>("DomainTranscodeName", *request->domainTranscodeName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeLiveStreamTranscodeInfo"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeLiveStreamTranscodeInfoResponse(callApi(params, req, runtime));
}

DescribeLiveStreamTranscodeInfoResponse Alibabacloud_Live20161101::Client::describeLiveStreamTranscodeInfo(shared_ptr<DescribeLiveStreamTranscodeInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLiveStreamTranscodeInfoWithOptions(request, runtime);
}

DescribeLiveStreamTranscodeStreamNumResponse Alibabacloud_Live20161101::Client::describeLiveStreamTranscodeStreamNumWithOptions(shared_ptr<DescribeLiveStreamTranscodeStreamNumRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeLiveStreamTranscodeStreamNum"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeLiveStreamTranscodeStreamNumResponse(callApi(params, req, runtime));
}

DescribeLiveStreamTranscodeStreamNumResponse Alibabacloud_Live20161101::Client::describeLiveStreamTranscodeStreamNum(shared_ptr<DescribeLiveStreamTranscodeStreamNumRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLiveStreamTranscodeStreamNumWithOptions(request, runtime);
}

DescribeLiveStreamWatermarkRulesResponse Alibabacloud_Live20161101::Client::describeLiveStreamWatermarkRulesWithOptions(shared_ptr<DescribeLiveStreamWatermarkRulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
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
    {"action", boost::any(string("DescribeLiveStreamWatermarkRules"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeLiveStreamWatermarkRulesResponse(callApi(params, req, runtime));
}

DescribeLiveStreamWatermarkRulesResponse Alibabacloud_Live20161101::Client::describeLiveStreamWatermarkRules(shared_ptr<DescribeLiveStreamWatermarkRulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLiveStreamWatermarkRulesWithOptions(request, runtime);
}

DescribeLiveStreamWatermarksResponse Alibabacloud_Live20161101::Client::describeLiveStreamWatermarksWithOptions(shared_ptr<DescribeLiveStreamWatermarksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
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
    {"action", boost::any(string("DescribeLiveStreamWatermarks"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeLiveStreamWatermarksResponse(callApi(params, req, runtime));
}

DescribeLiveStreamWatermarksResponse Alibabacloud_Live20161101::Client::describeLiveStreamWatermarks(shared_ptr<DescribeLiveStreamWatermarksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLiveStreamWatermarksWithOptions(request, runtime);
}

DescribeLiveStreamsBlockListResponse Alibabacloud_Live20161101::Client::describeLiveStreamsBlockListWithOptions(shared_ptr<DescribeLiveStreamsBlockListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeLiveStreamsBlockList"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeLiveStreamsBlockListResponse(callApi(params, req, runtime));
}

DescribeLiveStreamsBlockListResponse Alibabacloud_Live20161101::Client::describeLiveStreamsBlockList(shared_ptr<DescribeLiveStreamsBlockListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLiveStreamsBlockListWithOptions(request, runtime);
}

DescribeLiveStreamsControlHistoryResponse Alibabacloud_Live20161101::Client::describeLiveStreamsControlHistoryWithOptions(shared_ptr<DescribeLiveStreamsControlHistoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeLiveStreamsControlHistory"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeLiveStreamsControlHistoryResponse(callApi(params, req, runtime));
}

DescribeLiveStreamsControlHistoryResponse Alibabacloud_Live20161101::Client::describeLiveStreamsControlHistory(shared_ptr<DescribeLiveStreamsControlHistoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLiveStreamsControlHistoryWithOptions(request, runtime);
}

DescribeLiveStreamsNotifyRecordsResponse Alibabacloud_Live20161101::Client::describeLiveStreamsNotifyRecordsWithOptions(shared_ptr<DescribeLiveStreamsNotifyRecordsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->streamName)) {
    query->insert(pair<string, string>("StreamName", *request->streamName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeLiveStreamsNotifyRecords"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeLiveStreamsNotifyRecordsResponse(callApi(params, req, runtime));
}

DescribeLiveStreamsNotifyRecordsResponse Alibabacloud_Live20161101::Client::describeLiveStreamsNotifyRecords(shared_ptr<DescribeLiveStreamsNotifyRecordsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLiveStreamsNotifyRecordsWithOptions(request, runtime);
}

DescribeLiveStreamsNotifyUrlConfigResponse Alibabacloud_Live20161101::Client::describeLiveStreamsNotifyUrlConfigWithOptions(shared_ptr<DescribeLiveStreamsNotifyUrlConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeLiveStreamsNotifyUrlConfig"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeLiveStreamsNotifyUrlConfigResponse(callApi(params, req, runtime));
}

DescribeLiveStreamsNotifyUrlConfigResponse Alibabacloud_Live20161101::Client::describeLiveStreamsNotifyUrlConfig(shared_ptr<DescribeLiveStreamsNotifyUrlConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLiveStreamsNotifyUrlConfigWithOptions(request, runtime);
}

DescribeLiveStreamsOnlineListResponse Alibabacloud_Live20161101::Client::describeLiveStreamsOnlineListWithOptions(shared_ptr<DescribeLiveStreamsOnlineListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->onlyStream)) {
    query->insert(pair<string, string>("OnlyStream", *request->onlyStream));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->queryType)) {
    query->insert(pair<string, string>("QueryType", *request->queryType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->streamName)) {
    query->insert(pair<string, string>("StreamName", *request->streamName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->streamType)) {
    query->insert(pair<string, string>("StreamType", *request->streamType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeLiveStreamsOnlineList"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeLiveStreamsOnlineListResponse(callApi(params, req, runtime));
}

DescribeLiveStreamsOnlineListResponse Alibabacloud_Live20161101::Client::describeLiveStreamsOnlineList(shared_ptr<DescribeLiveStreamsOnlineListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLiveStreamsOnlineListWithOptions(request, runtime);
}

DescribeLiveStreamsPublishListResponse Alibabacloud_Live20161101::Client::describeLiveStreamsPublishListWithOptions(shared_ptr<DescribeLiveStreamsPublishListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderBy)) {
    query->insert(pair<string, string>("OrderBy", *request->orderBy));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->queryType)) {
    query->insert(pair<string, string>("QueryType", *request->queryType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->streamName)) {
    query->insert(pair<string, string>("StreamName", *request->streamName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->streamType)) {
    query->insert(pair<string, string>("StreamType", *request->streamType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeLiveStreamsPublishList"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeLiveStreamsPublishListResponse(callApi(params, req, runtime));
}

DescribeLiveStreamsPublishListResponse Alibabacloud_Live20161101::Client::describeLiveStreamsPublishList(shared_ptr<DescribeLiveStreamsPublishListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLiveStreamsPublishListWithOptions(request, runtime);
}

DescribeLiveTagResourcesResponse Alibabacloud_Live20161101::Client::describeLiveTagResourcesWithOptions(shared_ptr<DescribeLiveTagResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->resourceId)) {
    query->insert(pair<string, vector<string>>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<DescribeLiveTagResourcesRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<DescribeLiveTagResourcesRequestTag>>("Tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeLiveTagResources"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeLiveTagResourcesResponse(callApi(params, req, runtime));
}

DescribeLiveTagResourcesResponse Alibabacloud_Live20161101::Client::describeLiveTagResources(shared_ptr<DescribeLiveTagResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLiveTagResourcesWithOptions(request, runtime);
}

DescribeLiveTopDomainsByFlowResponse Alibabacloud_Live20161101::Client::describeLiveTopDomainsByFlowWithOptions(shared_ptr<DescribeLiveTopDomainsByFlowRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->limit)) {
    query->insert(pair<string, long>("Limit", *request->limit));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeLiveTopDomainsByFlow"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeLiveTopDomainsByFlowResponse(callApi(params, req, runtime));
}

DescribeLiveTopDomainsByFlowResponse Alibabacloud_Live20161101::Client::describeLiveTopDomainsByFlow(shared_ptr<DescribeLiveTopDomainsByFlowRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLiveTopDomainsByFlowWithOptions(request, runtime);
}

DescribeLiveUserBillPredictionResponse Alibabacloud_Live20161101::Client::describeLiveUserBillPredictionWithOptions(shared_ptr<DescribeLiveUserBillPredictionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->area)) {
    query->insert(pair<string, string>("Area", *request->area));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dimension)) {
    query->insert(pair<string, string>("Dimension", *request->dimension));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeLiveUserBillPrediction"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeLiveUserBillPredictionResponse(callApi(params, req, runtime));
}

DescribeLiveUserBillPredictionResponse Alibabacloud_Live20161101::Client::describeLiveUserBillPrediction(shared_ptr<DescribeLiveUserBillPredictionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLiveUserBillPredictionWithOptions(request, runtime);
}

DescribeLiveUserDomainsResponse Alibabacloud_Live20161101::Client::describeLiveUserDomainsWithOptions(shared_ptr<DescribeLiveUserDomainsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainSearchType)) {
    query->insert(pair<string, string>("DomainSearchType", *request->domainSearchType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainStatus)) {
    query->insert(pair<string, string>("DomainStatus", *request->domainStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->liveDomainType)) {
    query->insert(pair<string, string>("LiveDomainType", *request->liveDomainType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionName)) {
    query->insert(pair<string, string>("RegionName", *request->regionName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  if (!Darabonba_Util::Client::isUnset<vector<DescribeLiveUserDomainsRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<DescribeLiveUserDomainsRequestTag>>("Tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeLiveUserDomains"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeLiveUserDomainsResponse(callApi(params, req, runtime));
}

DescribeLiveUserDomainsResponse Alibabacloud_Live20161101::Client::describeLiveUserDomains(shared_ptr<DescribeLiveUserDomainsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLiveUserDomainsWithOptions(request, runtime);
}

DescribeLiveUserTagsResponse Alibabacloud_Live20161101::Client::describeLiveUserTagsWithOptions(shared_ptr<DescribeLiveUserTagsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeLiveUserTags"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeLiveUserTagsResponse(callApi(params, req, runtime));
}

DescribeLiveUserTagsResponse Alibabacloud_Live20161101::Client::describeLiveUserTags(shared_ptr<DescribeLiveUserTagsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLiveUserTagsWithOptions(request, runtime);
}

DescribeMeterLiveRtcDurationResponse Alibabacloud_Live20161101::Client::describeMeterLiveRtcDurationWithOptions(shared_ptr<DescribeMeterLiveRtcDurationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->interval)) {
    query->insert(pair<string, string>("Interval", *request->interval));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceArea)) {
    query->insert(pair<string, string>("ServiceArea", *request->serviceArea));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("appId", *request->appId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeMeterLiveRtcDuration"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeMeterLiveRtcDurationResponse(callApi(params, req, runtime));
}

DescribeMeterLiveRtcDurationResponse Alibabacloud_Live20161101::Client::describeMeterLiveRtcDuration(shared_ptr<DescribeMeterLiveRtcDurationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeMeterLiveRtcDurationWithOptions(request, runtime);
}

DescribeMixStreamListResponse Alibabacloud_Live20161101::Client::describeMixStreamListWithOptions(shared_ptr<DescribeMixStreamListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mixStreamId)) {
    query->insert(pair<string, string>("MixStreamId", *request->mixStreamId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->streamName)) {
    query->insert(pair<string, string>("StreamName", *request->streamName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeMixStreamList"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeMixStreamListResponse(callApi(params, req, runtime));
}

DescribeMixStreamListResponse Alibabacloud_Live20161101::Client::describeMixStreamList(shared_ptr<DescribeMixStreamListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeMixStreamListWithOptions(request, runtime);
}

DescribeRTSNativeSDKFirstFrameCostResponse Alibabacloud_Live20161101::Client::describeRTSNativeSDKFirstFrameCostWithOptions(shared_ptr<DescribeRTSNativeSDKFirstFrameCostRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DescribeRTSNativeSDKFirstFrameCostShrinkRequest> request = make_shared<DescribeRTSNativeSDKFirstFrameCostShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->domainNameList)) {
    request->domainNameListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->domainNameList, make_shared<string>("DomainNameList"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dataInterval)) {
    query->insert(pair<string, string>("DataInterval", *request->dataInterval));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainNameListShrink)) {
    query->insert(pair<string, string>("DomainNameList", *request->domainNameListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRTSNativeSDKFirstFrameCost"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRTSNativeSDKFirstFrameCostResponse(callApi(params, req, runtime));
}

DescribeRTSNativeSDKFirstFrameCostResponse Alibabacloud_Live20161101::Client::describeRTSNativeSDKFirstFrameCost(shared_ptr<DescribeRTSNativeSDKFirstFrameCostRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRTSNativeSDKFirstFrameCostWithOptions(request, runtime);
}

DescribeRTSNativeSDKFirstFrameDelayResponse Alibabacloud_Live20161101::Client::describeRTSNativeSDKFirstFrameDelayWithOptions(shared_ptr<DescribeRTSNativeSDKFirstFrameDelayRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DescribeRTSNativeSDKFirstFrameDelayShrinkRequest> request = make_shared<DescribeRTSNativeSDKFirstFrameDelayShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->domainNameList)) {
    request->domainNameListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->domainNameList, make_shared<string>("DomainNameList"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dataInterval)) {
    query->insert(pair<string, string>("DataInterval", *request->dataInterval));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainNameListShrink)) {
    query->insert(pair<string, string>("DomainNameList", *request->domainNameListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRTSNativeSDKFirstFrameDelay"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRTSNativeSDKFirstFrameDelayResponse(callApi(params, req, runtime));
}

DescribeRTSNativeSDKFirstFrameDelayResponse Alibabacloud_Live20161101::Client::describeRTSNativeSDKFirstFrameDelay(shared_ptr<DescribeRTSNativeSDKFirstFrameDelayRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRTSNativeSDKFirstFrameDelayWithOptions(request, runtime);
}

DescribeRTSNativeSDKPlayFailStatusResponse Alibabacloud_Live20161101::Client::describeRTSNativeSDKPlayFailStatusWithOptions(shared_ptr<DescribeRTSNativeSDKPlayFailStatusRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DescribeRTSNativeSDKPlayFailStatusShrinkRequest> request = make_shared<DescribeRTSNativeSDKPlayFailStatusShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->domainNameList)) {
    request->domainNameListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->domainNameList, make_shared<string>("DomainNameList"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dataInterval)) {
    query->insert(pair<string, string>("DataInterval", *request->dataInterval));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainNameListShrink)) {
    query->insert(pair<string, string>("DomainNameList", *request->domainNameListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRTSNativeSDKPlayFailStatus"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRTSNativeSDKPlayFailStatusResponse(callApi(params, req, runtime));
}

DescribeRTSNativeSDKPlayFailStatusResponse Alibabacloud_Live20161101::Client::describeRTSNativeSDKPlayFailStatus(shared_ptr<DescribeRTSNativeSDKPlayFailStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRTSNativeSDKPlayFailStatusWithOptions(request, runtime);
}

DescribeRTSNativeSDKPlayTimeResponse Alibabacloud_Live20161101::Client::describeRTSNativeSDKPlayTimeWithOptions(shared_ptr<DescribeRTSNativeSDKPlayTimeRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DescribeRTSNativeSDKPlayTimeShrinkRequest> request = make_shared<DescribeRTSNativeSDKPlayTimeShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->domainNameList)) {
    request->domainNameListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->domainNameList, make_shared<string>("DomainNameList"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dataInterval)) {
    query->insert(pair<string, string>("DataInterval", *request->dataInterval));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainNameListShrink)) {
    query->insert(pair<string, string>("DomainNameList", *request->domainNameListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRTSNativeSDKPlayTime"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRTSNativeSDKPlayTimeResponse(callApi(params, req, runtime));
}

DescribeRTSNativeSDKPlayTimeResponse Alibabacloud_Live20161101::Client::describeRTSNativeSDKPlayTime(shared_ptr<DescribeRTSNativeSDKPlayTimeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRTSNativeSDKPlayTimeWithOptions(request, runtime);
}

DescribeRTSNativeSDKVvDataResponse Alibabacloud_Live20161101::Client::describeRTSNativeSDKVvDataWithOptions(shared_ptr<DescribeRTSNativeSDKVvDataRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DescribeRTSNativeSDKVvDataShrinkRequest> request = make_shared<DescribeRTSNativeSDKVvDataShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->domainNameList)) {
    request->domainNameListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->domainNameList, make_shared<string>("DomainNameList"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dataInterval)) {
    query->insert(pair<string, string>("DataInterval", *request->dataInterval));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainNameListShrink)) {
    query->insert(pair<string, string>("DomainNameList", *request->domainNameListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRTSNativeSDKVvData"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRTSNativeSDKVvDataResponse(callApi(params, req, runtime));
}

DescribeRTSNativeSDKVvDataResponse Alibabacloud_Live20161101::Client::describeRTSNativeSDKVvData(shared_ptr<DescribeRTSNativeSDKVvDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRTSNativeSDKVvDataWithOptions(request, runtime);
}

DescribeRoomKickoutUserListResponse Alibabacloud_Live20161101::Client::describeRoomKickoutUserListWithOptions(shared_ptr<DescribeRoomKickoutUserListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->order)) {
    query->insert(pair<string, string>("Order", *request->order));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->roomId)) {
    query->insert(pair<string, string>("RoomId", *request->roomId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRoomKickoutUserList"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRoomKickoutUserListResponse(callApi(params, req, runtime));
}

DescribeRoomKickoutUserListResponse Alibabacloud_Live20161101::Client::describeRoomKickoutUserList(shared_ptr<DescribeRoomKickoutUserListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRoomKickoutUserListWithOptions(request, runtime);
}

DescribeRoomListResponse Alibabacloud_Live20161101::Client::describeRoomListWithOptions(shared_ptr<DescribeRoomListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->anchorId)) {
    query->insert(pair<string, string>("AnchorId", *request->anchorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->order)) {
    query->insert(pair<string, string>("Order", *request->order));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->roomId)) {
    query->insert(pair<string, string>("RoomId", *request->roomId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->roomStatus)) {
    query->insert(pair<string, long>("RoomStatus", *request->roomStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRoomList"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRoomListResponse(callApi(params, req, runtime));
}

DescribeRoomListResponse Alibabacloud_Live20161101::Client::describeRoomList(shared_ptr<DescribeRoomListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRoomListWithOptions(request, runtime);
}

DescribeRoomStatusResponse Alibabacloud_Live20161101::Client::describeRoomStatusWithOptions(shared_ptr<DescribeRoomStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->roomId)) {
    query->insert(pair<string, string>("RoomId", *request->roomId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRoomStatus"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRoomStatusResponse(callApi(params, req, runtime));
}

DescribeRoomStatusResponse Alibabacloud_Live20161101::Client::describeRoomStatus(shared_ptr<DescribeRoomStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRoomStatusWithOptions(request, runtime);
}

DescribeShowListResponse Alibabacloud_Live20161101::Client::describeShowListWithOptions(shared_ptr<DescribeShowListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->casterId)) {
    query->insert(pair<string, string>("CasterId", *request->casterId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeShowList"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeShowListResponse(callApi(params, req, runtime));
}

DescribeShowListResponse Alibabacloud_Live20161101::Client::describeShowList(shared_ptr<DescribeShowListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeShowListWithOptions(request, runtime);
}

DescribeStudioLayoutsResponse Alibabacloud_Live20161101::Client::describeStudioLayoutsWithOptions(shared_ptr<DescribeStudioLayoutsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->casterId)) {
    query->insert(pair<string, string>("CasterId", *request->casterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->layoutId)) {
    query->insert(pair<string, string>("LayoutId", *request->layoutId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeStudioLayouts"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeStudioLayoutsResponse(callApi(params, req, runtime));
}

DescribeStudioLayoutsResponse Alibabacloud_Live20161101::Client::describeStudioLayouts(shared_ptr<DescribeStudioLayoutsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeStudioLayoutsWithOptions(request, runtime);
}

DescribeToutiaoLivePlayResponse Alibabacloud_Live20161101::Client::describeToutiaoLivePlayWithOptions(shared_ptr<DescribeToutiaoLivePlayRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->app)) {
    query->insert(pair<string, string>("App", *request->app));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domain)) {
    query->insert(pair<string, string>("Domain", *request->domain));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stream)) {
    query->insert(pair<string, string>("Stream", *request->stream));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeToutiaoLivePlay"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeToutiaoLivePlayResponse(callApi(params, req, runtime));
}

DescribeToutiaoLivePlayResponse Alibabacloud_Live20161101::Client::describeToutiaoLivePlay(shared_ptr<DescribeToutiaoLivePlayRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeToutiaoLivePlayWithOptions(request, runtime);
}

DescribeToutiaoLivePublishResponse Alibabacloud_Live20161101::Client::describeToutiaoLivePublishWithOptions(shared_ptr<DescribeToutiaoLivePublishRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->app)) {
    query->insert(pair<string, string>("App", *request->app));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domain)) {
    query->insert(pair<string, string>("Domain", *request->domain));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stream)) {
    query->insert(pair<string, string>("Stream", *request->stream));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeToutiaoLivePublish"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeToutiaoLivePublishResponse(callApi(params, req, runtime));
}

DescribeToutiaoLivePublishResponse Alibabacloud_Live20161101::Client::describeToutiaoLivePublish(shared_ptr<DescribeToutiaoLivePublishRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeToutiaoLivePublishWithOptions(request, runtime);
}

DescribeUpBpsPeakDataResponse Alibabacloud_Live20161101::Client::describeUpBpsPeakDataWithOptions(shared_ptr<DescribeUpBpsPeakDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainSwitch)) {
    query->insert(pair<string, string>("DomainSwitch", *request->domainSwitch));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeUpBpsPeakData"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeUpBpsPeakDataResponse(callApi(params, req, runtime));
}

DescribeUpBpsPeakDataResponse Alibabacloud_Live20161101::Client::describeUpBpsPeakData(shared_ptr<DescribeUpBpsPeakDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeUpBpsPeakDataWithOptions(request, runtime);
}

DescribeUpBpsPeakOfLineResponse Alibabacloud_Live20161101::Client::describeUpBpsPeakOfLineWithOptions(shared_ptr<DescribeUpBpsPeakOfLineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainSwitch)) {
    query->insert(pair<string, string>("DomainSwitch", *request->domainSwitch));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->line)) {
    query->insert(pair<string, string>("Line", *request->line));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeUpBpsPeakOfLine"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeUpBpsPeakOfLineResponse(callApi(params, req, runtime));
}

DescribeUpBpsPeakOfLineResponse Alibabacloud_Live20161101::Client::describeUpBpsPeakOfLine(shared_ptr<DescribeUpBpsPeakOfLineRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeUpBpsPeakOfLineWithOptions(request, runtime);
}

DescribeUpPeakPublishStreamDataResponse Alibabacloud_Live20161101::Client::describeUpPeakPublishStreamDataWithOptions(shared_ptr<DescribeUpPeakPublishStreamDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainSwitch)) {
    query->insert(pair<string, string>("DomainSwitch", *request->domainSwitch));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeUpPeakPublishStreamData"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeUpPeakPublishStreamDataResponse(callApi(params, req, runtime));
}

DescribeUpPeakPublishStreamDataResponse Alibabacloud_Live20161101::Client::describeUpPeakPublishStreamData(shared_ptr<DescribeUpPeakPublishStreamDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeUpPeakPublishStreamDataWithOptions(request, runtime);
}

DisableLiveRealtimeLogDeliveryResponse Alibabacloud_Live20161101::Client::disableLiveRealtimeLogDeliveryWithOptions(shared_ptr<DisableLiveRealtimeLogDeliveryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DisableLiveRealtimeLogDelivery"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DisableLiveRealtimeLogDeliveryResponse(callApi(params, req, runtime));
}

DisableLiveRealtimeLogDeliveryResponse Alibabacloud_Live20161101::Client::disableLiveRealtimeLogDelivery(shared_ptr<DisableLiveRealtimeLogDeliveryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return disableLiveRealtimeLogDeliveryWithOptions(request, runtime);
}

DynamicUpdateWaterMarkStreamRuleResponse Alibabacloud_Live20161101::Client::dynamicUpdateWaterMarkStreamRuleWithOptions(shared_ptr<DynamicUpdateWaterMarkStreamRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->app)) {
    query->insert(pair<string, string>("App", *request->app));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domain)) {
    query->insert(pair<string, string>("Domain", *request->domain));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stream)) {
    query->insert(pair<string, string>("Stream", *request->stream));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    query->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DynamicUpdateWaterMarkStreamRule"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DynamicUpdateWaterMarkStreamRuleResponse(callApi(params, req, runtime));
}

DynamicUpdateWaterMarkStreamRuleResponse Alibabacloud_Live20161101::Client::dynamicUpdateWaterMarkStreamRule(shared_ptr<DynamicUpdateWaterMarkStreamRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return dynamicUpdateWaterMarkStreamRuleWithOptions(request, runtime);
}

EditPlaylistResponse Alibabacloud_Live20161101::Client::editPlaylistWithOptions(shared_ptr<EditPlaylistRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->programConfig)) {
    query->insert(pair<string, string>("ProgramConfig", *request->programConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->programId)) {
    query->insert(pair<string, string>("ProgramId", *request->programId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->programItems)) {
    query->insert(pair<string, string>("ProgramItems", *request->programItems));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EditPlaylist"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EditPlaylistResponse(callApi(params, req, runtime));
}

EditPlaylistResponse Alibabacloud_Live20161101::Client::editPlaylist(shared_ptr<EditPlaylistRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return editPlaylistWithOptions(request, runtime);
}

EditShowAndReplaceResponse Alibabacloud_Live20161101::Client::editShowAndReplaceWithOptions(shared_ptr<EditShowAndReplaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->casterId)) {
    query->insert(pair<string, string>("CasterId", *request->casterId));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->endTime)) {
    query->insert(pair<string, double>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->showId)) {
    query->insert(pair<string, string>("ShowId", *request->showId));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->startTime)) {
    query->insert(pair<string, double>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->storageInfo)) {
    query->insert(pair<string, string>("StorageInfo", *request->storageInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    query->insert(pair<string, string>("UserData", *request->userData));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EditShowAndReplace"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EditShowAndReplaceResponse(callApi(params, req, runtime));
}

EditShowAndReplaceResponse Alibabacloud_Live20161101::Client::editShowAndReplace(shared_ptr<EditShowAndReplaceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return editShowAndReplaceWithOptions(request, runtime);
}

EffectCasterUrgentResponse Alibabacloud_Live20161101::Client::effectCasterUrgentWithOptions(shared_ptr<EffectCasterUrgentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->casterId)) {
    query->insert(pair<string, string>("CasterId", *request->casterId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sceneId)) {
    query->insert(pair<string, string>("SceneId", *request->sceneId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EffectCasterUrgent"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EffectCasterUrgentResponse(callApi(params, req, runtime));
}

EffectCasterUrgentResponse Alibabacloud_Live20161101::Client::effectCasterUrgent(shared_ptr<EffectCasterUrgentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return effectCasterUrgentWithOptions(request, runtime);
}

EffectCasterVideoResourceResponse Alibabacloud_Live20161101::Client::effectCasterVideoResourceWithOptions(shared_ptr<EffectCasterVideoResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->casterId)) {
    query->insert(pair<string, string>("CasterId", *request->casterId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceId)) {
    query->insert(pair<string, string>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sceneId)) {
    query->insert(pair<string, string>("SceneId", *request->sceneId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EffectCasterVideoResource"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EffectCasterVideoResourceResponse(callApi(params, req, runtime));
}

EffectCasterVideoResourceResponse Alibabacloud_Live20161101::Client::effectCasterVideoResource(shared_ptr<EffectCasterVideoResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return effectCasterVideoResourceWithOptions(request, runtime);
}

EnableLiveRealtimeLogDeliveryResponse Alibabacloud_Live20161101::Client::enableLiveRealtimeLogDeliveryWithOptions(shared_ptr<EnableLiveRealtimeLogDeliveryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EnableLiveRealtimeLogDelivery"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EnableLiveRealtimeLogDeliveryResponse(callApi(params, req, runtime));
}

EnableLiveRealtimeLogDeliveryResponse Alibabacloud_Live20161101::Client::enableLiveRealtimeLogDelivery(shared_ptr<EnableLiveRealtimeLogDeliveryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return enableLiveRealtimeLogDeliveryWithOptions(request, runtime);
}

ForbidLiveStreamResponse Alibabacloud_Live20161101::Client::forbidLiveStreamWithOptions(shared_ptr<ForbidLiveStreamRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->liveStreamType)) {
    query->insert(pair<string, string>("LiveStreamType", *request->liveStreamType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->oneshot)) {
    query->insert(pair<string, string>("Oneshot", *request->oneshot));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resumeTime)) {
    query->insert(pair<string, string>("ResumeTime", *request->resumeTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->streamName)) {
    query->insert(pair<string, string>("StreamName", *request->streamName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ForbidLiveStream"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ForbidLiveStreamResponse(callApi(params, req, runtime));
}

ForbidLiveStreamResponse Alibabacloud_Live20161101::Client::forbidLiveStream(shared_ptr<ForbidLiveStreamRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return forbidLiveStreamWithOptions(request, runtime);
}

ForbidPushStreamResponse Alibabacloud_Live20161101::Client::forbidPushStreamWithOptions(shared_ptr<ForbidPushStreamRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->roomId)) {
    query->insert(pair<string, string>("RoomId", *request->roomId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    query->insert(pair<string, string>("UserData", *request->userData));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ForbidPushStream"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ForbidPushStreamResponse(callApi(params, req, runtime));
}

ForbidPushStreamResponse Alibabacloud_Live20161101::Client::forbidPushStream(shared_ptr<ForbidPushStreamRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return forbidPushStreamWithOptions(request, runtime);
}

GetAllCustomTemplatesResponse Alibabacloud_Live20161101::Client::getAllCustomTemplatesWithOptions(shared_ptr<GetAllCustomTemplatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAllCustomTemplates"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAllCustomTemplatesResponse(callApi(params, req, runtime));
}

GetAllCustomTemplatesResponse Alibabacloud_Live20161101::Client::getAllCustomTemplates(shared_ptr<GetAllCustomTemplatesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAllCustomTemplatesWithOptions(request, runtime);
}

GetCustomTemplateResponse Alibabacloud_Live20161101::Client::getCustomTemplateWithOptions(shared_ptr<GetCustomTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->template_)) {
    query->insert(pair<string, string>("Template_", *request->template_));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetCustomTemplate"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetCustomTemplateResponse(callApi(params, req, runtime));
}

GetCustomTemplateResponse Alibabacloud_Live20161101::Client::getCustomTemplate(shared_ptr<GetCustomTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getCustomTemplateWithOptions(request, runtime);
}

GetEditingJobInfoResponse Alibabacloud_Live20161101::Client::getEditingJobInfoWithOptions(shared_ptr<GetEditingJobInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->casterId)) {
    query->insert(pair<string, string>("CasterId", *request->casterId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->showId)) {
    query->insert(pair<string, string>("ShowId", *request->showId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetEditingJobInfo"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetEditingJobInfoResponse(callApi(params, req, runtime));
}

GetEditingJobInfoResponse Alibabacloud_Live20161101::Client::getEditingJobInfo(shared_ptr<GetEditingJobInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getEditingJobInfoWithOptions(request, runtime);
}

GetMessageAppResponse Alibabacloud_Live20161101::Client::getMessageAppWithOptions(shared_ptr<GetMessageAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMessageApp"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetMessageAppResponse(callApi(params, req, runtime));
}

GetMessageAppResponse Alibabacloud_Live20161101::Client::getMessageApp(shared_ptr<GetMessageAppRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMessageAppWithOptions(request, runtime);
}

GetMessageGroupResponse Alibabacloud_Live20161101::Client::getMessageGroupWithOptions(shared_ptr<GetMessageGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    body->insert(pair<string, string>("GroupId", *request->groupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMessageGroup"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetMessageGroupResponse(callApi(params, req, runtime));
}

GetMessageGroupResponse Alibabacloud_Live20161101::Client::getMessageGroup(shared_ptr<GetMessageGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMessageGroupWithOptions(request, runtime);
}

GetMessageTokenResponse Alibabacloud_Live20161101::Client::getMessageTokenWithOptions(shared_ptr<GetMessageTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceId)) {
    body->insert(pair<string, string>("DeviceId", *request->deviceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deviceType)) {
    body->insert(pair<string, string>("DeviceType", *request->deviceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    body->insert(pair<string, string>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMessageToken"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetMessageTokenResponse(callApi(params, req, runtime));
}

GetMessageTokenResponse Alibabacloud_Live20161101::Client::getMessageToken(shared_ptr<GetMessageTokenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMessageTokenWithOptions(request, runtime);
}

GetMultiRateConfigResponse Alibabacloud_Live20161101::Client::getMultiRateConfigWithOptions(shared_ptr<GetMultiRateConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->app)) {
    query->insert(pair<string, string>("App", *request->app));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    query->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMultiRateConfig"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetMultiRateConfigResponse(callApi(params, req, runtime));
}

GetMultiRateConfigResponse Alibabacloud_Live20161101::Client::getMultiRateConfig(shared_ptr<GetMultiRateConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMultiRateConfigWithOptions(request, runtime);
}

GetMultiRateConfigListResponse Alibabacloud_Live20161101::Client::getMultiRateConfigListWithOptions(shared_ptr<GetMultiRateConfigListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMultiRateConfigList"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetMultiRateConfigListResponse(callApi(params, req, runtime));
}

GetMultiRateConfigListResponse Alibabacloud_Live20161101::Client::getMultiRateConfigList(shared_ptr<GetMultiRateConfigListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMultiRateConfigListWithOptions(request, runtime);
}

HotLiveRtcStreamResponse Alibabacloud_Live20161101::Client::hotLiveRtcStreamWithOptions(shared_ptr<HotLiveRtcStreamRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->audioMsid)) {
    query->insert(pair<string, string>("AudioMsid", *request->audioMsid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->connectionTimeout)) {
    query->insert(pair<string, string>("ConnectionTimeout", *request->connectionTimeout));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaTimeout)) {
    query->insert(pair<string, string>("MediaTimeout", *request->mediaTimeout));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionCode)) {
    query->insert(pair<string, string>("RegionCode", *request->regionCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->streamName)) {
    query->insert(pair<string, string>("StreamName", *request->streamName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->videoMsid)) {
    query->insert(pair<string, string>("VideoMsid", *request->videoMsid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("HotLiveRtcStream"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return HotLiveRtcStreamResponse(callApi(params, req, runtime));
}

HotLiveRtcStreamResponse Alibabacloud_Live20161101::Client::hotLiveRtcStream(shared_ptr<HotLiveRtcStreamRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return hotLiveRtcStreamWithOptions(request, runtime);
}

InitializeAutoShowListTaskResponse Alibabacloud_Live20161101::Client::initializeAutoShowListTaskWithOptions(shared_ptr<InitializeAutoShowListTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->callBackUrl)) {
    query->insert(pair<string, string>("CallBackUrl", *request->callBackUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->casterConfig)) {
    query->insert(pair<string, string>("CasterConfig", *request->casterConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceIds)) {
    query->insert(pair<string, string>("ResourceIds", *request->resourceIds));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    query->insert(pair<string, long>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("InitializeAutoShowListTask"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return InitializeAutoShowListTaskResponse(callApi(params, req, runtime));
}

InitializeAutoShowListTaskResponse Alibabacloud_Live20161101::Client::initializeAutoShowListTask(shared_ptr<InitializeAutoShowListTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return initializeAutoShowListTaskWithOptions(request, runtime);
}

JoinMessageGroupResponse Alibabacloud_Live20161101::Client::joinMessageGroupWithOptions(shared_ptr<JoinMessageGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->broadCastStatistics)) {
    body->insert(pair<string, bool>("BroadCastStatistics", *request->broadCastStatistics));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->broadCastType)) {
    body->insert(pair<string, long>("BroadCastType", *request->broadCastType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    body->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    body->insert(pair<string, string>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("JoinMessageGroup"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return JoinMessageGroupResponse(callApi(params, req, runtime));
}

JoinMessageGroupResponse Alibabacloud_Live20161101::Client::joinMessageGroup(shared_ptr<JoinMessageGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return joinMessageGroupWithOptions(request, runtime);
}

LeaveMessageGroupResponse Alibabacloud_Live20161101::Client::leaveMessageGroupWithOptions(shared_ptr<LeaveMessageGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->broadCastStatistics)) {
    body->insert(pair<string, bool>("BroadCastStatistics", *request->broadCastStatistics));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->broadCastType)) {
    body->insert(pair<string, long>("BroadCastType", *request->broadCastType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    body->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    body->insert(pair<string, string>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("LeaveMessageGroup"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return LeaveMessageGroupResponse(callApi(params, req, runtime));
}

LeaveMessageGroupResponse Alibabacloud_Live20161101::Client::leaveMessageGroup(shared_ptr<LeaveMessageGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return leaveMessageGroupWithOptions(request, runtime);
}

ListLiveRealtimeLogDeliveryResponse Alibabacloud_Live20161101::Client::listLiveRealtimeLogDeliveryWithOptions(shared_ptr<ListLiveRealtimeLogDeliveryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListLiveRealtimeLogDelivery"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListLiveRealtimeLogDeliveryResponse(callApi(params, req, runtime));
}

ListLiveRealtimeLogDeliveryResponse Alibabacloud_Live20161101::Client::listLiveRealtimeLogDelivery(shared_ptr<ListLiveRealtimeLogDeliveryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listLiveRealtimeLogDeliveryWithOptions(request, runtime);
}

ListLiveRealtimeLogDeliveryDomainsResponse Alibabacloud_Live20161101::Client::listLiveRealtimeLogDeliveryDomainsWithOptions(shared_ptr<ListLiveRealtimeLogDeliveryDomainsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListLiveRealtimeLogDeliveryDomains"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListLiveRealtimeLogDeliveryDomainsResponse(callApi(params, req, runtime));
}

ListLiveRealtimeLogDeliveryDomainsResponse Alibabacloud_Live20161101::Client::listLiveRealtimeLogDeliveryDomains(shared_ptr<ListLiveRealtimeLogDeliveryDomainsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listLiveRealtimeLogDeliveryDomainsWithOptions(request, runtime);
}

ListLiveRealtimeLogDeliveryInfosResponse Alibabacloud_Live20161101::Client::listLiveRealtimeLogDeliveryInfosWithOptions(shared_ptr<ListLiveRealtimeLogDeliveryInfosRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListLiveRealtimeLogDeliveryInfos"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListLiveRealtimeLogDeliveryInfosResponse(callApi(params, req, runtime));
}

ListLiveRealtimeLogDeliveryInfosResponse Alibabacloud_Live20161101::Client::listLiveRealtimeLogDeliveryInfos(shared_ptr<ListLiveRealtimeLogDeliveryInfosRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listLiveRealtimeLogDeliveryInfosWithOptions(request, runtime);
}

ListMessageResponse Alibabacloud_Live20161101::Client::listMessageWithOptions(shared_ptr<ListMessageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    body->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    body->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->sortType)) {
    body->insert(pair<string, long>("SortType", *request->sortType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->type)) {
    body->insert(pair<string, long>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListMessage"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListMessageResponse(callApi(params, req, runtime));
}

ListMessageResponse Alibabacloud_Live20161101::Client::listMessage(shared_ptr<ListMessageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listMessageWithOptions(request, runtime);
}

ListMessageAppResponse Alibabacloud_Live20161101::Client::listMessageAppWithOptions(shared_ptr<ListMessageAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    body->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->sortType)) {
    body->insert(pair<string, long>("SortType", *request->sortType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListMessageApp"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListMessageAppResponse(callApi(params, req, runtime));
}

ListMessageAppResponse Alibabacloud_Live20161101::Client::listMessageApp(shared_ptr<ListMessageAppRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listMessageAppWithOptions(request, runtime);
}

ListMessageGroupResponse Alibabacloud_Live20161101::Client::listMessageGroupWithOptions(shared_ptr<ListMessageGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    body->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->sortType)) {
    body->insert(pair<string, long>("SortType", *request->sortType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    body->insert(pair<string, string>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListMessageGroup"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListMessageGroupResponse(callApi(params, req, runtime));
}

ListMessageGroupResponse Alibabacloud_Live20161101::Client::listMessageGroup(shared_ptr<ListMessageGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listMessageGroupWithOptions(request, runtime);
}

ListMessageGroupUserResponse Alibabacloud_Live20161101::Client::listMessageGroupUserWithOptions(shared_ptr<ListMessageGroupUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    body->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    body->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->sortType)) {
    body->insert(pair<string, long>("SortType", *request->sortType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListMessageGroupUser"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListMessageGroupUserResponse(callApi(params, req, runtime));
}

ListMessageGroupUserResponse Alibabacloud_Live20161101::Client::listMessageGroupUser(shared_ptr<ListMessageGroupUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listMessageGroupUserWithOptions(request, runtime);
}

ListMessageGroupUserByIdResponse Alibabacloud_Live20161101::Client::listMessageGroupUserByIdWithOptions(shared_ptr<ListMessageGroupUserByIdRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ListMessageGroupUserByIdShrinkRequest> request = make_shared<ListMessageGroupUserByIdShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->userIdList)) {
    request->userIdListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->userIdList, make_shared<string>("UserIdList"), make_shared<string>("simple")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    body->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userIdListShrink)) {
    body->insert(pair<string, string>("UserIdList", *request->userIdListShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListMessageGroupUserById"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListMessageGroupUserByIdResponse(callApi(params, req, runtime));
}

ListMessageGroupUserByIdResponse Alibabacloud_Live20161101::Client::listMessageGroupUserById(shared_ptr<ListMessageGroupUserByIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listMessageGroupUserByIdWithOptions(request, runtime);
}

ListPlaylistResponse Alibabacloud_Live20161101::Client::listPlaylistWithOptions(shared_ptr<ListPlaylistRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->page)) {
    query->insert(pair<string, long>("Page", *request->page));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->programId)) {
    query->insert(pair<string, string>("ProgramId", *request->programId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListPlaylist"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListPlaylistResponse(callApi(params, req, runtime));
}

ListPlaylistResponse Alibabacloud_Live20161101::Client::listPlaylist(shared_ptr<ListPlaylistRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listPlaylistWithOptions(request, runtime);
}

ListPlaylistItemsResponse Alibabacloud_Live20161101::Client::listPlaylistItemsWithOptions(shared_ptr<ListPlaylistItemsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->programId)) {
    query->insert(pair<string, string>("ProgramId", *request->programId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->programItemIds)) {
    query->insert(pair<string, string>("ProgramItemIds", *request->programItemIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListPlaylistItems"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListPlaylistItemsResponse(callApi(params, req, runtime));
}

ListPlaylistItemsResponse Alibabacloud_Live20161101::Client::listPlaylistItems(shared_ptr<ListPlaylistItemsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listPlaylistItemsWithOptions(request, runtime);
}

ModifyCasterComponentResponse Alibabacloud_Live20161101::Client::modifyCasterComponentWithOptions(shared_ptr<ModifyCasterComponentRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->captionLayerContent)) {
    query->insert(pair<string, string>("CaptionLayerContent", *request->captionLayerContent));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->casterId)) {
    query->insert(pair<string, string>("CasterId", *request->casterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->componentId)) {
    query->insert(pair<string, string>("ComponentId", *request->componentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->componentLayer)) {
    query->insert(pair<string, string>("ComponentLayer", *request->componentLayer));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->componentName)) {
    query->insert(pair<string, string>("ComponentName", *request->componentName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->componentType)) {
    query->insert(pair<string, string>("ComponentType", *request->componentType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->effect)) {
    query->insert(pair<string, string>("Effect", *request->effect));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageLayerContent)) {
    query->insert(pair<string, string>("ImageLayerContent", *request->imageLayerContent));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->textLayerContent)) {
    query->insert(pair<string, string>("TextLayerContent", *request->textLayerContent));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyCasterComponent"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyCasterComponentResponse(callApi(params, req, runtime));
}

ModifyCasterComponentResponse Alibabacloud_Live20161101::Client::modifyCasterComponent(shared_ptr<ModifyCasterComponentRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyCasterComponentWithOptions(request, runtime);
}

ModifyCasterEpisodeResponse Alibabacloud_Live20161101::Client::modifyCasterEpisodeWithOptions(shared_ptr<ModifyCasterEpisodeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->casterId)) {
    query->insert(pair<string, string>("CasterId", *request->casterId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->componentId)) {
    query->insert(pair<string, vector<string>>("ComponentId", *request->componentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->episodeId)) {
    query->insert(pair<string, string>("EpisodeId", *request->episodeId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->episodeName)) {
    query->insert(pair<string, string>("EpisodeName", *request->episodeName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceId)) {
    query->insert(pair<string, string>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->switchType)) {
    query->insert(pair<string, string>("SwitchType", *request->switchType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyCasterEpisode"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyCasterEpisodeResponse(callApi(params, req, runtime));
}

ModifyCasterEpisodeResponse Alibabacloud_Live20161101::Client::modifyCasterEpisode(shared_ptr<ModifyCasterEpisodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyCasterEpisodeWithOptions(request, runtime);
}

ModifyCasterLayoutResponse Alibabacloud_Live20161101::Client::modifyCasterLayoutWithOptions(shared_ptr<ModifyCasterLayoutRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<ModifyCasterLayoutRequestAudioLayer>>(request->audioLayer)) {
    query->insert(pair<string, vector<ModifyCasterLayoutRequestAudioLayer>>("AudioLayer", *request->audioLayer));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->blendList)) {
    query->insert(pair<string, vector<string>>("BlendList", *request->blendList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->casterId)) {
    query->insert(pair<string, string>("CasterId", *request->casterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->layoutId)) {
    query->insert(pair<string, string>("LayoutId", *request->layoutId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->mixList)) {
    query->insert(pair<string, vector<string>>("MixList", *request->mixList));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ModifyCasterLayoutRequestVideoLayer>>(request->videoLayer)) {
    query->insert(pair<string, vector<ModifyCasterLayoutRequestVideoLayer>>("VideoLayer", *request->videoLayer));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyCasterLayout"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyCasterLayoutResponse(callApi(params, req, runtime));
}

ModifyCasterLayoutResponse Alibabacloud_Live20161101::Client::modifyCasterLayout(shared_ptr<ModifyCasterLayoutRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyCasterLayoutWithOptions(request, runtime);
}

ModifyCasterProgramResponse Alibabacloud_Live20161101::Client::modifyCasterProgramWithOptions(shared_ptr<ModifyCasterProgramRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->casterId)) {
    query->insert(pair<string, string>("CasterId", *request->casterId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ModifyCasterProgramRequestEpisode>>(request->episode)) {
    query->insert(pair<string, vector<ModifyCasterProgramRequestEpisode>>("Episode", *request->episode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyCasterProgram"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyCasterProgramResponse(callApi(params, req, runtime));
}

ModifyCasterProgramResponse Alibabacloud_Live20161101::Client::modifyCasterProgram(shared_ptr<ModifyCasterProgramRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyCasterProgramWithOptions(request, runtime);
}

ModifyCasterVideoResourceResponse Alibabacloud_Live20161101::Client::modifyCasterVideoResourceWithOptions(shared_ptr<ModifyCasterVideoResourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->beginOffset)) {
    query->insert(pair<string, long>("BeginOffset", *request->beginOffset));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->casterId)) {
    query->insert(pair<string, string>("CasterId", *request->casterId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endOffset)) {
    query->insert(pair<string, long>("EndOffset", *request->endOffset));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->liveStreamUrl)) {
    query->insert(pair<string, string>("LiveStreamUrl", *request->liveStreamUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->materialId)) {
    query->insert(pair<string, string>("MaterialId", *request->materialId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ptsCallbackInterval)) {
    query->insert(pair<string, long>("PtsCallbackInterval", *request->ptsCallbackInterval));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->repeatNum)) {
    query->insert(pair<string, long>("RepeatNum", *request->repeatNum));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceId)) {
    query->insert(pair<string, string>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceName)) {
    query->insert(pair<string, string>("ResourceName", *request->resourceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->vodUrl)) {
    query->insert(pair<string, string>("VodUrl", *request->vodUrl));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyCasterVideoResource"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyCasterVideoResourceResponse(callApi(params, req, runtime));
}

ModifyCasterVideoResourceResponse Alibabacloud_Live20161101::Client::modifyCasterVideoResource(shared_ptr<ModifyCasterVideoResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyCasterVideoResourceWithOptions(request, runtime);
}

ModifyLiveDomainSchdmByPropertyResponse Alibabacloud_Live20161101::Client::modifyLiveDomainSchdmByPropertyWithOptions(shared_ptr<ModifyLiveDomainSchdmByPropertyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->property)) {
    query->insert(pair<string, string>("Property", *request->property));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyLiveDomainSchdmByProperty"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyLiveDomainSchdmByPropertyResponse(callApi(params, req, runtime));
}

ModifyLiveDomainSchdmByPropertyResponse Alibabacloud_Live20161101::Client::modifyLiveDomainSchdmByProperty(shared_ptr<ModifyLiveDomainSchdmByPropertyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyLiveDomainSchdmByPropertyWithOptions(request, runtime);
}

ModifyLiveRealtimeLogDeliveryResponse Alibabacloud_Live20161101::Client::modifyLiveRealtimeLogDeliveryWithOptions(shared_ptr<ModifyLiveRealtimeLogDeliveryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyLiveRealtimeLogDelivery"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyLiveRealtimeLogDeliveryResponse(callApi(params, req, runtime));
}

ModifyLiveRealtimeLogDeliveryResponse Alibabacloud_Live20161101::Client::modifyLiveRealtimeLogDelivery(shared_ptr<ModifyLiveRealtimeLogDeliveryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyLiveRealtimeLogDeliveryWithOptions(request, runtime);
}

ModifyShowListResponse Alibabacloud_Live20161101::Client::modifyShowListWithOptions(shared_ptr<ModifyShowListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->casterId)) {
    query->insert(pair<string, string>("CasterId", *request->casterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->highPriorityShowId)) {
    query->insert(pair<string, string>("HighPriorityShowId", *request->highPriorityShowId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->highPriorityShowStartTime)) {
    query->insert(pair<string, string>("HighPriorityShowStartTime", *request->highPriorityShowStartTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->repeatTimes)) {
    query->insert(pair<string, long>("RepeatTimes", *request->repeatTimes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->showId)) {
    query->insert(pair<string, string>("ShowId", *request->showId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->spot)) {
    query->insert(pair<string, long>("Spot", *request->spot));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyShowList"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyShowListResponse(callApi(params, req, runtime));
}

ModifyShowListResponse Alibabacloud_Live20161101::Client::modifyShowList(shared_ptr<ModifyShowListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyShowListWithOptions(request, runtime);
}

ModifyStudioLayoutResponse Alibabacloud_Live20161101::Client::modifyStudioLayoutWithOptions(shared_ptr<ModifyStudioLayoutRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bgImageConfig)) {
    query->insert(pair<string, string>("BgImageConfig", *request->bgImageConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->casterId)) {
    query->insert(pair<string, string>("CasterId", *request->casterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->commonConfig)) {
    query->insert(pair<string, string>("CommonConfig", *request->commonConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->layerOrderConfigList)) {
    query->insert(pair<string, string>("LayerOrderConfigList", *request->layerOrderConfigList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->layoutId)) {
    query->insert(pair<string, string>("LayoutId", *request->layoutId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->layoutName)) {
    query->insert(pair<string, string>("LayoutName", *request->layoutName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaInputConfigList)) {
    query->insert(pair<string, string>("MediaInputConfigList", *request->mediaInputConfigList));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->screenInputConfigList)) {
    query->insert(pair<string, string>("ScreenInputConfigList", *request->screenInputConfigList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyStudioLayout"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyStudioLayoutResponse(callApi(params, req, runtime));
}

ModifyStudioLayoutResponse Alibabacloud_Live20161101::Client::modifyStudioLayout(shared_ptr<ModifyStudioLayoutRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyStudioLayoutWithOptions(request, runtime);
}

OpenLiveShiftResponse Alibabacloud_Live20161101::Client::openLiveShiftWithOptions(shared_ptr<OpenLiveShiftRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->duration)) {
    query->insert(pair<string, long>("Duration", *request->duration));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->ignoreTranscode)) {
    query->insert(pair<string, bool>("IgnoreTranscode", *request->ignoreTranscode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->streamName)) {
    query->insert(pair<string, string>("StreamName", *request->streamName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->vision)) {
    query->insert(pair<string, long>("Vision", *request->vision));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("OpenLiveShift"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return OpenLiveShiftResponse(callApi(params, req, runtime));
}

OpenLiveShiftResponse Alibabacloud_Live20161101::Client::openLiveShift(shared_ptr<OpenLiveShiftRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return openLiveShiftWithOptions(request, runtime);
}

PlayChoosenShowResponse Alibabacloud_Live20161101::Client::playChoosenShowWithOptions(shared_ptr<PlayChoosenShowRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->casterId)) {
    query->insert(pair<string, string>("CasterId", *request->casterId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->showId)) {
    query->insert(pair<string, string>("ShowId", *request->showId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PlayChoosenShow"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PlayChoosenShowResponse(callApi(params, req, runtime));
}

PlayChoosenShowResponse Alibabacloud_Live20161101::Client::playChoosenShow(shared_ptr<PlayChoosenShowRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return playChoosenShowWithOptions(request, runtime);
}

PublishLiveStagingConfigToProductionResponse Alibabacloud_Live20161101::Client::publishLiveStagingConfigToProductionWithOptions(shared_ptr<PublishLiveStagingConfigToProductionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->functionName)) {
    query->insert(pair<string, string>("FunctionName", *request->functionName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PublishLiveStagingConfigToProduction"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PublishLiveStagingConfigToProductionResponse(callApi(params, req, runtime));
}

PublishLiveStagingConfigToProductionResponse Alibabacloud_Live20161101::Client::publishLiveStagingConfigToProduction(shared_ptr<PublishLiveStagingConfigToProductionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return publishLiveStagingConfigToProductionWithOptions(request, runtime);
}

QueryMessageAppResponse Alibabacloud_Live20161101::Client::queryMessageAppWithOptions(shared_ptr<QueryMessageAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    body->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    body->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    body->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->sortType)) {
    body->insert(pair<string, long>("SortType", *request->sortType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryMessageApp"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryMessageAppResponse(callApi(params, req, runtime));
}

QueryMessageAppResponse Alibabacloud_Live20161101::Client::queryMessageApp(shared_ptr<QueryMessageAppRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryMessageAppWithOptions(request, runtime);
}

QuerySnapshotCallbackAuthResponse Alibabacloud_Live20161101::Client::querySnapshotCallbackAuthWithOptions(shared_ptr<QuerySnapshotCallbackAuthRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QuerySnapshotCallbackAuth"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QuerySnapshotCallbackAuthResponse(callApi(params, req, runtime));
}

QuerySnapshotCallbackAuthResponse Alibabacloud_Live20161101::Client::querySnapshotCallbackAuth(shared_ptr<QuerySnapshotCallbackAuthRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return querySnapshotCallbackAuthWithOptions(request, runtime);
}

RealTimeRecordCommandResponse Alibabacloud_Live20161101::Client::realTimeRecordCommandWithOptions(shared_ptr<RealTimeRecordCommandRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->command)) {
    query->insert(pair<string, string>("Command", *request->command));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->streamName)) {
    query->insert(pair<string, string>("StreamName", *request->streamName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RealTimeRecordCommand"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RealTimeRecordCommandResponse(callApi(params, req, runtime));
}

RealTimeRecordCommandResponse Alibabacloud_Live20161101::Client::realTimeRecordCommand(shared_ptr<RealTimeRecordCommandRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return realTimeRecordCommandWithOptions(request, runtime);
}

RealTimeSnapshotCommandResponse Alibabacloud_Live20161101::Client::realTimeSnapshotCommandWithOptions(shared_ptr<RealTimeSnapshotCommandRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->command)) {
    query->insert(pair<string, string>("Command", *request->command));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->interval)) {
    query->insert(pair<string, long>("Interval", *request->interval));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->mode)) {
    query->insert(pair<string, long>("Mode", *request->mode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->source)) {
    query->insert(pair<string, long>("Source", *request->source));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->streamName)) {
    query->insert(pair<string, string>("StreamName", *request->streamName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RealTimeSnapshotCommand"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RealTimeSnapshotCommandResponse(callApi(params, req, runtime));
}

RealTimeSnapshotCommandResponse Alibabacloud_Live20161101::Client::realTimeSnapshotCommand(shared_ptr<RealTimeSnapshotCommandRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return realTimeSnapshotCommandWithOptions(request, runtime);
}

RemoveShowFromShowListResponse Alibabacloud_Live20161101::Client::removeShowFromShowListWithOptions(shared_ptr<RemoveShowFromShowListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->casterId)) {
    query->insert(pair<string, string>("CasterId", *request->casterId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->showId)) {
    query->insert(pair<string, string>("ShowId", *request->showId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->isBatchMode)) {
    query->insert(pair<string, bool>("isBatchMode", *request->isBatchMode));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->showIdList)) {
    query->insert(pair<string, vector<string>>("showIdList", *request->showIdList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveShowFromShowList"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RemoveShowFromShowListResponse(callApi(params, req, runtime));
}

RemoveShowFromShowListResponse Alibabacloud_Live20161101::Client::removeShowFromShowList(shared_ptr<RemoveShowFromShowListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeShowFromShowListWithOptions(request, runtime);
}

RestartCasterResponse Alibabacloud_Live20161101::Client::restartCasterWithOptions(shared_ptr<RestartCasterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->casterId)) {
    query->insert(pair<string, string>("CasterId", *request->casterId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RestartCaster"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RestartCasterResponse(callApi(params, req, runtime));
}

RestartCasterResponse Alibabacloud_Live20161101::Client::restartCaster(shared_ptr<RestartCasterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return restartCasterWithOptions(request, runtime);
}

ResumeLiveStreamResponse Alibabacloud_Live20161101::Client::resumeLiveStreamWithOptions(shared_ptr<ResumeLiveStreamRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->liveStreamType)) {
    query->insert(pair<string, string>("LiveStreamType", *request->liveStreamType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->streamName)) {
    query->insert(pair<string, string>("StreamName", *request->streamName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ResumeLiveStream"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ResumeLiveStreamResponse(callApi(params, req, runtime));
}

ResumeLiveStreamResponse Alibabacloud_Live20161101::Client::resumeLiveStream(shared_ptr<ResumeLiveStreamRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return resumeLiveStreamWithOptions(request, runtime);
}

RollbackLiveStagingConfigResponse Alibabacloud_Live20161101::Client::rollbackLiveStagingConfigWithOptions(shared_ptr<RollbackLiveStagingConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->functionName)) {
    query->insert(pair<string, string>("FunctionName", *request->functionName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RollbackLiveStagingConfig"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RollbackLiveStagingConfigResponse(callApi(params, req, runtime));
}

RollbackLiveStagingConfigResponse Alibabacloud_Live20161101::Client::rollbackLiveStagingConfig(shared_ptr<RollbackLiveStagingConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return rollbackLiveStagingConfigWithOptions(request, runtime);
}

SendLikeResponse Alibabacloud_Live20161101::Client::sendLikeWithOptions(shared_ptr<SendLikeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->broadCastType)) {
    body->insert(pair<string, long>("BroadCastType", *request->broadCastType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->count)) {
    body->insert(pair<string, string>("Count", *request->count));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    body->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operatorUserId)) {
    body->insert(pair<string, string>("OperatorUserId", *request->operatorUserId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SendLike"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SendLikeResponse(callApi(params, req, runtime));
}

SendLikeResponse Alibabacloud_Live20161101::Client::sendLike(shared_ptr<SendLikeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return sendLikeWithOptions(request, runtime);
}

SendMessageToGroupResponse Alibabacloud_Live20161101::Client::sendMessageToGroupWithOptions(shared_ptr<SendMessageToGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->data)) {
    body->insert(pair<string, string>("Data", *request->data));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    body->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operatorUserId)) {
    body->insert(pair<string, string>("OperatorUserId", *request->operatorUserId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->type)) {
    body->insert(pair<string, long>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SendMessageToGroup"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SendMessageToGroupResponse(callApi(params, req, runtime));
}

SendMessageToGroupResponse Alibabacloud_Live20161101::Client::sendMessageToGroup(shared_ptr<SendMessageToGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return sendMessageToGroupWithOptions(request, runtime);
}

SendMessageToGroupUsersResponse Alibabacloud_Live20161101::Client::sendMessageToGroupUsersWithOptions(shared_ptr<SendMessageToGroupUsersRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SendMessageToGroupUsersShrinkRequest> request = make_shared<SendMessageToGroupUsersShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->receiverIdList)) {
    request->receiverIdListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->receiverIdList, make_shared<string>("ReceiverIdList"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->data)) {
    body->insert(pair<string, string>("Data", *request->data));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    body->insert(pair<string, string>("GroupId", *request->groupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->operatorUserId)) {
    body->insert(pair<string, string>("OperatorUserId", *request->operatorUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->receiverIdListShrink)) {
    body->insert(pair<string, string>("ReceiverIdList", *request->receiverIdListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->type)) {
    body->insert(pair<string, long>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SendMessageToGroupUsers"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SendMessageToGroupUsersResponse(callApi(params, req, runtime));
}

SendMessageToGroupUsersResponse Alibabacloud_Live20161101::Client::sendMessageToGroupUsers(shared_ptr<SendMessageToGroupUsersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return sendMessageToGroupUsersWithOptions(request, runtime);
}

SendRoomNotificationResponse Alibabacloud_Live20161101::Client::sendRoomNotificationWithOptions(shared_ptr<SendRoomNotificationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appUid)) {
    query->insert(pair<string, string>("AppUid", *request->appUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->data)) {
    query->insert(pair<string, string>("Data", *request->data));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->priority)) {
    query->insert(pair<string, long>("Priority", *request->priority));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->roomId)) {
    query->insert(pair<string, string>("RoomId", *request->roomId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SendRoomNotification"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SendRoomNotificationResponse(callApi(params, req, runtime));
}

SendRoomNotificationResponse Alibabacloud_Live20161101::Client::sendRoomNotification(shared_ptr<SendRoomNotificationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return sendRoomNotificationWithOptions(request, runtime);
}

SendRoomUserNotificationResponse Alibabacloud_Live20161101::Client::sendRoomUserNotificationWithOptions(shared_ptr<SendRoomUserNotificationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appUid)) {
    query->insert(pair<string, string>("AppUid", *request->appUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->data)) {
    query->insert(pair<string, string>("Data", *request->data));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->priority)) {
    query->insert(pair<string, long>("Priority", *request->priority));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->roomId)) {
    query->insert(pair<string, string>("RoomId", *request->roomId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->toAppUid)) {
    query->insert(pair<string, string>("ToAppUid", *request->toAppUid));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SendRoomUserNotification"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SendRoomUserNotificationResponse(callApi(params, req, runtime));
}

SendRoomUserNotificationResponse Alibabacloud_Live20161101::Client::sendRoomUserNotification(shared_ptr<SendRoomUserNotificationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return sendRoomUserNotificationWithOptions(request, runtime);
}

SetCasterChannelResponse Alibabacloud_Live20161101::Client::setCasterChannelWithOptions(shared_ptr<SetCasterChannelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->casterId)) {
    query->insert(pair<string, string>("CasterId", *request->casterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->channelId)) {
    query->insert(pair<string, string>("ChannelId", *request->channelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->faceBeauty)) {
    query->insert(pair<string, string>("FaceBeauty", *request->faceBeauty));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->playStatus)) {
    query->insert(pair<string, long>("PlayStatus", *request->playStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceId)) {
    query->insert(pair<string, string>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->seekOffset)) {
    query->insert(pair<string, long>("SeekOffset", *request->seekOffset));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetCasterChannel"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetCasterChannelResponse(callApi(params, req, runtime));
}

SetCasterChannelResponse Alibabacloud_Live20161101::Client::setCasterChannel(shared_ptr<SetCasterChannelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setCasterChannelWithOptions(request, runtime);
}

SetCasterConfigResponse Alibabacloud_Live20161101::Client::setCasterConfigWithOptions(shared_ptr<SetCasterConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->callbackUrl)) {
    query->insert(pair<string, string>("CallbackUrl", *request->callbackUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->casterId)) {
    query->insert(pair<string, string>("CasterId", *request->casterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->casterName)) {
    query->insert(pair<string, string>("CasterName", *request->casterName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->channelEnable)) {
    query->insert(pair<string, long>("ChannelEnable", *request->channelEnable));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->delay)) {
    query->insert(pair<string, double>("Delay", *request->delay));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->programEffect)) {
    query->insert(pair<string, long>("ProgramEffect", *request->programEffect));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->programName)) {
    query->insert(pair<string, string>("ProgramName", *request->programName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->recordConfig)) {
    query->insert(pair<string, string>("RecordConfig", *request->recordConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sideOutputUrl)) {
    query->insert(pair<string, string>("SideOutputUrl", *request->sideOutputUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sideOutputUrlList)) {
    query->insert(pair<string, string>("SideOutputUrlList", *request->sideOutputUrlList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->syncGroupsConfig)) {
    query->insert(pair<string, string>("SyncGroupsConfig", *request->syncGroupsConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->transcodeConfig)) {
    query->insert(pair<string, string>("TranscodeConfig", *request->transcodeConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->urgentLiveStreamUrl)) {
    query->insert(pair<string, string>("UrgentLiveStreamUrl", *request->urgentLiveStreamUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->urgentMaterialId)) {
    query->insert(pair<string, string>("UrgentMaterialId", *request->urgentMaterialId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetCasterConfig"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetCasterConfigResponse(callApi(params, req, runtime));
}

SetCasterConfigResponse Alibabacloud_Live20161101::Client::setCasterConfig(shared_ptr<SetCasterConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setCasterConfigWithOptions(request, runtime);
}

SetCasterSceneConfigResponse Alibabacloud_Live20161101::Client::setCasterSceneConfigWithOptions(shared_ptr<SetCasterSceneConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->casterId)) {
    query->insert(pair<string, string>("CasterId", *request->casterId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->componentId)) {
    query->insert(pair<string, vector<string>>("ComponentId", *request->componentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->layoutId)) {
    query->insert(pair<string, string>("LayoutId", *request->layoutId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sceneId)) {
    query->insert(pair<string, string>("SceneId", *request->sceneId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetCasterSceneConfig"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetCasterSceneConfigResponse(callApi(params, req, runtime));
}

SetCasterSceneConfigResponse Alibabacloud_Live20161101::Client::setCasterSceneConfig(shared_ptr<SetCasterSceneConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setCasterSceneConfigWithOptions(request, runtime);
}

SetCasterSyncGroupResponse Alibabacloud_Live20161101::Client::setCasterSyncGroupWithOptions(shared_ptr<SetCasterSyncGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->casterId)) {
    query->insert(pair<string, string>("CasterId", *request->casterId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<SetCasterSyncGroupRequestSyncGroup>>(request->syncGroup)) {
    query->insert(pair<string, vector<SetCasterSyncGroupRequestSyncGroup>>("SyncGroup", *request->syncGroup));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetCasterSyncGroup"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetCasterSyncGroupResponse(callApi(params, req, runtime));
}

SetCasterSyncGroupResponse Alibabacloud_Live20161101::Client::setCasterSyncGroup(shared_ptr<SetCasterSyncGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setCasterSyncGroupWithOptions(request, runtime);
}

SetCasterTimedEventResponse Alibabacloud_Live20161101::Client::setCasterTimedEventWithOptions(shared_ptr<SetCasterTimedEventRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->casterId)) {
    query->insert(pair<string, string>("CasterId", *request->casterId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventName)) {
    query->insert(pair<string, string>("EventName", *request->eventName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTimeUTC)) {
    query->insert(pair<string, string>("StartTimeUTC", *request->startTimeUTC));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetCasterTimedEvent"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetCasterTimedEventResponse(callApi(params, req, runtime));
}

SetCasterTimedEventResponse Alibabacloud_Live20161101::Client::setCasterTimedEvent(shared_ptr<SetCasterTimedEventRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setCasterTimedEventWithOptions(request, runtime);
}

SetLiveDomainCertificateResponse Alibabacloud_Live20161101::Client::setLiveDomainCertificateWithOptions(shared_ptr<SetLiveDomainCertificateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->certName)) {
    query->insert(pair<string, string>("CertName", *request->certName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->certType)) {
    query->insert(pair<string, string>("CertType", *request->certType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->forceSet)) {
    query->insert(pair<string, string>("ForceSet", *request->forceSet));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->SSLPri)) {
    query->insert(pair<string, string>("SSLPri", *request->SSLPri));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->SSLProtocol)) {
    query->insert(pair<string, string>("SSLProtocol", *request->SSLProtocol));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->SSLPub)) {
    query->insert(pair<string, string>("SSLPub", *request->SSLPub));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetLiveDomainCertificate"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetLiveDomainCertificateResponse(callApi(params, req, runtime));
}

SetLiveDomainCertificateResponse Alibabacloud_Live20161101::Client::setLiveDomainCertificate(shared_ptr<SetLiveDomainCertificateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setLiveDomainCertificateWithOptions(request, runtime);
}

SetLiveDomainStagingConfigResponse Alibabacloud_Live20161101::Client::setLiveDomainStagingConfigWithOptions(shared_ptr<SetLiveDomainStagingConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->functions)) {
    query->insert(pair<string, string>("Functions", *request->functions));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetLiveDomainStagingConfig"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetLiveDomainStagingConfigResponse(callApi(params, req, runtime));
}

SetLiveDomainStagingConfigResponse Alibabacloud_Live20161101::Client::setLiveDomainStagingConfig(shared_ptr<SetLiveDomainStagingConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setLiveDomainStagingConfigWithOptions(request, runtime);
}

SetLiveEdgeTransferResponse Alibabacloud_Live20161101::Client::setLiveEdgeTransferWithOptions(shared_ptr<SetLiveEdgeTransferRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->httpDns)) {
    query->insert(pair<string, string>("HttpDns", *request->httpDns));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->streamName)) {
    query->insert(pair<string, string>("StreamName", *request->streamName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->targetDomainList)) {
    query->insert(pair<string, string>("TargetDomainList", *request->targetDomainList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->transferArgs)) {
    query->insert(pair<string, string>("TransferArgs", *request->transferArgs));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetLiveEdgeTransfer"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetLiveEdgeTransferResponse(callApi(params, req, runtime));
}

SetLiveEdgeTransferResponse Alibabacloud_Live20161101::Client::setLiveEdgeTransfer(shared_ptr<SetLiveEdgeTransferRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setLiveEdgeTransferWithOptions(request, runtime);
}

SetLiveLazyPullStreamInfoConfigResponse Alibabacloud_Live20161101::Client::setLiveLazyPullStreamInfoConfigWithOptions(shared_ptr<SetLiveLazyPullStreamInfoConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pullAppName)) {
    query->insert(pair<string, string>("PullAppName", *request->pullAppName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pullDomainName)) {
    query->insert(pair<string, string>("PullDomainName", *request->pullDomainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pullProtocol)) {
    query->insert(pair<string, string>("PullProtocol", *request->pullProtocol));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetLiveLazyPullStreamInfoConfig"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetLiveLazyPullStreamInfoConfigResponse(callApi(params, req, runtime));
}

SetLiveLazyPullStreamInfoConfigResponse Alibabacloud_Live20161101::Client::setLiveLazyPullStreamInfoConfig(shared_ptr<SetLiveLazyPullStreamInfoConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setLiveLazyPullStreamInfoConfigWithOptions(request, runtime);
}

SetLiveStreamDelayConfigResponse Alibabacloud_Live20161101::Client::setLiveStreamDelayConfigWithOptions(shared_ptr<SetLiveStreamDelayConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->flvDelay)) {
    query->insert(pair<string, long>("FlvDelay", *request->flvDelay));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->flvLevel)) {
    query->insert(pair<string, string>("FlvLevel", *request->flvLevel));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->hlsDelay)) {
    query->insert(pair<string, long>("HlsDelay", *request->hlsDelay));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hlsLevel)) {
    query->insert(pair<string, string>("HlsLevel", *request->hlsLevel));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->rtmpDelay)) {
    query->insert(pair<string, long>("RtmpDelay", *request->rtmpDelay));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->rtmpLevel)) {
    query->insert(pair<string, string>("RtmpLevel", *request->rtmpLevel));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetLiveStreamDelayConfig"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetLiveStreamDelayConfigResponse(callApi(params, req, runtime));
}

SetLiveStreamDelayConfigResponse Alibabacloud_Live20161101::Client::setLiveStreamDelayConfig(shared_ptr<SetLiveStreamDelayConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setLiveStreamDelayConfigWithOptions(request, runtime);
}

SetLiveStreamOptimizedFeatureConfigResponse Alibabacloud_Live20161101::Client::setLiveStreamOptimizedFeatureConfigWithOptions(shared_ptr<SetLiveStreamOptimizedFeatureConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->configName)) {
    query->insert(pair<string, string>("ConfigName", *request->configName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->configStatus)) {
    query->insert(pair<string, string>("ConfigStatus", *request->configStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->configValue)) {
    query->insert(pair<string, string>("ConfigValue", *request->configValue));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetLiveStreamOptimizedFeatureConfig"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetLiveStreamOptimizedFeatureConfigResponse(callApi(params, req, runtime));
}

SetLiveStreamOptimizedFeatureConfigResponse Alibabacloud_Live20161101::Client::setLiveStreamOptimizedFeatureConfig(shared_ptr<SetLiveStreamOptimizedFeatureConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setLiveStreamOptimizedFeatureConfigWithOptions(request, runtime);
}

SetLiveStreamsNotifyUrlConfigResponse Alibabacloud_Live20161101::Client::setLiveStreamsNotifyUrlConfigWithOptions(shared_ptr<SetLiveStreamsNotifyUrlConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notifyAuthKey)) {
    query->insert(pair<string, string>("NotifyAuthKey", *request->notifyAuthKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notifyReqAuth)) {
    query->insert(pair<string, string>("NotifyReqAuth", *request->notifyReqAuth));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notifyUrl)) {
    query->insert(pair<string, string>("NotifyUrl", *request->notifyUrl));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetLiveStreamsNotifyUrlConfig"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetLiveStreamsNotifyUrlConfigResponse(callApi(params, req, runtime));
}

SetLiveStreamsNotifyUrlConfigResponse Alibabacloud_Live20161101::Client::setLiveStreamsNotifyUrlConfig(shared_ptr<SetLiveStreamsNotifyUrlConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setLiveStreamsNotifyUrlConfigWithOptions(request, runtime);
}

SetSnapshotCallbackAuthResponse Alibabacloud_Live20161101::Client::setSnapshotCallbackAuthWithOptions(shared_ptr<SetSnapshotCallbackAuthRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->callbackAuthKey)) {
    query->insert(pair<string, string>("CallbackAuthKey", *request->callbackAuthKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->callbackReqAuth)) {
    query->insert(pair<string, string>("CallbackReqAuth", *request->callbackReqAuth));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetSnapshotCallbackAuth"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetSnapshotCallbackAuthResponse(callApi(params, req, runtime));
}

SetSnapshotCallbackAuthResponse Alibabacloud_Live20161101::Client::setSnapshotCallbackAuth(shared_ptr<SetSnapshotCallbackAuthRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setSnapshotCallbackAuthWithOptions(request, runtime);
}

StartCasterResponse Alibabacloud_Live20161101::Client::startCasterWithOptions(shared_ptr<StartCasterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->casterId)) {
    query->insert(pair<string, string>("CasterId", *request->casterId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartCaster"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StartCasterResponse(callApi(params, req, runtime));
}

StartCasterResponse Alibabacloud_Live20161101::Client::startCaster(shared_ptr<StartCasterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startCasterWithOptions(request, runtime);
}

StartCasterSceneResponse Alibabacloud_Live20161101::Client::startCasterSceneWithOptions(shared_ptr<StartCasterSceneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->casterId)) {
    query->insert(pair<string, string>("CasterId", *request->casterId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sceneId)) {
    query->insert(pair<string, string>("SceneId", *request->sceneId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartCasterScene"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StartCasterSceneResponse(callApi(params, req, runtime));
}

StartCasterSceneResponse Alibabacloud_Live20161101::Client::startCasterScene(shared_ptr<StartCasterSceneRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startCasterSceneWithOptions(request, runtime);
}

StartLiveDomainResponse Alibabacloud_Live20161101::Client::startLiveDomainWithOptions(shared_ptr<StartLiveDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartLiveDomain"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StartLiveDomainResponse(callApi(params, req, runtime));
}

StartLiveDomainResponse Alibabacloud_Live20161101::Client::startLiveDomain(shared_ptr<StartLiveDomainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startLiveDomainWithOptions(request, runtime);
}

StartLiveStreamMonitorResponse Alibabacloud_Live20161101::Client::startLiveStreamMonitorWithOptions(shared_ptr<StartLiveStreamMonitorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->monitorId)) {
    query->insert(pair<string, string>("MonitorId", *request->monitorId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartLiveStreamMonitor"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StartLiveStreamMonitorResponse(callApi(params, req, runtime));
}

StartLiveStreamMonitorResponse Alibabacloud_Live20161101::Client::startLiveStreamMonitor(shared_ptr<StartLiveStreamMonitorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startLiveStreamMonitorWithOptions(request, runtime);
}

StartPlaylistResponse Alibabacloud_Live20161101::Client::startPlaylistWithOptions(shared_ptr<StartPlaylistRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->offset)) {
    query->insert(pair<string, long>("Offset", *request->offset));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->programId)) {
    query->insert(pair<string, string>("ProgramId", *request->programId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resumeMode)) {
    query->insert(pair<string, string>("ResumeMode", *request->resumeMode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startItemId)) {
    query->insert(pair<string, string>("StartItemId", *request->startItemId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartPlaylist"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StartPlaylistResponse(callApi(params, req, runtime));
}

StartPlaylistResponse Alibabacloud_Live20161101::Client::startPlaylist(shared_ptr<StartPlaylistRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startPlaylistWithOptions(request, runtime);
}

StopCasterResponse Alibabacloud_Live20161101::Client::stopCasterWithOptions(shared_ptr<StopCasterRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->casterId)) {
    query->insert(pair<string, string>("CasterId", *request->casterId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopCaster"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StopCasterResponse(callApi(params, req, runtime));
}

StopCasterResponse Alibabacloud_Live20161101::Client::stopCaster(shared_ptr<StopCasterRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopCasterWithOptions(request, runtime);
}

StopCasterSceneResponse Alibabacloud_Live20161101::Client::stopCasterSceneWithOptions(shared_ptr<StopCasterSceneRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->casterId)) {
    query->insert(pair<string, string>("CasterId", *request->casterId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sceneId)) {
    query->insert(pair<string, string>("SceneId", *request->sceneId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopCasterScene"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StopCasterSceneResponse(callApi(params, req, runtime));
}

StopCasterSceneResponse Alibabacloud_Live20161101::Client::stopCasterScene(shared_ptr<StopCasterSceneRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopCasterSceneWithOptions(request, runtime);
}

StopLiveDomainResponse Alibabacloud_Live20161101::Client::stopLiveDomainWithOptions(shared_ptr<StopLiveDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopLiveDomain"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StopLiveDomainResponse(callApi(params, req, runtime));
}

StopLiveDomainResponse Alibabacloud_Live20161101::Client::stopLiveDomain(shared_ptr<StopLiveDomainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopLiveDomainWithOptions(request, runtime);
}

StopLiveStreamMonitorResponse Alibabacloud_Live20161101::Client::stopLiveStreamMonitorWithOptions(shared_ptr<StopLiveStreamMonitorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->monitorId)) {
    query->insert(pair<string, string>("MonitorId", *request->monitorId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopLiveStreamMonitor"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StopLiveStreamMonitorResponse(callApi(params, req, runtime));
}

StopLiveStreamMonitorResponse Alibabacloud_Live20161101::Client::stopLiveStreamMonitor(shared_ptr<StopLiveStreamMonitorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopLiveStreamMonitorWithOptions(request, runtime);
}

StopPlaylistResponse Alibabacloud_Live20161101::Client::stopPlaylistWithOptions(shared_ptr<StopPlaylistRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->programId)) {
    query->insert(pair<string, string>("ProgramId", *request->programId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopPlaylist"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StopPlaylistResponse(callApi(params, req, runtime));
}

StopPlaylistResponse Alibabacloud_Live20161101::Client::stopPlaylist(shared_ptr<StopPlaylistRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopPlaylistWithOptions(request, runtime);
}

TagLiveResourcesResponse Alibabacloud_Live20161101::Client::tagLiveResourcesWithOptions(shared_ptr<TagLiveResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->resourceId)) {
    query->insert(pair<string, vector<string>>("ResourceId", *request->resourceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceType)) {
    query->insert(pair<string, string>("ResourceType", *request->resourceType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<TagLiveResourcesRequestTag>>(request->tag)) {
    query->insert(pair<string, vector<TagLiveResourcesRequestTag>>("Tag", *request->tag));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TagLiveResources"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return TagLiveResourcesResponse(callApi(params, req, runtime));
}

TagLiveResourcesResponse Alibabacloud_Live20161101::Client::tagLiveResources(shared_ptr<TagLiveResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return tagLiveResourcesWithOptions(request, runtime);
}

UnTagLiveResourcesResponse Alibabacloud_Live20161101::Client::unTagLiveResourcesWithOptions(shared_ptr<UnTagLiveResourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->all)) {
    query->insert(pair<string, bool>("All", *request->all));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
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
    {"action", boost::any(string("UnTagLiveResources"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UnTagLiveResourcesResponse(callApi(params, req, runtime));
}

UnTagLiveResourcesResponse Alibabacloud_Live20161101::Client::unTagLiveResources(shared_ptr<UnTagLiveResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return unTagLiveResourcesWithOptions(request, runtime);
}

UpdateCasterSceneAudioResponse Alibabacloud_Live20161101::Client::updateCasterSceneAudioWithOptions(shared_ptr<UpdateCasterSceneAudioRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<UpdateCasterSceneAudioRequestAudioLayer>>(request->audioLayer)) {
    query->insert(pair<string, vector<UpdateCasterSceneAudioRequestAudioLayer>>("AudioLayer", *request->audioLayer));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->casterId)) {
    query->insert(pair<string, string>("CasterId", *request->casterId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->followEnable)) {
    query->insert(pair<string, long>("FollowEnable", *request->followEnable));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->mixList)) {
    query->insert(pair<string, vector<string>>("MixList", *request->mixList));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sceneId)) {
    query->insert(pair<string, string>("SceneId", *request->sceneId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateCasterSceneAudio"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateCasterSceneAudioResponse(callApi(params, req, runtime));
}

UpdateCasterSceneAudioResponse Alibabacloud_Live20161101::Client::updateCasterSceneAudio(shared_ptr<UpdateCasterSceneAudioRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateCasterSceneAudioWithOptions(request, runtime);
}

UpdateCasterSceneConfigResponse Alibabacloud_Live20161101::Client::updateCasterSceneConfigWithOptions(shared_ptr<UpdateCasterSceneConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->casterId)) {
    query->insert(pair<string, string>("CasterId", *request->casterId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->componentId)) {
    query->insert(pair<string, vector<string>>("ComponentId", *request->componentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->layoutId)) {
    query->insert(pair<string, string>("LayoutId", *request->layoutId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sceneId)) {
    query->insert(pair<string, string>("SceneId", *request->sceneId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateCasterSceneConfig"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateCasterSceneConfigResponse(callApi(params, req, runtime));
}

UpdateCasterSceneConfigResponse Alibabacloud_Live20161101::Client::updateCasterSceneConfig(shared_ptr<UpdateCasterSceneConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateCasterSceneConfigWithOptions(request, runtime);
}

UpdateLiveAppSnapshotConfigResponse Alibabacloud_Live20161101::Client::updateLiveAppSnapshotConfigWithOptions(shared_ptr<UpdateLiveAppSnapshotConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->callback)) {
    query->insert(pair<string, string>("Callback", *request->callback));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ossBucket)) {
    query->insert(pair<string, string>("OssBucket", *request->ossBucket));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ossEndpoint)) {
    query->insert(pair<string, string>("OssEndpoint", *request->ossEndpoint));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->overwriteOssObject)) {
    query->insert(pair<string, string>("OverwriteOssObject", *request->overwriteOssObject));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sequenceOssObject)) {
    query->insert(pair<string, string>("SequenceOssObject", *request->sequenceOssObject));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->timeInterval)) {
    query->insert(pair<string, long>("TimeInterval", *request->timeInterval));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateLiveAppSnapshotConfig"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateLiveAppSnapshotConfigResponse(callApi(params, req, runtime));
}

UpdateLiveAppSnapshotConfigResponse Alibabacloud_Live20161101::Client::updateLiveAppSnapshotConfig(shared_ptr<UpdateLiveAppSnapshotConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateLiveAppSnapshotConfigWithOptions(request, runtime);
}

UpdateLiveAudioAuditConfigResponse Alibabacloud_Live20161101::Client::updateLiveAudioAuditConfigWithOptions(shared_ptr<UpdateLiveAudioAuditConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizType)) {
    query->insert(pair<string, string>("BizType", *request->bizType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ossBucket)) {
    query->insert(pair<string, string>("OssBucket", *request->ossBucket));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ossEndpoint)) {
    query->insert(pair<string, string>("OssEndpoint", *request->ossEndpoint));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ossObject)) {
    query->insert(pair<string, string>("OssObject", *request->ossObject));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->streamName)) {
    query->insert(pair<string, string>("StreamName", *request->streamName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateLiveAudioAuditConfig"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateLiveAudioAuditConfigResponse(callApi(params, req, runtime));
}

UpdateLiveAudioAuditConfigResponse Alibabacloud_Live20161101::Client::updateLiveAudioAuditConfig(shared_ptr<UpdateLiveAudioAuditConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateLiveAudioAuditConfigWithOptions(request, runtime);
}

UpdateLiveAudioAuditNotifyConfigResponse Alibabacloud_Live20161101::Client::updateLiveAudioAuditNotifyConfigWithOptions(shared_ptr<UpdateLiveAudioAuditNotifyConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->callback)) {
    query->insert(pair<string, string>("Callback", *request->callback));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->callbackTemplate)) {
    query->insert(pair<string, string>("CallbackTemplate", *request->callbackTemplate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateLiveAudioAuditNotifyConfig"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateLiveAudioAuditNotifyConfigResponse(callApi(params, req, runtime));
}

UpdateLiveAudioAuditNotifyConfigResponse Alibabacloud_Live20161101::Client::updateLiveAudioAuditNotifyConfig(shared_ptr<UpdateLiveAudioAuditNotifyConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateLiveAudioAuditNotifyConfigWithOptions(request, runtime);
}

UpdateLiveDetectNotifyConfigResponse Alibabacloud_Live20161101::Client::updateLiveDetectNotifyConfigWithOptions(shared_ptr<UpdateLiveDetectNotifyConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notifyUrl)) {
    query->insert(pair<string, string>("NotifyUrl", *request->notifyUrl));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateLiveDetectNotifyConfig"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateLiveDetectNotifyConfigResponse(callApi(params, req, runtime));
}

UpdateLiveDetectNotifyConfigResponse Alibabacloud_Live20161101::Client::updateLiveDetectNotifyConfig(shared_ptr<UpdateLiveDetectNotifyConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateLiveDetectNotifyConfigWithOptions(request, runtime);
}

UpdateLivePullStreamInfoConfigResponse Alibabacloud_Live20161101::Client::updateLivePullStreamInfoConfigWithOptions(shared_ptr<UpdateLivePullStreamInfoConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateLivePullStreamInfoConfig"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateLivePullStreamInfoConfigResponse(callApi(params, req, runtime));
}

UpdateLivePullStreamInfoConfigResponse Alibabacloud_Live20161101::Client::updateLivePullStreamInfoConfig(shared_ptr<UpdateLivePullStreamInfoConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateLivePullStreamInfoConfigWithOptions(request, runtime);
}

UpdateLiveRecordNotifyConfigResponse Alibabacloud_Live20161101::Client::updateLiveRecordNotifyConfigWithOptions(shared_ptr<UpdateLiveRecordNotifyConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->needStatusNotify)) {
    query->insert(pair<string, bool>("NeedStatusNotify", *request->needStatusNotify));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notifyUrl)) {
    query->insert(pair<string, string>("NotifyUrl", *request->notifyUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->onDemandUrl)) {
    query->insert(pair<string, string>("OnDemandUrl", *request->onDemandUrl));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateLiveRecordNotifyConfig"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateLiveRecordNotifyConfigResponse(callApi(params, req, runtime));
}

UpdateLiveRecordNotifyConfigResponse Alibabacloud_Live20161101::Client::updateLiveRecordNotifyConfig(shared_ptr<UpdateLiveRecordNotifyConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateLiveRecordNotifyConfigWithOptions(request, runtime);
}

UpdateLiveSnapshotDetectPornConfigResponse Alibabacloud_Live20161101::Client::updateLiveSnapshotDetectPornConfigWithOptions(shared_ptr<UpdateLiveSnapshotDetectPornConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->interval)) {
    query->insert(pair<string, long>("Interval", *request->interval));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ossBucket)) {
    query->insert(pair<string, string>("OssBucket", *request->ossBucket));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ossEndpoint)) {
    query->insert(pair<string, string>("OssEndpoint", *request->ossEndpoint));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ossObject)) {
    query->insert(pair<string, string>("OssObject", *request->ossObject));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->scene)) {
    query->insert(pair<string, vector<string>>("Scene", *request->scene));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateLiveSnapshotDetectPornConfig"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateLiveSnapshotDetectPornConfigResponse(callApi(params, req, runtime));
}

UpdateLiveSnapshotDetectPornConfigResponse Alibabacloud_Live20161101::Client::updateLiveSnapshotDetectPornConfig(shared_ptr<UpdateLiveSnapshotDetectPornConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateLiveSnapshotDetectPornConfigWithOptions(request, runtime);
}

UpdateLiveSnapshotNotifyConfigResponse Alibabacloud_Live20161101::Client::updateLiveSnapshotNotifyConfigWithOptions(shared_ptr<UpdateLiveSnapshotNotifyConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notifyAuthKey)) {
    query->insert(pair<string, string>("NotifyAuthKey", *request->notifyAuthKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notifyReqAuth)) {
    query->insert(pair<string, string>("NotifyReqAuth", *request->notifyReqAuth));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notifyUrl)) {
    query->insert(pair<string, string>("NotifyUrl", *request->notifyUrl));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateLiveSnapshotNotifyConfig"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateLiveSnapshotNotifyConfigResponse(callApi(params, req, runtime));
}

UpdateLiveSnapshotNotifyConfigResponse Alibabacloud_Live20161101::Client::updateLiveSnapshotNotifyConfig(shared_ptr<UpdateLiveSnapshotNotifyConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateLiveSnapshotNotifyConfigWithOptions(request, runtime);
}

UpdateLiveStreamMonitorResponse Alibabacloud_Live20161101::Client::updateLiveStreamMonitorWithOptions(shared_ptr<UpdateLiveStreamMonitorRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->app)) {
    query->insert(pair<string, string>("App", *request->app));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domain)) {
    query->insert(pair<string, string>("Domain", *request->domain));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputList)) {
    query->insert(pair<string, string>("InputList", *request->inputList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->monitorId)) {
    query->insert(pair<string, string>("MonitorId", *request->monitorId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->monitorName)) {
    query->insert(pair<string, string>("MonitorName", *request->monitorName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outputTemplate)) {
    query->insert(pair<string, string>("OutputTemplate", *request->outputTemplate));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stream)) {
    query->insert(pair<string, string>("Stream", *request->stream));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateLiveStreamMonitor"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateLiveStreamMonitorResponse(callApi(params, req, runtime));
}

UpdateLiveStreamMonitorResponse Alibabacloud_Live20161101::Client::updateLiveStreamMonitor(shared_ptr<UpdateLiveStreamMonitorRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateLiveStreamMonitorWithOptions(request, runtime);
}

UpdateLiveStreamWatermarkResponse Alibabacloud_Live20161101::Client::updateLiveStreamWatermarkWithOptions(shared_ptr<UpdateLiveStreamWatermarkRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->height)) {
    query->insert(pair<string, long>("Height", *request->height));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->offsetCorner)) {
    query->insert(pair<string, string>("OffsetCorner", *request->offsetCorner));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pictureUrl)) {
    query->insert(pair<string, string>("PictureUrl", *request->pictureUrl));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->refHeight)) {
    query->insert(pair<string, long>("RefHeight", *request->refHeight));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->refWidth)) {
    query->insert(pair<string, long>("RefWidth", *request->refWidth));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    query->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->transparency)) {
    query->insert(pair<string, long>("Transparency", *request->transparency));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->XOffset)) {
    query->insert(pair<string, double>("XOffset", *request->XOffset));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->YOffset)) {
    query->insert(pair<string, double>("YOffset", *request->YOffset));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateLiveStreamWatermark"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateLiveStreamWatermarkResponse(callApi(params, req, runtime));
}

UpdateLiveStreamWatermarkResponse Alibabacloud_Live20161101::Client::updateLiveStreamWatermark(shared_ptr<UpdateLiveStreamWatermarkRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateLiveStreamWatermarkWithOptions(request, runtime);
}

UpdateLiveStreamWatermarkRuleResponse Alibabacloud_Live20161101::Client::updateLiveStreamWatermarkRuleWithOptions(shared_ptr<UpdateLiveStreamWatermarkRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleId)) {
    query->insert(pair<string, string>("RuleId", *request->ruleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    query->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateLiveStreamWatermarkRule"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateLiveStreamWatermarkRuleResponse(callApi(params, req, runtime));
}

UpdateLiveStreamWatermarkRuleResponse Alibabacloud_Live20161101::Client::updateLiveStreamWatermarkRule(shared_ptr<UpdateLiveStreamWatermarkRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateLiveStreamWatermarkRuleWithOptions(request, runtime);
}

UpdateLiveTopLevelDomainResponse Alibabacloud_Live20161101::Client::updateLiveTopLevelDomainWithOptions(shared_ptr<UpdateLiveTopLevelDomainRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityToken)) {
    query->insert(pair<string, string>("SecurityToken", *request->securityToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->topLevelDomain)) {
    query->insert(pair<string, string>("TopLevelDomain", *request->topLevelDomain));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateLiveTopLevelDomain"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateLiveTopLevelDomainResponse(callApi(params, req, runtime));
}

UpdateLiveTopLevelDomainResponse Alibabacloud_Live20161101::Client::updateLiveTopLevelDomain(shared_ptr<UpdateLiveTopLevelDomainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateLiveTopLevelDomainWithOptions(request, runtime);
}

UpdateMessageAppResponse Alibabacloud_Live20161101::Client::updateMessageAppWithOptions(shared_ptr<UpdateMessageAppRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateMessageAppShrinkRequest> request = make_shared<UpdateMessageAppShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(tmpReq->appConfig)) {
    request->appConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->appConfig, make_shared<string>("AppConfig"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(tmpReq->extension)) {
    request->extensionShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->extension, make_shared<string>("Extension"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appConfigShrink)) {
    body->insert(pair<string, string>("AppConfig", *request->appConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    body->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extensionShrink)) {
    body->insert(pair<string, string>("Extension", *request->extensionShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateMessageApp"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateMessageAppResponse(callApi(params, req, runtime));
}

UpdateMessageAppResponse Alibabacloud_Live20161101::Client::updateMessageApp(shared_ptr<UpdateMessageAppRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateMessageAppWithOptions(request, runtime);
}

UpdateMessageGroupResponse Alibabacloud_Live20161101::Client::updateMessageGroupWithOptions(shared_ptr<UpdateMessageGroupRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateMessageGroupShrinkRequest> request = make_shared<UpdateMessageGroupShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(tmpReq->extension)) {
    request->extensionShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->extension, make_shared<string>("Extension"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extensionShrink)) {
    body->insert(pair<string, string>("Extension", *request->extensionShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupId)) {
    body->insert(pair<string, string>("GroupId", *request->groupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateMessageGroup"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateMessageGroupResponse(callApi(params, req, runtime));
}

UpdateMessageGroupResponse Alibabacloud_Live20161101::Client::updateMessageGroup(shared_ptr<UpdateMessageGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateMessageGroupWithOptions(request, runtime);
}

UpdateMixStreamResponse Alibabacloud_Live20161101::Client::updateMixStreamWithOptions(shared_ptr<UpdateMixStreamRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputStreamList)) {
    query->insert(pair<string, string>("InputStreamList", *request->inputStreamList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->layoutId)) {
    query->insert(pair<string, string>("LayoutId", *request->layoutId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mixStreamId)) {
    query->insert(pair<string, string>("MixStreamId", *request->mixStreamId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateMixStream"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateMixStreamResponse(callApi(params, req, runtime));
}

UpdateMixStreamResponse Alibabacloud_Live20161101::Client::updateMixStream(shared_ptr<UpdateMixStreamRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateMixStreamWithOptions(request, runtime);
}

VerifyLiveDomainOwnerResponse Alibabacloud_Live20161101::Client::verifyLiveDomainOwnerWithOptions(shared_ptr<VerifyLiveDomainOwnerRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->verifyType)) {
    query->insert(pair<string, string>("VerifyType", *request->verifyType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("VerifyLiveDomainOwner"))},
    {"version", boost::any(string("2016-11-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return VerifyLiveDomainOwnerResponse(callApi(params, req, runtime));
}

VerifyLiveDomainOwnerResponse Alibabacloud_Live20161101::Client::verifyLiveDomainOwner(shared_ptr<VerifyLiveDomainOwnerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return verifyLiveDomainOwnerWithOptions(request, runtime);
}

