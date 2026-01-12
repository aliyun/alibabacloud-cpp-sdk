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
 * @summary Sends chat messages.
 *
 * @param tmpReq ChatMessagesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChatMessagesResponse
 */
FutureGenerator<ChatMessagesResponse> Client::chatMessagesWithSSE(const ChatMessagesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ChatMessagesShrinkRequest request = ChatMessagesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasInputs()) {
    request.setInputsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getInputs(), "Inputs", "json"));
  }

  json query = {};
  if (!!request.hasConversationId()) {
    query["ConversationId"] = request.getConversationId();
  }

  if (!!request.hasInputsShrink()) {
    query["Inputs"] = request.getInputsShrink();
  }

  if (!!request.hasParentMessageId()) {
    query["ParentMessageId"] = request.getParentMessageId();
  }

  if (!!request.hasQuery()) {
    query["Query"] = request.getQuery();
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
  FutureGenerator<SSEResponse> sseResp = callSSEApi(params, req, runtime);
  for (SSEResponse resp : sseResp) {
    json data = json(json::parse(resp.getEvent().getData()));
json     __retrun = json(json({
      {"statusCode" , resp.getStatusCode()},
      {"headers" , resp.getHeaders()},
      {"body" , Darabonba::Core::merge(data,
          {"RequestId" , resp.getEvent().getId()},
          {"Message" , resp.getEvent().getEvent()}
      )}
    })).get<ChatMessagesResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
  }
}

/**
 * @summary Sends chat messages.
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
    request.setInputsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getInputs(), "Inputs", "json"));
  }

  json query = {};
  if (!!request.hasConversationId()) {
    query["ConversationId"] = request.getConversationId();
  }

  if (!!request.hasInputsShrink()) {
    query["Inputs"] = request.getInputsShrink();
  }

  if (!!request.hasParentMessageId()) {
    query["ParentMessageId"] = request.getParentMessageId();
  }

  if (!!request.hasQuery()) {
    query["Query"] = request.getQuery();
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
 * @summary Sends chat messages.
 *
 * @param request ChatMessagesRequest
 * @return ChatMessagesResponse
 */
ChatMessagesResponse Client::chatMessages(const ChatMessagesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return chatMessagesWithOptions(request, runtime);
}

/**
 * @summary Stops a conversation.
 *
 * @param request ChatMessagesTaskStopRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChatMessagesTaskStopResponse
 */
