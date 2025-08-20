#include <darabonba/Core.hpp>
#include <alibabacloud/LingMou20250527.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
#include <darabonba/http/URL.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
using namespace AlibabaCloud::LingMou20250527::Models;
namespace AlibabaCloud
{
namespace LingMou20250527
{

AlibabaCloud::LingMou20250527::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("lingmou", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 关闭会话实例session
 *
 * @param tmpReq CloseChatInstanceSessionsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CloseChatInstanceSessionsResponse
 */
CloseChatInstanceSessionsResponse Client::closeChatInstanceSessionsWithOptions(const string &instanceId, const CloseChatInstanceSessionsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CloseChatInstanceSessionsShrinkRequest request = CloseChatInstanceSessionsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSessionIds()) {
    request.setSessionIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.sessionIds(), "sessionIds", "json"));
  }

  json body = {};
  if (!!request.hasSessionIdsShrink()) {
    body["sessionIds"] = request.sessionIdsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CloseChatInstanceSessions"},
    {"version" , "2025-05-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/chat/instances/" , Darabonba::Http::URL::percentEncode(instanceId) , "/sessions/close")},
    {"method" , "PUT"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CloseChatInstanceSessionsResponse>();
}

/**
 * @summary 关闭会话实例session
 *
 * @param request CloseChatInstanceSessionsRequest
 * @return CloseChatInstanceSessionsResponse
 */
CloseChatInstanceSessionsResponse Client::closeChatInstanceSessions(const string &instanceId, const CloseChatInstanceSessionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return closeChatInstanceSessionsWithOptions(instanceId, request, headers, runtime);
}

/**
 * @summary 创建数字人会话
 *
 * @param request CreateChatSessionRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateChatSessionResponse
 */
CreateChatSessionResponse Client::createChatSessionWithOptions(const string &id, const CreateChatSessionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["instanceId"] = request.instanceId();
  }

  if (!!request.hasLicense()) {
    query["license"] = request.license();
  }

  if (!!request.hasPlatform()) {
    query["platform"] = request.platform();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateChatSession"},
    {"version" , "2025-05-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/chat/init/" , Darabonba::Http::URL::percentEncode(id))},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateChatSessionResponse>();
}

/**
 * @summary 创建数字人会话
 *
 * @param request CreateChatSessionRequest
 * @return CreateChatSessionResponse
 */
CreateChatSessionResponse Client::createChatSession(const string &id, const CreateChatSessionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return createChatSessionWithOptions(id, request, headers, runtime);
}

/**
 * @summary 查询会话实例session
 *
 * @param tmpReq QueryChatInstanceSessionsRequest
 * @param headers map
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryChatInstanceSessionsResponse
 */
QueryChatInstanceSessionsResponse Client::queryChatInstanceSessionsWithOptions(const string &instanceId, const QueryChatInstanceSessionsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  QueryChatInstanceSessionsShrinkRequest request = QueryChatInstanceSessionsShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSessionIds()) {
    request.setSessionIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.sessionIds(), "sessionIds", "json"));
  }

  json query = {};
  if (!!request.hasSessionIdsShrink()) {
    query["sessionIds"] = request.sessionIdsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"headers" , headers},
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryChatInstanceSessions"},
    {"version" , "2025-05-27"},
    {"protocol" , "HTTPS"},
    {"pathname" , DARA_STRING_TEMPLATE("/openapi/chat/instances/" , Darabonba::Http::URL::percentEncode(instanceId) , "/sessions")},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "ROA"},
    {"reqBodyType" , "json"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryChatInstanceSessionsResponse>();
}

/**
 * @summary 查询会话实例session
 *
 * @param request QueryChatInstanceSessionsRequest
 * @return QueryChatInstanceSessionsResponse
 */
QueryChatInstanceSessionsResponse Client::queryChatInstanceSessions(const string &instanceId, const QueryChatInstanceSessionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  map<string, string> headers = {};
  return queryChatInstanceSessionsWithOptions(instanceId, request, headers, runtime);
}
} // namespace AlibabaCloud
} // namespace LingMou20250527