// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_RDSAI20250507_HPP_
#define ALIBABACLOUD_RDSAI20250507_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/RdsAi20250507Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/RdsAi20250507.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Adds an exclusion item to an import task.
       *
       * @description Adds a job exclusion item.
       *
       * @param request AddContextDatabaseSyncJobExclusionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddContextDatabaseSyncJobExclusionResponse
       */
      Models::AddContextDatabaseSyncJobExclusionResponse addContextDatabaseSyncJobExclusionWithOptions(const Models::AddContextDatabaseSyncJobExclusionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds an exclusion item to an import task.
       *
       * @description Adds a job exclusion item.
       *
       * @param request AddContextDatabaseSyncJobExclusionRequest
       * @return AddContextDatabaseSyncJobExclusionResponse
       */
      Models::AddContextDatabaseSyncJobExclusionResponse addContextDatabaseSyncJobExclusion(const Models::AddContextDatabaseSyncJobExclusionRequest &request);

      /**
       * @summary Cancels an in-progress discovery task by task ID.
       *
       * @description You can specify a ClientToken to ensure idempotence for write operations. If you do not specify this parameter, the backend automatically generates one.
       *
       * @param request CancelContextDatabaseSyncDiscoveryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelContextDatabaseSyncDiscoveryResponse
       */
      Models::CancelContextDatabaseSyncDiscoveryResponse cancelContextDatabaseSyncDiscoveryWithOptions(const Models::CancelContextDatabaseSyncDiscoveryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels an in-progress discovery task by task ID.
       *
       * @description You can specify a ClientToken to ensure idempotence for write operations. If you do not specify this parameter, the backend automatically generates one.
       *
       * @param request CancelContextDatabaseSyncDiscoveryRequest
       * @return CancelContextDatabaseSyncDiscoveryResponse
       */
      Models::CancelContextDatabaseSyncDiscoveryResponse cancelContextDatabaseSyncDiscovery(const Models::CancelContextDatabaseSyncDiscoveryRequest &request);

      /**
       * @summary Cancels a run.
       *
       * @description Write operations support idempotence through ClientToken. If ClientToken is not provided, the backend generates one automatically. Cancellation is best-effort. Completed RunItems are not affected.
       *
       * @param request CancelContextDatabaseSyncRunRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelContextDatabaseSyncRunResponse
       */
      Models::CancelContextDatabaseSyncRunResponse cancelContextDatabaseSyncRunWithOptions(const Models::CancelContextDatabaseSyncRunRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels a run.
       *
       * @description Write operations support idempotence through ClientToken. If ClientToken is not provided, the backend generates one automatically. Cancellation is best-effort. Completed RunItems are not affected.
       *
       * @param request CancelContextDatabaseSyncRunRequest
       * @return CancelContextDatabaseSyncRunResponse
       */
      Models::CancelContextDatabaseSyncRunResponse cancelContextDatabaseSyncRun(const Models::CancelContextDatabaseSyncRunRequest &request);

      /**
       * @summary Sends a conversation message.
       *
       * @param tmpReq ChatMessagesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChatMessagesResponse
       */
      FutureGenerator<Models::ChatMessagesResponse> chatMessagesWithSSE(const Models::ChatMessagesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sends a conversation message.
       *
       * @param tmpReq ChatMessagesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChatMessagesResponse
       */
      Models::ChatMessagesResponse chatMessagesWithOptions(const Models::ChatMessagesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sends a conversation message.
       *
       * @param request ChatMessagesRequest
       * @return ChatMessagesResponse
       */
      Models::ChatMessagesResponse chatMessages(const Models::ChatMessagesRequest &request);

      /**
       * @summary Stops a conversation.
       *
       * @param request ChatMessagesTaskStopRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChatMessagesTaskStopResponse
       */
      Models::ChatMessagesTaskStopResponse chatMessagesTaskStopWithOptions(const Models::ChatMessagesTaskStopRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops a conversation.
       *
       * @param request ChatMessagesTaskStopRequest
       * @return ChatMessagesTaskStopResponse
       */
      Models::ChatMessagesTaskStopResponse chatMessagesTaskStop(const Models::ChatMessagesTaskStopRequest &request);

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
      Models::CreateApiKeyResponse createApiKeyWithOptions(const Models::CreateApiKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a custom API key.
       *
       * @description ### Applicable engine
       * [RDS AI Assistant Ultimate Edition](https://www.alibabacloud.com/help/en/rds/apsaradb-rds-for-mysql/rds-copilot-ultra)
       *
       * @param request CreateApiKeyRequest
       * @return CreateApiKeyResponse
       */
      Models::CreateApiKeyResponse createApiKey(const Models::CreateApiKeyRequest &request);

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
      Models::CreateAppInstanceResponse createAppInstanceWithOptions(const Models::CreateAppInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

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
      Models::CreateAppInstanceResponse createAppInstance(const Models::CreateAppInstanceRequest &request);

      /**
       * @summary Creates a context database API key.
       *
       * @description Creates an API key and returns the plaintext apiKey.
       *
       * @param request CreateContextDatabaseApiKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateContextDatabaseApiKeyResponse
       */
      Models::CreateContextDatabaseApiKeyResponse createContextDatabaseApiKeyWithOptions(const Models::CreateContextDatabaseApiKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a context database API key.
       *
       * @description Creates an API key and returns the plaintext apiKey.
       *
       * @param request CreateContextDatabaseApiKeyRequest
       * @return CreateContextDatabaseApiKeyResponse
       */
      Models::CreateContextDatabaseApiKeyResponse createContextDatabaseApiKey(const Models::CreateContextDatabaseApiKeyRequest &request);

      /**
       * @summary Creates a ContextDB member.
       *
       * @description Creates a member. If GenerateInitialKey is set to true, the first API key is also issued, and the plaintext ApiKey is returned in the response. This is a sensitive field and is returned only once. Store it securely. After the member is created, you can call the List or Get operation to query the member and the metadata of the API keys under the member.
       *
       * @param request CreateContextDatabaseMemberRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateContextDatabaseMemberResponse
       */
      Models::CreateContextDatabaseMemberResponse createContextDatabaseMemberWithOptions(const Models::CreateContextDatabaseMemberRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a ContextDB member.
       *
       * @description Creates a member. If GenerateInitialKey is set to true, the first API key is also issued, and the plaintext ApiKey is returned in the response. This is a sensitive field and is returned only once. Store it securely. After the member is created, you can call the List or Get operation to query the member and the metadata of the API keys under the member.
       *
       * @param request CreateContextDatabaseMemberRequest
       * @return CreateContextDatabaseMemberResponse
       */
      Models::CreateContextDatabaseMemberResponse createContextDatabaseMember(const Models::CreateContextDatabaseMemberRequest &request);

      /**
       * @summary Creates a synchronization connection.
       *
       * @description For write operations, you can specify a ClientToken to ensure idempotency. If no ClientToken is provided, the backend automatically generates one. Upon successful creation, the complete information of the created object is returned, including the ID that can be used for subsequent queries or updates.
       *
       * @param request CreateContextDatabaseSyncConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateContextDatabaseSyncConnectionResponse
       */
      Models::CreateContextDatabaseSyncConnectionResponse createContextDatabaseSyncConnectionWithOptions(const Models::CreateContextDatabaseSyncConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a synchronization connection.
       *
       * @description For write operations, you can specify a ClientToken to ensure idempotency. If no ClientToken is provided, the backend automatically generates one. Upon successful creation, the complete information of the created object is returned, including the ID that can be used for subsequent queries or updates.
       *
       * @param request CreateContextDatabaseSyncConnectionRequest
       * @return CreateContextDatabaseSyncConnectionResponse
       */
      Models::CreateContextDatabaseSyncConnectionResponse createContextDatabaseSyncConnection(const Models::CreateContextDatabaseSyncConnectionRequest &request);

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
      Models::CreateContextDatabaseSyncJobResponse createContextDatabaseSyncJobWithOptions(const Models::CreateContextDatabaseSyncJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an import task.
       *
       * @description Write operations support idempotence via ClientToken. If ClientToken is not provided, the backend generates one automatically. Target is an implicit concept — you only need to provide KnowledgeBaseId, and the backend automatically creates or matches the Target.
       * On success, the response returns the complete information of the created object. The Id field is active and can be used for subsequent queries or updates.
       *
       * @param request CreateContextDatabaseSyncJobRequest
       * @return CreateContextDatabaseSyncJobResponse
       */
      Models::CreateContextDatabaseSyncJobResponse createContextDatabaseSyncJob(const Models::CreateContextDatabaseSyncJobRequest &request);

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
      Models::CreateContextDatabaseSyncSourceResponse createContextDatabaseSyncSourceWithOptions(const Models::CreateContextDatabaseSyncSourceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a data selection scope.
       *
       * @description Write operations support idempotence by passing a ClientToken. If no token is provided, the backend generates one automatically. After creating a data selection scope, you typically need to call StartContextDatabaseSyncSourceDiscovery to discover available nodes.
       * On success, the response returns the complete information of the created object. The Id field can be used for subsequent queries or updates.
       *
       * @param request CreateContextDatabaseSyncSourceRequest
       * @return CreateContextDatabaseSyncSourceResponse
       */
      Models::CreateContextDatabaseSyncSourceResponse createContextDatabaseSyncSource(const Models::CreateContextDatabaseSyncSourceRequest &request);

      /**
       * @summary Creates a workspace, the first member, and the first API key in a one-time onboarding process.
       *
       * @description Creates a workspace along with the first member and the first API key in a one-time onboarding process. The plaintext API key is returned in the response.
       *
       * @param request CreateContextDatabaseWorkspaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateContextDatabaseWorkspaceResponse
       */
      Models::CreateContextDatabaseWorkspaceResponse createContextDatabaseWorkspaceWithOptions(const Models::CreateContextDatabaseWorkspaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a workspace, the first member, and the first API key in a one-time onboarding process.
       *
       * @description Creates a workspace along with the first member and the first API key in a one-time onboarding process. The plaintext API key is returned in the response.
       *
       * @param request CreateContextDatabaseWorkspaceRequest
       * @return CreateContextDatabaseWorkspaceResponse
       */
      Models::CreateContextDatabaseWorkspaceResponse createContextDatabaseWorkspace(const Models::CreateContextDatabaseWorkspaceRequest &request);

      /**
       * @summary Creates a user-specific agent.
       *
       * @param tmpReq CreateCustomAgentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCustomAgentResponse
       */
      Models::CreateCustomAgentResponse createCustomAgentWithOptions(const Models::CreateCustomAgentRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a user-specific agent.
       *
       * @param request CreateCustomAgentRequest
       * @return CreateCustomAgentResponse
       */
      Models::CreateCustomAgentResponse createCustomAgent(const Models::CreateCustomAgentRequest &request);

      /**
       * @summary Creates a batch instance inspection task.
       *
       * @param request CreateInspectionTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateInspectionTaskResponse
       */
      Models::CreateInspectionTaskResponse createInspectionTaskWithOptions(const Models::CreateInspectionTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a batch instance inspection task.
       *
       * @param request CreateInspectionTaskRequest
       * @return CreateInspectionTaskResponse
       */
      Models::CreateInspectionTaskResponse createInspectionTask(const Models::CreateInspectionTaskRequest &request);

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
      Models::CreateMOUsageDetailExportResponse createMOUsageDetailExportWithOptions(const Models::CreateMOUsageDetailExportRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Triggers an asynchronous export task for MO usage details in CSV format.
       *
       * @description ### Applicable engine
       * [RDS AI Assistant Ultimate Edition](https://www.alibabacloud.com/help/en/rds/apsaradb-rds-for-mysql/rds-copilot-ultra)
       *
       * @param request CreateMOUsageDetailExportRequest
       * @return CreateMOUsageDetailExportResponse
       */
      Models::CreateMOUsageDetailExportResponse createMOUsageDetailExport(const Models::CreateMOUsageDetailExportRequest &request);

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
      Models::CreateSandboxTemplateResponse createSandboxTemplateWithOptions(const Models::CreateSandboxTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

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
      Models::CreateSandboxTemplateResponse createSandboxTemplate(const Models::CreateSandboxTemplateRequest &request);

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
      Models::CreateScheduledTaskResponse createScheduledTaskWithOptions(const Models::CreateScheduledTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::CreateScheduledTaskResponse createScheduledTask(const Models::CreateScheduledTaskRequest &request);

      /**
       * @summary Creates a user-defined skill.
       *
       * @param tmpReq CreateSkillRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSkillResponse
       */
      Models::CreateSkillResponse createSkillWithOptions(const Models::CreateSkillRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a user-defined skill.
       *
       * @param request CreateSkillRequest
       * @return CreateSkillResponse
       */
      Models::CreateSkillResponse createSkill(const Models::CreateSkillRequest &request);

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
      Models::DeleteApiKeyResponse deleteApiKeyWithOptions(const Models::DeleteApiKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a custom API key.
       *
       * @description ### Applicable engine
       * [RDS AI Assistant Ultimate Edition](https://www.alibabacloud.com/help/en/rds/apsaradb-rds-for-mysql/rds-copilot-ultra)
       *
       * @param request DeleteApiKeyRequest
       * @return DeleteApiKeyResponse
       */
      Models::DeleteApiKeyResponse deleteApiKey(const Models::DeleteApiKeyRequest &request);

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
      Models::DeleteAppInstanceResponse deleteAppInstanceWithOptions(const Models::DeleteAppInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DeleteAppInstanceResponse deleteAppInstance(const Models::DeleteAppInstanceRequest &request);

      /**
       * @summary Deletes a context database member.
       *
       * @description Deletes a member. This is a hard delete and cannot be undone.
       *
       * @param request DeleteContextDatabaseMemberRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteContextDatabaseMemberResponse
       */
      Models::DeleteContextDatabaseMemberResponse deleteContextDatabaseMemberWithOptions(const Models::DeleteContextDatabaseMemberRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a context database member.
       *
       * @description Deletes a member. This is a hard delete and cannot be undone.
       *
       * @param request DeleteContextDatabaseMemberRequest
       * @return DeleteContextDatabaseMemberResponse
       */
      Models::DeleteContextDatabaseMemberResponse deleteContextDatabaseMember(const Models::DeleteContextDatabaseMemberRequest &request);

      /**
       * @summary Deletes a data source.
       *
       * @description For write operations, you can specify a ClientToken to ensure idempotency. If you do not specify a ClientToken, the backend automatically generates one.
       *
       * @param request DeleteContextDatabaseSyncConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteContextDatabaseSyncConnectionResponse
       */
      Models::DeleteContextDatabaseSyncConnectionResponse deleteContextDatabaseSyncConnectionWithOptions(const Models::DeleteContextDatabaseSyncConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a data source.
       *
       * @description For write operations, you can specify a ClientToken to ensure idempotency. If you do not specify a ClientToken, the backend automatically generates one.
       *
       * @param request DeleteContextDatabaseSyncConnectionRequest
       * @return DeleteContextDatabaseSyncConnectionResponse
       */
      Models::DeleteContextDatabaseSyncConnectionResponse deleteContextDatabaseSyncConnection(const Models::DeleteContextDatabaseSyncConnectionRequest &request);

      /**
       * @summary Deletes an import task.
       *
       * @description You can provide a ClientToken to ensure idempotency for write operations. If not provided, the backend automatically generates one.
       *
       * @param request DeleteContextDatabaseSyncJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteContextDatabaseSyncJobResponse
       */
      Models::DeleteContextDatabaseSyncJobResponse deleteContextDatabaseSyncJobWithOptions(const Models::DeleteContextDatabaseSyncJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an import task.
       *
       * @description You can provide a ClientToken to ensure idempotency for write operations. If not provided, the backend automatically generates one.
       *
       * @param request DeleteContextDatabaseSyncJobRequest
       * @return DeleteContextDatabaseSyncJobResponse
       */
      Models::DeleteContextDatabaseSyncJobResponse deleteContextDatabaseSyncJob(const Models::DeleteContextDatabaseSyncJobRequest &request);

      /**
       * @summary Deletes a data selection scope.
       *
       * @description Write operations support idempotence through ClientToken. If ClientToken is not provided, the backend generates one automatically.
       *
       * @param request DeleteContextDatabaseSyncSourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteContextDatabaseSyncSourceResponse
       */
      Models::DeleteContextDatabaseSyncSourceResponse deleteContextDatabaseSyncSourceWithOptions(const Models::DeleteContextDatabaseSyncSourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a data selection scope.
       *
       * @description Write operations support idempotence through ClientToken. If ClientToken is not provided, the backend generates one automatically.
       *
       * @param request DeleteContextDatabaseSyncSourceRequest
       * @return DeleteContextDatabaseSyncSourceResponse
       */
      Models::DeleteContextDatabaseSyncSourceResponse deleteContextDatabaseSyncSource(const Models::DeleteContextDatabaseSyncSourceRequest &request);

      /**
       * @summary Deletes a ContextDB workspace.
       *
       * @description Deletes a workspace. This is a hard delete and cannot be recovered. After the workspace is deleted, the local metadata is soft-deleted synchronously. Deleted workspaces no longer count toward the quota.
       *
       * @param request DeleteContextDatabaseWorkspaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteContextDatabaseWorkspaceResponse
       */
      Models::DeleteContextDatabaseWorkspaceResponse deleteContextDatabaseWorkspaceWithOptions(const Models::DeleteContextDatabaseWorkspaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a ContextDB workspace.
       *
       * @description Deletes a workspace. This is a hard delete and cannot be recovered. After the workspace is deleted, the local metadata is soft-deleted synchronously. Deleted workspaces no longer count toward the quota.
       *
       * @param request DeleteContextDatabaseWorkspaceRequest
       * @return DeleteContextDatabaseWorkspaceResponse
       */
      Models::DeleteContextDatabaseWorkspaceResponse deleteContextDatabaseWorkspace(const Models::DeleteContextDatabaseWorkspaceRequest &request);

      /**
       * @summary Deletes a dedicated agent created by the user.
       *
       * @param request DeleteCustomAgentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCustomAgentResponse
       */
      Models::DeleteCustomAgentResponse deleteCustomAgentWithOptions(const Models::DeleteCustomAgentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a dedicated agent created by the user.
       *
       * @param request DeleteCustomAgentRequest
       * @return DeleteCustomAgentResponse
       */
      Models::DeleteCustomAgentResponse deleteCustomAgent(const Models::DeleteCustomAgentRequest &request);

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
      Models::DeleteSandboxTemplateResponse deleteSandboxTemplateWithOptions(const Models::DeleteSandboxTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DeleteSandboxTemplateResponse deleteSandboxTemplate(const Models::DeleteSandboxTemplateRequest &request);

      /**
       * @summary Deletes a specified inspection configuration.
       *
       * @param request DeleteScheduledTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteScheduledTaskResponse
       */
      Models::DeleteScheduledTaskResponse deleteScheduledTaskWithOptions(const Models::DeleteScheduledTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified inspection configuration.
       *
       * @param request DeleteScheduledTaskRequest
       * @return DeleteScheduledTaskResponse
       */
      Models::DeleteScheduledTaskResponse deleteScheduledTask(const Models::DeleteScheduledTaskRequest &request);

      /**
       * @summary Deletes a specified Skill.
       *
       * @param request DeleteSkillRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSkillResponse
       */
      Models::DeleteSkillResponse deleteSkillWithOptions(const Models::DeleteSkillRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified Skill.
       *
       * @param request DeleteSkillRequest
       * @return DeleteSkillResponse
       */
      Models::DeleteSkillResponse deleteSkill(const Models::DeleteSkillRequest &request);

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
      Models::DescribeAppInstanceAttributeResponse describeAppInstanceAttributeWithOptions(const Models::DescribeAppInstanceAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DescribeAppInstanceAttributeResponse describeAppInstanceAttribute(const Models::DescribeAppInstanceAttributeRequest &request);

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
      Models::DescribeAppInstancesResponse describeAppInstancesWithOptions(const Models::DescribeAppInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DescribeAppInstancesResponse describeAppInstances(const Models::DescribeAppInstancesRequest &request);

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
      Models::DescribeCommonSandboxTemplatesResponse describeCommonSandboxTemplatesWithOptions(const Models::DescribeCommonSandboxTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DescribeCommonSandboxTemplatesResponse describeCommonSandboxTemplates(const Models::DescribeCommonSandboxTemplatesRequest &request);

      /**
       * @summary Queries a list of events.
       *
       * @param request DescribeEventsListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEventsListResponse
       */
      Models::DescribeEventsListResponse describeEventsListWithOptions(const Models::DescribeEventsListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of events.
       *
       * @param request DescribeEventsListRequest
       * @return DescribeEventsListResponse
       */
      Models::DescribeEventsListResponse describeEventsList(const Models::DescribeEventsListRequest &request);

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
      Models::DescribeInstanceAuthInfoResponse describeInstanceAuthInfoWithOptions(const Models::DescribeInstanceAuthInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DescribeInstanceAuthInfoResponse describeInstanceAuthInfo(const Models::DescribeInstanceAuthInfoRequest &request);

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
      Models::DescribeInstanceEndpointsResponse describeInstanceEndpointsWithOptions(const Models::DescribeInstanceEndpointsRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DescribeInstanceEndpointsResponse describeInstanceEndpoints(const Models::DescribeInstanceEndpointsRequest &request);

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
      Models::DescribeInstanceIpWhitelistResponse describeInstanceIpWhitelistWithOptions(const Models::DescribeInstanceIpWhitelistRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DescribeInstanceIpWhitelistResponse describeInstanceIpWhitelist(const Models::DescribeInstanceIpWhitelistRequest &request);

      /**
       * @summary Queries the RAG Agent configuration of an RDS AI application instance.
       *
       * @param request DescribeInstanceRAGConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeInstanceRAGConfigResponse
       */
      Models::DescribeInstanceRAGConfigResponse describeInstanceRAGConfigWithOptions(const Models::DescribeInstanceRAGConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the RAG Agent configuration of an RDS AI application instance.
       *
       * @param request DescribeInstanceRAGConfigRequest
       * @return DescribeInstanceRAGConfigResponse
       */
      Models::DescribeInstanceRAGConfigResponse describeInstanceRAGConfig(const Models::DescribeInstanceRAGConfigRequest &request);

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
      Models::DescribeInstanceSSLResponse describeInstanceSSLWithOptions(const Models::DescribeInstanceSSLRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DescribeInstanceSSLResponse describeInstanceSSL(const Models::DescribeInstanceSSLRequest &request);

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
      Models::DescribeInstanceStorageConfigResponse describeInstanceStorageConfigWithOptions(const Models::DescribeInstanceStorageConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DescribeInstanceStorageConfigResponse describeInstanceStorageConfig(const Models::DescribeInstanceStorageConfigRequest &request);

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
      Models::DescribeMOTokenUsageDetailResponse describeMOTokenUsageDetailWithOptions(const Models::DescribeMOTokenUsageDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the token usage records of RDS AI Assistant Ultimate Edition.
       *
       * @description ### Applicable engine
       * [RDS AI Assistant Ultimate Edition](https://www.alibabacloud.com/help/en/rds/apsaradb-rds-for-mysql/rds-copilot-ultra)
       *
       * @param request DescribeMOTokenUsageDetailRequest
       * @return DescribeMOTokenUsageDetailResponse
       */
      Models::DescribeMOTokenUsageDetailResponse describeMOTokenUsageDetail(const Models::DescribeMOTokenUsageDetailRequest &request);

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
      Models::DescribeMOTokenUsageSummaryResponse describeMOTokenUsageSummaryWithOptions(const Models::DescribeMOTokenUsageSummaryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the token usage summary for a model operator instance.
       *
       * @description ### Applicable engine
       * [RDS AI Assistant Ultimate Edition](https://www.alibabacloud.com/help/en/rds/apsaradb-rds-for-mysql/rds-copilot-ultra)
       *
       * @param request DescribeMOTokenUsageSummaryRequest
       * @return DescribeMOTokenUsageSummaryResponse
       */
      Models::DescribeMOTokenUsageSummaryResponse describeMOTokenUsageSummary(const Models::DescribeMOTokenUsageSummaryRequest &request);

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
      Models::DescribeMOUsageDetailExportResponse describeMOUsageDetailExportWithOptions(const Models::DescribeMOUsageDetailExportRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status or download link of an asynchronous CSV export task for MO usage details.
       *
       * @description ### Applicable engine
       * [RDS AI Assistant Ultimate Edition](https://www.alibabacloud.com/help/en/rds/apsaradb-rds-for-mysql/rds-copilot-ultra)
       *
       * @param request DescribeMOUsageDetailExportRequest
       * @return DescribeMOUsageDetailExportResponse
       */
      Models::DescribeMOUsageDetailExportResponse describeMOUsageDetailExport(const Models::DescribeMOUsageDetailExportRequest &request);

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
      Models::DescribeModelOperatorResponse describeModelOperatorWithOptions(const Models::DescribeModelOperatorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the basic information and usage of an RDS AI Assistant Ultimate Edition instance.
       *
       * @description ### Applicable engine
       * [RDS AI Assistant Ultimate Edition](https://www.alibabacloud.com/help/en/rds/apsaradb-rds-for-mysql/rds-copilot-ultra)
       *
       * @param request DescribeModelOperatorRequest
       * @return DescribeModelOperatorResponse
       */
      Models::DescribeModelOperatorResponse describeModelOperator(const Models::DescribeModelOperatorRequest &request);

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
      Models::DescribeMonitorDataResponse describeMonitorDataWithOptions(const Models::DescribeMonitorDataRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries instance monitoring data of an RDS AI Assistant Ultimate Edition instance.
       *
       * @description ### Applicable engine
       * [RDS AI Assistant Ultimate Edition](https://www.alibabacloud.com/help/en/rds/apsaradb-rds-for-mysql/rds-copilot-ultra)
       *
       * @param request DescribeMonitorDataRequest
       * @return DescribeMonitorDataResponse
       */
      Models::DescribeMonitorDataResponse describeMonitorData(const Models::DescribeMonitorDataRequest &request);

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
      Models::DescribeSandboxTemplatesResponse describeSandboxTemplatesWithOptions(const Models::DescribeSandboxTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DescribeSandboxTemplatesResponse describeSandboxTemplates(const Models::DescribeSandboxTemplatesRequest &request);

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
      Models::DescribeWhitelistIpsResponse describeWhitelistIpsWithOptions(const Models::DescribeWhitelistIpsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the whitelist of an RDS AI Assistant Ultimate Edition instance.
       *
       * @description ### Applicable engine
       * [RDS AI Assistant Ultimate Edition](https://www.alibabacloud.com/help/en/rds/apsaradb-rds-for-mysql/rds-copilot-ultra)
       *
       * @param request DescribeWhitelistIpsRequest
       * @return DescribeWhitelistIpsResponse
       */
      Models::DescribeWhitelistIpsResponse describeWhitelistIps(const Models::DescribeWhitelistIpsRequest &request);

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
      Models::DisableAgentRuntimeResponse disableAgentRuntimeWithOptions(const Models::DisableAgentRuntimeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables the sandbox and Edge Routine capabilities of a Supabase instance. Note: This operation deletes all sandboxes and Edge Routines of the instance. Fully assess the business risks before performing this operation.
       *
       * @description Disables the sandbox and Edge Routine capabilities of a Supabase instance.
       * >Notice: This operation deletes all sandboxes and Edge Routines of the Supabase instance. Fully assess the business risks before performing this operation.
       *
       * @param request DisableAgentRuntimeRequest
       * @return DisableAgentRuntimeResponse
       */
      Models::DisableAgentRuntimeResponse disableAgentRuntime(const Models::DisableAgentRuntimeRequest &request);

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
      Models::EnableAgentRuntimeResponse enableAgentRuntimeWithOptions(const Models::EnableAgentRuntimeRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::EnableAgentRuntimeResponse enableAgentRuntime(const Models::EnableAgentRuntimeRequest &request);

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
      Models::GetAvailableLLMModelsResponse getAvailableLLMModelsWithOptions(const Models::GetAvailableLLMModelsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the list of large language models supported by the current RDS Supabase AI gateway.
       *
       * @description ### Applicable engine
       * RDS Supabase.
       *
       * @param request GetAvailableLLMModelsRequest
       * @return GetAvailableLLMModelsResponse
       */
      Models::GetAvailableLLMModelsResponse getAvailableLLMModels(const Models::GetAvailableLLMModelsRequest &request);

      /**
       * @summary Retrieves the available models for a session.
       *
       * @param request GetChatModelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetChatModelResponse
       */
      Models::GetChatModelResponse getChatModelWithOptions(const Models::GetChatModelRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the available models for a session.
       *
       * @param request GetChatModelRequest
       * @return GetChatModelResponse
       */
      Models::GetChatModelResponse getChatModel(const Models::GetChatModelRequest &request);

      /**
       * @summary Retrieves the details of a datasource configuration.
       *
       * @description Retrieves the details of a connection.
       *
       * @param request GetContextDatabaseSyncConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetContextDatabaseSyncConnectionResponse
       */
      Models::GetContextDatabaseSyncConnectionResponse getContextDatabaseSyncConnectionWithOptions(const Models::GetContextDatabaseSyncConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a datasource configuration.
       *
       * @description Retrieves the details of a connection.
       *
       * @param request GetContextDatabaseSyncConnectionRequest
       * @return GetContextDatabaseSyncConnectionResponse
       */
      Models::GetContextDatabaseSyncConnectionResponse getContextDatabaseSyncConnection(const Models::GetContextDatabaseSyncConnectionRequest &request);

      /**
       * @summary Queries the authorization scope of a data source.
       *
       * @description Queries the authorization scope of a connection.
       *
       * @param request GetContextDatabaseSyncConnectionAuthorizationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetContextDatabaseSyncConnectionAuthorizationResponse
       */
      Models::GetContextDatabaseSyncConnectionAuthorizationResponse getContextDatabaseSyncConnectionAuthorizationWithOptions(const Models::GetContextDatabaseSyncConnectionAuthorizationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the authorization scope of a data source.
       *
       * @description Queries the authorization scope of a connection.
       *
       * @param request GetContextDatabaseSyncConnectionAuthorizationRequest
       * @return GetContextDatabaseSyncConnectionAuthorizationResponse
       */
      Models::GetContextDatabaseSyncConnectionAuthorizationResponse getContextDatabaseSyncConnectionAuthorization(const Models::GetContextDatabaseSyncConnectionAuthorizationRequest &request);

      /**
       * @summary Queries the status of a discovery task by task ID.
       *
       * @description Queries the status of a discovery task by task ID.
       *
       * @param request GetContextDatabaseSyncDiscoveryTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetContextDatabaseSyncDiscoveryTaskResponse
       */
      Models::GetContextDatabaseSyncDiscoveryTaskResponse getContextDatabaseSyncDiscoveryTaskWithOptions(const Models::GetContextDatabaseSyncDiscoveryTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of a discovery task by task ID.
       *
       * @description Queries the status of a discovery task by task ID.
       *
       * @param request GetContextDatabaseSyncDiscoveryTaskRequest
       * @return GetContextDatabaseSyncDiscoveryTaskResponse
       */
      Models::GetContextDatabaseSyncDiscoveryTaskResponse getContextDatabaseSyncDiscoveryTask(const Models::GetContextDatabaseSyncDiscoveryTaskRequest &request);

      /**
       * @summary Retrieves the details of an import job.
       *
       * @description Retrieves the details of a job.
       *
       * @param request GetContextDatabaseSyncJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetContextDatabaseSyncJobResponse
       */
      Models::GetContextDatabaseSyncJobResponse getContextDatabaseSyncJobWithOptions(const Models::GetContextDatabaseSyncJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of an import job.
       *
       * @description Retrieves the details of a job.
       *
       * @param request GetContextDatabaseSyncJobRequest
       * @return GetContextDatabaseSyncJobResponse
       */
      Models::GetContextDatabaseSyncJobResponse getContextDatabaseSyncJob(const Models::GetContextDatabaseSyncJobRequest &request);

      /**
       * @summary Queries whether an import task can be started.
       *
       * @description Queries whether a job can be started.
       *
       * @param request GetContextDatabaseSyncJobReadinessRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetContextDatabaseSyncJobReadinessResponse
       */
      Models::GetContextDatabaseSyncJobReadinessResponse getContextDatabaseSyncJobReadinessWithOptions(const Models::GetContextDatabaseSyncJobReadinessRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries whether an import task can be started.
       *
       * @description Queries whether a job can be started.
       *
       * @param request GetContextDatabaseSyncJobReadinessRequest
       * @return GetContextDatabaseSyncJobReadinessResponse
       */
      Models::GetContextDatabaseSyncJobReadinessResponse getContextDatabaseSyncJobReadiness(const Models::GetContextDatabaseSyncJobReadinessRequest &request);

      /**
       * @summary Queries the scheduling configuration of an import task.
       *
       * @description Queries the scheduling configuration of a job.
       *
       * @param request GetContextDatabaseSyncJobScheduleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetContextDatabaseSyncJobScheduleResponse
       */
      Models::GetContextDatabaseSyncJobScheduleResponse getContextDatabaseSyncJobScheduleWithOptions(const Models::GetContextDatabaseSyncJobScheduleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the scheduling configuration of an import task.
       *
       * @description Queries the scheduling configuration of a job.
       *
       * @param request GetContextDatabaseSyncJobScheduleRequest
       * @return GetContextDatabaseSyncJobScheduleResponse
       */
      Models::GetContextDatabaseSyncJobScheduleResponse getContextDatabaseSyncJobSchedule(const Models::GetContextDatabaseSyncJobScheduleRequest &request);

      /**
       * @summary Retrieves the details of a run.
       *
       * @description Retrieves the details of a run.
       *
       * @param request GetContextDatabaseSyncRunRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetContextDatabaseSyncRunResponse
       */
      Models::GetContextDatabaseSyncRunResponse getContextDatabaseSyncRunWithOptions(const Models::GetContextDatabaseSyncRunRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a run.
       *
       * @description Retrieves the details of a run.
       *
       * @param request GetContextDatabaseSyncRunRequest
       * @return GetContextDatabaseSyncRunResponse
       */
      Models::GetContextDatabaseSyncRunResponse getContextDatabaseSyncRun(const Models::GetContextDatabaseSyncRunRequest &request);

      /**
       * @summary Retrieves the details of a data selection scope.
       *
       * @description Retrieves the details of a source.
       *
       * @param request GetContextDatabaseSyncSourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetContextDatabaseSyncSourceResponse
       */
      Models::GetContextDatabaseSyncSourceResponse getContextDatabaseSyncSourceWithOptions(const Models::GetContextDatabaseSyncSourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a data selection scope.
       *
       * @description Retrieves the details of a source.
       *
       * @param request GetContextDatabaseSyncSourceRequest
       * @return GetContextDatabaseSyncSourceResponse
       */
      Models::GetContextDatabaseSyncSourceResponse getContextDatabaseSyncSource(const Models::GetContextDatabaseSyncSourceRequest &request);

      /**
       * @summary Queries the current node selection in the data selection scope.
       *
       * @description Queries the current node selection of the source.
       *
       * @param request GetContextDatabaseSyncSourceSelectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetContextDatabaseSyncSourceSelectionResponse
       */
      Models::GetContextDatabaseSyncSourceSelectionResponse getContextDatabaseSyncSourceSelectionWithOptions(const Models::GetContextDatabaseSyncSourceSelectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the current node selection in the data selection scope.
       *
       * @description Queries the current node selection of the source.
       *
       * @param request GetContextDatabaseSyncSourceSelectionRequest
       * @return GetContextDatabaseSyncSourceSelectionResponse
       */
      Models::GetContextDatabaseSyncSourceSelectionResponse getContextDatabaseSyncSourceSelection(const Models::GetContextDatabaseSyncSourceSelectionRequest &request);

      /**
       * @summary Queries the historical conversations of a user.
       *
       * @param request GetConversationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetConversationsResponse
       */
      Models::GetConversationsResponse getConversationsWithOptions(const Models::GetConversationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the historical conversations of a user.
       *
       * @param request GetConversationsRequest
       * @return GetConversationsResponse
       */
      Models::GetConversationsResponse getConversations(const Models::GetConversationsRequest &request);

      /**
       * @summary Queries a dedicated agent created by the user.
       *
       * @param request GetCustomAgentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCustomAgentResponse
       */
      Models::GetCustomAgentResponse getCustomAgentWithOptions(const Models::GetCustomAgentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a dedicated agent created by the user.
       *
       * @param request GetCustomAgentRequest
       * @return GetCustomAgentResponse
       */
      Models::GetCustomAgentResponse getCustomAgent(const Models::GetCustomAgentRequest &request);

      /**
       * @summary Retrieves the details of an inspection report by report ID.
       *
       * @param request GetInspectionReportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInspectionReportResponse
       */
      Models::GetInspectionReportResponse getInspectionReportWithOptions(const Models::GetInspectionReportRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of an inspection report by report ID.
       *
       * @param request GetInspectionReportRequest
       * @return GetInspectionReportResponse
       */
      Models::GetInspectionReportResponse getInspectionReport(const Models::GetInspectionReportRequest &request);

      /**
       * @summary Queries the details of specific conversation messages.
       *
       * @param request GetMessagesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMessagesResponse
       */
      Models::GetMessagesResponse getMessagesWithOptions(const Models::GetMessagesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of specific conversation messages.
       *
       * @param request GetMessagesRequest
       * @return GetMessagesResponse
       */
      Models::GetMessagesResponse getMessages(const Models::GetMessagesRequest &request);

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
      Models::GetModelOperatorOrderResponse getModelOperatorOrderWithOptions(const Models::GetModelOperatorOrderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves order information for RDS AI Assistant Ultimate Edition.
       *
       * @description ### Applicable engine
       * [RDS AI Assistant Ultimate Edition](https://www.alibabacloud.com/help/en/rds/apsaradb-rds-for-mysql/rds-copilot-ultra)
       *
       * @param request GetModelOperatorOrderRequest
       * @return GetModelOperatorOrderResponse
       */
      Models::GetModelOperatorOrderResponse getModelOperatorOrder(const Models::GetModelOperatorOrderRequest &request);

      /**
       * @summary Queries the list of all instance IDs included in a specified scheduled inspection configuration.
       *
       * @param request GetScheduledInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetScheduledInstancesResponse
       */
      Models::GetScheduledInstancesResponse getScheduledInstancesWithOptions(const Models::GetScheduledInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of all instance IDs included in a specified scheduled inspection configuration.
       *
       * @param request GetScheduledInstancesRequest
       * @return GetScheduledInstancesResponse
       */
      Models::GetScheduledInstancesResponse getScheduledInstances(const Models::GetScheduledInstancesRequest &request);

      /**
       * @summary Queries all inspection reports under a specified scheduled task, with support for filtering by time range and pagination.
       *
       * @param request GetScheduledReportsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetScheduledReportsResponse
       */
      Models::GetScheduledReportsResponse getScheduledReportsWithOptions(const Models::GetScheduledReportsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all inspection reports under a specified scheduled task, with support for filtering by time range and pagination.
       *
       * @param request GetScheduledReportsRequest
       * @return GetScheduledReportsResponse
       */
      Models::GetScheduledReportsResponse getScheduledReports(const Models::GetScheduledReportsRequest &request);

      /**
       * @summary Retrieves the details of a specified skill. You can retrieve your own skills or system preset skills.
       *
       * @param request GetSkillRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSkillResponse
       */
      Models::GetSkillResponse getSkillWithOptions(const Models::GetSkillRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a specified skill. You can retrieve your own skills or system preset skills.
       *
       * @param request GetSkillRequest
       * @return GetSkillResponse
       */
      Models::GetSkillResponse getSkill(const Models::GetSkillRequest &request);

      /**
       * @summary Queries the list of individual inspection reports for all non-scheduled tasks under a specified user, with pagination support.
       *
       * @param request GetStandAloneReportsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetStandAloneReportsResponse
       */
      Models::GetStandAloneReportsResponse getStandAloneReportsWithOptions(const Models::GetStandAloneReportsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of individual inspection reports for all non-scheduled tasks under a specified user, with pagination support.
       *
       * @param request GetStandAloneReportsRequest
       * @return GetStandAloneReportsResponse
       */
      Models::GetStandAloneReportsResponse getStandAloneReports(const Models::GetStandAloneReportsRequest &request);

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
      Models::ListApiKeysResponse listApiKeysWithOptions(const Models::ListApiKeysRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries custom API keys.
       *
       * @description ### Applicable engine
       * [RDS AI Assistant Ultimate Edition](https://www.alibabacloud.com/help/en/rds/apsaradb-rds-for-mysql/rds-copilot-ultra)
       *
       * @param request ListApiKeysRequest
       * @return ListApiKeysResponse
       */
      Models::ListApiKeysResponse listApiKeys(const Models::ListApiKeysRequest &request);

      /**
       * @summary Lists the API keys for a context database.
       *
       * @description Lists the API keys under a specified member. The plaintext key values are not returned.
       *
       * @param request ListContextDatabaseApiKeysRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListContextDatabaseApiKeysResponse
       */
      Models::ListContextDatabaseApiKeysResponse listContextDatabaseApiKeysWithOptions(const Models::ListContextDatabaseApiKeysRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the API keys for a context database.
       *
       * @description Lists the API keys under a specified member. The plaintext key values are not returned.
       *
       * @param request ListContextDatabaseApiKeysRequest
       * @return ListContextDatabaseApiKeysResponse
       */
      Models::ListContextDatabaseApiKeysResponse listContextDatabaseApiKeys(const Models::ListContextDatabaseApiKeysRequest &request);

      /**
       * @summary Lists context database members.
       *
       * @description Lists all members in a specified workspace. Each member includes a list of API keys (plaintext values are not returned).
       *
       * @param request ListContextDatabaseMembersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListContextDatabaseMembersResponse
       */
      Models::ListContextDatabaseMembersResponse listContextDatabaseMembersWithOptions(const Models::ListContextDatabaseMembersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists context database members.
       *
       * @description Lists all members in a specified workspace. Each member includes a list of API keys (plaintext values are not returned).
       *
       * @param request ListContextDatabaseMembersRequest
       * @return ListContextDatabaseMembersResponse
       */
      Models::ListContextDatabaseMembersResponse listContextDatabaseMembers(const Models::ListContextDatabaseMembersRequest &request);

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
      Models::ListContextDatabaseSyncConnectionsResponse listContextDatabaseSyncConnectionsWithOptions(const Models::ListContextDatabaseSyncConnectionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the datasource configurations in a workspace.
       *
       * @description The list operation returns paginated results by default. Page and PageSize are optional parameters.
       * The Data list field in the response is returned as an array. Total indicates the total number of records that match the specified conditions.
       *
       * @param request ListContextDatabaseSyncConnectionsRequest
       * @return ListContextDatabaseSyncConnectionsResponse
       */
      Models::ListContextDatabaseSyncConnectionsResponse listContextDatabaseSyncConnections(const Models::ListContextDatabaseSyncConnectionsRequest &request);

      /**
       * @summary Lists the documents associated with an import task.
       *
       * @description By default, this operation returns paginated results. The Page and PageSize parameters are optional. The Data field in the response is returned as an array, and the Total field indicates the total number of matching entries.
       *
       * @param request ListContextDatabaseSyncJobDocumentsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListContextDatabaseSyncJobDocumentsResponse
       */
      Models::ListContextDatabaseSyncJobDocumentsResponse listContextDatabaseSyncJobDocumentsWithOptions(const Models::ListContextDatabaseSyncJobDocumentsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the documents associated with an import task.
       *
       * @description By default, this operation returns paginated results. The Page and PageSize parameters are optional. The Data field in the response is returned as an array, and the Total field indicates the total number of matching entries.
       *
       * @param request ListContextDatabaseSyncJobDocumentsRequest
       * @return ListContextDatabaseSyncJobDocumentsResponse
       */
      Models::ListContextDatabaseSyncJobDocumentsResponse listContextDatabaseSyncJobDocuments(const Models::ListContextDatabaseSyncJobDocumentsRequest &request);

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
      Models::ListContextDatabaseSyncJobExclusionsResponse listContextDatabaseSyncJobExclusionsWithOptions(const Models::ListContextDatabaseSyncJobExclusionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the exclusions of an import task.
       *
       * @description This operation uses pagination by default. Page and PageSize are optional parameters.
       * The Data field in the response returns an array. Total indicates the total number of records that match the specified conditions.
       *
       * @param request ListContextDatabaseSyncJobExclusionsRequest
       * @return ListContextDatabaseSyncJobExclusionsResponse
       */
      Models::ListContextDatabaseSyncJobExclusionsResponse listContextDatabaseSyncJobExclusions(const Models::ListContextDatabaseSyncJobExclusionsRequest &request);

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
      Models::ListContextDatabaseSyncJobsResponse listContextDatabaseSyncJobsWithOptions(const Models::ListContextDatabaseSyncJobsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists import tasks.
       *
       * @description The list operation returns paginated results by default. Page and PageSize are optional parameters.
       * The Data list field in the response is returned as an array. Total indicates the total number of records that match the specified conditions.
       *
       * @param request ListContextDatabaseSyncJobsRequest
       * @return ListContextDatabaseSyncJobsResponse
       */
      Models::ListContextDatabaseSyncJobsResponse listContextDatabaseSyncJobs(const Models::ListContextDatabaseSyncJobsRequest &request);

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
      Models::ListContextDatabaseSyncPluginsResponse listContextDatabaseSyncPluginsWithOptions(const Models::ListContextDatabaseSyncPluginsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists available synchronization plugins.
       *
       * @description This operation returns a fixed-length array of available plugins in the workspace and does not support pagination.
       * The Data list field in the response is returned as an array, and Total indicates the total number of entries that meet the conditions.
       *
       * @param request ListContextDatabaseSyncPluginsRequest
       * @return ListContextDatabaseSyncPluginsResponse
       */
      Models::ListContextDatabaseSyncPluginsResponse listContextDatabaseSyncPlugins(const Models::ListContextDatabaseSyncPluginsRequest &request);

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
      Models::ListContextDatabaseSyncRunItemsResponse listContextDatabaseSyncRunItemsWithOptions(const Models::ListContextDatabaseSyncRunItemsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the run records.
       *
       * @description The list API returns paginated results by default. The Page and PageSize parameters are optional. Run records are a list of RunItems that show the processing results of each document in each import run.
       * The Data list field in the response is returned as an array, and Total indicates the total number of entries that meet the conditions.
       *
       * @param request ListContextDatabaseSyncRunItemsRequest
       * @return ListContextDatabaseSyncRunItemsResponse
       */
      Models::ListContextDatabaseSyncRunItemsResponse listContextDatabaseSyncRunItems(const Models::ListContextDatabaseSyncRunItemsRequest &request);

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
      Models::ListContextDatabaseSyncRunLogsResponse listContextDatabaseSyncRunLogsWithOptions(const Models::ListContextDatabaseSyncRunLogsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 列出 Run 日志
       *
       * @description 列表接口默认分页返回，Page 与 PageSize 为可选参数。
       * 响应中的 Data 列表字段使用数组返回，Total 表示符合条件的总条数。
       *
       * @param request ListContextDatabaseSyncRunLogsRequest
       * @return ListContextDatabaseSyncRunLogsResponse
       */
      Models::ListContextDatabaseSyncRunLogsResponse listContextDatabaseSyncRunLogs(const Models::ListContextDatabaseSyncRunLogsRequest &request);

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
      Models::ListContextDatabaseSyncRunsResponse listContextDatabaseSyncRunsWithOptions(const Models::ListContextDatabaseSyncRunsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the runs.
       *
       * @description By default, this operation returns paginated results. The Page and PageSize parameters are optional.
       * The Data field in the response is returned as an array, and the Total field indicates the total number of items that meet the query conditions.
       *
       * @param request ListContextDatabaseSyncRunsRequest
       * @return ListContextDatabaseSyncRunsResponse
       */
      Models::ListContextDatabaseSyncRunsResponse listContextDatabaseSyncRuns(const Models::ListContextDatabaseSyncRunsRequest &request);

      /**
       * @summary Lists the discovered tree nodes for the data selection scope.
       *
       * @description List operations return paginated results by default. Page and PageSize are optional parameters. The Data list field in the response is returned as an array, and Total indicates the total number of entries that meet the conditions.
       *
       * @param request ListContextDatabaseSyncSourceTreeNodesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListContextDatabaseSyncSourceTreeNodesResponse
       */
      Models::ListContextDatabaseSyncSourceTreeNodesResponse listContextDatabaseSyncSourceTreeNodesWithOptions(const Models::ListContextDatabaseSyncSourceTreeNodesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the discovered tree nodes for the data selection scope.
       *
       * @description List operations return paginated results by default. Page and PageSize are optional parameters. The Data list field in the response is returned as an array, and Total indicates the total number of entries that meet the conditions.
       *
       * @param request ListContextDatabaseSyncSourceTreeNodesRequest
       * @return ListContextDatabaseSyncSourceTreeNodesResponse
       */
      Models::ListContextDatabaseSyncSourceTreeNodesResponse listContextDatabaseSyncSourceTreeNodes(const Models::ListContextDatabaseSyncSourceTreeNodesRequest &request);

      /**
       * @summary Lists the data selection scopes.
       *
       * @description By default, the list operation returns paginated results. Page and PageSize are optional parameters. The Data list field in the response is returned as an array, and Total indicates the total number of entries that meet the conditions.
       *
       * @param request ListContextDatabaseSyncSourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListContextDatabaseSyncSourcesResponse
       */
      Models::ListContextDatabaseSyncSourcesResponse listContextDatabaseSyncSourcesWithOptions(const Models::ListContextDatabaseSyncSourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the data selection scopes.
       *
       * @description By default, the list operation returns paginated results. Page and PageSize are optional parameters. The Data list field in the response is returned as an array, and Total indicates the total number of entries that meet the conditions.
       *
       * @param request ListContextDatabaseSyncSourcesRequest
       * @return ListContextDatabaseSyncSourcesResponse
       */
      Models::ListContextDatabaseSyncSourcesResponse listContextDatabaseSyncSources(const Models::ListContextDatabaseSyncSourcesRequest &request);

      /**
       * @summary Lists ContextDB workspaces.
       *
       * @description Lists ContextDB workspaces.
       *
       * @param request ListContextDatabaseWorkspacesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListContextDatabaseWorkspacesResponse
       */
      Models::ListContextDatabaseWorkspacesResponse listContextDatabaseWorkspacesWithOptions(const Models::ListContextDatabaseWorkspacesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists ContextDB workspaces.
       *
       * @description Lists ContextDB workspaces.
       *
       * @param request ListContextDatabaseWorkspacesRequest
       * @return ListContextDatabaseWorkspacesResponse
       */
      Models::ListContextDatabaseWorkspacesResponse listContextDatabaseWorkspaces(const Models::ListContextDatabaseWorkspacesRequest &request);

      /**
       * @summary Queries the list of dedicated agents created by the user.
       *
       * @param request ListCustomAgentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCustomAgentResponse
       */
      Models::ListCustomAgentResponse listCustomAgentWithOptions(const Models::ListCustomAgentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of dedicated agents created by the user.
       *
       * @param request ListCustomAgentRequest
       * @return ListCustomAgentResponse
       */
      Models::ListCustomAgentResponse listCustomAgent(const Models::ListCustomAgentRequest &request);

      /**
       * @summary Queries the list of Agent tools for a user.
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCustomAgentToolsResponse
       */
      Models::ListCustomAgentToolsResponse listCustomAgentToolsWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of Agent tools for a user.
       *
       * @return ListCustomAgentToolsResponse
       */
      Models::ListCustomAgentToolsResponse listCustomAgentTools();

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
      Models::ListLLMTokenUsageResponse listLLMTokenUsageWithOptions(const Models::ListLLMTokenUsageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the AI gateway token usage for an RDS Supabase instance.
       *
       * @description ### Applicable engine
       * RDS Supabase.
       *
       * @param request ListLLMTokenUsageRequest
       * @return ListLLMTokenUsageResponse
       */
      Models::ListLLMTokenUsageResponse listLLMTokenUsage(const Models::ListLLMTokenUsageRequest &request);

      /**
       * @summary Queries the list of basic information about all inspection configurations under a specified user UID.
       *
       * @param request ListScheduledTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListScheduledTasksResponse
       */
      Models::ListScheduledTasksResponse listScheduledTasksWithOptions(const Models::ListScheduledTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of basic information about all inspection configurations under a specified user UID.
       *
       * @param request ListScheduledTasksRequest
       * @return ListScheduledTasksResponse
       */
      Models::ListScheduledTasksResponse listScheduledTasks(const Models::ListScheduledTasksRequest &request);

      /**
       * @summary Retrieves the custom skills of the current user and all system-preset skills.
       *
       * @param request ListSkillRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSkillResponse
       */
      Models::ListSkillResponse listSkillWithOptions(const Models::ListSkillRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the custom skills of the current user and all system-preset skills.
       *
       * @param request ListSkillRequest
       * @return ListSkillResponse
       */
      Models::ListSkillResponse listSkill(const Models::ListSkillRequest &request);

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
      Models::ModifyAppInstanceResponse modifyAppInstanceWithOptions(const Models::ModifyAppInstanceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

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
      Models::ModifyAppInstanceResponse modifyAppInstance(const Models::ModifyAppInstanceRequest &request);

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
      Models::ModifyInstanceAuthConfigResponse modifyInstanceAuthConfigWithOptions(const Models::ModifyInstanceAuthConfigRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

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
      Models::ModifyInstanceAuthConfigResponse modifyInstanceAuthConfig(const Models::ModifyInstanceAuthConfigRequest &request);

      /**
       * @summary Modifies the general configurations of an instance, such as network EIP and NAT configurations.
       *
       * @param request ModifyInstanceConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceConfigResponse
       */
      Models::ModifyInstanceConfigResponse modifyInstanceConfigWithOptions(const Models::ModifyInstanceConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the general configurations of an instance, such as network EIP and NAT configurations.
       *
       * @param request ModifyInstanceConfigRequest
       * @return ModifyInstanceConfigResponse
       */
      Models::ModifyInstanceConfigResponse modifyInstanceConfig(const Models::ModifyInstanceConfigRequest &request);

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
      Models::ModifyInstanceIpWhitelistResponse modifyInstanceIpWhitelistWithOptions(const Models::ModifyInstanceIpWhitelistRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::ModifyInstanceIpWhitelistResponse modifyInstanceIpWhitelist(const Models::ModifyInstanceIpWhitelistRequest &request);

      /**
       * @summary Modifies the RAG Agent configuration of an RDS AI application instance.
       *
       * @param tmpReq ModifyInstanceRAGConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyInstanceRAGConfigResponse
       */
      Models::ModifyInstanceRAGConfigResponse modifyInstanceRAGConfigWithOptions(const Models::ModifyInstanceRAGConfigRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the RAG Agent configuration of an RDS AI application instance.
       *
       * @param request ModifyInstanceRAGConfigRequest
       * @return ModifyInstanceRAGConfigResponse
       */
      Models::ModifyInstanceRAGConfigResponse modifyInstanceRAGConfig(const Models::ModifyInstanceRAGConfigRequest &request);

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
      Models::ModifyInstanceSSLResponse modifyInstanceSSLWithOptions(const Models::ModifyInstanceSSLRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::ModifyInstanceSSLResponse modifyInstanceSSL(const Models::ModifyInstanceSSLRequest &request);

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
      Models::ModifyInstanceStorageConfigResponse modifyInstanceStorageConfigWithOptions(const Models::ModifyInstanceStorageConfigRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

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
      Models::ModifyInstanceStorageConfigResponse modifyInstanceStorageConfig(const Models::ModifyInstanceStorageConfigRequest &request);

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
      Models::ModifyInstancesSSLResponse modifyInstancesSSLWithOptions(const Models::ModifyInstancesSSLRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

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
      Models::ModifyInstancesSSLResponse modifyInstancesSSL(const Models::ModifyInstancesSSLRequest &request);

      /**
       * @summary Modifies message feedback.
       *
       * @param request ModifyMessagesFeedbacksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyMessagesFeedbacksResponse
       */
      Models::ModifyMessagesFeedbacksResponse modifyMessagesFeedbacksWithOptions(const Models::ModifyMessagesFeedbacksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies message feedback.
       *
       * @param request ModifyMessagesFeedbacksRequest
       * @return ModifyMessagesFeedbacksResponse
       */
      Models::ModifyMessagesFeedbacksResponse modifyMessagesFeedbacks(const Models::ModifyMessagesFeedbacksRequest &request);

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
      Models::ModifySandboxTemplateResponse modifySandboxTemplateWithOptions(const Models::ModifySandboxTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

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
      Models::ModifySandboxTemplateResponse modifySandboxTemplate(const Models::ModifySandboxTemplateRequest &request);

      /**
       * @summary Modifies an existing inspection configuration.
       *
       * @param request ModifyScheduledTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyScheduledTaskResponse
       */
      Models::ModifyScheduledTaskResponse modifyScheduledTaskWithOptions(const Models::ModifyScheduledTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies an existing inspection configuration.
       *
       * @param request ModifyScheduledTaskRequest
       * @return ModifyScheduledTaskResponse
       */
      Models::ModifyScheduledTaskResponse modifyScheduledTask(const Models::ModifyScheduledTaskRequest &request);

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
      Models::ModifyWhitelistIpsResponse modifyWhitelistIpsWithOptions(const Models::ModifyWhitelistIpsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the IP whitelist of an RDS AI Assistant Ultimate Edition instance.
       *
       * @description ### Applicable engine
       * [RDS AI Assistant Ultimate Edition](https://www.alibabacloud.com/help/en/rds/apsaradb-rds-for-mysql/rds-copilot-ultra)
       *
       * @param request ModifyWhitelistIpsRequest
       * @return ModifyWhitelistIpsResponse
       */
      Models::ModifyWhitelistIpsResponse modifyWhitelistIps(const Models::ModifyWhitelistIpsRequest &request);

      /**
       * @summary Deletes an exclusion item for an import job.
       *
       * @description Deletes an exclusion item for a job.
       *
       * @param request RemoveContextDatabaseSyncJobExclusionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveContextDatabaseSyncJobExclusionResponse
       */
      Models::RemoveContextDatabaseSyncJobExclusionResponse removeContextDatabaseSyncJobExclusionWithOptions(const Models::RemoveContextDatabaseSyncJobExclusionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an exclusion item for an import job.
       *
       * @description Deletes an exclusion item for a job.
       *
       * @param request RemoveContextDatabaseSyncJobExclusionRequest
       * @return RemoveContextDatabaseSyncJobExclusionResponse
       */
      Models::RemoveContextDatabaseSyncJobExclusionResponse removeContextDatabaseSyncJobExclusion(const Models::RemoveContextDatabaseSyncJobExclusionRequest &request);

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
      Models::RenameApiKeyResponse renameApiKeyWithOptions(const Models::RenameApiKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Renames a custom API key.
       *
       * @description ### Applicable engine
       * [RDS AI Assistant Ultimate Edition](https://www.alibabacloud.com/help/en/rds/apsaradb-rds-for-mysql/rds-copilot-ultra)
       *
       * @param request RenameApiKeyRequest
       * @return RenameApiKeyResponse
       */
      Models::RenameApiKeyResponse renameApiKey(const Models::RenameApiKeyRequest &request);

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
      Models::ResetApiKeyResponse resetApiKeyWithOptions(const Models::ResetApiKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resets the API key.
       *
       * @description ### Applicable engine
       * [RDS AI Assistant Ultimate Edition](https://www.alibabacloud.com/help/en/rds/apsaradb-rds-for-mysql/rds-copilot-ultra)
       *
       * @param request ResetApiKeyRequest
       * @return ResetApiKeyResponse
       */
      Models::ResetApiKeyResponse resetApiKey(const Models::ResetApiKeyRequest &request);

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
      Models::ResetInstanceKeysResponse resetInstanceKeysWithOptions(const Models::ResetInstanceKeysRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::ResetInstanceKeysResponse resetInstanceKeys(const Models::ResetInstanceKeysRequest &request);

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
      Models::ResetInstancePasswordResponse resetInstancePasswordWithOptions(const Models::ResetInstancePasswordRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::ResetInstancePasswordResponse resetInstancePassword(const Models::ResetInstancePasswordRequest &request);

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
      Models::RestartInstanceResponse restartInstanceWithOptions(const Models::RestartInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::RestartInstanceResponse restartInstance(const Models::RestartInstanceRequest &request);

      /**
       * @summary 基于快照重试失败明细
       *
       * @description 写操作可传入 ClientToken 实现幂等；未传时由后端自动生成。 重试会基于失败项生成新的 Run，原 Run 状态保持不变。
       *
       * @param request RetryFailedContextDatabaseSyncRunRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RetryFailedContextDatabaseSyncRunResponse
       */
      Models::RetryFailedContextDatabaseSyncRunResponse retryFailedContextDatabaseSyncRunWithOptions(const Models::RetryFailedContextDatabaseSyncRunRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 基于快照重试失败明细
       *
       * @description 写操作可传入 ClientToken 实现幂等；未传时由后端自动生成。 重试会基于失败项生成新的 Run，原 Run 状态保持不变。
       *
       * @param request RetryFailedContextDatabaseSyncRunRequest
       * @return RetryFailedContextDatabaseSyncRunResponse
       */
      Models::RetryFailedContextDatabaseSyncRunResponse retryFailedContextDatabaseSyncRun(const Models::RetryFailedContextDatabaseSyncRunRequest &request);

      /**
       * @summary Revokes an API key for a context database.
       *
       * @description Revokes an API key.
       *
       * @param request RevokeContextDatabaseApiKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RevokeContextDatabaseApiKeyResponse
       */
      Models::RevokeContextDatabaseApiKeyResponse revokeContextDatabaseApiKeyWithOptions(const Models::RevokeContextDatabaseApiKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Revokes an API key for a context database.
       *
       * @description Revokes an API key.
       *
       * @param request RevokeContextDatabaseApiKeyRequest
       * @return RevokeContextDatabaseApiKeyResponse
       */
      Models::RevokeContextDatabaseApiKeyResponse revokeContextDatabaseApiKey(const Models::RevokeContextDatabaseApiKeyRequest &request);

      /**
       * @summary Manually triggers a run.
       *
       * @description Write operations support idempotence by passing a ClientToken. If no ClientToken is provided, the backend generates one automatically.
       *
       * @param request StartContextDatabaseSyncRunRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartContextDatabaseSyncRunResponse
       */
      Models::StartContextDatabaseSyncRunResponse startContextDatabaseSyncRunWithOptions(const Models::StartContextDatabaseSyncRunRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Manually triggers a run.
       *
       * @description Write operations support idempotence by passing a ClientToken. If no ClientToken is provided, the backend generates one automatically.
       *
       * @param request StartContextDatabaseSyncRunRequest
       * @return StartContextDatabaseSyncRunResponse
       */
      Models::StartContextDatabaseSyncRunResponse startContextDatabaseSyncRun(const Models::StartContextDatabaseSyncRunRequest &request);

      /**
       * @summary Initiates a snapshot discovery task for data selection scope configuration.
       *
       * @description Write operations support idempotence by passing a ClientToken. If no ClientToken is provided, the backend generates one automatically. Discovery is an asynchronous operation. The operation returns a discovery task identifier. Poll for results to retrieve SelectedNodeKeys.
       *
       * @param request StartContextDatabaseSyncSourceDiscoveryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartContextDatabaseSyncSourceDiscoveryResponse
       */
      Models::StartContextDatabaseSyncSourceDiscoveryResponse startContextDatabaseSyncSourceDiscoveryWithOptions(const Models::StartContextDatabaseSyncSourceDiscoveryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Initiates a snapshot discovery task for data selection scope configuration.
       *
       * @description Write operations support idempotence by passing a ClientToken. If no ClientToken is provided, the backend generates one automatically. Discovery is an asynchronous operation. The operation returns a discovery task identifier. Poll for results to retrieve SelectedNodeKeys.
       *
       * @param request StartContextDatabaseSyncSourceDiscoveryRequest
       * @return StartContextDatabaseSyncSourceDiscoveryResponse
       */
      Models::StartContextDatabaseSyncSourceDiscoveryResponse startContextDatabaseSyncSourceDiscovery(const Models::StartContextDatabaseSyncSourceDiscoveryRequest &request);

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
      Models::StartInstanceResponse startInstanceWithOptions(const Models::StartInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::StartInstanceResponse startInstance(const Models::StartInstanceRequest &request);

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
      Models::StopInstanceResponse stopInstanceWithOptions(const Models::StopInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::StopInstanceResponse stopInstance(const Models::StopInstanceRequest &request);

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
      Models::UpdateApiKeyQuotaResponse updateApiKeyQuotaWithOptions(const Models::UpdateApiKeyQuotaRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the quota of an API key.
       *
       * @description ### Applicable engine
       * [RDS AI Assistant Ultimate Edition](https://www.alibabacloud.com/help/en/rds/apsaradb-rds-for-mysql/rds-copilot-ultra)
       *
       * @param request UpdateApiKeyQuotaRequest
       * @return UpdateApiKeyQuotaResponse
       */
      Models::UpdateApiKeyQuotaResponse updateApiKeyQuota(const Models::UpdateApiKeyQuotaRequest &request);

      /**
       * @summary Updates the API key of a context database.
       *
       * @description Updates the display metadata of an API key. At least one of Name or Description must be specified. The plaintext key is not reissued.
       *
       * @param request UpdateContextDatabaseApiKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateContextDatabaseApiKeyResponse
       */
      Models::UpdateContextDatabaseApiKeyResponse updateContextDatabaseApiKeyWithOptions(const Models::UpdateContextDatabaseApiKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the API key of a context database.
       *
       * @description Updates the display metadata of an API key. At least one of Name or Description must be specified. The plaintext key is not reissued.
       *
       * @param request UpdateContextDatabaseApiKeyRequest
       * @return UpdateContextDatabaseApiKeyResponse
       */
      Models::UpdateContextDatabaseApiKeyResponse updateContextDatabaseApiKey(const Models::UpdateContextDatabaseApiKeyRequest &request);

      /**
       * @summary Updates a context database member.
       *
       * @description Updates the role or status of a member.
       *
       * @param request UpdateContextDatabaseMemberRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateContextDatabaseMemberResponse
       */
      Models::UpdateContextDatabaseMemberResponse updateContextDatabaseMemberWithOptions(const Models::UpdateContextDatabaseMemberRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a context database member.
       *
       * @description Updates the role or status of a member.
       *
       * @param request UpdateContextDatabaseMemberRequest
       * @return UpdateContextDatabaseMemberResponse
       */
      Models::UpdateContextDatabaseMemberResponse updateContextDatabaseMember(const Models::UpdateContextDatabaseMemberRequest &request);

      /**
       * @summary 更新连接元数据
       *
       * @description 写操作可传入 ClientToken 实现幂等；未传时由后端自动生成。
       *
       * @param request UpdateContextDatabaseSyncConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateContextDatabaseSyncConnectionResponse
       */
      Models::UpdateContextDatabaseSyncConnectionResponse updateContextDatabaseSyncConnectionWithOptions(const Models::UpdateContextDatabaseSyncConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新连接元数据
       *
       * @description 写操作可传入 ClientToken 实现幂等；未传时由后端自动生成。
       *
       * @param request UpdateContextDatabaseSyncConnectionRequest
       * @return UpdateContextDatabaseSyncConnectionResponse
       */
      Models::UpdateContextDatabaseSyncConnectionResponse updateContextDatabaseSyncConnection(const Models::UpdateContextDatabaseSyncConnectionRequest &request);

      /**
       * @summary 单独轮换连接凭据
       *
       * @description 写操作可传入 ClientToken 实现幂等；未传时由后端自动生成。
       *
       * @param tmpReq UpdateContextDatabaseSyncConnectionCredentialRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateContextDatabaseSyncConnectionCredentialResponse
       */
      Models::UpdateContextDatabaseSyncConnectionCredentialResponse updateContextDatabaseSyncConnectionCredentialWithOptions(const Models::UpdateContextDatabaseSyncConnectionCredentialRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 单独轮换连接凭据
       *
       * @description 写操作可传入 ClientToken 实现幂等；未传时由后端自动生成。
       *
       * @param request UpdateContextDatabaseSyncConnectionCredentialRequest
       * @return UpdateContextDatabaseSyncConnectionCredentialResponse
       */
      Models::UpdateContextDatabaseSyncConnectionCredentialResponse updateContextDatabaseSyncConnectionCredential(const Models::UpdateContextDatabaseSyncConnectionCredentialRequest &request);

      /**
       * @summary 更新 Job 元数据
       *
       * @description 写操作可传入 ClientToken 实现幂等；未传时由后端自动生成。 Target 为隐含概念，调用方只需传入 KnowledgeBaseId，后端自动创建/匹配 Target。
       *
       * @param tmpReq UpdateContextDatabaseSyncJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateContextDatabaseSyncJobResponse
       */
      Models::UpdateContextDatabaseSyncJobResponse updateContextDatabaseSyncJobWithOptions(const Models::UpdateContextDatabaseSyncJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新 Job 元数据
       *
       * @description 写操作可传入 ClientToken 实现幂等；未传时由后端自动生成。 Target 为隐含概念，调用方只需传入 KnowledgeBaseId，后端自动创建/匹配 Target。
       *
       * @param request UpdateContextDatabaseSyncJobRequest
       * @return UpdateContextDatabaseSyncJobResponse
       */
      Models::UpdateContextDatabaseSyncJobResponse updateContextDatabaseSyncJob(const Models::UpdateContextDatabaseSyncJobRequest &request);

      /**
       * @summary 更新 Job 调度配置
       *
       * @description 写操作可传入 ClientToken 实现幂等；未传时由后端自动生成。
       *
       * @param tmpReq UpdateContextDatabaseSyncJobScheduleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateContextDatabaseSyncJobScheduleResponse
       */
      Models::UpdateContextDatabaseSyncJobScheduleResponse updateContextDatabaseSyncJobScheduleWithOptions(const Models::UpdateContextDatabaseSyncJobScheduleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新 Job 调度配置
       *
       * @description 写操作可传入 ClientToken 实现幂等；未传时由后端自动生成。
       *
       * @param request UpdateContextDatabaseSyncJobScheduleRequest
       * @return UpdateContextDatabaseSyncJobScheduleResponse
       */
      Models::UpdateContextDatabaseSyncJobScheduleResponse updateContextDatabaseSyncJobSchedule(const Models::UpdateContextDatabaseSyncJobScheduleRequest &request);

      /**
       * @summary Updates the metadata of a data selection scope.
       *
       * @description Write operations support idempotence via ClientToken. If ClientToken is not provided, the backend generates one automatically.
       *
       * @param tmpReq UpdateContextDatabaseSyncSourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateContextDatabaseSyncSourceResponse
       */
      Models::UpdateContextDatabaseSyncSourceResponse updateContextDatabaseSyncSourceWithOptions(const Models::UpdateContextDatabaseSyncSourceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the metadata of a data selection scope.
       *
       * @description Write operations support idempotence via ClientToken. If ClientToken is not provided, the backend generates one automatically.
       *
       * @param request UpdateContextDatabaseSyncSourceRequest
       * @return UpdateContextDatabaseSyncSourceResponse
       */
      Models::UpdateContextDatabaseSyncSourceResponse updateContextDatabaseSyncSource(const Models::UpdateContextDatabaseSyncSourceRequest &request);

      /**
       * @summary Updates the explicit node selection for the data selection scope.
       *
       * @description For write operations, you can pass the ClientToken parameter to ensure idempotency. If this parameter is not provided, the backend automatically generates one.
       *
       * @param tmpReq UpdateContextDatabaseSyncSourceSelectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateContextDatabaseSyncSourceSelectionResponse
       */
      Models::UpdateContextDatabaseSyncSourceSelectionResponse updateContextDatabaseSyncSourceSelectionWithOptions(const Models::UpdateContextDatabaseSyncSourceSelectionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the explicit node selection for the data selection scope.
       *
       * @description For write operations, you can pass the ClientToken parameter to ensure idempotency. If this parameter is not provided, the backend automatically generates one.
       *
       * @param request UpdateContextDatabaseSyncSourceSelectionRequest
       * @return UpdateContextDatabaseSyncSourceSelectionResponse
       */
      Models::UpdateContextDatabaseSyncSourceSelectionResponse updateContextDatabaseSyncSourceSelection(const Models::UpdateContextDatabaseSyncSourceSelectionRequest &request);

      /**
       * @summary Updates a ContextDB workspace.
       *
       * @description Modifies the name of a workspace.
       *
       * @param request UpdateContextDatabaseWorkspaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateContextDatabaseWorkspaceResponse
       */
      Models::UpdateContextDatabaseWorkspaceResponse updateContextDatabaseWorkspaceWithOptions(const Models::UpdateContextDatabaseWorkspaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a ContextDB workspace.
       *
       * @description Modifies the name of a workspace.
       *
       * @param request UpdateContextDatabaseWorkspaceRequest
       * @return UpdateContextDatabaseWorkspaceResponse
       */
      Models::UpdateContextDatabaseWorkspaceResponse updateContextDatabaseWorkspace(const Models::UpdateContextDatabaseWorkspaceRequest &request);

      /**
       * @summary Updates a Custom Agent.
       *
       * @param tmpReq UpdateCustomAgentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCustomAgentResponse
       */
      Models::UpdateCustomAgentResponse updateCustomAgentWithOptions(const Models::UpdateCustomAgentRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a Custom Agent.
       *
       * @param request UpdateCustomAgentRequest
       * @return UpdateCustomAgentResponse
       */
      Models::UpdateCustomAgentResponse updateCustomAgent(const Models::UpdateCustomAgentRequest &request);

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
      Models::UpdateMOQuotaAlertThresholdResponse updateMOQuotaAlertThresholdWithOptions(const Models::UpdateMOQuotaAlertThresholdRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the alert threshold percentage for an API key.
       *
       * @description ### Applicable engine
       * [RDS AI Assistant Ultimate Edition](https://www.alibabacloud.com/help/en/rds/apsaradb-rds-for-mysql/rds-copilot-ultra)
       *
       * @param request UpdateMOQuotaAlertThresholdRequest
       * @return UpdateMOQuotaAlertThresholdResponse
       */
      Models::UpdateMOQuotaAlertThresholdResponse updateMOQuotaAlertThreshold(const Models::UpdateMOQuotaAlertThresholdRequest &request);

      /**
       * @summary Updates the information of a specified Skill.
       *
       * @param tmpReq UpdateSkillRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSkillResponse
       */
      Models::UpdateSkillResponse updateSkillWithOptions(const Models::UpdateSkillRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the information of a specified Skill.
       *
       * @param request UpdateSkillRequest
       * @return UpdateSkillResponse
       */
      Models::UpdateSkillResponse updateSkill(const Models::UpdateSkillRequest &request);

      /**
       * @summary Validates datasource credentials and authorization.
       *
       * @description Validates the connection credentials and authorization.
       *
       * @param request VerifyContextDatabaseSyncConnectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return VerifyContextDatabaseSyncConnectionResponse
       */
      Models::VerifyContextDatabaseSyncConnectionResponse verifyContextDatabaseSyncConnectionWithOptions(const Models::VerifyContextDatabaseSyncConnectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Validates datasource credentials and authorization.
       *
       * @description Validates the connection credentials and authorization.
       *
       * @param request VerifyContextDatabaseSyncConnectionRequest
       * @return VerifyContextDatabaseSyncConnectionResponse
       */
      Models::VerifyContextDatabaseSyncConnectionResponse verifyContextDatabaseSyncConnection(const Models::VerifyContextDatabaseSyncConnectionRequest &request);
  };
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
