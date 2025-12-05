#include <darabonba/Core.hpp>
#include <alibabacloud/RdsAi20250507.hpp>
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
using namespace AlibabaCloud::RdsAi20250507::Models;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace RdsAi20250507
{

AlibabaCloud::RdsAi20250507::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "";
  checkConfig(config);
  this->_endpoint = getEndpoint("rdsai", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary 发送对话消息
 *
 * @param tmpReq ChatMessagesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChatMessagesResponse
 */
FutrueGenerator<ChatMessagesResponse> Client::chatMessagesWithSSE(const ChatMessagesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ChatMessagesShrinkRequest request = ChatMessagesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasInputs()) {
    request.setInputsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.inputs(), "Inputs", "json"));
  }

  json query = {};
  if (!!request.hasConversationId()) {
    query["ConversationId"] = request.conversationId();
  }

  if (!!request.hasInputsShrink()) {
    query["Inputs"] = request.inputsShrink();
  }

  if (!!request.hasParentMessageId()) {
    query["ParentMessageId"] = request.parentMessageId();
  }

  if (!!request.hasQuery()) {
    query["Query"] = request.query();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ChatMessages"},
    {"version" , "2025-05-07"},
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
    })).get<ChatMessagesResponse>();
return Darbaonba::FutureGenerator<json>(__retrun);
  }
}

/**
 * @summary 发送对话消息
 *
 * @param tmpReq ChatMessagesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChatMessagesResponse
 */
ChatMessagesResponse Client::chatMessagesWithOptions(const ChatMessagesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ChatMessagesShrinkRequest request = ChatMessagesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasInputs()) {
    request.setInputsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.inputs(), "Inputs", "json"));
  }

  json query = {};
  if (!!request.hasConversationId()) {
    query["ConversationId"] = request.conversationId();
  }

  if (!!request.hasInputsShrink()) {
    query["Inputs"] = request.inputsShrink();
  }

  if (!!request.hasParentMessageId()) {
    query["ParentMessageId"] = request.parentMessageId();
  }

  if (!!request.hasQuery()) {
    query["Query"] = request.query();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ChatMessages"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ChatMessagesResponse>();
}

/**
 * @summary 发送对话消息
 *
 * @param request ChatMessagesRequest
 * @return ChatMessagesResponse
 */
ChatMessagesResponse Client::chatMessages(const ChatMessagesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return chatMessagesWithOptions(request, runtime);
}

/**
 * @summary 停止对话
 *
 * @param request ChatMessagesTaskStopRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChatMessagesTaskStopResponse
 */
ChatMessagesTaskStopResponse Client::chatMessagesTaskStopWithOptions(const ChatMessagesTaskStopRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTaskId()) {
    query["TaskId"] = request.taskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ChatMessagesTaskStop"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ChatMessagesTaskStopResponse>();
}

/**
 * @summary 停止对话
 *
 * @param request ChatMessagesTaskStopRequest
 * @return ChatMessagesTaskStopResponse
 */
ChatMessagesTaskStopResponse Client::chatMessagesTaskStop(const ChatMessagesTaskStopRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return chatMessagesTaskStopWithOptions(request, runtime);
}

/**
 * @summary 创建应用服务实例
 *
 * @param tmpReq CreateAppInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateAppInstanceResponse
 */
