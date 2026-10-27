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
      FutureGenerator<Models::AigcChatCompletionStreamResponse> aigcChatCompletionStreamWithSSE(const Models::AigcChatCompletionStreamRequest &request, const Models::AigcChatCompletionStreamHeaders &headers, const Darabonba::RuntimeOptions &runtime);

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
      Models::AigcChatCompletionStreamResponse aigcChatCompletionStreamWithOptions(const Models::AigcChatCompletionStreamRequest &request, const Models::AigcChatCompletionStreamHeaders &headers, const Darabonba::RuntimeOptions &runtime);

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
      Models::AigcChatCompletionStreamResponse aigcChatCompletionStream(const Models::AigcChatCompletionStreamRequest &request);

      /**
       * @summary 调用已发布 CUAStandard 实例，根据任务和桌面截图生成电脑操作单步决策，以 SSE 返回 computer_use 工具调用
       *
       * @param request CuaChatCompletionStreamRequest
       * @param headers CuaChatCompletionStreamHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return CuaChatCompletionStreamResponse
       */
      FutureGenerator<Models::CuaChatCompletionStreamResponse> cuaChatCompletionStreamWithSSE(const Models::CuaChatCompletionStreamRequest &request, const Models::CuaChatCompletionStreamHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 调用已发布 CUAStandard 实例，根据任务和桌面截图生成电脑操作单步决策，以 SSE 返回 computer_use 工具调用
       *
       * @param request CuaChatCompletionStreamRequest
       * @param headers CuaChatCompletionStreamHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return CuaChatCompletionStreamResponse
       */
      Models::CuaChatCompletionStreamResponse cuaChatCompletionStreamWithOptions(const Models::CuaChatCompletionStreamRequest &request, const Models::CuaChatCompletionStreamHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 调用已发布 CUAStandard 实例，根据任务和桌面截图生成电脑操作单步决策，以 SSE 返回 computer_use 工具调用
       *
       * @param request CuaChatCompletionStreamRequest
       * @return CuaChatCompletionStreamResponse
       */
      Models::CuaChatCompletionStreamResponse cuaChatCompletionStream(const Models::CuaChatCompletionStreamRequest &request);

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
      FutureGenerator<Models::GuiChatCompletionStreamResponse> guiChatCompletionStreamWithSSE(const Models::GuiChatCompletionStreamRequest &request, const Models::GuiChatCompletionStreamHeaders &headers, const Darabonba::RuntimeOptions &runtime);

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
      Models::GuiChatCompletionStreamResponse guiChatCompletionStreamWithOptions(const Models::GuiChatCompletionStreamRequest &request, const Models::GuiChatCompletionStreamHeaders &headers, const Darabonba::RuntimeOptions &runtime);

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
      Models::GuiChatCompletionStreamResponse guiChatCompletionStream(const Models::GuiChatCompletionStreamRequest &request);

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
      FutureGenerator<Models::PaChatCompletionStreamResponse> paChatCompletionStreamWithSSE(const Models::PaChatCompletionStreamRequest &request, const Models::PaChatCompletionStreamHeaders &headers, const Darabonba::RuntimeOptions &runtime);

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
      Models::PaChatCompletionStreamResponse paChatCompletionStreamWithOptions(const Models::PaChatCompletionStreamRequest &request, const Models::PaChatCompletionStreamHeaders &headers, const Darabonba::RuntimeOptions &runtime);

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
      Models::PaChatCompletionStreamResponse paChatCompletionStream(const Models::PaChatCompletionStreamRequest &request);
  };
} // namespace AlibabaCloud
} // namespace MaasQIService20260831
#endif
