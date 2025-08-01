// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/quan_miao_light_app_20240801.hpp>
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

using namespace Alibabacloud_QuanMiaoLightApp20240801;

Alibabacloud_QuanMiaoLightApp20240801::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("quanmiaolightapp"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_QuanMiaoLightApp20240801::Client::getEndpoint(shared_ptr<string> productId,
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

CancelAsyncTaskResponse Alibabacloud_QuanMiaoLightApp20240801::Client::cancelAsyncTaskWithOptions(shared_ptr<string> workspaceId,
                                                                                                  shared_ptr<CancelAsyncTaskRequest> request,
                                                                                                  shared_ptr<map<string, string>> headers,
                                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    body->insert(pair<string, string>("taskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CancelAsyncTask"))},
    {"version", boost::any(string("2024-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/quanmiao/lightapp/cancelAsyncTask"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CancelAsyncTaskResponse(callApi(params, req, runtime));
}

CancelAsyncTaskResponse Alibabacloud_QuanMiaoLightApp20240801::Client::cancelAsyncTask(shared_ptr<string> workspaceId, shared_ptr<CancelAsyncTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return cancelAsyncTaskWithOptions(workspaceId, request, headers, runtime);
}

ExportAnalysisTagDetailByTaskIdResponse Alibabacloud_QuanMiaoLightApp20240801::Client::exportAnalysisTagDetailByTaskIdWithOptions(shared_ptr<string> workspaceId,
                                                                                                                                  shared_ptr<ExportAnalysisTagDetailByTaskIdRequest> tmpReq,
                                                                                                                                  shared_ptr<map<string, string>> headers,
                                                                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ExportAnalysisTagDetailByTaskIdShrinkRequest> request = make_shared<ExportAnalysisTagDetailByTaskIdShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->categories)) {
    request->categoriesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->categories, make_shared<string>("categories"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->categoriesShrink)) {
    body->insert(pair<string, string>("categories", *request->categoriesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->category)) {
    body->insert(pair<string, string>("category", *request->category));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    body->insert(pair<string, string>("taskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ExportAnalysisTagDetailByTaskId"))},
    {"version", boost::any(string("2024-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/quanmiao/lightapp/exportAnalysisTagDetailByTaskId"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ExportAnalysisTagDetailByTaskIdResponse(callApi(params, req, runtime));
}

ExportAnalysisTagDetailByTaskIdResponse Alibabacloud_QuanMiaoLightApp20240801::Client::exportAnalysisTagDetailByTaskId(shared_ptr<string> workspaceId, shared_ptr<ExportAnalysisTagDetailByTaskIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return exportAnalysisTagDetailByTaskIdWithOptions(workspaceId, request, headers, runtime);
}

GenerateBroadcastNewsResponse Alibabacloud_QuanMiaoLightApp20240801::Client::generateBroadcastNewsWithOptions(shared_ptr<string> workspaceId,
                                                                                                              shared_ptr<GenerateBroadcastNewsRequest> request,
                                                                                                              shared_ptr<map<string, string>> headers,
                                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->prompt)) {
    body->insert(pair<string, string>("prompt", *request->prompt));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GenerateBroadcastNews"))},
    {"version", boost::any(string("2024-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/quanmiao/lightapp/GenerateBroadcastNews"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GenerateBroadcastNewsResponse(callApi(params, req, runtime));
}

GenerateBroadcastNewsResponse Alibabacloud_QuanMiaoLightApp20240801::Client::generateBroadcastNews(shared_ptr<string> workspaceId, shared_ptr<GenerateBroadcastNewsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return generateBroadcastNewsWithOptions(workspaceId, request, headers, runtime);
}

GenerateOutputFormatResponse Alibabacloud_QuanMiaoLightApp20240801::Client::generateOutputFormatWithOptions(shared_ptr<string> workspaceId,
                                                                                                            shared_ptr<GenerateOutputFormatRequest> tmpReq,
                                                                                                            shared_ptr<map<string, string>> headers,
                                                                                                            shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<GenerateOutputFormatShrinkRequest> request = make_shared<GenerateOutputFormatShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<GenerateOutputFormatRequestTags>>(tmpReq->tags)) {
    request->tagsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tags, make_shared<string>("tags"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->businessType)) {
    body->insert(pair<string, string>("businessType", *request->businessType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->content)) {
    body->insert(pair<string, string>("content", *request->content));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extraInfo)) {
    body->insert(pair<string, string>("extraInfo", *request->extraInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagsShrink)) {
    body->insert(pair<string, string>("tags", *request->tagsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskDescription)) {
    body->insert(pair<string, string>("taskDescription", *request->taskDescription));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GenerateOutputFormat"))},
    {"version", boost::any(string("2024-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/quanmiao/lightapp/generateOutputFormat"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GenerateOutputFormatResponse(callApi(params, req, runtime));
}

GenerateOutputFormatResponse Alibabacloud_QuanMiaoLightApp20240801::Client::generateOutputFormat(shared_ptr<string> workspaceId, shared_ptr<GenerateOutputFormatRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return generateOutputFormatWithOptions(workspaceId, request, headers, runtime);
}

GetEnterpriseVocAnalysisTaskResponse Alibabacloud_QuanMiaoLightApp20240801::Client::getEnterpriseVocAnalysisTaskWithOptions(shared_ptr<string> workspaceId,
                                                                                                                            shared_ptr<GetEnterpriseVocAnalysisTaskRequest> request,
                                                                                                                            shared_ptr<map<string, string>> headers,
                                                                                                                            shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    query->insert(pair<string, string>("taskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetEnterpriseVocAnalysisTask"))},
    {"version", boost::any(string("2024-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/quanmiao/lightapp/getEnterpriseVocAnalysisTask"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetEnterpriseVocAnalysisTaskResponse(callApi(params, req, runtime));
}

GetEnterpriseVocAnalysisTaskResponse Alibabacloud_QuanMiaoLightApp20240801::Client::getEnterpriseVocAnalysisTask(shared_ptr<string> workspaceId, shared_ptr<GetEnterpriseVocAnalysisTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getEnterpriseVocAnalysisTaskWithOptions(workspaceId, request, headers, runtime);
}

GetEssayCorrectionTaskResponse Alibabacloud_QuanMiaoLightApp20240801::Client::getEssayCorrectionTaskWithOptions(shared_ptr<string> workspaceId,
                                                                                                                shared_ptr<GetEssayCorrectionTaskRequest> request,
                                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    query->insert(pair<string, string>("taskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetEssayCorrectionTask"))},
    {"version", boost::any(string("2024-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/quanmiao/lightapp/getEssayCorrectionTask"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetEssayCorrectionTaskResponse(callApi(params, req, runtime));
}

GetEssayCorrectionTaskResponse Alibabacloud_QuanMiaoLightApp20240801::Client::getEssayCorrectionTask(shared_ptr<string> workspaceId, shared_ptr<GetEssayCorrectionTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getEssayCorrectionTaskWithOptions(workspaceId, request, headers, runtime);
}

GetTagMiningAnalysisTaskResponse Alibabacloud_QuanMiaoLightApp20240801::Client::getTagMiningAnalysisTaskWithOptions(shared_ptr<string> workspaceId,
                                                                                                                    shared_ptr<GetTagMiningAnalysisTaskRequest> request,
                                                                                                                    shared_ptr<map<string, string>> headers,
                                                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    query->insert(pair<string, string>("taskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTagMiningAnalysisTask"))},
    {"version", boost::any(string("2024-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/quanmiao/lightapp/getTagMiningAnalysisTask"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTagMiningAnalysisTaskResponse(callApi(params, req, runtime));
}

GetTagMiningAnalysisTaskResponse Alibabacloud_QuanMiaoLightApp20240801::Client::getTagMiningAnalysisTask(shared_ptr<string> workspaceId, shared_ptr<GetTagMiningAnalysisTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getTagMiningAnalysisTaskWithOptions(workspaceId, request, headers, runtime);
}

GetVideoAnalysisConfigResponse Alibabacloud_QuanMiaoLightApp20240801::Client::getVideoAnalysisConfigWithOptions(shared_ptr<string> workspaceId, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetVideoAnalysisConfig"))},
    {"version", boost::any(string("2024-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/quanmiao/lightapp/videoAnalysis/getVideoAnalysisConfig"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetVideoAnalysisConfigResponse(callApi(params, req, runtime));
}

GetVideoAnalysisConfigResponse Alibabacloud_QuanMiaoLightApp20240801::Client::getVideoAnalysisConfig(shared_ptr<string> workspaceId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getVideoAnalysisConfigWithOptions(workspaceId, headers, runtime);
}

GetVideoAnalysisTaskResponse Alibabacloud_QuanMiaoLightApp20240801::Client::getVideoAnalysisTaskWithOptions(shared_ptr<string> workspaceId,
                                                                                                            shared_ptr<GetVideoAnalysisTaskRequest> request,
                                                                                                            shared_ptr<map<string, string>> headers,
                                                                                                            shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    query->insert(pair<string, string>("taskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetVideoAnalysisTask"))},
    {"version", boost::any(string("2024-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/quanmiao/lightapp/videoAnalysis/getVideoAnalysisTask"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetVideoAnalysisTaskResponse(callApi(params, req, runtime));
}

GetVideoAnalysisTaskResponse Alibabacloud_QuanMiaoLightApp20240801::Client::getVideoAnalysisTask(shared_ptr<string> workspaceId, shared_ptr<GetVideoAnalysisTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getVideoAnalysisTaskWithOptions(workspaceId, request, headers, runtime);
}

HotNewsRecommendResponse Alibabacloud_QuanMiaoLightApp20240801::Client::hotNewsRecommendWithOptions(shared_ptr<string> workspaceId,
                                                                                                    shared_ptr<HotNewsRecommendRequest> request,
                                                                                                    shared_ptr<map<string, string>> headers,
                                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->prompt)) {
    body->insert(pair<string, string>("prompt", *request->prompt));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("HotNewsRecommend"))},
    {"version", boost::any(string("2024-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/quanmiao/lightapp/hotNewsRecommend"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return HotNewsRecommendResponse(callApi(params, req, runtime));
}

HotNewsRecommendResponse Alibabacloud_QuanMiaoLightApp20240801::Client::hotNewsRecommend(shared_ptr<string> workspaceId, shared_ptr<HotNewsRecommendRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return hotNewsRecommendWithOptions(workspaceId, request, headers, runtime);
}

ListAnalysisTagDetailByTaskIdResponse Alibabacloud_QuanMiaoLightApp20240801::Client::listAnalysisTagDetailByTaskIdWithOptions(shared_ptr<string> workspaceId,
                                                                                                                              shared_ptr<ListAnalysisTagDetailByTaskIdRequest> request,
                                                                                                                              shared_ptr<map<string, string>> headers,
                                                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("maxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("nextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    query->insert(pair<string, string>("taskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAnalysisTagDetailByTaskId"))},
    {"version", boost::any(string("2024-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/quanmiao/lightapp/listAnalysisTagDetailByTaskId"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAnalysisTagDetailByTaskIdResponse(callApi(params, req, runtime));
}

ListAnalysisTagDetailByTaskIdResponse Alibabacloud_QuanMiaoLightApp20240801::Client::listAnalysisTagDetailByTaskId(shared_ptr<string> workspaceId, shared_ptr<ListAnalysisTagDetailByTaskIdRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listAnalysisTagDetailByTaskIdWithOptions(workspaceId, request, headers, runtime);
}

ListHotTopicSummariesResponse Alibabacloud_QuanMiaoLightApp20240801::Client::listHotTopicSummariesWithOptions(shared_ptr<string> workspaceId,
                                                                                                              shared_ptr<ListHotTopicSummariesRequest> request,
                                                                                                              shared_ptr<map<string, string>> headers,
                                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->category)) {
    body->insert(pair<string, string>("category", *request->category));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hotTopic)) {
    body->insert(pair<string, string>("hotTopic", *request->hotTopic));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hotTopicVersion)) {
    body->insert(pair<string, string>("hotTopicVersion", *request->hotTopicVersion));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    body->insert(pair<string, long>("maxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    body->insert(pair<string, string>("nextToken", *request->nextToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListHotTopicSummaries"))},
    {"version", boost::any(string("2024-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/quanmiao/lightapp/listHotTopicSummaries"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListHotTopicSummariesResponse(callApi(params, req, runtime));
}

ListHotTopicSummariesResponse Alibabacloud_QuanMiaoLightApp20240801::Client::listHotTopicSummaries(shared_ptr<string> workspaceId, shared_ptr<ListHotTopicSummariesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listHotTopicSummariesWithOptions(workspaceId, request, headers, runtime);
}

RunEnterpriseVocAnalysisResponse Alibabacloud_QuanMiaoLightApp20240801::Client::runEnterpriseVocAnalysisWithOptions(shared_ptr<string> workspaceId,
                                                                                                                    shared_ptr<RunEnterpriseVocAnalysisRequest> tmpReq,
                                                                                                                    shared_ptr<map<string, string>> headers,
                                                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<RunEnterpriseVocAnalysisShrinkRequest> request = make_shared<RunEnterpriseVocAnalysisShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<RunEnterpriseVocAnalysisRequestFilterTags>>(tmpReq->filterTags)) {
    request->filterTagsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->filterTags, make_shared<string>("filterTags"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<RunEnterpriseVocAnalysisRequestTags>>(tmpReq->tags)) {
    request->tagsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tags, make_shared<string>("tags"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->akProxy)) {
    body->insert(pair<string, string>("akProxy", *request->akProxy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->apiKey)) {
    body->insert(pair<string, string>("apiKey", *request->apiKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->content)) {
    body->insert(pair<string, string>("content", *request->content));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extraInfo)) {
    body->insert(pair<string, string>("extraInfo", *request->extraInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filterTagsShrink)) {
    body->insert(pair<string, string>("filterTags", *request->filterTagsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modelId)) {
    body->insert(pair<string, string>("modelId", *request->modelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outputFormat)) {
    body->insert(pair<string, string>("outputFormat", *request->outputFormat));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->sourceTrace)) {
    body->insert(pair<string, bool>("sourceTrace", *request->sourceTrace));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagsShrink)) {
    body->insert(pair<string, string>("tags", *request->tagsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskDescription)) {
    body->insert(pair<string, string>("taskDescription", *request->taskDescription));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RunEnterpriseVocAnalysis"))},
    {"version", boost::any(string("2024-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/quanmiao/lightapp/runEnterpriseVocAnalysis"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RunEnterpriseVocAnalysisResponse(callApi(params, req, runtime));
}

RunEnterpriseVocAnalysisResponse Alibabacloud_QuanMiaoLightApp20240801::Client::runEnterpriseVocAnalysis(shared_ptr<string> workspaceId, shared_ptr<RunEnterpriseVocAnalysisRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return runEnterpriseVocAnalysisWithOptions(workspaceId, request, headers, runtime);
}

RunEssayCorrectionResponse Alibabacloud_QuanMiaoLightApp20240801::Client::runEssayCorrectionWithOptions(shared_ptr<string> workspaceId,
                                                                                                        shared_ptr<RunEssayCorrectionRequest> request,
                                                                                                        shared_ptr<map<string, string>> headers,
                                                                                                        shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->answer)) {
    body->insert(pair<string, string>("answer", *request->answer));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->grade)) {
    body->insert(pair<string, string>("grade", *request->grade));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modelId)) {
    body->insert(pair<string, string>("modelId", *request->modelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->otherReviewPoints)) {
    body->insert(pair<string, string>("otherReviewPoints", *request->otherReviewPoints));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->question)) {
    body->insert(pair<string, string>("question", *request->question));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subject)) {
    body->insert(pair<string, string>("subject", *request->subject));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->totalScore)) {
    body->insert(pair<string, long>("totalScore", *request->totalScore));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RunEssayCorrection"))},
    {"version", boost::any(string("2024-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/quanmiao/lightapp/runEssayCorrection"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RunEssayCorrectionResponse(callApi(params, req, runtime));
}

RunEssayCorrectionResponse Alibabacloud_QuanMiaoLightApp20240801::Client::runEssayCorrection(shared_ptr<string> workspaceId, shared_ptr<RunEssayCorrectionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return runEssayCorrectionWithOptions(workspaceId, request, headers, runtime);
}

RunHotTopicChatResponse Alibabacloud_QuanMiaoLightApp20240801::Client::runHotTopicChatWithOptions(shared_ptr<string> workspaceId,
                                                                                                  shared_ptr<RunHotTopicChatRequest> tmpReq,
                                                                                                  shared_ptr<map<string, string>> headers,
                                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<RunHotTopicChatShrinkRequest> request = make_shared<RunHotTopicChatShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->generateOptions)) {
    request->generateOptionsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->generateOptions, make_shared<string>("generateOptions"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->hotTopics)) {
    request->hotTopicsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->hotTopics, make_shared<string>("hotTopics"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<RunHotTopicChatRequestMessages>>(tmpReq->messages)) {
    request->messagesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->messages, make_shared<string>("messages"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<RunHotTopicChatRequestStepForBroadcastContentConfig>(tmpReq->stepForBroadcastContentConfig)) {
    request->stepForBroadcastContentConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->stepForBroadcastContentConfig, make_shared<string>("stepForBroadcastContentConfig"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->category)) {
    body->insert(pair<string, string>("category", *request->category));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->generateOptionsShrink)) {
    body->insert(pair<string, string>("generateOptions", *request->generateOptionsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hotTopicVersion)) {
    body->insert(pair<string, string>("hotTopicVersion", *request->hotTopicVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->hotTopicsShrink)) {
    body->insert(pair<string, string>("hotTopics", *request->hotTopicsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->imageCount)) {
    body->insert(pair<string, long>("imageCount", *request->imageCount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->messagesShrink)) {
    body->insert(pair<string, string>("messages", *request->messagesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modelCustomPromptTemplate)) {
    body->insert(pair<string, string>("modelCustomPromptTemplate", *request->modelCustomPromptTemplate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modelId)) {
    body->insert(pair<string, string>("modelId", *request->modelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->originalSessionId)) {
    body->insert(pair<string, string>("originalSessionId", *request->originalSessionId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prompt)) {
    body->insert(pair<string, string>("prompt", *request->prompt));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stepForBroadcastContentConfigShrink)) {
    body->insert(pair<string, string>("stepForBroadcastContentConfig", *request->stepForBroadcastContentConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    body->insert(pair<string, string>("taskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RunHotTopicChat"))},
    {"version", boost::any(string("2024-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/quanmiao/lightapp/runHotTopicChat"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RunHotTopicChatResponse(callApi(params, req, runtime));
}

RunHotTopicChatResponse Alibabacloud_QuanMiaoLightApp20240801::Client::runHotTopicChat(shared_ptr<string> workspaceId, shared_ptr<RunHotTopicChatRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return runHotTopicChatWithOptions(workspaceId, request, headers, runtime);
}

RunHotTopicSummaryResponse Alibabacloud_QuanMiaoLightApp20240801::Client::runHotTopicSummaryWithOptions(shared_ptr<string> workspaceId,
                                                                                                        shared_ptr<RunHotTopicSummaryRequest> tmpReq,
                                                                                                        shared_ptr<map<string, string>> headers,
                                                                                                        shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<RunHotTopicSummaryShrinkRequest> request = make_shared<RunHotTopicSummaryShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<RunHotTopicSummaryRequestStepForCustomSummaryStyleConfig>(tmpReq->stepForCustomSummaryStyleConfig)) {
    request->stepForCustomSummaryStyleConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->stepForCustomSummaryStyleConfig, make_shared<string>("stepForCustomSummaryStyleConfig"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->topicIds)) {
    request->topicIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->topicIds, make_shared<string>("topicIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->hotTopicVersion)) {
    body->insert(pair<string, string>("hotTopicVersion", *request->hotTopicVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->stepForCustomSummaryStyleConfigShrink)) {
    body->insert(pair<string, string>("stepForCustomSummaryStyleConfig", *request->stepForCustomSummaryStyleConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->topicIdsShrink)) {
    body->insert(pair<string, string>("topicIds", *request->topicIdsShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RunHotTopicSummary"))},
    {"version", boost::any(string("2024-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/quanmiao/lightapp/runHotTopicSummary"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RunHotTopicSummaryResponse(callApi(params, req, runtime));
}

RunHotTopicSummaryResponse Alibabacloud_QuanMiaoLightApp20240801::Client::runHotTopicSummary(shared_ptr<string> workspaceId, shared_ptr<RunHotTopicSummaryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return runHotTopicSummaryWithOptions(workspaceId, request, headers, runtime);
}

RunMarketingInformationExtractResponse Alibabacloud_QuanMiaoLightApp20240801::Client::runMarketingInformationExtractWithOptions(shared_ptr<string> workspaceId,
                                                                                                                                shared_ptr<RunMarketingInformationExtractRequest> tmpReq,
                                                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<RunMarketingInformationExtractShrinkRequest> request = make_shared<RunMarketingInformationExtractShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->sourceMaterials)) {
    request->sourceMaterialsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->sourceMaterials, make_shared<string>("sourceMaterials"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->customPrompt)) {
    body->insert(pair<string, string>("customPrompt", *request->customPrompt));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extractType)) {
    body->insert(pair<string, string>("extractType", *request->extractType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modelId)) {
    body->insert(pair<string, string>("modelId", *request->modelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceMaterialsShrink)) {
    body->insert(pair<string, string>("sourceMaterials", *request->sourceMaterialsShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RunMarketingInformationExtract"))},
    {"version", boost::any(string("2024-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/quanmiao/lightapp/runMarketingInformationExtract"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RunMarketingInformationExtractResponse(callApi(params, req, runtime));
}

RunMarketingInformationExtractResponse Alibabacloud_QuanMiaoLightApp20240801::Client::runMarketingInformationExtract(shared_ptr<string> workspaceId, shared_ptr<RunMarketingInformationExtractRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return runMarketingInformationExtractWithOptions(workspaceId, request, headers, runtime);
}

RunMarketingInformationWritingResponse Alibabacloud_QuanMiaoLightApp20240801::Client::runMarketingInformationWritingWithOptions(shared_ptr<string> workspaceId,
                                                                                                                                shared_ptr<RunMarketingInformationWritingRequest> request,
                                                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiKey)) {
    body->insert(pair<string, string>("apiKey", *request->apiKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->customLimitation)) {
    body->insert(pair<string, string>("customLimitation", *request->customLimitation));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->customPrompt)) {
    body->insert(pair<string, string>("customPrompt", *request->customPrompt));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputExample)) {
    body->insert(pair<string, string>("inputExample", *request->inputExample));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modelId)) {
    body->insert(pair<string, string>("modelId", *request->modelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outputExample)) {
    body->insert(pair<string, string>("outputExample", *request->outputExample));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceMaterial)) {
    body->insert(pair<string, string>("sourceMaterial", *request->sourceMaterial));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->writingType)) {
    body->insert(pair<string, string>("writingType", *request->writingType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RunMarketingInformationWriting"))},
    {"version", boost::any(string("2024-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/quanmiao/lightapp/runMarketingInformationWriting"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RunMarketingInformationWritingResponse(callApi(params, req, runtime));
}

RunMarketingInformationWritingResponse Alibabacloud_QuanMiaoLightApp20240801::Client::runMarketingInformationWriting(shared_ptr<string> workspaceId, shared_ptr<RunMarketingInformationWritingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return runMarketingInformationWritingWithOptions(workspaceId, request, headers, runtime);
}

RunNetworkContentAuditResponse Alibabacloud_QuanMiaoLightApp20240801::Client::runNetworkContentAuditWithOptions(shared_ptr<string> workspaceId,
                                                                                                                shared_ptr<RunNetworkContentAuditRequest> tmpReq,
                                                                                                                shared_ptr<map<string, string>> headers,
                                                                                                                shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<RunNetworkContentAuditShrinkRequest> request = make_shared<RunNetworkContentAuditShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<RunNetworkContentAuditRequestTags>>(tmpReq->tags)) {
    request->tagsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tags, make_shared<string>("tags"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiKey)) {
    body->insert(pair<string, string>("apiKey", *request->apiKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->businessType)) {
    body->insert(pair<string, string>("businessType", *request->businessType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->content)) {
    body->insert(pair<string, string>("content", *request->content));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extraInfo)) {
    body->insert(pair<string, string>("extraInfo", *request->extraInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modelId)) {
    body->insert(pair<string, string>("modelId", *request->modelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outputFormat)) {
    body->insert(pair<string, string>("outputFormat", *request->outputFormat));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagsShrink)) {
    body->insert(pair<string, string>("tags", *request->tagsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskDescription)) {
    body->insert(pair<string, string>("taskDescription", *request->taskDescription));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RunNetworkContentAudit"))},
    {"version", boost::any(string("2024-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/quanmiao/lightapp/runNetworkContentAudit"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RunNetworkContentAuditResponse(callApi(params, req, runtime));
}

RunNetworkContentAuditResponse Alibabacloud_QuanMiaoLightApp20240801::Client::runNetworkContentAudit(shared_ptr<string> workspaceId, shared_ptr<RunNetworkContentAuditRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return runNetworkContentAuditWithOptions(workspaceId, request, headers, runtime);
}

RunOcrParseResponse Alibabacloud_QuanMiaoLightApp20240801::Client::runOcrParseWithOptions(shared_ptr<string> workspaceId,
                                                                                          shared_ptr<RunOcrParseRequest> request,
                                                                                          shared_ptr<map<string, string>> headers,
                                                                                          shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->fileKey)) {
    body->insert(pair<string, string>("fileKey", *request->fileKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modelId)) {
    body->insert(pair<string, string>("modelId", *request->modelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->url)) {
    body->insert(pair<string, string>("url", *request->url));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RunOcrParse"))},
    {"version", boost::any(string("2024-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/quanmiao/lightapp/runOcrParse"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RunOcrParseResponse(callApi(params, req, runtime));
}

RunOcrParseResponse Alibabacloud_QuanMiaoLightApp20240801::Client::runOcrParse(shared_ptr<string> workspaceId, shared_ptr<RunOcrParseRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return runOcrParseWithOptions(workspaceId, request, headers, runtime);
}

RunScriptChatResponse Alibabacloud_QuanMiaoLightApp20240801::Client::runScriptChatWithOptions(shared_ptr<string> workspaceId,
                                                                                              shared_ptr<RunScriptChatRequest> request,
                                                                                              shared_ptr<map<string, string>> headers,
                                                                                              shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->prompt)) {
    body->insert(pair<string, string>("prompt", *request->prompt));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    body->insert(pair<string, string>("taskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RunScriptChat"))},
    {"version", boost::any(string("2024-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/quanmiao/lightapp/runScriptChat"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RunScriptChatResponse(callApi(params, req, runtime));
}

RunScriptChatResponse Alibabacloud_QuanMiaoLightApp20240801::Client::runScriptChat(shared_ptr<string> workspaceId, shared_ptr<RunScriptChatRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return runScriptChatWithOptions(workspaceId, request, headers, runtime);
}

RunScriptContinueResponse Alibabacloud_QuanMiaoLightApp20240801::Client::runScriptContinueWithOptions(shared_ptr<string> workspaceId,
                                                                                                      shared_ptr<RunScriptContinueRequest> request,
                                                                                                      shared_ptr<map<string, string>> headers,
                                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->scriptSummary)) {
    body->insert(pair<string, string>("scriptSummary", *request->scriptSummary));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scriptTypeKeyword)) {
    body->insert(pair<string, string>("scriptTypeKeyword", *request->scriptTypeKeyword));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userProvidedContent)) {
    body->insert(pair<string, string>("userProvidedContent", *request->userProvidedContent));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RunScriptContinue"))},
    {"version", boost::any(string("2024-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/quanmiao/lightapp/runScriptContinue"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RunScriptContinueResponse(callApi(params, req, runtime));
}

RunScriptContinueResponse Alibabacloud_QuanMiaoLightApp20240801::Client::runScriptContinue(shared_ptr<string> workspaceId, shared_ptr<RunScriptContinueRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return runScriptContinueWithOptions(workspaceId, request, headers, runtime);
}

RunScriptPlanningResponse Alibabacloud_QuanMiaoLightApp20240801::Client::runScriptPlanningWithOptions(shared_ptr<string> workspaceId,
                                                                                                      shared_ptr<RunScriptPlanningRequest> request,
                                                                                                      shared_ptr<map<string, string>> headers,
                                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->additionalNote)) {
    body->insert(pair<string, string>("additionalNote", *request->additionalNote));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->dialogueInScene)) {
    body->insert(pair<string, bool>("dialogueInScene", *request->dialogueInScene));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->plotConflict)) {
    body->insert(pair<string, bool>("plotConflict", *request->plotConflict));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scriptName)) {
    body->insert(pair<string, string>("scriptName", *request->scriptName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->scriptShotCount)) {
    body->insert(pair<string, long>("scriptShotCount", *request->scriptShotCount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scriptSummary)) {
    body->insert(pair<string, string>("scriptSummary", *request->scriptSummary));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scriptTypeKeyword)) {
    body->insert(pair<string, string>("scriptTypeKeyword", *request->scriptTypeKeyword));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RunScriptPlanning"))},
    {"version", boost::any(string("2024-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/quanmiao/lightapp/runScriptPlanning"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RunScriptPlanningResponse(callApi(params, req, runtime));
}

RunScriptPlanningResponse Alibabacloud_QuanMiaoLightApp20240801::Client::runScriptPlanning(shared_ptr<string> workspaceId, shared_ptr<RunScriptPlanningRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return runScriptPlanningWithOptions(workspaceId, request, headers, runtime);
}

RunScriptRefineResponse Alibabacloud_QuanMiaoLightApp20240801::Client::runScriptRefineWithOptions(shared_ptr<string> workspaceId,
                                                                                                  shared_ptr<RunScriptRefineRequest> request,
                                                                                                  shared_ptr<map<string, string>> headers,
                                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    body->insert(pair<string, string>("taskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RunScriptRefine"))},
    {"version", boost::any(string("2024-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/quanmiao/lightapp/runScriptRefine"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RunScriptRefineResponse(callApi(params, req, runtime));
}

RunScriptRefineResponse Alibabacloud_QuanMiaoLightApp20240801::Client::runScriptRefine(shared_ptr<string> workspaceId, shared_ptr<RunScriptRefineRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return runScriptRefineWithOptions(workspaceId, request, headers, runtime);
}

RunStyleWritingResponse Alibabacloud_QuanMiaoLightApp20240801::Client::runStyleWritingWithOptions(shared_ptr<string> workspaceId,
                                                                                                  shared_ptr<RunStyleWritingRequest> tmpReq,
                                                                                                  shared_ptr<map<string, string>> headers,
                                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<RunStyleWritingShrinkRequest> request = make_shared<RunStyleWritingShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->learningSamples)) {
    request->learningSamplesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->learningSamples, make_shared<string>("learningSamples"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->referenceMaterials)) {
    request->referenceMaterialsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->referenceMaterials, make_shared<string>("referenceMaterials"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->learningSamplesShrink)) {
    body->insert(pair<string, string>("learningSamples", *request->learningSamplesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->processStage)) {
    body->insert(pair<string, string>("processStage", *request->processStage));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->referenceMaterialsShrink)) {
    body->insert(pair<string, string>("referenceMaterials", *request->referenceMaterialsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->styleFeature)) {
    body->insert(pair<string, string>("styleFeature", *request->styleFeature));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->useSearch)) {
    body->insert(pair<string, bool>("useSearch", *request->useSearch));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->writingTheme)) {
    body->insert(pair<string, string>("writingTheme", *request->writingTheme));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RunStyleWriting"))},
    {"version", boost::any(string("2024-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/quanmiao/lightapp/runStyleWriting"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RunStyleWritingResponse(callApi(params, req, runtime));
}

RunStyleWritingResponse Alibabacloud_QuanMiaoLightApp20240801::Client::runStyleWriting(shared_ptr<string> workspaceId, shared_ptr<RunStyleWritingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return runStyleWritingWithOptions(workspaceId, request, headers, runtime);
}

RunTagMiningAnalysisResponse Alibabacloud_QuanMiaoLightApp20240801::Client::runTagMiningAnalysisWithOptions(shared_ptr<string> workspaceId,
                                                                                                            shared_ptr<RunTagMiningAnalysisRequest> tmpReq,
                                                                                                            shared_ptr<map<string, string>> headers,
                                                                                                            shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<RunTagMiningAnalysisShrinkRequest> request = make_shared<RunTagMiningAnalysisShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<RunTagMiningAnalysisRequestTags>>(tmpReq->tags)) {
    request->tagsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tags, make_shared<string>("tags"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiKey)) {
    body->insert(pair<string, string>("apiKey", *request->apiKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->businessType)) {
    body->insert(pair<string, string>("businessType", *request->businessType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->content)) {
    body->insert(pair<string, string>("content", *request->content));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extraInfo)) {
    body->insert(pair<string, string>("extraInfo", *request->extraInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modelId)) {
    body->insert(pair<string, string>("modelId", *request->modelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outputFormat)) {
    body->insert(pair<string, string>("outputFormat", *request->outputFormat));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagsShrink)) {
    body->insert(pair<string, string>("tags", *request->tagsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskDescription)) {
    body->insert(pair<string, string>("taskDescription", *request->taskDescription));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RunTagMiningAnalysis"))},
    {"version", boost::any(string("2024-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/quanmiao/lightapp/runTagMiningAnalysis"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RunTagMiningAnalysisResponse(callApi(params, req, runtime));
}

RunTagMiningAnalysisResponse Alibabacloud_QuanMiaoLightApp20240801::Client::runTagMiningAnalysis(shared_ptr<string> workspaceId, shared_ptr<RunTagMiningAnalysisRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return runTagMiningAnalysisWithOptions(workspaceId, request, headers, runtime);
}

RunVideoAnalysisResponse Alibabacloud_QuanMiaoLightApp20240801::Client::runVideoAnalysisWithOptions(shared_ptr<string> workspaceId,
                                                                                                    shared_ptr<RunVideoAnalysisRequest> tmpReq,
                                                                                                    shared_ptr<map<string, string>> headers,
                                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<RunVideoAnalysisShrinkRequest> request = make_shared<RunVideoAnalysisShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->excludeGenerateOptions)) {
    request->excludeGenerateOptionsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->excludeGenerateOptions, make_shared<string>("excludeGenerateOptions"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<RunVideoAnalysisRequestFrameSampleMethod>(tmpReq->frameSampleMethod)) {
    request->frameSampleMethodShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->frameSampleMethod, make_shared<string>("frameSampleMethod"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->generateOptions)) {
    request->generateOptionsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->generateOptions, make_shared<string>("generateOptions"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<RunVideoAnalysisRequestTextProcessTasks>>(tmpReq->textProcessTasks)) {
    request->textProcessTasksShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->textProcessTasks, make_shared<string>("textProcessTasks"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<RunVideoAnalysisRequestVideoCaptionInfo>(tmpReq->videoCaptionInfo)) {
    request->videoCaptionInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->videoCaptionInfo, make_shared<string>("videoCaptionInfo"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<RunVideoAnalysisRequestVideoRoles>>(tmpReq->videoRoles)) {
    request->videoRolesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->videoRoles, make_shared<string>("videoRoles"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->autoRoleRecognitionVideoUrl)) {
    body->insert(pair<string, string>("autoRoleRecognitionVideoUrl", *request->autoRoleRecognitionVideoUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->excludeGenerateOptionsShrink)) {
    body->insert(pair<string, string>("excludeGenerateOptions", *request->excludeGenerateOptionsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->faceIdentitySimilarityMinScore)) {
    body->insert(pair<string, double>("faceIdentitySimilarityMinScore", *request->faceIdentitySimilarityMinScore));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->frameSampleMethodShrink)) {
    body->insert(pair<string, string>("frameSampleMethod", *request->frameSampleMethodShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->generateOptionsShrink)) {
    body->insert(pair<string, string>("generateOptions", *request->generateOptionsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->language)) {
    body->insert(pair<string, string>("language", *request->language));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modelCustomPromptTemplate)) {
    body->insert(pair<string, string>("modelCustomPromptTemplate", *request->modelCustomPromptTemplate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modelCustomPromptTemplateId)) {
    body->insert(pair<string, string>("modelCustomPromptTemplateId", *request->modelCustomPromptTemplateId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modelId)) {
    body->insert(pair<string, string>("modelId", *request->modelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->originalSessionId)) {
    body->insert(pair<string, string>("originalSessionId", *request->originalSessionId));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->snapshotInterval)) {
    body->insert(pair<string, double>("snapshotInterval", *request->snapshotInterval));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->splitInterval)) {
    body->insert(pair<string, long>("splitInterval", *request->splitInterval));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    body->insert(pair<string, string>("taskId", *request->taskId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->textProcessTasksShrink)) {
    body->insert(pair<string, string>("textProcessTasks", *request->textProcessTasksShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->videoCaptionInfoShrink)) {
    body->insert(pair<string, string>("videoCaptionInfo", *request->videoCaptionInfoShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->videoExtraInfo)) {
    body->insert(pair<string, string>("videoExtraInfo", *request->videoExtraInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->videoModelCustomPromptTemplate)) {
    body->insert(pair<string, string>("videoModelCustomPromptTemplate", *request->videoModelCustomPromptTemplate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->videoModelId)) {
    body->insert(pair<string, string>("videoModelId", *request->videoModelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->videoRolesShrink)) {
    body->insert(pair<string, string>("videoRoles", *request->videoRolesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->videoShotFaceIdentityCount)) {
    body->insert(pair<string, long>("videoShotFaceIdentityCount", *request->videoShotFaceIdentityCount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->videoUrl)) {
    body->insert(pair<string, string>("videoUrl", *request->videoUrl));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RunVideoAnalysis"))},
    {"version", boost::any(string("2024-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/quanmiao/lightapp/runVideoAnalysis"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RunVideoAnalysisResponse(callApi(params, req, runtime));
}

RunVideoAnalysisResponse Alibabacloud_QuanMiaoLightApp20240801::Client::runVideoAnalysis(shared_ptr<string> workspaceId, shared_ptr<RunVideoAnalysisRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return runVideoAnalysisWithOptions(workspaceId, request, headers, runtime);
}

SubmitEnterpriseVocAnalysisTaskResponse Alibabacloud_QuanMiaoLightApp20240801::Client::submitEnterpriseVocAnalysisTaskWithOptions(shared_ptr<string> workspaceId,
                                                                                                                                  shared_ptr<SubmitEnterpriseVocAnalysisTaskRequest> tmpReq,
                                                                                                                                  shared_ptr<map<string, string>> headers,
                                                                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SubmitEnterpriseVocAnalysisTaskShrinkRequest> request = make_shared<SubmitEnterpriseVocAnalysisTaskShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<SubmitEnterpriseVocAnalysisTaskRequestContents>>(tmpReq->contents)) {
    request->contentsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->contents, make_shared<string>("contents"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<SubmitEnterpriseVocAnalysisTaskRequestFilterTags>>(tmpReq->filterTags)) {
    request->filterTagsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->filterTags, make_shared<string>("filterTags"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<SubmitEnterpriseVocAnalysisTaskRequestTags>>(tmpReq->tags)) {
    request->tagsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tags, make_shared<string>("tags"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiKey)) {
    body->insert(pair<string, string>("apiKey", *request->apiKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contentsShrink)) {
    body->insert(pair<string, string>("contents", *request->contentsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extraInfo)) {
    body->insert(pair<string, string>("extraInfo", *request->extraInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileKey)) {
    body->insert(pair<string, string>("fileKey", *request->fileKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->filterTagsShrink)) {
    body->insert(pair<string, string>("filterTags", *request->filterTagsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modelId)) {
    body->insert(pair<string, string>("modelId", *request->modelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outputFormat)) {
    body->insert(pair<string, string>("outputFormat", *request->outputFormat));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->sourceTrace)) {
    body->insert(pair<string, bool>("sourceTrace", *request->sourceTrace));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagsShrink)) {
    body->insert(pair<string, string>("tags", *request->tagsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskDescription)) {
    body->insert(pair<string, string>("taskDescription", *request->taskDescription));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->url)) {
    body->insert(pair<string, string>("url", *request->url));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitEnterpriseVocAnalysisTask"))},
    {"version", boost::any(string("2024-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/quanmiao/lightapp/submitEnterpriseVocAnalysisTask"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitEnterpriseVocAnalysisTaskResponse(callApi(params, req, runtime));
}

SubmitEnterpriseVocAnalysisTaskResponse Alibabacloud_QuanMiaoLightApp20240801::Client::submitEnterpriseVocAnalysisTask(shared_ptr<string> workspaceId, shared_ptr<SubmitEnterpriseVocAnalysisTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return submitEnterpriseVocAnalysisTaskWithOptions(workspaceId, request, headers, runtime);
}

SubmitEssayCorrectionTaskResponse Alibabacloud_QuanMiaoLightApp20240801::Client::submitEssayCorrectionTaskWithOptions(shared_ptr<string> workspaceId,
                                                                                                                      shared_ptr<SubmitEssayCorrectionTaskRequest> tmpReq,
                                                                                                                      shared_ptr<map<string, string>> headers,
                                                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SubmitEssayCorrectionTaskShrinkRequest> request = make_shared<SubmitEssayCorrectionTaskShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<SubmitEssayCorrectionTaskRequestTasks>>(tmpReq->tasks)) {
    request->tasksShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tasks, make_shared<string>("tasks"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->grade)) {
    body->insert(pair<string, string>("grade", *request->grade));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modelId)) {
    body->insert(pair<string, string>("modelId", *request->modelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->otherReviewPoints)) {
    body->insert(pair<string, string>("otherReviewPoints", *request->otherReviewPoints));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->question)) {
    body->insert(pair<string, string>("question", *request->question));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subject)) {
    body->insert(pair<string, string>("subject", *request->subject));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tasksShrink)) {
    body->insert(pair<string, string>("tasks", *request->tasksShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->totalScore)) {
    body->insert(pair<string, long>("totalScore", *request->totalScore));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitEssayCorrectionTask"))},
    {"version", boost::any(string("2024-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/quanmiao/lightapp/submitEssayCorrectionTask"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitEssayCorrectionTaskResponse(callApi(params, req, runtime));
}

SubmitEssayCorrectionTaskResponse Alibabacloud_QuanMiaoLightApp20240801::Client::submitEssayCorrectionTask(shared_ptr<string> workspaceId, shared_ptr<SubmitEssayCorrectionTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return submitEssayCorrectionTaskWithOptions(workspaceId, request, headers, runtime);
}

SubmitTagMiningAnalysisTaskResponse Alibabacloud_QuanMiaoLightApp20240801::Client::submitTagMiningAnalysisTaskWithOptions(shared_ptr<string> workspaceId,
                                                                                                                          shared_ptr<SubmitTagMiningAnalysisTaskRequest> tmpReq,
                                                                                                                          shared_ptr<map<string, string>> headers,
                                                                                                                          shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SubmitTagMiningAnalysisTaskShrinkRequest> request = make_shared<SubmitTagMiningAnalysisTaskShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->contents)) {
    request->contentsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->contents, make_shared<string>("contents"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<SubmitTagMiningAnalysisTaskRequestTags>>(tmpReq->tags)) {
    request->tagsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->tags, make_shared<string>("tags"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->apiKey)) {
    body->insert(pair<string, string>("apiKey", *request->apiKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->businessType)) {
    body->insert(pair<string, string>("businessType", *request->businessType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->contentsShrink)) {
    body->insert(pair<string, string>("contents", *request->contentsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extraInfo)) {
    body->insert(pair<string, string>("extraInfo", *request->extraInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modelId)) {
    body->insert(pair<string, string>("modelId", *request->modelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outputFormat)) {
    body->insert(pair<string, string>("outputFormat", *request->outputFormat));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->tagsShrink)) {
    body->insert(pair<string, string>("tags", *request->tagsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskDescription)) {
    body->insert(pair<string, string>("taskDescription", *request->taskDescription));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->url)) {
    body->insert(pair<string, string>("url", *request->url));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitTagMiningAnalysisTask"))},
    {"version", boost::any(string("2024-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/quanmiao/lightapp/submitTagMiningAnalysisTask"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitTagMiningAnalysisTaskResponse(callApi(params, req, runtime));
}

SubmitTagMiningAnalysisTaskResponse Alibabacloud_QuanMiaoLightApp20240801::Client::submitTagMiningAnalysisTask(shared_ptr<string> workspaceId, shared_ptr<SubmitTagMiningAnalysisTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return submitTagMiningAnalysisTaskWithOptions(workspaceId, request, headers, runtime);
}

SubmitVideoAnalysisTaskResponse Alibabacloud_QuanMiaoLightApp20240801::Client::submitVideoAnalysisTaskWithOptions(shared_ptr<string> workspaceId,
                                                                                                                  shared_ptr<SubmitVideoAnalysisTaskRequest> tmpReq,
                                                                                                                  shared_ptr<map<string, string>> headers,
                                                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SubmitVideoAnalysisTaskShrinkRequest> request = make_shared<SubmitVideoAnalysisTaskShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->excludeGenerateOptions)) {
    request->excludeGenerateOptionsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->excludeGenerateOptions, make_shared<string>("excludeGenerateOptions"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<SubmitVideoAnalysisTaskRequestFrameSampleMethod>(tmpReq->frameSampleMethod)) {
    request->frameSampleMethodShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->frameSampleMethod, make_shared<string>("frameSampleMethod"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->generateOptions)) {
    request->generateOptionsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->generateOptions, make_shared<string>("generateOptions"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<SubmitVideoAnalysisTaskRequestTextProcessTasks>>(tmpReq->textProcessTasks)) {
    request->textProcessTasksShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->textProcessTasks, make_shared<string>("textProcessTasks"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<SubmitVideoAnalysisTaskRequestVideoCaptionInfo>(tmpReq->videoCaptionInfo)) {
    request->videoCaptionInfoShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->videoCaptionInfo, make_shared<string>("videoCaptionInfo"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<SubmitVideoAnalysisTaskRequestVideoRoles>>(tmpReq->videoRoles)) {
    request->videoRolesShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->videoRoles, make_shared<string>("videoRoles"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->autoRoleRecognitionVideoUrl)) {
    body->insert(pair<string, string>("autoRoleRecognitionVideoUrl", *request->autoRoleRecognitionVideoUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->deduplicationId)) {
    body->insert(pair<string, string>("deduplicationId", *request->deduplicationId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->excludeGenerateOptionsShrink)) {
    body->insert(pair<string, string>("excludeGenerateOptions", *request->excludeGenerateOptionsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->faceIdentitySimilarityMinScore)) {
    body->insert(pair<string, double>("faceIdentitySimilarityMinScore", *request->faceIdentitySimilarityMinScore));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->frameSampleMethodShrink)) {
    body->insert(pair<string, string>("frameSampleMethod", *request->frameSampleMethodShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->generateOptionsShrink)) {
    body->insert(pair<string, string>("generateOptions", *request->generateOptionsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->language)) {
    body->insert(pair<string, string>("language", *request->language));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modelCustomPromptTemplate)) {
    body->insert(pair<string, string>("modelCustomPromptTemplate", *request->modelCustomPromptTemplate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modelCustomPromptTemplateId)) {
    body->insert(pair<string, string>("modelCustomPromptTemplateId", *request->modelCustomPromptTemplateId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->modelId)) {
    body->insert(pair<string, string>("modelId", *request->modelId));
  }
  if (!Darabonba_Util::Client::isUnset<double>(request->snapshotInterval)) {
    body->insert(pair<string, double>("snapshotInterval", *request->snapshotInterval));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->splitInterval)) {
    body->insert(pair<string, long>("splitInterval", *request->splitInterval));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->textProcessTasksShrink)) {
    body->insert(pair<string, string>("textProcessTasks", *request->textProcessTasksShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->videoCaptionInfoShrink)) {
    body->insert(pair<string, string>("videoCaptionInfo", *request->videoCaptionInfoShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->videoExtraInfo)) {
    body->insert(pair<string, string>("videoExtraInfo", *request->videoExtraInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->videoModelCustomPromptTemplate)) {
    body->insert(pair<string, string>("videoModelCustomPromptTemplate", *request->videoModelCustomPromptTemplate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->videoModelId)) {
    body->insert(pair<string, string>("videoModelId", *request->videoModelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->videoRolesShrink)) {
    body->insert(pair<string, string>("videoRoles", *request->videoRolesShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->videoShotFaceIdentityCount)) {
    body->insert(pair<string, long>("videoShotFaceIdentityCount", *request->videoShotFaceIdentityCount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->videoUrl)) {
    body->insert(pair<string, string>("videoUrl", *request->videoUrl));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitVideoAnalysisTask"))},
    {"version", boost::any(string("2024-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/quanmiao/lightapp/videoAnalysis/submitVideoAnalysisTask"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitVideoAnalysisTaskResponse(callApi(params, req, runtime));
}

SubmitVideoAnalysisTaskResponse Alibabacloud_QuanMiaoLightApp20240801::Client::submitVideoAnalysisTask(shared_ptr<string> workspaceId, shared_ptr<SubmitVideoAnalysisTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return submitVideoAnalysisTaskWithOptions(workspaceId, request, headers, runtime);
}

UpdateVideoAnalysisConfigResponse Alibabacloud_QuanMiaoLightApp20240801::Client::updateVideoAnalysisConfigWithOptions(shared_ptr<string> workspaceId,
                                                                                                                      shared_ptr<UpdateVideoAnalysisConfigRequest> request,
                                                                                                                      shared_ptr<map<string, string>> headers,
                                                                                                                      shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->asyncConcurrency)) {
    body->insert(pair<string, long>("asyncConcurrency", *request->asyncConcurrency));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateVideoAnalysisConfig"))},
    {"version", boost::any(string("2024-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/quanmiao/lightapp/videoAnalysis/updateVideoAnalysisConfig"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateVideoAnalysisConfigResponse(callApi(params, req, runtime));
}

UpdateVideoAnalysisConfigResponse Alibabacloud_QuanMiaoLightApp20240801::Client::updateVideoAnalysisConfig(shared_ptr<string> workspaceId, shared_ptr<UpdateVideoAnalysisConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateVideoAnalysisConfigWithOptions(workspaceId, request, headers, runtime);
}

UpdateVideoAnalysisTaskResponse Alibabacloud_QuanMiaoLightApp20240801::Client::updateVideoAnalysisTaskWithOptions(shared_ptr<string> workspaceId,
                                                                                                                  shared_ptr<UpdateVideoAnalysisTaskRequest> request,
                                                                                                                  shared_ptr<map<string, string>> headers,
                                                                                                                  shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    body->insert(pair<string, string>("taskId", *request->taskId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskStatus)) {
    body->insert(pair<string, string>("taskStatus", *request->taskStatus));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateVideoAnalysisTask"))},
    {"version", boost::any(string("2024-08-01"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/") + string(Alibabacloud_OpenApiUtil::Client::getEncodeParam(workspaceId)) + string("/quanmiao/lightapp/videoAnalysis/updateVideoAnalysisTask"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateVideoAnalysisTaskResponse(callApi(params, req, runtime));
}

UpdateVideoAnalysisTaskResponse Alibabacloud_QuanMiaoLightApp20240801::Client::updateVideoAnalysisTask(shared_ptr<string> workspaceId, shared_ptr<UpdateVideoAnalysisTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateVideoAnalysisTaskWithOptions(workspaceId, request, headers, runtime);
}

