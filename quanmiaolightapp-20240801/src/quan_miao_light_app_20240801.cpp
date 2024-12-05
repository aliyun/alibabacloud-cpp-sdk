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
  if (!Darabonba_Util::Client::isUnset<string>(request->referenceMaterialsShrink)) {
    body->insert(pair<string, string>("referenceMaterials", *request->referenceMaterialsShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->styleFeature)) {
    body->insert(pair<string, string>("styleFeature", *request->styleFeature));
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

RunVideoAnalysisResponse Alibabacloud_QuanMiaoLightApp20240801::Client::runVideoAnalysisWithOptions(shared_ptr<string> workspaceId,
                                                                                                    shared_ptr<RunVideoAnalysisRequest> tmpReq,
                                                                                                    shared_ptr<map<string, string>> headers,
                                                                                                    shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<RunVideoAnalysisShrinkRequest> request = make_shared<RunVideoAnalysisShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->generateOptions)) {
    request->generateOptionsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->generateOptions, make_shared<string>("generateOptions"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->generateOptionsShrink)) {
    body->insert(pair<string, string>("generateOptions", *request->generateOptionsShrink));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    body->insert(pair<string, string>("taskId", *request->taskId));
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

