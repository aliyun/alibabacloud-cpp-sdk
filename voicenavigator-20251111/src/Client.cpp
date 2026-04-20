#include <darabonba/Core.hpp>
#include <alibabacloud/VoiceNavigator20251111.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::OpenApi::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
using namespace AlibabaCloud::VoiceNavigator20251111::Models;
namespace AlibabaCloud
{
namespace VoiceNavigator20251111
{

AlibabaCloud::VoiceNavigator20251111::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  checkConfig(config);
  this->_endpoint = getEndpoint("voicenavigator", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 开启会话
 *
 * @param request BeginSessionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BeginSessionResponse
 */
FutureGenerator<BeginSessionResponse> Client::beginSessionWithSSE(const BeginSessionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDraftVersion()) {
    query["DraftVersion"] = request.getDraftVersion();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.getScriptId();
  }

  if (!!request.hasVendorParams()) {
    query["VendorParams"] = request.getVendorParams();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BeginSession"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  FutureGenerator<SSEResponse> sseResp = callSSEApi(params, req, runtime);
  for (SSEResponse resp : sseResp) {
    if (!!resp.hasEvent() && !!resp.getEvent().hasData()) {
      json data = json(json::parse(resp.getEvent().getData()));
json       __retrun = json(json({
        {"statusCode" , resp.getStatusCode()},
        {"headers" , resp.getHeaders()},
        {"id" , resp.getEvent().getId()},
        {"event" , resp.getEvent().getEvent()},
        {"body" , data}
      })).get<BeginSessionResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
    }

  }
}

/**
 * @summary 开启会话
 *
 * @param request BeginSessionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BeginSessionResponse
 */
BeginSessionResponse Client::beginSessionWithOptions(const BeginSessionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDraftVersion()) {
    query["DraftVersion"] = request.getDraftVersion();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.getScriptId();
  }

  if (!!request.hasVendorParams()) {
    query["VendorParams"] = request.getVendorParams();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BeginSession"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BeginSessionResponse>();
}

/**
 * @summary 开启会话
 *
 * @param request BeginSessionRequest
 * @return BeginSessionResponse
 */
BeginSessionResponse Client::beginSession(const BeginSessionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return beginSessionWithOptions(request, runtime);
}

/**
 * @summary 发起呼叫
 *
 * @param request BridgeWebCallRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BridgeWebCallResponse
 */
BridgeWebCallResponse Client::bridgeWebCallWithOptions(const BridgeWebCallRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessChannelId()) {
    query["AccessChannelId"] = request.getAccessChannelId();
  }

  if (!!request.hasAccessChannelType()) {
    query["AccessChannelType"] = request.getAccessChannelType();
  }

  if (!!request.hasCaller()) {
    query["Caller"] = request.getCaller();
  }

  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.getDeviceId();
  }

  if (!!request.hasDraftVersion()) {
    query["DraftVersion"] = request.getDraftVersion();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasSampleRate()) {
    query["SampleRate"] = request.getSampleRate();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.getScriptId();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.getTags();
  }

  if (!!request.hasTimeoutSeconds()) {
    query["TimeoutSeconds"] = request.getTimeoutSeconds();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BridgeWebCall"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BridgeWebCallResponse>();
}

/**
 * @summary 发起呼叫
 *
 * @param request BridgeWebCallRequest
 * @return BridgeWebCallResponse
 */
BridgeWebCallResponse Client::bridgeWebCall(const BridgeWebCallRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return bridgeWebCallWithOptions(request, runtime);
}

/**
 * @summary 创建服务提供商
 *
 * @param request CreateCallCenterProviderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCallCenterProviderResponse
 */
CreateCallCenterProviderResponse Client::createCallCenterProviderWithOptions(const CreateCallCenterProviderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDisplayName()) {
    query["DisplayName"] = request.getDisplayName();
  }

  json body = {};
  if (!!request.hasDestination()) {
    body["Destination"] = request.getDestination();
  }

  if (!!request.hasExtras()) {
    body["Extras"] = request.getExtras();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasOriginator()) {
    body["Originator"] = request.getOriginator();
  }

  if (!!request.hasProviderType()) {
    body["ProviderType"] = request.getProviderType();
  }

  if (!!request.hasReferTo()) {
    body["ReferTo"] = request.getReferTo();
  }

  if (!!request.hasTrunkId()) {
    body["TrunkId"] = request.getTrunkId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateCallCenterProvider"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCallCenterProviderResponse>();
}

/**
 * @summary 创建服务提供商
 *
 * @param request CreateCallCenterProviderRequest
 * @return CreateCallCenterProviderResponse
 */
CreateCallCenterProviderResponse Client::createCallCenterProvider(const CreateCallCenterProviderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCallCenterProviderWithOptions(request, runtime);
}

/**
 * @summary 创建实例
 *
 * @param request CreateCloneVoiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCloneVoiceResponse
 */
CreateCloneVoiceResponse Client::createCloneVoiceWithOptions(const CreateCloneVoiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasFileKey()) {
    body["FileKey"] = request.getFileKey();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasModel()) {
    body["Model"] = request.getModel();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateCloneVoice"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCloneVoiceResponse>();
}

/**
 * @summary 创建实例
 *
 * @param request CreateCloneVoiceRequest
 * @return CreateCloneVoiceResponse
 */
CreateCloneVoiceResponse Client::createCloneVoice(const CreateCloneVoiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCloneVoiceWithOptions(request, runtime);
}

/**
 * @summary 创建指令
 *
 * @param request CreateInstructionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateInstructionResponse
 */
CreateInstructionResponse Client::createInstructionWithOptions(const CreateInstructionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCode()) {
    body["Code"] = request.getCode();
  }

  if (!!request.hasConfig()) {
    body["Config"] = request.getConfig();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasType()) {
    body["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateInstruction"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateInstructionResponse>();
}

/**
 * @summary 创建指令
 *
 * @param request CreateInstructionRequest
 * @return CreateInstructionResponse
 */
CreateInstructionResponse Client::createInstruction(const CreateInstructionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createInstructionWithOptions(request, runtime);
}

/**
 * @summary 创建语言模型配置信息
 *
 * @param tmpReq CreateLlmAccessProfileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateLlmAccessProfileResponse
 */
CreateLlmAccessProfileResponse Client::createLlmAccessProfileWithOptions(const CreateLlmAccessProfileRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateLlmAccessProfileShrinkRequest request = CreateLlmAccessProfileShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasProfile()) {
    request.setProfileShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getProfile(), "Profile", "json"));
  }

  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasProfileShrink()) {
    body["Profile"] = request.getProfileShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateLlmAccessProfile"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateLlmAccessProfileResponse>();
}

