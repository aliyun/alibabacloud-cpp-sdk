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
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"cn-wulanchabu" , "rdsai.aliyuncs.com"},
    {"cn-shenzhen" , "rdsai.aliyuncs.com"},
    {"cn-beijing" , "rdsai.aliyuncs.com"},
    {"cn-shanghai" , "rdsai.aliyuncs.com"},
    {"cn-guangzhou" , "rdsai.aliyuncs.com"},
    {"cn-hangzhou" , "rdsai.aliyuncs.com"}
  }).get<map<string, string>>();
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
 * @summary Adds an exclusion item to an import task.
 *
 * @description Adds a job exclusion item.
 *
 * @param request AddContextDatabaseSyncJobExclusionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddContextDatabaseSyncJobExclusionResponse
 */
AddContextDatabaseSyncJobExclusionResponse Client::addContextDatabaseSyncJobExclusionWithOptions(const AddContextDatabaseSyncJobExclusionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDocumentId()) {
    query["DocumentId"] = request.getDocumentId();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddContextDatabaseSyncJobExclusion"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddContextDatabaseSyncJobExclusionResponse>();
}

/**
 * @summary Adds an exclusion item to an import task.
 *
 * @description Adds a job exclusion item.
 *
 * @param request AddContextDatabaseSyncJobExclusionRequest
 * @return AddContextDatabaseSyncJobExclusionResponse
 */
AddContextDatabaseSyncJobExclusionResponse Client::addContextDatabaseSyncJobExclusion(const AddContextDatabaseSyncJobExclusionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addContextDatabaseSyncJobExclusionWithOptions(request, runtime);
}

/**
 * @summary Cancels an in-progress discovery task by task ID.
 *
 * @description You can specify a ClientToken to ensure idempotence for write operations. If you do not specify this parameter, the backend automatically generates one.
 *
 * @param request CancelContextDatabaseSyncDiscoveryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelContextDatabaseSyncDiscoveryResponse
 */
CancelContextDatabaseSyncDiscoveryResponse Client::cancelContextDatabaseSyncDiscoveryWithOptions(const CancelContextDatabaseSyncDiscoveryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CancelContextDatabaseSyncDiscovery"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelContextDatabaseSyncDiscoveryResponse>();
}

/**
 * @summary Cancels an in-progress discovery task by task ID.
 *
 * @description You can specify a ClientToken to ensure idempotence for write operations. If you do not specify this parameter, the backend automatically generates one.
 *
 * @param request CancelContextDatabaseSyncDiscoveryRequest
 * @return CancelContextDatabaseSyncDiscoveryResponse
 */
CancelContextDatabaseSyncDiscoveryResponse Client::cancelContextDatabaseSyncDiscovery(const CancelContextDatabaseSyncDiscoveryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelContextDatabaseSyncDiscoveryWithOptions(request, runtime);
}

/**
 * @summary Cancels a run.
 *
 * @description Write operations support idempotence through ClientToken. If ClientToken is not provided, the backend generates one automatically. Cancellation is best-effort. Completed RunItems are not affected.
 *
 * @param request CancelContextDatabaseSyncRunRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelContextDatabaseSyncRunResponse
 */
CancelContextDatabaseSyncRunResponse Client::cancelContextDatabaseSyncRunWithOptions(const CancelContextDatabaseSyncRunRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasRunId()) {
    query["RunId"] = request.getRunId();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CancelContextDatabaseSyncRun"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelContextDatabaseSyncRunResponse>();
}

/**
 * @summary Cancels a run.
 *
 * @description Write operations support idempotence through ClientToken. If ClientToken is not provided, the backend generates one automatically. Cancellation is best-effort. Completed RunItems are not affected.
 *
 * @param request CancelContextDatabaseSyncRunRequest
 * @return CancelContextDatabaseSyncRunResponse
 */
CancelContextDatabaseSyncRunResponse Client::cancelContextDatabaseSyncRun(const CancelContextDatabaseSyncRunRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelContextDatabaseSyncRunWithOptions(request, runtime);
}

/**
 * @summary Sends a conversation message.
 *
 * @param tmpReq ChatMessagesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChatMessagesResponse
 */
FutureGenerator<ChatMessagesResponse> Client::chatMessagesWithSSE(const ChatMessagesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ChatMessagesShrinkRequest request = ChatMessagesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasFiles()) {
    request.setFilesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getFiles(), "Files", "json"));
  }

  if (!!tmpReq.hasInputs()) {
    request.setInputsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getInputs(), "Inputs", "json"));
  }

  json query = {};
  if (!!request.hasConversationId()) {
    query["ConversationId"] = request.getConversationId();
  }

  if (!!request.hasEventMode()) {
    query["EventMode"] = request.getEventMode();
  }

  if (!!request.hasFilesShrink()) {
    query["Files"] = request.getFilesShrink();
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
    if (!!resp.hasEvent() && !!resp.getEvent().hasData()) {
      json data = json(json::parse(resp.getEvent().getData()));
json       __retrun = json(json({
        {"statusCode" , resp.getStatusCode()},
        {"headers" , resp.getHeaders()},
        {"id" , resp.getEvent().getId()},
        {"event" , resp.getEvent().getEvent()},
        {"body" , data}
      })).get<ChatMessagesResponse>();
return Darabonba::FutureGenerator<json>(__retrun);
    }

  }
}

/**
 * @summary Sends a conversation message.
 *
 * @param tmpReq ChatMessagesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChatMessagesResponse
 */
ChatMessagesResponse Client::chatMessagesWithOptions(const ChatMessagesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ChatMessagesShrinkRequest request = ChatMessagesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasFiles()) {
    request.setFilesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getFiles(), "Files", "json"));
  }

  if (!!tmpReq.hasInputs()) {
    request.setInputsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getInputs(), "Inputs", "json"));
  }

  json query = {};
  if (!!request.hasConversationId()) {
    query["ConversationId"] = request.getConversationId();
  }

  if (!!request.hasEventMode()) {
    query["EventMode"] = request.getEventMode();
  }

  if (!!request.hasFilesShrink()) {
    query["Files"] = request.getFilesShrink();
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
 * @summary Sends a conversation message.
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

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
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
 * @summary Creates a custom API key.
 *
 * @description ### Applicable engine
 * [RDS AI Assistant Ultimate Edition](https://www.alibabacloud.com/help/en/rds/apsaradb-rds-for-mysql/rds-copilot-ultra)
 *
 * @param request CreateApiKeyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateApiKeyResponse
 */
CreateApiKeyResponse Client::createApiKeyWithOptions(const CreateApiKeyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDailyTokenQuota()) {
    query["DailyTokenQuota"] = request.getDailyTokenQuota();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasKeyName()) {
    query["KeyName"] = request.getKeyName();
  }

  if (!!request.hasLimitRate()) {
    query["LimitRate"] = request.getLimitRate();
  }

  if (!!request.hasLimitType()) {
    query["LimitType"] = request.getLimitType();
  }

  if (!!request.hasQuantity()) {
    query["Quantity"] = request.getQuantity();
  }

  if (!!request.hasRoleArn()) {
    query["RoleArn"] = request.getRoleArn();
  }

  if (!!request.hasRoleName()) {
    query["RoleName"] = request.getRoleName();
  }

  if (!!request.hasTokenQuota()) {
    query["TokenQuota"] = request.getTokenQuota();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateApiKey"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateApiKeyResponse>();
}

/**
 * @summary Creates a custom API key.
 *
 * @description ### Applicable engine
 * [RDS AI Assistant Ultimate Edition](https://www.alibabacloud.com/help/en/rds/apsaradb-rds-for-mysql/rds-copilot-ultra)
 *
 * @param request CreateApiKeyRequest
 * @return CreateApiKeyResponse
 */
CreateApiKeyResponse Client::createApiKey(const CreateApiKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createApiKeyWithOptions(request, runtime);
}

/**
 * @summary Creates an RDS AI application instance.
 *
 * @description ### Applicable engine
 * RDS PostgreSQL
 * ### Related documentation
 * >Warning: This API operation incurs fees. Read the related documentation carefully before you perform this operation.
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
  if (!!tmpReq.hasComponents()) {
    request.setComponentsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getComponents(), "Components", "json"));
  }

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

  if (!!request.hasComponentsShrink()) {
    query["Components"] = request.getComponentsShrink();
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

  if (!!request.hasDatabase()) {
    query["Database"] = request.getDatabase();
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
 * @summary Creates an RDS AI application instance.
 *
 * @description ### Applicable engine
 * RDS PostgreSQL
 * ### Related documentation
 * >Warning: This API operation incurs fees. Read the related documentation carefully before you perform this operation.
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
 * @summary Creates a context database API key.
 *
 * @description Creates an API key and returns the plaintext apiKey.
 *
 * @param request CreateContextDatabaseApiKeyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateContextDatabaseApiKeyResponse
 */
CreateContextDatabaseApiKeyResponse Client::createContextDatabaseApiKeyWithOptions(const CreateContextDatabaseApiKeyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMemberId()) {
    query["MemberId"] = request.getMemberId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateContextDatabaseApiKey"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateContextDatabaseApiKeyResponse>();
}

/**
 * @summary Creates a context database API key.
 *
 * @description Creates an API key and returns the plaintext apiKey.
 *
 * @param request CreateContextDatabaseApiKeyRequest
 * @return CreateContextDatabaseApiKeyResponse
 */
CreateContextDatabaseApiKeyResponse Client::createContextDatabaseApiKey(const CreateContextDatabaseApiKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createContextDatabaseApiKeyWithOptions(request, runtime);
}

/**
 * @summary Creates a ContextDB member.
 *
 * @description Creates a member. If GenerateInitialKey is set to true, the first API key is also issued, and the plaintext ApiKey is returned in the response. This is a sensitive field and is returned only once. Store it securely. After the member is created, you can call the List or Get operation to query the member and the metadata of the API keys under the member.
 *
 * @param request CreateContextDatabaseMemberRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateContextDatabaseMemberResponse
 */
CreateContextDatabaseMemberResponse Client::createContextDatabaseMemberWithOptions(const CreateContextDatabaseMemberRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasGenerateInitialKey()) {
    query["GenerateInitialKey"] = request.getGenerateInitialKey();
  }

  if (!!request.hasInitialKeyName()) {
    query["InitialKeyName"] = request.getInitialKeyName();
  }

  if (!!request.hasMemberName()) {
    query["MemberName"] = request.getMemberName();
  }

  if (!!request.hasRole()) {
    query["Role"] = request.getRole();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateContextDatabaseMember"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateContextDatabaseMemberResponse>();
}

/**
 * @summary Creates a ContextDB member.
 *
 * @description Creates a member. If GenerateInitialKey is set to true, the first API key is also issued, and the plaintext ApiKey is returned in the response. This is a sensitive field and is returned only once. Store it securely. After the member is created, you can call the List or Get operation to query the member and the metadata of the API keys under the member.
 *
 * @param request CreateContextDatabaseMemberRequest
 * @return CreateContextDatabaseMemberResponse
 */
CreateContextDatabaseMemberResponse Client::createContextDatabaseMember(const CreateContextDatabaseMemberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createContextDatabaseMemberWithOptions(request, runtime);
}

/**
 * @summary Creates a synchronization connection.
 *
 * @description For write operations, you can specify a ClientToken to ensure idempotency. If no ClientToken is provided, the backend automatically generates one. Upon successful creation, the complete information of the created object is returned, including the ID that can be used for subsequent queries or updates.
 *
 * @param request CreateContextDatabaseSyncConnectionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateContextDatabaseSyncConnectionResponse
 */
CreateContextDatabaseSyncConnectionResponse Client::createContextDatabaseSyncConnectionWithOptions(const CreateContextDatabaseSyncConnectionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthKind()) {
    query["AuthKind"] = request.getAuthKind();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDisplayName()) {
    query["DisplayName"] = request.getDisplayName();
  }

  if (!!request.hasPluginId()) {
    query["PluginId"] = request.getPluginId();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateContextDatabaseSyncConnection"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateContextDatabaseSyncConnectionResponse>();
}

/**
 * @summary Creates a synchronization connection.
 *
 * @description For write operations, you can specify a ClientToken to ensure idempotency. If no ClientToken is provided, the backend automatically generates one. Upon successful creation, the complete information of the created object is returned, including the ID that can be used for subsequent queries or updates.
 *
 * @param request CreateContextDatabaseSyncConnectionRequest
 * @return CreateContextDatabaseSyncConnectionResponse
 */
CreateContextDatabaseSyncConnectionResponse Client::createContextDatabaseSyncConnection(const CreateContextDatabaseSyncConnectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createContextDatabaseSyncConnectionWithOptions(request, runtime);
}

/**
 * @summary Creates an import task.
 *
 * @description Write operations support idempotence via ClientToken. If ClientToken is not provided, the backend generates one automatically. Target is an implicit concept — you only need to provide KnowledgeBaseId, and the backend automatically creates or matches the Target.
 * On success, the response returns the complete information of the created object. The Id field is active and can be used for subsequent queries or updates.
 *
 * @param tmpReq CreateContextDatabaseSyncJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateContextDatabaseSyncJobResponse
 */
CreateContextDatabaseSyncJobResponse Client::createContextDatabaseSyncJobWithOptions(const CreateContextDatabaseSyncJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateContextDatabaseSyncJobShrinkRequest request = CreateContextDatabaseSyncJobShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasFilters()) {
    request.setFiltersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getFilters(), "Filters", "json"));
  }

  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasFiltersShrink()) {
    query["Filters"] = request.getFiltersShrink();
  }

  if (!!request.hasKnowledgeBaseId()) {
    query["KnowledgeBaseId"] = request.getKnowledgeBaseId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasSourceId()) {
    query["SourceId"] = request.getSourceId();
  }

  if (!!request.hasTargetId()) {
    query["TargetId"] = request.getTargetId();
  }

  if (!!request.hasTargetKnowledgeBaseId()) {
    query["TargetKnowledgeBaseId"] = request.getTargetKnowledgeBaseId();
  }

  if (!!request.hasTargetKnowledgeBaseName()) {
    query["TargetKnowledgeBaseName"] = request.getTargetKnowledgeBaseName();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateContextDatabaseSyncJob"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateContextDatabaseSyncJobResponse>();
}

/**
 * @summary Creates an import task.
 *
 * @description Write operations support idempotence via ClientToken. If ClientToken is not provided, the backend generates one automatically. Target is an implicit concept — you only need to provide KnowledgeBaseId, and the backend automatically creates or matches the Target.
 * On success, the response returns the complete information of the created object. The Id field is active and can be used for subsequent queries or updates.
 *
 * @param request CreateContextDatabaseSyncJobRequest
 * @return CreateContextDatabaseSyncJobResponse
 */
CreateContextDatabaseSyncJobResponse Client::createContextDatabaseSyncJob(const CreateContextDatabaseSyncJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createContextDatabaseSyncJobWithOptions(request, runtime);
}

/**
 * @summary Creates a data selection scope.
 *
 * @description Write operations support idempotence by passing a ClientToken. If no token is provided, the backend generates one automatically. After creating a data selection scope, you typically need to call StartContextDatabaseSyncSourceDiscovery to discover available nodes.
 * On success, the response returns the complete information of the created object. The Id field can be used for subsequent queries or updates.
 *
 * @param tmpReq CreateContextDatabaseSyncSourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateContextDatabaseSyncSourceResponse
 */
CreateContextDatabaseSyncSourceResponse Client::createContextDatabaseSyncSourceWithOptions(const CreateContextDatabaseSyncSourceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateContextDatabaseSyncSourceShrinkRequest request = CreateContextDatabaseSyncSourceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSourceConfig()) {
    request.setSourceConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSourceConfig(), "SourceConfig", "json"));
  }

  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasConnectionId()) {
    query["ConnectionId"] = request.getConnectionId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasSourceConfigShrink()) {
    query["SourceConfig"] = request.getSourceConfigShrink();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateContextDatabaseSyncSource"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateContextDatabaseSyncSourceResponse>();
}

/**
 * @summary Creates a data selection scope.
 *
 * @description Write operations support idempotence by passing a ClientToken. If no token is provided, the backend generates one automatically. After creating a data selection scope, you typically need to call StartContextDatabaseSyncSourceDiscovery to discover available nodes.
 * On success, the response returns the complete information of the created object. The Id field can be used for subsequent queries or updates.
 *
 * @param request CreateContextDatabaseSyncSourceRequest
 * @return CreateContextDatabaseSyncSourceResponse
 */
CreateContextDatabaseSyncSourceResponse Client::createContextDatabaseSyncSource(const CreateContextDatabaseSyncSourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createContextDatabaseSyncSourceWithOptions(request, runtime);
}

/**
 * @summary Creates a workspace, the first member, and the first API key in a one-time onboarding process.
 *
 * @description Creates a workspace along with the first member and the first API key in a one-time onboarding process. The plaintext API key is returned in the response.
 *
 * @param request CreateContextDatabaseWorkspaceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateContextDatabaseWorkspaceResponse
 */
