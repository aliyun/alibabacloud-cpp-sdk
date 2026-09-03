#include <darabonba/Core.hpp>
#include <alibabacloud/OssAgent20260622.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
#include <darabonba/encode/Encoder.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::OpenApi::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
using namespace AlibabaCloud::OssAgent20260622::Models;
namespace AlibabaCloud
{
namespace OssAgent20260622
{

AlibabaCloud::OssAgent20260622::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  checkConfig(config);
  this->_endpoint = getEndpoint("ossagent", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Initiates a streaming chat session.
 *
 * @param request ChatRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChatResponse
 */
FutureGenerator<ChatResponse> Client::chatWithSSE(const ChatRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasMessages()) {
    body["messages"] = request.getMessages();
  }

  if (!!request.hasSessionId()) {
    body["sessionId"] = request.getSessionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "Chat"},
    {"version" , "2026-06-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/chat/stream")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
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
      })).get<ChatResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
    }

  }
}

/**
 * @summary Initiates a streaming chat session.
 *
 * @param request ChatRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChatResponse
 */
ChatResponse Client::chatWithOptions(const ChatRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasMessages()) {
    body["messages"] = request.getMessages();
  }

  if (!!request.hasSessionId()) {
    body["sessionId"] = request.getSessionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "Chat"},
    {"version" , "2026-06-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/chat/stream")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "string"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ChatResponse>();
}

/**
 * @summary Initiates a streaming chat session.
 *
 * @param request ChatRequest
 * @return ChatResponse
 */
ChatResponse Client::chat(const ChatRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return chatWithOptions(request, headers, runtime);
}

/**
 * @summary Confirms a tool calling operation.
 *
 * @param request ConfirmRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConfirmResponse
 */
FutureGenerator<ConfirmResponse> Client::confirmWithSSE(const ConfirmRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasConfirmed()) {
    body["confirmed"] = request.getConfirmed();
  }

  if (!!request.hasPhase()) {
    body["phase"] = request.getPhase();
  }

  if (!!request.hasReason()) {
    body["reason"] = request.getReason();
  }

  if (!!request.hasSessionId()) {
    body["sessionId"] = request.getSessionId();
  }

  if (!!request.hasToolCalls()) {
    body["toolCalls"] = request.getToolCalls();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "Confirm"},
    {"version" , "2026-06-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/chat/confirm")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
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
      })).get<ConfirmResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
    }

  }
}

/**
 * @summary Confirms a tool calling operation.
 *
 * @param request ConfirmRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConfirmResponse
 */
ConfirmResponse Client::confirmWithOptions(const ConfirmRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasConfirmed()) {
    body["confirmed"] = request.getConfirmed();
  }

  if (!!request.hasPhase()) {
    body["phase"] = request.getPhase();
  }

  if (!!request.hasReason()) {
    body["reason"] = request.getReason();
  }

  if (!!request.hasSessionId()) {
    body["sessionId"] = request.getSessionId();
  }

  if (!!request.hasToolCalls()) {
    body["toolCalls"] = request.getToolCalls();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "Confirm"},
    {"version" , "2026-06-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/chat/confirm")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "string"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ConfirmResponse>();
}

/**
 * @summary Confirms a tool calling operation.
 *
 * @param request ConfirmRequest
 * @return ConfirmResponse
 */
ConfirmResponse Client::confirm(const ConfirmRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return confirmWithOptions(request, headers, runtime);
}

/**
 * @summary Retrieves the details of a session. You can only query sessions generated by your own account.
 *
 * @param request GetSessionContentRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSessionContentResponse
 */
GetSessionContentResponse Client::getSessionContentWithOptions(const GetSessionContentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSessionId()) {
    query["sessionId"] = request.getSessionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSessionContent"},
    {"version" , "2026-06-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/oss/agent/get_session_content.json")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSessionContentResponse>();
}

/**
 * @summary Retrieves the details of a session. You can only query sessions generated by your own account.
 *
 * @param request GetSessionContentRequest
 * @return GetSessionContentResponse
 */
GetSessionContentResponse Client::getSessionContent(const GetSessionContentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getSessionContentWithOptions(request, headers, runtime);
}

/**
 * @summary Interrupts a chat session.
 *
 * @param request InterruptRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return InterruptResponse
 */
InterruptResponse Client::interruptWithOptions(const string &sessionId, const InterruptRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "Interrupt"},
    {"version" , "2026-06-22"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/chat/interrupt/" , Darabonba::Encode::Encoder::percentEncode(sessionId))},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "string"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InterruptResponse>();
}

/**
 * @summary Interrupts a chat session.
 *
 * @param request InterruptRequest
 * @return InterruptResponse
 */
InterruptResponse Client::interrupt(const string &sessionId, const InterruptRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return interruptWithOptions(sessionId, request, headers, runtime);
}
} // namespace AlibabaCloud
} // namespace OssAgent20260622