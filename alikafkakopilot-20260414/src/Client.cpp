#include <darabonba/Core.hpp>
#include <alibabacloud/AlikafkaKopilot20260414.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::OpenApi::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
using namespace AlibabaCloud::AlikafkaKopilot20260414::Models;
namespace AlibabaCloud
{
namespace AlikafkaKopilot20260414
{

AlibabaCloud::AlikafkaKopilot20260414::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("alikafkakopilot", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 智能体 stream chat
 *
 * @param request KopilotChatStreamRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return KopilotChatStreamResponse
 */
FutureGenerator<KopilotChatStreamResponse> Client::kopilotChatStreamWithSSE(const KopilotChatStreamRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMessage()) {
    query["Message"] = request.getMessage();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSessionId()) {
    query["SessionId"] = request.getSessionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "KopilotChatStream"},
    {"version" , "2026-04-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
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
      })).get<KopilotChatStreamResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
    }

  }
}

/**
 * @summary 智能体 stream chat
 *
 * @param request KopilotChatStreamRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return KopilotChatStreamResponse
 */
KopilotChatStreamResponse Client::kopilotChatStreamWithOptions(const KopilotChatStreamRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMessage()) {
    query["Message"] = request.getMessage();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSessionId()) {
    query["SessionId"] = request.getSessionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "KopilotChatStream"},
    {"version" , "2026-04-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<KopilotChatStreamResponse>();
}

/**
 * @summary 智能体 stream chat
 *
 * @param request KopilotChatStreamRequest
 * @return KopilotChatStreamResponse
 */
KopilotChatStreamResponse Client::kopilotChatStream(const KopilotChatStreamRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return kopilotChatStreamWithOptions(request, runtime);
}

/**
 * @summary 评价
 *
 * @param request KopilotFeedbackRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return KopilotFeedbackResponse
 */
KopilotFeedbackResponse Client::kopilotFeedbackWithOptions(const KopilotFeedbackRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasComment()) {
    query["Comment"] = request.getComment();
  }

  if (!!request.hasFeedback()) {
    query["Feedback"] = request.getFeedback();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSessionId()) {
    query["SessionId"] = request.getSessionId();
  }

  if (!!request.hasTurnId()) {
    query["TurnId"] = request.getTurnId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "KopilotFeedback"},
    {"version" , "2026-04-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<KopilotFeedbackResponse>();
}

/**
 * @summary 评价
 *
 * @param request KopilotFeedbackRequest
 * @return KopilotFeedbackResponse
 */
KopilotFeedbackResponse Client::kopilotFeedback(const KopilotFeedbackRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return kopilotFeedbackWithOptions(request, runtime);
}

/**
 * @summary 历史会话
 *
 * @param request KopilotListConversationChatMessagesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return KopilotListConversationChatMessagesResponse
 */
KopilotListConversationChatMessagesResponse Client::kopilotListConversationChatMessagesWithOptions(const KopilotListConversationChatMessagesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBeforeTurnId()) {
    query["BeforeTurnId"] = request.getBeforeTurnId();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSessionId()) {
    query["SessionId"] = request.getSessionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "KopilotListConversationChatMessages"},
    {"version" , "2026-04-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<KopilotListConversationChatMessagesResponse>();
}

/**
 * @summary 历史会话
 *
 * @param request KopilotListConversationChatMessagesRequest
 * @return KopilotListConversationChatMessagesResponse
 */
KopilotListConversationChatMessagesResponse Client::kopilotListConversationChatMessages(const KopilotListConversationChatMessagesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return kopilotListConversationChatMessagesWithOptions(request, runtime);
}

/**
 * @summary 智能体
 *
 * @param request KopilotListConversationsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return KopilotListConversationsResponse
 */
KopilotListConversationsResponse Client::kopilotListConversationsWithOptions(const KopilotListConversationsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPage()) {
    query["Page"] = request.getPage();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSize()) {
    query["Size"] = request.getSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "KopilotListConversations"},
    {"version" , "2026-04-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<KopilotListConversationsResponse>();
}

/**
 * @summary 智能体
 *
 * @param request KopilotListConversationsRequest
 * @return KopilotListConversationsResponse
 */
KopilotListConversationsResponse Client::kopilotListConversations(const KopilotListConversationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return kopilotListConversationsWithOptions(request, runtime);
}

/**
 * @summary 状态
 *
 * @param request KopilotQueryStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return KopilotQueryStatusResponse
 */
KopilotQueryStatusResponse Client::kopilotQueryStatusWithOptions(const KopilotQueryStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwner()) {
    query["Owner"] = request.getOwner();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "KopilotQueryStatus"},
    {"version" , "2026-04-14"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<KopilotQueryStatusResponse>();
}

/**
 * @summary 状态
 *
 * @param request KopilotQueryStatusRequest
 * @return KopilotQueryStatusResponse
 */
KopilotQueryStatusResponse Client::kopilotQueryStatus(const KopilotQueryStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return kopilotQueryStatusWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace AlikafkaKopilot20260414