CreateContextDatabaseWorkspaceResponse Client::createContextDatabaseWorkspaceWithOptions(const CreateContextDatabaseWorkspaceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMemberName()) {
    query["MemberName"] = request.getMemberName();
  }

  if (!!request.hasWorkspaceName()) {
    query["WorkspaceName"] = request.getWorkspaceName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateContextDatabaseWorkspace"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateContextDatabaseWorkspaceResponse>();
}

/**
 * @summary Creates a workspace, the first member, and the first API key in a one-time onboarding process.
 *
 * @description Creates a workspace along with the first member and the first API key in a one-time onboarding process. The plaintext API key is returned in the response.
 *
 * @param request CreateContextDatabaseWorkspaceRequest
 * @return CreateContextDatabaseWorkspaceResponse
 */
CreateContextDatabaseWorkspaceResponse Client::createContextDatabaseWorkspace(const CreateContextDatabaseWorkspaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createContextDatabaseWorkspaceWithOptions(request, runtime);
}

/**
 * @summary Creates a user-specific agent.
 *
 * @param tmpReq CreateCustomAgentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCustomAgentResponse
 */
CreateCustomAgentResponse Client::createCustomAgentWithOptions(const CreateCustomAgentRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateCustomAgentShrinkRequest request = CreateCustomAgentShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSkillIds()) {
    request.setSkillIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSkillIds(), "SkillIds", "json"));
  }

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

  if (!!request.hasSkillIdsShrink()) {
    query["SkillIds"] = request.getSkillIdsShrink();
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
 * @summary Creates a user-specific agent.
 *
 * @param request CreateCustomAgentRequest
 * @return CreateCustomAgentResponse
 */
CreateCustomAgentResponse Client::createCustomAgent(const CreateCustomAgentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCustomAgentWithOptions(request, runtime);
}

/**
 * @summary Creates a batch instance inspection task.
 *
 * @param request CreateInspectionTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateInspectionTaskResponse
 */
CreateInspectionTaskResponse Client::createInspectionTaskWithOptions(const CreateInspectionTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInspectionItems()) {
    query["InspectionItems"] = request.getInspectionItems();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.getInstanceIds();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasReportLanguage()) {
    query["ReportLanguage"] = request.getReportLanguage();
  }

  if (!!request.hasReportRegionId()) {
    query["ReportRegionId"] = request.getReportRegionId();
  }

  if (!!request.hasReportType()) {
    query["ReportType"] = request.getReportType();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateInspectionTask"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateInspectionTaskResponse>();
}

/**
 * @summary Creates a batch instance inspection task.
 *
 * @param request CreateInspectionTaskRequest
 * @return CreateInspectionTaskResponse
 */
CreateInspectionTaskResponse Client::createInspectionTask(const CreateInspectionTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createInspectionTaskWithOptions(request, runtime);
}

/**
 * @summary Triggers an asynchronous export task for MO usage details in CSV format.
 *
 * @description ### Applicable engine
 * [RDS AI Assistant Ultimate Edition](https://www.alibabacloud.com/help/en/rds/apsaradb-rds-for-mysql/rds-copilot-ultra)
 *
 * @param request CreateMOUsageDetailExportRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateMOUsageDetailExportResponse
 */
CreateMOUsageDetailExportResponse Client::createMOUsageDetailExportWithOptions(const CreateMOUsageDetailExportRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiKey()) {
    query["ApiKey"] = request.getApiKey();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasModel()) {
    query["Model"] = request.getModel();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasUsageType()) {
    query["UsageType"] = request.getUsageType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateMOUsageDetailExport"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateMOUsageDetailExportResponse>();
}

/**
 * @summary Triggers an asynchronous export task for MO usage details in CSV format.
 *
 * @description ### Applicable engine
 * [RDS AI Assistant Ultimate Edition](https://www.alibabacloud.com/help/en/rds/apsaradb-rds-for-mysql/rds-copilot-ultra)
 *
 * @param request CreateMOUsageDetailExportRequest
 * @return CreateMOUsageDetailExportResponse
 */
CreateMOUsageDetailExportResponse Client::createMOUsageDetailExport(const CreateMOUsageDetailExportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createMOUsageDetailExportWithOptions(request, runtime);
}

/**
 * @summary Creates a sandbox template.
 *
 * @description ### Applicable engine
 * RDS Supabase
 * ### Related documentation
 * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
 *
 * @param tmpReq CreateSandboxTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSandboxTemplateResponse
 */
CreateSandboxTemplateResponse Client::createSandboxTemplateWithOptions(const CreateSandboxTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateSandboxTemplateShrinkRequest request = CreateSandboxTemplateShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTags(), "Tags", "json"));
  }

  json query = {};
  if (!!request.hasDefaultCpu()) {
    query["DefaultCpu"] = request.getDefaultCpu();
  }

  if (!!request.hasDefaultMemory()) {
    query["DefaultMemory"] = request.getDefaultMemory();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasImage()) {
    query["Image"] = request.getImage();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasReplicas()) {
    query["Replicas"] = request.getReplicas();
  }

  if (!!request.hasTagsShrink()) {
    query["Tags"] = request.getTagsShrink();
  }

  if (!!request.hasTemplateName()) {
    query["TemplateName"] = request.getTemplateName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateSandboxTemplate"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSandboxTemplateResponse>();
}

/**
 * @summary Creates a sandbox template.
 *
 * @description ### Applicable engine
 * RDS Supabase
 * ### Related documentation
 * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
 *
 * @param request CreateSandboxTemplateRequest
 * @return CreateSandboxTemplateResponse
 */
CreateSandboxTemplateResponse Client::createSandboxTemplate(const CreateSandboxTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSandboxTemplateWithOptions(request, runtime);
}

/**
 * @summary Creates a scheduled inspection configuration for batch instances.
 *
 * @description ### Applicable engine
 * RDS PostgreSQL
 * ### Related feature documentation
 * >Warning: This API operation incurs fees. Read the related feature documentation carefully before you perform this operation.
 * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
 *
 * @param request CreateScheduledTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateScheduledTaskResponse
 */
CreateScheduledTaskResponse Client::createScheduledTaskWithOptions(const CreateScheduledTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasFrequency()) {
    query["Frequency"] = request.getFrequency();
  }

  if (!!request.hasInspectionItems()) {
    query["InspectionItems"] = request.getInspectionItems();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.getInstanceIds();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasReportLanguage()) {
    query["ReportLanguage"] = request.getReportLanguage();
  }

  if (!!request.hasReportRegionId()) {
    query["ReportRegionId"] = request.getReportRegionId();
  }

  if (!!request.hasReportType()) {
    query["ReportType"] = request.getReportType();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  if (!!request.hasTimeRange()) {
    query["TimeRange"] = request.getTimeRange();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateScheduledTask"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateScheduledTaskResponse>();
}

/**
 * @summary Creates a scheduled inspection configuration for batch instances.
 *
 * @description ### Applicable engine
 * RDS PostgreSQL
 * ### Related feature documentation
 * >Warning: This API operation incurs fees. Read the related feature documentation carefully before you perform this operation.
 * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
 *
 * @param request CreateScheduledTaskRequest
 * @return CreateScheduledTaskResponse
 */
CreateScheduledTaskResponse Client::createScheduledTask(const CreateScheduledTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createScheduledTaskWithOptions(request, runtime);
}

/**
 * @summary Creates a user-defined skill.
 *
 * @param tmpReq CreateSkillRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSkillResponse
 */
CreateSkillResponse Client::createSkillWithOptions(const CreateSkillRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateSkillShrinkRequest request = CreateSkillShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasContent()) {
    request.setContentShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getContent(), "Content", "json"));
  }

  if (!!tmpReq.hasDbtypes()) {
    request.setDbtypesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDbtypes(), "Dbtypes", "json"));
  }

  json query = {};
  if (!!request.hasContentShrink()) {
    query["Content"] = request.getContentShrink();
  }

  if (!!request.hasDbtypesShrink()) {
    query["Dbtypes"] = request.getDbtypesShrink();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasUpdateNote()) {
    query["UpdateNote"] = request.getUpdateNote();
  }

  if (!!request.hasUploadId()) {
    query["UploadId"] = request.getUploadId();
  }

  if (!!request.hasUploadToken()) {
    query["UploadToken"] = request.getUploadToken();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateSkill"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSkillResponse>();
}

/**
 * @summary Creates a user-defined skill.
 *
 * @param request CreateSkillRequest
 * @return CreateSkillResponse
 */
CreateSkillResponse Client::createSkill(const CreateSkillRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSkillWithOptions(request, runtime);
}

/**
 * @summary Deletes a custom API key.
 *
 * @description ### Applicable engine
 * [RDS AI Assistant Ultimate Edition](https://www.alibabacloud.com/help/en/rds/apsaradb-rds-for-mysql/rds-copilot-ultra)
 *
 * @param request DeleteApiKeyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteApiKeyResponse
 */
DeleteApiKeyResponse Client::deleteApiKeyWithOptions(const DeleteApiKeyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiKey()) {
    query["ApiKey"] = request.getApiKey();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteApiKey"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteApiKeyResponse>();
}

/**
 * @summary Deletes a custom API key.
 *
 * @description ### Applicable engine
 * [RDS AI Assistant Ultimate Edition](https://www.alibabacloud.com/help/en/rds/apsaradb-rds-for-mysql/rds-copilot-ultra)
 *
 * @param request DeleteApiKeyRequest
 * @return DeleteApiKeyResponse
 */
DeleteApiKeyResponse Client::deleteApiKey(const DeleteApiKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteApiKeyWithOptions(request, runtime);
}

/**
 * @summary Deletes an RDS AI application instance.
 *
 * @description ### Applicable DPI engine
 * RDS PostgreSQL
 * ### Related feature documentation
 * >Warning: This API operation incurs fees. Read the related feature documentation carefully before you perform this operation.
 * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
 * >Notice: Deleting an RDS Supabase project does not automatically delete the ApsaraDB RDS for PostgreSQL instance or the Internet NAT gateway that were created along with the project. You must [manual release the instance](https://help.aliyun.com/document_detail/96749.html) and delete the [Internet NAT gateway](https://help.aliyun.com/document_detail/121139.html) and [EIP](https://help.aliyun.com/document_detail/121527.html).
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

  if (!!request.hasDeleteDBInstance()) {
    query["DeleteDBInstance"] = request.getDeleteDBInstance();
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
 * @summary Deletes an RDS AI application instance.
 *
 * @description ### Applicable DPI engine
 * RDS PostgreSQL
 * ### Related feature documentation
 * >Warning: This API operation incurs fees. Read the related feature documentation carefully before you perform this operation.
 * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
 * >Notice: Deleting an RDS Supabase project does not automatically delete the ApsaraDB RDS for PostgreSQL instance or the Internet NAT gateway that were created along with the project. You must [manual release the instance](https://help.aliyun.com/document_detail/96749.html) and delete the [Internet NAT gateway](https://help.aliyun.com/document_detail/121139.html) and [EIP](https://help.aliyun.com/document_detail/121527.html).
 *
 * @param request DeleteAppInstanceRequest
 * @return DeleteAppInstanceResponse
 */
DeleteAppInstanceResponse Client::deleteAppInstance(const DeleteAppInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteAppInstanceWithOptions(request, runtime);
}

/**
 * @summary Deletes a context database member.
 *
 * @description Deletes a member. This is a hard delete and cannot be undone.
 *
 * @param request DeleteContextDatabaseMemberRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteContextDatabaseMemberResponse
 */
DeleteContextDatabaseMemberResponse Client::deleteContextDatabaseMemberWithOptions(const DeleteContextDatabaseMemberRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMemberId()) {
    query["MemberId"] = request.getMemberId();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteContextDatabaseMember"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteContextDatabaseMemberResponse>();
}

/**
 * @summary Deletes a context database member.
 *
 * @description Deletes a member. This is a hard delete and cannot be undone.
 *
 * @param request DeleteContextDatabaseMemberRequest
 * @return DeleteContextDatabaseMemberResponse
 */
DeleteContextDatabaseMemberResponse Client::deleteContextDatabaseMember(const DeleteContextDatabaseMemberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteContextDatabaseMemberWithOptions(request, runtime);
}

/**
 * @summary Deletes a data source.
 *
 * @description For write operations, you can specify a ClientToken to ensure idempotency. If you do not specify a ClientToken, the backend automatically generates one.
 *
 * @param request DeleteContextDatabaseSyncConnectionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteContextDatabaseSyncConnectionResponse
 */
DeleteContextDatabaseSyncConnectionResponse Client::deleteContextDatabaseSyncConnectionWithOptions(const DeleteContextDatabaseSyncConnectionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasConnectionId()) {
    query["ConnectionId"] = request.getConnectionId();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteContextDatabaseSyncConnection"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteContextDatabaseSyncConnectionResponse>();
}

/**
 * @summary Deletes a data source.
 *
 * @description For write operations, you can specify a ClientToken to ensure idempotency. If you do not specify a ClientToken, the backend automatically generates one.
 *
 * @param request DeleteContextDatabaseSyncConnectionRequest
 * @return DeleteContextDatabaseSyncConnectionResponse
 */
DeleteContextDatabaseSyncConnectionResponse Client::deleteContextDatabaseSyncConnection(const DeleteContextDatabaseSyncConnectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteContextDatabaseSyncConnectionWithOptions(request, runtime);
}

/**
 * @summary Deletes an import task.
 *
 * @description You can provide a ClientToken to ensure idempotency for write operations. If not provided, the backend automatically generates one.
 *
 * @param request DeleteContextDatabaseSyncJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteContextDatabaseSyncJobResponse
 */
DeleteContextDatabaseSyncJobResponse Client::deleteContextDatabaseSyncJobWithOptions(const DeleteContextDatabaseSyncJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteContextDatabaseSyncJob"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteContextDatabaseSyncJobResponse>();
}

/**
 * @summary Deletes an import task.
 *
 * @description You can provide a ClientToken to ensure idempotency for write operations. If not provided, the backend automatically generates one.
 *
 * @param request DeleteContextDatabaseSyncJobRequest
 * @return DeleteContextDatabaseSyncJobResponse
 */
DeleteContextDatabaseSyncJobResponse Client::deleteContextDatabaseSyncJob(const DeleteContextDatabaseSyncJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteContextDatabaseSyncJobWithOptions(request, runtime);
}

/**
 * @summary Deletes a data selection scope.
 *
 * @description Write operations support idempotence through ClientToken. If ClientToken is not provided, the backend generates one automatically.
 *
 * @param request DeleteContextDatabaseSyncSourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteContextDatabaseSyncSourceResponse
 */
DeleteContextDatabaseSyncSourceResponse Client::deleteContextDatabaseSyncSourceWithOptions(const DeleteContextDatabaseSyncSourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasSourceId()) {
    query["SourceId"] = request.getSourceId();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteContextDatabaseSyncSource"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteContextDatabaseSyncSourceResponse>();
}

/**
 * @summary Deletes a data selection scope.
 *
 * @description Write operations support idempotence through ClientToken. If ClientToken is not provided, the backend generates one automatically.
 *
 * @param request DeleteContextDatabaseSyncSourceRequest
 * @return DeleteContextDatabaseSyncSourceResponse
 */
DeleteContextDatabaseSyncSourceResponse Client::deleteContextDatabaseSyncSource(const DeleteContextDatabaseSyncSourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteContextDatabaseSyncSourceWithOptions(request, runtime);
}

/**
 * @summary Deletes a ContextDB workspace.
 *
 * @description Deletes a workspace. This is a hard delete and cannot be recovered. After the workspace is deleted, the local metadata is soft-deleted synchronously. Deleted workspaces no longer count toward the quota.
 *
 * @param request DeleteContextDatabaseWorkspaceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteContextDatabaseWorkspaceResponse
 */
DeleteContextDatabaseWorkspaceResponse Client::deleteContextDatabaseWorkspaceWithOptions(const DeleteContextDatabaseWorkspaceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteContextDatabaseWorkspace"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteContextDatabaseWorkspaceResponse>();
}

/**
 * @summary Deletes a ContextDB workspace.
 *
 * @description Deletes a workspace. This is a hard delete and cannot be recovered. After the workspace is deleted, the local metadata is soft-deleted synchronously. Deleted workspaces no longer count toward the quota.
 *
 * @param request DeleteContextDatabaseWorkspaceRequest
 * @return DeleteContextDatabaseWorkspaceResponse
 */
DeleteContextDatabaseWorkspaceResponse Client::deleteContextDatabaseWorkspace(const DeleteContextDatabaseWorkspaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteContextDatabaseWorkspaceWithOptions(request, runtime);
}

/**
 * @summary Deletes a dedicated agent created by the user.
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
 * @summary Deletes a dedicated agent created by the user.
 *
 * @param request DeleteCustomAgentRequest
 * @return DeleteCustomAgentResponse
 */
