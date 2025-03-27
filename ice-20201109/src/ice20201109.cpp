// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/ice20201109.hpp>
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

using namespace Alibabacloud_ICE20201109;

Alibabacloud_ICE20201109::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _signatureAlgorithm = make_shared<string>("v2");
  _endpointRule = make_shared<string>("regional");
  _endpointMap = make_shared<map<string, string>>(map<string, string>({
    {"ap-northeast-1", "ice.aliyuncs.com"},
    {"ap-northeast-2-pop", "ice.aliyuncs.com"},
    {"ap-south-1", "ice.aliyuncs.com"},
    {"ap-southeast-1", "ice.aliyuncs.com"},
    {"ap-southeast-2", "ice.aliyuncs.com"},
    {"ap-southeast-3", "ice.aliyuncs.com"},
    {"ap-southeast-5", "ice.aliyuncs.com"},
    {"cn-beijing", "ice.aliyuncs.com"},
    {"cn-beijing-finance-1", "ice.aliyuncs.com"},
    {"cn-beijing-finance-pop", "ice.aliyuncs.com"},
    {"cn-beijing-gov-1", "ice.aliyuncs.com"},
    {"cn-beijing-nu16-b01", "ice.aliyuncs.com"},
    {"cn-chengdu", "ice.aliyuncs.com"},
    {"cn-edge-1", "ice.aliyuncs.com"},
    {"cn-fujian", "ice.aliyuncs.com"},
    {"cn-haidian-cm12-c01", "ice.aliyuncs.com"},
    {"cn-hangzhou", "ice.aliyuncs.com"},
    {"cn-hangzhou-bj-b01", "ice.aliyuncs.com"},
    {"cn-hangzhou-finance", "ice.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1", "ice.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1", "ice.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2", "ice.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3", "ice.aliyuncs.com"},
    {"cn-hangzhou-test-306", "ice.aliyuncs.com"},
    {"cn-hongkong", "ice.aliyuncs.com"},
    {"cn-hongkong-finance-pop", "ice.aliyuncs.com"},
    {"cn-huhehaote", "ice.aliyuncs.com"},
    {"cn-huhehaote-nebula-1", "ice.aliyuncs.com"},
    {"cn-north-2-gov-1", "ice.aliyuncs.com"},
    {"cn-qingdao", "ice.aliyuncs.com"},
    {"cn-qingdao-nebula", "ice.aliyuncs.com"},
    {"cn-shanghai-et15-b01", "ice.aliyuncs.com"},
    {"cn-shanghai-et2-b01", "ice.aliyuncs.com"},
    {"cn-shanghai-finance-1", "ice.aliyuncs.com"},
    {"cn-shanghai-inner", "ice.aliyuncs.com"},
    {"cn-shanghai-internal-test-1", "ice.aliyuncs.com"},
    {"cn-shenzhen", "ice.aliyuncs.com"},
    {"cn-shenzhen-finance-1", "ice.aliyuncs.com"},
    {"cn-shenzhen-inner", "ice.aliyuncs.com"},
    {"cn-shenzhen-st4-d01", "ice.aliyuncs.com"},
    {"cn-shenzhen-su18-b01", "ice.aliyuncs.com"},
    {"cn-wuhan", "ice.aliyuncs.com"},
    {"cn-wulanchabu", "ice.aliyuncs.com"},
    {"cn-yushanfang", "ice.aliyuncs.com"},
    {"cn-zhangbei", "ice.aliyuncs.com"},
    {"cn-zhangbei-na61-b01", "ice.aliyuncs.com"},
    {"cn-zhangjiakou", "ice.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01", "ice.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1", "ice.aliyuncs.com"},
    {"eu-central-1", "ice.aliyuncs.com"},
    {"eu-west-1", "ice.aliyuncs.com"},
    {"eu-west-1-oxs", "ice.aliyuncs.com"},
    {"me-east-1", "ice.aliyuncs.com"},
    {"rus-west-1-pop", "ice.aliyuncs.com"},
    {"us-east-1", "ice.aliyuncs.com"},
    {"us-west-1", "ice.aliyuncs.com"}
  })
);
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("ice"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_ICE20201109::Client::getEndpoint(shared_ptr<string> productId,
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

AddAdInsertionResponse Alibabacloud_ICE20201109::Client::addAdInsertionWithOptions(shared_ptr<AddAdInsertionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->adMarkerPassthrough)) {
    body->insert(pair<string, string>("AdMarkerPassthrough", *request->adMarkerPassthrough));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->adsUrl)) {
    body->insert(pair<string, string>("AdsUrl", *request->adsUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cdnAdSegmentUrlPrefix)) {
    body->insert(pair<string, string>("CdnAdSegmentUrlPrefix", *request->cdnAdSegmentUrlPrefix));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cdnContentSegmentUrlPrefix)) {
    body->insert(pair<string, string>("CdnContentSegmentUrlPrefix", *request->cdnContentSegmentUrlPrefix));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    body->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->configAliases)) {
    body->insert(pair<string, string>("ConfigAliases", *request->configAliases));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contentUrlPrefix)) {
    body->insert(pair<string, string>("ContentUrlPrefix", *request->contentUrlPrefix));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->personalizationThreshold)) {
    body->insert(pair<string, long>("PersonalizationThreshold", *request->personalizationThreshold));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->slateAdUrl)) {
    body->insert(pair<string, string>("SlateAdUrl", *request->slateAdUrl));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddAdInsertion"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return AddAdInsertionResponse(callApi(params, req, runtime));
  }
  else {
    return AddAdInsertionResponse(execute(params, req, runtime));
  }
}

AddAdInsertionResponse Alibabacloud_ICE20201109::Client::addAdInsertion(shared_ptr<AddAdInsertionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addAdInsertionWithOptions(request, runtime);
}

AddCategoryResponse Alibabacloud_ICE20201109::Client::addCategoryWithOptions(shared_ptr<AddCategoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cateName)) {
    query->insert(pair<string, string>("CateName", *request->cateName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->parentId)) {
    query->insert(pair<string, long>("ParentId", *request->parentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddCategory"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return AddCategoryResponse(callApi(params, req, runtime));
  }
  else {
    return AddCategoryResponse(execute(params, req, runtime));
  }
}

AddCategoryResponse Alibabacloud_ICE20201109::Client::addCategory(shared_ptr<AddCategoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addCategoryWithOptions(request, runtime);
}

AddEditingProjectMaterialsResponse Alibabacloud_ICE20201109::Client::addEditingProjectMaterialsWithOptions(shared_ptr<AddEditingProjectMaterialsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->materialMaps)) {
    query->insert(pair<string, string>("MaterialMaps", *request->materialMaps));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    query->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddEditingProjectMaterials"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return AddEditingProjectMaterialsResponse(callApi(params, req, runtime));
  }
  else {
    return AddEditingProjectMaterialsResponse(execute(params, req, runtime));
  }
}

AddEditingProjectMaterialsResponse Alibabacloud_ICE20201109::Client::addEditingProjectMaterials(shared_ptr<AddEditingProjectMaterialsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addEditingProjectMaterialsWithOptions(request, runtime);
}

AddFavoritePublicMediaResponse Alibabacloud_ICE20201109::Client::addFavoritePublicMediaWithOptions(shared_ptr<AddFavoritePublicMediaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaIds)) {
    query->insert(pair<string, string>("MediaIds", *request->mediaIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddFavoritePublicMedia"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return AddFavoritePublicMediaResponse(callApi(params, req, runtime));
  }
  else {
    return AddFavoritePublicMediaResponse(execute(params, req, runtime));
  }
}

AddFavoritePublicMediaResponse Alibabacloud_ICE20201109::Client::addFavoritePublicMedia(shared_ptr<AddFavoritePublicMediaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addFavoritePublicMediaWithOptions(request, runtime);
}

AddMediaConnectFlowInputResponse Alibabacloud_ICE20201109::Client::addMediaConnectFlowInputWithOptions(shared_ptr<AddMediaConnectFlowInputRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cidrs)) {
    query->insert(pair<string, string>("Cidrs", *request->cidrs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->flowId)) {
    query->insert(pair<string, string>("FlowId", *request->flowId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputFromUrl)) {
    query->insert(pair<string, string>("InputFromUrl", *request->inputFromUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputName)) {
    query->insert(pair<string, string>("InputName", *request->inputName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputProtocol)) {
    query->insert(pair<string, string>("InputProtocol", *request->inputProtocol));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxBitrate)) {
    query->insert(pair<string, long>("MaxBitrate", *request->maxBitrate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pairFlowId)) {
    query->insert(pair<string, string>("PairFlowId", *request->pairFlowId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pairOutputName)) {
    query->insert(pair<string, string>("PairOutputName", *request->pairOutputName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->srtLatency)) {
    query->insert(pair<string, long>("SrtLatency", *request->srtLatency));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->srtPassphrase)) {
    query->insert(pair<string, string>("SrtPassphrase", *request->srtPassphrase));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->srtPbkeyLen)) {
    query->insert(pair<string, string>("SrtPbkeyLen", *request->srtPbkeyLen));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddMediaConnectFlowInput"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return AddMediaConnectFlowInputResponse(callApi(params, req, runtime));
  }
  else {
    return AddMediaConnectFlowInputResponse(execute(params, req, runtime));
  }
}

AddMediaConnectFlowInputResponse Alibabacloud_ICE20201109::Client::addMediaConnectFlowInput(shared_ptr<AddMediaConnectFlowInputRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addMediaConnectFlowInputWithOptions(request, runtime);
}

AddMediaConnectFlowOutputResponse Alibabacloud_ICE20201109::Client::addMediaConnectFlowOutputWithOptions(shared_ptr<AddMediaConnectFlowOutputRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cidrs)) {
    query->insert(pair<string, string>("Cidrs", *request->cidrs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->flowId)) {
    query->insert(pair<string, string>("FlowId", *request->flowId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outputName)) {
    query->insert(pair<string, string>("OutputName", *request->outputName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outputProtocol)) {
    query->insert(pair<string, string>("OutputProtocol", *request->outputProtocol));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outputToUrl)) {
    query->insert(pair<string, string>("OutputToUrl", *request->outputToUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pairFlowId)) {
    query->insert(pair<string, string>("PairFlowId", *request->pairFlowId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pairInputName)) {
    query->insert(pair<string, string>("PairInputName", *request->pairInputName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->playerLimit)) {
    query->insert(pair<string, long>("PlayerLimit", *request->playerLimit));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->srtLatency)) {
    query->insert(pair<string, long>("SrtLatency", *request->srtLatency));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->srtPassphrase)) {
    query->insert(pair<string, string>("SrtPassphrase", *request->srtPassphrase));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->srtPbkeyLen)) {
    query->insert(pair<string, string>("SrtPbkeyLen", *request->srtPbkeyLen));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddMediaConnectFlowOutput"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return AddMediaConnectFlowOutputResponse(callApi(params, req, runtime));
  }
  else {
    return AddMediaConnectFlowOutputResponse(execute(params, req, runtime));
  }
}

AddMediaConnectFlowOutputResponse Alibabacloud_ICE20201109::Client::addMediaConnectFlowOutput(shared_ptr<AddMediaConnectFlowOutputRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addMediaConnectFlowOutputWithOptions(request, runtime);
}

AddMediaMarksResponse Alibabacloud_ICE20201109::Client::addMediaMarksWithOptions(shared_ptr<AddMediaMarksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaId)) {
    query->insert(pair<string, string>("MediaId", *request->mediaId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaMarks)) {
    query->insert(pair<string, string>("MediaMarks", *request->mediaMarks));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddMediaMarks"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return AddMediaMarksResponse(callApi(params, req, runtime));
  }
  else {
    return AddMediaMarksResponse(execute(params, req, runtime));
  }
}

AddMediaMarksResponse Alibabacloud_ICE20201109::Client::addMediaMarks(shared_ptr<AddMediaMarksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addMediaMarksWithOptions(request, runtime);
}

AddTemplateResponse Alibabacloud_ICE20201109::Client::addTemplateWithOptions(shared_ptr<AddTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->coverUrl)) {
    query->insert(pair<string, string>("CoverUrl", *request->coverUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->previewMedia)) {
    query->insert(pair<string, string>("PreviewMedia", *request->previewMedia));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->relatedMediaids)) {
    query->insert(pair<string, string>("RelatedMediaids", *request->relatedMediaids));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->source)) {
    query->insert(pair<string, string>("Source", *request->source));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->config)) {
    body->insert(pair<string, string>("Config", *request->config));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddTemplate"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return AddTemplateResponse(callApi(params, req, runtime));
  }
  else {
    return AddTemplateResponse(execute(params, req, runtime));
  }
}

AddTemplateResponse Alibabacloud_ICE20201109::Client::addTemplate(shared_ptr<AddTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addTemplateWithOptions(request, runtime);
}

AlterSearchIndexResponse Alibabacloud_ICE20201109::Client::alterSearchIndexWithOptions(shared_ptr<AlterSearchIndexRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->indexConfig)) {
    query->insert(pair<string, string>("IndexConfig", *request->indexConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->indexStatus)) {
    query->insert(pair<string, string>("IndexStatus", *request->indexStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->indexType)) {
    query->insert(pair<string, string>("IndexType", *request->indexType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchLibName)) {
    query->insert(pair<string, string>("SearchLibName", *request->searchLibName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AlterSearchIndex"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return AlterSearchIndexResponse(callApi(params, req, runtime));
  }
  else {
    return AlterSearchIndexResponse(execute(params, req, runtime));
  }
}

AlterSearchIndexResponse Alibabacloud_ICE20201109::Client::alterSearchIndex(shared_ptr<AlterSearchIndexRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return alterSearchIndexWithOptions(request, runtime);
}

BatchCreateVodPackagingAssetResponse Alibabacloud_ICE20201109::Client::batchCreateVodPackagingAssetWithOptions(shared_ptr<BatchCreateVodPackagingAssetRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<BatchCreateVodPackagingAssetShrinkRequest> request = make_shared<BatchCreateVodPackagingAssetShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<BatchCreateVodPackagingAssetRequestAssets>>(tmpReq->assets)) {
    request->assetsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->assets, make_shared<string>("Assets"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->assetsShrink)) {
    query->insert(pair<string, string>("Assets", *request->assetsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupName)) {
    query->insert(pair<string, string>("GroupName", *request->groupName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BatchCreateVodPackagingAsset"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return BatchCreateVodPackagingAssetResponse(callApi(params, req, runtime));
  }
  else {
    return BatchCreateVodPackagingAssetResponse(execute(params, req, runtime));
  }
}

BatchCreateVodPackagingAssetResponse Alibabacloud_ICE20201109::Client::batchCreateVodPackagingAsset(shared_ptr<BatchCreateVodPackagingAssetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchCreateVodPackagingAssetWithOptions(request, runtime);
}

BatchGetMediaInfosResponse Alibabacloud_ICE20201109::Client::batchGetMediaInfosWithOptions(shared_ptr<BatchGetMediaInfosRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->additionType)) {
    query->insert(pair<string, string>("AdditionType", *request->additionType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaIds)) {
    query->insert(pair<string, string>("MediaIds", *request->mediaIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BatchGetMediaInfos"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return BatchGetMediaInfosResponse(callApi(params, req, runtime));
  }
  else {
    return BatchGetMediaInfosResponse(execute(params, req, runtime));
  }
}

BatchGetMediaInfosResponse Alibabacloud_ICE20201109::Client::batchGetMediaInfos(shared_ptr<BatchGetMediaInfosRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchGetMediaInfosWithOptions(request, runtime);
}

CancelDNAJobResponse Alibabacloud_ICE20201109::Client::cancelDNAJobWithOptions(shared_ptr<CancelDNAJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CancelDNAJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CancelDNAJobResponse(callApi(params, req, runtime));
  }
  else {
    return CancelDNAJobResponse(execute(params, req, runtime));
  }
}

CancelDNAJobResponse Alibabacloud_ICE20201109::Client::cancelDNAJob(shared_ptr<CancelDNAJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelDNAJobWithOptions(request, runtime);
}

CancelFavoritePublicMediaResponse Alibabacloud_ICE20201109::Client::cancelFavoritePublicMediaWithOptions(shared_ptr<CancelFavoritePublicMediaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaIds)) {
    query->insert(pair<string, string>("MediaIds", *request->mediaIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CancelFavoritePublicMedia"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CancelFavoritePublicMediaResponse(callApi(params, req, runtime));
  }
  else {
    return CancelFavoritePublicMediaResponse(execute(params, req, runtime));
  }
}

CancelFavoritePublicMediaResponse Alibabacloud_ICE20201109::Client::cancelFavoritePublicMedia(shared_ptr<CancelFavoritePublicMediaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelFavoritePublicMediaWithOptions(request, runtime);
}

CreateAuditResponse Alibabacloud_ICE20201109::Client::createAuditWithOptions(shared_ptr<CreateAuditRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->auditContent)) {
    query->insert(pair<string, string>("AuditContent", *request->auditContent));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateAudit"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateAuditResponse(callApi(params, req, runtime));
  }
  else {
    return CreateAuditResponse(execute(params, req, runtime));
  }
}

CreateAuditResponse Alibabacloud_ICE20201109::Client::createAudit(shared_ptr<CreateAuditRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAuditWithOptions(request, runtime);
}

CreateAvatarTrainingJobResponse Alibabacloud_ICE20201109::Client::createAvatarTrainingJobWithOptions(shared_ptr<CreateAvatarTrainingJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->avatarDescription)) {
    query->insert(pair<string, string>("AvatarDescription", *request->avatarDescription));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->avatarName)) {
    query->insert(pair<string, string>("AvatarName", *request->avatarName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->avatarType)) {
    query->insert(pair<string, string>("AvatarType", *request->avatarType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->portrait)) {
    query->insert(pair<string, string>("Portrait", *request->portrait));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thumbnail)) {
    query->insert(pair<string, string>("Thumbnail", *request->thumbnail));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->transparent)) {
    query->insert(pair<string, bool>("Transparent", *request->transparent));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->video)) {
    query->insert(pair<string, string>("Video", *request->video));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateAvatarTrainingJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateAvatarTrainingJobResponse(callApi(params, req, runtime));
  }
  else {
    return CreateAvatarTrainingJobResponse(execute(params, req, runtime));
  }
}

CreateAvatarTrainingJobResponse Alibabacloud_ICE20201109::Client::createAvatarTrainingJob(shared_ptr<CreateAvatarTrainingJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAvatarTrainingJobWithOptions(request, runtime);
}

CreateChannelResponse Alibabacloud_ICE20201109::Client::createChannelWithOptions(shared_ptr<CreateChannelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->accessPolicy)) {
    query->insert(pair<string, bool>("AccessPolicy", *request->accessPolicy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("AccessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->channelName)) {
    query->insert(pair<string, string>("ChannelName", *request->channelName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->channelTier)) {
    query->insert(pair<string, string>("ChannelTier", *request->channelTier));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fillerSourceLocationName)) {
    query->insert(pair<string, string>("FillerSourceLocationName", *request->fillerSourceLocationName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fillerSourceName)) {
    query->insert(pair<string, string>("FillerSourceName", *request->fillerSourceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outPutConfigList)) {
    query->insert(pair<string, string>("OutPutConfigList", *request->outPutConfigList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->playbackMode)) {
    query->insert(pair<string, string>("PlaybackMode", *request->playbackMode));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateChannel"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateChannelResponse(callApi(params, req, runtime));
  }
  else {
    return CreateChannelResponse(execute(params, req, runtime));
  }
}

CreateChannelResponse Alibabacloud_ICE20201109::Client::createChannel(shared_ptr<CreateChannelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createChannelWithOptions(request, runtime);
}

CreateCustomTemplateResponse Alibabacloud_ICE20201109::Client::createCustomTemplateWithOptions(shared_ptr<CreateCustomTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->subtype)) {
    query->insert(pair<string, long>("Subtype", *request->subtype));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateConfig)) {
    query->insert(pair<string, string>("TemplateConfig", *request->templateConfig));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->type)) {
    query->insert(pair<string, long>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateCustomTemplate"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateCustomTemplateResponse(callApi(params, req, runtime));
  }
  else {
    return CreateCustomTemplateResponse(execute(params, req, runtime));
  }
}

CreateCustomTemplateResponse Alibabacloud_ICE20201109::Client::createCustomTemplate(shared_ptr<CreateCustomTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createCustomTemplateWithOptions(request, runtime);
}

CreateCustomizedVoiceJobResponse Alibabacloud_ICE20201109::Client::createCustomizedVoiceJobWithOptions(shared_ptr<CreateCustomizedVoiceJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->gender)) {
    query->insert(pair<string, string>("Gender", *request->gender));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scenario)) {
    query->insert(pair<string, string>("Scenario", *request->scenario));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->voiceDesc)) {
    query->insert(pair<string, string>("VoiceDesc", *request->voiceDesc));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->voiceId)) {
    query->insert(pair<string, string>("VoiceId", *request->voiceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->voiceName)) {
    query->insert(pair<string, string>("VoiceName", *request->voiceName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateCustomizedVoiceJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateCustomizedVoiceJobResponse(callApi(params, req, runtime));
  }
  else {
    return CreateCustomizedVoiceJobResponse(execute(params, req, runtime));
  }
}

CreateCustomizedVoiceJobResponse Alibabacloud_ICE20201109::Client::createCustomizedVoiceJob(shared_ptr<CreateCustomizedVoiceJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createCustomizedVoiceJobWithOptions(request, runtime);
}

CreateDNADBResponse Alibabacloud_ICE20201109::Client::createDNADBWithOptions(shared_ptr<CreateDNADBRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->model)) {
    query->insert(pair<string, string>("Model", *request->model));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateDNADB"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateDNADBResponse(callApi(params, req, runtime));
  }
  else {
    return CreateDNADBResponse(execute(params, req, runtime));
  }
}

CreateDNADBResponse Alibabacloud_ICE20201109::Client::createDNADB(shared_ptr<CreateDNADBRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createDNADBWithOptions(request, runtime);
}

CreateEditingProjectResponse Alibabacloud_ICE20201109::Client::createEditingProjectWithOptions(shared_ptr<CreateEditingProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->businessConfig)) {
    query->insert(pair<string, string>("BusinessConfig", *request->businessConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clipsParam)) {
    query->insert(pair<string, string>("ClipsParam", *request->clipsParam));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->coverURL)) {
    query->insert(pair<string, string>("CoverURL", *request->coverURL));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->materialMaps)) {
    query->insert(pair<string, string>("MaterialMaps", *request->materialMaps));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectType)) {
    query->insert(pair<string, string>("ProjectType", *request->projectType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    query->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateType)) {
    query->insert(pair<string, string>("TemplateType", *request->templateType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    query->insert(pair<string, string>("Title", *request->title));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->timeline)) {
    body->insert(pair<string, string>("Timeline", *request->timeline));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateEditingProject"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateEditingProjectResponse(callApi(params, req, runtime));
  }
  else {
    return CreateEditingProjectResponse(execute(params, req, runtime));
  }
}

CreateEditingProjectResponse Alibabacloud_ICE20201109::Client::createEditingProject(shared_ptr<CreateEditingProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createEditingProjectWithOptions(request, runtime);
}

CreateLivePackageChannelResponse Alibabacloud_ICE20201109::Client::createLivePackageChannelWithOptions(shared_ptr<CreateLivePackageChannelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->channelName)) {
    body->insert(pair<string, string>("ChannelName", *request->channelName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupName)) {
    body->insert(pair<string, string>("GroupName", *request->groupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->protocol)) {
    body->insert(pair<string, string>("Protocol", *request->protocol));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->segmentCount)) {
    body->insert(pair<string, long>("SegmentCount", *request->segmentCount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->segmentDuration)) {
    body->insert(pair<string, long>("SegmentDuration", *request->segmentDuration));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateLivePackageChannel"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateLivePackageChannelResponse(callApi(params, req, runtime));
  }
  else {
    return CreateLivePackageChannelResponse(execute(params, req, runtime));
  }
}

CreateLivePackageChannelResponse Alibabacloud_ICE20201109::Client::createLivePackageChannel(shared_ptr<CreateLivePackageChannelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createLivePackageChannelWithOptions(request, runtime);
}

CreateLivePackageChannelGroupResponse Alibabacloud_ICE20201109::Client::createLivePackageChannelGroupWithOptions(shared_ptr<CreateLivePackageChannelGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->groupName)) {
    body->insert(pair<string, string>("GroupName", *request->groupName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateLivePackageChannelGroup"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateLivePackageChannelGroupResponse(callApi(params, req, runtime));
  }
  else {
    return CreateLivePackageChannelGroupResponse(execute(params, req, runtime));
  }
}

CreateLivePackageChannelGroupResponse Alibabacloud_ICE20201109::Client::createLivePackageChannelGroup(shared_ptr<CreateLivePackageChannelGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createLivePackageChannelGroupWithOptions(request, runtime);
}

CreateLivePackageOriginEndpointResponse Alibabacloud_ICE20201109::Client::createLivePackageOriginEndpointWithOptions(shared_ptr<CreateLivePackageOriginEndpointRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->authorizationCode)) {
    body->insert(pair<string, string>("AuthorizationCode", *request->authorizationCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->channelName)) {
    body->insert(pair<string, string>("ChannelName", *request->channelName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endpointName)) {
    body->insert(pair<string, string>("EndpointName", *request->endpointName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupName)) {
    body->insert(pair<string, string>("GroupName", *request->groupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ipBlacklist)) {
    body->insert(pair<string, string>("IpBlacklist", *request->ipBlacklist));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ipWhitelist)) {
    body->insert(pair<string, string>("IpWhitelist", *request->ipWhitelist));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->manifestName)) {
    body->insert(pair<string, string>("ManifestName", *request->manifestName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->protocol)) {
    body->insert(pair<string, string>("Protocol", *request->protocol));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->timeshiftVision)) {
    body->insert(pair<string, long>("TimeshiftVision", *request->timeshiftVision));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateLivePackageOriginEndpoint"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateLivePackageOriginEndpointResponse(callApi(params, req, runtime));
  }
  else {
    return CreateLivePackageOriginEndpointResponse(execute(params, req, runtime));
  }
}

CreateLivePackageOriginEndpointResponse Alibabacloud_ICE20201109::Client::createLivePackageOriginEndpoint(shared_ptr<CreateLivePackageOriginEndpointRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createLivePackageOriginEndpointWithOptions(request, runtime);
}

CreateLiveRecordTemplateResponse Alibabacloud_ICE20201109::Client::createLiveRecordTemplateWithOptions(shared_ptr<CreateLiveRecordTemplateRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateLiveRecordTemplateShrinkRequest> request = make_shared<CreateLiveRecordTemplateShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<CreateLiveRecordTemplateRequestRecordFormat>>(tmpReq->recordFormat)) {
    request->recordFormatShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->recordFormat, make_shared<string>("RecordFormat"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->recordFormatShrink)) {
    body->insert(pair<string, string>("RecordFormat", *request->recordFormatShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateLiveRecordTemplate"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateLiveRecordTemplateResponse(callApi(params, req, runtime));
  }
  else {
    return CreateLiveRecordTemplateResponse(execute(params, req, runtime));
  }
}

CreateLiveRecordTemplateResponse Alibabacloud_ICE20201109::Client::createLiveRecordTemplate(shared_ptr<CreateLiveRecordTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createLiveRecordTemplateWithOptions(request, runtime);
}

CreateLiveSnapshotTemplateResponse Alibabacloud_ICE20201109::Client::createLiveSnapshotTemplateWithOptions(shared_ptr<CreateLiveSnapshotTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->overwriteFormat)) {
    body->insert(pair<string, string>("OverwriteFormat", *request->overwriteFormat));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sequenceFormat)) {
    body->insert(pair<string, string>("SequenceFormat", *request->sequenceFormat));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateName)) {
    body->insert(pair<string, string>("TemplateName", *request->templateName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->timeInterval)) {
    body->insert(pair<string, long>("TimeInterval", *request->timeInterval));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateLiveSnapshotTemplate"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateLiveSnapshotTemplateResponse(callApi(params, req, runtime));
  }
  else {
    return CreateLiveSnapshotTemplateResponse(execute(params, req, runtime));
  }
}

CreateLiveSnapshotTemplateResponse Alibabacloud_ICE20201109::Client::createLiveSnapshotTemplate(shared_ptr<CreateLiveSnapshotTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createLiveSnapshotTemplateWithOptions(request, runtime);
}

CreateLiveTranscodeTemplateResponse Alibabacloud_ICE20201109::Client::createLiveTranscodeTemplateWithOptions(shared_ptr<CreateLiveTranscodeTemplateRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateLiveTranscodeTemplateShrinkRequest> request = make_shared<CreateLiveTranscodeTemplateShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CreateLiveTranscodeTemplateRequestTemplateConfig>(tmpReq->templateConfig)) {
    request->templateConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->templateConfig, make_shared<string>("TemplateConfig"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateConfigShrink)) {
    query->insert(pair<string, string>("TemplateConfig", *request->templateConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateLiveTranscodeTemplate"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateLiveTranscodeTemplateResponse(callApi(params, req, runtime));
  }
  else {
    return CreateLiveTranscodeTemplateResponse(execute(params, req, runtime));
  }
}

CreateLiveTranscodeTemplateResponse Alibabacloud_ICE20201109::Client::createLiveTranscodeTemplate(shared_ptr<CreateLiveTranscodeTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createLiveTranscodeTemplateWithOptions(request, runtime);
}

CreateMediaConnectFlowResponse Alibabacloud_ICE20201109::Client::createMediaConnectFlowWithOptions(shared_ptr<CreateMediaConnectFlowRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->flowName)) {
    query->insert(pair<string, string>("FlowName", *request->flowName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->flowRegion)) {
    query->insert(pair<string, string>("FlowRegion", *request->flowRegion));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateMediaConnectFlow"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateMediaConnectFlowResponse(callApi(params, req, runtime));
  }
  else {
    return CreateMediaConnectFlowResponse(execute(params, req, runtime));
  }
}

CreateMediaConnectFlowResponse Alibabacloud_ICE20201109::Client::createMediaConnectFlow(shared_ptr<CreateMediaConnectFlowRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createMediaConnectFlowWithOptions(request, runtime);
}

