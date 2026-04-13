#include <darabonba/Core.hpp>
#include <alibabacloud/PAICopilot20250731.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
#include <darabonba/encode/Encoder.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::OpenApi::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
using namespace AlibabaCloud::PAICopilot20250731::Models;
namespace AlibabaCloud
{
namespace PAICopilot20250731
{

AlibabaCloud::PAICopilot20250731::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("paicopilot", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary CreateChat
 *
 * @param request CreateChatRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateChatResponse
 */
FutureGenerator<CreateChatResponse> Client::createChatWithSSE(const string &SessionId, const CreateChatRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasExtraData()) {
    body["ExtraData"] = request.getExtraData();
  }

  if (!!request.hasPayload()) {
    body["Payload"] = request.getPayload();
  }

  if (!!request.hasQuestion()) {
    body["Question"] = request.getQuestion();
  }

  if (!!request.hasTitle()) {
    body["Title"] = request.getTitle();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateChat"},
    {"version" , "2025-07-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/sessions/" , Darabonba::Encode::Encoder::percentEncode(SessionId) , "/chats")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  FutureGenerator<SSEResponse> sseResp = callSSEApi(params, req, runtime);
  for (SSEResponse resp : sseResp) {
    if (!!resp.hasEvent() && !!resp.getEvent().hasData()) {
      json data = json(json::parse(resp.getEvent().getData()));
json       __retrun = json(json({
        {"statusCode" , resp.getStatusCode()},
        {"headers" , resp.getHeaders()},
        {"id" , resp.getEvent().getId()},
        {"event" , resp.getEvent().getEvent()},
        {"body" , data}
      })).get<CreateChatResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
    }

  }
}

/**
 * @summary CreateChat
 *
 * @param request CreateChatRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateChatResponse
 */
CreateChatResponse Client::createChatWithOptions(const string &SessionId, const CreateChatRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasExtraData()) {
    body["ExtraData"] = request.getExtraData();
  }

  if (!!request.hasPayload()) {
    body["Payload"] = request.getPayload();
  }

  if (!!request.hasQuestion()) {
    body["Question"] = request.getQuestion();
  }

  if (!!request.hasTitle()) {
    body["Title"] = request.getTitle();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateChat"},
    {"version" , "2025-07-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/sessions/" , Darabonba::Encode::Encoder::percentEncode(SessionId) , "/chats")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateChatResponse>();
}

/**
 * @summary CreateChat
 *
 * @param request CreateChatRequest
 * @return CreateChatResponse
 */
CreateChatResponse Client::createChat(const string &SessionId, const CreateChatRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createChatWithOptions(SessionId, request, headers, runtime);
}

/**
 * @summary /api/v1/sessions
 *
 * @param request CreateSessionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSessionResponse
 */
CreateSessionResponse Client::createSessionWithOptions(const CreateSessionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasLabels()) {
    body["Labels"] = request.getLabels();
  }

  if (!!request.hasTitle()) {
    body["Title"] = request.getTitle();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateSession"},
    {"version" , "2025-07-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/sessions")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSessionResponse>();
}

/**
 * @summary /api/v1/sessions
 *
 * @param request CreateSessionRequest
 * @return CreateSessionResponse
 */
CreateSessionResponse Client::createSession(const CreateSessionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createSessionWithOptions(request, headers, runtime);
}

/**
 * @summary DeleteChat
 *
 * @param request DeleteChatRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteChatResponse
 */
DeleteChatResponse Client::deleteChatWithOptions(const string &SessionId, const string &ChatId, const DeleteChatRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteChat"},
    {"version" , "2025-07-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/sessions/" , Darabonba::Encode::Encoder::percentEncode(SessionId) , "/chats/" , Darabonba::Encode::Encoder::percentEncode(ChatId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteChatResponse>();
}

/**
 * @summary DeleteChat
 *
 * @param request DeleteChatRequest
 * @return DeleteChatResponse
 */
DeleteChatResponse Client::deleteChat(const string &SessionId, const string &ChatId, const DeleteChatRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteChatWithOptions(SessionId, ChatId, request, headers, runtime);
}

/**
 * @summary DeleteSession
 *
 * @param request DeleteSessionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSessionResponse
 */
DeleteSessionResponse Client::deleteSessionWithOptions(const string &SessionId, const DeleteSessionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteSession"},
    {"version" , "2025-07-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/sessions/" , Darabonba::Encode::Encoder::percentEncode(SessionId))},
    {"method" , "DELETE"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSessionResponse>();
}

/**
 * @summary DeleteSession
 *
 * @param request DeleteSessionRequest
 * @return DeleteSessionResponse
 */
DeleteSessionResponse Client::deleteSession(const string &SessionId, const DeleteSessionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return deleteSessionWithOptions(SessionId, request, headers, runtime);
}

/**
 * @summary GetChat
 *
 * @param request GetChatRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetChatResponse
 */
GetChatResponse Client::getChatWithOptions(const string &ChatId, const string &SessionId, const GetChatRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasVerbose()) {
    query["Verbose"] = request.getVerbose();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetChat"},
    {"version" , "2025-07-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/sessions/" , Darabonba::Encode::Encoder::percentEncode(SessionId) , "/chats/" , Darabonba::Encode::Encoder::percentEncode(ChatId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetChatResponse>();
}

/**
 * @summary GetChat
 *
 * @param request GetChatRequest
 * @return GetChatResponse
 */
GetChatResponse Client::getChat(const string &ChatId, const string &SessionId, const GetChatRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getChatWithOptions(ChatId, SessionId, request, headers, runtime);
}

/**
 * @summary GetSession
 *
 * @param request GetSessionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSessionResponse
 */
GetSessionResponse Client::getSessionWithOptions(const string &SessionId, const GetSessionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSession"},
    {"version" , "2025-07-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/sessions/" , Darabonba::Encode::Encoder::percentEncode(SessionId))},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSessionResponse>();
}

/**
 * @summary GetSession
 *
 * @param request GetSessionRequest
 * @return GetSessionResponse
 */
GetSessionResponse Client::getSession(const string &SessionId, const GetSessionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return getSessionWithOptions(SessionId, request, headers, runtime);
}

/**
 * @summary ListChats
 *
 * @param request ListChatsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListChatsResponse
 */
ListChatsResponse Client::listChatsWithOptions(const string &SessionId, const ListChatsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOrder()) {
    query["Order"] = request.getOrder();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.getSortBy();
  }

  if (!!request.hasVerbose()) {
    query["Verbose"] = request.getVerbose();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListChats"},
    {"version" , "2025-07-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/sessions/" , Darabonba::Encode::Encoder::percentEncode(SessionId) , "/chats")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListChatsResponse>();
}

/**
 * @summary ListChats
 *
 * @param request ListChatsRequest
 * @return ListChatsResponse
 */
ListChatsResponse Client::listChats(const string &SessionId, const ListChatsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return listChatsWithOptions(SessionId, request, headers, runtime);
}

/**
 * @summary GetChat
 *
 * @param request ListSessionsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSessionsResponse
 */
ListSessionsResponse Client::listSessionsWithOptions(const ListSessionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLabels()) {
    query["Labels"] = request.getLabels();
  }

  if (!!request.hasOrder()) {
    query["Order"] = request.getOrder();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.getSortBy();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSessions"},
    {"version" , "2025-07-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/sessions")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSessionsResponse>();
}

/**
 * @summary GetChat
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
 * @summary /api/v1/sessions
 *
 * @param request SearchInfoRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return SearchInfoResponse
 */
SearchInfoResponse Client::searchInfoWithOptions(const SearchInfoRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json body = {};
  if (!!request.hasKnowledgeBaseFilters()) {
    body["KnowledgeBaseFilters"] = request.getKnowledgeBaseFilters();
  }

  if (!!request.hasWebFilters()) {
    body["WebFilters"] = request.getWebFilters();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SearchInfo"},
    {"version" , "2025-07-31"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/api/v1/searches")},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SearchInfoResponse>();
}

/**
 * @summary /api/v1/sessions
 *
 * @param request SearchInfoRequest
 * @return SearchInfoResponse
 */
SearchInfoResponse Client::searchInfo(const SearchInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return searchInfoWithOptions(request, headers, runtime);
}
} // namespace AlibabaCloud
} // namespace PAICopilot20250731