CreateAppInstanceResponse Client::createAppInstanceWithOptions(const CreateAppInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateAppInstanceShrinkRequest request = CreateAppInstanceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDBInstanceConfig()) {
    request.setDBInstanceConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.DBInstanceConfig(), "DBInstanceConfig", "json"));
  }

  json query = {};
  if (!!request.hasAppName()) {
    query["AppName"] = request.appName();
  }

  if (!!request.hasAppType()) {
    query["AppType"] = request.appType();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasDBInstanceConfigShrink()) {
    query["DBInstanceConfig"] = request.DBInstanceConfigShrink();
  }

  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.DBInstanceName();
  }

  if (!!request.hasDashboardPassword()) {
    query["DashboardPassword"] = request.dashboardPassword();
  }

  if (!!request.hasDashboardUsername()) {
    query["DashboardUsername"] = request.dashboardUsername();
  }

  if (!!request.hasDatabasePassword()) {
    query["DatabasePassword"] = request.databasePassword();
  }

  if (!!request.hasInstanceClass()) {
    query["InstanceClass"] = request.instanceClass();
  }

  if (!!request.hasPublicEndpointEnabled()) {
    query["PublicEndpointEnabled"] = request.publicEndpointEnabled();
  }

  if (!!request.hasPublicNetworkAccessEnabled()) {
    query["PublicNetworkAccessEnabled"] = request.publicNetworkAccessEnabled();
  }

  if (!!request.hasRAGEnabled()) {
    query["RAGEnabled"] = request.RAGEnabled();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasVSwitchId()) {
    query["VSwitchId"] = request.vSwitchId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateAppInstance"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateAppInstanceResponse>();
}

/**
 * @summary 创建应用服务实例
 *
 * @param request CreateAppInstanceRequest
 * @return CreateAppInstanceResponse
 */
CreateAppInstanceResponse Client::createAppInstance(const CreateAppInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAppInstanceWithOptions(request, runtime);
}

/**
 * @summary 创建自定义agent
 *
 * @param tmpReq CreateCustomAgentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCustomAgentResponse
 */
CreateCustomAgentResponse Client::createCustomAgentWithOptions(const CreateCustomAgentRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateCustomAgentShrinkRequest request = CreateCustomAgentShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTools()) {
    request.setToolsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tools(), "Tools", "json"));
  }

  json query = {};
  if (!!request.hasEnableTools()) {
    query["EnableTools"] = request.enableTools();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasSystemPrompt()) {
    query["SystemPrompt"] = request.systemPrompt();
  }

  if (!!request.hasToolsShrink()) {
    query["Tools"] = request.toolsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateCustomAgent"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCustomAgentResponse>();
}

/**
 * @summary 创建自定义agent
 *
 * @param request CreateCustomAgentRequest
 * @return CreateCustomAgentResponse
 */
CreateCustomAgentResponse Client::createCustomAgent(const CreateCustomAgentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCustomAgentWithOptions(request, runtime);
}

/**
 * @summary 删除应用服务实例
 *
 * @param request DeleteAppInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAppInstanceResponse
 */
DeleteAppInstanceResponse Client::deleteAppInstanceWithOptions(const DeleteAppInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.instanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteAppInstance"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteAppInstanceResponse>();
}

/**
 * @summary 删除应用服务实例
 *
 * @param request DeleteAppInstanceRequest
 * @return DeleteAppInstanceResponse
 */
DeleteAppInstanceResponse Client::deleteAppInstance(const DeleteAppInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAppInstanceWithOptions(request, runtime);
}

/**
 * @summary 删除Custom Agent
 *
 * @param request DeleteCustomAgentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCustomAgentResponse
 */
DeleteCustomAgentResponse Client::deleteCustomAgentWithOptions(const DeleteCustomAgentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustomAgentId()) {
    query["CustomAgentId"] = request.customAgentId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteCustomAgent"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCustomAgentResponse>();
}

/**
 * @summary 删除Custom Agent
 *
 * @param request DeleteCustomAgentRequest
 * @return DeleteCustomAgentResponse
 */
DeleteCustomAgentResponse Client::deleteCustomAgent(const DeleteCustomAgentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCustomAgentWithOptions(request, runtime);
}

/**
 * @summary 查询应用服务详情
 *
 * @param request DescribeAppInstanceAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAppInstanceAttributeResponse
 */
DescribeAppInstanceAttributeResponse Client::describeAppInstanceAttributeWithOptions(const DescribeAppInstanceAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.instanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAppInstanceAttribute"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAppInstanceAttributeResponse>();
}