DeleteCustomAgentResponse Client::deleteCustomAgent(const DeleteCustomAgentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCustomAgentWithOptions(request, runtime);
}

/**
 * @summary Deletes a sandbox template.
 *
 * @description ### Supported engine
 * RDS Supabase
 * ### Related documentation
 * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
 *
 * @param request DeleteSandboxTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSandboxTemplateResponse
 */
DeleteSandboxTemplateResponse Client::deleteSandboxTemplateWithOptions(const DeleteSandboxTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteSandboxTemplate"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSandboxTemplateResponse>();
}

/**
 * @summary Deletes a sandbox template.
 *
 * @description ### Supported engine
 * RDS Supabase
 * ### Related documentation
 * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
 *
 * @param request DeleteSandboxTemplateRequest
 * @return DeleteSandboxTemplateResponse
 */
DeleteSandboxTemplateResponse Client::deleteSandboxTemplate(const DeleteSandboxTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSandboxTemplateWithOptions(request, runtime);
}

/**
 * @summary Deletes a specified inspection configuration.
 *
 * @param request DeleteScheduledTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteScheduledTaskResponse
 */
DeleteScheduledTaskResponse Client::deleteScheduledTaskWithOptions(const DeleteScheduledTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasScheduledId()) {
    query["ScheduledId"] = request.getScheduledId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteScheduledTask"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteScheduledTaskResponse>();
}

/**
 * @summary Deletes a specified inspection configuration.
 *
 * @param request DeleteScheduledTaskRequest
 * @return DeleteScheduledTaskResponse
 */
DeleteScheduledTaskResponse Client::deleteScheduledTask(const DeleteScheduledTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteScheduledTaskWithOptions(request, runtime);
}

/**
 * @summary Deletes a specified Skill.
 *
 * @param request DeleteSkillRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSkillResponse
 */
DeleteSkillResponse Client::deleteSkillWithOptions(const DeleteSkillRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSkillId()) {
    query["SkillId"] = request.getSkillId();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteSkill"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSkillResponse>();
}

/**
 * @summary Deletes a specified Skill.
 *
 * @param request DeleteSkillRequest
 * @return DeleteSkillResponse
 */
DeleteSkillResponse Client::deleteSkill(const DeleteSkillRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSkillWithOptions(request, runtime);
}

/**
 * @summary Queries the details of an RDS AI application instance.
 *
 * @description ### Applicable engine
 * RDS PostgreSQL
 * ### Related documentation
 * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
 *
 * @param request DescribeAppInstanceAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeAppInstanceAttributeResponse
 */
