#include <darabonba/Core.hpp>
#include <alibabacloud/QwenB2BChat20261121.hpp>
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
using namespace AlibabaCloud::QwenB2BChat20261121::Models;
namespace AlibabaCloud
{
namespace QwenB2BChat20261121
{

AlibabaCloud::QwenB2BChat20261121::Client::Client(Config &config): OpenApiClient(config){
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
 * @summary 发送文本或多模态消息进行联网对话，支持深度思考、会话历史管理以及完整 JSON 响应和 SSE 流式响应。具体 Agent 及媒体能力以已开通范围为准。
 *
 * @param request ChatRequest
 * @param headers ChatHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChatResponse
 */
FutureGenerator<ChatResponse> Client::chatWithSSE(const ChatRequest &request, const ChatHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
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
    {"headers" , realHeaders}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "Chat"},
    {"version" , "2026-11-21"},
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
 * @summary 发送文本或多模态消息进行联网对话，支持深度思考、会话历史管理以及完整 JSON 响应和 SSE 流式响应。具体 Agent 及媒体能力以已开通范围为准。
 *
 * @param request ChatRequest
 * @param headers ChatHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChatResponse
 */
ChatResponse Client::chatWithOptions(const ChatRequest &request, const ChatHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
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
    {"headers" , realHeaders}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "Chat"},
    {"version" , "2026-11-21"},
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
 * @summary 发送文本或多模态消息进行联网对话，支持深度思考、会话历史管理以及完整 JSON 响应和 SSE 流式响应。具体 Agent 及媒体能力以已开通范围为准。
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
 * @summary 验证服务开通接口或为当前账户发起服务开通，返回当前开通状态及可用的订单或实例编号。
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
    {"version" , "2026-11-21"},
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
 * @summary 验证服务开通接口或为当前账户发起服务开通，返回当前开通状态及可用的订单或实例编号。
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
 * @summary 通过 WebSocket 上传语音并接收识别文字、Agent 回复及合成音频，支持图文辅助输入、识别上下文和会话历史。接口说明包含完整握手、控制帧、音频帧、返回事件与错误处理协议。
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
    {"version" , "2026-11-21"},
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
 * @summary 通过 WebSocket 上传语音并接收识别文字、Agent 回复及合成音频，支持图文辅助输入、识别上下文和会话历史。接口说明包含完整握手、控制帧、音频帧、返回事件与错误处理协议。
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
} // namespace QwenB2BChat20261121