#include <darabonba/Core.hpp>
#include <alibabacloud/MaasQIService20260831.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
#include <darabonba/Convert.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::OpenApi::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
using namespace AlibabaCloud::MaasQIService20260831::Models;
namespace AlibabaCloud
{
namespace MaasQIService20260831
{

AlibabaCloud::MaasQIService20260831::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  checkConfig(config);
  this->_endpoint = getEndpoint("maasqiservice", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Calls a published Creative Agent with support for Lite and Dedicated editions, and returns execution progress and image artifacts by using Server-Sent Events (SSE). The Lite edition performs text-to-image or image-to-image generation depending on whether a reference image is provided. The Dedicated edition uses a Planner to plan and execute generation and editing tasks with multi-turn conversation support. Pass generation count, dimensions, and other parameters through metadata.parameters. Image URLs are included in the artifacts of the result.
 *
 * @description ### Before you begin
 * - Install the SDK from the SDK Center.
 * - Activate the Creative Agent service and prepare the published instance ID and the corresponding instance access key.
 * - Creative Agent provides Lite and Dedicated editions. The Lite edition generates or edits images based on whether a reference image is provided. The Dedicated edition uses a Planner to plan and execute creative tasks.
 * - Complete AccessKey authentication by using the SDK. The instance access key is placed in X-QI-Agent-Api-Key and cannot replace the AccessKey signature.
 * - Set Content-Type: application/json and Accept: text/event-stream. The stream parameter must be set to true.
 * ### How to call
 * - Method and path: `POST /aigc/v1/chat/completions`.
 * - Specify the instance by using `X-QI-Instance-Id`. The request is executed based on the published configuration of the specified instance. The model field in the request body is a compatibility placeholder and cannot be used to switch models.
 * - This operation returns incremental events instead of a complete JSON response. Continue reading until the stream ends and check for in-stream errors.
 * ### Session management
 * You can omit `X-QI-Session-Id` for the first turn. Save the session identifier returned by the server from the `qi_session_id` field in the SSE body, and pass the same value back in subsequent turns. Do not rely on the gateway to pass through custom response headers. Use different identifiers for different sessions and send requests sequentially within the same session.
 *
 * @param request AigcChatCompletionStreamRequest
 * @param headers AigcChatCompletionStreamHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return AigcChatCompletionStreamResponse
 */
FutureGenerator<AigcChatCompletionStreamResponse> Client::aigcChatCompletionStreamWithSSE(const AigcChatCompletionStreamRequest &request, const AigcChatCompletionStreamHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasMessages()) {
    body["messages"] = request.getMessages();
  }

  if (!!request.hasMetadata()) {
    body["metadata"] = request.getMetadata();
  }

  if (!!request.hasModel()) {
    body["model"] = request.getModel();
  }

  if (!!request.hasStream()) {
    body["stream"] = request.getStream();
  }

  if (!!request.hasStreamOptions()) {
    body["streamOptions"] = request.getStreamOptions();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXQIAgentApiKey()) {
    realHeaders["X-QI-Agent-Api-Key"] = Darabonba::Convert::stringVal(headers.getXQIAgentApiKey());
  }

  if (!!headers.hasXQIInstanceId()) {
    realHeaders["X-QI-Instance-Id"] = Darabonba::Convert::stringVal(headers.getXQIInstanceId());
  }

  if (!!headers.hasXQISessionId()) {
    realHeaders["X-QI-Session-Id"] = Darabonba::Convert::stringVal(headers.getXQISessionId());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "AigcChatCompletionStream"},
    {"version" , "2026-08-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/aigc/v1/chat/completions")},
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
      })).get<AigcChatCompletionStreamResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
    }

  }
}

/**
 * @summary Calls a published Creative Agent with support for Lite and Dedicated editions, and returns execution progress and image artifacts by using Server-Sent Events (SSE). The Lite edition performs text-to-image or image-to-image generation depending on whether a reference image is provided. The Dedicated edition uses a Planner to plan and execute generation and editing tasks with multi-turn conversation support. Pass generation count, dimensions, and other parameters through metadata.parameters. Image URLs are included in the artifacts of the result.
 *
 * @description ### Before you begin
 * - Install the SDK from the SDK Center.
 * - Activate the Creative Agent service and prepare the published instance ID and the corresponding instance access key.
 * - Creative Agent provides Lite and Dedicated editions. The Lite edition generates or edits images based on whether a reference image is provided. The Dedicated edition uses a Planner to plan and execute creative tasks.
 * - Complete AccessKey authentication by using the SDK. The instance access key is placed in X-QI-Agent-Api-Key and cannot replace the AccessKey signature.
 * - Set Content-Type: application/json and Accept: text/event-stream. The stream parameter must be set to true.
 * ### How to call
 * - Method and path: `POST /aigc/v1/chat/completions`.
 * - Specify the instance by using `X-QI-Instance-Id`. The request is executed based on the published configuration of the specified instance. The model field in the request body is a compatibility placeholder and cannot be used to switch models.
 * - This operation returns incremental events instead of a complete JSON response. Continue reading until the stream ends and check for in-stream errors.
 * ### Session management
 * You can omit `X-QI-Session-Id` for the first turn. Save the session identifier returned by the server from the `qi_session_id` field in the SSE body, and pass the same value back in subsequent turns. Do not rely on the gateway to pass through custom response headers. Use different identifiers for different sessions and send requests sequentially within the same session.
 *
 * @param request AigcChatCompletionStreamRequest
 * @param headers AigcChatCompletionStreamHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return AigcChatCompletionStreamResponse
 */
