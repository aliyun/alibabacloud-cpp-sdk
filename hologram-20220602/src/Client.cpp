#include <darabonba/Core.hpp>
#include <alibabacloud/Hologram20220602.hpp>
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
using namespace AlibabaCloud::Hologram20220602::Models;
namespace AlibabaCloud
{
namespace Hologram20220602
{

AlibabaCloud::Hologram20220602::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  checkConfig(config);
  this->_endpoint = getEndpoint("hologram", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 用于创建一个新的Agent会话并返回会话ID。
 *
 * @description ## 请求说明
 * - 该接口用于创建一个新的 Agent 会话。
 * - 通过 `_meta.agent.agentName` 指定绑定的 Agent 名称，这是必填项。
 * - 可以通过 `_meta.config.sessionSource` 透传会话来源标识，便于后续按来源检索。
 * - 支持通过 `_meta.config.sessionTags[].sessionTagCode` 传入会话标签。
 *
 * @param tmpReq CreateAgentSessionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAgentSessionResponse
 */
CreateAgentSessionResponse Client::createAgentSessionWithOptions(const CreateAgentSessionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateAgentSessionShrinkRequest request = CreateAgentSessionShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasParams()) {
    request.setParamsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getParams(), "Params", "json"));
  }

  json body = {};
  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasJsonrpc()) {
    body["Jsonrpc"] = request.getJsonrpc();
  }

  if (!!request.hasParamsShrink()) {
    body["Params"] = request.getParamsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "CreateAgentSession"},
    {"version" , "2022-06-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAgentSessionResponse>();
}

/**
 * @summary 用于创建一个新的Agent会话并返回会话ID。
 *
 * @description ## 请求说明
 * - 该接口用于创建一个新的 Agent 会话。
 * - 通过 `_meta.agent.agentName` 指定绑定的 Agent 名称，这是必填项。
 * - 可以通过 `_meta.config.sessionSource` 透传会话来源标识，便于后续按来源检索。
 * - 支持通过 `_meta.config.sessionTags[].sessionTagCode` 传入会话标签。
 *
 * @param request CreateAgentSessionRequest
 * @return CreateAgentSessionResponse
 */
CreateAgentSessionResponse Client::createAgentSession(const CreateAgentSessionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAgentSessionWithOptions(request, runtime);
}

/**
 * @summary 向指定会话发送用户Prompt，并以SSE方式流式接收Agent响应。
 *
 * @description ## 请求说明
 * - 该 API 用于向指定的会话 ID 发送用户的 Prompt，并以 SSE（Server-Sent Events）流式方式接收来自 Agent 的响应。
 * - 响应可能包括消息分片、思考过程、工具调用状态更新等信息。
 * - 如果指定的会话不存在，将通过 SSE 错误帧返回 400 错误。
 * - `stopReason`字段指示了 Agent 停止本轮对话的原因。
 * - 可选地提供额外元信息`Meta`来传递更多上下文给服务端。
 * - 返回的内容符合开源协议 Agent Client Protocol (ACP) 的规范。
 *
 * @param tmpReq PromptAgentSessionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PromptAgentSessionResponse
 */
FutureGenerator<PromptAgentSessionResponse> Client::promptAgentSessionWithSSE(const PromptAgentSessionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  PromptAgentSessionShrinkRequest request = PromptAgentSessionShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasParams()) {
    request.setParamsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getParams(), "Params", "json"));
  }

  json body = {};
  if (!!request.hasCallerContext()) {
    body["Caller-Context"] = request.getCallerContext();
  }

  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasJsonrpc()) {
    body["Jsonrpc"] = request.getJsonrpc();
  }

  if (!!request.hasParamsShrink()) {
    body["Params"] = request.getParamsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "PromptAgentSession"},
    {"version" , "2022-06-02"},
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
      })).get<PromptAgentSessionResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
    }

  }
}

/**
 * @summary 向指定会话发送用户Prompt，并以SSE方式流式接收Agent响应。
 *
 * @description ## 请求说明
 * - 该 API 用于向指定的会话 ID 发送用户的 Prompt，并以 SSE（Server-Sent Events）流式方式接收来自 Agent 的响应。
 * - 响应可能包括消息分片、思考过程、工具调用状态更新等信息。
 * - 如果指定的会话不存在，将通过 SSE 错误帧返回 400 错误。
 * - `stopReason`字段指示了 Agent 停止本轮对话的原因。
 * - 可选地提供额外元信息`Meta`来传递更多上下文给服务端。
 * - 返回的内容符合开源协议 Agent Client Protocol (ACP) 的规范。
 *
 * @param tmpReq PromptAgentSessionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PromptAgentSessionResponse
 */
PromptAgentSessionResponse Client::promptAgentSessionWithOptions(const PromptAgentSessionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  PromptAgentSessionShrinkRequest request = PromptAgentSessionShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasParams()) {
    request.setParamsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getParams(), "Params", "json"));
  }

  json body = {};
  if (!!request.hasCallerContext()) {
    body["Caller-Context"] = request.getCallerContext();
  }

  if (!!request.hasId()) {
    body["Id"] = request.getId();
  }

  if (!!request.hasJsonrpc()) {
    body["Jsonrpc"] = request.getJsonrpc();
  }

  if (!!request.hasParamsShrink()) {
    body["Params"] = request.getParamsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"body" , Utils::Utils::parseToMap(body)}
  }).get<map<string, json>>());
  Params params = Params(json({
    {"action" , "PromptAgentSession"},
    {"version" , "2022-06-02"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PromptAgentSessionResponse>();
}

/**
 * @summary 向指定会话发送用户Prompt，并以SSE方式流式接收Agent响应。
 *
 * @description ## 请求说明
 * - 该 API 用于向指定的会话 ID 发送用户的 Prompt，并以 SSE（Server-Sent Events）流式方式接收来自 Agent 的响应。
 * - 响应可能包括消息分片、思考过程、工具调用状态更新等信息。
 * - 如果指定的会话不存在，将通过 SSE 错误帧返回 400 错误。
 * - `stopReason`字段指示了 Agent 停止本轮对话的原因。
 * - 可选地提供额外元信息`Meta`来传递更多上下文给服务端。
 * - 返回的内容符合开源协议 Agent Client Protocol (ACP) 的规范。
 *
 * @param request PromptAgentSessionRequest
 * @return PromptAgentSessionResponse
 */
PromptAgentSessionResponse Client::promptAgentSession(const PromptAgentSessionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return promptAgentSessionWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Hologram20220602