CreateMediaLiveChannelResponse Alibabacloud_ICE20201109::Client::createMediaLiveChannelWithOptions(shared_ptr<CreateMediaLiveChannelRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateMediaLiveChannelShrinkRequest> request = make_shared<CreateMediaLiveChannelShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<CreateMediaLiveChannelRequestAudioSettings>>(tmpReq->audioSettings)) {
    request->audioSettingsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->audioSettings, make_shared<string>("AudioSettings"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateMediaLiveChannelRequestInputAttachments>>(tmpReq->inputAttachments)) {
    request->inputAttachmentsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->inputAttachments, make_shared<string>("InputAttachments"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateMediaLiveChannelRequestOutputGroups>>(tmpReq->outputGroups)) {
    request->outputGroupsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->outputGroups, make_shared<string>("OutputGroups"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateMediaLiveChannelRequestVideoSettings>>(tmpReq->videoSettings)) {
    request->videoSettingsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->videoSettings, make_shared<string>("VideoSettings"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->audioSettingsShrink)) {
    body->insert(pair<string, string>("AudioSettings", *request->audioSettingsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputAttachmentsShrink)) {
    body->insert(pair<string, string>("InputAttachments", *request->inputAttachmentsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outputGroupsShrink)) {
    body->insert(pair<string, string>("OutputGroups", *request->outputGroupsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->videoSettingsShrink)) {
    body->insert(pair<string, string>("VideoSettings", *request->videoSettingsShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateMediaLiveChannel"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateMediaLiveChannelResponse(callApi(params, req, runtime));
  }
  else {
    return CreateMediaLiveChannelResponse(execute(params, req, runtime));
  }
}

CreateMediaLiveChannelResponse Alibabacloud_ICE20201109::Client::createMediaLiveChannel(shared_ptr<CreateMediaLiveChannelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createMediaLiveChannelWithOptions(request, runtime);
}

CreateMediaLiveInputResponse Alibabacloud_ICE20201109::Client::createMediaLiveInputWithOptions(shared_ptr<CreateMediaLiveInputRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateMediaLiveInputShrinkRequest> request = make_shared<CreateMediaLiveInputShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<CreateMediaLiveInputRequestInputSettings>>(tmpReq->inputSettings)) {
    request->inputSettingsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->inputSettings, make_shared<string>("InputSettings"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->securityGroupIds)) {
    request->securityGroupIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->securityGroupIds, make_shared<string>("SecurityGroupIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->inputSettingsShrink)) {
    body->insert(pair<string, string>("InputSettings", *request->inputSettingsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityGroupIdsShrink)) {
    body->insert(pair<string, string>("SecurityGroupIds", *request->securityGroupIdsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    body->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateMediaLiveInput"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateMediaLiveInputResponse(callApi(params, req, runtime));
  }
  else {
    return CreateMediaLiveInputResponse(execute(params, req, runtime));
  }
}

CreateMediaLiveInputResponse Alibabacloud_ICE20201109::Client::createMediaLiveInput(shared_ptr<CreateMediaLiveInputRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createMediaLiveInputWithOptions(request, runtime);
}

CreateMediaLiveInputSecurityGroupResponse Alibabacloud_ICE20201109::Client::createMediaLiveInputSecurityGroupWithOptions(shared_ptr<CreateMediaLiveInputSecurityGroupRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateMediaLiveInputSecurityGroupShrinkRequest> request = make_shared<CreateMediaLiveInputSecurityGroupShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->whitelistRules)) {
    request->whitelistRulesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->whitelistRules, make_shared<string>("WhitelistRules"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->whitelistRulesShrink)) {
    body->insert(pair<string, string>("WhitelistRules", *request->whitelistRulesShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateMediaLiveInputSecurityGroup"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateMediaLiveInputSecurityGroupResponse(callApi(params, req, runtime));
  }
  else {
    return CreateMediaLiveInputSecurityGroupResponse(execute(params, req, runtime));
  }
}

CreateMediaLiveInputSecurityGroupResponse Alibabacloud_ICE20201109::Client::createMediaLiveInputSecurityGroup(shared_ptr<CreateMediaLiveInputSecurityGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createMediaLiveInputSecurityGroupWithOptions(request, runtime);
}

CreatePipelineResponse Alibabacloud_ICE20201109::Client::createPipelineWithOptions(shared_ptr<CreatePipelineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->priority)) {
    query->insert(pair<string, long>("Priority", *request->priority));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->speed)) {
    query->insert(pair<string, string>("Speed", *request->speed));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreatePipeline"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreatePipelineResponse(callApi(params, req, runtime));
  }
  else {
    return CreatePipelineResponse(execute(params, req, runtime));
  }
}

CreatePipelineResponse Alibabacloud_ICE20201109::Client::createPipeline(shared_ptr<CreatePipelineRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createPipelineWithOptions(request, runtime);
}

CreateProgramResponse Alibabacloud_ICE20201109::Client::createProgramWithOptions(shared_ptr<CreateProgramRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->adBreaks)) {
    query->insert(pair<string, string>("AdBreaks", *request->adBreaks));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->channelName)) {
    query->insert(pair<string, string>("ChannelName", *request->channelName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clipRange)) {
    query->insert(pair<string, string>("ClipRange", *request->clipRange));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->programName)) {
    query->insert(pair<string, string>("ProgramName", *request->programName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceLocationName)) {
    query->insert(pair<string, string>("SourceLocationName", *request->sourceLocationName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceName)) {
    query->insert(pair<string, string>("SourceName", *request->sourceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceType)) {
    query->insert(pair<string, string>("SourceType", *request->sourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->transition)) {
    query->insert(pair<string, string>("Transition", *request->transition));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateProgram"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateProgramResponse(callApi(params, req, runtime));
  }
  else {
    return CreateProgramResponse(execute(params, req, runtime));
  }
}

CreateProgramResponse Alibabacloud_ICE20201109::Client::createProgram(shared_ptr<CreateProgramRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createProgramWithOptions(request, runtime);
}

CreateSearchIndexResponse Alibabacloud_ICE20201109::Client::createSearchIndexWithOptions(shared_ptr<CreateSearchIndexRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->indexConfig)) {
    query->insert(pair<string, string>("IndexConfig", *request->indexConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->indexStatus)) {
    query->insert(pair<string, string>("IndexStatus", *request->indexStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->indexType)) {
    query->insert(pair<string, string>("IndexType", *request->indexType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchLibName)) {
    query->insert(pair<string, string>("SearchLibName", *request->searchLibName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateSearchIndex"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateSearchIndexResponse(callApi(params, req, runtime));
  }
  else {
    return CreateSearchIndexResponse(execute(params, req, runtime));
  }
}

CreateSearchIndexResponse Alibabacloud_ICE20201109::Client::createSearchIndex(shared_ptr<CreateSearchIndexRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSearchIndexWithOptions(request, runtime);
}

CreateSearchLibResponse Alibabacloud_ICE20201109::Client::createSearchLibWithOptions(shared_ptr<CreateSearchLibRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->searchLibName)) {
    query->insert(pair<string, string>("SearchLibName", *request->searchLibName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateSearchLib"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateSearchLibResponse(callApi(params, req, runtime));
  }
  else {
    return CreateSearchLibResponse(execute(params, req, runtime));
  }
}

CreateSearchLibResponse Alibabacloud_ICE20201109::Client::createSearchLib(shared_ptr<CreateSearchLibRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSearchLibWithOptions(request, runtime);
}

CreateSourceResponse Alibabacloud_ICE20201109::Client::createSourceWithOptions(shared_ptr<CreateSourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->httpPackageConfigurations)) {
    query->insert(pair<string, string>("HttpPackageConfigurations", *request->httpPackageConfigurations));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceLocationName)) {
    query->insert(pair<string, string>("SourceLocationName", *request->sourceLocationName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceName)) {
    query->insert(pair<string, string>("SourceName", *request->sourceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceType)) {
    query->insert(pair<string, string>("SourceType", *request->sourceType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateSource"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateSourceResponse(callApi(params, req, runtime));
  }
  else {
    return CreateSourceResponse(execute(params, req, runtime));
  }
}

CreateSourceResponse Alibabacloud_ICE20201109::Client::createSource(shared_ptr<CreateSourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSourceWithOptions(request, runtime);
}

CreateSourceLocationResponse Alibabacloud_ICE20201109::Client::createSourceLocationWithOptions(shared_ptr<CreateSourceLocationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->baseUrl)) {
    query->insert(pair<string, string>("BaseUrl", *request->baseUrl));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableSegmentDelivery)) {
    query->insert(pair<string, bool>("EnableSegmentDelivery", *request->enableSegmentDelivery));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->segmentDeliveryUrl)) {
    query->insert(pair<string, string>("SegmentDeliveryUrl", *request->segmentDeliveryUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceLocationName)) {
    query->insert(pair<string, string>("SourceLocationName", *request->sourceLocationName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateSourceLocation"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateSourceLocationResponse(callApi(params, req, runtime));
  }
  else {
    return CreateSourceLocationResponse(execute(params, req, runtime));
  }
}

CreateSourceLocationResponse Alibabacloud_ICE20201109::Client::createSourceLocation(shared_ptr<CreateSourceLocationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createSourceLocationWithOptions(request, runtime);
}

CreateUploadMediaResponse Alibabacloud_ICE20201109::Client::createUploadMediaWithOptions(shared_ptr<CreateUploadMediaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->entityId)) {
    query->insert(pair<string, string>("EntityId", *request->entityId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileInfo)) {
    query->insert(pair<string, string>("FileInfo", *request->fileInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaMetaData)) {
    query->insert(pair<string, string>("MediaMetaData", *request->mediaMetaData));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->postProcessConfig)) {
    query->insert(pair<string, string>("PostProcessConfig", *request->postProcessConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uploadTargetConfig)) {
    query->insert(pair<string, string>("UploadTargetConfig", *request->uploadTargetConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    query->insert(pair<string, string>("UserData", *request->userData));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateUploadMedia"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateUploadMediaResponse(callApi(params, req, runtime));
  }
  else {
    return CreateUploadMediaResponse(execute(params, req, runtime));
  }
}

CreateUploadMediaResponse Alibabacloud_ICE20201109::Client::createUploadMedia(shared_ptr<CreateUploadMediaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createUploadMediaWithOptions(request, runtime);
}

CreateUploadStreamResponse Alibabacloud_ICE20201109::Client::createUploadStreamWithOptions(shared_ptr<CreateUploadStreamRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->definition)) {
    query->insert(pair<string, string>("Definition", *request->definition));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileExtension)) {
    query->insert(pair<string, string>("FileExtension", *request->fileExtension));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->HDRType)) {
    query->insert(pair<string, string>("HDRType", *request->HDRType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaId)) {
    query->insert(pair<string, string>("MediaId", *request->mediaId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    query->insert(pair<string, string>("UserData", *request->userData));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateUploadStream"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateUploadStreamResponse(callApi(params, req, runtime));
  }
  else {
    return CreateUploadStreamResponse(execute(params, req, runtime));
  }
}

CreateUploadStreamResponse Alibabacloud_ICE20201109::Client::createUploadStream(shared_ptr<CreateUploadStreamRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createUploadStreamWithOptions(request, runtime);
}

CreateVodPackagingAssetResponse Alibabacloud_ICE20201109::Client::createVodPackagingAssetWithOptions(shared_ptr<CreateVodPackagingAssetRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateVodPackagingAssetShrinkRequest> request = make_shared<CreateVodPackagingAssetShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CreateVodPackagingAssetRequestInput>(tmpReq->input)) {
    request->inputShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->input, make_shared<string>("Input"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->assetName)) {
    query->insert(pair<string, string>("AssetName", *request->assetName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contentId)) {
    query->insert(pair<string, string>("ContentId", *request->contentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupName)) {
    query->insert(pair<string, string>("GroupName", *request->groupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputShrink)) {
    query->insert(pair<string, string>("Input", *request->inputShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateVodPackagingAsset"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateVodPackagingAssetResponse(callApi(params, req, runtime));
  }
  else {
    return CreateVodPackagingAssetResponse(execute(params, req, runtime));
  }
}

CreateVodPackagingAssetResponse Alibabacloud_ICE20201109::Client::createVodPackagingAsset(shared_ptr<CreateVodPackagingAssetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createVodPackagingAssetWithOptions(request, runtime);
}

CreateVodPackagingConfigurationResponse Alibabacloud_ICE20201109::Client::createVodPackagingConfigurationWithOptions(shared_ptr<CreateVodPackagingConfigurationRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateVodPackagingConfigurationShrinkRequest> request = make_shared<CreateVodPackagingConfigurationShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CreateVodPackagingConfigurationRequestPackageConfig>(tmpReq->packageConfig)) {
    request->packageConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->packageConfig, make_shared<string>("PackageConfig"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->configurationName)) {
    query->insert(pair<string, string>("ConfigurationName", *request->configurationName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupName)) {
    query->insert(pair<string, string>("GroupName", *request->groupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->packageConfigShrink)) {
    query->insert(pair<string, string>("PackageConfig", *request->packageConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->protocol)) {
    query->insert(pair<string, string>("Protocol", *request->protocol));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateVodPackagingConfiguration"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateVodPackagingConfigurationResponse(callApi(params, req, runtime));
  }
  else {
    return CreateVodPackagingConfigurationResponse(execute(params, req, runtime));
  }
}

CreateVodPackagingConfigurationResponse Alibabacloud_ICE20201109::Client::createVodPackagingConfiguration(shared_ptr<CreateVodPackagingConfigurationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createVodPackagingConfigurationWithOptions(request, runtime);
}

CreateVodPackagingGroupResponse Alibabacloud_ICE20201109::Client::createVodPackagingGroupWithOptions(shared_ptr<CreateVodPackagingGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupName)) {
    query->insert(pair<string, string>("GroupName", *request->groupName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateVodPackagingGroup"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return CreateVodPackagingGroupResponse(callApi(params, req, runtime));
  }
  else {
    return CreateVodPackagingGroupResponse(execute(params, req, runtime));
  }
}

CreateVodPackagingGroupResponse Alibabacloud_ICE20201109::Client::createVodPackagingGroup(shared_ptr<CreateVodPackagingGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createVodPackagingGroupWithOptions(request, runtime);
}

DecryptKMSDataKeyResponse Alibabacloud_ICE20201109::Client::decryptKMSDataKeyWithOptions(shared_ptr<DecryptKMSDataKeyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->ciphertextBlob)) {
    query->insert(pair<string, string>("CiphertextBlob", *request->ciphertextBlob));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DecryptKMSDataKey"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DecryptKMSDataKeyResponse(callApi(params, req, runtime));
  }
  else {
    return DecryptKMSDataKeyResponse(execute(params, req, runtime));
  }
}

DecryptKMSDataKeyResponse Alibabacloud_ICE20201109::Client::decryptKMSDataKey(shared_ptr<DecryptKMSDataKeyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return decryptKMSDataKeyWithOptions(request, runtime);
}

DeleteAIAgentDialogueResponse Alibabacloud_ICE20201109::Client::deleteAIAgentDialogueWithOptions(shared_ptr<DeleteAIAgentDialogueRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->dialogueId)) {
    query->insert(pair<string, string>("DialogueId", *request->dialogueId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionId)) {
    query->insert(pair<string, string>("SessionId", *request->sessionId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteAIAgentDialogue"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteAIAgentDialogueResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteAIAgentDialogueResponse(execute(params, req, runtime));
  }
}

DeleteAIAgentDialogueResponse Alibabacloud_ICE20201109::Client::deleteAIAgentDialogue(shared_ptr<DeleteAIAgentDialogueRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAIAgentDialogueWithOptions(request, runtime);
}

DeleteAdInsertionResponse Alibabacloud_ICE20201109::Client::deleteAdInsertionWithOptions(shared_ptr<DeleteAdInsertionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteAdInsertion"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteAdInsertionResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteAdInsertionResponse(execute(params, req, runtime));
  }
}

DeleteAdInsertionResponse Alibabacloud_ICE20201109::Client::deleteAdInsertion(shared_ptr<DeleteAdInsertionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAdInsertionWithOptions(request, runtime);
}

DeleteAvatarTrainingJobResponse Alibabacloud_ICE20201109::Client::deleteAvatarTrainingJobWithOptions(shared_ptr<DeleteAvatarTrainingJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteAvatarTrainingJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteAvatarTrainingJobResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteAvatarTrainingJobResponse(execute(params, req, runtime));
  }
}

DeleteAvatarTrainingJobResponse Alibabacloud_ICE20201109::Client::deleteAvatarTrainingJob(shared_ptr<DeleteAvatarTrainingJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAvatarTrainingJobWithOptions(request, runtime);
}

DeleteCategoryResponse Alibabacloud_ICE20201109::Client::deleteCategoryWithOptions(shared_ptr<DeleteCategoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->cateId)) {
    query->insert(pair<string, long>("CateId", *request->cateId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteCategory"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteCategoryResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteCategoryResponse(execute(params, req, runtime));
  }
}

DeleteCategoryResponse Alibabacloud_ICE20201109::Client::deleteCategory(shared_ptr<DeleteCategoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteCategoryWithOptions(request, runtime);
}

DeleteChannelResponse Alibabacloud_ICE20201109::Client::deleteChannelWithOptions(shared_ptr<DeleteChannelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->channelName)) {
    query->insert(pair<string, string>("ChannelName", *request->channelName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteChannel"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteChannelResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteChannelResponse(execute(params, req, runtime));
  }
}

DeleteChannelResponse Alibabacloud_ICE20201109::Client::deleteChannel(shared_ptr<DeleteChannelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteChannelWithOptions(request, runtime);
}

DeleteCustomTemplateResponse Alibabacloud_ICE20201109::Client::deleteCustomTemplateWithOptions(shared_ptr<DeleteCustomTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    query->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteCustomTemplate"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteCustomTemplateResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteCustomTemplateResponse(execute(params, req, runtime));
  }
}

DeleteCustomTemplateResponse Alibabacloud_ICE20201109::Client::deleteCustomTemplate(shared_ptr<DeleteCustomTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteCustomTemplateWithOptions(request, runtime);
}

DeleteCustomizedVoiceJobResponse Alibabacloud_ICE20201109::Client::deleteCustomizedVoiceJobWithOptions(shared_ptr<DeleteCustomizedVoiceJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteCustomizedVoiceJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteCustomizedVoiceJobResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteCustomizedVoiceJobResponse(execute(params, req, runtime));
  }
}

DeleteCustomizedVoiceJobResponse Alibabacloud_ICE20201109::Client::deleteCustomizedVoiceJob(shared_ptr<DeleteCustomizedVoiceJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteCustomizedVoiceJobWithOptions(request, runtime);
}

DeleteDNADBResponse Alibabacloud_ICE20201109::Client::deleteDNADBWithOptions(shared_ptr<DeleteDNADBRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->DBId)) {
    query->insert(pair<string, string>("DBId", *request->DBId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDNADB"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteDNADBResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteDNADBResponse(execute(params, req, runtime));
  }
}

DeleteDNADBResponse Alibabacloud_ICE20201109::Client::deleteDNADB(shared_ptr<DeleteDNADBRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDNADBWithOptions(request, runtime);
}

DeleteDNAFilesResponse Alibabacloud_ICE20201109::Client::deleteDNAFilesWithOptions(shared_ptr<DeleteDNAFilesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->DBId)) {
    query->insert(pair<string, string>("DBId", *request->DBId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->primaryKeys)) {
    query->insert(pair<string, string>("PrimaryKeys", *request->primaryKeys));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteDNAFiles"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteDNAFilesResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteDNAFilesResponse(execute(params, req, runtime));
  }
}

DeleteDNAFilesResponse Alibabacloud_ICE20201109::Client::deleteDNAFiles(shared_ptr<DeleteDNAFilesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteDNAFilesWithOptions(request, runtime);
}

DeleteEditingProjectMaterialsResponse Alibabacloud_ICE20201109::Client::deleteEditingProjectMaterialsWithOptions(shared_ptr<DeleteEditingProjectMaterialsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->materialIds)) {
    query->insert(pair<string, string>("MaterialIds", *request->materialIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->materialType)) {
    query->insert(pair<string, string>("MaterialType", *request->materialType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    query->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteEditingProjectMaterials"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteEditingProjectMaterialsResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteEditingProjectMaterialsResponse(execute(params, req, runtime));
  }
}

DeleteEditingProjectMaterialsResponse Alibabacloud_ICE20201109::Client::deleteEditingProjectMaterials(shared_ptr<DeleteEditingProjectMaterialsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteEditingProjectMaterialsWithOptions(request, runtime);
}

DeleteEditingProjectsResponse Alibabacloud_ICE20201109::Client::deleteEditingProjectsWithOptions(shared_ptr<DeleteEditingProjectsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->projectIds)) {
    query->insert(pair<string, string>("ProjectIds", *request->projectIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteEditingProjects"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteEditingProjectsResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteEditingProjectsResponse(execute(params, req, runtime));
  }
}

DeleteEditingProjectsResponse Alibabacloud_ICE20201109::Client::deleteEditingProjects(shared_ptr<DeleteEditingProjectsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteEditingProjectsWithOptions(request, runtime);
}

DeleteLivePackageChannelResponse Alibabacloud_ICE20201109::Client::deleteLivePackageChannelWithOptions(shared_ptr<DeleteLivePackageChannelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->channelName)) {
    query->insert(pair<string, string>("ChannelName", *request->channelName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupName)) {
    query->insert(pair<string, string>("GroupName", *request->groupName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteLivePackageChannel"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteLivePackageChannelResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteLivePackageChannelResponse(execute(params, req, runtime));
  }
}

DeleteLivePackageChannelResponse Alibabacloud_ICE20201109::Client::deleteLivePackageChannel(shared_ptr<DeleteLivePackageChannelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteLivePackageChannelWithOptions(request, runtime);
}

DeleteLivePackageChannelGroupResponse Alibabacloud_ICE20201109::Client::deleteLivePackageChannelGroupWithOptions(shared_ptr<DeleteLivePackageChannelGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->groupName)) {
    query->insert(pair<string, string>("GroupName", *request->groupName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteLivePackageChannelGroup"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteLivePackageChannelGroupResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteLivePackageChannelGroupResponse(execute(params, req, runtime));
  }
}

DeleteLivePackageChannelGroupResponse Alibabacloud_ICE20201109::Client::deleteLivePackageChannelGroup(shared_ptr<DeleteLivePackageChannelGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteLivePackageChannelGroupWithOptions(request, runtime);
}

DeleteLivePackageOriginEndpointResponse Alibabacloud_ICE20201109::Client::deleteLivePackageOriginEndpointWithOptions(shared_ptr<DeleteLivePackageOriginEndpointRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->channelName)) {
    query->insert(pair<string, string>("ChannelName", *request->channelName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endpointName)) {
    query->insert(pair<string, string>("EndpointName", *request->endpointName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupName)) {
    query->insert(pair<string, string>("GroupName", *request->groupName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteLivePackageOriginEndpoint"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteLivePackageOriginEndpointResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteLivePackageOriginEndpointResponse(execute(params, req, runtime));
  }
}

DeleteLivePackageOriginEndpointResponse Alibabacloud_ICE20201109::Client::deleteLivePackageOriginEndpoint(shared_ptr<DeleteLivePackageOriginEndpointRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteLivePackageOriginEndpointWithOptions(request, runtime);
}

DeleteLiveRecordFilesResponse Alibabacloud_ICE20201109::Client::deleteLiveRecordFilesWithOptions(shared_ptr<DeleteLiveRecordFilesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->recordIds)) {
    query->insert(pair<string, vector<string>>("RecordIds", *request->recordIds));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->removeFile)) {
    query->insert(pair<string, bool>("RemoveFile", *request->removeFile));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteLiveRecordFiles"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteLiveRecordFilesResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteLiveRecordFilesResponse(execute(params, req, runtime));
  }
}

DeleteLiveRecordFilesResponse Alibabacloud_ICE20201109::Client::deleteLiveRecordFiles(shared_ptr<DeleteLiveRecordFilesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteLiveRecordFilesWithOptions(request, runtime);
}

DeleteLiveRecordTemplateResponse Alibabacloud_ICE20201109::Client::deleteLiveRecordTemplateWithOptions(shared_ptr<DeleteLiveRecordTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    query->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteLiveRecordTemplate"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteLiveRecordTemplateResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteLiveRecordTemplateResponse(execute(params, req, runtime));
  }
}

DeleteLiveRecordTemplateResponse Alibabacloud_ICE20201109::Client::deleteLiveRecordTemplate(shared_ptr<DeleteLiveRecordTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteLiveRecordTemplateWithOptions(request, runtime);
}

DeleteLiveSnapshotFilesResponse Alibabacloud_ICE20201109::Client::deleteLiveSnapshotFilesWithOptions(shared_ptr<DeleteLiveSnapshotFilesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DeleteLiveSnapshotFilesShrinkRequest> request = make_shared<DeleteLiveSnapshotFilesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<long>>(tmpReq->createTimestampList)) {
    request->createTimestampListShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->createTimestampList, make_shared<string>("CreateTimestampList"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->createTimestampListShrink)) {
    query->insert(pair<string, string>("CreateTimestampList", *request->createTimestampListShrink));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->deleteOriginalFile)) {
    query->insert(pair<string, bool>("DeleteOriginalFile", *request->deleteOriginalFile));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteLiveSnapshotFiles"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteLiveSnapshotFilesResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteLiveSnapshotFilesResponse(execute(params, req, runtime));
  }
}

DeleteLiveSnapshotFilesResponse Alibabacloud_ICE20201109::Client::deleteLiveSnapshotFiles(shared_ptr<DeleteLiveSnapshotFilesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteLiveSnapshotFilesWithOptions(request, runtime);
}

DeleteLiveSnapshotTemplateResponse Alibabacloud_ICE20201109::Client::deleteLiveSnapshotTemplateWithOptions(shared_ptr<DeleteLiveSnapshotTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    body->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteLiveSnapshotTemplate"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteLiveSnapshotTemplateResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteLiveSnapshotTemplateResponse(execute(params, req, runtime));
  }
}

DeleteLiveSnapshotTemplateResponse Alibabacloud_ICE20201109::Client::deleteLiveSnapshotTemplate(shared_ptr<DeleteLiveSnapshotTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteLiveSnapshotTemplateWithOptions(request, runtime);
}

DeleteLiveTranscodeJobResponse Alibabacloud_ICE20201109::Client::deleteLiveTranscodeJobWithOptions(shared_ptr<DeleteLiveTranscodeJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteLiveTranscodeJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteLiveTranscodeJobResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteLiveTranscodeJobResponse(execute(params, req, runtime));
  }
}

DeleteLiveTranscodeJobResponse Alibabacloud_ICE20201109::Client::deleteLiveTranscodeJob(shared_ptr<DeleteLiveTranscodeJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteLiveTranscodeJobWithOptions(request, runtime);
}

DeleteLiveTranscodeTemplateResponse Alibabacloud_ICE20201109::Client::deleteLiveTranscodeTemplateWithOptions(shared_ptr<DeleteLiveTranscodeTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    query->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteLiveTranscodeTemplate"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteLiveTranscodeTemplateResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteLiveTranscodeTemplateResponse(execute(params, req, runtime));
  }
}

DeleteLiveTranscodeTemplateResponse Alibabacloud_ICE20201109::Client::deleteLiveTranscodeTemplate(shared_ptr<DeleteLiveTranscodeTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteLiveTranscodeTemplateWithOptions(request, runtime);
}

DeleteMediaConnectFlowResponse Alibabacloud_ICE20201109::Client::deleteMediaConnectFlowWithOptions(shared_ptr<DeleteMediaConnectFlowRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->flowId)) {
    query->insert(pair<string, string>("FlowId", *request->flowId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteMediaConnectFlow"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteMediaConnectFlowResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteMediaConnectFlowResponse(execute(params, req, runtime));
  }
}

DeleteMediaConnectFlowResponse Alibabacloud_ICE20201109::Client::deleteMediaConnectFlow(shared_ptr<DeleteMediaConnectFlowRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteMediaConnectFlowWithOptions(request, runtime);
}

DeleteMediaConnectFlowInputResponse Alibabacloud_ICE20201109::Client::deleteMediaConnectFlowInputWithOptions(shared_ptr<DeleteMediaConnectFlowInputRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->flowId)) {
    query->insert(pair<string, string>("FlowId", *request->flowId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteMediaConnectFlowInput"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteMediaConnectFlowInputResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteMediaConnectFlowInputResponse(execute(params, req, runtime));
  }
}

DeleteMediaConnectFlowInputResponse Alibabacloud_ICE20201109::Client::deleteMediaConnectFlowInput(shared_ptr<DeleteMediaConnectFlowInputRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteMediaConnectFlowInputWithOptions(request, runtime);
}

DeleteMediaConnectFlowOutputResponse Alibabacloud_ICE20201109::Client::deleteMediaConnectFlowOutputWithOptions(shared_ptr<DeleteMediaConnectFlowOutputRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->flowId)) {
    query->insert(pair<string, string>("FlowId", *request->flowId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outputName)) {
    query->insert(pair<string, string>("OutputName", *request->outputName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteMediaConnectFlowOutput"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteMediaConnectFlowOutputResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteMediaConnectFlowOutputResponse(execute(params, req, runtime));
  }
}

DeleteMediaConnectFlowOutputResponse Alibabacloud_ICE20201109::Client::deleteMediaConnectFlowOutput(shared_ptr<DeleteMediaConnectFlowOutputRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteMediaConnectFlowOutputWithOptions(request, runtime);
}

DeleteMediaFromSearchLibResponse Alibabacloud_ICE20201109::Client::deleteMediaFromSearchLibWithOptions(shared_ptr<DeleteMediaFromSearchLibRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaId)) {
    query->insert(pair<string, string>("MediaId", *request->mediaId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->msgBody)) {
    query->insert(pair<string, string>("MsgBody", *request->msgBody));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchLibName)) {
    query->insert(pair<string, string>("SearchLibName", *request->searchLibName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteMediaFromSearchLib"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteMediaFromSearchLibResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteMediaFromSearchLibResponse(execute(params, req, runtime));
  }
}

DeleteMediaFromSearchLibResponse Alibabacloud_ICE20201109::Client::deleteMediaFromSearchLib(shared_ptr<DeleteMediaFromSearchLibRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteMediaFromSearchLibWithOptions(request, runtime);
}

DeleteMediaInfosResponse Alibabacloud_ICE20201109::Client::deleteMediaInfosWithOptions(shared_ptr<DeleteMediaInfosRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->deletePhysicalFiles)) {
    query->insert(pair<string, bool>("DeletePhysicalFiles", *request->deletePhysicalFiles));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputURLs)) {
    query->insert(pair<string, string>("InputURLs", *request->inputURLs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaIds)) {
    query->insert(pair<string, string>("MediaIds", *request->mediaIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteMediaInfos"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteMediaInfosResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteMediaInfosResponse(execute(params, req, runtime));
  }
}

DeleteMediaInfosResponse Alibabacloud_ICE20201109::Client::deleteMediaInfos(shared_ptr<DeleteMediaInfosRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteMediaInfosWithOptions(request, runtime);
}

DeleteMediaLiveChannelResponse Alibabacloud_ICE20201109::Client::deleteMediaLiveChannelWithOptions(shared_ptr<DeleteMediaLiveChannelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->channelId)) {
    body->insert(pair<string, string>("ChannelId", *request->channelId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteMediaLiveChannel"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteMediaLiveChannelResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteMediaLiveChannelResponse(execute(params, req, runtime));
  }
}

DeleteMediaLiveChannelResponse Alibabacloud_ICE20201109::Client::deleteMediaLiveChannel(shared_ptr<DeleteMediaLiveChannelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteMediaLiveChannelWithOptions(request, runtime);
}

DeleteMediaLiveInputResponse Alibabacloud_ICE20201109::Client::deleteMediaLiveInputWithOptions(shared_ptr<DeleteMediaLiveInputRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->inputId)) {
    body->insert(pair<string, string>("InputId", *request->inputId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteMediaLiveInput"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteMediaLiveInputResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteMediaLiveInputResponse(execute(params, req, runtime));
  }
}

DeleteMediaLiveInputResponse Alibabacloud_ICE20201109::Client::deleteMediaLiveInput(shared_ptr<DeleteMediaLiveInputRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteMediaLiveInputWithOptions(request, runtime);
}

DeleteMediaLiveInputSecurityGroupResponse Alibabacloud_ICE20201109::Client::deleteMediaLiveInputSecurityGroupWithOptions(shared_ptr<DeleteMediaLiveInputSecurityGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->securityGroupId)) {
    body->insert(pair<string, string>("SecurityGroupId", *request->securityGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteMediaLiveInputSecurityGroup"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteMediaLiveInputSecurityGroupResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteMediaLiveInputSecurityGroupResponse(execute(params, req, runtime));
  }
}

DeleteMediaLiveInputSecurityGroupResponse Alibabacloud_ICE20201109::Client::deleteMediaLiveInputSecurityGroup(shared_ptr<DeleteMediaLiveInputSecurityGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteMediaLiveInputSecurityGroupWithOptions(request, runtime);
}

DeleteMediaMarksResponse Alibabacloud_ICE20201109::Client::deleteMediaMarksWithOptions(shared_ptr<DeleteMediaMarksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaId)) {
    query->insert(pair<string, string>("MediaId", *request->mediaId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaMarkIds)) {
    query->insert(pair<string, string>("MediaMarkIds", *request->mediaMarkIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteMediaMarks"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteMediaMarksResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteMediaMarksResponse(execute(params, req, runtime));
  }
}

DeleteMediaMarksResponse Alibabacloud_ICE20201109::Client::deleteMediaMarks(shared_ptr<DeleteMediaMarksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteMediaMarksWithOptions(request, runtime);
}

DeletePipelineResponse Alibabacloud_ICE20201109::Client::deletePipelineWithOptions(shared_ptr<DeletePipelineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->pipelineId)) {
    query->insert(pair<string, string>("PipelineId", *request->pipelineId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeletePipeline"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeletePipelineResponse(callApi(params, req, runtime));
  }
  else {
    return DeletePipelineResponse(execute(params, req, runtime));
  }
}

DeletePipelineResponse Alibabacloud_ICE20201109::Client::deletePipeline(shared_ptr<DeletePipelineRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deletePipelineWithOptions(request, runtime);
}

DeletePlayInfoResponse Alibabacloud_ICE20201109::Client::deletePlayInfoWithOptions(shared_ptr<DeletePlayInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->deletePhysicalFiles)) {
    query->insert(pair<string, bool>("DeletePhysicalFiles", *request->deletePhysicalFiles));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileURLs)) {
    query->insert(pair<string, string>("FileURLs", *request->fileURLs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaId)) {
    query->insert(pair<string, string>("MediaId", *request->mediaId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeletePlayInfo"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeletePlayInfoResponse(callApi(params, req, runtime));
  }
  else {
    return DeletePlayInfoResponse(execute(params, req, runtime));
  }
}

DeletePlayInfoResponse Alibabacloud_ICE20201109::Client::deletePlayInfo(shared_ptr<DeletePlayInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deletePlayInfoWithOptions(request, runtime);
}

DeleteProgramResponse Alibabacloud_ICE20201109::Client::deleteProgramWithOptions(shared_ptr<DeleteProgramRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->channelName)) {
    query->insert(pair<string, string>("ChannelName", *request->channelName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->programName)) {
    query->insert(pair<string, string>("ProgramName", *request->programName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteProgram"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteProgramResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteProgramResponse(execute(params, req, runtime));
  }
}

DeleteProgramResponse Alibabacloud_ICE20201109::Client::deleteProgram(shared_ptr<DeleteProgramRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteProgramWithOptions(request, runtime);
}

DeleteSmartJobResponse Alibabacloud_ICE20201109::Client::deleteSmartJobWithOptions(shared_ptr<DeleteSmartJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteSmartJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteSmartJobResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteSmartJobResponse(execute(params, req, runtime));
  }
}

DeleteSmartJobResponse Alibabacloud_ICE20201109::Client::deleteSmartJob(shared_ptr<DeleteSmartJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteSmartJobWithOptions(request, runtime);
}

DeleteSourceResponse Alibabacloud_ICE20201109::Client::deleteSourceWithOptions(shared_ptr<DeleteSourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->softDelete)) {
    query->insert(pair<string, bool>("SoftDelete", *request->softDelete));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceLocationName)) {
    query->insert(pair<string, string>("SourceLocationName", *request->sourceLocationName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceName)) {
    query->insert(pair<string, string>("SourceName", *request->sourceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceType)) {
    query->insert(pair<string, string>("SourceType", *request->sourceType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteSource"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteSourceResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteSourceResponse(execute(params, req, runtime));
  }
}

DeleteSourceResponse Alibabacloud_ICE20201109::Client::deleteSource(shared_ptr<DeleteSourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteSourceWithOptions(request, runtime);
}

DeleteSourceLocationResponse Alibabacloud_ICE20201109::Client::deleteSourceLocationWithOptions(shared_ptr<DeleteSourceLocationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->softDelete)) {
    query->insert(pair<string, bool>("SoftDelete", *request->softDelete));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceLocationName)) {
    query->insert(pair<string, string>("SourceLocationName", *request->sourceLocationName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteSourceLocation"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteSourceLocationResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteSourceLocationResponse(execute(params, req, runtime));
  }
}

DeleteSourceLocationResponse Alibabacloud_ICE20201109::Client::deleteSourceLocation(shared_ptr<DeleteSourceLocationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteSourceLocationWithOptions(request, runtime);
}

DeleteTemplateResponse Alibabacloud_ICE20201109::Client::deleteTemplateWithOptions(shared_ptr<DeleteTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteTemplate"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteTemplateResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteTemplateResponse(execute(params, req, runtime));
  }
}

DeleteTemplateResponse Alibabacloud_ICE20201109::Client::deleteTemplate(shared_ptr<DeleteTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteTemplateWithOptions(request, runtime);
}

DeleteVodPackagingAssetResponse Alibabacloud_ICE20201109::Client::deleteVodPackagingAssetWithOptions(shared_ptr<DeleteVodPackagingAssetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->assetName)) {
    query->insert(pair<string, string>("AssetName", *request->assetName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteVodPackagingAsset"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteVodPackagingAssetResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteVodPackagingAssetResponse(execute(params, req, runtime));
  }
}

DeleteVodPackagingAssetResponse Alibabacloud_ICE20201109::Client::deleteVodPackagingAsset(shared_ptr<DeleteVodPackagingAssetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteVodPackagingAssetWithOptions(request, runtime);
}

DeleteVodPackagingConfigurationResponse Alibabacloud_ICE20201109::Client::deleteVodPackagingConfigurationWithOptions(shared_ptr<DeleteVodPackagingConfigurationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->configurationName)) {
    query->insert(pair<string, string>("ConfigurationName", *request->configurationName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteVodPackagingConfiguration"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteVodPackagingConfigurationResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteVodPackagingConfigurationResponse(execute(params, req, runtime));
  }
}

DeleteVodPackagingConfigurationResponse Alibabacloud_ICE20201109::Client::deleteVodPackagingConfiguration(shared_ptr<DeleteVodPackagingConfigurationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteVodPackagingConfigurationWithOptions(request, runtime);
}

DeleteVodPackagingGroupResponse Alibabacloud_ICE20201109::Client::deleteVodPackagingGroupWithOptions(shared_ptr<DeleteVodPackagingGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->groupName)) {
    query->insert(pair<string, string>("GroupName", *request->groupName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteVodPackagingGroup"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DeleteVodPackagingGroupResponse(callApi(params, req, runtime));
  }
  else {
    return DeleteVodPackagingGroupResponse(execute(params, req, runtime));
  }
}

DeleteVodPackagingGroupResponse Alibabacloud_ICE20201109::Client::deleteVodPackagingGroup(shared_ptr<DeleteVodPackagingGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteVodPackagingGroupWithOptions(request, runtime);
}

DescribeAIAgentInstanceResponse Alibabacloud_ICE20201109::Client::describeAIAgentInstanceWithOptions(shared_ptr<DescribeAIAgentInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAIAgentInstance"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeAIAgentInstanceResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeAIAgentInstanceResponse(execute(params, req, runtime));
  }
}

DescribeAIAgentInstanceResponse Alibabacloud_ICE20201109::Client::describeAIAgentInstance(shared_ptr<DescribeAIAgentInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAIAgentInstanceWithOptions(request, runtime);
}

DescribeMeterImsEditUsageResponse Alibabacloud_ICE20201109::Client::describeMeterImsEditUsageWithOptions(shared_ptr<DescribeMeterImsEditUsageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->endTs)) {
    query->insert(pair<string, long>("EndTs", *request->endTs));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->interval)) {
    query->insert(pair<string, long>("Interval", *request->interval));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("Region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTs)) {
    query->insert(pair<string, long>("StartTs", *request->startTs));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeMeterImsEditUsage"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeMeterImsEditUsageResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeMeterImsEditUsageResponse(execute(params, req, runtime));
  }
}

DescribeMeterImsEditUsageResponse Alibabacloud_ICE20201109::Client::describeMeterImsEditUsage(shared_ptr<DescribeMeterImsEditUsageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeMeterImsEditUsageWithOptions(request, runtime);
}

DescribeMeterImsMediaConvertUHDUsageResponse Alibabacloud_ICE20201109::Client::describeMeterImsMediaConvertUHDUsageWithOptions(shared_ptr<DescribeMeterImsMediaConvertUHDUsageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->endTs)) {
    query->insert(pair<string, long>("EndTs", *request->endTs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->interval)) {
    query->insert(pair<string, string>("Interval", *request->interval));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTs)) {
    query->insert(pair<string, long>("StartTs", *request->startTs));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeMeterImsMediaConvertUHDUsage"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeMeterImsMediaConvertUHDUsageResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeMeterImsMediaConvertUHDUsageResponse(execute(params, req, runtime));
  }
}

DescribeMeterImsMediaConvertUHDUsageResponse Alibabacloud_ICE20201109::Client::describeMeterImsMediaConvertUHDUsage(shared_ptr<DescribeMeterImsMediaConvertUHDUsageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeMeterImsMediaConvertUHDUsageWithOptions(request, runtime);
}

DescribeMeterImsMediaConvertUsageResponse Alibabacloud_ICE20201109::Client::describeMeterImsMediaConvertUsageWithOptions(shared_ptr<DescribeMeterImsMediaConvertUsageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->endTs)) {
    query->insert(pair<string, long>("EndTs", *request->endTs));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->interval)) {
    query->insert(pair<string, long>("Interval", *request->interval));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("Region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTs)) {
    query->insert(pair<string, long>("StartTs", *request->startTs));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeMeterImsMediaConvertUsage"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeMeterImsMediaConvertUsageResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeMeterImsMediaConvertUsageResponse(execute(params, req, runtime));
  }
}

DescribeMeterImsMediaConvertUsageResponse Alibabacloud_ICE20201109::Client::describeMeterImsMediaConvertUsage(shared_ptr<DescribeMeterImsMediaConvertUsageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeMeterImsMediaConvertUsageWithOptions(request, runtime);
}

DescribeMeterImsMpsAiUsageResponse Alibabacloud_ICE20201109::Client::describeMeterImsMpsAiUsageWithOptions(shared_ptr<DescribeMeterImsMpsAiUsageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->endTs)) {
    query->insert(pair<string, long>("EndTs", *request->endTs));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->interval)) {
    query->insert(pair<string, long>("Interval", *request->interval));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("Region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTs)) {
    query->insert(pair<string, long>("StartTs", *request->startTs));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeMeterImsMpsAiUsage"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeMeterImsMpsAiUsageResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeMeterImsMpsAiUsageResponse(execute(params, req, runtime));
  }
}

