// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/xr_engine_20230313.hpp>
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

using namespace Alibabacloud_XrEngine20230313;

Alibabacloud_XrEngine20230313::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  _endpointMap = make_shared<map<string, string>>(map<string, string>({
    {"ap-northeast-1", "xrengine-daily.aliyuncs.com"},
    {"ap-northeast-2-pop", "xrengine-daily.aliyuncs.com"},
    {"ap-south-1", "xrengine-daily.aliyuncs.com"},
    {"ap-southeast-1", "xrengine-daily.aliyuncs.com"},
    {"ap-southeast-2", "xrengine-daily.aliyuncs.com"},
    {"ap-southeast-3", "xrengine-daily.aliyuncs.com"},
    {"ap-southeast-5", "xrengine-daily.aliyuncs.com"},
    {"cn-beijing", "xrengine-daily.aliyuncs.com"},
    {"cn-beijing-finance-1", "xrengine-daily.aliyuncs.com"},
    {"cn-beijing-finance-pop", "xrengine-daily.aliyuncs.com"},
    {"cn-beijing-gov-1", "xrengine-daily.aliyuncs.com"},
    {"cn-beijing-nu16-b01", "xrengine-daily.aliyuncs.com"},
    {"cn-chengdu", "xrengine-daily.aliyuncs.com"},
    {"cn-edge-1", "xrengine-daily.aliyuncs.com"},
    {"cn-fujian", "xrengine-daily.aliyuncs.com"},
    {"cn-haidian-cm12-c01", "xrengine-daily.aliyuncs.com"},
    {"cn-hangzhou-bj-b01", "xrengine-daily.aliyuncs.com"},
    {"cn-hangzhou-finance", "xrengine-daily.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1", "xrengine-daily.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1", "xrengine-daily.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2", "xrengine-daily.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3", "xrengine-daily.aliyuncs.com"},
    {"cn-hangzhou-test-306", "xrengine-daily.aliyuncs.com"},
    {"cn-hongkong", "xrengine-daily.aliyuncs.com"},
    {"cn-hongkong-finance-pop", "xrengine-daily.aliyuncs.com"},
    {"cn-huhehaote", "xrengine-daily.aliyuncs.com"},
    {"cn-huhehaote-nebula-1", "xrengine-daily.aliyuncs.com"},
    {"cn-north-2-gov-1", "xrengine-daily.aliyuncs.com"},
    {"cn-qingdao", "xrengine-daily.aliyuncs.com"},
    {"cn-qingdao-nebula", "xrengine-daily.aliyuncs.com"},
    {"cn-shanghai", "xrengine-daily.aliyuncs.com"},
    {"cn-shanghai-et15-b01", "xrengine-daily.aliyuncs.com"},
    {"cn-shanghai-et2-b01", "xrengine-daily.aliyuncs.com"},
    {"cn-shanghai-finance-1", "xrengine-daily.aliyuncs.com"},
    {"cn-shanghai-inner", "xrengine-daily.aliyuncs.com"},
    {"cn-shanghai-internal-test-1", "xrengine-daily.aliyuncs.com"},
    {"cn-shenzhen", "xrengine-daily.aliyuncs.com"},
    {"cn-shenzhen-finance-1", "xrengine-daily.aliyuncs.com"},
    {"cn-shenzhen-inner", "xrengine-daily.aliyuncs.com"},
    {"cn-shenzhen-st4-d01", "xrengine-daily.aliyuncs.com"},
    {"cn-shenzhen-su18-b01", "xrengine-daily.aliyuncs.com"},
    {"cn-wuhan", "xrengine-daily.aliyuncs.com"},
    {"cn-wulanchabu", "xrengine-daily.aliyuncs.com"},
    {"cn-yushanfang", "xrengine-daily.aliyuncs.com"},
    {"cn-zhangbei", "xrengine-daily.aliyuncs.com"},
    {"cn-zhangbei-na61-b01", "xrengine-daily.aliyuncs.com"},
    {"cn-zhangjiakou", "xrengine-daily.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01", "xrengine-daily.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1", "xrengine-daily.aliyuncs.com"},
    {"eu-central-1", "xrengine-daily.aliyuncs.com"},
    {"eu-west-1", "xrengine-daily.aliyuncs.com"},
    {"eu-west-1-oxs", "xrengine-daily.aliyuncs.com"},
    {"me-east-1", "xrengine-daily.aliyuncs.com"},
    {"rus-west-1-pop", "xrengine-daily.aliyuncs.com"},
    {"us-east-1", "xrengine-daily.aliyuncs.com"},
    {"us-west-1", "xrengine-daily.aliyuncs.com"}
  })
);
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("xrengine"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_XrEngine20230313::Client::getEndpoint(shared_ptr<string> productId,
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

AuthUserResponse Alibabacloud_XrEngine20230313::Client::authUserWithOptions(shared_ptr<AuthUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jwtToken)) {
    query->insert(pair<string, string>("JwtToken", *request->jwtToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AuthUser"))},
    {"version", boost::any(string("2023-03-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AuthUserResponse(callApi(params, req, runtime));
}

AuthUserResponse Alibabacloud_XrEngine20230313::Client::authUser(shared_ptr<AuthUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return authUserWithOptions(request, runtime);
}

CreateDigitalHumanProjectResponse Alibabacloud_XrEngine20230313::Client::createDigitalHumanProjectWithOptions(shared_ptr<CreateDigitalHumanProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jwtToken)) {
    query->insert(pair<string, string>("JwtToken", *request->jwtToken));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->audioId)) {
    body->insert(pair<string, string>("AudioId", *request->audioId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->audioUrl)) {
    body->insert(pair<string, string>("AudioUrl", *request->audioUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->backgroundId)) {
    body->insert(pair<string, string>("BackgroundId", *request->backgroundId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->backgroundUrl)) {
    body->insert(pair<string, string>("BackgroundUrl", *request->backgroundUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->content)) {
    body->insert(pair<string, string>("Content", *request->content));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->foregroundId)) {
    body->insert(pair<string, string>("ForegroundId", *request->foregroundId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->foregroundUrl)) {
    body->insert(pair<string, string>("ForegroundUrl", *request->foregroundUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->humanLayerStyle)) {
    body->insert(pair<string, string>("HumanLayerStyle", *request->humanLayerStyle));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->intro)) {
    body->insert(pair<string, string>("Intro", *request->intro));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mode)) {
    body->insert(pair<string, string>("Mode", *request->mode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modelId)) {
    body->insert(pair<string, string>("ModelId", *request->modelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outputConfig)) {
    body->insert(pair<string, string>("OutputConfig", *request->outputConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    body->insert(pair<string, string>("Title", *request->title));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ttsVoiceId)) {
    body->insert(pair<string, string>("TtsVoiceId", *request->ttsVoiceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->watermarkImageUrl)) {
    body->insert(pair<string, string>("WatermarkImageUrl", *request->watermarkImageUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->watermarkStyle)) {
    body->insert(pair<string, string>("WatermarkStyle", *request->watermarkStyle));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDigitalHumanProject"))},
    {"version", boost::any(string("2023-03-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateDigitalHumanProjectResponse(callApi(params, req, runtime));
}

CreateDigitalHumanProjectResponse Alibabacloud_XrEngine20230313::Client::createDigitalHumanProject(shared_ptr<CreateDigitalHumanProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDigitalHumanProjectWithOptions(request, runtime);
}

CreateLivePortraitProjectResponse Alibabacloud_XrEngine20230313::Client::createLivePortraitProjectWithOptions(shared_ptr<CreateLivePortraitProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jwtToken)) {
    query->insert(pair<string, string>("JwtToken", *request->jwtToken));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->audioId)) {
    body->insert(pair<string, string>("AudioId", *request->audioId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->audioUrl)) {
    body->insert(pair<string, string>("AudioUrl", *request->audioUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->content)) {
    body->insert(pair<string, string>("Content", *request->content));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageId)) {
    body->insert(pair<string, string>("ImageId", *request->imageId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->imageUrl)) {
    body->insert(pair<string, string>("ImageUrl", *request->imageUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->intro)) {
    body->insert(pair<string, string>("Intro", *request->intro));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->lightModel)) {
    body->insert(pair<string, bool>("LightModel", *request->lightModel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mode)) {
    body->insert(pair<string, string>("Mode", *request->mode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outputConfig)) {
    body->insert(pair<string, string>("OutputConfig", *request->outputConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    body->insert(pair<string, string>("Title", *request->title));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ttsVoiceId)) {
    body->insert(pair<string, string>("TtsVoiceId", *request->ttsVoiceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->watermarkImageUrl)) {
    body->insert(pair<string, string>("WatermarkImageUrl", *request->watermarkImageUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->watermarkStyle)) {
    body->insert(pair<string, string>("WatermarkStyle", *request->watermarkStyle));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateLivePortraitProject"))},
    {"version", boost::any(string("2023-03-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateLivePortraitProjectResponse(callApi(params, req, runtime));
}

CreateLivePortraitProjectResponse Alibabacloud_XrEngine20230313::Client::createLivePortraitProject(shared_ptr<CreateLivePortraitProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createLivePortraitProjectWithOptions(request, runtime);
}

GetMapDataResponse Alibabacloud_XrEngine20230313::Client::getMapDataWithOptions(shared_ptr<GetMapDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jwtToken)) {
    body->insert(pair<string, string>("JwtToken", *request->jwtToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMapData"))},
    {"version", boost::any(string("2023-03-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetMapDataResponse(callApi(params, req, runtime));
}

GetMapDataResponse Alibabacloud_XrEngine20230313::Client::getMapData(shared_ptr<GetMapDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMapDataWithOptions(request, runtime);
}

GetMapPublishDataResponse Alibabacloud_XrEngine20230313::Client::getMapPublishDataWithOptions(shared_ptr<GetMapPublishDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    body->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jwtToken)) {
    body->insert(pair<string, string>("JwtToken", *request->jwtToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMapPublishData"))},
    {"version", boost::any(string("2023-03-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetMapPublishDataResponse(callApi(params, req, runtime));
}

GetMapPublishDataResponse Alibabacloud_XrEngine20230313::Client::getMapPublishData(shared_ptr<GetMapPublishDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMapPublishDataWithOptions(request, runtime);
}

InitLocateResponse Alibabacloud_XrEngine20230313::Client::initLocateWithOptions(shared_ptr<InitLocateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jwtToken)) {
    body->insert(pair<string, string>("JwtToken", *request->jwtToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->params)) {
    body->insert(pair<string, string>("Params", *request->params));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("InitLocate"))},
    {"version", boost::any(string("2023-03-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return InitLocateResponse(callApi(params, req, runtime));
}

InitLocateResponse Alibabacloud_XrEngine20230313::Client::initLocate(shared_ptr<InitLocateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return initLocateWithOptions(request, runtime);
}

ListDigitalHumanMaterialsResponse Alibabacloud_XrEngine20230313::Client::listDigitalHumanMaterialsWithOptions(shared_ptr<ListDigitalHumanMaterialsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jwtToken)) {
    query->insert(pair<string, string>("JwtToken", *request->jwtToken));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->current)) {
    body->insert(pair<string, long>("Current", *request->current));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->onlyPersonalMaterials)) {
    body->insert(pair<string, bool>("OnlyPersonalMaterials", *request->onlyPersonalMaterials));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    body->insert(pair<string, long>("Size", *request->size));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->types)) {
    body->insert(pair<string, string>("Types", *request->types));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDigitalHumanMaterials"))},
    {"version", boost::any(string("2023-03-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDigitalHumanMaterialsResponse(callApi(params, req, runtime));
}

ListDigitalHumanMaterialsResponse Alibabacloud_XrEngine20230313::Client::listDigitalHumanMaterials(shared_ptr<ListDigitalHumanMaterialsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDigitalHumanMaterialsWithOptions(request, runtime);
}

ListLocationServiceResponse Alibabacloud_XrEngine20230313::Client::listLocationServiceWithOptions(shared_ptr<ListLocationServiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->current)) {
    body->insert(pair<string, long>("Current", *request->current));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jwtToken)) {
    body->insert(pair<string, string>("JwtToken", *request->jwtToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    body->insert(pair<string, long>("Size", *request->size));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sort)) {
    body->insert(pair<string, string>("Sort", *request->sort));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortField)) {
    body->insert(pair<string, string>("SortField", *request->sortField));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListLocationService"))},
    {"version", boost::any(string("2023-03-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListLocationServiceResponse(callApi(params, req, runtime));
}

ListLocationServiceResponse Alibabacloud_XrEngine20230313::Client::listLocationService(shared_ptr<ListLocationServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listLocationServiceWithOptions(request, runtime);
}

LivePortraitFaceDetectResponse Alibabacloud_XrEngine20230313::Client::livePortraitFaceDetectWithOptions(shared_ptr<LivePortraitFaceDetectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jwtToken)) {
    query->insert(pair<string, string>("JwtToken", *request->jwtToken));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->imageUrl)) {
    body->insert(pair<string, string>("ImageUrl", *request->imageUrl));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("LivePortraitFaceDetect"))},
    {"version", boost::any(string("2023-03-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return LivePortraitFaceDetectResponse(callApi(params, req, runtime));
}

LivePortraitFaceDetectResponse Alibabacloud_XrEngine20230313::Client::livePortraitFaceDetect(shared_ptr<LivePortraitFaceDetectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return livePortraitFaceDetectWithOptions(request, runtime);
}

LocateResponse Alibabacloud_XrEngine20230313::Client::locateWithOptions(shared_ptr<LocateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->image)) {
    body->insert(pair<string, string>("Image", *request->image));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jwtToken)) {
    body->insert(pair<string, string>("JwtToken", *request->jwtToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->params)) {
    body->insert(pair<string, string>("Params", *request->params));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("Locate"))},
    {"version", boost::any(string("2023-03-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return LocateResponse(callApi(params, req, runtime));
}

LocateResponse Alibabacloud_XrEngine20230313::Client::locate(shared_ptr<LocateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return locateWithOptions(request, runtime);
}

LoginModelScopeResponse Alibabacloud_XrEngine20230313::Client::loginModelScopeWithOptions(shared_ptr<LoginModelScopeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->empId)) {
    body->insert(pair<string, string>("EmpId", *request->empId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->empName)) {
    body->insert(pair<string, string>("EmpName", *request->empName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->token)) {
    body->insert(pair<string, string>("Token", *request->token));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    body->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("LoginModelScope"))},
    {"version", boost::any(string("2023-03-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return LoginModelScopeResponse(callApi(params, req, runtime));
}

LoginModelScopeResponse Alibabacloud_XrEngine20230313::Client::loginModelScope(shared_ptr<LoginModelScopeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return loginModelScopeWithOptions(request, runtime);
}

PopBatchQueryObjectGenerationProjectStatusResponse Alibabacloud_XrEngine20230313::Client::popBatchQueryObjectGenerationProjectStatusWithOptions(shared_ptr<PopBatchQueryObjectGenerationProjectStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jwtToken)) {
    query->insert(pair<string, string>("JwtToken", *request->jwtToken));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->projectIds)) {
    body->insert(pair<string, string>("ProjectIds", *request->projectIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PopBatchQueryObjectGenerationProjectStatus"))},
    {"version", boost::any(string("2023-03-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PopBatchQueryObjectGenerationProjectStatusResponse(callApi(params, req, runtime));
}

PopBatchQueryObjectGenerationProjectStatusResponse Alibabacloud_XrEngine20230313::Client::popBatchQueryObjectGenerationProjectStatus(shared_ptr<PopBatchQueryObjectGenerationProjectStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return popBatchQueryObjectGenerationProjectStatusWithOptions(request, runtime);
}

PopBatchQueryObjectProjectStatusResponse Alibabacloud_XrEngine20230313::Client::popBatchQueryObjectProjectStatusWithOptions(shared_ptr<PopBatchQueryObjectProjectStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jwtToken)) {
    body->insert(pair<string, string>("JwtToken", *request->jwtToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectIds)) {
    body->insert(pair<string, string>("ProjectIds", *request->projectIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PopBatchQueryObjectProjectStatus"))},
    {"version", boost::any(string("2023-03-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PopBatchQueryObjectProjectStatusResponse(callApi(params, req, runtime));
}

PopBatchQueryObjectProjectStatusResponse Alibabacloud_XrEngine20230313::Client::popBatchQueryObjectProjectStatus(shared_ptr<PopBatchQueryObjectProjectStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return popBatchQueryObjectProjectStatusWithOptions(request, runtime);
}

PopBuildFeatureToAvatarProjectResponse Alibabacloud_XrEngine20230313::Client::popBuildFeatureToAvatarProjectWithOptions(shared_ptr<PopBuildFeatureToAvatarProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    body->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PopBuildFeatureToAvatarProject"))},
    {"version", boost::any(string("2023-03-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PopBuildFeatureToAvatarProjectResponse(callApi(params, req, runtime));
}

PopBuildFeatureToAvatarProjectResponse Alibabacloud_XrEngine20230313::Client::popBuildFeatureToAvatarProject(shared_ptr<PopBuildFeatureToAvatarProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return popBuildFeatureToAvatarProjectWithOptions(request, runtime);
}

PopBuildLivePortraitModelScopeProjectResponse Alibabacloud_XrEngine20230313::Client::popBuildLivePortraitModelScopeProjectWithOptions(shared_ptr<PopBuildLivePortraitModelScopeProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    body->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PopBuildLivePortraitModelScopeProject"))},
    {"version", boost::any(string("2023-03-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PopBuildLivePortraitModelScopeProjectResponse(callApi(params, req, runtime));
}

PopBuildLivePortraitModelScopeProjectResponse Alibabacloud_XrEngine20230313::Client::popBuildLivePortraitModelScopeProject(shared_ptr<PopBuildLivePortraitModelScopeProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return popBuildLivePortraitModelScopeProjectWithOptions(request, runtime);
}

PopBuildObjectGenerationProjectResponse Alibabacloud_XrEngine20230313::Client::popBuildObjectGenerationProjectWithOptions(shared_ptr<PopBuildObjectGenerationProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jwtToken)) {
    query->insert(pair<string, string>("JwtToken", *request->jwtToken));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    body->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PopBuildObjectGenerationProject"))},
    {"version", boost::any(string("2023-03-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PopBuildObjectGenerationProjectResponse(callApi(params, req, runtime));
}

PopBuildObjectGenerationProjectResponse Alibabacloud_XrEngine20230313::Client::popBuildObjectGenerationProject(shared_ptr<PopBuildObjectGenerationProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return popBuildObjectGenerationProjectWithOptions(request, runtime);
}

PopBuildObjectProjectResponse Alibabacloud_XrEngine20230313::Client::popBuildObjectProjectWithOptions(shared_ptr<PopBuildObjectProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    query->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jwtToken)) {
    body->insert(pair<string, string>("JwtToken", *request->jwtToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PopBuildObjectProject"))},
    {"version", boost::any(string("2023-03-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PopBuildObjectProjectResponse(callApi(params, req, runtime));
}

PopBuildObjectProjectResponse Alibabacloud_XrEngine20230313::Client::popBuildObjectProject(shared_ptr<PopBuildObjectProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return popBuildObjectProjectWithOptions(request, runtime);
}

PopBuildPakRenderProjectResponse Alibabacloud_XrEngine20230313::Client::popBuildPakRenderProjectWithOptions(shared_ptr<PopBuildPakRenderProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    body->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PopBuildPakRenderProject"))},
    {"version", boost::any(string("2023-03-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PopBuildPakRenderProjectResponse(callApi(params, req, runtime));
}

PopBuildPakRenderProjectResponse Alibabacloud_XrEngine20230313::Client::popBuildPakRenderProject(shared_ptr<PopBuildPakRenderProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return popBuildPakRenderProjectWithOptions(request, runtime);
}

PopBuildTextToAvatarProjectResponse Alibabacloud_XrEngine20230313::Client::popBuildTextToAvatarProjectWithOptions(shared_ptr<PopBuildTextToAvatarProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jwtToken)) {
    query->insert(pair<string, string>("JwtToken", *request->jwtToken));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    body->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PopBuildTextToAvatarProject"))},
    {"version", boost::any(string("2023-03-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PopBuildTextToAvatarProjectResponse(callApi(params, req, runtime));
}

PopBuildTextToAvatarProjectResponse Alibabacloud_XrEngine20230313::Client::popBuildTextToAvatarProject(shared_ptr<PopBuildTextToAvatarProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return popBuildTextToAvatarProjectWithOptions(request, runtime);
}

PopCreateFeatureToAvatarProjectResponse Alibabacloud_XrEngine20230313::Client::popCreateFeatureToAvatarProjectWithOptions(shared_ptr<PopCreateFeatureToAvatarProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->extInfo)) {
    body->insert(pair<string, string>("ExtInfo", *request->extInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->intro)) {
    body->insert(pair<string, string>("Intro", *request->intro));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    body->insert(pair<string, string>("Title", *request->title));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PopCreateFeatureToAvatarProject"))},
    {"version", boost::any(string("2023-03-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PopCreateFeatureToAvatarProjectResponse(callApi(params, req, runtime));
}

PopCreateFeatureToAvatarProjectResponse Alibabacloud_XrEngine20230313::Client::popCreateFeatureToAvatarProject(shared_ptr<PopCreateFeatureToAvatarProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return popCreateFeatureToAvatarProjectWithOptions(request, runtime);
}

PopCreateLivePortraitModelScopeProjectResponse Alibabacloud_XrEngine20230313::Client::popCreateLivePortraitModelScopeProjectWithOptions(shared_ptr<PopCreateLivePortraitModelScopeProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->extInfo)) {
    body->insert(pair<string, string>("ExtInfo", *request->extInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->intro)) {
    body->insert(pair<string, string>("Intro", *request->intro));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    body->insert(pair<string, string>("Title", *request->title));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PopCreateLivePortraitModelScopeProject"))},
    {"version", boost::any(string("2023-03-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PopCreateLivePortraitModelScopeProjectResponse(callApi(params, req, runtime));
}

PopCreateLivePortraitModelScopeProjectResponse Alibabacloud_XrEngine20230313::Client::popCreateLivePortraitModelScopeProject(shared_ptr<PopCreateLivePortraitModelScopeProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return popCreateLivePortraitModelScopeProjectWithOptions(request, runtime);
}

PopCreateMaterialResponse Alibabacloud_XrEngine20230313::Client::popCreateMaterialWithOptions(shared_ptr<PopCreateMaterialRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jwtToken)) {
    query->insert(pair<string, string>("JwtToken", *request->jwtToken));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->checkStatus)) {
    body->insert(pair<string, string>("CheckStatus", *request->checkStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ext)) {
    body->insert(pair<string, string>("Ext", *request->ext));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->intro)) {
    body->insert(pair<string, string>("Intro", *request->intro));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->listStatus)) {
    body->insert(pair<string, string>("ListStatus", *request->listStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ossKey)) {
    body->insert(pair<string, string>("OssKey", *request->ossKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    body->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PopCreateMaterial"))},
    {"version", boost::any(string("2023-03-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PopCreateMaterialResponse(callApi(params, req, runtime));
}

PopCreateMaterialResponse Alibabacloud_XrEngine20230313::Client::popCreateMaterial(shared_ptr<PopCreateMaterialRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return popCreateMaterialWithOptions(request, runtime);
}

PopCreateObjectGenerationProjectResponse Alibabacloud_XrEngine20230313::Client::popCreateObjectGenerationProjectWithOptions(shared_ptr<PopCreateObjectGenerationProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jwtToken)) {
    query->insert(pair<string, string>("JwtToken", *request->jwtToken));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bizUsage)) {
    body->insert(pair<string, string>("BizUsage", *request->bizUsage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extInfo)) {
    body->insert(pair<string, string>("ExtInfo", *request->extInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->intro)) {
    body->insert(pair<string, string>("Intro", *request->intro));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    body->insert(pair<string, string>("Title", *request->title));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PopCreateObjectGenerationProject"))},
    {"version", boost::any(string("2023-03-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PopCreateObjectGenerationProjectResponse(callApi(params, req, runtime));
}

PopCreateObjectGenerationProjectResponse Alibabacloud_XrEngine20230313::Client::popCreateObjectGenerationProject(shared_ptr<PopCreateObjectGenerationProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return popCreateObjectGenerationProjectWithOptions(request, runtime);
}

PopCreateObjectProjectResponse Alibabacloud_XrEngine20230313::Client::popCreateObjectProjectWithOptions(shared_ptr<PopCreateObjectProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->autoBuild)) {
    body->insert(pair<string, bool>("AutoBuild", *request->autoBuild));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->bizUsage)) {
    body->insert(pair<string, string>("BizUsage", *request->bizUsage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->customSource)) {
    body->insert(pair<string, string>("CustomSource", *request->customSource));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dependencies)) {
    body->insert(pair<string, string>("Dependencies", *request->dependencies));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->foreignUid)) {
    body->insert(pair<string, string>("ForeignUid", *request->foreignUid));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->intro)) {
    body->insert(pair<string, string>("Intro", *request->intro));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jwtToken)) {
    body->insert(pair<string, string>("JwtToken", *request->jwtToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mode)) {
    body->insert(pair<string, string>("Mode", *request->mode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->recommendStatus)) {
    body->insert(pair<string, string>("RecommendStatus", *request->recommendStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    body->insert(pair<string, string>("Title", *request->title));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PopCreateObjectProject"))},
    {"version", boost::any(string("2023-03-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PopCreateObjectProjectResponse(callApi(params, req, runtime));
}

PopCreateObjectProjectResponse Alibabacloud_XrEngine20230313::Client::popCreateObjectProject(shared_ptr<PopCreateObjectProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return popCreateObjectProjectWithOptions(request, runtime);
}

PopCreatePakRenderProjectResponse Alibabacloud_XrEngine20230313::Client::popCreatePakRenderProjectWithOptions(shared_ptr<PopCreatePakRenderProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->extInfo)) {
    body->insert(pair<string, string>("ExtInfo", *request->extInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->intro)) {
    body->insert(pair<string, string>("Intro", *request->intro));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    body->insert(pair<string, string>("Title", *request->title));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PopCreatePakRenderProject"))},
    {"version", boost::any(string("2023-03-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PopCreatePakRenderProjectResponse(callApi(params, req, runtime));
}

PopCreatePakRenderProjectResponse Alibabacloud_XrEngine20230313::Client::popCreatePakRenderProject(shared_ptr<PopCreatePakRenderProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return popCreatePakRenderProjectWithOptions(request, runtime);
}

PopCreateTextToAvatarProjectResponse Alibabacloud_XrEngine20230313::Client::popCreateTextToAvatarProjectWithOptions(shared_ptr<PopCreateTextToAvatarProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jwtToken)) {
    query->insert(pair<string, string>("JwtToken", *request->jwtToken));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->extInfo)) {
    body->insert(pair<string, string>("ExtInfo", *request->extInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->intro)) {
    body->insert(pair<string, string>("Intro", *request->intro));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    body->insert(pair<string, string>("Title", *request->title));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PopCreateTextToAvatarProject"))},
    {"version", boost::any(string("2023-03-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PopCreateTextToAvatarProjectResponse(callApi(params, req, runtime));
}

PopCreateTextToAvatarProjectResponse Alibabacloud_XrEngine20230313::Client::popCreateTextToAvatarProject(shared_ptr<PopCreateTextToAvatarProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return popCreateTextToAvatarProjectWithOptions(request, runtime);
}

PopDeleteMaterialResponse Alibabacloud_XrEngine20230313::Client::popDeleteMaterialWithOptions(shared_ptr<PopDeleteMaterialRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jwtToken)) {
    query->insert(pair<string, string>("JwtToken", *request->jwtToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->materialId)) {
    query->insert(pair<string, string>("MaterialId", *request->materialId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PopDeleteMaterial"))},
    {"version", boost::any(string("2023-03-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PopDeleteMaterialResponse(callApi(params, req, runtime));
}

PopDeleteMaterialResponse Alibabacloud_XrEngine20230313::Client::popDeleteMaterial(shared_ptr<PopDeleteMaterialRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return popDeleteMaterialWithOptions(request, runtime);
}

PopGetAITryOnJobResponse Alibabacloud_XrEngine20230313::Client::popGetAITryOnJobWithOptions(shared_ptr<PopGetAITryOnJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jwtToken)) {
    query->insert(pair<string, string>("JwtToken", *request->jwtToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    query->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->withMaterial)) {
    query->insert(pair<string, bool>("WithMaterial", *request->withMaterial));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->withResult)) {
    query->insert(pair<string, bool>("WithResult", *request->withResult));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PopGetAITryOnJob"))},
    {"version", boost::any(string("2023-03-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PopGetAITryOnJobResponse(callApi(params, req, runtime));
}

PopGetAITryOnJobResponse Alibabacloud_XrEngine20230313::Client::popGetAITryOnJob(shared_ptr<PopGetAITryOnJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return popGetAITryOnJobWithOptions(request, runtime);
}

PopListAITryOnJobsResponse Alibabacloud_XrEngine20230313::Client::popListAITryOnJobsWithOptions(shared_ptr<PopListAITryOnJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jwtToken)) {
    query->insert(pair<string, string>("JwtToken", *request->jwtToken));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->current)) {
    body->insert(pair<string, long>("Current", *request->current));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    body->insert(pair<string, long>("Size", *request->size));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PopListAITryOnJobs"))},
    {"version", boost::any(string("2023-03-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PopListAITryOnJobsResponse(callApi(params, req, runtime));
}

PopListAITryOnJobsResponse Alibabacloud_XrEngine20230313::Client::popListAITryOnJobs(shared_ptr<PopListAITryOnJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return popListAITryOnJobsWithOptions(request, runtime);
}

PopListCommonMaterialsAllResponse Alibabacloud_XrEngine20230313::Client::popListCommonMaterialsAllWithOptions(shared_ptr<PopListCommonMaterialsAllRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jwtToken)) {
    query->insert(pair<string, string>("JwtToken", *request->jwtToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->listStatus)) {
    query->insert(pair<string, string>("ListStatus", *request->listStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tags)) {
    query->insert(pair<string, string>("Tags", *request->tags));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->current)) {
    body->insert(pair<string, long>("Current", *request->current));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    body->insert(pair<string, long>("Size", *request->size));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PopListCommonMaterialsAll"))},
    {"version", boost::any(string("2023-03-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PopListCommonMaterialsAllResponse(callApi(params, req, runtime));
}

PopListCommonMaterialsAllResponse Alibabacloud_XrEngine20230313::Client::popListCommonMaterialsAll(shared_ptr<PopListCommonMaterialsAllRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return popListCommonMaterialsAllWithOptions(request, runtime);
}

PopListFeatureToAvatarMaterialsResponse Alibabacloud_XrEngine20230313::Client::popListFeatureToAvatarMaterialsWithOptions(shared_ptr<PopListFeatureToAvatarMaterialsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->current)) {
    body->insert(pair<string, long>("Current", *request->current));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->listStatus)) {
    body->insert(pair<string, string>("ListStatus", *request->listStatus));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    body->insert(pair<string, long>("Size", *request->size));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tags)) {
    body->insert(pair<string, string>("Tags", *request->tags));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PopListFeatureToAvatarMaterials"))},
    {"version", boost::any(string("2023-03-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PopListFeatureToAvatarMaterialsResponse(callApi(params, req, runtime));
}

PopListFeatureToAvatarMaterialsResponse Alibabacloud_XrEngine20230313::Client::popListFeatureToAvatarMaterials(shared_ptr<PopListFeatureToAvatarMaterialsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return popListFeatureToAvatarMaterialsWithOptions(request, runtime);
}

PopListFeatureToAvatarProjectResponse Alibabacloud_XrEngine20230313::Client::popListFeatureToAvatarProjectWithOptions(shared_ptr<PopListFeatureToAvatarProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->current)) {
    body->insert(pair<string, long>("Current", *request->current));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    body->insert(pair<string, long>("Size", *request->size));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortField)) {
    body->insert(pair<string, string>("SortField", *request->sortField));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    body->insert(pair<string, string>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    body->insert(pair<string, string>("Title", *request->title));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PopListFeatureToAvatarProject"))},
    {"version", boost::any(string("2023-03-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PopListFeatureToAvatarProjectResponse(callApi(params, req, runtime));
}

PopListFeatureToAvatarProjectResponse Alibabacloud_XrEngine20230313::Client::popListFeatureToAvatarProject(shared_ptr<PopListFeatureToAvatarProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return popListFeatureToAvatarProjectWithOptions(request, runtime);
}

PopListLivePortraitModelScopeMaterialsResponse Alibabacloud_XrEngine20230313::Client::popListLivePortraitModelScopeMaterialsWithOptions(shared_ptr<PopListLivePortraitModelScopeMaterialsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->current)) {
    body->insert(pair<string, long>("Current", *request->current));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    body->insert(pair<string, long>("Size", *request->size));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->types)) {
    body->insert(pair<string, string>("Types", *request->types));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PopListLivePortraitModelScopeMaterials"))},
    {"version", boost::any(string("2023-03-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PopListLivePortraitModelScopeMaterialsResponse(callApi(params, req, runtime));
}

PopListLivePortraitModelScopeMaterialsResponse Alibabacloud_XrEngine20230313::Client::popListLivePortraitModelScopeMaterials(shared_ptr<PopListLivePortraitModelScopeMaterialsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return popListLivePortraitModelScopeMaterialsWithOptions(request, runtime);
}

PopListObjectCaseResponse Alibabacloud_XrEngine20230313::Client::popListObjectCaseWithOptions(shared_ptr<PopListObjectCaseRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->current)) {
    body->insert(pair<string, long>("Current", *request->current));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jwtToken)) {
    body->insert(pair<string, string>("JwtToken", *request->jwtToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    body->insert(pair<string, long>("Size", *request->size));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PopListObjectCase"))},
    {"version", boost::any(string("2023-03-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PopListObjectCaseResponse(callApi(params, req, runtime));
}

PopListObjectCaseResponse Alibabacloud_XrEngine20230313::Client::popListObjectCase(shared_ptr<PopListObjectCaseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return popListObjectCaseWithOptions(request, runtime);
}

PopListObjectGenerationProjectResponse Alibabacloud_XrEngine20230313::Client::popListObjectGenerationProjectWithOptions(shared_ptr<PopListObjectGenerationProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jwtToken)) {
    query->insert(pair<string, string>("JwtToken", *request->jwtToken));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->current)) {
    body->insert(pair<string, long>("Current", *request->current));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    body->insert(pair<string, long>("Size", *request->size));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PopListObjectGenerationProject"))},
    {"version", boost::any(string("2023-03-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PopListObjectGenerationProjectResponse(callApi(params, req, runtime));
}

PopListObjectGenerationProjectResponse Alibabacloud_XrEngine20230313::Client::popListObjectGenerationProject(shared_ptr<PopListObjectGenerationProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return popListObjectGenerationProjectWithOptions(request, runtime);
}

PopListObjectProjectResponse Alibabacloud_XrEngine20230313::Client::popListObjectProjectWithOptions(shared_ptr<PopListObjectProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->auditStatus)) {
    body->insert(pair<string, string>("AuditStatus", *request->auditStatus));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->current)) {
    body->insert(pair<string, long>("Current", *request->current));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->customSource)) {
    body->insert(pair<string, string>("CustomSource", *request->customSource));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jwtToken)) {
    body->insert(pair<string, string>("JwtToken", *request->jwtToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    body->insert(pair<string, long>("Size", *request->size));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortField)) {
    body->insert(pair<string, string>("SortField", *request->sortField));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    body->insert(pair<string, string>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    body->insert(pair<string, string>("Title", *request->title));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->withSource)) {
    body->insert(pair<string, bool>("WithSource", *request->withSource));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PopListObjectProject"))},
    {"version", boost::any(string("2023-03-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PopListObjectProjectResponse(callApi(params, req, runtime));
}

PopListObjectProjectResponse Alibabacloud_XrEngine20230313::Client::popListObjectProject(shared_ptr<PopListObjectProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return popListObjectProjectWithOptions(request, runtime);
}

PopListPakRenderExpressionResponse Alibabacloud_XrEngine20230313::Client::popListPakRenderExpressionWithOptions(shared_ptr<PopListPakRenderExpressionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->listStatus)) {
    query->insert(pair<string, string>("ListStatus", *request->listStatus));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->current)) {
    body->insert(pair<string, long>("Current", *request->current));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    body->insert(pair<string, long>("Size", *request->size));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PopListPakRenderExpression"))},
    {"version", boost::any(string("2023-03-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PopListPakRenderExpressionResponse(callApi(params, req, runtime));
}

PopListPakRenderExpressionResponse Alibabacloud_XrEngine20230313::Client::popListPakRenderExpression(shared_ptr<PopListPakRenderExpressionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return popListPakRenderExpressionWithOptions(request, runtime);
}

PopListTextToAvatarProjectResponse Alibabacloud_XrEngine20230313::Client::popListTextToAvatarProjectWithOptions(shared_ptr<PopListTextToAvatarProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jwtToken)) {
    query->insert(pair<string, string>("JwtToken", *request->jwtToken));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->current)) {
    body->insert(pair<string, long>("Current", *request->current));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->size)) {
    body->insert(pair<string, long>("Size", *request->size));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortField)) {
    body->insert(pair<string, string>("SortField", *request->sortField));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    body->insert(pair<string, string>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    body->insert(pair<string, string>("Title", *request->title));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PopListTextToAvatarProject"))},
    {"version", boost::any(string("2023-03-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PopListTextToAvatarProjectResponse(callApi(params, req, runtime));
}

PopListTextToAvatarProjectResponse Alibabacloud_XrEngine20230313::Client::popListTextToAvatarProject(shared_ptr<PopListTextToAvatarProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return popListTextToAvatarProjectWithOptions(request, runtime);
}

PopObjectProjectDetailResponse Alibabacloud_XrEngine20230313::Client::popObjectProjectDetailWithOptions(shared_ptr<PopObjectProjectDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    query->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jwtToken)) {
    body->insert(pair<string, string>("JwtToken", *request->jwtToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PopObjectProjectDetail"))},
    {"version", boost::any(string("2023-03-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PopObjectProjectDetailResponse(callApi(params, req, runtime));
}

PopObjectProjectDetailResponse Alibabacloud_XrEngine20230313::Client::popObjectProjectDetail(shared_ptr<PopObjectProjectDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return popObjectProjectDetailWithOptions(request, runtime);
}

PopObjectRetrievalResponse Alibabacloud_XrEngine20230313::Client::popObjectRetrievalWithOptions(shared_ptr<PopObjectRetrievalRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jwtToken)) {
    query->insert(pair<string, string>("JwtToken", *request->jwtToken));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->content)) {
    body->insert(pair<string, string>("Content", *request->content));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceType)) {
    body->insert(pair<string, string>("SourceType", *request->sourceType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->topK)) {
    body->insert(pair<string, long>("TopK", *request->topK));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PopObjectRetrieval"))},
    {"version", boost::any(string("2023-03-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PopObjectRetrievalResponse(callApi(params, req, runtime));
}

PopObjectRetrievalResponse Alibabacloud_XrEngine20230313::Client::popObjectRetrieval(shared_ptr<PopObjectRetrievalRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return popObjectRetrievalWithOptions(request, runtime);
}

PopObjectRetrievalUploadDataResponse Alibabacloud_XrEngine20230313::Client::popObjectRetrievalUploadDataWithOptions(shared_ptr<PopObjectRetrievalUploadDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jwtToken)) {
    query->insert(pair<string, string>("JwtToken", *request->jwtToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PopObjectRetrievalUploadData"))},
    {"version", boost::any(string("2023-03-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PopObjectRetrievalUploadDataResponse(callApi(params, req, runtime));
}

PopObjectRetrievalUploadDataResponse Alibabacloud_XrEngine20230313::Client::popObjectRetrievalUploadData(shared_ptr<PopObjectRetrievalUploadDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return popObjectRetrievalUploadDataWithOptions(request, runtime);
}

PopQueryAvatarProjectDetailResponse Alibabacloud_XrEngine20230313::Client::popQueryAvatarProjectDetailWithOptions(shared_ptr<PopQueryAvatarProjectDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    query->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PopQueryAvatarProjectDetail"))},
    {"version", boost::any(string("2023-03-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PopQueryAvatarProjectDetailResponse(callApi(params, req, runtime));
}

PopQueryAvatarProjectDetailResponse Alibabacloud_XrEngine20230313::Client::popQueryAvatarProjectDetail(shared_ptr<PopQueryAvatarProjectDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return popQueryAvatarProjectDetailWithOptions(request, runtime);
}

PopQueryLatestAvatarProjectDetailByUserResponse Alibabacloud_XrEngine20230313::Client::popQueryLatestAvatarProjectDetailByUserWithOptions(shared_ptr<PopQueryLatestAvatarProjectDetailByUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jwtToken)) {
    query->insert(pair<string, string>("JwtToken", *request->jwtToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PopQueryLatestAvatarProjectDetailByUser"))},
    {"version", boost::any(string("2023-03-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PopQueryLatestAvatarProjectDetailByUserResponse(callApi(params, req, runtime));
}

PopQueryLatestAvatarProjectDetailByUserResponse Alibabacloud_XrEngine20230313::Client::popQueryLatestAvatarProjectDetailByUser(shared_ptr<PopQueryLatestAvatarProjectDetailByUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return popQueryLatestAvatarProjectDetailByUserWithOptions(request, runtime);
}

PopQueryLivePortraitModelScopeProjectDetailResponse Alibabacloud_XrEngine20230313::Client::popQueryLivePortraitModelScopeProjectDetailWithOptions(shared_ptr<PopQueryLivePortraitModelScopeProjectDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    query->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PopQueryLivePortraitModelScopeProjectDetail"))},
    {"version", boost::any(string("2023-03-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PopQueryLivePortraitModelScopeProjectDetailResponse(callApi(params, req, runtime));
}

PopQueryLivePortraitModelScopeProjectDetailResponse Alibabacloud_XrEngine20230313::Client::popQueryLivePortraitModelScopeProjectDetail(shared_ptr<PopQueryLivePortraitModelScopeProjectDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return popQueryLivePortraitModelScopeProjectDetailWithOptions(request, runtime);
}

PopQueryObjectGenerationProjectDetailResponse Alibabacloud_XrEngine20230313::Client::popQueryObjectGenerationProjectDetailWithOptions(shared_ptr<PopQueryObjectGenerationProjectDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jwtToken)) {
    query->insert(pair<string, string>("JwtToken", *request->jwtToken));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    body->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PopQueryObjectGenerationProjectDetail"))},
    {"version", boost::any(string("2023-03-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PopQueryObjectGenerationProjectDetailResponse(callApi(params, req, runtime));
}

PopQueryObjectGenerationProjectDetailResponse Alibabacloud_XrEngine20230313::Client::popQueryObjectGenerationProjectDetail(shared_ptr<PopQueryObjectGenerationProjectDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return popQueryObjectGenerationProjectDetailWithOptions(request, runtime);
}

PopRetryAITryOnTaskResponse Alibabacloud_XrEngine20230313::Client::popRetryAITryOnTaskWithOptions(shared_ptr<PopRetryAITryOnTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jwtToken)) {
    query->insert(pair<string, string>("JwtToken", *request->jwtToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    query->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PopRetryAITryOnTask"))},
    {"version", boost::any(string("2023-03-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PopRetryAITryOnTaskResponse(callApi(params, req, runtime));
}

PopRetryAITryOnTaskResponse Alibabacloud_XrEngine20230313::Client::popRetryAITryOnTask(shared_ptr<PopRetryAITryOnTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return popRetryAITryOnTaskWithOptions(request, runtime);
}

PopSubmitAITryOnJobResponse Alibabacloud_XrEngine20230313::Client::popSubmitAITryOnJobWithOptions(shared_ptr<PopSubmitAITryOnJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bottomsId)) {
    query->insert(pair<string, string>("BottomsId", *request->bottomsId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clothingType)) {
    query->insert(pair<string, string>("ClothingType", *request->clothingType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jwtToken)) {
    query->insert(pair<string, string>("JwtToken", *request->jwtToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modelId)) {
    query->insert(pair<string, string>("ModelId", *request->modelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->shoeType)) {
    query->insert(pair<string, string>("ShoeType", *request->shoeType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->suitId)) {
    query->insert(pair<string, string>("SuitId", *request->suitId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->topsId)) {
    query->insert(pair<string, string>("TopsId", *request->topsId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PopSubmitAITryOnJob"))},
    {"version", boost::any(string("2023-03-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PopSubmitAITryOnJobResponse(callApi(params, req, runtime));
}

PopSubmitAITryOnJobResponse Alibabacloud_XrEngine20230313::Client::popSubmitAITryOnJob(shared_ptr<PopSubmitAITryOnJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return popSubmitAITryOnJobWithOptions(request, runtime);
}

PopUploadMaterialResponse Alibabacloud_XrEngine20230313::Client::popUploadMaterialWithOptions(shared_ptr<PopUploadMaterialRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jwtToken)) {
    query->insert(pair<string, string>("JwtToken", *request->jwtToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PopUploadMaterial"))},
    {"version", boost::any(string("2023-03-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PopUploadMaterialResponse(callApi(params, req, runtime));
}

PopUploadMaterialResponse Alibabacloud_XrEngine20230313::Client::popUploadMaterial(shared_ptr<PopUploadMaterialRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return popUploadMaterialWithOptions(request, runtime);
}

PopVideoSaveSourceResponse Alibabacloud_XrEngine20230313::Client::popVideoSaveSourceWithOptions(shared_ptr<PopVideoSaveSourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    query->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceType)) {
    query->insert(pair<string, string>("SourceType", *request->sourceType));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jwtToken)) {
    body->insert(pair<string, string>("JwtToken", *request->jwtToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PopVideoSaveSource"))},
    {"version", boost::any(string("2023-03-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PopVideoSaveSourceResponse(callApi(params, req, runtime));
}

PopVideoSaveSourceResponse Alibabacloud_XrEngine20230313::Client::popVideoSaveSource(shared_ptr<PopVideoSaveSourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return popVideoSaveSourceWithOptions(request, runtime);
}

QueryDigitalHumanProjectResponse Alibabacloud_XrEngine20230313::Client::queryDigitalHumanProjectWithOptions(shared_ptr<QueryDigitalHumanProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jwtToken)) {
    query->insert(pair<string, string>("JwtToken", *request->jwtToken));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ids)) {
    body->insert(pair<string, string>("Ids", *request->ids));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryDigitalHumanProject"))},
    {"version", boost::any(string("2023-03-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryDigitalHumanProjectResponse(callApi(params, req, runtime));
}

QueryDigitalHumanProjectResponse Alibabacloud_XrEngine20230313::Client::queryDigitalHumanProject(shared_ptr<QueryDigitalHumanProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDigitalHumanProjectWithOptions(request, runtime);
}

QueryLongTtsResultResponse Alibabacloud_XrEngine20230313::Client::queryLongTtsResultWithOptions(shared_ptr<QueryLongTtsResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jwtToken)) {
    query->insert(pair<string, string>("JwtToken", *request->jwtToken));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    body->insert(pair<string, string>("JobId", *request->jobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryLongTtsResult"))},
    {"version", boost::any(string("2023-03-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryLongTtsResultResponse(callApi(params, req, runtime));
}

QueryLongTtsResultResponse Alibabacloud_XrEngine20230313::Client::queryLongTtsResult(shared_ptr<QueryLongTtsResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryLongTtsResultWithOptions(request, runtime);
}

SubmitLongTtsTaskResponse Alibabacloud_XrEngine20230313::Client::submitLongTtsTaskWithOptions(shared_ptr<SubmitLongTtsTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jwtToken)) {
    query->insert(pair<string, string>("JwtToken", *request->jwtToken));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->content)) {
    body->insert(pair<string, string>("Content", *request->content));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ttsVoiceId)) {
    body->insert(pair<string, string>("TtsVoiceId", *request->ttsVoiceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitLongTtsTask"))},
    {"version", boost::any(string("2023-03-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitLongTtsTaskResponse(callApi(params, req, runtime));
}

SubmitLongTtsTaskResponse Alibabacloud_XrEngine20230313::Client::submitLongTtsTask(shared_ptr<SubmitLongTtsTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitLongTtsTaskWithOptions(request, runtime);
}

UpdateUserEmailResponse Alibabacloud_XrEngine20230313::Client::updateUserEmailWithOptions(shared_ptr<UpdateUserEmailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->email)) {
    body->insert(pair<string, string>("Email", *request->email));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jwtToken)) {
    body->insert(pair<string, string>("JwtToken", *request->jwtToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateUserEmail"))},
    {"version", boost::any(string("2023-03-13"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateUserEmailResponse(callApi(params, req, runtime));
}

UpdateUserEmailResponse Alibabacloud_XrEngine20230313::Client::updateUserEmail(shared_ptr<UpdateUserEmailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateUserEmailWithOptions(request, runtime);
}

