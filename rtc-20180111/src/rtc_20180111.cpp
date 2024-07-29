// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/rtc_20180111.hpp>
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

using namespace Alibabacloud_Rtc20180111;

Alibabacloud_Rtc20180111::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("central");
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("rtc"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_Rtc20180111::Client::getEndpoint(shared_ptr<string> productId,
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

AddRecordTemplateResponse Alibabacloud_Rtc20180111::Client::addRecordTemplateWithOptions(shared_ptr<AddRecordTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->backgroundColor)) {
    query->insert(pair<string, long>("BackgroundColor", *request->backgroundColor));
  }
  if (!Darabonba_Util::Client::isUnset<vector<AddRecordTemplateRequestBackgrounds>>(request->backgrounds)) {
    query->insert(pair<string, vector<AddRecordTemplateRequestBackgrounds>>("Backgrounds", *request->backgrounds));
  }
  if (!Darabonba_Util::Client::isUnset<vector<AddRecordTemplateRequestClockWidgets>>(request->clockWidgets)) {
    query->insert(pair<string, vector<AddRecordTemplateRequestClockWidgets>>("ClockWidgets", *request->clockWidgets));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->delayStopTime)) {
    query->insert(pair<string, long>("DelayStopTime", *request->delayStopTime));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableM3u8DateTime)) {
    query->insert(pair<string, bool>("EnableM3u8DateTime", *request->enableM3u8DateTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->fileSplitInterval)) {
    query->insert(pair<string, long>("FileSplitInterval", *request->fileSplitInterval));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->formats)) {
    query->insert(pair<string, vector<string>>("Formats", *request->formats));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->httpCallbackUrl)) {
    query->insert(pair<string, string>("HttpCallbackUrl", *request->httpCallbackUrl));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->layoutIds)) {
    query->insert(pair<string, vector<long>>("LayoutIds", *request->layoutIds));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->mediaEncode)) {
    query->insert(pair<string, long>("MediaEncode", *request->mediaEncode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mnsQueue)) {
    query->insert(pair<string, string>("MnsQueue", *request->mnsQueue));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ossBucket)) {
    query->insert(pair<string, string>("OssBucket", *request->ossBucket));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ossEndpoint)) {
    query->insert(pair<string, string>("OssEndpoint", *request->ossEndpoint));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ossFilePrefix)) {
    query->insert(pair<string, string>("OssFilePrefix", *request->ossFilePrefix));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskProfile)) {
    query->insert(pair<string, string>("TaskProfile", *request->taskProfile));
  }
  if (!Darabonba_Util::Client::isUnset<vector<AddRecordTemplateRequestWatermarks>>(request->watermarks)) {
    query->insert(pair<string, vector<AddRecordTemplateRequestWatermarks>>("Watermarks", *request->watermarks));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddRecordTemplate"))},
    {"version", boost::any(string("2018-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddRecordTemplateResponse(callApi(params, req, runtime));
}

AddRecordTemplateResponse Alibabacloud_Rtc20180111::Client::addRecordTemplate(shared_ptr<AddRecordTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addRecordTemplateWithOptions(request, runtime);
}

CreateAppRecordTemplateResponse Alibabacloud_Rtc20180111::Client::createAppRecordTemplateWithOptions(shared_ptr<CreateAppRecordTemplateRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateAppRecordTemplateShrinkRequest> request = make_shared<CreateAppRecordTemplateShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CreateAppRecordTemplateRequestRecordTemplate>(tmpReq->recordTemplate)) {
    request->recordTemplateShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->recordTemplate, make_shared<string>("RecordTemplate"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->recordTemplateShrink)) {
    query->insert(pair<string, string>("RecordTemplate", *request->recordTemplateShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateAppRecordTemplate"))},
    {"version", boost::any(string("2018-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateAppRecordTemplateResponse(callApi(params, req, runtime));
}

CreateAppRecordTemplateResponse Alibabacloud_Rtc20180111::Client::createAppRecordTemplate(shared_ptr<CreateAppRecordTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAppRecordTemplateWithOptions(request, runtime);
}

CreateAppStreamingOutTemplateResponse Alibabacloud_Rtc20180111::Client::createAppStreamingOutTemplateWithOptions(shared_ptr<CreateAppStreamingOutTemplateRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateAppStreamingOutTemplateShrinkRequest> request = make_shared<CreateAppStreamingOutTemplateShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<CreateAppStreamingOutTemplateRequestStreamingOutTemplate>(tmpReq->streamingOutTemplate)) {
    request->streamingOutTemplateShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->streamingOutTemplate, make_shared<string>("StreamingOutTemplate"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->streamingOutTemplateShrink)) {
    query->insert(pair<string, string>("StreamingOutTemplate", *request->streamingOutTemplateShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateAppStreamingOutTemplate"))},
    {"version", boost::any(string("2018-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateAppStreamingOutTemplateResponse(callApi(params, req, runtime));
}

CreateAppStreamingOutTemplateResponse Alibabacloud_Rtc20180111::Client::createAppStreamingOutTemplate(shared_ptr<CreateAppStreamingOutTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAppStreamingOutTemplateWithOptions(request, runtime);
}

CreateAutoLiveStreamRuleResponse Alibabacloud_Rtc20180111::Client::createAutoLiveStreamRuleWithOptions(shared_ptr<CreateAutoLiveStreamRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->callBack)) {
    query->insert(pair<string, string>("CallBack", *request->callBack));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->channelIdPrefixes)) {
    query->insert(pair<string, vector<string>>("ChannelIdPrefixes", *request->channelIdPrefixes));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->channelIds)) {
    query->insert(pair<string, vector<string>>("ChannelIds", *request->channelIds));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->mediaEncode)) {
    query->insert(pair<string, long>("MediaEncode", *request->mediaEncode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->playDomain)) {
    query->insert(pair<string, string>("PlayDomain", *request->playDomain));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleName)) {
    query->insert(pair<string, string>("RuleName", *request->ruleName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateAutoLiveStreamRule"))},
    {"version", boost::any(string("2018-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateAutoLiveStreamRuleResponse(callApi(params, req, runtime));
}

CreateAutoLiveStreamRuleResponse Alibabacloud_Rtc20180111::Client::createAutoLiveStreamRule(shared_ptr<CreateAutoLiveStreamRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAutoLiveStreamRuleWithOptions(request, runtime);
}

CreateEventSubscribeResponse Alibabacloud_Rtc20180111::Client::createEventSubscribeWithOptions(shared_ptr<CreateEventSubscribeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->callbackUrl)) {
    query->insert(pair<string, string>("CallbackUrl", *request->callbackUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->channelId)) {
    query->insert(pair<string, string>("ChannelId", *request->channelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->events)) {
    query->insert(pair<string, vector<string>>("Events", *request->events));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->needCallbackAuth)) {
    query->insert(pair<string, bool>("NeedCallbackAuth", *request->needCallbackAuth));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->role)) {
    query->insert(pair<string, long>("Role", *request->role));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->users)) {
    query->insert(pair<string, vector<string>>("Users", *request->users));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateEventSubscribe"))},
    {"version", boost::any(string("2018-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateEventSubscribeResponse(callApi(params, req, runtime));
}

CreateEventSubscribeResponse Alibabacloud_Rtc20180111::Client::createEventSubscribe(shared_ptr<CreateEventSubscribeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createEventSubscribeWithOptions(request, runtime);
}

CreateMPULayoutResponse Alibabacloud_Rtc20180111::Client::createMPULayoutWithOptions(shared_ptr<CreateMPULayoutRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->audioMixCount)) {
    query->insert(pair<string, long>("AudioMixCount", *request->audioMixCount));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<CreateMPULayoutRequestPanes>>(request->panes)) {
    query->insert(pair<string, vector<CreateMPULayoutRequestPanes>>("Panes", *request->panes));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateMPULayout"))},
    {"version", boost::any(string("2018-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateMPULayoutResponse(callApi(params, req, runtime));
}

CreateMPULayoutResponse Alibabacloud_Rtc20180111::Client::createMPULayout(shared_ptr<CreateMPULayoutRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createMPULayoutWithOptions(request, runtime);
}

DeleteAppRecordTemplateResponse Alibabacloud_Rtc20180111::Client::deleteAppRecordTemplateWithOptions(shared_ptr<DeleteAppRecordTemplateRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DeleteAppRecordTemplateShrinkRequest> request = make_shared<DeleteAppRecordTemplateShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<DeleteAppRecordTemplateRequestTemplate>(tmpReq->template_)) {
    request->templateShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->template_, make_shared<string>("Template"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateShrink)) {
    query->insert(pair<string, string>("Template_", *request->templateShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteAppRecordTemplate"))},
    {"version", boost::any(string("2018-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteAppRecordTemplateResponse(callApi(params, req, runtime));
}

DeleteAppRecordTemplateResponse Alibabacloud_Rtc20180111::Client::deleteAppRecordTemplate(shared_ptr<DeleteAppRecordTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAppRecordTemplateWithOptions(request, runtime);
}

DeleteAppStreamingOutTemplateResponse Alibabacloud_Rtc20180111::Client::deleteAppStreamingOutTemplateWithOptions(shared_ptr<DeleteAppStreamingOutTemplateRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DeleteAppStreamingOutTemplateShrinkRequest> request = make_shared<DeleteAppStreamingOutTemplateShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<DeleteAppStreamingOutTemplateRequestStreamingOutTemplate>(tmpReq->streamingOutTemplate)) {
    request->streamingOutTemplateShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->streamingOutTemplate, make_shared<string>("StreamingOutTemplate"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->streamingOutTemplateShrink)) {
    query->insert(pair<string, string>("StreamingOutTemplate", *request->streamingOutTemplateShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteAppStreamingOutTemplate"))},
    {"version", boost::any(string("2018-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteAppStreamingOutTemplateResponse(callApi(params, req, runtime));
}

DeleteAppStreamingOutTemplateResponse Alibabacloud_Rtc20180111::Client::deleteAppStreamingOutTemplate(shared_ptr<DeleteAppStreamingOutTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAppStreamingOutTemplateWithOptions(request, runtime);
}

DeleteAutoLiveStreamRuleResponse Alibabacloud_Rtc20180111::Client::deleteAutoLiveStreamRuleWithOptions(shared_ptr<DeleteAutoLiveStreamRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ruleId)) {
    query->insert(pair<string, long>("RuleId", *request->ruleId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteAutoLiveStreamRule"))},
    {"version", boost::any(string("2018-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteAutoLiveStreamRuleResponse(callApi(params, req, runtime));
}

DeleteAutoLiveStreamRuleResponse Alibabacloud_Rtc20180111::Client::deleteAutoLiveStreamRule(shared_ptr<DeleteAutoLiveStreamRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteAutoLiveStreamRuleWithOptions(request, runtime);
}

DeleteChannelResponse Alibabacloud_Rtc20180111::Client::deleteChannelWithOptions(shared_ptr<DeleteChannelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->channelId)) {
    query->insert(pair<string, string>("ChannelId", *request->channelId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteChannel"))},
    {"version", boost::any(string("2018-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteChannelResponse(callApi(params, req, runtime));
}

DeleteChannelResponse Alibabacloud_Rtc20180111::Client::deleteChannel(shared_ptr<DeleteChannelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteChannelWithOptions(request, runtime);
}

DeleteEventSubscribeResponse Alibabacloud_Rtc20180111::Client::deleteEventSubscribeWithOptions(shared_ptr<DeleteEventSubscribeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subscribeId)) {
    query->insert(pair<string, string>("SubscribeId", *request->subscribeId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteEventSubscribe"))},
    {"version", boost::any(string("2018-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteEventSubscribeResponse(callApi(params, req, runtime));
}

DeleteEventSubscribeResponse Alibabacloud_Rtc20180111::Client::deleteEventSubscribe(shared_ptr<DeleteEventSubscribeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteEventSubscribeWithOptions(request, runtime);
}

DeleteMPULayoutResponse Alibabacloud_Rtc20180111::Client::deleteMPULayoutWithOptions(shared_ptr<DeleteMPULayoutRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->layoutId)) {
    query->insert(pair<string, long>("LayoutId", *request->layoutId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteMPULayout"))},
    {"version", boost::any(string("2018-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteMPULayoutResponse(callApi(params, req, runtime));
}

DeleteMPULayoutResponse Alibabacloud_Rtc20180111::Client::deleteMPULayout(shared_ptr<DeleteMPULayoutRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteMPULayoutWithOptions(request, runtime);
}

DeleteRecordTemplateResponse Alibabacloud_Rtc20180111::Client::deleteRecordTemplateWithOptions(shared_ptr<DeleteRecordTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
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
    {"action", boost::any(string("DeleteRecordTemplate"))},
    {"version", boost::any(string("2018-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteRecordTemplateResponse(callApi(params, req, runtime));
}

DeleteRecordTemplateResponse Alibabacloud_Rtc20180111::Client::deleteRecordTemplate(shared_ptr<DeleteRecordTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteRecordTemplateWithOptions(request, runtime);
}

DescribeAllCallbackResponse Alibabacloud_Rtc20180111::Client::describeAllCallbackWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAllCallback"))},
    {"version", boost::any(string("2018-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAllCallbackResponse(callApi(params, req, runtime));
}

DescribeAllCallbackResponse Alibabacloud_Rtc20180111::Client::describeAllCallback() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAllCallbackWithOptions(runtime);
}

DescribeAppCallStatusResponse Alibabacloud_Rtc20180111::Client::describeAppCallStatusWithOptions(shared_ptr<DescribeAppCallStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAppCallStatus"))},
    {"version", boost::any(string("2018-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAppCallStatusResponse(callApi(params, req, runtime));
}

DescribeAppCallStatusResponse Alibabacloud_Rtc20180111::Client::describeAppCallStatus(shared_ptr<DescribeAppCallStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAppCallStatusWithOptions(request, runtime);
}

DescribeAppCallbackSecretKeyResponse Alibabacloud_Rtc20180111::Client::describeAppCallbackSecretKeyWithOptions(shared_ptr<DescribeAppCallbackSecretKeyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAppCallbackSecretKey"))},
    {"version", boost::any(string("2018-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAppCallbackSecretKeyResponse(callApi(params, req, runtime));
}

DescribeAppCallbackSecretKeyResponse Alibabacloud_Rtc20180111::Client::describeAppCallbackSecretKey(shared_ptr<DescribeAppCallbackSecretKeyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAppCallbackSecretKeyWithOptions(request, runtime);
}

DescribeAppKeyResponse Alibabacloud_Rtc20180111::Client::describeAppKeyWithOptions(shared_ptr<DescribeAppKeyRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAppKey"))},
    {"version", boost::any(string("2018-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAppKeyResponse(callApi(params, req, runtime));
}

DescribeAppKeyResponse Alibabacloud_Rtc20180111::Client::describeAppKey(shared_ptr<DescribeAppKeyRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAppKeyWithOptions(request, runtime);
}

DescribeAppLayoutsResponse Alibabacloud_Rtc20180111::Client::describeAppLayoutsWithOptions(shared_ptr<DescribeAppLayoutsRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DescribeAppLayoutsShrinkRequest> request = make_shared<DescribeAppLayoutsShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<DescribeAppLayoutsRequestCondition>(tmpReq->condition)) {
    request->conditionShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->condition, make_shared<string>("Condition"), make_shared<string>("json")));
  }
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAppLayouts"))},
    {"version", boost::any(string("2018-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAppLayoutsResponse(callApi(params, req, runtime));
}

DescribeAppLayoutsResponse Alibabacloud_Rtc20180111::Client::describeAppLayouts(shared_ptr<DescribeAppLayoutsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAppLayoutsWithOptions(request, runtime);
}

DescribeAppLiveStreamStatusResponse Alibabacloud_Rtc20180111::Client::describeAppLiveStreamStatusWithOptions(shared_ptr<DescribeAppLiveStreamStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAppLiveStreamStatus"))},
    {"version", boost::any(string("2018-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAppLiveStreamStatusResponse(callApi(params, req, runtime));
}

DescribeAppLiveStreamStatusResponse Alibabacloud_Rtc20180111::Client::describeAppLiveStreamStatus(shared_ptr<DescribeAppLiveStreamStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAppLiveStreamStatusWithOptions(request, runtime);
}

DescribeAppRecordStatusResponse Alibabacloud_Rtc20180111::Client::describeAppRecordStatusWithOptions(shared_ptr<DescribeAppRecordStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAppRecordStatus"))},
    {"version", boost::any(string("2018-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAppRecordStatusResponse(callApi(params, req, runtime));
}

DescribeAppRecordStatusResponse Alibabacloud_Rtc20180111::Client::describeAppRecordStatus(shared_ptr<DescribeAppRecordStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAppRecordStatusWithOptions(request, runtime);
}

DescribeAppRecordTemplatesResponse Alibabacloud_Rtc20180111::Client::describeAppRecordTemplatesWithOptions(shared_ptr<DescribeAppRecordTemplatesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DescribeAppRecordTemplatesShrinkRequest> request = make_shared<DescribeAppRecordTemplatesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<DescribeAppRecordTemplatesRequestCondition>(tmpReq->condition)) {
    request->conditionShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->condition, make_shared<string>("Condition"), make_shared<string>("json")));
  }
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAppRecordTemplates"))},
    {"version", boost::any(string("2018-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAppRecordTemplatesResponse(callApi(params, req, runtime));
}

DescribeAppRecordTemplatesResponse Alibabacloud_Rtc20180111::Client::describeAppRecordTemplates(shared_ptr<DescribeAppRecordTemplatesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAppRecordTemplatesWithOptions(request, runtime);
}

DescribeAppRecordingFilesResponse Alibabacloud_Rtc20180111::Client::describeAppRecordingFilesWithOptions(shared_ptr<DescribeAppRecordingFilesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DescribeAppRecordingFilesShrinkRequest> request = make_shared<DescribeAppRecordingFilesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<string>>(tmpReq->taskIds)) {
    request->taskIdsShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->taskIds, make_shared<string>("TaskIds"), make_shared<string>("json")));
  }
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAppRecordingFiles"))},
    {"version", boost::any(string("2018-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAppRecordingFilesResponse(callApi(params, req, runtime));
}

DescribeAppRecordingFilesResponse Alibabacloud_Rtc20180111::Client::describeAppRecordingFiles(shared_ptr<DescribeAppRecordingFilesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAppRecordingFilesWithOptions(request, runtime);
}

DescribeAppStreamingOutTemplatesResponse Alibabacloud_Rtc20180111::Client::describeAppStreamingOutTemplatesWithOptions(shared_ptr<DescribeAppStreamingOutTemplatesRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<DescribeAppStreamingOutTemplatesShrinkRequest> request = make_shared<DescribeAppStreamingOutTemplatesShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<DescribeAppStreamingOutTemplatesRequestCondition>(tmpReq->condition)) {
    request->conditionShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->condition, make_shared<string>("Condition"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->conditionShrink)) {
    query->insert(pair<string, string>("Condition", *request->conditionShrink));
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
    {"action", boost::any(string("DescribeAppStreamingOutTemplates"))},
    {"version", boost::any(string("2018-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAppStreamingOutTemplatesResponse(callApi(params, req, runtime));
}

DescribeAppStreamingOutTemplatesResponse Alibabacloud_Rtc20180111::Client::describeAppStreamingOutTemplates(shared_ptr<DescribeAppStreamingOutTemplatesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAppStreamingOutTemplatesWithOptions(request, runtime);
}

DescribeAppsResponse Alibabacloud_Rtc20180111::Client::describeAppsWithOptions(shared_ptr<DescribeAppsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appVersion)) {
    query->insert(pair<string, string>("AppVersion", *request->appVersion));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeApps"))},
    {"version", boost::any(string("2018-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAppsResponse(callApi(params, req, runtime));
}

DescribeAppsResponse Alibabacloud_Rtc20180111::Client::describeApps(shared_ptr<DescribeAppsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAppsWithOptions(request, runtime);
}

DescribeAutoLiveStreamRuleResponse Alibabacloud_Rtc20180111::Client::describeAutoLiveStreamRuleWithOptions(shared_ptr<DescribeAutoLiveStreamRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeAutoLiveStreamRule"))},
    {"version", boost::any(string("2018-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeAutoLiveStreamRuleResponse(callApi(params, req, runtime));
}

DescribeAutoLiveStreamRuleResponse Alibabacloud_Rtc20180111::Client::describeAutoLiveStreamRule(shared_ptr<DescribeAutoLiveStreamRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeAutoLiveStreamRuleWithOptions(request, runtime);
}

DescribeCallResponse Alibabacloud_Rtc20180111::Client::describeCallWithOptions(shared_ptr<DescribeCallRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->channelId)) {
    query->insert(pair<string, string>("ChannelId", *request->channelId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->createdTs)) {
    query->insert(pair<string, long>("CreatedTs", *request->createdTs));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->destroyedTs)) {
    query->insert(pair<string, long>("DestroyedTs", *request->destroyedTs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->extDataType)) {
    query->insert(pair<string, string>("ExtDataType", *request->extDataType));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->queryExpInfo)) {
    query->insert(pair<string, bool>("QueryExpInfo", *request->queryExpInfo));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeCall"))},
    {"version", boost::any(string("2018-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeCallResponse(callApi(params, req, runtime));
}

DescribeCallResponse Alibabacloud_Rtc20180111::Client::describeCall(shared_ptr<DescribeCallRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCallWithOptions(request, runtime);
}

DescribeCallListResponse Alibabacloud_Rtc20180111::Client::describeCallListWithOptions(shared_ptr<DescribeCallListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->callStatus)) {
    query->insert(pair<string, string>("CallStatus", *request->callStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->channelId)) {
    query->insert(pair<string, string>("ChannelId", *request->channelId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTs)) {
    query->insert(pair<string, long>("EndTs", *request->endTs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderBy)) {
    query->insert(pair<string, string>("OrderBy", *request->orderBy));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->queryMode)) {
    query->insert(pair<string, string>("QueryMode", *request->queryMode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTs)) {
    query->insert(pair<string, long>("StartTs", *request->startTs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeCallList"))},
    {"version", boost::any(string("2018-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeCallListResponse(callApi(params, req, runtime));
}

DescribeCallListResponse Alibabacloud_Rtc20180111::Client::describeCallList(shared_ptr<DescribeCallListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCallListWithOptions(request, runtime);
}

DescribeCallbacksResponse Alibabacloud_Rtc20180111::Client::describeCallbacksWithOptions(shared_ptr<DescribeCallbacksRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeCallbacks"))},
    {"version", boost::any(string("2018-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeCallbacksResponse(callApi(params, req, runtime));
}

DescribeCallbacksResponse Alibabacloud_Rtc20180111::Client::describeCallbacks(shared_ptr<DescribeCallbacksRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeCallbacksWithOptions(request, runtime);
}

DescribeChannelResponse Alibabacloud_Rtc20180111::Client::describeChannelWithOptions(shared_ptr<DescribeChannelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->channelId)) {
    query->insert(pair<string, string>("ChannelId", *request->channelId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeChannel"))},
    {"version", boost::any(string("2018-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeChannelResponse(callApi(params, req, runtime));
}

DescribeChannelResponse Alibabacloud_Rtc20180111::Client::describeChannel(shared_ptr<DescribeChannelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeChannelWithOptions(request, runtime);
}

DescribeChannelAllUsersResponse Alibabacloud_Rtc20180111::Client::describeChannelAllUsersWithOptions(shared_ptr<DescribeChannelAllUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->channelId)) {
    query->insert(pair<string, string>("ChannelId", *request->channelId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeChannelAllUsers"))},
    {"version", boost::any(string("2018-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeChannelAllUsersResponse(callApi(params, req, runtime));
}

DescribeChannelAllUsersResponse Alibabacloud_Rtc20180111::Client::describeChannelAllUsers(shared_ptr<DescribeChannelAllUsersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeChannelAllUsersWithOptions(request, runtime);
}

DescribeChannelAreaDistributionStatDataResponse Alibabacloud_Rtc20180111::Client::describeChannelAreaDistributionStatDataWithOptions(shared_ptr<DescribeChannelAreaDistributionStatDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->channelId)) {
    query->insert(pair<string, string>("ChannelId", *request->channelId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->createdTs)) {
    query->insert(pair<string, long>("CreatedTs", *request->createdTs));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->destroyedTs)) {
    query->insert(pair<string, long>("DestroyedTs", *request->destroyedTs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->parentArea)) {
    query->insert(pair<string, string>("ParentArea", *request->parentArea));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeChannelAreaDistributionStatData"))},
    {"version", boost::any(string("2018-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeChannelAreaDistributionStatDataResponse(callApi(params, req, runtime));
}

DescribeChannelAreaDistributionStatDataResponse Alibabacloud_Rtc20180111::Client::describeChannelAreaDistributionStatData(shared_ptr<DescribeChannelAreaDistributionStatDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeChannelAreaDistributionStatDataWithOptions(request, runtime);
}

DescribeChannelDistributionStatDataResponse Alibabacloud_Rtc20180111::Client::describeChannelDistributionStatDataWithOptions(shared_ptr<DescribeChannelDistributionStatDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->channelId)) {
    query->insert(pair<string, string>("ChannelId", *request->channelId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->createdTs)) {
    query->insert(pair<string, long>("CreatedTs", *request->createdTs));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->destroyedTs)) {
    query->insert(pair<string, long>("DestroyedTs", *request->destroyedTs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->statDim)) {
    query->insert(pair<string, string>("StatDim", *request->statDim));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeChannelDistributionStatData"))},
    {"version", boost::any(string("2018-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeChannelDistributionStatDataResponse(callApi(params, req, runtime));
}

DescribeChannelDistributionStatDataResponse Alibabacloud_Rtc20180111::Client::describeChannelDistributionStatData(shared_ptr<DescribeChannelDistributionStatDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeChannelDistributionStatDataWithOptions(request, runtime);
}

DescribeChannelOverallDataResponse Alibabacloud_Rtc20180111::Client::describeChannelOverallDataWithOptions(shared_ptr<DescribeChannelOverallDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->channelId)) {
    query->insert(pair<string, string>("ChannelId", *request->channelId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->createdTs)) {
    query->insert(pair<string, long>("CreatedTs", *request->createdTs));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->destroyedTs)) {
    query->insert(pair<string, long>("DestroyedTs", *request->destroyedTs));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeChannelOverallData"))},
    {"version", boost::any(string("2018-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeChannelOverallDataResponse(callApi(params, req, runtime));
}

DescribeChannelOverallDataResponse Alibabacloud_Rtc20180111::Client::describeChannelOverallData(shared_ptr<DescribeChannelOverallDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeChannelOverallDataWithOptions(request, runtime);
}

DescribeChannelParticipantsResponse Alibabacloud_Rtc20180111::Client::describeChannelParticipantsWithOptions(shared_ptr<DescribeChannelParticipantsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->channelId)) {
    query->insert(pair<string, string>("ChannelId", *request->channelId));
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
    {"action", boost::any(string("DescribeChannelParticipants"))},
    {"version", boost::any(string("2018-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeChannelParticipantsResponse(callApi(params, req, runtime));
}

DescribeChannelParticipantsResponse Alibabacloud_Rtc20180111::Client::describeChannelParticipants(shared_ptr<DescribeChannelParticipantsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeChannelParticipantsWithOptions(request, runtime);
}

DescribeChannelTopPubUserListResponse Alibabacloud_Rtc20180111::Client::describeChannelTopPubUserListWithOptions(shared_ptr<DescribeChannelTopPubUserListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->channelId)) {
    query->insert(pair<string, string>("ChannelId", *request->channelId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->createdTs)) {
    query->insert(pair<string, long>("CreatedTs", *request->createdTs));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->destroyedTs)) {
    query->insert(pair<string, long>("DestroyedTs", *request->destroyedTs));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeChannelTopPubUserList"))},
    {"version", boost::any(string("2018-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeChannelTopPubUserListResponse(callApi(params, req, runtime));
}

DescribeChannelTopPubUserListResponse Alibabacloud_Rtc20180111::Client::describeChannelTopPubUserList(shared_ptr<DescribeChannelTopPubUserListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeChannelTopPubUserListWithOptions(request, runtime);
}

DescribeChannelUserResponse Alibabacloud_Rtc20180111::Client::describeChannelUserWithOptions(shared_ptr<DescribeChannelUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->channelId)) {
    query->insert(pair<string, string>("ChannelId", *request->channelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeChannelUser"))},
    {"version", boost::any(string("2018-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeChannelUserResponse(callApi(params, req, runtime));
}

DescribeChannelUserResponse Alibabacloud_Rtc20180111::Client::describeChannelUser(shared_ptr<DescribeChannelUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeChannelUserWithOptions(request, runtime);
}

DescribeChannelUserMetricsResponse Alibabacloud_Rtc20180111::Client::describeChannelUserMetricsWithOptions(shared_ptr<DescribeChannelUserMetricsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->channelId)) {
    query->insert(pair<string, string>("ChannelId", *request->channelId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->createdTs)) {
    query->insert(pair<string, long>("CreatedTs", *request->createdTs));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->destroyedTs)) {
    query->insert(pair<string, long>("DestroyedTs", *request->destroyedTs));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeChannelUserMetrics"))},
    {"version", boost::any(string("2018-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeChannelUserMetricsResponse(callApi(params, req, runtime));
}

DescribeChannelUserMetricsResponse Alibabacloud_Rtc20180111::Client::describeChannelUserMetrics(shared_ptr<DescribeChannelUserMetricsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeChannelUserMetricsWithOptions(request, runtime);
}

DescribeChannelUsersResponse Alibabacloud_Rtc20180111::Client::describeChannelUsersWithOptions(shared_ptr<DescribeChannelUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->channelId)) {
    query->insert(pair<string, string>("ChannelId", *request->channelId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeChannelUsers"))},
    {"version", boost::any(string("2018-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeChannelUsersResponse(callApi(params, req, runtime));
}

DescribeChannelUsersResponse Alibabacloud_Rtc20180111::Client::describeChannelUsers(shared_ptr<DescribeChannelUsersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeChannelUsersWithOptions(request, runtime);
}

DescribeChannelsResponse Alibabacloud_Rtc20180111::Client::describeChannelsWithOptions(shared_ptr<DescribeChannelsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeChannels"))},
    {"version", boost::any(string("2018-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeChannelsResponse(callApi(params, req, runtime));
}

DescribeChannelsResponse Alibabacloud_Rtc20180111::Client::describeChannels(shared_ptr<DescribeChannelsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeChannelsWithOptions(request, runtime);
}

DescribeEndPointEventListResponse Alibabacloud_Rtc20180111::Client::describeEndPointEventListWithOptions(shared_ptr<DescribeEndPointEventListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->channelId)) {
    query->insert(pair<string, string>("ChannelId", *request->channelId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->createdTs)) {
    query->insert(pair<string, long>("CreatedTs", *request->createdTs));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->destroyedTs)) {
    query->insert(pair<string, long>("DestroyedTs", *request->destroyedTs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userIdList)) {
    query->insert(pair<string, string>("UserIdList", *request->userIdList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeEndPointEventList"))},
    {"version", boost::any(string("2018-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeEndPointEventListResponse(callApi(params, req, runtime));
}

DescribeEndPointEventListResponse Alibabacloud_Rtc20180111::Client::describeEndPointEventList(shared_ptr<DescribeEndPointEventListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeEndPointEventListWithOptions(request, runtime);
}

DescribeEndPointMetricDataResponse Alibabacloud_Rtc20180111::Client::describeEndPointMetricDataWithOptions(shared_ptr<DescribeEndPointMetricDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->channelId)) {
    query->insert(pair<string, string>("ChannelId", *request->channelId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->createdTs)) {
    query->insert(pair<string, long>("CreatedTs", *request->createdTs));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->destroyedTs)) {
    query->insert(pair<string, long>("DestroyedTs", *request->destroyedTs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->metrics)) {
    query->insert(pair<string, string>("Metrics", *request->metrics));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pubCallIdList)) {
    query->insert(pair<string, string>("PubCallIdList", *request->pubCallIdList));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pubUserId)) {
    query->insert(pair<string, string>("PubUserId", *request->pubUserId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subUserId)) {
    query->insert(pair<string, string>("SubUserId", *request->subUserId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeEndPointMetricData"))},
    {"version", boost::any(string("2018-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeEndPointMetricDataResponse(callApi(params, req, runtime));
}

DescribeEndPointMetricDataResponse Alibabacloud_Rtc20180111::Client::describeEndPointMetricData(shared_ptr<DescribeEndPointMetricDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeEndPointMetricDataWithOptions(request, runtime);
}

DescribeFaultDiagnosisFactorDistributionStatResponse Alibabacloud_Rtc20180111::Client::describeFaultDiagnosisFactorDistributionStatWithOptions(shared_ptr<DescribeFaultDiagnosisFactorDistributionStatRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTs)) {
    query->insert(pair<string, long>("EndTs", *request->endTs));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTs)) {
    query->insert(pair<string, long>("StartTs", *request->startTs));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeFaultDiagnosisFactorDistributionStat"))},
    {"version", boost::any(string("2018-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeFaultDiagnosisFactorDistributionStatResponse(callApi(params, req, runtime));
}

DescribeFaultDiagnosisFactorDistributionStatResponse Alibabacloud_Rtc20180111::Client::describeFaultDiagnosisFactorDistributionStat(shared_ptr<DescribeFaultDiagnosisFactorDistributionStatRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeFaultDiagnosisFactorDistributionStatWithOptions(request, runtime);
}

DescribeFaultDiagnosisOverallDataResponse Alibabacloud_Rtc20180111::Client::describeFaultDiagnosisOverallDataWithOptions(shared_ptr<DescribeFaultDiagnosisOverallDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTs)) {
    query->insert(pair<string, long>("EndTs", *request->endTs));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTs)) {
    query->insert(pair<string, long>("StartTs", *request->startTs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->statDim)) {
    query->insert(pair<string, string>("StatDim", *request->statDim));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeFaultDiagnosisOverallData"))},
    {"version", boost::any(string("2018-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeFaultDiagnosisOverallDataResponse(callApi(params, req, runtime));
}

DescribeFaultDiagnosisOverallDataResponse Alibabacloud_Rtc20180111::Client::describeFaultDiagnosisOverallData(shared_ptr<DescribeFaultDiagnosisOverallDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeFaultDiagnosisOverallDataWithOptions(request, runtime);
}

DescribeFaultDiagnosisUserDetailResponse Alibabacloud_Rtc20180111::Client::describeFaultDiagnosisUserDetailWithOptions(shared_ptr<DescribeFaultDiagnosisUserDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->channelId)) {
    query->insert(pair<string, string>("ChannelId", *request->channelId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->createdTs)) {
    query->insert(pair<string, long>("CreatedTs", *request->createdTs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->faultType)) {
    query->insert(pair<string, string>("FaultType", *request->faultType));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->queryCallUserInfo)) {
    query->insert(pair<string, bool>("QueryCallUserInfo", *request->queryCallUserInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeFaultDiagnosisUserDetail"))},
    {"version", boost::any(string("2018-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeFaultDiagnosisUserDetailResponse(callApi(params, req, runtime));
}

DescribeFaultDiagnosisUserDetailResponse Alibabacloud_Rtc20180111::Client::describeFaultDiagnosisUserDetail(shared_ptr<DescribeFaultDiagnosisUserDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeFaultDiagnosisUserDetailWithOptions(request, runtime);
}

DescribeFaultDiagnosisUserListResponse Alibabacloud_Rtc20180111::Client::describeFaultDiagnosisUserListWithOptions(shared_ptr<DescribeFaultDiagnosisUserListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->channelId)) {
    query->insert(pair<string, string>("ChannelId", *request->channelId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTs)) {
    query->insert(pair<string, long>("EndTs", *request->endTs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->faultTypes)) {
    query->insert(pair<string, string>("FaultTypes", *request->faultTypes));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTs)) {
    query->insert(pair<string, long>("StartTs", *request->startTs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeFaultDiagnosisUserList"))},
    {"version", boost::any(string("2018-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeFaultDiagnosisUserListResponse(callApi(params, req, runtime));
}

DescribeFaultDiagnosisUserListResponse Alibabacloud_Rtc20180111::Client::describeFaultDiagnosisUserList(shared_ptr<DescribeFaultDiagnosisUserListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeFaultDiagnosisUserListWithOptions(request, runtime);
}

DescribeMPULayoutInfoListResponse Alibabacloud_Rtc20180111::Client::describeMPULayoutInfoListWithOptions(shared_ptr<DescribeMPULayoutInfoListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->layoutId)) {
    query->insert(pair<string, long>("LayoutId", *request->layoutId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
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
    {"action", boost::any(string("DescribeMPULayoutInfoList"))},
    {"version", boost::any(string("2018-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeMPULayoutInfoListResponse(callApi(params, req, runtime));
}

DescribeMPULayoutInfoListResponse Alibabacloud_Rtc20180111::Client::describeMPULayoutInfoList(shared_ptr<DescribeMPULayoutInfoListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeMPULayoutInfoListWithOptions(request, runtime);
}

DescribePubUserListBySubUserResponse Alibabacloud_Rtc20180111::Client::describePubUserListBySubUserWithOptions(shared_ptr<DescribePubUserListBySubUserRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->channelId)) {
    query->insert(pair<string, string>("ChannelId", *request->channelId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->createdTs)) {
    query->insert(pair<string, long>("CreatedTs", *request->createdTs));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->destroyedTs)) {
    query->insert(pair<string, long>("DestroyedTs", *request->destroyedTs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subUserId)) {
    query->insert(pair<string, string>("SubUserId", *request->subUserId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribePubUserListBySubUser"))},
    {"version", boost::any(string("2018-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribePubUserListBySubUserResponse(callApi(params, req, runtime));
}

DescribePubUserListBySubUserResponse Alibabacloud_Rtc20180111::Client::describePubUserListBySubUser(shared_ptr<DescribePubUserListBySubUserRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePubUserListBySubUserWithOptions(request, runtime);
}

DescribeQoeMetricDataResponse Alibabacloud_Rtc20180111::Client::describeQoeMetricDataWithOptions(shared_ptr<DescribeQoeMetricDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->channelId)) {
    query->insert(pair<string, string>("ChannelId", *request->channelId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->createdTs)) {
    query->insert(pair<string, long>("CreatedTs", *request->createdTs));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->destroyedTs)) {
    query->insert(pair<string, long>("DestroyedTs", *request->destroyedTs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeQoeMetricData"))},
    {"version", boost::any(string("2018-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeQoeMetricDataResponse(callApi(params, req, runtime));
}

DescribeQoeMetricDataResponse Alibabacloud_Rtc20180111::Client::describeQoeMetricData(shared_ptr<DescribeQoeMetricDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeQoeMetricDataWithOptions(request, runtime);
}

DescribeQualityAreaDistributionStatDataResponse Alibabacloud_Rtc20180111::Client::describeQualityAreaDistributionStatDataWithOptions(shared_ptr<DescribeQualityAreaDistributionStatDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endDate)) {
    query->insert(pair<string, long>("EndDate", *request->endDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->parentArea)) {
    query->insert(pair<string, string>("ParentArea", *request->parentArea));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startDate)) {
    query->insert(pair<string, long>("StartDate", *request->startDate));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeQualityAreaDistributionStatData"))},
    {"version", boost::any(string("2018-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeQualityAreaDistributionStatDataResponse(callApi(params, req, runtime));
}

DescribeQualityAreaDistributionStatDataResponse Alibabacloud_Rtc20180111::Client::describeQualityAreaDistributionStatData(shared_ptr<DescribeQualityAreaDistributionStatDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeQualityAreaDistributionStatDataWithOptions(request, runtime);
}

DescribeQualityDistributionStatDataResponse Alibabacloud_Rtc20180111::Client::describeQualityDistributionStatDataWithOptions(shared_ptr<DescribeQualityDistributionStatDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endDate)) {
    query->insert(pair<string, long>("EndDate", *request->endDate));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startDate)) {
    query->insert(pair<string, long>("StartDate", *request->startDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->statDim)) {
    query->insert(pair<string, string>("StatDim", *request->statDim));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeQualityDistributionStatData"))},
    {"version", boost::any(string("2018-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeQualityDistributionStatDataResponse(callApi(params, req, runtime));
}

DescribeQualityDistributionStatDataResponse Alibabacloud_Rtc20180111::Client::describeQualityDistributionStatData(shared_ptr<DescribeQualityDistributionStatDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeQualityDistributionStatDataWithOptions(request, runtime);
}

DescribeQualityOsSdkVersionDistributionStatDataResponse Alibabacloud_Rtc20180111::Client::describeQualityOsSdkVersionDistributionStatDataWithOptions(shared_ptr<DescribeQualityOsSdkVersionDistributionStatDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endDate)) {
    query->insert(pair<string, long>("EndDate", *request->endDate));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startDate)) {
    query->insert(pair<string, long>("StartDate", *request->startDate));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeQualityOsSdkVersionDistributionStatData"))},
    {"version", boost::any(string("2018-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeQualityOsSdkVersionDistributionStatDataResponse(callApi(params, req, runtime));
}

DescribeQualityOsSdkVersionDistributionStatDataResponse Alibabacloud_Rtc20180111::Client::describeQualityOsSdkVersionDistributionStatData(shared_ptr<DescribeQualityOsSdkVersionDistributionStatDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeQualityOsSdkVersionDistributionStatDataWithOptions(request, runtime);
}

DescribeQualityOverallDataResponse Alibabacloud_Rtc20180111::Client::describeQualityOverallDataWithOptions(shared_ptr<DescribeQualityOverallDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endDate)) {
    query->insert(pair<string, long>("EndDate", *request->endDate));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startDate)) {
    query->insert(pair<string, long>("StartDate", *request->startDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->types)) {
    query->insert(pair<string, string>("Types", *request->types));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeQualityOverallData"))},
    {"version", boost::any(string("2018-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeQualityOverallDataResponse(callApi(params, req, runtime));
}

DescribeQualityOverallDataResponse Alibabacloud_Rtc20180111::Client::describeQualityOverallData(shared_ptr<DescribeQualityOverallDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeQualityOverallDataWithOptions(request, runtime);
}

DescribeRecordFilesResponse Alibabacloud_Rtc20180111::Client::describeRecordFilesWithOptions(shared_ptr<DescribeRecordFilesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->channelId)) {
    query->insert(pair<string, string>("ChannelId", *request->channelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
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
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->taskIds)) {
    query->insert(pair<string, vector<string>>("TaskIds", *request->taskIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRecordFiles"))},
    {"version", boost::any(string("2018-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRecordFilesResponse(callApi(params, req, runtime));
}

DescribeRecordFilesResponse Alibabacloud_Rtc20180111::Client::describeRecordFiles(shared_ptr<DescribeRecordFilesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRecordFilesWithOptions(request, runtime);
}

DescribeRecordTemplatesResponse Alibabacloud_Rtc20180111::Client::describeRecordTemplatesWithOptions(shared_ptr<DescribeRecordTemplatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
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
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->templateIds)) {
    query->insert(pair<string, vector<string>>("TemplateIds", *request->templateIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRecordTemplates"))},
    {"version", boost::any(string("2018-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRecordTemplatesResponse(callApi(params, req, runtime));
}

DescribeRecordTemplatesResponse Alibabacloud_Rtc20180111::Client::describeRecordTemplates(shared_ptr<DescribeRecordTemplatesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRecordTemplatesWithOptions(request, runtime);
}

DescribeRtcChannelListResponse Alibabacloud_Rtc20180111::Client::describeRtcChannelListWithOptions(shared_ptr<DescribeRtcChannelListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->channelId)) {
    query->insert(pair<string, string>("ChannelId", *request->channelId));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceArea)) {
    query->insert(pair<string, string>("ServiceArea", *request->serviceArea));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortType)) {
    query->insert(pair<string, string>("SortType", *request->sortType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->timePoint)) {
    query->insert(pair<string, string>("TimePoint", *request->timePoint));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userId)) {
    query->insert(pair<string, string>("UserId", *request->userId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRtcChannelList"))},
    {"version", boost::any(string("2018-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRtcChannelListResponse(callApi(params, req, runtime));
}

DescribeRtcChannelListResponse Alibabacloud_Rtc20180111::Client::describeRtcChannelList(shared_ptr<DescribeRtcChannelListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRtcChannelListWithOptions(request, runtime);
}

DescribeRtcChannelMetricResponse Alibabacloud_Rtc20180111::Client::describeRtcChannelMetricWithOptions(shared_ptr<DescribeRtcChannelMetricRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->channelId)) {
    query->insert(pair<string, string>("ChannelId", *request->channelId));
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
    {"action", boost::any(string("DescribeRtcChannelMetric"))},
    {"version", boost::any(string("2018-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRtcChannelMetricResponse(callApi(params, req, runtime));
}

DescribeRtcChannelMetricResponse Alibabacloud_Rtc20180111::Client::describeRtcChannelMetric(shared_ptr<DescribeRtcChannelMetricRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRtcChannelMetricWithOptions(request, runtime);
}

DescribeRtcDurationDataResponse Alibabacloud_Rtc20180111::Client::describeRtcDurationDataWithOptions(shared_ptr<DescribeRtcDurationDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceArea)) {
    query->insert(pair<string, string>("ServiceArea", *request->serviceArea));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRtcDurationData"))},
    {"version", boost::any(string("2018-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRtcDurationDataResponse(callApi(params, req, runtime));
}

DescribeRtcDurationDataResponse Alibabacloud_Rtc20180111::Client::describeRtcDurationData(shared_ptr<DescribeRtcDurationDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRtcDurationDataWithOptions(request, runtime);
}

DescribeRtcPeakChannelCntDataResponse Alibabacloud_Rtc20180111::Client::describeRtcPeakChannelCntDataWithOptions(shared_ptr<DescribeRtcPeakChannelCntDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceArea)) {
    query->insert(pair<string, string>("ServiceArea", *request->serviceArea));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRtcPeakChannelCntData"))},
    {"version", boost::any(string("2018-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRtcPeakChannelCntDataResponse(callApi(params, req, runtime));
}

DescribeRtcPeakChannelCntDataResponse Alibabacloud_Rtc20180111::Client::describeRtcPeakChannelCntData(shared_ptr<DescribeRtcPeakChannelCntDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRtcPeakChannelCntDataWithOptions(request, runtime);
}

DescribeRtcUserCntDataResponse Alibabacloud_Rtc20180111::Client::describeRtcUserCntDataWithOptions(shared_ptr<DescribeRtcUserCntDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
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
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceArea)) {
    query->insert(pair<string, string>("ServiceArea", *request->serviceArea));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRtcUserCntData"))},
    {"version", boost::any(string("2018-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRtcUserCntDataResponse(callApi(params, req, runtime));
}

DescribeRtcUserCntDataResponse Alibabacloud_Rtc20180111::Client::describeRtcUserCntData(shared_ptr<DescribeRtcUserCntDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRtcUserCntDataWithOptions(request, runtime);
}

DescribeStreamingOutStatusResponse Alibabacloud_Rtc20180111::Client::describeStreamingOutStatusWithOptions(shared_ptr<DescribeStreamingOutStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->channelId)) {
    query->insert(pair<string, string>("ChannelId", *request->channelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    query->insert(pair<string, string>("TaskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeStreamingOutStatus"))},
    {"version", boost::any(string("2018-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeStreamingOutStatusResponse(callApi(params, req, runtime));
}

DescribeStreamingOutStatusResponse Alibabacloud_Rtc20180111::Client::describeStreamingOutStatus(shared_ptr<DescribeStreamingOutStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeStreamingOutStatusWithOptions(request, runtime);
}

DescribeSystemLayoutListResponse Alibabacloud_Rtc20180111::Client::describeSystemLayoutListWithOptions(shared_ptr<DescribeSystemLayoutListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
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
    {"action", boost::any(string("DescribeSystemLayoutList"))},
    {"version", boost::any(string("2018-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeSystemLayoutListResponse(callApi(params, req, runtime));
}

DescribeSystemLayoutListResponse Alibabacloud_Rtc20180111::Client::describeSystemLayoutList(shared_ptr<DescribeSystemLayoutListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeSystemLayoutListWithOptions(request, runtime);
}

DescribeUsageAreaDistributionStatDataResponse Alibabacloud_Rtc20180111::Client::describeUsageAreaDistributionStatDataWithOptions(shared_ptr<DescribeUsageAreaDistributionStatDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endDate)) {
    query->insert(pair<string, string>("EndDate", *request->endDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->parentArea)) {
    query->insert(pair<string, string>("ParentArea", *request->parentArea));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startDate)) {
    query->insert(pair<string, string>("StartDate", *request->startDate));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeUsageAreaDistributionStatData"))},
    {"version", boost::any(string("2018-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeUsageAreaDistributionStatDataResponse(callApi(params, req, runtime));
}

DescribeUsageAreaDistributionStatDataResponse Alibabacloud_Rtc20180111::Client::describeUsageAreaDistributionStatData(shared_ptr<DescribeUsageAreaDistributionStatDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeUsageAreaDistributionStatDataWithOptions(request, runtime);
}

DescribeUsageDistributionStatDataResponse Alibabacloud_Rtc20180111::Client::describeUsageDistributionStatDataWithOptions(shared_ptr<DescribeUsageDistributionStatDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endDate)) {
    query->insert(pair<string, long>("EndDate", *request->endDate));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startDate)) {
    query->insert(pair<string, long>("StartDate", *request->startDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->statDim)) {
    query->insert(pair<string, string>("StatDim", *request->statDim));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeUsageDistributionStatData"))},
    {"version", boost::any(string("2018-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeUsageDistributionStatDataResponse(callApi(params, req, runtime));
}

DescribeUsageDistributionStatDataResponse Alibabacloud_Rtc20180111::Client::describeUsageDistributionStatData(shared_ptr<DescribeUsageDistributionStatDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeUsageDistributionStatDataWithOptions(request, runtime);
}

DescribeUsageOsSdkVersionDistributionStatDataResponse Alibabacloud_Rtc20180111::Client::describeUsageOsSdkVersionDistributionStatDataWithOptions(shared_ptr<DescribeUsageOsSdkVersionDistributionStatDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endDate)) {
    query->insert(pair<string, long>("EndDate", *request->endDate));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startDate)) {
    query->insert(pair<string, long>("StartDate", *request->startDate));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeUsageOsSdkVersionDistributionStatData"))},
    {"version", boost::any(string("2018-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeUsageOsSdkVersionDistributionStatDataResponse(callApi(params, req, runtime));
}

DescribeUsageOsSdkVersionDistributionStatDataResponse Alibabacloud_Rtc20180111::Client::describeUsageOsSdkVersionDistributionStatData(shared_ptr<DescribeUsageOsSdkVersionDistributionStatDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeUsageOsSdkVersionDistributionStatDataWithOptions(request, runtime);
}

DescribeUsageOverallDataResponse Alibabacloud_Rtc20180111::Client::describeUsageOverallDataWithOptions(shared_ptr<DescribeUsageOverallDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endDate)) {
    query->insert(pair<string, long>("EndDate", *request->endDate));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startDate)) {
    query->insert(pair<string, long>("StartDate", *request->startDate));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->types)) {
    query->insert(pair<string, string>("Types", *request->types));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeUsageOverallData"))},
    {"version", boost::any(string("2018-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeUsageOverallDataResponse(callApi(params, req, runtime));
}

DescribeUsageOverallDataResponse Alibabacloud_Rtc20180111::Client::describeUsageOverallData(shared_ptr<DescribeUsageOverallDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeUsageOverallDataWithOptions(request, runtime);
}

DescribeUserInfoInChannelResponse Alibabacloud_Rtc20180111::Client::describeUserInfoInChannelWithOptions(shared_ptr<DescribeUserInfoInChannelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->channelId)) {
    query->insert(pair<string, string>("ChannelId", *request->channelId));
  }
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
    {"action", boost::any(string("DescribeUserInfoInChannel"))},
    {"version", boost::any(string("2018-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeUserInfoInChannelResponse(callApi(params, req, runtime));
}

DescribeUserInfoInChannelResponse Alibabacloud_Rtc20180111::Client::describeUserInfoInChannel(shared_ptr<DescribeUserInfoInChannelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeUserInfoInChannelWithOptions(request, runtime);
}

DisableAutoLiveStreamRuleResponse Alibabacloud_Rtc20180111::Client::disableAutoLiveStreamRuleWithOptions(shared_ptr<DisableAutoLiveStreamRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ruleId)) {
    query->insert(pair<string, long>("RuleId", *request->ruleId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DisableAutoLiveStreamRule"))},
    {"version", boost::any(string("2018-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DisableAutoLiveStreamRuleResponse(callApi(params, req, runtime));
}

DisableAutoLiveStreamRuleResponse Alibabacloud_Rtc20180111::Client::disableAutoLiveStreamRule(shared_ptr<DisableAutoLiveStreamRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return disableAutoLiveStreamRuleWithOptions(request, runtime);
}

EnableAutoLiveStreamRuleResponse Alibabacloud_Rtc20180111::Client::enableAutoLiveStreamRuleWithOptions(shared_ptr<EnableAutoLiveStreamRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ruleId)) {
    query->insert(pair<string, long>("RuleId", *request->ruleId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("EnableAutoLiveStreamRule"))},
    {"version", boost::any(string("2018-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return EnableAutoLiveStreamRuleResponse(callApi(params, req, runtime));
}

EnableAutoLiveStreamRuleResponse Alibabacloud_Rtc20180111::Client::enableAutoLiveStreamRule(shared_ptr<EnableAutoLiveStreamRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return enableAutoLiveStreamRuleWithOptions(request, runtime);
}

GetMPUTaskStatusResponse Alibabacloud_Rtc20180111::Client::getMPUTaskStatusWithOptions(shared_ptr<GetMPUTaskStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    query->insert(pair<string, string>("TaskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMPUTaskStatus"))},
    {"version", boost::any(string("2018-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetMPUTaskStatusResponse(callApi(params, req, runtime));
}

GetMPUTaskStatusResponse Alibabacloud_Rtc20180111::Client::getMPUTaskStatus(shared_ptr<GetMPUTaskStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMPUTaskStatusWithOptions(request, runtime);
}

ModifyAppResponse Alibabacloud_Rtc20180111::Client::modifyAppWithOptions(shared_ptr<ModifyAppRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyApp"))},
    {"version", boost::any(string("2018-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyAppResponse(callApi(params, req, runtime));
}

ModifyAppResponse Alibabacloud_Rtc20180111::Client::modifyApp(shared_ptr<ModifyAppRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyAppWithOptions(request, runtime);
}

ModifyAppCallbackStatusResponse Alibabacloud_Rtc20180111::Client::modifyAppCallbackStatusWithOptions(shared_ptr<ModifyAppCallbackStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyAppCallbackStatus"))},
    {"version", boost::any(string("2018-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyAppCallbackStatusResponse(callApi(params, req, runtime));
}

ModifyAppCallbackStatusResponse Alibabacloud_Rtc20180111::Client::modifyAppCallbackStatus(shared_ptr<ModifyAppCallbackStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyAppCallbackStatusWithOptions(request, runtime);
}

ModifyAppLiveStreamStatusResponse Alibabacloud_Rtc20180111::Client::modifyAppLiveStreamStatusWithOptions(shared_ptr<ModifyAppLiveStreamStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyAppLiveStreamStatus"))},
    {"version", boost::any(string("2018-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyAppLiveStreamStatusResponse(callApi(params, req, runtime));
}

ModifyAppLiveStreamStatusResponse Alibabacloud_Rtc20180111::Client::modifyAppLiveStreamStatus(shared_ptr<ModifyAppLiveStreamStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyAppLiveStreamStatusWithOptions(request, runtime);
}

ModifyAppRecordStatusResponse Alibabacloud_Rtc20180111::Client::modifyAppRecordStatusWithOptions(shared_ptr<ModifyAppRecordStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyAppRecordStatus"))},
    {"version", boost::any(string("2018-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyAppRecordStatusResponse(callApi(params, req, runtime));
}

ModifyAppRecordStatusResponse Alibabacloud_Rtc20180111::Client::modifyAppRecordStatus(shared_ptr<ModifyAppRecordStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyAppRecordStatusWithOptions(request, runtime);
}

ModifyAppRecordTemplateResponse Alibabacloud_Rtc20180111::Client::modifyAppRecordTemplateWithOptions(shared_ptr<ModifyAppRecordTemplateRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ModifyAppRecordTemplateShrinkRequest> request = make_shared<ModifyAppRecordTemplateShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ModifyAppRecordTemplateRequestRecordTemplate>(tmpReq->recordTemplate)) {
    request->recordTemplateShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->recordTemplate, make_shared<string>("RecordTemplate"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->recordTemplateShrink)) {
    query->insert(pair<string, string>("RecordTemplate", *request->recordTemplateShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyAppRecordTemplate"))},
    {"version", boost::any(string("2018-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyAppRecordTemplateResponse(callApi(params, req, runtime));
}

ModifyAppRecordTemplateResponse Alibabacloud_Rtc20180111::Client::modifyAppRecordTemplate(shared_ptr<ModifyAppRecordTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyAppRecordTemplateWithOptions(request, runtime);
}

ModifyAppStreamingOutTemplateResponse Alibabacloud_Rtc20180111::Client::modifyAppStreamingOutTemplateWithOptions(shared_ptr<ModifyAppStreamingOutTemplateRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ModifyAppStreamingOutTemplateShrinkRequest> request = make_shared<ModifyAppStreamingOutTemplateShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ModifyAppStreamingOutTemplateRequestStreamingOutTemplate>(tmpReq->streamingOutTemplate)) {
    request->streamingOutTemplateShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->streamingOutTemplate, make_shared<string>("StreamingOutTemplate"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->streamingOutTemplateShrink)) {
    query->insert(pair<string, string>("StreamingOutTemplate", *request->streamingOutTemplateShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyAppStreamingOutTemplate"))},
    {"version", boost::any(string("2018-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyAppStreamingOutTemplateResponse(callApi(params, req, runtime));
}

ModifyAppStreamingOutTemplateResponse Alibabacloud_Rtc20180111::Client::modifyAppStreamingOutTemplate(shared_ptr<ModifyAppStreamingOutTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyAppStreamingOutTemplateWithOptions(request, runtime);
}

ModifyCallbackMetaResponse Alibabacloud_Rtc20180111::Client::modifyCallbackMetaWithOptions(shared_ptr<ModifyCallbackMetaRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<ModifyCallbackMetaShrinkRequest> request = make_shared<ModifyCallbackMetaShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<ModifyCallbackMetaRequestCallback>(tmpReq->callback)) {
    request->callbackShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->callback, make_shared<string>("Callback"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->callbackShrink)) {
    query->insert(pair<string, string>("Callback", *request->callbackShrink));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyCallbackMeta"))},
    {"version", boost::any(string("2018-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyCallbackMetaResponse(callApi(params, req, runtime));
}

ModifyCallbackMetaResponse Alibabacloud_Rtc20180111::Client::modifyCallbackMeta(shared_ptr<ModifyCallbackMetaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyCallbackMetaWithOptions(request, runtime);
}

ModifyMPULayoutResponse Alibabacloud_Rtc20180111::Client::modifyMPULayoutWithOptions(shared_ptr<ModifyMPULayoutRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->audioMixCount)) {
    query->insert(pair<string, long>("AudioMixCount", *request->audioMixCount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->layoutId)) {
    query->insert(pair<string, long>("LayoutId", *request->layoutId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<ModifyMPULayoutRequestPanes>>(request->panes)) {
    query->insert(pair<string, vector<ModifyMPULayoutRequestPanes>>("Panes", *request->panes));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ModifyMPULayout"))},
    {"version", boost::any(string("2018-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ModifyMPULayoutResponse(callApi(params, req, runtime));
}

ModifyMPULayoutResponse Alibabacloud_Rtc20180111::Client::modifyMPULayout(shared_ptr<ModifyMPULayoutRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return modifyMPULayoutWithOptions(request, runtime);
}

RemoveTerminalsResponse Alibabacloud_Rtc20180111::Client::removeTerminalsWithOptions(shared_ptr<RemoveTerminalsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->channelId)) {
    query->insert(pair<string, string>("ChannelId", *request->channelId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->terminalIds)) {
    query->insert(pair<string, vector<string>>("TerminalIds", *request->terminalIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveTerminals"))},
    {"version", boost::any(string("2018-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RemoveTerminalsResponse(callApi(params, req, runtime));
}

RemoveTerminalsResponse Alibabacloud_Rtc20180111::Client::removeTerminals(shared_ptr<RemoveTerminalsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeTerminalsWithOptions(request, runtime);
}

RemoveUsersResponse Alibabacloud_Rtc20180111::Client::removeUsersWithOptions(shared_ptr<RemoveUsersRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->channelId)) {
    query->insert(pair<string, string>("ChannelId", *request->channelId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<RemoveUsersRequestUsers>>(request->users)) {
    query->insert(pair<string, vector<RemoveUsersRequestUsers>>("Users", *request->users));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RemoveUsers"))},
    {"version", boost::any(string("2018-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RemoveUsersResponse(callApi(params, req, runtime));
}

RemoveUsersResponse Alibabacloud_Rtc20180111::Client::removeUsers(shared_ptr<RemoveUsersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return removeUsersWithOptions(request, runtime);
}

StartCategoryCallbackResponse Alibabacloud_Rtc20180111::Client::startCategoryCallbackWithOptions(shared_ptr<StartCategoryCallbackRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<StartCategoryCallbackShrinkRequest> request = make_shared<StartCategoryCallbackShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<StartCategoryCallbackRequestCallback>(tmpReq->callback)) {
    request->callbackShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->callback, make_shared<string>("Callback"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->callbackShrink)) {
    query->insert(pair<string, string>("Callback", *request->callbackShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartCategoryCallback"))},
    {"version", boost::any(string("2018-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StartCategoryCallbackResponse(callApi(params, req, runtime));
}

StartCategoryCallbackResponse Alibabacloud_Rtc20180111::Client::startCategoryCallback(shared_ptr<StartCategoryCallbackRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startCategoryCallbackWithOptions(request, runtime);
}

StartCloudRecordResponse Alibabacloud_Rtc20180111::Client::startCloudRecordWithOptions(shared_ptr<StartCloudRecordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->channelId)) {
    query->insert(pair<string, string>("ChannelId", *request->channelId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<StartCloudRecordRequestClockWidgets>>(request->clockWidgets)) {
    query->insert(pair<string, vector<StartCloudRecordRequestClockWidgets>>("ClockWidgets", *request->clockWidgets));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->cropMode)) {
    query->insert(pair<string, long>("CropMode", *request->cropMode));
  }
  if (!Darabonba_Util::Client::isUnset<vector<StartCloudRecordRequestImages>>(request->images)) {
    query->insert(pair<string, vector<StartCloudRecordRequestImages>>("Images", *request->images));
  }
  if (!Darabonba_Util::Client::isUnset<vector<StartCloudRecordRequestPanes>>(request->panes)) {
    query->insert(pair<string, vector<StartCloudRecordRequestPanes>>("Panes", *request->panes));
  }
  if (!Darabonba_Util::Client::isUnset<StartCloudRecordRequestStorageConfig>(request->storageConfig)) {
    query->insert(pair<string, StartCloudRecordRequestStorageConfig>("StorageConfig", *request->storageConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    query->insert(pair<string, string>("TaskId", *request->taskId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    query->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<StartCloudRecordRequestTexts>>(request->texts)) {
    query->insert(pair<string, vector<StartCloudRecordRequestTexts>>("Texts", *request->texts));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartCloudRecord"))},
    {"version", boost::any(string("2018-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StartCloudRecordResponse(callApi(params, req, runtime));
}

StartCloudRecordResponse Alibabacloud_Rtc20180111::Client::startCloudRecord(shared_ptr<StartCloudRecordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startCloudRecordWithOptions(request, runtime);
}

StartMPUTaskResponse Alibabacloud_Rtc20180111::Client::startMPUTaskWithOptions(shared_ptr<StartMPUTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->backgroundColor)) {
    query->insert(pair<string, long>("BackgroundColor", *request->backgroundColor));
  }
  if (!Darabonba_Util::Client::isUnset<vector<StartMPUTaskRequestBackgrounds>>(request->backgrounds)) {
    query->insert(pair<string, vector<StartMPUTaskRequestBackgrounds>>("Backgrounds", *request->backgrounds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->channelId)) {
    query->insert(pair<string, string>("ChannelId", *request->channelId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<StartMPUTaskRequestClockWidgets>>(request->clockWidgets)) {
    query->insert(pair<string, vector<StartMPUTaskRequestClockWidgets>>("ClockWidgets", *request->clockWidgets));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->cropMode)) {
    query->insert(pair<string, long>("CropMode", *request->cropMode));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->layoutIds)) {
    query->insert(pair<string, vector<long>>("LayoutIds", *request->layoutIds));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->mediaEncode)) {
    query->insert(pair<string, long>("MediaEncode", *request->mediaEncode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->mixMode)) {
    query->insert(pair<string, long>("MixMode", *request->mixMode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->payloadType)) {
    query->insert(pair<string, long>("PayloadType", *request->payloadType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->reportVad)) {
    query->insert(pair<string, long>("ReportVad", *request->reportVad));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->rtpExtInfo)) {
    query->insert(pair<string, long>("RtpExtInfo", *request->rtpExtInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceType)) {
    query->insert(pair<string, string>("SourceType", *request->sourceType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->streamType)) {
    query->insert(pair<string, long>("StreamType", *request->streamType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->streamURL)) {
    query->insert(pair<string, string>("StreamURL", *request->streamURL));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->subSpecAudioUsers)) {
    query->insert(pair<string, vector<string>>("SubSpecAudioUsers", *request->subSpecAudioUsers));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->subSpecCameraUsers)) {
    query->insert(pair<string, vector<string>>("SubSpecCameraUsers", *request->subSpecCameraUsers));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->subSpecShareScreenUsers)) {
    query->insert(pair<string, vector<string>>("SubSpecShareScreenUsers", *request->subSpecShareScreenUsers));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->subSpecUsers)) {
    query->insert(pair<string, vector<string>>("SubSpecUsers", *request->subSpecUsers));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    query->insert(pair<string, string>("TaskId", *request->taskId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->taskType)) {
    query->insert(pair<string, long>("TaskType", *request->taskType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->timeStampRef)) {
    query->insert(pair<string, long>("TimeStampRef", *request->timeStampRef));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->unsubSpecAudioUsers)) {
    query->insert(pair<string, vector<string>>("UnsubSpecAudioUsers", *request->unsubSpecAudioUsers));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->unsubSpecCameraUsers)) {
    query->insert(pair<string, vector<string>>("UnsubSpecCameraUsers", *request->unsubSpecCameraUsers));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->unsubSpecShareScreenUsers)) {
    query->insert(pair<string, vector<string>>("UnsubSpecShareScreenUsers", *request->unsubSpecShareScreenUsers));
  }
  if (!Darabonba_Util::Client::isUnset<vector<StartMPUTaskRequestUserPanes>>(request->userPanes)) {
    query->insert(pair<string, vector<StartMPUTaskRequestUserPanes>>("UserPanes", *request->userPanes));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->vadInterval)) {
    query->insert(pair<string, long>("VadInterval", *request->vadInterval));
  }
  if (!Darabonba_Util::Client::isUnset<vector<StartMPUTaskRequestWatermarks>>(request->watermarks)) {
    query->insert(pair<string, vector<StartMPUTaskRequestWatermarks>>("Watermarks", *request->watermarks));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  shared_ptr<map<string, boost::any>> bodyFlat = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<StartMPUTaskRequestEnhancedParam>(request->enhancedParam)) {
    bodyFlat->insert(pair<string, StartMPUTaskRequestEnhancedParam>("EnhancedParam", *request->enhancedParam));
  }
  body = make_shared<map<string, boost::any>>(Darabonba::Converter::merge(map<string, boost::any>(), !body ? map<string, boost::any>() : *body, Darabonba::Converter::toGenericMap(Alibabacloud_OpenApiUtil::Client::query(bodyFlat))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartMPUTask"))},
    {"version", boost::any(string("2018-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StartMPUTaskResponse(callApi(params, req, runtime));
}

StartMPUTaskResponse Alibabacloud_Rtc20180111::Client::startMPUTask(shared_ptr<StartMPUTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startMPUTaskWithOptions(request, runtime);
}

StartRecordTaskResponse Alibabacloud_Rtc20180111::Client::startRecordTaskWithOptions(shared_ptr<StartRecordTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->channelId)) {
    query->insert(pair<string, string>("ChannelId", *request->channelId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->cropMode)) {
    query->insert(pair<string, long>("CropMode", *request->cropMode));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->layoutIds)) {
    query->insert(pair<string, vector<long>>("LayoutIds", *request->layoutIds));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->mediaEncode)) {
    query->insert(pair<string, long>("MediaEncode", *request->mediaEncode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->mixMode)) {
    query->insert(pair<string, long>("MixMode", *request->mixMode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceType)) {
    query->insert(pair<string, string>("SourceType", *request->sourceType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->streamType)) {
    query->insert(pair<string, long>("StreamType", *request->streamType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->subSpecAudioUsers)) {
    query->insert(pair<string, vector<string>>("SubSpecAudioUsers", *request->subSpecAudioUsers));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->subSpecCameraUsers)) {
    query->insert(pair<string, vector<string>>("SubSpecCameraUsers", *request->subSpecCameraUsers));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->subSpecShareScreenUsers)) {
    query->insert(pair<string, vector<string>>("SubSpecShareScreenUsers", *request->subSpecShareScreenUsers));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->subSpecUsers)) {
    query->insert(pair<string, vector<string>>("SubSpecUsers", *request->subSpecUsers));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    query->insert(pair<string, string>("TaskId", *request->taskId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskProfile)) {
    query->insert(pair<string, string>("TaskProfile", *request->taskProfile));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    query->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->unsubSpecAudioUsers)) {
    query->insert(pair<string, vector<string>>("UnsubSpecAudioUsers", *request->unsubSpecAudioUsers));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->unsubSpecCameraUsers)) {
    query->insert(pair<string, vector<string>>("UnsubSpecCameraUsers", *request->unsubSpecCameraUsers));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->unsubSpecShareScreenUsers)) {
    query->insert(pair<string, vector<string>>("UnsubSpecShareScreenUsers", *request->unsubSpecShareScreenUsers));
  }
  if (!Darabonba_Util::Client::isUnset<vector<StartRecordTaskRequestUserPanes>>(request->userPanes)) {
    query->insert(pair<string, vector<StartRecordTaskRequestUserPanes>>("UserPanes", *request->userPanes));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartRecordTask"))},
    {"version", boost::any(string("2018-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StartRecordTaskResponse(callApi(params, req, runtime));
}

StartRecordTaskResponse Alibabacloud_Rtc20180111::Client::startRecordTask(shared_ptr<StartRecordTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startRecordTaskWithOptions(request, runtime);
}

StartStreamingOutResponse Alibabacloud_Rtc20180111::Client::startStreamingOutWithOptions(shared_ptr<StartStreamingOutRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->channelId)) {
    query->insert(pair<string, string>("ChannelId", *request->channelId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<StartStreamingOutRequestClockWidgets>>(request->clockWidgets)) {
    query->insert(pair<string, vector<StartStreamingOutRequestClockWidgets>>("ClockWidgets", *request->clockWidgets));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->cropMode)) {
    query->insert(pair<string, long>("CropMode", *request->cropMode));
  }
  if (!Darabonba_Util::Client::isUnset<vector<StartStreamingOutRequestImages>>(request->images)) {
    query->insert(pair<string, vector<StartStreamingOutRequestImages>>("Images", *request->images));
  }
  if (!Darabonba_Util::Client::isUnset<vector<StartStreamingOutRequestPanes>>(request->panes)) {
    query->insert(pair<string, vector<StartStreamingOutRequestPanes>>("Panes", *request->panes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    query->insert(pair<string, string>("TaskId", *request->taskId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    query->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<StartStreamingOutRequestTexts>>(request->texts)) {
    query->insert(pair<string, vector<StartStreamingOutRequestTexts>>("Texts", *request->texts));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->url)) {
    query->insert(pair<string, string>("Url", *request->url));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StartStreamingOut"))},
    {"version", boost::any(string("2018-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StartStreamingOutResponse(callApi(params, req, runtime));
}

StartStreamingOutResponse Alibabacloud_Rtc20180111::Client::startStreamingOut(shared_ptr<StartStreamingOutRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return startStreamingOutWithOptions(request, runtime);
}

StopCategoryCallbackResponse Alibabacloud_Rtc20180111::Client::stopCategoryCallbackWithOptions(shared_ptr<StopCategoryCallbackRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<StopCategoryCallbackShrinkRequest> request = make_shared<StopCategoryCallbackShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<StopCategoryCallbackRequestCallback>(tmpReq->callback)) {
    request->callbackShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->callback, make_shared<string>("Callback"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->callbackShrink)) {
    query->insert(pair<string, string>("Callback", *request->callbackShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopCategoryCallback"))},
    {"version", boost::any(string("2018-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StopCategoryCallbackResponse(callApi(params, req, runtime));
}

StopCategoryCallbackResponse Alibabacloud_Rtc20180111::Client::stopCategoryCallback(shared_ptr<StopCategoryCallbackRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopCategoryCallbackWithOptions(request, runtime);
}

StopChannelResponse Alibabacloud_Rtc20180111::Client::stopChannelWithOptions(shared_ptr<StopChannelRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->channelId)) {
    query->insert(pair<string, string>("ChannelId", *request->channelId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopChannel"))},
    {"version", boost::any(string("2018-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StopChannelResponse(callApi(params, req, runtime));
}

StopChannelResponse Alibabacloud_Rtc20180111::Client::stopChannel(shared_ptr<StopChannelRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopChannelWithOptions(request, runtime);
}

StopCloudRecordResponse Alibabacloud_Rtc20180111::Client::stopCloudRecordWithOptions(shared_ptr<StopCloudRecordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->channelId)) {
    query->insert(pair<string, string>("ChannelId", *request->channelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    query->insert(pair<string, string>("TaskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopCloudRecord"))},
    {"version", boost::any(string("2018-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StopCloudRecordResponse(callApi(params, req, runtime));
}

StopCloudRecordResponse Alibabacloud_Rtc20180111::Client::stopCloudRecord(shared_ptr<StopCloudRecordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopCloudRecordWithOptions(request, runtime);
}

StopMPUTaskResponse Alibabacloud_Rtc20180111::Client::stopMPUTaskWithOptions(shared_ptr<StopMPUTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    query->insert(pair<string, string>("TaskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopMPUTask"))},
    {"version", boost::any(string("2018-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StopMPUTaskResponse(callApi(params, req, runtime));
}

StopMPUTaskResponse Alibabacloud_Rtc20180111::Client::stopMPUTask(shared_ptr<StopMPUTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopMPUTaskWithOptions(request, runtime);
}

StopRecordTaskResponse Alibabacloud_Rtc20180111::Client::stopRecordTaskWithOptions(shared_ptr<StopRecordTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    query->insert(pair<string, string>("TaskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopRecordTask"))},
    {"version", boost::any(string("2018-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StopRecordTaskResponse(callApi(params, req, runtime));
}

StopRecordTaskResponse Alibabacloud_Rtc20180111::Client::stopRecordTask(shared_ptr<StopRecordTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopRecordTaskWithOptions(request, runtime);
}

StopStreamingOutResponse Alibabacloud_Rtc20180111::Client::stopStreamingOutWithOptions(shared_ptr<StopStreamingOutRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->channelId)) {
    query->insert(pair<string, string>("ChannelId", *request->channelId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    query->insert(pair<string, string>("TaskId", *request->taskId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopStreamingOut"))},
    {"version", boost::any(string("2018-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return StopStreamingOutResponse(callApi(params, req, runtime));
}

StopStreamingOutResponse Alibabacloud_Rtc20180111::Client::stopStreamingOut(shared_ptr<StopStreamingOutRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return stopStreamingOutWithOptions(request, runtime);
}

UpdateAutoLiveStreamRuleResponse Alibabacloud_Rtc20180111::Client::updateAutoLiveStreamRuleWithOptions(shared_ptr<UpdateAutoLiveStreamRuleRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->callBack)) {
    query->insert(pair<string, string>("CallBack", *request->callBack));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->channelIdPrefixes)) {
    query->insert(pair<string, vector<string>>("ChannelIdPrefixes", *request->channelIdPrefixes));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->channelIds)) {
    query->insert(pair<string, vector<string>>("ChannelIds", *request->channelIds));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->mediaEncode)) {
    query->insert(pair<string, long>("MediaEncode", *request->mediaEncode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->playDomain)) {
    query->insert(pair<string, string>("PlayDomain", *request->playDomain));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ruleId)) {
    query->insert(pair<string, long>("RuleId", *request->ruleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ruleName)) {
    query->insert(pair<string, string>("RuleName", *request->ruleName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateAutoLiveStreamRule"))},
    {"version", boost::any(string("2018-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateAutoLiveStreamRuleResponse(callApi(params, req, runtime));
}

UpdateAutoLiveStreamRuleResponse Alibabacloud_Rtc20180111::Client::updateAutoLiveStreamRule(shared_ptr<UpdateAutoLiveStreamRuleRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateAutoLiveStreamRuleWithOptions(request, runtime);
}

UpdateCloudRecordResponse Alibabacloud_Rtc20180111::Client::updateCloudRecordWithOptions(shared_ptr<UpdateCloudRecordRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->channelId)) {
    query->insert(pair<string, string>("ChannelId", *request->channelId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateCloudRecordRequestClockWidgets>>(request->clockWidgets)) {
    query->insert(pair<string, vector<UpdateCloudRecordRequestClockWidgets>>("ClockWidgets", *request->clockWidgets));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateCloudRecordRequestImages>>(request->images)) {
    query->insert(pair<string, vector<UpdateCloudRecordRequestImages>>("Images", *request->images));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateCloudRecordRequestPanes>>(request->panes)) {
    query->insert(pair<string, vector<UpdateCloudRecordRequestPanes>>("Panes", *request->panes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    query->insert(pair<string, string>("TaskId", *request->taskId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    query->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateCloudRecordRequestTexts>>(request->texts)) {
    query->insert(pair<string, vector<UpdateCloudRecordRequestTexts>>("Texts", *request->texts));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateCloudRecord"))},
    {"version", boost::any(string("2018-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateCloudRecordResponse(callApi(params, req, runtime));
}

UpdateCloudRecordResponse Alibabacloud_Rtc20180111::Client::updateCloudRecord(shared_ptr<UpdateCloudRecordRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateCloudRecordWithOptions(request, runtime);
}

UpdateMPUTaskResponse Alibabacloud_Rtc20180111::Client::updateMPUTaskWithOptions(shared_ptr<UpdateMPUTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->backgroundColor)) {
    query->insert(pair<string, long>("BackgroundColor", *request->backgroundColor));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateMPUTaskRequestBackgrounds>>(request->backgrounds)) {
    query->insert(pair<string, vector<UpdateMPUTaskRequestBackgrounds>>("Backgrounds", *request->backgrounds));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateMPUTaskRequestClockWidgets>>(request->clockWidgets)) {
    query->insert(pair<string, vector<UpdateMPUTaskRequestClockWidgets>>("ClockWidgets", *request->clockWidgets));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->cropMode)) {
    query->insert(pair<string, long>("CropMode", *request->cropMode));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->layoutIds)) {
    query->insert(pair<string, vector<long>>("LayoutIds", *request->layoutIds));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->mediaEncode)) {
    query->insert(pair<string, long>("MediaEncode", *request->mediaEncode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->mixMode)) {
    query->insert(pair<string, long>("MixMode", *request->mixMode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceType)) {
    query->insert(pair<string, string>("SourceType", *request->sourceType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->streamType)) {
    query->insert(pair<string, long>("StreamType", *request->streamType));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->subSpecAudioUsers)) {
    query->insert(pair<string, vector<string>>("SubSpecAudioUsers", *request->subSpecAudioUsers));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->subSpecCameraUsers)) {
    query->insert(pair<string, vector<string>>("SubSpecCameraUsers", *request->subSpecCameraUsers));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->subSpecShareScreenUsers)) {
    query->insert(pair<string, vector<string>>("SubSpecShareScreenUsers", *request->subSpecShareScreenUsers));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->subSpecUsers)) {
    query->insert(pair<string, vector<string>>("SubSpecUsers", *request->subSpecUsers));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    query->insert(pair<string, string>("TaskId", *request->taskId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->unsubSpecAudioUsers)) {
    query->insert(pair<string, vector<string>>("UnsubSpecAudioUsers", *request->unsubSpecAudioUsers));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->unsubSpecCameraUsers)) {
    query->insert(pair<string, vector<string>>("UnsubSpecCameraUsers", *request->unsubSpecCameraUsers));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->unsubSpecShareScreenUsers)) {
    query->insert(pair<string, vector<string>>("UnsubSpecShareScreenUsers", *request->unsubSpecShareScreenUsers));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateMPUTaskRequestUserPanes>>(request->userPanes)) {
    query->insert(pair<string, vector<UpdateMPUTaskRequestUserPanes>>("UserPanes", *request->userPanes));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateMPUTaskRequestWatermarks>>(request->watermarks)) {
    query->insert(pair<string, vector<UpdateMPUTaskRequestWatermarks>>("Watermarks", *request->watermarks));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateMPUTask"))},
    {"version", boost::any(string("2018-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateMPUTaskResponse(callApi(params, req, runtime));
}

UpdateMPUTaskResponse Alibabacloud_Rtc20180111::Client::updateMPUTask(shared_ptr<UpdateMPUTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateMPUTaskWithOptions(request, runtime);
}

UpdateRecordTaskResponse Alibabacloud_Rtc20180111::Client::updateRecordTaskWithOptions(shared_ptr<UpdateRecordTaskRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->channelId)) {
    query->insert(pair<string, string>("ChannelId", *request->channelId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->cropMode)) {
    query->insert(pair<string, long>("CropMode", *request->cropMode));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->layoutIds)) {
    query->insert(pair<string, vector<long>>("LayoutIds", *request->layoutIds));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->mediaEncode)) {
    query->insert(pair<string, long>("MediaEncode", *request->mediaEncode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->subSpecAudioUsers)) {
    query->insert(pair<string, vector<string>>("SubSpecAudioUsers", *request->subSpecAudioUsers));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->subSpecCameraUsers)) {
    query->insert(pair<string, vector<string>>("SubSpecCameraUsers", *request->subSpecCameraUsers));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->subSpecShareScreenUsers)) {
    query->insert(pair<string, vector<string>>("SubSpecShareScreenUsers", *request->subSpecShareScreenUsers));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->subSpecUsers)) {
    query->insert(pair<string, vector<string>>("SubSpecUsers", *request->subSpecUsers));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    query->insert(pair<string, string>("TaskId", *request->taskId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskProfile)) {
    query->insert(pair<string, string>("TaskProfile", *request->taskProfile));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    query->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->unsubSpecAudioUsers)) {
    query->insert(pair<string, vector<string>>("UnsubSpecAudioUsers", *request->unsubSpecAudioUsers));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->unsubSpecCameraUsers)) {
    query->insert(pair<string, vector<string>>("UnsubSpecCameraUsers", *request->unsubSpecCameraUsers));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->unsubSpecShareScreenUsers)) {
    query->insert(pair<string, vector<string>>("UnsubSpecShareScreenUsers", *request->unsubSpecShareScreenUsers));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateRecordTaskRequestUserPanes>>(request->userPanes)) {
    query->insert(pair<string, vector<UpdateRecordTaskRequestUserPanes>>("UserPanes", *request->userPanes));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateRecordTask"))},
    {"version", boost::any(string("2018-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateRecordTaskResponse(callApi(params, req, runtime));
}

UpdateRecordTaskResponse Alibabacloud_Rtc20180111::Client::updateRecordTask(shared_ptr<UpdateRecordTaskRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateRecordTaskWithOptions(request, runtime);
}

UpdateRecordTemplateResponse Alibabacloud_Rtc20180111::Client::updateRecordTemplateWithOptions(shared_ptr<UpdateRecordTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->backgroundColor)) {
    query->insert(pair<string, long>("BackgroundColor", *request->backgroundColor));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateRecordTemplateRequestBackgrounds>>(request->backgrounds)) {
    query->insert(pair<string, vector<UpdateRecordTemplateRequestBackgrounds>>("Backgrounds", *request->backgrounds));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateRecordTemplateRequestClockWidgets>>(request->clockWidgets)) {
    query->insert(pair<string, vector<UpdateRecordTemplateRequestClockWidgets>>("ClockWidgets", *request->clockWidgets));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->delayStopTime)) {
    query->insert(pair<string, long>("DelayStopTime", *request->delayStopTime));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->enableM3u8DateTime)) {
    query->insert(pair<string, bool>("EnableM3u8DateTime", *request->enableM3u8DateTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->fileSplitInterval)) {
    query->insert(pair<string, long>("FileSplitInterval", *request->fileSplitInterval));
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->formats)) {
    query->insert(pair<string, vector<string>>("Formats", *request->formats));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->httpCallbackUrl)) {
    query->insert(pair<string, string>("HttpCallbackUrl", *request->httpCallbackUrl));
  }
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->layoutIds)) {
    query->insert(pair<string, vector<long>>("LayoutIds", *request->layoutIds));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->mediaEncode)) {
    query->insert(pair<string, long>("MediaEncode", *request->mediaEncode));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mnsQueue)) {
    query->insert(pair<string, string>("MnsQueue", *request->mnsQueue));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ossBucket)) {
    query->insert(pair<string, string>("OssBucket", *request->ossBucket));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ossEndpoint)) {
    query->insert(pair<string, string>("OssEndpoint", *request->ossEndpoint));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ossFilePrefix)) {
    query->insert(pair<string, string>("OssFilePrefix", *request->ossFilePrefix));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskProfile)) {
    query->insert(pair<string, string>("TaskProfile", *request->taskProfile));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    query->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateRecordTemplateRequestWatermarks>>(request->watermarks)) {
    query->insert(pair<string, vector<UpdateRecordTemplateRequestWatermarks>>("Watermarks", *request->watermarks));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateRecordTemplate"))},
    {"version", boost::any(string("2018-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateRecordTemplateResponse(callApi(params, req, runtime));
}

UpdateRecordTemplateResponse Alibabacloud_Rtc20180111::Client::updateRecordTemplate(shared_ptr<UpdateRecordTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateRecordTemplateWithOptions(request, runtime);
}

UpdateStreamingOutResponse Alibabacloud_Rtc20180111::Client::updateStreamingOutWithOptions(shared_ptr<UpdateStreamingOutRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->channelId)) {
    query->insert(pair<string, string>("ChannelId", *request->channelId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateStreamingOutRequestClockWidgets>>(request->clockWidgets)) {
    query->insert(pair<string, vector<UpdateStreamingOutRequestClockWidgets>>("ClockWidgets", *request->clockWidgets));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateStreamingOutRequestImages>>(request->images)) {
    query->insert(pair<string, vector<UpdateStreamingOutRequestImages>>("Images", *request->images));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateStreamingOutRequestPanes>>(request->panes)) {
    query->insert(pair<string, vector<UpdateStreamingOutRequestPanes>>("Panes", *request->panes));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->taskId)) {
    query->insert(pair<string, string>("TaskId", *request->taskId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    query->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  if (!Darabonba_Util::Client::isUnset<vector<UpdateStreamingOutRequestTexts>>(request->texts)) {
    query->insert(pair<string, vector<UpdateStreamingOutRequestTexts>>("Texts", *request->texts));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateStreamingOut"))},
    {"version", boost::any(string("2018-01-11"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateStreamingOutResponse(callApi(params, req, runtime));
}

UpdateStreamingOutResponse Alibabacloud_Rtc20180111::Client::updateStreamingOut(shared_ptr<UpdateStreamingOutRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateStreamingOutWithOptions(request, runtime);
}