AigcChatCompletionStreamResponse Client::aigcChatCompletionStreamWithOptions(const AigcChatCompletionStreamRequest &request, const AigcChatCompletionStreamHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasMessages()) {
    body["messages"] = request.getMessages();
  }

  if (!!request.hasMetadata()) {
    body["metadata"] = request.getMetadata();
  }

  if (!!request.hasModel()) {
    body["model"] = request.getModel();
  }

  if (!!request.hasStream()) {
    body["stream"] = request.getStream();
  }

  if (!!request.hasStreamOptions()) {
    body["streamOptions"] = request.getStreamOptions();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXQIAgentApiKey()) {
    realHeaders["X-QI-Agent-Api-Key"] = Darabonba::Convert::stringVal(headers.getXQIAgentApiKey());
  }

  if (!!headers.hasXQIInstanceId()) {
    realHeaders["X-QI-Instance-Id"] = Darabonba::Convert::stringVal(headers.getXQIInstanceId());
  }

  if (!!headers.hasXQISessionId()) {
    realHeaders["X-QI-Session-Id"] = Darabonba::Convert::stringVal(headers.getXQISessionId());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "AigcChatCompletionStream"},
    {"version" , "2026-08-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/aigc/v1/chat/completions")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AigcChatCompletionStreamResponse>();
}

/**
 * @summary Calls a published Creative Agent with support for Lite and Dedicated editions, and returns execution progress and image artifacts by using Server-Sent Events (SSE). The Lite edition performs text-to-image or image-to-image generation depending on whether a reference image is provided. The Dedicated edition uses a Planner to plan and execute generation and editing tasks with multi-turn conversation support. Pass generation count, dimensions, and other parameters through metadata.parameters. Image URLs are included in the artifacts of the result.
 *
 * @description ### Before you begin
 * - Install the SDK from the SDK Center.
 * - Activate the Creative Agent service and prepare the published instance ID and the corresponding instance access key.
 * - Creative Agent provides Lite and Dedicated editions. The Lite edition generates or edits images based on whether a reference image is provided. The Dedicated edition uses a Planner to plan and execute creative tasks.
 * - Complete AccessKey authentication by using the SDK. The instance access key is placed in X-QI-Agent-Api-Key and cannot replace the AccessKey signature.
 * - Set Content-Type: application/json and Accept: text/event-stream. The stream parameter must be set to true.
 * ### How to call
 * - Method and path: `POST /aigc/v1/chat/completions`.
 * - Specify the instance by using `X-QI-Instance-Id`. The request is executed based on the published configuration of the specified instance. The model field in the request body is a compatibility placeholder and cannot be used to switch models.
 * - This operation returns incremental events instead of a complete JSON response. Continue reading until the stream ends and check for in-stream errors.
 * ### Session management
 * You can omit `X-QI-Session-Id` for the first turn. Save the session identifier returned by the server from the `qi_session_id` field in the SSE body, and pass the same value back in subsequent turns. Do not rely on the gateway to pass through custom response headers. Use different identifiers for different sessions and send requests sequentially within the same session.
 *
 * @param request AigcChatCompletionStreamRequest
 * @return AigcChatCompletionStreamResponse
 */
AigcChatCompletionStreamResponse Client::aigcChatCompletionStream(const AigcChatCompletionStreamRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  AigcChatCompletionStreamHeaders headers = AigcChatCompletionStreamHeaders();
  return aigcChatCompletionStreamWithOptions(request, headers, runtime);
}

/**
 * @summary 调用已发布 CUAStandard 实例，根据任务和桌面截图生成电脑操作单步决策，以 SSE 返回 computer_use 工具调用
 *
 * @param request CuaChatCompletionStreamRequest
 * @param headers CuaChatCompletionStreamHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return CuaChatCompletionStreamResponse
 */
FutureGenerator<CuaChatCompletionStreamResponse> Client::cuaChatCompletionStreamWithSSE(const CuaChatCompletionStreamRequest &request, const CuaChatCompletionStreamHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasMessages()) {
    body["messages"] = request.getMessages();
  }

  if (!!request.hasMetadata()) {
    body["metadata"] = request.getMetadata();
  }

  if (!!request.hasModel()) {
    body["model"] = request.getModel();
  }

  if (!!request.hasStream()) {
    body["stream"] = request.getStream();
  }

  if (!!request.hasStreamOptions()) {
    body["streamOptions"] = request.getStreamOptions();
  }

  if (!!request.hasTools()) {
    body["tools"] = request.getTools();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXQIAgentApiKey()) {
    realHeaders["X-QI-Agent-Api-Key"] = Darabonba::Convert::stringVal(headers.getXQIAgentApiKey());
  }

  if (!!headers.hasXQIInstanceId()) {
    realHeaders["X-QI-Instance-Id"] = Darabonba::Convert::stringVal(headers.getXQIInstanceId());
  }

  if (!!headers.hasXQISessionId()) {
    realHeaders["X-QI-Session-Id"] = Darabonba::Convert::stringVal(headers.getXQISessionId());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CuaChatCompletionStream"},
    {"version" , "2026-08-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/cua/v1/chat/completions")},
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
      })).get<CuaChatCompletionStreamResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
    }

  }
}