/**
 * @summary 创建语言模型配置信息
 *
 * @param request CreateLlmAccessProfileRequest
 * @return CreateLlmAccessProfileResponse
 */
CreateLlmAccessProfileResponse Client::createLlmAccessProfile(const CreateLlmAccessProfileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createLlmAccessProfileWithOptions(request, runtime);
}

/**
 * @summary 创建实例
 *
 * @param request CreateScriptRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateScriptResponse
 */
CreateScriptResponse Client::createScriptWithOptions(const CreateScriptRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasConcurrency()) {
    body["Concurrency"] = request.getConcurrency();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasNluEngine()) {
    body["NluEngine"] = request.getNluEngine();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateScript"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateScriptResponse>();
}

/**
 * @summary 创建实例
 *
 * @param request CreateScriptRequest
 * @return CreateScriptResponse
 */
CreateScriptResponse Client::createScript(const CreateScriptRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createScriptWithOptions(request, runtime);
}

/**
 * @summary 创建场景配置
 *
 * @param tmpReq CreateScriptVersionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateScriptVersionResponse
 */
CreateScriptVersionResponse Client::createScriptVersionWithOptions(const CreateScriptVersionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateScriptVersionShrinkRequest request = CreateScriptVersionShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasInteractionConfig()) {
    request.setInteractionConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getInteractionConfig(), "InteractionConfig", "json"));
  }

  if (!!tmpReq.hasLabelConfig()) {
    request.setLabelConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getLabelConfig(), "LabelConfig", "json"));
  }

  if (!!tmpReq.hasScriptProfile()) {
    request.setScriptProfileShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getScriptProfile(), "ScriptProfile", "json"));
  }

  if (!!tmpReq.hasSynthesizerConfig()) {
    request.setSynthesizerConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSynthesizerConfig(), "SynthesizerConfig", "json"));
  }

  if (!!tmpReq.hasTranscriberConfig()) {
    request.setTranscriberConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTranscriberConfig(), "TranscriberConfig", "json"));
  }

  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasInteractionConfigShrink()) {
    body["InteractionConfig"] = request.getInteractionConfigShrink();
  }

  if (!!request.hasLabelConfigShrink()) {
    body["LabelConfig"] = request.getLabelConfigShrink();
  }

  if (!!request.hasScriptId()) {
    body["ScriptId"] = request.getScriptId();
  }

  if (!!request.hasScriptProfileShrink()) {
    body["ScriptProfile"] = request.getScriptProfileShrink();
  }

  if (!!request.hasSourceVersionId()) {
    body["SourceVersionId"] = request.getSourceVersionId();
  }

  if (!!request.hasSynthesizerConfigShrink()) {
    body["SynthesizerConfig"] = request.getSynthesizerConfigShrink();
  }

  if (!!request.hasTranscriberConfigShrink()) {
    body["TranscriberConfig"] = request.getTranscriberConfigShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateScriptVersion"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateScriptVersionResponse>();
}

/**
 * @summary 创建场景配置
 *
 * @param request CreateScriptVersionRequest
 * @return CreateScriptVersionResponse
 */
CreateScriptVersionResponse Client::createScriptVersion(const CreateScriptVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createScriptVersionWithOptions(request, runtime);
}

/**
 * @summary 创建变量
 *
 * @param request CreateVariableRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateVariableResponse
 */
CreateVariableResponse Client::createVariableWithOptions(const CreateVariableRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasDisplayName()) {
    body["DisplayName"] = request.getDisplayName();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateVariable"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateVariableResponse>();
}

/**
 * @summary 创建变量
 *
 * @param request CreateVariableRequest
 * @return CreateVariableResponse
 */
CreateVariableResponse Client::createVariable(const CreateVariableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createVariableWithOptions(request, runtime);
}

/**
 * @summary 创建实例
 *
 * @param tmpReq CreateVocabularyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateVocabularyResponse
 */
CreateVocabularyResponse Client::createVocabularyWithOptions(const CreateVocabularyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateVocabularyShrinkRequest request = CreateVocabularyShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasWords()) {
    request.setWordsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getWords(), "Words", "json"));
  }

  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasWordsShrink()) {
    body["Words"] = request.getWordsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateVocabulary"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateVocabularyResponse>();
}

/**
 * @summary 创建实例
 *
 * @param request CreateVocabularyRequest
 * @return CreateVocabularyResponse
 */
CreateVocabularyResponse Client::createVocabulary(const CreateVocabularyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createVocabularyWithOptions(request, runtime);
}

/**
 * @summary 创建实例
 *
 * @param tmpReq CreateVoiceAccessProfileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateVoiceAccessProfileResponse
 */
CreateVoiceAccessProfileResponse Client::createVoiceAccessProfileWithOptions(const CreateVoiceAccessProfileRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateVoiceAccessProfileShrinkRequest request = CreateVoiceAccessProfileShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasProfile()) {
    request.setProfileShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getProfile(), "Profile", "json"));
  }

  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNlsEngine()) {
    body["NlsEngine"] = request.getNlsEngine();
  }

  if (!!request.hasProfileShrink()) {
    body["Profile"] = request.getProfileShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateVoiceAccessProfile"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateVoiceAccessProfileResponse>();
}

/**
 * @summary 创建实例
 *
 * @param request CreateVoiceAccessProfileRequest
 * @return CreateVoiceAccessProfileResponse
 */
CreateVoiceAccessProfileResponse Client::createVoiceAccessProfile(const CreateVoiceAccessProfileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createVoiceAccessProfileWithOptions(request, runtime);
}

/**
 * @summary 删除服务提供商
 *
 * @param request DeleteCallCenterProviderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCallCenterProviderResponse
 */
DeleteCallCenterProviderResponse Client::deleteCallCenterProviderWithOptions(const DeleteCallCenterProviderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasProviderId()) {
    body["ProviderId"] = request.getProviderId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteCallCenterProvider"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCallCenterProviderResponse>();
}

