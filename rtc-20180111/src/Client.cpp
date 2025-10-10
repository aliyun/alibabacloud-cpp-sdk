#include <darabonba/Core.hpp>
#include <alibabacloud/Rtc20180111.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::Rtc20180111::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace Rtc20180111
{

AlibabaCloud::Rtc20180111::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "central";
  checkConfig(config);
  this->_endpoint = getEndpoint("rtc", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
}


string Client::getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint) {
  if (!Darabonba::isNull(endpoint)) {
    return endpoint;
  }

  if (!Darabonba::isNull(endpointMap) && !Darabonba::isNull(endpointMap.at(regionId))) {
    return endpointMap.at(regionId);
  }

  return Utils::Utils::getEndpointRules(productId, regionId, endpointRule, network, suffix);
}

/**
 * @param request AddRecordTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddRecordTemplateResponse
 */
AddRecordTemplateResponse Client::addRecordTemplateWithOptions(const AddRecordTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasBackgroundColor()) {
    query["BackgroundColor"] = request.backgroundColor();
  }

  if (!!request.hasBackgrounds()) {
    query["Backgrounds"] = request.backgrounds();
  }

  if (!!request.hasClockWidgets()) {
    query["ClockWidgets"] = request.clockWidgets();
  }

  if (!!request.hasDelayStopTime()) {
    query["DelayStopTime"] = request.delayStopTime();
  }

  if (!!request.hasEnableM3u8DateTime()) {
    query["EnableM3u8DateTime"] = request.enableM3u8DateTime();
  }

  if (!!request.hasFileSplitInterval()) {
    query["FileSplitInterval"] = request.fileSplitInterval();
  }

  if (!!request.hasFormats()) {
    query["Formats"] = request.formats();
  }

  if (!!request.hasHttpCallbackUrl()) {
    query["HttpCallbackUrl"] = request.httpCallbackUrl();
  }

  if (!!request.hasLayoutIds()) {
    query["LayoutIds"] = request.layoutIds();
  }

  if (!!request.hasMediaEncode()) {
    query["MediaEncode"] = request.mediaEncode();
  }

  if (!!request.hasMnsQueue()) {
    query["MnsQueue"] = request.mnsQueue();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasOssBucket()) {
    query["OssBucket"] = request.ossBucket();
  }

  if (!!request.hasOssEndpoint()) {
    query["OssEndpoint"] = request.ossEndpoint();
  }

  if (!!request.hasOssFilePrefix()) {
    query["OssFilePrefix"] = request.ossFilePrefix();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasTaskProfile()) {
    query["TaskProfile"] = request.taskProfile();
  }

  if (!!request.hasWatermarks()) {
    query["Watermarks"] = request.watermarks();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddRecordTemplate"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddRecordTemplateResponse>();
}

/**
 * @param request AddRecordTemplateRequest
 * @return AddRecordTemplateResponse
 */
AddRecordTemplateResponse Client::addRecordTemplate(const AddRecordTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addRecordTemplateWithOptions(request, runtime);
}

/**
 * @summary 创建应用智能体模版
 *
 * @param tmpReq CreateAppAgentTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAppAgentTemplateResponse
 */
CreateAppAgentTemplateResponse Client::createAppAgentTemplateWithOptions(const CreateAppAgentTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateAppAgentTemplateShrinkRequest request = CreateAppAgentTemplateShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAgentSilenceConfig()) {
    request.setAgentSilenceConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.agentSilenceConfig(), "AgentSilenceConfig", "json"));
  }

  if (!!tmpReq.hasAmbientSoundConfig()) {
    request.setAmbientSoundConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.ambientSoundConfig(), "AmbientSoundConfig", "json"));
  }

  if (!!tmpReq.hasAsrConfig()) {
    request.setAsrConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.asrConfig(), "AsrConfig", "json"));
  }

  if (!!tmpReq.hasBackChannelConfig()) {
    request.setBackChannelConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.backChannelConfig(), "BackChannelConfig", "json"));
  }

  if (!!tmpReq.hasInterruptConfig()) {
    request.setInterruptConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.interruptConfig(), "InterruptConfig", "json"));
  }

  if (!!tmpReq.hasLlmConfig()) {
    request.setLlmConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.llmConfig(), "LlmConfig", "json"));
  }

  if (!!tmpReq.hasTtsConfig()) {
    request.setTtsConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.ttsConfig(), "TtsConfig", "json"));
  }

  json query = {};
  if (!!request.hasAgentSilenceConfigShrink()) {
    query["AgentSilenceConfig"] = request.agentSilenceConfigShrink();
  }

  if (!!request.hasAmbientSoundConfigShrink()) {
    query["AmbientSoundConfig"] = request.ambientSoundConfigShrink();
  }

  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasAsrConfigShrink()) {
    query["AsrConfig"] = request.asrConfigShrink();
  }

  if (!!request.hasBackChannelConfigShrink()) {
    query["BackChannelConfig"] = request.backChannelConfigShrink();
  }

  if (!!request.hasChatMode()) {
    query["ChatMode"] = request.chatMode();
  }

  if (!!request.hasGreeting()) {
    query["Greeting"] = request.greeting();
  }

  if (!!request.hasInterruptConfigShrink()) {
    query["InterruptConfig"] = request.interruptConfigShrink();
  }

  if (!!request.hasInterruptMode()) {
    query["InterruptMode"] = request.interruptMode();
  }

  if (!!request.hasLlmConfigShrink()) {
    query["LlmConfig"] = request.llmConfigShrink();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasTtsConfigShrink()) {
    query["TtsConfig"] = request.ttsConfigShrink();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAppAgentTemplate"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAppAgentTemplateResponse>();
}

/**
 * @summary 创建应用智能体模版
 *
 * @param request CreateAppAgentTemplateRequest
 * @return CreateAppAgentTemplateResponse
 */
CreateAppAgentTemplateResponse Client::createAppAgentTemplate(const CreateAppAgentTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAppAgentTemplateWithOptions(request, runtime);
}

/**
 * @summary 新增app自定义布局
 *
 * @param tmpReq CreateAppLayoutRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAppLayoutResponse
 */
CreateAppLayoutResponse Client::createAppLayoutWithOptions(const CreateAppLayoutRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateAppLayoutShrinkRequest request = CreateAppLayoutShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasLayout()) {
    request.setLayoutShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.layout(), "Layout", "json"));
  }

  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasLayoutShrink()) {
    query["Layout"] = request.layoutShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAppLayout"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAppLayoutResponse>();
}

/**
 * @summary 新增app自定义布局
 *
 * @param request CreateAppLayoutRequest
 * @return CreateAppLayoutResponse
 */
CreateAppLayoutResponse Client::createAppLayout(const CreateAppLayoutRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAppLayoutWithOptions(request, runtime);
}

/**
 * @summary 增加应用录制模版
 *
 * @param tmpReq CreateAppRecordTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAppRecordTemplateResponse
 */
CreateAppRecordTemplateResponse Client::createAppRecordTemplateWithOptions(const CreateAppRecordTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateAppRecordTemplateShrinkRequest request = CreateAppRecordTemplateShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasRecordTemplate()) {
    request.setRecordTemplateShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.recordTemplate(), "RecordTemplate", "json"));
  }

  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasRecordTemplateShrink()) {
    query["RecordTemplate"] = request.recordTemplateShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAppRecordTemplate"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAppRecordTemplateResponse>();
}

/**
 * @summary 增加应用录制模版
 *
 * @param request CreateAppRecordTemplateRequest
 * @return CreateAppRecordTemplateResponse
 */
CreateAppRecordTemplateResponse Client::createAppRecordTemplate(const CreateAppRecordTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAppRecordTemplateWithOptions(request, runtime);
}

/**
 * @summary 创建应用推流模版
 *
 * @param tmpReq CreateAppStreamingOutTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAppStreamingOutTemplateResponse
 */
CreateAppStreamingOutTemplateResponse Client::createAppStreamingOutTemplateWithOptions(const CreateAppStreamingOutTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateAppStreamingOutTemplateShrinkRequest request = CreateAppStreamingOutTemplateShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasStreamingOutTemplate()) {
    request.setStreamingOutTemplateShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.streamingOutTemplate(), "StreamingOutTemplate", "json"));
  }

  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasStreamingOutTemplateShrink()) {
    query["StreamingOutTemplate"] = request.streamingOutTemplateShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAppStreamingOutTemplate"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAppStreamingOutTemplateResponse>();
}

/**
 * @summary 创建应用推流模版
 *
 * @param request CreateAppStreamingOutTemplateRequest
 * @return CreateAppStreamingOutTemplateResponse
 */
CreateAppStreamingOutTemplateResponse Client::createAppStreamingOutTemplate(const CreateAppStreamingOutTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAppStreamingOutTemplateWithOptions(request, runtime);
}

/**
 * @param request CreateAutoLiveStreamRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAutoLiveStreamRuleResponse
 */
CreateAutoLiveStreamRuleResponse Client::createAutoLiveStreamRuleWithOptions(const CreateAutoLiveStreamRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasCallBack()) {
    query["CallBack"] = request.callBack();
  }

  if (!!request.hasChannelIdPrefixes()) {
    query["ChannelIdPrefixes"] = request.channelIdPrefixes();
  }

  if (!!request.hasChannelIds()) {
    query["ChannelIds"] = request.channelIds();
  }

  if (!!request.hasMediaEncode()) {
    query["MediaEncode"] = request.mediaEncode();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPlayDomain()) {
    query["PlayDomain"] = request.playDomain();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.ruleName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAutoLiveStreamRule"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAutoLiveStreamRuleResponse>();
}

/**
 * @param request CreateAutoLiveStreamRuleRequest
 * @return CreateAutoLiveStreamRuleResponse
 */
CreateAutoLiveStreamRuleResponse Client::createAutoLiveStreamRule(const CreateAutoLiveStreamRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAutoLiveStreamRuleWithOptions(request, runtime);
}

/**
 * @summary 增加纪要热词表
 *
 * @param tmpReq CreateCloudNotePhrasesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCloudNotePhrasesResponse
 */
CreateCloudNotePhrasesResponse Client::createCloudNotePhrasesWithOptions(const CreateCloudNotePhrasesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateCloudNotePhrasesShrinkRequest request = CreateCloudNotePhrasesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasPhrase()) {
    request.setPhraseShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.phrase(), "Phrase", "json"));
  }

  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasPhraseShrink()) {
    query["Phrase"] = request.phraseShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateCloudNotePhrases"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCloudNotePhrasesResponse>();
}

/**
 * @summary 增加纪要热词表
 *
 * @param request CreateCloudNotePhrasesRequest
 * @return CreateCloudNotePhrasesResponse
 */
CreateCloudNotePhrasesResponse Client::createCloudNotePhrases(const CreateCloudNotePhrasesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCloudNotePhrasesWithOptions(request, runtime);
}

/**
 * @param request CreateEventSubscribeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateEventSubscribeResponse
 */
CreateEventSubscribeResponse Client::createEventSubscribeWithOptions(const CreateEventSubscribeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasCallbackUrl()) {
    query["CallbackUrl"] = request.callbackUrl();
  }

  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.channelId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasEvents()) {
    query["Events"] = request.events();
  }

  if (!!request.hasNeedCallbackAuth()) {
    query["NeedCallbackAuth"] = request.needCallbackAuth();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRole()) {
    query["Role"] = request.role();
  }

  if (!!request.hasUsers()) {
    query["Users"] = request.users();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateEventSubscribe"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateEventSubscribeResponse>();
}

/**
 * @param request CreateEventSubscribeRequest
 * @return CreateEventSubscribeResponse
 */
CreateEventSubscribeResponse Client::createEventSubscribe(const CreateEventSubscribeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createEventSubscribeWithOptions(request, runtime);
}

/**
 * @param request CreateMPULayoutRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateMPULayoutResponse
 */
CreateMPULayoutResponse Client::createMPULayoutWithOptions(const CreateMPULayoutRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasAudioMixCount()) {
    query["AudioMixCount"] = request.audioMixCount();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPanes()) {
    query["Panes"] = request.panes();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateMPULayout"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateMPULayoutResponse>();
}

/**
 * @param request CreateMPULayoutRequest
 * @return CreateMPULayoutResponse
 */
CreateMPULayoutResponse Client::createMPULayout(const CreateMPULayoutRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createMPULayoutWithOptions(request, runtime);
}

/**
 * @summary 删除应用智能体模版
 *
 * @param request DeleteAppAgentTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAppAgentTemplateResponse
 */
DeleteAppAgentTemplateResponse Client::deleteAppAgentTemplateWithOptions(const DeleteAppAgentTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAppAgentTemplate"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAppAgentTemplateResponse>();
}

/**
 * @summary 删除应用智能体模版
 *
 * @param request DeleteAppAgentTemplateRequest
 * @return DeleteAppAgentTemplateResponse
 */
DeleteAppAgentTemplateResponse Client::deleteAppAgentTemplate(const DeleteAppAgentTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAppAgentTemplateWithOptions(request, runtime);
}

/**
 * @summary 删除app自定义布局
 *
 * @param tmpReq DeleteAppLayoutRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAppLayoutResponse
 */
DeleteAppLayoutResponse Client::deleteAppLayoutWithOptions(const DeleteAppLayoutRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteAppLayoutShrinkRequest request = DeleteAppLayoutShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasLayout()) {
    request.setLayoutShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.layout(), "Layout", "json"));
  }

  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasLayoutShrink()) {
    query["Layout"] = request.layoutShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAppLayout"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAppLayoutResponse>();
}

/**
 * @summary 删除app自定义布局
 *
 * @param request DeleteAppLayoutRequest
 * @return DeleteAppLayoutResponse
 */
DeleteAppLayoutResponse Client::deleteAppLayout(const DeleteAppLayoutRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAppLayoutWithOptions(request, runtime);
}

/**
 * @summary 删除应用录制模版
 *
 * @param tmpReq DeleteAppRecordTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAppRecordTemplateResponse
 */
DeleteAppRecordTemplateResponse Client::deleteAppRecordTemplateWithOptions(const DeleteAppRecordTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteAppRecordTemplateShrinkRequest request = DeleteAppRecordTemplateShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTemplate()) {
    request.setTemplateShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq._template(), "Template", "json"));
  }

  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasTemplateShrink()) {
    query["Template"] = request.templateShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAppRecordTemplate"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAppRecordTemplateResponse>();
}

/**
 * @summary 删除应用录制模版
 *
 * @param request DeleteAppRecordTemplateRequest
 * @return DeleteAppRecordTemplateResponse
 */
DeleteAppRecordTemplateResponse Client::deleteAppRecordTemplate(const DeleteAppRecordTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAppRecordTemplateWithOptions(request, runtime);
}

