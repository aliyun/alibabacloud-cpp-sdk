// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_PAICOPILOT20250731_HPP_
#define ALIBABACLOUD_PAICOPILOT20250731_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/PAICopilot20250731Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/PAICopilot20250731.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAICopilot20250731
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary CreateChat
       *
       * @param request CreateChatRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateChatResponse
       */
      FutureGenerator<Models::CreateChatResponse> createChatWithSSE(const string &SessionId, const Models::CreateChatRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary CreateChat
       *
       * @param request CreateChatRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateChatResponse
       */
      Models::CreateChatResponse createChatWithOptions(const string &SessionId, const Models::CreateChatRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary CreateChat
       *
       * @param request CreateChatRequest
       * @return CreateChatResponse
       */
      Models::CreateChatResponse createChat(const string &SessionId, const Models::CreateChatRequest &request);

      /**
       * @summary /api/v1/sessions
       *
       * @param request CreateSessionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSessionResponse
       */
      Models::CreateSessionResponse createSessionWithOptions(const Models::CreateSessionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary /api/v1/sessions
       *
       * @param request CreateSessionRequest
       * @return CreateSessionResponse
       */
      Models::CreateSessionResponse createSession(const Models::CreateSessionRequest &request);

      /**
       * @summary DeleteChat
       *
       * @param request DeleteChatRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteChatResponse
       */
      Models::DeleteChatResponse deleteChatWithOptions(const string &SessionId, const string &ChatId, const Models::DeleteChatRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary DeleteChat
       *
       * @param request DeleteChatRequest
       * @return DeleteChatResponse
       */
      Models::DeleteChatResponse deleteChat(const string &SessionId, const string &ChatId, const Models::DeleteChatRequest &request);

      /**
       * @summary DeleteSession
       *
       * @param request DeleteSessionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSessionResponse
       */
      Models::DeleteSessionResponse deleteSessionWithOptions(const string &SessionId, const Models::DeleteSessionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary DeleteSession
       *
       * @param request DeleteSessionRequest
       * @return DeleteSessionResponse
       */
      Models::DeleteSessionResponse deleteSession(const string &SessionId, const Models::DeleteSessionRequest &request);

      /**
       * @summary GetChat
       *
       * @param request GetChatRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetChatResponse
       */
      Models::GetChatResponse getChatWithOptions(const string &ChatId, const string &SessionId, const Models::GetChatRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary GetChat
       *
       * @param request GetChatRequest
       * @return GetChatResponse
       */
      Models::GetChatResponse getChat(const string &ChatId, const string &SessionId, const Models::GetChatRequest &request);

      /**
       * @summary GetSession
       *
       * @param request GetSessionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSessionResponse
       */
      Models::GetSessionResponse getSessionWithOptions(const string &SessionId, const Models::GetSessionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary GetSession
       *
       * @param request GetSessionRequest
       * @return GetSessionResponse
       */
      Models::GetSessionResponse getSession(const string &SessionId, const Models::GetSessionRequest &request);

      /**
       * @summary ListChats
       *
       * @param request ListChatsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListChatsResponse
       */
      Models::ListChatsResponse listChatsWithOptions(const string &SessionId, const Models::ListChatsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary ListChats
       *
       * @param request ListChatsRequest
       * @return ListChatsResponse
       */
      Models::ListChatsResponse listChats(const string &SessionId, const Models::ListChatsRequest &request);

      /**
       * @summary GetChat
       *
       * @param request ListSessionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSessionsResponse
       */
      Models::ListSessionsResponse listSessionsWithOptions(const Models::ListSessionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary GetChat
       *
       * @param request ListSessionsRequest
       * @return ListSessionsResponse
       */
      Models::ListSessionsResponse listSessions(const Models::ListSessionsRequest &request);

      /**
       * @summary /api/v1/sessions
       *
       * @param request SearchInfoRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchInfoResponse
       */
      Models::SearchInfoResponse searchInfoWithOptions(const Models::SearchInfoRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary /api/v1/sessions
       *
       * @param request SearchInfoRequest
       * @return SearchInfoResponse
       */
      Models::SearchInfoResponse searchInfo(const Models::SearchInfoRequest &request);
  };
} // namespace AlibabaCloud
} // namespace PAICopilot20250731
#endif