/**
 * @summary 删除服务提供商
 *
 * @param request DeleteCallCenterProviderRequest
 * @return DeleteCallCenterProviderResponse
 */
DeleteCallCenterProviderResponse Client::deleteCallCenterProvider(const DeleteCallCenterProviderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCallCenterProviderWithOptions(request, runtime);
}

/**
 * @summary 删除场景
 *
 * @param request DeleteCloneVoiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCloneVoiceResponse
 */
DeleteCloneVoiceResponse Client::deleteCloneVoiceWithOptions(const DeleteCloneVoiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCloneVoiceId()) {
    body["CloneVoiceId"] = request.getCloneVoiceId();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteCloneVoice"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCloneVoiceResponse>();
}

/**
 * @summary 删除场景
 *
 * @param request DeleteCloneVoiceRequest
 * @return DeleteCloneVoiceResponse
 */
DeleteCloneVoiceResponse Client::deleteCloneVoice(const DeleteCloneVoiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCloneVoiceWithOptions(request, runtime);
}

/**
 * @summary 删除指令
 *
 * @param request DeleteInstructionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteInstructionResponse
 */
DeleteInstructionResponse Client::deleteInstructionWithOptions(const DeleteInstructionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCode()) {
    body["Code"] = request.getCode();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteInstruction"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteInstructionResponse>();
}

/**
 * @summary 删除指令
 *
 * @param request DeleteInstructionRequest
 * @return DeleteInstructionResponse
 */
DeleteInstructionResponse Client::deleteInstruction(const DeleteInstructionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteInstructionWithOptions(request, runtime);
}

/**
 * @summary 删除语言模型配置信息
 *
 * @param request DeleteLlmAccessProfileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteLlmAccessProfileResponse
 */
DeleteLlmAccessProfileResponse Client::deleteLlmAccessProfileWithOptions(const DeleteLlmAccessProfileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAccessProfileId()) {
    body["AccessProfileId"] = request.getAccessProfileId();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteLlmAccessProfile"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteLlmAccessProfileResponse>();
}

/**
 * @summary 删除语言模型配置信息
 *
 * @param request DeleteLlmAccessProfileRequest
 * @return DeleteLlmAccessProfileResponse
 */
DeleteLlmAccessProfileResponse Client::deleteLlmAccessProfile(const DeleteLlmAccessProfileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteLlmAccessProfileWithOptions(request, runtime);
}

/**
 * @summary 删除场景
 *
 * @param request DeleteScriptRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteScriptResponse
 */
DeleteScriptResponse Client::deleteScriptWithOptions(const DeleteScriptRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasScriptId()) {
    body["ScriptId"] = request.getScriptId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteScript"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteScriptResponse>();
}

/**
 * @summary 删除场景
 *
 * @param request DeleteScriptRequest
 * @return DeleteScriptResponse
 */
DeleteScriptResponse Client::deleteScript(const DeleteScriptRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteScriptWithOptions(request, runtime);
}

/**
 * @summary 删除变量
 *
 * @param request DeleteVariableRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteVariableResponse
 */
DeleteVariableResponse Client::deleteVariableWithOptions(const DeleteVariableRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasVariableId()) {
    body["VariableId"] = request.getVariableId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteVariable"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteVariableResponse>();
}

/**
 * @summary 删除变量
 *
 * @param request DeleteVariableRequest
 * @return DeleteVariableResponse
 */
DeleteVariableResponse Client::deleteVariable(const DeleteVariableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteVariableWithOptions(request, runtime);
}

/**
 * @summary 删除场景
 *
 * @param request DeleteVocabularyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteVocabularyResponse
 */
DeleteVocabularyResponse Client::deleteVocabularyWithOptions(const DeleteVocabularyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasVocabularyId()) {
    body["VocabularyId"] = request.getVocabularyId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteVocabulary"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteVocabularyResponse>();
}

/**
 * @summary 删除场景
 *
 * @param request DeleteVocabularyRequest
 * @return DeleteVocabularyResponse
 */
DeleteVocabularyResponse Client::deleteVocabulary(const DeleteVocabularyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteVocabularyWithOptions(request, runtime);
}

/**
 * @summary 删除场景
 *
 * @param request DeleteVoiceAccessProfileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteVoiceAccessProfileResponse
 */
DeleteVoiceAccessProfileResponse Client::deleteVoiceAccessProfileWithOptions(const DeleteVoiceAccessProfileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAccessProfileId()) {
    body["AccessProfileId"] = request.getAccessProfileId();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DeleteVoiceAccessProfile"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteVoiceAccessProfileResponse>();
}

/**
 * @summary 删除场景
 *
 * @param request DeleteVoiceAccessProfileRequest
 * @return DeleteVoiceAccessProfileResponse
 */
DeleteVoiceAccessProfileResponse Client::deleteVoiceAccessProfile(const DeleteVoiceAccessProfileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteVoiceAccessProfileWithOptions(request, runtime);
}

/**
 * @summary 开启会话
 *
 * @param request DialogueRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DialogueResponse
 */
FutureGenerator<DialogueResponse> Client::dialogueWithSSE(const DialogueRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasExtras()) {
    query["Extras"] = request.getExtras();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.getScriptId();
  }

  if (!!request.hasSessionId()) {
    query["SessionId"] = request.getSessionId();
  }

  if (!!request.hasUtterance()) {
    query["Utterance"] = request.getUtterance();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "Dialogue"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  FutureGenerator<SSEResponse> sseResp = callSSEApi(params, req, runtime);
  for (SSEResponse resp : sseResp) {
    if (!!resp.hasEvent() && !!resp.getEvent().hasData()) {
      json data = json(json::parse(resp.getEvent().getData()));
json       __retrun = json(json({
        {"statusCode" , resp.getStatusCode()},
        {"headers" , resp.getHeaders()},
        {"id" , resp.getEvent().getId()},
        {"event" , resp.getEvent().getEvent()},
        {"body" , data}
      })).get<DialogueResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
    }

  }
}

/**
 * @summary 开启会话
 *
 * @param request DialogueRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DialogueResponse
 */
