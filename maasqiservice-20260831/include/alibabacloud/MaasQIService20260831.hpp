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
       * @summary Invokes a published Creative Agent, supporting both the lite and dedicated editions, and returns execution progress and image artifacts via Server-Sent Events (SSE). The lite edition performs text-to-image or image-to-image generation based on whether a reference image is provided. The dedicated edition uses a Planner to schedule and execute generation and editing tasks, supporting multi-turn conversations. Parameters such as the generation count and size are passed through metadata.parameters. For image URLs in the results, refer to artifacts.
       *
       * @description ### Prerequisites
       * - Install the SDK from the SDK Center.
       * - Activate the Creative Agent service and prepare the published instance ID and the corresponding instance access key.
       * - Creative Agent provides the lite and dedicated editions. The lite edition performs generation or editing based on whether a reference image is provided. The dedicated edition uses a Planner to schedule and execute creative tasks.
       * - Use the SDK to complete AccessKey authentication. The instance access key must be placed in the X-QI-Agent-Api-Key header and cannot replace the AccessKey signature.
       * - Set Content-Type: application/json and Accept: text/event-stream. The stream parameter must be set to true.
       * ### Call methods
       * - Method and path: POST /aigc/v1/chat/completions.
       * - Specify the instance through X-QI-Instance-Id and execute according to the published configuration of the instance. The model field in the request body is a compatibility placeholder and cannot be used to switch models.
       * - This operation returns incremental events rather than a complete JSON response. Continuously read the stream until it ends and check for errors within the stream.
       * ### Session management
       * You can omit X-QI-Session-Id in the first turn. Save the session ID returned by the server from the qi_session_id field in the SSE body and pass the same value back in subsequent turns. Do not rely on the gateway to pass through custom response headers. Use different IDs for different sessions and send requests in sequence for the same session.
       *
       * @param request AigcChatCompletionStreamRequest
       * @param headers AigcChatCompletionStreamHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return AigcChatCompletionStreamResponse
       */
      FutureGenerator<Models::AigcChatCompletionStreamResponse> aigcChatCompletionStreamWithSSE(const Models::AigcChatCompletionStreamRequest &request, const Models::AigcChatCompletionStreamHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invokes a published Creative Agent, supporting both the lite and dedicated editions, and returns execution progress and image artifacts via Server-Sent Events (SSE). The lite edition performs text-to-image or image-to-image generation based on whether a reference image is provided. The dedicated edition uses a Planner to schedule and execute generation and editing tasks, supporting multi-turn conversations. Parameters such as the generation count and size are passed through metadata.parameters. For image URLs in the results, refer to artifacts.
       *
       * @description ### Prerequisites
       * - Install the SDK from the SDK Center.
       * - Activate the Creative Agent service and prepare the published instance ID and the corresponding instance access key.
       * - Creative Agent provides the lite and dedicated editions. The lite edition performs generation or editing based on whether a reference image is provided. The dedicated edition uses a Planner to schedule and execute creative tasks.
       * - Use the SDK to complete AccessKey authentication. The instance access key must be placed in the X-QI-Agent-Api-Key header and cannot replace the AccessKey signature.
       * - Set Content-Type: application/json and Accept: text/event-stream. The stream parameter must be set to true.
       * ### Call methods
       * - Method and path: POST /aigc/v1/chat/completions.
       * - Specify the instance through X-QI-Instance-Id and execute according to the published configuration of the instance. The model field in the request body is a compatibility placeholder and cannot be used to switch models.
       * - This operation returns incremental events rather than a complete JSON response. Continuously read the stream until it ends and check for errors within the stream.
       * ### Session management
       * You can omit X-QI-Session-Id in the first turn. Save the session ID returned by the server from the qi_session_id field in the SSE body and pass the same value back in subsequent turns. Do not rely on the gateway to pass through custom response headers. Use different IDs for different sessions and send requests in sequence for the same session.
       *
       * @param request AigcChatCompletionStreamRequest
       * @param headers AigcChatCompletionStreamHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return AigcChatCompletionStreamResponse
       */
      Models::AigcChatCompletionStreamResponse aigcChatCompletionStreamWithOptions(const Models::AigcChatCompletionStreamRequest &request, const Models::AigcChatCompletionStreamHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invokes a published Creative Agent, supporting both the lite and dedicated editions, and returns execution progress and image artifacts via Server-Sent Events (SSE). The lite edition performs text-to-image or image-to-image generation based on whether a reference image is provided. The dedicated edition uses a Planner to schedule and execute generation and editing tasks, supporting multi-turn conversations. Parameters such as the generation count and size are passed through metadata.parameters. For image URLs in the results, refer to artifacts.
       *
       * @description ### Prerequisites
       * - Install the SDK from the SDK Center.
       * - Activate the Creative Agent service and prepare the published instance ID and the corresponding instance access key.
       * - Creative Agent provides the lite and dedicated editions. The lite edition performs generation or editing based on whether a reference image is provided. The dedicated edition uses a Planner to schedule and execute creative tasks.
       * - Use the SDK to complete AccessKey authentication. The instance access key must be placed in the X-QI-Agent-Api-Key header and cannot replace the AccessKey signature.
       * - Set Content-Type: application/json and Accept: text/event-stream. The stream parameter must be set to true.
       * ### Call methods
       * - Method and path: POST /aigc/v1/chat/completions.
       * - Specify the instance through X-QI-Instance-Id and execute according to the published configuration of the instance. The model field in the request body is a compatibility placeholder and cannot be used to switch models.
       * - This operation returns incremental events rather than a complete JSON response. Continuously read the stream until it ends and check for errors within the stream.
       * ### Session management
       * You can omit X-QI-Session-Id in the first turn. Save the session ID returned by the server from the qi_session_id field in the SSE body and pass the same value back in subsequent turns. Do not rely on the gateway to pass through custom response headers. Use different IDs for different sessions and send requests in sequence for the same session.
       *
       * @param request AigcChatCompletionStreamRequest
       * @return AigcChatCompletionStreamResponse
       */
      Models::AigcChatCompletionStreamResponse aigcChatCompletionStream(const Models::AigcChatCompletionStreamRequest &request);

      /**
       * @summary Calls a published Camera Agent to recognize food and beverages and detect new persons in scenes. Food recognition returns the locations and counts of targets. Person detection deduplicates against recorded portraits in the scene and returns at most one new person per call. The recognition capabilities are determined by the published configuration of the instance. Both JSON and Server-Sent Events (SSE) responses are supported. All bounding boxes use the pixel coordinates of the original image.
       *
       * @description ### Prerequisites
       * - The Camera Agent service is activated. A published CameraStandard instance ID and the corresponding instance access key are prepared.
       * - AccessKey authentication is completed by using SDK or OpenAPI signatures. The instance key is provided in the X-QI-Agent-Api-Key header and cannot replace the AccessKey signature.
       * - The Content-Type header is set to application/json. If stream is set to true, SSE is used and the Accept header is set to text/event-stream. Otherwise, a JSON response is returned.
       * ### Call method
       * Send a POST request to /camera/v1/chat/completions. Specify the instance by using the X-QI-Instance-Id header and provide the raw value of the key. Submit one role=user message and one image per call. The recognition scene, model, and thresholds are based on the published configuration of the instance.
       * ### Session management
       * You can omit the X-QI-Session-Id header in the first call and make sequential calls within the same session. The scene_id parameter is required for person recognition but must be omitted for food recognition. Session management ensures execution and idempotency, while the scene ID manages person deduplication. The same scene can be reused across sessions, but calls must be sequential. Create a new session when you switch the published version or recognition scene. For person recognition, create a new scene at the same time.
       *
       * @param request CameraChatCompletionStreamRequest
       * @param headers CameraChatCompletionStreamHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return CameraChatCompletionStreamResponse
       */
      FutureGenerator<Models::CameraChatCompletionStreamResponse> cameraChatCompletionStreamWithSSE(const Models::CameraChatCompletionStreamRequest &request, const Models::CameraChatCompletionStreamHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls a published Camera Agent to recognize food and beverages and detect new persons in scenes. Food recognition returns the locations and counts of targets. Person detection deduplicates against recorded portraits in the scene and returns at most one new person per call. The recognition capabilities are determined by the published configuration of the instance. Both JSON and Server-Sent Events (SSE) responses are supported. All bounding boxes use the pixel coordinates of the original image.
       *
       * @description ### Prerequisites
       * - The Camera Agent service is activated. A published CameraStandard instance ID and the corresponding instance access key are prepared.
       * - AccessKey authentication is completed by using SDK or OpenAPI signatures. The instance key is provided in the X-QI-Agent-Api-Key header and cannot replace the AccessKey signature.
       * - The Content-Type header is set to application/json. If stream is set to true, SSE is used and the Accept header is set to text/event-stream. Otherwise, a JSON response is returned.
       * ### Call method
       * Send a POST request to /camera/v1/chat/completions. Specify the instance by using the X-QI-Instance-Id header and provide the raw value of the key. Submit one role=user message and one image per call. The recognition scene, model, and thresholds are based on the published configuration of the instance.
       * ### Session management
       * You can omit the X-QI-Session-Id header in the first call and make sequential calls within the same session. The scene_id parameter is required for person recognition but must be omitted for food recognition. Session management ensures execution and idempotency, while the scene ID manages person deduplication. The same scene can be reused across sessions, but calls must be sequential. Create a new session when you switch the published version or recognition scene. For person recognition, create a new scene at the same time.
       *
       * @param request CameraChatCompletionStreamRequest
       * @param headers CameraChatCompletionStreamHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return CameraChatCompletionStreamResponse
       */
      Models::CameraChatCompletionStreamResponse cameraChatCompletionStreamWithOptions(const Models::CameraChatCompletionStreamRequest &request, const Models::CameraChatCompletionStreamHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls a published Camera Agent to recognize food and beverages and detect new persons in scenes. Food recognition returns the locations and counts of targets. Person detection deduplicates against recorded portraits in the scene and returns at most one new person per call. The recognition capabilities are determined by the published configuration of the instance. Both JSON and Server-Sent Events (SSE) responses are supported. All bounding boxes use the pixel coordinates of the original image.
       *
       * @description ### Prerequisites
       * - The Camera Agent service is activated. A published CameraStandard instance ID and the corresponding instance access key are prepared.
       * - AccessKey authentication is completed by using SDK or OpenAPI signatures. The instance key is provided in the X-QI-Agent-Api-Key header and cannot replace the AccessKey signature.
       * - The Content-Type header is set to application/json. If stream is set to true, SSE is used and the Accept header is set to text/event-stream. Otherwise, a JSON response is returned.
       * ### Call method
       * Send a POST request to /camera/v1/chat/completions. Specify the instance by using the X-QI-Instance-Id header and provide the raw value of the key. Submit one role=user message and one image per call. The recognition scene, model, and thresholds are based on the published configuration of the instance.
       * ### Session management
       * You can omit the X-QI-Session-Id header in the first call and make sequential calls within the same session. The scene_id parameter is required for person recognition but must be omitted for food recognition. Session management ensures execution and idempotency, while the scene ID manages person deduplication. The same scene can be reused across sessions, but calls must be sequential. Create a new session when you switch the published version or recognition scene. For person recognition, create a new scene at the same time.
       *
       * @param request CameraChatCompletionStreamRequest
       * @return CameraChatCompletionStreamResponse
       */
      Models::CameraChatCompletionStreamResponse cameraChatCompletionStream(const Models::CameraChatCompletionStreamRequest &request);

      /**
       * @summary 调试 Camera Agent
       *
       * @description ### 接入前提
       * - 已开通 Camera Agent 服务，准备当前租户的 CameraStandard 实例；实例可以未发布。
       * - 使用 SDK/OpenAPI 签名完成 AccessKey 认证，无需 `X-QI-Agent-Api-Key`。
       * - 设置 `Content-Type: application/json`。`input.stream=true` 时使用 SSE，并设置 `Accept: text/event-stream`；否则返回 JSON。
       * ### 调用方式
       * `POST /api/console/camera/agents/debug`。实例 ID 放在 `instanceId` 或 `X-QI-Instance-Id` Header，非空 Header 优先；图片请求放入 `input`。省略 `config` 使用实例草稿，临时配置仅对本次调用生效，不保存或发布实例。
       * ### 会话管理
       * 首轮可省略 `sessionId`，非空 `X-QI-Session-Id` Header 优先。同一会话顺序调用；人物识别省略整个 `input.scene_id` 字段时，由 Session 派生场景。需要连续去重时复用 Session 或显式指定同一场景，切换有效配置时换新 Session 和场景。
       *
       * @param request CameraConsoleDebugStreamRequest
       * @param headers CameraConsoleDebugStreamHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return CameraConsoleDebugStreamResponse
       */
      FutureGenerator<Models::CameraConsoleDebugStreamResponse> cameraConsoleDebugStreamWithSSE(const Models::CameraConsoleDebugStreamRequest &request, const Models::CameraConsoleDebugStreamHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 调试 Camera Agent
       *
       * @description ### 接入前提
       * - 已开通 Camera Agent 服务，准备当前租户的 CameraStandard 实例；实例可以未发布。
       * - 使用 SDK/OpenAPI 签名完成 AccessKey 认证，无需 `X-QI-Agent-Api-Key`。
       * - 设置 `Content-Type: application/json`。`input.stream=true` 时使用 SSE，并设置 `Accept: text/event-stream`；否则返回 JSON。
       * ### 调用方式
       * `POST /api/console/camera/agents/debug`。实例 ID 放在 `instanceId` 或 `X-QI-Instance-Id` Header，非空 Header 优先；图片请求放入 `input`。省略 `config` 使用实例草稿，临时配置仅对本次调用生效，不保存或发布实例。
       * ### 会话管理
       * 首轮可省略 `sessionId`，非空 `X-QI-Session-Id` Header 优先。同一会话顺序调用；人物识别省略整个 `input.scene_id` 字段时，由 Session 派生场景。需要连续去重时复用 Session 或显式指定同一场景，切换有效配置时换新 Session 和场景。
       *
       * @param request CameraConsoleDebugStreamRequest
       * @param headers CameraConsoleDebugStreamHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return CameraConsoleDebugStreamResponse
       */
      Models::CameraConsoleDebugStreamResponse cameraConsoleDebugStreamWithOptions(const Models::CameraConsoleDebugStreamRequest &request, const Models::CameraConsoleDebugStreamHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 调试 Camera Agent
       *
       * @description ### 接入前提
       * - 已开通 Camera Agent 服务，准备当前租户的 CameraStandard 实例；实例可以未发布。
       * - 使用 SDK/OpenAPI 签名完成 AccessKey 认证，无需 `X-QI-Agent-Api-Key`。
       * - 设置 `Content-Type: application/json`。`input.stream=true` 时使用 SSE，并设置 `Accept: text/event-stream`；否则返回 JSON。
       * ### 调用方式
       * `POST /api/console/camera/agents/debug`。实例 ID 放在 `instanceId` 或 `X-QI-Instance-Id` Header，非空 Header 优先；图片请求放入 `input`。省略 `config` 使用实例草稿，临时配置仅对本次调用生效，不保存或发布实例。
       * ### 会话管理
       * 首轮可省略 `sessionId`，非空 `X-QI-Session-Id` Header 优先。同一会话顺序调用；人物识别省略整个 `input.scene_id` 字段时，由 Session 派生场景。需要连续去重时复用 Session 或显式指定同一场景，切换有效配置时换新 Session 和场景。
       *
       * @param request CameraConsoleDebugStreamRequest
       * @return CameraConsoleDebugStreamResponse
       */
      Models::CameraConsoleDebugStreamResponse cameraConsoleDebugStream(const Models::CameraConsoleDebugStreamRequest &request);

      /**
       * @summary Invokes a published Computer Use Agent (CUA) Standard Edition instance, submits a task and the current desktop screenshot, and returns single-step computer operation decisions through Server-Sent Events (SSE). After the client executes the computer_use action, it returns the actual results and continues the call with the session ID and the latest screenshot.
       *
       * @description This topic retains the section names and order of the previous version. For version differences, see Release notes. This topic is compiled based on the official API reference of the previous version, subsequent call instructions from the service provider, and pre-release call observations. It does not indicate that a full audit of the new version of the service source code or the official gateway has been completed. No new API version number is provided.
       * ## Before you begin
       * - Install the official SDK applicable to the target endpoint from the SDK center.
       * - Activate the CUA Agent service and prepare the published CUA instance ID and its access key.
       * - CUA is only available in Standard Edition.
       * - The official POP/OpenAPI endpoint uses the Alibaba Cloud SDK or OpenAPI signature to complete AccessKey authentication. The instance access key is separately placed in `X-QI-Agent-Api-Key` and cannot replace the AccessKey signature.
       * - Set `Content-Type: application/json` and `Accept: text/event-stream`. The `stream` parameter must be set to `true`.
       * - Use the target endpoint confirmed by the service provider. The authentication behavior of the pre-release direct business endpoint cannot be extrapolated to mean that the official endpoint does not require an AK signature.
       * - The client must have the capabilities of taking screenshots, fully parsing SSE, executing actions, and returning actual results. Code and commands must be executed in a controlled and authorized environment. Manual confirmation should be added for sensitive operations.
       * ## Call methods
       * - Method and path: `POST /cua/v1/chat/completions`.
       * - `X-QI-Instance-Id` specifies the instance and is executed according to the published CUA Standard Edition configuration. The `model` parameter in the request body is a compatibility placeholder and cannot be used to switch models.
       * - The response consists of SSE events, not a complete JSON object. Continue reading until the end and check for errors within the stream.
       * - CUA returns the complete action after the single-step model decision is completed, rather than outputting token by token. Heartbeats are used to maintain the connection during the waiting phase.
       * - The mode is selected through `metadata.actionMode` in the request body: `gui-only` or `gui+cli`. This is a field supplemented by subsequent service instructions, not a model name or request header.
       * - Do not use `stream:false` to replace this API operation. Non-streaming mode may result in no response bytes for a long time before the model finishes, which increases the risk of intermediate link timeouts.
       * ## Session management
       * In the first round, you can omit or leave `X-QI-Session-Id` empty, save `qi_session_id` from the SSE body, and reuse it through the request header with the same name in subsequent rounds. Do not rely on the gateway to pass through custom response headers. The actual identifier is subject to the SSE body.
       * `X-QI-Request-Id` can be generated by the server. We recommend that the client explicitly generate it to facilitate recovery and troubleshooting:
       * - New step: new request ID.
       * - Retry the same step: same session, same request ID, and same request body.
       * - Calls within the same session must be strictly sequential. Do not send different steps in parallel. Use different sessions for different tasks.
       * - Explicitly select `actionMode` in the first round and keep it consistent in subsequent rounds. If you need to change the mode, create a new session. You cannot switch modes within the same session.
       * - If the stream is disconnected before `qi_session_id` is obtained in the first round, the recovery method must be handled according to the rules confirmed by the service provider. You cannot assume that the request ID can be deduplicated across unknown sessions.
       * - Save the session/request ID immediately when the identity event is obtained, but do not treat the identity event as a complete return of the action.
       * - Stop continuing after receiving `finished`. The current documentation does not provide an independent session release API operation. Do not construct additional release requests on your own.
       * ## Rate limit
       * The current API request rate for the cloud service is not exposed. Do not treat the client concurrency configuration as the concurrency or QPS commitment allowed by the service. You should confirm the capacity, queuing, and quotas with the service provider.
       * Limits provided in subsequent service instructions:
       * - The current request body limit is **8 MB**, including the fully serialized JSON, not just images.
       * - Exactly one current screenshot is required for each step. Do not pass multiple images or screenshot history.
       * - A keepalive message is sent approximately every **15 seconds** during the waiting period. This interval is not a response latency SLA, and you cannot rely on heartbeats when an HTTP/SSE response has not been established.
       *
       * @param request CuaChatCompletionStreamRequest
       * @param headers CuaChatCompletionStreamHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return CuaChatCompletionStreamResponse
       */
      FutureGenerator<Models::CuaChatCompletionStreamResponse> cuaChatCompletionStreamWithSSE(const Models::CuaChatCompletionStreamRequest &request, const Models::CuaChatCompletionStreamHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invokes a published Computer Use Agent (CUA) Standard Edition instance, submits a task and the current desktop screenshot, and returns single-step computer operation decisions through Server-Sent Events (SSE). After the client executes the computer_use action, it returns the actual results and continues the call with the session ID and the latest screenshot.
       *
       * @description This topic retains the section names and order of the previous version. For version differences, see Release notes. This topic is compiled based on the official API reference of the previous version, subsequent call instructions from the service provider, and pre-release call observations. It does not indicate that a full audit of the new version of the service source code or the official gateway has been completed. No new API version number is provided.
       * ## Before you begin
       * - Install the official SDK applicable to the target endpoint from the SDK center.
       * - Activate the CUA Agent service and prepare the published CUA instance ID and its access key.
       * - CUA is only available in Standard Edition.
       * - The official POP/OpenAPI endpoint uses the Alibaba Cloud SDK or OpenAPI signature to complete AccessKey authentication. The instance access key is separately placed in `X-QI-Agent-Api-Key` and cannot replace the AccessKey signature.
       * - Set `Content-Type: application/json` and `Accept: text/event-stream`. The `stream` parameter must be set to `true`.
       * - Use the target endpoint confirmed by the service provider. The authentication behavior of the pre-release direct business endpoint cannot be extrapolated to mean that the official endpoint does not require an AK signature.
       * - The client must have the capabilities of taking screenshots, fully parsing SSE, executing actions, and returning actual results. Code and commands must be executed in a controlled and authorized environment. Manual confirmation should be added for sensitive operations.
       * ## Call methods
       * - Method and path: `POST /cua/v1/chat/completions`.
       * - `X-QI-Instance-Id` specifies the instance and is executed according to the published CUA Standard Edition configuration. The `model` parameter in the request body is a compatibility placeholder and cannot be used to switch models.
       * - The response consists of SSE events, not a complete JSON object. Continue reading until the end and check for errors within the stream.
       * - CUA returns the complete action after the single-step model decision is completed, rather than outputting token by token. Heartbeats are used to maintain the connection during the waiting phase.
       * - The mode is selected through `metadata.actionMode` in the request body: `gui-only` or `gui+cli`. This is a field supplemented by subsequent service instructions, not a model name or request header.
       * - Do not use `stream:false` to replace this API operation. Non-streaming mode may result in no response bytes for a long time before the model finishes, which increases the risk of intermediate link timeouts.
       * ## Session management
       * In the first round, you can omit or leave `X-QI-Session-Id` empty, save `qi_session_id` from the SSE body, and reuse it through the request header with the same name in subsequent rounds. Do not rely on the gateway to pass through custom response headers. The actual identifier is subject to the SSE body.
       * `X-QI-Request-Id` can be generated by the server. We recommend that the client explicitly generate it to facilitate recovery and troubleshooting:
       * - New step: new request ID.
       * - Retry the same step: same session, same request ID, and same request body.
       * - Calls within the same session must be strictly sequential. Do not send different steps in parallel. Use different sessions for different tasks.
       * - Explicitly select `actionMode` in the first round and keep it consistent in subsequent rounds. If you need to change the mode, create a new session. You cannot switch modes within the same session.
       * - If the stream is disconnected before `qi_session_id` is obtained in the first round, the recovery method must be handled according to the rules confirmed by the service provider. You cannot assume that the request ID can be deduplicated across unknown sessions.
       * - Save the session/request ID immediately when the identity event is obtained, but do not treat the identity event as a complete return of the action.
       * - Stop continuing after receiving `finished`. The current documentation does not provide an independent session release API operation. Do not construct additional release requests on your own.
       * ## Rate limit
       * The current API request rate for the cloud service is not exposed. Do not treat the client concurrency configuration as the concurrency or QPS commitment allowed by the service. You should confirm the capacity, queuing, and quotas with the service provider.
       * Limits provided in subsequent service instructions:
       * - The current request body limit is **8 MB**, including the fully serialized JSON, not just images.
       * - Exactly one current screenshot is required for each step. Do not pass multiple images or screenshot history.
       * - A keepalive message is sent approximately every **15 seconds** during the waiting period. This interval is not a response latency SLA, and you cannot rely on heartbeats when an HTTP/SSE response has not been established.
       *
       * @param request CuaChatCompletionStreamRequest
       * @param headers CuaChatCompletionStreamHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return CuaChatCompletionStreamResponse
       */
      Models::CuaChatCompletionStreamResponse cuaChatCompletionStreamWithOptions(const Models::CuaChatCompletionStreamRequest &request, const Models::CuaChatCompletionStreamHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invokes a published Computer Use Agent (CUA) Standard Edition instance, submits a task and the current desktop screenshot, and returns single-step computer operation decisions through Server-Sent Events (SSE). After the client executes the computer_use action, it returns the actual results and continues the call with the session ID and the latest screenshot.
       *
       * @description This topic retains the section names and order of the previous version. For version differences, see Release notes. This topic is compiled based on the official API reference of the previous version, subsequent call instructions from the service provider, and pre-release call observations. It does not indicate that a full audit of the new version of the service source code or the official gateway has been completed. No new API version number is provided.
       * ## Before you begin
       * - Install the official SDK applicable to the target endpoint from the SDK center.
       * - Activate the CUA Agent service and prepare the published CUA instance ID and its access key.
       * - CUA is only available in Standard Edition.
       * - The official POP/OpenAPI endpoint uses the Alibaba Cloud SDK or OpenAPI signature to complete AccessKey authentication. The instance access key is separately placed in `X-QI-Agent-Api-Key` and cannot replace the AccessKey signature.
       * - Set `Content-Type: application/json` and `Accept: text/event-stream`. The `stream` parameter must be set to `true`.
       * - Use the target endpoint confirmed by the service provider. The authentication behavior of the pre-release direct business endpoint cannot be extrapolated to mean that the official endpoint does not require an AK signature.
       * - The client must have the capabilities of taking screenshots, fully parsing SSE, executing actions, and returning actual results. Code and commands must be executed in a controlled and authorized environment. Manual confirmation should be added for sensitive operations.
       * ## Call methods
       * - Method and path: `POST /cua/v1/chat/completions`.
       * - `X-QI-Instance-Id` specifies the instance and is executed according to the published CUA Standard Edition configuration. The `model` parameter in the request body is a compatibility placeholder and cannot be used to switch models.
       * - The response consists of SSE events, not a complete JSON object. Continue reading until the end and check for errors within the stream.
       * - CUA returns the complete action after the single-step model decision is completed, rather than outputting token by token. Heartbeats are used to maintain the connection during the waiting phase.
       * - The mode is selected through `metadata.actionMode` in the request body: `gui-only` or `gui+cli`. This is a field supplemented by subsequent service instructions, not a model name or request header.
       * - Do not use `stream:false` to replace this API operation. Non-streaming mode may result in no response bytes for a long time before the model finishes, which increases the risk of intermediate link timeouts.
       * ## Session management
       * In the first round, you can omit or leave `X-QI-Session-Id` empty, save `qi_session_id` from the SSE body, and reuse it through the request header with the same name in subsequent rounds. Do not rely on the gateway to pass through custom response headers. The actual identifier is subject to the SSE body.
       * `X-QI-Request-Id` can be generated by the server. We recommend that the client explicitly generate it to facilitate recovery and troubleshooting:
       * - New step: new request ID.
       * - Retry the same step: same session, same request ID, and same request body.
       * - Calls within the same session must be strictly sequential. Do not send different steps in parallel. Use different sessions for different tasks.
       * - Explicitly select `actionMode` in the first round and keep it consistent in subsequent rounds. If you need to change the mode, create a new session. You cannot switch modes within the same session.
       * - If the stream is disconnected before `qi_session_id` is obtained in the first round, the recovery method must be handled according to the rules confirmed by the service provider. You cannot assume that the request ID can be deduplicated across unknown sessions.
       * - Save the session/request ID immediately when the identity event is obtained, but do not treat the identity event as a complete return of the action.
       * - Stop continuing after receiving `finished`. The current documentation does not provide an independent session release API operation. Do not construct additional release requests on your own.
       * ## Rate limit
       * The current API request rate for the cloud service is not exposed. Do not treat the client concurrency configuration as the concurrency or QPS commitment allowed by the service. You should confirm the capacity, queuing, and quotas with the service provider.
       * Limits provided in subsequent service instructions:
       * - The current request body limit is **8 MB**, including the fully serialized JSON, not just images.
       * - Exactly one current screenshot is required for each step. Do not pass multiple images or screenshot history.
       * - A keepalive message is sent approximately every **15 seconds** during the waiting period. This interval is not a response latency SLA, and you cannot rely on heartbeats when an HTTP/SSE response has not been established.
       *
       * @param request CuaChatCompletionStreamRequest
       * @return CuaChatCompletionStreamResponse
       */
      Models::CuaChatCompletionStreamResponse cuaChatCompletionStream(const Models::CuaChatCompletionStreamRequest &request);

      /**
       * @summary Calls a published Mobile-Use Agent, which supports both the standard and exclusive editions. Submits the task text and the current screen screenshot, passes the device and application context through metadata, and returns the next mobile UI operation via Server-Sent Events (SSE). The UI operation is executed by the caller. After execution, subsequent calls are made with the session ID and the latest screenshot.
       *
       * @description ### Prerequisites
       * - Install the SDK from the SDK center.
       * - Activate the Mobile-Use Agent service and prepare the published Mobile-Use Agent instance ID and its access key.
       * - Mobile-Use Agent provides the standard and exclusive editions. Call the API based on the edition of the selected instance.
       * - Use the SDK to complete AccessKey authentication. Place the instance access key in the X-QI-Agent-Api-Key header, which cannot replace the AccessKey signature.
       * - Set Content-Type to application/json and Accept to text/event-stream. The stream parameter must be set to true.
       * ### Call methods
       * - Method and path: `POST /gui/v1/chat/completions`.
       * - X-QI-Instance-Id specifies the instance and executes based on the published configuration. The model field in the request body is a compatibility placeholder and cannot be used to switch models.
       * - The response consists of SSE incremental events, not a complete JSON object. Continuously read until the stream ends and check for errors within the stream.
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
       * @summary Calls a published Mobile-Use Agent, which supports both the standard and exclusive editions. Submits the task text and the current screen screenshot, passes the device and application context through metadata, and returns the next mobile UI operation via Server-Sent Events (SSE). The UI operation is executed by the caller. After execution, subsequent calls are made with the session ID and the latest screenshot.
       *
       * @description ### Prerequisites
       * - Install the SDK from the SDK center.
       * - Activate the Mobile-Use Agent service and prepare the published Mobile-Use Agent instance ID and its access key.
       * - Mobile-Use Agent provides the standard and exclusive editions. Call the API based on the edition of the selected instance.
       * - Use the SDK to complete AccessKey authentication. Place the instance access key in the X-QI-Agent-Api-Key header, which cannot replace the AccessKey signature.
       * - Set Content-Type to application/json and Accept to text/event-stream. The stream parameter must be set to true.
       * ### Call methods
       * - Method and path: `POST /gui/v1/chat/completions`.
       * - X-QI-Instance-Id specifies the instance and executes based on the published configuration. The model field in the request body is a compatibility placeholder and cannot be used to switch models.
       * - The response consists of SSE incremental events, not a complete JSON object. Continuously read until the stream ends and check for errors within the stream.
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
       * @summary Calls a published Mobile-Use Agent, which supports both the standard and exclusive editions. Submits the task text and the current screen screenshot, passes the device and application context through metadata, and returns the next mobile UI operation via Server-Sent Events (SSE). The UI operation is executed by the caller. After execution, subsequent calls are made with the session ID and the latest screenshot.
       *
       * @description ### Prerequisites
       * - Install the SDK from the SDK center.
       * - Activate the Mobile-Use Agent service and prepare the published Mobile-Use Agent instance ID and its access key.
       * - Mobile-Use Agent provides the standard and exclusive editions. Call the API based on the edition of the selected instance.
       * - Use the SDK to complete AccessKey authentication. Place the instance access key in the X-QI-Agent-Api-Key header, which cannot replace the AccessKey signature.
       * - Set Content-Type to application/json and Accept to text/event-stream. The stream parameter must be set to true.
       * ### Call methods
       * - Method and path: `POST /gui/v1/chat/completions`.
       * - X-QI-Instance-Id specifies the instance and executes based on the published configuration. The model field in the request body is a compatibility placeholder and cannot be used to switch models.
       * - The response consists of SSE incremental events, not a complete JSON object. Continuously read until the stream ends and check for errors within the stream.
       * ### Session management
       * You can omit X-QI-Session-Id in the first round. Save the qi_session_id from the SSE body and pass it in the request header with the same name for subsequent calls. Make sequential calls within the same session and use different identifiers for different sessions. Do not rely on the gateway to pass through custom response headers. The actual identifier is subject to the SSE body.
       *
       * @param request GuiChatCompletionStreamRequest
       * @return GuiChatCompletionStreamResponse
       */
      Models::GuiChatCompletionStreamResponse guiChatCompletionStream(const Models::GuiChatCompletionStreamRequest &request);

      /**
       * @summary Invokes a published Mobile Planner Agent to initiate a conversation or node planning by using OpenAI-compatible Chat Completions messages, and returns text, model-provided thinking content, and structured tool invocations over Server-Sent Events (SSE). Supports multi-turn sessions and image inputs supported by the model. Business tools are executed by the invoker.
       *
       * @description ### Prerequisites
       * - Install the SDK from the SDK center.
       * - Activate the Mobile Planner Agent service and prepare the ID and access key of a published Mobile Planner Agent instance.
       * - Use the SDK to complete AccessKey authentication. Place the instance access key in the X-QI-Agent-Api-Key header, which cannot replace the AccessKey signature.
       * - Set Content-Type to application/json and Accept to text/event-stream. The stream parameter must be set to true.
       * ### Call methods
       * - Method and path: `POST /pa/v1/chat/completions`.
       * - Use X-QI-Instance-Id to specify the instance and execute it based on the published configuration. The model field in the request body is a compatibility placeholder and cannot be used to switch models.
       * - The response consists of SSE incremental events rather than a complete JSON object. Continuously read the stream until it ends and check for errors within the stream.
       * ### Session management
       * You can omit X-QI-Session-Id in the first turn and save the qi_session_id from the SSE body. Pass it back in the request header with the same name in subsequent turns to continue the session. Make sequential calls within the same session and use different identifiers for different sessions. Do not rely on the gateway to pass through custom response headers. The actual identifier is subject to the SSE body.
       *
       * @param request PaChatCompletionStreamRequest
       * @param headers PaChatCompletionStreamHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return PaChatCompletionStreamResponse
       */
      FutureGenerator<Models::PaChatCompletionStreamResponse> paChatCompletionStreamWithSSE(const Models::PaChatCompletionStreamRequest &request, const Models::PaChatCompletionStreamHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invokes a published Mobile Planner Agent to initiate a conversation or node planning by using OpenAI-compatible Chat Completions messages, and returns text, model-provided thinking content, and structured tool invocations over Server-Sent Events (SSE). Supports multi-turn sessions and image inputs supported by the model. Business tools are executed by the invoker.
       *
       * @description ### Prerequisites
       * - Install the SDK from the SDK center.
       * - Activate the Mobile Planner Agent service and prepare the ID and access key of a published Mobile Planner Agent instance.
       * - Use the SDK to complete AccessKey authentication. Place the instance access key in the X-QI-Agent-Api-Key header, which cannot replace the AccessKey signature.
       * - Set Content-Type to application/json and Accept to text/event-stream. The stream parameter must be set to true.
       * ### Call methods
       * - Method and path: `POST /pa/v1/chat/completions`.
       * - Use X-QI-Instance-Id to specify the instance and execute it based on the published configuration. The model field in the request body is a compatibility placeholder and cannot be used to switch models.
       * - The response consists of SSE incremental events rather than a complete JSON object. Continuously read the stream until it ends and check for errors within the stream.
       * ### Session management
       * You can omit X-QI-Session-Id in the first turn and save the qi_session_id from the SSE body. Pass it back in the request header with the same name in subsequent turns to continue the session. Make sequential calls within the same session and use different identifiers for different sessions. Do not rely on the gateway to pass through custom response headers. The actual identifier is subject to the SSE body.
       *
       * @param request PaChatCompletionStreamRequest
       * @param headers PaChatCompletionStreamHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return PaChatCompletionStreamResponse
       */
      Models::PaChatCompletionStreamResponse paChatCompletionStreamWithOptions(const Models::PaChatCompletionStreamRequest &request, const Models::PaChatCompletionStreamHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invokes a published Mobile Planner Agent to initiate a conversation or node planning by using OpenAI-compatible Chat Completions messages, and returns text, model-provided thinking content, and structured tool invocations over Server-Sent Events (SSE). Supports multi-turn sessions and image inputs supported by the model. Business tools are executed by the invoker.
       *
       * @description ### Prerequisites
       * - Install the SDK from the SDK center.
       * - Activate the Mobile Planner Agent service and prepare the ID and access key of a published Mobile Planner Agent instance.
       * - Use the SDK to complete AccessKey authentication. Place the instance access key in the X-QI-Agent-Api-Key header, which cannot replace the AccessKey signature.
       * - Set Content-Type to application/json and Accept to text/event-stream. The stream parameter must be set to true.
       * ### Call methods
       * - Method and path: `POST /pa/v1/chat/completions`.
       * - Use X-QI-Instance-Id to specify the instance and execute it based on the published configuration. The model field in the request body is a compatibility placeholder and cannot be used to switch models.
       * - The response consists of SSE incremental events rather than a complete JSON object. Continuously read the stream until it ends and check for errors within the stream.
       * ### Session management
       * You can omit X-QI-Session-Id in the first turn and save the qi_session_id from the SSE body. Pass it back in the request header with the same name in subsequent turns to continue the session. Make sequential calls within the same session and use different identifiers for different sessions. Do not rely on the gateway to pass through custom response headers. The actual identifier is subject to the SSE body.
       *
       * @param request PaChatCompletionStreamRequest
       * @return PaChatCompletionStreamResponse
       */
      Models::PaChatCompletionStreamResponse paChatCompletionStream(const Models::PaChatCompletionStreamRequest &request);
  };
} // namespace AlibabaCloud
} // namespace MaasQIService20260831
#endif