/**
 * @summary 调用已发布 CUAStandard 实例，根据任务和桌面截图生成电脑操作单步决策，以 SSE 返回 computer_use 工具调用
 *
 * @param request CuaChatCompletionStreamRequest
 * @param headers CuaChatCompletionStreamHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return CuaChatCompletionStreamResponse
 */
CuaChatCompletionStreamResponse Client::cuaChatCompletionStreamWithOptions(const CuaChatCompletionStreamRequest &request, const CuaChatCompletionStreamHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasMessages()) {
    body["messages"] = request.getMessages();
  }

  if (!!request.hasMetadata()) {
    body["metadata"] = request.getMetadata();
  }

  if (!!request.hasModel()) {
    body["model"] = request.getModel();
  }

  if (!!request.hasStream()) {
    body["stream"] = request.getStream();
  }

  if (!!request.hasStreamOptions()) {
    body["streamOptions"] = request.getStreamOptions();
  }

  if (!!request.hasTools()) {
    body["tools"] = request.getTools();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXQIAgentApiKey()) {
    realHeaders["X-QI-Agent-Api-Key"] = Darabonba::Convert::stringVal(headers.getXQIAgentApiKey());
  }

  if (!!headers.hasXQIInstanceId()) {
    realHeaders["X-QI-Instance-Id"] = Darabonba::Convert::stringVal(headers.getXQIInstanceId());
  }

  if (!!headers.hasXQISessionId()) {
    realHeaders["X-QI-Session-Id"] = Darabonba::Convert::stringVal(headers.getXQISessionId());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CuaChatCompletionStream"},
    {"version" , "2026-08-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/cua/v1/chat/completions")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CuaChatCompletionStreamResponse>();
}

/**
 * @summary 调用已发布 CUAStandard 实例，根据任务和桌面截图生成电脑操作单步决策，以 SSE 返回 computer_use 工具调用
 *
 * @param request CuaChatCompletionStreamRequest
 * @return CuaChatCompletionStreamResponse
 */
CuaChatCompletionStreamResponse Client::cuaChatCompletionStream(const CuaChatCompletionStreamRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  CuaChatCompletionStreamHeaders headers = CuaChatCompletionStreamHeaders();
  return cuaChatCompletionStreamWithOptions(request, headers, runtime);
}

/**
 * @summary Calls a published Mobile-Use Agent instance, which supports the Standard Edition and Dedicated Edition. Submits the task text and the current screen screenshot, passes the device and application context through metadata, and returns the next mobile UI operation by using Server-Sent Events (SSE). The caller executes the UI operation and then continues to call the API with the session ID and the latest screenshot.
 *
 * @description ### Prerequisites
 * - Install the SDK from the SDK Center.
 * - Activate the Mobile-Use Agent service and prepare the ID and access key of a published Mobile-Use Agent instance.
 * - Mobile-Use Agent provides the Standard Edition and Dedicated Edition. Call the API based on the edition of the selected instance.
 * - Use the SDK to complete AccessKey authentication. Place the instance access key in the X-QI-Agent-Api-Key header, which cannot replace the AccessKey signature.
 * - Set Content-Type to application/json and Accept to text/event-stream. The stream parameter must be set to true.
 * ### Call methods
 * - Method and path: POST /gui/v1/chat/completions.
 * - Use X-QI-Instance-Id to specify the instance and execute based on the published configurations. The model field in the request body is a compatibility placeholder and cannot be used to switch models.
 * - The response consists of SSE incremental events rather than a complete JSON object. Continuously read the stream until it ends and check for errors within the stream.
 * ### Session management
 * You can omit X-QI-Session-Id in the first round. Save the qi_session_id from the SSE body and pass it in the request header with the same name for subsequent calls. Make sequential calls within the same session and use different identifiers for different sessions. Do not rely on the gateway to pass through custom response headers. The actual identifier is subject to the SSE body.
 *
 * @param request GuiChatCompletionStreamRequest
 * @param headers GuiChatCompletionStreamHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GuiChatCompletionStreamResponse
 */