DialogueResponse Client::dialogueWithOptions(const DialogueRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasExtras()) {
    query["Extras"] = request.getExtras();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.getScriptId();
  }

  if (!!request.hasSessionId()) {
    query["SessionId"] = request.getSessionId();
  }

  if (!!request.hasUtterance()) {
    query["Utterance"] = request.getUtterance();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "Dialogue"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DialogueResponse>();
}

/**
 * @summary 开启会话
 *
 * @param request DialogueRequest
 * @return DialogueResponse
 */
DialogueResponse Client::dialogue(const DialogueRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return dialogueWithOptions(request, runtime);
}

/**
 * @summary 禁用消息订阅
 *
 * @param request DisableSubscriptionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableSubscriptionResponse
 */
DisableSubscriptionResponse Client::disableSubscriptionWithOptions(const DisableSubscriptionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "DisableSubscription"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableSubscriptionResponse>();
}

/**
 * @summary 禁用消息订阅
 *
 * @param request DisableSubscriptionRequest
 * @return DisableSubscriptionResponse
 */
DisableSubscriptionResponse Client::disableSubscription(const DisableSubscriptionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableSubscriptionWithOptions(request, runtime);
}

/**
 * @summary 结束会话
 *
 * @param request EndSessionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EndSessionResponse
 */
EndSessionResponse Client::endSessionWithOptions(const EndSessionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasScriptId()) {
    query["ScriptId"] = request.getScriptId();
  }

  if (!!request.hasSessionId()) {
    query["SessionId"] = request.getSessionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EndSession"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EndSessionResponse>();
}

/**
 * @summary 结束会话
 *
 * @param request EndSessionRequest
 * @return EndSessionResponse
 */
EndSessionResponse Client::endSession(const EndSessionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return endSessionWithOptions(request, runtime);
}

/**
 * @summary 获取实例详情
 *
 * @param request ExportScriptRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExportScriptResponse
 */
ExportScriptResponse Client::exportScriptWithOptions(const ExportScriptRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasScriptId()) {
    body["ScriptId"] = request.getScriptId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ExportScript"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExportScriptResponse>();
}

/**
 * @summary 获取实例详情
 *
 * @param request ExportScriptRequest
 * @return ExportScriptResponse
 */
ExportScriptResponse Client::exportScript(const ExportScriptRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return exportScriptWithOptions(request, runtime);
}

/**
 * @summary 导出热词
 *
 * @param tmpReq ExportVocabularyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExportVocabularyResponse
 */
ExportVocabularyResponse Client::exportVocabularyWithOptions(const ExportVocabularyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ExportVocabularyShrinkRequest request = ExportVocabularyShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasVocabularyIds()) {
    request.setVocabularyIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getVocabularyIds(), "VocabularyIds", "json"));
  }

  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasVocabularyIdsShrink()) {
    body["VocabularyIds"] = request.getVocabularyIdsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ExportVocabulary"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExportVocabularyResponse>();
}

/**
 * @summary 导出热词
 *
 * @param request ExportVocabularyRequest
 * @return ExportVocabularyResponse
 */
ExportVocabularyResponse Client::exportVocabulary(const ExportVocabularyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return exportVocabularyWithOptions(request, runtime);
}

/**
 * @summary 获取实例详情
 *
 * @param request GenerateFileUploadParamsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GenerateFileUploadParamsResponse
 */
GenerateFileUploadParamsResponse Client::generateFileUploadParamsWithOptions(const GenerateFileUploadParamsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasBusinessType()) {
    body["BusinessType"] = request.getBusinessType();
  }

  if (!!request.hasFileName()) {
    body["FileName"] = request.getFileName();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GenerateFileUploadParams"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GenerateFileUploadParamsResponse>();
}

/**
 * @summary 获取实例详情
 *
 * @param request GenerateFileUploadParamsRequest
 * @return GenerateFileUploadParamsResponse
 */
GenerateFileUploadParamsResponse Client::generateFileUploadParams(const GenerateFileUploadParamsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return generateFileUploadParamsWithOptions(request, runtime);
}

/**
 * @summary 获取通话详情
 *
 * @param request GetCallDetailRecordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCallDetailRecordResponse
 */
GetCallDetailRecordResponse Client::getCallDetailRecordWithOptions(const GetCallDetailRecordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasSessionId()) {
    body["SessionId"] = request.getSessionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetCallDetailRecord"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCallDetailRecordResponse>();
}

/**
 * @summary 获取通话详情
 *
 * @param request GetCallDetailRecordRequest
 * @return GetCallDetailRecordResponse
 */
GetCallDetailRecordResponse Client::getCallDetailRecord(const GetCallDetailRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCallDetailRecordWithOptions(request, runtime);
}

/**
 * @summary 获取语音对话参数
 *
 * @param request GetDataChannelCredentialRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetDataChannelCredentialResponse
 */
GetDataChannelCredentialResponse Client::getDataChannelCredentialWithOptions(const GetDataChannelCredentialRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDeviceId()) {
    query["DeviceId"] = request.getDeviceId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetDataChannelCredential"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetDataChannelCredentialResponse>();
}

/**
 * @summary 获取语音对话参数
 *
 * @param request GetDataChannelCredentialRequest
 * @return GetDataChannelCredentialResponse
 */
GetDataChannelCredentialResponse Client::getDataChannelCredential(const GetDataChannelCredentialRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getDataChannelCredentialWithOptions(request, runtime);
}

/**
 * @summary 获取实例实时指标
 *
 * @param request GetRealtimeInstanceStatsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRealtimeInstanceStatsResponse
 */
GetRealtimeInstanceStatsResponse Client::getRealtimeInstanceStatsWithOptions(const GetRealtimeInstanceStatsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetRealtimeInstanceStats"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRealtimeInstanceStatsResponse>();
}

/**
 * @summary 获取实例实时指标
 *
 * @param request GetRealtimeInstanceStatsRequest
 * @return GetRealtimeInstanceStatsResponse
 */
GetRealtimeInstanceStatsResponse Client::getRealtimeInstanceStats(const GetRealtimeInstanceStatsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getRealtimeInstanceStatsWithOptions(request, runtime);
}

/**
 * @summary 获取录音
 *
 * @param request GetRecordingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRecordingResponse
 */
GetRecordingResponse Client::getRecordingWithOptions(const GetRecordingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasSessionId()) {
    body["SessionId"] = request.getSessionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetRecording"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRecordingResponse>();
}

