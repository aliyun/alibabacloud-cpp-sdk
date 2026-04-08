#include <darabonba/Core.hpp>
#include <alibabacloud/Appflow20230904.hpp>
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
using namespace AlibabaCloud::Appflow20230904::Models;
namespace AlibabaCloud
{
namespace Appflow20230904
{

AlibabaCloud::Appflow20230904::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("appflow", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Generate Login Session Token
 *
 * @param request GenerateUserSessionTokenRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GenerateUserSessionTokenResponse
 */
GenerateUserSessionTokenResponse Client::generateUserSessionTokenWithOptions(const GenerateUserSessionTokenRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasChatbotId()) {
    query["ChatbotId"] = request.getChatbotId();
  }

  if (!!request.hasExpireSecond()) {
    query["ExpireSecond"] = request.getExpireSecond();
  }

  if (!!request.hasExtraInfo()) {
    query["ExtraInfo"] = request.getExtraInfo();
  }

  if (!!request.hasIntegrateId()) {
    query["IntegrateId"] = request.getIntegrateId();
  }

  if (!!request.hasUserAvatar()) {
    query["UserAvatar"] = request.getUserAvatar();
  }

  if (!!request.hasUserId()) {
    query["UserId"] = request.getUserId();
  }

  if (!!request.hasUserName()) {
    query["UserName"] = request.getUserName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GenerateUserSessionToken"},
    {"version" , "2023-09-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GenerateUserSessionTokenResponse>();
}

/**
 * @summary Generate Login Session Token
 *
 * @param request GenerateUserSessionTokenRequest
 * @return GenerateUserSessionTokenResponse
 */
GenerateUserSessionTokenResponse Client::generateUserSessionToken(const GenerateUserSessionTokenRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return generateUserSessionTokenWithOptions(request, runtime);
}

/**
 * @summary 运行连接器的执行动作
 *
 * @param tmpReq InvokeActionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return InvokeActionResponse
 */
FutureGenerator<InvokeActionResponse> Client::invokeActionWithSSE(const InvokeActionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  InvokeActionShrinkRequest request = InvokeActionShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAuthConfig()) {
    request.setAuthConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAuthConfig(), "AuthConfig", "json"));
  }

  if (!!tmpReq.hasBody()) {
    request.setBodyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBody(), "Body", "json"));
  }

  if (!!tmpReq.hasHeaders()) {
    request.setHeadersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getHeaders(), "Headers", "json"));
  }

  if (!!tmpReq.hasPath()) {
    request.setPathShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPath(), "Path", "json"));
  }

  if (!!tmpReq.hasQuery()) {
    request.setQueryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getQuery(), "Query", "json"));
  }

  json query = {};
  if (!!request.hasActionId()) {
    query["ActionId"] = request.getActionId();
  }

  if (!!request.hasActionVersion()) {
    query["ActionVersion"] = request.getActionVersion();
  }

  if (!!request.hasAuthConfigShrink()) {
    query["AuthConfig"] = request.getAuthConfigShrink();
  }

  if (!!request.hasBodyShrink()) {
    query["Body"] = request.getBodyShrink();
  }

  if (!!request.hasConnectorId()) {
    query["ConnectorId"] = request.getConnectorId();
  }

  if (!!request.hasConnectorVersion()) {
    query["ConnectorVersion"] = request.getConnectorVersion();
  }

  if (!!request.hasHeadersShrink()) {
    query["Headers"] = request.getHeadersShrink();
  }

  if (!!request.hasPathShrink()) {
    query["Path"] = request.getPathShrink();
  }

  if (!!request.hasQueryShrink()) {
    query["Query"] = request.getQueryShrink();
  }

  if (!!request.hasStream()) {
    query["Stream"] = request.getStream();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "InvokeAction"},
    {"version" , "2023-09-04"},
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
      })).get<InvokeActionResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
    }

  }
}

/**
 * @summary 运行连接器的执行动作
 *
 * @param tmpReq InvokeActionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return InvokeActionResponse
 */
InvokeActionResponse Client::invokeActionWithOptions(const InvokeActionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  InvokeActionShrinkRequest request = InvokeActionShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAuthConfig()) {
    request.setAuthConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAuthConfig(), "AuthConfig", "json"));
  }

  if (!!tmpReq.hasBody()) {
    request.setBodyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBody(), "Body", "json"));
  }

  if (!!tmpReq.hasHeaders()) {
    request.setHeadersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getHeaders(), "Headers", "json"));
  }

  if (!!tmpReq.hasPath()) {
    request.setPathShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getPath(), "Path", "json"));
  }

  if (!!tmpReq.hasQuery()) {
    request.setQueryShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getQuery(), "Query", "json"));
  }

  json query = {};
  if (!!request.hasActionId()) {
    query["ActionId"] = request.getActionId();
  }

  if (!!request.hasActionVersion()) {
    query["ActionVersion"] = request.getActionVersion();
  }

  if (!!request.hasAuthConfigShrink()) {
    query["AuthConfig"] = request.getAuthConfigShrink();
  }

  if (!!request.hasBodyShrink()) {
    query["Body"] = request.getBodyShrink();
  }

  if (!!request.hasConnectorId()) {
    query["ConnectorId"] = request.getConnectorId();
  }

  if (!!request.hasConnectorVersion()) {
    query["ConnectorVersion"] = request.getConnectorVersion();
  }

  if (!!request.hasHeadersShrink()) {
    query["Headers"] = request.getHeadersShrink();
  }

  if (!!request.hasPathShrink()) {
    query["Path"] = request.getPathShrink();
  }

  if (!!request.hasQueryShrink()) {
    query["Query"] = request.getQueryShrink();
  }

  if (!!request.hasStream()) {
    query["Stream"] = request.getStream();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "InvokeAction"},
    {"version" , "2023-09-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InvokeActionResponse>();
}

/**
 * @summary 运行连接器的执行动作
 *
 * @param request InvokeActionRequest
 * @return InvokeActionResponse
 */
InvokeActionResponse Client::invokeAction(const InvokeActionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return invokeActionWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Appflow20230904