FutureGenerator<GuiChatCompletionStreamResponse> Client::guiChatCompletionStreamWithSSE(const GuiChatCompletionStreamRequest &request, const GuiChatCompletionStreamHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAllowedTokenIds()) {
    body["allowedTokenIds"] = request.getAllowedTokenIds();
  }

  if (!!request.hasBadWords()) {
    body["badWords"] = request.getBadWords();
  }

  if (!!request.hasChatTemplateKwargs()) {
    body["chatTemplateKwargs"] = request.getChatTemplateKwargs();
  }

  if (!!request.hasFrequencyPenalty()) {
    body["frequencyPenalty"] = request.getFrequencyPenalty();
  }

  if (!!request.hasIgnoreEos()) {
    body["ignoreEos"] = request.getIgnoreEos();
  }

  if (!!request.hasIncludeReasoning()) {
    body["includeReasoning"] = request.getIncludeReasoning();
  }

  if (!!request.hasLogprobs()) {
    body["logprobs"] = request.getLogprobs();
  }

  if (!!request.hasMaxCompletionTokens()) {
    body["maxCompletionTokens"] = request.getMaxCompletionTokens();
  }

  if (!!request.hasMaxTokens()) {
    body["maxTokens"] = request.getMaxTokens();
  }

  if (!!request.hasMessages()) {
    body["messages"] = request.getMessages();
  }

  if (!!request.hasMetadata()) {
    body["metadata"] = request.getMetadata();
  }

  if (!!request.hasMinP()) {
    body["minP"] = request.getMinP();
  }

  if (!!request.hasMinTokens()) {
    body["minTokens"] = request.getMinTokens();
  }

  if (!!request.hasMmProcessorKwargs()) {
    body["mmProcessorKwargs"] = request.getMmProcessorKwargs();
  }

  if (!!request.hasModel()) {
    body["model"] = request.getModel();
  }

  if (!!request.hasN()) {
    body["n"] = request.getN();
  }

  if (!!request.hasParallelToolCalls()) {
    body["parallelToolCalls"] = request.getParallelToolCalls();
  }

  if (!!request.hasPresencePenalty()) {
    body["presencePenalty"] = request.getPresencePenalty();
  }

  if (!!request.hasPromptLogprobs()) {
    body["promptLogprobs"] = request.getPromptLogprobs();
  }

  if (!!request.hasReasoningEffort()) {
    body["reasoningEffort"] = request.getReasoningEffort();
  }

  if (!!request.hasRepetitionPenalty()) {
    body["repetitionPenalty"] = request.getRepetitionPenalty();
  }

  if (!!request.hasResponseFormat()) {
    body["responseFormat"] = request.getResponseFormat();
  }

  if (!!request.hasSeed()) {
    body["seed"] = request.getSeed();
  }

  if (!!request.hasSkipSpecialTokens()) {
    body["skipSpecialTokens"] = request.getSkipSpecialTokens();
  }

  if (!!request.hasStop()) {
    body["stop"] = request.getStop();
  }

  if (!!request.hasStopTokenIds()) {
    body["stopTokenIds"] = request.getStopTokenIds();
  }

  if (!!request.hasStream()) {
    body["stream"] = request.getStream();
  }

  if (!!request.hasStreamOptions()) {
    body["streamOptions"] = request.getStreamOptions();
  }

  if (!!request.hasStructuredOutputs()) {
    body["structuredOutputs"] = request.getStructuredOutputs();
  }

  if (!!request.hasTemperature()) {
    body["temperature"] = request.getTemperature();
  }

  if (!!request.hasTopK()) {
    body["topK"] = request.getTopK();
  }

  if (!!request.hasTopLogprobs()) {
    body["topLogprobs"] = request.getTopLogprobs();
  }

  if (!!request.hasTopP()) {
    body["topP"] = request.getTopP();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXQIAgentApiKey()) {
    realHeaders["X-QI-Agent-Api-Key"] = Darabonba::Convert::stringVal(headers.getXQIAgentApiKey());
  }

  if (!!headers.hasXQIInstanceId()) {
    realHeaders["X-QI-Instance-Id"] = Darabonba::Convert::stringVal(headers.getXQIInstanceId());
  }

  if (!!headers.hasXQISessionId()) {
    realHeaders["X-QI-Session-Id"] = Darabonba::Convert::stringVal(headers.getXQISessionId());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GuiChatCompletionStream"},
    {"version" , "2026-08-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/gui/v1/chat/completions")},
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
      })).get<GuiChatCompletionStreamResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
    }

  }
}

/**
 * @summary Calls a published Mobile-Use Agent instance, which supports the Standard Edition and Dedicated Edition. Submits the task text and the current screen screenshot, passes the device and application context through metadata, and returns the next mobile UI operation by using Server-Sent Events (SSE). The caller executes the UI operation and then continues to call the API with the session ID and the latest screenshot.
 *
 * @description ### Prerequisites
 * - Install the SDK from the SDK Center.
 * - Activate the Mobile-Use Agent service and prepare the ID and access key of a published Mobile-Use Agent instance.
 * - Mobile-Use Agent provides the Standard Edition and Dedicated Edition. Call the API based on the edition of the selected instance.
 * - Use the SDK to complete AccessKey authentication. Place the instance access key in the X-QI-Agent-Api-Key header, which cannot replace the AccessKey signature.
 * - Set Content-Type to application/json and Accept to text/event-stream. The stream parameter must be set to true.
 * ### Call methods
 * - Method and path: POST /gui/v1/chat/completions.
 * - Use X-QI-Instance-Id to specify the instance and execute based on the published configurations. The model field in the request body is a compatibility placeholder and cannot be used to switch models.
 * - The response consists of SSE incremental events rather than a complete JSON object. Continuously read the stream until it ends and check for errors within the stream.
 * ### Session management
 * You can omit X-QI-Session-Id in the first round. Save the qi_session_id from the SSE body and pass it in the request header with the same name for subsequent calls. Make sequential calls within the same session and use different identifiers for different sessions. Do not rely on the gateway to pass through custom response headers. The actual identifier is subject to the SSE body.
 *
 * @param request GuiChatCompletionStreamRequest
 * @param headers GuiChatCompletionStreamHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return GuiChatCompletionStreamResponse
 */