/**
 * @summary 获取录音
 *
 * @param request GetRecordingRequest
 * @return GetRecordingResponse
 */
GetRecordingResponse Client::getRecording(const GetRecordingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getRecordingWithOptions(request, runtime);
}

/**
 * @summary 获取实例详情
 *
 * @param request GetScriptRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetScriptResponse
 */
GetScriptResponse Client::getScriptWithOptions(const GetScriptRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasScriptId()) {
    body["ScriptId"] = request.getScriptId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetScript"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetScriptResponse>();
}

/**
 * @summary 获取实例详情
 *
 * @param request GetScriptRequest
 * @return GetScriptResponse
 */
GetScriptResponse Client::getScript(const GetScriptRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getScriptWithOptions(request, runtime);
}

/**
 * @summary 获取MQ配置
 *
 * @param request GetSubscriptionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSubscriptionResponse
 */
GetSubscriptionResponse Client::getSubscriptionWithOptions(const GetSubscriptionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetSubscription"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSubscriptionResponse>();
}

/**
 * @summary 获取MQ配置
 *
 * @param request GetSubscriptionRequest
 * @return GetSubscriptionResponse
 */
GetSubscriptionResponse Client::getSubscription(const GetSubscriptionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSubscriptionWithOptions(request, runtime);
}

/**
 * @summary 获取实例详情
 *
 * @param request GetVocabularyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetVocabularyResponse
 */
GetVocabularyResponse Client::getVocabularyWithOptions(const GetVocabularyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasVocabularyId()) {
    body["VocabularyId"] = request.getVocabularyId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "GetVocabulary"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetVocabularyResponse>();
}

/**
 * @summary 获取实例详情
 *
 * @param request GetVocabularyRequest
 * @return GetVocabularyResponse
 */
GetVocabularyResponse Client::getVocabulary(const GetVocabularyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getVocabularyWithOptions(request, runtime);
}

/**
 * @summary 导入热词
 *
 * @param request ImportVocabularyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ImportVocabularyResponse
 */
ImportVocabularyResponse Client::importVocabularyWithOptions(const ImportVocabularyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasFileKey()) {
    body["FileKey"] = request.getFileKey();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ImportVocabulary"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ImportVocabularyResponse>();
}

/**
 * @summary 导入热词
 *
 * @param request ImportVocabularyRequest
 * @return ImportVocabularyResponse
 */
ImportVocabularyResponse Client::importVocabulary(const ImportVocabularyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return importVocabularyWithOptions(request, runtime);
}

/**
 * @summary 获取背景音列表
 *
 * @param request ListBackgroundMusicsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListBackgroundMusicsResponse
 */
ListBackgroundMusicsResponse Client::listBackgroundMusicsWithOptions(const ListBackgroundMusicsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListBackgroundMusics"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListBackgroundMusicsResponse>();
}

/**
 * @summary 获取背景音列表
 *
 * @param request ListBackgroundMusicsRequest
 * @return ListBackgroundMusicsResponse
 */
ListBackgroundMusicsResponse Client::listBackgroundMusics(const ListBackgroundMusicsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listBackgroundMusicsWithOptions(request, runtime);
}

/**
 * @summary 查询服务提供商
 *
 * @param request ListCallCenterProvidersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCallCenterProvidersResponse
 */
ListCallCenterProvidersResponse Client::listCallCenterProvidersWithOptions(const ListCallCenterProvidersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProviderId()) {
    body["ProviderId"] = request.getProviderId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListCallCenterProviders"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCallCenterProvidersResponse>();
}

/**
 * @summary 查询服务提供商
 *
 * @param request ListCallCenterProvidersRequest
 * @return ListCallCenterProvidersResponse
 */
ListCallCenterProvidersResponse Client::listCallCenterProviders(const ListCallCenterProvidersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCallCenterProvidersWithOptions(request, runtime);
}

/**
 * @summary 获取实例详情
 *
 * @param tmpReq ListCallDetailRecordsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCallDetailRecordsResponse
 */