/**
 * @summary 删除应用推流模版
 *
 * @param tmpReq DeleteAppStreamingOutTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAppStreamingOutTemplateResponse
 */
DeleteAppStreamingOutTemplateResponse Client::deleteAppStreamingOutTemplateWithOptions(const DeleteAppStreamingOutTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteAppStreamingOutTemplateShrinkRequest request = DeleteAppStreamingOutTemplateShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasStreamingOutTemplate()) {
    request.setStreamingOutTemplateShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.streamingOutTemplate(), "StreamingOutTemplate", "json"));
  }

  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasStreamingOutTemplateShrink()) {
    query["StreamingOutTemplate"] = request.streamingOutTemplateShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAppStreamingOutTemplate"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAppStreamingOutTemplateResponse>();
}

/**
 * @summary 删除应用推流模版
 *
 * @param request DeleteAppStreamingOutTemplateRequest
 * @return DeleteAppStreamingOutTemplateResponse
 */
DeleteAppStreamingOutTemplateResponse Client::deleteAppStreamingOutTemplate(const DeleteAppStreamingOutTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAppStreamingOutTemplateWithOptions(request, runtime);
}

/**
 * @param request DeleteAutoLiveStreamRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAutoLiveStreamRuleResponse
 */
DeleteAutoLiveStreamRuleResponse Client::deleteAutoLiveStreamRuleWithOptions(const DeleteAutoLiveStreamRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.ruleId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAutoLiveStreamRule"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAutoLiveStreamRuleResponse>();
}

/**
 * @param request DeleteAutoLiveStreamRuleRequest
 * @return DeleteAutoLiveStreamRuleResponse
 */
DeleteAutoLiveStreamRuleResponse Client::deleteAutoLiveStreamRule(const DeleteAutoLiveStreamRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAutoLiveStreamRuleWithOptions(request, runtime);
}

/**
 * @param request DeleteChannelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteChannelResponse
 */
DeleteChannelResponse Client::deleteChannelWithOptions(const DeleteChannelRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.channelId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteChannel"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteChannelResponse>();
}

/**
 * @param request DeleteChannelRequest
 * @return DeleteChannelResponse
 */
DeleteChannelResponse Client::deleteChannel(const DeleteChannelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteChannelWithOptions(request, runtime);
}

/**
 * @summary 删除纪要热词表
 *
 * @param tmpReq DeleteCloudNotePhrasesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCloudNotePhrasesResponse
 */
DeleteCloudNotePhrasesResponse Client::deleteCloudNotePhrasesWithOptions(const DeleteCloudNotePhrasesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteCloudNotePhrasesShrinkRequest request = DeleteCloudNotePhrasesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasPhrase()) {
    request.setPhraseShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.phrase(), "Phrase", "json"));
  }

  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasPhraseShrink()) {
    query["Phrase"] = request.phraseShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteCloudNotePhrases"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCloudNotePhrasesResponse>();
}

/**
 * @summary 删除纪要热词表
 *
 * @param request DeleteCloudNotePhrasesRequest
 * @return DeleteCloudNotePhrasesResponse
 */
DeleteCloudNotePhrasesResponse Client::deleteCloudNotePhrases(const DeleteCloudNotePhrasesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCloudNotePhrasesWithOptions(request, runtime);
}

/**
 * @param request DeleteEventSubscribeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteEventSubscribeResponse
 */
DeleteEventSubscribeResponse Client::deleteEventSubscribeWithOptions(const DeleteEventSubscribeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasSubscribeId()) {
    query["SubscribeId"] = request.subscribeId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteEventSubscribe"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteEventSubscribeResponse>();
}

/**
 * @param request DeleteEventSubscribeRequest
 * @return DeleteEventSubscribeResponse
 */
DeleteEventSubscribeResponse Client::deleteEventSubscribe(const DeleteEventSubscribeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteEventSubscribeWithOptions(request, runtime);
}

/**
 * @param request DeleteMPULayoutRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteMPULayoutResponse
 */
DeleteMPULayoutResponse Client::deleteMPULayoutWithOptions(const DeleteMPULayoutRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasLayoutId()) {
    query["LayoutId"] = request.layoutId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteMPULayout"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteMPULayoutResponse>();
}

/**
 * @param request DeleteMPULayoutRequest
 * @return DeleteMPULayoutResponse
 */
DeleteMPULayoutResponse Client::deleteMPULayout(const DeleteMPULayoutRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteMPULayoutWithOptions(request, runtime);
}

/**
 * @param request DeleteRecordTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteRecordTemplateResponse
 */
DeleteRecordTemplateResponse Client::deleteRecordTemplateWithOptions(const DeleteRecordTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteRecordTemplate"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteRecordTemplateResponse>();
}

/**
 * @param request DeleteRecordTemplateRequest
 * @return DeleteRecordTemplateResponse
 */
DeleteRecordTemplateResponse Client::deleteRecordTemplate(const DeleteRecordTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteRecordTemplateWithOptions(request, runtime);
}

/**
 * @summary 列出系统支持的事件回调
 *
 * @param request DescribeAllCallbackRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAllCallbackResponse
 */
DescribeAllCallbackResponse Client::describeAllCallbackWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "DescribeAllCallback"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAllCallbackResponse>();
}

/**
 * @summary 列出系统支持的事件回调
 *
 * @return DescribeAllCallbackResponse
 */
DescribeAllCallbackResponse Client::describeAllCallback() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAllCallbackWithOptions(runtime);
}

/**
 * @summary 查询应用智能体开关
 *
 * @param request DescribeAppAgentFunctionStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAppAgentFunctionStatusResponse
 */
DescribeAppAgentFunctionStatusResponse Client::describeAppAgentFunctionStatusWithOptions(const DescribeAppAgentFunctionStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAppAgentFunctionStatus"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAppAgentFunctionStatusResponse>();
}

/**
 * @summary 查询应用智能体开关
 *
 * @param request DescribeAppAgentFunctionStatusRequest
 * @return DescribeAppAgentFunctionStatusResponse
 */
DescribeAppAgentFunctionStatusResponse Client::describeAppAgentFunctionStatus(const DescribeAppAgentFunctionStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAppAgentFunctionStatusWithOptions(request, runtime);
}

/**
 * @summary 应用智能体模版列表
 *
 * @param request DescribeAppAgentTemplatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAppAgentTemplatesResponse
 */
DescribeAppAgentTemplatesResponse Client::describeAppAgentTemplatesWithOptions(const DescribeAppAgentTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.pageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAppAgentTemplates"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAppAgentTemplatesResponse>();
}

/**
 * @summary 应用智能体模版列表
 *
 * @param request DescribeAppAgentTemplatesRequest
 * @return DescribeAppAgentTemplatesResponse
 */
DescribeAppAgentTemplatesResponse Client::describeAppAgentTemplates(const DescribeAppAgentTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAppAgentTemplatesWithOptions(request, runtime);
}

/**
 * @summary 查看app回调开关
 *
 * @param request DescribeAppCallStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAppCallStatusResponse
 */
DescribeAppCallStatusResponse Client::describeAppCallStatusWithOptions(const DescribeAppCallStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAppCallStatus"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAppCallStatusResponse>();
}

/**
 * @summary 查看app回调开关
 *
 * @param request DescribeAppCallStatusRequest
 * @return DescribeAppCallStatusResponse
 */
DescribeAppCallStatusResponse Client::describeAppCallStatus(const DescribeAppCallStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAppCallStatusWithOptions(request, runtime);
}

/**
 * @summary 获取app回调密钥
 *
 * @param request DescribeAppCallbackSecretKeyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAppCallbackSecretKeyResponse
 */
DescribeAppCallbackSecretKeyResponse Client::describeAppCallbackSecretKeyWithOptions(const DescribeAppCallbackSecretKeyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAppCallbackSecretKey"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAppCallbackSecretKeyResponse>();
}

/**
 * @summary 获取app回调密钥
 *
 * @param request DescribeAppCallbackSecretKeyRequest
 * @return DescribeAppCallbackSecretKeyResponse
 */
DescribeAppCallbackSecretKeyResponse Client::describeAppCallbackSecretKey(const DescribeAppCallbackSecretKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAppCallbackSecretKeyWithOptions(request, runtime);
}

/**
 * @summary 查看AppKey
 *
 * @param request DescribeAppKeyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAppKeyResponse
 */
DescribeAppKeyResponse Client::describeAppKeyWithOptions(const DescribeAppKeyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAppKey"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAppKeyResponse>();
}

/**
 * @summary 查看AppKey
 *
 * @param request DescribeAppKeyRequest
 * @return DescribeAppKeyResponse
 */
DescribeAppKeyResponse Client::describeAppKey(const DescribeAppKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAppKeyWithOptions(request, runtime);
}

/**
 * @summary 查询app自定义布局
 *
 * @param tmpReq DescribeAppLayoutsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAppLayoutsResponse
 */
DescribeAppLayoutsResponse Client::describeAppLayoutsWithOptions(const DescribeAppLayoutsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DescribeAppLayoutsShrinkRequest request = DescribeAppLayoutsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCondition()) {
    request.setConditionShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.condition(), "Condition", "json"));
  }

  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAppLayouts"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAppLayoutsResponse>();
}

/**
 * @summary 查询app自定义布局
 *
 * @param request DescribeAppLayoutsRequest
 * @return DescribeAppLayoutsResponse
 */
DescribeAppLayoutsResponse Client::describeAppLayouts(const DescribeAppLayoutsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAppLayoutsWithOptions(request, runtime);
}

/**
 * @summary 查看应用旁路开关
 *
 * @param request DescribeAppLiveStreamStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAppLiveStreamStatusResponse
 */
DescribeAppLiveStreamStatusResponse Client::describeAppLiveStreamStatusWithOptions(const DescribeAppLiveStreamStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAppLiveStreamStatus"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAppLiveStreamStatusResponse>();
}

/**
 * @summary 查看应用旁路开关
 *
 * @param request DescribeAppLiveStreamStatusRequest
 * @return DescribeAppLiveStreamStatusResponse
 */
DescribeAppLiveStreamStatusResponse Client::describeAppLiveStreamStatus(const DescribeAppLiveStreamStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAppLiveStreamStatusWithOptions(request, runtime);
}

/**
 * @summary 查询应用录制开关
 *
 * @param request DescribeAppRecordStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAppRecordStatusResponse
 */
DescribeAppRecordStatusResponse Client::describeAppRecordStatusWithOptions(const DescribeAppRecordStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAppRecordStatus"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAppRecordStatusResponse>();
}

/**
 * @summary 查询应用录制开关
 *
 * @param request DescribeAppRecordStatusRequest
 * @return DescribeAppRecordStatusResponse
 */
DescribeAppRecordStatusResponse Client::describeAppRecordStatus(const DescribeAppRecordStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAppRecordStatusWithOptions(request, runtime);
}

/**
 * @summary 应用录制模版列表
 *
 * @param tmpReq DescribeAppRecordTemplatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAppRecordTemplatesResponse
 */
DescribeAppRecordTemplatesResponse Client::describeAppRecordTemplatesWithOptions(const DescribeAppRecordTemplatesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DescribeAppRecordTemplatesShrinkRequest request = DescribeAppRecordTemplatesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCondition()) {
    request.setConditionShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.condition(), "Condition", "json"));
  }

  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAppRecordTemplates"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAppRecordTemplatesResponse>();
}

/**
 * @summary 应用录制模版列表
 *
 * @param request DescribeAppRecordTemplatesRequest
 * @return DescribeAppRecordTemplatesResponse
 */
DescribeAppRecordTemplatesResponse Client::describeAppRecordTemplates(const DescribeAppRecordTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAppRecordTemplatesWithOptions(request, runtime);
}

/**
 * @summary 查询录制列表
 *
 * @param tmpReq DescribeAppRecordingFilesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAppRecordingFilesResponse
 */
DescribeAppRecordingFilesResponse Client::describeAppRecordingFilesWithOptions(const DescribeAppRecordingFilesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DescribeAppRecordingFilesShrinkRequest request = DescribeAppRecordingFilesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTaskIds()) {
    request.setTaskIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.taskIds(), "TaskIds", "json"));
  }

  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAppRecordingFiles"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAppRecordingFilesResponse>();
}

/**
 * @summary 查询录制列表
 *
 * @param request DescribeAppRecordingFilesRequest
 * @return DescribeAppRecordingFilesResponse
 */
DescribeAppRecordingFilesResponse Client::describeAppRecordingFiles(const DescribeAppRecordingFilesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAppRecordingFilesWithOptions(request, runtime);
}

/**
 * @summary 应用推流模版列表
 *
 * @param tmpReq DescribeAppStreamingOutTemplatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAppStreamingOutTemplatesResponse
 */
DescribeAppStreamingOutTemplatesResponse Client::describeAppStreamingOutTemplatesWithOptions(const DescribeAppStreamingOutTemplatesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DescribeAppStreamingOutTemplatesShrinkRequest request = DescribeAppStreamingOutTemplatesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCondition()) {
    request.setConditionShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.condition(), "Condition", "json"));
  }

  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasConditionShrink()) {
    query["Condition"] = request.conditionShrink();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.pageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAppStreamingOutTemplates"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAppStreamingOutTemplatesResponse>();
}

/**
 * @summary 应用推流模版列表
 *
 * @param request DescribeAppStreamingOutTemplatesRequest
 * @return DescribeAppStreamingOutTemplatesResponse
 */
DescribeAppStreamingOutTemplatesResponse Client::describeAppStreamingOutTemplates(const DescribeAppStreamingOutTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAppStreamingOutTemplatesWithOptions(request, runtime);
}

/**
 * @summary App列表
 *
 * @param request DescribeAppsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAppsResponse
 */
DescribeAppsResponse Client::describeAppsWithOptions(const DescribeAppsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasAppVersion()) {
    query["AppVersion"] = request.appVersion();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.order();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.pageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeApps"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAppsResponse>();
}

/**
 * @summary App列表
 *
 * @param request DescribeAppsRequest
 * @return DescribeAppsResponse
 */
DescribeAppsResponse Client::describeApps(const DescribeAppsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAppsWithOptions(request, runtime);
}

/**
 * @param request DescribeAutoLiveStreamRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAutoLiveStreamRuleResponse
 */
DescribeAutoLiveStreamRuleResponse Client::describeAutoLiveStreamRuleWithOptions(const DescribeAutoLiveStreamRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAutoLiveStreamRule"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAutoLiveStreamRuleResponse>();
}

/**
 * @param request DescribeAutoLiveStreamRuleRequest
 * @return DescribeAutoLiveStreamRuleResponse
 */