ChatMessagesTaskStopResponse Client::chatMessagesTaskStopWithOptions(const ChatMessagesTaskStopRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
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
 * @summary Stops a conversation.
 *
 * @param request ChatMessagesTaskStopRequest
 * @return ChatMessagesTaskStopResponse
 */
ChatMessagesTaskStopResponse Client::chatMessagesTaskStop(const ChatMessagesTaskStopRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return chatMessagesTaskStopWithOptions(request, runtime);
}

/**
 * @summary Creates an RDS Supabase instance.
 *
 * @description ### [](#)Supported database engine
 * RDS PostgreSQL
 * ### [](#)References
 * >  Fees of an instance are changed if the call is successful. Before you call this operation, carefully read the related topics.
 * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
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
    request.setDBInstanceConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDBInstanceConfig(), "DBInstanceConfig", "json"));
  }

  json query = {};
  if (!!request.hasAppName()) {
    query["AppName"] = request.getAppName();
  }

  if (!!request.hasAppType()) {
    query["AppType"] = request.getAppType();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDBInstanceConfigShrink()) {
    query["DBInstanceConfig"] = request.getDBInstanceConfigShrink();
  }

  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasDashboardPassword()) {
    query["DashboardPassword"] = request.getDashboardPassword();
  }

  if (!!request.hasDashboardUsername()) {
    query["DashboardUsername"] = request.getDashboardUsername();
  }

  if (!!request.hasDatabasePassword()) {
    query["DatabasePassword"] = request.getDatabasePassword();
  }

  if (!!request.hasInitializeWithExistingData()) {
    query["InitializeWithExistingData"] = request.getInitializeWithExistingData();
  }

  if (!!request.hasInstanceClass()) {
    query["InstanceClass"] = request.getInstanceClass();
  }

  if (!!request.hasPublicEndpointEnabled()) {
    query["PublicEndpointEnabled"] = request.getPublicEndpointEnabled();
  }

  if (!!request.hasPublicNetworkAccessEnabled()) {
    query["PublicNetworkAccessEnabled"] = request.getPublicNetworkAccessEnabled();
  }

  if (!!request.hasRAGEnabled()) {
    query["RAGEnabled"] = request.getRAGEnabled();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasVSwitchId()) {
    query["VSwitchId"] = request.getVSwitchId();
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
 * @summary Creates an RDS Supabase instance.
 *
 * @description ### [](#)Supported database engine
 * RDS PostgreSQL
 * ### [](#)References
 * >  Fees of an instance are changed if the call is successful. Before you call this operation, carefully read the related topics.
 * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
 *
 * @param request CreateAppInstanceRequest
 * @return CreateAppInstanceResponse
 */
CreateAppInstanceResponse Client::createAppInstance(const CreateAppInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createAppInstanceWithOptions(request, runtime);
}

/**
 * @summary Creates a dedicated agent.
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
    request.setToolsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTools(), "Tools", "json"));
  }

  json query = {};
  if (!!request.hasEnableTools()) {
    query["EnableTools"] = request.getEnableTools();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasSystemPrompt()) {
    query["SystemPrompt"] = request.getSystemPrompt();
  }

  if (!!request.hasToolsShrink()) {
    query["Tools"] = request.getToolsShrink();
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
 * @summary Creates a dedicated agent.
 *
 * @param request CreateCustomAgentRequest
 * @return CreateCustomAgentResponse
 */
CreateCustomAgentResponse Client::createCustomAgent(const CreateCustomAgentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCustomAgentWithOptions(request, runtime);
}

/**
 * @summary Deletes an RDS Supabase instance.
 *
 * @description ### [](#)Supported database engine
 * RDS PostgreSQL
 * ### [](#)References
 * >  Fees of an instance are changed if the call is successful. Before you call this operation, carefully read the related topics.
 * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
 * >  If you delete an RDS Supabase instance, the created RDS for PostgreSQL instance and the created NAT gateway are not automatically deleted. You must manually release the instance and delete the Internet NAT gateway and EIP.
 *
 * @param request DeleteAppInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteAppInstanceResponse
 */
DeleteAppInstanceResponse Client::deleteAppInstanceWithOptions(const DeleteAppInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
 * @summary Deletes an RDS Supabase instance.
 *
 * @description ### [](#)Supported database engine
 * RDS PostgreSQL
 * ### [](#)References
 * >  Fees of an instance are changed if the call is successful. Before you call this operation, carefully read the related topics.
 * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
 * >  If you delete an RDS Supabase instance, the created RDS for PostgreSQL instance and the created NAT gateway are not automatically deleted. You must manually release the instance and delete the Internet NAT gateway and EIP.
 *
 * @param request DeleteAppInstanceRequest
 * @return DeleteAppInstanceResponse
 */
DeleteAppInstanceResponse Client::deleteAppInstance(const DeleteAppInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAppInstanceWithOptions(request, runtime);
}

/**
 * @summary Deletes the dedicated agent created by a user.
 *
 * @param request DeleteCustomAgentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCustomAgentResponse
 */
DeleteCustomAgentResponse Client::deleteCustomAgentWithOptions(const DeleteCustomAgentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustomAgentId()) {
    query["CustomAgentId"] = request.getCustomAgentId();
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
 * @summary Deletes the dedicated agent created by a user.
 *
 * @param request DeleteCustomAgentRequest
 * @return DeleteCustomAgentResponse
 */
DeleteCustomAgentResponse Client::deleteCustomAgent(const DeleteCustomAgentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCustomAgentWithOptions(request, runtime);
}

/**
 * @summary Queries the details of an RDS Supabase instance.
 *
 * @description ### [](#)Supported database engine
 * RDS PostgreSQL
 * ### [](#)References
 * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
 *
 * @param request DescribeAppInstanceAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAppInstanceAttributeResponse
 */
DescribeAppInstanceAttributeResponse Client::describeAppInstanceAttributeWithOptions(const DescribeAppInstanceAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
 * @summary Queries the details of an RDS Supabase instance.
 *
 * @description ### [](#)Supported database engine
 * RDS PostgreSQL
 * ### [](#)References
 * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
 *
 * @param request DescribeAppInstanceAttributeRequest
 * @return DescribeAppInstanceAttributeResponse
 */
DescribeAppInstanceAttributeResponse Client::describeAppInstanceAttribute(const DescribeAppInstanceAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAppInstanceAttributeWithOptions(request, runtime);
}

/**
 * @summary Queries the RDS Supabase instances.
 *
 * @description ### [](#)Supported database engine
 * RDS PostgreSQL
 * ### [](#)References
 * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
 *
 * @param request DescribeAppInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAppInstancesResponse
 */
DescribeAppInstancesResponse Client::describeAppInstancesWithOptions(const DescribeAppInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppType()) {
    query["AppType"] = request.getAppType();
  }

  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
 * @summary Queries the RDS Supabase instances.
 *
 * @description ### [](#)Supported database engine
 * RDS PostgreSQL
 * ### [](#)References
 * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
 *
 * @param request DescribeAppInstancesRequest
 * @return DescribeAppInstancesResponse
 */
DescribeAppInstancesResponse Client::describeAppInstances(const DescribeAppInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeAppInstancesWithOptions(request, runtime);
}

/**
 * @summary Queries the events.
 *
 * @param request DescribeEventsListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeEventsListResponse
 */
DescribeEventsListResponse Client::describeEventsListWithOptions(const DescribeEventsListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInstanceIdList()) {
    query["InstanceIdList"] = request.getInstanceIdList();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
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
 * @summary Queries the events.
 *
 * @param request DescribeEventsListRequest
 * @return DescribeEventsListResponse
 */
DescribeEventsListResponse Client::describeEventsList(const DescribeEventsListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeEventsListWithOptions(request, runtime);
}

/**
 * @summary Queries the authentication information about an RDS Supabase instance.
 *
 * @description ### [](#)Supported database engine
 * RDS PostgreSQL
 * ### [](#)References
 * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
 *
 * @param request DescribeInstanceAuthInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstanceAuthInfoResponse
 */
DescribeInstanceAuthInfoResponse Client::describeInstanceAuthInfoWithOptions(const DescribeInstanceAuthInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
 * @summary Queries the authentication information about an RDS Supabase instance.
 *
 * @description ### [](#)Supported database engine
 * RDS PostgreSQL
 * ### [](#)References
 * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
 *
 * @param request DescribeInstanceAuthInfoRequest
 * @return DescribeInstanceAuthInfoResponse
 */
DescribeInstanceAuthInfoResponse Client::describeInstanceAuthInfo(const DescribeInstanceAuthInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstanceAuthInfoWithOptions(request, runtime);
}

/**
 * @summary Queries the endpoint of an RDS Supabase instance.
 *
 * @description ### [](#)Supported database engine
 * RDS PostgreSQL
 * ### [](#)References
 * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
 *
 * @param request DescribeInstanceEndpointsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstanceEndpointsResponse
 */
DescribeInstanceEndpointsResponse Client::describeInstanceEndpointsWithOptions(const DescribeInstanceEndpointsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
 * @summary Queries the endpoint of an RDS Supabase instance.
 *
 * @description ### [](#)Supported database engine
 * RDS PostgreSQL
 * ### [](#)References
 * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
 *
 * @param request DescribeInstanceEndpointsRequest
 * @return DescribeInstanceEndpointsResponse
 */
DescribeInstanceEndpointsResponse Client::describeInstanceEndpoints(const DescribeInstanceEndpointsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstanceEndpointsWithOptions(request, runtime);
}

/**
 * @summary Queries the IP address whitelists of an RDS Supabase instance.
 *
 * @description ### [](#)Supported database engine
 * RDS PostgreSQL
 * ### [](#)References
 * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
 *
 * @param request DescribeInstanceIpWhitelistRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstanceIpWhitelistResponse
 */
DescribeInstanceIpWhitelistResponse Client::describeInstanceIpWhitelistWithOptions(const DescribeInstanceIpWhitelistRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGroupName()) {
    query["GroupName"] = request.getGroupName();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
 * @summary Queries the IP address whitelists of an RDS Supabase instance.
 *
 * @description ### [](#)Supported database engine
 * RDS PostgreSQL
 * ### [](#)References
 * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
 *
 * @param request DescribeInstanceIpWhitelistRequest
 * @return DescribeInstanceIpWhitelistResponse
 */
DescribeInstanceIpWhitelistResponse Client::describeInstanceIpWhitelist(const DescribeInstanceIpWhitelistRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstanceIpWhitelistWithOptions(request, runtime);
}

/**
 * @summary Queries the RAG agent configurations of an RDS Supabase instance.
 *
 * @param request DescribeInstanceRAGConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstanceRAGConfigResponse
 */
DescribeInstanceRAGConfigResponse Client::describeInstanceRAGConfigWithOptions(const DescribeInstanceRAGConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
 * @summary Queries the RAG agent configurations of an RDS Supabase instance.
 *
 * @param request DescribeInstanceRAGConfigRequest
 * @return DescribeInstanceRAGConfigResponse
 */
DescribeInstanceRAGConfigResponse Client::describeInstanceRAGConfig(const DescribeInstanceRAGConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstanceRAGConfigWithOptions(request, runtime);
}

/**
 * @summary Queries the SSL settings of an RDS Supabase instance.
 *
 * @description ### [](#)Supported database engine
 * RDS PostgreSQL
 * ### [](#)References
 * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
 *
 * @param request DescribeInstanceSSLRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstanceSSLResponse
 */
DescribeInstanceSSLResponse Client::describeInstanceSSLWithOptions(const DescribeInstanceSSLRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
 * @summary Queries the SSL settings of an RDS Supabase instance.
 *
 * @description ### [](#)Supported database engine
 * RDS PostgreSQL
 * ### [](#)References
 * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
 *
 * @param request DescribeInstanceSSLRequest
 * @return DescribeInstanceSSLResponse
 */
DescribeInstanceSSLResponse Client::describeInstanceSSL(const DescribeInstanceSSLRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstanceSSLWithOptions(request, runtime);
}

/**
 * @summary Queries the storage configurations of an RDS Supabase instance.
 *
 * @description ### [](#)Supported database engine
 * RDS PostgreSQL
 * ### [](#)References
 * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
 * >  Only Object Storage Service (OSS) is supported for the storage of RDS Supabase.
 *
 * @param request DescribeInstanceStorageConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstanceStorageConfigResponse
 */
DescribeInstanceStorageConfigResponse Client::describeInstanceStorageConfigWithOptions(const DescribeInstanceStorageConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
 * @summary Queries the storage configurations of an RDS Supabase instance.
 *
 * @description ### [](#)Supported database engine
 * RDS PostgreSQL
 * ### [](#)References
 * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
 * >  Only Object Storage Service (OSS) is supported for the storage of RDS Supabase.
 *
 * @param request DescribeInstanceStorageConfigRequest
 * @return DescribeInstanceStorageConfigResponse
 */
DescribeInstanceStorageConfigResponse Client::describeInstanceStorageConfig(const DescribeInstanceStorageConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstanceStorageConfigWithOptions(request, runtime);
}

/**
 * @summary Queries the history conversations of a user.
 *
 * @param request GetConversationsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetConversationsResponse
 */
GetConversationsResponse Client::getConversationsWithOptions(const GetConversationsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLastId()) {
    query["LastId"] = request.getLastId();
  }

  if (!!request.hasLimit()) {
    query["Limit"] = request.getLimit();
  }

  if (!!request.hasPinned()) {
    query["Pinned"] = request.getPinned();
  }

  if (!!request.hasSortBy()) {
    query["SortBy"] = request.getSortBy();
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
 * @summary Queries the history conversations of a user.
 *
 * @param request GetConversationsRequest
 * @return GetConversationsResponse
 */
GetConversationsResponse Client::getConversations(const GetConversationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getConversationsWithOptions(request, runtime);
}

/**
 * @summary Queries the dedicated agents created by a user.
 *
 * @param request GetCustomAgentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCustomAgentResponse
 */
GetCustomAgentResponse Client::getCustomAgentWithOptions(const GetCustomAgentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCustomAgentId()) {
    query["CustomAgentId"] = request.getCustomAgentId();
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
 * @summary Queries the dedicated agents created by a user.
 *
 * @param request GetCustomAgentRequest
 * @return GetCustomAgentResponse
 */
GetCustomAgentResponse Client::getCustomAgent(const GetCustomAgentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCustomAgentWithOptions(request, runtime);
}

/**
 * @summary Queries specific conversation messages.
 *
 * @param request GetMessagesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetMessagesResponse
 */
GetMessagesResponse Client::getMessagesWithOptions(const GetMessagesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConversationId()) {
    query["ConversationId"] = request.getConversationId();
  }

  if (!!request.hasFirstId()) {
    query["FirstId"] = request.getFirstId();
  }

  if (!!request.hasLimit()) {
    query["Limit"] = request.getLimit();
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
 * @summary Queries specific conversation messages.
 *
 * @param request GetMessagesRequest
 * @return GetMessagesResponse
 */
GetMessagesResponse Client::getMessages(const GetMessagesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMessagesWithOptions(request, runtime);
}

/**
 * @summary Queries the dedicated agents created by a user.
 *
 * @param request ListCustomAgentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCustomAgentResponse
 */
ListCustomAgentResponse Client::listCustomAgentWithOptions(const ListCustomAgentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
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
 * @summary Queries the dedicated agents created by a user.
 *
 * @param request ListCustomAgentRequest
 * @return ListCustomAgentResponse
 */
ListCustomAgentResponse Client::listCustomAgent(const ListCustomAgentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCustomAgentWithOptions(request, runtime);
}

/**
 * @summary Queries the custom agent tools of the user.
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
 * @summary Queries the custom agent tools of the user.
 *
 * @return ListCustomAgentToolsResponse
 */
ListCustomAgentToolsResponse Client::listCustomAgentTools() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCustomAgentToolsWithOptions(runtime);
}

/**
 * @summary Modifies the authentication configurations of an RDS Supabase instance.
 *
 * @description ### [](#)Supported database engine
 * RDS PostgreSQL
 * ### [](#)References
 * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
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
    request.setConfigListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getConfigList(), "ConfigList", "json"));
  }

  json query = {};
  if (!!request.hasConfigListShrink()) {
    query["ConfigList"] = request.getConfigListShrink();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
 * @summary Modifies the authentication configurations of an RDS Supabase instance.
 *
 * @description ### [](#)Supported database engine
 * RDS PostgreSQL
 * ### [](#)References
 * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
 *
 * @param request ModifyInstanceAuthConfigRequest
 * @return ModifyInstanceAuthConfigResponse
 */
ModifyInstanceAuthConfigResponse Client::modifyInstanceAuthConfig(const ModifyInstanceAuthConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyInstanceAuthConfigWithOptions(request, runtime);
}

/**
 * @summary Modifies the general configurations of an instance, such as the EIP and NAT settings.
 *
 * @param request ModifyInstanceConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyInstanceConfigResponse
 */
ModifyInstanceConfigResponse Client::modifyInstanceConfigWithOptions(const ModifyInstanceConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasConfigName()) {
    query["ConfigName"] = request.getConfigName();
  }

  if (!!request.hasConfigValue()) {
    query["ConfigValue"] = request.getConfigValue();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
 * @summary Modifies the general configurations of an instance, such as the EIP and NAT settings.
 *
 * @param request ModifyInstanceConfigRequest
 * @return ModifyInstanceConfigResponse
 */
ModifyInstanceConfigResponse Client::modifyInstanceConfig(const ModifyInstanceConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyInstanceConfigWithOptions(request, runtime);
}

/**
 * @summary Modifies the IP address whitelist of an RDS Supabase instance.
 *
 * @description ### [](#)Supported database engine
 * RDS PostgreSQL
 * ### [](#)References
 * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
 *
 * @param request ModifyInstanceIpWhitelistRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyInstanceIpWhitelistResponse
 */
ModifyInstanceIpWhitelistResponse Client::modifyInstanceIpWhitelistWithOptions(const ModifyInstanceIpWhitelistRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasGroupName()) {
    query["GroupName"] = request.getGroupName();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasIpWhitelist()) {
    query["IpWhitelist"] = request.getIpWhitelist();
  }

  if (!!request.hasModifyMode()) {
    query["ModifyMode"] = request.getModifyMode();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
 * @summary Modifies the IP address whitelist of an RDS Supabase instance.
 *
 * @description ### [](#)Supported database engine
 * RDS PostgreSQL
 * ### [](#)References
 * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
 *
 * @param request ModifyInstanceIpWhitelistRequest
 * @return ModifyInstanceIpWhitelistResponse
 */
ModifyInstanceIpWhitelistResponse Client::modifyInstanceIpWhitelist(const ModifyInstanceIpWhitelistRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyInstanceIpWhitelistWithOptions(request, runtime);
}

/**
 * @summary Modifies the RAG agent configurations of an RDS Supabase instance.
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
    request.setConfigListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getConfigList(), "ConfigList", "json"));
  }

  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasConfigListShrink()) {
    query["ConfigList"] = request.getConfigListShrink();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
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
 * @summary Modifies the RAG agent configurations of an RDS Supabase instance.
 *
 * @param request ModifyInstanceRAGConfigRequest
 * @return ModifyInstanceRAGConfigResponse
 */
ModifyInstanceRAGConfigResponse Client::modifyInstanceRAGConfig(const ModifyInstanceRAGConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyInstanceRAGConfigWithOptions(request, runtime);
}

/**
 * @summary Modifies the SSL settings of an RDS Supabase instance.
 *
 * @description ### [](#)Supported database engine
 * RDS PostgreSQL
 * ### [](#)References
 * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
 *
 * @param request ModifyInstanceSSLRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyInstanceSSLResponse
 */
ModifyInstanceSSLResponse Client::modifyInstanceSSLWithOptions(const ModifyInstanceSSLRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCAType()) {
    query["CAType"] = request.getCAType();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSSLEnabled()) {
    query["SSLEnabled"] = request.getSSLEnabled();
  }

  if (!!request.hasServerCert()) {
    query["ServerCert"] = request.getServerCert();
  }

  if (!!request.hasServerKey()) {
    query["ServerKey"] = request.getServerKey();
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
 * @summary Modifies the SSL settings of an RDS Supabase instance.
 *
 * @description ### [](#)Supported database engine
 * RDS PostgreSQL
 * ### [](#)References
 * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
 *
 * @param request ModifyInstanceSSLRequest
 * @return ModifyInstanceSSLResponse
 */
ModifyInstanceSSLResponse Client::modifyInstanceSSL(const ModifyInstanceSSLRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyInstanceSSLWithOptions(request, runtime);
}

/**
 * @summary Modifies the storage configurations of an RDS Supabase instance.
 *
 * @description ### [](#)Supported database engine
 * RDS PostgreSQL
 * ### [](#)References
 * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
 * >  Only Object Storage Service (OSS) is supported for the storage of RDS Supabase.
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
    request.setConfigListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getConfigList(), "ConfigList", "json"));
  }

  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasConfigListShrink()) {
    query["ConfigList"] = request.getConfigListShrink();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
 * @summary Modifies the storage configurations of an RDS Supabase instance.
 *
 * @description ### [](#)Supported database engine
 * RDS PostgreSQL
 * ### [](#)References
 * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
 * >  Only Object Storage Service (OSS) is supported for the storage of RDS Supabase.
 *
 * @param request ModifyInstanceStorageConfigRequest
 * @return ModifyInstanceStorageConfigResponse
 */
ModifyInstanceStorageConfigResponse Client::modifyInstanceStorageConfig(const ModifyInstanceStorageConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyInstanceStorageConfigWithOptions(request, runtime);
}

/**
 * @summary Modifies the returned messages.
 *
 * @param request ModifyMessagesFeedbacksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyMessagesFeedbacksResponse
 */
ModifyMessagesFeedbacksResponse Client::modifyMessagesFeedbacksWithOptions(const ModifyMessagesFeedbacksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContent()) {
    query["Content"] = request.getContent();
  }

  if (!!request.hasMessageId()) {
    query["MessageId"] = request.getMessageId();
  }

  if (!!request.hasRating()) {
    query["Rating"] = request.getRating();
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
 * @summary Modifies the returned messages.
 *
 * @param request ModifyMessagesFeedbacksRequest
 * @return ModifyMessagesFeedbacksResponse
 */
ModifyMessagesFeedbacksResponse Client::modifyMessagesFeedbacks(const ModifyMessagesFeedbacksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyMessagesFeedbacksWithOptions(request, runtime);
}

/**
 * @summary Resets the logon password of the RDS Supabase instance and the access password of the database.
 *
 * @description ### [](#)Supported database engine
 * RDS PostgreSQL
 * ### [](#)References
 * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
 * >  You can only change the password of a RDS Supabase Dashboard user.
 *
 * @param request ResetInstancePasswordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResetInstancePasswordResponse
 */
ResetInstancePasswordResponse Client::resetInstancePasswordWithOptions(const ResetInstancePasswordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDashboardPassword()) {
    query["DashboardPassword"] = request.getDashboardPassword();
  }

  if (!!request.hasDatabasePassword()) {
    query["DatabasePassword"] = request.getDatabasePassword();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
 * @summary Resets the logon password of the RDS Supabase instance and the access password of the database.
 *
 * @description ### [](#)Supported database engine
 * RDS PostgreSQL
 * ### [](#)References
 * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
 * >  You can only change the password of a RDS Supabase Dashboard user.
 *
 * @param request ResetInstancePasswordRequest
 * @return ResetInstancePasswordResponse
 */
ResetInstancePasswordResponse Client::resetInstancePassword(const ResetInstancePasswordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resetInstancePasswordWithOptions(request, runtime);
}

/**
 * @summary Restarts an RDS Supabase instance that is in the Running state.
 *
 * @description ### [](#)Supported database engine
 * RDS PostgreSQL
 * ### [](#)References
 * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
 *
 * @param request RestartInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RestartInstanceResponse
 */
RestartInstanceResponse Client::restartInstanceWithOptions(const RestartInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
 * @summary Restarts an RDS Supabase instance that is in the Running state.
 *
 * @description ### [](#)Supported database engine
 * RDS PostgreSQL
 * ### [](#)References
 * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
 *
 * @param request RestartInstanceRequest
 * @return RestartInstanceResponse
 */
RestartInstanceResponse Client::restartInstance(const RestartInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return restartInstanceWithOptions(request, runtime);
}

/**
 * @summary Starts a stopped RDS Supabase instance.
 *
 * @description ### [](#)Supported database engine
 * RDS PostgreSQL
 * ### [](#)References
 * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
 *
 * @param request StartInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartInstanceResponse
 */
StartInstanceResponse Client::startInstanceWithOptions(const StartInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
 * @summary Starts a stopped RDS Supabase instance.
 *
 * @description ### [](#)Supported database engine
 * RDS PostgreSQL
 * ### [](#)References
 * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
 *
 * @param request StartInstanceRequest
 * @return StartInstanceResponse
 */
StartInstanceResponse Client::startInstance(const StartInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startInstanceWithOptions(request, runtime);
}

/**
 * @summary Stops a running RDS Supabase instance.
 *
 * @description ### [](#)Supported database engine
 * RDS PostgreSQL
 * ### [](#)References
 * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
 *
 * @param request StopInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopInstanceResponse
 */
StopInstanceResponse Client::stopInstanceWithOptions(const StopInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
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
 * @summary Stops a running RDS Supabase instance.
 *
 * @description ### [](#)Supported database engine
 * RDS PostgreSQL
 * ### [](#)References
 * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
 *
 * @param request StopInstanceRequest
 * @return StopInstanceResponse
 */
StopInstanceResponse Client::stopInstance(const StopInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return stopInstanceWithOptions(request, runtime);
}

/**
 * @summary Updates the custom agent.
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
    request.setToolsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTools(), "Tools", "json"));
  }

  json query = {};
  if (!!request.hasCustomAgentId()) {
    query["CustomAgentId"] = request.getCustomAgentId();
  }

  if (!!request.hasEnableTools()) {
    query["EnableTools"] = request.getEnableTools();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasSystemPrompt()) {
    query["SystemPrompt"] = request.getSystemPrompt();
  }

  if (!!request.hasToolsShrink()) {
    query["Tools"] = request.getToolsShrink();
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
 * @summary Updates the custom agent.
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