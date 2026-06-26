#include <darabonba/Core.hpp>
#include <alibabacloud/VoiceNavigator20180612.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
using namespace AlibabaCloud::VoiceNavigator20180612::Models;
namespace AlibabaCloud
{
namespace VoiceNavigator20180612
{

AlibabaCloud::VoiceNavigator20180612::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"cn-shanghai" , "voicenavigator.cn-shanghai.aliyuncs.com"},
    {"cn-hangzhou" , "voicenavigator.cn-hangzhou.aliyuncs.com"}
  }).get<map<string, string>>();
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
 * @summary Associates a chatbot with a navigation instance.
 *
 * @param request AssociateChatbotInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AssociateChatbotInstanceResponse
 */
AssociateChatbotInstanceResponse Client::associateChatbotInstanceWithOptions(const AssociateChatbotInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChatbotInstanceId()) {
    query["ChatbotInstanceId"] = request.getChatbotInstanceId();
  }

  if (!!request.hasChatbotName()) {
    query["ChatbotName"] = request.getChatbotName();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNluServiceParamsJson()) {
    query["NluServiceParamsJson"] = request.getNluServiceParamsJson();
  }

  if (!!request.hasNluServiceType()) {
    query["NluServiceType"] = request.getNluServiceType();
  }

  if (!!request.hasUnionSource()) {
    query["UnionSource"] = request.getUnionSource();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AssociateChatbotInstance"},
    {"version" , "2018-06-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AssociateChatbotInstanceResponse>();
}

/**
 * @summary Associates a chatbot with a navigation instance.
 *
 * @param request AssociateChatbotInstanceRequest
 * @return AssociateChatbotInstanceResponse
 */
AssociateChatbotInstanceResponse Client::associateChatbotInstance(const AssociateChatbotInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return associateChatbotInstanceWithOptions(request, runtime);
}

/**
 * @summary Previews a text-to-speech (TTS) voice.
 *
 * @param request AuditTTSVoiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AuditTTSVoiceResponse
 */
AuditTTSVoiceResponse Client::auditTTSVoiceWithOptions(const AuditTTSVoiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAccessKey()) {
    query["AccessKey"] = request.getAccessKey();
  }

  if (!!request.hasAppKey()) {
    query["AppKey"] = request.getAppKey();
  }

  if (!!request.hasEngine()) {
    query["Engine"] = request.getEngine();
  }

  if (!!request.hasExtParams()) {
    query["ExtParams"] = request.getExtParams();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPitchRate()) {
    query["PitchRate"] = request.getPitchRate();
  }

  if (!!request.hasSecretKey()) {
    query["SecretKey"] = request.getSecretKey();
  }

  if (!!request.hasSpeechRate()) {
    query["SpeechRate"] = request.getSpeechRate();
  }

  if (!!request.hasText()) {
    query["Text"] = request.getText();
  }

  if (!!request.hasVoice()) {
    query["Voice"] = request.getVoice();
  }

  if (!!request.hasVolume()) {
    query["Volume"] = request.getVolume();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AuditTTSVoice"},
    {"version" , "2018-06-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AuditTTSVoiceResponse>();
}

/**
 * @summary Previews a text-to-speech (TTS) voice.
 *
 * @param request AuditTTSVoiceRequest
 * @return AuditTTSVoiceResponse
 */
AuditTTSVoiceResponse Client::auditTTSVoice(const AuditTTSVoiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return auditTTSVoiceWithOptions(request, runtime);
}

/**
 * @summary Starts a conversation.
 *
 * @param request BeginDialogueRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return BeginDialogueResponse
 */
BeginDialogueResponse Client::beginDialogueWithOptions(const BeginDialogueRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCalledNumber()) {
    query["CalledNumber"] = request.getCalledNumber();
  }

  if (!!request.hasCallingNumber()) {
    query["CallingNumber"] = request.getCallingNumber();
  }

  if (!!request.hasConversationId()) {
    query["ConversationId"] = request.getConversationId();
  }

  if (!!request.hasInitialContext()) {
    query["InitialContext"] = request.getInitialContext();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasInstanceOwnerId()) {
    query["InstanceOwnerId"] = request.getInstanceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "BeginDialogue"},
    {"version" , "2018-06-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<BeginDialogueResponse>();
}

/**
 * @summary Starts a conversation.
 *
 * @param request BeginDialogueRequest
 * @return BeginDialogueResponse
 */
BeginDialogueResponse Client::beginDialogue(const BeginDialogueRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return beginDialogueWithOptions(request, runtime);
}

/**
 * @summary Collects a number entered by a user during a call.
 *
 * @param request CollectedNumberRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CollectedNumberResponse
 */
CollectedNumberResponse Client::collectedNumberWithOptions(const CollectedNumberRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAdditionalContext()) {
    query["AdditionalContext"] = request.getAdditionalContext();
  }

  if (!!request.hasConversationId()) {
    query["ConversationId"] = request.getConversationId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasInstanceOwnerId()) {
    query["InstanceOwnerId"] = request.getInstanceOwnerId();
  }

  if (!!request.hasNumber()) {
    query["Number"] = request.getNumber();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CollectedNumber"},
    {"version" , "2018-06-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CollectedNumberResponse>();
}

/**
 * @summary Collects a number entered by a user during a call.
 *
 * @param request CollectedNumberRequest
 * @return CollectedNumberResponse
 */
CollectedNumberResponse Client::collectedNumber(const CollectedNumberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return collectedNumberWithOptions(request, runtime);
}

/**
 * @summary Generates a temporary URL to download a file.
 *
 * @param request CreateDownloadUrlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDownloadUrlResponse
 */
CreateDownloadUrlResponse Client::createDownloadUrlWithOptions(const CreateDownloadUrlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDownloadUrl"},
    {"version" , "2018-06-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDownloadUrlResponse>();
}

/**
 * @summary Generates a temporary URL to download a file.
 *
 * @param request CreateDownloadUrlRequest
 * @return CreateDownloadUrlResponse
 */
CreateDownloadUrlResponse Client::createDownloadUrl(const CreateDownloadUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDownloadUrlWithOptions(request, runtime);
}

/**
 * @summary Creates a Voice Navigator instance.
 *
 * @param request CreateInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateInstanceResponse
 */
CreateInstanceResponse Client::createInstanceWithOptions(const CreateInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConcurrency()) {
    query["Concurrency"] = request.getConcurrency();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasNluServiceParamsJson()) {
    query["NluServiceParamsJson"] = request.getNluServiceParamsJson();
  }

  if (!!request.hasUnionInstanceId()) {
    query["UnionInstanceId"] = request.getUnionInstanceId();
  }

  if (!!request.hasUnionSource()) {
    query["UnionSource"] = request.getUnionSource();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateInstance"},
    {"version" , "2018-06-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateInstanceResponse>();
}

/**
 * @summary Creates a Voice Navigator instance.
 *
 * @param request CreateInstanceRequest
 * @return CreateInstanceResponse
 */
CreateInstanceResponse Client::createInstance(const CreateInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createInstanceWithOptions(request, runtime);
}

/**
 * @summary Starts a conversation in a debugging environment.
 *
 * @param request DebugBeginDialogueRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DebugBeginDialogueResponse
 */
DebugBeginDialogueResponse Client::debugBeginDialogueWithOptions(const DebugBeginDialogueRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCalledNumber()) {
    query["CalledNumber"] = request.getCalledNumber();
  }

  if (!!request.hasCallingNumber()) {
    query["CallingNumber"] = request.getCallingNumber();
  }

  if (!!request.hasConversationId()) {
    query["ConversationId"] = request.getConversationId();
  }

  if (!!request.hasInitialContext()) {
    query["InitialContext"] = request.getInitialContext();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasShouldUseSandBox()) {
    query["ShouldUseSandBox"] = request.getShouldUseSandBox();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DebugBeginDialogue"},
    {"version" , "2018-06-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DebugBeginDialogueResponse>();
}

/**
 * @summary Starts a conversation in a debugging environment.
 *
 * @param request DebugBeginDialogueRequest
 * @return DebugBeginDialogueResponse
 */
DebugBeginDialogueResponse Client::debugBeginDialogue(const DebugBeginDialogueRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return debugBeginDialogueWithOptions(request, runtime);
}

/**
 * @summary Debugs the number collection process.
 *
 * @param request DebugCollectedNumberRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DebugCollectedNumberResponse
 */
DebugCollectedNumberResponse Client::debugCollectedNumberWithOptions(const DebugCollectedNumberRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConversationId()) {
    query["ConversationId"] = request.getConversationId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNumber()) {
    query["Number"] = request.getNumber();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DebugCollectedNumber"},
    {"version" , "2018-06-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DebugCollectedNumberResponse>();
}

/**
 * @summary Debugs the number collection process.
 *
 * @param request DebugCollectedNumberRequest
 * @return DebugCollectedNumberResponse
 */
DebugCollectedNumberResponse Client::debugCollectedNumber(const DebugCollectedNumberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return debugCollectedNumberWithOptions(request, runtime);
}

/**
 * @summary Sends a user utterance to the dialogue engine to debug a conversation flow.
 *
 * @param request DebugDialogueRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DebugDialogueResponse
 */
DebugDialogueResponse Client::debugDialogueWithOptions(const DebugDialogueRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAdditionalContext()) {
    query["AdditionalContext"] = request.getAdditionalContext();
  }

  if (!!request.hasConversationId()) {
    query["ConversationId"] = request.getConversationId();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasUtterance()) {
    query["Utterance"] = request.getUtterance();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DebugDialogue"},
    {"version" , "2018-06-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DebugDialogueResponse>();
}

/**
 * @summary Sends a user utterance to the dialogue engine to debug a conversation flow.
 *
 * @param request DebugDialogueRequest
 * @return DebugDialogueResponse
 */
DebugDialogueResponse Client::debugDialogue(const DebugDialogueRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return debugDialogueWithOptions(request, runtime);
}

/**
 * @summary Deletes a navigation instance.
 *
 * @param request DeleteInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteInstanceResponse
 */
DeleteInstanceResponse Client::deleteInstanceWithOptions(const DeleteInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteInstance"},
    {"version" , "2018-06-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteInstanceResponse>();
}

/**
 * @summary Deletes a navigation instance.
 *
 * @param request DeleteInstanceRequest
 * @return DeleteInstanceResponse
 */
DeleteInstanceResponse Client::deleteInstance(const DeleteInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteInstanceWithOptions(request, runtime);
}

/**
 * @summary Retrieves information about a conversation.
 *
 * @param request DescribeConversationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeConversationResponse
 */
DescribeConversationResponse Client::describeConversationWithOptions(const DescribeConversationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeConversation"},
    {"version" , "2018-06-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeConversationResponse>();
}

/**
 * @summary Retrieves information about a conversation.
 *
 * @param request DescribeConversationRequest
 * @return DescribeConversationResponse
 */
DescribeConversationResponse Client::describeConversation(const DescribeConversationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeConversationWithOptions(request, runtime);
}

/**
 * @summary Queries the context of a specified conversation.
 *
 * @param request DescribeConversationContextRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeConversationContextResponse
 */
DescribeConversationContextResponse Client::describeConversationContextWithOptions(const DescribeConversationContextRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeConversationContext"},
    {"version" , "2018-06-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeConversationContextResponse>();
}

/**
 * @summary Queries the context of a specified conversation.
 *
 * @param request DescribeConversationContextRequest
 * @return DescribeConversationContextResponse
 */
DescribeConversationContextResponse Client::describeConversationContext(const DescribeConversationContextRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeConversationContextWithOptions(request, runtime);
}

/**
 * @summary Queries the status of an export task.
 *
 * @param request DescribeExportProgressRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeExportProgressResponse
 */
DescribeExportProgressResponse Client::describeExportProgressWithOptions(const DescribeExportProgressRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeExportProgress"},
    {"version" , "2018-06-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeExportProgressResponse>();
}

/**
 * @summary Queries the status of an export task.
 *
 * @param request DescribeExportProgressRequest
 * @return DescribeExportProgressResponse
 */
DescribeExportProgressResponse Client::describeExportProgress(const DescribeExportProgressRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeExportProgressWithOptions(request, runtime);
}

/**
 * @summary Retrieves details for a specified instance.
 *
 * @param request DescribeInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstanceResponse
 */
DescribeInstanceResponse Client::describeInstanceWithOptions(const DescribeInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInstance"},
    {"version" , "2018-06-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInstanceResponse>();
}

/**
 * @summary Retrieves details for a specified instance.
 *
 * @param request DescribeInstanceRequest
 * @return DescribeInstanceResponse
 */
DescribeInstanceResponse Client::describeInstance(const DescribeInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstanceWithOptions(request, runtime);
}

/**
 * @summary View the instance IVR configuration.
 *
 * @param request DescribeNavigationConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeNavigationConfigResponse
 */
DescribeNavigationConfigResponse Client::describeNavigationConfigWithOptions(const DescribeNavigationConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeNavigationConfig"},
    {"version" , "2018-06-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeNavigationConfigResponse>();
}

/**
 * @summary View the instance IVR configuration.
 *
 * @param request DescribeNavigationConfigRequest
 * @return DescribeNavigationConfigResponse
 */
DescribeNavigationConfigResponse Client::describeNavigationConfig(const DescribeNavigationConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeNavigationConfigWithOptions(request, runtime);
}

/**
 * @summary Retrieves a conversation recording.
 *
 * @param request DescribeRecordingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeRecordingResponse
 */
DescribeRecordingResponse Client::describeRecordingWithOptions(const DescribeRecordingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeRecording"},
    {"version" , "2018-06-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeRecordingResponse>();
}

/**
 * @summary Retrieves a conversation recording.
 *
 * @param request DescribeRecordingRequest
 * @return DescribeRecordingResponse
 */
DescribeRecordingResponse Client::describeRecording(const DescribeRecordingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeRecordingWithOptions(request, runtime);
}

/**
 * @summary View the current instance\\"s statistics.
 *
 * @param request DescribeStatisticalDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeStatisticalDataResponse
 */
DescribeStatisticalDataResponse Client::describeStatisticalDataWithOptions(const DescribeStatisticalDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeStatisticalData"},
    {"version" , "2018-06-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeStatisticalDataResponse>();
}

/**
 * @summary View the current instance\\"s statistics.
 *
 * @param request DescribeStatisticalDataRequest
 * @return DescribeStatisticalDataResponse
 */
DescribeStatisticalDataResponse Client::describeStatisticalData(const DescribeStatisticalDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeStatisticalDataWithOptions(request, runtime);
}

/**
 * @summary Queries the TTS configuration.
 *
 * @param request DescribeTTSConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeTTSConfigResponse
 */
DescribeTTSConfigResponse Client::describeTTSConfigWithOptions(const DescribeTTSConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeTTSConfig"},
    {"version" , "2018-06-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeTTSConfigResponse>();
}

/**
 * @summary Queries the TTS configuration.
 *
 * @param request DescribeTTSConfigRequest
 * @return DescribeTTSConfigResponse
 */
DescribeTTSConfigResponse Client::describeTTSConfig(const DescribeTTSConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeTTSConfigWithOptions(request, runtime);
}

/**
 * @summary Use this API to continue a conversation with an intelligent assistant by processing a user\\"s utterance.
 *
 * @param request DialogueRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DialogueResponse
 */
DialogueResponse Client::dialogueWithOptions(const DialogueRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAdditionalContext()) {
    query["AdditionalContext"] = request.getAdditionalContext();
  }

  if (!!request.hasCalledNumber()) {
    query["CalledNumber"] = request.getCalledNumber();
  }

  if (!!request.hasCallingNumber()) {
    query["CallingNumber"] = request.getCallingNumber();
  }

  if (!!request.hasConversationId()) {
    query["ConversationId"] = request.getConversationId();
  }

  if (!!request.hasEmotion()) {
    query["Emotion"] = request.getEmotion();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasInstanceOwnerId()) {
    query["InstanceOwnerId"] = request.getInstanceOwnerId();
  }

  if (!!request.hasUtterance()) {
    query["Utterance"] = request.getUtterance();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "Dialogue"},
    {"version" , "2018-06-12"},
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
 * @summary Use this API to continue a conversation with an intelligent assistant by processing a user\\"s utterance.
 *
 * @param request DialogueRequest
 * @return DialogueResponse
 */
DialogueResponse Client::dialogue(const DialogueRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return dialogueWithOptions(request, runtime);
}

/**
 * @summary Disables a Voice Navigator instance.
 *
 * @param request DisableInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableInstanceResponse
 */
DisableInstanceResponse Client::disableInstanceWithOptions(const DisableInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisableInstance"},
    {"version" , "2018-06-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableInstanceResponse>();
}

/**
 * @summary Disables a Voice Navigator instance.
 *
 * @param request DisableInstanceRequest
 * @return DisableInstanceResponse
 */
DisableInstanceResponse Client::disableInstance(const DisableInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableInstanceWithOptions(request, runtime);
}

/**
 * @summary Enables a Voice Navigator instance.
 *
 * @param request EnableInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableInstanceResponse
 */
EnableInstanceResponse Client::enableInstanceWithOptions(const EnableInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableInstance"},
    {"version" , "2018-06-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableInstanceResponse>();
}

/**
 * @summary Enables a Voice Navigator instance.
 *
 * @param request EnableInstanceRequest
 * @return EnableInstanceResponse
 */
EnableInstanceResponse Client::enableInstance(const EnableInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableInstanceWithOptions(request, runtime);
}

/**
 * @summary Ends an ongoing dialogue.
 *
 * @param request EndDialogueRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EndDialogueResponse
 */
EndDialogueResponse Client::endDialogueWithOptions(const EndDialogueRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConversationId()) {
    query["ConversationId"] = request.getConversationId();
  }

  if (!!request.hasHangUpParams()) {
    query["HangUpParams"] = request.getHangUpParams();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasInstanceOwnerId()) {
    query["InstanceOwnerId"] = request.getInstanceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EndDialogue"},
    {"version" , "2018-06-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EndDialogueResponse>();
}

/**
 * @summary Ends an ongoing dialogue.
 *
 * @param request EndDialogueRequest
 * @return EndDialogueResponse
 */
EndDialogueResponse Client::endDialogue(const EndDialogueRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return endDialogueWithOptions(request, runtime);
}

/**
 * @summary Exports conversation details.
 *
 * @param request ExportConversationDetailsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExportConversationDetailsResponse
 */
ExportConversationDetailsResponse Client::exportConversationDetailsWithOptions(const ExportConversationDetailsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBeginTimeLeftRange()) {
    query["BeginTimeLeftRange"] = request.getBeginTimeLeftRange();
  }

  if (!!request.hasBeginTimeRightRange()) {
    query["BeginTimeRightRange"] = request.getBeginTimeRightRange();
  }

  if (!!request.hasCallingNumber()) {
    query["CallingNumber"] = request.getCallingNumber();
  }

  if (!!request.hasDebugConversation()) {
    query["DebugConversation"] = request.getDebugConversation();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasOptions()) {
    query["Options"] = request.getOptions();
  }

  if (!!request.hasResult()) {
    query["Result"] = request.getResult();
  }

  if (!!request.hasRoundsLeftRange()) {
    query["RoundsLeftRange"] = request.getRoundsLeftRange();
  }

  if (!!request.hasRoundsRightRange()) {
    query["RoundsRightRange"] = request.getRoundsRightRange();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ExportConversationDetails"},
    {"version" , "2018-06-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExportConversationDetailsResponse>();
}

/**
 * @summary Exports conversation details.
 *
 * @param request ExportConversationDetailsRequest
 * @return ExportConversationDetailsResponse
 */
ExportConversationDetailsResponse Client::exportConversationDetails(const ExportConversationDetailsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return exportConversationDetailsWithOptions(request, runtime);
}

/**
 * @summary Exports statistical data.
 *
 * @param request ExportStatisticalDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ExportStatisticalDataResponse
 */
ExportStatisticalDataResponse Client::exportStatisticalDataWithOptions(const ExportStatisticalDataRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBeginTimeLeftRange()) {
    query["BeginTimeLeftRange"] = request.getBeginTimeLeftRange();
  }

  if (!!request.hasBeginTimeRightRange()) {
    query["BeginTimeRightRange"] = request.getBeginTimeRightRange();
  }

  if (!!request.hasExportType()) {
    query["ExportType"] = request.getExportType();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasTimeUnit()) {
    query["TimeUnit"] = request.getTimeUnit();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ExportStatisticalData"},
    {"version" , "2018-06-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ExportStatisticalDataResponse>();
}

/**
 * @summary Exports statistical data.
 *
 * @param request ExportStatisticalDataRequest
 * @return ExportStatisticalDataResponse
 */
ExportStatisticalDataResponse Client::exportStatisticalData(const ExportStatisticalDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return exportStatisticalDataWithOptions(request, runtime);
}

/**
 * @summary Retrieves the ASR configuration.
 *
 * @param request GetAsrConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAsrConfigResponse
 */
GetAsrConfigResponse Client::getAsrConfigWithOptions(const GetAsrConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConfigLevel()) {
    query["ConfigLevel"] = request.getConfigLevel();
  }

  if (!!request.hasEntryId()) {
    query["EntryId"] = request.getEntryId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAsrConfig"},
    {"version" , "2018-06-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAsrConfigResponse>();
}

/**
 * @summary Retrieves the ASR configuration.
 *
 * @param request GetAsrConfigRequest
 * @return GetAsrConfigResponse
 */
GetAsrConfigResponse Client::getAsrConfig(const GetAsrConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAsrConfigWithOptions(request, runtime);
}

/**
 * @summary Retrieves the real-time concurrency of an instance.
 *
 * @param request GetRealTimeConcurrencyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRealTimeConcurrencyResponse
 */
GetRealTimeConcurrencyResponse Client::getRealTimeConcurrencyWithOptions(const GetRealTimeConcurrencyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetRealTimeConcurrency"},
    {"version" , "2018-06-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRealTimeConcurrencyResponse>();
}

/**
 * @summary Retrieves the real-time concurrency of an instance.
 *
 * @param request GetRealTimeConcurrencyRequest
 * @return GetRealTimeConcurrencyResponse
 */
GetRealTimeConcurrencyResponse Client::getRealTimeConcurrency(const GetRealTimeConcurrencyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getRealTimeConcurrencyWithOptions(request, runtime);
}

/**
 * @summary Retrieves a paginated list of chatbot instances.
 *
 * @param request ListChatbotInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListChatbotInstancesResponse
 */
ListChatbotInstancesResponse Client::listChatbotInstancesWithOptions(const ListChatbotInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListChatbotInstances"},
    {"version" , "2018-06-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListChatbotInstancesResponse>();
}

/**
 * @summary Retrieves a paginated list of chatbot instances.
 *
 * @param request ListChatbotInstancesRequest
 * @return ListChatbotInstancesResponse
 */
ListChatbotInstancesResponse Client::listChatbotInstances(const ListChatbotInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listChatbotInstancesWithOptions(request, runtime);
}

/**
 * @summary Retrieves the conversation details for a specific conversation.
 *
 * @param request ListConversationDetailsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListConversationDetailsResponse
 */
ListConversationDetailsResponse Client::listConversationDetailsWithOptions(const ListConversationDetailsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListConversationDetails"},
    {"version" , "2018-06-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListConversationDetailsResponse>();
}

/**
 * @summary Retrieves the conversation details for a specific conversation.
 *
 * @param request ListConversationDetailsRequest
 * @return ListConversationDetailsResponse
 */
ListConversationDetailsResponse Client::listConversationDetails(const ListConversationDetailsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listConversationDetailsWithOptions(request, runtime);
}

/**
 * @summary Returns the session list.
 *
 * @param request ListConversationsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListConversationsResponse
 */
ListConversationsResponse Client::listConversationsWithOptions(const ListConversationsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListConversations"},
    {"version" , "2018-06-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListConversationsResponse>();
}

/**
 * @summary Returns the session list.
 *
 * @param request ListConversationsRequest
 * @return ListConversationsResponse
 */
ListConversationsResponse Client::listConversations(const ListConversationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listConversationsWithOptions(request, runtime);
}

/**
 * @summary Download list
 *
 * @param request ListDownloadTasksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDownloadTasksResponse
 */
ListDownloadTasksResponse Client::listDownloadTasksWithOptions(const ListDownloadTasksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDownloadTasks"},
    {"version" , "2018-06-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDownloadTasksResponse>();
}

/**
 * @summary Download list
 *
 * @param request ListDownloadTasksRequest
 * @return ListDownloadTasksResponse
 */
ListDownloadTasksResponse Client::listDownloadTasks(const ListDownloadTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDownloadTasksWithOptions(request, runtime);
}

/**
 * @summary Retrieves a paginated list of intelligent navigation instances for the current tenant.
 *
 * @param request ListInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListInstancesResponse
 */
ListInstancesResponse Client::listInstancesWithOptions(const ListInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListInstances"},
    {"version" , "2018-06-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListInstancesResponse>();
}

/**
 * @summary Retrieves a paginated list of intelligent navigation instances for the current tenant.
 *
 * @param request ListInstancesRequest
 * @return ListInstancesResponse
 */
ListInstancesResponse Client::listInstances(const ListInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listInstancesWithOptions(request, runtime);
}

/**
 * @summary Modifies an ASR configuration.
 *
 * @param request ModifyAsrConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyAsrConfigResponse
 */
ModifyAsrConfigResponse Client::modifyAsrConfigWithOptions(const ModifyAsrConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppKey()) {
    query["AppKey"] = request.getAppKey();
  }

  if (!!request.hasAsrAcousticModelId()) {
    query["AsrAcousticModelId"] = request.getAsrAcousticModelId();
  }

  if (!!request.hasAsrClassVocabularyId()) {
    query["AsrClassVocabularyId"] = request.getAsrClassVocabularyId();
  }

  if (!!request.hasAsrCustomizationId()) {
    query["AsrCustomizationId"] = request.getAsrCustomizationId();
  }

  if (!!request.hasAsrOverrides()) {
    query["AsrOverrides"] = request.getAsrOverrides();
  }

  if (!!request.hasAsrVocabularyId()) {
    query["AsrVocabularyId"] = request.getAsrVocabularyId();
  }

  if (!!request.hasConfigLevel()) {
    query["ConfigLevel"] = request.getConfigLevel();
  }

  if (!!request.hasEngine()) {
    query["Engine"] = request.getEngine();
  }

  if (!!request.hasEntryId()) {
    query["EntryId"] = request.getEntryId();
  }

  if (!!request.hasNlsServiceType()) {
    query["NlsServiceType"] = request.getNlsServiceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyAsrConfig"},
    {"version" , "2018-06-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyAsrConfigResponse>();
}

/**
 * @summary Modifies an ASR configuration.
 *
 * @param request ModifyAsrConfigRequest
 * @return ModifyAsrConfigResponse
 */
ModifyAsrConfigResponse Client::modifyAsrConfig(const ModifyAsrConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyAsrConfigWithOptions(request, runtime);
}

/**
 * @summary Modifies the greeting configuration.
 *
 * @param request ModifyGreetingConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyGreetingConfigResponse
 */
ModifyGreetingConfigResponse Client::modifyGreetingConfigWithOptions(const ModifyGreetingConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGreetingWords()) {
    query["GreetingWords"] = request.getGreetingWords();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasIntentTrigger()) {
    query["IntentTrigger"] = request.getIntentTrigger();
  }

  if (!!request.hasSourceType()) {
    query["SourceType"] = request.getSourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyGreetingConfig"},
    {"version" , "2018-06-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyGreetingConfigResponse>();
}

/**
 * @summary Modifies the greeting configuration.
 *
 * @param request ModifyGreetingConfigRequest
 * @return ModifyGreetingConfigResponse
 */
ModifyGreetingConfigResponse Client::modifyGreetingConfig(const ModifyGreetingConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyGreetingConfigWithOptions(request, runtime);
}

/**
 * @summary Modify an instance.
 *
 * @param request ModifyInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyInstanceResponse
 */
ModifyInstanceResponse Client::modifyInstanceWithOptions(const ModifyInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConcurrency()) {
    query["Concurrency"] = request.getConcurrency();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyInstance"},
    {"version" , "2018-06-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyInstanceResponse>();
}

/**
 * @summary Modify an instance.
 *
 * @param request ModifyInstanceRequest
 * @return ModifyInstanceResponse
 */
ModifyInstanceResponse Client::modifyInstance(const ModifyInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyInstanceWithOptions(request, runtime);
}

/**
 * @summary Modifies the silence timeout configuration for a voice bot instance.
 *
 * @param request ModifySilenceTimeoutConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifySilenceTimeoutConfigResponse
 */
ModifySilenceTimeoutConfigResponse Client::modifySilenceTimeoutConfigWithOptions(const ModifySilenceTimeoutConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFinalAction()) {
    query["FinalAction"] = request.getFinalAction();
  }

  if (!!request.hasFinalActionParams()) {
    query["FinalActionParams"] = request.getFinalActionParams();
  }

  if (!!request.hasFinalPrompt()) {
    query["FinalPrompt"] = request.getFinalPrompt();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasIntentTrigger()) {
    query["IntentTrigger"] = request.getIntentTrigger();
  }

  if (!!request.hasPrompt()) {
    query["Prompt"] = request.getPrompt();
  }

  if (!!request.hasSourceType()) {
    query["SourceType"] = request.getSourceType();
  }

  if (!!request.hasThreshold()) {
    query["Threshold"] = request.getThreshold();
  }

  if (!!request.hasTimeout()) {
    query["Timeout"] = request.getTimeout();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifySilenceTimeoutConfig"},
    {"version" , "2018-06-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifySilenceTimeoutConfigResponse>();
}

/**
 * @summary Modifies the silence timeout configuration for a voice bot instance.
 *
 * @param request ModifySilenceTimeoutConfigRequest
 * @return ModifySilenceTimeoutConfigResponse
 */
ModifySilenceTimeoutConfigResponse Client::modifySilenceTimeoutConfig(const ModifySilenceTimeoutConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifySilenceTimeoutConfigWithOptions(request, runtime);
}

/**
 * @summary Modifies the TTS configuration.
 *
 * @param request ModifyTTSConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyTTSConfigResponse
 */
ModifyTTSConfigResponse Client::modifyTTSConfigWithOptions(const ModifyTTSConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAliCustomizedVoice()) {
    query["AliCustomizedVoice"] = request.getAliCustomizedVoice();
  }

  if (!!request.hasAppKey()) {
    query["AppKey"] = request.getAppKey();
  }

  if (!!request.hasEngine()) {
    query["Engine"] = request.getEngine();
  }

  if (!!request.hasEngineXunfei()) {
    query["EngineXunfei"] = request.getEngineXunfei();
  }

  if (!!request.hasExtParams()) {
    query["ExtParams"] = request.getExtParams();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasNlsServiceType()) {
    query["NlsServiceType"] = request.getNlsServiceType();
  }

  if (!!request.hasPitchRate()) {
    query["PitchRate"] = request.getPitchRate();
  }

  if (!!request.hasSpeechRate()) {
    query["SpeechRate"] = request.getSpeechRate();
  }

  if (!!request.hasTtsOverrides()) {
    query["TtsOverrides"] = request.getTtsOverrides();
  }

  if (!!request.hasVoice()) {
    query["Voice"] = request.getVoice();
  }

  if (!!request.hasVolume()) {
    query["Volume"] = request.getVolume();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyTTSConfig"},
    {"version" , "2018-06-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyTTSConfigResponse>();
}

/**
 * @summary Modifies the TTS configuration.
 *
 * @param request ModifyTTSConfigRequest
 * @return ModifyTTSConfigResponse
 */
ModifyTTSConfigResponse Client::modifyTTSConfig(const ModifyTTSConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyTTSConfigWithOptions(request, runtime);
}

/**
 * @summary Modifies the rejection configuration.
 *
 * @param request ModifyUnrecognizingConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyUnrecognizingConfigResponse
 */
ModifyUnrecognizingConfigResponse Client::modifyUnrecognizingConfigWithOptions(const ModifyUnrecognizingConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFinalAction()) {
    query["FinalAction"] = request.getFinalAction();
  }

  if (!!request.hasFinalActionParams()) {
    query["FinalActionParams"] = request.getFinalActionParams();
  }

  if (!!request.hasFinalPrompt()) {
    query["FinalPrompt"] = request.getFinalPrompt();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPrompt()) {
    query["Prompt"] = request.getPrompt();
  }

  if (!!request.hasThreshold()) {
    query["Threshold"] = request.getThreshold();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyUnrecognizingConfig"},
    {"version" , "2018-06-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyUnrecognizingConfigResponse>();
}

/**
 * @summary Modifies the rejection configuration.
 *
 * @param request ModifyUnrecognizingConfigRequest
 * @return ModifyUnrecognizingConfigResponse
 */
ModifyUnrecognizingConfigResponse Client::modifyUnrecognizingConfig(const ModifyUnrecognizingConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyUnrecognizingConfigWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of conversation records.
 *
 * @param request QueryConversationsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryConversationsResponse
 */
QueryConversationsResponse Client::queryConversationsWithOptions(const QueryConversationsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryConversations"},
    {"version" , "2018-06-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryConversationsResponse>();
}

/**
 * @summary Retrieves a list of conversation records.
 *
 * @param request QueryConversationsRequest
 * @return QueryConversationsResponse
 */
QueryConversationsResponse Client::queryConversations(const QueryConversationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryConversationsWithOptions(request, runtime);
}

/**
 * @summary Saves a recording.
 *
 * @param request SaveRecordingRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveRecordingResponse
 */
SaveRecordingResponse Client::saveRecordingWithOptions(const SaveRecordingRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConversationId()) {
    query["ConversationId"] = request.getConversationId();
  }

  if (!!request.hasDuration()) {
    query["Duration"] = request.getDuration();
  }

  if (!!request.hasFileName()) {
    query["FileName"] = request.getFileName();
  }

  if (!!request.hasFilePath()) {
    query["FilePath"] = request.getFilePath();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasInstanceOwnerId()) {
    query["InstanceOwnerId"] = request.getInstanceOwnerId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  if (!!request.hasVoiceSliceRecordingList()) {
    query["VoiceSliceRecordingList"] = request.getVoiceSliceRecordingList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SaveRecording"},
    {"version" , "2018-06-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveRecordingResponse>();
}

/**
 * @summary Saves a recording.
 *
 * @param request SaveRecordingRequest
 * @return SaveRecordingResponse
 */
SaveRecordingResponse Client::saveRecording(const SaveRecordingRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveRecordingWithOptions(request, runtime);
}

/**
 * @summary Handles the silence timeout event in a conversation.
 *
 * @param request SilenceTimeoutRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SilenceTimeoutResponse
 */
SilenceTimeoutResponse Client::silenceTimeoutWithOptions(const SilenceTimeoutRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConversationId()) {
    query["ConversationId"] = request.getConversationId();
  }

  if (!!request.hasInitialContext()) {
    query["InitialContext"] = request.getInitialContext();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasInstanceOwnerId()) {
    query["InstanceOwnerId"] = request.getInstanceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SilenceTimeout"},
    {"version" , "2018-06-12"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SilenceTimeoutResponse>();
}

/**
 * @summary Handles the silence timeout event in a conversation.
 *
 * @param request SilenceTimeoutRequest
 * @return SilenceTimeoutResponse
 */
SilenceTimeoutResponse Client::silenceTimeout(const SilenceTimeoutRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return silenceTimeoutWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace VoiceNavigator20180612