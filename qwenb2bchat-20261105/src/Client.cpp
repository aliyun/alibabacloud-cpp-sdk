#include <darabonba/Core.hpp>
#include <alibabacloud/QwenB2BChat20261105.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/gateway/POP.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
#include <darabonba/Convert.hpp>
#include <alibabacloud/WebsocketUtils.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::Gateway;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::OpenApi::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
using namespace AlibabaCloud::OpenApi::WebsocketUtils;
using namespace AlibabaCloud::QwenB2BChat20261105::Models;
namespace AlibabaCloud
{
namespace QwenB2BChat20261105
{

AlibabaCloud::QwenB2BChat20261105::Client::Client(Config &config): OpenApiClient(config){
  this->_productId = "QwenB2BChat";
  shared_ptr<POP> gatewayClient = make_shared<POP>();
  this->_spi = gatewayClient;
  this->_endpointRule = "regional";
  checkConfig(config);
  this->_endpoint = getEndpoint("qwenb2bchat", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Sends text or multimodal messages to initiate conversations with web search capabilities, supporting deep thinking, session history management, and both complete JSON and Server-Sent Events (SSE) streaming responses. Specific agent and media capabilities are subject to the activated scope.
 *
 * @param request ChatRequest
 * @param headers ChatHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChatResponse
 */
FutureGenerator<ChatResponse> Client::chatWithSSE(const ChatRequest &request, const ChatHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCommunication()) {
    body["communication"] = request.getCommunication();
  }

  if (!!request.hasData()) {
    body["data"] = request.getData();
  }

  if (!!request.hasParams()) {
    body["params"] = request.getParams();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasAccept()) {
    realHeaders["Accept"] = Darabonba::Convert::stringVal(headers.getAccept());
  }

  if (!!headers.hasXDashScopeSSE()) {
    realHeaders["X-DashScope-SSE"] = Darabonba::Convert::stringVal(headers.getXDashScopeSSE());
  }

  if (!!headers.hasXGWAccess()) {
    realHeaders["X-GW-Access"] = Darabonba::Convert::stringVal(headers.getXGWAccess());
  }

  if (!!headers.hasXGWNonce()) {
    realHeaders["X-GW-Nonce"] = Darabonba::Convert::stringVal(headers.getXGWNonce());
  }

  if (!!headers.hasXGWProtocol()) {
    realHeaders["X-GW-Protocol"] = Darabonba::Convert::stringVal(headers.getXGWProtocol());
  }

  if (!!headers.hasXGWSignature()) {
    realHeaders["X-GW-Signature"] = Darabonba::Convert::stringVal(headers.getXGWSignature());
  }

  if (!!headers.hasXGWTimestamp()) {
    realHeaders["X-GW-Timestamp"] = Darabonba::Convert::stringVal(headers.getXGWTimestamp());
  }

  if (!!headers.hasXRequestId()) {
    realHeaders["X-Request-Id"] = Darabonba::Convert::stringVal(headers.getXRequestId());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "Chat"},
    {"version" , "2026-11-05"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/api/chat")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
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
      })).get<ChatResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
    }

  }
}

/**
 * @summary Sends text or multimodal messages to initiate conversations with web search capabilities, supporting deep thinking, session history management, and both complete JSON and Server-Sent Events (SSE) streaming responses. Specific agent and media capabilities are subject to the activated scope.
 *
 * @param request ChatRequest
 * @param headers ChatHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChatResponse
 */
ChatResponse Client::chatWithOptions(const ChatRequest &request, const ChatHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCommunication()) {
    body["communication"] = request.getCommunication();
  }

  if (!!request.hasData()) {
    body["data"] = request.getData();
  }

  if (!!request.hasParams()) {
    body["params"] = request.getParams();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasAccept()) {
    realHeaders["Accept"] = Darabonba::Convert::stringVal(headers.getAccept());
  }

  if (!!headers.hasXDashScopeSSE()) {
    realHeaders["X-DashScope-SSE"] = Darabonba::Convert::stringVal(headers.getXDashScopeSSE());
  }

  if (!!headers.hasXGWAccess()) {
    realHeaders["X-GW-Access"] = Darabonba::Convert::stringVal(headers.getXGWAccess());
  }

  if (!!headers.hasXGWNonce()) {
    realHeaders["X-GW-Nonce"] = Darabonba::Convert::stringVal(headers.getXGWNonce());
  }

  if (!!headers.hasXGWProtocol()) {
    realHeaders["X-GW-Protocol"] = Darabonba::Convert::stringVal(headers.getXGWProtocol());
  }

  if (!!headers.hasXGWSignature()) {
    realHeaders["X-GW-Signature"] = Darabonba::Convert::stringVal(headers.getXGWSignature());
  }

  if (!!headers.hasXGWTimestamp()) {
    realHeaders["X-GW-Timestamp"] = Darabonba::Convert::stringVal(headers.getXGWTimestamp());
  }

  if (!!headers.hasXRequestId()) {
    realHeaders["X-Request-Id"] = Darabonba::Convert::stringVal(headers.getXRequestId());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "Chat"},
    {"version" , "2026-11-05"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/api/chat")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ChatResponse>();
}