/**
 * @summary 查询应用服务详情
 *
 * @param request DescribeAppInstanceAttributeRequest
 * @return DescribeAppInstanceAttributeResponse
 */
DescribeAppInstanceAttributeResponse Client::describeAppInstanceAttribute(const DescribeAppInstanceAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAppInstanceAttributeWithOptions(request, runtime);
}

/**
 * @summary 查询应用服务列表
 *
 * @param request DescribeAppInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAppInstancesResponse
 */
DescribeAppInstancesResponse Client::describeAppInstancesWithOptions(const DescribeAppInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppType()) {
    query["AppType"] = request.appType();
  }

  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.DBInstanceName();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeAppInstances"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeAppInstancesResponse>();
}

/**
 * @summary 查询应用服务列表
 *
 * @param request DescribeAppInstancesRequest
 * @return DescribeAppInstancesResponse
 */
DescribeAppInstancesResponse Client::describeAppInstances(const DescribeAppInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAppInstancesWithOptions(request, runtime);
}

/**
 * @summary 查询事件信息列表
 *
 * @param request DescribeEventsListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeEventsListResponse
 */
DescribeEventsListResponse Client::describeEventsListWithOptions(const DescribeEventsListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.endTime();
  }

  if (!!request.hasInstanceIdList()) {
    query["InstanceIdList"] = request.instanceIdList();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.startTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeEventsList"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeEventsListResponse>();
}

/**
 * @summary 查询事件信息列表
 *
 * @param request DescribeEventsListRequest
 * @return DescribeEventsListResponse
 */
DescribeEventsListResponse Client::describeEventsList(const DescribeEventsListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeEventsListWithOptions(request, runtime);
}

/**
 * @summary 查看实例认证信息
 *
 * @param request DescribeInstanceAuthInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstanceAuthInfoResponse
 */
DescribeInstanceAuthInfoResponse Client::describeInstanceAuthInfoWithOptions(const DescribeInstanceAuthInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.instanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInstanceAuthInfo"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInstanceAuthInfoResponse>();
}

/**
 * @summary 查看实例认证信息
 *
 * @param request DescribeInstanceAuthInfoRequest
 * @return DescribeInstanceAuthInfoResponse
 */
DescribeInstanceAuthInfoResponse Client::describeInstanceAuthInfo(const DescribeInstanceAuthInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstanceAuthInfoWithOptions(request, runtime);
}

/**
 * @summary 查看服务连接信息
 *
 * @param request DescribeInstanceEndpointsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstanceEndpointsResponse
 */
DescribeInstanceEndpointsResponse Client::describeInstanceEndpointsWithOptions(const DescribeInstanceEndpointsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.instanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInstanceEndpoints"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInstanceEndpointsResponse>();
}

/**
 * @summary 查看服务连接信息
 *
 * @param request DescribeInstanceEndpointsRequest
 * @return DescribeInstanceEndpointsResponse
 */
DescribeInstanceEndpointsResponse Client::describeInstanceEndpoints(const DescribeInstanceEndpointsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstanceEndpointsWithOptions(request, runtime);
}

/**
 * @summary 查询服务白名单
 *
 * @param request DescribeInstanceIpWhitelistRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstanceIpWhitelistResponse
 */
DescribeInstanceIpWhitelistResponse Client::describeInstanceIpWhitelistWithOptions(const DescribeInstanceIpWhitelistRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.instanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInstanceIpWhitelist"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInstanceIpWhitelistResponse>();
}

/**
 * @summary 查询服务白名单
 *
 * @param request DescribeInstanceIpWhitelistRequest
 * @return DescribeInstanceIpWhitelistResponse
 */
DescribeInstanceIpWhitelistResponse Client::describeInstanceIpWhitelist(const DescribeInstanceIpWhitelistRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstanceIpWhitelistWithOptions(request, runtime);
}