ListCallDetailRecordsResponse Client::listCallDetailRecordsWithOptions(const ListCallDetailRecordsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListCallDetailRecordsShrinkRequest request = ListCallDetailRecordsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDispositionCodes()) {
    request.setDispositionCodesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDispositionCodes(), "DispositionCodes", "json"));
  }

  if (!!tmpReq.hasDispositionReasons()) {
    request.setDispositionReasonsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDispositionReasons(), "DispositionReasons", "json"));
  }

  if (!!tmpReq.hasSessionIds()) {
    request.setSessionIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSessionIds(), "SessionIds", "json"));
  }

  json query = {};
  if (!!request.hasAccessChannelId()) {
    query["AccessChannelId"] = request.getAccessChannelId();
  }

  if (!!request.hasAccessChannelType()) {
    query["AccessChannelType"] = request.getAccessChannelType();
  }

  if (!!request.hasDraftVersion()) {
    query["DraftVersion"] = request.getDraftVersion();
  }

  if (!!request.hasIssueResolved()) {
    query["IssueResolved"] = request.getIssueResolved();
  }

  if (!!request.hasMaxTalkTurns()) {
    query["MaxTalkTurns"] = request.getMaxTalkTurns();
  }

  if (!!request.hasMinTalkTurns()) {
    query["MinTalkTurns"] = request.getMinTalkTurns();
  }

  json body = {};
  if (!!request.hasCallee()) {
    body["Callee"] = request.getCallee();
  }

  if (!!request.hasCaller()) {
    body["Caller"] = request.getCaller();
  }

  if (!!request.hasDispositionCodesShrink()) {
    body["DispositionCodes"] = request.getDispositionCodesShrink();
  }

  if (!!request.hasDispositionReasonsShrink()) {
    body["DispositionReasons"] = request.getDispositionReasonsShrink();
  }

  if (!!request.hasEndTime()) {
    body["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  if (!!request.hasScriptId()) {
    body["ScriptId"] = request.getScriptId();
  }

  if (!!request.hasSessionIdsShrink()) {
    body["SessionIds"] = request.getSessionIdsShrink();
  }

  if (!!request.hasStartTime()) {
    body["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ListCallDetailRecords"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCallDetailRecordsResponse>();
}

/**
 * @summary 获取实例详情
 *
 * @param request ListCallDetailRecordsRequest
 * @return ListCallDetailRecordsResponse
 */
ListCallDetailRecordsResponse Client::listCallDetailRecords(const ListCallDetailRecordsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCallDetailRecordsWithOptions(request, runtime);
}

/**
 * @summary 获取实例详情
 *
 * @param request ListCloneVoiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCloneVoiceResponse
 */
ListCloneVoiceResponse Client::listCloneVoiceWithOptions(const ListCloneVoiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListCloneVoice"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCloneVoiceResponse>();
}

/**
 * @summary 获取实例详情
 *
 * @param request ListCloneVoiceRequest
 * @return ListCloneVoiceResponse
 */
ListCloneVoiceResponse Client::listCloneVoice(const ListCloneVoiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCloneVoiceWithOptions(request, runtime);
}

/**
 * @summary 获取克隆音色可用模型列表
 *
 * @param request ListCloneVoiceModelsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCloneVoiceModelsResponse
 */
ListCloneVoiceModelsResponse Client::listCloneVoiceModelsWithOptions(const ListCloneVoiceModelsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListCloneVoiceModels"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCloneVoiceModelsResponse>();
}

/**
 * @summary 获取克隆音色可用模型列表
 *
 * @param request ListCloneVoiceModelsRequest
 * @return ListCloneVoiceModelsResponse
 */
ListCloneVoiceModelsResponse Client::listCloneVoiceModels(const ListCloneVoiceModelsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCloneVoiceModelsWithOptions(request, runtime);
}

/**
 * @summary 查询指令
 *
 * @param request ListInstructionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListInstructionsResponse
 */
ListInstructionsResponse Client::listInstructionsWithOptions(const ListInstructionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProviderId()) {
    body["ProviderId"] = request.getProviderId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListInstructions"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListInstructionsResponse>();
}

/**
 * @summary 查询指令
 *
 * @param request ListInstructionsRequest
 * @return ListInstructionsResponse
 */
ListInstructionsResponse Client::listInstructions(const ListInstructionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listInstructionsWithOptions(request, runtime);
}

/**
 * @summary 获取语言模型配置信息
 *
 * @param request ListLlmAccessProfilesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListLlmAccessProfilesResponse
 */
ListLlmAccessProfilesResponse Client::listLlmAccessProfilesWithOptions(const ListLlmAccessProfilesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListLlmAccessProfiles"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListLlmAccessProfilesResponse>();
}

/**
 * @summary 获取语言模型配置信息
 *
 * @param request ListLlmAccessProfilesRequest
 * @return ListLlmAccessProfilesResponse
 */
ListLlmAccessProfilesResponse Client::listLlmAccessProfiles(const ListLlmAccessProfilesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listLlmAccessProfilesWithOptions(request, runtime);
}

/**
 * @summary 获取对话模型列表
 *
 * @param request ListNluModelsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListNluModelsResponse
 */
ListNluModelsResponse Client::listNluModelsWithOptions(const ListNluModelsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListNluModels"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListNluModelsResponse>();
}

/**
 * @summary 获取对话模型列表
 *
 * @param request ListNluModelsRequest
 * @return ListNluModelsResponse
 */
ListNluModelsResponse Client::listNluModels(const ListNluModelsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listNluModelsWithOptions(request, runtime);
}

/**
 * @summary 获取场景配置模板列表
 *
 * @param request ListScriptProfileTemplatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListScriptProfileTemplatesResponse
 */
ListScriptProfileTemplatesResponse Client::listScriptProfileTemplatesWithOptions(const ListScriptProfileTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListScriptProfileTemplates"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListScriptProfileTemplatesResponse>();
}

/**
 * @summary 获取场景配置模板列表
 *
 * @param request ListScriptProfileTemplatesRequest
 * @return ListScriptProfileTemplatesResponse
 */
ListScriptProfileTemplatesResponse Client::listScriptProfileTemplates(const ListScriptProfileTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listScriptProfileTemplatesWithOptions(request, runtime);
}

/**
 * @summary 获取实例详情
 *
 * @param tmpReq ListScriptsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListScriptsResponse
 */
ListScriptsResponse Client::listScriptsWithOptions(const ListScriptsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListScriptsShrinkRequest request = ListScriptsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasScriptIds()) {
    request.setScriptIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getScriptIds(), "ScriptIds", "json"));
  }

  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasNumber()) {
    body["Number"] = request.getNumber();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  if (!!request.hasScriptIdsShrink()) {
    body["ScriptIds"] = request.getScriptIdsShrink();
  }

  if (!!request.hasStatus()) {
    body["Status"] = request.getStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListScripts"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListScriptsResponse>();
}

/**
 * @summary 获取实例详情
 *
 * @param request ListScriptsRequest
 * @return ListScriptsResponse
 */
ListScriptsResponse Client::listScripts(const ListScriptsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listScriptsWithOptions(request, runtime);
}

/**
 * @summary 获取变量列表
 *
 * @param request ListVariableRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListVariableResponse
 */
ListVariableResponse Client::listVariableWithOptions(const ListVariableRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSearchPattern()) {
    body["SearchPattern"] = request.getSearchPattern();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListVariable"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListVariableResponse>();
}

/**
 * @summary 获取变量列表
 *
 * @param request ListVariableRequest
 * @return ListVariableResponse
 */
ListVariableResponse Client::listVariable(const ListVariableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listVariableWithOptions(request, runtime);
}

/**
 * @summary 获取实例详情
 *
 * @param request ListVocabularyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListVocabularyResponse
 */
ListVocabularyResponse Client::listVocabularyWithOptions(const ListVocabularyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListVocabulary"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListVocabularyResponse>();
}

/**
 * @summary 获取实例详情
 *
 * @param request ListVocabularyRequest
 * @return ListVocabularyResponse
 */
ListVocabularyResponse Client::listVocabulary(const ListVocabularyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listVocabularyWithOptions(request, runtime);
}

/**
 * @summary 获取实例详情
 *
 * @param request ListVoiceAccessProfileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListVoiceAccessProfileResponse
 */
ListVoiceAccessProfileResponse Client::listVoiceAccessProfileWithOptions(const ListVoiceAccessProfileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListVoiceAccessProfile"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListVoiceAccessProfileResponse>();
}

/**
 * @summary 获取实例详情
 *
 * @param request ListVoiceAccessProfileRequest
 * @return ListVoiceAccessProfileResponse
 */
ListVoiceAccessProfileResponse Client::listVoiceAccessProfile(const ListVoiceAccessProfileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listVoiceAccessProfileWithOptions(request, runtime);
}

/**
 * @summary 获取引擎列表
 *
 * @param request ListVoiceEnginesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListVoiceEnginesResponse
 */
ListVoiceEnginesResponse Client::listVoiceEnginesWithOptions(const ListVoiceEnginesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListVoiceEngines"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListVoiceEnginesResponse>();
}

/**
 * @summary 获取引擎列表
 *
 * @param request ListVoiceEnginesRequest
 * @return ListVoiceEnginesResponse
 */
ListVoiceEnginesResponse Client::listVoiceEngines(const ListVoiceEnginesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listVoiceEnginesWithOptions(request, runtime);
}

/**
 * @summary 获取实例详情
 *
 * @param request ListVoicesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListVoicesResponse
 */
ListVoicesResponse Client::listVoicesWithOptions(const ListVoicesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNlsAccessType()) {
    body["NlsAccessType"] = request.getNlsAccessType();
  }

  if (!!request.hasNlsEngine()) {
    body["NlsEngine"] = request.getNlsEngine();
  }

  if (!!request.hasPageNumber()) {
    body["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    body["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ListVoices"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListVoicesResponse>();
}

/**
 * @summary 获取实例详情
 *
 * @param request ListVoicesRequest
 * @return ListVoicesResponse
 */
ListVoicesResponse Client::listVoices(const ListVoicesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listVoicesWithOptions(request, runtime);
}

/**
 * @summary 试听
 *
 * @param tmpReq PreviewVoiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PreviewVoiceResponse
 */
PreviewVoiceResponse Client::previewVoiceWithOptions(const PreviewVoiceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  PreviewVoiceShrinkRequest request = PreviewVoiceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasParams()) {
    request.setParamsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getParams(), "Params", "json"));
  }

  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasModel()) {
    body["Model"] = request.getModel();
  }

  if (!!request.hasNlsAccessType()) {
    body["NlsAccessType"] = request.getNlsAccessType();
  }

  if (!!request.hasNlsEngine()) {
    body["NlsEngine"] = request.getNlsEngine();
  }

  if (!!request.hasParamsShrink()) {
    body["Params"] = request.getParamsShrink();
  }

  if (!!request.hasText()) {
    body["Text"] = request.getText();
  }

  if (!!request.hasVoice()) {
    body["Voice"] = request.getVoice();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "PreviewVoice"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PreviewVoiceResponse>();
}