DescribeMeterImsMpsAiUsageResponse Alibabacloud_ICE20201109::Client::describeMeterImsMpsAiUsage(shared_ptr<DescribeMeterImsMpsAiUsageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeMeterImsMpsAiUsageWithOptions(request, runtime);
}

DescribeMeterImsSummaryResponse Alibabacloud_ICE20201109::Client::describeMeterImsSummaryWithOptions(shared_ptr<DescribeMeterImsSummaryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->endTs)) {
    query->insert(pair<string, long>("EndTs", *request->endTs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("Region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTs)) {
    query->insert(pair<string, long>("StartTs", *request->startTs));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeMeterImsSummary"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeMeterImsSummaryResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeMeterImsSummaryResponse(execute(params, req, runtime));
  }
}

DescribeMeterImsSummaryResponse Alibabacloud_ICE20201109::Client::describeMeterImsSummary(shared_ptr<DescribeMeterImsSummaryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeMeterImsSummaryWithOptions(request, runtime);
}

DescribeNotifyConfigResponse Alibabacloud_ICE20201109::Client::describeNotifyConfigWithOptions(shared_ptr<DescribeNotifyConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->AIAgentId)) {
    query->insert(pair<string, string>("AIAgentId", *request->AIAgentId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeNotifyConfig"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeNotifyConfigResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeNotifyConfigResponse(execute(params, req, runtime));
  }
}

DescribeNotifyConfigResponse Alibabacloud_ICE20201109::Client::describeNotifyConfig(shared_ptr<DescribeNotifyConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeNotifyConfigWithOptions(request, runtime);
}

DescribePlayListResponse Alibabacloud_ICE20201109::Client::describePlayListWithOptions(shared_ptr<DescribePlayListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->beginTs)) {
    query->insert(pair<string, string>("BeginTs", *request->beginTs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTs)) {
    query->insert(pair<string, string>("EndTs", *request->endTs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderName)) {
    query->insert(pair<string, string>("OrderName", *request->orderName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderType)) {
    query->insert(pair<string, string>("OrderType", *request->orderType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->playType)) {
    query->insert(pair<string, string>("PlayType", *request->playType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->traceId)) {
    query->insert(pair<string, string>("TraceId", *request->traceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribePlayList"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribePlayListResponse(callApi(params, req, runtime));
  }
  else {
    return DescribePlayListResponse(execute(params, req, runtime));
  }
}

DescribePlayListResponse Alibabacloud_ICE20201109::Client::describePlayList(shared_ptr<DescribePlayListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePlayListWithOptions(request, runtime);
}

DescribeRtcRobotInstanceResponse Alibabacloud_ICE20201109::Client::describeRtcRobotInstanceWithOptions(shared_ptr<DescribeRtcRobotInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRtcRobotInstance"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DescribeRtcRobotInstanceResponse(callApi(params, req, runtime));
  }
  else {
    return DescribeRtcRobotInstanceResponse(execute(params, req, runtime));
  }
}

DescribeRtcRobotInstanceResponse Alibabacloud_ICE20201109::Client::describeRtcRobotInstance(shared_ptr<DescribeRtcRobotInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRtcRobotInstanceWithOptions(request, runtime);
}

DetectAudioForCustomizedVoiceJobResponse Alibabacloud_ICE20201109::Client::detectAudioForCustomizedVoiceJobWithOptions(shared_ptr<DetectAudioForCustomizedVoiceJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->audioRecordId)) {
    query->insert(pair<string, long>("AudioRecordId", *request->audioRecordId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->recordUrl)) {
    query->insert(pair<string, string>("RecordUrl", *request->recordUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->voiceId)) {
    query->insert(pair<string, string>("VoiceId", *request->voiceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DetectAudioForCustomizedVoiceJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DetectAudioForCustomizedVoiceJobResponse(callApi(params, req, runtime));
  }
  else {
    return DetectAudioForCustomizedVoiceJobResponse(execute(params, req, runtime));
  }
}

DetectAudioForCustomizedVoiceJobResponse Alibabacloud_ICE20201109::Client::detectAudioForCustomizedVoiceJob(shared_ptr<DetectAudioForCustomizedVoiceJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return detectAudioForCustomizedVoiceJobWithOptions(request, runtime);
}

DropSearchIndexResponse Alibabacloud_ICE20201109::Client::dropSearchIndexWithOptions(shared_ptr<DropSearchIndexRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->indexType)) {
    query->insert(pair<string, string>("IndexType", *request->indexType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchLibName)) {
    query->insert(pair<string, string>("SearchLibName", *request->searchLibName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DropSearchIndex"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DropSearchIndexResponse(callApi(params, req, runtime));
  }
  else {
    return DropSearchIndexResponse(execute(params, req, runtime));
  }
}

DropSearchIndexResponse Alibabacloud_ICE20201109::Client::dropSearchIndex(shared_ptr<DropSearchIndexRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return dropSearchIndexWithOptions(request, runtime);
}

DropSearchLibResponse Alibabacloud_ICE20201109::Client::dropSearchLibWithOptions(shared_ptr<DropSearchLibRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->searchLibName)) {
    query->insert(pair<string, string>("SearchLibName", *request->searchLibName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DropSearchLib"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return DropSearchLibResponse(callApi(params, req, runtime));
  }
  else {
    return DropSearchLibResponse(execute(params, req, runtime));
  }
}

DropSearchLibResponse Alibabacloud_ICE20201109::Client::dropSearchLib(shared_ptr<DropSearchLibRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return dropSearchLibWithOptions(request, runtime);
}

GenerateAIAgentCallResponse Alibabacloud_ICE20201109::Client::generateAIAgentCallWithOptions(shared_ptr<GenerateAIAgentCallRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GenerateAIAgentCallShrinkRequest> request = make_shared<GenerateAIAgentCallShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<GenerateAIAgentCallRequestChatSyncConfig>(tmpReq->chatSyncConfig)) {
    request->chatSyncConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->chatSyncConfig, make_shared<string>("ChatSyncConfig"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<AIAgentTemplateConfig>(tmpReq->templateConfig)) {
    request->templateConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->templateConfig, make_shared<string>("TemplateConfig"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->AIAgentId)) {
    query->insert(pair<string, string>("AIAgentId", *request->AIAgentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->chatSyncConfigShrink)) {
    query->insert(pair<string, string>("ChatSyncConfig", *request->chatSyncConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->expire)) {
    query->insert(pair<string, long>("Expire", *request->expire));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionId)) {
    query->insert(pair<string, string>("SessionId", *request->sessionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateConfigShrink)) {
    query->insert(pair<string, string>("TemplateConfig", *request->templateConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    query->insert(pair<string, string>("UserData", *request->userData));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GenerateAIAgentCall"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GenerateAIAgentCallResponse(callApi(params, req, runtime));
  }
  else {
    return GenerateAIAgentCallResponse(execute(params, req, runtime));
  }
}

GenerateAIAgentCallResponse Alibabacloud_ICE20201109::Client::generateAIAgentCall(shared_ptr<GenerateAIAgentCallRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return generateAIAgentCallWithOptions(request, runtime);
}

GenerateKMSDataKeyResponse Alibabacloud_ICE20201109::Client::generateKMSDataKeyWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GenerateKMSDataKey"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GenerateKMSDataKeyResponse(callApi(params, req, runtime));
  }
  else {
    return GenerateKMSDataKeyResponse(execute(params, req, runtime));
  }
}

GenerateKMSDataKeyResponse Alibabacloud_ICE20201109::Client::generateKMSDataKey() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return generateKMSDataKeyWithOptions(runtime);
}

GenerateMessageChatTokenResponse Alibabacloud_ICE20201109::Client::generateMessageChatTokenWithOptions(shared_ptr<GenerateMessageChatTokenRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->AIAgentId)) {
    query->insert(pair<string, string>("AIAgentId", *request->AIAgentId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->expire)) {
    query->insert(pair<string, long>("Expire", *request->expire));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->role)) {
    query->insert(pair<string, string>("Role", *request->role));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GenerateMessageChatToken"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GenerateMessageChatTokenResponse(callApi(params, req, runtime));
  }
  else {
    return GenerateMessageChatTokenResponse(execute(params, req, runtime));
  }
}

GenerateMessageChatTokenResponse Alibabacloud_ICE20201109::Client::generateMessageChatToken(shared_ptr<GenerateMessageChatTokenRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return generateMessageChatTokenWithOptions(request, runtime);
}

GetAdInsertionResponse Alibabacloud_ICE20201109::Client::getAdInsertionWithOptions(shared_ptr<GetAdInsertionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAdInsertion"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetAdInsertionResponse(callApi(params, req, runtime));
  }
  else {
    return GetAdInsertionResponse(execute(params, req, runtime));
  }
}

GetAdInsertionResponse Alibabacloud_ICE20201109::Client::getAdInsertion(shared_ptr<GetAdInsertionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAdInsertionWithOptions(request, runtime);
}

GetAvatarResponse Alibabacloud_ICE20201109::Client::getAvatarWithOptions(shared_ptr<GetAvatarRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->avatarId)) {
    query->insert(pair<string, string>("AvatarId", *request->avatarId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAvatar"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetAvatarResponse(callApi(params, req, runtime));
  }
  else {
    return GetAvatarResponse(execute(params, req, runtime));
  }
}

GetAvatarResponse Alibabacloud_ICE20201109::Client::getAvatar(shared_ptr<GetAvatarRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAvatarWithOptions(request, runtime);
}

GetAvatarTrainingJobResponse Alibabacloud_ICE20201109::Client::getAvatarTrainingJobWithOptions(shared_ptr<GetAvatarTrainingJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAvatarTrainingJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetAvatarTrainingJobResponse(callApi(params, req, runtime));
  }
  else {
    return GetAvatarTrainingJobResponse(execute(params, req, runtime));
  }
}

GetAvatarTrainingJobResponse Alibabacloud_ICE20201109::Client::getAvatarTrainingJob(shared_ptr<GetAvatarTrainingJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAvatarTrainingJobWithOptions(request, runtime);
}

GetBatchMediaProducingJobResponse Alibabacloud_ICE20201109::Client::getBatchMediaProducingJobWithOptions(shared_ptr<GetBatchMediaProducingJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetBatchMediaProducingJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetBatchMediaProducingJobResponse(callApi(params, req, runtime));
  }
  else {
    return GetBatchMediaProducingJobResponse(execute(params, req, runtime));
  }
}

GetBatchMediaProducingJobResponse Alibabacloud_ICE20201109::Client::getBatchMediaProducingJob(shared_ptr<GetBatchMediaProducingJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getBatchMediaProducingJobWithOptions(request, runtime);
}

GetCategoriesResponse Alibabacloud_ICE20201109::Client::getCategoriesWithOptions(shared_ptr<GetCategoriesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->cateId)) {
    query->insert(pair<string, long>("CateId", *request->cateId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
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
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetCategories"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetCategoriesResponse(callApi(params, req, runtime));
  }
  else {
    return GetCategoriesResponse(execute(params, req, runtime));
  }
}

GetCategoriesResponse Alibabacloud_ICE20201109::Client::getCategories(shared_ptr<GetCategoriesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getCategoriesWithOptions(request, runtime);
}

GetChannelResponse Alibabacloud_ICE20201109::Client::getChannelWithOptions(shared_ptr<GetChannelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->channelName)) {
    query->insert(pair<string, string>("ChannelName", *request->channelName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetChannel"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetChannelResponse(callApi(params, req, runtime));
  }
  else {
    return GetChannelResponse(execute(params, req, runtime));
  }
}

GetChannelResponse Alibabacloud_ICE20201109::Client::getChannel(shared_ptr<GetChannelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getChannelWithOptions(request, runtime);
}

GetContentAnalyzeConfigResponse Alibabacloud_ICE20201109::Client::getContentAnalyzeConfigWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetContentAnalyzeConfig"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetContentAnalyzeConfigResponse(callApi(params, req, runtime));
  }
  else {
    return GetContentAnalyzeConfigResponse(execute(params, req, runtime));
  }
}

GetContentAnalyzeConfigResponse Alibabacloud_ICE20201109::Client::getContentAnalyzeConfig() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getContentAnalyzeConfigWithOptions(runtime);
}

GetCustomTemplateResponse Alibabacloud_ICE20201109::Client::getCustomTemplateWithOptions(shared_ptr<GetCustomTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->subtype)) {
    query->insert(pair<string, long>("Subtype", *request->subtype));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    query->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->type)) {
    query->insert(pair<string, long>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetCustomTemplate"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetCustomTemplateResponse(callApi(params, req, runtime));
  }
  else {
    return GetCustomTemplateResponse(execute(params, req, runtime));
  }
}

GetCustomTemplateResponse Alibabacloud_ICE20201109::Client::getCustomTemplate(shared_ptr<GetCustomTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getCustomTemplateWithOptions(request, runtime);
}

GetCustomizedVoiceResponse Alibabacloud_ICE20201109::Client::getCustomizedVoiceWithOptions(shared_ptr<GetCustomizedVoiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->voiceId)) {
    query->insert(pair<string, string>("VoiceId", *request->voiceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetCustomizedVoice"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetCustomizedVoiceResponse(callApi(params, req, runtime));
  }
  else {
    return GetCustomizedVoiceResponse(execute(params, req, runtime));
  }
}

GetCustomizedVoiceResponse Alibabacloud_ICE20201109::Client::getCustomizedVoice(shared_ptr<GetCustomizedVoiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getCustomizedVoiceWithOptions(request, runtime);
}

GetCustomizedVoiceJobResponse Alibabacloud_ICE20201109::Client::getCustomizedVoiceJobWithOptions(shared_ptr<GetCustomizedVoiceJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetCustomizedVoiceJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetCustomizedVoiceJobResponse(callApi(params, req, runtime));
  }
  else {
    return GetCustomizedVoiceJobResponse(execute(params, req, runtime));
  }
}

GetCustomizedVoiceJobResponse Alibabacloud_ICE20201109::Client::getCustomizedVoiceJob(shared_ptr<GetCustomizedVoiceJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getCustomizedVoiceJobWithOptions(request, runtime);
}

GetDefaultStorageLocationResponse Alibabacloud_ICE20201109::Client::getDefaultStorageLocationWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDefaultStorageLocation"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetDefaultStorageLocationResponse(callApi(params, req, runtime));
  }
  else {
    return GetDefaultStorageLocationResponse(execute(params, req, runtime));
  }
}

GetDefaultStorageLocationResponse Alibabacloud_ICE20201109::Client::getDefaultStorageLocation() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDefaultStorageLocationWithOptions(runtime);
}

GetDemonstrationForCustomizedVoiceJobResponse Alibabacloud_ICE20201109::Client::getDemonstrationForCustomizedVoiceJobWithOptions(shared_ptr<GetDemonstrationForCustomizedVoiceJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->scenario)) {
    query->insert(pair<string, string>("Scenario", *request->scenario));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDemonstrationForCustomizedVoiceJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetDemonstrationForCustomizedVoiceJobResponse(callApi(params, req, runtime));
  }
  else {
    return GetDemonstrationForCustomizedVoiceJobResponse(execute(params, req, runtime));
  }
}

GetDemonstrationForCustomizedVoiceJobResponse Alibabacloud_ICE20201109::Client::getDemonstrationForCustomizedVoiceJob(shared_ptr<GetDemonstrationForCustomizedVoiceJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDemonstrationForCustomizedVoiceJobWithOptions(request, runtime);
}

GetDynamicImageJobResponse Alibabacloud_ICE20201109::Client::getDynamicImageJobWithOptions(shared_ptr<GetDynamicImageJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDynamicImageJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetDynamicImageJobResponse(callApi(params, req, runtime));
  }
  else {
    return GetDynamicImageJobResponse(execute(params, req, runtime));
  }
}

GetDynamicImageJobResponse Alibabacloud_ICE20201109::Client::getDynamicImageJob(shared_ptr<GetDynamicImageJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDynamicImageJobWithOptions(request, runtime);
}

GetEditingProjectResponse Alibabacloud_ICE20201109::Client::getEditingProjectWithOptions(shared_ptr<GetEditingProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    query->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->requestSource)) {
    query->insert(pair<string, string>("RequestSource", *request->requestSource));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetEditingProject"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetEditingProjectResponse(callApi(params, req, runtime));
  }
  else {
    return GetEditingProjectResponse(execute(params, req, runtime));
  }
}

GetEditingProjectResponse Alibabacloud_ICE20201109::Client::getEditingProject(shared_ptr<GetEditingProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getEditingProjectWithOptions(request, runtime);
}

GetEditingProjectMaterialsResponse Alibabacloud_ICE20201109::Client::getEditingProjectMaterialsWithOptions(shared_ptr<GetEditingProjectMaterialsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    query->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetEditingProjectMaterials"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetEditingProjectMaterialsResponse(callApi(params, req, runtime));
  }
  else {
    return GetEditingProjectMaterialsResponse(execute(params, req, runtime));
  }
}

GetEditingProjectMaterialsResponse Alibabacloud_ICE20201109::Client::getEditingProjectMaterials(shared_ptr<GetEditingProjectMaterialsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getEditingProjectMaterialsWithOptions(request, runtime);
}

GetEventCallbackResponse Alibabacloud_ICE20201109::Client::getEventCallbackWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetEventCallback"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetEventCallbackResponse(callApi(params, req, runtime));
  }
  else {
    return GetEventCallbackResponse(execute(params, req, runtime));
  }
}

GetEventCallbackResponse Alibabacloud_ICE20201109::Client::getEventCallback() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getEventCallbackWithOptions(runtime);
}

GetLiveEditingIndexFileResponse Alibabacloud_ICE20201109::Client::getLiveEditingIndexFileWithOptions(shared_ptr<GetLiveEditingIndexFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    query->insert(pair<string, string>("DomainName", *request->domainName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    query->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->streamName)) {
    query->insert(pair<string, string>("StreamName", *request->streamName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetLiveEditingIndexFile"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetLiveEditingIndexFileResponse(callApi(params, req, runtime));
  }
  else {
    return GetLiveEditingIndexFileResponse(execute(params, req, runtime));
  }
}

GetLiveEditingIndexFileResponse Alibabacloud_ICE20201109::Client::getLiveEditingIndexFile(shared_ptr<GetLiveEditingIndexFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getLiveEditingIndexFileWithOptions(request, runtime);
}

GetLiveEditingJobResponse Alibabacloud_ICE20201109::Client::getLiveEditingJobWithOptions(shared_ptr<GetLiveEditingJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetLiveEditingJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetLiveEditingJobResponse(callApi(params, req, runtime));
  }
  else {
    return GetLiveEditingJobResponse(execute(params, req, runtime));
  }
}

GetLiveEditingJobResponse Alibabacloud_ICE20201109::Client::getLiveEditingJob(shared_ptr<GetLiveEditingJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getLiveEditingJobWithOptions(request, runtime);
}

GetLivePackageChannelResponse Alibabacloud_ICE20201109::Client::getLivePackageChannelWithOptions(shared_ptr<GetLivePackageChannelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->channelName)) {
    query->insert(pair<string, string>("ChannelName", *request->channelName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupName)) {
    query->insert(pair<string, string>("GroupName", *request->groupName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetLivePackageChannel"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetLivePackageChannelResponse(callApi(params, req, runtime));
  }
  else {
    return GetLivePackageChannelResponse(execute(params, req, runtime));
  }
}

GetLivePackageChannelResponse Alibabacloud_ICE20201109::Client::getLivePackageChannel(shared_ptr<GetLivePackageChannelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getLivePackageChannelWithOptions(request, runtime);
}

GetLivePackageChannelGroupResponse Alibabacloud_ICE20201109::Client::getLivePackageChannelGroupWithOptions(shared_ptr<GetLivePackageChannelGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->groupName)) {
    query->insert(pair<string, string>("GroupName", *request->groupName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetLivePackageChannelGroup"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetLivePackageChannelGroupResponse(callApi(params, req, runtime));
  }
  else {
    return GetLivePackageChannelGroupResponse(execute(params, req, runtime));
  }
}

GetLivePackageChannelGroupResponse Alibabacloud_ICE20201109::Client::getLivePackageChannelGroup(shared_ptr<GetLivePackageChannelGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getLivePackageChannelGroupWithOptions(request, runtime);
}

GetLivePackageOriginEndpointResponse Alibabacloud_ICE20201109::Client::getLivePackageOriginEndpointWithOptions(shared_ptr<GetLivePackageOriginEndpointRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->channelName)) {
    query->insert(pair<string, string>("ChannelName", *request->channelName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endpointName)) {
    query->insert(pair<string, string>("EndpointName", *request->endpointName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupName)) {
    query->insert(pair<string, string>("GroupName", *request->groupName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetLivePackageOriginEndpoint"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetLivePackageOriginEndpointResponse(callApi(params, req, runtime));
  }
  else {
    return GetLivePackageOriginEndpointResponse(execute(params, req, runtime));
  }
}

GetLivePackageOriginEndpointResponse Alibabacloud_ICE20201109::Client::getLivePackageOriginEndpoint(shared_ptr<GetLivePackageOriginEndpointRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getLivePackageOriginEndpointWithOptions(request, runtime);
}

GetLiveRecordJobResponse Alibabacloud_ICE20201109::Client::getLiveRecordJobWithOptions(shared_ptr<GetLiveRecordJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetLiveRecordJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetLiveRecordJobResponse(callApi(params, req, runtime));
  }
  else {
    return GetLiveRecordJobResponse(execute(params, req, runtime));
  }
}

GetLiveRecordJobResponse Alibabacloud_ICE20201109::Client::getLiveRecordJob(shared_ptr<GetLiveRecordJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getLiveRecordJobWithOptions(request, runtime);
}

GetLiveRecordTemplateResponse Alibabacloud_ICE20201109::Client::getLiveRecordTemplateWithOptions(shared_ptr<GetLiveRecordTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetLiveRecordTemplate"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetLiveRecordTemplateResponse(callApi(params, req, runtime));
  }
  else {
    return GetLiveRecordTemplateResponse(execute(params, req, runtime));
  }
}

GetLiveRecordTemplateResponse Alibabacloud_ICE20201109::Client::getLiveRecordTemplate(shared_ptr<GetLiveRecordTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getLiveRecordTemplateWithOptions(request, runtime);
}

GetLiveSnapshotJobResponse Alibabacloud_ICE20201109::Client::getLiveSnapshotJobWithOptions(shared_ptr<GetLiveSnapshotJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetLiveSnapshotJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetLiveSnapshotJobResponse(callApi(params, req, runtime));
  }
  else {
    return GetLiveSnapshotJobResponse(execute(params, req, runtime));
  }
}

GetLiveSnapshotJobResponse Alibabacloud_ICE20201109::Client::getLiveSnapshotJob(shared_ptr<GetLiveSnapshotJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getLiveSnapshotJobWithOptions(request, runtime);
}

GetLiveSnapshotTemplateResponse Alibabacloud_ICE20201109::Client::getLiveSnapshotTemplateWithOptions(shared_ptr<GetLiveSnapshotTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetLiveSnapshotTemplate"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetLiveSnapshotTemplateResponse(callApi(params, req, runtime));
  }
  else {
    return GetLiveSnapshotTemplateResponse(execute(params, req, runtime));
  }
}

GetLiveSnapshotTemplateResponse Alibabacloud_ICE20201109::Client::getLiveSnapshotTemplate(shared_ptr<GetLiveSnapshotTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getLiveSnapshotTemplateWithOptions(request, runtime);
}

GetLiveTranscodeJobResponse Alibabacloud_ICE20201109::Client::getLiveTranscodeJobWithOptions(shared_ptr<GetLiveTranscodeJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetLiveTranscodeJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetLiveTranscodeJobResponse(callApi(params, req, runtime));
  }
  else {
    return GetLiveTranscodeJobResponse(execute(params, req, runtime));
  }
}

GetLiveTranscodeJobResponse Alibabacloud_ICE20201109::Client::getLiveTranscodeJob(shared_ptr<GetLiveTranscodeJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getLiveTranscodeJobWithOptions(request, runtime);
}

GetLiveTranscodeTemplateResponse Alibabacloud_ICE20201109::Client::getLiveTranscodeTemplateWithOptions(shared_ptr<GetLiveTranscodeTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    query->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetLiveTranscodeTemplate"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetLiveTranscodeTemplateResponse(callApi(params, req, runtime));
  }
  else {
    return GetLiveTranscodeTemplateResponse(execute(params, req, runtime));
  }
}

GetLiveTranscodeTemplateResponse Alibabacloud_ICE20201109::Client::getLiveTranscodeTemplate(shared_ptr<GetLiveTranscodeTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getLiveTranscodeTemplateWithOptions(request, runtime);
}

GetMediaConnectFlowResponse Alibabacloud_ICE20201109::Client::getMediaConnectFlowWithOptions(shared_ptr<GetMediaConnectFlowRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->flowId)) {
    query->insert(pair<string, string>("FlowId", *request->flowId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMediaConnectFlow"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetMediaConnectFlowResponse(callApi(params, req, runtime));
  }
  else {
    return GetMediaConnectFlowResponse(execute(params, req, runtime));
  }
}

GetMediaConnectFlowResponse Alibabacloud_ICE20201109::Client::getMediaConnectFlow(shared_ptr<GetMediaConnectFlowRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMediaConnectFlowWithOptions(request, runtime);
}

GetMediaConnectFlowInputResponse Alibabacloud_ICE20201109::Client::getMediaConnectFlowInputWithOptions(shared_ptr<GetMediaConnectFlowInputRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->flowId)) {
    query->insert(pair<string, string>("FlowId", *request->flowId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMediaConnectFlowInput"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetMediaConnectFlowInputResponse(callApi(params, req, runtime));
  }
  else {
    return GetMediaConnectFlowInputResponse(execute(params, req, runtime));
  }
}

GetMediaConnectFlowInputResponse Alibabacloud_ICE20201109::Client::getMediaConnectFlowInput(shared_ptr<GetMediaConnectFlowInputRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMediaConnectFlowInputWithOptions(request, runtime);
}

GetMediaConnectFlowOutputResponse Alibabacloud_ICE20201109::Client::getMediaConnectFlowOutputWithOptions(shared_ptr<GetMediaConnectFlowOutputRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->flowId)) {
    query->insert(pair<string, string>("FlowId", *request->flowId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outputName)) {
    query->insert(pair<string, string>("OutputName", *request->outputName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMediaConnectFlowOutput"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetMediaConnectFlowOutputResponse(callApi(params, req, runtime));
  }
  else {
    return GetMediaConnectFlowOutputResponse(execute(params, req, runtime));
  }
}

GetMediaConnectFlowOutputResponse Alibabacloud_ICE20201109::Client::getMediaConnectFlowOutput(shared_ptr<GetMediaConnectFlowOutputRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMediaConnectFlowOutputWithOptions(request, runtime);
}

GetMediaConvertJobResponse Alibabacloud_ICE20201109::Client::getMediaConvertJobWithOptions(shared_ptr<GetMediaConvertJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMediaConvertJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetMediaConvertJobResponse(callApi(params, req, runtime));
  }
  else {
    return GetMediaConvertJobResponse(execute(params, req, runtime));
  }
}

GetMediaConvertJobResponse Alibabacloud_ICE20201109::Client::getMediaConvertJob(shared_ptr<GetMediaConvertJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMediaConvertJobWithOptions(request, runtime);
}

GetMediaInfoResponse Alibabacloud_ICE20201109::Client::getMediaInfoWithOptions(shared_ptr<GetMediaInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->inputURL)) {
    query->insert(pair<string, string>("InputURL", *request->inputURL));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaId)) {
    query->insert(pair<string, string>("MediaId", *request->mediaId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outputType)) {
    query->insert(pair<string, string>("OutputType", *request->outputType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->returnDetailedInfo)) {
    query->insert(pair<string, string>("ReturnDetailedInfo", *request->returnDetailedInfo));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMediaInfo"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetMediaInfoResponse(callApi(params, req, runtime));
  }
  else {
    return GetMediaInfoResponse(execute(params, req, runtime));
  }
}

GetMediaInfoResponse Alibabacloud_ICE20201109::Client::getMediaInfo(shared_ptr<GetMediaInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMediaInfoWithOptions(request, runtime);
}

GetMediaInfoJobResponse Alibabacloud_ICE20201109::Client::getMediaInfoJobWithOptions(shared_ptr<GetMediaInfoJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMediaInfoJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetMediaInfoJobResponse(callApi(params, req, runtime));
  }
  else {
    return GetMediaInfoJobResponse(execute(params, req, runtime));
  }
}

GetMediaInfoJobResponse Alibabacloud_ICE20201109::Client::getMediaInfoJob(shared_ptr<GetMediaInfoJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMediaInfoJobWithOptions(request, runtime);
}

GetMediaLiveChannelResponse Alibabacloud_ICE20201109::Client::getMediaLiveChannelWithOptions(shared_ptr<GetMediaLiveChannelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->channelId)) {
    body->insert(pair<string, string>("ChannelId", *request->channelId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMediaLiveChannel"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetMediaLiveChannelResponse(callApi(params, req, runtime));
  }
  else {
    return GetMediaLiveChannelResponse(execute(params, req, runtime));
  }
}

GetMediaLiveChannelResponse Alibabacloud_ICE20201109::Client::getMediaLiveChannel(shared_ptr<GetMediaLiveChannelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMediaLiveChannelWithOptions(request, runtime);
}

GetMediaLiveInputResponse Alibabacloud_ICE20201109::Client::getMediaLiveInputWithOptions(shared_ptr<GetMediaLiveInputRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->inputId)) {
    body->insert(pair<string, string>("InputId", *request->inputId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMediaLiveInput"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetMediaLiveInputResponse(callApi(params, req, runtime));
  }
  else {
    return GetMediaLiveInputResponse(execute(params, req, runtime));
  }
}

GetMediaLiveInputResponse Alibabacloud_ICE20201109::Client::getMediaLiveInput(shared_ptr<GetMediaLiveInputRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMediaLiveInputWithOptions(request, runtime);
}

GetMediaLiveInputSecurityGroupResponse Alibabacloud_ICE20201109::Client::getMediaLiveInputSecurityGroupWithOptions(shared_ptr<GetMediaLiveInputSecurityGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->securityGroupId)) {
    body->insert(pair<string, string>("SecurityGroupId", *request->securityGroupId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMediaLiveInputSecurityGroup"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetMediaLiveInputSecurityGroupResponse(callApi(params, req, runtime));
  }
  else {
    return GetMediaLiveInputSecurityGroupResponse(execute(params, req, runtime));
  }
}

GetMediaLiveInputSecurityGroupResponse Alibabacloud_ICE20201109::Client::getMediaLiveInputSecurityGroup(shared_ptr<GetMediaLiveInputSecurityGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMediaLiveInputSecurityGroupWithOptions(request, runtime);
}

GetMediaMarksResponse Alibabacloud_ICE20201109::Client::getMediaMarksWithOptions(shared_ptr<GetMediaMarksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaId)) {
    query->insert(pair<string, string>("MediaId", *request->mediaId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaMarkIds)) {
    query->insert(pair<string, string>("MediaMarkIds", *request->mediaMarkIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMediaMarks"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetMediaMarksResponse(callApi(params, req, runtime));
  }
  else {
    return GetMediaMarksResponse(execute(params, req, runtime));
  }
}

GetMediaMarksResponse Alibabacloud_ICE20201109::Client::getMediaMarks(shared_ptr<GetMediaMarksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMediaMarksWithOptions(request, runtime);
}

GetMediaProducingJobResponse Alibabacloud_ICE20201109::Client::getMediaProducingJobWithOptions(shared_ptr<GetMediaProducingJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMediaProducingJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetMediaProducingJobResponse(callApi(params, req, runtime));
  }
  else {
    return GetMediaProducingJobResponse(execute(params, req, runtime));
  }
}

GetMediaProducingJobResponse Alibabacloud_ICE20201109::Client::getMediaProducingJob(shared_ptr<GetMediaProducingJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMediaProducingJobWithOptions(request, runtime);
}

GetPackageJobResponse Alibabacloud_ICE20201109::Client::getPackageJobWithOptions(shared_ptr<GetPackageJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetPackageJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetPackageJobResponse(callApi(params, req, runtime));
  }
  else {
    return GetPackageJobResponse(execute(params, req, runtime));
  }
}