/**
 * @summary 查看实例RAG配置
 *
 * @param request DescribeInstanceRAGConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstanceRAGConfigResponse
 */
DescribeInstanceRAGConfigResponse Client::describeInstanceRAGConfigWithOptions(const DescribeInstanceRAGConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.instanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInstanceRAGConfig"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInstanceRAGConfigResponse>();
}

/**
 * @summary 查看实例RAG配置
 *
 * @param request DescribeInstanceRAGConfigRequest
 * @return DescribeInstanceRAGConfigResponse
 */
DescribeInstanceRAGConfigResponse Client::describeInstanceRAGConfig(const DescribeInstanceRAGConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstanceRAGConfigWithOptions(request, runtime);
}

/**
 * @summary 查看实例SSL配置
 *
 * @param request DescribeInstanceSSLRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstanceSSLResponse
 */
DescribeInstanceSSLResponse Client::describeInstanceSSLWithOptions(const DescribeInstanceSSLRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.instanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInstanceSSL"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInstanceSSLResponse>();
}

/**
 * @summary 查看实例SSL配置
 *
 * @param request DescribeInstanceSSLRequest
 * @return DescribeInstanceSSLResponse
 */
DescribeInstanceSSLResponse Client::describeInstanceSSL(const DescribeInstanceSSLRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstanceSSLWithOptions(request, runtime);
}

/**
 * @summary 查看实例存储配置
 *
 * @param request DescribeInstanceStorageConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstanceStorageConfigResponse
 */
DescribeInstanceStorageConfigResponse Client::describeInstanceStorageConfigWithOptions(const DescribeInstanceStorageConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.instanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeInstanceStorageConfig"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeInstanceStorageConfigResponse>();
}

/**
 * @summary 查看实例存储配置
 *
 * @param request DescribeInstanceStorageConfigRequest
 * @return DescribeInstanceStorageConfigResponse
 */
DescribeInstanceStorageConfigResponse Client::describeInstanceStorageConfig(const DescribeInstanceStorageConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstanceStorageConfigWithOptions(request, runtime);
}

/**
 * @summary 获取会话列表
 *
 * @param request GetConversationsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetConversationsResponse
 */
GetConversationsResponse Client::getConversationsWithOptions(const GetConversationsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLastId()) {
    query["LastId"] = request.lastId();
  }

  if (!!request.hasLimit()) {
    query["Limit"] = request.limit();
  }

  if (!!request.hasPinned()) {
    query["Pinned"] = request.pinned();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.sortBy();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetConversations"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetConversationsResponse>();
}

/**
 * @summary 获取会话列表
 *
 * @param request GetConversationsRequest
 * @return GetConversationsResponse
 */
GetConversationsResponse Client::getConversations(const GetConversationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getConversationsWithOptions(request, runtime);
}

/**
 * @summary 查询CustomAgent
 *
 * @param request GetCustomAgentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCustomAgentResponse
 */
GetCustomAgentResponse Client::getCustomAgentWithOptions(const GetCustomAgentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustomAgentId()) {
    query["CustomAgentId"] = request.customAgentId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetCustomAgent"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCustomAgentResponse>();
}

/**
 * @summary 查询CustomAgent
 *
 * @param request GetCustomAgentRequest
 * @return GetCustomAgentResponse
 */
GetCustomAgentResponse Client::getCustomAgent(const GetCustomAgentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCustomAgentWithOptions(request, runtime);
}

/**
 * @summary 获取会话历史消息
 *
 * @param request GetMessagesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMessagesResponse
 */
GetMessagesResponse Client::getMessagesWithOptions(const GetMessagesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConversationId()) {
    query["ConversationId"] = request.conversationId();
  }

  if (!!request.hasFirstId()) {
    query["FirstId"] = request.firstId();
  }

  if (!!request.hasLimit()) {
    query["Limit"] = request.limit();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetMessages"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMessagesResponse>();
}

