// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_WUYINGAI20260311_HPP_
#define ALIBABACLOUD_WUYINGAI20260311_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/WuyingAI20260311Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/WuyingAI20260311.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WuyingAI20260311
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Conducts a streaming conversation with JVS Crew, using the Server-Sent Events (SSE) protocol to push conversation content in real time.
       *
       * @description **Features**
       * - Real-time streaming response that reduces time to first token.
       * - Supports multimodal input (text, images, and files).
       * - Session persistence for multi-turn conversations.
       * - Event-driven architecture for precise message status control.
       * **Request information**
       * - **Request method**: `POST`
       * - **Content-Type**: `application/json`
       * - **Response Content-Type**: `text/event-stream`.
       *
       * @param tmpReq ChatRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChatResponse
       */
      FutureGenerator<Models::ChatResponse> chatWithSSE(const Models::ChatRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Conducts a streaming conversation with JVS Crew, using the Server-Sent Events (SSE) protocol to push conversation content in real time.
       *
       * @description **Features**
       * - Real-time streaming response that reduces time to first token.
       * - Supports multimodal input (text, images, and files).
       * - Session persistence for multi-turn conversations.
       * - Event-driven architecture for precise message status control.
       * **Request information**
       * - **Request method**: `POST`
       * - **Content-Type**: `application/json`
       * - **Response Content-Type**: `text/event-stream`.
       *
       * @param tmpReq ChatRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChatResponse
       */
      Models::ChatResponse chatWithOptions(const Models::ChatRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Conducts a streaming conversation with JVS Crew, using the Server-Sent Events (SSE) protocol to push conversation content in real time.
       *
       * @description **Features**
       * - Real-time streaming response that reduces time to first token.
       * - Supports multimodal input (text, images, and files).
       * - Session persistence for multi-turn conversations.
       * - Event-driven architecture for precise message status control.
       * **Request information**
       * - **Request method**: `POST`
       * - **Content-Type**: `application/json`
       * - **Response Content-Type**: `text/event-stream`.
       *
       * @param request ChatRequest
       * @return ChatResponse
       */
      Models::ChatResponse chat(const Models::ChatRequest &request);

      /**
       * @summary Obtains an access token (AccessToken) for user conversations, which is used to authenticate when invoking the Chat operation.
       *
       * @description **Token format**: The AccessToken is a **JWT** consisting of **Header.Payload.Signature** segments, each Base64URL-encoded and concatenated with `.` into a single line. The examples in the following table are masked for illustration purposes. The actual RequestId and JWT segments are longer.
       * **Token validity**: The AccessToken **is valid for a limited period of time**. After it expires, call this operation again to obtain a new token.
       * **Authentication method**: POP V1 signature (AK/SK)
       * **Action**: `GetAccessToken`.
       *
       * @param request GetAccessTokenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAccessTokenResponse
       */
      Models::GetAccessTokenResponse getAccessTokenWithOptions(const Models::GetAccessTokenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains an access token (AccessToken) for user conversations, which is used to authenticate when invoking the Chat operation.
       *
       * @description **Token format**: The AccessToken is a **JWT** consisting of **Header.Payload.Signature** segments, each Base64URL-encoded and concatenated with `.` into a single line. The examples in the following table are masked for illustration purposes. The actual RequestId and JWT segments are longer.
       * **Token validity**: The AccessToken **is valid for a limited period of time**. After it expires, call this operation again to obtain a new token.
       * **Authentication method**: POP V1 signature (AK/SK)
       * **Action**: `GetAccessToken`.
       *
       * @param request GetAccessTokenRequest
       * @return GetAccessTokenResponse
       */
      Models::GetAccessTokenResponse getAccessToken(const Models::GetAccessTokenRequest &request);
  };
} // namespace AlibabaCloud
} // namespace WuyingAI20260311
#endif