GetPackageJobResponse Alibabacloud_ICE20201109::Client::getPackageJob(shared_ptr<GetPackageJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getPackageJobWithOptions(request, runtime);
}

GetPipelineResponse Alibabacloud_ICE20201109::Client::getPipelineWithOptions(shared_ptr<GetPipelineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->pipelineId)) {
    query->insert(pair<string, string>("PipelineId", *request->pipelineId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetPipeline"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetPipelineResponse(callApi(params, req, runtime));
  }
  else {
    return GetPipelineResponse(execute(params, req, runtime));
  }
}

GetPipelineResponse Alibabacloud_ICE20201109::Client::getPipeline(shared_ptr<GetPipelineRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getPipelineWithOptions(request, runtime);
}

GetPlayInfoResponse Alibabacloud_ICE20201109::Client::getPlayInfoWithOptions(shared_ptr<GetPlayInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->inputURL)) {
    query->insert(pair<string, string>("InputURL", *request->inputURL));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaId)) {
    query->insert(pair<string, string>("MediaId", *request->mediaId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetPlayInfo"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetPlayInfoResponse(callApi(params, req, runtime));
  }
  else {
    return GetPlayInfoResponse(execute(params, req, runtime));
  }
}

GetPlayInfoResponse Alibabacloud_ICE20201109::Client::getPlayInfo(shared_ptr<GetPlayInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getPlayInfoWithOptions(request, runtime);
}

GetProgramResponse Alibabacloud_ICE20201109::Client::getProgramWithOptions(shared_ptr<GetProgramRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->channelName)) {
    query->insert(pair<string, string>("ChannelName", *request->channelName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->programName)) {
    query->insert(pair<string, string>("ProgramName", *request->programName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetProgram"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetProgramResponse(callApi(params, req, runtime));
  }
  else {
    return GetProgramResponse(execute(params, req, runtime));
  }
}

GetProgramResponse Alibabacloud_ICE20201109::Client::getProgram(shared_ptr<GetProgramRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getProgramWithOptions(request, runtime);
}

GetProjectExportJobResponse Alibabacloud_ICE20201109::Client::getProjectExportJobWithOptions(shared_ptr<GetProjectExportJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetProjectExportJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetProjectExportJobResponse(callApi(params, req, runtime));
  }
  else {
    return GetProjectExportJobResponse(execute(params, req, runtime));
  }
}

GetProjectExportJobResponse Alibabacloud_ICE20201109::Client::getProjectExportJob(shared_ptr<GetProjectExportJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getProjectExportJobWithOptions(request, runtime);
}

GetPublicMediaInfoResponse Alibabacloud_ICE20201109::Client::getPublicMediaInfoWithOptions(shared_ptr<GetPublicMediaInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaId)) {
    query->insert(pair<string, string>("MediaId", *request->mediaId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetPublicMediaInfo"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetPublicMediaInfoResponse(callApi(params, req, runtime));
  }
  else {
    return GetPublicMediaInfoResponse(execute(params, req, runtime));
  }
}

GetPublicMediaInfoResponse Alibabacloud_ICE20201109::Client::getPublicMediaInfo(shared_ptr<GetPublicMediaInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getPublicMediaInfoWithOptions(request, runtime);
}

GetSmartHandleJobResponse Alibabacloud_ICE20201109::Client::getSmartHandleJobWithOptions(shared_ptr<GetSmartHandleJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSmartHandleJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetSmartHandleJobResponse(callApi(params, req, runtime));
  }
  else {
    return GetSmartHandleJobResponse(execute(params, req, runtime));
  }
}

GetSmartHandleJobResponse Alibabacloud_ICE20201109::Client::getSmartHandleJob(shared_ptr<GetSmartHandleJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSmartHandleJobWithOptions(request, runtime);
}

GetSnapshotJobResponse Alibabacloud_ICE20201109::Client::getSnapshotJobWithOptions(shared_ptr<GetSnapshotJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSnapshotJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetSnapshotJobResponse(callApi(params, req, runtime));
  }
  else {
    return GetSnapshotJobResponse(execute(params, req, runtime));
  }
}

GetSnapshotJobResponse Alibabacloud_ICE20201109::Client::getSnapshotJob(shared_ptr<GetSnapshotJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSnapshotJobWithOptions(request, runtime);
}

GetSnapshotUrlsResponse Alibabacloud_ICE20201109::Client::getSnapshotUrlsWithOptions(shared_ptr<GetSnapshotUrlsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderBy)) {
    query->insert(pair<string, string>("OrderBy", *request->orderBy));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->timeout)) {
    query->insert(pair<string, long>("Timeout", *request->timeout));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSnapshotUrls"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetSnapshotUrlsResponse(callApi(params, req, runtime));
  }
  else {
    return GetSnapshotUrlsResponse(execute(params, req, runtime));
  }
}

GetSnapshotUrlsResponse Alibabacloud_ICE20201109::Client::getSnapshotUrls(shared_ptr<GetSnapshotUrlsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSnapshotUrlsWithOptions(request, runtime);
}

GetSourceResponse Alibabacloud_ICE20201109::Client::getSourceWithOptions(shared_ptr<GetSourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceLocationName)) {
    query->insert(pair<string, string>("SourceLocationName", *request->sourceLocationName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceName)) {
    query->insert(pair<string, string>("SourceName", *request->sourceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceType)) {
    query->insert(pair<string, string>("SourceType", *request->sourceType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSource"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetSourceResponse(callApi(params, req, runtime));
  }
  else {
    return GetSourceResponse(execute(params, req, runtime));
  }
}

GetSourceResponse Alibabacloud_ICE20201109::Client::getSource(shared_ptr<GetSourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSourceWithOptions(request, runtime);
}

GetSourceLocationResponse Alibabacloud_ICE20201109::Client::getSourceLocationWithOptions(shared_ptr<GetSourceLocationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceLocationName)) {
    query->insert(pair<string, string>("SourceLocationName", *request->sourceLocationName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSourceLocation"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetSourceLocationResponse(callApi(params, req, runtime));
  }
  else {
    return GetSourceLocationResponse(execute(params, req, runtime));
  }
}

GetSourceLocationResponse Alibabacloud_ICE20201109::Client::getSourceLocation(shared_ptr<GetSourceLocationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSourceLocationWithOptions(request, runtime);
}

GetStorageListResponse Alibabacloud_ICE20201109::Client::getStorageListWithOptions(shared_ptr<GetStorageListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->storageType)) {
    query->insert(pair<string, string>("StorageType", *request->storageType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetStorageList"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetStorageListResponse(callApi(params, req, runtime));
  }
  else {
    return GetStorageListResponse(execute(params, req, runtime));
  }
}

GetStorageListResponse Alibabacloud_ICE20201109::Client::getStorageList(shared_ptr<GetStorageListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getStorageListWithOptions(request, runtime);
}

GetSystemTemplateResponse Alibabacloud_ICE20201109::Client::getSystemTemplateWithOptions(shared_ptr<GetSystemTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    query->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSystemTemplate"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetSystemTemplateResponse(callApi(params, req, runtime));
  }
  else {
    return GetSystemTemplateResponse(execute(params, req, runtime));
  }
}

GetSystemTemplateResponse Alibabacloud_ICE20201109::Client::getSystemTemplate(shared_ptr<GetSystemTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSystemTemplateWithOptions(request, runtime);
}

GetTemplateResponse Alibabacloud_ICE20201109::Client::getTemplateWithOptions(shared_ptr<GetTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->relatedMediaidFlag)) {
    query->insert(pair<string, string>("RelatedMediaidFlag", *request->relatedMediaidFlag));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    query->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTemplate"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetTemplateResponse(callApi(params, req, runtime));
  }
  else {
    return GetTemplateResponse(execute(params, req, runtime));
  }
}

GetTemplateResponse Alibabacloud_ICE20201109::Client::getTemplate(shared_ptr<GetTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getTemplateWithOptions(request, runtime);
}

GetTemplateMaterialsResponse Alibabacloud_ICE20201109::Client::getTemplateMaterialsWithOptions(shared_ptr<GetTemplateMaterialsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->fileList)) {
    query->insert(pair<string, string>("FileList", *request->fileList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    query->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTemplateMaterials"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetTemplateMaterialsResponse(callApi(params, req, runtime));
  }
  else {
    return GetTemplateMaterialsResponse(execute(params, req, runtime));
  }
}

GetTemplateMaterialsResponse Alibabacloud_ICE20201109::Client::getTemplateMaterials(shared_ptr<GetTemplateMaterialsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getTemplateMaterialsWithOptions(request, runtime);
}

GetTemplateParamsResponse Alibabacloud_ICE20201109::Client::getTemplateParamsWithOptions(shared_ptr<GetTemplateParamsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTemplateParams"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetTemplateParamsResponse(callApi(params, req, runtime));
  }
  else {
    return GetTemplateParamsResponse(execute(params, req, runtime));
  }
}

GetTemplateParamsResponse Alibabacloud_ICE20201109::Client::getTemplateParams(shared_ptr<GetTemplateParamsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getTemplateParamsWithOptions(request, runtime);
}

GetTranscodeJobResponse Alibabacloud_ICE20201109::Client::getTranscodeJobWithOptions(shared_ptr<GetTranscodeJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->parentJobId)) {
    query->insert(pair<string, string>("ParentJobId", *request->parentJobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTranscodeJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetTranscodeJobResponse(callApi(params, req, runtime));
  }
  else {
    return GetTranscodeJobResponse(execute(params, req, runtime));
  }
}

GetTranscodeJobResponse Alibabacloud_ICE20201109::Client::getTranscodeJob(shared_ptr<GetTranscodeJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getTranscodeJobWithOptions(request, runtime);
}

GetUrlUploadInfosResponse Alibabacloud_ICE20201109::Client::getUrlUploadInfosWithOptions(shared_ptr<GetUrlUploadInfosRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jobIds)) {
    query->insert(pair<string, string>("JobIds", *request->jobIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uploadURLs)) {
    query->insert(pair<string, string>("UploadURLs", *request->uploadURLs));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetUrlUploadInfos"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetUrlUploadInfosResponse(callApi(params, req, runtime));
  }
  else {
    return GetUrlUploadInfosResponse(execute(params, req, runtime));
  }
}

GetUrlUploadInfosResponse Alibabacloud_ICE20201109::Client::getUrlUploadInfos(shared_ptr<GetUrlUploadInfosRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getUrlUploadInfosWithOptions(request, runtime);
}

GetVideoListResponse Alibabacloud_ICE20201109::Client::getVideoListWithOptions(shared_ptr<GetVideoListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->cateId)) {
    query->insert(pair<string, long>("CateId", *request->cateId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortBy)) {
    query->insert(pair<string, string>("SortBy", *request->sortBy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetVideoList"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetVideoListResponse(callApi(params, req, runtime));
  }
  else {
    return GetVideoListResponse(execute(params, req, runtime));
  }
}

GetVideoListResponse Alibabacloud_ICE20201109::Client::getVideoList(shared_ptr<GetVideoListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getVideoListWithOptions(request, runtime);
}

GetVodPackagingAssetResponse Alibabacloud_ICE20201109::Client::getVodPackagingAssetWithOptions(shared_ptr<GetVodPackagingAssetRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->assetName)) {
    query->insert(pair<string, string>("AssetName", *request->assetName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetVodPackagingAsset"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetVodPackagingAssetResponse(callApi(params, req, runtime));
  }
  else {
    return GetVodPackagingAssetResponse(execute(params, req, runtime));
  }
}

GetVodPackagingAssetResponse Alibabacloud_ICE20201109::Client::getVodPackagingAsset(shared_ptr<GetVodPackagingAssetRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getVodPackagingAssetWithOptions(request, runtime);
}

GetVodPackagingConfigurationResponse Alibabacloud_ICE20201109::Client::getVodPackagingConfigurationWithOptions(shared_ptr<GetVodPackagingConfigurationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->configurationName)) {
    query->insert(pair<string, string>("ConfigurationName", *request->configurationName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetVodPackagingConfiguration"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetVodPackagingConfigurationResponse(callApi(params, req, runtime));
  }
  else {
    return GetVodPackagingConfigurationResponse(execute(params, req, runtime));
  }
}

GetVodPackagingConfigurationResponse Alibabacloud_ICE20201109::Client::getVodPackagingConfiguration(shared_ptr<GetVodPackagingConfigurationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getVodPackagingConfigurationWithOptions(request, runtime);
}

GetVodPackagingGroupResponse Alibabacloud_ICE20201109::Client::getVodPackagingGroupWithOptions(shared_ptr<GetVodPackagingGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->groupName)) {
    query->insert(pair<string, string>("GroupName", *request->groupName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetVodPackagingGroup"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetVodPackagingGroupResponse(callApi(params, req, runtime));
  }
  else {
    return GetVodPackagingGroupResponse(execute(params, req, runtime));
  }
}

GetVodPackagingGroupResponse Alibabacloud_ICE20201109::Client::getVodPackagingGroup(shared_ptr<GetVodPackagingGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getVodPackagingGroupWithOptions(request, runtime);
}

GetWorkflowTaskResponse Alibabacloud_ICE20201109::Client::getWorkflowTaskWithOptions(shared_ptr<GetWorkflowTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    query->insert(pair<string, string>("TaskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetWorkflowTask"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return GetWorkflowTaskResponse(callApi(params, req, runtime));
  }
  else {
    return GetWorkflowTaskResponse(execute(params, req, runtime));
  }
}

GetWorkflowTaskResponse Alibabacloud_ICE20201109::Client::getWorkflowTask(shared_ptr<GetWorkflowTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getWorkflowTaskWithOptions(request, runtime);
}

InsertMediaToSearchLibResponse Alibabacloud_ICE20201109::Client::insertMediaToSearchLibWithOptions(shared_ptr<InsertMediaToSearchLibRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->input)) {
    query->insert(pair<string, string>("Input", *request->input));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaId)) {
    query->insert(pair<string, string>("MediaId", *request->mediaId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaType)) {
    query->insert(pair<string, string>("MediaType", *request->mediaType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->msgBody)) {
    query->insert(pair<string, string>("MsgBody", *request->msgBody));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchLibName)) {
    query->insert(pair<string, string>("SearchLibName", *request->searchLibName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("InsertMediaToSearchLib"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return InsertMediaToSearchLibResponse(callApi(params, req, runtime));
  }
  else {
    return InsertMediaToSearchLibResponse(execute(params, req, runtime));
  }
}

InsertMediaToSearchLibResponse Alibabacloud_ICE20201109::Client::insertMediaToSearchLib(shared_ptr<InsertMediaToSearchLibRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return insertMediaToSearchLibWithOptions(request, runtime);
}

ListAIAgentDialoguesResponse Alibabacloud_ICE20201109::Client::listAIAgentDialoguesWithOptions(shared_ptr<ListAIAgentDialoguesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->endTime)) {
    query->insert(pair<string, long>("EndTime", *request->endTime));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionId)) {
    query->insert(pair<string, string>("SessionId", *request->sessionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTime)) {
    query->insert(pair<string, long>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAIAgentDialogues"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListAIAgentDialoguesResponse(callApi(params, req, runtime));
  }
  else {
    return ListAIAgentDialoguesResponse(execute(params, req, runtime));
  }
}

ListAIAgentDialoguesResponse Alibabacloud_ICE20201109::Client::listAIAgentDialogues(shared_ptr<ListAIAgentDialoguesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAIAgentDialoguesWithOptions(request, runtime);
}

ListAIAgentInstanceResponse Alibabacloud_ICE20201109::Client::listAIAgentInstanceWithOptions(shared_ptr<ListAIAgentInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->AIAgentId)) {
    query->insert(pair<string, string>("AIAgentId", *request->AIAgentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
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
    {"action", boost::any(string("ListAIAgentInstance"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListAIAgentInstanceResponse(callApi(params, req, runtime));
  }
  else {
    return ListAIAgentInstanceResponse(execute(params, req, runtime));
  }
}

ListAIAgentInstanceResponse Alibabacloud_ICE20201109::Client::listAIAgentInstance(shared_ptr<ListAIAgentInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAIAgentInstanceWithOptions(request, runtime);
}

ListAdInsertionsResponse Alibabacloud_ICE20201109::Client::listAdInsertionsWithOptions(shared_ptr<ListAdInsertionsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->keyword)) {
    query->insert(pair<string, string>("Keyword", *request->keyword));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortBy)) {
    query->insert(pair<string, string>("SortBy", *request->sortBy));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAdInsertions"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListAdInsertionsResponse(callApi(params, req, runtime));
  }
  else {
    return ListAdInsertionsResponse(execute(params, req, runtime));
  }
}

ListAdInsertionsResponse Alibabacloud_ICE20201109::Client::listAdInsertions(shared_ptr<ListAdInsertionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAdInsertionsWithOptions(request, runtime);
}

ListAlertsResponse Alibabacloud_ICE20201109::Client::listAlertsWithOptions(shared_ptr<ListAlertsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->category)) {
    query->insert(pair<string, string>("Category", *request->category));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gmtEnd)) {
    query->insert(pair<string, string>("GmtEnd", *request->gmtEnd));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gmtStart)) {
    query->insert(pair<string, string>("GmtStart", *request->gmtStart));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceArn)) {
    query->insert(pair<string, string>("ResourceArn", *request->resourceArn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortBy)) {
    query->insert(pair<string, string>("SortBy", *request->sortBy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortByModifiedTime)) {
    query->insert(pair<string, string>("SortByModifiedTime", *request->sortByModifiedTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAlerts"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListAlertsResponse(callApi(params, req, runtime));
  }
  else {
    return ListAlertsResponse(execute(params, req, runtime));
  }
}

ListAlertsResponse Alibabacloud_ICE20201109::Client::listAlerts(shared_ptr<ListAlertsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAlertsWithOptions(request, runtime);
}

ListAllPublicMediaTagsResponse Alibabacloud_ICE20201109::Client::listAllPublicMediaTagsWithOptions(shared_ptr<ListAllPublicMediaTagsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->businessType)) {
    query->insert(pair<string, string>("BusinessType", *request->businessType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->entityId)) {
    query->insert(pair<string, string>("EntityId", *request->entityId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAllPublicMediaTags"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListAllPublicMediaTagsResponse(callApi(params, req, runtime));
  }
  else {
    return ListAllPublicMediaTagsResponse(execute(params, req, runtime));
  }
}

ListAllPublicMediaTagsResponse Alibabacloud_ICE20201109::Client::listAllPublicMediaTags(shared_ptr<ListAllPublicMediaTagsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAllPublicMediaTagsWithOptions(request, runtime);
}

ListAvatarTrainingJobsResponse Alibabacloud_ICE20201109::Client::listAvatarTrainingJobsWithOptions(shared_ptr<ListAvatarTrainingJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAvatarTrainingJobs"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListAvatarTrainingJobsResponse(callApi(params, req, runtime));
  }
  else {
    return ListAvatarTrainingJobsResponse(execute(params, req, runtime));
  }
}

ListAvatarTrainingJobsResponse Alibabacloud_ICE20201109::Client::listAvatarTrainingJobs(shared_ptr<ListAvatarTrainingJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAvatarTrainingJobsWithOptions(request, runtime);
}

ListAvatarsResponse Alibabacloud_ICE20201109::Client::listAvatarsWithOptions(shared_ptr<ListAvatarsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->avatarType)) {
    query->insert(pair<string, string>("AvatarType", *request->avatarType));
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
    {"action", boost::any(string("ListAvatars"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListAvatarsResponse(callApi(params, req, runtime));
  }
  else {
    return ListAvatarsResponse(execute(params, req, runtime));
  }
}

ListAvatarsResponse Alibabacloud_ICE20201109::Client::listAvatars(shared_ptr<ListAvatarsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAvatarsWithOptions(request, runtime);
}

ListBatchMediaProducingJobsResponse Alibabacloud_ICE20201109::Client::listBatchMediaProducingJobsWithOptions(shared_ptr<ListBatchMediaProducingJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobType)) {
    query->insert(pair<string, string>("JobType", *request->jobType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortBy)) {
    query->insert(pair<string, string>("SortBy", *request->sortBy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListBatchMediaProducingJobs"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListBatchMediaProducingJobsResponse(callApi(params, req, runtime));
  }
  else {
    return ListBatchMediaProducingJobsResponse(execute(params, req, runtime));
  }
}

ListBatchMediaProducingJobsResponse Alibabacloud_ICE20201109::Client::listBatchMediaProducingJobs(shared_ptr<ListBatchMediaProducingJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listBatchMediaProducingJobsWithOptions(request, runtime);
}

ListChannelAlertsResponse Alibabacloud_ICE20201109::Client::listChannelAlertsWithOptions(shared_ptr<ListChannelAlertsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->category)) {
    query->insert(pair<string, string>("Category", *request->category));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gmtEnd)) {
    query->insert(pair<string, string>("GmtEnd", *request->gmtEnd));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gmtStart)) {
    query->insert(pair<string, string>("GmtStart", *request->gmtStart));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceArn)) {
    query->insert(pair<string, string>("ResourceArn", *request->resourceArn));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortByModifiedTime)) {
    query->insert(pair<string, string>("SortByModifiedTime", *request->sortByModifiedTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListChannelAlerts"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListChannelAlertsResponse(callApi(params, req, runtime));
  }
  else {
    return ListChannelAlertsResponse(execute(params, req, runtime));
  }
}

ListChannelAlertsResponse Alibabacloud_ICE20201109::Client::listChannelAlerts(shared_ptr<ListChannelAlertsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listChannelAlertsWithOptions(request, runtime);
}

ListChannelsResponse Alibabacloud_ICE20201109::Client::listChannelsWithOptions(shared_ptr<ListChannelsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->channelName)) {
    query->insert(pair<string, string>("ChannelName", *request->channelName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->channelTier)) {
    query->insert(pair<string, string>("ChannelTier", *request->channelTier));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->playbackMode)) {
    query->insert(pair<string, string>("PlaybackMode", *request->playbackMode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortBy)) {
    query->insert(pair<string, string>("SortBy", *request->sortBy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortByModifiedTime)) {
    query->insert(pair<string, string>("SortByModifiedTime", *request->sortByModifiedTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->state)) {
    query->insert(pair<string, long>("State", *request->state));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListChannels"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListChannelsResponse(callApi(params, req, runtime));
  }
  else {
    return ListChannelsResponse(execute(params, req, runtime));
  }
}

ListChannelsResponse Alibabacloud_ICE20201109::Client::listChannels(shared_ptr<ListChannelsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listChannelsWithOptions(request, runtime);
}

ListCustomTemplatesResponse Alibabacloud_ICE20201109::Client::listCustomTemplatesWithOptions(shared_ptr<ListCustomTemplatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderBy)) {
    query->insert(pair<string, string>("OrderBy", *request->orderBy));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subtype)) {
    query->insert(pair<string, string>("Subtype", *request->subtype));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    query->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListCustomTemplates"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListCustomTemplatesResponse(callApi(params, req, runtime));
  }
  else {
    return ListCustomTemplatesResponse(execute(params, req, runtime));
  }
}

ListCustomTemplatesResponse Alibabacloud_ICE20201109::Client::listCustomTemplates(shared_ptr<ListCustomTemplatesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listCustomTemplatesWithOptions(request, runtime);
}

ListCustomizedVoiceJobsResponse Alibabacloud_ICE20201109::Client::listCustomizedVoiceJobsWithOptions(shared_ptr<ListCustomizedVoiceJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListCustomizedVoiceJobs"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListCustomizedVoiceJobsResponse(callApi(params, req, runtime));
  }
  else {
    return ListCustomizedVoiceJobsResponse(execute(params, req, runtime));
  }
}

ListCustomizedVoiceJobsResponse Alibabacloud_ICE20201109::Client::listCustomizedVoiceJobs(shared_ptr<ListCustomizedVoiceJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listCustomizedVoiceJobsWithOptions(request, runtime);
}

ListCustomizedVoicesResponse Alibabacloud_ICE20201109::Client::listCustomizedVoicesWithOptions(shared_ptr<ListCustomizedVoicesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListCustomizedVoices"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListCustomizedVoicesResponse(callApi(params, req, runtime));
  }
  else {
    return ListCustomizedVoicesResponse(execute(params, req, runtime));
  }
}

ListCustomizedVoicesResponse Alibabacloud_ICE20201109::Client::listCustomizedVoices(shared_ptr<ListCustomizedVoicesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listCustomizedVoicesWithOptions(request, runtime);
}

ListDNADBResponse Alibabacloud_ICE20201109::Client::listDNADBWithOptions(shared_ptr<ListDNADBRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->DBIds)) {
    query->insert(pair<string, string>("DBIds", *request->DBIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDNADB"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListDNADBResponse(callApi(params, req, runtime));
  }
  else {
    return ListDNADBResponse(execute(params, req, runtime));
  }
}

ListDNADBResponse Alibabacloud_ICE20201109::Client::listDNADB(shared_ptr<ListDNADBRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDNADBWithOptions(request, runtime);
}

ListDNAFilesResponse Alibabacloud_ICE20201109::Client::listDNAFilesWithOptions(shared_ptr<ListDNAFilesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->DBId)) {
    query->insert(pair<string, string>("DBId", *request->DBId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextPageToken)) {
    query->insert(pair<string, string>("NextPageToken", *request->nextPageToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDNAFiles"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListDNAFilesResponse(callApi(params, req, runtime));
  }
  else {
    return ListDNAFilesResponse(execute(params, req, runtime));
  }
}

ListDNAFilesResponse Alibabacloud_ICE20201109::Client::listDNAFiles(shared_ptr<ListDNAFilesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDNAFilesWithOptions(request, runtime);
}

ListDynamicImageJobsResponse Alibabacloud_ICE20201109::Client::listDynamicImageJobsWithOptions(shared_ptr<ListDynamicImageJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endOfCreateTime)) {
    query->insert(pair<string, string>("EndOfCreateTime", *request->endOfCreateTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextPageToken)) {
    query->insert(pair<string, string>("NextPageToken", *request->nextPageToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderBy)) {
    query->insert(pair<string, string>("OrderBy", *request->orderBy));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startOfCreateTime)) {
    query->insert(pair<string, string>("StartOfCreateTime", *request->startOfCreateTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDynamicImageJobs"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListDynamicImageJobsResponse(callApi(params, req, runtime));
  }
  else {
    return ListDynamicImageJobsResponse(execute(params, req, runtime));
  }
}

ListDynamicImageJobsResponse Alibabacloud_ICE20201109::Client::listDynamicImageJobs(shared_ptr<ListDynamicImageJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDynamicImageJobsWithOptions(request, runtime);
}

ListEditingProjectsResponse Alibabacloud_ICE20201109::Client::listEditingProjectsWithOptions(shared_ptr<ListEditingProjectsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->createSource)) {
    query->insert(pair<string, string>("CreateSource", *request->createSource));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyword)) {
    query->insert(pair<string, string>("Keyword", *request->keyword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->maxResults)) {
    query->insert(pair<string, string>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectType)) {
    query->insert(pair<string, string>("ProjectType", *request->projectType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortBy)) {
    query->insert(pair<string, string>("SortBy", *request->sortBy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateType)) {
    query->insert(pair<string, string>("TemplateType", *request->templateType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListEditingProjects"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListEditingProjectsResponse(callApi(params, req, runtime));
  }
  else {
    return ListEditingProjectsResponse(execute(params, req, runtime));
  }
}

ListEditingProjectsResponse Alibabacloud_ICE20201109::Client::listEditingProjects(shared_ptr<ListEditingProjectsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listEditingProjectsWithOptions(request, runtime);
}

ListLivePackageChannelGroupsResponse Alibabacloud_ICE20201109::Client::listLivePackageChannelGroupsWithOptions(shared_ptr<ListLivePackageChannelGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->keyword)) {
    query->insert(pair<string, string>("Keyword", *request->keyword));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortBy)) {
    query->insert(pair<string, string>("SortBy", *request->sortBy));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListLivePackageChannelGroups"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListLivePackageChannelGroupsResponse(callApi(params, req, runtime));
  }
  else {
    return ListLivePackageChannelGroupsResponse(execute(params, req, runtime));
  }
}

ListLivePackageChannelGroupsResponse Alibabacloud_ICE20201109::Client::listLivePackageChannelGroups(shared_ptr<ListLivePackageChannelGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listLivePackageChannelGroupsWithOptions(request, runtime);
}

ListLivePackageChannelsResponse Alibabacloud_ICE20201109::Client::listLivePackageChannelsWithOptions(shared_ptr<ListLivePackageChannelsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->groupName)) {
    query->insert(pair<string, string>("GroupName", *request->groupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyword)) {
    query->insert(pair<string, string>("Keyword", *request->keyword));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortBy)) {
    query->insert(pair<string, string>("SortBy", *request->sortBy));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListLivePackageChannels"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListLivePackageChannelsResponse(callApi(params, req, runtime));
  }
  else {
    return ListLivePackageChannelsResponse(execute(params, req, runtime));
  }
}

ListLivePackageChannelsResponse Alibabacloud_ICE20201109::Client::listLivePackageChannels(shared_ptr<ListLivePackageChannelsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listLivePackageChannelsWithOptions(request, runtime);
}

ListLivePackageOriginEndpointsResponse Alibabacloud_ICE20201109::Client::listLivePackageOriginEndpointsWithOptions(shared_ptr<ListLivePackageOriginEndpointsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->channelName)) {
    query->insert(pair<string, string>("ChannelName", *request->channelName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupName)) {
    query->insert(pair<string, string>("GroupName", *request->groupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyword)) {
    query->insert(pair<string, string>("Keyword", *request->keyword));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortBy)) {
    query->insert(pair<string, string>("SortBy", *request->sortBy));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListLivePackageOriginEndpoints"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListLivePackageOriginEndpointsResponse(callApi(params, req, runtime));
  }
  else {
    return ListLivePackageOriginEndpointsResponse(execute(params, req, runtime));
  }
}

ListLivePackageOriginEndpointsResponse Alibabacloud_ICE20201109::Client::listLivePackageOriginEndpoints(shared_ptr<ListLivePackageOriginEndpointsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listLivePackageOriginEndpointsWithOptions(request, runtime);
}

ListLiveRecordFilesResponse Alibabacloud_ICE20201109::Client::listLiveRecordFilesWithOptions(shared_ptr<ListLiveRecordFilesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListLiveRecordFiles"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListLiveRecordFilesResponse(callApi(params, req, runtime));
  }
  else {
    return ListLiveRecordFilesResponse(execute(params, req, runtime));
  }
}

ListLiveRecordFilesResponse Alibabacloud_ICE20201109::Client::listLiveRecordFiles(shared_ptr<ListLiveRecordFilesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listLiveRecordFilesWithOptions(request, runtime);
}

ListLiveRecordJobsResponse Alibabacloud_ICE20201109::Client::listLiveRecordJobsWithOptions(shared_ptr<ListLiveRecordJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListLiveRecordJobs"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListLiveRecordJobsResponse(callApi(params, req, runtime));
  }
  else {
    return ListLiveRecordJobsResponse(execute(params, req, runtime));
  }
}

ListLiveRecordJobsResponse Alibabacloud_ICE20201109::Client::listLiveRecordJobs(shared_ptr<ListLiveRecordJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listLiveRecordJobsWithOptions(request, runtime);
}

ListLiveRecordTemplatesResponse Alibabacloud_ICE20201109::Client::listLiveRecordTemplatesWithOptions(shared_ptr<ListLiveRecordTemplatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListLiveRecordTemplates"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListLiveRecordTemplatesResponse(callApi(params, req, runtime));
  }
  else {
    return ListLiveRecordTemplatesResponse(execute(params, req, runtime));
  }
}

ListLiveRecordTemplatesResponse Alibabacloud_ICE20201109::Client::listLiveRecordTemplates(shared_ptr<ListLiveRecordTemplatesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listLiveRecordTemplatesWithOptions(request, runtime);
}

ListLiveSnapshotFilesResponse Alibabacloud_ICE20201109::Client::listLiveSnapshotFilesWithOptions(shared_ptr<ListLiveSnapshotFilesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListLiveSnapshotFiles"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListLiveSnapshotFilesResponse(callApi(params, req, runtime));
  }
  else {
    return ListLiveSnapshotFilesResponse(execute(params, req, runtime));
  }
}

ListLiveSnapshotFilesResponse Alibabacloud_ICE20201109::Client::listLiveSnapshotFiles(shared_ptr<ListLiveSnapshotFilesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listLiveSnapshotFilesWithOptions(request, runtime);
}

ListLiveSnapshotJobsResponse Alibabacloud_ICE20201109::Client::listLiveSnapshotJobsWithOptions(shared_ptr<ListLiveSnapshotJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListLiveSnapshotJobs"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListLiveSnapshotJobsResponse(callApi(params, req, runtime));
  }
  else {
    return ListLiveSnapshotJobsResponse(execute(params, req, runtime));
  }
}

ListLiveSnapshotJobsResponse Alibabacloud_ICE20201109::Client::listLiveSnapshotJobs(shared_ptr<ListLiveSnapshotJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listLiveSnapshotJobsWithOptions(request, runtime);
}

ListLiveSnapshotTemplatesResponse Alibabacloud_ICE20201109::Client::listLiveSnapshotTemplatesWithOptions(shared_ptr<ListLiveSnapshotTemplatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListLiveSnapshotTemplates"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListLiveSnapshotTemplatesResponse(callApi(params, req, runtime));
  }
  else {
    return ListLiveSnapshotTemplatesResponse(execute(params, req, runtime));
  }
}

ListLiveSnapshotTemplatesResponse Alibabacloud_ICE20201109::Client::listLiveSnapshotTemplates(shared_ptr<ListLiveSnapshotTemplatesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listLiveSnapshotTemplatesWithOptions(request, runtime);
}