/**
 * @summary 获取会话历史消息
 *
 * @param request GetMessagesRequest
 * @return GetMessagesResponse
 */
GetMessagesResponse Client::getMessages(const GetMessagesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMessagesWithOptions(request, runtime);
}

/**
 * @summary 获取Custom Agent列表
 *
 * @param request ListCustomAgentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCustomAgentResponse
 */
ListCustomAgentResponse Client::listCustomAgentWithOptions(const ListCustomAgentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.pageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListCustomAgent"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCustomAgentResponse>();
}

/**
 * @summary 获取Custom Agent列表
 *
 * @param request ListCustomAgentRequest
 * @return ListCustomAgentResponse
 */
ListCustomAgentResponse Client::listCustomAgent(const ListCustomAgentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCustomAgentWithOptions(request, runtime);
}

/**
 * @summary 获取专属Agent可用工具
 *
 * @param request ListCustomAgentToolsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCustomAgentToolsResponse
 */
ListCustomAgentToolsResponse Client::listCustomAgentToolsWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "ListCustomAgentTools"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCustomAgentToolsResponse>();
}

/**
 * @summary 获取专属Agent可用工具
 *
 * @return ListCustomAgentToolsResponse
 */
ListCustomAgentToolsResponse Client::listCustomAgentTools() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCustomAgentToolsWithOptions(runtime);
}

/**
 * @summary 修改Supabase Auth相关配置
 *
 * @param tmpReq ModifyInstanceAuthConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyInstanceAuthConfigResponse
 */
ModifyInstanceAuthConfigResponse Client::modifyInstanceAuthConfigWithOptions(const ModifyInstanceAuthConfigRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ModifyInstanceAuthConfigShrinkRequest request = ModifyInstanceAuthConfigShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasConfigList()) {
    request.setConfigListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.configList(), "ConfigList", "json"));
  }

  json query = {};
  if (!!request.hasConfigListShrink()) {
    query["ConfigList"] = request.configListShrink();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.instanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyInstanceAuthConfig"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyInstanceAuthConfigResponse>();
}

/**
 * @summary 修改Supabase Auth相关配置
 *
 * @param request ModifyInstanceAuthConfigRequest
 * @return ModifyInstanceAuthConfigResponse
 */
ModifyInstanceAuthConfigResponse Client::modifyInstanceAuthConfig(const ModifyInstanceAuthConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyInstanceAuthConfigWithOptions(request, runtime);
}

/**
 * @summary 修改实例RAG配置
 *
 * @param request ModifyInstanceConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyInstanceConfigResponse
 */
ModifyInstanceConfigResponse Client::modifyInstanceConfigWithOptions(const ModifyInstanceConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasConfigName()) {
    query["ConfigName"] = request.configName();
  }

  if (!!request.hasConfigValue()) {
    query["ConfigValue"] = request.configValue();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.instanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyInstanceConfig"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyInstanceConfigResponse>();
}

/**
 * @summary 修改实例RAG配置
 *
 * @param request ModifyInstanceConfigRequest
 * @return ModifyInstanceConfigResponse
 */
ModifyInstanceConfigResponse Client::modifyInstanceConfig(const ModifyInstanceConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyInstanceConfigWithOptions(request, runtime);
}

/**
 * @summary 修改服务白名单
 *
 * @param request ModifyInstanceIpWhitelistRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyInstanceIpWhitelistResponse
 */
ModifyInstanceIpWhitelistResponse Client::modifyInstanceIpWhitelistWithOptions(const ModifyInstanceIpWhitelistRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.groupName();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.instanceName();
  }

  if (!!request.hasIpWhitelist()) {
    query["IpWhitelist"] = request.ipWhitelist();
  }

  if (!!request.hasModifyMode()) {
    query["ModifyMode"] = request.modifyMode();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyInstanceIpWhitelist"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyInstanceIpWhitelistResponse>();
}

