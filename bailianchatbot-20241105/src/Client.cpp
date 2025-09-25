#include <darabonba/Core.hpp>
#include <alibabacloud/BailianChatBot20241105.hpp>
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
using namespace AlibabaCloud::BailianChatBot20241105::Models;
namespace AlibabaCloud
{
namespace BailianChatBot20241105
{

AlibabaCloud::BailianChatBot20241105::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("bailianchatbot", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary SSE问答接口
 *
 * @param request SseChatRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SseChatResponse
 */
FutrueGenerator<SseChatResponse> Client::sseChatWithSSE(const SseChatRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasCommand()) {
    query["Command"] = request.command();
  }

  if (!!request.hasSenderId()) {
    query["SenderId"] = request.senderId();
  }

  if (!!request.hasSenderNick()) {
    query["SenderNick"] = request.senderNick();
  }

  if (!!request.hasSessionId()) {
    query["SessionId"] = request.sessionId();
  }

  if (!!request.hasUtterance()) {
    query["Utterance"] = request.utterance();
  }

  if (!!request.hasVendorParam()) {
    query["VendorParam"] = request.vendorParam();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SseChat"},
    {"version" , "2024-11-05"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  FutrueGenerator<SSEResponse> sseResp = callSSEApi(params, req, runtime);
  for (SSEResponse resp : sseResp) {
    json data = json(json::parse(resp.event().data()));
json     __retrun = json(json({
      {"statusCode" , resp.statusCode()},
      {"headers" , resp.headers()},
      {"body" , Darabonba::Core::merge(data,
          {"RequestId" , resp.event().id()},
          {"Message" , resp.event().event()}
      )}
    })).get<SseChatResponse>();
return Darbaonba::FutureGenerator<json>(__retrun);
  }
}

/**
 * @summary SSE问答接口
 *
 * @param request SseChatRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SseChatResponse
 */
SseChatResponse Client::sseChatWithOptions(const SseChatRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppId()) {
    query["AppId"] = request.appId();
  }

  if (!!request.hasCommand()) {
    query["Command"] = request.command();
  }

  if (!!request.hasSenderId()) {
    query["SenderId"] = request.senderId();
  }

  if (!!request.hasSenderNick()) {
    query["SenderNick"] = request.senderNick();
  }

  if (!!request.hasSessionId()) {
    query["SessionId"] = request.sessionId();
  }

  if (!!request.hasUtterance()) {
    query["Utterance"] = request.utterance();
  }

  if (!!request.hasVendorParam()) {
    query["VendorParam"] = request.vendorParam();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.workspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SseChat"},
    {"version" , "2024-11-05"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SseChatResponse>();
}

/**
 * @summary SSE问答接口
 *
 * @param request SseChatRequest
 * @return SseChatResponse
 */
SseChatResponse Client::sseChat(const SseChatRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return sseChatWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace BailianChatBot20241105