DescribeAutoLiveStreamRuleResponse Client::describeAutoLiveStreamRule(const DescribeAutoLiveStreamRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAutoLiveStreamRuleWithOptions(request, runtime);
}

/**
 * @summary 调用DescribeCall获取单次通信详情。
 *
 * @param request DescribeCallRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCallResponse
 */
DescribeCallResponse Client::describeCallWithOptions(const DescribeCallRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.channelId();
  }

  if (!!request.hasCreatedTs()) {
    query["CreatedTs"] = request.createdTs();
  }

  if (!!request.hasDestroyedTs()) {
    query["DestroyedTs"] = request.destroyedTs();
  }

  if (!!request.hasExtDataType()) {
    query["ExtDataType"] = request.extDataType();
  }

  if (!!request.hasQueryExpInfo()) {
    query["QueryExpInfo"] = request.queryExpInfo();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCall"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCallResponse>();
}

/**
 * @summary 调用DescribeCall获取单次通信详情。
 *
 * @param request DescribeCallRequest
 * @return DescribeCallResponse
 */
DescribeCallResponse Client::describeCall(const DescribeCallRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCallWithOptions(request, runtime);
}

/**
 * @summary 调用DescribeCallList分页查询时间范围内创建的通信信息。
 *
 * @param request DescribeCallListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCallListResponse
 */
DescribeCallListResponse Client::describeCallListWithOptions(const DescribeCallListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasCallStatus()) {
    query["CallStatus"] = request.callStatus();
  }

  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.channelId();
  }

  if (!!request.hasEndTs()) {
    query["EndTs"] = request.endTs();
  }

  if (!!request.hasOrderBy()) {
    query["OrderBy"] = request.orderBy();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasQueryMode()) {
    query["QueryMode"] = request.queryMode();
  }

  if (!!request.hasStartTs()) {
    query["StartTs"] = request.startTs();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCallList"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCallListResponse>();
}

/**
 * @summary 调用DescribeCallList分页查询时间范围内创建的通信信息。
 *
 * @param request DescribeCallListRequest
 * @return DescribeCallListResponse
 */
DescribeCallListResponse Client::describeCallList(const DescribeCallListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCallListWithOptions(request, runtime);
}

/**
 * @summary app事件回调列表
 *
 * @param request DescribeCallbacksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCallbacksResponse
 */
DescribeCallbacksResponse Client::describeCallbacksWithOptions(const DescribeCallbacksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCallbacks"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCallbacksResponse>();
}

/**
 * @summary app事件回调列表
 *
 * @param request DescribeCallbacksRequest
 * @return DescribeCallbacksResponse
 */
DescribeCallbacksResponse Client::describeCallbacks(const DescribeCallbacksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCallbacksWithOptions(request, runtime);
}

/**
 * @summary DescribeChannel
 *
 * @param request DescribeChannelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeChannelResponse
 */
DescribeChannelResponse Client::describeChannelWithOptions(const DescribeChannelRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.channelId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeChannel"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeChannelResponse>();
}

/**
 * @summary DescribeChannel
 *
 * @param request DescribeChannelRequest
 * @return DescribeChannelResponse
 */
DescribeChannelResponse Client::describeChannel(const DescribeChannelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeChannelWithOptions(request, runtime);
}

/**
 * @summary 查询频道的所有参会者
 *
 * @param request DescribeChannelAllUsersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeChannelAllUsersResponse
 */
DescribeChannelAllUsersResponse Client::describeChannelAllUsersWithOptions(const DescribeChannelAllUsersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.channelId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeChannelAllUsers"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeChannelAllUsersResponse>();
}

/**
 * @summary 查询频道的所有参会者
 *
 * @param request DescribeChannelAllUsersRequest
 * @return DescribeChannelAllUsersResponse
 */
DescribeChannelAllUsersResponse Client::describeChannelAllUsers(const DescribeChannelAllUsersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeChannelAllUsersWithOptions(request, runtime);
}

/**
 * @summary 调用DescribeChannelAreaDistributionStatData获取频道地区分布统计数据。
 *
 * @param request DescribeChannelAreaDistributionStatDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeChannelAreaDistributionStatDataResponse
 */
DescribeChannelAreaDistributionStatDataResponse Client::describeChannelAreaDistributionStatDataWithOptions(const DescribeChannelAreaDistributionStatDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.channelId();
  }

  if (!!request.hasCreatedTs()) {
    query["CreatedTs"] = request.createdTs();
  }

  if (!!request.hasDestroyedTs()) {
    query["DestroyedTs"] = request.destroyedTs();
  }

  if (!!request.hasParentArea()) {
    query["ParentArea"] = request.parentArea();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeChannelAreaDistributionStatData"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeChannelAreaDistributionStatDataResponse>();
}

/**
 * @summary 调用DescribeChannelAreaDistributionStatData获取频道地区分布统计数据。
 *
 * @param request DescribeChannelAreaDistributionStatDataRequest
 * @return DescribeChannelAreaDistributionStatDataResponse
 */
DescribeChannelAreaDistributionStatDataResponse Client::describeChannelAreaDistributionStatData(const DescribeChannelAreaDistributionStatDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeChannelAreaDistributionStatDataWithOptions(request, runtime);
}

/**
 * @summary 调用DescribeChannelDistributionStatData获取频道分布统计数据。
 *
 * @param request DescribeChannelDistributionStatDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeChannelDistributionStatDataResponse
 */
DescribeChannelDistributionStatDataResponse Client::describeChannelDistributionStatDataWithOptions(const DescribeChannelDistributionStatDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.channelId();
  }

  if (!!request.hasCreatedTs()) {
    query["CreatedTs"] = request.createdTs();
  }

  if (!!request.hasDestroyedTs()) {
    query["DestroyedTs"] = request.destroyedTs();
  }

  if (!!request.hasStatDim()) {
    query["StatDim"] = request.statDim();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeChannelDistributionStatData"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeChannelDistributionStatDataResponse>();
}

/**
 * @summary 调用DescribeChannelDistributionStatData获取频道分布统计数据。
 *
 * @param request DescribeChannelDistributionStatDataRequest
 * @return DescribeChannelDistributionStatDataResponse
 */
DescribeChannelDistributionStatDataResponse Client::describeChannelDistributionStatData(const DescribeChannelDistributionStatDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeChannelDistributionStatDataWithOptions(request, runtime);
}

/**
 * @summary 调用DescribeChannelOverallData查询频道概览数据。
 *
 * @param request DescribeChannelOverallDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeChannelOverallDataResponse
 */
DescribeChannelOverallDataResponse Client::describeChannelOverallDataWithOptions(const DescribeChannelOverallDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.channelId();
  }

  if (!!request.hasCreatedTs()) {
    query["CreatedTs"] = request.createdTs();
  }

  if (!!request.hasDestroyedTs()) {
    query["DestroyedTs"] = request.destroyedTs();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeChannelOverallData"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeChannelOverallDataResponse>();
}

/**
 * @summary 调用DescribeChannelOverallData查询频道概览数据。
 *
 * @param request DescribeChannelOverallDataRequest
 * @return DescribeChannelOverallDataResponse
 */
DescribeChannelOverallDataResponse Client::describeChannelOverallData(const DescribeChannelOverallDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeChannelOverallDataWithOptions(request, runtime);
}

/**
 * @param request DescribeChannelParticipantsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeChannelParticipantsResponse
 */
DescribeChannelParticipantsResponse Client::describeChannelParticipantsWithOptions(const DescribeChannelParticipantsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.channelId();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.order();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.pageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeChannelParticipants"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeChannelParticipantsResponse>();
}

/**
 * @param request DescribeChannelParticipantsRequest
 * @return DescribeChannelParticipantsResponse
 */
DescribeChannelParticipantsResponse Client::describeChannelParticipants(const DescribeChannelParticipantsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeChannelParticipantsWithOptions(request, runtime);
}

/**
 * @summary 调用DescribeChannelTopPubUserList获取频道内发布端的用户列表（按用户在线时长降序）。
 *
 * @param request DescribeChannelTopPubUserListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeChannelTopPubUserListResponse
 */
DescribeChannelTopPubUserListResponse Client::describeChannelTopPubUserListWithOptions(const DescribeChannelTopPubUserListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.channelId();
  }

  if (!!request.hasCreatedTs()) {
    query["CreatedTs"] = request.createdTs();
  }

  if (!!request.hasDestroyedTs()) {
    query["DestroyedTs"] = request.destroyedTs();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeChannelTopPubUserList"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeChannelTopPubUserListResponse>();
}

/**
 * @summary 调用DescribeChannelTopPubUserList获取频道内发布端的用户列表（按用户在线时长降序）。
 *
 * @param request DescribeChannelTopPubUserListRequest
 * @return DescribeChannelTopPubUserListResponse
 */
DescribeChannelTopPubUserListResponse Client::describeChannelTopPubUserList(const DescribeChannelTopPubUserListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeChannelTopPubUserListWithOptions(request, runtime);
}

/**
 * @summary DescribeChannelUser
 *
 * @param request DescribeChannelUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeChannelUserResponse
 */
DescribeChannelUserResponse Client::describeChannelUserWithOptions(const DescribeChannelUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.channelId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeChannelUser"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeChannelUserResponse>();
}

/**
 * @summary DescribeChannelUser
 *
 * @param request DescribeChannelUserRequest
 * @return DescribeChannelUserResponse
 */
DescribeChannelUserResponse Client::describeChannelUser(const DescribeChannelUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeChannelUserWithOptions(request, runtime);
}

/**
 * @summary 调用DescribeChannelUserMetrics查询频道总览中的用户数据。
 *
 * @param request DescribeChannelUserMetricsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeChannelUserMetricsResponse
 */
DescribeChannelUserMetricsResponse Client::describeChannelUserMetricsWithOptions(const DescribeChannelUserMetricsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.channelId();
  }

  if (!!request.hasCreatedTs()) {
    query["CreatedTs"] = request.createdTs();
  }

  if (!!request.hasDestroyedTs()) {
    query["DestroyedTs"] = request.destroyedTs();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeChannelUserMetrics"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeChannelUserMetricsResponse>();
}

/**
 * @summary 调用DescribeChannelUserMetrics查询频道总览中的用户数据。
 *
 * @param request DescribeChannelUserMetricsRequest
 * @return DescribeChannelUserMetricsResponse
 */
DescribeChannelUserMetricsResponse Client::describeChannelUserMetrics(const DescribeChannelUserMetricsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeChannelUserMetricsWithOptions(request, runtime);
}

/**
 * @param request DescribeChannelUsersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeChannelUsersResponse
 */
DescribeChannelUsersResponse Client::describeChannelUsersWithOptions(const DescribeChannelUsersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.channelId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeChannelUsers"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeChannelUsersResponse>();
}

/**
 * @param request DescribeChannelUsersRequest
 * @return DescribeChannelUsersResponse
 */
DescribeChannelUsersResponse Client::describeChannelUsers(const DescribeChannelUsersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeChannelUsersWithOptions(request, runtime);
}

/**
 * @summary 查询在线频道列表
 *
 * @param request DescribeChannelsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeChannelsResponse
 */
DescribeChannelsResponse Client::describeChannelsWithOptions(const DescribeChannelsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeChannels"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeChannelsResponse>();
}

/**
 * @summary 查询在线频道列表
 *
 * @param request DescribeChannelsRequest
 * @return DescribeChannelsResponse
 */
DescribeChannelsResponse Client::describeChannels(const DescribeChannelsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeChannelsWithOptions(request, runtime);
}

/**
 * @summary 纪要热词列表
 *
 * @param tmpReq DescribeCloudNotePhrasesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCloudNotePhrasesResponse
 */
DescribeCloudNotePhrasesResponse Client::describeCloudNotePhrasesWithOptions(const DescribeCloudNotePhrasesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DescribeCloudNotePhrasesShrinkRequest request = DescribeCloudNotePhrasesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCondition()) {
    request.setConditionShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.condition(), "Condition", "json"));
  }

  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasConditionShrink()) {
    query["Condition"] = request.conditionShrink();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.pageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCloudNotePhrases"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCloudNotePhrasesResponse>();
}

/**
 * @summary 纪要热词列表
 *
 * @param request DescribeCloudNotePhrasesRequest
 * @return DescribeCloudNotePhrasesResponse
 */
DescribeCloudNotePhrasesResponse Client::describeCloudNotePhrases(const DescribeCloudNotePhrasesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCloudNotePhrasesWithOptions(request, runtime);
}

/**
 * @summary 纪要列表
 *
 * @param tmpReq DescribeCloudNotesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCloudNotesResponse
 */
DescribeCloudNotesResponse Client::describeCloudNotesWithOptions(const DescribeCloudNotesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DescribeCloudNotesShrinkRequest request = DescribeCloudNotesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTaskIds()) {
    request.setTaskIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.taskIds(), "TaskIds", "json"));
  }

  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCloudNotes"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCloudNotesResponse>();
}

/**
 * @summary 纪要列表
 *
 * @param request DescribeCloudNotesRequest
 * @return DescribeCloudNotesResponse
 */
DescribeCloudNotesResponse Client::describeCloudNotes(const DescribeCloudNotesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCloudNotesWithOptions(request, runtime);
}

/**
 * @summary 查询录制任务状态
 *
 * @param request DescribeCloudRecordStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCloudRecordStatusResponse
 */
DescribeCloudRecordStatusResponse Client::describeCloudRecordStatusWithOptions(const DescribeCloudRecordStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.channelId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCloudRecordStatus"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCloudRecordStatusResponse>();
}

/**
 * @summary 查询录制任务状态
 *
 * @param request DescribeCloudRecordStatusRequest
 * @return DescribeCloudRecordStatusResponse
 */
DescribeCloudRecordStatusResponse Client::describeCloudRecordStatus(const DescribeCloudRecordStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCloudRecordStatusWithOptions(request, runtime);
}

/**
 * @summary 调用DescribeEndPointEventList获取端对端用户事件列表。
 *
 * @param request DescribeEndPointEventListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeEndPointEventListResponse
 */
DescribeEndPointEventListResponse Client::describeEndPointEventListWithOptions(const DescribeEndPointEventListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.channelId();
  }

  if (!!request.hasCreatedTs()) {
    query["CreatedTs"] = request.createdTs();
  }

  if (!!request.hasDestroyedTs()) {
    query["DestroyedTs"] = request.destroyedTs();
  }

  if (!!request.hasUserIdList()) {
    query["UserIdList"] = request.userIdList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeEndPointEventList"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeEndPointEventListResponse>();
}

/**
 * @summary 调用DescribeEndPointEventList获取端对端用户事件列表。
 *
 * @param request DescribeEndPointEventListRequest
 * @return DescribeEndPointEventListResponse
 */
DescribeEndPointEventListResponse Client::describeEndPointEventList(const DescribeEndPointEventListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeEndPointEventListWithOptions(request, runtime);
}

