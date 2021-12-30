// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/rtc_20180111.hpp>
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

DescribeAppsResponse Alibabacloud_Rtc20180111::Client::describeAppsWithOptions(shared_ptr<DescribeAppsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
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
  if (!Darabonba_Util::Client::isUnset<vector<long>>(request->layoutIds)) {
    query->insert(pair<string, vector<long>>("LayoutIds", *request->layoutIds));
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