/**
 * @summary Sends text or multimodal messages to initiate conversations with web search capabilities, supporting deep thinking, session history management, and both complete JSON and Server-Sent Events (SSE) streaming responses. Specific agent and media capabilities are subject to the activated scope.
 *
 * @param request ChatRequest
 * @return ChatResponse
 */
ChatResponse Client::chat(const ChatRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  ChatHeaders headers = ChatHeaders();
  return chatWithOptions(request, headers, runtime);
}

/**
 * @summary Validates the service activation API or initiates service activation for the current account, and returns the current activation status along with the available order or instance ID.
 *
 * @param request OpenServiceRequest
 * @param headers OpenServiceHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return OpenServiceResponse
 */
OpenServiceResponse Client::openServiceWithOptions(const OpenServiceRequest &request, const OpenServiceHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasCommunication()) {
    body["communication"] = request.getCommunication();
  }

  if (!!request.hasOpenBenefits()) {
    body["openBenefits"] = request.getOpenBenefits();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXGWAccess()) {
    realHeaders["X-GW-Access"] = Darabonba::Convert::stringVal(headers.getXGWAccess());
  }

  if (!!headers.hasXGWNonce()) {
    realHeaders["X-GW-Nonce"] = Darabonba::Convert::stringVal(headers.getXGWNonce());
  }

  if (!!headers.hasXGWSignature()) {
    realHeaders["X-GW-Signature"] = Darabonba::Convert::stringVal(headers.getXGWSignature());
  }

  if (!!headers.hasXGWTimestamp()) {
    realHeaders["X-GW-Timestamp"] = Darabonba::Convert::stringVal(headers.getXGWTimestamp());
  }

  if (!!headers.hasXRequestId()) {
    realHeaders["X-Request-Id"] = Darabonba::Convert::stringVal(headers.getXRequestId());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "OpenService"},
    {"version" , "2026-11-05"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/api/openService")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<OpenServiceResponse>();
}

/**
 * @summary Validates the service activation API or initiates service activation for the current account, and returns the current activation status along with the available order or instance ID.
 *
 * @param request OpenServiceRequest
 * @return OpenServiceResponse
 */
OpenServiceResponse Client::openService(const OpenServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  OpenServiceHeaders headers = OpenServiceHeaders();
  return openServiceWithOptions(request, headers, runtime);
}

/**
 * @summary Uploads audio and receives recognized text, agent responses, and synthesized audio over a WebSocket connection. Supports image and text auxiliary input, recognition context, and conversation history. The operation description covers the complete handshake, control frames, audio frames, return events, and error handling protocols.
 *
 * @param request StreamVoiceRequest
 * @param headers StreamVoiceHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return StreamVoiceResponse
 */
StreamVoiceResponse Client::streamVoiceWithOptions(const StreamVoiceRequest &request, const StreamVoiceHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXGWAccess()) {
    realHeaders["X-GW-Access"] = Darabonba::Convert::stringVal(headers.getXGWAccess());
  }

  if (!!headers.hasXGWNonce()) {
    realHeaders["X-GW-Nonce"] = Darabonba::Convert::stringVal(headers.getXGWNonce());
  }

  if (!!headers.hasXGWProtocol()) {
    realHeaders["X-GW-Protocol"] = Darabonba::Convert::stringVal(headers.getXGWProtocol());
  }

  if (!!headers.hasXGWSignature()) {
    realHeaders["X-GW-Signature"] = Darabonba::Convert::stringVal(headers.getXGWSignature());
  }

  if (!!headers.hasXGWTimestamp()) {
    realHeaders["X-GW-Timestamp"] = Darabonba::Convert::stringVal(headers.getXGWTimestamp());
  }

  if (!!headers.hasXRequestId()) {
    realHeaders["X-Request-Id"] = Darabonba::Convert::stringVal(headers.getXRequestId());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StreamVoice"},
    {"version" , "2026-11-05"},
    {"protocol" , "wss"},
    {"pathname" , DARA_STRING_TEMPLATE("/v1/api/voice")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"},
    {"websocketSubProtocol" , "general"}
  }).get<map<string, string>>());
  StreamVoiceResponse res = StreamVoiceResponse();
  json tmp = callApi(params, req, runtime);
  if (!Darabonba::isNull(tmp.at("webSocketClient"))) {
    res.setWebSocketClient(Client::createWebSocketClient(tmp.at("webSocketClient")));
  }

  return res;
}

/**
 * @summary Uploads audio and receives recognized text, agent responses, and synthesized audio over a WebSocket connection. Supports image and text auxiliary input, recognition context, and conversation history. The operation description covers the complete handshake, control frames, audio frames, return events, and error handling protocols.
 *
 * @param request StreamVoiceRequest
 * @return StreamVoiceResponse
 */
StreamVoiceResponse Client::streamVoice(const StreamVoiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  StreamVoiceHeaders headers = StreamVoiceHeaders();
  return streamVoiceWithOptions(request, headers, runtime);
}
} // namespace AlibabaCloud
} // namespace QwenB2BChat20261105