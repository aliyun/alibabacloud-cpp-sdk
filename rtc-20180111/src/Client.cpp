#include <darabonba/Core.hpp>
#include <alibabacloud/Rtc20180111.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/gateway/POP.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::Gateway;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::Rtc20180111::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace Rtc20180111
{

AlibabaCloud::Rtc20180111::Client::Client(Config &config): OpenApiClient(config){
  this->_productId = "rtc";
  shared_ptr<POP> gatewayClient = make_shared<POP>();
  this->_spi = gatewayClient;
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
 * @summary Adds a recording configuration template.
 *
 * @description # Usage notes
 * This operation adds a recording configuration template. For example, when you add a recording configuration template, you can configure parameters such as recording specifications and encoding options.
 * # QPS limits
 * The QPS limit for a single user is 100 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Make API calls at a reasonable rate. For more information, see [QPS limits](https://help.aliyun.com/document_detail/341645.html).
 *
 * @param request AddRecordTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddRecordTemplateResponse
 */
AddRecordTemplateResponse Client::addRecordTemplateWithOptions(const AddRecordTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasBackgroundColor()) {
    query["BackgroundColor"] = request.getBackgroundColor();
  }

  if (!!request.hasBackgrounds()) {
    query["Backgrounds"] = request.getBackgrounds();
  }

  if (!!request.hasClockWidgets()) {
    query["ClockWidgets"] = request.getClockWidgets();
  }

  if (!!request.hasDelayStopTime()) {
    query["DelayStopTime"] = request.getDelayStopTime();
  }

  if (!!request.hasEnableM3u8DateTime()) {
    query["EnableM3u8DateTime"] = request.getEnableM3u8DateTime();
  }

  if (!!request.hasFileSplitInterval()) {
    query["FileSplitInterval"] = request.getFileSplitInterval();
  }

  if (!!request.hasFormats()) {
    query["Formats"] = request.getFormats();
  }

  if (!!request.hasHttpCallbackUrl()) {
    query["HttpCallbackUrl"] = request.getHttpCallbackUrl();
  }

  if (!!request.hasLayoutIds()) {
    query["LayoutIds"] = request.getLayoutIds();
  }

  if (!!request.hasMediaEncode()) {
    query["MediaEncode"] = request.getMediaEncode();
  }

  if (!!request.hasMnsQueue()) {
    query["MnsQueue"] = request.getMnsQueue();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasOssBucket()) {
    query["OssBucket"] = request.getOssBucket();
  }

  if (!!request.hasOssEndpoint()) {
    query["OssEndpoint"] = request.getOssEndpoint();
  }

  if (!!request.hasOssFilePrefix()) {
    query["OssFilePrefix"] = request.getOssFilePrefix();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasTaskProfile()) {
    query["TaskProfile"] = request.getTaskProfile();
  }

  if (!!request.hasWatermarks()) {
    query["Watermarks"] = request.getWatermarks();
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
 * @summary Adds a recording configuration template.
 *
 * @description # Usage notes
 * This operation adds a recording configuration template. For example, when you add a recording configuration template, you can configure parameters such as recording specifications and encoding options.
 * # QPS limits
 * The QPS limit for a single user is 100 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Make API calls at a reasonable rate. For more information, see [QPS limits](https://help.aliyun.com/document_detail/341645.html).
 *
 * @param request AddRecordTemplateRequest
 * @return AddRecordTemplateResponse
 */
AddRecordTemplateResponse Client::addRecordTemplate(const AddRecordTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addRecordTemplateWithOptions(request, runtime);
}

/**
 * @summary Creates an application agent template.
 *
 * @description ### QPS limit
 * The QPS limit for a single user is 10 calls per second for this API operation. If the limit is exceeded, API calls are throttled, which may affect your services. Call this API operation at a reasonable frequency.
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
    request.setAgentSilenceConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAgentSilenceConfig(), "AgentSilenceConfig", "json"));
  }

  if (!!tmpReq.hasAmbientSoundConfig()) {
    request.setAmbientSoundConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAmbientSoundConfig(), "AmbientSoundConfig", "json"));
  }

  if (!!tmpReq.hasAsrConfig()) {
    request.setAsrConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAsrConfig(), "AsrConfig", "json"));
  }

  if (!!tmpReq.hasBackChannelConfig()) {
    request.setBackChannelConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBackChannelConfig(), "BackChannelConfig", "json"));
  }

  if (!!tmpReq.hasInterruptConfig()) {
    request.setInterruptConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getInterruptConfig(), "InterruptConfig", "json"));
  }

  if (!!tmpReq.hasLlmConfig()) {
    request.setLlmConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getLlmConfig(), "LlmConfig", "json"));
  }

  if (!!tmpReq.hasTtsConfig()) {
    request.setTtsConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTtsConfig(), "TtsConfig", "json"));
  }

  json query = {};
  if (!!request.hasAgentSilenceConfigShrink()) {
    query["AgentSilenceConfig"] = request.getAgentSilenceConfigShrink();
  }

  if (!!request.hasAmbientSoundConfigShrink()) {
    query["AmbientSoundConfig"] = request.getAmbientSoundConfigShrink();
  }

  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasAsrConfigShrink()) {
    query["AsrConfig"] = request.getAsrConfigShrink();
  }

  if (!!request.hasBackChannelConfigShrink()) {
    query["BackChannelConfig"] = request.getBackChannelConfigShrink();
  }

  if (!!request.hasChatMode()) {
    query["ChatMode"] = request.getChatMode();
  }

  if (!!request.hasEnableVideoUnderstanding()) {
    query["EnableVideoUnderstanding"] = request.getEnableVideoUnderstanding();
  }

  if (!!request.hasGreeting()) {
    query["Greeting"] = request.getGreeting();
  }

  if (!!request.hasInterruptConfigShrink()) {
    query["InterruptConfig"] = request.getInterruptConfigShrink();
  }

  if (!!request.hasInterruptMode()) {
    query["InterruptMode"] = request.getInterruptMode();
  }

  if (!!request.hasLlmConfigShrink()) {
    query["LlmConfig"] = request.getLlmConfigShrink();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasPreferVideo()) {
    query["PreferVideo"] = request.getPreferVideo();
  }

  if (!!request.hasTtsConfigShrink()) {
    query["TtsConfig"] = request.getTtsConfigShrink();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
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
 * @summary Creates an application agent template.
 *
 * @description ### QPS limit
 * The QPS limit for a single user is 10 calls per second for this API operation. If the limit is exceeded, API calls are throttled, which may affect your services. Call this API operation at a reasonable frequency.
 *
 * @param request CreateAppAgentTemplateRequest
 * @return CreateAppAgentTemplateResponse
 */
CreateAppAgentTemplateResponse Client::createAppAgentTemplate(const CreateAppAgentTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAppAgentTemplateWithOptions(request, runtime);
}

/**
 * @summary Creates a custom layout for an application.
 *
 * @description ### QPS limit
 * The queries per second (QPS) limit per user is 10. If the limit is exceeded, API calls are throttled, which may affect your services. Call this API operation at a reasonable frequency.
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
    request.setLayoutShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getLayout(), "Layout", "json"));
  }

  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasLayoutShrink()) {
    query["Layout"] = request.getLayoutShrink();
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
 * @summary Creates a custom layout for an application.
 *
 * @description ### QPS limit
 * The queries per second (QPS) limit per user is 10. If the limit is exceeded, API calls are throttled, which may affect your services. Call this API operation at a reasonable frequency.
 *
 * @param request CreateAppLayoutRequest
 * @return CreateAppLayoutResponse
 */
CreateAppLayoutResponse Client::createAppLayout(const CreateAppLayoutRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAppLayoutWithOptions(request, runtime);
}

/**
 * @summary Creates an application recording template.
 *
 * @description ### QPS limit
 * The queries per second (QPS) limit for a single user is 10. If the limit is exceeded, API calls are throttled, which may affect your services. Call this API operation at a reasonable rate.
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
    request.setRecordTemplateShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRecordTemplate(), "RecordTemplate", "json"));
  }

  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasRecordTemplateShrink()) {
    query["RecordTemplate"] = request.getRecordTemplateShrink();
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
 * @summary Creates an application recording template.
 *
 * @description ### QPS limit
 * The queries per second (QPS) limit for a single user is 10. If the limit is exceeded, API calls are throttled, which may affect your services. Call this API operation at a reasonable rate.
 *
 * @param request CreateAppRecordTemplateRequest
 * @return CreateAppRecordTemplateResponse
 */
CreateAppRecordTemplateResponse Client::createAppRecordTemplate(const CreateAppRecordTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAppRecordTemplateWithOptions(request, runtime);
}

/**
 * @summary Creates a stream forwarding template for an RTC 3.0 application.
 *
 * @description ### Usage notes
 * This operation creates a stream forwarding template for an RTC 3.0 application.
 * ### QPS limit
 * The QPS limit for a single user is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your services. Make API calls at a reasonable rate.
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
    request.setStreamingOutTemplateShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getStreamingOutTemplate(), "StreamingOutTemplate", "json"));
  }

  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasStreamingOutTemplateShrink()) {
    query["StreamingOutTemplate"] = request.getStreamingOutTemplateShrink();
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
 * @summary Creates a stream forwarding template for an RTC 3.0 application.
 *
 * @description ### Usage notes
 * This operation creates a stream forwarding template for an RTC 3.0 application.
 * ### QPS limit
 * The QPS limit for a single user is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your services. Make API calls at a reasonable rate.
 *
 * @param request CreateAppStreamingOutTemplateRequest
 * @return CreateAppStreamingOutTemplateResponse
 */
CreateAppStreamingOutTemplateResponse Client::createAppStreamingOutTemplate(const CreateAppStreamingOutTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAppStreamingOutTemplateWithOptions(request, runtime);
}

/**
 * @summary Creates an application stream mixing template.
 *
 * @description ### QPS limits
 * The QPS limit for a single user is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your services. Call this operation as needed.
 *
 * @param tmpReq CreateAppViewTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAppViewTemplateResponse
 */
CreateAppViewTemplateResponse Client::createAppViewTemplateWithOptions(const CreateAppViewTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateAppViewTemplateShrinkRequest request = CreateAppViewTemplateShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTemplate()) {
    request.setTemplateShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTemplate(), "Template", "json"));
  }

  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasTemplateShrink()) {
    query["Template"] = request.getTemplateShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAppViewTemplate"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAppViewTemplateResponse>();
}

/**
 * @summary Creates an application stream mixing template.
 *
 * @description ### QPS limits
 * The QPS limit for a single user is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your services. Call this operation as needed.
 *
 * @param request CreateAppViewTemplateRequest
 * @return CreateAppViewTemplateResponse
 */
CreateAppViewTemplateResponse Client::createAppViewTemplate(const CreateAppViewTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAppViewTemplateWithOptions(request, runtime);
}

/**
 * @summary Calls CreateAutoLiveStreamRule to create an automatic single-stream relay rule.
 *
 * @description # Usage notes
 * This operation is used to create a relay rule.
 * # QPS limit
 * The per-user QPS limit of this operation is 1,000 calls per minute. If the limit is exceeded, API calls will be throttled, which may affect your business. Call the operation properly. For more information, see [QPS limits](https://help.aliyun.com/document_detail/341645.html).
 *
 * @param request CreateAutoLiveStreamRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAutoLiveStreamRuleResponse
 */
CreateAutoLiveStreamRuleResponse Client::createAutoLiveStreamRuleWithOptions(const CreateAutoLiveStreamRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasCallBack()) {
    query["CallBack"] = request.getCallBack();
  }

  if (!!request.hasChannelIdPrefixes()) {
    query["ChannelIdPrefixes"] = request.getChannelIdPrefixes();
  }

  if (!!request.hasChannelIds()) {
    query["ChannelIds"] = request.getChannelIds();
  }

  if (!!request.hasMediaEncode()) {
    query["MediaEncode"] = request.getMediaEncode();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPlayDomain()) {
    query["PlayDomain"] = request.getPlayDomain();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.getRuleName();
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
 * @summary Calls CreateAutoLiveStreamRule to create an automatic single-stream relay rule.
 *
 * @description # Usage notes
 * This operation is used to create a relay rule.
 * # QPS limit
 * The per-user QPS limit of this operation is 1,000 calls per minute. If the limit is exceeded, API calls will be throttled, which may affect your business. Call the operation properly. For more information, see [QPS limits](https://help.aliyun.com/document_detail/341645.html).
 *
 * @param request CreateAutoLiveStreamRuleRequest
 * @return CreateAutoLiveStreamRuleResponse
 */
CreateAutoLiveStreamRuleResponse Client::createAutoLiveStreamRule(const CreateAutoLiveStreamRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAutoLiveStreamRuleWithOptions(request, runtime);
}

/**
 * @summary Creates a hotword table for meeting minutes.
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
    request.setPhraseShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPhrase(), "Phrase", "json"));
  }

  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasPhraseShrink()) {
    query["Phrase"] = request.getPhraseShrink();
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
 * @summary Creates a hotword table for meeting minutes.
 *
 * @param request CreateCloudNotePhrasesRequest
 * @return CreateCloudNotePhrasesResponse
 */
CreateCloudNotePhrasesResponse Client::createCloudNotePhrases(const CreateCloudNotePhrasesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCloudNotePhrasesWithOptions(request, runtime);
}

/**
 * @summary Calls CreateEventSubscribe to create a callback for subscribing to room messages.
 *
 * @description # Usage notes
 * This operation is used to create a callback for subscribing to room messages. For example, when you create a callback, you can configure parameters such as the callback URL and event type.
 * # QPS limit
 * The per-user QPS limit of this operation is 1,000 calls per minute. If the limit is exceeded, API calls are throttled, which may affect your business. Make sure that you call this operation at a reasonable frequency. For more information, see [QPS limits](https://help.aliyun.com/document_detail/341645.html).
 *
 * @param request CreateEventSubscribeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateEventSubscribeResponse
 */
CreateEventSubscribeResponse Client::createEventSubscribeWithOptions(const CreateEventSubscribeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasCallbackUrl()) {
    query["CallbackUrl"] = request.getCallbackUrl();
  }

  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.getChannelId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasEvents()) {
    query["Events"] = request.getEvents();
  }

  if (!!request.hasNeedCallbackAuth()) {
    query["NeedCallbackAuth"] = request.getNeedCallbackAuth();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRole()) {
    query["Role"] = request.getRole();
  }

  if (!!request.hasUsers()) {
    query["Users"] = request.getUsers();
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
 * @summary Calls CreateEventSubscribe to create a callback for subscribing to room messages.
 *
 * @description # Usage notes
 * This operation is used to create a callback for subscribing to room messages. For example, when you create a callback, you can configure parameters such as the callback URL and event type.
 * # QPS limit
 * The per-user QPS limit of this operation is 1,000 calls per minute. If the limit is exceeded, API calls are throttled, which may affect your business. Make sure that you call this operation at a reasonable frequency. For more information, see [QPS limits](https://help.aliyun.com/document_detail/341645.html).
 *
 * @param request CreateEventSubscribeRequest
 * @return CreateEventSubscribeResponse
 */
CreateEventSubscribeResponse Client::createEventSubscribe(const CreateEventSubscribeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createEventSubscribeWithOptions(request, runtime);
}

/**
 * @summary Creates a bypass live streaming layout.
 *
 * @description # Usage notes
 * This operation creates a bypass live streaming layout. For example, you can configure parameters such as the number of audio mixes and the main pane.
 * # QPS limit
 * The QPS limit for a single user is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your services. Make API calls at a reasonable frequency. For more information, see [QPS limits](https://help.aliyun.com/document_detail/341645.html).
 *
 * @param request CreateMPULayoutRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateMPULayoutResponse
 */
CreateMPULayoutResponse Client::createMPULayoutWithOptions(const CreateMPULayoutRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasAudioMixCount()) {
    query["AudioMixCount"] = request.getAudioMixCount();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPanes()) {
    query["Panes"] = request.getPanes();
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
 * @summary Creates a bypass live streaming layout.
 *
 * @description # Usage notes
 * This operation creates a bypass live streaming layout. For example, you can configure parameters such as the number of audio mixes and the main pane.
 * # QPS limit
 * The QPS limit for a single user is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your services. Make API calls at a reasonable frequency. For more information, see [QPS limits](https://help.aliyun.com/document_detail/341645.html).
 *
 * @param request CreateMPULayoutRequest
 * @return CreateMPULayoutResponse
 */
CreateMPULayoutResponse Client::createMPULayout(const CreateMPULayoutRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createMPULayoutWithOptions(request, runtime);
}

/**
 * @summary Deletes an application agent template.
 *
 * @description ### QPS limits
 * The QPS limit per user for this API operation is 10 queries per second. If the limit is exceeded, API calls are throttled, which may affect your services. Call this API operation at a reasonable frequency.
 *
 * @param request DeleteAppAgentTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAppAgentTemplateResponse
 */
DeleteAppAgentTemplateResponse Client::deleteAppAgentTemplateWithOptions(const DeleteAppAgentTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
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
 * @summary Deletes an application agent template.
 *
 * @description ### QPS limits
 * The QPS limit per user for this API operation is 10 queries per second. If the limit is exceeded, API calls are throttled, which may affect your services. Call this API operation at a reasonable frequency.
 *
 * @param request DeleteAppAgentTemplateRequest
 * @return DeleteAppAgentTemplateResponse
 */
DeleteAppAgentTemplateResponse Client::deleteAppAgentTemplate(const DeleteAppAgentTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAppAgentTemplateWithOptions(request, runtime);
}

/**
 * @summary Deletes a custom layout for an application.
 *
 * @description ### QPS limit
 * The queries per second (QPS) limit per user for this API operation is 10. If the limit is exceeded, API calls are throttled, which may affect your services. Call this operation at a reasonable rate.
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
    request.setLayoutShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getLayout(), "Layout", "json"));
  }

  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasLayoutShrink()) {
    query["Layout"] = request.getLayoutShrink();
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
 * @summary Deletes a custom layout for an application.
 *
 * @description ### QPS limit
 * The queries per second (QPS) limit per user for this API operation is 10. If the limit is exceeded, API calls are throttled, which may affect your services. Call this operation at a reasonable rate.
 *
 * @param request DeleteAppLayoutRequest
 * @return DeleteAppLayoutResponse
 */
DeleteAppLayoutResponse Client::deleteAppLayout(const DeleteAppLayoutRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAppLayoutWithOptions(request, runtime);
}

/**
 * @summary Deletes an application recording template.
 *
 * @description ### QPS limits
 * The queries per second (QPS) limit for a single user is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your services. Call this operation at a reasonable frequency.
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
    request.setTemplateShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTemplate(), "Template", "json"));
  }

  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasTemplateShrink()) {
    query["Template"] = request.getTemplateShrink();
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
 * @summary Deletes an application recording template.
 *
 * @description ### QPS limits
 * The queries per second (QPS) limit for a single user is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your services. Call this operation at a reasonable frequency.
 *
 * @param request DeleteAppRecordTemplateRequest
 * @return DeleteAppRecordTemplateResponse
 */
DeleteAppRecordTemplateResponse Client::deleteAppRecordTemplate(const DeleteAppRecordTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAppRecordTemplateWithOptions(request, runtime);
}

/**
 * @summary Deletes a stream ingest template for an RTC 3.0 application.
 *
 * @description ### Usage notes
 * This operation deletes a stream ingest template for an RTC 3.0 application.
 * ### QPS limit
 * The QPS limit for a single user is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your services. Call this operation at a reasonable frequency.
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
    request.setStreamingOutTemplateShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getStreamingOutTemplate(), "StreamingOutTemplate", "json"));
  }

  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasStreamingOutTemplateShrink()) {
    query["StreamingOutTemplate"] = request.getStreamingOutTemplateShrink();
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
 * @summary Deletes a stream ingest template for an RTC 3.0 application.
 *
 * @description ### Usage notes
 * This operation deletes a stream ingest template for an RTC 3.0 application.
 * ### QPS limit
 * The QPS limit for a single user is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your services. Call this operation at a reasonable frequency.
 *
 * @param request DeleteAppStreamingOutTemplateRequest
 * @return DeleteAppStreamingOutTemplateResponse
 */
DeleteAppStreamingOutTemplateResponse Client::deleteAppStreamingOutTemplate(const DeleteAppStreamingOutTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAppStreamingOutTemplateWithOptions(request, runtime);
}

/**
 * @summary Deletes an application\\"s composite stream template.
 *
 * @description ### QPS limit
 * The queries per second (QPS) limit for this API is 10 calls per second for each user. If you exceed this limit, rate limiting is triggered. This may affect your business. Call this API at a reasonable rate.
 *
 * @param tmpReq DeleteAppViewTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAppViewTemplateResponse
 */
DeleteAppViewTemplateResponse Client::deleteAppViewTemplateWithOptions(const DeleteAppViewTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DeleteAppViewTemplateShrinkRequest request = DeleteAppViewTemplateShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTemplate()) {
    request.setTemplateShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTemplate(), "Template", "json"));
  }

  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasTemplateShrink()) {
    query["Template"] = request.getTemplateShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAppViewTemplate"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAppViewTemplateResponse>();
}

/**
 * @summary Deletes an application\\"s composite stream template.
 *
 * @description ### QPS limit
 * The queries per second (QPS) limit for this API is 10 calls per second for each user. If you exceed this limit, rate limiting is triggered. This may affect your business. Call this API at a reasonable rate.
 *
 * @param request DeleteAppViewTemplateRequest
 * @return DeleteAppViewTemplateResponse
 */
DeleteAppViewTemplateResponse Client::deleteAppViewTemplate(const DeleteAppViewTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAppViewTemplateWithOptions(request, runtime);
}

/**
 * @summary Deletes an automatic bypass single-stream relay rule.
 *
 * @description # Usage notes
 * Before you call this operation, you must call [CreateAutoLiveStreamRule](https://help.aliyun.com/document_detail/353179.html) to create a bypass rule.
 * # QPS limits
 * The QPS limit for a single user is 1,000 calls per minute. If the limit is exceeded, API calls are throttled, which may affect your business. Make API calls at a reasonable frequency. For more information, see [QPS limits](https://help.aliyun.com/document_detail/341645.html).
 *
 * @param request DeleteAutoLiveStreamRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAutoLiveStreamRuleResponse
 */
DeleteAutoLiveStreamRuleResponse Client::deleteAutoLiveStreamRuleWithOptions(const DeleteAutoLiveStreamRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.getRuleId();
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
 * @summary Deletes an automatic bypass single-stream relay rule.
 *
 * @description # Usage notes
 * Before you call this operation, you must call [CreateAutoLiveStreamRule](https://help.aliyun.com/document_detail/353179.html) to create a bypass rule.
 * # QPS limits
 * The QPS limit for a single user is 1,000 calls per minute. If the limit is exceeded, API calls are throttled, which may affect your business. Make API calls at a reasonable frequency. For more information, see [QPS limits](https://help.aliyun.com/document_detail/341645.html).
 *
 * @param request DeleteAutoLiveStreamRuleRequest
 * @return DeleteAutoLiveStreamRuleResponse
 */
DeleteAutoLiveStreamRuleResponse Client::deleteAutoLiveStreamRule(const DeleteAutoLiveStreamRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAutoLiveStreamRuleWithOptions(request, runtime);
}

/**
 * @summary Deletes a channel.
 *
 * @description # Usage notes
 * This operation deletes a channel.
 * # QPS limit
 * This operation has no QPS limit per user. Call this operation as needed. For more information, see [QPS limits](https://help.aliyun.com/document_detail/341645.html).
 *
 * @param request DeleteChannelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteChannelResponse
 */
DeleteChannelResponse Client::deleteChannelWithOptions(const DeleteChannelRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.getChannelId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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
 * @summary Deletes a channel.
 *
 * @description # Usage notes
 * This operation deletes a channel.
 * # QPS limit
 * This operation has no QPS limit per user. Call this operation as needed. For more information, see [QPS limits](https://help.aliyun.com/document_detail/341645.html).
 *
 * @param request DeleteChannelRequest
 * @return DeleteChannelResponse
 */
DeleteChannelResponse Client::deleteChannel(const DeleteChannelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteChannelWithOptions(request, runtime);
}

/**
 * @summary Deletes a hot word table.
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
    request.setPhraseShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPhrase(), "Phrase", "json"));
  }

  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasPhraseShrink()) {
    query["Phrase"] = request.getPhraseShrink();
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
 * @summary Deletes a hot word table.
 *
 * @param request DeleteCloudNotePhrasesRequest
 * @return DeleteCloudNotePhrasesResponse
 */
DeleteCloudNotePhrasesResponse Client::deleteCloudNotePhrases(const DeleteCloudNotePhrasesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCloudNotePhrasesWithOptions(request, runtime);
}

/**
 * @summary Deletes a callback for subscribing to room messages by calling DeleteEventSubscribe.
 *
 * @description # Usage notes
 * Before you call this operation, you must call [CreateEventSubscribe](https://help.aliyun.com/document_detail/274447.html) to create a callback for subscribing to room messages.
 * # QPS limits
 * The QPS limit of this operation is 1,000 calls per minute per user. If the limit is exceeded, API calls are throttled, which may affect your business. We recommend that you call this operation at a reasonable rate. For more information, see [QPS limits](https://help.aliyun.com/document_detail/341645.html).
 *
 * @param request DeleteEventSubscribeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteEventSubscribeResponse
 */
DeleteEventSubscribeResponse Client::deleteEventSubscribeWithOptions(const DeleteEventSubscribeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasSubscribeId()) {
    query["SubscribeId"] = request.getSubscribeId();
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
 * @summary Deletes a callback for subscribing to room messages by calling DeleteEventSubscribe.
 *
 * @description # Usage notes
 * Before you call this operation, you must call [CreateEventSubscribe](https://help.aliyun.com/document_detail/274447.html) to create a callback for subscribing to room messages.
 * # QPS limits
 * The QPS limit of this operation is 1,000 calls per minute per user. If the limit is exceeded, API calls are throttled, which may affect your business. We recommend that you call this operation at a reasonable rate. For more information, see [QPS limits](https://help.aliyun.com/document_detail/341645.html).
 *
 * @param request DeleteEventSubscribeRequest
 * @return DeleteEventSubscribeResponse
 */
DeleteEventSubscribeResponse Client::deleteEventSubscribe(const DeleteEventSubscribeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteEventSubscribeWithOptions(request, runtime);
}

/**
 * @summary Deletes a bypass live streaming layout.
 *
 * @description # Usage notes
 * Before you call this operation, you must call [CreateMPULayout](https://help.aliyun.com/document_detail/162192.html) to create a bypass live streaming layout.
 * # QPS limits
 * The per-user QPS limit for this operation is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your services. Make API calls at a reasonable rate. For more information, see [QPS limits](https://help.aliyun.com/document_detail/341645.html).
 *
 * @param request DeleteMPULayoutRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteMPULayoutResponse
 */
DeleteMPULayoutResponse Client::deleteMPULayoutWithOptions(const DeleteMPULayoutRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasLayoutId()) {
    query["LayoutId"] = request.getLayoutId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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
 * @summary Deletes a bypass live streaming layout.
 *
 * @description # Usage notes
 * Before you call this operation, you must call [CreateMPULayout](https://help.aliyun.com/document_detail/162192.html) to create a bypass live streaming layout.
 * # QPS limits
 * The per-user QPS limit for this operation is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your services. Make API calls at a reasonable rate. For more information, see [QPS limits](https://help.aliyun.com/document_detail/341645.html).
 *
 * @param request DeleteMPULayoutRequest
 * @return DeleteMPULayoutResponse
 */
DeleteMPULayoutResponse Client::deleteMPULayout(const DeleteMPULayoutRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteMPULayoutWithOptions(request, runtime);
}

/**
 * @summary Deletes a recording configuration template.
 *
 * @description # Usage notes
 * Before you call this operation, you must call [AddRecordTemplate](https://help.aliyun.com/document_detail/193625.html) to add a recording configuration template.
 * # QPS limits
 * The QPS limit for a single user is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation as needed. For more information, see [QPS limits](https://help.aliyun.com/document_detail/341645.html).
 *
 * @param request DeleteRecordTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteRecordTemplateResponse
 */
DeleteRecordTemplateResponse Client::deleteRecordTemplateWithOptions(const DeleteRecordTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
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
 * @summary Deletes a recording configuration template.
 *
 * @description # Usage notes
 * Before you call this operation, you must call [AddRecordTemplate](https://help.aliyun.com/document_detail/193625.html) to add a recording configuration template.
 * # QPS limits
 * The QPS limit for a single user is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation as needed. For more information, see [QPS limits](https://help.aliyun.com/document_detail/341645.html).
 *
 * @param request DeleteRecordTemplateRequest
 * @return DeleteRecordTemplateResponse
 */
DeleteRecordTemplateResponse Client::deleteRecordTemplate(const DeleteRecordTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteRecordTemplateWithOptions(request, runtime);
}

/**
 * @summary Lists the event callbacks supported by the system.
 *
 * @description ### QPS limit
 * This API supports a maximum of 10 calls per second per user. If you exceed this limit, rate limiting is applied to your API calls, which may affect your business operations. Use this API judiciously.
 *
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
 * @summary Lists the event callbacks supported by the system.
 *
 * @description ### QPS limit
 * This API supports a maximum of 10 calls per second per user. If you exceed this limit, rate limiting is applied to your API calls, which may affect your business operations. Use this API judiciously.
 *
 * @return DescribeAllCallbackResponse
 */
DescribeAllCallbackResponse Client::describeAllCallback() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAllCallbackWithOptions(runtime);
}

/**
 * @summary Query the status of the application agent feature.
 *
 * @description ### QPS limit
 * This API operation supports a maximum of 10 queries per second per user. If you exceed this limit, rate limiting is triggered, which may affect your application. Call this API only as needed.
 *
 * @param request DescribeAppAgentFunctionStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAppAgentFunctionStatusResponse
 */
DescribeAppAgentFunctionStatusResponse Client::describeAppAgentFunctionStatusWithOptions(const DescribeAppAgentFunctionStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
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
 * @summary Query the status of the application agent feature.
 *
 * @description ### QPS limit
 * This API operation supports a maximum of 10 queries per second per user. If you exceed this limit, rate limiting is triggered, which may affect your application. Call this API only as needed.
 *
 * @param request DescribeAppAgentFunctionStatusRequest
 * @return DescribeAppAgentFunctionStatusResponse
 */
DescribeAppAgentFunctionStatusResponse Client::describeAppAgentFunctionStatus(const DescribeAppAgentFunctionStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAppAgentFunctionStatusWithOptions(request, runtime);
}

/**
 * @summary Lists agent templates.
 *
 * @description ### Rate limits
 * The rate limit for this API operation is 10 queries per second (QPS) per user. If you exceed the limit, API calls are throttled, which may affect your business. Call this operation at a reasonable frequency.
 *
 * @param request DescribeAppAgentTemplatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAppAgentTemplatesResponse
 */
DescribeAppAgentTemplatesResponse Client::describeAppAgentTemplatesWithOptions(const DescribeAppAgentTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
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
 * @summary Lists agent templates.
 *
 * @description ### Rate limits
 * The rate limit for this API operation is 10 queries per second (QPS) per user. If you exceed the limit, API calls are throttled, which may affect your business. Call this operation at a reasonable frequency.
 *
 * @param request DescribeAppAgentTemplatesRequest
 * @return DescribeAppAgentTemplatesResponse
 */
DescribeAppAgentTemplatesResponse Client::describeAppAgentTemplates(const DescribeAppAgentTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAppAgentTemplatesWithOptions(request, runtime);
}

/**
 * @summary Queries the callback switch of an application.
 *
 * @description ### QPS limits
 * The QPS limit for a single user is 10 queries per second. If the limit is exceeded, API calls are throttled, which may affect your services. Call the API operation at a reasonable rate.
 *
 * @param request DescribeAppCallStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAppCallStatusResponse
 */
DescribeAppCallStatusResponse Client::describeAppCallStatusWithOptions(const DescribeAppCallStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
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
 * @summary Queries the callback switch of an application.
 *
 * @description ### QPS limits
 * The QPS limit for a single user is 10 queries per second. If the limit is exceeded, API calls are throttled, which may affect your services. Call the API operation at a reasonable rate.
 *
 * @param request DescribeAppCallStatusRequest
 * @return DescribeAppCallStatusResponse
 */
DescribeAppCallStatusResponse Client::describeAppCallStatus(const DescribeAppCallStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAppCallStatusWithOptions(request, runtime);
}

/**
 * @summary Obtain the application callback key
 *
 * @description ### Queries per second (QPS) limit  
 * The queries per second (QPS) limit for this API is 10 requests per second per user. If the limit is exceeded, API calls will be subject to rate limiting, which may impact your business. Please invoke the API appropriately.
 *
 * @param request DescribeAppCallbackSecretKeyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAppCallbackSecretKeyResponse
 */
DescribeAppCallbackSecretKeyResponse Client::describeAppCallbackSecretKeyWithOptions(const DescribeAppCallbackSecretKeyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
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
 * @summary Obtain the application callback key
 *
 * @description ### Queries per second (QPS) limit  
 * The queries per second (QPS) limit for this API is 10 requests per second per user. If the limit is exceeded, API calls will be subject to rate limiting, which may impact your business. Please invoke the API appropriately.
 *
 * @param request DescribeAppCallbackSecretKeyRequest
 * @return DescribeAppCallbackSecretKeyResponse
 */
DescribeAppCallbackSecretKeyResponse Client::describeAppCallbackSecretKey(const DescribeAppCallbackSecretKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAppCallbackSecretKeyWithOptions(request, runtime);
}

/**
 * @summary Invoke DescribeAppKey to query the AppKey of a specified application.
 *
 * @description ### How-To  
 * Before invoking this API, you must have already created an application in the RTC console.  
 * ### queries per second (QPS) limit  
 * The QPS limit for this API is 200 requests per minute per user. If the limit is exceeded, API calls will be subject to Rate Limiting, which may Impact your business. Please invoke the API appropriately.
 *
 * @param request DescribeAppKeyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAppKeyResponse
 */
DescribeAppKeyResponse Client::describeAppKeyWithOptions(const DescribeAppKeyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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
 * @summary Invoke DescribeAppKey to query the AppKey of a specified application.
 *
 * @description ### How-To  
 * Before invoking this API, you must have already created an application in the RTC console.  
 * ### queries per second (QPS) limit  
 * The QPS limit for this API is 200 requests per minute per user. If the limit is exceeded, API calls will be subject to Rate Limiting, which may Impact your business. Please invoke the API appropriately.
 *
 * @param request DescribeAppKeyRequest
 * @return DescribeAppKeyResponse
 */
DescribeAppKeyResponse Client::describeAppKey(const DescribeAppKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAppKeyWithOptions(request, runtime);
}

/**
 * @summary Query custom application layouts.
 *
 * @description ### QPS limit
 * This API supports up to 10 queries per second (QPS) per user. Exceeding this limit triggers rate limiting, which may affect your business operations. Use the API judiciously.
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
    request.setConditionShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCondition(), "Condition", "json"));
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
 * @summary Query custom application layouts.
 *
 * @description ### QPS limit
 * This API supports up to 10 queries per second (QPS) per user. Exceeding this limit triggers rate limiting, which may affect your business operations. Use the API judiciously.
 *
 * @param request DescribeAppLayoutsRequest
 * @return DescribeAppLayoutsResponse
 */
DescribeAppLayoutsResponse Client::describeAppLayouts(const DescribeAppLayoutsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAppLayoutsWithOptions(request, runtime);
}

/**
 * @summary View the application bypass switch.
 *
 * @description ### QPS limit
 * The queries per second (QPS) limit for this API is 10 for each user. API calls that exceed this limit are subject to rate limiting, which may impact your business. We recommend that you call this API at a reasonable rate.
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
 * @summary View the application bypass switch.
 *
 * @description ### QPS limit
 * The queries per second (QPS) limit for this API is 10 for each user. API calls that exceed this limit are subject to rate limiting, which may impact your business. We recommend that you call this API at a reasonable rate.
 *
 * @param request DescribeAppLiveStreamStatusRequest
 * @return DescribeAppLiveStreamStatusResponse
 */
DescribeAppLiveStreamStatusResponse Client::describeAppLiveStreamStatus(const DescribeAppLiveStreamStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAppLiveStreamStatusWithOptions(request, runtime);
}

/**
 * @summary Queries the recording status of an application.
 *
 * @description ### QPS limit
 * The QPS limit for this operation is 10 calls per second per user. Exceeding this limit triggers rate limiting, which may affect your business. Call this operation only as needed.
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
 * @summary Queries the recording status of an application.
 *
 * @description ### QPS limit
 * The QPS limit for this operation is 10 calls per second per user. Exceeding this limit triggers rate limiting, which may affect your business. Call this operation only as needed.
 *
 * @param request DescribeAppRecordStatusRequest
 * @return DescribeAppRecordStatusResponse
 */
DescribeAppRecordStatusResponse Client::describeAppRecordStatus(const DescribeAppRecordStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAppRecordStatusWithOptions(request, runtime);
}

/**
 * @summary Queries the list of application recording templates.
 *
 * @description ### QPS limit
 * The QPS limit for a single user calling this API operation is 10 queries per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this API operation at a reasonable frequency.
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
    request.setConditionShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCondition(), "Condition", "json"));
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
 * @summary Queries the list of application recording templates.
 *
 * @description ### QPS limit
 * The QPS limit for a single user calling this API operation is 10 queries per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this API operation at a reasonable frequency.
 *
 * @param request DescribeAppRecordTemplatesRequest
 * @return DescribeAppRecordTemplatesResponse
 */
DescribeAppRecordTemplatesResponse Client::describeAppRecordTemplates(const DescribeAppRecordTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAppRecordTemplatesWithOptions(request, runtime);
}

/**
 * @summary Lists recording files.
 *
 * @description ### QPS limit
 * The QPS limit for this API is 10 requests per second per user. Exceeding this limit triggers rate limiting, which may affect your service. Call this API only when necessary.
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
    request.setTaskIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTaskIds(), "TaskIds", "json"));
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
 * @summary Lists recording files.
 *
 * @description ### QPS limit
 * The QPS limit for this API is 10 requests per second per user. Exceeding this limit triggers rate limiting, which may affect your service. Call this API only when necessary.
 *
 * @param request DescribeAppRecordingFilesRequest
 * @return DescribeAppRecordingFilesResponse
 */
DescribeAppRecordingFilesResponse Client::describeAppRecordingFiles(const DescribeAppRecordingFilesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAppRecordingFilesWithOptions(request, runtime);
}

/**
 * @summary Query the list of stream ingest templates under an RTC 3.0 application.
 *
 * @description ### How-To  
 * This API is used to view the list of stream ingest templates for an RTC 3.0 application.  
 * ### Queries per second (QPS) limit  
 * The QPS limit for this API is 10 queries per second per user. If this limit is exceeded, API calls will be rate-limited, which may impact your business. Please invoke the API appropriately.
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
    request.setConditionShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCondition(), "Condition", "json"));
  }

  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasConditionShrink()) {
    query["Condition"] = request.getConditionShrink();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
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
 * @summary Query the list of stream ingest templates under an RTC 3.0 application.
 *
 * @description ### How-To  
 * This API is used to view the list of stream ingest templates for an RTC 3.0 application.  
 * ### Queries per second (QPS) limit  
 * The QPS limit for this API is 10 queries per second per user. If this limit is exceeded, API calls will be rate-limited, which may impact your business. Please invoke the API appropriately.
 *
 * @param request DescribeAppStreamingOutTemplatesRequest
 * @return DescribeAppStreamingOutTemplatesResponse
 */
DescribeAppStreamingOutTemplatesResponse Client::describeAppStreamingOutTemplates(const DescribeAppStreamingOutTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAppStreamingOutTemplatesWithOptions(request, runtime);
}

/**
 * @summary View the stream merging switch
 *
 * @description ### QPS limits
 * This API has a QPS limit of 10 queries per second (QPS) per user. If you exceed this limit, rate limiting is triggered, which can affect your business operations. Call the API at a reasonable rate.
 *
 * @param request DescribeAppViewStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAppViewStatusResponse
 */
DescribeAppViewStatusResponse Client::describeAppViewStatusWithOptions(const DescribeAppViewStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAppViewStatus"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAppViewStatusResponse>();
}

/**
 * @summary View the stream merging switch
 *
 * @description ### QPS limits
 * This API has a QPS limit of 10 queries per second (QPS) per user. If you exceed this limit, rate limiting is triggered, which can affect your business operations. Call the API at a reasonable rate.
 *
 * @param request DescribeAppViewStatusRequest
 * @return DescribeAppViewStatusResponse
 */
DescribeAppViewStatusResponse Client::describeAppViewStatus(const DescribeAppViewStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAppViewStatusWithOptions(request, runtime);
}

/**
 * @summary Lists application compositing templates.
 *
 * @description ### QPS limit
 * The per-user QPS limit for this operation is 10 calls per second. Exceeding this limit triggers rate limiting, which may affect your business. You should call this operation only as needed.
 *
 * @param tmpReq DescribeAppViewTemplatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAppViewTemplatesResponse
 */
DescribeAppViewTemplatesResponse Client::describeAppViewTemplatesWithOptions(const DescribeAppViewTemplatesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DescribeAppViewTemplatesShrinkRequest request = DescribeAppViewTemplatesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCondition()) {
    request.setConditionShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCondition(), "Condition", "json"));
  }

  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasConditionShrink()) {
    query["Condition"] = request.getConditionShrink();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAppViewTemplates"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAppViewTemplatesResponse>();
}

/**
 * @summary Lists application compositing templates.
 *
 * @description ### QPS limit
 * The per-user QPS limit for this operation is 10 calls per second. Exceeding this limit triggers rate limiting, which may affect your business. You should call this operation only as needed.
 *
 * @param request DescribeAppViewTemplatesRequest
 * @return DescribeAppViewTemplatesResponse
 */
DescribeAppViewTemplatesResponse Client::describeAppViewTemplates(const DescribeAppViewTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAppViewTemplatesWithOptions(request, runtime);
}

/**
 * @summary Queries the list of applications.
 *
 * @description ### Usage notes
 * This operation queries the list of applications. For example, you can obtain data such as the application ID, application name, and application type from the query results.
 * ### QPS limits
 * The QPS limit for a single user is 200 calls per minute. If this limit is exceeded, API calls are throttled, which may affect your services. Call this operation at a reasonable rate.
 *
 * @param request DescribeAppsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAppsResponse
 */
DescribeAppsResponse Client::describeAppsWithOptions(const DescribeAppsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasAppVersion()) {
    query["AppVersion"] = request.getAppVersion();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.getOrder();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
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
 * @summary Queries the list of applications.
 *
 * @description ### Usage notes
 * This operation queries the list of applications. For example, you can obtain data such as the application ID, application name, and application type from the query results.
 * ### QPS limits
 * The QPS limit for a single user is 200 calls per minute. If this limit is exceeded, API calls are throttled, which may affect your services. Call this operation at a reasonable rate.
 *
 * @param request DescribeAppsRequest
 * @return DescribeAppsResponse
 */
DescribeAppsResponse Client::describeApps(const DescribeAppsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAppsWithOptions(request, runtime);
}

/**
 * @summary Queries the automatic bypass single-stream relay rules.
 *
 * @description # Usage notes
 * Before you call this operation, you must call [CreateAutoLiveStreamRule](https://help.aliyun.com/document_detail/353179.html) to create a bypass rule.
 * # QPS limit
 * The QPS limit for a single user is 1,000 calls per minute. If the limit is exceeded, API calls are throttled, which may affect your business. Make API calls at a reasonable frequency. For more information, see [QPS limits](https://help.aliyun.com/document_detail/341645.html).
 *
 * @param request DescribeAutoLiveStreamRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAutoLiveStreamRuleResponse
 */
DescribeAutoLiveStreamRuleResponse Client::describeAutoLiveStreamRuleWithOptions(const DescribeAutoLiveStreamRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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
 * @summary Queries the automatic bypass single-stream relay rules.
 *
 * @description # Usage notes
 * Before you call this operation, you must call [CreateAutoLiveStreamRule](https://help.aliyun.com/document_detail/353179.html) to create a bypass rule.
 * # QPS limit
 * The QPS limit for a single user is 1,000 calls per minute. If the limit is exceeded, API calls are throttled, which may affect your business. Make API calls at a reasonable frequency. For more information, see [QPS limits](https://help.aliyun.com/document_detail/341645.html).
 *
 * @param request DescribeAutoLiveStreamRuleRequest
 * @return DescribeAutoLiveStreamRuleResponse
 */
DescribeAutoLiveStreamRuleResponse Client::describeAutoLiveStreamRule(const DescribeAutoLiveStreamRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAutoLiveStreamRuleWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a single communication session. For example, you can query the communication status and user details.
 *
 * @description ### Usage notes
 * This operation queries the details of a single communication session. For example, you can query the communication status and user details.
 * ### QPS limit
 * The QPS limit per user for this operation is 10 queries per second. If the limit is exceeded, API calls are throttled, which may affect your business. Make API calls at a reasonable frequency.
 *
 * @param request DescribeCallRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCallResponse
 */
DescribeCallResponse Client::describeCallWithOptions(const DescribeCallRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.getChannelId();
  }

  if (!!request.hasCreatedTs()) {
    query["CreatedTs"] = request.getCreatedTs();
  }

  if (!!request.hasDestroyedTs()) {
    query["DestroyedTs"] = request.getDestroyedTs();
  }

  if (!!request.hasExtDataType()) {
    query["ExtDataType"] = request.getExtDataType();
  }

  if (!!request.hasQueryExpInfo()) {
    query["QueryExpInfo"] = request.getQueryExpInfo();
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
 * @summary Queries the details of a single communication session. For example, you can query the communication status and user details.
 *
 * @description ### Usage notes
 * This operation queries the details of a single communication session. For example, you can query the communication status and user details.
 * ### QPS limit
 * The QPS limit per user for this operation is 10 queries per second. If the limit is exceeded, API calls are throttled, which may affect your business. Make API calls at a reasonable frequency.
 *
 * @param request DescribeCallRequest
 * @return DescribeCallResponse
 */
DescribeCallResponse Client::describeCall(const DescribeCallRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCallWithOptions(request, runtime);
}

/**
 * @summary Invoke DescribeCallList to perform a paged query of communication records created within a specified time range.
 *
 * @description ### How-To  
 * This API is used to query communication records created within a specified time range. For example, you can query information such as call duration, status, and user count.  
 * ### Rate Limiting  
 * The queries per second (QPS) limit for this API is 10 calls per second per user. If this limit is exceeded, API calls will be rate-limited, which may impact your business. Please invoke the API appropriately.
 *
 * @param request DescribeCallListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCallListResponse
 */
DescribeCallListResponse Client::describeCallListWithOptions(const DescribeCallListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasCallStatus()) {
    query["CallStatus"] = request.getCallStatus();
  }

  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.getChannelId();
  }

  if (!!request.hasEndTs()) {
    query["EndTs"] = request.getEndTs();
  }

  if (!!request.hasOrderBy()) {
    query["OrderBy"] = request.getOrderBy();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasQueryMode()) {
    query["QueryMode"] = request.getQueryMode();
  }

  if (!!request.hasStartTs()) {
    query["StartTs"] = request.getStartTs();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
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
 * @summary Invoke DescribeCallList to perform a paged query of communication records created within a specified time range.
 *
 * @description ### How-To  
 * This API is used to query communication records created within a specified time range. For example, you can query information such as call duration, status, and user count.  
 * ### Rate Limiting  
 * The queries per second (QPS) limit for this API is 10 calls per second per user. If this limit is exceeded, API calls will be rate-limited, which may impact your business. Please invoke the API appropriately.
 *
 * @param request DescribeCallListRequest
 * @return DescribeCallListResponse
 */
DescribeCallListResponse Client::describeCallList(const DescribeCallListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCallListWithOptions(request, runtime);
}

/**
 * @summary Lists the event callbacks configured for an application.
 *
 * @description ### QPS limit
 * This API supports up to 10 queries per second (QPS) per user. If you exceed this limit, the system applies rate limiting to your API calls, which may affect your business operations. Plan your API calls accordingly.
 *
 * @param request DescribeCallbacksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCallbacksResponse
 */
DescribeCallbacksResponse Client::describeCallbacksWithOptions(const DescribeCallbacksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
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
 * @summary Lists the event callbacks configured for an application.
 *
 * @description ### QPS limit
 * This API supports up to 10 queries per second (QPS) per user. If you exceed this limit, the system applies rate limiting to your API calls, which may affect your business operations. Plan your API calls accordingly.
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
 * @description ### How-To  
 * This API is used to query online channel information.  
 * ### queries per second (QPS) Limit  
 * The QPS limit for this API is 10 queries per second per user. If the limit is exceeded, Rate Limiting will be applied to your API Call, which may Impact your business. Please invoke the API reasonably.
 *
 * @param request DescribeChannelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeChannelResponse
 */
DescribeChannelResponse Client::describeChannelWithOptions(const DescribeChannelRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.getChannelId();
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
 * @description ### How-To  
 * This API is used to query online channel information.  
 * ### queries per second (QPS) Limit  
 * The QPS limit for this API is 10 queries per second per user. If the limit is exceeded, Rate Limiting will be applied to your API Call, which may Impact your business. Please invoke the API reasonably.
 *
 * @param request DescribeChannelRequest
 * @return DescribeChannelResponse
 */
DescribeChannelResponse Client::describeChannel(const DescribeChannelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeChannelWithOptions(request, runtime);
}

/**
 * @summary This API is used to query the user list in a channel.
 *
 * @description ### How-To  
 * This API is used to query the list of users in an online channel.  
 * ### QPS Limit  
 * The queries per second (QPS) limit for this API is 10 requests per second per user. If the limit is exceeded, API calls will be subject to rate limiting, which may impact your business. Invoke this API appropriately.
 *
 * @param request DescribeChannelAllUsersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeChannelAllUsersResponse
 */
DescribeChannelAllUsersResponse Client::describeChannelAllUsersWithOptions(const DescribeChannelAllUsersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.getChannelId();
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
 * @summary This API is used to query the user list in a channel.
 *
 * @description ### How-To  
 * This API is used to query the list of users in an online channel.  
 * ### QPS Limit  
 * The queries per second (QPS) limit for this API is 10 requests per second per user. If the limit is exceeded, API calls will be subject to rate limiting, which may impact your business. Invoke this API appropriately.
 *
 * @param request DescribeChannelAllUsersRequest
 * @return DescribeChannelAllUsersResponse
 */
DescribeChannelAllUsersResponse Client::describeChannelAllUsers(const DescribeChannelAllUsersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeChannelAllUsersWithOptions(request, runtime);
}

/**
 * @summary Retrieves the regional distribution statistics of a channel.
 *
 * @description ### Usage notes
 * This operation retrieves the regional distribution statistics of a channel.
 * ### QPS limit
 * The queries per second (QPS) limit per user is 10. If the limit is exceeded, API calls are throttled, which may affect your services. Plan your API calls accordingly.
 *
 * @param request DescribeChannelAreaDistributionStatDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeChannelAreaDistributionStatDataResponse
 */
DescribeChannelAreaDistributionStatDataResponse Client::describeChannelAreaDistributionStatDataWithOptions(const DescribeChannelAreaDistributionStatDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.getChannelId();
  }

  if (!!request.hasCreatedTs()) {
    query["CreatedTs"] = request.getCreatedTs();
  }

  if (!!request.hasDestroyedTs()) {
    query["DestroyedTs"] = request.getDestroyedTs();
  }

  if (!!request.hasParentArea()) {
    query["ParentArea"] = request.getParentArea();
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
 * @summary Retrieves the regional distribution statistics of a channel.
 *
 * @description ### Usage notes
 * This operation retrieves the regional distribution statistics of a channel.
 * ### QPS limit
 * The queries per second (QPS) limit per user is 10. If the limit is exceeded, API calls are throttled, which may affect your services. Plan your API calls accordingly.
 *
 * @param request DescribeChannelAreaDistributionStatDataRequest
 * @return DescribeChannelAreaDistributionStatDataResponse
 */
DescribeChannelAreaDistributionStatDataResponse Client::describeChannelAreaDistributionStatData(const DescribeChannelAreaDistributionStatDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeChannelAreaDistributionStatDataWithOptions(request, runtime);
}

/**
 * @summary Queries the channel distribution statistics.
 *
 * @description ### Usage notes
 * This operation queries the channel distribution statistics. You can query the statistics by dimension, such as operating system type or SDK version.
 * ### QPS limit
 * The queries per second (QPS) limit for a single user is 10. If the limit is exceeded, API calls are throttled, which may affect your services. Call this operation at a reasonable frequency.
 *
 * @param request DescribeChannelDistributionStatDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeChannelDistributionStatDataResponse
 */
DescribeChannelDistributionStatDataResponse Client::describeChannelDistributionStatDataWithOptions(const DescribeChannelDistributionStatDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.getChannelId();
  }

  if (!!request.hasCreatedTs()) {
    query["CreatedTs"] = request.getCreatedTs();
  }

  if (!!request.hasDestroyedTs()) {
    query["DestroyedTs"] = request.getDestroyedTs();
  }

  if (!!request.hasStatDim()) {
    query["StatDim"] = request.getStatDim();
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
 * @summary Queries the channel distribution statistics.
 *
 * @description ### Usage notes
 * This operation queries the channel distribution statistics. You can query the statistics by dimension, such as operating system type or SDK version.
 * ### QPS limit
 * The queries per second (QPS) limit for a single user is 10. If the limit is exceeded, API calls are throttled, which may affect your services. Call this operation at a reasonable frequency.
 *
 * @param request DescribeChannelDistributionStatDataRequest
 * @return DescribeChannelDistributionStatDataResponse
 */
DescribeChannelDistributionStatDataResponse Client::describeChannelDistributionStatData(const DescribeChannelDistributionStatDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeChannelDistributionStatDataWithOptions(request, runtime);
}

/**
 * @summary This API is used to query channel overview data.
 *
 * @description ### How-To  
 * This API is used to query channel overview data. For example, you can query basic communication information, Trend Indicators, and other information.  
 * ### queries per second (QPS) Limit  
 * The QPS limit for this API is 10 queries per second per User. If the limit is exceeded, Rate Limiting will be applied to API Calls, which may Impact your business. Invoke the API appropriately.
 *
 * @param request DescribeChannelOverallDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeChannelOverallDataResponse
 */
DescribeChannelOverallDataResponse Client::describeChannelOverallDataWithOptions(const DescribeChannelOverallDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.getChannelId();
  }

  if (!!request.hasCreatedTs()) {
    query["CreatedTs"] = request.getCreatedTs();
  }

  if (!!request.hasDestroyedTs()) {
    query["DestroyedTs"] = request.getDestroyedTs();
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
 * @summary This API is used to query channel overview data.
 *
 * @description ### How-To  
 * This API is used to query channel overview data. For example, you can query basic communication information, Trend Indicators, and other information.  
 * ### queries per second (QPS) Limit  
 * The QPS limit for this API is 10 queries per second per User. If the limit is exceeded, Rate Limiting will be applied to API Calls, which may Impact your business. Invoke the API appropriately.
 *
 * @param request DescribeChannelOverallDataRequest
 * @return DescribeChannelOverallDataResponse
 */
DescribeChannelOverallDataResponse Client::describeChannelOverallData(const DescribeChannelOverallDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeChannelOverallDataWithOptions(request, runtime);
}

/**
 * @summary Queries the list of online users in a channel without detailed information.
 *
 * @description # Usage notes
 * This operation queries the list of online users in a channel, excluding detailed user information.
 * # QPS limit
 * The QPS limit for a single user is 1,000 calls per minute. If the limit is exceeded, API calls are throttled, which may affect your business. Make API calls appropriately. For more information, see [QPS limits](https://help.aliyun.com/document_detail/341645.html).
 *
 * @param request DescribeChannelParticipantsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeChannelParticipantsResponse
 */
DescribeChannelParticipantsResponse Client::describeChannelParticipantsWithOptions(const DescribeChannelParticipantsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.getChannelId();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.getOrder();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
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
 * @summary Queries the list of online users in a channel without detailed information.
 *
 * @description # Usage notes
 * This operation queries the list of online users in a channel, excluding detailed user information.
 * # QPS limit
 * The QPS limit for a single user is 1,000 calls per minute. If the limit is exceeded, API calls are throttled, which may affect your business. Make API calls appropriately. For more information, see [QPS limits](https://help.aliyun.com/document_detail/341645.html).
 *
 * @param request DescribeChannelParticipantsRequest
 * @return DescribeChannelParticipantsResponse
 */
DescribeChannelParticipantsResponse Client::describeChannelParticipants(const DescribeChannelParticipantsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeChannelParticipantsWithOptions(request, runtime);
}

/**
 * @summary Retrieves the list of publishing users in a channel in descending order of online duration.
 *
 * @description ### Usage notes
 * This operation retrieves the list of publishing users in a channel in descending order of online duration. For example, you can query information such as the time when a user joined the call and the communication duration from the user list.
 * ### QPS limit
 * The queries per second (QPS) limit for a single user is 10. If the limit is exceeded, API calls are throttled, which may affect your services. Call this operation at a reasonable frequency.
 *
 * @param request DescribeChannelTopPubUserListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeChannelTopPubUserListResponse
 */
DescribeChannelTopPubUserListResponse Client::describeChannelTopPubUserListWithOptions(const DescribeChannelTopPubUserListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.getChannelId();
  }

  if (!!request.hasCreatedTs()) {
    query["CreatedTs"] = request.getCreatedTs();
  }

  if (!!request.hasDestroyedTs()) {
    query["DestroyedTs"] = request.getDestroyedTs();
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
 * @summary Retrieves the list of publishing users in a channel in descending order of online duration.
 *
 * @description ### Usage notes
 * This operation retrieves the list of publishing users in a channel in descending order of online duration. For example, you can query information such as the time when a user joined the call and the communication duration from the user list.
 * ### QPS limit
 * The queries per second (QPS) limit for a single user is 10. If the limit is exceeded, API calls are throttled, which may affect your services. Call this operation at a reasonable frequency.
 *
 * @param request DescribeChannelTopPubUserListRequest
 * @return DescribeChannelTopPubUserListResponse
 */
DescribeChannelTopPubUserListResponse Client::describeChannelTopPubUserList(const DescribeChannelTopPubUserListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeChannelTopPubUserListWithOptions(request, runtime);
}

/**
 * @summary Queries the information of a user in a channel.
 *
 * @description ### Usage notes
 * This operation queries the information of a user in an online channel.
 * ### QPS limit
 * The queries per second (QPS) limit per user is 10. If the limit is exceeded, API calls are throttled, which may affect your services. Call the operation at a reasonable rate.
 *
 * @param request DescribeChannelUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeChannelUserResponse
 */
DescribeChannelUserResponse Client::describeChannelUserWithOptions(const DescribeChannelUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.getChannelId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
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
 * @summary Queries the information of a user in a channel.
 *
 * @description ### Usage notes
 * This operation queries the information of a user in an online channel.
 * ### QPS limit
 * The queries per second (QPS) limit per user is 10. If the limit is exceeded, API calls are throttled, which may affect your services. Call the operation at a reasonable rate.
 *
 * @param request DescribeChannelUserRequest
 * @return DescribeChannelUserResponse
 */
DescribeChannelUserResponse Client::describeChannelUser(const DescribeChannelUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeChannelUserWithOptions(request, runtime);
}

/**
 * @summary Queries the user data in the channel overview.
 *
 * @description ### Usage notes
 * This operation queries the user data in the channel overview. For example, you can query metric data details and overview data.
 * ### QPS limit
 * The QPS limit for a single user is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Make API calls at a reasonable frequency.
 *
 * @param request DescribeChannelUserMetricsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeChannelUserMetricsResponse
 */
DescribeChannelUserMetricsResponse Client::describeChannelUserMetricsWithOptions(const DescribeChannelUserMetricsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.getChannelId();
  }

  if (!!request.hasCreatedTs()) {
    query["CreatedTs"] = request.getCreatedTs();
  }

  if (!!request.hasDestroyedTs()) {
    query["DestroyedTs"] = request.getDestroyedTs();
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
 * @summary Queries the user data in the channel overview.
 *
 * @description ### Usage notes
 * This operation queries the user data in the channel overview. For example, you can query metric data details and overview data.
 * ### QPS limit
 * The QPS limit for a single user is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Make API calls at a reasonable frequency.
 *
 * @param request DescribeChannelUserMetricsRequest
 * @return DescribeChannelUserMetricsResponse
 */
DescribeChannelUserMetricsResponse Client::describeChannelUserMetrics(const DescribeChannelUserMetricsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeChannelUserMetricsWithOptions(request, runtime);
}

/**
 * @summary Queries the list of real-time online users in a channel.
 *
 * @description # Usage notes
 * This operation queries the details of online users in a channel. For example, you can query the total number of users in communication mode and live streaming mode.
 * # QPS limit
 * The queries per second (QPS) limit for a single user is 100 calls per second. If the limit is exceeded, API calls are throttled, which may affect your services. Call the operation at a reasonable frequency. For more information, see [QPS limits](https://help.aliyun.com/document_detail/341645.html).
 *
 * @param request DescribeChannelUsersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeChannelUsersResponse
 */
DescribeChannelUsersResponse Client::describeChannelUsersWithOptions(const DescribeChannelUsersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.getChannelId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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
 * @summary Queries the list of real-time online users in a channel.
 *
 * @description # Usage notes
 * This operation queries the details of online users in a channel. For example, you can query the total number of users in communication mode and live streaming mode.
 * # QPS limit
 * The queries per second (QPS) limit for a single user is 100 calls per second. If the limit is exceeded, API calls are throttled, which may affect your services. Call the operation at a reasonable frequency. For more information, see [QPS limits](https://help.aliyun.com/document_detail/341645.html).
 *
 * @param request DescribeChannelUsersRequest
 * @return DescribeChannelUsersResponse
 */
DescribeChannelUsersResponse Client::describeChannelUsers(const DescribeChannelUsersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeChannelUsersWithOptions(request, runtime);
}

/**
 * @summary Queries all active channels under a single AppId.
 *
 * @description ### Usage notes
 * This operation queries all active channels under a single AppId.
 * ### QPS limit
 * The QPS limit for a single user is 10 queries per second. If the limit is exceeded, API calls are throttled, which may affect your services. Make API calls at a reasonable rate.
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
 * @summary Queries all active channels under a single AppId.
 *
 * @description ### Usage notes
 * This operation queries all active channels under a single AppId.
 * ### QPS limit
 * The QPS limit for a single user is 10 queries per second. If the limit is exceeded, API calls are throttled, which may affect your services. Make API calls at a reasonable rate.
 *
 * @param request DescribeChannelsRequest
 * @return DescribeChannelsResponse
 */
DescribeChannelsResponse Client::describeChannels(const DescribeChannelsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeChannelsWithOptions(request, runtime);
}

/**
 * @summary Queries the hotword lists for meeting minutes.
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
    request.setConditionShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCondition(), "Condition", "json"));
  }

  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasConditionShrink()) {
    query["Condition"] = request.getConditionShrink();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
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
 * @summary Queries the hotword lists for meeting minutes.
 *
 * @param request DescribeCloudNotePhrasesRequest
 * @return DescribeCloudNotePhrasesResponse
 */
DescribeCloudNotePhrasesResponse Client::describeCloudNotePhrases(const DescribeCloudNotePhrasesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCloudNotePhrasesWithOptions(request, runtime);
}

/**
 * @summary Meeting Summary List
 *
 * @description ### How-To  
 * This API is used to query the list of meeting summary job files that have generated summary results.  
 * ### Queries Per Second (QPS) Limit  
 * The QPS limit for this API is 10 queries per second (QPS) per user. If this limit is exceeded, API calls will be subject to Rate Limiting, which may Impact your business. Please invoke the API appropriately.
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
    request.setTaskIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTaskIds(), "TaskIds", "json"));
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
 * @summary Meeting Summary List
 *
 * @description ### How-To  
 * This API is used to query the list of meeting summary job files that have generated summary results.  
 * ### Queries Per Second (QPS) Limit  
 * The QPS limit for this API is 10 queries per second (QPS) per user. If this limit is exceeded, API calls will be subject to Rate Limiting, which may Impact your business. Please invoke the API appropriately.
 *
 * @param request DescribeCloudNotesRequest
 * @return DescribeCloudNotesResponse
 */
DescribeCloudNotesResponse Client::describeCloudNotes(const DescribeCloudNotesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCloudNotesWithOptions(request, runtime);
}

/**
 * @summary Queries the status of a recording task.
 *
 * @description ### QPS limit
 * The queries per second (QPS) limit per user for this API operation is 10. If the limit is exceeded, API calls are throttled, which may affect your services. Call this operation at a reasonable frequency.
 *
 * @param request DescribeCloudRecordStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCloudRecordStatusResponse
 */
DescribeCloudRecordStatusResponse Client::describeCloudRecordStatusWithOptions(const DescribeCloudRecordStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.getChannelId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
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
 * @summary Queries the status of a recording task.
 *
 * @description ### QPS limit
 * The queries per second (QPS) limit per user for this API operation is 10. If the limit is exceeded, API calls are throttled, which may affect your services. Call this operation at a reasonable frequency.
 *
 * @param request DescribeCloudRecordStatusRequest
 * @return DescribeCloudRecordStatusResponse
 */
DescribeCloudRecordStatusResponse Client::describeCloudRecordStatus(const DescribeCloudRecordStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCloudRecordStatusWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of end-to-end user events.
 *
 * @description ### Usage notes
 * This operation retrieves a list of end-to-end user events. For example, you can obtain information such as the event name and event type from the event list.
 * ### QPS limits
 * The QPS limit per user is 10. If the limit is exceeded, API calls are throttled, which may affect your services. Call this operation at a reasonable rate.
 *
 * @param request DescribeEndPointEventListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeEndPointEventListResponse
 */
DescribeEndPointEventListResponse Client::describeEndPointEventListWithOptions(const DescribeEndPointEventListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.getChannelId();
  }

  if (!!request.hasCreatedTs()) {
    query["CreatedTs"] = request.getCreatedTs();
  }

  if (!!request.hasDestroyedTs()) {
    query["DestroyedTs"] = request.getDestroyedTs();
  }

  if (!!request.hasUserIdList()) {
    query["UserIdList"] = request.getUserIdList();
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
 * @summary Retrieves a list of end-to-end user events.
 *
 * @description ### Usage notes
 * This operation retrieves a list of end-to-end user events. For example, you can obtain information such as the event name and event type from the event list.
 * ### QPS limits
 * The QPS limit per user is 10. If the limit is exceeded, API calls are throttled, which may affect your services. Call this operation at a reasonable rate.
 *
 * @param request DescribeEndPointEventListRequest
 * @return DescribeEndPointEventListResponse
 */
DescribeEndPointEventListResponse Client::describeEndPointEventList(const DescribeEndPointEventListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeEndPointEventListWithOptions(request, runtime);
}

/**
 * @summary Retrieves end-to-end metric data.
 *
 * @description ### Usage notes
 * This operation retrieves end-to-end metric data. For example, you can retrieve metric information for subscribers and publishers.
 * ### QPS limit
 * The queries per second (QPS) limit for a single user is 10. If the number of calls per second exceeds the limit, throttling is triggered, which may affect your business. Make API calls at a reasonable frequency.
 *
 * @param request DescribeEndPointMetricDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeEndPointMetricDataResponse
 */
DescribeEndPointMetricDataResponse Client::describeEndPointMetricDataWithOptions(const DescribeEndPointMetricDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.getChannelId();
  }

  if (!!request.hasCreatedTs()) {
    query["CreatedTs"] = request.getCreatedTs();
  }

  if (!!request.hasDestroyedTs()) {
    query["DestroyedTs"] = request.getDestroyedTs();
  }

  if (!!request.hasMetrics()) {
    query["Metrics"] = request.getMetrics();
  }

  if (!!request.hasPubCallIdList()) {
    query["PubCallIdList"] = request.getPubCallIdList();
  }

  if (!!request.hasPubUserId()) {
    query["PubUserId"] = request.getPubUserId();
  }

  if (!!request.hasSubUserId()) {
    query["SubUserId"] = request.getSubUserId();
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
 * @summary Retrieves end-to-end metric data.
 *
 * @description ### Usage notes
 * This operation retrieves end-to-end metric data. For example, you can retrieve metric information for subscribers and publishers.
 * ### QPS limit
 * The queries per second (QPS) limit for a single user is 10. If the number of calls per second exceeds the limit, throttling is triggered, which may affect your business. Make API calls at a reasonable frequency.
 *
 * @param request DescribeEndPointMetricDataRequest
 * @return DescribeEndPointMetricDataResponse
 */
DescribeEndPointMetricDataResponse Client::describeEndPointMetricData(const DescribeEndPointMetricDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeEndPointMetricDataWithOptions(request, runtime);
}

/**
 * @summary Invoke the DescribeFaultDiagnosisFactorDistributionStat API to obtain the distribution of factors impacting abnormal diagnosis.
 *
 * @description ### How-To  
 * This API is used to retrieve the distribution of factors impacting abnormal diagnosis. When using this API, you can query data from the last 48 hours, with each query covering a time range of no more than 24 hours.
 * ### QPS Limit  
 * The queries per second (QPS) limit for this API is 10 per user. If this limit is exceeded, API calls will be subject to rate limiting, which may impact your service. Please call the API responsibly.
 *
 * @param request DescribeFaultDiagnosisFactorDistributionStatRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeFaultDiagnosisFactorDistributionStatResponse
 */
DescribeFaultDiagnosisFactorDistributionStatResponse Client::describeFaultDiagnosisFactorDistributionStatWithOptions(const DescribeFaultDiagnosisFactorDistributionStatRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasEndTs()) {
    query["EndTs"] = request.getEndTs();
  }

  if (!!request.hasStartTs()) {
    query["StartTs"] = request.getStartTs();
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
 * @summary Invoke the DescribeFaultDiagnosisFactorDistributionStat API to obtain the distribution of factors impacting abnormal diagnosis.
 *
 * @description ### How-To  
 * This API is used to retrieve the distribution of factors impacting abnormal diagnosis. When using this API, you can query data from the last 48 hours, with each query covering a time range of no more than 24 hours.
 * ### QPS Limit  
 * The queries per second (QPS) limit for this API is 10 per user. If this limit is exceeded, API calls will be subject to rate limiting, which may impact your service. Please call the API responsibly.
 *
 * @param request DescribeFaultDiagnosisFactorDistributionStatRequest
 * @return DescribeFaultDiagnosisFactorDistributionStatResponse
 */
DescribeFaultDiagnosisFactorDistributionStatResponse Client::describeFaultDiagnosisFactorDistributionStat(const DescribeFaultDiagnosisFactorDistributionStatRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeFaultDiagnosisFactorDistributionStatWithOptions(request, runtime);
}

/**
 * @summary Retrieves the overview data of exception diagnostics.
 *
 * @description ### Usage notes
 * This operation retrieves the overview data of exception diagnostics. When you call this operation, you can query data from the last 48 hours, and the query time range cannot exceed 24 hours.
 * ### QPS limits
 * The queries per second (QPS) limit on this operation is 10 per user. If the limit is exceeded, API calls are throttled, which may affect your services. Call this operation as needed.
 *
 * @param request DescribeFaultDiagnosisOverallDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeFaultDiagnosisOverallDataResponse
 */
DescribeFaultDiagnosisOverallDataResponse Client::describeFaultDiagnosisOverallDataWithOptions(const DescribeFaultDiagnosisOverallDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasEndTs()) {
    query["EndTs"] = request.getEndTs();
  }

  if (!!request.hasStartTs()) {
    query["StartTs"] = request.getStartTs();
  }

  if (!!request.hasStatDim()) {
    query["StatDim"] = request.getStatDim();
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
 * @summary Retrieves the overview data of exception diagnostics.
 *
 * @description ### Usage notes
 * This operation retrieves the overview data of exception diagnostics. When you call this operation, you can query data from the last 48 hours, and the query time range cannot exceed 24 hours.
 * ### QPS limits
 * The queries per second (QPS) limit on this operation is 10 per user. If the limit is exceeded, API calls are throttled, which may affect your services. Call this operation as needed.
 *
 * @param request DescribeFaultDiagnosisOverallDataRequest
 * @return DescribeFaultDiagnosisOverallDataResponse
 */
DescribeFaultDiagnosisOverallDataResponse Client::describeFaultDiagnosisOverallData(const DescribeFaultDiagnosisOverallDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeFaultDiagnosisOverallDataWithOptions(request, runtime);
}

/**
 * @summary [responses_200_schema_properties_UserDetail_properties_Duration_type]integer
 *
 * @description [responses_200_schema_properties_UserDetail_properties_CreatedTs_description]Call creation time, represented as a UNIX timestamp in seconds.
 *
 * @param request DescribeFaultDiagnosisUserDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeFaultDiagnosisUserDetailResponse
 */
DescribeFaultDiagnosisUserDetailResponse Client::describeFaultDiagnosisUserDetailWithOptions(const DescribeFaultDiagnosisUserDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.getChannelId();
  }

  if (!!request.hasCreatedTs()) {
    query["CreatedTs"] = request.getCreatedTs();
  }

  if (!!request.hasFaultType()) {
    query["FaultType"] = request.getFaultType();
  }

  if (!!request.hasQueryCallUserInfo()) {
    query["QueryCallUserInfo"] = request.getQueryCallUserInfo();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
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
 * @summary [responses_200_schema_properties_UserDetail_properties_Duration_type]integer
 *
 * @description [responses_200_schema_properties_UserDetail_properties_CreatedTs_description]Call creation time, represented as a UNIX timestamp in seconds.
 *
 * @param request DescribeFaultDiagnosisUserDetailRequest
 * @return DescribeFaultDiagnosisUserDetailResponse
 */
DescribeFaultDiagnosisUserDetailResponse Client::describeFaultDiagnosisUserDetail(const DescribeFaultDiagnosisUserDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeFaultDiagnosisUserDetailWithOptions(request, runtime);
}

/**
 * @summary Queries the detailed user list for fault diagnosis.
 *
 * @description ### Usage notes
 * This operation is used to retrieve the detailed user list for fault diagnosis. When you call this operation, you can query data from the last 48 hours, and the query time range cannot exceed 24 hours.
 * ### QPS limit
 * The queries per second (QPS) limit for a single user is 10. If the limit is exceeded, API calls are throttled, which may affect your services. Call this operation at a reasonable rate.
 *
 * @param request DescribeFaultDiagnosisUserListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeFaultDiagnosisUserListResponse
 */
DescribeFaultDiagnosisUserListResponse Client::describeFaultDiagnosisUserListWithOptions(const DescribeFaultDiagnosisUserListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.getChannelId();
  }

  if (!!request.hasEndTs()) {
    query["EndTs"] = request.getEndTs();
  }

  if (!!request.hasFaultTypes()) {
    query["FaultTypes"] = request.getFaultTypes();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasStartTs()) {
    query["StartTs"] = request.getStartTs();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
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
 * @summary Queries the detailed user list for fault diagnosis.
 *
 * @description ### Usage notes
 * This operation is used to retrieve the detailed user list for fault diagnosis. When you call this operation, you can query data from the last 48 hours, and the query time range cannot exceed 24 hours.
 * ### QPS limit
 * The queries per second (QPS) limit for a single user is 10. If the limit is exceeded, API calls are throttled, which may affect your services. Call this operation at a reasonable rate.
 *
 * @param request DescribeFaultDiagnosisUserListRequest
 * @return DescribeFaultDiagnosisUserListResponse
 */
DescribeFaultDiagnosisUserListResponse Client::describeFaultDiagnosisUserList(const DescribeFaultDiagnosisUserListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeFaultDiagnosisUserListWithOptions(request, runtime);
}

/**
 * @summary Call DescribeMPULayoutInfoList to retrieve layout parameters for a bypass live streaming task.
 *
 * @description # Usage notes
 * Before calling this operation, call [CreateMPULayout](https://help.aliyun.com/document_detail/162192.html) to create a bypass live streaming layout.
 * # QPS limit
 * The per-user QPS limit for this operation is 10 calls per second. Exceeding this limit triggers rate limiting, which may affect your business. Call this operation appropriately. For more information, see [QPS limits](https://help.aliyun.com/document_detail/341645.html).
 *
 * @param request DescribeMPULayoutInfoListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeMPULayoutInfoListResponse
 */
DescribeMPULayoutInfoListResponse Client::describeMPULayoutInfoListWithOptions(const DescribeMPULayoutInfoListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasLayoutId()) {
    query["LayoutId"] = request.getLayoutId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
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
 * @summary Call DescribeMPULayoutInfoList to retrieve layout parameters for a bypass live streaming task.
 *
 * @description # Usage notes
 * Before calling this operation, call [CreateMPULayout](https://help.aliyun.com/document_detail/162192.html) to create a bypass live streaming layout.
 * # QPS limit
 * The per-user QPS limit for this operation is 10 calls per second. Exceeding this limit triggers rate limiting, which may affect your business. Call this operation appropriately. For more information, see [QPS limits](https://help.aliyun.com/document_detail/341645.html).
 *
 * @param request DescribeMPULayoutInfoListRequest
 * @return DescribeMPULayoutInfoListResponse
 */
DescribeMPULayoutInfoListResponse Client::describeMPULayoutInfoList(const DescribeMPULayoutInfoListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeMPULayoutInfoListWithOptions(request, runtime);
}

/**
 * @summary This API is used to obtain the list of publishing users in a communication session based on the subscriber.
 *
 * @description ### How-To  
 * This API is used to obtain the list of publishing users in a communication session based on the subscriber. For example, you can retrieve detailed information about both the subscriber and the publishing users.  
 * ### queries per second (QPS) Limit  
 * The QPS limit for this API is 10 requests per second per user. If this limit is exceeded, API calls will be subject to rate limiting, which may affect your business. Please invoke the API appropriately.
 *
 * @param request DescribePubUserListBySubUserRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePubUserListBySubUserResponse
 */
DescribePubUserListBySubUserResponse Client::describePubUserListBySubUserWithOptions(const DescribePubUserListBySubUserRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.getChannelId();
  }

  if (!!request.hasCreatedTs()) {
    query["CreatedTs"] = request.getCreatedTs();
  }

  if (!!request.hasDestroyedTs()) {
    query["DestroyedTs"] = request.getDestroyedTs();
  }

  if (!!request.hasSubUserId()) {
    query["SubUserId"] = request.getSubUserId();
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
 * @summary This API is used to obtain the list of publishing users in a communication session based on the subscriber.
 *
 * @description ### How-To  
 * This API is used to obtain the list of publishing users in a communication session based on the subscriber. For example, you can retrieve detailed information about both the subscriber and the publishing users.  
 * ### queries per second (QPS) Limit  
 * The QPS limit for this API is 10 requests per second per user. If this limit is exceeded, API calls will be subject to rate limiting, which may affect your business. Please invoke the API appropriately.
 *
 * @param request DescribePubUserListBySubUserRequest
 * @return DescribePubUserListBySubUserResponse
 */
DescribePubUserListBySubUserResponse Client::describePubUserListBySubUser(const DescribePubUserListBySubUserRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePubUserListBySubUserWithOptions(request, runtime);
}

/**
 * @summary This API is used to obtain the downlink experience quality metrics of a user in a single communication session.
 *
 * @description ### How-To  
 * This API is used to obtain the downlink experience quality metrics of a user in a single communication session. For example, you can retrieve information such as the metric types that impact communication experience and audio/video trend indicators.  
 * ### QPS Limit  
 * The queries per second (QPS) limit for this API is 10 per user. If this limit is exceeded, API calls will be subject to rate limiting, which may affect your business. Please invoke the API appropriately.
 *
 * @param request DescribeQoeMetricDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeQoeMetricDataResponse
 */
DescribeQoeMetricDataResponse Client::describeQoeMetricDataWithOptions(const DescribeQoeMetricDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.getChannelId();
  }

  if (!!request.hasCreatedTs()) {
    query["CreatedTs"] = request.getCreatedTs();
  }

  if (!!request.hasDestroyedTs()) {
    query["DestroyedTs"] = request.getDestroyedTs();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
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
 * @summary This API is used to obtain the downlink experience quality metrics of a user in a single communication session.
 *
 * @description ### How-To  
 * This API is used to obtain the downlink experience quality metrics of a user in a single communication session. For example, you can retrieve information such as the metric types that impact communication experience and audio/video trend indicators.  
 * ### QPS Limit  
 * The queries per second (QPS) limit for this API is 10 per user. If this limit is exceeded, API calls will be subject to rate limiting, which may affect your business. Please invoke the API appropriately.
 *
 * @param request DescribeQoeMetricDataRequest
 * @return DescribeQoeMetricDataResponse
 */
DescribeQoeMetricDataResponse Client::describeQoeMetricData(const DescribeQoeMetricDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeQoeMetricDataWithOptions(request, runtime);
}

/**
 * @summary Queries the regional distribution data of quality statistics.
 *
 * @description ### Usage notes
 * This operation queries the regional distribution data of quality statistics. When you call this operation, the following limits apply:
 * - You can query data within any time range in the last 365 days, excluding the current day.
 * - If the query time range is less than 24 hours, the data is aggregated by hour. If the query time range is 24 hours or more, the data is aggregated by day.
 * ### QPS limit
 * The queries per second (QPS) limit for a single user is 10. If the limit is exceeded, API calls are throttled, which may affect your business. Make API calls at a reasonable frequency.
 *
 * @param request DescribeQualityAreaDistributionStatDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeQualityAreaDistributionStatDataResponse
 */
DescribeQualityAreaDistributionStatDataResponse Client::describeQualityAreaDistributionStatDataWithOptions(const DescribeQualityAreaDistributionStatDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasEndDate()) {
    query["EndDate"] = request.getEndDate();
  }

  if (!!request.hasParentArea()) {
    query["ParentArea"] = request.getParentArea();
  }

  if (!!request.hasStartDate()) {
    query["StartDate"] = request.getStartDate();
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
 * @summary Queries the regional distribution data of quality statistics.
 *
 * @description ### Usage notes
 * This operation queries the regional distribution data of quality statistics. When you call this operation, the following limits apply:
 * - You can query data within any time range in the last 365 days, excluding the current day.
 * - If the query time range is less than 24 hours, the data is aggregated by hour. If the query time range is 24 hours or more, the data is aggregated by day.
 * ### QPS limit
 * The queries per second (QPS) limit for a single user is 10. If the limit is exceeded, API calls are throttled, which may affect your business. Make API calls at a reasonable frequency.
 *
 * @param request DescribeQualityAreaDistributionStatDataRequest
 * @return DescribeQualityAreaDistributionStatDataResponse
 */
DescribeQualityAreaDistributionStatDataResponse Client::describeQualityAreaDistributionStatData(const DescribeQualityAreaDistributionStatDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeQualityAreaDistributionStatDataWithOptions(request, runtime);
}

/**
 * @summary This API is used to obtain the distribution data of quality statistics.
 *
 * @description ### How-To
 * This API is used to obtain the distribution data of quality statistics. The following limits apply when using this API:
 * - You can query data for any period within the last 365 days (excluding the current day).
 * - If the query range is less than 24 hours, the data is aggregated by hour. If the query range is greater than or equal to 24 hours, the data is aggregated by day.
 * ### Queries per second (QPS) limit
 * The QPS limit for this API is 10 queries per second (QPS) per user. If you exceed this limit, your API calls will be subject to Rate Limiting, which may Impact your business. Please invoke the API reasonably.
 *
 * @param request DescribeQualityDistributionStatDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeQualityDistributionStatDataResponse
 */
DescribeQualityDistributionStatDataResponse Client::describeQualityDistributionStatDataWithOptions(const DescribeQualityDistributionStatDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasEndDate()) {
    query["EndDate"] = request.getEndDate();
  }

  if (!!request.hasStartDate()) {
    query["StartDate"] = request.getStartDate();
  }

  if (!!request.hasStatDim()) {
    query["StatDim"] = request.getStatDim();
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
 * @summary This API is used to obtain the distribution data of quality statistics.
 *
 * @description ### How-To
 * This API is used to obtain the distribution data of quality statistics. The following limits apply when using this API:
 * - You can query data for any period within the last 365 days (excluding the current day).
 * - If the query range is less than 24 hours, the data is aggregated by hour. If the query range is greater than or equal to 24 hours, the data is aggregated by day.
 * ### Queries per second (QPS) limit
 * The QPS limit for this API is 10 queries per second (QPS) per user. If you exceed this limit, your API calls will be subject to Rate Limiting, which may Impact your business. Please invoke the API reasonably.
 *
 * @param request DescribeQualityDistributionStatDataRequest
 * @return DescribeQualityDistributionStatDataResponse
 */
DescribeQualityDistributionStatDataResponse Client::describeQualityDistributionStatData(const DescribeQualityDistributionStatDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeQualityDistributionStatDataWithOptions(request, runtime);
}

/**
 * @summary Retrieves the distribution data of operating systems and SDK versions in quality statistics.
 *
 * @description ### Usage notes
 * This operation retrieves the distribution data of operating systems and SDK versions in quality statistics. The following limits apply when you call this operation:
 * - You can query data within the last 365 days, excluding the current day.
 * - If the query time range is less than 24 hours, the data is aggregated by hour. If the query time range is 24 hours or more, the data is aggregated by day.
 * ### QPS limit
 * The QPS limit for a single user is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Make API calls at a reasonable frequency.
 *
 * @param request DescribeQualityOsSdkVersionDistributionStatDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeQualityOsSdkVersionDistributionStatDataResponse
 */
DescribeQualityOsSdkVersionDistributionStatDataResponse Client::describeQualityOsSdkVersionDistributionStatDataWithOptions(const DescribeQualityOsSdkVersionDistributionStatDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasEndDate()) {
    query["EndDate"] = request.getEndDate();
  }

  if (!!request.hasStartDate()) {
    query["StartDate"] = request.getStartDate();
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
 * @summary Retrieves the distribution data of operating systems and SDK versions in quality statistics.
 *
 * @description ### Usage notes
 * This operation retrieves the distribution data of operating systems and SDK versions in quality statistics. The following limits apply when you call this operation:
 * - You can query data within the last 365 days, excluding the current day.
 * - If the query time range is less than 24 hours, the data is aggregated by hour. If the query time range is 24 hours or more, the data is aggregated by day.
 * ### QPS limit
 * The QPS limit for a single user is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Make API calls at a reasonable frequency.
 *
 * @param request DescribeQualityOsSdkVersionDistributionStatDataRequest
 * @return DescribeQualityOsSdkVersionDistributionStatDataResponse
 */
DescribeQualityOsSdkVersionDistributionStatDataResponse Client::describeQualityOsSdkVersionDistributionStatData(const DescribeQualityOsSdkVersionDistributionStatDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeQualityOsSdkVersionDistributionStatDataWithOptions(request, runtime);
}

/**
 * @summary This API is used to obtain overview data of quality statistics.
 *
 * @description ### How-To  
 * This API is used to obtain overview data of quality statistics. The following restrictions apply when using this API:  
 * - You can query data for any time range within the last 365 days (excluding the current day).  
 * - If the query range is less than 24 hours, the data is aggregated by hour. If the query range is greater than or equal to 24 hours, the data is aggregated by day.  
 * ### queries per second (QPS) Limit  
 * The QPS limit for this API is 10 queries per second per user. If you exceed this limit, your API calls will be subject to Rate Limiting, which may Impact your business. Please invoke the API appropriately.
 *
 * @param request DescribeQualityOverallDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeQualityOverallDataResponse
 */
DescribeQualityOverallDataResponse Client::describeQualityOverallDataWithOptions(const DescribeQualityOverallDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasEndDate()) {
    query["EndDate"] = request.getEndDate();
  }

  if (!!request.hasStartDate()) {
    query["StartDate"] = request.getStartDate();
  }

  if (!!request.hasTypes()) {
    query["Types"] = request.getTypes();
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
 * @summary This API is used to obtain overview data of quality statistics.
 *
 * @description ### How-To  
 * This API is used to obtain overview data of quality statistics. The following restrictions apply when using this API:  
 * - You can query data for any time range within the last 365 days (excluding the current day).  
 * - If the query range is less than 24 hours, the data is aggregated by hour. If the query range is greater than or equal to 24 hours, the data is aggregated by day.  
 * ### queries per second (QPS) Limit  
 * The QPS limit for this API is 10 queries per second per user. If you exceed this limit, your API calls will be subject to Rate Limiting, which may Impact your business. Please invoke the API appropriately.
 *
 * @param request DescribeQualityOverallDataRequest
 * @return DescribeQualityOverallDataResponse
 */
DescribeQualityOverallDataResponse Client::describeQualityOverallData(const DescribeQualityOverallDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeQualityOverallDataWithOptions(request, runtime);
}

/**
 * @summary Calls DescribeRecordFiles to query the list of files generated by recording.
 *
 * @description # Usage notes
 * This operation is used to query the list of files generated by recording. For example, you can query parameters such as the creation time and recording duration of files generated by recording.
 * # QPS limit
 * The per-user QPS limit of this operation is 10 calls per second. If the limit is exceeded, API calls will be throttled, which may affect your business. Please call this operation reasonably. For more information, see [QPS limit](https://help.aliyun.com/document_detail/341645.html).
 *
 * @param request DescribeRecordFilesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRecordFilesResponse
 */
DescribeRecordFilesResponse Client::describeRecordFilesWithOptions(const DescribeRecordFilesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.getChannelId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasTaskIds()) {
    query["TaskIds"] = request.getTaskIds();
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
 * @summary Calls DescribeRecordFiles to query the list of files generated by recording.
 *
 * @description # Usage notes
 * This operation is used to query the list of files generated by recording. For example, you can query parameters such as the creation time and recording duration of files generated by recording.
 * # QPS limit
 * The per-user QPS limit of this operation is 10 calls per second. If the limit is exceeded, API calls will be throttled, which may affect your business. Please call this operation reasonably. For more information, see [QPS limit](https://help.aliyun.com/document_detail/341645.html).
 *
 * @param request DescribeRecordFilesRequest
 * @return DescribeRecordFilesResponse
 */
DescribeRecordFilesResponse Client::describeRecordFiles(const DescribeRecordFilesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRecordFilesWithOptions(request, runtime);
}

/**
 * @summary Queries a list of recording template configurations.
 *
 * @description # Usage notes
 * Before you call this operation, you must call [AddRecordTemplate](https://help.aliyun.com/document_detail/193625.html) to add a recording template.
 * # QPS limit
 * The QPS limit for a single user is 100 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Make API calls at a reasonable rate. For more information, see [QPS limits](https://help.aliyun.com/document_detail/341645.html).
 *
 * @param request DescribeRecordTemplatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRecordTemplatesResponse
 */
DescribeRecordTemplatesResponse Client::describeRecordTemplatesWithOptions(const DescribeRecordTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasTemplateIds()) {
    query["TemplateIds"] = request.getTemplateIds();
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
 * @summary Queries a list of recording template configurations.
 *
 * @description # Usage notes
 * Before you call this operation, you must call [AddRecordTemplate](https://help.aliyun.com/document_detail/193625.html) to add a recording template.
 * # QPS limit
 * The QPS limit for a single user is 100 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Make API calls at a reasonable rate. For more information, see [QPS limits](https://help.aliyun.com/document_detail/341645.html).
 *
 * @param request DescribeRecordTemplatesRequest
 * @return DescribeRecordTemplatesResponse
 */
DescribeRecordTemplatesResponse Client::describeRecordTemplates(const DescribeRecordTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRecordTemplatesWithOptions(request, runtime);
}

/**
 * @summary Queries the list of channel communication records.
 *
 * @param request DescribeRtcChannelListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRtcChannelListResponse
 */
DescribeRtcChannelListResponse Client::describeRtcChannelListWithOptions(const DescribeRtcChannelListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.getChannelId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasServiceArea()) {
    query["ServiceArea"] = request.getServiceArea();
  }

  if (!!request.hasSortType()) {
    query["SortType"] = request.getSortType();
  }

  if (!!request.hasTimePoint()) {
    query["TimePoint"] = request.getTimePoint();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
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
 * @summary Queries the list of channel communication records.
 *
 * @param request DescribeRtcChannelListRequest
 * @return DescribeRtcChannelListResponse
 */
DescribeRtcChannelListResponse Client::describeRtcChannelList(const DescribeRtcChannelListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRtcChannelListWithOptions(request, runtime);
}

/**
 * @summary Queries the details of communication records in a channel. You can query data within the last 180 days.
 *
 * @param request DescribeRtcChannelMetricRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRtcChannelMetricResponse
 */
DescribeRtcChannelMetricResponse Client::describeRtcChannelMetricWithOptions(const DescribeRtcChannelMetricRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.getChannelId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasTimePoint()) {
    query["TimePoint"] = request.getTimePoint();
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
 * @summary Queries the details of communication records in a channel. You can query data within the last 180 days.
 *
 * @param request DescribeRtcChannelMetricRequest
 * @return DescribeRtcChannelMetricResponse
 */
DescribeRtcChannelMetricResponse Client::describeRtcChannelMetric(const DescribeRtcChannelMetricRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRtcChannelMetricWithOptions(request, runtime);
}

/**
 * @summary Retrieves the total communication duration for an application within a specified time range. Data is aggregated by audio and video specifications.
 *
 * @description > The maximum query time range is 30 days.
 *
 * @param request DescribeRtcDurationDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRtcDurationDataResponse
 */
DescribeRtcDurationDataResponse Client::describeRtcDurationDataWithOptions(const DescribeRtcDurationDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.getInterval();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasServiceArea()) {
    query["ServiceArea"] = request.getServiceArea();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary Retrieves the total communication duration for an application within a specified time range. Data is aggregated by audio and video specifications.
 *
 * @description > The maximum query time range is 30 days.
 *
 * @param request DescribeRtcDurationDataRequest
 * @return DescribeRtcDurationDataResponse
 */
DescribeRtcDurationDataResponse Client::describeRtcDurationData(const DescribeRtcDurationDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRtcDurationDataWithOptions(request, runtime);
}

/**
 * @summary Queries the peak number of concurrent channels of an application in a specified time range.
 *
 * @description > The maximum time range that can be queried is 30 days.
 *
 * @param request DescribeRtcPeakChannelCntDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRtcPeakChannelCntDataResponse
 */
DescribeRtcPeakChannelCntDataResponse Client::describeRtcPeakChannelCntDataWithOptions(const DescribeRtcPeakChannelCntDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.getInterval();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasServiceArea()) {
    query["ServiceArea"] = request.getServiceArea();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary Queries the peak number of concurrent channels of an application in a specified time range.
 *
 * @description > The maximum time range that can be queried is 30 days.
 *
 * @param request DescribeRtcPeakChannelCntDataRequest
 * @return DescribeRtcPeakChannelCntDataResponse
 */
DescribeRtcPeakChannelCntDataResponse Client::describeRtcPeakChannelCntData(const DescribeRtcPeakChannelCntDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRtcPeakChannelCntDataWithOptions(request, runtime);
}

/**
 * @summary Queries the number of active users of an application within a specified time range, that is, the number of user terminals that engaged in communication.
 *
 * @description > The maximum time span between the start time and the end time of a data query is 30 days.
 *
 * @param request DescribeRtcUserCntDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRtcUserCntDataResponse
 */
DescribeRtcUserCntDataResponse Client::describeRtcUserCntDataWithOptions(const DescribeRtcUserCntDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.getInterval();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasServiceArea()) {
    query["ServiceArea"] = request.getServiceArea();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary Queries the number of active users of an application within a specified time range, that is, the number of user terminals that engaged in communication.
 *
 * @description > The maximum time span between the start time and the end time of a data query is 30 days.
 *
 * @param request DescribeRtcUserCntDataRequest
 * @return DescribeRtcUserCntDataResponse
 */
DescribeRtcUserCntDataResponse Client::describeRtcUserCntData(const DescribeRtcUserCntDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRtcUserCntDataWithOptions(request, runtime);
}

/**
 * @summary Queries the bypass streaming status.
 *
 * @description ### QPS limit
 * The QPS limit per user for this API operation is 10 queries per second. If the limit is exceeded, API calls are throttled, which may affect your services. Call this API operation at a reasonable frequency.
 *
 * @param request DescribeStreamingOutStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeStreamingOutStatusResponse
 */
DescribeStreamingOutStatusResponse Client::describeStreamingOutStatusWithOptions(const DescribeStreamingOutStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.getChannelId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
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
 * @summary Queries the bypass streaming status.
 *
 * @description ### QPS limit
 * The QPS limit per user for this API operation is 10 queries per second. If the limit is exceeded, API calls are throttled, which may affect your services. Call this API operation at a reasonable frequency.
 *
 * @param request DescribeStreamingOutStatusRequest
 * @return DescribeStreamingOutStatusResponse
 */
DescribeStreamingOutStatusResponse Client::describeStreamingOutStatus(const DescribeStreamingOutStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeStreamingOutStatusWithOptions(request, runtime);
}

/**
 * @summary Built-in system layouts
 *
 * @description ### QPS limit
 * The per-user QPS limit for this API is 10 calls per second. Exceeding this limit triggers rate limiting, which may affect your business. Call the API responsibly.
 *
 * @param request DescribeSystemLayoutListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSystemLayoutListResponse
 */
DescribeSystemLayoutListResponse Client::describeSystemLayoutListWithOptions(const DescribeSystemLayoutListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageNum()) {
    query["PageNum"] = request.getPageNum();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
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
 * @summary Built-in system layouts
 *
 * @description ### QPS limit
 * The per-user QPS limit for this API is 10 calls per second. Exceeding this limit triggers rate limiting, which may affect your business. Call the API responsibly.
 *
 * @param request DescribeSystemLayoutListRequest
 * @return DescribeSystemLayoutListResponse
 */
DescribeSystemLayoutListResponse Client::describeSystemLayoutList(const DescribeSystemLayoutListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSystemLayoutListWithOptions(request, runtime);
}

/**
 * @summary This API is used to retrieve the regional distribution data of usage statistics.
 *
 * @description ### How-To
 * This API is used to retrieve the regional distribution data of usage statistics. The following restrictions apply when using this API:
 * - You can query data for any period within the last 365 days (excluding the current day).
 * - If the query range is less than 24 hours, the data is aggregated by hour. If the query range is greater than or equal to 24 hours, the data is aggregated by day.
 * ### QPS Limit
 * The queries per second (QPS) limit for this API is 10 requests per second per user. If you exceed this limit, your API calls will be subject to rate limiting, which may impact your business. Please invoke the API appropriately.
 *
 * @param request DescribeUsageAreaDistributionStatDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeUsageAreaDistributionStatDataResponse
 */
DescribeUsageAreaDistributionStatDataResponse Client::describeUsageAreaDistributionStatDataWithOptions(const DescribeUsageAreaDistributionStatDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasEndDate()) {
    query["EndDate"] = request.getEndDate();
  }

  if (!!request.hasParentArea()) {
    query["ParentArea"] = request.getParentArea();
  }

  if (!!request.hasStartDate()) {
    query["StartDate"] = request.getStartDate();
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
 * @summary This API is used to retrieve the regional distribution data of usage statistics.
 *
 * @description ### How-To
 * This API is used to retrieve the regional distribution data of usage statistics. The following restrictions apply when using this API:
 * - You can query data for any period within the last 365 days (excluding the current day).
 * - If the query range is less than 24 hours, the data is aggregated by hour. If the query range is greater than or equal to 24 hours, the data is aggregated by day.
 * ### QPS Limit
 * The queries per second (QPS) limit for this API is 10 requests per second per user. If you exceed this limit, your API calls will be subject to rate limiting, which may impact your business. Please invoke the API appropriately.
 *
 * @param request DescribeUsageAreaDistributionStatDataRequest
 * @return DescribeUsageAreaDistributionStatDataResponse
 */
DescribeUsageAreaDistributionStatDataResponse Client::describeUsageAreaDistributionStatData(const DescribeUsageAreaDistributionStatDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeUsageAreaDistributionStatDataWithOptions(request, runtime);
}

/**
 * @summary Queries the distribution data of usage statistics.
 *
 * @description ### Usage notes
 * This operation queries the distribution data of usage statistics. When you call this operation, the following limits apply:
 * - You can query data within any time range in the last 365 days, excluding the current day.
 * - If the query time range is less than 24 hours, the data is aggregated by hour. If the query time range is 24 hours or more, the data is aggregated by day.
 * ### QPS limit
 * The queries per second (QPS) limit for a single user is 10. If the limit is exceeded, API calls are throttled, which may affect your business. Make API calls at a reasonable rate.
 *
 * @param request DescribeUsageDistributionStatDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeUsageDistributionStatDataResponse
 */
DescribeUsageDistributionStatDataResponse Client::describeUsageDistributionStatDataWithOptions(const DescribeUsageDistributionStatDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasEndDate()) {
    query["EndDate"] = request.getEndDate();
  }

  if (!!request.hasStartDate()) {
    query["StartDate"] = request.getStartDate();
  }

  if (!!request.hasStatDim()) {
    query["StatDim"] = request.getStatDim();
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
 * @summary Queries the distribution data of usage statistics.
 *
 * @description ### Usage notes
 * This operation queries the distribution data of usage statistics. When you call this operation, the following limits apply:
 * - You can query data within any time range in the last 365 days, excluding the current day.
 * - If the query time range is less than 24 hours, the data is aggregated by hour. If the query time range is 24 hours or more, the data is aggregated by day.
 * ### QPS limit
 * The queries per second (QPS) limit for a single user is 10. If the limit is exceeded, API calls are throttled, which may affect your business. Make API calls at a reasonable rate.
 *
 * @param request DescribeUsageDistributionStatDataRequest
 * @return DescribeUsageDistributionStatDataResponse
 */
DescribeUsageDistributionStatDataResponse Client::describeUsageDistributionStatData(const DescribeUsageDistributionStatDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeUsageDistributionStatDataWithOptions(request, runtime);
}

/**
 * @summary This API is used to obtain the distribution data of operating systems and SDK versions in usage statistics.
 *
 * @description ### How-To  
 * This API is used to obtain the distribution data of operating systems and SDK versions in usage statistics. When using this API, the following restrictions apply:  
 * - You can query data for any period within the last 365 days (excluding the current day).  
 * - If the query range is less than 24 hours, the data is aggregated by hour. If the query range is greater than or equal to 24 hours, the data is aggregated by day.  
 * ### Rate Limiting  
 * The queries per second (QPS) limit for this API is 10 requests per second per user. If you exceed this limit, your API calls will be rate-limited, which may impact your business. Please invoke the API appropriately.
 *
 * @param request DescribeUsageOsSdkVersionDistributionStatDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeUsageOsSdkVersionDistributionStatDataResponse
 */
DescribeUsageOsSdkVersionDistributionStatDataResponse Client::describeUsageOsSdkVersionDistributionStatDataWithOptions(const DescribeUsageOsSdkVersionDistributionStatDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasEndDate()) {
    query["EndDate"] = request.getEndDate();
  }

  if (!!request.hasStartDate()) {
    query["StartDate"] = request.getStartDate();
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
 * @summary This API is used to obtain the distribution data of operating systems and SDK versions in usage statistics.
 *
 * @description ### How-To  
 * This API is used to obtain the distribution data of operating systems and SDK versions in usage statistics. When using this API, the following restrictions apply:  
 * - You can query data for any period within the last 365 days (excluding the current day).  
 * - If the query range is less than 24 hours, the data is aggregated by hour. If the query range is greater than or equal to 24 hours, the data is aggregated by day.  
 * ### Rate Limiting  
 * The queries per second (QPS) limit for this API is 10 requests per second per user. If you exceed this limit, your API calls will be rate-limited, which may impact your business. Please invoke the API appropriately.
 *
 * @param request DescribeUsageOsSdkVersionDistributionStatDataRequest
 * @return DescribeUsageOsSdkVersionDistributionStatDataResponse
 */
DescribeUsageOsSdkVersionDistributionStatDataResponse Client::describeUsageOsSdkVersionDistributionStatData(const DescribeUsageOsSdkVersionDistributionStatDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeUsageOsSdkVersionDistributionStatDataWithOptions(request, runtime);
}

/**
 * @summary Queries the overview data of usage statistics.
 *
 * @description ### Usage notes
 * This operation retrieves the overview data of usage statistics. The following limits apply when you call this operation:
 * - You can query data for any time range within the last 365 days, excluding the current day.
 * - If the query time range is less than 24 hours, the data is aggregated by hour. If the query time range is 24 hours or more, the data is aggregated by day.
 * ### QPS limit
 * The QPS limit for a single user is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Make API calls at a reasonable rate.
 *
 * @param request DescribeUsageOverallDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeUsageOverallDataResponse
 */
DescribeUsageOverallDataResponse Client::describeUsageOverallDataWithOptions(const DescribeUsageOverallDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasEndDate()) {
    query["EndDate"] = request.getEndDate();
  }

  if (!!request.hasStartDate()) {
    query["StartDate"] = request.getStartDate();
  }

  if (!!request.hasTypes()) {
    query["Types"] = request.getTypes();
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
 * @summary Queries the overview data of usage statistics.
 *
 * @description ### Usage notes
 * This operation retrieves the overview data of usage statistics. The following limits apply when you call this operation:
 * - You can query data for any time range within the last 365 days, excluding the current day.
 * - If the query time range is less than 24 hours, the data is aggregated by hour. If the query time range is 24 hours or more, the data is aggregated by day.
 * ### QPS limit
 * The QPS limit for a single user is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Make API calls at a reasonable rate.
 *
 * @param request DescribeUsageOverallDataRequest
 * @return DescribeUsageOverallDataResponse
 */
DescribeUsageOverallDataResponse Client::describeUsageOverallData(const DescribeUsageOverallDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeUsageOverallDataWithOptions(request, runtime);
}

/**
 * @summary Calls DescribeUserInfoInChannel to query the real-time information of a user in a channel.
 *
 * @description # Usage notes
 * This operation is used to query the real-time information of a user in a channel. For example, you can query information such as the user role type and the time of joining the meeting.
 * # QPS limit
 * The per-user QPS limit of this operation is 100 times per second. If the limit is exceeded, API calls will be throttled, which may affect your business. Call this operation properly. For more information, see [QPS limit](https://help.aliyun.com/document_detail/341645.html).
 *
 * @param request DescribeUserInfoInChannelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeUserInfoInChannelResponse
 */
DescribeUserInfoInChannelResponse Client::describeUserInfoInChannelWithOptions(const DescribeUserInfoInChannelRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.getChannelId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
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
 * @summary Calls DescribeUserInfoInChannel to query the real-time information of a user in a channel.
 *
 * @description # Usage notes
 * This operation is used to query the real-time information of a user in a channel. For example, you can query information such as the user role type and the time of joining the meeting.
 * # QPS limit
 * The per-user QPS limit of this operation is 100 times per second. If the limit is exceeded, API calls will be throttled, which may affect your business. Call this operation properly. For more information, see [QPS limit](https://help.aliyun.com/document_detail/341645.html).
 *
 * @param request DescribeUserInfoInChannelRequest
 * @return DescribeUserInfoInChannelResponse
 */
DescribeUserInfoInChannelResponse Client::describeUserInfoInChannel(const DescribeUserInfoInChannelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeUserInfoInChannelWithOptions(request, runtime);
}

/**
 * @summary Disables the automatic bypass single-stream relay rule.
 *
 * @description # Usage notes
 * Before you call this operation, you must call [CreateAutoLiveStreamRule](https://help.aliyun.com/document_detail/353179.html) to create a bypass rule.
 * # QPS limit
 * The QPS limit per user is 1,000 requests per minute. If the limit is exceeded, API calls are throttled, which may affect your business. Make API calls at a reasonable rate. For more information, see [QPS limit](https://help.aliyun.com/document_detail/341645.html).
 *
 * @param request DisableAutoLiveStreamRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableAutoLiveStreamRuleResponse
 */
DisableAutoLiveStreamRuleResponse Client::disableAutoLiveStreamRuleWithOptions(const DisableAutoLiveStreamRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.getRuleId();
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
 * @summary Disables the automatic bypass single-stream relay rule.
 *
 * @description # Usage notes
 * Before you call this operation, you must call [CreateAutoLiveStreamRule](https://help.aliyun.com/document_detail/353179.html) to create a bypass rule.
 * # QPS limit
 * The QPS limit per user is 1,000 requests per minute. If the limit is exceeded, API calls are throttled, which may affect your business. Make API calls at a reasonable rate. For more information, see [QPS limit](https://help.aliyun.com/document_detail/341645.html).
 *
 * @param request DisableAutoLiveStreamRuleRequest
 * @return DisableAutoLiveStreamRuleResponse
 */
DisableAutoLiveStreamRuleResponse Client::disableAutoLiveStreamRule(const DisableAutoLiveStreamRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableAutoLiveStreamRuleWithOptions(request, runtime);
}

/**
 * @summary Enables the automatic bypass single-stream relay rule.
 *
 * @description # Usage notes
 * Before you call this operation, you must call [CreateAutoLiveStreamRule](https://help.aliyun.com/document_detail/353179.html) to create a bypass rule.
 * # QPS limit
 * The QPS limit per user for this operation is 1,000 calls per minute. If the limit is exceeded, API calls are throttled, which may affect your business. Make API calls at a reasonable rate. For more information, see [QPS limits](https://help.aliyun.com/document_detail/341645.html).
 *
 * @param request EnableAutoLiveStreamRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableAutoLiveStreamRuleResponse
 */
EnableAutoLiveStreamRuleResponse Client::enableAutoLiveStreamRuleWithOptions(const EnableAutoLiveStreamRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.getRuleId();
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
 * @summary Enables the automatic bypass single-stream relay rule.
 *
 * @description # Usage notes
 * Before you call this operation, you must call [CreateAutoLiveStreamRule](https://help.aliyun.com/document_detail/353179.html) to create a bypass rule.
 * # QPS limit
 * The QPS limit per user for this operation is 1,000 calls per minute. If the limit is exceeded, API calls are throttled, which may affect your business. Make API calls at a reasonable rate. For more information, see [QPS limits](https://help.aliyun.com/document_detail/341645.html).
 *
 * @param request EnableAutoLiveStreamRuleRequest
 * @return EnableAutoLiveStreamRuleResponse
 */
EnableAutoLiveStreamRuleResponse Client::enableAutoLiveStreamRule(const EnableAutoLiveStreamRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableAutoLiveStreamRuleWithOptions(request, runtime);
}

/**
 * @summary GetAgent.
 *
 * @param request GetAgentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAgentResponse
 */
GetAgentResponse Client::getAgentWithOptions(const GetAgentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.getChannelId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
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
 * @summary GetAgent.
 *
 * @param request GetAgentRequest
 * @return GetAgentResponse
 */
GetAgentResponse Client::getAgent(const GetAgentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAgentWithOptions(request, runtime);
}

/**
 * @summary Retrieves the status of a bypass transcoding task.
 *
 * @description # Usage notes
 * Before you call this operation, you must call [StartMpuTask](https://help.aliyun.com/document_detail/93183.html) to start a bypass transcoding task.
 * # QPS limit
 * The QPS limit for a single user is 4,000 calls per minute. If the limit is exceeded, API calls are throttled, which may affect your business. Make API calls at a reasonable rate. For more information, see [QPS limits](https://help.aliyun.com/document_detail/341645.html).
 *
 * @param request GetMPUTaskStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMPUTaskStatusResponse
 */
GetMPUTaskStatusResponse Client::getMPUTaskStatusWithOptions(const GetMPUTaskStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
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
 * @summary Retrieves the status of a bypass transcoding task.
 *
 * @description # Usage notes
 * Before you call this operation, you must call [StartMpuTask](https://help.aliyun.com/document_detail/93183.html) to start a bypass transcoding task.
 * # QPS limit
 * The QPS limit for a single user is 4,000 calls per minute. If the limit is exceeded, API calls are throttled, which may affect your business. Make API calls at a reasonable rate. For more information, see [QPS limits](https://help.aliyun.com/document_detail/341645.html).
 *
 * @param request GetMPUTaskStatusRequest
 * @return GetMPUTaskStatusResponse
 */
GetMPUTaskStatusResponse Client::getMPUTaskStatus(const GetMPUTaskStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMPUTaskStatusWithOptions(request, runtime);
}

/**
 * @summary Modifies the name of a specified application.
 *
 * @description #### Usage notes
 * This operation modifies the name of a specified application.
 * #### QPS limit
 * The queries per second (QPS) limit per user for this operation is 200 calls per minute. If the limit is exceeded, API calls are throttled, which may affect your services. Call this operation at a reasonable rate.
 *
 * @param request ModifyAppRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyAppResponse
 */
ModifyAppResponse Client::modifyAppWithOptions(const ModifyAppRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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
 * @summary Modifies the name of a specified application.
 *
 * @description #### Usage notes
 * This operation modifies the name of a specified application.
 * #### QPS limit
 * The queries per second (QPS) limit per user for this operation is 200 calls per minute. If the limit is exceeded, API calls are throttled, which may affect your services. Call this operation at a reasonable rate.
 *
 * @param request ModifyAppRequest
 * @return ModifyAppResponse
 */
ModifyAppResponse Client::modifyApp(const ModifyAppRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyAppWithOptions(request, runtime);
}

/**
 * @summary Modifies the agent feature switch for an application.
 *
 * @description ### QPS limits
 * The queries per second (QPS) limit per user for this API operation is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your services. Call this API operation at a reasonable frequency.
 *
 * @param request ModifyAppAgentFunctionStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyAppAgentFunctionStatusResponse
 */
ModifyAppAgentFunctionStatusResponse Client::modifyAppAgentFunctionStatusWithOptions(const ModifyAppAgentFunctionStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
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
 * @summary Modifies the agent feature switch for an application.
 *
 * @description ### QPS limits
 * The queries per second (QPS) limit per user for this API operation is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your services. Call this API operation at a reasonable frequency.
 *
 * @param request ModifyAppAgentFunctionStatusRequest
 * @return ModifyAppAgentFunctionStatusResponse
 */
ModifyAppAgentFunctionStatusResponse Client::modifyAppAgentFunctionStatus(const ModifyAppAgentFunctionStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyAppAgentFunctionStatusWithOptions(request, runtime);
}

/**
 * @summary Updates an application agent template.
 *
 * @description ### QPS limit
 * The QPS limit for a single user is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call the API at a reasonable rate.
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
    request.setAgentSilenceConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAgentSilenceConfig(), "AgentSilenceConfig", "json"));
  }

  if (!!tmpReq.hasAmbientSoundConfig()) {
    request.setAmbientSoundConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAmbientSoundConfig(), "AmbientSoundConfig", "json"));
  }

  if (!!tmpReq.hasAsrConfig()) {
    request.setAsrConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAsrConfig(), "AsrConfig", "json"));
  }

  if (!!tmpReq.hasBackChannelConfig()) {
    request.setBackChannelConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBackChannelConfig(), "BackChannelConfig", "json"));
  }

  if (!!tmpReq.hasInterruptConfig()) {
    request.setInterruptConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getInterruptConfig(), "InterruptConfig", "json"));
  }

  if (!!tmpReq.hasLlmConfig()) {
    request.setLlmConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getLlmConfig(), "LlmConfig", "json"));
  }

  if (!!tmpReq.hasTtsConfig()) {
    request.setTtsConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTtsConfig(), "TtsConfig", "json"));
  }

  json query = {};
  if (!!request.hasAgentSilenceConfigShrink()) {
    query["AgentSilenceConfig"] = request.getAgentSilenceConfigShrink();
  }

  if (!!request.hasAmbientSoundConfigShrink()) {
    query["AmbientSoundConfig"] = request.getAmbientSoundConfigShrink();
  }

  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasAsrConfigShrink()) {
    query["AsrConfig"] = request.getAsrConfigShrink();
  }

  if (!!request.hasBackChannelConfigShrink()) {
    query["BackChannelConfig"] = request.getBackChannelConfigShrink();
  }

  if (!!request.hasChatMode()) {
    query["ChatMode"] = request.getChatMode();
  }

  if (!!request.hasEnableVideoUnderstanding()) {
    query["EnableVideoUnderstanding"] = request.getEnableVideoUnderstanding();
  }

  if (!!request.hasGreeting()) {
    query["Greeting"] = request.getGreeting();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
  }

  if (!!request.hasInterruptConfigShrink()) {
    query["InterruptConfig"] = request.getInterruptConfigShrink();
  }

  if (!!request.hasInterruptMode()) {
    query["InterruptMode"] = request.getInterruptMode();
  }

  if (!!request.hasLlmConfigShrink()) {
    query["LlmConfig"] = request.getLlmConfigShrink();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasPreferVideo()) {
    query["PreferVideo"] = request.getPreferVideo();
  }

  if (!!request.hasTtsConfigShrink()) {
    query["TtsConfig"] = request.getTtsConfigShrink();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
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
 * @summary Updates an application agent template.
 *
 * @description ### QPS limit
 * The QPS limit for a single user is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call the API at a reasonable rate.
 *
 * @param request ModifyAppAgentTemplateRequest
 * @return ModifyAppAgentTemplateResponse
 */
ModifyAppAgentTemplateResponse Client::modifyAppAgentTemplate(const ModifyAppAgentTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyAppAgentTemplateWithOptions(request, runtime);
}

/**
 * @summary Updates the callback event switch for an application.
 *
 * @description ### QPS limits
 * The QPS limit per user for this API operation is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Make API calls at a reasonable rate.
 *
 * @param request ModifyAppCallbackStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyAppCallbackStatusResponse
 */
ModifyAppCallbackStatusResponse Client::modifyAppCallbackStatusWithOptions(const ModifyAppCallbackStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
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
 * @summary Updates the callback event switch for an application.
 *
 * @description ### QPS limits
 * The QPS limit per user for this API operation is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Make API calls at a reasonable rate.
 *
 * @param request ModifyAppCallbackStatusRequest
 * @return ModifyAppCallbackStatusResponse
 */
ModifyAppCallbackStatusResponse Client::modifyAppCallbackStatus(const ModifyAppCallbackStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyAppCallbackStatusWithOptions(request, runtime);
}

/**
 * @summary Modify a custom application layout.
 *
 * @description ### QPS limits
 * This API supports a maximum of 10 calls per second per user. Exceeding this limit triggers rate limiting, which may impact your business operations. Use the API judiciously.
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
    request.setLayoutShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getLayout(), "Layout", "json"));
  }

  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasLayoutShrink()) {
    query["Layout"] = request.getLayoutShrink();
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
 * @summary Modify a custom application layout.
 *
 * @description ### QPS limits
 * This API supports a maximum of 10 calls per second per user. Exceeding this limit triggers rate limiting, which may impact your business operations. Use the API judiciously.
 *
 * @param request ModifyAppLayoutRequest
 * @return ModifyAppLayoutResponse
 */
ModifyAppLayoutResponse Client::modifyAppLayout(const ModifyAppLayoutRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyAppLayoutWithOptions(request, runtime);
}

/**
 * @summary Modify the bypass toggle of an application
 *
 * @description ### Queries per second (QPS) limit  
 * The queries per second (QPS) limit for this API is 10 per user per second. If the limit is exceeded, API calls will be subject to Rate Limiting, which may impact your business. Please invoke the API appropriately.
 *
 * @param request ModifyAppLiveStreamStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyAppLiveStreamStatusResponse
 */
ModifyAppLiveStreamStatusResponse Client::modifyAppLiveStreamStatusWithOptions(const ModifyAppLiveStreamStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
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
 * @summary Modify the bypass toggle of an application
 *
 * @description ### Queries per second (QPS) limit  
 * The queries per second (QPS) limit for this API is 10 per user per second. If the limit is exceeded, API calls will be subject to Rate Limiting, which may impact your business. Please invoke the API appropriately.
 *
 * @param request ModifyAppLiveStreamStatusRequest
 * @return ModifyAppLiveStreamStatusResponse
 */
ModifyAppLiveStreamStatusResponse Client::modifyAppLiveStreamStatus(const ModifyAppLiveStreamStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyAppLiveStreamStatusWithOptions(request, runtime);
}

/**
 * @summary Modifies the recording switch of an application.
 *
 * @description ### QPS limit
 * The queries per second (QPS) limit per user for this API operation is 10. If the limit is exceeded, API calls are throttled, which may affect your services. Call this API operation at a reasonable rate.
 *
 * @param request ModifyAppRecordStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyAppRecordStatusResponse
 */
ModifyAppRecordStatusResponse Client::modifyAppRecordStatusWithOptions(const ModifyAppRecordStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
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
 * @summary Modifies the recording switch of an application.
 *
 * @description ### QPS limit
 * The queries per second (QPS) limit per user for this API operation is 10. If the limit is exceeded, API calls are throttled, which may affect your services. Call this API operation at a reasonable rate.
 *
 * @param request ModifyAppRecordStatusRequest
 * @return ModifyAppRecordStatusResponse
 */
ModifyAppRecordStatusResponse Client::modifyAppRecordStatus(const ModifyAppRecordStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyAppRecordStatusWithOptions(request, runtime);
}

/**
 * @summary Modify an application recording template.
 *
 * @description ### QPS limit
 * This API supports up to 10 calls per second per user. If you exceed this limit, rate limiting is triggered, which might affect your service. Call the API at a reasonable frequency.
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
    request.setRecordTemplateShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRecordTemplate(), "RecordTemplate", "json"));
  }

  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasRecordTemplateShrink()) {
    query["RecordTemplate"] = request.getRecordTemplateShrink();
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
 * @summary Modify an application recording template.
 *
 * @description ### QPS limit
 * This API supports up to 10 calls per second per user. If you exceed this limit, rate limiting is triggered, which might affect your service. Call the API at a reasonable frequency.
 *
 * @param request ModifyAppRecordTemplateRequest
 * @return ModifyAppRecordTemplateResponse
 */
ModifyAppRecordTemplateResponse Client::modifyAppRecordTemplate(const ModifyAppRecordTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyAppRecordTemplateWithOptions(request, runtime);
}

/**
 * @summary Modify the stream ingest template for an RTC 3.0 application.
 *
 * @description ### How-To  
 * This API modifies the stream ingest template for an RTC 3.0 application.  
 * ### QPS Limit  
 * The queries per second (QPS) limit for this API is 10 per user. If you exceed this limit, your API calls will be subject to rate limiting, which may impact your business. Please invoke the API appropriately.
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
    request.setStreamingOutTemplateShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getStreamingOutTemplate(), "StreamingOutTemplate", "json"));
  }

  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasStreamingOutTemplateShrink()) {
    query["StreamingOutTemplate"] = request.getStreamingOutTemplateShrink();
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
 * @summary Modify the stream ingest template for an RTC 3.0 application.
 *
 * @description ### How-To  
 * This API modifies the stream ingest template for an RTC 3.0 application.  
 * ### QPS Limit  
 * The queries per second (QPS) limit for this API is 10 per user. If you exceed this limit, your API calls will be subject to rate limiting, which may impact your business. Please invoke the API appropriately.
 *
 * @param request ModifyAppStreamingOutTemplateRequest
 * @return ModifyAppStreamingOutTemplateResponse
 */
ModifyAppStreamingOutTemplateResponse Client::modifyAppStreamingOutTemplate(const ModifyAppStreamingOutTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyAppStreamingOutTemplateWithOptions(request, runtime);
}

/**
 * @summary Modifies the merging switch.
 *
 * @description ### QPS limits
 * The queries per second (QPS) limit for a single user is 10. If the limit is exceeded, API calls are throttled, which may affect your services. Call this operation at a reasonable frequency.
 *
 * @param request ModifyAppViewStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyAppViewStatusResponse
 */
ModifyAppViewStatusResponse Client::modifyAppViewStatusWithOptions(const ModifyAppViewStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyAppViewStatus"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyAppViewStatusResponse>();
}

/**
 * @summary Modifies the merging switch.
 *
 * @description ### QPS limits
 * The queries per second (QPS) limit for a single user is 10. If the limit is exceeded, API calls are throttled, which may affect your services. Call this operation at a reasonable frequency.
 *
 * @param request ModifyAppViewStatusRequest
 * @return ModifyAppViewStatusResponse
 */
ModifyAppViewStatusResponse Client::modifyAppViewStatus(const ModifyAppViewStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyAppViewStatusWithOptions(request, runtime);
}

/**
 * @summary Update an application view template.
 *
 * @description ### QPS limits
 * This API supports up to 10 calls per second per user. Exceeding this limit triggers rate limiting, which may affect your business. Use this API with caution.
 *
 * @param tmpReq ModifyAppViewTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyAppViewTemplateResponse
 */
ModifyAppViewTemplateResponse Client::modifyAppViewTemplateWithOptions(const ModifyAppViewTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ModifyAppViewTemplateShrinkRequest request = ModifyAppViewTemplateShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTemplate()) {
    request.setTemplateShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTemplate(), "Template", "json"));
  }

  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasTemplateShrink()) {
    query["Template"] = request.getTemplateShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyAppViewTemplate"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyAppViewTemplateResponse>();
}

/**
 * @summary Update an application view template.
 *
 * @description ### QPS limits
 * This API supports up to 10 calls per second per user. Exceeding this limit triggers rate limiting, which may affect your business. Use this API with caution.
 *
 * @param request ModifyAppViewTemplateRequest
 * @return ModifyAppViewTemplateResponse
 */
ModifyAppViewTemplateResponse Client::modifyAppViewTemplate(const ModifyAppViewTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyAppViewTemplateWithOptions(request, runtime);
}

/**
 * @summary Updates the callback configuration of an application.
 *
 * @description ### QPS limit
 * The QPS limit for a single user is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your services. Call the API at a reasonable frequency.
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
    request.setCallbackShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCallback(), "Callback", "json"));
  }

  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasCallbackShrink()) {
    query["Callback"] = request.getCallbackShrink();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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
 * @summary Updates the callback configuration of an application.
 *
 * @description ### QPS limit
 * The QPS limit for a single user is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your services. Call the API at a reasonable frequency.
 *
 * @param request ModifyCallbackMetaRequest
 * @return ModifyCallbackMetaResponse
 */
ModifyCallbackMetaResponse Client::modifyCallbackMeta(const ModifyCallbackMetaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyCallbackMetaWithOptions(request, runtime);
}

/**
 * @summary Updates the hotwords table for meeting minutes.
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
    request.setPhraseShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPhrase(), "Phrase", "json"));
  }

  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasPhraseShrink()) {
    query["Phrase"] = request.getPhraseShrink();
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
 * @summary Updates the hotwords table for meeting minutes.
 *
 * @param request ModifyCloudNotePhrasesRequest
 * @return ModifyCloudNotePhrasesResponse
 */
ModifyCloudNotePhrasesResponse Client::modifyCloudNotePhrases(const ModifyCloudNotePhrasesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyCloudNotePhrasesWithOptions(request, runtime);
}

/**
 * @summary Modifies a bypass live streaming layout.
 *
 * @description # Usage notes
 * Before you call this operation, you must call [CreateMPULayout](https://help.aliyun.com/document_detail/162192.html) to create a bypass live streaming layout.
 * # QPS limit
 * The QPS limit for a single user is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your services. Make API calls at a reasonable rate. For more information, see [QPS limits](https://help.aliyun.com/document_detail/341645.html).
 *
 * @param request ModifyMPULayoutRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyMPULayoutResponse
 */
ModifyMPULayoutResponse Client::modifyMPULayoutWithOptions(const ModifyMPULayoutRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasAudioMixCount()) {
    query["AudioMixCount"] = request.getAudioMixCount();
  }

  if (!!request.hasLayoutId()) {
    query["LayoutId"] = request.getLayoutId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPanes()) {
    query["Panes"] = request.getPanes();
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
 * @summary Modifies a bypass live streaming layout.
 *
 * @description # Usage notes
 * Before you call this operation, you must call [CreateMPULayout](https://help.aliyun.com/document_detail/162192.html) to create a bypass live streaming layout.
 * # QPS limit
 * The QPS limit for a single user is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your services. Make API calls at a reasonable rate. For more information, see [QPS limits](https://help.aliyun.com/document_detail/341645.html).
 *
 * @param request ModifyMPULayoutRequest
 * @return ModifyMPULayoutResponse
 */
ModifyMPULayoutResponse Client::modifyMPULayout(const ModifyMPULayoutRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyMPULayoutWithOptions(request, runtime);
}

/**
 * @summary Sets the stream properties.
 *
 * @description ### QPS limit
 * The QPS limit for a single user is 10 queries per second. If the limit is exceeded, API calls are throttled, which may affect your services. Call this API operation at a reasonable frequency.
 *
 * @param tmpReq ModifyStreamingPropertyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyStreamingPropertyResponse
 */
ModifyStreamingPropertyResponse Client::modifyStreamingPropertyWithOptions(const ModifyStreamingPropertyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ModifyStreamingPropertyShrinkRequest request = ModifyStreamingPropertyShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasViewSubscribers()) {
    request.setViewSubscribersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getViewSubscribers(), "ViewSubscribers", "simple"));
  }

  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.getChannelId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  if (!!request.hasViewContent()) {
    query["ViewContent"] = request.getViewContent();
  }

  if (!!request.hasViewSubscribersShrink()) {
    query["ViewSubscribers"] = request.getViewSubscribersShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyStreamingProperty"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyStreamingPropertyResponse>();
}

/**
 * @summary Sets the stream properties.
 *
 * @description ### QPS limit
 * The QPS limit for a single user is 10 queries per second. If the limit is exceeded, API calls are throttled, which may affect your services. Call this API operation at a reasonable frequency.
 *
 * @param request ModifyStreamingPropertyRequest
 * @return ModifyStreamingPropertyResponse
 */
ModifyStreamingPropertyResponse Client::modifyStreamingProperty(const ModifyStreamingPropertyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyStreamingPropertyWithOptions(request, runtime);
}

/**
 * @summary Configures the mixed stream layout.
 *
 * @description ### QPS limit
 * The QPS limit per user is 10 calls per second. If this limit is exceeded, API calls are throttled, which may affect your services. Call the API at a reasonable rate.
 *
 * @param tmpReq ModifyViewLayoutRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyViewLayoutResponse
 */
ModifyViewLayoutResponse Client::modifyViewLayoutWithOptions(const ModifyViewLayoutRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ModifyViewLayoutShrinkRequest request = ModifyViewLayoutShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasLayoutSpecifiedUsers()) {
    request.setLayoutSpecifiedUsersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getLayoutSpecifiedUsers(), "LayoutSpecifiedUsers", "json"));
  }

  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasBackgrounds()) {
    query["Backgrounds"] = request.getBackgrounds();
  }

  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.getChannelId();
  }

  if (!!request.hasClockWidgets()) {
    query["ClockWidgets"] = request.getClockWidgets();
  }

  if (!!request.hasImages()) {
    query["Images"] = request.getImages();
  }

  if (!!request.hasLayoutSpecifiedUsersShrink()) {
    query["LayoutSpecifiedUsers"] = request.getLayoutSpecifiedUsersShrink();
  }

  if (!!request.hasPanes()) {
    query["Panes"] = request.getPanes();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  if (!!request.hasTexts()) {
    query["Texts"] = request.getTexts();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyViewLayout"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyViewLayoutResponse>();
}

/**
 * @summary Configures the mixed stream layout.
 *
 * @description ### QPS limit
 * The QPS limit per user is 10 calls per second. If this limit is exceeded, API calls are throttled, which may affect your services. Call the API at a reasonable rate.
 *
 * @param request ModifyViewLayoutRequest
 * @return ModifyViewLayoutResponse
 */
ModifyViewLayoutResponse Client::modifyViewLayout(const ModifyViewLayoutRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyViewLayoutWithOptions(request, runtime);
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
    request.setBackgroundMusicShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBackgroundMusic(), "BackgroundMusic", "json"));
  }

  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasBackgroundMusicShrink()) {
    query["BackgroundMusic"] = request.getBackgroundMusicShrink();
  }

  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.getChannelId();
  }

  if (!!request.hasCustomAttribute()) {
    query["CustomAttribute"] = request.getCustomAttribute();
  }

  if (!!request.hasInterruptable()) {
    query["Interruptable"] = request.getInterruptable();
  }

  if (!!request.hasMessage()) {
    query["Message"] = request.getMessage();
  }

  if (!!request.hasPriority()) {
    query["Priority"] = request.getPriority();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
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
 * @summary Call the RemoveTerminals operation to remove specified end users from a channel.
 *
 * @description # Usage notes
 * This API removes specified end users from a channel.
 * # QPS limit
 * The queries per second (QPS) limit for this API is 1,000 calls per minute per user. If you exceed the limit, API calls are subject to rate limiting, which may affect your business. Call this API at a reasonable rate. For more information, see [QPS limit](https://help.aliyun.com/document_detail/341645.html).
 *
 * @param request RemoveTerminalsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveTerminalsResponse
 */
RemoveTerminalsResponse Client::removeTerminalsWithOptions(const RemoveTerminalsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.getChannelId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasTerminalIds()) {
    query["TerminalIds"] = request.getTerminalIds();
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
 * @summary Call the RemoveTerminals operation to remove specified end users from a channel.
 *
 * @description # Usage notes
 * This API removes specified end users from a channel.
 * # QPS limit
 * The queries per second (QPS) limit for this API is 1,000 calls per minute per user. If you exceed the limit, API calls are subject to rate limiting, which may affect your business. Call this API at a reasonable rate. For more information, see [QPS limit](https://help.aliyun.com/document_detail/341645.html).
 *
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
 * @description ### How-To  
 * This API is used to kick users out of an online channel.  
 * ### queries per second (QPS) Limit  
 * The QPS limit for this API is 10 requests per second per user. If the limit is exceeded, API calls will be subject to Rate Limiting, which may Impact your business. Please invoke the API appropriately.
 *
 * @param request RemoveUsersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveUsersResponse
 */
RemoveUsersResponse Client::removeUsersWithOptions(const RemoveUsersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.getChannelId();
  }

  if (!!request.hasUsers()) {
    query["Users"] = request.getUsers();
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
 * @description ### How-To  
 * This API is used to kick users out of an online channel.  
 * ### queries per second (QPS) Limit  
 * The QPS limit for this API is 10 requests per second per user. If the limit is exceeded, API calls will be subject to Rate Limiting, which may Impact your business. Please invoke the API appropriately.
 *
 * @param request RemoveUsersRequest
 * @return RemoveUsersResponse
 */
RemoveUsersResponse Client::removeUsers(const RemoveUsersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeUsersWithOptions(request, runtime);
}

/**
 * @summary Cancels a SIP invite.
 *
 * @description ### QPS limit
 * The queries per second (QPS) limit for this API is 10 per user. If you exceed this limit, API calls are subject to rate limiting, which may affect your business. Call this API at a reasonable frequency.
 *
 * @param request RtcCancelSipInviteRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RtcCancelSipInviteResponse
 */
RtcCancelSipInviteResponse Client::rtcCancelSipInviteWithOptions(const RtcCancelSipInviteRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.getChannelId();
  }

  if (!!request.hasDeviceType()) {
    query["DeviceType"] = request.getDeviceType();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RtcCancelSipInvite"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RtcCancelSipInviteResponse>();
}

/**
 * @summary Cancels a SIP invite.
 *
 * @description ### QPS limit
 * The queries per second (QPS) limit for this API is 10 per user. If you exceed this limit, API calls are subject to rate limiting, which may affect your business. Call this API at a reasonable frequency.
 *
 * @param request RtcCancelSipInviteRequest
 * @return RtcCancelSipInviteResponse
 */
RtcCancelSipInviteResponse Client::rtcCancelSipInvite(const RtcCancelSipInviteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return rtcCancelSipInviteWithOptions(request, runtime);
}

/**
 * @summary Sends DTMF key signals to a target OneRTC SIP call in a specified channel.
 *
 * @param request RtcSendSipDtmfRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RtcSendSipDtmfResponse
 */
RtcSendSipDtmfResponse Client::rtcSendSipDtmfWithOptions(const RtcSendSipDtmfRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.getChannelId();
  }

  if (!!request.hasChannelUserId()) {
    query["ChannelUserId"] = request.getChannelUserId();
  }

  if (!!request.hasDeviceType()) {
    query["DeviceType"] = request.getDeviceType();
  }

  if (!!request.hasDigits()) {
    query["Digits"] = request.getDigits();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RtcSendSipDtmf"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RtcSendSipDtmfResponse>();
}

/**
 * @summary Sends DTMF key signals to a target OneRTC SIP call in a specified channel.
 *
 * @param request RtcSendSipDtmfRequest
 * @return RtcSendSipDtmfResponse
 */
RtcSendSipDtmfResponse Client::rtcSendSipDtmf(const RtcSendSipDtmfRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return rtcSendSipDtmfWithOptions(request, runtime);
}

/**
 * @summary Invites a SIP endpoint to join a channel.
 *
 * @description ### Rate limit
 * The queries per second (QPS) limit for a single user is 10. If the limit is exceeded, API calls are throttled, which may affect your services. Call this API operation at a reasonable frequency.
 *
 * @param request RtcSipInviteMemberRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RtcSipInviteMemberResponse
 */
RtcSipInviteMemberResponse Client::rtcSipInviteMemberWithOptions(const RtcSipInviteMemberRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasAppToken()) {
    query["AppToken"] = request.getAppToken();
  }

  if (!!request.hasCallNumber()) {
    query["CallNumber"] = request.getCallNumber();
  }

  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.getChannelId();
  }

  if (!!request.hasDeviceType()) {
    query["DeviceType"] = request.getDeviceType();
  }

  if (!!request.hasRegistered()) {
    query["Registered"] = request.getRegistered();
  }

  if (!!request.hasServerAddress()) {
    query["ServerAddress"] = request.getServerAddress();
  }

  if (!!request.hasSipDisplayName()) {
    query["SipDisplayName"] = request.getSipDisplayName();
  }

  if (!!request.hasSipRoomId()) {
    query["SipRoomId"] = request.getSipRoomId();
  }

  if (!!request.hasSipUri()) {
    query["SipUri"] = request.getSipUri();
  }

  if (!!request.hasSipUserAgent()) {
    query["SipUserAgent"] = request.getSipUserAgent();
  }

  if (!!request.hasSipUserId()) {
    query["SipUserId"] = request.getSipUserId();
  }

  if (!!request.hasSipUserPassword()) {
    query["SipUserPassword"] = request.getSipUserPassword();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  if (!!request.hasUid()) {
    query["Uid"] = request.getUid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RtcSipInviteMember"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RtcSipInviteMemberResponse>();
}

/**
 * @summary Invites a SIP endpoint to join a channel.
 *
 * @description ### Rate limit
 * The queries per second (QPS) limit for a single user is 10. If the limit is exceeded, API calls are throttled, which may affect your services. Call this API operation at a reasonable frequency.
 *
 * @param request RtcSipInviteMemberRequest
 * @return RtcSipInviteMemberResponse
 */
RtcSipInviteMemberResponse Client::rtcSipInviteMember(const RtcSipInviteMemberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return rtcSipInviteMemberWithOptions(request, runtime);
}

/**
 * @summary Mutes or unmutes the microphone for a SIP endpoint.
 *
 * @description ### QPS limits
 * The QPS limit for a single user is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your services. Call this API operation at a reasonable frequency.
 *
 * @param request RtcSipMuteRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RtcSipMuteResponse
 */
RtcSipMuteResponse Client::rtcSipMuteWithOptions(const RtcSipMuteRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.getChannelId();
  }

  if (!!request.hasOperations()) {
    query["Operations"] = request.getOperations();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RtcSipMute"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RtcSipMuteResponse>();
}

/**
 * @summary Mutes or unmutes the microphone for a SIP endpoint.
 *
 * @description ### QPS limits
 * The QPS limit for a single user is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your services. Call this API operation at a reasonable frequency.
 *
 * @param request RtcSipMuteRequest
 * @return RtcSipMuteResponse
 */
RtcSipMuteResponse Client::rtcSipMute(const RtcSipMuteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return rtcSipMuteWithOptions(request, runtime);
}

/**
 * @summary Starts an AI agent.
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
    request.setRtcConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRtcConfig(), "RtcConfig", "json"));
  }

  if (!!tmpReq.hasVoiceChatConfig()) {
    request.setVoiceChatConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getVoiceChatConfig(), "VoiceChatConfig", "json"));
  }

  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.getChannelId();
  }

  if (!!request.hasRtcConfigShrink()) {
    query["RtcConfig"] = request.getRtcConfigShrink();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  if (!!request.hasVoiceChatConfigShrink()) {
    query["VoiceChatConfig"] = request.getVoiceChatConfigShrink();
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
 * @summary Starts an AI agent.
 *
 * @param request StartAgentRequest
 * @return StartAgentResponse
 */
StartAgentResponse Client::startAgent(const StartAgentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startAgentWithOptions(request, runtime);
}

/**
 * @summary Starts an event callback.
 *
 * @description ### QPS limits
 * The queries per second (QPS) limit for this API is 10 calls per second per user. If you exceed the limit, API calls are subject to rate limiting, which may affect your business. Call the API at a reasonable rate.
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
    request.setCallbackShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCallback(), "Callback", "json"));
  }

  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasCallbackShrink()) {
    query["Callback"] = request.getCallbackShrink();
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
 * @summary Starts an event callback.
 *
 * @description ### QPS limits
 * The queries per second (QPS) limit for this API is 10 calls per second per user. If you exceed the limit, API calls are subject to rate limiting, which may affect your business. Call the API at a reasonable rate.
 *
 * @param request StartCategoryCallbackRequest
 * @return StartCategoryCallbackResponse
 */
StartCategoryCallbackResponse Client::startCategoryCallback(const StartCategoryCallbackRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startCategoryCallbackWithOptions(request, runtime);
}

/**
 * @summary Starts an intelligent meeting minutes task.
 *
 * @description ### Usage notes
 * This operation starts a meeting minutes task for an online channel. If you need meeting minutes and subtitles, enable all features.
 * ### QPS limits
 * The queries per second (QPS) limit per user is 10. If the limit is exceeded, API calls are throttled, which may affect your services. Call the operation at a reasonable frequency.
 * > Concurrency limits
 * > - Only one meeting minutes task can run in the same channel at a time.
 * > - You can start and stop meeting minutes tasks multiple times in the same channel, but the TaskId must be different each time.
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
    request.setAutoChaptersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAutoChapters(), "AutoChapters", "json"));
  }

  if (!!tmpReq.hasCustomPrompt()) {
    request.setCustomPromptShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCustomPrompt(), "CustomPrompt", "json"));
  }

  if (!!tmpReq.hasMeetingAssistance()) {
    request.setMeetingAssistanceShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getMeetingAssistance(), "MeetingAssistance", "json"));
  }

  if (!!tmpReq.hasRealtimeSubtitle()) {
    request.setRealtimeSubtitleShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getRealtimeSubtitle(), "RealtimeSubtitle", "json"));
  }

  if (!!tmpReq.hasServiceInspection()) {
    request.setServiceInspectionShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getServiceInspection(), "ServiceInspection", "json"));
  }

  if (!!tmpReq.hasSummarization()) {
    request.setSummarizationShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSummarization(), "Summarization", "json"));
  }

  if (!!tmpReq.hasTextPolish()) {
    request.setTextPolishShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTextPolish(), "TextPolish", "json"));
  }

  if (!!tmpReq.hasTranscription()) {
    request.setTranscriptionShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTranscription(), "Transcription", "json"));
  }

  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasAutoChaptersShrink()) {
    query["AutoChapters"] = request.getAutoChaptersShrink();
  }

  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.getChannelId();
  }

  if (!!request.hasCustomPromptShrink()) {
    query["CustomPrompt"] = request.getCustomPromptShrink();
  }

  if (!!request.hasLanguageHints()) {
    query["LanguageHints"] = request.getLanguageHints();
  }

  if (!!request.hasMeetingAssistanceShrink()) {
    query["MeetingAssistance"] = request.getMeetingAssistanceShrink();
  }

  if (!!request.hasRealtimeSubtitleShrink()) {
    query["RealtimeSubtitle"] = request.getRealtimeSubtitleShrink();
  }

  if (!!request.hasServiceInspectionShrink()) {
    query["ServiceInspection"] = request.getServiceInspectionShrink();
  }

  if (!!request.hasSourceLanguage()) {
    query["SourceLanguage"] = request.getSourceLanguage();
  }

  if (!!request.hasStorageConfig()) {
    query["StorageConfig"] = request.getStorageConfig();
  }

  if (!!request.hasSummarizationShrink()) {
    query["Summarization"] = request.getSummarizationShrink();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  if (!!request.hasTextPolishShrink()) {
    query["TextPolish"] = request.getTextPolishShrink();
  }

  if (!!request.hasTranscriptionShrink()) {
    query["Transcription"] = request.getTranscriptionShrink();
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
 * @summary Starts an intelligent meeting minutes task.
 *
 * @description ### Usage notes
 * This operation starts a meeting minutes task for an online channel. If you need meeting minutes and subtitles, enable all features.
 * ### QPS limits
 * The queries per second (QPS) limit per user is 10. If the limit is exceeded, API calls are throttled, which may affect your services. Call the operation at a reasonable frequency.
 * > Concurrency limits
 * > - Only one meeting minutes task can run in the same channel at a time.
 * > - You can start and stop meeting minutes tasks multiple times in the same channel, but the TaskId must be different each time.
 *
 * @param request StartCloudNoteRequest
 * @return StartCloudNoteResponse
 */
StartCloudNoteResponse Client::startCloudNote(const StartCloudNoteRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startCloudNoteWithOptions(request, runtime);
}

/**
 * @summary Starts a cloud recording task.
 *
 * @description ### Usage notes
 * This operation starts a cloud recording task for an online channel.
 * ### QPS limit
 * The queries per second (QPS) limit for a single user is 10. If the limit is exceeded, API calls are throttled, which may affect your services. Call this operation at a reasonable frequency.
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
    request.setLayoutSpecifiedUsersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getLayoutSpecifiedUsers(), "LayoutSpecifiedUsers", "json"));
  }

  if (!!tmpReq.hasSingleStreamingRecord()) {
    request.setSingleStreamingRecordShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSingleStreamingRecord(), "SingleStreamingRecord", "json"));
  }

  json query = {};
  if (!!request.hasAnnotation()) {
    query["Annotation"] = request.getAnnotation();
  }

  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasBackgrounds()) {
    query["Backgrounds"] = request.getBackgrounds();
  }

  if (!!request.hasBgColor()) {
    query["BgColor"] = request.getBgColor();
  }

  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.getChannelId();
  }

  if (!!request.hasClockWidgets()) {
    query["ClockWidgets"] = request.getClockWidgets();
  }

  if (!!request.hasCropMode()) {
    query["CropMode"] = request.getCropMode();
  }

  if (!!request.hasImages()) {
    query["Images"] = request.getImages();
  }

  if (!!request.hasLayoutSpecifiedUsersShrink()) {
    query["LayoutSpecifiedUsers"] = request.getLayoutSpecifiedUsersShrink();
  }

  if (!!request.hasPanes()) {
    query["Panes"] = request.getPanes();
  }

  if (!!request.hasRecordMode()) {
    query["RecordMode"] = request.getRecordMode();
  }

  if (!!request.hasRegionColor()) {
    query["RegionColor"] = request.getRegionColor();
  }

  if (!!request.hasReservePaneForNoCameraUser()) {
    query["ReservePaneForNoCameraUser"] = request.getReservePaneForNoCameraUser();
  }

  if (!!request.hasShowDefaultBackgroundOnMute()) {
    query["ShowDefaultBackgroundOnMute"] = request.getShowDefaultBackgroundOnMute();
  }

  if (!!request.hasSingleStreamingRecordShrink()) {
    query["SingleStreamingRecord"] = request.getSingleStreamingRecordShrink();
  }

  if (!!request.hasStartWithoutChannel()) {
    query["StartWithoutChannel"] = request.getStartWithoutChannel();
  }

  if (!!request.hasStartWithoutChannelWaitTime()) {
    query["StartWithoutChannelWaitTime"] = request.getStartWithoutChannelWaitTime();
  }

  if (!!request.hasStorageConfig()) {
    query["StorageConfig"] = request.getStorageConfig();
  }

  if (!!request.hasSubHighResolutionStream()) {
    query["SubHighResolutionStream"] = request.getSubHighResolutionStream();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  if (!!request.hasTexts()) {
    query["Texts"] = request.getTexts();
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
 * @summary Starts a cloud recording task.
 *
 * @description ### Usage notes
 * This operation starts a cloud recording task for an online channel.
 * ### QPS limit
 * The queries per second (QPS) limit for a single user is 10. If the limit is exceeded, API calls are throttled, which may affect your services. Call this operation at a reasonable frequency.
 *
 * @param request StartCloudRecordRequest
 * @return StartCloudRecordResponse
 */
StartCloudRecordResponse Client::startCloudRecord(const StartCloudRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startCloudRecordWithOptions(request, runtime);
}

/**
 * @summary Starts a bypass relaying task.
 *
 * @description # Usage notes
 * This operation is used to start a bypass relaying task. When you use the bypass relaying service, ApsaraVideo Live has the following limits:
 * <props="china">- For the concurrency limit on tasks, see [Concurrency limits](https://help.aliyun.com/document_detail/71050.html#section-eaz-anq-a47). If you have special requirements, [submit a ticket](https://selfservice.console.aliyun.com/ticket/createIndex) two weeks in advance.
 * <props="intl">- For the concurrency limit on tasks, see [Concurrency limits](https://www.alibabacloud.com/help/rtc-61399/latest/60e652#section-eaz-anq-a47). If you have special requirements, [submit a ticket](https://workorder-intl.console.aliyun.com/#/ticket/createIndex) two weeks in advance.
 * - If the transcoding feature is disabled, each account can concurrently push up to 20 original-quality live streams per live streaming accelerated domain name by default. If you have special requirements, [submit a ticket](https://selfservice.console.aliyun.com/ticket/createIndex).
 * - If the transcoding feature is enabled, each account can concurrently push up to 10 transcoded live streams per live streaming accelerated domain name by default. If you have special requirements, [submit a ticket](https://selfservice.console.aliyun.com/ticket/createIndex).
 * # QPS limit
 * The QPS limit for a single user calling this operation is 500 queries per second. If the limit is exceeded, API calls are throttled, which may affect your business. Make API calls at a reasonable frequency. For more information, see [QPS limits](https://help.aliyun.com/document_detail/341645.html).
 *
 * @param request StartMPUTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartMPUTaskResponse
 */
StartMPUTaskResponse Client::startMPUTaskWithOptions(const StartMPUTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasBackgroundColor()) {
    query["BackgroundColor"] = request.getBackgroundColor();
  }

  if (!!request.hasBackgrounds()) {
    query["Backgrounds"] = request.getBackgrounds();
  }

  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.getChannelId();
  }

  if (!!request.hasClockWidgets()) {
    query["ClockWidgets"] = request.getClockWidgets();
  }

  if (!!request.hasCropMode()) {
    query["CropMode"] = request.getCropMode();
  }

  if (!!request.hasLayoutIds()) {
    query["LayoutIds"] = request.getLayoutIds();
  }

  if (!!request.hasMediaEncode()) {
    query["MediaEncode"] = request.getMediaEncode();
  }

  if (!!request.hasMixMode()) {
    query["MixMode"] = request.getMixMode();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPayloadType()) {
    query["PayloadType"] = request.getPayloadType();
  }

  if (!!request.hasReportVad()) {
    query["ReportVad"] = request.getReportVad();
  }

  if (!!request.hasRtpExtInfo()) {
    query["RtpExtInfo"] = request.getRtpExtInfo();
  }

  if (!!request.hasSourceType()) {
    query["SourceType"] = request.getSourceType();
  }

  if (!!request.hasStreamType()) {
    query["StreamType"] = request.getStreamType();
  }

  if (!!request.hasStreamURL()) {
    query["StreamURL"] = request.getStreamURL();
  }

  if (!!request.hasSubSpecAudioUsers()) {
    query["SubSpecAudioUsers"] = request.getSubSpecAudioUsers();
  }

  if (!!request.hasSubSpecCameraUsers()) {
    query["SubSpecCameraUsers"] = request.getSubSpecCameraUsers();
  }

  if (!!request.hasSubSpecShareScreenUsers()) {
    query["SubSpecShareScreenUsers"] = request.getSubSpecShareScreenUsers();
  }

  if (!!request.hasSubSpecUsers()) {
    query["SubSpecUsers"] = request.getSubSpecUsers();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  if (!!request.hasTaskType()) {
    query["TaskType"] = request.getTaskType();
  }

  if (!!request.hasTimeStampRef()) {
    query["TimeStampRef"] = request.getTimeStampRef();
  }

  if (!!request.hasUnsubSpecAudioUsers()) {
    query["UnsubSpecAudioUsers"] = request.getUnsubSpecAudioUsers();
  }

  if (!!request.hasUnsubSpecCameraUsers()) {
    query["UnsubSpecCameraUsers"] = request.getUnsubSpecCameraUsers();
  }

  if (!!request.hasUnsubSpecShareScreenUsers()) {
    query["UnsubSpecShareScreenUsers"] = request.getUnsubSpecShareScreenUsers();
  }

  if (!!request.hasUserPanes()) {
    query["UserPanes"] = request.getUserPanes();
  }

  if (!!request.hasVadInterval()) {
    query["VadInterval"] = request.getVadInterval();
  }

  if (!!request.hasWatermarks()) {
    query["Watermarks"] = request.getWatermarks();
  }

  json body = {};
  json bodyFlat = {};
  if (!!request.hasEnhancedParam()) {
    bodyFlat["EnhancedParam"] = request.getEnhancedParam();
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
 * @summary Starts a bypass relaying task.
 *
 * @description # Usage notes
 * This operation is used to start a bypass relaying task. When you use the bypass relaying service, ApsaraVideo Live has the following limits:
 * <props="china">- For the concurrency limit on tasks, see [Concurrency limits](https://help.aliyun.com/document_detail/71050.html#section-eaz-anq-a47). If you have special requirements, [submit a ticket](https://selfservice.console.aliyun.com/ticket/createIndex) two weeks in advance.
 * <props="intl">- For the concurrency limit on tasks, see [Concurrency limits](https://www.alibabacloud.com/help/rtc-61399/latest/60e652#section-eaz-anq-a47). If you have special requirements, [submit a ticket](https://workorder-intl.console.aliyun.com/#/ticket/createIndex) two weeks in advance.
 * - If the transcoding feature is disabled, each account can concurrently push up to 20 original-quality live streams per live streaming accelerated domain name by default. If you have special requirements, [submit a ticket](https://selfservice.console.aliyun.com/ticket/createIndex).
 * - If the transcoding feature is enabled, each account can concurrently push up to 10 transcoded live streams per live streaming accelerated domain name by default. If you have special requirements, [submit a ticket](https://selfservice.console.aliyun.com/ticket/createIndex).
 * # QPS limit
 * The QPS limit for a single user calling this operation is 500 queries per second. If the limit is exceeded, API calls are throttled, which may affect your business. Make API calls at a reasonable frequency. For more information, see [QPS limits](https://help.aliyun.com/document_detail/341645.html).
 *
 * @param request StartMPUTaskRequest
 * @return StartMPUTaskResponse
 */
StartMPUTaskResponse Client::startMPUTask(const StartMPUTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startMPUTaskWithOptions(request, runtime);
}

/**
 * @summary Starts a video recording task.
 *
 * @description # Usage notes
 * - Before you call this operation, you must call [AddRecordTemplate](https://help.aliyun.com/document_detail/193625.html) to add a recording configuration template.
 * <props="china">- By default, you can start a maximum of 100 recording tasks at the same time. If the limit is exceeded, new recording tasks become unavailable. If you have special requirements, [submit a ticket](https://selfservice.console.aliyun.com/ticket/createIndex).
 * <props="intl">- By default, you can start a maximum of 100 recording tasks at the same time. If the limit is exceeded, new recording tasks become unavailable. If you have special requirements, [submit a ticket](https://workorder-intl.console.aliyun.com/#/ticket/createIndex).
 * # QPS limit
 * The QPS limit for a single user is 500 queries per second. If the limit is exceeded, API calls are throttled, which may affect your business. Make API calls properly. For more information, see [QPS limits](https://help.aliyun.com/document_detail/341645.html).
 *
 * @param request StartRecordTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartRecordTaskResponse
 */
StartRecordTaskResponse Client::startRecordTaskWithOptions(const StartRecordTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.getChannelId();
  }

  if (!!request.hasCropMode()) {
    query["CropMode"] = request.getCropMode();
  }

  if (!!request.hasLayoutIds()) {
    query["LayoutIds"] = request.getLayoutIds();
  }

  if (!!request.hasMediaEncode()) {
    query["MediaEncode"] = request.getMediaEncode();
  }

  if (!!request.hasMixMode()) {
    query["MixMode"] = request.getMixMode();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasSourceType()) {
    query["SourceType"] = request.getSourceType();
  }

  if (!!request.hasStreamType()) {
    query["StreamType"] = request.getStreamType();
  }

  if (!!request.hasSubSpecAudioUsers()) {
    query["SubSpecAudioUsers"] = request.getSubSpecAudioUsers();
  }

  if (!!request.hasSubSpecCameraUsers()) {
    query["SubSpecCameraUsers"] = request.getSubSpecCameraUsers();
  }

  if (!!request.hasSubSpecShareScreenUsers()) {
    query["SubSpecShareScreenUsers"] = request.getSubSpecShareScreenUsers();
  }

  if (!!request.hasSubSpecUsers()) {
    query["SubSpecUsers"] = request.getSubSpecUsers();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  if (!!request.hasTaskProfile()) {
    query["TaskProfile"] = request.getTaskProfile();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  if (!!request.hasUnsubSpecAudioUsers()) {
    query["UnsubSpecAudioUsers"] = request.getUnsubSpecAudioUsers();
  }

  if (!!request.hasUnsubSpecCameraUsers()) {
    query["UnsubSpecCameraUsers"] = request.getUnsubSpecCameraUsers();
  }

  if (!!request.hasUnsubSpecShareScreenUsers()) {
    query["UnsubSpecShareScreenUsers"] = request.getUnsubSpecShareScreenUsers();
  }

  if (!!request.hasUserPanes()) {
    query["UserPanes"] = request.getUserPanes();
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
 * @summary Starts a video recording task.
 *
 * @description # Usage notes
 * - Before you call this operation, you must call [AddRecordTemplate](https://help.aliyun.com/document_detail/193625.html) to add a recording configuration template.
 * <props="china">- By default, you can start a maximum of 100 recording tasks at the same time. If the limit is exceeded, new recording tasks become unavailable. If you have special requirements, [submit a ticket](https://selfservice.console.aliyun.com/ticket/createIndex).
 * <props="intl">- By default, you can start a maximum of 100 recording tasks at the same time. If the limit is exceeded, new recording tasks become unavailable. If you have special requirements, [submit a ticket](https://workorder-intl.console.aliyun.com/#/ticket/createIndex).
 * # QPS limit
 * The QPS limit for a single user is 500 queries per second. If the limit is exceeded, API calls are throttled, which may affect your business. Make API calls properly. For more information, see [QPS limits](https://help.aliyun.com/document_detail/341645.html).
 *
 * @param request StartRecordTaskRequest
 * @return StartRecordTaskResponse
 */
StartRecordTaskResponse Client::startRecordTask(const StartRecordTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startRecordTaskWithOptions(request, runtime);
}

/**
 * @summary Starts a bypass streaming task.
 *
 * @description ### Usage notes
 * This operation starts a bypass streaming task for an online channel.
 * ### QPS limit
 * The queries per second (QPS) limit for a single user is 10. If the limit is exceeded, API calls are throttled, which may affect your services. Call this operation at a reasonable frequency.
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
    request.setLayoutSpecifiedUsersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getLayoutSpecifiedUsers(), "LayoutSpecifiedUsers", "json"));
  }

  json query = {};
  if (!!request.hasAnnotation()) {
    query["Annotation"] = request.getAnnotation();
  }

  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasBackgrounds()) {
    query["Backgrounds"] = request.getBackgrounds();
  }

  if (!!request.hasBgColor()) {
    query["BgColor"] = request.getBgColor();
  }

  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.getChannelId();
  }

  if (!!request.hasClockWidgets()) {
    query["ClockWidgets"] = request.getClockWidgets();
  }

  if (!!request.hasCropMode()) {
    query["CropMode"] = request.getCropMode();
  }

  if (!!request.hasImages()) {
    query["Images"] = request.getImages();
  }

  if (!!request.hasLayoutSpecifiedUsersShrink()) {
    query["LayoutSpecifiedUsers"] = request.getLayoutSpecifiedUsersShrink();
  }

  if (!!request.hasPanes()) {
    query["Panes"] = request.getPanes();
  }

  if (!!request.hasRegionColor()) {
    query["RegionColor"] = request.getRegionColor();
  }

  if (!!request.hasReservePaneForNoCameraUser()) {
    query["ReservePaneForNoCameraUser"] = request.getReservePaneForNoCameraUser();
  }

  if (!!request.hasShowDefaultBackgroundOnMute()) {
    query["ShowDefaultBackgroundOnMute"] = request.getShowDefaultBackgroundOnMute();
  }

  if (!!request.hasSpecMixedUserList()) {
    query["SpecMixedUserList"] = request.getSpecMixedUserList();
  }

  if (!!request.hasStartWithoutChannel()) {
    query["StartWithoutChannel"] = request.getStartWithoutChannel();
  }

  if (!!request.hasStartWithoutChannelWaitTime()) {
    query["StartWithoutChannelWaitTime"] = request.getStartWithoutChannelWaitTime();
  }

  if (!!request.hasSubHighResolutionStream()) {
    query["SubHighResolutionStream"] = request.getSubHighResolutionStream();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  if (!!request.hasTexts()) {
    query["Texts"] = request.getTexts();
  }

  if (!!request.hasUrl()) {
    query["Url"] = request.getUrl();
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
 * @summary Starts a bypass streaming task.
 *
 * @description ### Usage notes
 * This operation starts a bypass streaming task for an online channel.
 * ### QPS limit
 * The queries per second (QPS) limit for a single user is 10. If the limit is exceeded, API calls are throttled, which may affect your services. Call this operation at a reasonable frequency.
 *
 * @param request StartStreamingOutRequest
 * @return StartStreamingOutResponse
 */
StartStreamingOutResponse Client::startStreamingOut(const StartStreamingOutRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startStreamingOutWithOptions(request, runtime);
}

/**
 * @summary Starts stream mixing.
 *
 * @description ### QPS limits
 * The QPS limit for a single user is 10 queries per second. If the limit is exceeded, API calls are throttled, which may affect your services. Call the API operation at a reasonable frequency.
 *
 * @param tmpReq StartViewRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartViewResponse
 */
StartViewResponse Client::startViewWithOptions(const StartViewRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  StartViewShrinkRequest request = StartViewShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasViewSubscribers()) {
    request.setViewSubscribersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getViewSubscribers(), "ViewSubscribers", "simple"));
  }

  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasBgColor()) {
    query["BgColor"] = request.getBgColor();
  }

  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.getChannelId();
  }

  if (!!request.hasCropMode()) {
    query["CropMode"] = request.getCropMode();
  }

  if (!!request.hasRegionColor()) {
    query["RegionColor"] = request.getRegionColor();
  }

  if (!!request.hasStartWithoutChannel()) {
    query["StartWithoutChannel"] = request.getStartWithoutChannel();
  }

  if (!!request.hasStartWithoutChannelWaitTime()) {
    query["StartWithoutChannelWaitTime"] = request.getStartWithoutChannelWaitTime();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  if (!!request.hasViewContent()) {
    query["ViewContent"] = request.getViewContent();
  }

  if (!!request.hasViewSubscribersShrink()) {
    query["ViewSubscribers"] = request.getViewSubscribersShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartView"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartViewResponse>();
}

/**
 * @summary Starts stream mixing.
 *
 * @description ### QPS limits
 * The QPS limit for a single user is 10 queries per second. If the limit is exceeded, API calls are throttled, which may affect your services. Call the API operation at a reasonable frequency.
 *
 * @param request StartViewRequest
 * @return StartViewResponse
 */
StartViewResponse Client::startView(const StartViewRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startViewWithOptions(request, runtime);
}

/**
 * @summary Stops an AI agent.
 *
 * @param request StopAgentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopAgentResponse
 */
StopAgentResponse Client::stopAgentWithOptions(const StopAgentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.getChannelId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
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
 * @summary Stops an AI agent.
 *
 * @param request StopAgentRequest
 * @return StopAgentResponse
 */
StopAgentResponse Client::stopAgent(const StopAgentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopAgentWithOptions(request, runtime);
}

/**
 * @summary Disables an event callback.
 *
 * @description ### QPS limit
 * The QPS limit for a single user is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your services. Make API calls at a reasonable rate.
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
    request.setCallbackShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCallback(), "Callback", "json"));
  }

  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasCallbackShrink()) {
    query["Callback"] = request.getCallbackShrink();
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
 * @summary Disables an event callback.
 *
 * @description ### QPS limit
 * The QPS limit for a single user is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your services. Make API calls at a reasonable rate.
 *
 * @param request StopCategoryCallbackRequest
 * @return StopCategoryCallbackResponse
 */
StopCategoryCallbackResponse Client::stopCategoryCallback(const StopCategoryCallbackRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopCategoryCallbackWithOptions(request, runtime);
}

/**
 * @summary This API is used by the server to actively shut down a channel.
 *
 * @description ### How-To  
 * This API is used by the server to actively shut down an online channel.  
 * ### queries per second (QPS) Limit  
 * The QPS limit for this API is 10 queries per second per user. If the limit is exceeded, API calls will be subject to rate limiting, which may impact your service. Invoke this API appropriately.
 *
 * @param request StopChannelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopChannelResponse
 */
StopChannelResponse Client::stopChannelWithOptions(const StopChannelRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.getChannelId();
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
 * @summary This API is used by the server to actively shut down a channel.
 *
 * @description ### How-To  
 * This API is used by the server to actively shut down an online channel.  
 * ### queries per second (QPS) Limit  
 * The QPS limit for this API is 10 queries per second per user. If the limit is exceeded, API calls will be subject to rate limiting, which may impact your service. Invoke this API appropriately.
 *
 * @param request StopChannelRequest
 * @return StopChannelResponse
 */
StopChannelResponse Client::stopChannel(const StopChannelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopChannelWithOptions(request, runtime);
}

/**
 * @summary Stops an intelligent meeting minutes task.
 *
 * @description ### Usage notes
 * This operation stops a meeting minutes task for an online channel.
 * ### QPS limits
 * The QPS limit per user is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your services. Call the operation at a reasonable rate.
 *
 * @param request StopCloudNoteRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopCloudNoteResponse
 */
StopCloudNoteResponse Client::stopCloudNoteWithOptions(const StopCloudNoteRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.getChannelId();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
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
 * @summary Stops an intelligent meeting minutes task.
 *
 * @description ### Usage notes
 * This operation stops a meeting minutes task for an online channel.
 * ### QPS limits
 * The QPS limit per user is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your services. Call the operation at a reasonable rate.
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
 * @description ### How-To  
 * This API is used to stop an online channel cloud recording job.  
 * ### queries per second (QPS) Limit  
 * The QPS limit for this API is 10 queries per second (QPS) per user. If the limit is exceeded, API calls will be subject to rate limiting, which may impact your business. Please invoke the API appropriately.
 *
 * @param request StopCloudRecordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopCloudRecordResponse
 */
StopCloudRecordResponse Client::stopCloudRecordWithOptions(const StopCloudRecordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.getChannelId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
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
 * @description ### How-To  
 * This API is used to stop an online channel cloud recording job.  
 * ### queries per second (QPS) Limit  
 * The QPS limit for this API is 10 queries per second (QPS) per user. If the limit is exceeded, API calls will be subject to rate limiting, which may impact your business. Please invoke the API appropriately.
 *
 * @param request StopCloudRecordRequest
 * @return StopCloudRecordResponse
 */
StopCloudRecordResponse Client::stopCloudRecord(const StopCloudRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopCloudRecordWithOptions(request, runtime);
}

/**
 * @summary Calls the StopMPUTask operation to stop a stream relay task.
 *
 * @description # Usage notes
 * - Before you call this operation, you must have called [StartMpuTask](https://help.aliyun.com/document_detail/93183.html) to start a stream relay task.
 * - If you need to stop a stream relay task and the stream relay task is abnormal (the StopMPUTask operation is not called to stop the task), the stream relay task is automatically stopped 2 minutes after the last user leaves the channel. After the task is stopped, if you need to resume stream relay, you need to call the [StartMpuTask](https://help.aliyun.com/document_detail/93183.html) operation again.
 * # QPS limit
 * The QPS limit per user for this operation is 500 times per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call the operation properly. For more information, see [QPS limits](https://help.aliyun.com/document_detail/341645.html).
 *
 * @param request StopMPUTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopMPUTaskResponse
 */
StopMPUTaskResponse Client::stopMPUTaskWithOptions(const StopMPUTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
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
 * @summary Calls the StopMPUTask operation to stop a stream relay task.
 *
 * @description # Usage notes
 * - Before you call this operation, you must have called [StartMpuTask](https://help.aliyun.com/document_detail/93183.html) to start a stream relay task.
 * - If you need to stop a stream relay task and the stream relay task is abnormal (the StopMPUTask operation is not called to stop the task), the stream relay task is automatically stopped 2 minutes after the last user leaves the channel. After the task is stopped, if you need to resume stream relay, you need to call the [StartMpuTask](https://help.aliyun.com/document_detail/93183.html) operation again.
 * # QPS limit
 * The QPS limit per user for this operation is 500 times per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call the operation properly. For more information, see [QPS limits](https://help.aliyun.com/document_detail/341645.html).
 *
 * @param request StopMPUTaskRequest
 * @return StopMPUTaskResponse
 */
StopMPUTaskResponse Client::stopMPUTask(const StopMPUTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopMPUTaskWithOptions(request, runtime);
}

/**
 * @summary Calls the StopRecordTask operation to stop a video recording task.
 *
 * @description # Usage notes
 * Before you call this operation, you must call the [StartRecordTask](https://help.aliyun.com/document_detail/193528.html) operation to start a video recording task.
 * # QPS limit
 * You can call this operation up to 4,000 times per minute per user. If the number of calls per minute exceeds the limit, throttling is triggered, which may affect your business. Call this operation as required. For more information, see [QPS limit](https://help.aliyun.com/document_detail/341645.html).
 *
 * @param request StopRecordTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopRecordTaskResponse
 */
StopRecordTaskResponse Client::stopRecordTaskWithOptions(const StopRecordTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
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
 * @summary Calls the StopRecordTask operation to stop a video recording task.
 *
 * @description # Usage notes
 * Before you call this operation, you must call the [StartRecordTask](https://help.aliyun.com/document_detail/193528.html) operation to start a video recording task.
 * # QPS limit
 * You can call this operation up to 4,000 times per minute per user. If the number of calls per minute exceeds the limit, throttling is triggered, which may affect your business. Call this operation as required. For more information, see [QPS limit](https://help.aliyun.com/document_detail/341645.html).
 *
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
 * @description ### How-To  
 * This API is used to stop a bypass stream ingest job for an online channel.  
 * ### queries per second (QPS) Limit  
 * The QPS limit for this API is 10 queries per second (QPS) per user. If the limit is exceeded, API calls will be subject to rate limiting, which may impact your business. Invoke this API appropriately.
 *
 * @param request StopStreamingOutRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopStreamingOutResponse
 */
StopStreamingOutResponse Client::stopStreamingOutWithOptions(const StopStreamingOutRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.getChannelId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
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
 * @description ### How-To  
 * This API is used to stop a bypass stream ingest job for an online channel.  
 * ### queries per second (QPS) Limit  
 * The QPS limit for this API is 10 queries per second (QPS) per user. If the limit is exceeded, API calls will be subject to rate limiting, which may impact your business. Invoke this API appropriately.
 *
 * @param request StopStreamingOutRequest
 * @return StopStreamingOutResponse
 */
StopStreamingOutResponse Client::stopStreamingOut(const StopStreamingOutRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopStreamingOutWithOptions(request, runtime);
}

/**
 * @summary Stop stream mixing.
 *
 * @description ### QPS limit
 * The QPS limit for this API is 10 requests per second per user. Exceeding this limit triggers rate limiting, which can affect your application. Therefore, call the API judiciously.
 *
 * @param request StopViewRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopViewResponse
 */
StopViewResponse Client::stopViewWithOptions(const StopViewRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.getChannelId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopView"},
    {"version" , "2018-01-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopViewResponse>();
}

/**
 * @summary Stop stream mixing.
 *
 * @description ### QPS limit
 * The QPS limit for this API is 10 requests per second per user. Exceeding this limit triggers rate limiting, which can affect your application. Therefore, call the API judiciously.
 *
 * @param request StopViewRequest
 * @return StopViewResponse
 */
StopViewResponse Client::stopView(const StopViewRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopViewWithOptions(request, runtime);
}

/**
 * @summary Update an AI Agent
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
    request.setVoiceChatConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getVoiceChatConfig(), "VoiceChatConfig", "json"));
  }

  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.getChannelId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  if (!!request.hasVoiceChatConfigShrink()) {
    query["VoiceChatConfig"] = request.getVoiceChatConfigShrink();
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
 * @summary Update an AI Agent
 *
 * @param request UpdateAgentRequest
 * @return UpdateAgentResponse
 */
UpdateAgentResponse Client::updateAgent(const UpdateAgentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAgentWithOptions(request, runtime);
}

/**
 * @summary Modifies an automatic bypass single-stream relay rule.
 *
 * @description # Usage notes
 * Before you call this operation, you must call [CreateAutoLiveStreamRule](https://help.aliyun.com/document_detail/353179.html) to create a bypass rule.
 * # QPS limits
 * The QPS limit for a single user is 1,000 calls per minute. If the limit is exceeded, API calls are throttled, which may affect your business. Make API calls at a reasonable frequency. For more information, see [QPS limits](https://help.aliyun.com/document_detail/341645.html).
 *
 * @param request UpdateAutoLiveStreamRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateAutoLiveStreamRuleResponse
 */
UpdateAutoLiveStreamRuleResponse Client::updateAutoLiveStreamRuleWithOptions(const UpdateAutoLiveStreamRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasCallBack()) {
    query["CallBack"] = request.getCallBack();
  }

  if (!!request.hasChannelIdPrefixes()) {
    query["ChannelIdPrefixes"] = request.getChannelIdPrefixes();
  }

  if (!!request.hasChannelIds()) {
    query["ChannelIds"] = request.getChannelIds();
  }

  if (!!request.hasMediaEncode()) {
    query["MediaEncode"] = request.getMediaEncode();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPlayDomain()) {
    query["PlayDomain"] = request.getPlayDomain();
  }

  if (!!request.hasRuleId()) {
    query["RuleId"] = request.getRuleId();
  }

  if (!!request.hasRuleName()) {
    query["RuleName"] = request.getRuleName();
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
 * @summary Modifies an automatic bypass single-stream relay rule.
 *
 * @description # Usage notes
 * Before you call this operation, you must call [CreateAutoLiveStreamRule](https://help.aliyun.com/document_detail/353179.html) to create a bypass rule.
 * # QPS limits
 * The QPS limit for a single user is 1,000 calls per minute. If the limit is exceeded, API calls are throttled, which may affect your business. Make API calls at a reasonable frequency. For more information, see [QPS limits](https://help.aliyun.com/document_detail/341645.html).
 *
 * @param request UpdateAutoLiveStreamRuleRequest
 * @return UpdateAutoLiveStreamRuleResponse
 */
UpdateAutoLiveStreamRuleResponse Client::updateAutoLiveStreamRule(const UpdateAutoLiveStreamRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateAutoLiveStreamRuleWithOptions(request, runtime);
}

/**
 * @summary Updates a cloud recording task.
 *
 * @description ### Usage
 * Updates a cloud recording task for an online channel.
 * ### QPS limit
 * This API supports up to 10 requests per second per user. Exceeding this limit triggers rate limiting, which may affect your service. Call the API responsibly.
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
    request.setLayoutSpecifiedUsersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getLayoutSpecifiedUsers(), "LayoutSpecifiedUsers", "json"));
  }

  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasBackgrounds()) {
    query["Backgrounds"] = request.getBackgrounds();
  }

  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.getChannelId();
  }

  if (!!request.hasClockWidgets()) {
    query["ClockWidgets"] = request.getClockWidgets();
  }

  if (!!request.hasImages()) {
    query["Images"] = request.getImages();
  }

  if (!!request.hasLayoutSpecifiedUsersShrink()) {
    query["LayoutSpecifiedUsers"] = request.getLayoutSpecifiedUsersShrink();
  }

  if (!!request.hasPanes()) {
    query["Panes"] = request.getPanes();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  if (!!request.hasTexts()) {
    query["Texts"] = request.getTexts();
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
 * @summary Updates a cloud recording task.
 *
 * @description ### Usage
 * Updates a cloud recording task for an online channel.
 * ### QPS limit
 * This API supports up to 10 requests per second per user. Exceeding this limit triggers rate limiting, which may affect your service. Call the API responsibly.
 *
 * @param request UpdateCloudRecordRequest
 * @return UpdateCloudRecordResponse
 */
UpdateCloudRecordResponse Client::updateCloudRecord(const UpdateCloudRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateCloudRecordWithOptions(request, runtime);
}

/**
 * @summary Call UpdateMPUTask to update a bypass relay task.
 *
 * @description # Usage notes
 * - Before calling this API, you must have called [StartMpuTask](https://help.aliyun.com/document_detail/93183.html) to start a bypass relay task.
 * - This API must be called while the task is running normally. Calls are invalid when the task has not started, has ended, or is in an abnormal state. You can call [GetMPUTaskStatus](https://help.aliyun.com/document_detail/93181.html) to obtain the task running status.
 * # QPS limit
 * The per-user QPS limit of this API is 4,000 calls per minute. If the limit is exceeded, API calls are throttled, which may affect your business. Please call reasonably. For more information, see [QPS Limits](https://help.aliyun.com/document_detail/341645.html).
 *
 * @param request UpdateMPUTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateMPUTaskResponse
 */
UpdateMPUTaskResponse Client::updateMPUTaskWithOptions(const UpdateMPUTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasBackgroundColor()) {
    query["BackgroundColor"] = request.getBackgroundColor();
  }

  if (!!request.hasBackgrounds()) {
    query["Backgrounds"] = request.getBackgrounds();
  }

  if (!!request.hasClockWidgets()) {
    query["ClockWidgets"] = request.getClockWidgets();
  }

  if (!!request.hasCropMode()) {
    query["CropMode"] = request.getCropMode();
  }

  if (!!request.hasLayoutIds()) {
    query["LayoutIds"] = request.getLayoutIds();
  }

  if (!!request.hasMediaEncode()) {
    query["MediaEncode"] = request.getMediaEncode();
  }

  if (!!request.hasMixMode()) {
    query["MixMode"] = request.getMixMode();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasSourceType()) {
    query["SourceType"] = request.getSourceType();
  }

  if (!!request.hasStreamType()) {
    query["StreamType"] = request.getStreamType();
  }

  if (!!request.hasSubSpecAudioUsers()) {
    query["SubSpecAudioUsers"] = request.getSubSpecAudioUsers();
  }

  if (!!request.hasSubSpecCameraUsers()) {
    query["SubSpecCameraUsers"] = request.getSubSpecCameraUsers();
  }

  if (!!request.hasSubSpecShareScreenUsers()) {
    query["SubSpecShareScreenUsers"] = request.getSubSpecShareScreenUsers();
  }

  if (!!request.hasSubSpecUsers()) {
    query["SubSpecUsers"] = request.getSubSpecUsers();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  if (!!request.hasUnsubSpecAudioUsers()) {
    query["UnsubSpecAudioUsers"] = request.getUnsubSpecAudioUsers();
  }

  if (!!request.hasUnsubSpecCameraUsers()) {
    query["UnsubSpecCameraUsers"] = request.getUnsubSpecCameraUsers();
  }

  if (!!request.hasUnsubSpecShareScreenUsers()) {
    query["UnsubSpecShareScreenUsers"] = request.getUnsubSpecShareScreenUsers();
  }

  if (!!request.hasUserPanes()) {
    query["UserPanes"] = request.getUserPanes();
  }

  if (!!request.hasWatermarks()) {
    query["Watermarks"] = request.getWatermarks();
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
 * @summary Call UpdateMPUTask to update a bypass relay task.
 *
 * @description # Usage notes
 * - Before calling this API, you must have called [StartMpuTask](https://help.aliyun.com/document_detail/93183.html) to start a bypass relay task.
 * - This API must be called while the task is running normally. Calls are invalid when the task has not started, has ended, or is in an abnormal state. You can call [GetMPUTaskStatus](https://help.aliyun.com/document_detail/93181.html) to obtain the task running status.
 * # QPS limit
 * The per-user QPS limit of this API is 4,000 calls per minute. If the limit is exceeded, API calls are throttled, which may affect your business. Please call reasonably. For more information, see [QPS Limits](https://help.aliyun.com/document_detail/341645.html).
 *
 * @param request UpdateMPUTaskRequest
 * @return UpdateMPUTaskResponse
 */
UpdateMPUTaskResponse Client::updateMPUTask(const UpdateMPUTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateMPUTaskWithOptions(request, runtime);
}

/**
 * @summary Updates a video recording task.
 *
 * @description # Usage notes
 * Before you call this operation, you must call [StartRecordTask](https://help.aliyun.com/document_detail/193528.html) to start a video recording task.
 * # QPS limits
 * The QPS limit for a single user is 100 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Make API calls at a reasonable frequency. For more information, see [QPS limits](https://help.aliyun.com/document_detail/341645.html).
 *
 * @param request UpdateRecordTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateRecordTaskResponse
 */
UpdateRecordTaskResponse Client::updateRecordTaskWithOptions(const UpdateRecordTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.getChannelId();
  }

  if (!!request.hasCropMode()) {
    query["CropMode"] = request.getCropMode();
  }

  if (!!request.hasLayoutIds()) {
    query["LayoutIds"] = request.getLayoutIds();
  }

  if (!!request.hasMediaEncode()) {
    query["MediaEncode"] = request.getMediaEncode();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasSubSpecAudioUsers()) {
    query["SubSpecAudioUsers"] = request.getSubSpecAudioUsers();
  }

  if (!!request.hasSubSpecCameraUsers()) {
    query["SubSpecCameraUsers"] = request.getSubSpecCameraUsers();
  }

  if (!!request.hasSubSpecShareScreenUsers()) {
    query["SubSpecShareScreenUsers"] = request.getSubSpecShareScreenUsers();
  }

  if (!!request.hasSubSpecUsers()) {
    query["SubSpecUsers"] = request.getSubSpecUsers();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  if (!!request.hasTaskProfile()) {
    query["TaskProfile"] = request.getTaskProfile();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  if (!!request.hasUnsubSpecAudioUsers()) {
    query["UnsubSpecAudioUsers"] = request.getUnsubSpecAudioUsers();
  }

  if (!!request.hasUnsubSpecCameraUsers()) {
    query["UnsubSpecCameraUsers"] = request.getUnsubSpecCameraUsers();
  }

  if (!!request.hasUnsubSpecShareScreenUsers()) {
    query["UnsubSpecShareScreenUsers"] = request.getUnsubSpecShareScreenUsers();
  }

  if (!!request.hasUserPanes()) {
    query["UserPanes"] = request.getUserPanes();
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
 * @summary Updates a video recording task.
 *
 * @description # Usage notes
 * Before you call this operation, you must call [StartRecordTask](https://help.aliyun.com/document_detail/193528.html) to start a video recording task.
 * # QPS limits
 * The QPS limit for a single user is 100 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Make API calls at a reasonable frequency. For more information, see [QPS limits](https://help.aliyun.com/document_detail/341645.html).
 *
 * @param request UpdateRecordTaskRequest
 * @return UpdateRecordTaskResponse
 */
UpdateRecordTaskResponse Client::updateRecordTask(const UpdateRecordTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateRecordTaskWithOptions(request, runtime);
}

/**
 * @summary Updates a recording configuration template.
 *
 * @description # Usage notes
 * Before you call this operation, you must call [AddRecordTemplate](https://help.aliyun.com/document_detail/193625.html) to add a recording configuration template.
 * # QPS limits
 * The QPS limit for a single user is 100 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Make API calls at a reasonable rate. For more information, see [QPS limits](https://help.aliyun.com/document_detail/341645.html).
 *
 * @param request UpdateRecordTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateRecordTemplateResponse
 */
UpdateRecordTemplateResponse Client::updateRecordTemplateWithOptions(const UpdateRecordTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasBackgroundColor()) {
    query["BackgroundColor"] = request.getBackgroundColor();
  }

  if (!!request.hasBackgrounds()) {
    query["Backgrounds"] = request.getBackgrounds();
  }

  if (!!request.hasClockWidgets()) {
    query["ClockWidgets"] = request.getClockWidgets();
  }

  if (!!request.hasDelayStopTime()) {
    query["DelayStopTime"] = request.getDelayStopTime();
  }

  if (!!request.hasEnableM3u8DateTime()) {
    query["EnableM3u8DateTime"] = request.getEnableM3u8DateTime();
  }

  if (!!request.hasFileSplitInterval()) {
    query["FileSplitInterval"] = request.getFileSplitInterval();
  }

  if (!!request.hasFormats()) {
    query["Formats"] = request.getFormats();
  }

  if (!!request.hasHttpCallbackUrl()) {
    query["HttpCallbackUrl"] = request.getHttpCallbackUrl();
  }

  if (!!request.hasLayoutIds()) {
    query["LayoutIds"] = request.getLayoutIds();
  }

  if (!!request.hasMediaEncode()) {
    query["MediaEncode"] = request.getMediaEncode();
  }

  if (!!request.hasMnsQueue()) {
    query["MnsQueue"] = request.getMnsQueue();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasOssBucket()) {
    query["OssBucket"] = request.getOssBucket();
  }

  if (!!request.hasOssEndpoint()) {
    query["OssEndpoint"] = request.getOssEndpoint();
  }

  if (!!request.hasOssFilePrefix()) {
    query["OssFilePrefix"] = request.getOssFilePrefix();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasTaskProfile()) {
    query["TaskProfile"] = request.getTaskProfile();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  if (!!request.hasWatermarks()) {
    query["Watermarks"] = request.getWatermarks();
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
 * @summary Updates a recording configuration template.
 *
 * @description # Usage notes
 * Before you call this operation, you must call [AddRecordTemplate](https://help.aliyun.com/document_detail/193625.html) to add a recording configuration template.
 * # QPS limits
 * The QPS limit for a single user is 100 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Make API calls at a reasonable rate. For more information, see [QPS limits](https://help.aliyun.com/document_detail/341645.html).
 *
 * @param request UpdateRecordTemplateRequest
 * @return UpdateRecordTemplateResponse
 */
UpdateRecordTemplateResponse Client::updateRecordTemplate(const UpdateRecordTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateRecordTemplateWithOptions(request, runtime);
}

/**
 * @summary Updates a bypass live streaming task.
 *
 * @description ### Usage notes
 * This operation updates a bypass live streaming task for an online channel.
 * ### QPS limit
 * The QPS limit for a single user is 10 requests per second. If the limit is exceeded, API calls are throttled, which may affect your services. Make API calls at a reasonable frequency.
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
    request.setLayoutSpecifiedUsersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getLayoutSpecifiedUsers(), "LayoutSpecifiedUsers", "json"));
  }

  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.getAppId();
  }

  if (!!request.hasBackgrounds()) {
    query["Backgrounds"] = request.getBackgrounds();
  }

  if (!!request.hasBgColor()) {
    query["BgColor"] = request.getBgColor();
  }

  if (!!request.hasChannelId()) {
    query["ChannelId"] = request.getChannelId();
  }

  if (!!request.hasClockWidgets()) {
    query["ClockWidgets"] = request.getClockWidgets();
  }

  if (!!request.hasCropMode()) {
    query["CropMode"] = request.getCropMode();
  }

  if (!!request.hasImages()) {
    query["Images"] = request.getImages();
  }

  if (!!request.hasLayoutSpecifiedUsersShrink()) {
    query["LayoutSpecifiedUsers"] = request.getLayoutSpecifiedUsersShrink();
  }

  if (!!request.hasPanes()) {
    query["Panes"] = request.getPanes();
  }

  if (!!request.hasRegionColor()) {
    query["RegionColor"] = request.getRegionColor();
  }

  if (!!request.hasSpecMixedUserList()) {
    query["SpecMixedUserList"] = request.getSpecMixedUserList();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  if (!!request.hasTexts()) {
    query["Texts"] = request.getTexts();
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
 * @summary Updates a bypass live streaming task.
 *
 * @description ### Usage notes
 * This operation updates a bypass live streaming task for an online channel.
 * ### QPS limit
 * The QPS limit for a single user is 10 requests per second. If the limit is exceeded, API calls are throttled, which may affect your services. Make API calls at a reasonable frequency.
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