GuiChatCompletionStreamResponse Client::guiChatCompletionStreamWithOptions(const GuiChatCompletionStreamRequest &request, const GuiChatCompletionStreamHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAllowedTokenIds()) {
    body["allowedTokenIds"] = request.getAllowedTokenIds();
  }

  if (!!request.hasBadWords()) {
    body["badWords"] = request.getBadWords();
  }

  if (!!request.hasChatTemplateKwargs()) {
    body["chatTemplateKwargs"] = request.getChatTemplateKwargs();
  }

  if (!!request.hasFrequencyPenalty()) {
    body["frequencyPenalty"] = request.getFrequencyPenalty();
  }

  if (!!request.hasIgnoreEos()) {
    body["ignoreEos"] = request.getIgnoreEos();
  }

  if (!!request.hasIncludeReasoning()) {
    body["includeReasoning"] = request.getIncludeReasoning();
  }

  if (!!request.hasLogprobs()) {
    body["logprobs"] = request.getLogprobs();
  }

  if (!!request.hasMaxCompletionTokens()) {
    body["maxCompletionTokens"] = request.getMaxCompletionTokens();
  }

  if (!!request.hasMaxTokens()) {
    body["maxTokens"] = request.getMaxTokens();
  }

  if (!!request.hasMessages()) {
    body["messages"] = request.getMessages();
  }

  if (!!request.hasMetadata()) {
    body["metadata"] = request.getMetadata();
  }

  if (!!request.hasMinP()) {
    body["minP"] = request.getMinP();
  }

  if (!!request.hasMinTokens()) {
    body["minTokens"] = request.getMinTokens();
  }

  if (!!request.hasMmProcessorKwargs()) {
    body["mmProcessorKwargs"] = request.getMmProcessorKwargs();
  }

  if (!!request.hasModel()) {
    body["model"] = request.getModel();
  }

  if (!!request.hasN()) {
    body["n"] = request.getN();
  }

  if (!!request.hasParallelToolCalls()) {
    body["parallelToolCalls"] = request.getParallelToolCalls();
  }

  if (!!request.hasPresencePenalty()) {
    body["presencePenalty"] = request.getPresencePenalty();
  }

  if (!!request.hasPromptLogprobs()) {
    body["promptLogprobs"] = request.getPromptLogprobs();
  }

  if (!!request.hasReasoningEffort()) {
    body["reasoningEffort"] = request.getReasoningEffort();
  }

  if (!!request.hasRepetitionPenalty()) {
    body["repetitionPenalty"] = request.getRepetitionPenalty();
  }

  if (!!request.hasResponseFormat()) {
    body["responseFormat"] = request.getResponseFormat();
  }

  if (!!request.hasSeed()) {
    body["seed"] = request.getSeed();
  }

  if (!!request.hasSkipSpecialTokens()) {
    body["skipSpecialTokens"] = request.getSkipSpecialTokens();
  }

  if (!!request.hasStop()) {
    body["stop"] = request.getStop();
  }

  if (!!request.hasStopTokenIds()) {
    body["stopTokenIds"] = request.getStopTokenIds();
  }

  if (!!request.hasStream()) {
    body["stream"] = request.getStream();
  }

  if (!!request.hasStreamOptions()) {
    body["streamOptions"] = request.getStreamOptions();
  }

  if (!!request.hasStructuredOutputs()) {
    body["structuredOutputs"] = request.getStructuredOutputs();
  }

  if (!!request.hasTemperature()) {
    body["temperature"] = request.getTemperature();
  }

  if (!!request.hasTopK()) {
    body["topK"] = request.getTopK();
  }

  if (!!request.hasTopLogprobs()) {
    body["topLogprobs"] = request.getTopLogprobs();
  }

  if (!!request.hasTopP()) {
    body["topP"] = request.getTopP();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXQIAgentApiKey()) {
    realHeaders["X-QI-Agent-Api-Key"] = Darabonba::Convert::stringVal(headers.getXQIAgentApiKey());
  }

  if (!!headers.hasXQIInstanceId()) {
    realHeaders["X-QI-Instance-Id"] = Darabonba::Convert::stringVal(headers.getXQIInstanceId());
  }

  if (!!headers.hasXQISessionId()) {
    realHeaders["X-QI-Session-Id"] = Darabonba::Convert::stringVal(headers.getXQISessionId());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "GuiChatCompletionStream"},
    {"version" , "2026-08-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/gui/v1/chat/completions")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GuiChatCompletionStreamResponse>();
}

