// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_QWENB2BCHAT20261121_HPP_
#define ALIBABACLOUD_QWENB2BCHAT20261121_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/QwenB2BChat20261121Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/QwenB2BChat20261121.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QwenB2BChat20261121
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 发送文本或多模态消息进行联网对话，支持深度思考、会话历史管理以及完整 JSON 响应和 SSE 流式响应。具体 Agent 及媒体能力以已开通范围为准。
       *
       * @param request ChatRequest
       * @param headers ChatHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChatResponse
       */
      FutureGenerator<Models::ChatResponse> chatWithSSE(const Models::ChatRequest &request, const Models::ChatHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 发送文本或多模态消息进行联网对话，支持深度思考、会话历史管理以及完整 JSON 响应和 SSE 流式响应。具体 Agent 及媒体能力以已开通范围为准。
       *
       * @param request ChatRequest
       * @param headers ChatHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChatResponse
       */
      Models::ChatResponse chatWithOptions(const Models::ChatRequest &request, const Models::ChatHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 发送文本或多模态消息进行联网对话，支持深度思考、会话历史管理以及完整 JSON 响应和 SSE 流式响应。具体 Agent 及媒体能力以已开通范围为准。
       *
       * @param request ChatRequest
       * @return ChatResponse
       */
      Models::ChatResponse chat(const Models::ChatRequest &request);

      /**
       * @summary 验证服务开通接口或为当前账户发起服务开通，返回当前开通状态及可用的订单或实例编号。
       *
       * @param request OpenServiceRequest
       * @param headers OpenServiceHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return OpenServiceResponse
       */
      Models::OpenServiceResponse openServiceWithOptions(const Models::OpenServiceRequest &request, const Models::OpenServiceHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 验证服务开通接口或为当前账户发起服务开通，返回当前开通状态及可用的订单或实例编号。
       *
       * @param request OpenServiceRequest
       * @return OpenServiceResponse
       */
      Models::OpenServiceResponse openService(const Models::OpenServiceRequest &request);

      /**
       * @summary 通过 WebSocket 上传语音并接收识别文字、Agent 回复及合成音频，支持图文辅助输入、识别上下文和会话历史。接口说明包含完整握手、控制帧、音频帧、返回事件与错误处理协议。
       *
       * @param request StreamVoiceRequest
       * @param headers StreamVoiceHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return StreamVoiceResponse
       */
      Models::StreamVoiceResponse streamVoiceWithOptions(const Models::StreamVoiceRequest &request, const Models::StreamVoiceHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 通过 WebSocket 上传语音并接收识别文字、Agent 回复及合成音频，支持图文辅助输入、识别上下文和会话历史。接口说明包含完整握手、控制帧、音频帧、返回事件与错误处理协议。
       *
       * @param request StreamVoiceRequest
       * @return StreamVoiceResponse
       */
      Models::StreamVoiceResponse streamVoice(const Models::StreamVoiceRequest &request);
  };
} // namespace AlibabaCloud
} // namespace QwenB2BChat20261121
#endif
