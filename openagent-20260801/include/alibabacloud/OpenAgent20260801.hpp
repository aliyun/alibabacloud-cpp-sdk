// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_OPENAGENT20260801_HPP_
#define ALIBABACLOUD_OPENAGENT20260801_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/OpenAgent20260801Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/OpenAgent20260801.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenAgent20260801
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Cancels a run.
       *
       * @description Cancels a specified run and returns the run status after the cancellation.
       *
       * @param request CancelRunRequest
       * @param headers CancelRunHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelRunResponse
       */
      Models::CancelRunResponse cancelRunWithOptions(const string &sessionId, const string &runId, const Models::CancelRunRequest &request, const Models::CancelRunHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels a run.
       *
       * @description Cancels a specified run and returns the run status after the cancellation.
       *
       * @param request CancelRunRequest
       * @return CancelRunResponse
       */
      Models::CancelRunResponse cancelRun(const string &sessionId, const string &runId, const Models::CancelRunRequest &request);

      /**
       * @summary Creates a session.
       *
       * @description Creates a session and returns the session information. Use the returned sessionId for subsequent operations such as sending messages, querying records, and updating the session.
       *
       * @param request CreateSessionRequest
       * @param headers CreateSessionHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSessionResponse
       */
      Models::CreateSessionResponse createSessionWithOptions(const Models::CreateSessionRequest &request, const Models::CreateSessionHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a session.
       *
       * @description Creates a session and returns the session information. Use the returned sessionId for subsequent operations such as sending messages, querying records, and updating the session.
       *
       * @param request CreateSessionRequest
       * @return CreateSessionResponse
       */
      Models::CreateSessionResponse createSession(const Models::CreateSessionRequest &request);

      /**
       * @summary Deletes a session.
       *
       * @description Deletes a specified session. Returns 404 Session.NotFound if the session does not exist or has been deleted.
       *
       * @param request DeleteSessionRequest
       * @param headers DeleteSessionHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSessionResponse
       */
      Models::DeleteSessionResponse deleteSessionWithOptions(const string &sessionId, const Models::DeleteSessionRequest &request, const Models::DeleteSessionHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a session.
       *
       * @description Deletes a specified session. Returns 404 Session.NotFound if the session does not exist or has been deleted.
       *
       * @param request DeleteSessionRequest
       * @return DeleteSessionResponse
       */
      Models::DeleteSessionResponse deleteSession(const string &sessionId, const Models::DeleteSessionRequest &request);

      /**
       * @summary Queries the read-only mode.
       *
       * @description Queries the read-only mode switch for the current account. The read-only mode is enabled by default if it is not configured.
       *
       * @param request GetReadonlyModeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetReadonlyModeResponse
       */
      Models::GetReadonlyModeResponse getReadonlyModeWithOptions(const Models::GetReadonlyModeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the read-only mode.
       *
       * @description Queries the read-only mode switch for the current account. The read-only mode is enabled by default if it is not configured.
       *
       * @param request GetReadonlyModeRequest
       * @return GetReadonlyModeResponse
       */
      Models::GetReadonlyModeResponse getReadonlyMode(const Models::GetReadonlyModeRequest &request);

      /**
       * @summary Queries a run.
       *
       * @description Queries the status and interrupt information of a specified run.
       *
       * @param request GetRunRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRunResponse
       */
      Models::GetRunResponse getRunWithOptions(const string &sessionId, const string &runId, const Models::GetRunRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a run.
       *
       * @description Queries the status and interrupt information of a specified run.
       *
       * @param request GetRunRequest
       * @return GetRunResponse
       */
      Models::GetRunResponse getRun(const string &sessionId, const string &runId, const Models::GetRunRequest &request);

      /**
       * @summary Queries a session.
       *
       * @description Queries the title, status, pinning information, and the ID and status of the most recent run of a specified session.
       *
       * @param request GetSessionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSessionResponse
       */
      Models::GetSessionResponse getSessionWithOptions(const string &sessionId, const Models::GetSessionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a session.
       *
       * @description Queries the title, status, pinning information, and the ID and status of the most recent run of a specified session.
       *
       * @param request GetSessionRequest
       * @return GetSessionResponse
       */
      Models::GetSessionResponse getSession(const string &sessionId, const Models::GetSessionRequest &request);

      /**
       * @summary Lists messages.
       *
       * @description Performs a paging query on the message timeline of a specified session. Use the returned nextToken to retrieve the next page.
       *
       * @param request ListMessagesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMessagesResponse
       */
      Models::ListMessagesResponse listMessagesWithOptions(const string &sessionId, const Models::ListMessagesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists messages.
       *
       * @description Performs a paging query on the message timeline of a specified session. Use the returned nextToken to retrieve the next page.
       *
       * @param request ListMessagesRequest
       * @return ListMessagesResponse
       */
      Models::ListMessagesResponse listMessages(const string &sessionId, const Models::ListMessagesRequest &request);

      /**
       * @summary Lists sessions.
       *
       * @description Uses paging to query the list of sessions accessible to the current identity used to invoke. Use the returned nextToken to retrieve the next page.
       *
       * @param request ListSessionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSessionsResponse
       */
      Models::ListSessionsResponse listSessionsWithOptions(const Models::ListSessionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists sessions.
       *
       * @description Uses paging to query the list of sessions accessible to the current identity used to invoke. Use the returned nextToken to retrieve the next page.
       *
       * @param request ListSessionsRequest
       * @return ListSessionsResponse
       */
      Models::ListSessionsResponse listSessions(const Models::ListSessionsRequest &request);

      /**
       * @summary Sends a message.
       *
       * @description Sends a message to a specified session, submits interrupt handling results, or reconnects to a specified run. Returns the run progress and results through a Server-Sent Events (SSE) event stream.
       *
       * @param request SendMessageRequest
       * @param headers SendMessageHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return SendMessageResponse
       */
      FutureGenerator<Models::SendMessageResponse> sendMessageWithSSE(const string &sessionId, const Models::SendMessageRequest &request, const Models::SendMessageHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sends a message.
       *
       * @description Sends a message to a specified session, submits interrupt handling results, or reconnects to a specified run. Returns the run progress and results through a Server-Sent Events (SSE) event stream.
       *
       * @param request SendMessageRequest
       * @param headers SendMessageHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return SendMessageResponse
       */
      Models::SendMessageResponse sendMessageWithOptions(const string &sessionId, const Models::SendMessageRequest &request, const Models::SendMessageHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sends a message.
       *
       * @description Sends a message to a specified session, submits interrupt handling results, or reconnects to a specified run. Returns the run progress and results through a Server-Sent Events (SSE) event stream.
       *
       * @param request SendMessageRequest
       * @return SendMessageResponse
       */
      Models::SendMessageResponse sendMessage(const string &sessionId, const Models::SendMessageRequest &request);

      /**
       * @summary Updates the read-only mode.
       *
       * @description Enables or disables the read-only mode for the current account.
       *
       * @param request UpdateReadonlyModeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateReadonlyModeResponse
       */
      Models::UpdateReadonlyModeResponse updateReadonlyModeWithOptions(const Models::UpdateReadonlyModeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the read-only mode.
       *
       * @description Enables or disables the read-only mode for the current account.
       *
       * @param request UpdateReadonlyModeRequest
       * @return UpdateReadonlyModeResponse
       */
      Models::UpdateReadonlyModeResponse updateReadonlyMode(const Models::UpdateReadonlyModeRequest &request);

      /**
       * @summary Updates the title or pinned status of a session.
       *
       * @description Updates the title or pinned status of a specified session. Specify at least one of the title and pinned fields. Unspecified fields remain unchanged.
       *
       * @param request UpdateSessionRequest
       * @param headers UpdateSessionHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSessionResponse
       */
      Models::UpdateSessionResponse updateSessionWithOptions(const string &sessionId, const Models::UpdateSessionRequest &request, const Models::UpdateSessionHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the title or pinned status of a session.
       *
       * @description Updates the title or pinned status of a specified session. Specify at least one of the title and pinned fields. Unspecified fields remain unchanged.
       *
       * @param request UpdateSessionRequest
       * @return UpdateSessionResponse
       */
      Models::UpdateSessionResponse updateSession(const string &sessionId, const Models::UpdateSessionRequest &request);
  };
} // namespace AlibabaCloud
} // namespace OpenAgent20260801
#endif