/**
 * @summary 调用DescribeEndPointMetricData获取端对端指标数据。
 *
 * @param request DescribeEndPointMetricDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeEndPointMetricDataResponse
 */
DescribeEndPointMetricDataResponse Client::describeEndPointMetricDataWithOptions(const DescribeEndPointMetricDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.channelId();
  }

  if (!!request.hasCreatedTs()) {
    query["CreatedTs"] = request.createdTs();
  }

  if (!!request.hasDestroyedTs()) {
    query["DestroyedTs"] = request.destroyedTs();
  }

  if (!!request.hasMetrics()) {
    query["Metrics"] = request.metrics();
  }

  if (!!request.hasPubCallIdList()) {
    query["PubCallIdList"] = request.pubCallIdList();
  }

  if (!!request.hasPubUserId()) {
    query["PubUserId"] = request.pubUserId();
  }

  if (!!request.hasSubUserId()) {
    query["SubUserId"] = request.subUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeEndPointMetricData"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeEndPointMetricDataResponse>();
}

/**
 * @summary 调用DescribeEndPointMetricData获取端对端指标数据。
 *
 * @param request DescribeEndPointMetricDataRequest
 * @return DescribeEndPointMetricDataResponse
 */
DescribeEndPointMetricDataResponse Client::describeEndPointMetricData(const DescribeEndPointMetricDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeEndPointMetricDataWithOptions(request, runtime);
}

/**
 * @summary 获取异常诊断影响因素分布
 *
 * @param request DescribeFaultDiagnosisFactorDistributionStatRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeFaultDiagnosisFactorDistributionStatResponse
 */
DescribeFaultDiagnosisFactorDistributionStatResponse Client::describeFaultDiagnosisFactorDistributionStatWithOptions(const DescribeFaultDiagnosisFactorDistributionStatRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasEndTs()) {
    query["EndTs"] = request.endTs();
  }

  if (!!request.hasStartTs()) {
    query["StartTs"] = request.startTs();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeFaultDiagnosisFactorDistributionStat"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeFaultDiagnosisFactorDistributionStatResponse>();
}

/**
 * @summary 获取异常诊断影响因素分布
 *
 * @param request DescribeFaultDiagnosisFactorDistributionStatRequest
 * @return DescribeFaultDiagnosisFactorDistributionStatResponse
 */
DescribeFaultDiagnosisFactorDistributionStatResponse Client::describeFaultDiagnosisFactorDistributionStat(const DescribeFaultDiagnosisFactorDistributionStatRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeFaultDiagnosisFactorDistributionStatWithOptions(request, runtime);
}

/**
 * @summary 获取异常诊断总览数据
 *
 * @param request DescribeFaultDiagnosisOverallDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeFaultDiagnosisOverallDataResponse
 */
DescribeFaultDiagnosisOverallDataResponse Client::describeFaultDiagnosisOverallDataWithOptions(const DescribeFaultDiagnosisOverallDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasEndTs()) {
    query["EndTs"] = request.endTs();
  }

  if (!!request.hasStartTs()) {
    query["StartTs"] = request.startTs();
  }

  if (!!request.hasStatDim()) {
    query["StatDim"] = request.statDim();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeFaultDiagnosisOverallData"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeFaultDiagnosisOverallDataResponse>();
}

/**
 * @summary 获取异常诊断总览数据
 *
 * @param request DescribeFaultDiagnosisOverallDataRequest
 * @return DescribeFaultDiagnosisOverallDataResponse
 */
DescribeFaultDiagnosisOverallDataResponse Client::describeFaultDiagnosisOverallData(const DescribeFaultDiagnosisOverallDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeFaultDiagnosisOverallDataWithOptions(request, runtime);
}

/**
 * @summary 获取异常诊断用户详情
 *
 * @param request DescribeFaultDiagnosisUserDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeFaultDiagnosisUserDetailResponse
 */
DescribeFaultDiagnosisUserDetailResponse Client::describeFaultDiagnosisUserDetailWithOptions(const DescribeFaultDiagnosisUserDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.channelId();
  }

  if (!!request.hasCreatedTs()) {
    query["CreatedTs"] = request.createdTs();
  }

  if (!!request.hasFaultType()) {
    query["FaultType"] = request.faultType();
  }

  if (!!request.hasQueryCallUserInfo()) {
    query["QueryCallUserInfo"] = request.queryCallUserInfo();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeFaultDiagnosisUserDetail"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeFaultDiagnosisUserDetailResponse>();
}

/**
 * @summary 获取异常诊断用户详情
 *
 * @param request DescribeFaultDiagnosisUserDetailRequest
 * @return DescribeFaultDiagnosisUserDetailResponse
 */
DescribeFaultDiagnosisUserDetailResponse Client::describeFaultDiagnosisUserDetail(const DescribeFaultDiagnosisUserDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeFaultDiagnosisUserDetailWithOptions(request, runtime);
}

/**
 * @summary 获取异常诊断用户明细列表
 *
 * @param request DescribeFaultDiagnosisUserListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeFaultDiagnosisUserListResponse
 */
DescribeFaultDiagnosisUserListResponse Client::describeFaultDiagnosisUserListWithOptions(const DescribeFaultDiagnosisUserListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.channelId();
  }

  if (!!request.hasEndTs()) {
    query["EndTs"] = request.endTs();
  }

  if (!!request.hasFaultTypes()) {
    query["FaultTypes"] = request.faultTypes();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasStartTs()) {
    query["StartTs"] = request.startTs();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeFaultDiagnosisUserList"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeFaultDiagnosisUserListResponse>();
}

/**
 * @summary 获取异常诊断用户明细列表
 *
 * @param request DescribeFaultDiagnosisUserListRequest
 * @return DescribeFaultDiagnosisUserListResponse
 */
DescribeFaultDiagnosisUserListResponse Client::describeFaultDiagnosisUserList(const DescribeFaultDiagnosisUserListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeFaultDiagnosisUserListWithOptions(request, runtime);
}

/**
 * @param request DescribeMPULayoutInfoListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeMPULayoutInfoListResponse
 */
DescribeMPULayoutInfoListResponse Client::describeMPULayoutInfoListWithOptions(const DescribeMPULayoutInfoListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasLayoutId()) {
    query["LayoutId"] = request.layoutId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.pageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeMPULayoutInfoList"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeMPULayoutInfoListResponse>();
}

/**
 * @param request DescribeMPULayoutInfoListRequest
 * @return DescribeMPULayoutInfoListResponse
 */
DescribeMPULayoutInfoListResponse Client::describeMPULayoutInfoList(const DescribeMPULayoutInfoListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeMPULayoutInfoListWithOptions(request, runtime);
}

/**
 * @summary 调用DescribePubUserListBySubUser根据订阅端获取通信中发布端用户列表。
 *
 * @param request DescribePubUserListBySubUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePubUserListBySubUserResponse
 */
DescribePubUserListBySubUserResponse Client::describePubUserListBySubUserWithOptions(const DescribePubUserListBySubUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.channelId();
  }

  if (!!request.hasCreatedTs()) {
    query["CreatedTs"] = request.createdTs();
  }

  if (!!request.hasDestroyedTs()) {
    query["DestroyedTs"] = request.destroyedTs();
  }

  if (!!request.hasSubUserId()) {
    query["SubUserId"] = request.subUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePubUserListBySubUser"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePubUserListBySubUserResponse>();
}

/**
 * @summary 调用DescribePubUserListBySubUser根据订阅端获取通信中发布端用户列表。
 *
 * @param request DescribePubUserListBySubUserRequest
 * @return DescribePubUserListBySubUserResponse
 */
DescribePubUserListBySubUserResponse Client::describePubUserListBySubUser(const DescribePubUserListBySubUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePubUserListBySubUserWithOptions(request, runtime);
}

/**
 * @summary 调用DescribeQoeMetricData获取单次通信中用户的下行体验质量指标。
 *
 * @param request DescribeQoeMetricDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeQoeMetricDataResponse
 */
DescribeQoeMetricDataResponse Client::describeQoeMetricDataWithOptions(const DescribeQoeMetricDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.channelId();
  }

  if (!!request.hasCreatedTs()) {
    query["CreatedTs"] = request.createdTs();
  }

  if (!!request.hasDestroyedTs()) {
    query["DestroyedTs"] = request.destroyedTs();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeQoeMetricData"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeQoeMetricDataResponse>();
}

/**
 * @summary 调用DescribeQoeMetricData获取单次通信中用户的下行体验质量指标。
 *
 * @param request DescribeQoeMetricDataRequest
 * @return DescribeQoeMetricDataResponse
 */
DescribeQoeMetricDataResponse Client::describeQoeMetricData(const DescribeQoeMetricDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeQoeMetricDataWithOptions(request, runtime);
}

/**
 * @summary 获取质量统计区域分布统计数据
 *
 * @param request DescribeQualityAreaDistributionStatDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeQualityAreaDistributionStatDataResponse
 */
DescribeQualityAreaDistributionStatDataResponse Client::describeQualityAreaDistributionStatDataWithOptions(const DescribeQualityAreaDistributionStatDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasEndDate()) {
    query["EndDate"] = request.endDate();
  }

  if (!!request.hasParentArea()) {
    query["ParentArea"] = request.parentArea();
  }

  if (!!request.hasStartDate()) {
    query["StartDate"] = request.startDate();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeQualityAreaDistributionStatData"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeQualityAreaDistributionStatDataResponse>();
}

/**
 * @summary 获取质量统计区域分布统计数据
 *
 * @param request DescribeQualityAreaDistributionStatDataRequest
 * @return DescribeQualityAreaDistributionStatDataResponse
 */
DescribeQualityAreaDistributionStatDataResponse Client::describeQualityAreaDistributionStatData(const DescribeQualityAreaDistributionStatDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeQualityAreaDistributionStatDataWithOptions(request, runtime);
}

/**
 * @summary 获取质量统计分布数据
 *
 * @param request DescribeQualityDistributionStatDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeQualityDistributionStatDataResponse
 */
DescribeQualityDistributionStatDataResponse Client::describeQualityDistributionStatDataWithOptions(const DescribeQualityDistributionStatDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasEndDate()) {
    query["EndDate"] = request.endDate();
  }

  if (!!request.hasStartDate()) {
    query["StartDate"] = request.startDate();
  }

  if (!!request.hasStatDim()) {
    query["StatDim"] = request.statDim();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeQualityDistributionStatData"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeQualityDistributionStatDataResponse>();
}

/**
 * @summary 获取质量统计分布数据
 *
 * @param request DescribeQualityDistributionStatDataRequest
 * @return DescribeQualityDistributionStatDataResponse
 */
DescribeQualityDistributionStatDataResponse Client::describeQualityDistributionStatData(const DescribeQualityDistributionStatDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeQualityDistributionStatDataWithOptions(request, runtime);
}

/**
 * @summary 获取质量统计各操作系统下SDK版本分布数据
 *
 * @param request DescribeQualityOsSdkVersionDistributionStatDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeQualityOsSdkVersionDistributionStatDataResponse
 */
DescribeQualityOsSdkVersionDistributionStatDataResponse Client::describeQualityOsSdkVersionDistributionStatDataWithOptions(const DescribeQualityOsSdkVersionDistributionStatDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasEndDate()) {
    query["EndDate"] = request.endDate();
  }

  if (!!request.hasStartDate()) {
    query["StartDate"] = request.startDate();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeQualityOsSdkVersionDistributionStatData"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeQualityOsSdkVersionDistributionStatDataResponse>();
}

/**
 * @summary 获取质量统计各操作系统下SDK版本分布数据
 *
 * @param request DescribeQualityOsSdkVersionDistributionStatDataRequest
 * @return DescribeQualityOsSdkVersionDistributionStatDataResponse
 */
DescribeQualityOsSdkVersionDistributionStatDataResponse Client::describeQualityOsSdkVersionDistributionStatData(const DescribeQualityOsSdkVersionDistributionStatDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeQualityOsSdkVersionDistributionStatDataWithOptions(request, runtime);
}

/**
 * @summary 获取质量统计概览数据
 *
 * @param request DescribeQualityOverallDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeQualityOverallDataResponse
 */
DescribeQualityOverallDataResponse Client::describeQualityOverallDataWithOptions(const DescribeQualityOverallDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasEndDate()) {
    query["EndDate"] = request.endDate();
  }

  if (!!request.hasStartDate()) {
    query["StartDate"] = request.startDate();
  }

  if (!!request.hasTypes()) {
    query["Types"] = request.types();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeQualityOverallData"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeQualityOverallDataResponse>();
}

/**
 * @summary 获取质量统计概览数据
 *
 * @param request DescribeQualityOverallDataRequest
 * @return DescribeQualityOverallDataResponse
 */
DescribeQualityOverallDataResponse Client::describeQualityOverallData(const DescribeQualityOverallDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeQualityOverallDataWithOptions(request, runtime);
}

/**
 * @param request DescribeRecordFilesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRecordFilesResponse
 */
