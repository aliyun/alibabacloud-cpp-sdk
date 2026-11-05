// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_ADA20260701_HPP_
#define ALIBABACLOUD_ADA20260701_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Ada20260701Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Ada20260701.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ada20260701
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Stops the execution of a session or cancels a specified turn.
       *
       * @description If Params._meta.promptId is provided, only that turn is canceled. If omitted, the current execution of the session is canceled. To avoid affecting other turns, use the actual promptId obtained from the response stream instead of the request Id.
       * A cancellation receipt does not mean the turn has ended, nor does it revoke external operations that have already occurred. After calling this operation, continue reading the original response stream or resume reading through LoadAgentSession to confirm the desired state of the target turn. Disconnecting the stream connection cannot replace a cancellation request.
       *
       * @param tmpReq CancelAgentSessionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelAgentSessionResponse
       */
      Models::CancelAgentSessionResponse cancelAgentSessionWithOptions(const Models::CancelAgentSessionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops the execution of a session or cancels a specified turn.
       *
       * @description If Params._meta.promptId is provided, only that turn is canceled. If omitted, the current execution of the session is canceled. To avoid affecting other turns, use the actual promptId obtained from the response stream instead of the request Id.
       * A cancellation receipt does not mean the turn has ended, nor does it revoke external operations that have already occurred. After calling this operation, continue reading the original response stream or resume reading through LoadAgentSession to confirm the desired state of the target turn. Disconnecting the stream connection cannot replace a cancellation request.
       *
       * @param request CancelAgentSessionRequest
       * @return CancelAgentSessionResponse
       */
      Models::CancelAgentSessionResponse cancelAgentSession(const Models::CancelAgentSessionRequest &request);

      /**
       * @summary Creates an agent.
       *
       * @description - `Name` is the unique identifier of the agent within the current tenant. It can contain only letters, digits, underscores (_), and hyphens (-), and must be 1 to 128 characters in length. It cannot be modified after creation.
       * - Each agent can be bound to only one knowledge base.
       *
       * @param request CreateAgentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAgentResponse
       */
      Models::CreateAgentResponse createAgentWithOptions(const Models::CreateAgentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an agent.
       *
       * @description - `Name` is the unique identifier of the agent within the current tenant. It can contain only letters, digits, underscores (_), and hyphens (-), and must be 1 to 128 characters in length. It cannot be modified after creation.
       * - Each agent can be bound to only one knowledge base.
       *
       * @param request CreateAgentRequest
       * @return CreateAgentResponse
       */
      Models::CreateAgentResponse createAgent(const Models::CreateAgentRequest &request);

      /**
       * @summary Creates a text session for a specified agent and obtains the session ID required for subsequent calls.
       *
       * @description Before calling this operation, obtain the name of an agent accessible to the current identity. After the session is created, save `JsonRpcResponse.result.sessionId` and use it as `Params.sessionId` for subsequent operations such as `PromptAgentSession` and `LoadAgentSession`.
       * You can set the approval mode during creation. If omitted, the default value is `default`. The availability of `yolo` depends on the target agent. If it is not supported, an error is returned. This mode does not change the caller\\"s permissions or replace business Q&A. To retry the same creation request, reuse the same `clientToken` and the same business parameters.
       *
       * @param tmpReq CreateAgentSessionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAgentSessionResponse
       */
      Models::CreateAgentSessionResponse createAgentSessionWithOptions(const Models::CreateAgentSessionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a text session for a specified agent and obtains the session ID required for subsequent calls.
       *
       * @description Before calling this operation, obtain the name of an agent accessible to the current identity. After the session is created, save `JsonRpcResponse.result.sessionId` and use it as `Params.sessionId` for subsequent operations such as `PromptAgentSession` and `LoadAgentSession`.
       * You can set the approval mode during creation. If omitted, the default value is `default`. The availability of `yolo` depends on the target agent. If it is not supported, an error is returned. This mode does not change the caller\\"s permissions or replace business Q&A. To retry the same creation request, reuse the same `clientToken` and the same business parameters.
       *
       * @param request CreateAgentSessionRequest
       * @return CreateAgentSessionResponse
       */
      Models::CreateAgentSessionResponse createAgentSession(const Models::CreateAgentSessionRequest &request);

      /**
       * @summary Creates a skill.
       *
       * @description - Creation rules:
       *   - Name must be unique within the current tenant and cannot be the same as an official skill.
       *   - Description and Metadata are required. Metadata must and can only contain one valid content source. Different sources cannot be mixed.
       *   - After the skill is created, you can modify it by calling UpdateSkill.
       * - Content sources:
       *   - skillMd: Directly enter the Markdown body. No YAML front matter is required. Use Name and Description for the name and description respectively.
       *   - transitId: Upload and confirm a ZIP file through Transit. The call sequence is as follows:
       *     1. Call CreateTransitUploadPolicy and pass in FileShowName to obtain TransitId, FilePath, and PolicyInfo.
       *     2. Use PolicyInfo and FilePath to upload the ZIP file to Object Storage Service (OSS).
       *     3. Call ConfirmTransitUpload and pass in TransitId. Proceed with creation only if Confirmed=true is returned.
       *     4. Call CreateSkill and pass the confirmed TransitId in Metadata.transitId.
       *   - bundleUrl: Pass in a public HTTPS ZIP direct link. The platform downloads and saves it as an artifact. The original URL is not saved or echoed.
       *
       * @param request CreateSkillRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSkillResponse
       */
      Models::CreateSkillResponse createSkillWithOptions(const Models::CreateSkillRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a skill.
       *
       * @description - Creation rules:
       *   - Name must be unique within the current tenant and cannot be the same as an official skill.
       *   - Description and Metadata are required. Metadata must and can only contain one valid content source. Different sources cannot be mixed.
       *   - After the skill is created, you can modify it by calling UpdateSkill.
       * - Content sources:
       *   - skillMd: Directly enter the Markdown body. No YAML front matter is required. Use Name and Description for the name and description respectively.
       *   - transitId: Upload and confirm a ZIP file through Transit. The call sequence is as follows:
       *     1. Call CreateTransitUploadPolicy and pass in FileShowName to obtain TransitId, FilePath, and PolicyInfo.
       *     2. Use PolicyInfo and FilePath to upload the ZIP file to Object Storage Service (OSS).
       *     3. Call ConfirmTransitUpload and pass in TransitId. Proceed with creation only if Confirmed=true is returned.
       *     4. Call CreateSkill and pass the confirmed TransitId in Metadata.transitId.
       *   - bundleUrl: Pass in a public HTTPS ZIP direct link. The platform downloads and saves it as an artifact. The original URL is not saved or echoed.
       *
       * @param request CreateSkillRequest
       * @return CreateSkillResponse
       */
      Models::CreateSkillResponse createSkill(const Models::CreateSkillRequest &request);

      /**
       * @summary Generates credentials for direct file upload. Callers can use the returned upload policy to upload files directly to object storage.
       *
       * @description - `Network` can be set to `public` or `internal` to generate a public network or same-region internal network upload address, respectively. The default value is `public`.
       * - The maximum size of a single file is 50 MiB.
       * - `PolicyInfo` contains short-term upload authorization information and is only used for the current file upload. Do not log, permanently store, or forward it to other users.
       * - `ExpireMs` specifies the validity period of the current upload policy and Transit record in milliseconds, not an absolute timestamp. Both the default and maximum values are `604800000` (7 days), and the minimum value is `1000` (1 second). The validity period is rounded down to the nearest whole second. For example, 1500 milliseconds takes effect as 1 second.
       * - You can call `GetTransitMeta` to read `ExpireAt` and obtain the expiration time of the Transit record. Confirming the upload and querying do not extend the validity period of the record.
       *
       * @param request CreateTransitUploadPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTransitUploadPolicyResponse
       */
      Models::CreateTransitUploadPolicyResponse createTransitUploadPolicyWithOptions(const Models::CreateTransitUploadPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Generates credentials for direct file upload. Callers can use the returned upload policy to upload files directly to object storage.
       *
       * @description - `Network` can be set to `public` or `internal` to generate a public network or same-region internal network upload address, respectively. The default value is `public`.
       * - The maximum size of a single file is 50 MiB.
       * - `PolicyInfo` contains short-term upload authorization information and is only used for the current file upload. Do not log, permanently store, or forward it to other users.
       * - `ExpireMs` specifies the validity period of the current upload policy and Transit record in milliseconds, not an absolute timestamp. Both the default and maximum values are `604800000` (7 days), and the minimum value is `1000` (1 second). The validity period is rounded down to the nearest whole second. For example, 1500 milliseconds takes effect as 1 second.
       * - You can call `GetTransitMeta` to read `ExpireAt` and obtain the expiration time of the Transit record. Confirming the upload and querying do not extend the validity period of the record.
       *
       * @param request CreateTransitUploadPolicyRequest
       * @return CreateTransitUploadPolicyResponse
       */
      Models::CreateTransitUploadPolicyResponse createTransitUploadPolicy(const Models::CreateTransitUploadPolicyRequest &request);

      /**
       * @summary Deletes a specified agent.
       *
       * @description - Creators can delete the agents they created.
       * - After deletion, the agent can no longer be queried, updated, or executed.
       *
       * @param request DeleteAgentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAgentResponse
       */
      Models::DeleteAgentResponse deleteAgentWithOptions(const Models::DeleteAgentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified agent.
       *
       * @description - Creators can delete the agents they created.
       * - After deletion, the agent can no longer be queried, updated, or executed.
       *
       * @param request DeleteAgentRequest
       * @return DeleteAgentResponse
       */
      Models::DeleteAgentResponse deleteAgent(const Models::DeleteAgentRequest &request);

      /**
       * @summary Deletes an idle session that is no longer needed.
       *
       * @description A session cannot be directly deleted while it is being executed or waiting for interaction. You must first call `CancelAgentSession` and continue reading the original response stream, or resume reading through `LoadAgentSession`. Delete the session only after confirming that the target turn has ended.
       * A successful deletion indicates that the session deletion operation is complete, but it does not mean that external operations that have already occurred are rolled back. Deleting a session does not delete the associated agent or assistant.
       *
       * @param tmpReq DeleteAgentSessionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAgentSessionResponse
       */
      Models::DeleteAgentSessionResponse deleteAgentSessionWithOptions(const Models::DeleteAgentSessionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an idle session that is no longer needed.
       *
       * @description A session cannot be directly deleted while it is being executed or waiting for interaction. You must first call `CancelAgentSession` and continue reading the original response stream, or resume reading through `LoadAgentSession`. Delete the session only after confirming that the target turn has ended.
       * A successful deletion indicates that the session deletion operation is complete, but it does not mean that external operations that have already occurred are rolled back. Deleting a session does not delete the associated agent or assistant.
       *
       * @param request DeleteAgentSessionRequest
       * @return DeleteAgentSessionResponse
       */
      Models::DeleteAgentSessionResponse deleteAgentSession(const Models::DeleteAgentSessionRequest &request);

      /**
       * @summary Soft-deletes a skill that the caller has permission to modify.
       *
       * @description - Deletion permissions:
       *   - Only custom skills that the caller has permission to modify can be deleted.
       *   - The caller must be the creator of the skill or the root account of the tenant that has permission to manage the tenant-level skill. Official skills cannot be deleted.
       * - Deletion results:
       *   - Deletion is performed as a soft delete. After a successful deletion, `GetSkill` and `ListSkills` no longer return the skill, and you can create a new skill with the same name.
       *   - Recovery is not supported. You cannot repeatedly delete a skill or delete a non-existent skill.
       *
       * @param request DeleteSkillRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSkillResponse
       */
      Models::DeleteSkillResponse deleteSkillWithOptions(const Models::DeleteSkillRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Soft-deletes a skill that the caller has permission to modify.
       *
       * @description - Deletion permissions:
       *   - Only custom skills that the caller has permission to modify can be deleted.
       *   - The caller must be the creator of the skill or the root account of the tenant that has permission to manage the tenant-level skill. Official skills cannot be deleted.
       * - Deletion results:
       *   - Deletion is performed as a soft delete. After a successful deletion, `GetSkill` and `ListSkills` no longer return the skill, and you can create a new skill with the same name.
       *   - Recovery is not supported. You cannot repeatedly delete a skill or delete a non-existent skill.
       *
       * @param request DeleteSkillRequest
       * @return DeleteSkillResponse
       */
      Models::DeleteSkillResponse deleteSkill(const Models::DeleteSkillRequest &request);

      /**
       * @summary Queries agents visible to the current identity by name.
       *
       * @description - You can retrieve agents created by yourself, agents visible within the current tenant, and official agents provided by the platform.
       *
       * @param request GetAgentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAgentResponse
       */
      Models::GetAgentResponse getAgentWithOptions(const Models::GetAgentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries agents visible to the current identity by name.
       *
       * @description - You can retrieve agents created by yourself, agents visible within the current tenant, and official agents provided by the platform.
       *
       * @param request GetAgentRequest
       * @return GetAgentResponse
       */
      Models::GetAgentResponse getAgent(const Models::GetAgentRequest &request);

      /**
       * @summary Queries session details such as the title, associated agent, and core timestamps based on the session ID.
       *
       * @description For `Params.sessionId`, use the session ID returned by `CreateAgentSession` or `ListAgentSessions`. The business result is located in `JsonRpcResponse.result`, which is of type `any`. The fields within the object retain their actual casing.
       * This operation provides a session summary and does not return the complete message history, pending interactions, or the final state of real-time turns. For history and disconnection recovery, use `LoadAgentSession`. For approvals and Q&A, read from the streaming notifications of `PromptAgentSession` or `LoadAgentSession`.
       *
       * @param tmpReq GetAgentSessionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAgentSessionResponse
       */
      Models::GetAgentSessionResponse getAgentSessionWithOptions(const Models::GetAgentSessionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries session details such as the title, associated agent, and core timestamps based on the session ID.
       *
       * @description For `Params.sessionId`, use the session ID returned by `CreateAgentSession` or `ListAgentSessions`. The business result is located in `JsonRpcResponse.result`, which is of type `any`. The fields within the object retain their actual casing.
       * This operation provides a session summary and does not return the complete message history, pending interactions, or the final state of real-time turns. For history and disconnection recovery, use `LoadAgentSession`. For approvals and Q&A, read from the streaming notifications of `PromptAgentSession` or `LoadAgentSession`.
       *
       * @param request GetAgentSessionRequest
       * @return GetAgentSessionResponse
       */
      Models::GetAgentSessionResponse getAgentSession(const Models::GetAgentSessionRequest &request);

      /**
       * @summary Queries the current model and thinking level configuration used by a session.
       *
       * @description - Use the `sessionId` returned by CreateAgentSession to query the configuration. This operation does not send messages or replay session history.
       * - Read the current model from `JsonRpcResponse.result.modelId`. To modify it, call SetAgentSessionModel.
       * - The thinking level is an optional advanced configuration. The supported levels and current values are subject to the actual return values of this operation, which may vary across different agents, models, and sessions.
       *
       * @param tmpReq GetAgentSessionModelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAgentSessionModelResponse
       */
      Models::GetAgentSessionModelResponse getAgentSessionModelWithOptions(const Models::GetAgentSessionModelRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the current model and thinking level configuration used by a session.
       *
       * @description - Use the `sessionId` returned by CreateAgentSession to query the configuration. This operation does not send messages or replay session history.
       * - Read the current model from `JsonRpcResponse.result.modelId`. To modify it, call SetAgentSessionModel.
       * - The thinking level is an optional advanced configuration. The supported levels and current values are subject to the actual return values of this operation, which may vary across different agents, models, and sessions.
       *
       * @param request GetAgentSessionModelRequest
       * @return GetAgentSessionModelResponse
       */
      Models::GetAgentSessionModelResponse getAgentSessionModel(const Models::GetAgentSessionModelRequest &request);

      /**
       * @summary Queries the skills visible to the current caller by name.
       *
       * @description - Query target:
       *   - Queries by `Name`. Querying by `SkillId` is not supported.
       *   - Prioritizes returning skills with the same name that are visible to the caller under the current tenant. If no visible records are found, queries official skills with the same name.
       *   - If `SkillVersion` is omitted, the current skill is returned. This parameter is omitted by default.
       * - Download URL:
       *   - `Network` supports `public` and `internal`. If omitted, no download URL is generated.
       *   - If the skill has an accessible artifact, a temporary `DownloadUrl` and the corresponding `DownloadUrlNetwork` are returned.
       *   - If the artifact does not exist, access is denied, or URL generation fails, the skill query can still succeed, but the download URL-related fields may not be returned.
       *   - The original `bundleUrl` used during creation is not saved and is not returned by this API.
       *
       * @param request GetSkillRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSkillResponse
       */
      Models::GetSkillResponse getSkillWithOptions(const Models::GetSkillRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the skills visible to the current caller by name.
       *
       * @description - Query target:
       *   - Queries by `Name`. Querying by `SkillId` is not supported.
       *   - Prioritizes returning skills with the same name that are visible to the caller under the current tenant. If no visible records are found, queries official skills with the same name.
       *   - If `SkillVersion` is omitted, the current skill is returned. This parameter is omitted by default.
       * - Download URL:
       *   - `Network` supports `public` and `internal`. If omitted, no download URL is generated.
       *   - If the skill has an accessible artifact, a temporary `DownloadUrl` and the corresponding `DownloadUrlNetwork` are returned.
       *   - If the artifact does not exist, access is denied, or URL generation fails, the skill query can still succeed, but the download URL-related fields may not be returned.
       *   - The original `bundleUrl` used during creation is not saved and is not returned by this API.
       *
       * @param request GetSkillRequest
       * @return GetSkillResponse
       */
      Models::GetSkillResponse getSkill(const Models::GetSkillRequest &request);

      /**
       * @summary Queries the metadata of a transit file, such as the upload status, file size, and expiration time, and retrieves a temporary download URL on demand.
       *
       * @description - Specify at least one of TransitId and FilePath. If both are provided, TransitId takes precedence.
       * - Use the TransitId returned by CreateTransitUploadPolicy for queries. TransitId is a temporary capability identifier in the file upload process. Do not forward it to irrelevant users.
       * - FilePath is the opaque object path returned by CreateTransitUploadPolicy. Callers must use it as is and must not parse, modify, or concatenate it.
       * - When querying by FilePath, an error is returned if the record does not exist or is inaccessible to the current caller.
       * - ExpireMs specifies the validity period of the download URL in milliseconds. The default value is 900000 (15 minutes). The validity period is rounded down to the nearest whole second. For example, 1500 milliseconds takes effect as 1 second.
       * - ExpireAt indicates the expiration time of the transit record, not the expiration time of the download URL. Querying, generating a download URL, and confirming an upload do not extend the validity period of the record.
       *
       * @param request GetTransitMetaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTransitMetaResponse
       */
      Models::GetTransitMetaResponse getTransitMetaWithOptions(const Models::GetTransitMetaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the metadata of a transit file, such as the upload status, file size, and expiration time, and retrieves a temporary download URL on demand.
       *
       * @description - Specify at least one of TransitId and FilePath. If both are provided, TransitId takes precedence.
       * - Use the TransitId returned by CreateTransitUploadPolicy for queries. TransitId is a temporary capability identifier in the file upload process. Do not forward it to irrelevant users.
       * - FilePath is the opaque object path returned by CreateTransitUploadPolicy. Callers must use it as is and must not parse, modify, or concatenate it.
       * - When querying by FilePath, an error is returned if the record does not exist or is inaccessible to the current caller.
       * - ExpireMs specifies the validity period of the download URL in milliseconds. The default value is 900000 (15 minutes). The validity period is rounded down to the nearest whole second. For example, 1500 milliseconds takes effect as 1 second.
       * - ExpireAt indicates the expiration time of the transit record, not the expiration time of the download URL. Querying, generating a download URL, and confirming an upload do not extend the validity period of the record.
       *
       * @param request GetTransitMetaRequest
       * @return GetTransitMetaResponse
       */
      Models::GetTransitMetaResponse getTransitMeta(const Models::GetTransitMetaRequest &request);

      /**
       * @summary Queries session summary by page, allowing the caller to select or resume existing sessions.
       *
       * @description You can filter sessions by agent name. Omit Params.NextToken on the first page. For subsequent queries, keep the filter conditions and page size unchanged, and pass the JsonRpcResponse.Result.NextToken returned from the previous page as is to Params.NextToken. Pagination ends when the token is not returned or is empty.
       * The list returns session summaries such as session ID, title, and time, but does not provide the final state of the turn execution. After selecting a session, you can use GetAgentSession to query details or LoadAgentSession to load history.
       * Params in the request, and JsonRpcResponse and Result in the response are explicit objects. The pagination field MaxResults is of type integer<int32>, and NextToken is of type string. SessionList retains the any type. For session summary fields, see the supplementary description.
       *
       * @param tmpReq ListAgentSessionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAgentSessionsResponse
       */
      Models::ListAgentSessionsResponse listAgentSessionsWithOptions(const Models::ListAgentSessionsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries session summary by page, allowing the caller to select or resume existing sessions.
       *
       * @description You can filter sessions by agent name. Omit Params.NextToken on the first page. For subsequent queries, keep the filter conditions and page size unchanged, and pass the JsonRpcResponse.Result.NextToken returned from the previous page as is to Params.NextToken. Pagination ends when the token is not returned or is empty.
       * The list returns session summaries such as session ID, title, and time, but does not provide the final state of the turn execution. After selecting a session, you can use GetAgentSession to query details or LoadAgentSession to load history.
       * Params in the request, and JsonRpcResponse and Result in the response are explicit objects. The pagination field MaxResults is of type integer<int32>, and NextToken is of type string. SessionList retains the any type. For session summary fields, see the supplementary description.
       *
       * @param request ListAgentSessionsRequest
       * @return ListAgentSessionsResponse
       */
      Models::ListAgentSessionsResponse listAgentSessions(const Models::ListAgentSessionsRequest &request);

      /**
       * @summary Performs a paging query for agents visible to the current identity.
       *
       * @description - By default, the official agents provided by the platform and the tenant agents visible to the current identity are returned.
       * - If `Scope` is set to `SYSTEM`, only official agents are queried. If `Scope` is set to `CUSTOM`, only custom agents are queried.
       * - Both cursor-based pagination and page number-based pagination are supported. When using cursor-based pagination, pass the `NextToken` value returned in the previous response to the next request as is, and keep the calling identity, filter conditions, and `MaxResults` unchanged.
       *
       * @param request ListAgentsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAgentsResponse
       */
      Models::ListAgentsResponse listAgentsWithOptions(const Models::ListAgentsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs a paging query for agents visible to the current identity.
       *
       * @description - By default, the official agents provided by the platform and the tenant agents visible to the current identity are returned.
       * - If `Scope` is set to `SYSTEM`, only official agents are queried. If `Scope` is set to `CUSTOM`, only custom agents are queried.
       * - Both cursor-based pagination and page number-based pagination are supported. When using cursor-based pagination, pass the `NextToken` value returned in the previous response to the next request as is, and keep the calling identity, filter conditions, and `MaxResults` unchanged.
       *
       * @param request ListAgentsRequest
       * @return ListAgentsResponse
       */
      Models::ListAgentsResponse listAgents(const Models::ListAgentsRequest &request);

      /**
       * @summary Queries the text models visible to the current caller for selection when setting a session model.
       *
       * @description - For text sessions, pass `ModelType=text` and use `MaxResults` and `NextToken` for paging. The model identity is obtained from `Models[].Id` and passed as the `Params.modelId` for SetAgentSessionModel.
       * - The visibility of a model in the model catalog does not guarantee that the target session supports the model. After configuration, refer to the SetAgentSessionModel response or the GetAgentSessionModel query result.
       * - `ThinkingLevels` and `ThinkingLevel` are used for optional thinking level configurations and do not affect the integration flow when you only select a model.
       *
       * @param request ListModelsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListModelsResponse
       */
      Models::ListModelsResponse listModelsWithOptions(const Models::ListModelsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the text models visible to the current caller for selection when setting a session model.
       *
       * @description - For text sessions, pass `ModelType=text` and use `MaxResults` and `NextToken` for paging. The model identity is obtained from `Models[].Id` and passed as the `Params.modelId` for SetAgentSessionModel.
       * - The visibility of a model in the model catalog does not guarantee that the target session supports the model. After configuration, refer to the SetAgentSessionModel response or the GetAgentSessionModel query result.
       * - `ThinkingLevels` and `ThinkingLevel` are used for optional thinking level configurations and do not affect the integration flow when you only select a model.
       *
       * @param request ListModelsRequest
       * @return ListModelsResponse
       */
      Models::ListModelsResponse listModels(const Models::ListModelsRequest &request);

      /**
       * @summary Performs a paged query using paging for skills visible to the current invoker.
       *
       * @description - Query and filter: 
       *     - `Scope=SYSTEM` queries only official skills, and `Scope=CUSTOM` queries only custom skills. If omitted, both are queried.
       *     - Custom skills with `user` visibility are visible only to the creator, while skills with `tenant` visibility are visible to the current tenant.
       *     - You can filter by `CreatorId`, `Q`, and `Visibility`. `Q` performs a fuzzy match on the skill name or description.
       *     - Results are sorted by update time in descending order by default.
       * - Pagination: 
       *     - Cursor-based pagination uses `MaxResults` and `NextToken`. Do not pass `NextToken` for the first query. For subsequent pages, use the token from the previous response. When using `NextToken` for subsequent pages, `CreatorId`, `Q`, `Visibility`, `Scope`, and `MaxResults` must remain the same as the previous page. If you modify the query conditions, you must query from the first page again.
       *     - Page number-based pagination uses `PageNumber` and `PageSize`. If `MaxResults` is explicitly passed, cursor-based pagination takes precedence. If `NextToken` is passed, `PageNumber` is ignored.
       * - Response content: 
       *     - This operation returns only skill summaries and does not generate bundle download URLs. To obtain a download URL, call `GetSkill` and specify `Network`.
       *
       * @param request ListSkillsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSkillsResponse
       */
      Models::ListSkillsResponse listSkillsWithOptions(const Models::ListSkillsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs a paged query using paging for skills visible to the current invoker.
       *
       * @description - Query and filter: 
       *     - `Scope=SYSTEM` queries only official skills, and `Scope=CUSTOM` queries only custom skills. If omitted, both are queried.
       *     - Custom skills with `user` visibility are visible only to the creator, while skills with `tenant` visibility are visible to the current tenant.
       *     - You can filter by `CreatorId`, `Q`, and `Visibility`. `Q` performs a fuzzy match on the skill name or description.
       *     - Results are sorted by update time in descending order by default.
       * - Pagination: 
       *     - Cursor-based pagination uses `MaxResults` and `NextToken`. Do not pass `NextToken` for the first query. For subsequent pages, use the token from the previous response. When using `NextToken` for subsequent pages, `CreatorId`, `Q`, `Visibility`, `Scope`, and `MaxResults` must remain the same as the previous page. If you modify the query conditions, you must query from the first page again.
       *     - Page number-based pagination uses `PageNumber` and `PageSize`. If `MaxResults` is explicitly passed, cursor-based pagination takes precedence. If `NextToken` is passed, `PageNumber` is ignored.
       * - Response content: 
       *     - This operation returns only skill summaries and does not generate bundle download URLs. To obtain a download URL, call `GetSkill` and specify `Network`.
       *
       * @param request ListSkillsRequest
       * @return ListSkillsResponse
       */
      Models::ListSkillsResponse listSkills(const Models::ListSkillsRequest &request);

      /**
       * @summary Loads session history, receives subsequent output, or resumes Server-Sent Events (SSE) from a saved read position.
       *
       * @description - A normal load requires only the session ID. It returns the configuration, history, and output to be continuously received. The response is SSE, not a standard JSON message list.
       * - When resuming from a disconnection, pass back the actually received cursor, event epoch, and turn ID. History and increments may be returned simultaneously. Existing pages should be rebuilt or deduplicated based on the confirmed cursor. Do not directly append all returned data.
       * - During the load process, you may receive pending approvals or questions again. Use the interaction notification that is still valid for this session to call ReplyAgentSession.
       * - For an idle session, `stopReason=end_turn` may only indicate the end of the current load. It cannot be used to determine the success of a previously interrupted turn. You must associate it with the actual desired state of the target turn. If it cannot be determined, keep the result for verification.
       *
       * @param tmpReq LoadAgentSessionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return LoadAgentSessionResponse
       */
      FutureGenerator<Models::LoadAgentSessionResponse> loadAgentSessionWithSSE(const Models::LoadAgentSessionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Loads session history, receives subsequent output, or resumes Server-Sent Events (SSE) from a saved read position.
       *
       * @description - A normal load requires only the session ID. It returns the configuration, history, and output to be continuously received. The response is SSE, not a standard JSON message list.
       * - When resuming from a disconnection, pass back the actually received cursor, event epoch, and turn ID. History and increments may be returned simultaneously. Existing pages should be rebuilt or deduplicated based on the confirmed cursor. Do not directly append all returned data.
       * - During the load process, you may receive pending approvals or questions again. Use the interaction notification that is still valid for this session to call ReplyAgentSession.
       * - For an idle session, `stopReason=end_turn` may only indicate the end of the current load. It cannot be used to determine the success of a previously interrupted turn. You must associate it with the actual desired state of the target turn. If it cannot be determined, keep the result for verification.
       *
       * @param tmpReq LoadAgentSessionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return LoadAgentSessionResponse
       */
      Models::LoadAgentSessionResponse loadAgentSessionWithOptions(const Models::LoadAgentSessionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Loads session history, receives subsequent output, or resumes Server-Sent Events (SSE) from a saved read position.
       *
       * @description - A normal load requires only the session ID. It returns the configuration, history, and output to be continuously received. The response is SSE, not a standard JSON message list.
       * - When resuming from a disconnection, pass back the actually received cursor, event epoch, and turn ID. History and increments may be returned simultaneously. Existing pages should be rebuilt or deduplicated based on the confirmed cursor. Do not directly append all returned data.
       * - During the load process, you may receive pending approvals or questions again. Use the interaction notification that is still valid for this session to call ReplyAgentSession.
       * - For an idle session, `stopReason=end_turn` may only indicate the end of the current load. It cannot be used to determine the success of a previously interrupted turn. You must associate it with the actual desired state of the target turn. If it cannot be determined, keep the result for verification.
       *
       * @param request LoadAgentSessionRequest
       * @return LoadAgentSessionResponse
       */
      Models::LoadAgentSessionResponse loadAgentSession(const Models::LoadAgentSessionRequest &request);

      /**
       * @summary Sends text to an existing session and continuously receives agent output through Server-Sent Events (SSE).
       *
       * @description - Pass the session ID returned by CreateAgentSession to `Params.sessionId` and place the user text in `Params.prompt`.
       * - When an execution or pending interaction is already in progress, the default call path rejects new prompts. After receiving an approval or Q&A notification, submit the selection or answer through ReplyAgentSession before continuing to read the original stream.
       * - A connection interruption does not cancel the execution. If the result is unknown, call LoadAgentSession to resume reading. Submitting duplicate prompts may generate new messages, and duplicate `Id` values are not deduplicated.
       *
       * @param tmpReq PromptAgentSessionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PromptAgentSessionResponse
       */
      FutureGenerator<Models::PromptAgentSessionResponse> promptAgentSessionWithSSE(const Models::PromptAgentSessionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sends text to an existing session and continuously receives agent output through Server-Sent Events (SSE).
       *
       * @description - Pass the session ID returned by CreateAgentSession to `Params.sessionId` and place the user text in `Params.prompt`.
       * - When an execution or pending interaction is already in progress, the default call path rejects new prompts. After receiving an approval or Q&A notification, submit the selection or answer through ReplyAgentSession before continuing to read the original stream.
       * - A connection interruption does not cancel the execution. If the result is unknown, call LoadAgentSession to resume reading. Submitting duplicate prompts may generate new messages, and duplicate `Id` values are not deduplicated.
       *
       * @param tmpReq PromptAgentSessionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PromptAgentSessionResponse
       */
      Models::PromptAgentSessionResponse promptAgentSessionWithOptions(const Models::PromptAgentSessionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sends text to an existing session and continuously receives agent output through Server-Sent Events (SSE).
       *
       * @description - Pass the session ID returned by CreateAgentSession to `Params.sessionId` and place the user text in `Params.prompt`.
       * - When an execution or pending interaction is already in progress, the default call path rejects new prompts. After receiving an approval or Q&A notification, submit the selection or answer through ReplyAgentSession before continuing to read the original stream.
       * - A connection interruption does not cancel the execution. If the result is unknown, call LoadAgentSession to resume reading. Submitting duplicate prompts may generate new messages, and duplicate `Id` values are not deduplicated.
       *
       * @param request PromptAgentSessionRequest
       * @return PromptAgentSessionResponse
       */
      Models::PromptAgentSessionResponse promptAgentSession(const Models::PromptAgentSessionRequest &request);

      /**
       * @summary Submits the approval choice or question answer for the current pending interaction.
       *
       * @description - Read `data.sessionId`, `data.requestId`, and `data.options` from the `permission_request` notification of PromptAgentSession or LoadAgentSession. This operation uses the interaction ID, not the tool invoke ID or the server-side RequestId.
       * - When selecting an action, use the `optionId` actually provided in the notification. For Q&A scenarios, you must also write the question key and answer text into `answers`. Do not pass this field for common tool approvals.
       * - `accepted=true` only indicates that the reply has been accepted. Subsequent output must still be read through Prompt or Load. `false` indicates that the reply was not adopted this time. You should reload the current interaction and must not automatically change it to approve other requests.
       *
       * @param tmpReq ReplyAgentSessionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReplyAgentSessionResponse
       */
      Models::ReplyAgentSessionResponse replyAgentSessionWithOptions(const Models::ReplyAgentSessionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits the approval choice or question answer for the current pending interaction.
       *
       * @description - Read `data.sessionId`, `data.requestId`, and `data.options` from the `permission_request` notification of PromptAgentSession or LoadAgentSession. This operation uses the interaction ID, not the tool invoke ID or the server-side RequestId.
       * - When selecting an action, use the `optionId` actually provided in the notification. For Q&A scenarios, you must also write the question key and answer text into `answers`. Do not pass this field for common tool approvals.
       * - `accepted=true` only indicates that the reply has been accepted. Subsequent output must still be read through Prompt or Load. `false` indicates that the reply was not adopted this time. You should reload the current interaction and must not automatically change it to approve other requests.
       *
       * @param request ReplyAgentSessionRequest
       * @return ReplyAgentSessionResponse
       */
      Models::ReplyAgentSessionResponse replyAgentSession(const Models::ReplyAgentSessionRequest &request);

      /**
       * @summary Sets the model used by a session and optionally configures the thinking level.
       *
       * @description - Pass the `sessionId` returned by CreateAgentSession and the `Models[].Id` returned by ListModels as `Params.sessionId` and `Params.modelId`, respectively. The visibility of a model in the model catalog does not guarantee that the target session supports the model. The final validation is performed by the target session.
       * - `modelId` is required. When only modifying the model, you can omit `thinkingLevel`. For details about how to configure the thinking level, see the supplementary description of request parameters.
       * - This operation only modifies the target session and does not modify the global default model of the agent or account. The session may deny configuration modifications during execution, and switching models during runtime is not guaranteed to be supported.
       * - The model and thinking level Settings are applied in steps. If the call fails, the model may have already been changed, and a full rollback is not guaranteed. You should call GetAgentSessionModel to query the current configuration before deciding what to do next. After a successful call, you can read the actual effective values from the returned result.
       *
       * @param tmpReq SetAgentSessionModelRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetAgentSessionModelResponse
       */
      Models::SetAgentSessionModelResponse setAgentSessionModelWithOptions(const Models::SetAgentSessionModelRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets the model used by a session and optionally configures the thinking level.
       *
       * @description - Pass the `sessionId` returned by CreateAgentSession and the `Models[].Id` returned by ListModels as `Params.sessionId` and `Params.modelId`, respectively. The visibility of a model in the model catalog does not guarantee that the target session supports the model. The final validation is performed by the target session.
       * - `modelId` is required. When only modifying the model, you can omit `thinkingLevel`. For details about how to configure the thinking level, see the supplementary description of request parameters.
       * - This operation only modifies the target session and does not modify the global default model of the agent or account. The session may deny configuration modifications during execution, and switching models during runtime is not guaranteed to be supported.
       * - The model and thinking level Settings are applied in steps. If the call fails, the model may have already been changed, and a full rollback is not guaranteed. You should call GetAgentSessionModel to query the current configuration before deciding what to do next. After a successful call, you can read the actual effective values from the returned result.
       *
       * @param request SetAgentSessionModelRequest
       * @return SetAgentSessionModelResponse
       */
      Models::SetAgentSessionModelResponse setAgentSessionModel(const Models::SetAgentSessionModelRequest &request);

      /**
       * @summary Updates the configuration of an agent.
       *
       * @description - `Name` is used only to locate the agent and cannot be modified after creation.
       * - Each agent can be bound to only one knowledge base.
       * - `Tools` is updated according to the rules below. If `Skills` or `KnowledgeBases` is not passed, the original values are retained. If a non-empty array is passed, the entire list is replaced. If an empty array is passed, the corresponding bindings are removed. Other optional fields retain their original values if not passed.
       *
       * @param request UpdateAgentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAgentResponse
       */
      Models::UpdateAgentResponse updateAgentWithOptions(const Models::UpdateAgentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the configuration of an agent.
       *
       * @description - `Name` is used only to locate the agent and cannot be modified after creation.
       * - Each agent can be bound to only one knowledge base.
       * - `Tools` is updated according to the rules below. If `Skills` or `KnowledgeBases` is not passed, the original values are retained. If a non-empty array is passed, the entire list is replaced. If an empty array is passed, the corresponding bindings are removed. Other optional fields retain their original values if not passed.
       *
       * @param request UpdateAgentRequest
       * @return UpdateAgentResponse
       */
      Models::UpdateAgentResponse updateAgent(const Models::UpdateAgentRequest &request);

      /**
       * @summary Updates a skill.
       *
       * @description - Update rules:
       *   - Name is only used to locate the skill and cannot be modified.
       *   - The caller must be the creator of the skill, or the root account of the tenant that has the permission to manage the tenant-level skill.
       * - Replacement rules:
       *   - If Description and Visibility are omitted, their original values are retained. Passing `null` is also treated as omission and cannot be used to clear the original values.
       *   - Metadata is replaced as a whole, not merged incrementally. If Metadata is omitted, the original content is retained. If it is passed, old fields not included in the new object are deleted.
       *   - When modifying only Description or Visibility, do not pass Metadata, and do not pass an empty object `{}`. An empty object replaces the original metadata with an empty object as a whole.
       * - Content sources:
       *   - When replacing the body or bundle, you must and can only choose one of skillMd, transitId, or bundleUrl.
       *   - For the field formats of the three sources, the Transit upload confirmation process, and the bundleUrl restrictions, refer to CreateSkill. Finally, pass the selected source in UpdateSkill.Metadata.
       *
       * @param request UpdateSkillRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSkillResponse
       */
      Models::UpdateSkillResponse updateSkillWithOptions(const Models::UpdateSkillRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a skill.
       *
       * @description - Update rules:
       *   - Name is only used to locate the skill and cannot be modified.
       *   - The caller must be the creator of the skill, or the root account of the tenant that has the permission to manage the tenant-level skill.
       * - Replacement rules:
       *   - If Description and Visibility are omitted, their original values are retained. Passing `null` is also treated as omission and cannot be used to clear the original values.
       *   - Metadata is replaced as a whole, not merged incrementally. If Metadata is omitted, the original content is retained. If it is passed, old fields not included in the new object are deleted.
       *   - When modifying only Description or Visibility, do not pass Metadata, and do not pass an empty object `{}`. An empty object replaces the original metadata with an empty object as a whole.
       * - Content sources:
       *   - When replacing the body or bundle, you must and can only choose one of skillMd, transitId, or bundleUrl.
       *   - For the field formats of the three sources, the Transit upload confirmation process, and the bundleUrl restrictions, refer to CreateSkill. Finally, pass the selected source in UpdateSkill.Metadata.
       *
       * @param request UpdateSkillRequest
       * @return UpdateSkillResponse
       */
      Models::UpdateSkillResponse updateSkill(const Models::UpdateSkillRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Ada20260701
#endif