/**
 * @summary Calls a published Mobile-Use Agent instance, which supports the Standard Edition and Dedicated Edition. Submits the task text and the current screen screenshot, passes the device and application context through metadata, and returns the next mobile UI operation by using Server-Sent Events (SSE). The caller executes the UI operation and then continues to call the API with the session ID and the latest screenshot.
 *
 * @description ### Prerequisites
 * - Install the SDK from the SDK Center.
 * - Activate the Mobile-Use Agent service and prepare the ID and access key of a published Mobile-Use Agent instance.
 * - Mobile-Use Agent provides the Standard Edition and Dedicated Edition. Call the API based on the edition of the selected instance.
 * - Use the SDK to complete AccessKey authentication. Place the instance access key in the X-QI-Agent-Api-Key header, which cannot replace the AccessKey signature.
 * - Set Content-Type to application/json and Accept to text/event-stream. The stream parameter must be set to true.
 * ### Call methods
 * - Method and path: POST /gui/v1/chat/completions.
 * - Use X-QI-Instance-Id to specify the instance and execute based on the published configurations. The model field in the request body is a compatibility placeholder and cannot be used to switch models.
 * - The response consists of SSE incremental events rather than a complete JSON object. Continuously read the stream until it ends and check for errors within the stream.
 * ### Session management
 * You can omit X-QI-Session-Id in the first round. Save the qi_session_id from the SSE body and pass it in the request header with the same name for subsequent calls. Make sequential calls within the same session and use different identifiers for different sessions. Do not rely on the gateway to pass through custom response headers. The actual identifier is subject to the SSE body.
 *
 * @param request GuiChatCompletionStreamRequest
 * @return GuiChatCompletionStreamResponse
 */
GuiChatCompletionStreamResponse Client::guiChatCompletionStream(const GuiChatCompletionStreamRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  GuiChatCompletionStreamHeaders headers = GuiChatCompletionStreamHeaders();
  return guiChatCompletionStreamWithOptions(request, headers, runtime);
}

/**
 * @summary Invokes a published Mobile Planner Agent using OpenAI-Compatible Chat Completions messages to initiate a conversation or node planning, and returns text, model-provided reasoning content, and structured tool calling via SSE. Supports multi-turn sessions and model-supported image input. Business tools are executed by the caller.
 *
 * @description ### Before you begin
 * - Install the SDK from the SDK center.
 * - Activate the Mobile Planner Agent service and prepare the published Mobile Planner Agent instance ID and its access key.
 * - Use the SDK to complete AccessKey authentication. The instance access key is placed in X-QI-Agent-Api-Key and cannot replace the AccessKey signature.
 * - Set Content-Type: application/json and Accept: text/event-stream. The stream parameter must be set to true.
 * ### How to call
 * - Method and path: `POST /pa/v1/chat/completions`.
 * - X-QI-Instance-Id specifies the instance and executes based on the published configuration. The model field in the request body is a compatibility placeholder and cannot switch models.
 * - The response consists of SSE incremental events, not a single complete JSON object. Continue reading until the stream ends and check for errors within the stream.
 * ### Session management
 * You can omit X-QI-Session-Id for the first turn. Save qi_session_id from the SSE body and pass it back through the request header of the same name in subsequent turns. Call sequentially within the same session. Use different identifiers for different sessions. Do not rely on the gateway to pass through custom response headers. The actual identifier is based on the SSE body.
 *
 * @param request PaChatCompletionStreamRequest
 * @param headers PaChatCompletionStreamHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return PaChatCompletionStreamResponse
 */