DescribeRecordFilesResponse Client::describeRecordFilesWithOptions(const DescribeRecordFilesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.channelId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.pageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  if (!!request.hasTaskIds()) {
    query["TaskIds"] = request.taskIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRecordFiles"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRecordFilesResponse>();
}

/**
 * @param request DescribeRecordFilesRequest
 * @return DescribeRecordFilesResponse
 */
DescribeRecordFilesResponse Client::describeRecordFiles(const DescribeRecordFilesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRecordFilesWithOptions(request, runtime);
}

/**
 * @param request DescribeRecordTemplatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRecordTemplatesResponse
 */
DescribeRecordTemplatesResponse Client::describeRecordTemplatesWithOptions(const DescribeRecordTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.pageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasTemplateIds()) {
    query["TemplateIds"] = request.templateIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRecordTemplates"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRecordTemplatesResponse>();
}

/**
 * @param request DescribeRecordTemplatesRequest
 * @return DescribeRecordTemplatesResponse
 */
DescribeRecordTemplatesResponse Client::describeRecordTemplates(const DescribeRecordTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRecordTemplatesWithOptions(request, runtime);
}

/**
 * @param request DescribeRtcChannelListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRtcChannelListResponse
 */
DescribeRtcChannelListResponse Client::describeRtcChannelListWithOptions(const DescribeRtcChannelListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.channelId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasServiceArea()) {
    query["ServiceArea"] = request.serviceArea();
  }

  if (!!request.hasSortType()) {
    query["SortType"] = request.sortType();
  }

  if (!!request.hasTimePoint()) {
    query["TimePoint"] = request.timePoint();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRtcChannelList"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRtcChannelListResponse>();
}

/**
 * @param request DescribeRtcChannelListRequest
 * @return DescribeRtcChannelListResponse
 */
DescribeRtcChannelListResponse Client::describeRtcChannelList(const DescribeRtcChannelListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRtcChannelListWithOptions(request, runtime);
}

/**
 * @param request DescribeRtcChannelMetricRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRtcChannelMetricResponse
 */
DescribeRtcChannelMetricResponse Client::describeRtcChannelMetricWithOptions(const DescribeRtcChannelMetricRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.channelId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasTimePoint()) {
    query["TimePoint"] = request.timePoint();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRtcChannelMetric"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRtcChannelMetricResponse>();
}

/**
 * @param request DescribeRtcChannelMetricRequest
 * @return DescribeRtcChannelMetricResponse
 */
DescribeRtcChannelMetricResponse Client::describeRtcChannelMetric(const DescribeRtcChannelMetricRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRtcChannelMetricWithOptions(request, runtime);
}

/**
 * @param request DescribeRtcDurationDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRtcDurationDataResponse
 */
DescribeRtcDurationDataResponse Client::describeRtcDurationDataWithOptions(const DescribeRtcDurationDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.interval();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasServiceArea()) {
    query["ServiceArea"] = request.serviceArea();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRtcDurationData"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRtcDurationDataResponse>();
}

/**
 * @param request DescribeRtcDurationDataRequest
 * @return DescribeRtcDurationDataResponse
 */
DescribeRtcDurationDataResponse Client::describeRtcDurationData(const DescribeRtcDurationDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRtcDurationDataWithOptions(request, runtime);
}

/**
 * @param request DescribeRtcPeakChannelCntDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRtcPeakChannelCntDataResponse
 */
DescribeRtcPeakChannelCntDataResponse Client::describeRtcPeakChannelCntDataWithOptions(const DescribeRtcPeakChannelCntDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.interval();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasServiceArea()) {
    query["ServiceArea"] = request.serviceArea();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRtcPeakChannelCntData"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRtcPeakChannelCntDataResponse>();
}

/**
 * @param request DescribeRtcPeakChannelCntDataRequest
 * @return DescribeRtcPeakChannelCntDataResponse
 */
DescribeRtcPeakChannelCntDataResponse Client::describeRtcPeakChannelCntData(const DescribeRtcPeakChannelCntDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRtcPeakChannelCntDataWithOptions(request, runtime);
}

/**
 * @param request DescribeRtcUserCntDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRtcUserCntDataResponse
 */
DescribeRtcUserCntDataResponse Client::describeRtcUserCntDataWithOptions(const DescribeRtcUserCntDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.interval();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasServiceArea()) {
    query["ServiceArea"] = request.serviceArea();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRtcUserCntData"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRtcUserCntDataResponse>();
}

/**
 * @param request DescribeRtcUserCntDataRequest
 * @return DescribeRtcUserCntDataResponse
 */
DescribeRtcUserCntDataResponse Client::describeRtcUserCntData(const DescribeRtcUserCntDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRtcUserCntDataWithOptions(request, runtime);
}

/**
 * @summary 查询旁路推流状态
 *
 * @param request DescribeStreamingOutStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeStreamingOutStatusResponse
 */
DescribeStreamingOutStatusResponse Client::describeStreamingOutStatusWithOptions(const DescribeStreamingOutStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.channelId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeStreamingOutStatus"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeStreamingOutStatusResponse>();
}

/**
 * @summary 查询旁路推流状态
 *
 * @param request DescribeStreamingOutStatusRequest
 * @return DescribeStreamingOutStatusResponse
 */
DescribeStreamingOutStatusResponse Client::describeStreamingOutStatus(const DescribeStreamingOutStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeStreamingOutStatusWithOptions(request, runtime);
}

/**
 * @summary 系统内置布局
 *
 * @param request DescribeSystemLayoutListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSystemLayoutListResponse
 */
DescribeSystemLayoutListResponse Client::describeSystemLayoutListWithOptions(const DescribeSystemLayoutListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.pageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSystemLayoutList"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSystemLayoutListResponse>();
}

/**
 * @summary 系统内置布局
 *
 * @param request DescribeSystemLayoutListRequest
 * @return DescribeSystemLayoutListResponse
 */
DescribeSystemLayoutListResponse Client::describeSystemLayoutList(const DescribeSystemLayoutListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSystemLayoutListWithOptions(request, runtime);
}

/**
 * @summary 获取用量统计地域分布数据
 *
 * @param request DescribeUsageAreaDistributionStatDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeUsageAreaDistributionStatDataResponse
 */
DescribeUsageAreaDistributionStatDataResponse Client::describeUsageAreaDistributionStatDataWithOptions(const DescribeUsageAreaDistributionStatDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasEndDate()) {
    query["EndDate"] = request.endDate();
  }

  if (!!request.hasParentArea()) {
    query["ParentArea"] = request.parentArea();
  }

  if (!!request.hasStartDate()) {
    query["StartDate"] = request.startDate();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeUsageAreaDistributionStatData"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeUsageAreaDistributionStatDataResponse>();
}

/**
 * @summary 获取用量统计地域分布数据
 *
 * @param request DescribeUsageAreaDistributionStatDataRequest
 * @return DescribeUsageAreaDistributionStatDataResponse
 */
DescribeUsageAreaDistributionStatDataResponse Client::describeUsageAreaDistributionStatData(const DescribeUsageAreaDistributionStatDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeUsageAreaDistributionStatDataWithOptions(request, runtime);
}

/**
 * @summary 获取用量统计分布数据
 *
 * @param request DescribeUsageDistributionStatDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeUsageDistributionStatDataResponse
 */
DescribeUsageDistributionStatDataResponse Client::describeUsageDistributionStatDataWithOptions(const DescribeUsageDistributionStatDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasEndDate()) {
    query["EndDate"] = request.endDate();
  }

  if (!!request.hasStartDate()) {
    query["StartDate"] = request.startDate();
  }

  if (!!request.hasStatDim()) {
    query["StatDim"] = request.statDim();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeUsageDistributionStatData"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeUsageDistributionStatDataResponse>();
}

/**
 * @summary 获取用量统计分布数据
 *
 * @param request DescribeUsageDistributionStatDataRequest
 * @return DescribeUsageDistributionStatDataResponse
 */
DescribeUsageDistributionStatDataResponse Client::describeUsageDistributionStatData(const DescribeUsageDistributionStatDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeUsageDistributionStatDataWithOptions(request, runtime);
}

/**
 * @summary 获取用量统计各操作系统下SDK版本分布数据
 *
 * @param request DescribeUsageOsSdkVersionDistributionStatDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeUsageOsSdkVersionDistributionStatDataResponse
 */
DescribeUsageOsSdkVersionDistributionStatDataResponse Client::describeUsageOsSdkVersionDistributionStatDataWithOptions(const DescribeUsageOsSdkVersionDistributionStatDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasEndDate()) {
    query["EndDate"] = request.endDate();
  }

  if (!!request.hasStartDate()) {
    query["StartDate"] = request.startDate();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeUsageOsSdkVersionDistributionStatData"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeUsageOsSdkVersionDistributionStatDataResponse>();
}

/**
 * @summary 获取用量统计各操作系统下SDK版本分布数据
 *
 * @param request DescribeUsageOsSdkVersionDistributionStatDataRequest
 * @return DescribeUsageOsSdkVersionDistributionStatDataResponse
 */
DescribeUsageOsSdkVersionDistributionStatDataResponse Client::describeUsageOsSdkVersionDistributionStatData(const DescribeUsageOsSdkVersionDistributionStatDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeUsageOsSdkVersionDistributionStatDataWithOptions(request, runtime);
}

/**
 * @summary 获取用量统计概览数据
 *
 * @param request DescribeUsageOverallDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeUsageOverallDataResponse
 */
DescribeUsageOverallDataResponse Client::describeUsageOverallDataWithOptions(const DescribeUsageOverallDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasEndDate()) {
    query["EndDate"] = request.endDate();
  }

  if (!!request.hasStartDate()) {
    query["StartDate"] = request.startDate();
  }

  if (!!request.hasTypes()) {
    query["Types"] = request.types();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeUsageOverallData"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeUsageOverallDataResponse>();
}

/**
 * @summary 获取用量统计概览数据
 *
 * @param request DescribeUsageOverallDataRequest
 * @return DescribeUsageOverallDataResponse
 */
DescribeUsageOverallDataResponse Client::describeUsageOverallData(const DescribeUsageOverallDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeUsageOverallDataWithOptions(request, runtime);
}

/**
 * @param request DescribeUserInfoInChannelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeUserInfoInChannelResponse
 */
DescribeUserInfoInChannelResponse Client::describeUserInfoInChannelWithOptions(const DescribeUserInfoInChannelRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.channelId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.userId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeUserInfoInChannel"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeUserInfoInChannelResponse>();
}

/**
 * @param request DescribeUserInfoInChannelRequest
 * @return DescribeUserInfoInChannelResponse
 */
DescribeUserInfoInChannelResponse Client::describeUserInfoInChannel(const DescribeUserInfoInChannelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeUserInfoInChannelWithOptions(request, runtime);
}

/**
 * @param request DisableAutoLiveStreamRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableAutoLiveStreamRuleResponse
 */
DisableAutoLiveStreamRuleResponse Client::disableAutoLiveStreamRuleWithOptions(const DisableAutoLiveStreamRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.ruleId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisableAutoLiveStreamRule"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableAutoLiveStreamRuleResponse>();
}

/**
 * @param request DisableAutoLiveStreamRuleRequest
 * @return DisableAutoLiveStreamRuleResponse
 */
DisableAutoLiveStreamRuleResponse Client::disableAutoLiveStreamRule(const DisableAutoLiveStreamRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableAutoLiveStreamRuleWithOptions(request, runtime);
}

/**
 * @param request EnableAutoLiveStreamRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableAutoLiveStreamRuleResponse
 */
EnableAutoLiveStreamRuleResponse Client::enableAutoLiveStreamRuleWithOptions(const EnableAutoLiveStreamRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.ruleId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableAutoLiveStreamRule"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableAutoLiveStreamRuleResponse>();
}

/**
 * @param request EnableAutoLiveStreamRuleRequest
 * @return EnableAutoLiveStreamRuleResponse
 */
EnableAutoLiveStreamRuleResponse Client::enableAutoLiveStreamRule(const EnableAutoLiveStreamRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableAutoLiveStreamRuleWithOptions(request, runtime);
}

/**
 * @summary GetAgent。
 *
 * @param request GetAgentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAgentResponse
 */
GetAgentResponse Client::getAgentWithOptions(const GetAgentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.channelId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAgent"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAgentResponse>();
}

/**
 * @summary GetAgent。
 *
 * @param request GetAgentRequest
 * @return GetAgentResponse
 */
GetAgentResponse Client::getAgent(const GetAgentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAgentWithOptions(request, runtime);
}

/**
 * @param request GetMPUTaskStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMPUTaskStatusResponse
 */
GetMPUTaskStatusResponse Client::getMPUTaskStatusWithOptions(const GetMPUTaskStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetMPUTaskStatus"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMPUTaskStatusResponse>();
}

/**
 * @param request GetMPUTaskStatusRequest
 * @return GetMPUTaskStatusResponse
 */
GetMPUTaskStatusResponse Client::getMPUTaskStatus(const GetMPUTaskStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMPUTaskStatusWithOptions(request, runtime);
}

/**
 * @summary 修改App信息
 *
 * @param request ModifyAppRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyAppResponse
 */
ModifyAppResponse Client::modifyAppWithOptions(const ModifyAppRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.appName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyApp"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyAppResponse>();
}

/**
 * @summary 修改App信息
 *
 * @param request ModifyAppRequest
 * @return ModifyAppResponse
 */
ModifyAppResponse Client::modifyApp(const ModifyAppRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyAppWithOptions(request, runtime);
}

/**
 * @summary 修改应用智能体开关
 *
 * @param request ModifyAppAgentFunctionStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyAppAgentFunctionStatusResponse
 */
ModifyAppAgentFunctionStatusResponse Client::modifyAppAgentFunctionStatusWithOptions(const ModifyAppAgentFunctionStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyAppAgentFunctionStatus"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyAppAgentFunctionStatusResponse>();
}

/**
 * @summary 修改应用智能体开关
 *
 * @param request ModifyAppAgentFunctionStatusRequest
 * @return ModifyAppAgentFunctionStatusResponse
 */
ModifyAppAgentFunctionStatusResponse Client::modifyAppAgentFunctionStatus(const ModifyAppAgentFunctionStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyAppAgentFunctionStatusWithOptions(request, runtime);
}

/**
 * @summary 更新应用智能体模版
 *
 * @param tmpReq ModifyAppAgentTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyAppAgentTemplateResponse
 */
ModifyAppAgentTemplateResponse Client::modifyAppAgentTemplateWithOptions(const ModifyAppAgentTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ModifyAppAgentTemplateShrinkRequest request = ModifyAppAgentTemplateShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAgentSilenceConfig()) {
    request.setAgentSilenceConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.agentSilenceConfig(), "AgentSilenceConfig", "json"));
  }

  if (!!tmpReq.hasAmbientSoundConfig()) {
    request.setAmbientSoundConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.ambientSoundConfig(), "AmbientSoundConfig", "json"));
  }

  if (!!tmpReq.hasAsrConfig()) {
    request.setAsrConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.asrConfig(), "AsrConfig", "json"));
  }

  if (!!tmpReq.hasBackChannelConfig()) {
    request.setBackChannelConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.backChannelConfig(), "BackChannelConfig", "json"));
  }

  if (!!tmpReq.hasInterruptConfig()) {
    request.setInterruptConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.interruptConfig(), "InterruptConfig", "json"));
  }

  if (!!tmpReq.hasLlmConfig()) {
    request.setLlmConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.llmConfig(), "LlmConfig", "json"));
  }

  if (!!tmpReq.hasTtsConfig()) {
    request.setTtsConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.ttsConfig(), "TtsConfig", "json"));
  }

  json query = {};
  if (!!request.hasAgentSilenceConfigShrink()) {
    query["AgentSilenceConfig"] = request.agentSilenceConfigShrink();
  }

  if (!!request.hasAmbientSoundConfigShrink()) {
    query["AmbientSoundConfig"] = request.ambientSoundConfigShrink();
  }

  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasAsrConfigShrink()) {
    query["AsrConfig"] = request.asrConfigShrink();
  }

  if (!!request.hasBackChannelConfigShrink()) {
    query["BackChannelConfig"] = request.backChannelConfigShrink();
  }

  if (!!request.hasChatMode()) {
    query["ChatMode"] = request.chatMode();
  }

  if (!!request.hasGreeting()) {
    query["Greeting"] = request.greeting();
  }

  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  if (!!request.hasInterruptConfigShrink()) {
    query["InterruptConfig"] = request.interruptConfigShrink();
  }

  if (!!request.hasInterruptMode()) {
    query["InterruptMode"] = request.interruptMode();
  }

  if (!!request.hasLlmConfigShrink()) {
    query["LlmConfig"] = request.llmConfigShrink();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasTtsConfigShrink()) {
    query["TtsConfig"] = request.ttsConfigShrink();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyAppAgentTemplate"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyAppAgentTemplateResponse>();
}

