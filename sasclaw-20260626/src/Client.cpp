#include <darabonba/Core.hpp>
#include <alibabacloud/SasClaw20260626.hpp>
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
using namespace AlibabaCloud::SasClaw20260626::Models;
namespace AlibabaCloud
{
namespace SasClaw20260626
{

AlibabaCloud::SasClaw20260626::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  checkConfig(config);
  this->_endpoint = getEndpoint("sasclaw", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Claw SSE Chat
 *
 * @param request ChatUserSecAgentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChatUserSecAgentResponse
 */
FutureGenerator<ChatUserSecAgentResponse> Client::chatUserSecAgentWithSSE(const ChatUserSecAgentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAgent()) {
    body["Agent"] = request.getAgent();
  }

  if (!!request.hasAttachmentStagingId()) {
    body["AttachmentStagingId"] = request.getAttachmentStagingId();
  }

  if (!!request.hasAttachments()) {
    body["Attachments"] = request.getAttachments();
  }

  if (!!request.hasChannel()) {
    body["Channel"] = request.getChannel();
  }

  if (!!request.hasExecutionMode()) {
    body["ExecutionMode"] = request.getExecutionMode();
  }

  if (!!request.hasExtraParams()) {
    body["ExtraParams"] = request.getExtraParams();
  }

  if (!!request.hasMemory()) {
    body["Memory"] = request.getMemory();
  }

  if (!!request.hasModel()) {
    body["Model"] = request.getModel();
  }

  if (!!request.hasPrompt()) {
    body["Prompt"] = request.getPrompt();
  }

  if (!!request.hasResponseLanguage()) {
    body["ResponseLanguage"] = request.getResponseLanguage();
  }

  if (!!request.hasSessionId()) {
    body["SessionId"] = request.getSessionId();
  }

  if (!!request.hasSkill()) {
    body["Skill"] = request.getSkill();
  }

  if (!!request.hasStream()) {
    body["Stream"] = request.getStream();
  }

  if (!!request.hasTalkId()) {
    body["TalkId"] = request.getTalkId();
  }

  if (!!request.hasTarget()) {
    body["Target"] = request.getTarget();
  }

  if (!!request.hasTimeZone()) {
    body["TimeZone"] = request.getTimeZone();
  }

  if (!!request.hasUserInputInfo()) {
    body["UserInputInfo"] = request.getUserInputInfo();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ChatUserSecAgent"},
    {"version" , "2026-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "string"}
  }).get<map<string, string>>());
  FutureGenerator<SSEResponse> sseResp = callSSEApi(params, req, runtime);
  for (SSEResponse resp : sseResp) {
    if (!!resp.hasEvent() && !!resp.getEvent().hasData()) {
      string data = resp.getEvent().getData();
json       __retrun = json(json({
        {"statusCode" , resp.getStatusCode()},
        {"headers" , resp.getHeaders()},
        {"id" , resp.getEvent().getId()},
        {"event" , resp.getEvent().getEvent()},
        {"body" , data}
      })).get<ChatUserSecAgentResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
    }

  }
}

/**
 * @summary Claw SSE Chat
 *
 * @param request ChatUserSecAgentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChatUserSecAgentResponse
 */
ChatUserSecAgentResponse Client::chatUserSecAgentWithOptions(const ChatUserSecAgentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAgent()) {
    body["Agent"] = request.getAgent();
  }

  if (!!request.hasAttachmentStagingId()) {
    body["AttachmentStagingId"] = request.getAttachmentStagingId();
  }

  if (!!request.hasAttachments()) {
    body["Attachments"] = request.getAttachments();
  }

  if (!!request.hasChannel()) {
    body["Channel"] = request.getChannel();
  }

  if (!!request.hasExecutionMode()) {
    body["ExecutionMode"] = request.getExecutionMode();
  }

  if (!!request.hasExtraParams()) {
    body["ExtraParams"] = request.getExtraParams();
  }

  if (!!request.hasMemory()) {
    body["Memory"] = request.getMemory();
  }

  if (!!request.hasModel()) {
    body["Model"] = request.getModel();
  }

  if (!!request.hasPrompt()) {
    body["Prompt"] = request.getPrompt();
  }

  if (!!request.hasResponseLanguage()) {
    body["ResponseLanguage"] = request.getResponseLanguage();
  }

  if (!!request.hasSessionId()) {
    body["SessionId"] = request.getSessionId();
  }

  if (!!request.hasSkill()) {
    body["Skill"] = request.getSkill();
  }

  if (!!request.hasStream()) {
    body["Stream"] = request.getStream();
  }

  if (!!request.hasTalkId()) {
    body["TalkId"] = request.getTalkId();
  }

  if (!!request.hasTarget()) {
    body["Target"] = request.getTarget();
  }

  if (!!request.hasTimeZone()) {
    body["TimeZone"] = request.getTimeZone();
  }

  if (!!request.hasUserInputInfo()) {
    body["UserInputInfo"] = request.getUserInputInfo();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "ChatUserSecAgent"},
    {"version" , "2026-06-26"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "string"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ChatUserSecAgentResponse>();
}

/**
 * @summary Claw SSE Chat
 *
 * @param request ChatUserSecAgentRequest
 * @return ChatUserSecAgentResponse
 */
ChatUserSecAgentResponse Client::chatUserSecAgent(const ChatUserSecAgentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return chatUserSecAgentWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace SasClaw20260626