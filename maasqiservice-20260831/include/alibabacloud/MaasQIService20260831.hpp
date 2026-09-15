// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MAASQISERVICE20260831_HPP_
#define ALIBABACLOUD_MAASQISERVICE20260831_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/MaasQIService20260831Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/MaasQIService20260831.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaasQIService20260831
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 以 SSE 流式调用已发布 AIGC Agent；支持 AIGCLite 文生图/图生图与 AIGCStandard Planner，兼容 OpenAI Chat Completions。
       *
       * @param request AigcChatCompletionStreamRequest
       * @param headers AigcChatCompletionStreamHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return AigcChatCompletionStreamResponse
       */
      FutureGenerator<Models::AigcChatCompletionStreamResponse> aigcChatCompletionStreamWithSSE(const Models::AigcChatCompletionStreamRequest &request, const Models::AigcChatCompletionStreamHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 以 SSE 流式调用已发布 AIGC Agent；支持 AIGCLite 文生图/图生图与 AIGCStandard Planner，兼容 OpenAI Chat Completions。
       *
       * @param request AigcChatCompletionStreamRequest
       * @param headers AigcChatCompletionStreamHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return AigcChatCompletionStreamResponse
       */
      Models::AigcChatCompletionStreamResponse aigcChatCompletionStreamWithOptions(const Models::AigcChatCompletionStreamRequest &request, const Models::AigcChatCompletionStreamHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 以 SSE 流式调用已发布 AIGC Agent；支持 AIGCLite 文生图/图生图与 AIGCStandard Planner，兼容 OpenAI Chat Completions。
       *
       * @param request AigcChatCompletionStreamRequest
       * @return AigcChatCompletionStreamResponse
       */
      Models::AigcChatCompletionStreamResponse aigcChatCompletionStream(const Models::AigcChatCompletionStreamRequest &request);

      /**
       * @summary 以 SSE 流式调用已发布 GUI Agent；兼容 OpenAI Chat Completions，输入屏幕截图与任务文本，返回下一步 GUI 操作。
       *
       * @param request GuiChatCompletionStreamRequest
       * @param headers GuiChatCompletionStreamHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GuiChatCompletionStreamResponse
       */
      FutureGenerator<Models::GuiChatCompletionStreamResponse> guiChatCompletionStreamWithSSE(const Models::GuiChatCompletionStreamRequest &request, const Models::GuiChatCompletionStreamHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 以 SSE 流式调用已发布 GUI Agent；兼容 OpenAI Chat Completions，输入屏幕截图与任务文本，返回下一步 GUI 操作。
       *
       * @param request GuiChatCompletionStreamRequest
       * @param headers GuiChatCompletionStreamHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GuiChatCompletionStreamResponse
       */
      Models::GuiChatCompletionStreamResponse guiChatCompletionStreamWithOptions(const Models::GuiChatCompletionStreamRequest &request, const Models::GuiChatCompletionStreamHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 以 SSE 流式调用已发布 GUI Agent；兼容 OpenAI Chat Completions，输入屏幕截图与任务文本，返回下一步 GUI 操作。
       *
       * @param request GuiChatCompletionStreamRequest
       * @return GuiChatCompletionStreamResponse
       */
      Models::GuiChatCompletionStreamResponse guiChatCompletionStream(const Models::GuiChatCompletionStreamRequest &request);

      /**
       * @summary 以 SSE 流式调用已发布 PA Agent；兼容 OpenAI Chat Completions，支持多轮消息、工具调用、多模态输入与思考内容。
       *
       * @param request PaChatCompletionStreamRequest
       * @param headers PaChatCompletionStreamHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return PaChatCompletionStreamResponse
       */
      FutureGenerator<Models::PaChatCompletionStreamResponse> paChatCompletionStreamWithSSE(const Models::PaChatCompletionStreamRequest &request, const Models::PaChatCompletionStreamHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 以 SSE 流式调用已发布 PA Agent；兼容 OpenAI Chat Completions，支持多轮消息、工具调用、多模态输入与思考内容。
       *
       * @param request PaChatCompletionStreamRequest
       * @param headers PaChatCompletionStreamHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return PaChatCompletionStreamResponse
       */
      Models::PaChatCompletionStreamResponse paChatCompletionStreamWithOptions(const Models::PaChatCompletionStreamRequest &request, const Models::PaChatCompletionStreamHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 以 SSE 流式调用已发布 PA Agent；兼容 OpenAI Chat Completions，支持多轮消息、工具调用、多模态输入与思考内容。
       *
       * @param request PaChatCompletionStreamRequest
       * @return PaChatCompletionStreamResponse
       */
      Models::PaChatCompletionStreamResponse paChatCompletionStream(const Models::PaChatCompletionStreamRequest &request);
  };
} // namespace AlibabaCloud
} // namespace MaasQIService20260831
#endif