/**
 * @summary 更新应用智能体模版
 *
 * @param request ModifyAppAgentTemplateRequest
 * @return ModifyAppAgentTemplateResponse
 */
ModifyAppAgentTemplateResponse Client::modifyAppAgentTemplate(const ModifyAppAgentTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyAppAgentTemplateWithOptions(request, runtime);
}

/**
 * @summary 更新app回调事件开关
 *
 * @param request ModifyAppCallbackStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyAppCallbackStatusResponse
 */
ModifyAppCallbackStatusResponse Client::modifyAppCallbackStatusWithOptions(const ModifyAppCallbackStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyAppCallbackStatus"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyAppCallbackStatusResponse>();
}

/**
 * @summary 更新app回调事件开关
 *
 * @param request ModifyAppCallbackStatusRequest
 * @return ModifyAppCallbackStatusResponse
 */
ModifyAppCallbackStatusResponse Client::modifyAppCallbackStatus(const ModifyAppCallbackStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyAppCallbackStatusWithOptions(request, runtime);
}

/**
 * @summary 修改app自定义布局
 *
 * @param tmpReq ModifyAppLayoutRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyAppLayoutResponse
 */
ModifyAppLayoutResponse Client::modifyAppLayoutWithOptions(const ModifyAppLayoutRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ModifyAppLayoutShrinkRequest request = ModifyAppLayoutShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasLayout()) {
    request.setLayoutShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.layout(), "Layout", "json"));
  }

  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasLayoutShrink()) {
    query["Layout"] = request.layoutShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyAppLayout"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyAppLayoutResponse>();
}

/**
 * @summary 修改app自定义布局
 *
 * @param request ModifyAppLayoutRequest
 * @return ModifyAppLayoutResponse
 */
ModifyAppLayoutResponse Client::modifyAppLayout(const ModifyAppLayoutRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyAppLayoutWithOptions(request, runtime);
}

/**
 * @summary 修改应用旁路开关
 *
 * @param request ModifyAppLiveStreamStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyAppLiveStreamStatusResponse
 */
ModifyAppLiveStreamStatusResponse Client::modifyAppLiveStreamStatusWithOptions(const ModifyAppLiveStreamStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyAppLiveStreamStatus"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyAppLiveStreamStatusResponse>();
}

/**
 * @summary 修改应用旁路开关
 *
 * @param request ModifyAppLiveStreamStatusRequest
 * @return ModifyAppLiveStreamStatusResponse
 */
ModifyAppLiveStreamStatusResponse Client::modifyAppLiveStreamStatus(const ModifyAppLiveStreamStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyAppLiveStreamStatusWithOptions(request, runtime);
}

/**
 * @summary 修改应用录制开关
 *
 * @param request ModifyAppRecordStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyAppRecordStatusResponse
 */
ModifyAppRecordStatusResponse Client::modifyAppRecordStatusWithOptions(const ModifyAppRecordStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyAppRecordStatus"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyAppRecordStatusResponse>();
}

/**
 * @summary 修改应用录制开关
 *
 * @param request ModifyAppRecordStatusRequest
 * @return ModifyAppRecordStatusResponse
 */
ModifyAppRecordStatusResponse Client::modifyAppRecordStatus(const ModifyAppRecordStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyAppRecordStatusWithOptions(request, runtime);
}

/**
 * @summary 修改应用录制模版
 *
 * @param tmpReq ModifyAppRecordTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyAppRecordTemplateResponse
 */
ModifyAppRecordTemplateResponse Client::modifyAppRecordTemplateWithOptions(const ModifyAppRecordTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ModifyAppRecordTemplateShrinkRequest request = ModifyAppRecordTemplateShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasRecordTemplate()) {
    request.setRecordTemplateShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.recordTemplate(), "RecordTemplate", "json"));
  }

  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasRecordTemplateShrink()) {
    query["RecordTemplate"] = request.recordTemplateShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyAppRecordTemplate"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyAppRecordTemplateResponse>();
}

/**
 * @summary 修改应用录制模版
 *
 * @param request ModifyAppRecordTemplateRequest
 * @return ModifyAppRecordTemplateResponse
 */
ModifyAppRecordTemplateResponse Client::modifyAppRecordTemplate(const ModifyAppRecordTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyAppRecordTemplateWithOptions(request, runtime);
}

/**
 * @summary 更新应用推流模版
 *
 * @param tmpReq ModifyAppStreamingOutTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyAppStreamingOutTemplateResponse
 */
ModifyAppStreamingOutTemplateResponse Client::modifyAppStreamingOutTemplateWithOptions(const ModifyAppStreamingOutTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ModifyAppStreamingOutTemplateShrinkRequest request = ModifyAppStreamingOutTemplateShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasStreamingOutTemplate()) {
    request.setStreamingOutTemplateShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.streamingOutTemplate(), "StreamingOutTemplate", "json"));
  }

  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasStreamingOutTemplateShrink()) {
    query["StreamingOutTemplate"] = request.streamingOutTemplateShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyAppStreamingOutTemplate"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyAppStreamingOutTemplateResponse>();
}

/**
 * @summary 更新应用推流模版
 *
 * @param request ModifyAppStreamingOutTemplateRequest
 * @return ModifyAppStreamingOutTemplateResponse
 */
ModifyAppStreamingOutTemplateResponse Client::modifyAppStreamingOutTemplate(const ModifyAppStreamingOutTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyAppStreamingOutTemplateWithOptions(request, runtime);
}

/**
 * @summary 更新app回调
 *
 * @param tmpReq ModifyCallbackMetaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyCallbackMetaResponse
 */
ModifyCallbackMetaResponse Client::modifyCallbackMetaWithOptions(const ModifyCallbackMetaRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ModifyCallbackMetaShrinkRequest request = ModifyCallbackMetaShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCallback()) {
    request.setCallbackShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.callback(), "Callback", "json"));
  }

  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasCallbackShrink()) {
    query["Callback"] = request.callbackShrink();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyCallbackMeta"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyCallbackMetaResponse>();
}

/**
 * @summary 更新app回调
 *
 * @param request ModifyCallbackMetaRequest
 * @return ModifyCallbackMetaResponse
 */
ModifyCallbackMetaResponse Client::modifyCallbackMeta(const ModifyCallbackMetaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyCallbackMetaWithOptions(request, runtime);
}

/**
 * @summary 更新纪要热词表
 *
 * @param tmpReq ModifyCloudNotePhrasesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyCloudNotePhrasesResponse
 */
ModifyCloudNotePhrasesResponse Client::modifyCloudNotePhrasesWithOptions(const ModifyCloudNotePhrasesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ModifyCloudNotePhrasesShrinkRequest request = ModifyCloudNotePhrasesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasPhrase()) {
    request.setPhraseShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.phrase(), "Phrase", "json"));
  }

  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasPhraseShrink()) {
    query["Phrase"] = request.phraseShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyCloudNotePhrases"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyCloudNotePhrasesResponse>();
}

/**
 * @summary 更新纪要热词表
 *
 * @param request ModifyCloudNotePhrasesRequest
 * @return ModifyCloudNotePhrasesResponse
 */
ModifyCloudNotePhrasesResponse Client::modifyCloudNotePhrases(const ModifyCloudNotePhrasesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyCloudNotePhrasesWithOptions(request, runtime);
}

/**
 * @param request ModifyMPULayoutRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyMPULayoutResponse
 */
ModifyMPULayoutResponse Client::modifyMPULayoutWithOptions(const ModifyMPULayoutRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasAudioMixCount()) {
    query["AudioMixCount"] = request.audioMixCount();
  }

  if (!!request.hasLayoutId()) {
    query["LayoutId"] = request.layoutId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPanes()) {
    query["Panes"] = request.panes();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyMPULayout"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyMPULayoutResponse>();
}

/**
 * @param request ModifyMPULayoutRequest
 * @return ModifyMPULayoutResponse
 */
ModifyMPULayoutResponse Client::modifyMPULayout(const ModifyMPULayoutRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyMPULayoutWithOptions(request, runtime);
}

/**
 * @summary NotifyAgent
 *
 * @param tmpReq NotifyAgentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return NotifyAgentResponse
 */
NotifyAgentResponse Client::notifyAgentWithOptions(const NotifyAgentRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  NotifyAgentShrinkRequest request = NotifyAgentShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBackgroundMusic()) {
    request.setBackgroundMusicShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.backgroundMusic(), "BackgroundMusic", "json"));
  }

  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasBackgroundMusicShrink()) {
    query["BackgroundMusic"] = request.backgroundMusicShrink();
  }

  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.channelId();
  }

  if (!!request.hasCustomAttribute()) {
    query["CustomAttribute"] = request.customAttribute();
  }

  if (!!request.hasInterruptable()) {
    query["Interruptable"] = request.interruptable();
  }

  if (!!request.hasMessage()) {
    query["Message"] = request.message();
  }

  if (!!request.hasPriority()) {
    query["Priority"] = request.priority();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "NotifyAgent"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<NotifyAgentResponse>();
}

/**
 * @summary NotifyAgent
 *
 * @param request NotifyAgentRequest
 * @return NotifyAgentResponse
 */
NotifyAgentResponse Client::notifyAgent(const NotifyAgentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return notifyAgentWithOptions(request, runtime);
}

/**
 * @param request RemoveTerminalsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveTerminalsResponse
 */
RemoveTerminalsResponse Client::removeTerminalsWithOptions(const RemoveTerminalsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.channelId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasTerminalIds()) {
    query["TerminalIds"] = request.terminalIds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveTerminals"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveTerminalsResponse>();
}

/**
 * @param request RemoveTerminalsRequest
 * @return RemoveTerminalsResponse
 */
RemoveTerminalsResponse Client::removeTerminals(const RemoveTerminalsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeTerminalsWithOptions(request, runtime);
}

/**
 * @summary RemoveUsers
 *
 * @param request RemoveUsersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveUsersResponse
 */
RemoveUsersResponse Client::removeUsersWithOptions(const RemoveUsersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.channelId();
  }

  if (!!request.hasUsers()) {
    query["Users"] = request.users();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveUsers"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveUsersResponse>();
}

/**
 * @summary RemoveUsers
 *
 * @param request RemoveUsersRequest
 * @return RemoveUsersResponse
 */
RemoveUsersResponse Client::removeUsers(const RemoveUsersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeUsersWithOptions(request, runtime);
}

/**
 * @summary 启动AI Agent
 *
 * @param tmpReq StartAgentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartAgentResponse
 */
StartAgentResponse Client::startAgentWithOptions(const StartAgentRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  StartAgentShrinkRequest request = StartAgentShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasRtcConfig()) {
    request.setRtcConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.rtcConfig(), "RtcConfig", "json"));
  }

  if (!!tmpReq.hasVoiceChatConfig()) {
    request.setVoiceChatConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.voiceChatConfig(), "VoiceChatConfig", "json"));
  }

  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.channelId();
  }

  if (!!request.hasRtcConfigShrink()) {
    query["RtcConfig"] = request.rtcConfigShrink();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  if (!!request.hasVoiceChatConfigShrink()) {
    query["VoiceChatConfig"] = request.voiceChatConfigShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartAgent"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartAgentResponse>();
}

/**
 * @summary 启动AI Agent
 *
 * @param request StartAgentRequest
 * @return StartAgentResponse
 */
StartAgentResponse Client::startAgent(const StartAgentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startAgentWithOptions(request, runtime);
}

/**
 * @summary 开启某个事件回调
 *
 * @param tmpReq StartCategoryCallbackRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartCategoryCallbackResponse
 */
StartCategoryCallbackResponse Client::startCategoryCallbackWithOptions(const StartCategoryCallbackRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  StartCategoryCallbackShrinkRequest request = StartCategoryCallbackShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCallback()) {
    request.setCallbackShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.callback(), "Callback", "json"));
  }

  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasCallbackShrink()) {
    query["Callback"] = request.callbackShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartCategoryCallback"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartCategoryCallbackResponse>();
}

/**
 * @summary 开启某个事件回调
 *
 * @param request StartCategoryCallbackRequest
 * @return StartCategoryCallbackResponse
 */
StartCategoryCallbackResponse Client::startCategoryCallback(const StartCategoryCallbackRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startCategoryCallbackWithOptions(request, runtime);
}

/**
 * @summary 开启智能纪要
 *
 * @param tmpReq StartCloudNoteRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartCloudNoteResponse
 */