DescribeAppInstanceAttributeResponse Client::describeAppInstanceAttributeWithOptions(const DescribeAppInstanceAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBranchName()) {
    query["BranchName"] = request.getBranchName();
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
 * @summary Queries the details of an RDS AI application instance.
 *
 * @description ### Applicable engine
 * RDS PostgreSQL
 * ### Related documentation
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
 * @summary Queries a list of RDS AI application instances.
 *
 * @description ### Applicable engine
 * RDS PostgreSQL
 * ### Related documentation
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
 * @summary Queries a list of RDS AI application instances.
 *
 * @description ### Applicable engine
 * RDS PostgreSQL
 * ### Related documentation
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
 * @summary Queries the list of supported sandbox templates.
 *
 * @description ### Applicable engine
 * RDS Supabase
 * ### Related documentation
 * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
 *
 * @param request DescribeCommonSandboxTemplatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCommonSandboxTemplatesResponse
 */
DescribeCommonSandboxTemplatesResponse Client::describeCommonSandboxTemplatesWithOptions(const DescribeCommonSandboxTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCommonSandboxTemplates"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCommonSandboxTemplatesResponse>();
}

/**
 * @summary Queries the list of supported sandbox templates.
 *
 * @description ### Applicable engine
 * RDS Supabase
 * ### Related documentation
 * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
 *
 * @param request DescribeCommonSandboxTemplatesRequest
 * @return DescribeCommonSandboxTemplatesResponse
 */
DescribeCommonSandboxTemplatesResponse Client::describeCommonSandboxTemplates(const DescribeCommonSandboxTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCommonSandboxTemplatesWithOptions(request, runtime);
}

/**
 * @summary Queries a list of events.
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
 * @summary Queries a list of events.
 *
 * @param request DescribeEventsListRequest
 * @return DescribeEventsListResponse
 */
DescribeEventsListResponse Client::describeEventsList(const DescribeEventsListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeEventsListWithOptions(request, runtime);
}

/**
 * @summary Queries the authentication information of an RDS AI application instance.
 *
 * @description ### Applicable engine
 * RDS PostgreSQL
 * ### Related documentation
 * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
 *
 * @param request DescribeInstanceAuthInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstanceAuthInfoResponse
 */
DescribeInstanceAuthInfoResponse Client::describeInstanceAuthInfoWithOptions(const DescribeInstanceAuthInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBranchName()) {
    query["BranchName"] = request.getBranchName();
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
 * @summary Queries the authentication information of an RDS AI application instance.
 *
 * @description ### Applicable engine
 * RDS PostgreSQL
 * ### Related documentation
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
 * @summary Queries the endpoint information of an RDS AI application instance.
 *
 * @description ### Applicable engine
 * RDS PostgreSQL
 * ### Related documentation
 * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
 *
 * @param request DescribeInstanceEndpointsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstanceEndpointsResponse
 */
DescribeInstanceEndpointsResponse Client::describeInstanceEndpointsWithOptions(const DescribeInstanceEndpointsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBranchName()) {
    query["BranchName"] = request.getBranchName();
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
 * @summary Queries the endpoint information of an RDS AI application instance.
 *
 * @description ### Applicable engine
 * RDS PostgreSQL
 * ### Related documentation
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
 * @summary Queries the IP whitelist of an RDS AI application instance.
 *
 * @description ### Supported engine
 * RDS PostgreSQL
 * ### Related documentation
 * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
 *
 * @param request DescribeInstanceIpWhitelistRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstanceIpWhitelistResponse
 */
DescribeInstanceIpWhitelistResponse Client::describeInstanceIpWhitelistWithOptions(const DescribeInstanceIpWhitelistRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBranchName()) {
    query["BranchName"] = request.getBranchName();
  }

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
 * @summary Queries the IP whitelist of an RDS AI application instance.
 *
 * @description ### Supported engine
 * RDS PostgreSQL
 * ### Related documentation
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
 * @summary Queries the RAG Agent configuration of an RDS AI application instance.
 *
 * @param request DescribeInstanceRAGConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstanceRAGConfigResponse
 */
DescribeInstanceRAGConfigResponse Client::describeInstanceRAGConfigWithOptions(const DescribeInstanceRAGConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBranchName()) {
    query["BranchName"] = request.getBranchName();
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
 * @summary Queries the RAG Agent configuration of an RDS AI application instance.
 *
 * @param request DescribeInstanceRAGConfigRequest
 * @return DescribeInstanceRAGConfigResponse
 */
DescribeInstanceRAGConfigResponse Client::describeInstanceRAGConfig(const DescribeInstanceRAGConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstanceRAGConfigWithOptions(request, runtime);
}

/**
 * @summary Queries the SSL configuration of an RDS AI application instance.
 *
 * @description ### Supported engine
 * RDS PostgreSQL
 * ### Related documentation
 * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
 *
 * @param request DescribeInstanceSSLRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstanceSSLResponse
 */
DescribeInstanceSSLResponse Client::describeInstanceSSLWithOptions(const DescribeInstanceSSLRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBranchName()) {
    query["BranchName"] = request.getBranchName();
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
 * @summary Queries the SSL configuration of an RDS AI application instance.
 *
 * @description ### Supported engine
 * RDS PostgreSQL
 * ### Related documentation
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
 * @summary Queries the storage configuration of an RDS AI application instance.
 *
 * @description ### Applicable engine
 * RDS PostgreSQL
 * ### Related documentation
 * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
 * > Currently, only Object Storage Service (OSS) is supported.
 *
 * @param request DescribeInstanceStorageConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeInstanceStorageConfigResponse
 */
DescribeInstanceStorageConfigResponse Client::describeInstanceStorageConfigWithOptions(const DescribeInstanceStorageConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBranchName()) {
    query["BranchName"] = request.getBranchName();
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
 * @summary Queries the storage configuration of an RDS AI application instance.
 *
 * @description ### Applicable engine
 * RDS PostgreSQL
 * ### Related documentation
 * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
 * > Currently, only Object Storage Service (OSS) is supported.
 *
 * @param request DescribeInstanceStorageConfigRequest
 * @return DescribeInstanceStorageConfigResponse
 */
DescribeInstanceStorageConfigResponse Client::describeInstanceStorageConfig(const DescribeInstanceStorageConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeInstanceStorageConfigWithOptions(request, runtime);
}

/**
 * @summary Queries the token usage records of RDS AI Assistant Ultimate Edition.
 *
 * @description ### Applicable engine
 * [RDS AI Assistant Ultimate Edition](https://www.alibabacloud.com/help/en/rds/apsaradb-rds-for-mysql/rds-copilot-ultra)
 *
 * @param request DescribeMOTokenUsageDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeMOTokenUsageDetailResponse
 */
DescribeMOTokenUsageDetailResponse Client::describeMOTokenUsageDetailWithOptions(const DescribeMOTokenUsageDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiKey()) {
    query["ApiKey"] = request.getApiKey();
  }

  if (!!request.hasConsumerName()) {
    query["ConsumerName"] = request.getConsumerName();
  }

  if (!!request.hasCursor()) {
    query["Cursor"] = request.getCursor();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasModel()) {
    query["Model"] = request.getModel();
  }

  if (!!request.hasPage()) {
    query["Page"] = request.getPage();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.getRegion();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasUsageType()) {
    query["UsageType"] = request.getUsageType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeMOTokenUsageDetail"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeMOTokenUsageDetailResponse>();
}

/**
 * @summary Queries the token usage records of RDS AI Assistant Ultimate Edition.
 *
 * @description ### Applicable engine
 * [RDS AI Assistant Ultimate Edition](https://www.alibabacloud.com/help/en/rds/apsaradb-rds-for-mysql/rds-copilot-ultra)
 *
 * @param request DescribeMOTokenUsageDetailRequest
 * @return DescribeMOTokenUsageDetailResponse
 */
DescribeMOTokenUsageDetailResponse Client::describeMOTokenUsageDetail(const DescribeMOTokenUsageDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeMOTokenUsageDetailWithOptions(request, runtime);
}

/**
 * @summary Queries the token usage summary for a model operator instance.
 *
 * @description ### Applicable engine
 * [RDS AI Assistant Ultimate Edition](https://www.alibabacloud.com/help/en/rds/apsaradb-rds-for-mysql/rds-copilot-ultra)
 *
 * @param request DescribeMOTokenUsageSummaryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeMOTokenUsageSummaryResponse
 */
DescribeMOTokenUsageSummaryResponse Client::describeMOTokenUsageSummaryWithOptions(const DescribeMOTokenUsageSummaryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiKey()) {
    query["ApiKey"] = request.getApiKey();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasModel()) {
    query["Model"] = request.getModel();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasUsageType()) {
    query["UsageType"] = request.getUsageType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeMOTokenUsageSummary"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeMOTokenUsageSummaryResponse>();
}

/**
 * @summary Queries the token usage summary for a model operator instance.
 *
 * @description ### Applicable engine
 * [RDS AI Assistant Ultimate Edition](https://www.alibabacloud.com/help/en/rds/apsaradb-rds-for-mysql/rds-copilot-ultra)
 *
 * @param request DescribeMOTokenUsageSummaryRequest
 * @return DescribeMOTokenUsageSummaryResponse
 */
DescribeMOTokenUsageSummaryResponse Client::describeMOTokenUsageSummary(const DescribeMOTokenUsageSummaryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeMOTokenUsageSummaryWithOptions(request, runtime);
}

/**
 * @summary Queries the status or download link of an asynchronous CSV export task for MO usage details.
 *
 * @description ### Applicable engine
 * [RDS AI Assistant Ultimate Edition](https://www.alibabacloud.com/help/en/rds/apsaradb-rds-for-mysql/rds-copilot-ultra)
 *
 * @param request DescribeMOUsageDetailExportRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeMOUsageDetailExportResponse
 */
DescribeMOUsageDetailExportResponse Client::describeMOUsageDetailExportWithOptions(const DescribeMOUsageDetailExportRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeMOUsageDetailExport"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeMOUsageDetailExportResponse>();
}

/**
 * @summary Queries the status or download link of an asynchronous CSV export task for MO usage details.
 *
 * @description ### Applicable engine
 * [RDS AI Assistant Ultimate Edition](https://www.alibabacloud.com/help/en/rds/apsaradb-rds-for-mysql/rds-copilot-ultra)
 *
 * @param request DescribeMOUsageDetailExportRequest
 * @return DescribeMOUsageDetailExportResponse
 */
DescribeMOUsageDetailExportResponse Client::describeMOUsageDetailExport(const DescribeMOUsageDetailExportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeMOUsageDetailExportWithOptions(request, runtime);
}

/**
 * @summary Queries the basic information and usage of an RDS AI Assistant Ultimate Edition instance.
 *
 * @description ### Applicable engine
 * [RDS AI Assistant Ultimate Edition](https://www.alibabacloud.com/help/en/rds/apsaradb-rds-for-mysql/rds-copilot-ultra)
 *
 * @param request DescribeModelOperatorRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeModelOperatorResponse
 */
DescribeModelOperatorResponse Client::describeModelOperatorWithOptions(const DescribeModelOperatorRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasRegion()) {
    query["Region"] = request.getRegion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeModelOperator"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeModelOperatorResponse>();
}

/**
 * @summary Queries the basic information and usage of an RDS AI Assistant Ultimate Edition instance.
 *
 * @description ### Applicable engine
 * [RDS AI Assistant Ultimate Edition](https://www.alibabacloud.com/help/en/rds/apsaradb-rds-for-mysql/rds-copilot-ultra)
 *
 * @param request DescribeModelOperatorRequest
 * @return DescribeModelOperatorResponse
 */
DescribeModelOperatorResponse Client::describeModelOperator(const DescribeModelOperatorRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeModelOperatorWithOptions(request, runtime);
}

/**
 * @summary Queries instance monitoring data of an RDS AI Assistant Ultimate Edition instance.
 *
 * @description ### Applicable engine
 * [RDS AI Assistant Ultimate Edition](https://www.alibabacloud.com/help/en/rds/apsaradb-rds-for-mysql/rds-copilot-ultra)
 *
 * @param tmpReq DescribeMonitorDataRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeMonitorDataResponse
 */
DescribeMonitorDataResponse Client::describeMonitorDataWithOptions(const DescribeMonitorDataRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  DescribeMonitorDataShrinkRequest request = DescribeMonitorDataShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasApiKeyName()) {
    request.setApiKeyNameShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getApiKeyName(), "ApiKeyName", "json"));
  }

  json query = {};
  if (!!request.hasApiKeyNameShrink()) {
    query["ApiKeyName"] = request.getApiKeyNameShrink();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasInterval()) {
    query["Interval"] = request.getInterval();
  }

  if (!!request.hasMetric()) {
    query["Metric"] = request.getMetric();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeMonitorData"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeMonitorDataResponse>();
}

/**
 * @summary Queries instance monitoring data of an RDS AI Assistant Ultimate Edition instance.
 *
 * @description ### Applicable engine
 * [RDS AI Assistant Ultimate Edition](https://www.alibabacloud.com/help/en/rds/apsaradb-rds-for-mysql/rds-copilot-ultra)
 *
 * @param request DescribeMonitorDataRequest
 * @return DescribeMonitorDataResponse
 */
DescribeMonitorDataResponse Client::describeMonitorData(const DescribeMonitorDataRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeMonitorDataWithOptions(request, runtime);
}

/**
 * @summary Queries the list of sandbox templates used to create Supabase sandboxes.
 *
 * @description ### Applicable engine
 * RDS Supabase
 * ### Related documentation
 * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
 *
 * @param request DescribeSandboxTemplatesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeSandboxTemplatesResponse
 */
DescribeSandboxTemplatesResponse Client::describeSandboxTemplatesWithOptions(const DescribeSandboxTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBranchName()) {
    query["BranchName"] = request.getBranchName();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
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

  if (!!request.hasTemplateName()) {
    query["TemplateName"] = request.getTemplateName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeSandboxTemplates"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeSandboxTemplatesResponse>();
}

/**
 * @summary Queries the list of sandbox templates used to create Supabase sandboxes.
 *
 * @description ### Applicable engine
 * RDS Supabase
 * ### Related documentation
 * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
 *
 * @param request DescribeSandboxTemplatesRequest
 * @return DescribeSandboxTemplatesResponse
 */
DescribeSandboxTemplatesResponse Client::describeSandboxTemplates(const DescribeSandboxTemplatesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeSandboxTemplatesWithOptions(request, runtime);
}

/**
 * @summary Queries the whitelist of an RDS AI Assistant Ultimate Edition instance.
 *
 * @description ### Applicable engine
 * [RDS AI Assistant Ultimate Edition](https://www.alibabacloud.com/help/en/rds/apsaradb-rds-for-mysql/rds-copilot-ultra)
 *
 * @param request DescribeWhitelistIpsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeWhitelistIpsResponse
 */
DescribeWhitelistIpsResponse Client::describeWhitelistIpsWithOptions(const DescribeWhitelistIpsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeWhitelistIps"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeWhitelistIpsResponse>();
}

/**
 * @summary Queries the whitelist of an RDS AI Assistant Ultimate Edition instance.
 *
 * @description ### Applicable engine
 * [RDS AI Assistant Ultimate Edition](https://www.alibabacloud.com/help/en/rds/apsaradb-rds-for-mysql/rds-copilot-ultra)
 *
 * @param request DescribeWhitelistIpsRequest
 * @return DescribeWhitelistIpsResponse
 */
DescribeWhitelistIpsResponse Client::describeWhitelistIps(const DescribeWhitelistIpsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeWhitelistIpsWithOptions(request, runtime);
}

/**
 * @summary Disables the sandbox and Edge Routine capabilities of a Supabase instance. Note: This operation deletes all sandboxes and Edge Routines of the instance. Fully assess the business risks before performing this operation.
 *
 * @description Disables the sandbox and Edge Routine capabilities of a Supabase instance.
 * >Notice: This operation deletes all sandboxes and Edge Routines of the Supabase instance. Fully assess the business risks before performing this operation.
 *
 * @param request DisableAgentRuntimeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DisableAgentRuntimeResponse
 */
DisableAgentRuntimeResponse Client::disableAgentRuntimeWithOptions(const DisableAgentRuntimeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBranchName()) {
    query["BranchName"] = request.getBranchName();
  }

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
    {"action" , "DisableAgentRuntime"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DisableAgentRuntimeResponse>();
}

/**
 * @summary Disables the sandbox and Edge Routine capabilities of a Supabase instance. Note: This operation deletes all sandboxes and Edge Routines of the instance. Fully assess the business risks before performing this operation.
 *
 * @description Disables the sandbox and Edge Routine capabilities of a Supabase instance.
 * >Notice: This operation deletes all sandboxes and Edge Routines of the Supabase instance. Fully assess the business risks before performing this operation.
 *
 * @param request DisableAgentRuntimeRequest
 * @return DisableAgentRuntimeResponse
 */
DisableAgentRuntimeResponse Client::disableAgentRuntime(const DisableAgentRuntimeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return disableAgentRuntimeWithOptions(request, runtime);
}

/**
 * @summary Enables the sandbox and Edge Routine capabilities for a Supabase instance. Read the operation description before you call this operation.
 *
 * @description During the public preview, the sandbox and Edge Routine features are free of charge.
 * ### Before you begin
 * Before you use this feature, [authorize the service-linked role](https://api.aliyun.com/api/ResourceManager/2020-03-31/CreateServiceLinkedRole?spm=api-workbench.API%20Document.0.0.4ea75094rJgPzK&RegionId=cn-beijing&tab=DEBUG&params=%7B%2522ServiceName%2522:%2522supabase.rdsai.aliyuncs.com%2522%7D&sdkStyle=old). The service-linked role used is [AliyunServiceRoleForRDSAISupabase](https://www.alibabacloud.com/help/en/ram/product-overview/services-that-work-with-service-linked-roles).
 *
 * @param request EnableAgentRuntimeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EnableAgentRuntimeResponse
 */
EnableAgentRuntimeResponse Client::enableAgentRuntimeWithOptions(const EnableAgentRuntimeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBranchName()) {
    query["BranchName"] = request.getBranchName();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasSecurityGroupId()) {
    query["SecurityGroupId"] = request.getSecurityGroupId();
  }

  if (!!request.hasVSwitchId()) {
    query["VSwitchId"] = request.getVSwitchId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "EnableAgentRuntime"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EnableAgentRuntimeResponse>();
}

/**
 * @summary Enables the sandbox and Edge Routine capabilities for a Supabase instance. Read the operation description before you call this operation.
 *
 * @description During the public preview, the sandbox and Edge Routine features are free of charge.
 * ### Before you begin
 * Before you use this feature, [authorize the service-linked role](https://api.aliyun.com/api/ResourceManager/2020-03-31/CreateServiceLinkedRole?spm=api-workbench.API%20Document.0.0.4ea75094rJgPzK&RegionId=cn-beijing&tab=DEBUG&params=%7B%2522ServiceName%2522:%2522supabase.rdsai.aliyuncs.com%2522%7D&sdkStyle=old). The service-linked role used is [AliyunServiceRoleForRDSAISupabase](https://www.alibabacloud.com/help/en/ram/product-overview/services-that-work-with-service-linked-roles).
 *
 * @param request EnableAgentRuntimeRequest
 * @return EnableAgentRuntimeResponse
 */
EnableAgentRuntimeResponse Client::enableAgentRuntime(const EnableAgentRuntimeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return enableAgentRuntimeWithOptions(request, runtime);
}

/**
 * @summary Retrieves the list of large language models supported by the current RDS Supabase AI gateway.
 *
 * @description ### Applicable engine
 * RDS Supabase.
 *
 * @param request GetAvailableLLMModelsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetAvailableLLMModelsResponse
 */
GetAvailableLLMModelsResponse Client::getAvailableLLMModelsWithOptions(const GetAvailableLLMModelsRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "GetAvailableLLMModels"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetAvailableLLMModelsResponse>();
}

/**
 * @summary Retrieves the list of large language models supported by the current RDS Supabase AI gateway.
 *
 * @description ### Applicable engine
 * RDS Supabase.
 *
 * @param request GetAvailableLLMModelsRequest
 * @return GetAvailableLLMModelsResponse
 */
GetAvailableLLMModelsResponse Client::getAvailableLLMModels(const GetAvailableLLMModelsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getAvailableLLMModelsWithOptions(request, runtime);
}

/**
 * @summary Retrieves the available models for a session.
 *
 * @param request GetChatModelRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetChatModelResponse
 */
GetChatModelResponse Client::getChatModelWithOptions(const GetChatModelRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "GetChatModel"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetChatModelResponse>();
}

/**
 * @summary Retrieves the available models for a session.
 *
 * @param request GetChatModelRequest
 * @return GetChatModelResponse
 */
GetChatModelResponse Client::getChatModel(const GetChatModelRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getChatModelWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of a datasource configuration.
 *
 * @description Retrieves the details of a connection.
 *
 * @param request GetContextDatabaseSyncConnectionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetContextDatabaseSyncConnectionResponse
 */
GetContextDatabaseSyncConnectionResponse Client::getContextDatabaseSyncConnectionWithOptions(const GetContextDatabaseSyncConnectionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConnectionId()) {
    query["ConnectionId"] = request.getConnectionId();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetContextDatabaseSyncConnection"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetContextDatabaseSyncConnectionResponse>();
}

/**
 * @summary Retrieves the details of a datasource configuration.
 *
 * @description Retrieves the details of a connection.
 *
 * @param request GetContextDatabaseSyncConnectionRequest
 * @return GetContextDatabaseSyncConnectionResponse
 */
GetContextDatabaseSyncConnectionResponse Client::getContextDatabaseSyncConnection(const GetContextDatabaseSyncConnectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getContextDatabaseSyncConnectionWithOptions(request, runtime);
}

/**
 * @summary Queries the authorization scope of a data source.
 *
 * @description Queries the authorization scope of a connection.
 *
 * @param request GetContextDatabaseSyncConnectionAuthorizationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetContextDatabaseSyncConnectionAuthorizationResponse
 */
GetContextDatabaseSyncConnectionAuthorizationResponse Client::getContextDatabaseSyncConnectionAuthorizationWithOptions(const GetContextDatabaseSyncConnectionAuthorizationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConnectionId()) {
    query["ConnectionId"] = request.getConnectionId();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetContextDatabaseSyncConnectionAuthorization"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetContextDatabaseSyncConnectionAuthorizationResponse>();
}

/**
 * @summary Queries the authorization scope of a data source.
 *
 * @description Queries the authorization scope of a connection.
 *
 * @param request GetContextDatabaseSyncConnectionAuthorizationRequest
 * @return GetContextDatabaseSyncConnectionAuthorizationResponse
 */
GetContextDatabaseSyncConnectionAuthorizationResponse Client::getContextDatabaseSyncConnectionAuthorization(const GetContextDatabaseSyncConnectionAuthorizationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getContextDatabaseSyncConnectionAuthorizationWithOptions(request, runtime);
}

/**
 * @summary Queries the status of a discovery task by task ID.
 *
 * @description Queries the status of a discovery task by task ID.
 *
 * @param request GetContextDatabaseSyncDiscoveryTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetContextDatabaseSyncDiscoveryTaskResponse
 */
GetContextDatabaseSyncDiscoveryTaskResponse Client::getContextDatabaseSyncDiscoveryTaskWithOptions(const GetContextDatabaseSyncDiscoveryTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetContextDatabaseSyncDiscoveryTask"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetContextDatabaseSyncDiscoveryTaskResponse>();
}

/**
 * @summary Queries the status of a discovery task by task ID.
 *
 * @description Queries the status of a discovery task by task ID.
 *
 * @param request GetContextDatabaseSyncDiscoveryTaskRequest
 * @return GetContextDatabaseSyncDiscoveryTaskResponse
 */
GetContextDatabaseSyncDiscoveryTaskResponse Client::getContextDatabaseSyncDiscoveryTask(const GetContextDatabaseSyncDiscoveryTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getContextDatabaseSyncDiscoveryTaskWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of an import job.
 *
 * @description Retrieves the details of a job.
 *
 * @param request GetContextDatabaseSyncJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetContextDatabaseSyncJobResponse
 */
GetContextDatabaseSyncJobResponse Client::getContextDatabaseSyncJobWithOptions(const GetContextDatabaseSyncJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetContextDatabaseSyncJob"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetContextDatabaseSyncJobResponse>();
}

/**
 * @summary Retrieves the details of an import job.
 *
 * @description Retrieves the details of a job.
 *
 * @param request GetContextDatabaseSyncJobRequest
 * @return GetContextDatabaseSyncJobResponse
 */
GetContextDatabaseSyncJobResponse Client::getContextDatabaseSyncJob(const GetContextDatabaseSyncJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getContextDatabaseSyncJobWithOptions(request, runtime);
}

/**
 * @summary Queries whether an import task can be started.
 *
 * @description Queries whether a job can be started.
 *
 * @param request GetContextDatabaseSyncJobReadinessRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetContextDatabaseSyncJobReadinessResponse
 */
GetContextDatabaseSyncJobReadinessResponse Client::getContextDatabaseSyncJobReadinessWithOptions(const GetContextDatabaseSyncJobReadinessRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetContextDatabaseSyncJobReadiness"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetContextDatabaseSyncJobReadinessResponse>();
}

/**
 * @summary Queries whether an import task can be started.
 *
 * @description Queries whether a job can be started.
 *
 * @param request GetContextDatabaseSyncJobReadinessRequest
 * @return GetContextDatabaseSyncJobReadinessResponse
 */
GetContextDatabaseSyncJobReadinessResponse Client::getContextDatabaseSyncJobReadiness(const GetContextDatabaseSyncJobReadinessRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getContextDatabaseSyncJobReadinessWithOptions(request, runtime);
}

/**
 * @summary Queries the scheduling configuration of an import task.
 *
 * @description Queries the scheduling configuration of a job.
 *
 * @param request GetContextDatabaseSyncJobScheduleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetContextDatabaseSyncJobScheduleResponse
 */
GetContextDatabaseSyncJobScheduleResponse Client::getContextDatabaseSyncJobScheduleWithOptions(const GetContextDatabaseSyncJobScheduleRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetContextDatabaseSyncJobSchedule"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetContextDatabaseSyncJobScheduleResponse>();
}

/**
 * @summary Queries the scheduling configuration of an import task.
 *
 * @description Queries the scheduling configuration of a job.
 *
 * @param request GetContextDatabaseSyncJobScheduleRequest
 * @return GetContextDatabaseSyncJobScheduleResponse
 */
GetContextDatabaseSyncJobScheduleResponse Client::getContextDatabaseSyncJobSchedule(const GetContextDatabaseSyncJobScheduleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getContextDatabaseSyncJobScheduleWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of a run.
 *
 * @description Retrieves the details of a run.
 *
 * @param request GetContextDatabaseSyncRunRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetContextDatabaseSyncRunResponse
 */
GetContextDatabaseSyncRunResponse Client::getContextDatabaseSyncRunWithOptions(const GetContextDatabaseSyncRunRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRunId()) {
    query["RunId"] = request.getRunId();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetContextDatabaseSyncRun"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetContextDatabaseSyncRunResponse>();
}

/**
 * @summary Retrieves the details of a run.
 *
 * @description Retrieves the details of a run.
 *
 * @param request GetContextDatabaseSyncRunRequest
 * @return GetContextDatabaseSyncRunResponse
 */
GetContextDatabaseSyncRunResponse Client::getContextDatabaseSyncRun(const GetContextDatabaseSyncRunRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getContextDatabaseSyncRunWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of a data selection scope.
 *
 * @description Retrieves the details of a source.
 *
 * @param request GetContextDatabaseSyncSourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetContextDatabaseSyncSourceResponse
 */
GetContextDatabaseSyncSourceResponse Client::getContextDatabaseSyncSourceWithOptions(const GetContextDatabaseSyncSourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSourceId()) {
    query["SourceId"] = request.getSourceId();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetContextDatabaseSyncSource"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetContextDatabaseSyncSourceResponse>();
}

/**
 * @summary Retrieves the details of a data selection scope.
 *
 * @description Retrieves the details of a source.
 *
 * @param request GetContextDatabaseSyncSourceRequest
 * @return GetContextDatabaseSyncSourceResponse
 */
GetContextDatabaseSyncSourceResponse Client::getContextDatabaseSyncSource(const GetContextDatabaseSyncSourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getContextDatabaseSyncSourceWithOptions(request, runtime);
}

/**
 * @summary Queries the current node selection in the data selection scope.
 *
 * @description Queries the current node selection of the source.
 *
 * @param request GetContextDatabaseSyncSourceSelectionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetContextDatabaseSyncSourceSelectionResponse
 */
GetContextDatabaseSyncSourceSelectionResponse Client::getContextDatabaseSyncSourceSelectionWithOptions(const GetContextDatabaseSyncSourceSelectionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSourceId()) {
    query["SourceId"] = request.getSourceId();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetContextDatabaseSyncSourceSelection"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetContextDatabaseSyncSourceSelectionResponse>();
}

/**
 * @summary Queries the current node selection in the data selection scope.
 *
 * @description Queries the current node selection of the source.
 *
 * @param request GetContextDatabaseSyncSourceSelectionRequest
 * @return GetContextDatabaseSyncSourceSelectionResponse
 */
GetContextDatabaseSyncSourceSelectionResponse Client::getContextDatabaseSyncSourceSelection(const GetContextDatabaseSyncSourceSelectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getContextDatabaseSyncSourceSelectionWithOptions(request, runtime);
}

/**
 * @summary Queries the historical conversations of a user.
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

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
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
 * @summary Queries the historical conversations of a user.
 *
 * @param request GetConversationsRequest
 * @return GetConversationsResponse
 */
GetConversationsResponse Client::getConversations(const GetConversationsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getConversationsWithOptions(request, runtime);
}

/**
 * @summary Queries a dedicated agent created by the user.
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
 * @summary Queries a dedicated agent created by the user.
 *
 * @param request GetCustomAgentRequest
 * @return GetCustomAgentResponse
 */
GetCustomAgentResponse Client::getCustomAgent(const GetCustomAgentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCustomAgentWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of an inspection report by report ID.
 *
 * @param request GetInspectionReportRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetInspectionReportResponse
 */
GetInspectionReportResponse Client::getInspectionReportWithOptions(const GetInspectionReportRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasReportType()) {
    query["ReportType"] = request.getReportType();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetInspectionReport"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetInspectionReportResponse>();
}

/**
 * @summary Retrieves the details of an inspection report by report ID.
 *
 * @param request GetInspectionReportRequest
 * @return GetInspectionReportResponse
 */
GetInspectionReportResponse Client::getInspectionReport(const GetInspectionReportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getInspectionReportWithOptions(request, runtime);
}

/**
 * @summary Queries the details of specific conversation messages.
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

  if (!!request.hasEventMode()) {
    query["EventMode"] = request.getEventMode();
  }

  if (!!request.hasFirstId()) {
    query["FirstId"] = request.getFirstId();
  }

  if (!!request.hasLimit()) {
    query["Limit"] = request.getLimit();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
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
 * @summary Queries the details of specific conversation messages.
 *
 * @param request GetMessagesRequest
 * @return GetMessagesResponse
 */
GetMessagesResponse Client::getMessages(const GetMessagesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMessagesWithOptions(request, runtime);
}

/**
 * @summary Retrieves order information for RDS AI Assistant Ultimate Edition.
 *
 * @description ### Applicable engine
 * [RDS AI Assistant Ultimate Edition](https://www.alibabacloud.com/help/en/rds/apsaradb-rds-for-mysql/rds-copilot-ultra)
 *
 * @param request GetModelOperatorOrderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetModelOperatorOrderResponse
 */
GetModelOperatorOrderResponse Client::getModelOperatorOrderWithOptions(const GetModelOperatorOrderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegion()) {
    query["Region"] = request.getRegion();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetModelOperatorOrder"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetModelOperatorOrderResponse>();
}

/**
 * @summary Retrieves order information for RDS AI Assistant Ultimate Edition.
 *
 * @description ### Applicable engine
 * [RDS AI Assistant Ultimate Edition](https://www.alibabacloud.com/help/en/rds/apsaradb-rds-for-mysql/rds-copilot-ultra)
 *
 * @param request GetModelOperatorOrderRequest
 * @return GetModelOperatorOrderResponse
 */
GetModelOperatorOrderResponse Client::getModelOperatorOrder(const GetModelOperatorOrderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getModelOperatorOrderWithOptions(request, runtime);
}

/**
 * @summary Queries the list of all instance IDs included in a specified scheduled inspection configuration.
 *
 * @param request GetScheduledInstancesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetScheduledInstancesResponse
 */
GetScheduledInstancesResponse Client::getScheduledInstancesWithOptions(const GetScheduledInstancesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasScheduledId()) {
    query["ScheduledId"] = request.getScheduledId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetScheduledInstances"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetScheduledInstancesResponse>();
}

/**
 * @summary Queries the list of all instance IDs included in a specified scheduled inspection configuration.
 *
 * @param request GetScheduledInstancesRequest
 * @return GetScheduledInstancesResponse
 */
GetScheduledInstancesResponse Client::getScheduledInstances(const GetScheduledInstancesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getScheduledInstancesWithOptions(request, runtime);
}

/**
 * @summary Queries all inspection reports under a specified scheduled task, with support for filtering by time range and pagination.
 *
 * @param request GetScheduledReportsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetScheduledReportsResponse
 */
GetScheduledReportsResponse Client::getScheduledReportsWithOptions(const GetScheduledReportsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasScheduledId()) {
    query["ScheduledId"] = request.getScheduledId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetScheduledReports"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetScheduledReportsResponse>();
}

/**
 * @summary Queries all inspection reports under a specified scheduled task, with support for filtering by time range and pagination.
 *
 * @param request GetScheduledReportsRequest
 * @return GetScheduledReportsResponse
 */
GetScheduledReportsResponse Client::getScheduledReports(const GetScheduledReportsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getScheduledReportsWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of a specified skill. You can retrieve your own skills or system preset skills.
 *
 * @param request GetSkillRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSkillResponse
 */
GetSkillResponse Client::getSkillWithOptions(const GetSkillRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDownload()) {
    query["Download"] = request.getDownload();
  }

  if (!!request.hasLanguage()) {
    query["Language"] = request.getLanguage();
  }

  if (!!request.hasPath()) {
    query["Path"] = request.getPath();
  }

  if (!!request.hasSkillId()) {
    query["SkillId"] = request.getSkillId();
  }

  if (!!request.hasVersionId()) {
    query["VersionId"] = request.getVersionId();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSkill"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSkillResponse>();
}

/**
 * @summary Retrieves the details of a specified skill. You can retrieve your own skills or system preset skills.
 *
 * @param request GetSkillRequest
 * @return GetSkillResponse
 */
GetSkillResponse Client::getSkill(const GetSkillRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSkillWithOptions(request, runtime);
}

/**
 * @summary Queries the list of individual inspection reports for all non-scheduled tasks under a specified user, with pagination support.
 *
 * @param request GetStandAloneReportsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetStandAloneReportsResponse
 */
GetStandAloneReportsResponse Client::getStandAloneReportsWithOptions(const GetStandAloneReportsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasReportType()) {
    query["ReportType"] = request.getReportType();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetStandAloneReports"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetStandAloneReportsResponse>();
}

/**
 * @summary Queries the list of individual inspection reports for all non-scheduled tasks under a specified user, with pagination support.
 *
 * @param request GetStandAloneReportsRequest
 * @return GetStandAloneReportsResponse
 */
GetStandAloneReportsResponse Client::getStandAloneReports(const GetStandAloneReportsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getStandAloneReportsWithOptions(request, runtime);
}

/**
 * @summary Queries custom API keys.
 *
 * @description ### Applicable engine
 * [RDS AI Assistant Ultimate Edition](https://www.alibabacloud.com/help/en/rds/apsaradb-rds-for-mysql/rds-copilot-ultra)
 *
 * @param request ListApiKeysRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListApiKeysResponse
 */
ListApiKeysResponse Client::listApiKeysWithOptions(const ListApiKeysRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasPage()) {
    query["Page"] = request.getPage();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListApiKeys"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListApiKeysResponse>();
}

/**
 * @summary Queries custom API keys.
 *
 * @description ### Applicable engine
 * [RDS AI Assistant Ultimate Edition](https://www.alibabacloud.com/help/en/rds/apsaradb-rds-for-mysql/rds-copilot-ultra)
 *
 * @param request ListApiKeysRequest
 * @return ListApiKeysResponse
 */
ListApiKeysResponse Client::listApiKeys(const ListApiKeysRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listApiKeysWithOptions(request, runtime);
}

/**
 * @summary Lists the API keys for a context database.
 *
 * @description Lists the API keys under a specified member. The plaintext key values are not returned.
 *
 * @param request ListContextDatabaseApiKeysRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListContextDatabaseApiKeysResponse
 */
ListContextDatabaseApiKeysResponse Client::listContextDatabaseApiKeysWithOptions(const ListContextDatabaseApiKeysRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasMemberId()) {
    query["MemberId"] = request.getMemberId();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListContextDatabaseApiKeys"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListContextDatabaseApiKeysResponse>();
}

/**
 * @summary Lists the API keys for a context database.
 *
 * @description Lists the API keys under a specified member. The plaintext key values are not returned.
 *
 * @param request ListContextDatabaseApiKeysRequest
 * @return ListContextDatabaseApiKeysResponse
 */
ListContextDatabaseApiKeysResponse Client::listContextDatabaseApiKeys(const ListContextDatabaseApiKeysRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listContextDatabaseApiKeysWithOptions(request, runtime);
}

/**
 * @summary Lists context database members.
 *
 * @description Lists all members in a specified workspace. Each member includes a list of API keys (plaintext values are not returned).
 *
 * @param request ListContextDatabaseMembersRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListContextDatabaseMembersResponse
 */
ListContextDatabaseMembersResponse Client::listContextDatabaseMembersWithOptions(const ListContextDatabaseMembersRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListContextDatabaseMembers"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListContextDatabaseMembersResponse>();
}

/**
 * @summary Lists context database members.
 *
 * @description Lists all members in a specified workspace. Each member includes a list of API keys (plaintext values are not returned).
 *
 * @param request ListContextDatabaseMembersRequest
 * @return ListContextDatabaseMembersResponse
 */
ListContextDatabaseMembersResponse Client::listContextDatabaseMembers(const ListContextDatabaseMembersRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listContextDatabaseMembersWithOptions(request, runtime);
}

/**
 * @summary Lists the datasource configurations in a workspace.
 *
 * @description The list operation returns paginated results by default. Page and PageSize are optional parameters.
 * The Data list field in the response is returned as an array. Total indicates the total number of records that match the specified conditions.
 *
 * @param request ListContextDatabaseSyncConnectionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListContextDatabaseSyncConnectionsResponse
 */
ListContextDatabaseSyncConnectionsResponse Client::listContextDatabaseSyncConnectionsWithOptions(const ListContextDatabaseSyncConnectionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPage()) {
    query["Page"] = request.getPage();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPluginId()) {
    query["PluginId"] = request.getPluginId();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListContextDatabaseSyncConnections"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListContextDatabaseSyncConnectionsResponse>();
}

/**
 * @summary Lists the datasource configurations in a workspace.
 *
 * @description The list operation returns paginated results by default. Page and PageSize are optional parameters.
 * The Data list field in the response is returned as an array. Total indicates the total number of records that match the specified conditions.
 *
 * @param request ListContextDatabaseSyncConnectionsRequest
 * @return ListContextDatabaseSyncConnectionsResponse
 */
ListContextDatabaseSyncConnectionsResponse Client::listContextDatabaseSyncConnections(const ListContextDatabaseSyncConnectionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listContextDatabaseSyncConnectionsWithOptions(request, runtime);
}

/**
 * @summary Lists the documents associated with an import task.
 *
 * @description By default, this operation returns paginated results. The Page and PageSize parameters are optional. The Data field in the response is returned as an array, and the Total field indicates the total number of matching entries.
 *
 * @param request ListContextDatabaseSyncJobDocumentsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListContextDatabaseSyncJobDocumentsResponse
 */
ListContextDatabaseSyncJobDocumentsResponse Client::listContextDatabaseSyncJobDocumentsWithOptions(const ListContextDatabaseSyncJobDocumentsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  if (!!request.hasPage()) {
    query["Page"] = request.getPage();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListContextDatabaseSyncJobDocuments"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListContextDatabaseSyncJobDocumentsResponse>();
}

/**
 * @summary Lists the documents associated with an import task.
 *
 * @description By default, this operation returns paginated results. The Page and PageSize parameters are optional. The Data field in the response is returned as an array, and the Total field indicates the total number of matching entries.
 *
 * @param request ListContextDatabaseSyncJobDocumentsRequest
 * @return ListContextDatabaseSyncJobDocumentsResponse
 */
ListContextDatabaseSyncJobDocumentsResponse Client::listContextDatabaseSyncJobDocuments(const ListContextDatabaseSyncJobDocumentsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listContextDatabaseSyncJobDocumentsWithOptions(request, runtime);
}

/**
 * @summary Lists the exclusions of an import task.
 *
 * @description This operation uses pagination by default. Page and PageSize are optional parameters.
 * The Data field in the response returns an array. Total indicates the total number of records that match the specified conditions.
 *
 * @param request ListContextDatabaseSyncJobExclusionsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListContextDatabaseSyncJobExclusionsResponse
 */
ListContextDatabaseSyncJobExclusionsResponse Client::listContextDatabaseSyncJobExclusionsWithOptions(const ListContextDatabaseSyncJobExclusionsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListContextDatabaseSyncJobExclusions"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListContextDatabaseSyncJobExclusionsResponse>();
}

/**
 * @summary Lists the exclusions of an import task.
 *
 * @description This operation uses pagination by default. Page and PageSize are optional parameters.
 * The Data field in the response returns an array. Total indicates the total number of records that match the specified conditions.
 *
 * @param request ListContextDatabaseSyncJobExclusionsRequest
 * @return ListContextDatabaseSyncJobExclusionsResponse
 */
ListContextDatabaseSyncJobExclusionsResponse Client::listContextDatabaseSyncJobExclusions(const ListContextDatabaseSyncJobExclusionsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listContextDatabaseSyncJobExclusionsWithOptions(request, runtime);
}

/**
 * @summary Lists import tasks.
 *
 * @description The list operation returns paginated results by default. Page and PageSize are optional parameters.
 * The Data list field in the response is returned as an array. Total indicates the total number of records that match the specified conditions.
 *
 * @param request ListContextDatabaseSyncJobsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListContextDatabaseSyncJobsResponse
 */
ListContextDatabaseSyncJobsResponse Client::listContextDatabaseSyncJobsWithOptions(const ListContextDatabaseSyncJobsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKnowledgeBaseId()) {
    query["KnowledgeBaseId"] = request.getKnowledgeBaseId();
  }

  if (!!request.hasPage()) {
    query["Page"] = request.getPage();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListContextDatabaseSyncJobs"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListContextDatabaseSyncJobsResponse>();
}

/**
 * @summary Lists import tasks.
 *
 * @description The list operation returns paginated results by default. Page and PageSize are optional parameters.
 * The Data list field in the response is returned as an array. Total indicates the total number of records that match the specified conditions.
 *
 * @param request ListContextDatabaseSyncJobsRequest
 * @return ListContextDatabaseSyncJobsResponse
 */
ListContextDatabaseSyncJobsResponse Client::listContextDatabaseSyncJobs(const ListContextDatabaseSyncJobsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listContextDatabaseSyncJobsWithOptions(request, runtime);
}

/**
 * @summary Lists available synchronization plugins.
 *
 * @description This operation returns a fixed-length array of available plugins in the workspace and does not support pagination.
 * The Data list field in the response is returned as an array, and Total indicates the total number of entries that meet the conditions.
 *
 * @param request ListContextDatabaseSyncPluginsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListContextDatabaseSyncPluginsResponse
 */
ListContextDatabaseSyncPluginsResponse Client::listContextDatabaseSyncPluginsWithOptions(const ListContextDatabaseSyncPluginsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListContextDatabaseSyncPlugins"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListContextDatabaseSyncPluginsResponse>();
}

/**
 * @summary Lists available synchronization plugins.
 *
 * @description This operation returns a fixed-length array of available plugins in the workspace and does not support pagination.
 * The Data list field in the response is returned as an array, and Total indicates the total number of entries that meet the conditions.
 *
 * @param request ListContextDatabaseSyncPluginsRequest
 * @return ListContextDatabaseSyncPluginsResponse
 */
ListContextDatabaseSyncPluginsResponse Client::listContextDatabaseSyncPlugins(const ListContextDatabaseSyncPluginsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listContextDatabaseSyncPluginsWithOptions(request, runtime);
}

/**
 * @summary Lists the run records.
 *
 * @description The list API returns paginated results by default. The Page and PageSize parameters are optional. Run records are a list of RunItems that show the processing results of each document in each import run.
 * The Data list field in the response is returned as an array, and Total indicates the total number of entries that meet the conditions.
 *
 * @param request ListContextDatabaseSyncRunItemsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListContextDatabaseSyncRunItemsResponse
 */
ListContextDatabaseSyncRunItemsResponse Client::listContextDatabaseSyncRunItemsWithOptions(const ListContextDatabaseSyncRunItemsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPage()) {
    query["Page"] = request.getPage();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRunId()) {
    query["RunId"] = request.getRunId();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListContextDatabaseSyncRunItems"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListContextDatabaseSyncRunItemsResponse>();
}

/**
 * @summary Lists the run records.
 *
 * @description The list API returns paginated results by default. The Page and PageSize parameters are optional. Run records are a list of RunItems that show the processing results of each document in each import run.
 * The Data list field in the response is returned as an array, and Total indicates the total number of entries that meet the conditions.
 *
 * @param request ListContextDatabaseSyncRunItemsRequest
 * @return ListContextDatabaseSyncRunItemsResponse
 */
ListContextDatabaseSyncRunItemsResponse Client::listContextDatabaseSyncRunItems(const ListContextDatabaseSyncRunItemsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listContextDatabaseSyncRunItemsWithOptions(request, runtime);
}

/**
 * @summary 列出 Run 日志
 *
 * @description 列表接口默认分页返回，Page 与 PageSize 为可选参数。
 * 响应中的 Data 列表字段使用数组返回，Total 表示符合条件的总条数。
 *
 * @param request ListContextDatabaseSyncRunLogsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListContextDatabaseSyncRunLogsResponse
 */
ListContextDatabaseSyncRunLogsResponse Client::listContextDatabaseSyncRunLogsWithOptions(const ListContextDatabaseSyncRunLogsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPage()) {
    query["Page"] = request.getPage();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasRunId()) {
    query["RunId"] = request.getRunId();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListContextDatabaseSyncRunLogs"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListContextDatabaseSyncRunLogsResponse>();
}

/**
 * @summary 列出 Run 日志
 *
 * @description 列表接口默认分页返回，Page 与 PageSize 为可选参数。
 * 响应中的 Data 列表字段使用数组返回，Total 表示符合条件的总条数。
 *
 * @param request ListContextDatabaseSyncRunLogsRequest
 * @return ListContextDatabaseSyncRunLogsResponse
 */
ListContextDatabaseSyncRunLogsResponse Client::listContextDatabaseSyncRunLogs(const ListContextDatabaseSyncRunLogsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listContextDatabaseSyncRunLogsWithOptions(request, runtime);
}

/**
 * @summary Lists the runs.
 *
 * @description By default, this operation returns paginated results. The Page and PageSize parameters are optional.
 * The Data field in the response is returned as an array, and the Total field indicates the total number of items that meet the query conditions.
 *
 * @param request ListContextDatabaseSyncRunsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListContextDatabaseSyncRunsResponse
 */
ListContextDatabaseSyncRunsResponse Client::listContextDatabaseSyncRunsWithOptions(const ListContextDatabaseSyncRunsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  if (!!request.hasPage()) {
    query["Page"] = request.getPage();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListContextDatabaseSyncRuns"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListContextDatabaseSyncRunsResponse>();
}

/**
 * @summary Lists the runs.
 *
 * @description By default, this operation returns paginated results. The Page and PageSize parameters are optional.
 * The Data field in the response is returned as an array, and the Total field indicates the total number of items that meet the query conditions.
 *
 * @param request ListContextDatabaseSyncRunsRequest
 * @return ListContextDatabaseSyncRunsResponse
 */
ListContextDatabaseSyncRunsResponse Client::listContextDatabaseSyncRuns(const ListContextDatabaseSyncRunsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listContextDatabaseSyncRunsWithOptions(request, runtime);
}

/**
 * @summary Lists the discovered tree nodes for the data selection scope.
 *
 * @description List operations return paginated results by default. Page and PageSize are optional parameters. The Data list field in the response is returned as an array, and Total indicates the total number of entries that meet the conditions.
 *
 * @param request ListContextDatabaseSyncSourceTreeNodesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListContextDatabaseSyncSourceTreeNodesResponse
 */
ListContextDatabaseSyncSourceTreeNodesResponse Client::listContextDatabaseSyncSourceTreeNodesWithOptions(const ListContextDatabaseSyncSourceTreeNodesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSourceId()) {
    query["SourceId"] = request.getSourceId();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListContextDatabaseSyncSourceTreeNodes"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListContextDatabaseSyncSourceTreeNodesResponse>();
}

/**
 * @summary Lists the discovered tree nodes for the data selection scope.
 *
 * @description List operations return paginated results by default. Page and PageSize are optional parameters. The Data list field in the response is returned as an array, and Total indicates the total number of entries that meet the conditions.
 *
 * @param request ListContextDatabaseSyncSourceTreeNodesRequest
 * @return ListContextDatabaseSyncSourceTreeNodesResponse
 */
ListContextDatabaseSyncSourceTreeNodesResponse Client::listContextDatabaseSyncSourceTreeNodes(const ListContextDatabaseSyncSourceTreeNodesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listContextDatabaseSyncSourceTreeNodesWithOptions(request, runtime);
}

/**
 * @summary Lists the data selection scopes.
 *
 * @description By default, the list operation returns paginated results. Page and PageSize are optional parameters. The Data list field in the response is returned as an array, and Total indicates the total number of entries that meet the conditions.
 *
 * @param request ListContextDatabaseSyncSourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListContextDatabaseSyncSourcesResponse
 */
ListContextDatabaseSyncSourcesResponse Client::listContextDatabaseSyncSourcesWithOptions(const ListContextDatabaseSyncSourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPage()) {
    query["Page"] = request.getPage();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListContextDatabaseSyncSources"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListContextDatabaseSyncSourcesResponse>();
}

/**
 * @summary Lists the data selection scopes.
 *
 * @description By default, the list operation returns paginated results. Page and PageSize are optional parameters. The Data list field in the response is returned as an array, and Total indicates the total number of entries that meet the conditions.
 *
 * @param request ListContextDatabaseSyncSourcesRequest
 * @return ListContextDatabaseSyncSourcesResponse
 */
ListContextDatabaseSyncSourcesResponse Client::listContextDatabaseSyncSources(const ListContextDatabaseSyncSourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listContextDatabaseSyncSourcesWithOptions(request, runtime);
}

/**
 * @summary Lists ContextDB workspaces.
 *
 * @description Lists ContextDB workspaces.
 *
 * @param request ListContextDatabaseWorkspacesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListContextDatabaseWorkspacesResponse
 */
ListContextDatabaseWorkspacesResponse Client::listContextDatabaseWorkspacesWithOptions(const ListContextDatabaseWorkspacesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListContextDatabaseWorkspaces"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListContextDatabaseWorkspacesResponse>();
}

/**
 * @summary Lists ContextDB workspaces.
 *
 * @description Lists ContextDB workspaces.
 *
 * @param request ListContextDatabaseWorkspacesRequest
 * @return ListContextDatabaseWorkspacesResponse
 */
ListContextDatabaseWorkspacesResponse Client::listContextDatabaseWorkspaces(const ListContextDatabaseWorkspacesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listContextDatabaseWorkspacesWithOptions(request, runtime);
}

/**
 * @summary Queries the list of dedicated agents created by the user.
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
 * @summary Queries the list of dedicated agents created by the user.
 *
 * @param request ListCustomAgentRequest
 * @return ListCustomAgentResponse
 */
ListCustomAgentResponse Client::listCustomAgent(const ListCustomAgentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCustomAgentWithOptions(request, runtime);
}

/**
 * @summary Queries the list of Agent tools for a user.
 *
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
 * @summary Queries the list of Agent tools for a user.
 *
 * @return ListCustomAgentToolsResponse
 */
ListCustomAgentToolsResponse Client::listCustomAgentTools() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCustomAgentToolsWithOptions(runtime);
}

/**
 * @summary Retrieves the AI gateway token usage for an RDS Supabase instance.
 *
 * @description ### Applicable engine
 * RDS Supabase.
 *
 * @param request ListLLMTokenUsageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListLLMTokenUsageResponse
 */
ListLLMTokenUsageResponse Client::listLLMTokenUsageWithOptions(const ListLLMTokenUsageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasModel()) {
    query["Model"] = request.getModel();
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
    {"action" , "ListLLMTokenUsage"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListLLMTokenUsageResponse>();
}

/**
 * @summary Retrieves the AI gateway token usage for an RDS Supabase instance.
 *
 * @description ### Applicable engine
 * RDS Supabase.
 *
 * @param request ListLLMTokenUsageRequest
 * @return ListLLMTokenUsageResponse
 */
ListLLMTokenUsageResponse Client::listLLMTokenUsage(const ListLLMTokenUsageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listLLMTokenUsageWithOptions(request, runtime);
}

/**
 * @summary Queries the list of basic information about all inspection configurations under a specified user UID.
 *
 * @param request ListScheduledTasksRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListScheduledTasksResponse
 */
ListScheduledTasksResponse Client::listScheduledTasksWithOptions(const ListScheduledTasksRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasScheduledId()) {
    query["ScheduledId"] = request.getScheduledId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListScheduledTasks"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListScheduledTasksResponse>();
}

/**
 * @summary Queries the list of basic information about all inspection configurations under a specified user UID.
 *
 * @param request ListScheduledTasksRequest
 * @return ListScheduledTasksResponse
 */
ListScheduledTasksResponse Client::listScheduledTasks(const ListScheduledTasksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listScheduledTasksWithOptions(request, runtime);
}

/**
 * @summary Retrieves the custom skills of the current user and all system-preset skills.
 *
 * @param request ListSkillRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListSkillResponse
 */
ListSkillResponse Client::listSkillWithOptions(const ListSkillRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasLanguage()) {
    query["Language"] = request.getLanguage();
  }

  if (!!request.hasPageNumber()) {
    query["PageNumber"] = request.getPageNumber();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasQuery()) {
    query["Query"] = request.getQuery();
  }

  if (!!request.hasScope()) {
    query["Scope"] = request.getScope();
  }

  if (!!request.hasSort()) {
    query["Sort"] = request.getSort();
  }

  if (!!request.hasSource()) {
    query["Source"] = request.getSource();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListSkill"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListSkillResponse>();
}

/**
 * @summary Retrieves the custom skills of the current user and all system-preset skills.
 *
 * @param request ListSkillRequest
 * @return ListSkillResponse
 */
ListSkillResponse Client::listSkill(const ListSkillRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listSkillWithOptions(request, runtime);
}

/**
 * @summary Modifies the modules of an RDS AI application instance.
 *
 * @description ### Applicable engine
 * RDS PostgreSQL
 * ### Related documentation
 * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
 *
 * @param tmpReq ModifyAppInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyAppInstanceResponse
 */
ModifyAppInstanceResponse Client::modifyAppInstanceWithOptions(const ModifyAppInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ModifyAppInstanceShrinkRequest request = ModifyAppInstanceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasComponents()) {
    request.setComponentsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getComponents(), "Components", "json"));
  }

  json query = {};
  if (!!request.hasBranchName()) {
    query["BranchName"] = request.getBranchName();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasComponentsShrink()) {
    query["Components"] = request.getComponentsShrink();
  }

  if (!!request.hasDBInstanceName()) {
    query["DBInstanceName"] = request.getDBInstanceName();
  }

  if (!!request.hasInstanceClass()) {
    query["InstanceClass"] = request.getInstanceClass();
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
    {"action" , "ModifyAppInstance"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyAppInstanceResponse>();
}

/**
 * @summary Modifies the modules of an RDS AI application instance.
 *
 * @description ### Applicable engine
 * RDS PostgreSQL
 * ### Related documentation
 * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
 *
 * @param request ModifyAppInstanceRequest
 * @return ModifyAppInstanceResponse
 */
ModifyAppInstanceResponse Client::modifyAppInstance(const ModifyAppInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyAppInstanceWithOptions(request, runtime);
}

/**
 * @summary Modifies the authentication configuration of an RDS AI application instance.
 *
 * @description ### Applicable engine
 * RDS PostgreSQL
 * ### Related documentation
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
  if (!!request.hasBranchName()) {
    query["BranchName"] = request.getBranchName();
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
 * @summary Modifies the authentication configuration of an RDS AI application instance.
 *
 * @description ### Applicable engine
 * RDS PostgreSQL
 * ### Related documentation
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
 * @summary Modifies the general configurations of an instance, such as network EIP and NAT configurations.
 *
 * @param request ModifyInstanceConfigRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyInstanceConfigResponse
 */
ModifyInstanceConfigResponse Client::modifyInstanceConfigWithOptions(const ModifyInstanceConfigRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBranchName()) {
    query["BranchName"] = request.getBranchName();
  }

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
 * @summary Modifies the general configurations of an instance, such as network EIP and NAT configurations.
 *
 * @param request ModifyInstanceConfigRequest
 * @return ModifyInstanceConfigResponse
 */
ModifyInstanceConfigResponse Client::modifyInstanceConfig(const ModifyInstanceConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyInstanceConfigWithOptions(request, runtime);
}

/**
 * @summary Modifies the IP whitelist of an RDS AI application instance.
 *
 * @description ### Supported engine
 * RDS PostgreSQL
 * ### Related documentation
 * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
 *
 * @param request ModifyInstanceIpWhitelistRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyInstanceIpWhitelistResponse
 */
ModifyInstanceIpWhitelistResponse Client::modifyInstanceIpWhitelistWithOptions(const ModifyInstanceIpWhitelistRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBranchName()) {
    query["BranchName"] = request.getBranchName();
  }

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
 * @summary Modifies the IP whitelist of an RDS AI application instance.
 *
 * @description ### Supported engine
 * RDS PostgreSQL
 * ### Related documentation
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
 * @summary Modifies the RAG Agent configuration of an RDS AI application instance.
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
  if (!!request.hasBranchName()) {
    query["BranchName"] = request.getBranchName();
  }

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
 * @summary Modifies the RAG Agent configuration of an RDS AI application instance.
 *
 * @param request ModifyInstanceRAGConfigRequest
 * @return ModifyInstanceRAGConfigResponse
 */
ModifyInstanceRAGConfigResponse Client::modifyInstanceRAGConfig(const ModifyInstanceRAGConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyInstanceRAGConfigWithOptions(request, runtime);
}

/**
 * @summary Modifies the SSL configuration of an RDS AI application instance.
 *
 * @description ### Applicable engine
 * RDS PostgreSQL
 * ### Related documentation
 * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
 *
 * @param request ModifyInstanceSSLRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyInstanceSSLResponse
 */
ModifyInstanceSSLResponse Client::modifyInstanceSSLWithOptions(const ModifyInstanceSSLRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBranchName()) {
    query["BranchName"] = request.getBranchName();
  }

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
 * @summary Modifies the SSL configuration of an RDS AI application instance.
 *
 * @description ### Applicable engine
 * RDS PostgreSQL
 * ### Related documentation
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
 * @summary Modifies the storage configuration of an RDS AI application instance.
 *
 * @description ### Applicable engine
 * RDS PostgreSQL
 * ### Related documentation
 * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
 * > Currently, only Object Storage Service (OSS) is supported.
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
  if (!!request.hasBranchName()) {
    query["BranchName"] = request.getBranchName();
  }

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
 * @summary Modifies the storage configuration of an RDS AI application instance.
 *
 * @description ### Applicable engine
 * RDS PostgreSQL
 * ### Related documentation
 * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
 * > Currently, only Object Storage Service (OSS) is supported.
 *
 * @param request ModifyInstanceStorageConfigRequest
 * @return ModifyInstanceStorageConfigResponse
 */
ModifyInstanceStorageConfigResponse Client::modifyInstanceStorageConfig(const ModifyInstanceStorageConfigRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyInstanceStorageConfigWithOptions(request, runtime);
}

/**
 * @summary Batch modifies the SSL configurations of RDS AI application instances.
 *
 * @description ### Applicable engine
 * RDS PostgreSQL
 * ### Related documentation
 * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
 *
 * @param tmpReq ModifyInstancesSSLRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyInstancesSSLResponse
 */
ModifyInstancesSSLResponse Client::modifyInstancesSSLWithOptions(const ModifyInstancesSSLRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ModifyInstancesSSLShrinkRequest request = ModifyInstancesSSLShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasInstanceNames()) {
    request.setInstanceNamesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getInstanceNames(), "InstanceNames", "json"));
  }

  json query = {};
  if (!!request.hasCAType()) {
    query["CAType"] = request.getCAType();
  }

  if (!!request.hasInstanceNamesShrink()) {
    query["InstanceNames"] = request.getInstanceNamesShrink();
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
    {"action" , "ModifyInstancesSSL"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyInstancesSSLResponse>();
}

/**
 * @summary Batch modifies the SSL configurations of RDS AI application instances.
 *
 * @description ### Applicable engine
 * RDS PostgreSQL
 * ### Related documentation
 * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
 *
 * @param request ModifyInstancesSSLRequest
 * @return ModifyInstancesSSLResponse
 */
ModifyInstancesSSLResponse Client::modifyInstancesSSL(const ModifyInstancesSSLRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyInstancesSSLWithOptions(request, runtime);
}

/**
 * @summary Modifies message feedback.
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

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
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
 * @summary Modifies message feedback.
 *
 * @param request ModifyMessagesFeedbacksRequest
 * @return ModifyMessagesFeedbacksResponse
 */
ModifyMessagesFeedbacksResponse Client::modifyMessagesFeedbacks(const ModifyMessagesFeedbacksRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyMessagesFeedbacksWithOptions(request, runtime);
}

/**
 * @summary Modifies a sandbox template.
 *
 * @description ### Applicable engine
 * RDS Supabase
 * ### Related documentation
 * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
 *
 * @param tmpReq ModifySandboxTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifySandboxTemplateResponse
 */
ModifySandboxTemplateResponse Client::modifySandboxTemplateWithOptions(const ModifySandboxTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ModifySandboxTemplateShrinkRequest request = ModifySandboxTemplateShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTags()) {
    request.setTagsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTags(), "Tags", "json"));
  }

  json query = {};
  if (!!request.hasDefaultCpu()) {
    query["DefaultCpu"] = request.getDefaultCpu();
  }

  if (!!request.hasDefaultMemory()) {
    query["DefaultMemory"] = request.getDefaultMemory();
  }

  if (!!request.hasImage()) {
    query["Image"] = request.getImage();
  }

  if (!!request.hasInstanceName()) {
    query["InstanceName"] = request.getInstanceName();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasReplicas()) {
    query["Replicas"] = request.getReplicas();
  }

  if (!!request.hasTagsShrink()) {
    query["Tags"] = request.getTagsShrink();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifySandboxTemplate"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifySandboxTemplateResponse>();
}

/**
 * @summary Modifies a sandbox template.
 *
 * @description ### Applicable engine
 * RDS Supabase
 * ### Related documentation
 * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
 *
 * @param request ModifySandboxTemplateRequest
 * @return ModifySandboxTemplateResponse
 */
ModifySandboxTemplateResponse Client::modifySandboxTemplate(const ModifySandboxTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifySandboxTemplateWithOptions(request, runtime);
}

/**
 * @summary Modifies an existing inspection configuration.
 *
 * @param request ModifyScheduledTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyScheduledTaskResponse
 */
ModifyScheduledTaskResponse Client::modifyScheduledTaskWithOptions(const ModifyScheduledTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasFrequency()) {
    query["Frequency"] = request.getFrequency();
  }

  if (!!request.hasInspectionItems()) {
    query["InspectionItems"] = request.getInspectionItems();
  }

  if (!!request.hasInstanceIds()) {
    query["InstanceIds"] = request.getInstanceIds();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasReportLanguage()) {
    query["ReportLanguage"] = request.getReportLanguage();
  }

  if (!!request.hasScheduledId()) {
    query["ScheduledId"] = request.getScheduledId();
  }

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  if (!!request.hasTemplateId()) {
    query["TemplateId"] = request.getTemplateId();
  }

  if (!!request.hasTimeRange()) {
    query["TimeRange"] = request.getTimeRange();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyScheduledTask"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyScheduledTaskResponse>();
}

/**
 * @summary Modifies an existing inspection configuration.
 *
 * @param request ModifyScheduledTaskRequest
 * @return ModifyScheduledTaskResponse
 */
ModifyScheduledTaskResponse Client::modifyScheduledTask(const ModifyScheduledTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyScheduledTaskWithOptions(request, runtime);
}

/**
 * @summary Modifies the IP whitelist of an RDS AI Assistant Ultimate Edition instance.
 *
 * @description ### Applicable engine
 * [RDS AI Assistant Ultimate Edition](https://www.alibabacloud.com/help/en/rds/apsaradb-rds-for-mysql/rds-copilot-ultra)
 *
 * @param request ModifyWhitelistIpsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ModifyWhitelistIpsResponse
 */
ModifyWhitelistIpsResponse Client::modifyWhitelistIpsWithOptions(const ModifyWhitelistIpsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasIpWhitelist()) {
    query["IpWhitelist"] = request.getIpWhitelist();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifyWhitelistIps"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifyWhitelistIpsResponse>();
}

/**
 * @summary Modifies the IP whitelist of an RDS AI Assistant Ultimate Edition instance.
 *
 * @description ### Applicable engine
 * [RDS AI Assistant Ultimate Edition](https://www.alibabacloud.com/help/en/rds/apsaradb-rds-for-mysql/rds-copilot-ultra)
 *
 * @param request ModifyWhitelistIpsRequest
 * @return ModifyWhitelistIpsResponse
 */
ModifyWhitelistIpsResponse Client::modifyWhitelistIps(const ModifyWhitelistIpsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifyWhitelistIpsWithOptions(request, runtime);
}

/**
 * @summary Deletes an exclusion item for an import job.
 *
 * @description Deletes an exclusion item for a job.
 *
 * @param request RemoveContextDatabaseSyncJobExclusionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RemoveContextDatabaseSyncJobExclusionResponse
 */
RemoveContextDatabaseSyncJobExclusionResponse Client::removeContextDatabaseSyncJobExclusionWithOptions(const RemoveContextDatabaseSyncJobExclusionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDocumentId()) {
    query["DocumentId"] = request.getDocumentId();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RemoveContextDatabaseSyncJobExclusion"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RemoveContextDatabaseSyncJobExclusionResponse>();
}

/**
 * @summary Deletes an exclusion item for an import job.
 *
 * @description Deletes an exclusion item for a job.
 *
 * @param request RemoveContextDatabaseSyncJobExclusionRequest
 * @return RemoveContextDatabaseSyncJobExclusionResponse
 */
RemoveContextDatabaseSyncJobExclusionResponse Client::removeContextDatabaseSyncJobExclusion(const RemoveContextDatabaseSyncJobExclusionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return removeContextDatabaseSyncJobExclusionWithOptions(request, runtime);
}

/**
 * @summary Renames a custom API key.
 *
 * @description ### Applicable engine
 * [RDS AI Assistant Ultimate Edition](https://www.alibabacloud.com/help/en/rds/apsaradb-rds-for-mysql/rds-copilot-ultra)
 *
 * @param request RenameApiKeyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RenameApiKeyResponse
 */
RenameApiKeyResponse Client::renameApiKeyWithOptions(const RenameApiKeyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiKey()) {
    query["ApiKey"] = request.getApiKey();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasKeyName()) {
    query["KeyName"] = request.getKeyName();
  }

  if (!!request.hasRoleArn()) {
    query["RoleArn"] = request.getRoleArn();
  }

  if (!!request.hasRoleName()) {
    query["RoleName"] = request.getRoleName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RenameApiKey"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RenameApiKeyResponse>();
}

/**
 * @summary Renames a custom API key.
 *
 * @description ### Applicable engine
 * [RDS AI Assistant Ultimate Edition](https://www.alibabacloud.com/help/en/rds/apsaradb-rds-for-mysql/rds-copilot-ultra)
 *
 * @param request RenameApiKeyRequest
 * @return RenameApiKeyResponse
 */
RenameApiKeyResponse Client::renameApiKey(const RenameApiKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return renameApiKeyWithOptions(request, runtime);
}

/**
 * @summary Resets the API key.
 *
 * @description ### Applicable engine
 * [RDS AI Assistant Ultimate Edition](https://www.alibabacloud.com/help/en/rds/apsaradb-rds-for-mysql/rds-copilot-ultra)
 *
 * @param request ResetApiKeyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResetApiKeyResponse
 */
ResetApiKeyResponse Client::resetApiKeyWithOptions(const ResetApiKeyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiKey()) {
    query["ApiKey"] = request.getApiKey();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ResetApiKey"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResetApiKeyResponse>();
}

/**
 * @summary Resets the API key.
 *
 * @description ### Applicable engine
 * [RDS AI Assistant Ultimate Edition](https://www.alibabacloud.com/help/en/rds/apsaradb-rds-for-mysql/rds-copilot-ultra)
 *
 * @param request ResetApiKeyRequest
 * @return ResetApiKeyResponse
 */
ResetApiKeyResponse Client::resetApiKey(const ResetApiKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resetApiKeyWithOptions(request, runtime);
}

/**
 * @summary Resets the keys of an RDS AI instance, including AnonKey, ServiceKey, and JwtSecret. After the reset, the old keys and secret become invalid immediately. Ensure that your applications are updated accordingly.
 *
 * @description ### Applicable engine
 * RDS PostgreSQL
 * ### Related documentation
 * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
 *
 * @param request ResetInstanceKeysRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResetInstanceKeysResponse
 */
ResetInstanceKeysResponse Client::resetInstanceKeysWithOptions(const ResetInstanceKeysRequest &request, const Darabonba::RuntimeOptions &runtime) {
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
    {"action" , "ResetInstanceKeys"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ResetInstanceKeysResponse>();
}

/**
 * @summary Resets the keys of an RDS AI instance, including AnonKey, ServiceKey, and JwtSecret. After the reset, the old keys and secret become invalid immediately. Ensure that your applications are updated accordingly.
 *
 * @description ### Applicable engine
 * RDS PostgreSQL
 * ### Related documentation
 * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
 *
 * @param request ResetInstanceKeysRequest
 * @return ResetInstanceKeysResponse
 */
ResetInstanceKeysResponse Client::resetInstanceKeys(const ResetInstanceKeysRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resetInstanceKeysWithOptions(request, runtime);
}

/**
 * @summary Resets the logon password and database access password of an RDS AI application instance.
 *
 * @description ### Applicable engine
 * RDS PostgreSQL
 * ### Related documentation
 * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
 * > Currently, only the password of the RDS Supabase Dashboard user can be modified.
 *
 * @param request ResetInstancePasswordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ResetInstancePasswordResponse
 */
ResetInstancePasswordResponse Client::resetInstancePasswordWithOptions(const ResetInstancePasswordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBranchName()) {
    query["BranchName"] = request.getBranchName();
  }

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
 * @summary Resets the logon password and database access password of an RDS AI application instance.
 *
 * @description ### Applicable engine
 * RDS PostgreSQL
 * ### Related documentation
 * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
 * > Currently, only the password of the RDS Supabase Dashboard user can be modified.
 *
 * @param request ResetInstancePasswordRequest
 * @return ResetInstancePasswordResponse
 */
ResetInstancePasswordResponse Client::resetInstancePassword(const ResetInstancePasswordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return resetInstancePasswordWithOptions(request, runtime);
}

/**
 * @summary Restarts an ApsaraDB RDS AI application instance that is in the Running state.
 *
 * @description ### Applicable engine
 * RDS PostgreSQL
 * ### Related documentation
 * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
 *
 * @param request RestartInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RestartInstanceResponse
 */
RestartInstanceResponse Client::restartInstanceWithOptions(const RestartInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBranchName()) {
    query["BranchName"] = request.getBranchName();
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
 * @summary Restarts an ApsaraDB RDS AI application instance that is in the Running state.
 *
 * @description ### Applicable engine
 * RDS PostgreSQL
 * ### Related documentation
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
 * @summary 基于快照重试失败明细
 *
 * @description 写操作可传入 ClientToken 实现幂等；未传时由后端自动生成。 重试会基于失败项生成新的 Run，原 Run 状态保持不变。
 *
 * @param request RetryFailedContextDatabaseSyncRunRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RetryFailedContextDatabaseSyncRunResponse
 */
RetryFailedContextDatabaseSyncRunResponse Client::retryFailedContextDatabaseSyncRunWithOptions(const RetryFailedContextDatabaseSyncRunRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasRunId()) {
    query["RunId"] = request.getRunId();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RetryFailedContextDatabaseSyncRun"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RetryFailedContextDatabaseSyncRunResponse>();
}

/**
 * @summary 基于快照重试失败明细
 *
 * @description 写操作可传入 ClientToken 实现幂等；未传时由后端自动生成。 重试会基于失败项生成新的 Run，原 Run 状态保持不变。
 *
 * @param request RetryFailedContextDatabaseSyncRunRequest
 * @return RetryFailedContextDatabaseSyncRunResponse
 */
RetryFailedContextDatabaseSyncRunResponse Client::retryFailedContextDatabaseSyncRun(const RetryFailedContextDatabaseSyncRunRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return retryFailedContextDatabaseSyncRunWithOptions(request, runtime);
}

/**
 * @summary Revokes an API key for a context database.
 *
 * @description Revokes an API key.
 *
 * @param request RevokeContextDatabaseApiKeyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RevokeContextDatabaseApiKeyResponse
 */
RevokeContextDatabaseApiKeyResponse Client::revokeContextDatabaseApiKeyWithOptions(const RevokeContextDatabaseApiKeyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasKeyId()) {
    query["KeyId"] = request.getKeyId();
  }

  if (!!request.hasMemberId()) {
    query["MemberId"] = request.getMemberId();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RevokeContextDatabaseApiKey"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RevokeContextDatabaseApiKeyResponse>();
}

/**
 * @summary Revokes an API key for a context database.
 *
 * @description Revokes an API key.
 *
 * @param request RevokeContextDatabaseApiKeyRequest
 * @return RevokeContextDatabaseApiKeyResponse
 */
RevokeContextDatabaseApiKeyResponse Client::revokeContextDatabaseApiKey(const RevokeContextDatabaseApiKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return revokeContextDatabaseApiKeyWithOptions(request, runtime);
}

/**
 * @summary Manually triggers a run.
 *
 * @description Write operations support idempotence by passing a ClientToken. If no ClientToken is provided, the backend generates one automatically.
 *
 * @param request StartContextDatabaseSyncRunRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartContextDatabaseSyncRunResponse
 */
StartContextDatabaseSyncRunResponse Client::startContextDatabaseSyncRunWithOptions(const StartContextDatabaseSyncRunRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDryRun()) {
    query["DryRun"] = request.getDryRun();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartContextDatabaseSyncRun"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartContextDatabaseSyncRunResponse>();
}

/**
 * @summary Manually triggers a run.
 *
 * @description Write operations support idempotence by passing a ClientToken. If no ClientToken is provided, the backend generates one automatically.
 *
 * @param request StartContextDatabaseSyncRunRequest
 * @return StartContextDatabaseSyncRunResponse
 */
StartContextDatabaseSyncRunResponse Client::startContextDatabaseSyncRun(const StartContextDatabaseSyncRunRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startContextDatabaseSyncRunWithOptions(request, runtime);
}

/**
 * @summary Initiates a snapshot discovery task for data selection scope configuration.
 *
 * @description Write operations support idempotence by passing a ClientToken. If no ClientToken is provided, the backend generates one automatically. Discovery is an asynchronous operation. The operation returns a discovery task identifier. Poll for results to retrieve SelectedNodeKeys.
 *
 * @param request StartContextDatabaseSyncSourceDiscoveryRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartContextDatabaseSyncSourceDiscoveryResponse
 */
StartContextDatabaseSyncSourceDiscoveryResponse Client::startContextDatabaseSyncSourceDiscoveryWithOptions(const StartContextDatabaseSyncSourceDiscoveryRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasSourceId()) {
    query["SourceId"] = request.getSourceId();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "StartContextDatabaseSyncSourceDiscovery"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<StartContextDatabaseSyncSourceDiscoveryResponse>();
}

/**
 * @summary Initiates a snapshot discovery task for data selection scope configuration.
 *
 * @description Write operations support idempotence by passing a ClientToken. If no ClientToken is provided, the backend generates one automatically. Discovery is an asynchronous operation. The operation returns a discovery task identifier. Poll for results to retrieve SelectedNodeKeys.
 *
 * @param request StartContextDatabaseSyncSourceDiscoveryRequest
 * @return StartContextDatabaseSyncSourceDiscoveryResponse
 */
StartContextDatabaseSyncSourceDiscoveryResponse Client::startContextDatabaseSyncSourceDiscovery(const StartContextDatabaseSyncSourceDiscoveryRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return startContextDatabaseSyncSourceDiscoveryWithOptions(request, runtime);
}

/**
 * @summary Starts an RDS AI application instance that is in the Stopped state.
 *
 * @description ### Applicable engine
 * RDS PostgreSQL
 * ### Related feature documentation
 * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
 *
 * @param request StartInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StartInstanceResponse
 */
StartInstanceResponse Client::startInstanceWithOptions(const StartInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBranchName()) {
    query["BranchName"] = request.getBranchName();
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
 * @summary Starts an RDS AI application instance that is in the Stopped state.
 *
 * @description ### Applicable engine
 * RDS PostgreSQL
 * ### Related feature documentation
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
 * @summary Pauses an RDS AI application instance that is in the Running state.
 *
 * @description ### Applicable engine
 * RDS PostgreSQL
 * ### Related feature documentation
 * [RDS Supabase](https://help.aliyun.com/document_detail/2938735.html)
 *
 * @param request StopInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return StopInstanceResponse
 */
StopInstanceResponse Client::stopInstanceWithOptions(const StopInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBranchName()) {
    query["BranchName"] = request.getBranchName();
  }

  if (!!request.hasForce()) {
    query["Force"] = request.getForce();
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
 * @summary Pauses an RDS AI application instance that is in the Running state.
 *
 * @description ### Applicable engine
 * RDS PostgreSQL
 * ### Related feature documentation
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
 * @summary Modifies the quota of an API key.
 *
 * @description ### Applicable engine
 * [RDS AI Assistant Ultimate Edition](https://www.alibabacloud.com/help/en/rds/apsaradb-rds-for-mysql/rds-copilot-ultra)
 *
 * @param tmpReq UpdateApiKeyQuotaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateApiKeyQuotaResponse
 */
UpdateApiKeyQuotaResponse Client::updateApiKeyQuotaWithOptions(const UpdateApiKeyQuotaRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateApiKeyQuotaShrinkRequest request = UpdateApiKeyQuotaShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasKeys()) {
    request.setKeysShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getKeys(), "Keys", "json"));
  }

  json query = {};
  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasKeysShrink()) {
    query["Keys"] = request.getKeysShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateApiKeyQuota"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateApiKeyQuotaResponse>();
}

/**
 * @summary Modifies the quota of an API key.
 *
 * @description ### Applicable engine
 * [RDS AI Assistant Ultimate Edition](https://www.alibabacloud.com/help/en/rds/apsaradb-rds-for-mysql/rds-copilot-ultra)
 *
 * @param request UpdateApiKeyQuotaRequest
 * @return UpdateApiKeyQuotaResponse
 */
UpdateApiKeyQuotaResponse Client::updateApiKeyQuota(const UpdateApiKeyQuotaRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateApiKeyQuotaWithOptions(request, runtime);
}

/**
 * @summary Updates the API key of a context database.
 *
 * @description Updates the display metadata of an API key. At least one of Name or Description must be specified. The plaintext key is not reissued.
 *
 * @param request UpdateContextDatabaseApiKeyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateContextDatabaseApiKeyResponse
 */
UpdateContextDatabaseApiKeyResponse Client::updateContextDatabaseApiKeyWithOptions(const UpdateContextDatabaseApiKeyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasKeyId()) {
    query["KeyId"] = request.getKeyId();
  }

  if (!!request.hasMemberId()) {
    query["MemberId"] = request.getMemberId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateContextDatabaseApiKey"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateContextDatabaseApiKeyResponse>();
}

/**
 * @summary Updates the API key of a context database.
 *
 * @description Updates the display metadata of an API key. At least one of Name or Description must be specified. The plaintext key is not reissued.
 *
 * @param request UpdateContextDatabaseApiKeyRequest
 * @return UpdateContextDatabaseApiKeyResponse
 */
UpdateContextDatabaseApiKeyResponse Client::updateContextDatabaseApiKey(const UpdateContextDatabaseApiKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateContextDatabaseApiKeyWithOptions(request, runtime);
}

/**
 * @summary Updates a context database member.
 *
 * @description Updates the role or status of a member.
 *
 * @param request UpdateContextDatabaseMemberRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateContextDatabaseMemberResponse
 */
UpdateContextDatabaseMemberResponse Client::updateContextDatabaseMemberWithOptions(const UpdateContextDatabaseMemberRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMemberId()) {
    query["MemberId"] = request.getMemberId();
  }

  if (!!request.hasRole()) {
    query["Role"] = request.getRole();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateContextDatabaseMember"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateContextDatabaseMemberResponse>();
}

/**
 * @summary Updates a context database member.
 *
 * @description Updates the role or status of a member.
 *
 * @param request UpdateContextDatabaseMemberRequest
 * @return UpdateContextDatabaseMemberResponse
 */
UpdateContextDatabaseMemberResponse Client::updateContextDatabaseMember(const UpdateContextDatabaseMemberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateContextDatabaseMemberWithOptions(request, runtime);
}

/**
 * @summary 更新连接元数据
 *
 * @description 写操作可传入 ClientToken 实现幂等；未传时由后端自动生成。
 *
 * @param request UpdateContextDatabaseSyncConnectionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateContextDatabaseSyncConnectionResponse
 */
UpdateContextDatabaseSyncConnectionResponse Client::updateContextDatabaseSyncConnectionWithOptions(const UpdateContextDatabaseSyncConnectionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasConnectionId()) {
    query["ConnectionId"] = request.getConnectionId();
  }

  if (!!request.hasDisplayName()) {
    query["DisplayName"] = request.getDisplayName();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateContextDatabaseSyncConnection"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateContextDatabaseSyncConnectionResponse>();
}

/**
 * @summary 更新连接元数据
 *
 * @description 写操作可传入 ClientToken 实现幂等；未传时由后端自动生成。
 *
 * @param request UpdateContextDatabaseSyncConnectionRequest
 * @return UpdateContextDatabaseSyncConnectionResponse
 */
UpdateContextDatabaseSyncConnectionResponse Client::updateContextDatabaseSyncConnection(const UpdateContextDatabaseSyncConnectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateContextDatabaseSyncConnectionWithOptions(request, runtime);
}

/**
 * @summary 单独轮换连接凭据
 *
 * @description 写操作可传入 ClientToken 实现幂等；未传时由后端自动生成。
 *
 * @param tmpReq UpdateContextDatabaseSyncConnectionCredentialRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateContextDatabaseSyncConnectionCredentialResponse
 */
UpdateContextDatabaseSyncConnectionCredentialResponse Client::updateContextDatabaseSyncConnectionCredentialWithOptions(const UpdateContextDatabaseSyncConnectionCredentialRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateContextDatabaseSyncConnectionCredentialShrinkRequest request = UpdateContextDatabaseSyncConnectionCredentialShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCredentials()) {
    request.setCredentialsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getCredentials(), "Credentials", "json"));
  }

  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasConnectionId()) {
    query["ConnectionId"] = request.getConnectionId();
  }

  if (!!request.hasCredentialsShrink()) {
    query["Credentials"] = request.getCredentialsShrink();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateContextDatabaseSyncConnectionCredential"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateContextDatabaseSyncConnectionCredentialResponse>();
}

/**
 * @summary 单独轮换连接凭据
 *
 * @description 写操作可传入 ClientToken 实现幂等；未传时由后端自动生成。
 *
 * @param request UpdateContextDatabaseSyncConnectionCredentialRequest
 * @return UpdateContextDatabaseSyncConnectionCredentialResponse
 */
UpdateContextDatabaseSyncConnectionCredentialResponse Client::updateContextDatabaseSyncConnectionCredential(const UpdateContextDatabaseSyncConnectionCredentialRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateContextDatabaseSyncConnectionCredentialWithOptions(request, runtime);
}

/**
 * @summary 更新 Job 元数据
 *
 * @description 写操作可传入 ClientToken 实现幂等；未传时由后端自动生成。 Target 为隐含概念，调用方只需传入 KnowledgeBaseId，后端自动创建/匹配 Target。
 *
 * @param tmpReq UpdateContextDatabaseSyncJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateContextDatabaseSyncJobResponse
 */
UpdateContextDatabaseSyncJobResponse Client::updateContextDatabaseSyncJobWithOptions(const UpdateContextDatabaseSyncJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateContextDatabaseSyncJobShrinkRequest request = UpdateContextDatabaseSyncJobShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasFilters()) {
    request.setFiltersShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getFilters(), "Filters", "json"));
  }

  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasEnabled()) {
    query["Enabled"] = request.getEnabled();
  }

  if (!!request.hasFiltersShrink()) {
    query["Filters"] = request.getFiltersShrink();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasTargetKnowledgeBaseId()) {
    query["TargetKnowledgeBaseId"] = request.getTargetKnowledgeBaseId();
  }

  if (!!request.hasTargetKnowledgeBaseName()) {
    query["TargetKnowledgeBaseName"] = request.getTargetKnowledgeBaseName();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateContextDatabaseSyncJob"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateContextDatabaseSyncJobResponse>();
}

/**
 * @summary 更新 Job 元数据
 *
 * @description 写操作可传入 ClientToken 实现幂等；未传时由后端自动生成。 Target 为隐含概念，调用方只需传入 KnowledgeBaseId，后端自动创建/匹配 Target。
 *
 * @param request UpdateContextDatabaseSyncJobRequest
 * @return UpdateContextDatabaseSyncJobResponse
 */
UpdateContextDatabaseSyncJobResponse Client::updateContextDatabaseSyncJob(const UpdateContextDatabaseSyncJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateContextDatabaseSyncJobWithOptions(request, runtime);
}

/**
 * @summary 更新 Job 调度配置
 *
 * @description 写操作可传入 ClientToken 实现幂等；未传时由后端自动生成。
 *
 * @param tmpReq UpdateContextDatabaseSyncJobScheduleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateContextDatabaseSyncJobScheduleResponse
 */
UpdateContextDatabaseSyncJobScheduleResponse Client::updateContextDatabaseSyncJobScheduleWithOptions(const UpdateContextDatabaseSyncJobScheduleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateContextDatabaseSyncJobScheduleShrinkRequest request = UpdateContextDatabaseSyncJobScheduleShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasDailyTimes()) {
    request.setDailyTimesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDailyTimes(), "DailyTimes", "json"));
  }

  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasDailyTimesShrink()) {
    query["DailyTimes"] = request.getDailyTimesShrink();
  }

  if (!!request.hasIntervalMinutes()) {
    query["IntervalMinutes"] = request.getIntervalMinutes();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.getJobId();
  }

  if (!!request.hasMissedPolicy()) {
    query["MissedPolicy"] = request.getMissedPolicy();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateContextDatabaseSyncJobSchedule"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateContextDatabaseSyncJobScheduleResponse>();
}

/**
 * @summary 更新 Job 调度配置
 *
 * @description 写操作可传入 ClientToken 实现幂等；未传时由后端自动生成。
 *
 * @param request UpdateContextDatabaseSyncJobScheduleRequest
 * @return UpdateContextDatabaseSyncJobScheduleResponse
 */
UpdateContextDatabaseSyncJobScheduleResponse Client::updateContextDatabaseSyncJobSchedule(const UpdateContextDatabaseSyncJobScheduleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateContextDatabaseSyncJobScheduleWithOptions(request, runtime);
}

/**
 * @summary Updates the metadata of a data selection scope.
 *
 * @description Write operations support idempotence via ClientToken. If ClientToken is not provided, the backend generates one automatically.
 *
 * @param tmpReq UpdateContextDatabaseSyncSourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateContextDatabaseSyncSourceResponse
 */
UpdateContextDatabaseSyncSourceResponse Client::updateContextDatabaseSyncSourceWithOptions(const UpdateContextDatabaseSyncSourceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateContextDatabaseSyncSourceShrinkRequest request = UpdateContextDatabaseSyncSourceShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSourceConfig()) {
    request.setSourceConfigShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSourceConfig(), "SourceConfig", "json"));
  }

  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasSourceConfigShrink()) {
    query["SourceConfig"] = request.getSourceConfigShrink();
  }

  if (!!request.hasSourceId()) {
    query["SourceId"] = request.getSourceId();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateContextDatabaseSyncSource"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateContextDatabaseSyncSourceResponse>();
}