ListLiveTranscodeJobsResponse Alibabacloud_ICE20201109::Client::listLiveTranscodeJobsWithOptions(shared_ptr<ListLiveTranscodeJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->keyWord)) {
    query->insert(pair<string, string>("KeyWord", *request->keyWord));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortBy)) {
    query->insert(pair<string, string>("SortBy", *request->sortBy));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startMode)) {
    query->insert(pair<string, long>("StartMode", *request->startMode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->status)) {
    query->insert(pair<string, long>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListLiveTranscodeJobs"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListLiveTranscodeJobsResponse(callApi(params, req, runtime));
  }
  else {
    return ListLiveTranscodeJobsResponse(execute(params, req, runtime));
  }
}

ListLiveTranscodeJobsResponse Alibabacloud_ICE20201109::Client::listLiveTranscodeJobs(shared_ptr<ListLiveTranscodeJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listLiveTranscodeJobsWithOptions(request, runtime);
}

ListLiveTranscodeTemplatesResponse Alibabacloud_ICE20201109::Client::listLiveTranscodeTemplatesWithOptions(shared_ptr<ListLiveTranscodeTemplatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->category)) {
    query->insert(pair<string, string>("Category", *request->category));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyWord)) {
    query->insert(pair<string, string>("KeyWord", *request->keyWord));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->videoCodec)) {
    query->insert(pair<string, string>("VideoCodec", *request->videoCodec));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListLiveTranscodeTemplates"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListLiveTranscodeTemplatesResponse(callApi(params, req, runtime));
  }
  else {
    return ListLiveTranscodeTemplatesResponse(execute(params, req, runtime));
  }
}

ListLiveTranscodeTemplatesResponse Alibabacloud_ICE20201109::Client::listLiveTranscodeTemplates(shared_ptr<ListLiveTranscodeTemplatesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listLiveTranscodeTemplatesWithOptions(request, runtime);
}

ListMediaBasicInfosResponse Alibabacloud_ICE20201109::Client::listMediaBasicInfosWithOptions(shared_ptr<ListMediaBasicInfosRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->businessType)) {
    query->insert(pair<string, string>("BusinessType", *request->businessType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->includeFileBasicInfo)) {
    query->insert(pair<string, bool>("IncludeFileBasicInfo", *request->includeFileBasicInfo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaId)) {
    query->insert(pair<string, string>("MediaId", *request->mediaId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaType)) {
    query->insert(pair<string, string>("MediaType", *request->mediaType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortBy)) {
    query->insert(pair<string, string>("SortBy", *request->sortBy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->source)) {
    query->insert(pair<string, string>("Source", *request->source));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListMediaBasicInfos"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListMediaBasicInfosResponse(callApi(params, req, runtime));
  }
  else {
    return ListMediaBasicInfosResponse(execute(params, req, runtime));
  }
}

ListMediaBasicInfosResponse Alibabacloud_ICE20201109::Client::listMediaBasicInfos(shared_ptr<ListMediaBasicInfosRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listMediaBasicInfosWithOptions(request, runtime);
}

ListMediaInfoJobsResponse Alibabacloud_ICE20201109::Client::listMediaInfoJobsWithOptions(shared_ptr<ListMediaInfoJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endOfCreateTime)) {
    query->insert(pair<string, string>("EndOfCreateTime", *request->endOfCreateTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextPageToken)) {
    query->insert(pair<string, string>("NextPageToken", *request->nextPageToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderBy)) {
    query->insert(pair<string, string>("OrderBy", *request->orderBy));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startOfCreateTime)) {
    query->insert(pair<string, string>("StartOfCreateTime", *request->startOfCreateTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListMediaInfoJobs"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListMediaInfoJobsResponse(callApi(params, req, runtime));
  }
  else {
    return ListMediaInfoJobsResponse(execute(params, req, runtime));
  }
}

ListMediaInfoJobsResponse Alibabacloud_ICE20201109::Client::listMediaInfoJobs(shared_ptr<ListMediaInfoJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listMediaInfoJobsWithOptions(request, runtime);
}

ListMediaLiveChannelsResponse Alibabacloud_ICE20201109::Client::listMediaLiveChannelsWithOptions(shared_ptr<ListMediaLiveChannelsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->keyword)) {
    body->insert(pair<string, string>("Keyword", *request->keyword));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    body->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    body->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->skip)) {
    body->insert(pair<string, long>("Skip", *request->skip));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortOrder)) {
    body->insert(pair<string, string>("SortOrder", *request->sortOrder));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->states)) {
    body->insert(pair<string, string>("States", *request->states));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListMediaLiveChannels"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListMediaLiveChannelsResponse(callApi(params, req, runtime));
  }
  else {
    return ListMediaLiveChannelsResponse(execute(params, req, runtime));
  }
}

ListMediaLiveChannelsResponse Alibabacloud_ICE20201109::Client::listMediaLiveChannels(shared_ptr<ListMediaLiveChannelsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listMediaLiveChannelsWithOptions(request, runtime);
}

ListMediaLiveInputSecurityGroupsResponse Alibabacloud_ICE20201109::Client::listMediaLiveInputSecurityGroupsWithOptions(shared_ptr<ListMediaLiveInputSecurityGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->keyword)) {
    body->insert(pair<string, string>("Keyword", *request->keyword));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    body->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    body->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->skip)) {
    body->insert(pair<string, long>("Skip", *request->skip));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortOrder)) {
    body->insert(pair<string, string>("SortOrder", *request->sortOrder));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListMediaLiveInputSecurityGroups"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListMediaLiveInputSecurityGroupsResponse(callApi(params, req, runtime));
  }
  else {
    return ListMediaLiveInputSecurityGroupsResponse(execute(params, req, runtime));
  }
}

ListMediaLiveInputSecurityGroupsResponse Alibabacloud_ICE20201109::Client::listMediaLiveInputSecurityGroups(shared_ptr<ListMediaLiveInputSecurityGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listMediaLiveInputSecurityGroupsWithOptions(request, runtime);
}

ListMediaLiveInputsResponse Alibabacloud_ICE20201109::Client::listMediaLiveInputsWithOptions(shared_ptr<ListMediaLiveInputsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->keyword)) {
    body->insert(pair<string, string>("Keyword", *request->keyword));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    body->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    body->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->skip)) {
    body->insert(pair<string, long>("Skip", *request->skip));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortOrder)) {
    body->insert(pair<string, string>("SortOrder", *request->sortOrder));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->types)) {
    body->insert(pair<string, string>("Types", *request->types));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListMediaLiveInputs"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListMediaLiveInputsResponse(callApi(params, req, runtime));
  }
  else {
    return ListMediaLiveInputsResponse(execute(params, req, runtime));
  }
}

ListMediaLiveInputsResponse Alibabacloud_ICE20201109::Client::listMediaLiveInputs(shared_ptr<ListMediaLiveInputsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listMediaLiveInputsWithOptions(request, runtime);
}

ListMediaMarksResponse Alibabacloud_ICE20201109::Client::listMediaMarksWithOptions(shared_ptr<ListMediaMarksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaId)) {
    query->insert(pair<string, string>("MediaId", *request->mediaId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaMarkIds)) {
    query->insert(pair<string, string>("MediaMarkIds", *request->mediaMarkIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListMediaMarks"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListMediaMarksResponse(callApi(params, req, runtime));
  }
  else {
    return ListMediaMarksResponse(execute(params, req, runtime));
  }
}

ListMediaMarksResponse Alibabacloud_ICE20201109::Client::listMediaMarks(shared_ptr<ListMediaMarksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listMediaMarksWithOptions(request, runtime);
}

ListMediaProducingJobsResponse Alibabacloud_ICE20201109::Client::listMediaProducingJobsWithOptions(shared_ptr<ListMediaProducingJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobType)) {
    query->insert(pair<string, string>("JobType", *request->jobType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyword)) {
    query->insert(pair<string, string>("Keyword", *request->keyword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->masterJobId)) {
    query->insert(pair<string, string>("MasterJobId", *request->masterJobId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    query->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortBy)) {
    query->insert(pair<string, string>("SortBy", *request->sortBy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListMediaProducingJobs"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListMediaProducingJobsResponse(callApi(params, req, runtime));
  }
  else {
    return ListMediaProducingJobsResponse(execute(params, req, runtime));
  }
}

ListMediaProducingJobsResponse Alibabacloud_ICE20201109::Client::listMediaProducingJobs(shared_ptr<ListMediaProducingJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listMediaProducingJobsWithOptions(request, runtime);
}

ListPackageJobsResponse Alibabacloud_ICE20201109::Client::listPackageJobsWithOptions(shared_ptr<ListPackageJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endOfCreateTime)) {
    query->insert(pair<string, string>("EndOfCreateTime", *request->endOfCreateTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextPageToken)) {
    query->insert(pair<string, string>("NextPageToken", *request->nextPageToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderBy)) {
    query->insert(pair<string, string>("OrderBy", *request->orderBy));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startOfCreateTime)) {
    query->insert(pair<string, string>("StartOfCreateTime", *request->startOfCreateTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListPackageJobs"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListPackageJobsResponse(callApi(params, req, runtime));
  }
  else {
    return ListPackageJobsResponse(execute(params, req, runtime));
  }
}

ListPackageJobsResponse Alibabacloud_ICE20201109::Client::listPackageJobs(shared_ptr<ListPackageJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listPackageJobsWithOptions(request, runtime);
}

ListPipelinesResponse Alibabacloud_ICE20201109::Client::listPipelinesWithOptions(shared_ptr<ListPipelinesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->speed)) {
    query->insert(pair<string, string>("Speed", *request->speed));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListPipelines"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListPipelinesResponse(callApi(params, req, runtime));
  }
  else {
    return ListPipelinesResponse(execute(params, req, runtime));
  }
}

ListPipelinesResponse Alibabacloud_ICE20201109::Client::listPipelines(shared_ptr<ListPipelinesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listPipelinesWithOptions(request, runtime);
}

ListProgramsResponse Alibabacloud_ICE20201109::Client::listProgramsWithOptions(shared_ptr<ListProgramsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->channelName)) {
    query->insert(pair<string, string>("ChannelName", *request->channelName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageNo)) {
    query->insert(pair<string, string>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSize)) {
    query->insert(pair<string, string>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->programName)) {
    query->insert(pair<string, string>("ProgramName", *request->programName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortBy)) {
    query->insert(pair<string, string>("SortBy", *request->sortBy));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListPrograms"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListProgramsResponse(callApi(params, req, runtime));
  }
  else {
    return ListProgramsResponse(execute(params, req, runtime));
  }
}

ListProgramsResponse Alibabacloud_ICE20201109::Client::listPrograms(shared_ptr<ListProgramsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listProgramsWithOptions(request, runtime);
}

ListPublicMediaBasicInfosResponse Alibabacloud_ICE20201109::Client::listPublicMediaBasicInfosWithOptions(shared_ptr<ListPublicMediaBasicInfosRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->businessType)) {
    query->insert(pair<string, string>("BusinessType", *request->businessType));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->includeFileBasicInfo)) {
    query->insert(pair<string, bool>("IncludeFileBasicInfo", *request->includeFileBasicInfo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaTagId)) {
    query->insert(pair<string, string>("MediaTagId", *request->mediaTagId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
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
    {"action", boost::any(string("ListPublicMediaBasicInfos"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListPublicMediaBasicInfosResponse(callApi(params, req, runtime));
  }
  else {
    return ListPublicMediaBasicInfosResponse(execute(params, req, runtime));
  }
}

ListPublicMediaBasicInfosResponse Alibabacloud_ICE20201109::Client::listPublicMediaBasicInfos(shared_ptr<ListPublicMediaBasicInfosRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listPublicMediaBasicInfosWithOptions(request, runtime);
}

ListSchedulesResponse Alibabacloud_ICE20201109::Client::listSchedulesWithOptions(shared_ptr<ListSchedulesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->channelName)) {
    query->insert(pair<string, string>("ChannelName", *request->channelName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->windowDurationSeconds)) {
    query->insert(pair<string, long>("WindowDurationSeconds", *request->windowDurationSeconds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSchedules"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListSchedulesResponse(callApi(params, req, runtime));
  }
  else {
    return ListSchedulesResponse(execute(params, req, runtime));
  }
}

ListSchedulesResponse Alibabacloud_ICE20201109::Client::listSchedules(shared_ptr<ListSchedulesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSchedulesWithOptions(request, runtime);
}

ListSearchLibResponse Alibabacloud_ICE20201109::Client::listSearchLibWithOptions(shared_ptr<ListSearchLibRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
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
    {"action", boost::any(string("ListSearchLib"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListSearchLibResponse(callApi(params, req, runtime));
  }
  else {
    return ListSearchLibResponse(execute(params, req, runtime));
  }
}

ListSearchLibResponse Alibabacloud_ICE20201109::Client::listSearchLib(shared_ptr<ListSearchLibRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSearchLibWithOptions(request, runtime);
}

ListSmartJobsResponse Alibabacloud_ICE20201109::Client::listSmartJobsWithOptions(shared_ptr<ListSmartJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSmartJobs"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListSmartJobsResponse(callApi(params, req, runtime));
  }
  else {
    return ListSmartJobsResponse(execute(params, req, runtime));
  }
}

ListSmartJobsResponse Alibabacloud_ICE20201109::Client::listSmartJobs(shared_ptr<ListSmartJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSmartJobsWithOptions(request, runtime);
}

ListSmartSysAvatarModelsResponse Alibabacloud_ICE20201109::Client::listSmartSysAvatarModelsWithOptions(shared_ptr<ListSmartSysAvatarModelsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sdkVersion)) {
    query->insert(pair<string, string>("SdkVersion", *request->sdkVersion));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSmartSysAvatarModels"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListSmartSysAvatarModelsResponse(callApi(params, req, runtime));
  }
  else {
    return ListSmartSysAvatarModelsResponse(execute(params, req, runtime));
  }
}

ListSmartSysAvatarModelsResponse Alibabacloud_ICE20201109::Client::listSmartSysAvatarModels(shared_ptr<ListSmartSysAvatarModelsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSmartSysAvatarModelsWithOptions(request, runtime);
}

ListSmartVoiceGroupsResponse Alibabacloud_ICE20201109::Client::listSmartVoiceGroupsWithOptions(shared_ptr<ListSmartVoiceGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSmartVoiceGroups"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListSmartVoiceGroupsResponse(callApi(params, req, runtime));
  }
  else {
    return ListSmartVoiceGroupsResponse(execute(params, req, runtime));
  }
}

ListSmartVoiceGroupsResponse Alibabacloud_ICE20201109::Client::listSmartVoiceGroups(shared_ptr<ListSmartVoiceGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSmartVoiceGroupsWithOptions(request, runtime);
}

ListSnapshotJobsResponse Alibabacloud_ICE20201109::Client::listSnapshotJobsWithOptions(shared_ptr<ListSnapshotJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endOfCreateTime)) {
    query->insert(pair<string, string>("EndOfCreateTime", *request->endOfCreateTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextPageToken)) {
    query->insert(pair<string, string>("NextPageToken", *request->nextPageToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderBy)) {
    query->insert(pair<string, string>("OrderBy", *request->orderBy));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startOfCreateTime)) {
    query->insert(pair<string, string>("StartOfCreateTime", *request->startOfCreateTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSnapshotJobs"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListSnapshotJobsResponse(callApi(params, req, runtime));
  }
  else {
    return ListSnapshotJobsResponse(execute(params, req, runtime));
  }
}

ListSnapshotJobsResponse Alibabacloud_ICE20201109::Client::listSnapshotJobs(shared_ptr<ListSnapshotJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSnapshotJobsWithOptions(request, runtime);
}

ListSourceLocationsResponse Alibabacloud_ICE20201109::Client::listSourceLocationsWithOptions(shared_ptr<ListSourceLocationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->filterState)) {
    query->insert(pair<string, bool>("FilterState", *request->filterState));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortBy)) {
    query->insert(pair<string, string>("SortBy", *request->sortBy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortByModifiedTime)) {
    query->insert(pair<string, string>("SortByModifiedTime", *request->sortByModifiedTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceLocationName)) {
    query->insert(pair<string, string>("SourceLocationName", *request->sourceLocationName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSourceLocations"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListSourceLocationsResponse(callApi(params, req, runtime));
  }
  else {
    return ListSourceLocationsResponse(execute(params, req, runtime));
  }
}

ListSourceLocationsResponse Alibabacloud_ICE20201109::Client::listSourceLocations(shared_ptr<ListSourceLocationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSourceLocationsWithOptions(request, runtime);
}

ListSourcesResponse Alibabacloud_ICE20201109::Client::listSourcesWithOptions(shared_ptr<ListSourcesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->filterState)) {
    query->insert(pair<string, bool>("FilterState", *request->filterState));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageNo)) {
    query->insert(pair<string, string>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pageSize)) {
    query->insert(pair<string, string>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortBy)) {
    query->insert(pair<string, string>("SortBy", *request->sortBy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortByModifiedTime)) {
    query->insert(pair<string, string>("SortByModifiedTime", *request->sortByModifiedTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceLocationName)) {
    query->insert(pair<string, string>("SourceLocationName", *request->sourceLocationName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceName)) {
    query->insert(pair<string, string>("SourceName", *request->sourceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceType)) {
    query->insert(pair<string, string>("SourceType", *request->sourceType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSources"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListSourcesResponse(callApi(params, req, runtime));
  }
  else {
    return ListSourcesResponse(execute(params, req, runtime));
  }
}

ListSourcesResponse Alibabacloud_ICE20201109::Client::listSources(shared_ptr<ListSourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSourcesWithOptions(request, runtime);
}

ListSystemTemplatesResponse Alibabacloud_ICE20201109::Client::listSystemTemplatesWithOptions(shared_ptr<ListSystemTemplatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
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
  if (!Darabonba_Util::Client::isUnset<string>(request->subtype)) {
    query->insert(pair<string, string>("Subtype", *request->subtype));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    query->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSystemTemplates"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListSystemTemplatesResponse(callApi(params, req, runtime));
  }
  else {
    return ListSystemTemplatesResponse(execute(params, req, runtime));
  }
}

ListSystemTemplatesResponse Alibabacloud_ICE20201109::Client::listSystemTemplates(shared_ptr<ListSystemTemplatesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSystemTemplatesWithOptions(request, runtime);
}

ListTemplatesResponse Alibabacloud_ICE20201109::Client::listTemplatesWithOptions(shared_ptr<ListTemplatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->createSource)) {
    query->insert(pair<string, string>("CreateSource", *request->createSource));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyword)) {
    query->insert(pair<string, string>("Keyword", *request->keyword));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortType)) {
    query->insert(pair<string, string>("SortType", *request->sortType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTemplates"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListTemplatesResponse(callApi(params, req, runtime));
  }
  else {
    return ListTemplatesResponse(execute(params, req, runtime));
  }
}

ListTemplatesResponse Alibabacloud_ICE20201109::Client::listTemplates(shared_ptr<ListTemplatesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTemplatesWithOptions(request, runtime);
}

ListTranscodeJobsResponse Alibabacloud_ICE20201109::Client::listTranscodeJobsWithOptions(shared_ptr<ListTranscodeJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endOfCreateTime)) {
    query->insert(pair<string, string>("EndOfCreateTime", *request->endOfCreateTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextPageToken)) {
    query->insert(pair<string, string>("NextPageToken", *request->nextPageToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderBy)) {
    query->insert(pair<string, string>("OrderBy", *request->orderBy));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->parentJobId)) {
    query->insert(pair<string, string>("ParentJobId", *request->parentJobId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startOfCreateTime)) {
    query->insert(pair<string, string>("StartOfCreateTime", *request->startOfCreateTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTranscodeJobs"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListTranscodeJobsResponse(callApi(params, req, runtime));
  }
  else {
    return ListTranscodeJobsResponse(execute(params, req, runtime));
  }
}

ListTranscodeJobsResponse Alibabacloud_ICE20201109::Client::listTranscodeJobs(shared_ptr<ListTranscodeJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTranscodeJobsWithOptions(request, runtime);
}

ListVodPackagingAssetsResponse Alibabacloud_ICE20201109::Client::listVodPackagingAssetsWithOptions(shared_ptr<ListVodPackagingAssetsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->groupName)) {
    query->insert(pair<string, string>("GroupName", *request->groupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyword)) {
    query->insert(pair<string, string>("Keyword", *request->keyword));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortBy)) {
    query->insert(pair<string, string>("SortBy", *request->sortBy));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListVodPackagingAssets"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListVodPackagingAssetsResponse(callApi(params, req, runtime));
  }
  else {
    return ListVodPackagingAssetsResponse(execute(params, req, runtime));
  }
}

ListVodPackagingAssetsResponse Alibabacloud_ICE20201109::Client::listVodPackagingAssets(shared_ptr<ListVodPackagingAssetsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listVodPackagingAssetsWithOptions(request, runtime);
}

ListVodPackagingConfigurationsResponse Alibabacloud_ICE20201109::Client::listVodPackagingConfigurationsWithOptions(shared_ptr<ListVodPackagingConfigurationsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->groupName)) {
    query->insert(pair<string, string>("GroupName", *request->groupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyword)) {
    query->insert(pair<string, string>("Keyword", *request->keyword));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortBy)) {
    query->insert(pair<string, string>("SortBy", *request->sortBy));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListVodPackagingConfigurations"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListVodPackagingConfigurationsResponse(callApi(params, req, runtime));
  }
  else {
    return ListVodPackagingConfigurationsResponse(execute(params, req, runtime));
  }
}

ListVodPackagingConfigurationsResponse Alibabacloud_ICE20201109::Client::listVodPackagingConfigurations(shared_ptr<ListVodPackagingConfigurationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listVodPackagingConfigurationsWithOptions(request, runtime);
}

ListVodPackagingGroupsResponse Alibabacloud_ICE20201109::Client::listVodPackagingGroupsWithOptions(shared_ptr<ListVodPackagingGroupsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->keyword)) {
    query->insert(pair<string, string>("Keyword", *request->keyword));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortBy)) {
    query->insert(pair<string, string>("SortBy", *request->sortBy));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListVodPackagingGroups"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return ListVodPackagingGroupsResponse(callApi(params, req, runtime));
  }
  else {
    return ListVodPackagingGroupsResponse(execute(params, req, runtime));
  }
}

ListVodPackagingGroupsResponse Alibabacloud_ICE20201109::Client::listVodPackagingGroups(shared_ptr<ListVodPackagingGroupsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listVodPackagingGroupsWithOptions(request, runtime);
}

QueryCopyrightExtractJobResponse Alibabacloud_ICE20201109::Client::queryCopyrightExtractJobWithOptions(shared_ptr<QueryCopyrightExtractJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryCopyrightExtractJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return QueryCopyrightExtractJobResponse(callApi(params, req, runtime));
  }
  else {
    return QueryCopyrightExtractJobResponse(execute(params, req, runtime));
  }
}

QueryCopyrightExtractJobResponse Alibabacloud_ICE20201109::Client::queryCopyrightExtractJob(shared_ptr<QueryCopyrightExtractJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryCopyrightExtractJobWithOptions(request, runtime);
}

QueryCopyrightJobListResponse Alibabacloud_ICE20201109::Client::queryCopyrightJobListWithOptions(shared_ptr<QueryCopyrightJobListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->createTimeEnd)) {
    query->insert(pair<string, long>("CreateTimeEnd", *request->createTimeEnd));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->createTimeStart)) {
    query->insert(pair<string, long>("CreateTimeStart", *request->createTimeStart));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->level)) {
    query->insert(pair<string, long>("Level", *request->level));
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
    {"action", boost::any(string("QueryCopyrightJobList"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return QueryCopyrightJobListResponse(callApi(params, req, runtime));
  }
  else {
    return QueryCopyrightJobListResponse(execute(params, req, runtime));
  }
}

QueryCopyrightJobListResponse Alibabacloud_ICE20201109::Client::queryCopyrightJobList(shared_ptr<QueryCopyrightJobListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryCopyrightJobListWithOptions(request, runtime);
}

QueryDNAJobListResponse Alibabacloud_ICE20201109::Client::queryDNAJobListWithOptions(shared_ptr<QueryDNAJobListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jobIds)) {
    query->insert(pair<string, string>("JobIds", *request->jobIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryDNAJobList"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return QueryDNAJobListResponse(callApi(params, req, runtime));
  }
  else {
    return QueryDNAJobListResponse(execute(params, req, runtime));
  }
}

QueryDNAJobListResponse Alibabacloud_ICE20201109::Client::queryDNAJobList(shared_ptr<QueryDNAJobListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryDNAJobListWithOptions(request, runtime);
}

QueryIProductionJobResponse Alibabacloud_ICE20201109::Client::queryIProductionJobWithOptions(shared_ptr<QueryIProductionJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryIProductionJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return QueryIProductionJobResponse(callApi(params, req, runtime));
  }
  else {
    return QueryIProductionJobResponse(execute(params, req, runtime));
  }
}

QueryIProductionJobResponse Alibabacloud_ICE20201109::Client::queryIProductionJob(shared_ptr<QueryIProductionJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryIProductionJobWithOptions(request, runtime);
}

QueryMediaCensorJobDetailResponse Alibabacloud_ICE20201109::Client::queryMediaCensorJobDetailWithOptions(shared_ptr<QueryMediaCensorJobDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maximumPageSize)) {
    query->insert(pair<string, long>("MaximumPageSize", *request->maximumPageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextPageToken)) {
    query->insert(pair<string, string>("NextPageToken", *request->nextPageToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryMediaCensorJobDetail"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return QueryMediaCensorJobDetailResponse(callApi(params, req, runtime));
  }
  else {
    return QueryMediaCensorJobDetailResponse(execute(params, req, runtime));
  }
}

QueryMediaCensorJobDetailResponse Alibabacloud_ICE20201109::Client::queryMediaCensorJobDetail(shared_ptr<QueryMediaCensorJobDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryMediaCensorJobDetailWithOptions(request, runtime);
}

QueryMediaCensorJobListResponse Alibabacloud_ICE20201109::Client::queryMediaCensorJobListWithOptions(shared_ptr<QueryMediaCensorJobListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endOfJobCreatedTimeRange)) {
    query->insert(pair<string, string>("EndOfJobCreatedTimeRange", *request->endOfJobCreatedTimeRange));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobIds)) {
    query->insert(pair<string, string>("JobIds", *request->jobIds));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maximumPageSize)) {
    query->insert(pair<string, long>("MaximumPageSize", *request->maximumPageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextPageToken)) {
    query->insert(pair<string, string>("NextPageToken", *request->nextPageToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pipelineId)) {
    query->insert(pair<string, string>("PipelineId", *request->pipelineId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startOfJobCreatedTimeRange)) {
    query->insert(pair<string, string>("StartOfJobCreatedTimeRange", *request->startOfJobCreatedTimeRange));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->state)) {
    query->insert(pair<string, string>("State", *request->state));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryMediaCensorJobList"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return QueryMediaCensorJobListResponse(callApi(params, req, runtime));
  }
  else {
    return QueryMediaCensorJobListResponse(execute(params, req, runtime));
  }
}

QueryMediaCensorJobListResponse Alibabacloud_ICE20201109::Client::queryMediaCensorJobList(shared_ptr<QueryMediaCensorJobListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryMediaCensorJobListWithOptions(request, runtime);
}

QueryMediaIndexJobResponse Alibabacloud_ICE20201109::Client::queryMediaIndexJobWithOptions(shared_ptr<QueryMediaIndexJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaId)) {
    query->insert(pair<string, string>("MediaId", *request->mediaId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchLibName)) {
    query->insert(pair<string, string>("SearchLibName", *request->searchLibName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryMediaIndexJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return QueryMediaIndexJobResponse(callApi(params, req, runtime));
  }
  else {
    return QueryMediaIndexJobResponse(execute(params, req, runtime));
  }
}

QueryMediaIndexJobResponse Alibabacloud_ICE20201109::Client::queryMediaIndexJob(shared_ptr<QueryMediaIndexJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryMediaIndexJobWithOptions(request, runtime);
}

QuerySearchIndexResponse Alibabacloud_ICE20201109::Client::querySearchIndexWithOptions(shared_ptr<QuerySearchIndexRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->indexType)) {
    query->insert(pair<string, string>("IndexType", *request->indexType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchLibName)) {
    query->insert(pair<string, string>("SearchLibName", *request->searchLibName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QuerySearchIndex"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return QuerySearchIndexResponse(callApi(params, req, runtime));
  }
  else {
    return QuerySearchIndexResponse(execute(params, req, runtime));
  }
}

QuerySearchIndexResponse Alibabacloud_ICE20201109::Client::querySearchIndex(shared_ptr<QuerySearchIndexRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return querySearchIndexWithOptions(request, runtime);
}

QuerySearchLibResponse Alibabacloud_ICE20201109::Client::querySearchLibWithOptions(shared_ptr<QuerySearchLibRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->searchLibName)) {
    query->insert(pair<string, string>("SearchLibName", *request->searchLibName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QuerySearchLib"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return QuerySearchLibResponse(callApi(params, req, runtime));
  }
  else {
    return QuerySearchLibResponse(execute(params, req, runtime));
  }
}

QuerySearchLibResponse Alibabacloud_ICE20201109::Client::querySearchLib(shared_ptr<QuerySearchLibRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return querySearchLibWithOptions(request, runtime);
}

QuerySmarttagJobResponse Alibabacloud_ICE20201109::Client::querySmarttagJobWithOptions(shared_ptr<QuerySmarttagJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->params)) {
    query->insert(pair<string, string>("Params", *request->params));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QuerySmarttagJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return QuerySmarttagJobResponse(callApi(params, req, runtime));
  }
  else {
    return QuerySmarttagJobResponse(execute(params, req, runtime));
  }
}

QuerySmarttagJobResponse Alibabacloud_ICE20201109::Client::querySmarttagJob(shared_ptr<QuerySmarttagJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return querySmarttagJobWithOptions(request, runtime);
}

QueryTraceAbJobListResponse Alibabacloud_ICE20201109::Client::queryTraceAbJobListWithOptions(shared_ptr<QueryTraceAbJobListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->createTimeEnd)) {
    query->insert(pair<string, long>("CreateTimeEnd", *request->createTimeEnd));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->createTimeStart)) {
    query->insert(pair<string, long>("CreateTimeStart", *request->createTimeStart));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->traceMediaId)) {
    query->insert(pair<string, string>("TraceMediaId", *request->traceMediaId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryTraceAbJobList"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return QueryTraceAbJobListResponse(callApi(params, req, runtime));
  }
  else {
    return QueryTraceAbJobListResponse(execute(params, req, runtime));
  }
}

QueryTraceAbJobListResponse Alibabacloud_ICE20201109::Client::queryTraceAbJobList(shared_ptr<QueryTraceAbJobListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryTraceAbJobListWithOptions(request, runtime);
}

QueryTraceExtractJobResponse Alibabacloud_ICE20201109::Client::queryTraceExtractJobWithOptions(shared_ptr<QueryTraceExtractJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryTraceExtractJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return QueryTraceExtractJobResponse(callApi(params, req, runtime));
  }
  else {
    return QueryTraceExtractJobResponse(execute(params, req, runtime));
  }
}

QueryTraceExtractJobResponse Alibabacloud_ICE20201109::Client::queryTraceExtractJob(shared_ptr<QueryTraceExtractJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryTraceExtractJobWithOptions(request, runtime);
}