StartCloudNoteResponse Client::startCloudNoteWithOptions(const StartCloudNoteRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  StartCloudNoteShrinkRequest request = StartCloudNoteShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAutoChapters()) {
    request.setAutoChaptersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.autoChapters(), "AutoChapters", "json"));
  }

  if (!!tmpReq.hasCustomPrompt()) {
    request.setCustomPromptShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.customPrompt(), "CustomPrompt", "json"));
  }

  if (!!tmpReq.hasMeetingAssistance()) {
    request.setMeetingAssistanceShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.meetingAssistance(), "MeetingAssistance", "json"));
  }

  if (!!tmpReq.hasRealtimeSubtitle()) {
    request.setRealtimeSubtitleShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.realtimeSubtitle(), "RealtimeSubtitle", "json"));
  }

  if (!!tmpReq.hasServiceInspection()) {
    request.setServiceInspectionShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.serviceInspection(), "ServiceInspection", "json"));
  }

  if (!!tmpReq.hasSummarization()) {
    request.setSummarizationShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.summarization(), "Summarization", "json"));
  }

  if (!!tmpReq.hasTextPolish()) {
    request.setTextPolishShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.textPolish(), "TextPolish", "json"));
  }

  if (!!tmpReq.hasTranscription()) {
    request.setTranscriptionShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.transcription(), "Transcription", "json"));
  }

  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasAutoChaptersShrink()) {
    query["AutoChapters"] = request.autoChaptersShrink();
  }

  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.channelId();
  }

  if (!!request.hasCustomPromptShrink()) {
    query["CustomPrompt"] = request.customPromptShrink();
  }

  if (!!request.hasLanguageHints()) {
    query["LanguageHints"] = request.languageHints();
  }

  if (!!request.hasMeetingAssistanceShrink()) {
    query["MeetingAssistance"] = request.meetingAssistanceShrink();
  }

  if (!!request.hasRealtimeSubtitleShrink()) {
    query["RealtimeSubtitle"] = request.realtimeSubtitleShrink();
  }

  if (!!request.hasServiceInspectionShrink()) {
    query["ServiceInspection"] = request.serviceInspectionShrink();
  }

  if (!!request.hasSourceLanguage()) {
    query["SourceLanguage"] = request.sourceLanguage();
  }

  if (!!request.hasStorageConfig()) {
    query["StorageConfig"] = request.storageConfig();
  }

  if (!!request.hasSummarizationShrink()) {
    query["Summarization"] = request.summarizationShrink();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  if (!!request.hasTextPolishShrink()) {
    query["TextPolish"] = request.textPolishShrink();
  }

  if (!!request.hasTranscriptionShrink()) {
    query["Transcription"] = request.transcriptionShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartCloudNote"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartCloudNoteResponse>();
}

/**
 * @summary 开启智能纪要
 *
 * @param request StartCloudNoteRequest
 * @return StartCloudNoteResponse
 */
StartCloudNoteResponse Client::startCloudNote(const StartCloudNoteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startCloudNoteWithOptions(request, runtime);
}

/**
 * @summary StartCloudRecord
 *
 * @param tmpReq StartCloudRecordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartCloudRecordResponse
 */
StartCloudRecordResponse Client::startCloudRecordWithOptions(const StartCloudRecordRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  StartCloudRecordShrinkRequest request = StartCloudRecordShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasLayoutSpecifiedUsers()) {
    request.setLayoutSpecifiedUsersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.layoutSpecifiedUsers(), "LayoutSpecifiedUsers", "json"));
  }

  if (!!tmpReq.hasSingleStreamingRecord()) {
    request.setSingleStreamingRecordShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.singleStreamingRecord(), "SingleStreamingRecord", "json"));
  }

  json query = {};
  if (!!request.hasAnnotation()) {
    query["Annotation"] = request.annotation();
  }

  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasBackgrounds()) {
    query["Backgrounds"] = request.backgrounds();
  }

  if (!!request.hasBgColor()) {
    query["BgColor"] = request.bgColor();
  }

  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.channelId();
  }

  if (!!request.hasClockWidgets()) {
    query["ClockWidgets"] = request.clockWidgets();
  }

  if (!!request.hasCropMode()) {
    query["CropMode"] = request.cropMode();
  }

  if (!!request.hasImages()) {
    query["Images"] = request.images();
  }

  if (!!request.hasLayoutSpecifiedUsersShrink()) {
    query["LayoutSpecifiedUsers"] = request.layoutSpecifiedUsersShrink();
  }

  if (!!request.hasPanes()) {
    query["Panes"] = request.panes();
  }

  if (!!request.hasRecordMode()) {
    query["RecordMode"] = request.recordMode();
  }

  if (!!request.hasRegionColor()) {
    query["RegionColor"] = request.regionColor();
  }

  if (!!request.hasReservePaneForNoCameraUser()) {
    query["ReservePaneForNoCameraUser"] = request.reservePaneForNoCameraUser();
  }

  if (!!request.hasShowDefaultBackgroundOnMute()) {
    query["ShowDefaultBackgroundOnMute"] = request.showDefaultBackgroundOnMute();
  }

  if (!!request.hasSingleStreamingRecordShrink()) {
    query["SingleStreamingRecord"] = request.singleStreamingRecordShrink();
  }

  if (!!request.hasStartWithoutChannel()) {
    query["StartWithoutChannel"] = request.startWithoutChannel();
  }

  if (!!request.hasStartWithoutChannelWaitTime()) {
    query["StartWithoutChannelWaitTime"] = request.startWithoutChannelWaitTime();
  }

  if (!!request.hasStorageConfig()) {
    query["StorageConfig"] = request.storageConfig();
  }

  if (!!request.hasSubHighResolutionStream()) {
    query["SubHighResolutionStream"] = request.subHighResolutionStream();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  if (!!request.hasTexts()) {
    query["Texts"] = request.texts();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartCloudRecord"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartCloudRecordResponse>();
}

/**
 * @summary StartCloudRecord
 *
 * @param request StartCloudRecordRequest
 * @return StartCloudRecordResponse
 */
StartCloudRecordResponse Client::startCloudRecord(const StartCloudRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startCloudRecordWithOptions(request, runtime);
}

/**
 * @param request StartMPUTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartMPUTaskResponse
 */
StartMPUTaskResponse Client::startMPUTaskWithOptions(const StartMPUTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasBackgroundColor()) {
    query["BackgroundColor"] = request.backgroundColor();
  }

  if (!!request.hasBackgrounds()) {
    query["Backgrounds"] = request.backgrounds();
  }

  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.channelId();
  }

  if (!!request.hasClockWidgets()) {
    query["ClockWidgets"] = request.clockWidgets();
  }

  if (!!request.hasCropMode()) {
    query["CropMode"] = request.cropMode();
  }

  if (!!request.hasLayoutIds()) {
    query["LayoutIds"] = request.layoutIds();
  }

  if (!!request.hasMediaEncode()) {
    query["MediaEncode"] = request.mediaEncode();
  }

  if (!!request.hasMixMode()) {
    query["MixMode"] = request.mixMode();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPayloadType()) {
    query["PayloadType"] = request.payloadType();
  }

  if (!!request.hasReportVad()) {
    query["ReportVad"] = request.reportVad();
  }

  if (!!request.hasRtpExtInfo()) {
    query["RtpExtInfo"] = request.rtpExtInfo();
  }

  if (!!request.hasSourceType()) {
    query["SourceType"] = request.sourceType();
  }

  if (!!request.hasStreamType()) {
    query["StreamType"] = request.streamType();
  }

  if (!!request.hasStreamURL()) {
    query["StreamURL"] = request.streamURL();
  }

  if (!!request.hasSubSpecAudioUsers()) {
    query["SubSpecAudioUsers"] = request.subSpecAudioUsers();
  }

  if (!!request.hasSubSpecCameraUsers()) {
    query["SubSpecCameraUsers"] = request.subSpecCameraUsers();
  }

  if (!!request.hasSubSpecShareScreenUsers()) {
    query["SubSpecShareScreenUsers"] = request.subSpecShareScreenUsers();
  }

  if (!!request.hasSubSpecUsers()) {
    query["SubSpecUsers"] = request.subSpecUsers();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  if (!!request.hasTaskType()) {
    query["TaskType"] = request.taskType();
  }

  if (!!request.hasTimeStampRef()) {
    query["TimeStampRef"] = request.timeStampRef();
  }

  if (!!request.hasUnsubSpecAudioUsers()) {
    query["UnsubSpecAudioUsers"] = request.unsubSpecAudioUsers();
  }

  if (!!request.hasUnsubSpecCameraUsers()) {
    query["UnsubSpecCameraUsers"] = request.unsubSpecCameraUsers();
  }

  if (!!request.hasUnsubSpecShareScreenUsers()) {
    query["UnsubSpecShareScreenUsers"] = request.unsubSpecShareScreenUsers();
  }

  if (!!request.hasUserPanes()) {
    query["UserPanes"] = request.userPanes();
  }

  if (!!request.hasVadInterval()) {
    query["VadInterval"] = request.vadInterval();
  }

  if (!!request.hasWatermarks()) {
    query["Watermarks"] = request.watermarks();
  }

  json body = {};
  json bodyFlat = {};
  if (!!request.hasEnhancedParam()) {
    bodyFlat["EnhancedParam"] = request.enhancedParam();
  }

  body = Darabonba::Core::merge(body,
    Utils::Utils::query(bodyFlat)
  );
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "StartMPUTask"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartMPUTaskResponse>();
}

/**
 * @param request StartMPUTaskRequest
 * @return StartMPUTaskResponse
 */
StartMPUTaskResponse Client::startMPUTask(const StartMPUTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startMPUTaskWithOptions(request, runtime);
}

/**
 * @param request StartRecordTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartRecordTaskResponse
 */
StartRecordTaskResponse Client::startRecordTaskWithOptions(const StartRecordTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.channelId();
  }

  if (!!request.hasCropMode()) {
    query["CropMode"] = request.cropMode();
  }

  if (!!request.hasLayoutIds()) {
    query["LayoutIds"] = request.layoutIds();
  }

  if (!!request.hasMediaEncode()) {
    query["MediaEncode"] = request.mediaEncode();
  }

  if (!!request.hasMixMode()) {
    query["MixMode"] = request.mixMode();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasSourceType()) {
    query["SourceType"] = request.sourceType();
  }

  if (!!request.hasStreamType()) {
    query["StreamType"] = request.streamType();
  }

  if (!!request.hasSubSpecAudioUsers()) {
    query["SubSpecAudioUsers"] = request.subSpecAudioUsers();
  }

  if (!!request.hasSubSpecCameraUsers()) {
    query["SubSpecCameraUsers"] = request.subSpecCameraUsers();
  }

  if (!!request.hasSubSpecShareScreenUsers()) {
    query["SubSpecShareScreenUsers"] = request.subSpecShareScreenUsers();
  }

  if (!!request.hasSubSpecUsers()) {
    query["SubSpecUsers"] = request.subSpecUsers();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  if (!!request.hasTaskProfile()) {
    query["TaskProfile"] = request.taskProfile();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  if (!!request.hasUnsubSpecAudioUsers()) {
    query["UnsubSpecAudioUsers"] = request.unsubSpecAudioUsers();
  }

  if (!!request.hasUnsubSpecCameraUsers()) {
    query["UnsubSpecCameraUsers"] = request.unsubSpecCameraUsers();
  }

  if (!!request.hasUnsubSpecShareScreenUsers()) {
    query["UnsubSpecShareScreenUsers"] = request.unsubSpecShareScreenUsers();
  }

  if (!!request.hasUserPanes()) {
    query["UserPanes"] = request.userPanes();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartRecordTask"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartRecordTaskResponse>();
}

/**
 * @param request StartRecordTaskRequest
 * @return StartRecordTaskResponse
 */
StartRecordTaskResponse Client::startRecordTask(const StartRecordTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startRecordTaskWithOptions(request, runtime);
}

/**
 * @summary StartStreamingOut
 *
 * @param tmpReq StartStreamingOutRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartStreamingOutResponse
 */
StartStreamingOutResponse Client::startStreamingOutWithOptions(const StartStreamingOutRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  StartStreamingOutShrinkRequest request = StartStreamingOutShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasLayoutSpecifiedUsers()) {
    request.setLayoutSpecifiedUsersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.layoutSpecifiedUsers(), "LayoutSpecifiedUsers", "json"));
  }

  json query = {};
  if (!!request.hasAnnotation()) {
    query["Annotation"] = request.annotation();
  }

  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasBackgrounds()) {
    query["Backgrounds"] = request.backgrounds();
  }

  if (!!request.hasBgColor()) {
    query["BgColor"] = request.bgColor();
  }

  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.channelId();
  }

  if (!!request.hasClockWidgets()) {
    query["ClockWidgets"] = request.clockWidgets();
  }

  if (!!request.hasCropMode()) {
    query["CropMode"] = request.cropMode();
  }

  if (!!request.hasImages()) {
    query["Images"] = request.images();
  }

  if (!!request.hasLayoutSpecifiedUsersShrink()) {
    query["LayoutSpecifiedUsers"] = request.layoutSpecifiedUsersShrink();
  }

  if (!!request.hasPanes()) {
    query["Panes"] = request.panes();
  }

  if (!!request.hasRegionColor()) {
    query["RegionColor"] = request.regionColor();
  }

  if (!!request.hasReservePaneForNoCameraUser()) {
    query["ReservePaneForNoCameraUser"] = request.reservePaneForNoCameraUser();
  }

  if (!!request.hasShowDefaultBackgroundOnMute()) {
    query["ShowDefaultBackgroundOnMute"] = request.showDefaultBackgroundOnMute();
  }

  if (!!request.hasSpecMixedUserList()) {
    query["SpecMixedUserList"] = request.specMixedUserList();
  }

  if (!!request.hasStartWithoutChannel()) {
    query["StartWithoutChannel"] = request.startWithoutChannel();
  }

  if (!!request.hasStartWithoutChannelWaitTime()) {
    query["StartWithoutChannelWaitTime"] = request.startWithoutChannelWaitTime();
  }

  if (!!request.hasSubHighResolutionStream()) {
    query["SubHighResolutionStream"] = request.subHighResolutionStream();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  if (!!request.hasTexts()) {
    query["Texts"] = request.texts();
  }

  if (!!request.hasUrl()) {
    query["Url"] = request.url();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartStreamingOut"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartStreamingOutResponse>();
}

/**
 * @summary StartStreamingOut
 *
 * @param request StartStreamingOutRequest
 * @return StartStreamingOutResponse
 */
StartStreamingOutResponse Client::startStreamingOut(const StartStreamingOutRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startStreamingOutWithOptions(request, runtime);
}

/**
 * @summary 停止AI Agent
 *
 * @param request StopAgentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopAgentResponse
 */
StopAgentResponse Client::stopAgentWithOptions(const StopAgentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.channelId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopAgent"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopAgentResponse>();
}

/**
 * @summary 停止AI Agent
 *
 * @param request StopAgentRequest
 * @return StopAgentResponse
 */
StopAgentResponse Client::stopAgent(const StopAgentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopAgentWithOptions(request, runtime);
}

/**
 * @summary 关闭某个事件回调
 *
 * @param tmpReq StopCategoryCallbackRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopCategoryCallbackResponse
 */
StopCategoryCallbackResponse Client::stopCategoryCallbackWithOptions(const StopCategoryCallbackRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  StopCategoryCallbackShrinkRequest request = StopCategoryCallbackShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCallback()) {
    request.setCallbackShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.callback(), "Callback", "json"));
  }

  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasCallbackShrink()) {
    query["Callback"] = request.callbackShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopCategoryCallback"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopCategoryCallbackResponse>();
}

/**
 * @summary 关闭某个事件回调
 *
 * @param request StopCategoryCallbackRequest
 * @return StopCategoryCallbackResponse
 */
StopCategoryCallbackResponse Client::stopCategoryCallback(const StopCategoryCallbackRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopCategoryCallbackWithOptions(request, runtime);
}

/**
 * @summary 删除频道
 *
 * @param request StopChannelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopChannelResponse
 */
StopChannelResponse Client::stopChannelWithOptions(const StopChannelRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.channelId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopChannel"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopChannelResponse>();
}

/**
 * @summary 删除频道
 *
 * @param request StopChannelRequest
 * @return StopChannelResponse
 */
StopChannelResponse Client::stopChannel(const StopChannelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopChannelWithOptions(request, runtime);
}

