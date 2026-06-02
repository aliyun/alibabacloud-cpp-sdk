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
 * @summary 创建连接流
 *
 * @param request CreateFlowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateFlowResponse
 */
CreateFlowResponse Client::createFlowWithOptions(const CreateFlowRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFlowDesc()) {
    query["FlowDesc"] = request.getFlowDesc();
  }

  if (!!request.hasFlowId()) {
    query["FlowId"] = request.getFlowId();
  }

  if (!!request.hasFlowName()) {
    query["FlowName"] = request.getFlowName();
  }

  if (!!request.hasFlowTemplate()) {
    query["FlowTemplate"] = request.getFlowTemplate();
  }

  if (!!request.hasLaunchStatus()) {
    query["LaunchStatus"] = request.getLaunchStatus();
  }

  if (!!request.hasParameters()) {
    query["Parameters"] = request.getParameters();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateFlow"},
    {"version" , "2023-09-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateFlowResponse>();
}

/**
 * @summary 创建连接流
 *
 * @param request CreateFlowRequest
 * @return CreateFlowResponse
 */
CreateFlowResponse Client::createFlow(const CreateFlowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createFlowWithOptions(request, runtime);
}

/**
 * @summary 创建用户鉴权凭证
 *
 * @param request CreateUserAuthConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateUserAuthConfigResponse
 */
CreateUserAuthConfigResponse Client::createUserAuthConfigWithOptions(const CreateUserAuthConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthConfig()) {
    query["AuthConfig"] = request.getAuthConfig();
  }

  if (!!request.hasAuthConfigName()) {
    query["AuthConfigName"] = request.getAuthConfigName();
  }

  if (!!request.hasAuthType()) {
    query["AuthType"] = request.getAuthType();
  }

  if (!!request.hasConnectorId()) {
    query["ConnectorId"] = request.getConnectorId();
  }

  if (!!request.hasConnectorVersion()) {
    query["ConnectorVersion"] = request.getConnectorVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateUserAuthConfig"},
    {"version" , "2023-09-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateUserAuthConfigResponse>();
}

/**
 * @summary 创建用户鉴权凭证
 *
 * @param request CreateUserAuthConfigRequest
 * @return CreateUserAuthConfigResponse
 */
CreateUserAuthConfigResponse Client::createUserAuthConfig(const CreateUserAuthConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createUserAuthConfigWithOptions(request, runtime);
}

/**
 * @summary 删除连接流
 *
 * @param request DeleteFlowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteFlowResponse
 */
DeleteFlowResponse Client::deleteFlowWithOptions(const DeleteFlowRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFlowId()) {
    query["FlowId"] = request.getFlowId();
  }

  if (!!request.hasFlowVersion()) {
    query["FlowVersion"] = request.getFlowVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteFlow"},
    {"version" , "2023-09-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteFlowResponse>();
}

/**
 * @summary 删除连接流
 *
 * @param request DeleteFlowRequest
 * @return DeleteFlowResponse
 */
DeleteFlowResponse Client::deleteFlow(const DeleteFlowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteFlowWithOptions(request, runtime);
}

/**
 * @summary 删除用户鉴权凭证
 *
 * @param request DeleteUserAuthConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteUserAuthConfigResponse
 */
DeleteUserAuthConfigResponse Client::deleteUserAuthConfigWithOptions(const DeleteUserAuthConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthConfigId()) {
    query["AuthConfigId"] = request.getAuthConfigId();
  }

  if (!!request.hasConnectorId()) {
    query["ConnectorId"] = request.getConnectorId();
  }

  if (!!request.hasConnectorVersion()) {
    query["ConnectorVersion"] = request.getConnectorVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteUserAuthConfig"},
    {"version" , "2023-09-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteUserAuthConfigResponse>();
}

/**
 * @summary 删除用户鉴权凭证
 *
 * @param request DeleteUserAuthConfigRequest
 * @return DeleteUserAuthConfigResponse
 */
DeleteUserAuthConfigResponse Client::deleteUserAuthConfig(const DeleteUserAuthConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteUserAuthConfigWithOptions(request, runtime);
}

/**
 * @summary 禁用连接流
 *
 * @param request DisableFlowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableFlowResponse
 */
DisableFlowResponse Client::disableFlowWithOptions(const DisableFlowRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFlowId()) {
    query["FlowId"] = request.getFlowId();
  }

  if (!!request.hasFlowVersion()) {
    query["FlowVersion"] = request.getFlowVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DisableFlow"},
    {"version" , "2023-09-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableFlowResponse>();
}

/**
 * @summary 禁用连接流
 *
 * @param request DisableFlowRequest
 * @return DisableFlowResponse
 */
DisableFlowResponse Client::disableFlow(const DisableFlowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableFlowWithOptions(request, runtime);
}

/**
 * @summary 启用连接流
 *
 * @param request EnableFlowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableFlowResponse
 */
EnableFlowResponse Client::enableFlowWithOptions(const EnableFlowRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFlowId()) {
    query["FlowId"] = request.getFlowId();
  }

  if (!!request.hasFlowVersion()) {
    query["FlowVersion"] = request.getFlowVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableFlow"},
    {"version" , "2023-09-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableFlowResponse>();
}

/**
 * @summary 启用连接流
 *
 * @param request EnableFlowRequest
 * @return EnableFlowResponse
 */
EnableFlowResponse Client::enableFlow(const EnableFlowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableFlowWithOptions(request, runtime);
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
 * @summary 获取连接流详情
 *
 * @param request GetFlowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetFlowResponse
 */
GetFlowResponse Client::getFlowWithOptions(const GetFlowRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFlowId()) {
    query["FlowId"] = request.getFlowId();
  }

  if (!!request.hasFlowVersion()) {
    query["FlowVersion"] = request.getFlowVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetFlow"},
    {"version" , "2023-09-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetFlowResponse>();
}

/**
 * @summary 获取连接流详情
 *
 * @param request GetFlowRequest
 * @return GetFlowResponse
 */
GetFlowResponse Client::getFlow(const GetFlowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getFlowWithOptions(request, runtime);
}

/**
 * @summary 获取用户鉴权凭证详情
 *
 * @param request GetUserAuthConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetUserAuthConfigResponse
 */
GetUserAuthConfigResponse Client::getUserAuthConfigWithOptions(const GetUserAuthConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthConfigId()) {
    query["AuthConfigId"] = request.getAuthConfigId();
  }

  if (!!request.hasConnectorId()) {
    query["ConnectorId"] = request.getConnectorId();
  }

  if (!!request.hasConnectorVersion()) {
    query["ConnectorVersion"] = request.getConnectorVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetUserAuthConfig"},
    {"version" , "2023-09-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetUserAuthConfigResponse>();
}

/**
 * @summary 获取用户鉴权凭证详情
 *
 * @param request GetUserAuthConfigRequest
 * @return GetUserAuthConfigResponse
 */
GetUserAuthConfigResponse Client::getUserAuthConfig(const GetUserAuthConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getUserAuthConfigWithOptions(request, runtime);
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

/**
 * @summary 发布连接流
 *
 * @param request LaunchFlowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return LaunchFlowResponse
 */
LaunchFlowResponse Client::launchFlowWithOptions(const LaunchFlowRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFlowDesc()) {
    query["FlowDesc"] = request.getFlowDesc();
  }

  if (!!request.hasFlowId()) {
    query["FlowId"] = request.getFlowId();
  }

  if (!!request.hasFlowName()) {
    query["FlowName"] = request.getFlowName();
  }

  if (!!request.hasFlowTemplate()) {
    query["FlowTemplate"] = request.getFlowTemplate();
  }

  if (!!request.hasFlowVersion()) {
    query["FlowVersion"] = request.getFlowVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "LaunchFlow"},
    {"version" , "2023-09-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<LaunchFlowResponse>();
}

/**
 * @summary 发布连接流
 *
 * @param request LaunchFlowRequest
 * @return LaunchFlowResponse
 */
LaunchFlowResponse Client::launchFlow(const LaunchFlowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return launchFlowWithOptions(request, runtime);
}

/**
 * @summary 获取用户鉴权凭证列表
 *
 * @param request ListUserAuthConfigsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListUserAuthConfigsResponse
 */
ListUserAuthConfigsResponse Client::listUserAuthConfigsWithOptions(const ListUserAuthConfigsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthType()) {
    query["AuthType"] = request.getAuthType();
  }

  if (!!request.hasConnectorId()) {
    query["ConnectorId"] = request.getConnectorId();
  }

  if (!!request.hasConnectorVersion()) {
    query["ConnectorVersion"] = request.getConnectorVersion();
  }

  if (!!request.hasFilter()) {
    query["Filter"] = request.getFilter();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListUserAuthConfigs"},
    {"version" , "2023-09-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListUserAuthConfigsResponse>();
}

/**
 * @summary 获取用户鉴权凭证列表
 *
 * @param request ListUserAuthConfigsRequest
 * @return ListUserAuthConfigsResponse
 */
ListUserAuthConfigsResponse Client::listUserAuthConfigs(const ListUserAuthConfigsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listUserAuthConfigsWithOptions(request, runtime);
}

/**
 * @summary 更新连接流
 *
 * @param request UpdateFlowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateFlowResponse
 */
UpdateFlowResponse Client::updateFlowWithOptions(const UpdateFlowRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEnabled()) {
    query["Enabled"] = request.getEnabled();
  }

  if (!!request.hasFlowDesc()) {
    query["FlowDesc"] = request.getFlowDesc();
  }

  if (!!request.hasFlowId()) {
    query["FlowId"] = request.getFlowId();
  }

  if (!!request.hasFlowName()) {
    query["FlowName"] = request.getFlowName();
  }

  if (!!request.hasFlowTemplate()) {
    query["FlowTemplate"] = request.getFlowTemplate();
  }

  if (!!request.hasFlowVersion()) {
    query["FlowVersion"] = request.getFlowVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateFlow"},
    {"version" , "2023-09-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateFlowResponse>();
}

/**
 * @summary 更新连接流
 *
 * @param request UpdateFlowRequest
 * @return UpdateFlowResponse
 */
UpdateFlowResponse Client::updateFlow(const UpdateFlowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateFlowWithOptions(request, runtime);
}

/**
 * @summary 编辑用户鉴权凭证
 *
 * @param request UpdateUserAuthConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateUserAuthConfigResponse
 */
UpdateUserAuthConfigResponse Client::updateUserAuthConfigWithOptions(const UpdateUserAuthConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthConfig()) {
    query["AuthConfig"] = request.getAuthConfig();
  }

  if (!!request.hasAuthConfigId()) {
    query["AuthConfigId"] = request.getAuthConfigId();
  }

  if (!!request.hasAuthConfigName()) {
    query["AuthConfigName"] = request.getAuthConfigName();
  }

  if (!!request.hasConnectorId()) {
    query["ConnectorId"] = request.getConnectorId();
  }

  if (!!request.hasConnectorVersion()) {
    query["ConnectorVersion"] = request.getConnectorVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateUserAuthConfig"},
    {"version" , "2023-09-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateUserAuthConfigResponse>();
}

/**
 * @summary 编辑用户鉴权凭证
 *
 * @param request UpdateUserAuthConfigRequest
 * @return UpdateUserAuthConfigResponse
 */
UpdateUserAuthConfigResponse Client::updateUserAuthConfig(const UpdateUserAuthConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateUserAuthConfigWithOptions(request, runtime);
}

/**
 * @summary 下线连接流
 *
 * @param request WithdrawFlowRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return WithdrawFlowResponse
 */
WithdrawFlowResponse Client::withdrawFlowWithOptions(const WithdrawFlowRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasFlowId()) {
    query["FlowId"] = request.getFlowId();
  }

  if (!!request.hasFlowVersion()) {
    query["FlowVersion"] = request.getFlowVersion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "WithdrawFlow"},
    {"version" , "2023-09-04"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<WithdrawFlowResponse>();
}

/**
 * @summary 下线连接流
 *
 * @param request WithdrawFlowRequest
 * @return WithdrawFlowResponse
 */
WithdrawFlowResponse Client::withdrawFlow(const WithdrawFlowRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return withdrawFlowWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Appflow20230904