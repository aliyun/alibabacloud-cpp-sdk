#include <darabonba/Core.hpp>
#include <alibabacloud/OssAgent20260810.hpp>
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
using namespace AlibabaCloud::OssAgent20260810::Models;
namespace AlibabaCloud
{
namespace OssAgent20260810
{

AlibabaCloud::OssAgent20260810::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  checkConfig(config);
  this->_endpoint = getEndpoint("ossagent", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary A2A接口
 *
 * @param request A2aRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return A2aResponse
 */
FutureGenerator<A2aResponse> Client::a2aWithSSE(const A2aRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnv()) {
    query["Env"] = request.getEnv();
  }

  json body = {};
  if (!!request.hasId()) {
    body["id"] = request.getId();
  }

  if (!!request.hasJsonrpc()) {
    body["jsonrpc"] = request.getJsonrpc();
  }

  if (!!request.hasMethod()) {
    body["method"] = request.getMethod();
  }

  if (!!request.hasParams()) {
    body["params"] = request.getParams();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "a2a"},
    {"version" , "2026-08-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "json"},
    {"bodyType" , "any"}
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
      })).get<A2aResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
    }

  }
}

/**
 * @summary A2A接口
 *
 * @param request A2aRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return A2aResponse
 */
A2aResponse Client::a2aWithOptions(const A2aRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnv()) {
    query["Env"] = request.getEnv();
  }

  json body = {};
  if (!!request.hasId()) {
    body["id"] = request.getId();
  }

  if (!!request.hasJsonrpc()) {
    body["jsonrpc"] = request.getJsonrpc();
  }

  if (!!request.hasMethod()) {
    body["method"] = request.getMethod();
  }

  if (!!request.hasParams()) {
    body["params"] = request.getParams();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "a2a"},
    {"version" , "2026-08-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "json"},
    {"bodyType" , "any"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<A2aResponse>();
}

/**
 * @summary A2A接口
 *
 * @param request A2aRequest
 * @return A2aResponse
 */
A2aResponse Client::a2a(const A2aRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return a2aWithOptions(request, runtime);
}

/**
 * @summary 获取Agent_Card
 *
 * @param request AgentCardRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AgentCardResponse
 */
AgentCardResponse Client::agent_cardWithOptions(const AgentCardRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  map<string, string> query = Utils::Utils::query(request.toMap());
  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "agent_card"},
    {"version" , "2026-08-10"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "GET"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "any"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AgentCardResponse>();
}

/**
 * @summary 获取Agent_Card
 *
 * @param request AgentCardRequest
 * @return AgentCardResponse
 */
AgentCardResponse Client::agent_card(const AgentCardRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return agent_cardWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace OssAgent20260810