/**
 * @summary Updates the metadata of a data selection scope.
 *
 * @description Write operations support idempotence via ClientToken. If ClientToken is not provided, the backend generates one automatically.
 *
 * @param request UpdateContextDatabaseSyncSourceRequest
 * @return UpdateContextDatabaseSyncSourceResponse
 */
UpdateContextDatabaseSyncSourceResponse Client::updateContextDatabaseSyncSource(const UpdateContextDatabaseSyncSourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateContextDatabaseSyncSourceWithOptions(request, runtime);
}

/**
 * @summary Updates the explicit node selection for the data selection scope.
 *
 * @description For write operations, you can pass the ClientToken parameter to ensure idempotency. If this parameter is not provided, the backend automatically generates one.
 *
 * @param tmpReq UpdateContextDatabaseSyncSourceSelectionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateContextDatabaseSyncSourceSelectionResponse
 */
UpdateContextDatabaseSyncSourceSelectionResponse Client::updateContextDatabaseSyncSourceSelectionWithOptions(const UpdateContextDatabaseSyncSourceSelectionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateContextDatabaseSyncSourceSelectionShrinkRequest request = UpdateContextDatabaseSyncSourceSelectionShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSelectedNodeKeys()) {
    request.setSelectedNodeKeysShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSelectedNodeKeys(), "SelectedNodeKeys", "json"));
  }

  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasSelectedNodeKeysShrink()) {
    query["SelectedNodeKeys"] = request.getSelectedNodeKeysShrink();
  }

  if (!!request.hasSelectionPolicy()) {
    query["SelectionPolicy"] = request.getSelectionPolicy();
  }

  if (!!request.hasSourceId()) {
    query["SourceId"] = request.getSourceId();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateContextDatabaseSyncSourceSelection"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateContextDatabaseSyncSourceSelectionResponse>();
}

