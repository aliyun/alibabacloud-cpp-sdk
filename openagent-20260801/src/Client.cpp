#include <darabonba/Core.hpp>
#include <alibabacloud/OpenAgent20260801.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
#include <darabonba/Convert.hpp>
#include <darabonba/encode/Encoder.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::OpenApi::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
using namespace AlibabaCloud::OpenAgent20260801::Models;
namespace AlibabaCloud
{
namespace OpenAgent20260801
{

AlibabaCloud::OpenAgent20260801::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  checkConfig(config);
  this->_endpoint = getEndpoint("openagent", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
}


string Client::getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint) {
  if (!Darabonba::isNull(endpoint)) {
    return endpoint;
  }

  if (!Darabonba::isNull(endpointMap) && !Darabonba::isNull(endpointMap.at(regionId))) {
    return endpointMap.at(regionId);
  }

  return Utils::Utils::getEndpointRules(productId, regionId, endpointRule, network, suffix);
}

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
CancelRunResponse Client::cancelRunWithOptions(const string &sessionId, const string &runId, const CancelRunRequest &request, const CancelRunHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasReason()) {
    body["reason"] = request.getReason();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXOpenAgentIdempotencyKey()) {
    realHeaders["X-OpenAgent-Idempotency-Key"] = Darabonba::Convert::stringVal(headers.getXOpenAgentIdempotencyKey());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CancelRun"},
    {"version" , "2026-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/v1/agent/sessions/" , Darabonba::Encode::Encoder::percentEncode(sessionId) , "/runs/" , Darabonba::Encode::Encoder::percentEncode(runId) , "/cancel")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelRunResponse>();
}

/**
 * @summary Cancels a run.
 *
 * @description Cancels a specified run and returns the run status after the cancellation.
 *
 * @param request CancelRunRequest
 * @return CancelRunResponse
 */
CancelRunResponse Client::cancelRun(const string &sessionId, const string &runId, const CancelRunRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  CancelRunHeaders headers = CancelRunHeaders();
  return cancelRunWithOptions(sessionId, runId, request, headers, runtime);
}

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
CreateSessionResponse Client::createSessionWithOptions(const CreateSessionRequest &request, const CreateSessionHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasTitle()) {
    body["title"] = request.getTitle();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXOpenAgentIdempotencyKey()) {
    realHeaders["X-OpenAgent-Idempotency-Key"] = Darabonba::Convert::stringVal(headers.getXOpenAgentIdempotencyKey());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateSession"},
    {"version" , "2026-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/v1/agent/sessions")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSessionResponse>();
}

/**
 * @summary Creates a session.
 *
 * @description Creates a session and returns the session information. Use the returned sessionId for subsequent operations such as sending messages, querying records, and updating the session.
 *
 * @param request CreateSessionRequest
 * @return CreateSessionResponse
 */
CreateSessionResponse Client::createSession(const CreateSessionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  CreateSessionHeaders headers = CreateSessionHeaders();
  return createSessionWithOptions(request, headers, runtime);
}

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
DeleteSessionResponse Client::deleteSessionWithOptions(const string &sessionId, const DeleteSessionRequest &request, const DeleteSessionHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXOpenAgentIdempotencyKey()) {
    realHeaders["X-OpenAgent-Idempotency-Key"] = Darabonba::Convert::stringVal(headers.getXOpenAgentIdempotencyKey());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteSession"},
    {"version" , "2026-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/v1/agent/sessions/" , Darabonba::Encode::Encoder::percentEncode(sessionId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSessionResponse>();
}

/**
 * @summary Deletes a session.
 *
 * @description Deletes a specified session. Returns 404 Session.NotFound if the session does not exist or has been deleted.
 *
 * @param request DeleteSessionRequest
 * @return DeleteSessionResponse
 */
DeleteSessionResponse Client::deleteSession(const string &sessionId, const DeleteSessionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  DeleteSessionHeaders headers = DeleteSessionHeaders();
  return deleteSessionWithOptions(sessionId, request, headers, runtime);
}

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
GetReadonlyModeResponse Client::getReadonlyModeWithOptions(const GetReadonlyModeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetReadonlyMode"},
    {"version" , "2026-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/v1/user/configs/readonly")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetReadonlyModeResponse>();
}

/**
 * @summary Queries the read-only mode.
 *
 * @description Queries the read-only mode switch for the current account. The read-only mode is enabled by default if it is not configured.
 *
 * @param request GetReadonlyModeRequest
 * @return GetReadonlyModeResponse
 */
GetReadonlyModeResponse Client::getReadonlyMode(const GetReadonlyModeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getReadonlyModeWithOptions(request, headers, runtime);
}

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
GetRunResponse Client::getRunWithOptions(const string &sessionId, const string &runId, const GetRunRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetRun"},
    {"version" , "2026-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/v1/agent/sessions/" , Darabonba::Encode::Encoder::percentEncode(sessionId) , "/runs/" , Darabonba::Encode::Encoder::percentEncode(runId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRunResponse>();
}

/**
 * @summary Queries a run.
 *
 * @description Queries the status and interrupt information of a specified run.
 *
 * @param request GetRunRequest
 * @return GetRunResponse
 */
GetRunResponse Client::getRun(const string &sessionId, const string &runId, const GetRunRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getRunWithOptions(sessionId, runId, request, headers, runtime);
}

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
GetSessionResponse Client::getSessionWithOptions(const string &sessionId, const GetSessionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSession"},
    {"version" , "2026-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/v1/agent/sessions/" , Darabonba::Encode::Encoder::percentEncode(sessionId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSessionResponse>();
}

/**
 * @summary Queries a session.
 *
 * @description Queries the title, status, pinning information, and the ID and status of the most recent run of a specified session.
 *
 * @param request GetSessionRequest
 * @return GetSessionResponse
 */
GetSessionResponse Client::getSession(const string &sessionId, const GetSessionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getSessionWithOptions(sessionId, request, headers, runtime);
}

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
ListMessagesResponse Client::listMessagesWithOptions(const string &sessionId, const ListMessagesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  if (!!request.hasRunId()) {
    query["runId"] = request.getRunId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListMessages"},
    {"version" , "2026-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/v1/agent/sessions/" , Darabonba::Encode::Encoder::percentEncode(sessionId) , "/messages")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListMessagesResponse>();
}

/**
 * @summary Lists messages.
 *
 * @description Performs a paging query on the message timeline of a specified session. Use the returned nextToken to retrieve the next page.
 *
 * @param request ListMessagesRequest
 * @return ListMessagesResponse
 */
ListMessagesResponse Client::listMessages(const string &sessionId, const ListMessagesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listMessagesWithOptions(sessionId, request, headers, runtime);
}

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
ListSessionsResponse Client::listSessionsWithOptions(const ListSessionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["maxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["nextToken"] = request.getNextToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSessions"},
    {"version" , "2026-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/v1/agent/sessions")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSessionsResponse>();
}

/**
 * @summary Lists sessions.
 *
 * @description Uses paging to query the list of sessions accessible to the current identity used to invoke. Use the returned nextToken to retrieve the next page.
 *
 * @param request ListSessionsRequest
 * @return ListSessionsResponse
 */
ListSessionsResponse Client::listSessions(const ListSessionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listSessionsWithOptions(request, headers, runtime);
}

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
FutureGenerator<SendMessageResponse> Client::sendMessageWithSSE(const string &sessionId, const SendMessageRequest &request, const SendMessageHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasContent()) {
    body["content"] = request.getContent();
  }

  if (!!request.hasResume()) {
    body["resume"] = request.getResume();
  }

  if (!!request.hasRunId()) {
    body["runId"] = request.getRunId();
  }

  if (!!request.hasType()) {
    body["type"] = request.getType();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXOpenAgentIdempotencyKey()) {
    realHeaders["X-OpenAgent-Idempotency-Key"] = Darabonba::Convert::stringVal(headers.getXOpenAgentIdempotencyKey());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SendMessage"},
    {"version" , "2026-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/v1/agent/sessions/" , Darabonba::Encode::Encoder::percentEncode(sessionId) , "/messages")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "string"}
  }).get<map<string, string>>());
  FutureGenerator<SSEResponse> sseResp = callSSEApi(params, req, runtime);
  for (SSEResponse resp : sseResp) {
    if (!!resp.hasEvent() && !!resp.getEvent().hasData()) {
      string data = resp.getEvent().getData();
json       __retrun = json(json({
        {"statusCode" , resp.getStatusCode()},
        {"headers" , resp.getHeaders()},
        {"id" , resp.getEvent().getId()},
        {"event" , resp.getEvent().getEvent()},
        {"body" , data}
      })).get<SendMessageResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
    }

  }
}

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
SendMessageResponse Client::sendMessageWithOptions(const string &sessionId, const SendMessageRequest &request, const SendMessageHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasContent()) {
    body["content"] = request.getContent();
  }

  if (!!request.hasResume()) {
    body["resume"] = request.getResume();
  }

  if (!!request.hasRunId()) {
    body["runId"] = request.getRunId();
  }

  if (!!request.hasType()) {
    body["type"] = request.getType();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXOpenAgentIdempotencyKey()) {
    realHeaders["X-OpenAgent-Idempotency-Key"] = Darabonba::Convert::stringVal(headers.getXOpenAgentIdempotencyKey());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SendMessage"},
    {"version" , "2026-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/v1/agent/sessions/" , Darabonba::Encode::Encoder::percentEncode(sessionId) , "/messages")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "string"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SendMessageResponse>();
}

/**
 * @summary Sends a message.
 *
 * @description Sends a message to a specified session, submits interrupt handling results, or reconnects to a specified run. Returns the run progress and results through a Server-Sent Events (SSE) event stream.
 *
 * @param request SendMessageRequest
 * @return SendMessageResponse
 */
SendMessageResponse Client::sendMessage(const string &sessionId, const SendMessageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  SendMessageHeaders headers = SendMessageHeaders();
  return sendMessageWithOptions(sessionId, request, headers, runtime);
}

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
UpdateReadonlyModeResponse Client::updateReadonlyModeWithOptions(const UpdateReadonlyModeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasValue()) {
    body["value"] = request.getValue();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateReadonlyMode"},
    {"version" , "2026-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/v1/user/configs/readonly")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateReadonlyModeResponse>();
}

/**
 * @summary Updates the read-only mode.
 *
 * @description Enables or disables the read-only mode for the current account.
 *
 * @param request UpdateReadonlyModeRequest
 * @return UpdateReadonlyModeResponse
 */
UpdateReadonlyModeResponse Client::updateReadonlyMode(const UpdateReadonlyModeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return updateReadonlyModeWithOptions(request, headers, runtime);
}

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
UpdateSessionResponse Client::updateSessionWithOptions(const string &sessionId, const UpdateSessionRequest &request, const UpdateSessionHeaders &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasPinned()) {
    body["pinned"] = request.getPinned();
  }

  if (!!request.hasTitle()) {
    body["title"] = request.getTitle();
  }

  map<string, string> realHeaders = {};
  if (!!headers.hasCommonHeaders()) {
    realHeaders = headers.getCommonHeaders();
  }

  if (!!headers.hasXOpenAgentIdempotencyKey()) {
    realHeaders["X-OpenAgent-Idempotency-Key"] = Darabonba::Convert::stringVal(headers.getXOpenAgentIdempotencyKey());
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , realHeaders},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdateSession"},
    {"version" , "2026-08-01"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/v1/agent/sessions/" , Darabonba::Encode::Encoder::percentEncode(sessionId))},
    {"method" , "PATCH"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateSessionResponse>();
}

/**
 * @summary Updates the title or pinned status of a session.
 *
 * @description Updates the title or pinned status of a specified session. Specify at least one of the title and pinned fields. Unspecified fields remain unchanged.
 *
 * @param request UpdateSessionRequest
 * @return UpdateSessionResponse
 */
UpdateSessionResponse Client::updateSession(const string &sessionId, const UpdateSessionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  UpdateSessionHeaders headers = UpdateSessionHeaders();
  return updateSessionWithOptions(sessionId, request, headers, runtime);
}
} // namespace AlibabaCloud
} // namespace OpenAgent20260801