// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_QWENB2BCHAT20261105_HPP_
#define ALIBABACLOUD_QWENB2BCHAT20261105_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/QwenB2BChat20261105Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/QwenB2BChat20261105.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QwenB2BChat20261105
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Sends text or multimodal messages to initiate conversations with web search capabilities, supporting deep thinking, session history management, and both complete JSON and Server-Sent Events (SSE) streaming responses. Specific agent and media capabilities are subject to the activated scope.
       *
       * @param request ChatRequest
       * @param headers ChatHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChatResponse
       */
      FutureGenerator<Models::ChatResponse> chatWithSSE(const Models::ChatRequest &request, const Models::ChatHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sends text or multimodal messages to initiate conversations with web search capabilities, supporting deep thinking, session history management, and both complete JSON and Server-Sent Events (SSE) streaming responses. Specific agent and media capabilities are subject to the activated scope.
       *
       * @param request ChatRequest
       * @param headers ChatHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChatResponse
       */
      Models::ChatResponse chatWithOptions(const Models::ChatRequest &request, const Models::ChatHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sends text or multimodal messages to initiate conversations with web search capabilities, supporting deep thinking, session history management, and both complete JSON and Server-Sent Events (SSE) streaming responses. Specific agent and media capabilities are subject to the activated scope.
       *
       * @param request ChatRequest
       * @return ChatResponse
       */
      Models::ChatResponse chat(const Models::ChatRequest &request);

      /**
       * @summary Validates the service activation API or initiates service activation for the current account, and returns the current activation status along with the available order or instance ID.
       *
       * @param request OpenServiceRequest
       * @param headers OpenServiceHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return OpenServiceResponse
       */
      Models::OpenServiceResponse openServiceWithOptions(const Models::OpenServiceRequest &request, const Models::OpenServiceHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Validates the service activation API or initiates service activation for the current account, and returns the current activation status along with the available order or instance ID.
       *
       * @param request OpenServiceRequest
       * @return OpenServiceResponse
       */
      Models::OpenServiceResponse openService(const Models::OpenServiceRequest &request);

      /**
       * @summary Uploads audio and receives recognized text, agent responses, and synthesized audio over a WebSocket connection. Supports image and text auxiliary input, recognition context, and conversation history. The operation description covers the complete handshake, control frames, audio frames, return events, and error handling protocols.
       *
       * @param request StreamVoiceRequest
       * @param headers StreamVoiceHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return StreamVoiceResponse
       */
      Models::StreamVoiceResponse streamVoiceWithOptions(const Models::StreamVoiceRequest &request, const Models::StreamVoiceHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Uploads audio and receives recognized text, agent responses, and synthesized audio over a WebSocket connection. Supports image and text auxiliary input, recognition context, and conversation history. The operation description covers the complete handshake, control frames, audio frames, return events, and error handling protocols.
       *
       * @param request StreamVoiceRequest
       * @return StreamVoiceResponse
       */
      Models::StreamVoiceResponse streamVoice(const Models::StreamVoiceRequest &request);
  };
} // namespace AlibabaCloud
} // namespace QwenB2BChat20261105
#endif