/**
 * @summary 停止智能纪要
 *
 * @param request StopCloudNoteRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopCloudNoteResponse
 */
StopCloudNoteResponse Client::stopCloudNoteWithOptions(const StopCloudNoteRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.channelId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopCloudNote"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopCloudNoteResponse>();
}

/**
 * @summary 停止智能纪要
 *
 * @param request StopCloudNoteRequest
 * @return StopCloudNoteResponse
 */
StopCloudNoteResponse Client::stopCloudNote(const StopCloudNoteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopCloudNoteWithOptions(request, runtime);
}

/**
 * @summary StopCloudRecord
 *
 * @param request StopCloudRecordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopCloudRecordResponse
 */
StopCloudRecordResponse Client::stopCloudRecordWithOptions(const StopCloudRecordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.channelId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopCloudRecord"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopCloudRecordResponse>();
}

/**
 * @summary StopCloudRecord
 *
 * @param request StopCloudRecordRequest
 * @return StopCloudRecordResponse
 */
StopCloudRecordResponse Client::stopCloudRecord(const StopCloudRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopCloudRecordWithOptions(request, runtime);
}

/**
 * @param request StopMPUTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopMPUTaskResponse
 */
StopMPUTaskResponse Client::stopMPUTaskWithOptions(const StopMPUTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopMPUTask"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopMPUTaskResponse>();
}

/**
 * @param request StopMPUTaskRequest
 * @return StopMPUTaskResponse
 */
StopMPUTaskResponse Client::stopMPUTask(const StopMPUTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopMPUTaskWithOptions(request, runtime);
}

/**
 * @param request StopRecordTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopRecordTaskResponse
 */
StopRecordTaskResponse Client::stopRecordTaskWithOptions(const StopRecordTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopRecordTask"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopRecordTaskResponse>();
}

/**
 * @param request StopRecordTaskRequest
 * @return StopRecordTaskResponse
 */
StopRecordTaskResponse Client::stopRecordTask(const StopRecordTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopRecordTaskWithOptions(request, runtime);
}

/**
 * @summary StopStreamingOut
 *
 * @param request StopStreamingOutRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopStreamingOutResponse
 */
StopStreamingOutResponse Client::stopStreamingOutWithOptions(const StopStreamingOutRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.channelId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopStreamingOut"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopStreamingOutResponse>();
}

/**
 * @summary StopStreamingOut
 *
 * @param request StopStreamingOutRequest
 * @return StopStreamingOutResponse
 */
StopStreamingOutResponse Client::stopStreamingOut(const StopStreamingOutRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopStreamingOutWithOptions(request, runtime);
}

/**
 * @summary 更新AI Agent
 *
 * @param tmpReq UpdateAgentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAgentResponse
 */
UpdateAgentResponse Client::updateAgentWithOptions(const UpdateAgentRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateAgentShrinkRequest request = UpdateAgentShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasVoiceChatConfig()) {
    request.setVoiceChatConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.voiceChatConfig(), "VoiceChatConfig", "json"));
  }

  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.channelId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  if (!!request.hasVoiceChatConfigShrink()) {
    query["VoiceChatConfig"] = request.voiceChatConfigShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateAgent"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAgentResponse>();
}

/**
 * @summary 更新AI Agent
 *
 * @param request UpdateAgentRequest
 * @return UpdateAgentResponse
 */
UpdateAgentResponse Client::updateAgent(const UpdateAgentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAgentWithOptions(request, runtime);
}

/**
 * @param request UpdateAutoLiveStreamRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAutoLiveStreamRuleResponse
 */
UpdateAutoLiveStreamRuleResponse Client::updateAutoLiveStreamRuleWithOptions(const UpdateAutoLiveStreamRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasCallBack()) {
    query["CallBack"] = request.callBack();
  }

  if (!!request.hasChannelIdPrefixes()) {
    query["ChannelIdPrefixes"] = request.channelIdPrefixes();
  }

  if (!!request.hasChannelIds()) {
    query["ChannelIds"] = request.channelIds();
  }

  if (!!request.hasMediaEncode()) {
    query["MediaEncode"] = request.mediaEncode();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPlayDomain()) {
    query["PlayDomain"] = request.playDomain();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.ruleId();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.ruleName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateAutoLiveStreamRule"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateAutoLiveStreamRuleResponse>();
}

/**
 * @param request UpdateAutoLiveStreamRuleRequest
 * @return UpdateAutoLiveStreamRuleResponse
 */
UpdateAutoLiveStreamRuleResponse Client::updateAutoLiveStreamRule(const UpdateAutoLiveStreamRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAutoLiveStreamRuleWithOptions(request, runtime);
}

/**
 * @summary 更新云端录制任务
 *
 * @param tmpReq UpdateCloudRecordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateCloudRecordResponse
 */
UpdateCloudRecordResponse Client::updateCloudRecordWithOptions(const UpdateCloudRecordRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateCloudRecordShrinkRequest request = UpdateCloudRecordShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasLayoutSpecifiedUsers()) {
    request.setLayoutSpecifiedUsersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.layoutSpecifiedUsers(), "LayoutSpecifiedUsers", "json"));
  }

  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasBackgrounds()) {
    query["Backgrounds"] = request.backgrounds();
  }

  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.channelId();
  }

  if (!!request.hasClockWidgets()) {
    query["ClockWidgets"] = request.clockWidgets();
  }

  if (!!request.hasImages()) {
    query["Images"] = request.images();
  }

  if (!!request.hasLayoutSpecifiedUsersShrink()) {
    query["LayoutSpecifiedUsers"] = request.layoutSpecifiedUsersShrink();
  }

  if (!!request.hasPanes()) {
    query["Panes"] = request.panes();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  if (!!request.hasTexts()) {
    query["Texts"] = request.texts();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateCloudRecord"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateCloudRecordResponse>();
}

/**
 * @summary 更新云端录制任务
 *
 * @param request UpdateCloudRecordRequest
 * @return UpdateCloudRecordResponse
 */
UpdateCloudRecordResponse Client::updateCloudRecord(const UpdateCloudRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateCloudRecordWithOptions(request, runtime);
}

/**
 * @param request UpdateMPUTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateMPUTaskResponse
 */
UpdateMPUTaskResponse Client::updateMPUTaskWithOptions(const UpdateMPUTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasBackgroundColor()) {
    query["BackgroundColor"] = request.backgroundColor();
  }

  if (!!request.hasBackgrounds()) {
    query["Backgrounds"] = request.backgrounds();
  }

  if (!!request.hasClockWidgets()) {
    query["ClockWidgets"] = request.clockWidgets();
  }

  if (!!request.hasCropMode()) {
    query["CropMode"] = request.cropMode();
  }

  if (!!request.hasLayoutIds()) {
    query["LayoutIds"] = request.layoutIds();
  }

  if (!!request.hasMediaEncode()) {
    query["MediaEncode"] = request.mediaEncode();
  }

  if (!!request.hasMixMode()) {
    query["MixMode"] = request.mixMode();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasSourceType()) {
    query["SourceType"] = request.sourceType();
  }

  if (!!request.hasStreamType()) {
    query["StreamType"] = request.streamType();
  }

  if (!!request.hasSubSpecAudioUsers()) {
    query["SubSpecAudioUsers"] = request.subSpecAudioUsers();
  }

  if (!!request.hasSubSpecCameraUsers()) {
    query["SubSpecCameraUsers"] = request.subSpecCameraUsers();
  }

  if (!!request.hasSubSpecShareScreenUsers()) {
    query["SubSpecShareScreenUsers"] = request.subSpecShareScreenUsers();
  }

  if (!!request.hasSubSpecUsers()) {
    query["SubSpecUsers"] = request.subSpecUsers();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  if (!!request.hasUnsubSpecAudioUsers()) {
    query["UnsubSpecAudioUsers"] = request.unsubSpecAudioUsers();
  }

  if (!!request.hasUnsubSpecCameraUsers()) {
    query["UnsubSpecCameraUsers"] = request.unsubSpecCameraUsers();
  }

  if (!!request.hasUnsubSpecShareScreenUsers()) {
    query["UnsubSpecShareScreenUsers"] = request.unsubSpecShareScreenUsers();
  }

  if (!!request.hasUserPanes()) {
    query["UserPanes"] = request.userPanes();
  }

  if (!!request.hasWatermarks()) {
    query["Watermarks"] = request.watermarks();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateMPUTask"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateMPUTaskResponse>();
}

/**
 * @param request UpdateMPUTaskRequest
 * @return UpdateMPUTaskResponse
 */
UpdateMPUTaskResponse Client::updateMPUTask(const UpdateMPUTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateMPUTaskWithOptions(request, runtime);
}

/**
 * @param request UpdateRecordTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateRecordTaskResponse
 */
UpdateRecordTaskResponse Client::updateRecordTaskWithOptions(const UpdateRecordTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.channelId();
  }

  if (!!request.hasCropMode()) {
    query["CropMode"] = request.cropMode();
  }

  if (!!request.hasLayoutIds()) {
    query["LayoutIds"] = request.layoutIds();
  }

  if (!!request.hasMediaEncode()) {
    query["MediaEncode"] = request.mediaEncode();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasSubSpecAudioUsers()) {
    query["SubSpecAudioUsers"] = request.subSpecAudioUsers();
  }

  if (!!request.hasSubSpecCameraUsers()) {
    query["SubSpecCameraUsers"] = request.subSpecCameraUsers();
  }

  if (!!request.hasSubSpecShareScreenUsers()) {
    query["SubSpecShareScreenUsers"] = request.subSpecShareScreenUsers();
  }

  if (!!request.hasSubSpecUsers()) {
    query["SubSpecUsers"] = request.subSpecUsers();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  if (!!request.hasTaskProfile()) {
    query["TaskProfile"] = request.taskProfile();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  if (!!request.hasUnsubSpecAudioUsers()) {
    query["UnsubSpecAudioUsers"] = request.unsubSpecAudioUsers();
  }

  if (!!request.hasUnsubSpecCameraUsers()) {
    query["UnsubSpecCameraUsers"] = request.unsubSpecCameraUsers();
  }

  if (!!request.hasUnsubSpecShareScreenUsers()) {
    query["UnsubSpecShareScreenUsers"] = request.unsubSpecShareScreenUsers();
  }

  if (!!request.hasUserPanes()) {
    query["UserPanes"] = request.userPanes();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateRecordTask"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateRecordTaskResponse>();
}

/**
 * @param request UpdateRecordTaskRequest
 * @return UpdateRecordTaskResponse
 */
UpdateRecordTaskResponse Client::updateRecordTask(const UpdateRecordTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateRecordTaskWithOptions(request, runtime);
}

/**
 * @param request UpdateRecordTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateRecordTemplateResponse
 */
UpdateRecordTemplateResponse Client::updateRecordTemplateWithOptions(const UpdateRecordTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasBackgroundColor()) {
    query["BackgroundColor"] = request.backgroundColor();
  }

  if (!!request.hasBackgrounds()) {
    query["Backgrounds"] = request.backgrounds();
  }

  if (!!request.hasClockWidgets()) {
    query["ClockWidgets"] = request.clockWidgets();
  }

  if (!!request.hasDelayStopTime()) {
    query["DelayStopTime"] = request.delayStopTime();
  }

  if (!!request.hasEnableM3u8DateTime()) {
    query["EnableM3u8DateTime"] = request.enableM3u8DateTime();
  }

  if (!!request.hasFileSplitInterval()) {
    query["FileSplitInterval"] = request.fileSplitInterval();
  }

  if (!!request.hasFormats()) {
    query["Formats"] = request.formats();
  }

  if (!!request.hasHttpCallbackUrl()) {
    query["HttpCallbackUrl"] = request.httpCallbackUrl();
  }

  if (!!request.hasLayoutIds()) {
    query["LayoutIds"] = request.layoutIds();
  }

  if (!!request.hasMediaEncode()) {
    query["MediaEncode"] = request.mediaEncode();
  }

  if (!!request.hasMnsQueue()) {
    query["MnsQueue"] = request.mnsQueue();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasOssBucket()) {
    query["OssBucket"] = request.ossBucket();
  }

  if (!!request.hasOssEndpoint()) {
    query["OssEndpoint"] = request.ossEndpoint();
  }

  if (!!request.hasOssFilePrefix()) {
    query["OssFilePrefix"] = request.ossFilePrefix();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasTaskProfile()) {
    query["TaskProfile"] = request.taskProfile();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  if (!!request.hasWatermarks()) {
    query["Watermarks"] = request.watermarks();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateRecordTemplate"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateRecordTemplateResponse>();
}

/**
 * @param request UpdateRecordTemplateRequest
 * @return UpdateRecordTemplateResponse
 */
UpdateRecordTemplateResponse Client::updateRecordTemplate(const UpdateRecordTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateRecordTemplateWithOptions(request, runtime);
}

/**
 * @summary 更新旁路推流任务
 *
 * @param tmpReq UpdateStreamingOutRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateStreamingOutResponse
 */
UpdateStreamingOutResponse Client::updateStreamingOutWithOptions(const UpdateStreamingOutRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateStreamingOutShrinkRequest request = UpdateStreamingOutShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasLayoutSpecifiedUsers()) {
    request.setLayoutSpecifiedUsersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.layoutSpecifiedUsers(), "LayoutSpecifiedUsers", "json"));
  }

  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasBackgrounds()) {
    query["Backgrounds"] = request.backgrounds();
  }

  if (!!request.hasBgColor()) {
    query["BgColor"] = request.bgColor();
  }

  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.channelId();
  }

  if (!!request.hasClockWidgets()) {
    query["ClockWidgets"] = request.clockWidgets();
  }

  if (!!request.hasCropMode()) {
    query["CropMode"] = request.cropMode();
  }

  if (!!request.hasImages()) {
    query["Images"] = request.images();
  }

  if (!!request.hasLayoutSpecifiedUsersShrink()) {
    query["LayoutSpecifiedUsers"] = request.layoutSpecifiedUsersShrink();
  }

  if (!!request.hasPanes()) {
    query["Panes"] = request.panes();
  }

  if (!!request.hasRegionColor()) {
    query["RegionColor"] = request.regionColor();
  }

  if (!!request.hasSpecMixedUserList()) {
    query["SpecMixedUserList"] = request.specMixedUserList();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.templateId();
  }

  if (!!request.hasTexts()) {
    query["Texts"] = request.texts();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateStreamingOut"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateStreamingOutResponse>();
}

/**
 * @summary 更新旁路推流任务
 *
 * @param request UpdateStreamingOutRequest
 * @return UpdateStreamingOutResponse
 */
UpdateStreamingOutResponse Client::updateStreamingOut(const UpdateStreamingOutRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateStreamingOutWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Rtc20180111