/**
 * @summary 修改服务白名单
 *
 * @param request ModifyInstanceIpWhitelistRequest
 * @return ModifyInstanceIpWhitelistResponse
 */
ModifyInstanceIpWhitelistResponse Client::modifyInstanceIpWhitelist(const ModifyInstanceIpWhitelistRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyInstanceIpWhitelistWithOptions(request, runtime);
}

/**
 * @summary 修改实例RAG配置
 *
 * @param tmpReq ModifyInstanceRAGConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyInstanceRAGConfigResponse
 */
ModifyInstanceRAGConfigResponse Client::modifyInstanceRAGConfigWithOptions(const ModifyInstanceRAGConfigRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ModifyInstanceRAGConfigShrinkRequest request = ModifyInstanceRAGConfigShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasConfigList()) {
    request.setConfigListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.configList(), "ConfigList", "json"));
  }

  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasConfigListShrink()) {
    query["ConfigList"] = request.configListShrink();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.instanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyInstanceRAGConfig"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyInstanceRAGConfigResponse>();
}

/**
 * @summary 修改实例RAG配置
 *
 * @param request ModifyInstanceRAGConfigRequest
 * @return ModifyInstanceRAGConfigResponse
 */
ModifyInstanceRAGConfigResponse Client::modifyInstanceRAGConfig(const ModifyInstanceRAGConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyInstanceRAGConfigWithOptions(request, runtime);
}

/**
 * @summary 修改实例SSL配置
 *
 * @param request ModifyInstanceSSLRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyInstanceSSLResponse
 */
ModifyInstanceSSLResponse Client::modifyInstanceSSLWithOptions(const ModifyInstanceSSLRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCAType()) {
    query["CAType"] = request.CAType();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.instanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasSSLEnabled()) {
    query["SSLEnabled"] = request.SSLEnabled();
  }

  if (!!request.hasServerCert()) {
    query["ServerCert"] = request.serverCert();
  }

  if (!!request.hasServerKey()) {
    query["ServerKey"] = request.serverKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyInstanceSSL"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyInstanceSSLResponse>();
}

/**
 * @summary 修改实例SSL配置
 *
 * @param request ModifyInstanceSSLRequest
 * @return ModifyInstanceSSLResponse
 */
ModifyInstanceSSLResponse Client::modifyInstanceSSL(const ModifyInstanceSSLRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyInstanceSSLWithOptions(request, runtime);
}

/**
 * @summary 修改实例存储配置
 *
 * @param tmpReq ModifyInstanceStorageConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyInstanceStorageConfigResponse
 */
ModifyInstanceStorageConfigResponse Client::modifyInstanceStorageConfigWithOptions(const ModifyInstanceStorageConfigRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ModifyInstanceStorageConfigShrinkRequest request = ModifyInstanceStorageConfigShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasConfigList()) {
    request.setConfigListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.configList(), "ConfigList", "json"));
  }

  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasConfigListShrink()) {
    query["ConfigList"] = request.configListShrink();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.instanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyInstanceStorageConfig"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyInstanceStorageConfigResponse>();
}

/**
 * @summary 修改实例存储配置
 *
 * @param request ModifyInstanceStorageConfigRequest
 * @return ModifyInstanceStorageConfigResponse
 */
ModifyInstanceStorageConfigResponse Client::modifyInstanceStorageConfig(const ModifyInstanceStorageConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyInstanceStorageConfigWithOptions(request, runtime);
}

/**
 * @summary 消息终端用户反馈、点赞/点踩
 *
 * @param request ModifyMessagesFeedbacksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyMessagesFeedbacksResponse
 */
ModifyMessagesFeedbacksResponse Client::modifyMessagesFeedbacksWithOptions(const ModifyMessagesFeedbacksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContent()) {
    query["Content"] = request.content();
  }

  if (!!request.hasMessageId()) {
    query["MessageId"] = request.messageId();
  }

  if (!!request.hasRating()) {
    query["Rating"] = request.rating();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyMessagesFeedbacks"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyMessagesFeedbacksResponse>();
}