/**
 * @summary 试听
 *
 * @param request PreviewVoiceRequest
 * @return PreviewVoiceResponse
 */
PreviewVoiceResponse Client::previewVoice(const PreviewVoiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return previewVoiceWithOptions(request, runtime);
}

/**
 * @summary 更新实例
 *
 * @param request PublishScriptRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PublishScriptResponse
 */
PublishScriptResponse Client::publishScriptWithOptions(const PublishScriptRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasScriptId()) {
    body["ScriptId"] = request.getScriptId();
  }

  if (!!request.hasVersionId()) {
    body["VersionId"] = request.getVersionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "PublishScript"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PublishScriptResponse>();
}

/**
 * @summary 更新实例
 *
 * @param request PublishScriptRequest
 * @return PublishScriptResponse
 */
PublishScriptResponse Client::publishScript(const PublishScriptRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return publishScriptWithOptions(request, runtime);
}

/**
 * @summary 修改服务提供商
 *
 * @param request UpdateCallCenterProviderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateCallCenterProviderResponse
 */
UpdateCallCenterProviderResponse Client::updateCallCenterProviderWithOptions(const UpdateCallCenterProviderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDisplayName()) {
    query["DisplayName"] = request.getDisplayName();
  }

  json body = {};
  if (!!request.hasDestination()) {
    body["Destination"] = request.getDestination();
  }

  if (!!request.hasExtras()) {
    body["Extras"] = request.getExtras();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasOriginator()) {
    body["Originator"] = request.getOriginator();
  }

  if (!!request.hasProviderId()) {
    body["ProviderId"] = request.getProviderId();
  }

  if (!!request.hasProviderType()) {
    body["ProviderType"] = request.getProviderType();
  }

  if (!!request.hasReferTo()) {
    body["ReferTo"] = request.getReferTo();
  }

  if (!!request.hasTrunkId()) {
    body["TrunkId"] = request.getTrunkId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateCallCenterProvider"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateCallCenterProviderResponse>();
}

/**
 * @summary 修改服务提供商
 *
 * @param request UpdateCallCenterProviderRequest
 * @return UpdateCallCenterProviderResponse
 */
UpdateCallCenterProviderResponse Client::updateCallCenterProvider(const UpdateCallCenterProviderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateCallCenterProviderWithOptions(request, runtime);
}

/**
 * @summary 更新实例
 *
 * @param request UpdateCloneVoiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateCloneVoiceResponse
 */
UpdateCloneVoiceResponse Client::updateCloneVoiceWithOptions(const UpdateCloneVoiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCloneVoiceId()) {
    body["CloneVoiceId"] = request.getCloneVoiceId();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateCloneVoice"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateCloneVoiceResponse>();
}

/**
 * @summary 更新实例
 *
 * @param request UpdateCloneVoiceRequest
 * @return UpdateCloneVoiceResponse
 */
UpdateCloneVoiceResponse Client::updateCloneVoice(const UpdateCloneVoiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateCloneVoiceWithOptions(request, runtime);
}

/**
 * @summary 修改指令
 *
 * @param request UpdateInstructionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateInstructionResponse
 */
UpdateInstructionResponse Client::updateInstructionWithOptions(const UpdateInstructionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCode()) {
    body["Code"] = request.getCode();
  }

  if (!!request.hasConfig()) {
    body["Config"] = request.getConfig();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasType()) {
    body["Type"] = request.getType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateInstruction"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateInstructionResponse>();
}

/**
 * @summary 修改指令
 *
 * @param request UpdateInstructionRequest
 * @return UpdateInstructionResponse
 */
UpdateInstructionResponse Client::updateInstruction(const UpdateInstructionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateInstructionWithOptions(request, runtime);
}

/**
 * @summary 更新语言模型配置信息
 *
 * @param tmpReq UpdateLlmAccessProfileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateLlmAccessProfileResponse
 */
