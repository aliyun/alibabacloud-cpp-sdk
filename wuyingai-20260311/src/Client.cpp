#include <darabonba/Core.hpp>
#include <alibabacloud/WuyingAI20260311.hpp>
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
using namespace AlibabaCloud::WuyingAI20260311::Models;
namespace AlibabaCloud
{
namespace WuyingAI20260311
{

AlibabaCloud::WuyingAI20260311::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("wuyingai", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 与 JVS Crew 进行流式对话，采用 Server-Sent Events (SSE) 协议实时推送对话内容。
 *
 * @param tmpReq ChatRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChatResponse
 */
FutureGenerator<ChatResponse> Client::chatWithSSE(const ChatRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ChatShrinkRequest request = ChatShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasInput()) {
    request.setInputShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getInput(), "Input", "json"));
  }

  if (!!tmpReq.hasSettings()) {
    request.setSettingsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSettings(), "Settings", "json"));
  }

  if (!!tmpReq.hasStreamOptions()) {
    request.setStreamOptionsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getStreamOptions(), "StreamOptions", "json"));
  }

  json query = {};
  if (!!request.hasAuthorization()) {
    query["Authorization"] = request.getAuthorization();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  json body = {};
  if (!!request.hasExternalUserId()) {
    body["ExternalUserId"] = request.getExternalUserId();
  }

  if (!!request.hasInputShrink()) {
    body["Input"] = request.getInputShrink();
  }

  if (!!request.hasRoutingKey()) {
    body["RoutingKey"] = request.getRoutingKey();
  }

  if (!!request.hasSessionId()) {
    body["SessionId"] = request.getSessionId();
  }

  if (!!request.hasSettingsShrink()) {
    body["Settings"] = request.getSettingsShrink();
  }

  if (!!request.hasStreamOptionsShrink()) {
    body["StreamOptions"] = request.getStreamOptionsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "Chat"},
    {"version" , "2026-03-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "Anonymous"},
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
      })).get<ChatResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
    }

  }
}

/**
 * @summary 与 JVS Crew 进行流式对话，采用 Server-Sent Events (SSE) 协议实时推送对话内容。
 *
 * @param tmpReq ChatRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChatResponse
 */
ChatResponse Client::chatWithOptions(const ChatRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ChatShrinkRequest request = ChatShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasInput()) {
    request.setInputShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getInput(), "Input", "json"));
  }

  if (!!tmpReq.hasSettings()) {
    request.setSettingsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSettings(), "Settings", "json"));
  }

  if (!!tmpReq.hasStreamOptions()) {
    request.setStreamOptionsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getStreamOptions(), "StreamOptions", "json"));
  }

  json query = {};
  if (!!request.hasAuthorization()) {
    query["Authorization"] = request.getAuthorization();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  json body = {};
  if (!!request.hasExternalUserId()) {
    body["ExternalUserId"] = request.getExternalUserId();
  }

  if (!!request.hasInputShrink()) {
    body["Input"] = request.getInputShrink();
  }

  if (!!request.hasRoutingKey()) {
    body["RoutingKey"] = request.getRoutingKey();
  }

  if (!!request.hasSessionId()) {
    body["SessionId"] = request.getSessionId();
  }

  if (!!request.hasSettingsShrink()) {
    body["Settings"] = request.getSettingsShrink();
  }

  if (!!request.hasStreamOptionsShrink()) {
    body["StreamOptions"] = request.getStreamOptionsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "Chat"},
    {"version" , "2026-03-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "Anonymous"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(doRPCRequest(params.getAction(), params.getVersion(), params.getProtocol(), params.getMethod(), params.getAuthType(), params.getBodyType(), req, runtime)).get<ChatResponse>();
}

/**
 * @summary 与 JVS Crew 进行流式对话，采用 Server-Sent Events (SSE) 协议实时推送对话内容。
 *
 * @param request ChatRequest
 * @return ChatResponse
 */
ChatResponse Client::chat(const ChatRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return chatWithOptions(request, runtime);
}

/**
 * @summary 获取用户进行对话所需的访问令牌（AccessToken），用于后续调用 Chat 接口进行身份验证。
 *
 * @param request GetAccessTokenRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAccessTokenResponse
 */
GetAccessTokenResponse Client::getAccessTokenWithOptions(const GetAccessTokenRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasExternalUserId()) {
    query["ExternalUserId"] = request.getExternalUserId();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetAccessToken"},
    {"version" , "2026-03-11"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAccessTokenResponse>();
}

/**
 * @summary 获取用户进行对话所需的访问令牌（AccessToken），用于后续调用 Chat 接口进行身份验证。
 *
 * @param request GetAccessTokenRequest
 * @return GetAccessTokenResponse
 */
GetAccessTokenResponse Client::getAccessToken(const GetAccessTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAccessTokenWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace WuyingAI20260311