/**
 * @summary 消息终端用户反馈、点赞/点踩
 *
 * @param request ModifyMessagesFeedbacksRequest
 * @return ModifyMessagesFeedbacksResponse
 */
ModifyMessagesFeedbacksResponse Client::modifyMessagesFeedbacks(const ModifyMessagesFeedbacksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyMessagesFeedbacksWithOptions(request, runtime);
}

/**
 * @summary 重置实例密码
 *
 * @param request ResetInstancePasswordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResetInstancePasswordResponse
 */
ResetInstancePasswordResponse Client::resetInstancePasswordWithOptions(const ResetInstancePasswordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDashboardPassword()) {
    query["DashboardPassword"] = request.dashboardPassword();
  }

  if (!!request.hasDatabasePassword()) {
    query["DatabasePassword"] = request.databasePassword();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.instanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ResetInstancePassword"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResetInstancePasswordResponse>();
}

/**
 * @summary 重置实例密码
 *
 * @param request ResetInstancePasswordRequest
 * @return ResetInstancePasswordResponse
 */
ResetInstancePasswordResponse Client::resetInstancePassword(const ResetInstancePasswordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resetInstancePasswordWithOptions(request, runtime);
}

/**
 * @summary 重启实例
 *
 * @param request RestartInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RestartInstanceResponse
 */
RestartInstanceResponse Client::restartInstanceWithOptions(const RestartInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.instanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RestartInstance"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RestartInstanceResponse>();
}

/**
 * @summary 重启实例
 *
 * @param request RestartInstanceRequest
 * @return RestartInstanceResponse
 */
RestartInstanceResponse Client::restartInstance(const RestartInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return restartInstanceWithOptions(request, runtime);
}

/**
 * @summary 启动实例
 *
 * @param request StartInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartInstanceResponse
 */
StartInstanceResponse Client::startInstanceWithOptions(const StartInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.instanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartInstance"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartInstanceResponse>();
}

/**
 * @summary 启动实例
 *
 * @param request StartInstanceRequest
 * @return StartInstanceResponse
 */
StartInstanceResponse Client::startInstance(const StartInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startInstanceWithOptions(request, runtime);
}

/**
 * @summary 暂停实例
 *
 * @param request StopInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopInstanceResponse
 */
StopInstanceResponse Client::stopInstanceWithOptions(const StopInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.instanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StopInstance"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StopInstanceResponse>();
}

/**
 * @summary 暂停实例
 *
 * @param request StopInstanceRequest
 * @return StopInstanceResponse
 */
StopInstanceResponse Client::stopInstance(const StopInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopInstanceWithOptions(request, runtime);
}

/**
 * @summary 更新Custom Agent
 *
 * @param tmpReq UpdateCustomAgentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateCustomAgentResponse
 */
UpdateCustomAgentResponse Client::updateCustomAgentWithOptions(const UpdateCustomAgentRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateCustomAgentShrinkRequest request = UpdateCustomAgentShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTools()) {
    request.setToolsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.tools(), "Tools", "json"));
  }

  json query = {};
  if (!!request.hasCustomAgentId()) {
    query["CustomAgentId"] = request.customAgentId();
  }

  if (!!request.hasEnableTools()) {
    query["EnableTools"] = request.enableTools();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasSystemPrompt()) {
    query["SystemPrompt"] = request.systemPrompt();
  }

  if (!!request.hasToolsShrink()) {
    query["Tools"] = request.toolsShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateCustomAgent"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateCustomAgentResponse>();
}

/**
 * @summary 更新Custom Agent
 *
 * @param request UpdateCustomAgentRequest
 * @return UpdateCustomAgentResponse
 */
UpdateCustomAgentResponse Client::updateCustomAgent(const UpdateCustomAgentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateCustomAgentWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace RdsAi20250507