FutureGenerator<PaChatCompletionStreamResponse> Client::paChatCompletionStreamWithSSE(const PaChatCompletionStreamRequest &request, const PaChatCompletionStreamHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAllowedTokenIds()) {
    body["allowedTokenIds"] = request.getAllowedTokenIds();
  }

  if (!!request.hasBadWords()) {
    body["badWords"] = request.getBadWords();
  }

  if (!!request.hasChatTemplateKwargs()) {
    body["chatTemplateKwargs"] = request.getChatTemplateKwargs();
  }

  if (!!request.hasFrequencyPenalty()) {
    body["frequencyPenalty"] = request.getFrequencyPenalty();
  }

  if (!!request.hasIgnoreEos()) {
    body["ignoreEos"] = request.getIgnoreEos();
  }

  if (!!request.hasIncludeReasoning()) {
    body["includeReasoning"] = request.getIncludeReasoning();
  }

  if (!!request.hasLogprobs()) {
    body["logprobs"] = request.getLogprobs();
  }

  if (!!request.hasMaxCompletionTokens()) {
    body["maxCompletionTokens"] = request.getMaxCompletionTokens();
  }

  if (!!request.hasMaxTokens()) {
    body["maxTokens"] = request.getMaxTokens();
  }

  if (!!request.hasMessages()) {
    body["messages"] = request.getMessages();
  }

  if (!!request.hasMinP()) {
    body["minP"] = request.getMinP();
  }

  if (!!request.hasMinTokens()) {
    body["minTokens"] = request.getMinTokens();
  }

  if (!!request.hasMmProcessorKwargs()) {
    body["mmProcessorKwargs"] = request.getMmProcessorKwargs();
  }

  if (!!request.hasModel()) {
    body["model"] = request.getModel();
  }

  if (!!request.hasN()) {
    body["n"] = request.getN();
  }

  if (!!request.hasParallelToolCalls()) {
    body["parallelToolCalls"] = request.getParallelToolCalls();
  }

  if (!!request.hasPresencePenalty()) {
    body["presencePenalty"] = request.getPresencePenalty();
  }

  if (!!request.hasPromptLogprobs()) {
    body["promptLogprobs"] = request.getPromptLogprobs();
  }

  if (!!request.hasReasoningEffort()) {
    body["reasoningEffort"] = request.getReasoningEffort();
  }

  if (!!request.hasRepetitionPenalty()) {
    body["repetitionPenalty"] = request.getRepetitionPenalty();
  }

  if (!!request.hasResponseFormat()) {
    body["responseFormat"] = request.getResponseFormat();
  }

  if (!!request.hasSeed()) {
    body["seed"] = request.getSeed();
  }

  if (!!request.hasSkipSpecialTokens()) {
    body["skipSpecialTokens"] = request.getSkipSpecialTokens();
  }

  if (!!request.hasStop()) {
    body["stop"] = request.getStop();
  }

  if (!!request.hasStopTokenIds()) {
    body["stopTokenIds"] = request.getStopTokenIds();
  }

  if (!!request.hasStream()) {
    body["stream"] = request.getStream();
  }

  if (!!request.hasStreamOptions()) {
    body["streamOptions"] = request.getStreamOptions();
  }

  if (!!request.hasStructuredOutputs()) {
    body["structuredOutputs"] = request.getStructuredOutputs();
  }

  if (!!request.hasTemperature()) {
    body["temperature"] = request.getTemperature();
  }

  if (!!request.hasToolChoice()) {
    body["toolChoice"] = request.getToolChoice();
  }

  if (!!request.hasTools()) {
    body["tools"] = request.getTools();
  }

  if (!!request.hasTopK()) {
    body["topK"] = request.getTopK();
  }

  if (!!request.hasTopLogprobs()) {
    body["topLogprobs"] = request.getTopLogprobs();
  }

  if (!!request.hasTopP()) {
    body["topP"] = request.getTopP();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXQIAgentApiKey()) {
    realHeaders["X-QI-Agent-Api-Key"] = Darabonba::Convert::stringVal(headers.getXQIAgentApiKey());
  }

  if (!!headers.hasXQIInstanceId()) {
    realHeaders["X-QI-Instance-Id"] = Darabonba::Convert::stringVal(headers.getXQIInstanceId());
  }

  if (!!headers.hasXQISessionId()) {
    realHeaders["X-QI-Session-Id"] = Darabonba::Convert::stringVal(headers.getXQISessionId());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "PaChatCompletionStream"},
    {"version" , "2026-08-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pa/v1/chat/completions")},
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
      })).get<PaChatCompletionStreamResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
    }

  }
}

/**
 * @summary Invokes a published Mobile Planner Agent using OpenAI-Compatible Chat Completions messages to initiate a conversation or node planning, and returns text, model-provided reasoning content, and structured tool calling via SSE. Supports multi-turn sessions and model-supported image input. Business tools are executed by the caller.
 *
 * @description ### Before you begin
 * - Install the SDK from the SDK center.
 * - Activate the Mobile Planner Agent service and prepare the published Mobile Planner Agent instance ID and its access key.
 * - Use the SDK to complete AccessKey authentication. The instance access key is placed in X-QI-Agent-Api-Key and cannot replace the AccessKey signature.
 * - Set Content-Type: application/json and Accept: text/event-stream. The stream parameter must be set to true.
 * ### How to call
 * - Method and path: `POST /pa/v1/chat/completions`.
 * - X-QI-Instance-Id specifies the instance and executes based on the published configuration. The model field in the request body is a compatibility placeholder and cannot switch models.
 * - The response consists of SSE incremental events, not a single complete JSON object. Continue reading until the stream ends and check for errors within the stream.
 * ### Session management
 * You can omit X-QI-Session-Id for the first turn. Save qi_session_id from the SSE body and pass it back through the request header of the same name in subsequent turns. Call sequentially within the same session. Use different identifiers for different sessions. Do not rely on the gateway to pass through custom response headers. The actual identifier is based on the SSE body.
 *
 * @param request PaChatCompletionStreamRequest
 * @param headers PaChatCompletionStreamHeaders
 * @param runtime runtime options for this request RuntimeOptions
 * @return PaChatCompletionStreamResponse
 */
