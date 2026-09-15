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
  this->_endpointRule = "";
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
 * @summary 以 SSE 流式调用已发布 AIGC Agent；支持 AIGCLite 文生图/图生图与 AIGCStandard Planner，兼容 OpenAI Chat Completions。
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
 * @summary 以 SSE 流式调用已发布 AIGC Agent；支持 AIGCLite 文生图/图生图与 AIGCStandard Planner，兼容 OpenAI Chat Completions。
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
 * @summary 以 SSE 流式调用已发布 AIGC Agent；支持 AIGCLite 文生图/图生图与 AIGCStandard Planner，兼容 OpenAI Chat Completions。
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
 * @summary 以 SSE 流式调用已发布 GUI Agent；兼容 OpenAI Chat Completions，输入屏幕截图与任务文本，返回下一步 GUI 操作。
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
 * @summary 以 SSE 流式调用已发布 GUI Agent；兼容 OpenAI Chat Completions，输入屏幕截图与任务文本，返回下一步 GUI 操作。
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
 * @summary 以 SSE 流式调用已发布 GUI Agent；兼容 OpenAI Chat Completions，输入屏幕截图与任务文本，返回下一步 GUI 操作。
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
 * @summary 以 SSE 流式调用已发布 PA Agent；兼容 OpenAI Chat Completions，支持多轮消息、工具调用、多模态输入与思考内容。
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
 * @summary 以 SSE 流式调用已发布 PA Agent；兼容 OpenAI Chat Completions，支持多轮消息、工具调用、多模态输入与思考内容。
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
 * @summary 以 SSE 流式调用已发布 PA Agent；兼容 OpenAI Chat Completions，支持多轮消息、工具调用、多模态输入与思考内容。
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