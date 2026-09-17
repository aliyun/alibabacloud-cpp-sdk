// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_HOLOGRAM20220602_HPP_
#define ALIBABACLOUD_HOLOGRAM20220602_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Hologram20220602Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Hologram20220602.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hologram20220602
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

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
      Models::CreateAgentSessionResponse createAgentSessionWithOptions(const Models::CreateAgentSessionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

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
      Models::CreateAgentSessionResponse createAgentSession(const Models::CreateAgentSessionRequest &request);

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
      FutureGenerator<Models::PromptAgentSessionResponse> promptAgentSessionWithSSE(const Models::PromptAgentSessionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

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
      Models::PromptAgentSessionResponse promptAgentSessionWithOptions(const Models::PromptAgentSessionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

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
      Models::PromptAgentSessionResponse promptAgentSession(const Models::PromptAgentSessionRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Hologram20220602
#endif