PaChatCompletionStreamResponse Client::paChatCompletionStreamWithOptions(const PaChatCompletionStreamRequest &request, const PaChatCompletionStreamHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasAllowedTokenIds()) {
    body["allowedTokenIds"] = request.getAllowedTokenIds();
  }

  if (!!request.hasBadWords()) {
    body["badWords"] = request.getBadWords();
  }

  if (!!request.hasChatTemplateKwargs()) {
    body["chatTemplateKwargs"] = request.getChatTemplateKwargs();
  }

  if (!!request.hasFrequencyPenalty()) {
    body["frequencyPenalty"] = request.getFrequencyPenalty();
  }

  if (!!request.hasIgnoreEos()) {
    body["ignoreEos"] = request.getIgnoreEos();
  }

  if (!!request.hasIncludeReasoning()) {
    body["includeReasoning"] = request.getIncludeReasoning();
  }

  if (!!request.hasLogprobs()) {
    body["logprobs"] = request.getLogprobs();
  }

  if (!!request.hasMaxCompletionTokens()) {
    body["maxCompletionTokens"] = request.getMaxCompletionTokens();
  }

  if (!!request.hasMaxTokens()) {
    body["maxTokens"] = request.getMaxTokens();
  }

  if (!!request.hasMessages()) {
    body["messages"] = request.getMessages();
  }

  if (!!request.hasMinP()) {
    body["minP"] = request.getMinP();
  }

  if (!!request.hasMinTokens()) {
    body["minTokens"] = request.getMinTokens();
  }

  if (!!request.hasMmProcessorKwargs()) {
    body["mmProcessorKwargs"] = request.getMmProcessorKwargs();
  }

  if (!!request.hasModel()) {
    body["model"] = request.getModel();
  }

  if (!!request.hasN()) {
    body["n"] = request.getN();
  }

  if (!!request.hasParallelToolCalls()) {
    body["parallelToolCalls"] = request.getParallelToolCalls();
  }

  if (!!request.hasPresencePenalty()) {
    body["presencePenalty"] = request.getPresencePenalty();
  }

  if (!!request.hasPromptLogprobs()) {
    body["promptLogprobs"] = request.getPromptLogprobs();
  }

  if (!!request.hasReasoningEffort()) {
    body["reasoningEffort"] = request.getReasoningEffort();
  }

  if (!!request.hasRepetitionPenalty()) {
    body["repetitionPenalty"] = request.getRepetitionPenalty();
  }

  if (!!request.hasResponseFormat()) {
    body["responseFormat"] = request.getResponseFormat();
  }

  if (!!request.hasSeed()) {
    body["seed"] = request.getSeed();
  }

  if (!!request.hasSkipSpecialTokens()) {
    body["skipSpecialTokens"] = request.getSkipSpecialTokens();
  }

  if (!!request.hasStop()) {
    body["stop"] = request.getStop();
  }

  if (!!request.hasStopTokenIds()) {
    body["stopTokenIds"] = request.getStopTokenIds();
  }

  if (!!request.hasStream()) {
    body["stream"] = request.getStream();
  }

  if (!!request.hasStreamOptions()) {
    body["streamOptions"] = request.getStreamOptions();
  }

  if (!!request.hasStructuredOutputs()) {
    body["structuredOutputs"] = request.getStructuredOutputs();
  }

  if (!!request.hasTemperature()) {
    body["temperature"] = request.getTemperature();
  }

  if (!!request.hasToolChoice()) {
    body["toolChoice"] = request.getToolChoice();
  }

  if (!!request.hasTools()) {
    body["tools"] = request.getTools();
  }

  if (!!request.hasTopK()) {
    body["topK"] = request.getTopK();
  }

  if (!!request.hasTopLogprobs()) {
    body["topLogprobs"] = request.getTopLogprobs();
  }

  if (!!request.hasTopP()) {
    body["topP"] = request.getTopP();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXQIAgentApiKey()) {
    realHeaders["X-QI-Agent-Api-Key"] = Darabonba::Convert::stringVal(headers.getXQIAgentApiKey());
  }

  if (!!headers.hasXQIInstanceId()) {
    realHeaders["X-QI-Instance-Id"] = Darabonba::Convert::stringVal(headers.getXQIInstanceId());
  }

  if (!!headers.hasXQISessionId()) {
    realHeaders["X-QI-Session-Id"] = Darabonba::Convert::stringVal(headers.getXQISessionId());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "PaChatCompletionStream"},
    {"version" , "2026-08-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/pa/v1/chat/completions")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PaChatCompletionStreamResponse>();
}

/**
 * @summary Invokes a published Mobile Planner Agent using OpenAI-Compatible Chat Completions messages to initiate a conversation or node planning, and returns text, model-provided reasoning content, and structured tool calling via SSE. Supports multi-turn sessions and model-supported image input. Business tools are executed by the caller.
 *
 * @description ### Before you begin
 * - Install the SDK from the SDK center.
 * - Activate the Mobile Planner Agent service and prepare the published Mobile Planner Agent instance ID and its access key.
 * - Use the SDK to complete AccessKey authentication. The instance access key is placed in X-QI-Agent-Api-Key and cannot replace the AccessKey signature.
 * - Set Content-Type: application/json and Accept: text/event-stream. The stream parameter must be set to true.
 * ### How to call
 * - Method and path: `POST /pa/v1/chat/completions`.
 * - X-QI-Instance-Id specifies the instance and executes based on the published configuration. The model field in the request body is a compatibility placeholder and cannot switch models.
 * - The response consists of SSE incremental events, not a single complete JSON object. Continue reading until the stream ends and check for errors within the stream.
 * ### Session management
 * You can omit X-QI-Session-Id for the first turn. Save qi_session_id from the SSE body and pass it back through the request header of the same name in subsequent turns. Call sequentially within the same session. Use different identifiers for different sessions. Do not rely on the gateway to pass through custom response headers. The actual identifier is based on the SSE body.
 *
 * @param request PaChatCompletionStreamRequest
 * @return PaChatCompletionStreamResponse
 */
PaChatCompletionStreamResponse Client::paChatCompletionStream(const PaChatCompletionStreamRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  PaChatCompletionStreamHeaders headers = PaChatCompletionStreamHeaders();
  return paChatCompletionStreamWithOptions(request, headers, runtime);
}
} // namespace AlibabaCloud
} // namespace MaasQIService20260831