UpdateLlmAccessProfileResponse Client::updateLlmAccessProfileWithOptions(const UpdateLlmAccessProfileRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateLlmAccessProfileShrinkRequest request = UpdateLlmAccessProfileShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasProfile()) {
    request.setProfileShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getProfile(), "Profile", "json"));
  }

  json body = {};
  if (!!request.hasAccessProfileId()) {
    body["AccessProfileId"] = request.getAccessProfileId();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasProfileShrink()) {
    body["Profile"] = request.getProfileShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateLlmAccessProfile"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateLlmAccessProfileResponse>();
}

/**
 * @summary 更新语言模型配置信息
 *
 * @param request UpdateLlmAccessProfileRequest
 * @return UpdateLlmAccessProfileResponse
 */
UpdateLlmAccessProfileResponse Client::updateLlmAccessProfile(const UpdateLlmAccessProfileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateLlmAccessProfileWithOptions(request, runtime);
}

/**
 * @summary 更新实例
 *
 * @param request UpdateScriptRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateScriptResponse
 */
UpdateScriptResponse Client::updateScriptWithOptions(const UpdateScriptRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasConcurrency()) {
    body["Concurrency"] = request.getConcurrency();
  }

  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasScriptId()) {
    body["ScriptId"] = request.getScriptId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateScript"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateScriptResponse>();
}

/**
 * @summary 更新实例
 *
 * @param request UpdateScriptRequest
 * @return UpdateScriptResponse
 */
UpdateScriptResponse Client::updateScript(const UpdateScriptRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateScriptWithOptions(request, runtime);
}

/**
 * @summary 创建或更新MQ配置
 *
 * @param tmpReq UpdateSubscriptionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSubscriptionResponse
 */
UpdateSubscriptionResponse Client::updateSubscriptionWithOptions(const UpdateSubscriptionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateSubscriptionShrinkRequest request = UpdateSubscriptionShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasEventSubscriptions()) {
    request.setEventSubscriptionsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getEventSubscriptions(), "EventSubscriptions", "json"));
  }

  json body = {};
  if (!!request.hasEndpoint()) {
    body["Endpoint"] = request.getEndpoint();
  }

  if (!!request.hasEventSubscriptionsShrink()) {
    body["EventSubscriptions"] = request.getEventSubscriptionsShrink();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasMqInstanceId()) {
    body["MqInstanceId"] = request.getMqInstanceId();
  }

  if (!!request.hasMqType()) {
    body["MqType"] = request.getMqType();
  }

  if (!!request.hasPassword()) {
    body["Password"] = request.getPassword();
  }

  if (!!request.hasProducerId()) {
    body["ProducerId"] = request.getProducerId();
  }

  if (!!request.hasTopic()) {
    body["Topic"] = request.getTopic();
  }

  if (!!request.hasUserName()) {
    body["UserName"] = request.getUserName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateSubscription"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateSubscriptionResponse>();
}

/**
 * @summary 创建或更新MQ配置
 *
 * @param request UpdateSubscriptionRequest
 * @return UpdateSubscriptionResponse
 */
UpdateSubscriptionResponse Client::updateSubscription(const UpdateSubscriptionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateSubscriptionWithOptions(request, runtime);
}

/**
 * @summary 更新变量
 *
 * @param request UpdateVariableRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateVariableResponse
 */
UpdateVariableResponse Client::updateVariableWithOptions(const UpdateVariableRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasDisplayName()) {
    body["DisplayName"] = request.getDisplayName();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasVariableId()) {
    body["VariableId"] = request.getVariableId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateVariable"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateVariableResponse>();
}

/**
 * @summary 更新变量
 *
 * @param request UpdateVariableRequest
 * @return UpdateVariableResponse
 */
UpdateVariableResponse Client::updateVariable(const UpdateVariableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateVariableWithOptions(request, runtime);
}

/**
 * @summary 更新实例
 *
 * @param tmpReq UpdateVocabularyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateVocabularyResponse
 */
UpdateVocabularyResponse Client::updateVocabularyWithOptions(const UpdateVocabularyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateVocabularyShrinkRequest request = UpdateVocabularyShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasWords()) {
    request.setWordsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getWords(), "Words", "json"));
  }

  json body = {};
  if (!!request.hasDescription()) {
    body["Description"] = request.getDescription();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasName()) {
    body["Name"] = request.getName();
  }

  if (!!request.hasVocabularyId()) {
    body["VocabularyId"] = request.getVocabularyId();
  }

  if (!!request.hasWordsShrink()) {
    body["Words"] = request.getWordsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateVocabulary"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateVocabularyResponse>();
}

/**
 * @summary 更新实例
 *
 * @param request UpdateVocabularyRequest
 * @return UpdateVocabularyResponse
 */
UpdateVocabularyResponse Client::updateVocabulary(const UpdateVocabularyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateVocabularyWithOptions(request, runtime);
}

/**
 * @summary 更新实例
 *
 * @param tmpReq UpdateVoiceAccessProfileRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateVoiceAccessProfileResponse
 */
UpdateVoiceAccessProfileResponse Client::updateVoiceAccessProfileWithOptions(const UpdateVoiceAccessProfileRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateVoiceAccessProfileShrinkRequest request = UpdateVoiceAccessProfileShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasProfile()) {
    request.setProfileShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getProfile(), "Profile", "json"));
  }

  json body = {};
  if (!!request.hasAccessProfileId()) {
    body["AccessProfileId"] = request.getAccessProfileId();
  }

  if (!!request.hasInstanceId()) {
    body["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNlsEngine()) {
    body["NlsEngine"] = request.getNlsEngine();
  }

  if (!!request.hasProfileShrink()) {
    body["Profile"] = request.getProfileShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "UpdateVoiceAccessProfile"},
    {"version" , "2025-11-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateVoiceAccessProfileResponse>();
}

/**
 * @summary 更新实例
 *
 * @param request UpdateVoiceAccessProfileRequest
 * @return UpdateVoiceAccessProfileResponse
 */
UpdateVoiceAccessProfileResponse Client::updateVoiceAccessProfile(const UpdateVoiceAccessProfileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateVoiceAccessProfileWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace VoiceNavigator20251111