/**
 * @summary Updates the explicit node selection for the data selection scope.
 *
 * @description For write operations, you can pass the ClientToken parameter to ensure idempotency. If this parameter is not provided, the backend automatically generates one.
 *
 * @param request UpdateContextDatabaseSyncSourceSelectionRequest
 * @return UpdateContextDatabaseSyncSourceSelectionResponse
 */
UpdateContextDatabaseSyncSourceSelectionResponse Client::updateContextDatabaseSyncSourceSelection(const UpdateContextDatabaseSyncSourceSelectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateContextDatabaseSyncSourceSelectionWithOptions(request, runtime);
}

/**
 * @summary Updates a ContextDB workspace.
 *
 * @description Modifies the name of a workspace.
 *
 * @param request UpdateContextDatabaseWorkspaceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateContextDatabaseWorkspaceResponse
 */
UpdateContextDatabaseWorkspaceResponse Client::updateContextDatabaseWorkspaceWithOptions(const UpdateContextDatabaseWorkspaceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  if (!!request.hasWorkspaceName()) {
    query["WorkspaceName"] = request.getWorkspaceName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateContextDatabaseWorkspace"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateContextDatabaseWorkspaceResponse>();
}

/**
 * @summary Updates a ContextDB workspace.
 *
 * @description Modifies the name of a workspace.
 *
 * @param request UpdateContextDatabaseWorkspaceRequest
 * @return UpdateContextDatabaseWorkspaceResponse
 */
UpdateContextDatabaseWorkspaceResponse Client::updateContextDatabaseWorkspace(const UpdateContextDatabaseWorkspaceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateContextDatabaseWorkspaceWithOptions(request, runtime);
}

/**
 * @summary Updates a Custom Agent.
 *
 * @param tmpReq UpdateCustomAgentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateCustomAgentResponse
 */
UpdateCustomAgentResponse Client::updateCustomAgentWithOptions(const UpdateCustomAgentRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateCustomAgentShrinkRequest request = UpdateCustomAgentShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSkillIds()) {
    request.setSkillIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSkillIds(), "SkillIds", "json"));
  }

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

  if (!!request.hasSkillIdsShrink()) {
    query["SkillIds"] = request.getSkillIdsShrink();
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
 * @summary Updates a Custom Agent.
 *
 * @param request UpdateCustomAgentRequest
 * @return UpdateCustomAgentResponse
 */
UpdateCustomAgentResponse Client::updateCustomAgent(const UpdateCustomAgentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateCustomAgentWithOptions(request, runtime);
}

/**
 * @summary Updates the alert threshold percentage for an API key.
 *
 * @description ### Applicable engine
 * [RDS AI Assistant Ultimate Edition](https://www.alibabacloud.com/help/en/rds/apsaradb-rds-for-mysql/rds-copilot-ultra)
 *
 * @param tmpReq UpdateMOQuotaAlertThresholdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateMOQuotaAlertThresholdResponse
 */
UpdateMOQuotaAlertThresholdResponse Client::updateMOQuotaAlertThresholdWithOptions(const UpdateMOQuotaAlertThresholdRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateMOQuotaAlertThresholdShrinkRequest request = UpdateMOQuotaAlertThresholdShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasApikey()) {
    request.setApikeyShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getApikey(), "Apikey", "json"));
  }

  json query = {};
  if (!!request.hasApikeyShrink()) {
    query["Apikey"] = request.getApikeyShrink();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateMOQuotaAlertThreshold"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateMOQuotaAlertThresholdResponse>();
}