QueryTraceM3u8JobListResponse Alibabacloud_ICE20201109::Client::queryTraceM3u8JobListWithOptions(shared_ptr<QueryTraceM3u8JobListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->createTimeEnd)) {
    query->insert(pair<string, long>("CreateTimeEnd", *request->createTimeEnd));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->createTimeStart)) {
    query->insert(pair<string, long>("CreateTimeStart", *request->createTimeStart));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
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
    {"action", boost::any(string("QueryTraceM3u8JobList"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return QueryTraceM3u8JobListResponse(callApi(params, req, runtime));
  }
  else {
    return QueryTraceM3u8JobListResponse(execute(params, req, runtime));
  }
}

QueryTraceM3u8JobListResponse Alibabacloud_ICE20201109::Client::queryTraceM3u8JobList(shared_ptr<QueryTraceM3u8JobListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryTraceM3u8JobListWithOptions(request, runtime);
}

RefreshUploadMediaResponse Alibabacloud_ICE20201109::Client::refreshUploadMediaWithOptions(shared_ptr<RefreshUploadMediaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaId)) {
    query->insert(pair<string, string>("MediaId", *request->mediaId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RefreshUploadMedia"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return RefreshUploadMediaResponse(callApi(params, req, runtime));
  }
  else {
    return RefreshUploadMediaResponse(execute(params, req, runtime));
  }
}

RefreshUploadMediaResponse Alibabacloud_ICE20201109::Client::refreshUploadMedia(shared_ptr<RefreshUploadMediaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return refreshUploadMediaWithOptions(request, runtime);
}

RegisterMediaInfoResponse Alibabacloud_ICE20201109::Client::registerMediaInfoWithOptions(shared_ptr<RegisterMediaInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->businessType)) {
    query->insert(pair<string, string>("BusinessType", *request->businessType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->cateId)) {
    query->insert(pair<string, long>("CateId", *request->cateId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->coverURL)) {
    query->insert(pair<string, string>("CoverURL", *request->coverURL));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputURL)) {
    query->insert(pair<string, string>("InputURL", *request->inputURL));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaTags)) {
    query->insert(pair<string, string>("MediaTags", *request->mediaTags));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaType)) {
    query->insert(pair<string, string>("MediaType", *request->mediaType));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->overwrite)) {
    query->insert(pair<string, bool>("Overwrite", *request->overwrite));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->referenceId)) {
    query->insert(pair<string, string>("ReferenceId", *request->referenceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->registerConfig)) {
    query->insert(pair<string, string>("RegisterConfig", *request->registerConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->smartTagTemplateId)) {
    query->insert(pair<string, string>("SmartTagTemplateId", *request->smartTagTemplateId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    query->insert(pair<string, string>("Title", *request->title));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    query->insert(pair<string, string>("UserData", *request->userData));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workflowId)) {
    query->insert(pair<string, string>("WorkflowId", *request->workflowId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RegisterMediaInfo"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return RegisterMediaInfoResponse(callApi(params, req, runtime));
  }
  else {
    return RegisterMediaInfoResponse(execute(params, req, runtime));
  }
}

RegisterMediaInfoResponse Alibabacloud_ICE20201109::Client::registerMediaInfo(shared_ptr<RegisterMediaInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return registerMediaInfoWithOptions(request, runtime);
}

RegisterMediaStreamResponse Alibabacloud_ICE20201109::Client::registerMediaStreamWithOptions(shared_ptr<RegisterMediaStreamRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->inputURL)) {
    query->insert(pair<string, string>("InputURL", *request->inputURL));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaId)) {
    query->insert(pair<string, string>("MediaId", *request->mediaId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    query->insert(pair<string, string>("UserData", *request->userData));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RegisterMediaStream"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return RegisterMediaStreamResponse(callApi(params, req, runtime));
  }
  else {
    return RegisterMediaStreamResponse(execute(params, req, runtime));
  }
}

RegisterMediaStreamResponse Alibabacloud_ICE20201109::Client::registerMediaStream(shared_ptr<RegisterMediaStreamRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return registerMediaStreamWithOptions(request, runtime);
}

SearchEditingProjectResponse Alibabacloud_ICE20201109::Client::searchEditingProjectWithOptions(shared_ptr<SearchEditingProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->createSource)) {
    query->insert(pair<string, string>("CreateSource", *request->createSource));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectType)) {
    query->insert(pair<string, string>("ProjectType", *request->projectType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortBy)) {
    query->insert(pair<string, string>("SortBy", *request->sortBy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateType)) {
    query->insert(pair<string, string>("TemplateType", *request->templateType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SearchEditingProject"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SearchEditingProjectResponse(callApi(params, req, runtime));
  }
  else {
    return SearchEditingProjectResponse(execute(params, req, runtime));
  }
}

SearchEditingProjectResponse Alibabacloud_ICE20201109::Client::searchEditingProject(shared_ptr<SearchEditingProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return searchEditingProjectWithOptions(request, runtime);
}

SearchIndexJobRerunResponse Alibabacloud_ICE20201109::Client::searchIndexJobRerunWithOptions(shared_ptr<SearchIndexJobRerunRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaIds)) {
    query->insert(pair<string, string>("MediaIds", *request->mediaIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchLibName)) {
    query->insert(pair<string, string>("SearchLibName", *request->searchLibName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->task)) {
    query->insert(pair<string, string>("Task", *request->task));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SearchIndexJobRerun"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SearchIndexJobRerunResponse(callApi(params, req, runtime));
  }
  else {
    return SearchIndexJobRerunResponse(execute(params, req, runtime));
  }
}

SearchIndexJobRerunResponse Alibabacloud_ICE20201109::Client::searchIndexJobRerun(shared_ptr<SearchIndexJobRerunRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return searchIndexJobRerunWithOptions(request, runtime);
}

SearchMediaResponse Alibabacloud_ICE20201109::Client::searchMediaWithOptions(shared_ptr<SearchMediaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->entityId)) {
    query->insert(pair<string, string>("EntityId", *request->entityId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->match)) {
    query->insert(pair<string, string>("Match", *request->match));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scrollToken)) {
    query->insert(pair<string, string>("ScrollToken", *request->scrollToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchLibName)) {
    query->insert(pair<string, string>("SearchLibName", *request->searchLibName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortBy)) {
    query->insert(pair<string, string>("SortBy", *request->sortBy));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SearchMedia"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SearchMediaResponse(callApi(params, req, runtime));
  }
  else {
    return SearchMediaResponse(execute(params, req, runtime));
  }
}

SearchMediaResponse Alibabacloud_ICE20201109::Client::searchMedia(shared_ptr<SearchMediaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return searchMediaWithOptions(request, runtime);
}

SearchMediaByAILabelResponse Alibabacloud_ICE20201109::Client::searchMediaByAILabelWithOptions(shared_ptr<SearchMediaByAILabelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->matchingMode)) {
    query->insert(pair<string, string>("MatchingMode", *request->matchingMode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaId)) {
    query->insert(pair<string, string>("MediaId", *request->mediaId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaType)) {
    query->insert(pair<string, string>("MediaType", *request->mediaType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->multimodalSearchType)) {
    query->insert(pair<string, string>("MultimodalSearchType", *request->multimodalSearchType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchLibName)) {
    query->insert(pair<string, string>("SearchLibName", *request->searchLibName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortBy)) {
    query->insert(pair<string, string>("SortBy", *request->sortBy));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->specificSearch)) {
    query->insert(pair<string, bool>("SpecificSearch", *request->specificSearch));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->text)) {
    query->insert(pair<string, string>("Text", *request->text));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SearchMediaByAILabel"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SearchMediaByAILabelResponse(callApi(params, req, runtime));
  }
  else {
    return SearchMediaByAILabelResponse(execute(params, req, runtime));
  }
}

SearchMediaByAILabelResponse Alibabacloud_ICE20201109::Client::searchMediaByAILabel(shared_ptr<SearchMediaByAILabelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return searchMediaByAILabelWithOptions(request, runtime);
}

SearchMediaByFaceResponse Alibabacloud_ICE20201109::Client::searchMediaByFaceWithOptions(shared_ptr<SearchMediaByFaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->entityId)) {
    query->insert(pair<string, string>("EntityId", *request->entityId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->faceSearchToken)) {
    query->insert(pair<string, string>("FaceSearchToken", *request->faceSearchToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaType)) {
    query->insert(pair<string, string>("MediaType", *request->mediaType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->personImageUrl)) {
    query->insert(pair<string, string>("PersonImageUrl", *request->personImageUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchLibName)) {
    query->insert(pair<string, string>("SearchLibName", *request->searchLibName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SearchMediaByFace"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SearchMediaByFaceResponse(callApi(params, req, runtime));
  }
  else {
    return SearchMediaByFaceResponse(execute(params, req, runtime));
  }
}

SearchMediaByFaceResponse Alibabacloud_ICE20201109::Client::searchMediaByFace(shared_ptr<SearchMediaByFaceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return searchMediaByFaceWithOptions(request, runtime);
}

SearchMediaByHybridResponse Alibabacloud_ICE20201109::Client::searchMediaByHybridWithOptions(shared_ptr<SearchMediaByHybridRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaId)) {
    query->insert(pair<string, string>("MediaId", *request->mediaId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaType)) {
    query->insert(pair<string, string>("MediaType", *request->mediaType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchLibName)) {
    query->insert(pair<string, string>("SearchLibName", *request->searchLibName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->text)) {
    query->insert(pair<string, string>("Text", *request->text));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SearchMediaByHybrid"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SearchMediaByHybridResponse(callApi(params, req, runtime));
  }
  else {
    return SearchMediaByHybridResponse(execute(params, req, runtime));
  }
}

SearchMediaByHybridResponse Alibabacloud_ICE20201109::Client::searchMediaByHybrid(shared_ptr<SearchMediaByHybridRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return searchMediaByHybridWithOptions(request, runtime);
}

SearchMediaByMultimodalResponse Alibabacloud_ICE20201109::Client::searchMediaByMultimodalWithOptions(shared_ptr<SearchMediaByMultimodalRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaType)) {
    query->insert(pair<string, string>("MediaType", *request->mediaType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchLibName)) {
    query->insert(pair<string, string>("SearchLibName", *request->searchLibName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->text)) {
    query->insert(pair<string, string>("Text", *request->text));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SearchMediaByMultimodal"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SearchMediaByMultimodalResponse(callApi(params, req, runtime));
  }
  else {
    return SearchMediaByMultimodalResponse(execute(params, req, runtime));
  }
}

SearchMediaByMultimodalResponse Alibabacloud_ICE20201109::Client::searchMediaByMultimodal(shared_ptr<SearchMediaByMultimodalRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return searchMediaByMultimodalWithOptions(request, runtime);
}

SearchMediaClipByFaceResponse Alibabacloud_ICE20201109::Client::searchMediaClipByFaceWithOptions(shared_ptr<SearchMediaClipByFaceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->entityId)) {
    query->insert(pair<string, string>("EntityId", *request->entityId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->faceSearchToken)) {
    query->insert(pair<string, string>("FaceSearchToken", *request->faceSearchToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaId)) {
    query->insert(pair<string, string>("MediaId", *request->mediaId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchLibName)) {
    query->insert(pair<string, string>("SearchLibName", *request->searchLibName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SearchMediaClipByFace"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SearchMediaClipByFaceResponse(callApi(params, req, runtime));
  }
  else {
    return SearchMediaClipByFaceResponse(execute(params, req, runtime));
  }
}

SearchMediaClipByFaceResponse Alibabacloud_ICE20201109::Client::searchMediaClipByFace(shared_ptr<SearchMediaClipByFaceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return searchMediaClipByFaceWithOptions(request, runtime);
}

SearchPublicMediaInfoResponse Alibabacloud_ICE20201109::Client::searchPublicMediaInfoWithOptions(shared_ptr<SearchPublicMediaInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->authorized)) {
    query->insert(pair<string, bool>("Authorized", *request->authorized));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dynamicMetaDataMatchFields)) {
    query->insert(pair<string, string>("DynamicMetaDataMatchFields", *request->dynamicMetaDataMatchFields));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->entityId)) {
    query->insert(pair<string, string>("EntityId", *request->entityId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->favorite)) {
    query->insert(pair<string, bool>("Favorite", *request->favorite));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaIds)) {
    query->insert(pair<string, string>("MediaIds", *request->mediaIds));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortBy)) {
    query->insert(pair<string, string>("SortBy", *request->sortBy));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SearchPublicMediaInfo"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SearchPublicMediaInfoResponse(callApi(params, req, runtime));
  }
  else {
    return SearchPublicMediaInfoResponse(execute(params, req, runtime));
  }
}

SearchPublicMediaInfoResponse Alibabacloud_ICE20201109::Client::searchPublicMediaInfo(shared_ptr<SearchPublicMediaInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return searchPublicMediaInfoWithOptions(request, runtime);
}

SendAIAgentDataChannelMessageResponse Alibabacloud_ICE20201109::Client::sendAIAgentDataChannelMessageWithOptions(shared_ptr<SendAIAgentDataChannelMessageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->message)) {
    query->insert(pair<string, string>("Message", *request->message));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SendAIAgentDataChannelMessage"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SendAIAgentDataChannelMessageResponse(callApi(params, req, runtime));
  }
  else {
    return SendAIAgentDataChannelMessageResponse(execute(params, req, runtime));
  }
}

SendAIAgentDataChannelMessageResponse Alibabacloud_ICE20201109::Client::sendAIAgentDataChannelMessage(shared_ptr<SendAIAgentDataChannelMessageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return sendAIAgentDataChannelMessageWithOptions(request, runtime);
}

SendAIAgentSpeechResponse Alibabacloud_ICE20201109::Client::sendAIAgentSpeechWithOptions(shared_ptr<SendAIAgentSpeechRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableInterrupt)) {
    query->insert(pair<string, bool>("EnableInterrupt", *request->enableInterrupt));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->text)) {
    query->insert(pair<string, string>("Text", *request->text));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SendAIAgentSpeech"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SendAIAgentSpeechResponse(callApi(params, req, runtime));
  }
  else {
    return SendAIAgentSpeechResponse(execute(params, req, runtime));
  }
}

SendAIAgentSpeechResponse Alibabacloud_ICE20201109::Client::sendAIAgentSpeech(shared_ptr<SendAIAgentSpeechRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return sendAIAgentSpeechWithOptions(request, runtime);
}

SendAIAgentTextResponse Alibabacloud_ICE20201109::Client::sendAIAgentTextWithOptions(shared_ptr<SendAIAgentTextRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->text)) {
    query->insert(pair<string, string>("Text", *request->text));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SendAIAgentText"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SendAIAgentTextResponse(callApi(params, req, runtime));
  }
  else {
    return SendAIAgentTextResponse(execute(params, req, runtime));
  }
}

SendAIAgentTextResponse Alibabacloud_ICE20201109::Client::sendAIAgentText(shared_ptr<SendAIAgentTextRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return sendAIAgentTextWithOptions(request, runtime);
}

SendLiveSnapshotJobCommandResponse Alibabacloud_ICE20201109::Client::sendLiveSnapshotJobCommandWithOptions(shared_ptr<SendLiveSnapshotJobCommandRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->command)) {
    body->insert(pair<string, string>("Command", *request->command));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    body->insert(pair<string, string>("JobId", *request->jobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SendLiveSnapshotJobCommand"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SendLiveSnapshotJobCommandResponse(callApi(params, req, runtime));
  }
  else {
    return SendLiveSnapshotJobCommandResponse(execute(params, req, runtime));
  }
}

SendLiveSnapshotJobCommandResponse Alibabacloud_ICE20201109::Client::sendLiveSnapshotJobCommand(shared_ptr<SendLiveSnapshotJobCommandRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return sendLiveSnapshotJobCommandWithOptions(request, runtime);
}

SendLiveTranscodeJobCommandResponse Alibabacloud_ICE20201109::Client::sendLiveTranscodeJobCommandWithOptions(shared_ptr<SendLiveTranscodeJobCommandRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->command)) {
    query->insert(pair<string, string>("Command", *request->command));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SendLiveTranscodeJobCommand"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SendLiveTranscodeJobCommandResponse(callApi(params, req, runtime));
  }
  else {
    return SendLiveTranscodeJobCommandResponse(execute(params, req, runtime));
  }
}

SendLiveTranscodeJobCommandResponse Alibabacloud_ICE20201109::Client::sendLiveTranscodeJobCommand(shared_ptr<SendLiveTranscodeJobCommandRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return sendLiveTranscodeJobCommandWithOptions(request, runtime);
}

SendMessageChatTextResponse Alibabacloud_ICE20201109::Client::sendMessageChatTextWithOptions(shared_ptr<SendMessageChatTextRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->AIAgentId)) {
    query->insert(pair<string, string>("AIAgentId", *request->AIAgentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mode)) {
    query->insert(pair<string, string>("Mode", *request->mode));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->needArchiving)) {
    query->insert(pair<string, bool>("NeedArchiving", *request->needArchiving));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->receiverId)) {
    query->insert(pair<string, string>("ReceiverId", *request->receiverId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionId)) {
    query->insert(pair<string, string>("SessionId", *request->sessionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->text)) {
    query->insert(pair<string, string>("Text", *request->text));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SendMessageChatText"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SendMessageChatTextResponse(callApi(params, req, runtime));
  }
  else {
    return SendMessageChatTextResponse(execute(params, req, runtime));
  }
}

SendMessageChatTextResponse Alibabacloud_ICE20201109::Client::sendMessageChatText(shared_ptr<SendMessageChatTextRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return sendMessageChatTextWithOptions(request, runtime);
}

SetContentAnalyzeConfigResponse Alibabacloud_ICE20201109::Client::setContentAnalyzeConfigWithOptions(shared_ptr<SetContentAnalyzeConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->auto_)) {
    query->insert(pair<string, bool>("Auto_", *request->auto_));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->saveType)) {
    query->insert(pair<string, string>("SaveType", *request->saveType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    query->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetContentAnalyzeConfig"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SetContentAnalyzeConfigResponse(callApi(params, req, runtime));
  }
  else {
    return SetContentAnalyzeConfigResponse(execute(params, req, runtime));
  }
}

SetContentAnalyzeConfigResponse Alibabacloud_ICE20201109::Client::setContentAnalyzeConfig(shared_ptr<SetContentAnalyzeConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setContentAnalyzeConfigWithOptions(request, runtime);
}

SetDefaultCustomTemplateResponse Alibabacloud_ICE20201109::Client::setDefaultCustomTemplateWithOptions(shared_ptr<SetDefaultCustomTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    query->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetDefaultCustomTemplate"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SetDefaultCustomTemplateResponse(callApi(params, req, runtime));
  }
  else {
    return SetDefaultCustomTemplateResponse(execute(params, req, runtime));
  }
}

SetDefaultCustomTemplateResponse Alibabacloud_ICE20201109::Client::setDefaultCustomTemplate(shared_ptr<SetDefaultCustomTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setDefaultCustomTemplateWithOptions(request, runtime);
}

SetDefaultStorageLocationResponse Alibabacloud_ICE20201109::Client::setDefaultStorageLocationWithOptions(shared_ptr<SetDefaultStorageLocationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bucket)) {
    query->insert(pair<string, string>("Bucket", *request->bucket));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->path)) {
    query->insert(pair<string, string>("Path", *request->path));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->storageType)) {
    query->insert(pair<string, string>("StorageType", *request->storageType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetDefaultStorageLocation"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SetDefaultStorageLocationResponse(callApi(params, req, runtime));
  }
  else {
    return SetDefaultStorageLocationResponse(execute(params, req, runtime));
  }
}

SetDefaultStorageLocationResponse Alibabacloud_ICE20201109::Client::setDefaultStorageLocation(shared_ptr<SetDefaultStorageLocationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setDefaultStorageLocationWithOptions(request, runtime);
}

SetEventCallbackResponse Alibabacloud_ICE20201109::Client::setEventCallbackWithOptions(shared_ptr<SetEventCallbackRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->authKey)) {
    query->insert(pair<string, string>("AuthKey", *request->authKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->authSwitch)) {
    query->insert(pair<string, string>("AuthSwitch", *request->authSwitch));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->callbackQueueName)) {
    query->insert(pair<string, string>("CallbackQueueName", *request->callbackQueueName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->callbackType)) {
    query->insert(pair<string, string>("CallbackType", *request->callbackType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->callbackURL)) {
    query->insert(pair<string, string>("CallbackURL", *request->callbackURL));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventTypeList)) {
    query->insert(pair<string, string>("EventTypeList", *request->eventTypeList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetEventCallback"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SetEventCallbackResponse(callApi(params, req, runtime));
  }
  else {
    return SetEventCallbackResponse(execute(params, req, runtime));
  }
}

SetEventCallbackResponse Alibabacloud_ICE20201109::Client::setEventCallback(shared_ptr<SetEventCallbackRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setEventCallbackWithOptions(request, runtime);
}

SetNotifyConfigResponse Alibabacloud_ICE20201109::Client::setNotifyConfigWithOptions(shared_ptr<SetNotifyConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->AIAgentId)) {
    query->insert(pair<string, string>("AIAgentId", *request->AIAgentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->callbackUrl)) {
    query->insert(pair<string, string>("CallbackUrl", *request->callbackUrl));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableNotify)) {
    query->insert(pair<string, bool>("EnableNotify", *request->enableNotify));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventTypes)) {
    query->insert(pair<string, string>("EventTypes", *request->eventTypes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->token)) {
    query->insert(pair<string, string>("Token", *request->token));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetNotifyConfig"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SetNotifyConfigResponse(callApi(params, req, runtime));
  }
  else {
    return SetNotifyConfigResponse(execute(params, req, runtime));
  }
}

SetNotifyConfigResponse Alibabacloud_ICE20201109::Client::setNotifyConfig(shared_ptr<SetNotifyConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setNotifyConfigWithOptions(request, runtime);
}

