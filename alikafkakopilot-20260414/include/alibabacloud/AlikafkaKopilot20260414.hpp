// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_ALIKAFKAKOPILOT20260414_HPP_
#define ALIBABACLOUD_ALIKAFKAKOPILOT20260414_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/AlikafkaKopilot20260414Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/AlikafkaKopilot20260414.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AlikafkaKopilot20260414
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 智能体 stream chat
       *
       * @param request KopilotChatStreamRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return KopilotChatStreamResponse
       */
      FutureGenerator<Models::KopilotChatStreamResponse> kopilotChatStreamWithSSE(const Models::KopilotChatStreamRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 智能体 stream chat
       *
       * @param request KopilotChatStreamRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return KopilotChatStreamResponse
       */
      Models::KopilotChatStreamResponse kopilotChatStreamWithOptions(const Models::KopilotChatStreamRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 智能体 stream chat
       *
       * @param request KopilotChatStreamRequest
       * @return KopilotChatStreamResponse
       */
      Models::KopilotChatStreamResponse kopilotChatStream(const Models::KopilotChatStreamRequest &request);

      /**
       * @summary 评价
       *
       * @param request KopilotFeedbackRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return KopilotFeedbackResponse
       */
      Models::KopilotFeedbackResponse kopilotFeedbackWithOptions(const Models::KopilotFeedbackRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 评价
       *
       * @param request KopilotFeedbackRequest
       * @return KopilotFeedbackResponse
       */
      Models::KopilotFeedbackResponse kopilotFeedback(const Models::KopilotFeedbackRequest &request);

      /**
       * @summary 历史会话
       *
       * @param request KopilotListConversationChatMessagesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return KopilotListConversationChatMessagesResponse
       */
      Models::KopilotListConversationChatMessagesResponse kopilotListConversationChatMessagesWithOptions(const Models::KopilotListConversationChatMessagesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 历史会话
       *
       * @param request KopilotListConversationChatMessagesRequest
       * @return KopilotListConversationChatMessagesResponse
       */
      Models::KopilotListConversationChatMessagesResponse kopilotListConversationChatMessages(const Models::KopilotListConversationChatMessagesRequest &request);

      /**
       * @summary 智能体
       *
       * @param request KopilotListConversationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return KopilotListConversationsResponse
       */
      Models::KopilotListConversationsResponse kopilotListConversationsWithOptions(const Models::KopilotListConversationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 智能体
       *
       * @param request KopilotListConversationsRequest
       * @return KopilotListConversationsResponse
       */
      Models::KopilotListConversationsResponse kopilotListConversations(const Models::KopilotListConversationsRequest &request);

      /**
       * @summary 状态
       *
       * @param request KopilotQueryStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return KopilotQueryStatusResponse
       */
      Models::KopilotQueryStatusResponse kopilotQueryStatusWithOptions(const Models::KopilotQueryStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 状态
       *
       * @param request KopilotQueryStatusRequest
       * @return KopilotQueryStatusResponse
       */
      Models::KopilotQueryStatusResponse kopilotQueryStatus(const Models::KopilotQueryStatusRequest &request);
  };
} // namespace AlibabaCloud
} // namespace AlikafkaKopilot20260414
#endif