/**
 * @summary Updates the alert threshold percentage for an API key.
 *
 * @description ### Applicable engine
 * [RDS AI Assistant Ultimate Edition](https://www.alibabacloud.com/help/en/rds/apsaradb-rds-for-mysql/rds-copilot-ultra)
 *
 * @param request UpdateMOQuotaAlertThresholdRequest
 * @return UpdateMOQuotaAlertThresholdResponse
 */
UpdateMOQuotaAlertThresholdResponse Client::updateMOQuotaAlertThreshold(const UpdateMOQuotaAlertThresholdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateMOQuotaAlertThresholdWithOptions(request, runtime);
}

/**
 * @summary Updates the information of a specified Skill.
 *
 * @param tmpReq UpdateSkillRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSkillResponse
 */
UpdateSkillResponse Client::updateSkillWithOptions(const UpdateSkillRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateSkillShrinkRequest request = UpdateSkillShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasContent()) {
    request.setContentShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getContent(), "Content", "json"));
  }

  if (!!tmpReq.hasDbtypes()) {
    request.setDbtypesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getDbtypes(), "Dbtypes", "json"));
  }

  json query = {};
  if (!!request.hasContentShrink()) {
    query["Content"] = request.getContentShrink();
  }

  if (!!request.hasDbtypesShrink()) {
    query["Dbtypes"] = request.getDbtypesShrink();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasSkillId()) {
    query["SkillId"] = request.getSkillId();
  }

  if (!!request.hasUpdateNote()) {
    query["UpdateNote"] = request.getUpdateNote();
  }

  if (!!request.hasUploadId()) {
    query["UploadId"] = request.getUploadId();
  }

  if (!!request.hasUploadToken()) {
    query["UploadToken"] = request.getUploadToken();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateSkill"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateSkillResponse>();
}