StartAIAgentInstanceResponse Alibabacloud_ICE20201109::Client::startAIAgentInstanceWithOptions(shared_ptr<StartAIAgentInstanceRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<StartAIAgentInstanceShrinkRequest> request = make_shared<StartAIAgentInstanceShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<StartAIAgentInstanceRequestChatSyncConfig>(tmpReq->chatSyncConfig)) {
    request->chatSyncConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->chatSyncConfig, make_shared<string>("ChatSyncConfig"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<AIAgentRuntimeConfig>(tmpReq->runtimeConfig)) {
    request->runtimeConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->runtimeConfig, make_shared<string>("RuntimeConfig"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<AIAgentTemplateConfig>(tmpReq->templateConfig)) {
    request->templateConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->templateConfig, make_shared<string>("TemplateConfig"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->AIAgentId)) {
    query->insert(pair<string, string>("AIAgentId", *request->AIAgentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->chatSyncConfigShrink)) {
    query->insert(pair<string, string>("ChatSyncConfig", *request->chatSyncConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->runtimeConfigShrink)) {
    query->insert(pair<string, string>("RuntimeConfig", *request->runtimeConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sessionId)) {
    query->insert(pair<string, string>("SessionId", *request->sessionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateConfigShrink)) {
    query->insert(pair<string, string>("TemplateConfig", *request->templateConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    query->insert(pair<string, string>("UserData", *request->userData));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartAIAgentInstance"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return StartAIAgentInstanceResponse(callApi(params, req, runtime));
  }
  else {
    return StartAIAgentInstanceResponse(execute(params, req, runtime));
  }
}

StartAIAgentInstanceResponse Alibabacloud_ICE20201109::Client::startAIAgentInstance(shared_ptr<StartAIAgentInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startAIAgentInstanceWithOptions(request, runtime);
}

StartChannelResponse Alibabacloud_ICE20201109::Client::startChannelWithOptions(shared_ptr<StartChannelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->channelName)) {
    query->insert(pair<string, string>("ChannelName", *request->channelName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartChannel"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return StartChannelResponse(callApi(params, req, runtime));
  }
  else {
    return StartChannelResponse(execute(params, req, runtime));
  }
}

StartChannelResponse Alibabacloud_ICE20201109::Client::startChannel(shared_ptr<StartChannelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startChannelWithOptions(request, runtime);
}

StartMediaLiveChannelResponse Alibabacloud_ICE20201109::Client::startMediaLiveChannelWithOptions(shared_ptr<StartMediaLiveChannelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->channelId)) {
    body->insert(pair<string, string>("ChannelId", *request->channelId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartMediaLiveChannel"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return StartMediaLiveChannelResponse(callApi(params, req, runtime));
  }
  else {
    return StartMediaLiveChannelResponse(execute(params, req, runtime));
  }
}

StartMediaLiveChannelResponse Alibabacloud_ICE20201109::Client::startMediaLiveChannel(shared_ptr<StartMediaLiveChannelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startMediaLiveChannelWithOptions(request, runtime);
}

StartRtcRobotInstanceResponse Alibabacloud_ICE20201109::Client::startRtcRobotInstanceWithOptions(shared_ptr<StartRtcRobotInstanceRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<StartRtcRobotInstanceShrinkRequest> request = make_shared<StartRtcRobotInstanceShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<StartRtcRobotInstanceRequestConfig>(tmpReq->config)) {
    request->configShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->config, make_shared<string>("Config"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->authToken)) {
    query->insert(pair<string, string>("AuthToken", *request->authToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->channelId)) {
    query->insert(pair<string, string>("ChannelId", *request->channelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->configShrink)) {
    query->insert(pair<string, string>("Config", *request->configShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->robotId)) {
    query->insert(pair<string, string>("RobotId", *request->robotId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    query->insert(pair<string, string>("UserData", *request->userData));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartRtcRobotInstance"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return StartRtcRobotInstanceResponse(callApi(params, req, runtime));
  }
  else {
    return StartRtcRobotInstanceResponse(execute(params, req, runtime));
  }
}

StartRtcRobotInstanceResponse Alibabacloud_ICE20201109::Client::startRtcRobotInstance(shared_ptr<StartRtcRobotInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startRtcRobotInstanceWithOptions(request, runtime);
}

StartWorkflowResponse Alibabacloud_ICE20201109::Client::startWorkflowWithOptions(shared_ptr<StartWorkflowRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->taskInput)) {
    query->insert(pair<string, string>("TaskInput", *request->taskInput));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    query->insert(pair<string, string>("UserData", *request->userData));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->workflowId)) {
    query->insert(pair<string, string>("WorkflowId", *request->workflowId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartWorkflow"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return StartWorkflowResponse(callApi(params, req, runtime));
  }
  else {
    return StartWorkflowResponse(execute(params, req, runtime));
  }
}

StartWorkflowResponse Alibabacloud_ICE20201109::Client::startWorkflow(shared_ptr<StartWorkflowRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startWorkflowWithOptions(request, runtime);
}

StopAIAgentInstanceResponse Alibabacloud_ICE20201109::Client::stopAIAgentInstanceWithOptions(shared_ptr<StopAIAgentInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopAIAgentInstance"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return StopAIAgentInstanceResponse(callApi(params, req, runtime));
  }
  else {
    return StopAIAgentInstanceResponse(execute(params, req, runtime));
  }
}

StopAIAgentInstanceResponse Alibabacloud_ICE20201109::Client::stopAIAgentInstance(shared_ptr<StopAIAgentInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopAIAgentInstanceWithOptions(request, runtime);
}

StopChannelResponse Alibabacloud_ICE20201109::Client::stopChannelWithOptions(shared_ptr<StopChannelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->channelName)) {
    query->insert(pair<string, string>("ChannelName", *request->channelName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopChannel"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return StopChannelResponse(callApi(params, req, runtime));
  }
  else {
    return StopChannelResponse(execute(params, req, runtime));
  }
}

StopChannelResponse Alibabacloud_ICE20201109::Client::stopChannel(shared_ptr<StopChannelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopChannelWithOptions(request, runtime);
}

StopMediaLiveChannelResponse Alibabacloud_ICE20201109::Client::stopMediaLiveChannelWithOptions(shared_ptr<StopMediaLiveChannelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->channelId)) {
    body->insert(pair<string, string>("ChannelId", *request->channelId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopMediaLiveChannel"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return StopMediaLiveChannelResponse(callApi(params, req, runtime));
  }
  else {
    return StopMediaLiveChannelResponse(execute(params, req, runtime));
  }
}

StopMediaLiveChannelResponse Alibabacloud_ICE20201109::Client::stopMediaLiveChannel(shared_ptr<StopMediaLiveChannelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopMediaLiveChannelWithOptions(request, runtime);
}

StopRtcRobotInstanceResponse Alibabacloud_ICE20201109::Client::stopRtcRobotInstanceWithOptions(shared_ptr<StopRtcRobotInstanceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopRtcRobotInstance"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return StopRtcRobotInstanceResponse(callApi(params, req, runtime));
  }
  else {
    return StopRtcRobotInstanceResponse(execute(params, req, runtime));
  }
}

StopRtcRobotInstanceResponse Alibabacloud_ICE20201109::Client::stopRtcRobotInstance(shared_ptr<StopRtcRobotInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopRtcRobotInstanceWithOptions(request, runtime);
}

SubmitASRJobResponse Alibabacloud_ICE20201109::Client::submitASRJobWithOptions(shared_ptr<SubmitASRJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->duration)) {
    query->insert(pair<string, string>("Duration", *request->duration));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->editingConfig)) {
    query->insert(pair<string, string>("EditingConfig", *request->editingConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputFile)) {
    query->insert(pair<string, string>("InputFile", *request->inputFile));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    query->insert(pair<string, string>("Title", *request->title));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    query->insert(pair<string, string>("UserData", *request->userData));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitASRJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SubmitASRJobResponse(callApi(params, req, runtime));
  }
  else {
    return SubmitASRJobResponse(execute(params, req, runtime));
  }
}

SubmitASRJobResponse Alibabacloud_ICE20201109::Client::submitASRJob(shared_ptr<SubmitASRJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitASRJobWithOptions(request, runtime);
}

SubmitAudioProduceJobResponse Alibabacloud_ICE20201109::Client::submitAudioProduceJobWithOptions(shared_ptr<SubmitAudioProduceJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->editingConfig)) {
    query->insert(pair<string, string>("EditingConfig", *request->editingConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputConfig)) {
    query->insert(pair<string, string>("InputConfig", *request->inputConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outputConfig)) {
    query->insert(pair<string, string>("OutputConfig", *request->outputConfig));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->overwrite)) {
    query->insert(pair<string, bool>("Overwrite", *request->overwrite));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    query->insert(pair<string, string>("Title", *request->title));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    query->insert(pair<string, string>("UserData", *request->userData));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitAudioProduceJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SubmitAudioProduceJobResponse(callApi(params, req, runtime));
  }
  else {
    return SubmitAudioProduceJobResponse(execute(params, req, runtime));
  }
}

SubmitAudioProduceJobResponse Alibabacloud_ICE20201109::Client::submitAudioProduceJob(shared_ptr<SubmitAudioProduceJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitAudioProduceJobWithOptions(request, runtime);
}

SubmitAvatarTrainingJobResponse Alibabacloud_ICE20201109::Client::submitAvatarTrainingJobWithOptions(shared_ptr<SubmitAvatarTrainingJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitAvatarTrainingJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SubmitAvatarTrainingJobResponse(callApi(params, req, runtime));
  }
  else {
    return SubmitAvatarTrainingJobResponse(execute(params, req, runtime));
  }
}

SubmitAvatarTrainingJobResponse Alibabacloud_ICE20201109::Client::submitAvatarTrainingJob(shared_ptr<SubmitAvatarTrainingJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitAvatarTrainingJobWithOptions(request, runtime);
}

SubmitAvatarVideoJobResponse Alibabacloud_ICE20201109::Client::submitAvatarVideoJobWithOptions(shared_ptr<SubmitAvatarVideoJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->editingConfig)) {
    query->insert(pair<string, string>("EditingConfig", *request->editingConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputConfig)) {
    query->insert(pair<string, string>("InputConfig", *request->inputConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outputConfig)) {
    query->insert(pair<string, string>("OutputConfig", *request->outputConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    query->insert(pair<string, string>("Title", *request->title));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    query->insert(pair<string, string>("UserData", *request->userData));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitAvatarVideoJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SubmitAvatarVideoJobResponse(callApi(params, req, runtime));
  }
  else {
    return SubmitAvatarVideoJobResponse(execute(params, req, runtime));
  }
}

SubmitAvatarVideoJobResponse Alibabacloud_ICE20201109::Client::submitAvatarVideoJob(shared_ptr<SubmitAvatarVideoJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitAvatarVideoJobWithOptions(request, runtime);
}

SubmitBatchMediaProducingJobResponse Alibabacloud_ICE20201109::Client::submitBatchMediaProducingJobWithOptions(shared_ptr<SubmitBatchMediaProducingJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outputConfig)) {
    query->insert(pair<string, string>("OutputConfig", *request->outputConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    query->insert(pair<string, string>("UserData", *request->userData));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->editingConfig)) {
    body->insert(pair<string, string>("EditingConfig", *request->editingConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputConfig)) {
    body->insert(pair<string, string>("InputConfig", *request->inputConfig));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitBatchMediaProducingJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SubmitBatchMediaProducingJobResponse(callApi(params, req, runtime));
  }
  else {
    return SubmitBatchMediaProducingJobResponse(execute(params, req, runtime));
  }
}

SubmitBatchMediaProducingJobResponse Alibabacloud_ICE20201109::Client::submitBatchMediaProducingJob(shared_ptr<SubmitBatchMediaProducingJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitBatchMediaProducingJobWithOptions(request, runtime);
}

SubmitCopyrightExtractJobResponse Alibabacloud_ICE20201109::Client::submitCopyrightExtractJobWithOptions(shared_ptr<SubmitCopyrightExtractJobRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SubmitCopyrightExtractJobShrinkRequest> request = make_shared<SubmitCopyrightExtractJobShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<SubmitCopyrightExtractJobRequestInput>(tmpReq->input)) {
    request->inputShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->input, make_shared<string>("Input"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->inputShrink)) {
    query->insert(pair<string, string>("Input", *request->inputShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->params)) {
    query->insert(pair<string, string>("Params", *request->params));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    query->insert(pair<string, string>("UserData", *request->userData));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitCopyrightExtractJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SubmitCopyrightExtractJobResponse(callApi(params, req, runtime));
  }
  else {
    return SubmitCopyrightExtractJobResponse(execute(params, req, runtime));
  }
}

SubmitCopyrightExtractJobResponse Alibabacloud_ICE20201109::Client::submitCopyrightExtractJob(shared_ptr<SubmitCopyrightExtractJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitCopyrightExtractJobWithOptions(request, runtime);
}

SubmitCopyrightJobResponse Alibabacloud_ICE20201109::Client::submitCopyrightJobWithOptions(shared_ptr<SubmitCopyrightJobRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SubmitCopyrightJobShrinkRequest> request = make_shared<SubmitCopyrightJobShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<SubmitCopyrightJobRequestInput>(tmpReq->input)) {
    request->inputShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->input, make_shared<string>("Input"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<SubmitCopyrightJobRequestOutput>(tmpReq->output)) {
    request->outputShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->output, make_shared<string>("Output"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputShrink)) {
    query->insert(pair<string, string>("Input", *request->inputShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->level)) {
    query->insert(pair<string, long>("Level", *request->level));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->message)) {
    query->insert(pair<string, string>("Message", *request->message));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outputShrink)) {
    query->insert(pair<string, string>("Output", *request->outputShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->params)) {
    query->insert(pair<string, string>("Params", *request->params));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->totalTime)) {
    query->insert(pair<string, string>("TotalTime", *request->totalTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    query->insert(pair<string, string>("UserData", *request->userData));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitCopyrightJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SubmitCopyrightJobResponse(callApi(params, req, runtime));
  }
  else {
    return SubmitCopyrightJobResponse(execute(params, req, runtime));
  }
}

SubmitCopyrightJobResponse Alibabacloud_ICE20201109::Client::submitCopyrightJob(shared_ptr<SubmitCopyrightJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitCopyrightJobWithOptions(request, runtime);
}

SubmitCustomizedVoiceJobResponse Alibabacloud_ICE20201109::Client::submitCustomizedVoiceJobWithOptions(shared_ptr<SubmitCustomizedVoiceJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->demoAudioMediaURL)) {
    query->insert(pair<string, string>("DemoAudioMediaURL", *request->demoAudioMediaURL));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->voiceId)) {
    query->insert(pair<string, string>("VoiceId", *request->voiceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitCustomizedVoiceJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SubmitCustomizedVoiceJobResponse(callApi(params, req, runtime));
  }
  else {
    return SubmitCustomizedVoiceJobResponse(execute(params, req, runtime));
  }
}

SubmitCustomizedVoiceJobResponse Alibabacloud_ICE20201109::Client::submitCustomizedVoiceJob(shared_ptr<SubmitCustomizedVoiceJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitCustomizedVoiceJobWithOptions(request, runtime);
}

SubmitDNAJobResponse Alibabacloud_ICE20201109::Client::submitDNAJobWithOptions(shared_ptr<SubmitDNAJobRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SubmitDNAJobShrinkRequest> request = make_shared<SubmitDNAJobShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<SubmitDNAJobRequestInput>(tmpReq->input)) {
    request->inputShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->input, make_shared<string>("Input"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->config)) {
    query->insert(pair<string, string>("Config", *request->config));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->DBId)) {
    query->insert(pair<string, string>("DBId", *request->DBId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputShrink)) {
    query->insert(pair<string, string>("Input", *request->inputShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pipelineId)) {
    query->insert(pair<string, string>("PipelineId", *request->pipelineId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->primaryKey)) {
    query->insert(pair<string, string>("PrimaryKey", *request->primaryKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    query->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    query->insert(pair<string, string>("UserData", *request->userData));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitDNAJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SubmitDNAJobResponse(callApi(params, req, runtime));
  }
  else {
    return SubmitDNAJobResponse(execute(params, req, runtime));
  }
}

SubmitDNAJobResponse Alibabacloud_ICE20201109::Client::submitDNAJob(shared_ptr<SubmitDNAJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitDNAJobWithOptions(request, runtime);
}

SubmitDynamicChartJobResponse Alibabacloud_ICE20201109::Client::submitDynamicChartJobWithOptions(shared_ptr<SubmitDynamicChartJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->axisParams)) {
    query->insert(pair<string, string>("AxisParams", *request->axisParams));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->background)) {
    query->insert(pair<string, string>("Background", *request->background));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->chartConfig)) {
    query->insert(pair<string, string>("ChartConfig", *request->chartConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->chartTitle)) {
    query->insert(pair<string, string>("ChartTitle", *request->chartTitle));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->chartType)) {
    query->insert(pair<string, string>("ChartType", *request->chartType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataSource)) {
    query->insert(pair<string, string>("DataSource", *request->dataSource));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->input)) {
    query->insert(pair<string, string>("Input", *request->input));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outputConfig)) {
    query->insert(pair<string, string>("OutputConfig", *request->outputConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subtitle)) {
    query->insert(pair<string, string>("Subtitle", *request->subtitle));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    query->insert(pair<string, string>("Title", *request->title));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->unit)) {
    query->insert(pair<string, string>("Unit", *request->unit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    query->insert(pair<string, string>("UserData", *request->userData));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitDynamicChartJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SubmitDynamicChartJobResponse(callApi(params, req, runtime));
  }
  else {
    return SubmitDynamicChartJobResponse(execute(params, req, runtime));
  }
}

SubmitDynamicChartJobResponse Alibabacloud_ICE20201109::Client::submitDynamicChartJob(shared_ptr<SubmitDynamicChartJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitDynamicChartJobWithOptions(request, runtime);
}

SubmitDynamicImageJobResponse Alibabacloud_ICE20201109::Client::submitDynamicImageJobWithOptions(shared_ptr<SubmitDynamicImageJobRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SubmitDynamicImageJobShrinkRequest> request = make_shared<SubmitDynamicImageJobShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<SubmitDynamicImageJobRequestInput>(tmpReq->input)) {
    request->inputShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->input, make_shared<string>("Input"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<SubmitDynamicImageJobRequestOutput>(tmpReq->output)) {
    request->outputShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->output, make_shared<string>("Output"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<SubmitDynamicImageJobRequestScheduleConfig>(tmpReq->scheduleConfig)) {
    request->scheduleConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->scheduleConfig, make_shared<string>("ScheduleConfig"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<SubmitDynamicImageJobRequestTemplateConfig>(tmpReq->templateConfig)) {
    request->templateConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->templateConfig, make_shared<string>("TemplateConfig"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->inputShrink)) {
    query->insert(pair<string, string>("Input", *request->inputShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outputShrink)) {
    query->insert(pair<string, string>("Output", *request->outputShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scheduleConfigShrink)) {
    query->insert(pair<string, string>("ScheduleConfig", *request->scheduleConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateConfigShrink)) {
    query->insert(pair<string, string>("TemplateConfig", *request->templateConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    query->insert(pair<string, string>("UserData", *request->userData));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitDynamicImageJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SubmitDynamicImageJobResponse(callApi(params, req, runtime));
  }
  else {
    return SubmitDynamicImageJobResponse(execute(params, req, runtime));
  }
}

SubmitDynamicImageJobResponse Alibabacloud_ICE20201109::Client::submitDynamicImageJob(shared_ptr<SubmitDynamicImageJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitDynamicImageJobWithOptions(request, runtime);
}

SubmitHighlightExtractionJobResponse Alibabacloud_ICE20201109::Client::submitHighlightExtractionJobWithOptions(shared_ptr<SubmitHighlightExtractionJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outputConfig)) {
    query->insert(pair<string, string>("OutputConfig", *request->outputConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    query->insert(pair<string, string>("UserData", *request->userData));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->inputConfig)) {
    body->insert(pair<string, string>("InputConfig", *request->inputConfig));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitHighlightExtractionJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SubmitHighlightExtractionJobResponse(callApi(params, req, runtime));
  }
  else {
    return SubmitHighlightExtractionJobResponse(execute(params, req, runtime));
  }
}

SubmitHighlightExtractionJobResponse Alibabacloud_ICE20201109::Client::submitHighlightExtractionJob(shared_ptr<SubmitHighlightExtractionJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitHighlightExtractionJobWithOptions(request, runtime);
}

SubmitIProductionJobResponse Alibabacloud_ICE20201109::Client::submitIProductionJobWithOptions(shared_ptr<SubmitIProductionJobRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SubmitIProductionJobShrinkRequest> request = make_shared<SubmitIProductionJobShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<SubmitIProductionJobRequestInput>(tmpReq->input)) {
    request->inputShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->input, make_shared<string>("Input"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<SubmitIProductionJobRequestOutput>(tmpReq->output)) {
    request->outputShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->output, make_shared<string>("Output"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<SubmitIProductionJobRequestScheduleConfig>(tmpReq->scheduleConfig)) {
    request->scheduleConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->scheduleConfig, make_shared<string>("ScheduleConfig"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->functionName)) {
    query->insert(pair<string, string>("FunctionName", *request->functionName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputShrink)) {
    query->insert(pair<string, string>("Input", *request->inputShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobParams)) {
    query->insert(pair<string, string>("JobParams", *request->jobParams));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modelId)) {
    query->insert(pair<string, string>("ModelId", *request->modelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outputShrink)) {
    query->insert(pair<string, string>("Output", *request->outputShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scheduleConfigShrink)) {
    query->insert(pair<string, string>("ScheduleConfig", *request->scheduleConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    query->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    query->insert(pair<string, string>("UserData", *request->userData));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitIProductionJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SubmitIProductionJobResponse(callApi(params, req, runtime));
  }
  else {
    return SubmitIProductionJobResponse(execute(params, req, runtime));
  }
}

SubmitIProductionJobResponse Alibabacloud_ICE20201109::Client::submitIProductionJob(shared_ptr<SubmitIProductionJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitIProductionJobWithOptions(request, runtime);
}

SubmitLiveEditingJobResponse Alibabacloud_ICE20201109::Client::submitLiveEditingJobWithOptions(shared_ptr<SubmitLiveEditingJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clips)) {
    query->insert(pair<string, string>("Clips", *request->clips));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->liveStreamConfig)) {
    query->insert(pair<string, string>("LiveStreamConfig", *request->liveStreamConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaProduceConfig)) {
    query->insert(pair<string, string>("MediaProduceConfig", *request->mediaProduceConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outputMediaConfig)) {
    query->insert(pair<string, string>("OutputMediaConfig", *request->outputMediaConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outputMediaTarget)) {
    query->insert(pair<string, string>("OutputMediaTarget", *request->outputMediaTarget));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    query->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    query->insert(pair<string, string>("UserData", *request->userData));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitLiveEditingJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SubmitLiveEditingJobResponse(callApi(params, req, runtime));
  }
  else {
    return SubmitLiveEditingJobResponse(execute(params, req, runtime));
  }
}

SubmitLiveEditingJobResponse Alibabacloud_ICE20201109::Client::submitLiveEditingJob(shared_ptr<SubmitLiveEditingJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitLiveEditingJobWithOptions(request, runtime);
}

SubmitLiveRecordJobResponse Alibabacloud_ICE20201109::Client::submitLiveRecordJobWithOptions(shared_ptr<SubmitLiveRecordJobRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SubmitLiveRecordJobShrinkRequest> request = make_shared<SubmitLiveRecordJobShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<SubmitLiveRecordJobRequestRecordOutput>(tmpReq->recordOutput)) {
    request->recordOutputShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->recordOutput, make_shared<string>("RecordOutput"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<SubmitLiveRecordJobRequestStreamInput>(tmpReq->streamInput)) {
    request->streamInputShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->streamInput, make_shared<string>("StreamInput"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notifyUrl)) {
    body->insert(pair<string, string>("NotifyUrl", *request->notifyUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->recordOutputShrink)) {
    body->insert(pair<string, string>("RecordOutput", *request->recordOutputShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->streamInputShrink)) {
    body->insert(pair<string, string>("StreamInput", *request->streamInputShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    body->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitLiveRecordJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SubmitLiveRecordJobResponse(callApi(params, req, runtime));
  }
  else {
    return SubmitLiveRecordJobResponse(execute(params, req, runtime));
  }
}

SubmitLiveRecordJobResponse Alibabacloud_ICE20201109::Client::submitLiveRecordJob(shared_ptr<SubmitLiveRecordJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitLiveRecordJobWithOptions(request, runtime);
}

SubmitLiveSnapshotJobResponse Alibabacloud_ICE20201109::Client::submitLiveSnapshotJobWithOptions(shared_ptr<SubmitLiveSnapshotJobRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SubmitLiveSnapshotJobShrinkRequest> request = make_shared<SubmitLiveSnapshotJobShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<SubmitLiveSnapshotJobRequestSnapshotOutput>(tmpReq->snapshotOutput)) {
    request->snapshotOutputShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->snapshotOutput, make_shared<string>("SnapshotOutput"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<SubmitLiveSnapshotJobRequestStreamInput>(tmpReq->streamInput)) {
    request->streamInputShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->streamInput, make_shared<string>("StreamInput"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->callbackUrl)) {
    body->insert(pair<string, string>("CallbackUrl", *request->callbackUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobName)) {
    body->insert(pair<string, string>("JobName", *request->jobName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->snapshotOutputShrink)) {
    body->insert(pair<string, string>("SnapshotOutput", *request->snapshotOutputShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->streamInputShrink)) {
    body->insert(pair<string, string>("StreamInput", *request->streamInputShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    body->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitLiveSnapshotJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SubmitLiveSnapshotJobResponse(callApi(params, req, runtime));
  }
  else {
    return SubmitLiveSnapshotJobResponse(execute(params, req, runtime));
  }
}

SubmitLiveSnapshotJobResponse Alibabacloud_ICE20201109::Client::submitLiveSnapshotJob(shared_ptr<SubmitLiveSnapshotJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitLiveSnapshotJobWithOptions(request, runtime);
}

SubmitLiveTranscodeJobResponse Alibabacloud_ICE20201109::Client::submitLiveTranscodeJobWithOptions(shared_ptr<SubmitLiveTranscodeJobRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SubmitLiveTranscodeJobShrinkRequest> request = make_shared<SubmitLiveTranscodeJobShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<SubmitLiveTranscodeJobRequestStreamInput>(tmpReq->streamInput)) {
    request->streamInputShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->streamInput, make_shared<string>("StreamInput"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<SubmitLiveTranscodeJobRequestTimedConfig>(tmpReq->timedConfig)) {
    request->timedConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->timedConfig, make_shared<string>("TimedConfig"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<SubmitLiveTranscodeJobRequestTranscodeOutput>(tmpReq->transcodeOutput)) {
    request->transcodeOutputShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->transcodeOutput, make_shared<string>("TranscodeOutput"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startMode)) {
    query->insert(pair<string, long>("StartMode", *request->startMode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->streamInputShrink)) {
    query->insert(pair<string, string>("StreamInput", *request->streamInputShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    query->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->timedConfigShrink)) {
    query->insert(pair<string, string>("TimedConfig", *request->timedConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->transcodeOutputShrink)) {
    query->insert(pair<string, string>("TranscodeOutput", *request->transcodeOutputShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitLiveTranscodeJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SubmitLiveTranscodeJobResponse(callApi(params, req, runtime));
  }
  else {
    return SubmitLiveTranscodeJobResponse(execute(params, req, runtime));
  }
}

SubmitLiveTranscodeJobResponse Alibabacloud_ICE20201109::Client::submitLiveTranscodeJob(shared_ptr<SubmitLiveTranscodeJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitLiveTranscodeJobWithOptions(request, runtime);
}

SubmitMediaAiAnalysisJobResponse Alibabacloud_ICE20201109::Client::submitMediaAiAnalysisJobWithOptions(shared_ptr<SubmitMediaAiAnalysisJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->analysisParams)) {
    query->insert(pair<string, string>("AnalysisParams", *request->analysisParams));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->input)) {
    query->insert(pair<string, string>("Input", *request->input));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    query->insert(pair<string, string>("UserData", *request->userData));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitMediaAiAnalysisJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SubmitMediaAiAnalysisJobResponse(callApi(params, req, runtime));
  }
  else {
    return SubmitMediaAiAnalysisJobResponse(execute(params, req, runtime));
  }
}

SubmitMediaAiAnalysisJobResponse Alibabacloud_ICE20201109::Client::submitMediaAiAnalysisJob(shared_ptr<SubmitMediaAiAnalysisJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitMediaAiAnalysisJobWithOptions(request, runtime);
}

SubmitMediaCensorJobResponse Alibabacloud_ICE20201109::Client::submitMediaCensorJobWithOptions(shared_ptr<SubmitMediaCensorJobRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SubmitMediaCensorJobShrinkRequest> request = make_shared<SubmitMediaCensorJobShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<SubmitMediaCensorJobRequestInput>(tmpReq->input)) {
    request->inputShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->input, make_shared<string>("Input"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<SubmitMediaCensorJobRequestScheduleConfig>(tmpReq->scheduleConfig)) {
    request->scheduleConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->scheduleConfig, make_shared<string>("ScheduleConfig"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->barrages)) {
    query->insert(pair<string, string>("Barrages", *request->barrages));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->coverImages)) {
    query->insert(pair<string, string>("CoverImages", *request->coverImages));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputShrink)) {
    query->insert(pair<string, string>("Input", *request->inputShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notifyUrl)) {
    query->insert(pair<string, string>("NotifyUrl", *request->notifyUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->output)) {
    query->insert(pair<string, string>("Output", *request->output));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scheduleConfigShrink)) {
    query->insert(pair<string, string>("ScheduleConfig", *request->scheduleConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    query->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    query->insert(pair<string, string>("Title", *request->title));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    query->insert(pair<string, string>("UserData", *request->userData));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitMediaCensorJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SubmitMediaCensorJobResponse(callApi(params, req, runtime));
  }
  else {
    return SubmitMediaCensorJobResponse(execute(params, req, runtime));
  }
}

SubmitMediaCensorJobResponse Alibabacloud_ICE20201109::Client::submitMediaCensorJob(shared_ptr<SubmitMediaCensorJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitMediaCensorJobWithOptions(request, runtime);
}

SubmitMediaConvertJobResponse Alibabacloud_ICE20201109::Client::submitMediaConvertJobWithOptions(shared_ptr<SubmitMediaConvertJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->config)) {
    query->insert(pair<string, string>("Config", *request->config));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pipelineId)) {
    query->insert(pair<string, string>("PipelineId", *request->pipelineId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    query->insert(pair<string, string>("UserData", *request->userData));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitMediaConvertJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SubmitMediaConvertJobResponse(callApi(params, req, runtime));
  }
  else {
    return SubmitMediaConvertJobResponse(execute(params, req, runtime));
  }
}

SubmitMediaConvertJobResponse Alibabacloud_ICE20201109::Client::submitMediaConvertJob(shared_ptr<SubmitMediaConvertJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitMediaConvertJobWithOptions(request, runtime);
}

SubmitMediaInfoJobResponse Alibabacloud_ICE20201109::Client::submitMediaInfoJobWithOptions(shared_ptr<SubmitMediaInfoJobRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SubmitMediaInfoJobShrinkRequest> request = make_shared<SubmitMediaInfoJobShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<SubmitMediaInfoJobRequestInput>(tmpReq->input)) {
    request->inputShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->input, make_shared<string>("Input"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<SubmitMediaInfoJobRequestScheduleConfig>(tmpReq->scheduleConfig)) {
    request->scheduleConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->scheduleConfig, make_shared<string>("ScheduleConfig"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->inputShrink)) {
    query->insert(pair<string, string>("Input", *request->inputShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scheduleConfigShrink)) {
    query->insert(pair<string, string>("ScheduleConfig", *request->scheduleConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    query->insert(pair<string, string>("UserData", *request->userData));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitMediaInfoJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SubmitMediaInfoJobResponse(callApi(params, req, runtime));
  }
  else {
    return SubmitMediaInfoJobResponse(execute(params, req, runtime));
  }
}

SubmitMediaInfoJobResponse Alibabacloud_ICE20201109::Client::submitMediaInfoJob(shared_ptr<SubmitMediaInfoJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitMediaInfoJobWithOptions(request, runtime);
}

SubmitMediaProducingJobResponse Alibabacloud_ICE20201109::Client::submitMediaProducingJobWithOptions(shared_ptr<SubmitMediaProducingJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clipsParam)) {
    query->insert(pair<string, string>("ClipsParam", *request->clipsParam));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->editingProduceConfig)) {
    query->insert(pair<string, string>("EditingProduceConfig", *request->editingProduceConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaMetadata)) {
    query->insert(pair<string, string>("MediaMetadata", *request->mediaMetadata));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outputMediaConfig)) {
    query->insert(pair<string, string>("OutputMediaConfig", *request->outputMediaConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outputMediaTarget)) {
    query->insert(pair<string, string>("OutputMediaTarget", *request->outputMediaTarget));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    query->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectMetadata)) {
    query->insert(pair<string, string>("ProjectMetadata", *request->projectMetadata));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->source)) {
    query->insert(pair<string, string>("Source", *request->source));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    query->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    query->insert(pair<string, string>("UserData", *request->userData));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->timeline)) {
    body->insert(pair<string, string>("Timeline", *request->timeline));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitMediaProducingJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SubmitMediaProducingJobResponse(callApi(params, req, runtime));
  }
  else {
    return SubmitMediaProducingJobResponse(execute(params, req, runtime));
  }
}

SubmitMediaProducingJobResponse Alibabacloud_ICE20201109::Client::submitMediaProducingJob(shared_ptr<SubmitMediaProducingJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitMediaProducingJobWithOptions(request, runtime);
}

SubmitPackageJobResponse Alibabacloud_ICE20201109::Client::submitPackageJobWithOptions(shared_ptr<SubmitPackageJobRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SubmitPackageJobShrinkRequest> request = make_shared<SubmitPackageJobShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<SubmitPackageJobRequestInputs>>(tmpReq->inputs)) {
    request->inputsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->inputs, make_shared<string>("Inputs"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<SubmitPackageJobRequestOutput>(tmpReq->output)) {
    request->outputShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->output, make_shared<string>("Output"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<SubmitPackageJobRequestScheduleConfig>(tmpReq->scheduleConfig)) {
    request->scheduleConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->scheduleConfig, make_shared<string>("ScheduleConfig"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->inputsShrink)) {
    query->insert(pair<string, string>("Inputs", *request->inputsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outputShrink)) {
    query->insert(pair<string, string>("Output", *request->outputShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scheduleConfigShrink)) {
    query->insert(pair<string, string>("ScheduleConfig", *request->scheduleConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    query->insert(pair<string, string>("UserData", *request->userData));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitPackageJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SubmitPackageJobResponse(callApi(params, req, runtime));
  }
  else {
    return SubmitPackageJobResponse(execute(params, req, runtime));
  }
}

SubmitPackageJobResponse Alibabacloud_ICE20201109::Client::submitPackageJob(shared_ptr<SubmitPackageJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitPackageJobWithOptions(request, runtime);
}

SubmitProjectExportJobResponse Alibabacloud_ICE20201109::Client::submitProjectExportJobWithOptions(shared_ptr<SubmitProjectExportJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->exportType)) {
    query->insert(pair<string, string>("ExportType", *request->exportType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outputMediaConfig)) {
    query->insert(pair<string, string>("OutputMediaConfig", *request->outputMediaConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    query->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    query->insert(pair<string, string>("UserData", *request->userData));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->timeline)) {
    body->insert(pair<string, string>("Timeline", *request->timeline));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitProjectExportJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SubmitProjectExportJobResponse(callApi(params, req, runtime));
  }
  else {
    return SubmitProjectExportJobResponse(execute(params, req, runtime));
  }
}

SubmitProjectExportJobResponse Alibabacloud_ICE20201109::Client::submitProjectExportJob(shared_ptr<SubmitProjectExportJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitProjectExportJobWithOptions(request, runtime);
}

SubmitScreenMediaHighlightsJobResponse Alibabacloud_ICE20201109::Client::submitScreenMediaHighlightsJobWithOptions(shared_ptr<SubmitScreenMediaHighlightsJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->outputConfig)) {
    query->insert(pair<string, string>("OutputConfig", *request->outputConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    query->insert(pair<string, string>("UserData", *request->userData));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->editingConfig)) {
    body->insert(pair<string, string>("EditingConfig", *request->editingConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputConfig)) {
    body->insert(pair<string, string>("InputConfig", *request->inputConfig));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitScreenMediaHighlightsJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SubmitScreenMediaHighlightsJobResponse(callApi(params, req, runtime));
  }
  else {
    return SubmitScreenMediaHighlightsJobResponse(execute(params, req, runtime));
  }
}

SubmitScreenMediaHighlightsJobResponse Alibabacloud_ICE20201109::Client::submitScreenMediaHighlightsJob(shared_ptr<SubmitScreenMediaHighlightsJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitScreenMediaHighlightsJobWithOptions(request, runtime);
}

SubmitSegmentationJobResponse Alibabacloud_ICE20201109::Client::submitSegmentationJobWithOptions(shared_ptr<SubmitSegmentationJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobParams)) {
    query->insert(pair<string, string>("JobParams", *request->jobParams));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outputConfig)) {
    query->insert(pair<string, string>("OutputConfig", *request->outputConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    query->insert(pair<string, string>("UserData", *request->userData));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->inputConfig)) {
    body->insert(pair<string, string>("InputConfig", *request->inputConfig));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitSegmentationJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SubmitSegmentationJobResponse(callApi(params, req, runtime));
  }
  else {
    return SubmitSegmentationJobResponse(execute(params, req, runtime));
  }
}

SubmitSegmentationJobResponse Alibabacloud_ICE20201109::Client::submitSegmentationJob(shared_ptr<SubmitSegmentationJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitSegmentationJobWithOptions(request, runtime);
}

SubmitSmarttagJobResponse Alibabacloud_ICE20201109::Client::submitSmarttagJobWithOptions(shared_ptr<SubmitSmarttagJobRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SubmitSmarttagJobShrinkRequest> request = make_shared<SubmitSmarttagJobShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<SubmitSmarttagJobRequestInput>(tmpReq->input)) {
    request->inputShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->input, make_shared<string>("Input"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<SubmitSmarttagJobRequestScheduleConfig>(tmpReq->scheduleConfig)) {
    request->scheduleConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->scheduleConfig, make_shared<string>("ScheduleConfig"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->content)) {
    query->insert(pair<string, string>("Content", *request->content));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contentAddr)) {
    query->insert(pair<string, string>("ContentAddr", *request->contentAddr));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contentType)) {
    query->insert(pair<string, string>("ContentType", *request->contentType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputShrink)) {
    query->insert(pair<string, string>("Input", *request->inputShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notifyUrl)) {
    query->insert(pair<string, string>("NotifyUrl", *request->notifyUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->params)) {
    query->insert(pair<string, string>("Params", *request->params));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scheduleConfigShrink)) {
    query->insert(pair<string, string>("ScheduleConfig", *request->scheduleConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    query->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    query->insert(pair<string, string>("Title", *request->title));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    query->insert(pair<string, string>("UserData", *request->userData));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitSmarttagJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SubmitSmarttagJobResponse(callApi(params, req, runtime));
  }
  else {
    return SubmitSmarttagJobResponse(execute(params, req, runtime));
  }
}

SubmitSmarttagJobResponse Alibabacloud_ICE20201109::Client::submitSmarttagJob(shared_ptr<SubmitSmarttagJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitSmarttagJobWithOptions(request, runtime);
}

SubmitSnapshotJobResponse Alibabacloud_ICE20201109::Client::submitSnapshotJobWithOptions(shared_ptr<SubmitSnapshotJobRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SubmitSnapshotJobShrinkRequest> request = make_shared<SubmitSnapshotJobShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<SubmitSnapshotJobRequestInput>(tmpReq->input)) {
    request->inputShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->input, make_shared<string>("Input"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<SubmitSnapshotJobRequestOutput>(tmpReq->output)) {
    request->outputShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->output, make_shared<string>("Output"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<SubmitSnapshotJobRequestScheduleConfig>(tmpReq->scheduleConfig)) {
    request->scheduleConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->scheduleConfig, make_shared<string>("ScheduleConfig"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<SubmitSnapshotJobRequestTemplateConfig>(tmpReq->templateConfig)) {
    request->templateConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->templateConfig, make_shared<string>("TemplateConfig"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->inputShrink)) {
    query->insert(pair<string, string>("Input", *request->inputShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outputShrink)) {
    query->insert(pair<string, string>("Output", *request->outputShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scheduleConfigShrink)) {
    query->insert(pair<string, string>("ScheduleConfig", *request->scheduleConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateConfigShrink)) {
    query->insert(pair<string, string>("TemplateConfig", *request->templateConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    query->insert(pair<string, string>("UserData", *request->userData));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitSnapshotJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SubmitSnapshotJobResponse(callApi(params, req, runtime));
  }
  else {
    return SubmitSnapshotJobResponse(execute(params, req, runtime));
  }
}

SubmitSnapshotJobResponse Alibabacloud_ICE20201109::Client::submitSnapshotJob(shared_ptr<SubmitSnapshotJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitSnapshotJobWithOptions(request, runtime);
}

SubmitSportsHighlightsJobResponse Alibabacloud_ICE20201109::Client::submitSportsHighlightsJobWithOptions(shared_ptr<SubmitSportsHighlightsJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outputConfig)) {
    query->insert(pair<string, string>("OutputConfig", *request->outputConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    query->insert(pair<string, string>("UserData", *request->userData));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->inputConfig)) {
    body->insert(pair<string, string>("InputConfig", *request->inputConfig));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitSportsHighlightsJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SubmitSportsHighlightsJobResponse(callApi(params, req, runtime));
  }
  else {
    return SubmitSportsHighlightsJobResponse(execute(params, req, runtime));
  }
}

SubmitSportsHighlightsJobResponse Alibabacloud_ICE20201109::Client::submitSportsHighlightsJob(shared_ptr<SubmitSportsHighlightsJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitSportsHighlightsJobWithOptions(request, runtime);
}

SubmitStandardCustomizedVoiceJobResponse Alibabacloud_ICE20201109::Client::submitStandardCustomizedVoiceJobWithOptions(shared_ptr<SubmitStandardCustomizedVoiceJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->audios)) {
    query->insert(pair<string, string>("Audios", *request->audios));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->authentication)) {
    query->insert(pair<string, string>("Authentication", *request->authentication));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->demoAudioMediaURL)) {
    query->insert(pair<string, string>("DemoAudioMediaURL", *request->demoAudioMediaURL));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->gender)) {
    query->insert(pair<string, string>("Gender", *request->gender));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->voiceName)) {
    query->insert(pair<string, string>("VoiceName", *request->voiceName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitStandardCustomizedVoiceJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SubmitStandardCustomizedVoiceJobResponse(callApi(params, req, runtime));
  }
  else {
    return SubmitStandardCustomizedVoiceJobResponse(execute(params, req, runtime));
  }
}

SubmitStandardCustomizedVoiceJobResponse Alibabacloud_ICE20201109::Client::submitStandardCustomizedVoiceJob(shared_ptr<SubmitStandardCustomizedVoiceJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitStandardCustomizedVoiceJobWithOptions(request, runtime);
}

SubmitSyncMediaInfoJobResponse Alibabacloud_ICE20201109::Client::submitSyncMediaInfoJobWithOptions(shared_ptr<SubmitSyncMediaInfoJobRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SubmitSyncMediaInfoJobShrinkRequest> request = make_shared<SubmitSyncMediaInfoJobShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<SubmitSyncMediaInfoJobRequestInput>(tmpReq->input)) {
    request->inputShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->input, make_shared<string>("Input"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<SubmitSyncMediaInfoJobRequestScheduleConfig>(tmpReq->scheduleConfig)) {
    request->scheduleConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->scheduleConfig, make_shared<string>("ScheduleConfig"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->inputShrink)) {
    query->insert(pair<string, string>("Input", *request->inputShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scheduleConfigShrink)) {
    query->insert(pair<string, string>("ScheduleConfig", *request->scheduleConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    query->insert(pair<string, string>("UserData", *request->userData));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitSyncMediaInfoJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SubmitSyncMediaInfoJobResponse(callApi(params, req, runtime));
  }
  else {
    return SubmitSyncMediaInfoJobResponse(execute(params, req, runtime));
  }
}

SubmitSyncMediaInfoJobResponse Alibabacloud_ICE20201109::Client::submitSyncMediaInfoJob(shared_ptr<SubmitSyncMediaInfoJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitSyncMediaInfoJobWithOptions(request, runtime);
}

SubmitTextGenerateJobResponse Alibabacloud_ICE20201109::Client::submitTextGenerateJobWithOptions(shared_ptr<SubmitTextGenerateJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->generateConfig)) {
    query->insert(pair<string, string>("GenerateConfig", *request->generateConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    query->insert(pair<string, string>("Title", *request->title));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    query->insert(pair<string, string>("UserData", *request->userData));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitTextGenerateJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SubmitTextGenerateJobResponse(callApi(params, req, runtime));
  }
  else {
    return SubmitTextGenerateJobResponse(execute(params, req, runtime));
  }
}

SubmitTextGenerateJobResponse Alibabacloud_ICE20201109::Client::submitTextGenerateJob(shared_ptr<SubmitTextGenerateJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitTextGenerateJobWithOptions(request, runtime);
}

SubmitTraceAbJobResponse Alibabacloud_ICE20201109::Client::submitTraceAbJobWithOptions(shared_ptr<SubmitTraceAbJobRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SubmitTraceAbJobShrinkRequest> request = make_shared<SubmitTraceAbJobShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<SubmitTraceAbJobRequestInput>(tmpReq->input)) {
    request->inputShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->input, make_shared<string>("Input"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<SubmitTraceAbJobRequestOutput>(tmpReq->output)) {
    request->outputShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->output, make_shared<string>("Output"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cipherBase64ed)) {
    query->insert(pair<string, string>("CipherBase64ed", *request->cipherBase64ed));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputShrink)) {
    query->insert(pair<string, string>("Input", *request->inputShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->level)) {
    query->insert(pair<string, long>("Level", *request->level));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outputShrink)) {
    query->insert(pair<string, string>("Output", *request->outputShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->totalTime)) {
    query->insert(pair<string, string>("TotalTime", *request->totalTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    query->insert(pair<string, string>("UserData", *request->userData));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitTraceAbJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SubmitTraceAbJobResponse(callApi(params, req, runtime));
  }
  else {
    return SubmitTraceAbJobResponse(execute(params, req, runtime));
  }
}

SubmitTraceAbJobResponse Alibabacloud_ICE20201109::Client::submitTraceAbJob(shared_ptr<SubmitTraceAbJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitTraceAbJobWithOptions(request, runtime);
}

SubmitTraceExtractJobResponse Alibabacloud_ICE20201109::Client::submitTraceExtractJobWithOptions(shared_ptr<SubmitTraceExtractJobRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SubmitTraceExtractJobShrinkRequest> request = make_shared<SubmitTraceExtractJobShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<SubmitTraceExtractJobRequestInput>(tmpReq->input)) {
    request->inputShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->input, make_shared<string>("Input"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->inputShrink)) {
    query->insert(pair<string, string>("Input", *request->inputShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->params)) {
    query->insert(pair<string, string>("Params", *request->params));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    query->insert(pair<string, string>("UserData", *request->userData));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitTraceExtractJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SubmitTraceExtractJobResponse(callApi(params, req, runtime));
  }
  else {
    return SubmitTraceExtractJobResponse(execute(params, req, runtime));
  }
}

SubmitTraceExtractJobResponse Alibabacloud_ICE20201109::Client::submitTraceExtractJob(shared_ptr<SubmitTraceExtractJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitTraceExtractJobWithOptions(request, runtime);
}

SubmitTraceM3u8JobResponse Alibabacloud_ICE20201109::Client::submitTraceM3u8JobWithOptions(shared_ptr<SubmitTraceM3u8JobRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SubmitTraceM3u8JobShrinkRequest> request = make_shared<SubmitTraceM3u8JobShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<SubmitTraceM3u8JobRequestOutput>(tmpReq->output)) {
    request->outputShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->output, make_shared<string>("Output"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->keyUri)) {
    query->insert(pair<string, string>("KeyUri", *request->keyUri));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outputShrink)) {
    query->insert(pair<string, string>("Output", *request->outputShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->params)) {
    query->insert(pair<string, string>("Params", *request->params));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->trace)) {
    query->insert(pair<string, string>("Trace", *request->trace));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->traceMediaId)) {
    query->insert(pair<string, string>("TraceMediaId", *request->traceMediaId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitTraceM3u8Job"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SubmitTraceM3u8JobResponse(callApi(params, req, runtime));
  }
  else {
    return SubmitTraceM3u8JobResponse(execute(params, req, runtime));
  }
}

SubmitTraceM3u8JobResponse Alibabacloud_ICE20201109::Client::submitTraceM3u8Job(shared_ptr<SubmitTraceM3u8JobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitTraceM3u8JobWithOptions(request, runtime);
}

SubmitTranscodeJobResponse Alibabacloud_ICE20201109::Client::submitTranscodeJobWithOptions(shared_ptr<SubmitTranscodeJobRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SubmitTranscodeJobShrinkRequest> request = make_shared<SubmitTranscodeJobShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<SubmitTranscodeJobRequestInputGroup>>(tmpReq->inputGroup)) {
    request->inputGroupShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->inputGroup, make_shared<string>("InputGroup"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<SubmitTranscodeJobRequestOutputGroup>>(tmpReq->outputGroup)) {
    request->outputGroupShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->outputGroup, make_shared<string>("OutputGroup"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<SubmitTranscodeJobRequestScheduleConfig>(tmpReq->scheduleConfig)) {
    request->scheduleConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->scheduleConfig, make_shared<string>("ScheduleConfig"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputGroupShrink)) {
    query->insert(pair<string, string>("InputGroup", *request->inputGroupShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outputGroupShrink)) {
    query->insert(pair<string, string>("OutputGroup", *request->outputGroupShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scheduleConfigShrink)) {
    query->insert(pair<string, string>("ScheduleConfig", *request->scheduleConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    query->insert(pair<string, string>("UserData", *request->userData));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitTranscodeJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SubmitTranscodeJobResponse(callApi(params, req, runtime));
  }
  else {
    return SubmitTranscodeJobResponse(execute(params, req, runtime));
  }
}

SubmitTranscodeJobResponse Alibabacloud_ICE20201109::Client::submitTranscodeJob(shared_ptr<SubmitTranscodeJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitTranscodeJobWithOptions(request, runtime);
}

SubmitVideoTranslationJobResponse Alibabacloud_ICE20201109::Client::submitVideoTranslationJobWithOptions(shared_ptr<SubmitVideoTranslationJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->editingConfig)) {
    query->insert(pair<string, string>("EditingConfig", *request->editingConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputConfig)) {
    query->insert(pair<string, string>("InputConfig", *request->inputConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outputConfig)) {
    query->insert(pair<string, string>("OutputConfig", *request->outputConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->signature)) {
    query->insert(pair<string, string>("Signature", *request->signature));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->signatureMehtod)) {
    query->insert(pair<string, string>("SignatureMehtod", *request->signatureMehtod));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->signatureNonce)) {
    query->insert(pair<string, string>("SignatureNonce", *request->signatureNonce));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->signatureType)) {
    query->insert(pair<string, string>("SignatureType", *request->signatureType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->signatureVersion)) {
    query->insert(pair<string, string>("SignatureVersion", *request->signatureVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    query->insert(pair<string, string>("Title", *request->title));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    query->insert(pair<string, string>("UserData", *request->userData));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitVideoTranslationJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return SubmitVideoTranslationJobResponse(callApi(params, req, runtime));
  }
  else {
    return SubmitVideoTranslationJobResponse(execute(params, req, runtime));
  }
}

SubmitVideoTranslationJobResponse Alibabacloud_ICE20201109::Client::submitVideoTranslationJob(shared_ptr<SubmitVideoTranslationJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitVideoTranslationJobWithOptions(request, runtime);
}

TakeoverAIAgentCallResponse Alibabacloud_ICE20201109::Client::takeoverAIAgentCallWithOptions(shared_ptr<TakeoverAIAgentCallRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->humanAgentUserId)) {
    query->insert(pair<string, string>("HumanAgentUserId", *request->humanAgentUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->requireToken)) {
    query->insert(pair<string, bool>("RequireToken", *request->requireToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TakeoverAIAgentCall"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return TakeoverAIAgentCallResponse(callApi(params, req, runtime));
  }
  else {
    return TakeoverAIAgentCallResponse(execute(params, req, runtime));
  }
}

TakeoverAIAgentCallResponse Alibabacloud_ICE20201109::Client::takeoverAIAgentCall(shared_ptr<TakeoverAIAgentCallRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return takeoverAIAgentCallWithOptions(request, runtime);
}

UpdateAIAgentInstanceResponse Alibabacloud_ICE20201109::Client::updateAIAgentInstanceWithOptions(shared_ptr<UpdateAIAgentInstanceRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateAIAgentInstanceShrinkRequest> request = make_shared<UpdateAIAgentInstanceShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<AIAgentTemplateConfig>(tmpReq->templateConfig)) {
    request->templateConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->templateConfig, make_shared<string>("TemplateConfig"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateConfigShrink)) {
    query->insert(pair<string, string>("TemplateConfig", *request->templateConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    query->insert(pair<string, string>("UserData", *request->userData));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateAIAgentInstance"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateAIAgentInstanceResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateAIAgentInstanceResponse(execute(params, req, runtime));
  }
}

UpdateAIAgentInstanceResponse Alibabacloud_ICE20201109::Client::updateAIAgentInstance(shared_ptr<UpdateAIAgentInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateAIAgentInstanceWithOptions(request, runtime);
}

UpdateAdInsertionResponse Alibabacloud_ICE20201109::Client::updateAdInsertionWithOptions(shared_ptr<UpdateAdInsertionRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->adMarkerPassthrough)) {
    body->insert(pair<string, string>("AdMarkerPassthrough", *request->adMarkerPassthrough));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->adsUrl)) {
    body->insert(pair<string, string>("AdsUrl", *request->adsUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cdnAdSegmentUrlPrefix)) {
    body->insert(pair<string, string>("CdnAdSegmentUrlPrefix", *request->cdnAdSegmentUrlPrefix));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cdnContentSegmentUrlPrefix)) {
    body->insert(pair<string, string>("CdnContentSegmentUrlPrefix", *request->cdnContentSegmentUrlPrefix));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->configAliases)) {
    body->insert(pair<string, string>("ConfigAliases", *request->configAliases));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contentUrlPrefix)) {
    body->insert(pair<string, string>("ContentUrlPrefix", *request->contentUrlPrefix));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->personalizationThreshold)) {
    body->insert(pair<string, long>("PersonalizationThreshold", *request->personalizationThreshold));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->slateAdUrl)) {
    body->insert(pair<string, string>("SlateAdUrl", *request->slateAdUrl));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateAdInsertion"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateAdInsertionResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateAdInsertionResponse(execute(params, req, runtime));
  }
}

UpdateAdInsertionResponse Alibabacloud_ICE20201109::Client::updateAdInsertion(shared_ptr<UpdateAdInsertionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateAdInsertionWithOptions(request, runtime);
}

UpdateAvatarTrainingJobResponse Alibabacloud_ICE20201109::Client::updateAvatarTrainingJobWithOptions(shared_ptr<UpdateAvatarTrainingJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->avatarDescription)) {
    query->insert(pair<string, string>("AvatarDescription", *request->avatarDescription));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->avatarName)) {
    query->insert(pair<string, string>("AvatarName", *request->avatarName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->portrait)) {
    query->insert(pair<string, string>("Portrait", *request->portrait));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->thumbnail)) {
    query->insert(pair<string, string>("Thumbnail", *request->thumbnail));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->transparent)) {
    query->insert(pair<string, bool>("Transparent", *request->transparent));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->video)) {
    query->insert(pair<string, string>("Video", *request->video));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateAvatarTrainingJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateAvatarTrainingJobResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateAvatarTrainingJobResponse(execute(params, req, runtime));
  }
}

UpdateAvatarTrainingJobResponse Alibabacloud_ICE20201109::Client::updateAvatarTrainingJob(shared_ptr<UpdateAvatarTrainingJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateAvatarTrainingJobWithOptions(request, runtime);
}

UpdateCategoryResponse Alibabacloud_ICE20201109::Client::updateCategoryWithOptions(shared_ptr<UpdateCategoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->cateId)) {
    query->insert(pair<string, long>("CateId", *request->cateId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cateName)) {
    query->insert(pair<string, string>("CateName", *request->cateName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateCategory"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateCategoryResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateCategoryResponse(execute(params, req, runtime));
  }
}

UpdateCategoryResponse Alibabacloud_ICE20201109::Client::updateCategory(shared_ptr<UpdateCategoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateCategoryWithOptions(request, runtime);
}

UpdateChannelResponse Alibabacloud_ICE20201109::Client::updateChannelWithOptions(shared_ptr<UpdateChannelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->accessPolicy)) {
    query->insert(pair<string, bool>("AccessPolicy", *request->accessPolicy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->accessToken)) {
    query->insert(pair<string, string>("AccessToken", *request->accessToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->channelName)) {
    query->insert(pair<string, string>("ChannelName", *request->channelName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fillerSourceLocationName)) {
    query->insert(pair<string, string>("FillerSourceLocationName", *request->fillerSourceLocationName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fillerSourceName)) {
    query->insert(pair<string, string>("FillerSourceName", *request->fillerSourceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outPutConfigList)) {
    query->insert(pair<string, string>("OutPutConfigList", *request->outPutConfigList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateChannel"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateChannelResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateChannelResponse(execute(params, req, runtime));
  }
}

UpdateChannelResponse Alibabacloud_ICE20201109::Client::updateChannel(shared_ptr<UpdateChannelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateChannelWithOptions(request, runtime);
}

UpdateCustomTemplateResponse Alibabacloud_ICE20201109::Client::updateCustomTemplateWithOptions(shared_ptr<UpdateCustomTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateConfig)) {
    query->insert(pair<string, string>("TemplateConfig", *request->templateConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    query->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateCustomTemplate"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateCustomTemplateResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateCustomTemplateResponse(execute(params, req, runtime));
  }
}

UpdateCustomTemplateResponse Alibabacloud_ICE20201109::Client::updateCustomTemplate(shared_ptr<UpdateCustomTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateCustomTemplateWithOptions(request, runtime);
}

UpdateCustomizedVoiceResponse Alibabacloud_ICE20201109::Client::updateCustomizedVoiceWithOptions(shared_ptr<UpdateCustomizedVoiceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->demoAudioMediaId)) {
    query->insert(pair<string, string>("DemoAudioMediaId", *request->demoAudioMediaId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->voiceId)) {
    query->insert(pair<string, string>("VoiceId", *request->voiceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateCustomizedVoice"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateCustomizedVoiceResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateCustomizedVoiceResponse(execute(params, req, runtime));
  }
}

UpdateCustomizedVoiceResponse Alibabacloud_ICE20201109::Client::updateCustomizedVoice(shared_ptr<UpdateCustomizedVoiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateCustomizedVoiceWithOptions(request, runtime);
}

UpdateEditingProjectResponse Alibabacloud_ICE20201109::Client::updateEditingProjectWithOptions(shared_ptr<UpdateEditingProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->businessStatus)) {
    query->insert(pair<string, string>("BusinessStatus", *request->businessStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clipsParam)) {
    query->insert(pair<string, string>("ClipsParam", *request->clipsParam));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->coverURL)) {
    query->insert(pair<string, string>("CoverURL", *request->coverURL));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    query->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    query->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    query->insert(pair<string, string>("Title", *request->title));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->timeline)) {
    body->insert(pair<string, string>("Timeline", *request->timeline));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateEditingProject"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateEditingProjectResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateEditingProjectResponse(execute(params, req, runtime));
  }
}

UpdateEditingProjectResponse Alibabacloud_ICE20201109::Client::updateEditingProject(shared_ptr<UpdateEditingProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateEditingProjectWithOptions(request, runtime);
}

UpdateLivePackageChannelResponse Alibabacloud_ICE20201109::Client::updateLivePackageChannelWithOptions(shared_ptr<UpdateLivePackageChannelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->channelName)) {
    body->insert(pair<string, string>("ChannelName", *request->channelName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupName)) {
    body->insert(pair<string, string>("GroupName", *request->groupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->protocol)) {
    body->insert(pair<string, string>("Protocol", *request->protocol));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->segmentCount)) {
    body->insert(pair<string, long>("SegmentCount", *request->segmentCount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->segmentDuration)) {
    body->insert(pair<string, long>("SegmentDuration", *request->segmentDuration));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateLivePackageChannel"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateLivePackageChannelResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateLivePackageChannelResponse(execute(params, req, runtime));
  }
}

UpdateLivePackageChannelResponse Alibabacloud_ICE20201109::Client::updateLivePackageChannel(shared_ptr<UpdateLivePackageChannelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateLivePackageChannelWithOptions(request, runtime);
}

UpdateLivePackageChannelCredentialsResponse Alibabacloud_ICE20201109::Client::updateLivePackageChannelCredentialsWithOptions(shared_ptr<UpdateLivePackageChannelCredentialsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->channelName)) {
    body->insert(pair<string, string>("ChannelName", *request->channelName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupName)) {
    body->insert(pair<string, string>("GroupName", *request->groupName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->rotateCredentials)) {
    body->insert(pair<string, long>("RotateCredentials", *request->rotateCredentials));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateLivePackageChannelCredentials"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateLivePackageChannelCredentialsResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateLivePackageChannelCredentialsResponse(execute(params, req, runtime));
  }
}

UpdateLivePackageChannelCredentialsResponse Alibabacloud_ICE20201109::Client::updateLivePackageChannelCredentials(shared_ptr<UpdateLivePackageChannelCredentialsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateLivePackageChannelCredentialsWithOptions(request, runtime);
}

UpdateLivePackageChannelGroupResponse Alibabacloud_ICE20201109::Client::updateLivePackageChannelGroupWithOptions(shared_ptr<UpdateLivePackageChannelGroupRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupName)) {
    body->insert(pair<string, string>("GroupName", *request->groupName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateLivePackageChannelGroup"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateLivePackageChannelGroupResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateLivePackageChannelGroupResponse(execute(params, req, runtime));
  }
}

UpdateLivePackageChannelGroupResponse Alibabacloud_ICE20201109::Client::updateLivePackageChannelGroup(shared_ptr<UpdateLivePackageChannelGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateLivePackageChannelGroupWithOptions(request, runtime);
}

UpdateLivePackageOriginEndpointResponse Alibabacloud_ICE20201109::Client::updateLivePackageOriginEndpointWithOptions(shared_ptr<UpdateLivePackageOriginEndpointRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->authorizationCode)) {
    body->insert(pair<string, string>("AuthorizationCode", *request->authorizationCode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->channelName)) {
    body->insert(pair<string, string>("ChannelName", *request->channelName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    body->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endpointName)) {
    body->insert(pair<string, string>("EndpointName", *request->endpointName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->groupName)) {
    body->insert(pair<string, string>("GroupName", *request->groupName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ipBlacklist)) {
    body->insert(pair<string, string>("IpBlacklist", *request->ipBlacklist));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ipWhitelist)) {
    body->insert(pair<string, string>("IpWhitelist", *request->ipWhitelist));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->manifestName)) {
    body->insert(pair<string, string>("ManifestName", *request->manifestName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->protocol)) {
    body->insert(pair<string, string>("Protocol", *request->protocol));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->timeshiftVision)) {
    body->insert(pair<string, long>("TimeshiftVision", *request->timeshiftVision));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateLivePackageOriginEndpoint"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateLivePackageOriginEndpointResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateLivePackageOriginEndpointResponse(execute(params, req, runtime));
  }
}

UpdateLivePackageOriginEndpointResponse Alibabacloud_ICE20201109::Client::updateLivePackageOriginEndpoint(shared_ptr<UpdateLivePackageOriginEndpointRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateLivePackageOriginEndpointWithOptions(request, runtime);
}

UpdateLiveRecordTemplateResponse Alibabacloud_ICE20201109::Client::updateLiveRecordTemplateWithOptions(shared_ptr<UpdateLiveRecordTemplateRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateLiveRecordTemplateShrinkRequest> request = make_shared<UpdateLiveRecordTemplateShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<UpdateLiveRecordTemplateRequestRecordFormat>>(tmpReq->recordFormat)) {
    request->recordFormatShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->recordFormat, make_shared<string>("RecordFormat"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->recordFormatShrink)) {
    body->insert(pair<string, string>("RecordFormat", *request->recordFormatShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    body->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateLiveRecordTemplate"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateLiveRecordTemplateResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateLiveRecordTemplateResponse(execute(params, req, runtime));
  }
}

UpdateLiveRecordTemplateResponse Alibabacloud_ICE20201109::Client::updateLiveRecordTemplate(shared_ptr<UpdateLiveRecordTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateLiveRecordTemplateWithOptions(request, runtime);
}

UpdateLiveSnapshotTemplateResponse Alibabacloud_ICE20201109::Client::updateLiveSnapshotTemplateWithOptions(shared_ptr<UpdateLiveSnapshotTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->overwriteFormat)) {
    body->insert(pair<string, string>("OverwriteFormat", *request->overwriteFormat));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sequenceFormat)) {
    body->insert(pair<string, string>("SequenceFormat", *request->sequenceFormat));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    body->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateName)) {
    body->insert(pair<string, string>("TemplateName", *request->templateName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->timeInterval)) {
    body->insert(pair<string, long>("TimeInterval", *request->timeInterval));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateLiveSnapshotTemplate"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateLiveSnapshotTemplateResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateLiveSnapshotTemplateResponse(execute(params, req, runtime));
  }
}

UpdateLiveSnapshotTemplateResponse Alibabacloud_ICE20201109::Client::updateLiveSnapshotTemplate(shared_ptr<UpdateLiveSnapshotTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateLiveSnapshotTemplateWithOptions(request, runtime);
}

UpdateLiveTranscodeJobResponse Alibabacloud_ICE20201109::Client::updateLiveTranscodeJobWithOptions(shared_ptr<UpdateLiveTranscodeJobRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateLiveTranscodeJobShrinkRequest> request = make_shared<UpdateLiveTranscodeJobShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<UpdateLiveTranscodeJobRequestStreamInput>(tmpReq->streamInput)) {
    request->streamInputShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->streamInput, make_shared<string>("StreamInput"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateLiveTranscodeJobRequestTimedConfig>(tmpReq->timedConfig)) {
    request->timedConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->timedConfig, make_shared<string>("TimedConfig"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateLiveTranscodeJobRequestTranscodeOutput>(tmpReq->transcodeOutput)) {
    request->transcodeOutputShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->transcodeOutput, make_shared<string>("TranscodeOutput"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->streamInputShrink)) {
    query->insert(pair<string, string>("StreamInput", *request->streamInputShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->timedConfigShrink)) {
    query->insert(pair<string, string>("TimedConfig", *request->timedConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->transcodeOutputShrink)) {
    query->insert(pair<string, string>("TranscodeOutput", *request->transcodeOutputShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateLiveTranscodeJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateLiveTranscodeJobResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateLiveTranscodeJobResponse(execute(params, req, runtime));
  }
}

UpdateLiveTranscodeJobResponse Alibabacloud_ICE20201109::Client::updateLiveTranscodeJob(shared_ptr<UpdateLiveTranscodeJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateLiveTranscodeJobWithOptions(request, runtime);
}

UpdateLiveTranscodeTemplateResponse Alibabacloud_ICE20201109::Client::updateLiveTranscodeTemplateWithOptions(shared_ptr<UpdateLiveTranscodeTemplateRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateLiveTranscodeTemplateShrinkRequest> request = make_shared<UpdateLiveTranscodeTemplateShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<UpdateLiveTranscodeTemplateRequestTemplateConfig>(tmpReq->templateConfig)) {
    request->templateConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->templateConfig, make_shared<string>("TemplateConfig"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateConfigShrink)) {
    query->insert(pair<string, string>("TemplateConfig", *request->templateConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    query->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateLiveTranscodeTemplate"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateLiveTranscodeTemplateResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateLiveTranscodeTemplateResponse(execute(params, req, runtime));
  }
}

UpdateLiveTranscodeTemplateResponse Alibabacloud_ICE20201109::Client::updateLiveTranscodeTemplate(shared_ptr<UpdateLiveTranscodeTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateLiveTranscodeTemplateWithOptions(request, runtime);
}

UpdateMediaConnectFlowInputResponse Alibabacloud_ICE20201109::Client::updateMediaConnectFlowInputWithOptions(shared_ptr<UpdateMediaConnectFlowInputRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cidrs)) {
    query->insert(pair<string, string>("Cidrs", *request->cidrs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->flowId)) {
    query->insert(pair<string, string>("FlowId", *request->flowId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputFromUrl)) {
    query->insert(pair<string, string>("InputFromUrl", *request->inputFromUrl));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxBitrate)) {
    query->insert(pair<string, long>("MaxBitrate", *request->maxBitrate));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->srtLatency)) {
    query->insert(pair<string, long>("SrtLatency", *request->srtLatency));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->srtPassphrase)) {
    query->insert(pair<string, string>("SrtPassphrase", *request->srtPassphrase));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->srtPbkeyLen)) {
    query->insert(pair<string, long>("SrtPbkeyLen", *request->srtPbkeyLen));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateMediaConnectFlowInput"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateMediaConnectFlowInputResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateMediaConnectFlowInputResponse(execute(params, req, runtime));
  }
}

UpdateMediaConnectFlowInputResponse Alibabacloud_ICE20201109::Client::updateMediaConnectFlowInput(shared_ptr<UpdateMediaConnectFlowInputRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateMediaConnectFlowInputWithOptions(request, runtime);
}

UpdateMediaConnectFlowOutputResponse Alibabacloud_ICE20201109::Client::updateMediaConnectFlowOutputWithOptions(shared_ptr<UpdateMediaConnectFlowOutputRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cidrs)) {
    query->insert(pair<string, string>("Cidrs", *request->cidrs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->flowId)) {
    query->insert(pair<string, string>("FlowId", *request->flowId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outputName)) {
    query->insert(pair<string, string>("OutputName", *request->outputName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outputToUrl)) {
    query->insert(pair<string, string>("OutputToUrl", *request->outputToUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->playerLimit)) {
    query->insert(pair<string, string>("PlayerLimit", *request->playerLimit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->srtLatency)) {
    query->insert(pair<string, string>("SrtLatency", *request->srtLatency));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->srtPassphrase)) {
    query->insert(pair<string, string>("SrtPassphrase", *request->srtPassphrase));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->srtPbkeyLen)) {
    query->insert(pair<string, string>("SrtPbkeyLen", *request->srtPbkeyLen));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateMediaConnectFlowOutput"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateMediaConnectFlowOutputResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateMediaConnectFlowOutputResponse(execute(params, req, runtime));
  }
}

UpdateMediaConnectFlowOutputResponse Alibabacloud_ICE20201109::Client::updateMediaConnectFlowOutput(shared_ptr<UpdateMediaConnectFlowOutputRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateMediaConnectFlowOutputWithOptions(request, runtime);
}

UpdateMediaConnectFlowStatusResponse Alibabacloud_ICE20201109::Client::updateMediaConnectFlowStatusWithOptions(shared_ptr<UpdateMediaConnectFlowStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->flowId)) {
    query->insert(pair<string, string>("FlowId", *request->flowId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateMediaConnectFlowStatus"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateMediaConnectFlowStatusResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateMediaConnectFlowStatusResponse(execute(params, req, runtime));
  }
}

UpdateMediaConnectFlowStatusResponse Alibabacloud_ICE20201109::Client::updateMediaConnectFlowStatus(shared_ptr<UpdateMediaConnectFlowStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateMediaConnectFlowStatusWithOptions(request, runtime);
}

UpdateMediaInfoResponse Alibabacloud_ICE20201109::Client::updateMediaInfoWithOptions(shared_ptr<UpdateMediaInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->appendTags)) {
    query->insert(pair<string, bool>("AppendTags", *request->appendTags));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->businessType)) {
    query->insert(pair<string, string>("BusinessType", *request->businessType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->cateId)) {
    query->insert(pair<string, long>("CateId", *request->cateId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->category)) {
    query->insert(pair<string, string>("Category", *request->category));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->coverURL)) {
    query->insert(pair<string, string>("CoverURL", *request->coverURL));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputURL)) {
    query->insert(pair<string, string>("InputURL", *request->inputURL));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaId)) {
    query->insert(pair<string, string>("MediaId", *request->mediaId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaTags)) {
    query->insert(pair<string, string>("MediaTags", *request->mediaTags));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->referenceId)) {
    query->insert(pair<string, string>("ReferenceId", *request->referenceId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    query->insert(pair<string, string>("Title", *request->title));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    query->insert(pair<string, string>("UserData", *request->userData));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateMediaInfo"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateMediaInfoResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateMediaInfoResponse(execute(params, req, runtime));
  }
}

UpdateMediaInfoResponse Alibabacloud_ICE20201109::Client::updateMediaInfo(shared_ptr<UpdateMediaInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateMediaInfoWithOptions(request, runtime);
}

UpdateMediaLiveChannelResponse Alibabacloud_ICE20201109::Client::updateMediaLiveChannelWithOptions(shared_ptr<UpdateMediaLiveChannelRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateMediaLiveChannelShrinkRequest> request = make_shared<UpdateMediaLiveChannelShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<UpdateMediaLiveChannelRequestAudioSettings>>(tmpReq->audioSettings)) {
    request->audioSettingsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->audioSettings, make_shared<string>("AudioSettings"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateMediaLiveChannelRequestInputAttachments>>(tmpReq->inputAttachments)) {
    request->inputAttachmentsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->inputAttachments, make_shared<string>("InputAttachments"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateMediaLiveChannelRequestOutputGroups>>(tmpReq->outputGroups)) {
    request->outputGroupsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->outputGroups, make_shared<string>("OutputGroups"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateMediaLiveChannelRequestVideoSettings>>(tmpReq->videoSettings)) {
    request->videoSettingsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->videoSettings, make_shared<string>("VideoSettings"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->audioSettingsShrink)) {
    body->insert(pair<string, string>("AudioSettings", *request->audioSettingsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->channelId)) {
    body->insert(pair<string, string>("ChannelId", *request->channelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputAttachmentsShrink)) {
    body->insert(pair<string, string>("InputAttachments", *request->inputAttachmentsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outputGroupsShrink)) {
    body->insert(pair<string, string>("OutputGroups", *request->outputGroupsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->videoSettingsShrink)) {
    body->insert(pair<string, string>("VideoSettings", *request->videoSettingsShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateMediaLiveChannel"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateMediaLiveChannelResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateMediaLiveChannelResponse(execute(params, req, runtime));
  }
}

UpdateMediaLiveChannelResponse Alibabacloud_ICE20201109::Client::updateMediaLiveChannel(shared_ptr<UpdateMediaLiveChannelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateMediaLiveChannelWithOptions(request, runtime);
}

UpdateMediaLiveInputResponse Alibabacloud_ICE20201109::Client::updateMediaLiveInputWithOptions(shared_ptr<UpdateMediaLiveInputRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateMediaLiveInputShrinkRequest> request = make_shared<UpdateMediaLiveInputShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<UpdateMediaLiveInputRequestInputSettings>>(tmpReq->inputSettings)) {
    request->inputSettingsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->inputSettings, make_shared<string>("InputSettings"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->securityGroupIds)) {
    request->securityGroupIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->securityGroupIds, make_shared<string>("SecurityGroupIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->inputSettingsShrink)) {
    query->insert(pair<string, string>("InputSettings", *request->inputSettingsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityGroupIdsShrink)) {
    query->insert(pair<string, string>("SecurityGroupIds", *request->securityGroupIdsShrink));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->inputId)) {
    body->insert(pair<string, string>("InputId", *request->inputId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateMediaLiveInput"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateMediaLiveInputResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateMediaLiveInputResponse(execute(params, req, runtime));
  }
}

UpdateMediaLiveInputResponse Alibabacloud_ICE20201109::Client::updateMediaLiveInput(shared_ptr<UpdateMediaLiveInputRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateMediaLiveInputWithOptions(request, runtime);
}

UpdateMediaLiveInputSecurityGroupResponse Alibabacloud_ICE20201109::Client::updateMediaLiveInputSecurityGroupWithOptions(shared_ptr<UpdateMediaLiveInputSecurityGroupRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateMediaLiveInputSecurityGroupShrinkRequest> request = make_shared<UpdateMediaLiveInputSecurityGroupShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->whitelistRules)) {
    request->whitelistRulesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->whitelistRules, make_shared<string>("WhitelistRules"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    body->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->securityGroupId)) {
    body->insert(pair<string, string>("SecurityGroupId", *request->securityGroupId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->whitelistRulesShrink)) {
    body->insert(pair<string, string>("WhitelistRules", *request->whitelistRulesShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateMediaLiveInputSecurityGroup"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateMediaLiveInputSecurityGroupResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateMediaLiveInputSecurityGroupResponse(execute(params, req, runtime));
  }
}

UpdateMediaLiveInputSecurityGroupResponse Alibabacloud_ICE20201109::Client::updateMediaLiveInputSecurityGroup(shared_ptr<UpdateMediaLiveInputSecurityGroupRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateMediaLiveInputSecurityGroupWithOptions(request, runtime);
}

UpdateMediaMarksResponse Alibabacloud_ICE20201109::Client::updateMediaMarksWithOptions(shared_ptr<UpdateMediaMarksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaId)) {
    query->insert(pair<string, string>("MediaId", *request->mediaId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaMarks)) {
    query->insert(pair<string, string>("MediaMarks", *request->mediaMarks));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateMediaMarks"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateMediaMarksResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateMediaMarksResponse(execute(params, req, runtime));
  }
}

UpdateMediaMarksResponse Alibabacloud_ICE20201109::Client::updateMediaMarks(shared_ptr<UpdateMediaMarksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateMediaMarksWithOptions(request, runtime);
}

UpdateMediaToSearchLibResponse Alibabacloud_ICE20201109::Client::updateMediaToSearchLibWithOptions(shared_ptr<UpdateMediaToSearchLibRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaId)) {
    query->insert(pair<string, string>("MediaId", *request->mediaId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->msgBody)) {
    query->insert(pair<string, string>("MsgBody", *request->msgBody));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->searchLibName)) {
    query->insert(pair<string, string>("SearchLibName", *request->searchLibName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateMediaToSearchLib"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateMediaToSearchLibResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateMediaToSearchLibResponse(execute(params, req, runtime));
  }
}

UpdateMediaToSearchLibResponse Alibabacloud_ICE20201109::Client::updateMediaToSearchLib(shared_ptr<UpdateMediaToSearchLibRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateMediaToSearchLibWithOptions(request, runtime);
}

UpdatePipelineResponse Alibabacloud_ICE20201109::Client::updatePipelineWithOptions(shared_ptr<UpdatePipelineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pipelineId)) {
    query->insert(pair<string, string>("PipelineId", *request->pipelineId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->priority)) {
    query->insert(pair<string, long>("Priority", *request->priority));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdatePipeline"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdatePipelineResponse(callApi(params, req, runtime));
  }
  else {
    return UpdatePipelineResponse(execute(params, req, runtime));
  }
}

UpdatePipelineResponse Alibabacloud_ICE20201109::Client::updatePipeline(shared_ptr<UpdatePipelineRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updatePipelineWithOptions(request, runtime);
}

UpdateProgramResponse Alibabacloud_ICE20201109::Client::updateProgramWithOptions(shared_ptr<UpdateProgramRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->adBreaks)) {
    query->insert(pair<string, string>("AdBreaks", *request->adBreaks));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->channelName)) {
    query->insert(pair<string, string>("ChannelName", *request->channelName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clipRange)) {
    query->insert(pair<string, string>("ClipRange", *request->clipRange));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->programName)) {
    query->insert(pair<string, string>("ProgramName", *request->programName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceLocationName)) {
    query->insert(pair<string, string>("SourceLocationName", *request->sourceLocationName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceName)) {
    query->insert(pair<string, string>("SourceName", *request->sourceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceType)) {
    query->insert(pair<string, string>("SourceType", *request->sourceType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->transition)) {
    query->insert(pair<string, string>("Transition", *request->transition));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateProgram"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateProgramResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateProgramResponse(execute(params, req, runtime));
  }
}

UpdateProgramResponse Alibabacloud_ICE20201109::Client::updateProgram(shared_ptr<UpdateProgramRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateProgramWithOptions(request, runtime);
}

UpdateRtcRobotInstanceResponse Alibabacloud_ICE20201109::Client::updateRtcRobotInstanceWithOptions(shared_ptr<UpdateRtcRobotInstanceRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateRtcRobotInstanceShrinkRequest> request = make_shared<UpdateRtcRobotInstanceShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<UpdateRtcRobotInstanceRequestConfig>(tmpReq->config)) {
    request->configShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->config, make_shared<string>("Config"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->configShrink)) {
    query->insert(pair<string, string>("Config", *request->configShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceId)) {
    query->insert(pair<string, string>("InstanceId", *request->instanceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateRtcRobotInstance"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateRtcRobotInstanceResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateRtcRobotInstanceResponse(execute(params, req, runtime));
  }
}

UpdateRtcRobotInstanceResponse Alibabacloud_ICE20201109::Client::updateRtcRobotInstance(shared_ptr<UpdateRtcRobotInstanceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateRtcRobotInstanceWithOptions(request, runtime);
}

UpdateSourceResponse Alibabacloud_ICE20201109::Client::updateSourceWithOptions(shared_ptr<UpdateSourceRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->httpPackageConfigurations)) {
    query->insert(pair<string, string>("HttpPackageConfigurations", *request->httpPackageConfigurations));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceLocationName)) {
    query->insert(pair<string, string>("SourceLocationName", *request->sourceLocationName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceName)) {
    query->insert(pair<string, string>("SourceName", *request->sourceName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceType)) {
    query->insert(pair<string, string>("SourceType", *request->sourceType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateSource"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateSourceResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateSourceResponse(execute(params, req, runtime));
  }
}

UpdateSourceResponse Alibabacloud_ICE20201109::Client::updateSource(shared_ptr<UpdateSourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateSourceWithOptions(request, runtime);
}

UpdateSourceLocationResponse Alibabacloud_ICE20201109::Client::updateSourceLocationWithOptions(shared_ptr<UpdateSourceLocationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->baseUrl)) {
    query->insert(pair<string, string>("BaseUrl", *request->baseUrl));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableSegmentDelivery)) {
    query->insert(pair<string, bool>("EnableSegmentDelivery", *request->enableSegmentDelivery));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->segmentDeliveryUrl)) {
    query->insert(pair<string, string>("SegmentDeliveryUrl", *request->segmentDeliveryUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceLocationName)) {
    query->insert(pair<string, string>("SourceLocationName", *request->sourceLocationName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateSourceLocation"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateSourceLocationResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateSourceLocationResponse(execute(params, req, runtime));
  }
}

UpdateSourceLocationResponse Alibabacloud_ICE20201109::Client::updateSourceLocation(shared_ptr<UpdateSourceLocationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateSourceLocationWithOptions(request, runtime);
}

UpdateTemplateResponse Alibabacloud_ICE20201109::Client::updateTemplateWithOptions(shared_ptr<UpdateTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->coverUrl)) {
    query->insert(pair<string, string>("CoverUrl", *request->coverUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->previewMedia)) {
    query->insert(pair<string, string>("PreviewMedia", *request->previewMedia));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->relatedMediaids)) {
    query->insert(pair<string, string>("RelatedMediaids", *request->relatedMediaids));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->source)) {
    query->insert(pair<string, string>("Source", *request->source));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    query->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->config)) {
    body->insert(pair<string, string>("Config", *request->config));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateTemplate"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UpdateTemplateResponse(callApi(params, req, runtime));
  }
  else {
    return UpdateTemplateResponse(execute(params, req, runtime));
  }
}

UpdateTemplateResponse Alibabacloud_ICE20201109::Client::updateTemplate(shared_ptr<UpdateTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateTemplateWithOptions(request, runtime);
}

UploadMediaByURLResponse Alibabacloud_ICE20201109::Client::uploadMediaByURLWithOptions(shared_ptr<UploadMediaByURLRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->entityId)) {
    query->insert(pair<string, string>("EntityId", *request->entityId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaMetaData)) {
    query->insert(pair<string, string>("MediaMetaData", *request->mediaMetaData));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->postProcessConfig)) {
    query->insert(pair<string, string>("PostProcessConfig", *request->postProcessConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uploadTargetConfig)) {
    query->insert(pair<string, string>("UploadTargetConfig", *request->uploadTargetConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uploadURLs)) {
    query->insert(pair<string, string>("UploadURLs", *request->uploadURLs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    query->insert(pair<string, string>("UserData", *request->userData));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UploadMediaByURL"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UploadMediaByURLResponse(callApi(params, req, runtime));
  }
  else {
    return UploadMediaByURLResponse(execute(params, req, runtime));
  }
}

UploadMediaByURLResponse Alibabacloud_ICE20201109::Client::uploadMediaByURL(shared_ptr<UploadMediaByURLRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return uploadMediaByURLWithOptions(request, runtime);
}

UploadStreamByURLResponse Alibabacloud_ICE20201109::Client::uploadStreamByURLWithOptions(shared_ptr<UploadStreamByURLRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->definition)) {
    query->insert(pair<string, string>("Definition", *request->definition));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileExtension)) {
    query->insert(pair<string, string>("FileExtension", *request->fileExtension));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->HDRType)) {
    query->insert(pair<string, string>("HDRType", *request->HDRType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaId)) {
    query->insert(pair<string, string>("MediaId", *request->mediaId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->streamURL)) {
    query->insert(pair<string, string>("StreamURL", *request->streamURL));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    query->insert(pair<string, string>("UserData", *request->userData));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UploadStreamByURL"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  if (Darabonba_Util::Client::isUnset<string>(_signatureVersion) || !Darabonba_Util::Client::equalString(_signatureVersion, make_shared<string>("v4"))) {
    return UploadStreamByURLResponse(callApi(params, req, runtime));
  }
  else {
    return UploadStreamByURLResponse(execute(params, req, runtime));
  }
}

UploadStreamByURLResponse Alibabacloud_ICE20201109::Client::uploadStreamByURL(shared_ptr<UploadStreamByURLRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return uploadStreamByURLWithOptions(request, runtime);
}