/**
 * @summary Updates the information of a specified Skill.
 *
 * @param request UpdateSkillRequest
 * @return UpdateSkillResponse
 */
UpdateSkillResponse Client::updateSkill(const UpdateSkillRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateSkillWithOptions(request, runtime);
}

/**
 * @summary Validates datasource credentials and authorization.
 *
 * @description Validates the connection credentials and authorization.
 *
 * @param request VerifyContextDatabaseSyncConnectionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return VerifyContextDatabaseSyncConnectionResponse
 */
VerifyContextDatabaseSyncConnectionResponse Client::verifyContextDatabaseSyncConnectionWithOptions(const VerifyContextDatabaseSyncConnectionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasConnectionId()) {
    query["ConnectionId"] = request.getConnectionId();
  }

  if (!!request.hasWorkspaceId()) {
    query["WorkspaceId"] = request.getWorkspaceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "VerifyContextDatabaseSyncConnection"},
    {"version" , "2025-05-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<VerifyContextDatabaseSyncConnectionResponse>();
}

/**
 * @summary Validates datasource credentials and authorization.
 *
 * @description Validates the connection credentials and authorization.
 *
 * @param request VerifyContextDatabaseSyncConnectionRequest
 * @return VerifyContextDatabaseSyncConnectionResponse
 */
VerifyContextDatabaseSyncConnectionResponse Client::verifyContextDatabaseSyncConnection(const VerifyContextDatabaseSyncConnectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return verifyContextDatabaseSyncConnectionWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace RdsAi20250507