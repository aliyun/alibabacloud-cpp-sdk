// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_AGENTCORE20260804_HPP_
#define ALIBABACLOUD_AGENTCORE20260804_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/AgentCore20260804Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/AgentCore20260804.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Writes messages or text to a memory store. By default, sync is set to true, which synchronously waits for extraction and returns only memories (an empty array is allowed). If sync is set to false, the operation returns only a taskId that can be queried by using GetMemoryTask.
       *
       * @description Writes messages or text to a memory store. By default, sync is set to true, which synchronously waits for extraction and returns only memories (an empty array is allowed). If sync is set to false, the operation returns only a taskId that can be queried by using GetMemoryTask.
       *
       * @param tmpReq AddMemoriesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddMemoriesResponse
       */
      Models::AddMemoriesResponse addMemoriesWithOptions(const string &workspaceId, const string &memoryStoreName, const Models::AddMemoriesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Writes messages or text to a memory store. By default, sync is set to true, which synchronously waits for extraction and returns only memories (an empty array is allowed). If sync is set to false, the operation returns only a taskId that can be queried by using GetMemoryTask.
       *
       * @description Writes messages or text to a memory store. By default, sync is set to true, which synchronously waits for extraction and returns only memories (an empty array is allowed). If sync is set to false, the operation returns only a taskId that can be queried by using GetMemoryTask.
       *
       * @param request AddMemoriesRequest
       * @return AddMemoriesResponse
       */
      Models::AddMemoriesResponse addMemories(const string &workspaceId, const string &memoryStoreName, const Models::AddMemoriesRequest &request);

      /**
       * @summary Deletes multiple models in a specified workspace. If any model is in use, the entire batch request fails.
       *
       * @param tmpReq BatchDeleteModelsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchDeleteModelsResponse
       */
      Models::BatchDeleteModelsResponse batchDeleteModelsWithOptions(const string &workspaceId, const Models::BatchDeleteModelsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes multiple models in a specified workspace. If any model is in use, the entire batch request fails.
       *
       * @param request BatchDeleteModelsRequest
       * @return BatchDeleteModelsResponse
       */
      Models::BatchDeleteModelsResponse batchDeleteModels(const string &workspaceId, const Models::BatchDeleteModelsRequest &request);

      /**
       * @summary Uploads skill ZIP packages in batches through OSS and returns the processing result for each skill.
       *
       * @description ## Request description
       * Uploads skill ZIP packages in batches through OSS and returns the processing result for each skill.
       *
       * @param tmpReq BatchUploadSkillsViaOssRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchUploadSkillsViaOssResponse
       */
      Models::BatchUploadSkillsViaOssResponse batchUploadSkillsViaOssWithOptions(const string &workspaceId, const Models::BatchUploadSkillsViaOssRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Uploads skill ZIP packages in batches through OSS and returns the processing result for each skill.
       *
       * @description ## Request description
       * Uploads skill ZIP packages in batches through OSS and returns the processing result for each skill.
       *
       * @param request BatchUploadSkillsViaOssRequest
       * @return BatchUploadSkillsViaOssResponse
       */
      Models::BatchUploadSkillsViaOssResponse batchUploadSkillsViaOss(const string &workspaceId, const Models::BatchUploadSkillsViaOssRequest &request);

      /**
       * @summary Converts an MCP to free-edit mode.
       *
       * @description Disables template usage constraints. After the conversion, the MCP retains its source and tags, but no longer appears on the usage page.
       *
       * @param request ConvertMcpToFreeEditRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConvertMcpToFreeEditResponse
       */
      Models::ConvertMcpToFreeEditResponse convertMcpToFreeEditWithOptions(const string &workspaceId, const string &mcpServerId, const Models::ConvertMcpToFreeEditRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Converts an MCP to free-edit mode.
       *
       * @description Disables template usage constraints. After the conversion, the MCP retains its source and tags, but no longer appears on the usage page.
       *
       * @param request ConvertMcpToFreeEditRequest
       * @return ConvertMcpToFreeEditResponse
       */
      Models::ConvertMcpToFreeEditResponse convertMcpToFreeEdit(const string &workspaceId, const string &mcpServerId, const Models::ConvertMcpToFreeEditRequest &request);

      /**
       * @summary Creates an IM channel for a specified agent and binds it to a publicly accessible ServiceEndpoint.
       *
       * @description Creates an IM channel for a specified agent and binds it to a publicly accessible ServiceEndpoint.
       *
       * @param tmpReq CreateAgentIMChannelRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAgentIMChannelResponse
       */
      Models::CreateAgentIMChannelResponse createAgentIMChannelWithOptions(const string &workspaceId, const string &agentId, const Models::CreateAgentIMChannelRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an IM channel for a specified agent and binds it to a publicly accessible ServiceEndpoint.
       *
       * @description Creates an IM channel for a specified agent and binds it to a publicly accessible ServiceEndpoint.
       *
       * @param request CreateAgentIMChannelRequest
       * @return CreateAgentIMChannelResponse
       */
      Models::CreateAgentIMChannelResponse createAgentIMChannel(const string &workspaceId, const string &agentId, const Models::CreateAgentIMChannelRequest &request);

      /**
       * @summary Creates an AgentSpec in a specified workspace and generates the first draft version. Returns a resource conflict error if an AgentSpec with the same name already exists.
       *
       * @description ## Request description
       * Creates an AgentSpec in a specified workspace and generates the first draft version. Returns a resource conflict error if an AgentSpec with the same name already exists.
       *
       * @param tmpReq CreateAgentSpecRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAgentSpecResponse
       */
      Models::CreateAgentSpecResponse createAgentSpecWithOptions(const string &workspaceId, const Models::CreateAgentSpecRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an AgentSpec in a specified workspace and generates the first draft version. Returns a resource conflict error if an AgentSpec with the same name already exists.
       *
       * @description ## Request description
       * Creates an AgentSpec in a specified workspace and generates the first draft version. Returns a resource conflict error if an AgentSpec with the same name already exists.
       *
       * @param request CreateAgentSpecRequest
       * @return CreateAgentSpecResponse
       */
      Models::CreateAgentSpecResponse createAgentSpec(const string &workspaceId, const Models::CreateAgentSpecRequest &request);

      /**
       * @summary Creates a new draft version for an existing AgentSpec. The AgentSpec must exist and must not have a draft currently being edited.
       *
       * @description ## Request description
       * Creates a new draft version for an existing AgentSpec. The AgentSpec must exist and must not have a draft currently being edited.
       *
       * @param tmpReq CreateAgentSpecVersionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAgentSpecVersionResponse
       */
      Models::CreateAgentSpecVersionResponse createAgentSpecVersionWithOptions(const string &workspaceId, const string &agentSpecName, const Models::CreateAgentSpecVersionRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a new draft version for an existing AgentSpec. The AgentSpec must exist and must not have a draft currently being edited.
       *
       * @description ## Request description
       * Creates a new draft version for an existing AgentSpec. The AgentSpec must exist and must not have a draft currently being edited.
       *
       * @param request CreateAgentSpecVersionRequest
       * @return CreateAgentSpecVersionResponse
       */
      Models::CreateAgentSpecVersionResponse createAgentSpecVersion(const string &workspaceId, const string &agentSpecName, const Models::CreateAgentSpecVersionRequest &request);

      /**
       * @summary Creates a credential in a specified workspace for authentication when an agent accesses external services. Currently, only the apiKey type is supported. The credential content is passed as a JSON string through credentialMetadata and can only be queried in a desensitized format after it is written.
       *
       * @description Creates a credential in a workspace for authentication of services such as Connector.
       *
       * @param tmpReq CreateCredentialRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCredentialResponse
       */
      Models::CreateCredentialResponse createCredentialWithOptions(const string &workspaceId, const Models::CreateCredentialRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a credential in a specified workspace for authentication when an agent accesses external services. Currently, only the apiKey type is supported. The credential content is passed as a JSON string through credentialMetadata and can only be queried in a desensitized format after it is written.
       *
       * @description Creates a credential in a workspace for authentication of services such as Connector.
       *
       * @param request CreateCredentialRequest
       * @return CreateCredentialResponse
       */
      Models::CreateCredentialResponse createCredential(const string &workspaceId, const Models::CreateCredentialRequest &request);

      /**
       * @summary Creates a custom agent in a specified workspace and submits a container image deployment configuration. The creation is an asynchronous process. You can call GetCustomAgent to query the deployment result.
       *
       * @description Before you call this operation, prepare a writable workspace, a RAM role ARN, an ACR container image, and a runtime configuration. You must specify name, artifact, roleArn, and runtime. The runtime parameter must include both compute and sessionPolicy.
       * Currently, only ACR container image deployment is supported. Use artifact.container and specify the service listening port in artifact.port. Omit artifact.code. The image must have the required access permissions and be accessible over the network allowed by the workspace.
       * The creation is an asynchronous process. A successful response indicates that the request is accepted. Use the returned agentId to call GetCustomAgent and check latestVersionStatus, latestExecutionError, and status for the corresponding latestSpecVersion to confirm the deployment result. After the deployment is ready, you can call CreateServiceEndpoint to configure an access endpoint.
       * The clientToken parameter does not currently provide idempotency guarantees. Do not rely on this parameter to prevent duplicate requests. The healthyThreshold parameter for health checks does not currently take effect. Omit this parameter.
       *
       * @param tmpReq CreateCustomAgentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCustomAgentResponse
       */
      Models::CreateCustomAgentResponse createCustomAgentWithOptions(const string &workspaceId, const Models::CreateCustomAgentRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a custom agent in a specified workspace and submits a container image deployment configuration. The creation is an asynchronous process. You can call GetCustomAgent to query the deployment result.
       *
       * @description Before you call this operation, prepare a writable workspace, a RAM role ARN, an ACR container image, and a runtime configuration. You must specify name, artifact, roleArn, and runtime. The runtime parameter must include both compute and sessionPolicy.
       * Currently, only ACR container image deployment is supported. Use artifact.container and specify the service listening port in artifact.port. Omit artifact.code. The image must have the required access permissions and be accessible over the network allowed by the workspace.
       * The creation is an asynchronous process. A successful response indicates that the request is accepted. Use the returned agentId to call GetCustomAgent and check latestVersionStatus, latestExecutionError, and status for the corresponding latestSpecVersion to confirm the deployment result. After the deployment is ready, you can call CreateServiceEndpoint to configure an access endpoint.
       * The clientToken parameter does not currently provide idempotency guarantees. Do not rely on this parameter to prevent duplicate requests. The healthyThreshold parameter for health checks does not currently take effect. Omit this parameter.
       *
       * @param request CreateCustomAgentRequest
       * @return CreateCustomAgentResponse
       */
      Models::CreateCustomAgentResponse createCustomAgent(const string &workspaceId, const Models::CreateCustomAgentRequest &request);

      /**
       * @summary Creates an external agent in a specified workspace.
       *
       * @description Creates an external agent in a specified workspace.
       *
       * @param tmpReq CreateExternalAgentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateExternalAgentResponse
       */
      Models::CreateExternalAgentResponse createExternalAgentWithOptions(const string &workspaceId, const Models::CreateExternalAgentRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an external agent in a specified workspace.
       *
       * @description Creates an external agent in a specified workspace.
       *
       * @param request CreateExternalAgentRequest
       * @return CreateExternalAgentResponse
       */
      Models::CreateExternalAgentResponse createExternalAgent(const string &workspaceId, const Models::CreateExternalAgentRequest &request);

      /**
       * @summary Creates the Bootstrap token and CMS configuration required to onboard a specified external agent.
       *
       * @description Creates the Bootstrap token and CMS configuration required to onboard a specified external agent.
       *
       * @param request CreateExternalAgentBootstrapTokenRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateExternalAgentBootstrapTokenResponse
       */
      Models::CreateExternalAgentBootstrapTokenResponse createExternalAgentBootstrapTokenWithOptions(const string &workspaceId, const string &agentId, const Models::CreateExternalAgentBootstrapTokenRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates the Bootstrap token and CMS configuration required to onboard a specified external agent.
       *
       * @description Creates the Bootstrap token and CMS configuration required to onboard a specified external agent.
       *
       * @param request CreateExternalAgentBootstrapTokenRequest
       * @return CreateExternalAgentBootstrapTokenResponse
       */
      Models::CreateExternalAgentBootstrapTokenResponse createExternalAgentBootstrapToken(const string &workspaceId, const string &agentId, const Models::CreateExternalAgentBootstrapTokenRequest &request);

      /**
       * @summary Binds an external identity provider to a specified workspace to enable single sign-on and organization member synchronization for workspace users. Each workspace can be bound to a maximum of one external identity provider. This is an asynchronous operation. After the API call returns, you can call GetIdentityProvider to query the status and track the progress.
       *
       * @param tmpReq CreateIdentityProviderRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateIdentityProviderResponse
       */
      Models::CreateIdentityProviderResponse createIdentityProviderWithOptions(const string &workspaceId, const Models::CreateIdentityProviderRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Binds an external identity provider to a specified workspace to enable single sign-on and organization member synchronization for workspace users. Each workspace can be bound to a maximum of one external identity provider. This is an asynchronous operation. After the API call returns, you can call GetIdentityProvider to query the status and track the progress.
       *
       * @param request CreateIdentityProviderRequest
       * @return CreateIdentityProviderResponse
       */
      Models::CreateIdentityProviderResponse createIdentityProvider(const string &workspaceId, const Models::CreateIdentityProviderRequest &request);

      /**
       * @summary Creates an image cache.
       *
       * @description Creates or reuses an image cache in the current workspace based on the image source and tag. Both public and private images uniformly reuse the workspace\\"s source image pull authorization and resource roles. The resource manager parses the tag during the transfer node and performs image replication based on the parsed summary. The digest is empty before parsing is complete. For regular tags, the saved summary is reused after parsing. For the latest tag, it is parsed again when registered after reaching the desired state, and duplicate registrations in progress reuse the node. The logical imageId remains stable. accessInternet and accessVpc only determine the source reading and transfer for the current request and do not modify the agent network. An HTTP 200 response returns an acceptance snapshot of PENDING, READY, or FAILED, which does not indicate that the creation is complete. ClientToken does not guarantee to deduplicate requests or recover the original result. If the result is unconfirmed, query the query cache status first before deciding whether to recommit.
       *
       * @param tmpReq CreateImageCacheRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateImageCacheResponse
       */
      Models::CreateImageCacheResponse createImageCacheWithOptions(const Models::CreateImageCacheRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an image cache.
       *
       * @description Creates or reuses an image cache in the current workspace based on the image source and tag. Both public and private images uniformly reuse the workspace\\"s source image pull authorization and resource roles. The resource manager parses the tag during the transfer node and performs image replication based on the parsed summary. The digest is empty before parsing is complete. For regular tags, the saved summary is reused after parsing. For the latest tag, it is parsed again when registered after reaching the desired state, and duplicate registrations in progress reuse the node. The logical imageId remains stable. accessInternet and accessVpc only determine the source reading and transfer for the current request and do not modify the agent network. An HTTP 200 response returns an acceptance snapshot of PENDING, READY, or FAILED, which does not indicate that the creation is complete. ClientToken does not guarantee to deduplicate requests or recover the original result. If the result is unconfirmed, query the query cache status first before deciding whether to recommit.
       *
       * @param request CreateImageCacheRequest
       * @return CreateImageCacheResponse
       */
      Models::CreateImageCacheResponse createImageCache(const Models::CreateImageCacheRequest &request);

      /**
       * @summary Creates a managed agent in a specified workspace.
       *
       * @param tmpReq CreateManagedAgentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateManagedAgentResponse
       */
      Models::CreateManagedAgentResponse createManagedAgentWithOptions(const string &workspaceId, const Models::CreateManagedAgentRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a managed agent in a specified workspace.
       *
       * @param request CreateManagedAgentRequest
       * @return CreateManagedAgentResponse
       */
      Models::CreateManagedAgentResponse createManagedAgent(const string &workspaceId, const Models::CreateManagedAgentRequest &request);

      /**
       * @summary Creates an MCP service in a specified workspace. The creation is an asynchronous process. You can check whether the service is ready by using the returned status or by calling a query operation.
       *
       * @description ## Operation description
       * Creates an MCP service in a specified workspace. The creation is an asynchronous process. You can check whether the service is ready by using the returned status or by calling a query operation.
       *
       * @param tmpReq CreateMcpRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMcpResponse
       */
      Models::CreateMcpResponse createMcpWithOptions(const string &workspaceId, const Models::CreateMcpRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an MCP service in a specified workspace. The creation is an asynchronous process. You can check whether the service is ready by using the returned status or by calling a query operation.
       *
       * @description ## Operation description
       * Creates an MCP service in a specified workspace. The creation is an asynchronous process. You can check whether the service is ready by using the returned status or by calling a query operation.
       *
       * @param request CreateMcpRequest
       * @return CreateMcpResponse
       */
      Models::CreateMcpResponse createMcp(const string &workspaceId, const Models::CreateMcpRequest &request);

      /**
       * @summary Creates a long-term memory store in a specified workspace.
       *
       * @description Creates a long-term memory store in a specified workspace.
       *
       * @param tmpReq CreateMemoryStoreRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateMemoryStoreResponse
       */
      Models::CreateMemoryStoreResponse createMemoryStoreWithOptions(const string &workspaceId, const Models::CreateMemoryStoreRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a long-term memory store in a specified workspace.
       *
       * @description Creates a long-term memory store in a specified workspace.
       *
       * @param request CreateMemoryStoreRequest
       * @return CreateMemoryStoreResponse
       */
      Models::CreateMemoryStoreResponse createMemoryStore(const string &workspaceId, const Models::CreateMemoryStoreRequest &request);

      /**
       * @summary Creates a model configuration for model creation under a model connection in a specified workspace.
       *
       * @param tmpReq CreateModelRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateModelResponse
       */
      Models::CreateModelResponse createModelWithOptions(const string &workspaceId, const Models::CreateModelRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a model configuration for model creation under a model connection in a specified workspace.
       *
       * @param request CreateModelRequest
       * @return CreateModelResponse
       */
      Models::CreateModelResponse createModel(const string &workspaceId, const Models::CreateModelRequest &request);

      /**
       * @summary Creates a model connection in a specified workspace and configures the upstream model service endpoint, invoke protocol, and access credentials to support model creation.
       *
       * @param tmpReq CreateModelConnectionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateModelConnectionResponse
       */
      Models::CreateModelConnectionResponse createModelConnectionWithOptions(const string &workspaceId, const Models::CreateModelConnectionRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a model connection in a specified workspace and configures the upstream model service endpoint, invoke protocol, and access credentials to support model creation.
       *
       * @param request CreateModelConnectionRequest
       * @return CreateModelConnectionResponse
       */
      Models::CreateModelConnectionResponse createModelConnection(const string &workspaceId, const Models::CreateModelConnectionRequest &request);

      /**
       * @summary Creates a Skill in the specified workspace and generates a draft version that can be further edited. You can derive a draft from an existing version or specify a target version and commit message.
       *
       * @description ## Operation description
       * Creates a Skill in the specified workspace and generates a draft version that can be further edited. You can derive a draft from an existing version or specify a target version and commit message.
       *
       * @param tmpReq CreateSkillDraftRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSkillDraftResponse
       */
      Models::CreateSkillDraftResponse createSkillDraftWithOptions(const string &workspaceId, const Models::CreateSkillDraftRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a Skill in the specified workspace and generates a draft version that can be further edited. You can derive a draft from an existing version or specify a target version and commit message.
       *
       * @description ## Operation description
       * Creates a Skill in the specified workspace and generates a draft version that can be further edited. You can derive a draft from an existing version or specify a target version and commit message.
       *
       * @param request CreateSkillDraftRequest
       * @return CreateSkillDraftResponse
       */
      Models::CreateSkillDraftResponse createSkillDraft(const string &workspaceId, const Models::CreateSkillDraftRequest &request);

      /**
       * @summary Creates a team in a specified workspace and configures user members and agent members at the same time. Exactly one user member must have the ADMIN role, and agent members can only have the LEADER or WORKER role.
       *
       * @param tmpReq CreateTeamRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTeamResponse
       */
      Models::CreateTeamResponse createTeamWithOptions(const string &workspaceId, const Models::CreateTeamRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a team in a specified workspace and configures user members and agent members at the same time. Exactly one user member must have the ADMIN role, and agent members can only have the LEADER or WORKER role.
       *
       * @param request CreateTeamRequest
       * @return CreateTeamResponse
       */
      Models::CreateTeamResponse createTeam(const string &workspaceId, const Models::CreateTeamRequest &request);

      /**
       * @summary Creates a user in a specified workspace. The username must be unique within the workspace, can contain only lowercase letters, digits, and hyphens, and cannot use reserved names such as manager, admin, or names starting with worker-. If the password is not specified, the server generates an initial password and returns it in the initialPassword field of the response.
       *
       * @param tmpReq CreateUserRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateUserResponse
       */
      Models::CreateUserResponse createUserWithOptions(const string &workspaceId, const Models::CreateUserRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a user in a specified workspace. The username must be unique within the workspace, can contain only lowercase letters, digits, and hyphens, and cannot use reserved names such as manager, admin, or names starting with worker-. If the password is not specified, the server generates an initial password and returns it in the initialPassword field of the response.
       *
       * @param request CreateUserRequest
       * @return CreateUserResponse
       */
      Models::CreateUserResponse createUser(const string &workspaceId, const Models::CreateUserRequest &request);

      /**
       * @summary Creates an AgentCore workspace control plane record. The server completes the state transition from Initializing to Initialized within the same transaction.
       *
       * @description ## Request description\\nCreates an AgentCore workspace control plane record. The server completes the state transition from `Initializing` to `Initialized` within the same transaction. The network configuration uses `Enabled` to specify whether to enable the VPC network. If enabled, you must provide `VpcId` and at least one `VSwitchIds`.\\n.
       *
       * @param tmpReq CreateWorkspaceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateWorkspaceResponse
       */
      Models::CreateWorkspaceResponse createWorkspaceWithOptions(const Models::CreateWorkspaceRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an AgentCore workspace control plane record. The server completes the state transition from Initializing to Initialized within the same transaction.
       *
       * @description ## Request description\\nCreates an AgentCore workspace control plane record. The server completes the state transition from `Initializing` to `Initialized` within the same transaction. The network configuration uses `Enabled` to specify whether to enable the VPC network. If enabled, you must provide `VpcId` and at least one `VSwitchIds`.\\n.
       *
       * @param request CreateWorkspaceRequest
       * @return CreateWorkspaceResponse
       */
      Models::CreateWorkspaceResponse createWorkspace(const Models::CreateWorkspaceRequest &request);

      /**
       * @summary Calls a specified model through a published model connection to verify whether the model call chain is available.
       *
       * @param tmpReq DebugModelRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DebugModelResponse
       */
      Models::DebugModelResponse debugModelWithOptions(const string &workspaceId, const string &modelId, const Models::DebugModelRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Calls a specified model through a published model connection to verify whether the model call chain is available.
       *
       * @param request DebugModelRequest
       * @return DebugModelResponse
       */
      Models::DebugModelResponse debugModel(const string &workspaceId, const string &modelId, const Models::DebugModelRequest &request);

      /**
       * @summary Deletes an IM channel of a specified agent.
       *
       * @description Deletes an IM channel of a specified agent.
       *
       * @param request DeleteAgentIMChannelRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAgentIMChannelResponse
       */
      Models::DeleteAgentIMChannelResponse deleteAgentIMChannelWithOptions(const string &workspaceId, const string &agentId, const string &imChannelId, const Models::DeleteAgentIMChannelRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an IM channel of a specified agent.
       *
       * @description Deletes an IM channel of a specified agent.
       *
       * @param request DeleteAgentIMChannelRequest
       * @return DeleteAgentIMChannelResponse
       */
      Models::DeleteAgentIMChannelResponse deleteAgentIMChannel(const string &workspaceId, const string &agentId, const string &imChannelId, const Models::DeleteAgentIMChannelRequest &request);

      /**
       * @summary Deletes the specified AgentSpec and all its versions and metadata. The deletion is irreversible.
       *
       * @description ## Operation description
       * Deletes the specified AgentSpec and all its versions and metadata. The deletion is irreversible.
       *
       * @param request DeleteAgentSpecRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAgentSpecResponse
       */
      Models::DeleteAgentSpecResponse deleteAgentSpecWithOptions(const string &workspaceId, const string &agentSpecName, const Models::DeleteAgentSpecRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the specified AgentSpec and all its versions and metadata. The deletion is irreversible.
       *
       * @description ## Operation description
       * Deletes the specified AgentSpec and all its versions and metadata. The deletion is irreversible.
       *
       * @param request DeleteAgentSpecRequest
       * @return DeleteAgentSpecResponse
       */
      Models::DeleteAgentSpecResponse deleteAgentSpec(const string &workspaceId, const string &agentSpecName, const Models::DeleteAgentSpecRequest &request);

      /**
       * @summary Deletes the draft version currently being edited for a specified AgentSpec and clears the draft version pointer.
       *
       * @description ## Request description
       * Deletes the draft version currently being edited for a specified AgentSpec and clears the draft version pointer.
       *
       * @param request DeleteAgentSpecVersionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAgentSpecVersionResponse
       */
      Models::DeleteAgentSpecVersionResponse deleteAgentSpecVersionWithOptions(const string &workspaceId, const string &agentSpecName, const Models::DeleteAgentSpecVersionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the draft version currently being edited for a specified AgentSpec and clears the draft version pointer.
       *
       * @description ## Request description
       * Deletes the draft version currently being edited for a specified AgentSpec and clears the draft version pointer.
       *
       * @param request DeleteAgentSpecVersionRequest
       * @return DeleteAgentSpecVersionResponse
       */
      Models::DeleteAgentSpecVersionResponse deleteAgentSpecVersion(const string &workspaceId, const string &agentSpecName, const Models::DeleteAgentSpecVersionRequest &request);

      /**
       * @summary Deletes a credential in a specified workspace and deletes the ciphertext hosted in the credential service. After deletion, agents bound to the credential can no longer obtain the credential content.
       *
       * @description Deletes an access credential in a specified workspace. A credential cannot be deleted if it is still bound to an MCP service.
       *
       * @param request DeleteCredentialRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCredentialResponse
       */
      Models::DeleteCredentialResponse deleteCredentialWithOptions(const string &workspaceId, const string &credentialId, const Models::DeleteCredentialRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a credential in a specified workspace and deletes the ciphertext hosted in the credential service. After deletion, agents bound to the credential can no longer obtain the credential content.
       *
       * @description Deletes an access credential in a specified workspace. A credential cannot be deleted if it is still bound to an MCP service.
       *
       * @param request DeleteCredentialRequest
       * @return DeleteCredentialResponse
       */
      Models::DeleteCredentialResponse deleteCredential(const string &workspaceId, const string &credentialId, const Models::DeleteCredentialRequest &request);

      /**
       * @summary Deletes a custom agent from a specified workspace. A successful request indicates that the deletion is accepted. The runtime resources are subsequently cleaned up in the background.
       *
       * @description Before calling this operation, ensure that the workspace is writable. If the agent is still associated with a team, you must dissociate it from the team first.
       * Deletion is an asynchronous process. After the request is accepted, the associated invocation endpoints become unavailable, and the runtime resources are subsequently cleaned up. The status in the response is typically Deleting. If the agent is already in the deletion process, a subsequent request returns the current summary.
       * You can call GetCustomAgent to check the deletion progress. After the deletion is complete, a detail query returns a resource not found error.
       *
       * @param request DeleteCustomAgentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCustomAgentResponse
       */
      Models::DeleteCustomAgentResponse deleteCustomAgentWithOptions(const string &workspaceId, const string &agentId, const Models::DeleteCustomAgentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a custom agent from a specified workspace. A successful request indicates that the deletion is accepted. The runtime resources are subsequently cleaned up in the background.
       *
       * @description Before calling this operation, ensure that the workspace is writable. If the agent is still associated with a team, you must dissociate it from the team first.
       * Deletion is an asynchronous process. After the request is accepted, the associated invocation endpoints become unavailable, and the runtime resources are subsequently cleaned up. The status in the response is typically Deleting. If the agent is already in the deletion process, a subsequent request returns the current summary.
       * You can call GetCustomAgent to check the deletion progress. After the deletion is complete, a detail query returns a resource not found error.
       *
       * @param request DeleteCustomAgentRequest
       * @return DeleteCustomAgentResponse
       */
      Models::DeleteCustomAgentResponse deleteCustomAgent(const string &workspaceId, const string &agentId, const Models::DeleteCustomAgentRequest &request);

      /**
       * @summary Deletes a specified external agent.
       *
       * @description Deletes a specified external agent.
       *
       * @param request DeleteExternalAgentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteExternalAgentResponse
       */
      Models::DeleteExternalAgentResponse deleteExternalAgentWithOptions(const string &workspaceId, const string &agentId, const Models::DeleteExternalAgentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified external agent.
       *
       * @description Deletes a specified external agent.
       *
       * @param request DeleteExternalAgentRequest
       * @return DeleteExternalAgentResponse
       */
      Models::DeleteExternalAgentResponse deleteExternalAgent(const string &workspaceId, const string &agentId, const Models::DeleteExternalAgentRequest &request);

      /**
       * @summary Unbinds the external identity provider from a specified workspace and cleans up users synchronized by that identity provider. The unbinding is an asynchronous operation. After the API returns, you can call GetIdentityProvider to query the status and track the progress.
       *
       * @param request DeleteIdentityProviderRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteIdentityProviderResponse
       */
      Models::DeleteIdentityProviderResponse deleteIdentityProviderWithOptions(const string &workspaceId, const string &identityProviderType, const Models::DeleteIdentityProviderRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unbinds the external identity provider from a specified workspace and cleans up users synchronized by that identity provider. The unbinding is an asynchronous operation. After the API returns, you can call GetIdentityProvider to query the status and track the progress.
       *
       * @param request DeleteIdentityProviderRequest
       * @return DeleteIdentityProviderResponse
       */
      Models::DeleteIdentityProviderResponse deleteIdentityProvider(const string &workspaceId, const string &identityProviderType, const Models::DeleteIdentityProviderRequest &request);

      /**
       * @summary Deletes an image cache.
       *
       * @description Deletes the logical image cache of the current workspace. The deletion requires that no enabled agent configurations reference the cache and no active instances are using it. Concurrency is rechecked upon submission. Caches in the PENDING or FAILED state can still be deleted, and the backend handles the cleanup. An HTTP 200 response returns an imageId that matches the request. If deletionPending is true, the current workspace is still undergoing deletion, and a Get request returns DELETING until ImageCacheNotFound is explicitly returned. If false, the deletion is complete or the current workspace no longer exists. Usage by other workspaces does not block the deletion for the current workspace. The physical content is reclaimed only after all workspaces in the same region have removed their associations and no active instances are using it.
       *
       * @param request DeleteImageCacheRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteImageCacheResponse
       */
      Models::DeleteImageCacheResponse deleteImageCacheWithOptions(const string &imageId, const Models::DeleteImageCacheRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an image cache.
       *
       * @description Deletes the logical image cache of the current workspace. The deletion requires that no enabled agent configurations reference the cache and no active instances are using it. Concurrency is rechecked upon submission. Caches in the PENDING or FAILED state can still be deleted, and the backend handles the cleanup. An HTTP 200 response returns an imageId that matches the request. If deletionPending is true, the current workspace is still undergoing deletion, and a Get request returns DELETING until ImageCacheNotFound is explicitly returned. If false, the deletion is complete or the current workspace no longer exists. Usage by other workspaces does not block the deletion for the current workspace. The physical content is reclaimed only after all workspaces in the same region have removed their associations and no active instances are using it.
       *
       * @param request DeleteImageCacheRequest
       * @return DeleteImageCacheResponse
       */
      Models::DeleteImageCacheResponse deleteImageCache(const string &imageId, const Models::DeleteImageCacheRequest &request);

      /**
       * @summary Deletes a specified managed agent.
       *
       * @param request DeleteManagedAgentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteManagedAgentResponse
       */
      Models::DeleteManagedAgentResponse deleteManagedAgentWithOptions(const string &workspaceId, const string &agentId, const Models::DeleteManagedAgentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified managed agent.
       *
       * @param request DeleteManagedAgentRequest
       * @return DeleteManagedAgentResponse
       */
      Models::DeleteManagedAgentResponse deleteManagedAgent(const string &workspaceId, const string &agentId, const Models::DeleteManagedAgentRequest &request);

      /**
       * @summary Deletes a specified MCP server. The deletion is an asynchronous process, and the MCP server is no longer returned after the process is complete.
       *
       * @description ## Request description
       * Deletes a specified MCP server. The deletion is an asynchronous process, and the MCP server is no longer returned after the process is complete.
       *
       * @param request DeleteMcpRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMcpResponse
       */
      Models::DeleteMcpResponse deleteMcpWithOptions(const string &mcpServerId, const string &workspaceId, const Models::DeleteMcpRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified MCP server. The deletion is an asynchronous process, and the MCP server is no longer returned after the process is complete.
       *
       * @description ## Request description
       * Deletes a specified MCP server. The deletion is an asynchronous process, and the MCP server is no longer returned after the process is complete.
       *
       * @param request DeleteMcpRequest
       * @return DeleteMcpResponse
       */
      Models::DeleteMcpResponse deleteMcp(const string &mcpServerId, const string &workspaceId, const Models::DeleteMcpRequest &request);

      /**
       * @summary Deletes a long-term memory based on the memory ID.
       *
       * @description Deletes a long-term memory based on the memory ID.
       *
       * @param request DeleteMemoryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMemoryResponse
       */
      Models::DeleteMemoryResponse deleteMemoryWithOptions(const string &workspaceId, const string &memoryStoreName, const string &memoryId, const Models::DeleteMemoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a long-term memory based on the memory ID.
       *
       * @description Deletes a long-term memory based on the memory ID.
       *
       * @param request DeleteMemoryRequest
       * @return DeleteMemoryResponse
       */
      Models::DeleteMemoryResponse deleteMemory(const string &workspaceId, const string &memoryStoreName, const string &memoryId, const Models::DeleteMemoryRequest &request);

      /**
       * @summary Asynchronously deletes a MemoryStore and all its long-term memory.
       *
       * @description Asynchronously deletes a MemoryStore and all its long-term memory.
       *
       * @param request DeleteMemoryStoreRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMemoryStoreResponse
       */
      Models::DeleteMemoryStoreResponse deleteMemoryStoreWithOptions(const string &workspaceId, const string &memoryStoreName, const Models::DeleteMemoryStoreRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Asynchronously deletes a MemoryStore and all its long-term memory.
       *
       * @description Asynchronously deletes a MemoryStore and all its long-term memory.
       *
       * @param request DeleteMemoryStoreRequest
       * @return DeleteMemoryStoreResponse
       */
      Models::DeleteMemoryStoreResponse deleteMemoryStore(const string &workspaceId, const string &memoryStoreName, const Models::DeleteMemoryStoreRequest &request);

      /**
       * @summary Deletes a model from a specified workspace. Models that are currently in use cannot be deleted.
       *
       * @param request DeleteModelRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteModelResponse
       */
      Models::DeleteModelResponse deleteModelWithOptions(const string &workspaceId, const string &modelId, const Models::DeleteModelRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a model from a specified workspace. Models that are currently in use cannot be deleted.
       *
       * @param request DeleteModelRequest
       * @return DeleteModelResponse
       */
      Models::DeleteModelResponse deleteModel(const string &workspaceId, const string &modelId, const Models::DeleteModelRequest &request);

      /**
       * @summary Submits an asynchronous deletion task for a specified model connection. The connection cannot be deleted if it has associated models or runtime references.
       *
       * @param request DeleteModelConnectionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteModelConnectionResponse
       */
      Models::DeleteModelConnectionResponse deleteModelConnectionWithOptions(const string &workspaceId, const string &connectionId, const Models::DeleteModelConnectionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits an asynchronous deletion task for a specified model connection. The connection cannot be deleted if it has associated models or runtime references.
       *
       * @param request DeleteModelConnectionRequest
       * @return DeleteModelConnectionResponse
       */
      Models::DeleteModelConnectionResponse deleteModelConnection(const string &workspaceId, const string &connectionId, const Models::DeleteModelConnectionRequest &request);

      /**
       * @summary Deletes a skill and its related version data from a specified workspace. This operation is irreversible.
       *
       * @description ## Operation description
       * Deletes a skill and its related version data from a specified workspace. This operation is irreversible.
       *
       * @param request DeleteSkillRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSkillResponse
       */
      Models::DeleteSkillResponse deleteSkillWithOptions(const string &workspaceId, const string &skillName, const Models::DeleteSkillRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a skill and its related version data from a specified workspace. This operation is irreversible.
       *
       * @description ## Operation description
       * Deletes a skill and its related version data from a specified workspace. This operation is irreversible.
       *
       * @param request DeleteSkillRequest
       * @return DeleteSkillResponse
       */
      Models::DeleteSkillResponse deleteSkill(const string &workspaceId, const string &skillName, const Models::DeleteSkillRequest &request);

      /**
       * @summary Deletes the draft version currently being edited for a specified Skill.
       *
       * @description ## Operation description
       * Deletes the draft version currently being edited for a specified Skill.
       *
       * @param request DeleteSkillDraftRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSkillDraftResponse
       */
      Models::DeleteSkillDraftResponse deleteSkillDraftWithOptions(const string &workspaceId, const string &skillName, const Models::DeleteSkillDraftRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the draft version currently being edited for a specified Skill.
       *
       * @description ## Operation description
       * Deletes the draft version currently being edited for a specified Skill.
       *
       * @param request DeleteSkillDraftRequest
       * @return DeleteSkillDraftResponse
       */
      Models::DeleteSkillDraftResponse deleteSkillDraft(const string &workspaceId, const string &skillName, const Models::DeleteSkillDraftRequest &request);

      /**
       * @summary Deletes a team from a specified workspace. Deleting a team does not delete the users or agents within it. Only the membership associations are removed.
       *
       * @param request DeleteTeamRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTeamResponse
       */
      Models::DeleteTeamResponse deleteTeamWithOptions(const string &workspaceId, const string &teamId, const Models::DeleteTeamRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a team from a specified workspace. Deleting a team does not delete the users or agents within it. Only the membership associations are removed.
       *
       * @param request DeleteTeamRequest
       * @return DeleteTeamResponse
       */
      Models::DeleteTeamResponse deleteTeam(const string &workspaceId, const string &teamId, const Models::DeleteTeamRequest &request);

      /**
       * @summary Deletes a user from a specified workspace. A user cannot be deleted while the user is still a member of any team. Remove the user from all teams before deleting the user.
       *
       * @param request DeleteUserRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteUserResponse
       */
      Models::DeleteUserResponse deleteUserWithOptions(const string &workspaceId, const string &agentCoreUserId, const Models::DeleteUserRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a user from a specified workspace. A user cannot be deleted while the user is still a member of any team. Remove the user from all teams before deleting the user.
       *
       * @param request DeleteUserRequest
       * @return DeleteUserResponse
       */
      Models::DeleteUserResponse deleteUser(const string &workspaceId, const string &agentCoreUserId, const Models::DeleteUserRequest &request);

      /**
       * @summary Deletes the control plane record of a specified workspace. The server completes the state transition from Deleting to Deleted within the same transaction. The server processes repeated deletion requests for workspaces in the Deleting or Deleted state idempotently.
       *
       * @description ## Request description\\nDeletes the control plane record of a specified workspace. The server completes the state transition from `Deleting` to `Deleted` within the same transaction. The server processes repeated deletion requests for workspaces in the `Deleting` or `Deleted` state idempotently.\\n.
       *
       * @param request DeleteWorkspaceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteWorkspaceResponse
       */
      Models::DeleteWorkspaceResponse deleteWorkspaceWithOptions(const string &workspaceId, const Models::DeleteWorkspaceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the control plane record of a specified workspace. The server completes the state transition from Deleting to Deleted within the same transaction. The server processes repeated deletion requests for workspaces in the Deleting or Deleted state idempotently.
       *
       * @description ## Request description\\nDeletes the control plane record of a specified workspace. The server completes the state transition from `Deleting` to `Deleted` within the same transaction. The server processes repeated deletion requests for workspaces in the `Deleting` or `Deleted` state idempotently.\\n.
       *
       * @param request DeleteWorkspaceRequest
       * @return DeleteWorkspaceResponse
       */
      Models::DeleteWorkspaceResponse deleteWorkspace(const string &workspaceId, const Models::DeleteWorkspaceRequest &request);

      /**
       * @summary Disables a QoderCLI Connector in a specified workspace. The Connector can be disabled only when no Agent is using it. After the Connector is disabled, the Connector and its Service Account Key configuration are removed.
       *
       * @description Disables a Connector in a specified workspace.
       *
       * @param request DisableConnectorRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableConnectorResponse
       */
      Models::DisableConnectorResponse disableConnectorWithOptions(const string &workspaceId, const string &connectorName, const Models::DisableConnectorRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables a QoderCLI Connector in a specified workspace. The Connector can be disabled only when no Agent is using it. After the Connector is disabled, the Connector and its Service Account Key configuration are removed.
       *
       * @description Disables a Connector in a specified workspace.
       *
       * @param request DisableConnectorRequest
       * @return DisableConnectorResponse
       */
      Models::DisableConnectorResponse disableConnector(const string &workspaceId, const string &connectorName, const Models::DisableConnectorRequest &request);

      /**
       * @summary Retrieves the presigned OSS download URL of a specified AgentSpec to download the AgentSpec ZIP package.
       *
       * @description ## Request description
       * Retrieves the presigned OSS download URL of a specified AgentSpec to download the AgentSpec ZIP package.
       *
       * @param request DownloadAgentSpecViaOssRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DownloadAgentSpecViaOssResponse
       */
      Models::DownloadAgentSpecViaOssResponse downloadAgentSpecViaOssWithOptions(const string &workspaceId, const string &agentSpecName, const Models::DownloadAgentSpecViaOssRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the presigned OSS download URL of a specified AgentSpec to download the AgentSpec ZIP package.
       *
       * @description ## Request description
       * Retrieves the presigned OSS download URL of a specified AgentSpec to download the AgentSpec ZIP package.
       *
       * @param request DownloadAgentSpecViaOssRequest
       * @return DownloadAgentSpecViaOssResponse
       */
      Models::DownloadAgentSpecViaOssResponse downloadAgentSpecViaOss(const string &workspaceId, const string &agentSpecName, const Models::DownloadAgentSpecViaOssRequest &request);

      /**
       * @summary Retrieves a pre-signed OSS download URL for a specified Skill version, which is used to download the corresponding Skill ZIP package.
       *
       * @description ## Operation description
       * Retrieves a pre-signed OSS download URL for a specified Skill version, which is used to download the corresponding Skill ZIP package.
       *
       * @param request DownloadSkillVersionViaOssRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DownloadSkillVersionViaOssResponse
       */
      Models::DownloadSkillVersionViaOssResponse downloadSkillVersionViaOssWithOptions(const string &workspaceId, const string &skillName, const string &skillVersion, const Models::DownloadSkillVersionViaOssRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a pre-signed OSS download URL for a specified Skill version, which is used to download the corresponding Skill ZIP package.
       *
       * @description ## Operation description
       * Retrieves a pre-signed OSS download URL for a specified Skill version, which is used to download the corresponding Skill ZIP package.
       *
       * @param request DownloadSkillVersionViaOssRequest
       * @return DownloadSkillVersionViaOssResponse
       */
      Models::DownloadSkillVersionViaOssResponse downloadSkillVersionViaOss(const string &workspaceId, const string &skillName, const string &skillVersion, const Models::DownloadSkillVersionViaOssRequest &request);

      /**
       * @summary Enables a QoderCLI Connector in a specified workspace. The request must include the site, API key, and at least one service account key. The service validates all account keys before saving the configuration.
       *
       * @description Enables a Connector in a specified workspace. Credential verification is required before the Connector can be enabled.
       *
       * @param tmpReq EnableConnectorRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableConnectorResponse
       */
      Models::EnableConnectorResponse enableConnectorWithOptions(const string &workspaceId, const string &connectorName, const Models::EnableConnectorRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables a QoderCLI Connector in a specified workspace. The request must include the site, API key, and at least one service account key. The service validates all account keys before saving the configuration.
       *
       * @description Enables a Connector in a specified workspace. Credential verification is required before the Connector can be enabled.
       *
       * @param request EnableConnectorRequest
       * @return EnableConnectorResponse
       */
      Models::EnableConnectorResponse enableConnector(const string &workspaceId, const string &connectorName, const Models::EnableConnectorRequest &request);

      /**
       * @summary Skips the regular review process and forcibly publishes a specified Skill version.
       *
       * @description ## Operation description
       * Skips the regular review process and forcibly publishes a specified Skill version.
       *
       * @param tmpReq ForcePublishSkillVersionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ForcePublishSkillVersionResponse
       */
      Models::ForcePublishSkillVersionResponse forcePublishSkillVersionWithOptions(const string &workspaceId, const string &skillName, const string &skillVersion, const Models::ForcePublishSkillVersionRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Skips the regular review process and forcibly publishes a specified Skill version.
       *
       * @description ## Operation description
       * Skips the regular review process and forcibly publishes a specified Skill version.
       *
       * @param request ForcePublishSkillVersionRequest
       * @return ForcePublishSkillVersionResponse
       */
      Models::ForcePublishSkillVersionResponse forcePublishSkillVersion(const string &workspaceId, const string &skillName, const string &skillVersion, const Models::ForcePublishSkillVersionRequest &request);

      /**
       * @summary Queries the details of a specified agent IM channel.
       *
       * @description Queries the details of a specified agent IM channel.
       *
       * @param request GetAgentIMChannelRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAgentIMChannelResponse
       */
      Models::GetAgentIMChannelResponse getAgentIMChannelWithOptions(const string &workspaceId, const string &agentId, const string &imChannelId, const Models::GetAgentIMChannelRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a specified agent IM channel.
       *
       * @description Queries the details of a specified agent IM channel.
       *
       * @param request GetAgentIMChannelRequest
       * @return GetAgentIMChannelResponse
       */
      Models::GetAgentIMChannelResponse getAgentIMChannel(const string &workspaceId, const string &agentId, const string &imChannelId, const Models::GetAgentIMChannelRequest &request);

      /**
       * @summary Queries the governance details of a specified AgentSpec, including basic information, governance pointers, and summaries of all versions.
       *
       * @description ## Request description
       * Queries the governance details of a specified AgentSpec, including basic information, governance pointers, and summaries of all versions.
       *
       * @param request GetAgentSpecRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAgentSpecResponse
       */
      Models::GetAgentSpecResponse getAgentSpecWithOptions(const string &workspaceId, const string &agentSpecName, const Models::GetAgentSpecRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the governance details of a specified AgentSpec, including basic information, governance pointers, and summaries of all versions.
       *
       * @description ## Request description
       * Queries the governance details of a specified AgentSpec, including basic information, governance pointers, and summaries of all versions.
       *
       * @param request GetAgentSpecRequest
       * @return GetAgentSpecResponse
       */
      Models::GetAgentSpecResponse getAgentSpec(const string &workspaceId, const string &agentSpecName, const Models::GetAgentSpecRequest &request);

      /**
       * @summary Retrieves the OSS presigned upload URL and object name required to import an AgentSpec ZIP package. After the upload is complete, you can call the AgentSpec OSS upload API to complete the import.
       *
       * @description ## Request description
       * Retrieves the OSS presigned upload URL and object name required to import an AgentSpec ZIP package. After the upload is complete, you can call the AgentSpec OSS upload API to complete the import.
       *
       * @param request GetAgentSpecImportFileUrlRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAgentSpecImportFileUrlResponse
       */
      Models::GetAgentSpecImportFileUrlResponse getAgentSpecImportFileUrlWithOptions(const string &workspaceId, const Models::GetAgentSpecImportFileUrlRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the OSS presigned upload URL and object name required to import an AgentSpec ZIP package. After the upload is complete, you can call the AgentSpec OSS upload API to complete the import.
       *
       * @description ## Request description
       * Retrieves the OSS presigned upload URL and object name required to import an AgentSpec ZIP package. After the upload is complete, you can call the AgentSpec OSS upload API to complete the import.
       *
       * @param request GetAgentSpecImportFileUrlRequest
       * @return GetAgentSpecImportFileUrlResponse
       */
      Models::GetAgentSpecImportFileUrlResponse getAgentSpecImportFileUrl(const string &workspaceId, const Models::GetAgentSpecImportFileUrlRequest &request);

      /**
       * @summary Queries the full content of the latest version of a specified AgentSpec for editing or viewing.
       *
       * @description ## Operation description
       * Queries the full content of the latest version of a specified AgentSpec for editing or viewing.
       *
       * @param request GetAgentSpecLatestRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAgentSpecLatestResponse
       */
      Models::GetAgentSpecLatestResponse getAgentSpecLatestWithOptions(const string &workspaceId, const string &agentSpecName, const Models::GetAgentSpecLatestRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the full content of the latest version of a specified AgentSpec for editing or viewing.
       *
       * @description ## Operation description
       * Queries the full content of the latest version of a specified AgentSpec for editing or viewing.
       *
       * @param request GetAgentSpecLatestRequest
       * @return GetAgentSpecLatestResponse
       */
      Models::GetAgentSpecLatestResponse getAgentSpecLatest(const string &workspaceId, const string &agentSpecName, const Models::GetAgentSpecLatestRequest &request);

      /**
       * @summary Queries the complete content of a specified AgentSpec version, including the manifest content, resource files, and metadata.
       *
       * @description ## Request description
       * Queries the complete content of a specified AgentSpec version, including the manifest content, resource files, and metadata.
       *
       * @param request GetAgentSpecVersionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAgentSpecVersionResponse
       */
      Models::GetAgentSpecVersionResponse getAgentSpecVersionWithOptions(const string &workspaceId, const string &agentSpecName, const string &agentSpecVersion, const Models::GetAgentSpecVersionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the complete content of a specified AgentSpec version, including the manifest content, resource files, and metadata.
       *
       * @description ## Request description
       * Queries the complete content of a specified AgentSpec version, including the manifest content, resource files, and metadata.
       *
       * @param request GetAgentSpecVersionRequest
       * @return GetAgentSpecVersionResponse
       */
      Models::GetAgentSpecVersionResponse getAgentSpecVersion(const string &workspaceId, const string &agentSpecName, const string &agentSpecVersion, const Models::GetAgentSpecVersionRequest &request);

      /**
       * @summary Queries the details of a specified credential and returns the list of agents bound to the credential. The credential content is returned in a masked format.
       *
       * @description Queries the details of a single credential. Sensitive fields are not returned.
       *
       * @param request GetCredentialRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCredentialResponse
       */
      Models::GetCredentialResponse getCredentialWithOptions(const string &workspaceId, const string &credentialId, const Models::GetCredentialRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a specified credential and returns the list of agents bound to the credential. The credential content is returned in a masked format.
       *
       * @description Queries the details of a single credential. Sensitive fields are not returned.
       *
       * @param request GetCredentialRequest
       * @return GetCredentialResponse
       */
      Models::GetCredentialResponse getCredential(const string &workspaceId, const string &credentialId, const Models::GetCredentialRequest &request);

      /**
       * @summary Queries the details of a custom agent in a specified workspace, including deployment configurations, the execute status of the latest configuration version, and the running instance status statistics.
       *
       * @description After you create or update a custom agent, you can poll this operation to query the execution result of the latest configuration version. `latestVersionStatus` corresponds to `latestSpecVersion`. `latestExecutionError` indicates the cause of the pending or failed status for this version. If `retryable` is true, you can query again later.
       * The returned configuration is the most recently submitted configuration and may not have taken effect. Verify the deployment and running status by checking `latestVersionStatus`, the overall agent status `status`, and the running instance statistics `sandboxPhaseCounts`.
       * If the queried custom agent does not exist, has been deleted, or does not belong to the specified workspace, a resource not found error is returned.
       *
       * @param request GetCustomAgentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCustomAgentResponse
       */
      Models::GetCustomAgentResponse getCustomAgentWithOptions(const string &workspaceId, const string &agentId, const Models::GetCustomAgentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a custom agent in a specified workspace, including deployment configurations, the execute status of the latest configuration version, and the running instance status statistics.
       *
       * @description After you create or update a custom agent, you can poll this operation to query the execution result of the latest configuration version. `latestVersionStatus` corresponds to `latestSpecVersion`. `latestExecutionError` indicates the cause of the pending or failed status for this version. If `retryable` is true, you can query again later.
       * The returned configuration is the most recently submitted configuration and may not have taken effect. Verify the deployment and running status by checking `latestVersionStatus`, the overall agent status `status`, and the running instance statistics `sandboxPhaseCounts`.
       * If the queried custom agent does not exist, has been deleted, or does not belong to the specified workspace, a resource not found error is returned.
       *
       * @param request GetCustomAgentRequest
       * @return GetCustomAgentResponse
       */
      Models::GetCustomAgentResponse getCustomAgent(const string &workspaceId, const string &agentId, const Models::GetCustomAgentRequest &request);

      /**
       * @summary Queries the details of a specified external agent.
       *
       * @description Queries the details of a specified external agent.
       *
       * @param request GetExternalAgentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetExternalAgentResponse
       */
      Models::GetExternalAgentResponse getExternalAgentWithOptions(const string &workspaceId, const string &agentId, const Models::GetExternalAgentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a specified external agent.
       *
       * @description Queries the details of a specified external agent.
       *
       * @param request GetExternalAgentRequest
       * @return GetExternalAgentResponse
       */
      Models::GetExternalAgentResponse getExternalAgent(const string &workspaceId, const string &agentId, const Models::GetExternalAgentRequest &request);

      /**
       * @summary Queries the available access network types for a specified external agent.
       *
       * @description Queries the available access network types for a specified external agent.
       *
       * @param request GetExternalAgentBootstrapOptionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetExternalAgentBootstrapOptionsResponse
       */
      Models::GetExternalAgentBootstrapOptionsResponse getExternalAgentBootstrapOptionsWithOptions(const string &workspaceId, const string &agentId, const Models::GetExternalAgentBootstrapOptionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the available access network types for a specified external agent.
       *
       * @description Queries the available access network types for a specified external agent.
       *
       * @param request GetExternalAgentBootstrapOptionsRequest
       * @return GetExternalAgentBootstrapOptionsResponse
       */
      Models::GetExternalAgentBootstrapOptionsResponse getExternalAgentBootstrapOptions(const string &workspaceId, const string &agentId, const Models::GetExternalAgentBootstrapOptionsRequest &request);

      /**
       * @summary Queries the binding details of the external identity provider for a specified workspace, including the binding status, application configurations, and callback URLs to be configured on the identity provider side. Application secret configurations are not returned.
       *
       * @param request GetIdentityProviderRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetIdentityProviderResponse
       */
      Models::GetIdentityProviderResponse getIdentityProviderWithOptions(const string &workspaceId, const string &identityProviderType, const Models::GetIdentityProviderRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the binding details of the external identity provider for a specified workspace, including the binding status, application configurations, and callback URLs to be configured on the identity provider side. Application secret configurations are not returned.
       *
       * @param request GetIdentityProviderRequest
       * @return GetIdentityProviderResponse
       */
      Models::GetIdentityProviderResponse getIdentityProvider(const string &workspaceId, const string &identityProviderType, const Models::GetIdentityProviderRequest &request);

      /**
       * @summary Queries the details of an image cache.
       *
       * @description Queries the details of the logical image cache in the current workspace. Returns the complete source, current digest, actual size, creation time, status, and secure error messages. AgentCount counts configuration references with the switch enabled. CanDelete verifies both configuration references and instance usage. If the switch is disabled, the count is 0, but deletion is still prohibited if old instances are not released. If the resource does not belong to the current workspace, resources with the same content from other workspaces are not returned.
       *
       * @param request GetImageCacheRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetImageCacheResponse
       */
      Models::GetImageCacheResponse getImageCacheWithOptions(const string &imageId, const Models::GetImageCacheRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an image cache.
       *
       * @description Queries the details of the logical image cache in the current workspace. Returns the complete source, current digest, actual size, creation time, status, and secure error messages. AgentCount counts configuration references with the switch enabled. CanDelete verifies both configuration references and instance usage. If the switch is disabled, the count is 0, but deletion is still prohibited if old instances are not released. If the resource does not belong to the current workspace, resources with the same content from other workspaces are not returned.
       *
       * @param request GetImageCacheRequest
       * @return GetImageCacheResponse
       */
      Models::GetImageCacheResponse getImageCache(const string &imageId, const Models::GetImageCacheRequest &request);

      /**
       * @summary Queries the details of a specified managed agent.
       *
       * @param request GetManagedAgentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetManagedAgentResponse
       */
      Models::GetManagedAgentResponse getManagedAgentWithOptions(const string &workspaceId, const string &agentId, const Models::GetManagedAgentRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a specified managed agent.
       *
       * @param request GetManagedAgentRequest
       * @return GetManagedAgentResponse
       */
      Models::GetManagedAgentResponse getManagedAgent(const string &workspaceId, const string &agentId, const Models::GetManagedAgentRequest &request);

      /**
       * @summary Queries the details of a specified MCP server, including the address, type, status, authentication configuration, and protocol.
       *
       * @description ## Operation description
       * Queries the details of a specified MCP server, including the address, type, status, authentication configuration, and protocol.
       *
       * @param request GetMcpRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMcpResponse
       */
      Models::GetMcpResponse getMcpWithOptions(const string &workspaceId, const string &mcpServerId, const Models::GetMcpRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a specified MCP server, including the address, type, status, authentication configuration, and protocol.
       *
       * @description ## Operation description
       * Queries the details of a specified MCP server, including the address, type, status, authentication configuration, and protocol.
       *
       * @param request GetMcpRequest
       * @return GetMcpResponse
       */
      Models::GetMcpResponse getMcp(const string &workspaceId, const string &mcpServerId, const Models::GetMcpRequest &request);

      /**
       * @summary Queries the details of an MCP marketplace template.
       *
       * @description Returns the current template version and installation form schema.
       *
       * @param request GetMcpMarketItemRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMcpMarketItemResponse
       */
      Models::GetMcpMarketItemResponse getMcpMarketItemWithOptions(const string &workspaceId, const string &marketItemId, const Models::GetMcpMarketItemRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an MCP marketplace template.
       *
       * @description Returns the current template version and installation form schema.
       *
       * @param request GetMcpMarketItemRequest
       * @return GetMcpMarketItemResponse
       */
      Models::GetMcpMarketItemResponse getMcpMarketItem(const string &workspaceId, const string &marketItemId, const Models::GetMcpMarketItemRequest &request);

      /**
       * @summary Queries a long-term memory by memory ID.
       *
       * @description Queries a long-term memory by memory ID.
       *
       * @param request GetMemoryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMemoryResponse
       */
      Models::GetMemoryResponse getMemoryWithOptions(const string &workspaceId, const string &memoryStoreName, const string &memoryId, const Models::GetMemoryRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a long-term memory by memory ID.
       *
       * @description Queries a long-term memory by memory ID.
       *
       * @param request GetMemoryRequest
       * @return GetMemoryResponse
       */
      Models::GetMemoryResponse getMemory(const string &workspaceId, const string &memoryStoreName, const string &memoryId, const Models::GetMemoryRequest &request);

      /**
       * @summary Queries the public information and current status of a MemoryStore in a specified workspace.
       *
       * @description Queries the public information and current status of a MemoryStore in a specified workspace.
       *
       * @param request GetMemoryStoreRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMemoryStoreResponse
       */
      Models::GetMemoryStoreResponse getMemoryStoreWithOptions(const string &workspaceId, const string &memoryStoreName, const Models::GetMemoryStoreRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the public information and current status of a MemoryStore in a specified workspace.
       *
       * @description Queries the public information and current status of a MemoryStore in a specified workspace.
       *
       * @param request GetMemoryStoreRequest
       * @return GetMemoryStoreResponse
       */
      Models::GetMemoryStoreResponse getMemoryStore(const string &workspaceId, const string &memoryStoreName, const Models::GetMemoryStoreRequest &request);

      /**
       * @summary Queries the task ID returned by the asynchronous AddMemories operation.
       *
       * @description Queries the task ID returned by the asynchronous AddMemories operation.
       *
       * @param request GetMemoryTaskRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMemoryTaskResponse
       */
      Models::GetMemoryTaskResponse getMemoryTaskWithOptions(const string &workspaceId, const string &memoryStoreName, const string &taskId, const Models::GetMemoryTaskRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the task ID returned by the asynchronous AddMemories operation.
       *
       * @description Queries the task ID returned by the asynchronous AddMemories operation.
       *
       * @param request GetMemoryTaskRequest
       * @return GetMemoryTaskResponse
       */
      Models::GetMemoryTaskResponse getMemoryTask(const string &workspaceId, const string &memoryStoreName, const string &taskId, const Models::GetMemoryTaskRequest &request);

      /**
       * @summary Queries the detailed configuration and region of a model in a specified workspace.
       *
       * @param request GetModelRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetModelResponse
       */
      Models::GetModelResponse getModelWithOptions(const string &workspaceId, const string &modelId, const Models::GetModelRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the detailed configuration and region of a model in a specified workspace.
       *
       * @param request GetModelRequest
       * @return GetModelResponse
       */
      Models::GetModelResponse getModel(const string &workspaceId, const string &modelId, const Models::GetModelRequest &request);

      /**
       * @summary Queries the detailed configuration, credential configuration status, publish status, and region of a specified model connection.
       *
       * @param request GetModelConnectionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetModelConnectionResponse
       */
      Models::GetModelConnectionResponse getModelConnectionWithOptions(const string &workspaceId, const string &connectionId, const Models::GetModelConnectionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the detailed configuration, credential configuration status, publish status, and region of a specified model connection.
       *
       * @param request GetModelConnectionRequest
       * @return GetModelConnectionResponse
       */
      Models::GetModelConnectionResponse getModelConnection(const string &workspaceId, const string &connectionId, const Models::GetModelConnectionRequest &request);

      /**
       * @summary Queries the details of a specified service endpoint, including target routing, access URLs, authentication configuration, and current status.
       *
       * @description ## Operation description\\nQueries the details of a specified service endpoint. A service endpoint (ServiceEndpoint) provides a stable access URL for a specific agent version (AgentVersion) or workspace collaboration component. The response includes target routing, access URL list, authentication configuration, and current lifecycle status.\\n.
       *
       * @param request GetServiceEndpointRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetServiceEndpointResponse
       */
      Models::GetServiceEndpointResponse getServiceEndpointWithOptions(const string &workspaceId, const string &serviceEndpointId, const Models::GetServiceEndpointRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a specified service endpoint, including target routing, access URLs, authentication configuration, and current status.
       *
       * @description ## Operation description\\nQueries the details of a specified service endpoint. A service endpoint (ServiceEndpoint) provides a stable access URL for a specific agent version (AgentVersion) or workspace collaboration component. The response includes target routing, access URL list, authentication configuration, and current lifecycle status.\\n.
       *
       * @param request GetServiceEndpointRequest
       * @return GetServiceEndpointResponse
       */
      Models::GetServiceEndpointResponse getServiceEndpoint(const string &workspaceId, const string &serviceEndpointId, const Models::GetServiceEndpointRequest &request);

      /**
       * @summary Queries the currently active API key and its invocation method for a service endpoint in a specified workspace.
       *
       * @description Queries the currently active API key for a specified service endpoint. The call succeeds only when API key authentication is enabled for the service endpoint and the gateway consumer and credentials are ready. The service reads the API key from the gateway in real time, and AgentCore does not persist the plaintext. Keep the returned API key secure and avoid logging it or exposing it in public configurations.
       *
       * @param request GetServiceEndpointApiKeyRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetServiceEndpointApiKeyResponse
       */
      Models::GetServiceEndpointApiKeyResponse getServiceEndpointApiKeyWithOptions(const string &workspaceId, const string &serviceEndpointId, const Models::GetServiceEndpointApiKeyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the currently active API key and its invocation method for a service endpoint in a specified workspace.
       *
       * @description Queries the currently active API key for a specified service endpoint. The call succeeds only when API key authentication is enabled for the service endpoint and the gateway consumer and credentials are ready. The service reads the API key from the gateway in real time, and AgentCore does not persist the plaintext. Keep the returned API key secure and avoid logging it or exposing it in public configurations.
       *
       * @param request GetServiceEndpointApiKeyRequest
       * @return GetServiceEndpointApiKeyResponse
       */
      Models::GetServiceEndpointApiKeyResponse getServiceEndpointApiKey(const string &workspaceId, const string &serviceEndpointId, const Models::GetServiceEndpointApiKeyRequest &request);

      /**
       * @summary Queries the basic information, version status, labels, visibility scope, and version list of a specified Skill.
       *
       * @description ## Operation description
       * Queries the basic information, version status, labels, visibility scope, and version list of a specified Skill.
       *
       * @param request GetSkillDetailRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSkillDetailResponse
       */
      Models::GetSkillDetailResponse getSkillDetailWithOptions(const string &workspaceId, const string &skillName, const Models::GetSkillDetailRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the basic information, version status, labels, visibility scope, and version list of a specified Skill.
       *
       * @description ## Operation description
       * Queries the basic information, version status, labels, visibility scope, and version list of a specified Skill.
       *
       * @param request GetSkillDetailRequest
       * @return GetSkillDetailResponse
       */
      Models::GetSkillDetailResponse getSkillDetail(const string &workspaceId, const string &skillName, const Models::GetSkillDetailRequest &request);

      /**
       * @summary Retrieves the OSS presigned upload URL and object name required to import a Skill ZIP package. After the upload is complete, you can call the Skill OSS upload API to complete the import.
       *
       * @description ## Request description
       * Retrieves the OSS presigned upload URL and object name required to import a Skill ZIP package. After the upload is complete, you can call the Skill OSS upload API to complete the import.
       *
       * @param request GetSkillImportFileUrlRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSkillImportFileUrlResponse
       */
      Models::GetSkillImportFileUrlResponse getSkillImportFileUrlWithOptions(const string &workspaceId, const Models::GetSkillImportFileUrlRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the OSS presigned upload URL and object name required to import a Skill ZIP package. After the upload is complete, you can call the Skill OSS upload API to complete the import.
       *
       * @description ## Request description
       * Retrieves the OSS presigned upload URL and object name required to import a Skill ZIP package. After the upload is complete, you can call the Skill OSS upload API to complete the import.
       *
       * @param request GetSkillImportFileUrlRequest
       * @return GetSkillImportFileUrlResponse
       */
      Models::GetSkillImportFileUrlResponse getSkillImportFileUrl(const string &workspaceId, const Models::GetSkillImportFileUrlRequest &request);

      /**
       * @summary Queries the complete details of a specified Skill version, including version metadata, Skill content, and associated resources.
       *
       * @description ## Operation description
       * Queries the complete details of a specified Skill version, including version metadata, Skill content, and associated resources.
       *
       * @param request GetSkillVersionDetailRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSkillVersionDetailResponse
       */
      Models::GetSkillVersionDetailResponse getSkillVersionDetailWithOptions(const string &workspaceId, const string &skillName, const string &skillVersion, const Models::GetSkillVersionDetailRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the complete details of a specified Skill version, including version metadata, Skill content, and associated resources.
       *
       * @description ## Operation description
       * Queries the complete details of a specified Skill version, including version metadata, Skill content, and associated resources.
       *
       * @param request GetSkillVersionDetailRequest
       * @return GetSkillVersionDetailResponse
       */
      Models::GetSkillVersionDetailResponse getSkillVersionDetail(const string &workspaceId, const string &skillName, const string &skillVersion, const Models::GetSkillVersionDetailRequest &request);

      /**
       * @summary Queries the details of a specified team. The response includes the complete attributes and team roles of each user member and agent member in the team.
       *
       * @param request GetTeamRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTeamResponse
       */
      Models::GetTeamResponse getTeamWithOptions(const string &workspaceId, const string &teamId, const Models::GetTeamRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a specified team. The response includes the complete attributes and team roles of each user member and agent member in the team.
       *
       * @param request GetTeamRequest
       * @return GetTeamResponse
       */
      Models::GetTeamResponse getTeam(const string &workspaceId, const string &teamId, const Models::GetTeamRequest &request);

      /**
       * @summary Queries the details of a specific user in a specified workspace. Returns an error if the user does not exist.
       *
       * @param request GetUserRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUserResponse
       */
      Models::GetUserResponse getUserWithOptions(const string &workspaceId, const string &agentCoreUserId, const Models::GetUserRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a specific user in a specified workspace. Returns an error if the user does not exist.
       *
       * @param request GetUserRequest
       * @return GetUserResponse
       */
      Models::GetUserResponse getUser(const string &workspaceId, const string &agentCoreUserId, const Models::GetUserRequest &request);

      /**
       * @summary Queries the details of a workspace by workspace ID, including the lifecycle status, CMS Workspace, AIRegistry Namespace, and current network policies.
       *
       * @description ## Request description\\nQueries the details of a workspace by workspace ID, including the lifecycle status, CMS Workspace, AIRegistry Namespace, and current network policies.\\n.
       *
       * @param request GetWorkspaceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetWorkspaceResponse
       */
      Models::GetWorkspaceResponse getWorkspaceWithOptions(const string &workspaceId, const Models::GetWorkspaceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a workspace by workspace ID, including the lifecycle status, CMS Workspace, AIRegistry Namespace, and current network policies.
       *
       * @description ## Request description\\nQueries the details of a workspace by workspace ID, including the lifecycle status, CMS Workspace, AIRegistry Namespace, and current network policies.\\n.
       *
       * @param request GetWorkspaceRequest
       * @return GetWorkspaceResponse
       */
      Models::GetWorkspaceResponse getWorkspace(const string &workspaceId, const Models::GetWorkspaceRequest &request);

      /**
       * @summary Queries the ACR RAM authorization URL of a workspace.
       *
       * @description ACR and user OSS mounts share the workspace role. If no existing role is found, AliyunAgentCoreWorkspace-{workspaceId} is used. If a valid legacy OSS mount role exists, it is reused and permissions are appended without overwriting existing OSS policies. Fixed historical shared roles continue to be reused and are not recreated or renamed due to new naming templates. The acrInstanceId, namespace, and repository parameters are required. The region and account are derived from the workspace context. Returns the role resolved by the backend and the authorization URL for the target repository. This operation does not create ACR or agent execution versions, nor does it deliver runtime configurations. After authorization is complete, you can call Verify before creating or updating an agent, without the need to call an independent Ensure operation.
       *
       * @param request GetWorkspaceAcrRamAuthorizeUrlRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetWorkspaceAcrRamAuthorizeUrlResponse
       */
      Models::GetWorkspaceAcrRamAuthorizeUrlResponse getWorkspaceAcrRamAuthorizeUrlWithOptions(const string &workspaceId, const Models::GetWorkspaceAcrRamAuthorizeUrlRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the ACR RAM authorization URL of a workspace.
       *
       * @description ACR and user OSS mounts share the workspace role. If no existing role is found, AliyunAgentCoreWorkspace-{workspaceId} is used. If a valid legacy OSS mount role exists, it is reused and permissions are appended without overwriting existing OSS policies. Fixed historical shared roles continue to be reused and are not recreated or renamed due to new naming templates. The acrInstanceId, namespace, and repository parameters are required. The region and account are derived from the workspace context. Returns the role resolved by the backend and the authorization URL for the target repository. This operation does not create ACR or agent execution versions, nor does it deliver runtime configurations. After authorization is complete, you can call Verify before creating or updating an agent, without the need to call an independent Ensure operation.
       *
       * @param request GetWorkspaceAcrRamAuthorizeUrlRequest
       * @return GetWorkspaceAcrRamAuthorizeUrlResponse
       */
      Models::GetWorkspaceAcrRamAuthorizeUrlResponse getWorkspaceAcrRamAuthorizeUrl(const string &workspaceId, const Models::GetWorkspaceAcrRamAuthorizeUrlRequest &request);

      /**
       * @summary Queries the RAM authorization URL for mounting AgenticFS in a workspace.
       *
       * @description Determines the account, region, and shared role based on the workspace, and concatenates the resource ARN based on the provided fileSystemId and accessPointId. The server parameter is used to generate the policy name. This operation does not query NAS or check the resource status, and returns an authorization URL that contains only the target NAS policy. After completing RAM authorization, you must call the verification API.
       *
       * @param request GetWorkspaceAgenticFsMountRamAuthorizeUrlRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetWorkspaceAgenticFsMountRamAuthorizeUrlResponse
       */
      Models::GetWorkspaceAgenticFsMountRamAuthorizeUrlResponse getWorkspaceAgenticFsMountRamAuthorizeUrlWithOptions(const string &workspaceId, const Models::GetWorkspaceAgenticFsMountRamAuthorizeUrlRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the RAM authorization URL for mounting AgenticFS in a workspace.
       *
       * @description Determines the account, region, and shared role based on the workspace, and concatenates the resource ARN based on the provided fileSystemId and accessPointId. The server parameter is used to generate the policy name. This operation does not query NAS or check the resource status, and returns an authorization URL that contains only the target NAS policy. After completing RAM authorization, you must call the verification API.
       *
       * @param request GetWorkspaceAgenticFsMountRamAuthorizeUrlRequest
       * @return GetWorkspaceAgenticFsMountRamAuthorizeUrlResponse
       */
      Models::GetWorkspaceAgenticFsMountRamAuthorizeUrlResponse getWorkspaceAgenticFsMountRamAuthorizeUrl(const string &workspaceId, const Models::GetWorkspaceAgenticFsMountRamAuthorizeUrlRequest &request);

      /**
       * @summary Queries the plug-in status of a specified workspace.
       *
       * @description ## Operation description\\nQueries the plug-in status of a specified workspace. Returns whether the plug-in is enabled, its lifecycle status, and the currently effective configuration. Currently, two types of plug-ins are supported: collaboration and agentloop. If a plug-in is not installed, its status is DISABLED.\\n.
       *
       * @param request GetWorkspacePluginRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetWorkspacePluginResponse
       */
      Models::GetWorkspacePluginResponse getWorkspacePluginWithOptions(const string &workspaceId, const string &pluginName, const Models::GetWorkspacePluginRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the plug-in status of a specified workspace.
       *
       * @description ## Operation description\\nQueries the plug-in status of a specified workspace. Returns whether the plug-in is enabled, its lifecycle status, and the currently effective configuration. Currently, two types of plug-ins are supported: collaboration and agentloop. If a plug-in is not installed, its status is DISABLED.\\n.
       *
       * @param request GetWorkspacePluginRequest
       * @return GetWorkspacePluginResponse
       */
      Models::GetWorkspacePluginResponse getWorkspacePlugin(const string &workspaceId, const string &pluginName, const Models::GetWorkspacePluginRequest &request);

      /**
       * @summary Installs an MCP marketplace template.
       *
       * @description Validates the input based on the specified template version and creates an MCP in the workspace.
       *
       * @param tmpReq InstallMcpMarketItemRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return InstallMcpMarketItemResponse
       */
      Models::InstallMcpMarketItemResponse installMcpMarketItemWithOptions(const string &workspaceId, const string &marketItemId, const Models::InstallMcpMarketItemRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Installs an MCP marketplace template.
       *
       * @description Validates the input based on the specified template version and creates an MCP in the workspace.
       *
       * @param request InstallMcpMarketItemRequest
       * @return InstallMcpMarketItemResponse
       */
      Models::InstallMcpMarketItemResponse installMcpMarketItem(const string &workspaceId, const string &marketItemId, const Models::InstallMcpMarketItemRequest &request);

      /**
       * @summary Installs a plugin for a specified AgentCore workspace. Currently, only the collaboration plugin is supported. The installation process runs asynchronously.
       *
       * @description ## Request description\\nInstalls a plugin for a specified AgentCore workspace. Currently, only the `collaboration` plugin is supported. Plugin configurations are passed through the `Config` parameter, and different plugins can define their own configuration structures. The `collaboration` plugin uses `Config.NetworkConfiguration` to specify the VPC and public network access policy. The installation procedure executes asynchronously. If you repeatedly invoke this operation for a plugin with the same name that is being installed or already installed, the operation returns the current status based on idempotent semantics if the configurations are identical. If the configurations are different, the operation returns an operation conflict.\\n
       *
       * @param tmpReq InstallWorkspacePluginRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return InstallWorkspacePluginResponse
       */
      Models::InstallWorkspacePluginResponse installWorkspacePluginWithOptions(const string &workspaceId, const string &pluginName, const Models::InstallWorkspacePluginRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Installs a plugin for a specified AgentCore workspace. Currently, only the collaboration plugin is supported. The installation process runs asynchronously.
       *
       * @description ## Request description\\nInstalls a plugin for a specified AgentCore workspace. Currently, only the `collaboration` plugin is supported. Plugin configurations are passed through the `Config` parameter, and different plugins can define their own configuration structures. The `collaboration` plugin uses `Config.NetworkConfiguration` to specify the VPC and public network access policy. The installation procedure executes asynchronously. If you repeatedly invoke this operation for a plugin with the same name that is being installed or already installed, the operation returns the current status based on idempotent semantics if the configurations are identical. If the configurations are different, the operation returns an operation conflict.\\n
       *
       * @param request InstallWorkspacePluginRequest
       * @return InstallWorkspacePluginResponse
       */
      Models::InstallWorkspacePluginResponse installWorkspacePlugin(const string &workspaceId, const string &pluginName, const Models::InstallWorkspacePluginRequest &request);

      /**
       * @summary Queries the list of IM channels for a specified agent.
       *
       * @description Queries the list of IM channels for a specified agent.
       *
       * @param request ListAgentIMChannelsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAgentIMChannelsResponse
       */
      Models::ListAgentIMChannelsResponse listAgentIMChannelsWithOptions(const string &workspaceId, const string &agentId, const Models::ListAgentIMChannelsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of IM channels for a specified agent.
       *
       * @description Queries the list of IM channels for a specified agent.
       *
       * @param request ListAgentIMChannelsRequest
       * @return ListAgentIMChannelsResponse
       */
      Models::ListAgentIMChannelsResponse listAgentIMChannels(const string &workspaceId, const string &agentId, const Models::ListAgentIMChannelsRequest &request);

      /**
       * @summary Queries AgentSpec resources in a specified workspace by using paging, and supports name-based search, sorting, and filtering by owner, visibility scope, and business labels.
       *
       * @description ## Operation description
       * Queries AgentSpec resources in a specified workspace by using paging, and supports name-based search, sorting, and filtering by owner, visibility scope, and business labels.
       *
       * @param request ListAgentSpecsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAgentSpecsResponse
       */
      Models::ListAgentSpecsResponse listAgentSpecsWithOptions(const string &workspaceId, const Models::ListAgentSpecsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries AgentSpec resources in a specified workspace by using paging, and supports name-based search, sorting, and filtering by owner, visibility scope, and business labels.
       *
       * @description ## Operation description
       * Queries AgentSpec resources in a specified workspace by using paging, and supports name-based search, sorting, and filtering by owner, visibility scope, and business labels.
       *
       * @param request ListAgentSpecsRequest
       * @return ListAgentSpecsResponse
       */
      Models::ListAgentSpecsResponse listAgentSpecs(const string &workspaceId, const Models::ListAgentSpecsRequest &request);

      /**
       * @summary Queries the teams to which specified agents belong. Specify the agent IDs by using agentIds to retrieve the membership information of each agent in the teams, including the team ID, team name, and the role of the agent in the team.
       *
       * @param tmpReq ListAgentTeamsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAgentTeamsResponse
       */
      Models::ListAgentTeamsResponse listAgentTeamsWithOptions(const string &workspaceId, const Models::ListAgentTeamsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the teams to which specified agents belong. Specify the agent IDs by using agentIds to retrieve the membership information of each agent in the teams, including the team ID, team name, and the role of the agent in the team.
       *
       * @param request ListAgentTeamsRequest
       * @return ListAgentTeamsResponse
       */
      Models::ListAgentTeamsResponse listAgentTeams(const string &workspaceId, const Models::ListAgentTeamsRequest &request);

      /**
       * @summary Queries the available official models and enterprise models for an enabled QoderCLI Connector. The service retrieves models in real time by using the saved API key and organization ID, and deduplicates the results by model ID.
       *
       * @description Queries the list of available models for a specified Connector. Pagination is supported.
       *
       * @param request ListConnectorModelsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListConnectorModelsResponse
       */
      Models::ListConnectorModelsResponse listConnectorModelsWithOptions(const string &workspaceId, const string &connectorName, const Models::ListConnectorModelsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the available official models and enterprise models for an enabled QoderCLI Connector. The service retrieves models in real time by using the saved API key and organization ID, and deduplicates the results by model ID.
       *
       * @description Queries the list of available models for a specified Connector. Pagination is supported.
       *
       * @param request ListConnectorModelsRequest
       * @return ListConnectorModelsResponse
       */
      Models::ListConnectorModelsResponse listConnectorModels(const string &workspaceId, const string &connectorName, const Models::ListConnectorModelsRequest &request);

      /**
       * @summary Queries the list of connectors supported by a specified workspace, including their status, number of bound agents, and configurations. The current version returns the QoderCLI connector.
       *
       * @description Queries the list of connectors in a specified workspace.
       *
       * @param request ListConnectorsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListConnectorsResponse
       */
      Models::ListConnectorsResponse listConnectorsWithOptions(const string &workspaceId, const Models::ListConnectorsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of connectors supported by a specified workspace, including their status, number of bound agents, and configurations. The current version returns the QoderCLI connector.
       *
       * @description Queries the list of connectors in a specified workspace.
       *
       * @param request ListConnectorsRequest
       * @return ListConnectorsResponse
       */
      Models::ListConnectorsResponse listConnectors(const string &workspaceId, const Models::ListConnectorsRequest &request);

      /**
       * @summary Performs a paged query for credentials in a specified workspace. Filters by type using credentialType, performs fuzzy filtering by credential name using nameLike, configures paging by specifying the maximum number of records per page using maxResults, and retrieves the next page using nextToken. If maxResults is not specified, the server returns 10 records by default.
       *
       * @description Performs a paged query for the credential list in a workspace, and supports filtering by type and name during paging.
       *
       * @param request ListCredentialsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCredentialsResponse
       */
      Models::ListCredentialsResponse listCredentialsWithOptions(const string &workspaceId, const Models::ListCredentialsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs a paged query for credentials in a specified workspace. Filters by type using credentialType, performs fuzzy filtering by credential name using nameLike, configures paging by specifying the maximum number of records per page using maxResults, and retrieves the next page using nextToken. If maxResults is not specified, the server returns 10 records by default.
       *
       * @description Performs a paged query for the credential list in a workspace, and supports filtering by type and name during paging.
       *
       * @param request ListCredentialsRequest
       * @return ListCredentialsResponse
       */
      Models::ListCredentialsResponse listCredentials(const string &workspaceId, const Models::ListCredentialsRequest &request);

      /**
       * @summary Queries the summaries of custom agents in a specified workspace by using paging. For the complete configuration and the execution results of the latest version, call GetCustomAgent.
       *
       * @description The default value of maxResults is 20, and the maximum value is 100. If this parameter is omitted or set to 0, the default value is used.
       * Omit nextToken in the first request. In subsequent requests, pass the nextToken value returned in the previous response as is, and keep the same workspace. The nextToken is an opaque token. Do not parse or construct it. If the token in the response is empty, it indicates that no more pages are available.
       * This operation returns the summaries of the current page and does not return the complete deployment configuration or the execution errors of the latest version. To obtain this information, call GetCustomAgent by using the agentId in items.
       *
       * @param request ListCustomAgentsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCustomAgentsResponse
       */
      Models::ListCustomAgentsResponse listCustomAgentsWithOptions(const string &workspaceId, const Models::ListCustomAgentsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the summaries of custom agents in a specified workspace by using paging. For the complete configuration and the execution results of the latest version, call GetCustomAgent.
       *
       * @description The default value of maxResults is 20, and the maximum value is 100. If this parameter is omitted or set to 0, the default value is used.
       * Omit nextToken in the first request. In subsequent requests, pass the nextToken value returned in the previous response as is, and keep the same workspace. The nextToken is an opaque token. Do not parse or construct it. If the token in the response is empty, it indicates that no more pages are available.
       * This operation returns the summaries of the current page and does not return the complete deployment configuration or the execution errors of the latest version. To obtain this information, call GetCustomAgent by using the agentId in items.
       *
       * @param request ListCustomAgentsRequest
       * @return ListCustomAgentsResponse
       */
      Models::ListCustomAgentsResponse listCustomAgents(const string &workspaceId, const Models::ListCustomAgentsRequest &request);

      /**
       * @summary Queries the list of external agents in a specified workspace.
       *
       * @description Queries the list of external agents in a specified workspace.
       *
       * @param request ListExternalAgentsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListExternalAgentsResponse
       */
      Models::ListExternalAgentsResponse listExternalAgentsWithOptions(const string &workspaceId, const Models::ListExternalAgentsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of external agents in a specified workspace.
       *
       * @description Queries the list of external agents in a specified workspace.
       *
       * @param request ListExternalAgentsRequest
       * @return ListExternalAgentsResponse
       */
      Models::ListExternalAgentsResponse listExternalAgents(const string &workspaceId, const Models::ListExternalAgentsRequest &request);

      /**
       * @summary Queries the external identity providers bound to a specified workspace. Each workspace can be bound to at most one external identity provider, so the response returns at most one record. Application secret configurations are not returned.
       *
       * @param request ListIdentityProvidersRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListIdentityProvidersResponse
       */
      Models::ListIdentityProvidersResponse listIdentityProvidersWithOptions(const string &workspaceId, const Models::ListIdentityProvidersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the external identity providers bound to a specified workspace. Each workspace can be bound to at most one external identity provider, so the response returns at most one record. Application secret configurations are not returned.
       *
       * @param request ListIdentityProvidersRequest
       * @return ListIdentityProvidersResponse
       */
      Models::ListIdentityProvidersResponse listIdentityProviders(const string &workspaceId, const Models::ListIdentityProvidersRequest &request);

      /**
       * @summary Queries image caches.
       *
       * @description Queries the logical image caches within the current account, region, and workspace. WorkspaceId is required, and caches are not visible across workspaces. All conditions filter the full set using the AND operator before pagination is calculated. Results are sorted in descending order of logical resource creation time and ascending order of ImageId. The cursor is bound to the account, region, workspace, all filters, and the sort order. Returns the complete cache objects, the AgentCount based on the configuration switch, and the actual deletion eligibility. Query failures do not return a disguised empty list, and the nextToken on the last page is an empty string.
       *
       * @param request ListImageCachesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListImageCachesResponse
       */
      Models::ListImageCachesResponse listImageCachesWithOptions(const Models::ListImageCachesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries image caches.
       *
       * @description Queries the logical image caches within the current account, region, and workspace. WorkspaceId is required, and caches are not visible across workspaces. All conditions filter the full set using the AND operator before pagination is calculated. Results are sorted in descending order of logical resource creation time and ascending order of ImageId. The cursor is bound to the account, region, workspace, all filters, and the sort order. Returns the complete cache objects, the AgentCount based on the configuration switch, and the actual deletion eligibility. Query failures do not return a disguised empty list, and the nextToken on the last page is an empty string.
       *
       * @param request ListImageCachesRequest
       * @return ListImageCachesResponse
       */
      Models::ListImageCachesResponse listImageCaches(const Models::ListImageCachesRequest &request);

      /**
       * @summary Queries the list of managed agents in a specified workspace.
       *
       * @description Queries the list of managed agents in a specified workspace by using paging. Returns summary information for each agent, including the identity, name, status, template, and specifications.
       *
       * @param request ListManagedAgentsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListManagedAgentsResponse
       */
      Models::ListManagedAgentsResponse listManagedAgentsWithOptions(const string &workspaceId, const Models::ListManagedAgentsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of managed agents in a specified workspace.
       *
       * @description Queries the list of managed agents in a specified workspace by using paging. Returns summary information for each agent, including the identity, name, status, template, and specifications.
       *
       * @param request ListManagedAgentsRequest
       * @return ListManagedAgentsResponse
       */
      Models::ListManagedAgentsResponse listManagedAgents(const string &workspaceId, const Models::ListManagedAgentsRequest &request);

      /**
       * @summary Queries MCP marketplace templates.
       *
       * @description Queries all online official MCP templates. You can filter results by keyword, usage tag, and MCP type.
       *
       * @param request ListMcpMarketItemsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMcpMarketItemsResponse
       */
      Models::ListMcpMarketItemsResponse listMcpMarketItemsWithOptions(const string &workspaceId, const Models::ListMcpMarketItemsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries MCP marketplace templates.
       *
       * @description Queries all online official MCP templates. You can filter results by keyword, usage tag, and MCP type.
       *
       * @param request ListMcpMarketItemsRequest
       * @return ListMcpMarketItemsResponse
       */
      Models::ListMcpMarketItemsResponse listMcpMarketItems(const string &workspaceId, const Models::ListMcpMarketItemsRequest &request);

      /**
       * @summary Queries the list of tools exposed by a specified MCP service and their input/output schemas.
       *
       * @description ## Operation description
       * Queries the list of tools exposed by a specified MCP service and their input/output schemas.
       *
       * @param request ListMcpToolsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMcpToolsResponse
       */
      Models::ListMcpToolsResponse listMcpToolsWithOptions(const string &workspaceId, const string &mcpServerId, const Models::ListMcpToolsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of tools exposed by a specified MCP service and their input/output schemas.
       *
       * @description ## Operation description
       * Queries the list of tools exposed by a specified MCP service and their input/output schemas.
       *
       * @param request ListMcpToolsRequest
       * @return ListMcpToolsResponse
       */
      Models::ListMcpToolsResponse listMcpTools(const string &workspaceId, const string &mcpServerId, const Models::ListMcpToolsRequest &request);

      /**
       * @summary Queries MCP services and their configurations and statuses in a specified workspace by using paging.
       *
       * @description ## Operation description
       * Queries MCP services and their configurations and statuses in a specified workspace by using paging.
       *
       * @param request ListMcpsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMcpsResponse
       */
      Models::ListMcpsResponse listMcpsWithOptions(const string &workspaceId, const Models::ListMcpsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries MCP services and their configurations and statuses in a specified workspace by using paging.
       *
       * @description ## Operation description
       * Queries MCP services and their configurations and statuses in a specified workspace by using paging.
       *
       * @param request ListMcpsRequest
       * @return ListMcpsResponse
       */
      Models::ListMcpsResponse listMcps(const string &workspaceId, const Models::ListMcpsRequest &request);

      /**
       * @summary Performs a paged query on long-term memory. Paging is supported, and you can filter the results independently by user ID, agent ID, and session ID.
       *
       * @description Performs a paged query on long-term memory. Paging is supported, and you can filter the results independently by user ID, agent ID, and session ID.
       *
       * @param request ListMemoriesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMemoriesResponse
       */
      Models::ListMemoriesResponse listMemoriesWithOptions(const string &workspaceId, const string &memoryStoreName, const Models::ListMemoriesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs a paged query on long-term memory. Paging is supported, and you can filter the results independently by user ID, agent ID, and session ID.
       *
       * @description Performs a paged query on long-term memory. Paging is supported, and you can filter the results independently by user ID, agent ID, and session ID.
       *
       * @param request ListMemoriesRequest
       * @return ListMemoriesResponse
       */
      Models::ListMemoriesResponse listMemories(const string &workspaceId, const string &memoryStoreName, const Models::ListMemoriesRequest &request);

      /**
       * @summary Performs a paged query for raw messages by exact scope with paging. SessionId is required, and at least one of UserId and AgentId must be provided.
       *
       * @description Performs a paged query for raw messages by exact scope with paging. SessionId is required, and at least one of UserId and AgentId must be provided.
       *
       * @param request ListMemorySessionMessagesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMemorySessionMessagesResponse
       */
      Models::ListMemorySessionMessagesResponse listMemorySessionMessagesWithOptions(const string &workspaceId, const string &memoryStoreName, const Models::ListMemorySessionMessagesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs a paged query for raw messages by exact scope with paging. SessionId is required, and at least one of UserId and AgentId must be provided.
       *
       * @description Performs a paged query for raw messages by exact scope with paging. SessionId is required, and at least one of UserId and AgentId must be provided.
       *
       * @param request ListMemorySessionMessagesRequest
       * @return ListMemorySessionMessagesResponse
       */
      Models::ListMemorySessionMessagesResponse listMemorySessionMessages(const string &workspaceId, const string &memoryStoreName, const Models::ListMemorySessionMessagesRequest &request);

      /**
       * @summary Performs a paging query for sessions in a MemoryStore, and allows independent filtering by user ID and agent ID.
       *
       * @description Performs a paging query for sessions in a MemoryStore, and allows independent filtering by user ID and agent ID.
       *
       * @param request ListMemorySessionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMemorySessionsResponse
       */
      Models::ListMemorySessionsResponse listMemorySessionsWithOptions(const string &workspaceId, const string &memoryStoreName, const Models::ListMemorySessionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs a paging query for sessions in a MemoryStore, and allows independent filtering by user ID and agent ID.
       *
       * @description Performs a paging query for sessions in a MemoryStore, and allows independent filtering by user ID and agent ID.
       *
       * @param request ListMemorySessionsRequest
       * @return ListMemorySessionsResponse
       */
      Models::ListMemorySessionsResponse listMemorySessions(const string &workspaceId, const string &memoryStoreName, const Models::ListMemorySessionsRequest &request);

      /**
       * @summary Queries MemoryStores in a specified workspace by using paging.
       *
       * @description Queries MemoryStores in a specified workspace by using paging.
       *
       * @param request ListMemoryStoresRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMemoryStoresResponse
       */
      Models::ListMemoryStoresResponse listMemoryStoresWithOptions(const string &workspaceId, const Models::ListMemoryStoresRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries MemoryStores in a specified workspace by using paging.
       *
       * @description Queries MemoryStores in a specified workspace by using paging.
       *
       * @param request ListMemoryStoresRequest
       * @return ListMemoryStoresResponse
       */
      Models::ListMemoryStoresResponse listMemoryStores(const string &workspaceId, const Models::ListMemoryStoresRequest &request);

      /**
       * @summary Queries model connections in a specified workspace with paging. Supports filtering by name, provider type, and invoke protocol.
       *
       * @description Queries model connections in a specified AgentCore workspace. Supports filtering by name through `Name` and selecting exact match or fuzzy match through `SearchType`. Also supports filtering by model provider type and invoke protocol, and supports paging.
       *
       * @param request ListModelConnectionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListModelConnectionsResponse
       */
      Models::ListModelConnectionsResponse listModelConnectionsWithOptions(const string &workspaceId, const Models::ListModelConnectionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries model connections in a specified workspace with paging. Supports filtering by name, provider type, and invoke protocol.
       *
       * @description Queries model connections in a specified AgentCore workspace. Supports filtering by name through `Name` and selecting exact match or fuzzy match through `SearchType`. Also supports filtering by model provider type and invoke protocol, and supports paging.
       *
       * @param request ListModelConnectionsRequest
       * @return ListModelConnectionsResponse
       */
      Models::ListModelConnectionsResponse listModelConnections(const string &workspaceId, const Models::ListModelConnectionsRequest &request);

      /**
       * @summary Queries models in a specified workspace by using paging. Supports filtering by model connection and model name.
       *
       * @param request ListModelsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListModelsResponse
       */
      Models::ListModelsResponse listModelsWithOptions(const string &workspaceId, const Models::ListModelsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries models in a specified workspace by using paging. Supports filtering by model connection and model name.
       *
       * @param request ListModelsRequest
       * @return ListModelsResponse
       */
      Models::ListModelsResponse listModels(const string &workspaceId, const Models::ListModelsRequest &request);

      /**
       * @summary Queries the providers supported by the built-in model catalog of AgentCore and their default service configurations.
       *
       * @param request ListPredefinedModelProvidersRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPredefinedModelProvidersResponse
       */
      Models::ListPredefinedModelProvidersResponse listPredefinedModelProvidersWithOptions(const Models::ListPredefinedModelProvidersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the providers supported by the built-in model catalog of AgentCore and their default service configurations.
       *
       * @param request ListPredefinedModelProvidersRequest
       * @return ListPredefinedModelProvidersResponse
       */
      Models::ListPredefinedModelProvidersResponse listPredefinedModelProviders(const Models::ListPredefinedModelProvidersRequest &request);

      /**
       * @summary Queries the models and their capabilities in the built-in model catalog of AgentCore for a specified provider.
       *
       * @param request ListPredefinedModelsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPredefinedModelsResponse
       */
      Models::ListPredefinedModelsResponse listPredefinedModelsWithOptions(const string &providerType, const Models::ListPredefinedModelsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the models and their capabilities in the built-in model catalog of AgentCore for a specified provider.
       *
       * @param request ListPredefinedModelsRequest
       * @return ListPredefinedModelsResponse
       */
      Models::ListPredefinedModelsResponse listPredefinedModels(const string &providerType, const Models::ListPredefinedModelsRequest &request);

      /**
       * @summary Queries the list of active sessions in the sandbox of a specified managed agent by paging, and returns the session source and external channel type.
       *
       * @description Queries the list of active sessions in the sandbox of a specified managed agent.
       *
       * @param request ListSandboxSessionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSandboxSessionsResponse
       */
      Models::ListSandboxSessionsResponse listSandboxSessionsWithOptions(const string &workspaceId, const string &agentId, const string &sandboxId, const Models::ListSandboxSessionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of active sessions in the sandbox of a specified managed agent by paging, and returns the session source and external channel type.
       *
       * @description Queries the list of active sessions in the sandbox of a specified managed agent.
       *
       * @param request ListSandboxSessionsRequest
       * @return ListSandboxSessionsResponse
       */
      Models::ListSandboxSessionsResponse listSandboxSessions(const string &workspaceId, const string &agentId, const string &sandboxId, const Models::ListSandboxSessionsRequest &request);

      /**
       * @summary Queries the list of sandboxes for a managed agent in a specified workspace. You can filter results by sandbox ID and active session ID fragments.
       *
       * @description Queries the list of sandboxes for a specified managed agent. The searchText parameter performs a fuzzy match on sandbox ID fragments, and the sessionId parameter performs a fuzzy match on active session ID fragments. Both parameters are case-insensitive and can be used together with AND logic.
       *
       * @param request ListSandboxesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSandboxesResponse
       */
      Models::ListSandboxesResponse listSandboxesWithOptions(const string &workspaceId, const string &agentId, const Models::ListSandboxesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of sandboxes for a managed agent in a specified workspace. You can filter results by sandbox ID and active session ID fragments.
       *
       * @description Queries the list of sandboxes for a specified managed agent. The searchText parameter performs a fuzzy match on sandbox ID fragments, and the sessionId parameter performs a fuzzy match on active session ID fragments. Both parameters are case-insensitive and can be used together with AND logic.
       *
       * @param request ListSandboxesRequest
       * @return ListSandboxesResponse
       */
      Models::ListSandboxesResponse listSandboxes(const string &workspaceId, const string &agentId, const Models::ListSandboxesRequest &request);

      /**
       * @summary Queries service endpoints in a specified workspace with paging and supports filtering by target type, agent, collaboration component, and status.
       *
       * @description ## Request description\\nQueries service endpoints in a specified workspace with paging. You can filter the results by targetType, agentId, agentVersion, resourceBindingId, collaborationComponent, and status. Use maxResults to specify the maximum number of records per page, and use nextToken to retrieve the next page. If maxResults is not specified, the server returns 20 records by default.\\n
       *
       * @param request ListServiceEndpointsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListServiceEndpointsResponse
       */
      Models::ListServiceEndpointsResponse listServiceEndpointsWithOptions(const string &workspaceId, const Models::ListServiceEndpointsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries service endpoints in a specified workspace with paging and supports filtering by target type, agent, collaboration component, and status.
       *
       * @description ## Request description\\nQueries service endpoints in a specified workspace with paging. You can filter the results by targetType, agentId, agentVersion, resourceBindingId, collaborationComponent, and status. Use maxResults to specify the maximum number of records per page, and use nextToken to retrieve the next page. If maxResults is not specified, the server returns 20 records by default.\\n
       *
       * @param request ListServiceEndpointsRequest
       * @return ListServiceEndpointsResponse
       */
      Models::ListServiceEndpointsResponse listServiceEndpoints(const string &workspaceId, const Models::ListServiceEndpointsRequest &request);

      /**
       * @summary Queries skill reference relationships.
       *
       * @param request ListSkillReferencesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSkillReferencesResponse
       */
      Models::ListSkillReferencesResponse listSkillReferencesWithOptions(const string &workspaceId, const string &skillName, const Models::ListSkillReferencesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries skill reference relationships.
       *
       * @param request ListSkillReferencesRequest
       * @return ListSkillReferencesResponse
       */
      Models::ListSkillReferencesResponse listSkillReferences(const string &workspaceId, const string &skillName, const Models::ListSkillReferencesRequest &request);

      /**
       * @summary Performs a paged query of Skills in a specified workspace and returns basic Skill information, version status, and paging information.
       *
       * @description ## Operation description
       * Performs a paged query of Skills in a specified workspace and returns basic Skill information, version status, and paging information.
       *
       * @param request ListSkillsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSkillsResponse
       */
      Models::ListSkillsResponse listSkillsWithOptions(const string &workspaceId, const Models::ListSkillsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs a paged query of Skills in a specified workspace and returns basic Skill information, version status, and paging information.
       *
       * @description ## Operation description
       * Performs a paged query of Skills in a specified workspace and returns basic Skill information, version status, and paging information.
       *
       * @param request ListSkillsRequest
       * @return ListSkillsResponse
       */
      Models::ListSkillsResponse listSkills(const string &workspaceId, const Models::ListSkillsRequest &request);

      /**
       * @summary Queries teams in a specified workspace by using paging. You can use nameLike to filter teams by fuzzy matching the team name, maxResults to specify the maximum number of records per page, and nextToken to retrieve the next page. If maxResults is not specified, the server returns 10 records by default. The member information in the list includes only the member identifier, name, and team role.
       *
       * @param request ListTeamsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTeamsResponse
       */
      Models::ListTeamsResponse listTeamsWithOptions(const string &workspaceId, const Models::ListTeamsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries teams in a specified workspace by using paging. You can use nameLike to filter teams by fuzzy matching the team name, maxResults to specify the maximum number of records per page, and nextToken to retrieve the next page. If maxResults is not specified, the server returns 10 records by default. The member information in the list includes only the member identifier, name, and team role.
       *
       * @param request ListTeamsRequest
       * @return ListTeamsResponse
       */
      Models::ListTeamsResponse listTeams(const string &workspaceId, const Models::ListTeamsRequest &request);

      /**
       * @summary Performs a paged query for users in a specified workspace. You can use nameLike to filter users by fuzzy match on the username, maxResults to specify the maximum number of records per page for paging, and nextToken to retrieve the next page. If maxResults is not specified, 10 records are returned by default.
       *
       * @param request ListUsersRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUsersResponse
       */
      Models::ListUsersResponse listUsersWithOptions(const string &workspaceId, const Models::ListUsersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs a paged query for users in a specified workspace. You can use nameLike to filter users by fuzzy match on the username, maxResults to specify the maximum number of records per page for paging, and nextToken to retrieve the next page. If maxResults is not specified, 10 records are returned by default.
       *
       * @param request ListUsersRequest
       * @return ListUsersResponse
       */
      Models::ListUsersResponse listUsers(const string &workspaceId, const Models::ListUsersRequest &request);

      /**
       * @summary Performs a paged query on the workspaces under the current tenant. By default, the list does not return soft-deleted records with the Deleted status. The server performs stable sorting on the results by creation order to facilitate paging.
       *
       * @description ## Request description\\nPerforms a paged query on the workspaces under the current tenant. By default, the list does not return soft-deleted records with the Deleted status. The server performs stable sorting on the results by creation order to facilitate paging. You can use nextToken to obtain the next page, skip to skip a specified number of workspaces, maxResults to specify the maximum number of records per page, and nameLike to perform fuzzy filtering by workspace name. If maxResults is not specified or is set to 0, the server returns 20 records by default.\\n
       *
       * @param request ListWorkspacesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListWorkspacesResponse
       */
      Models::ListWorkspacesResponse listWorkspacesWithOptions(const Models::ListWorkspacesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs a paged query on the workspaces under the current tenant. By default, the list does not return soft-deleted records with the Deleted status. The server performs stable sorting on the results by creation order to facilitate paging.
       *
       * @description ## Request description\\nPerforms a paged query on the workspaces under the current tenant. By default, the list does not return soft-deleted records with the Deleted status. The server performs stable sorting on the results by creation order to facilitate paging. You can use nextToken to obtain the next page, skip to skip a specified number of workspaces, maxResults to specify the maximum number of records per page, and nameLike to perform fuzzy filtering by workspace name. If maxResults is not specified or is set to 0, the server returns 20 records by default.\\n
       *
       * @param request ListWorkspacesRequest
       * @return ListWorkspacesResponse
       */
      Models::ListWorkspacesResponse listWorkspaces(const Models::ListWorkspacesRequest &request);

      /**
       * @summary Takes the online version of a specified Skill offline so that it is no longer used as the online version.
       *
       * @description ## Operation description
       * Takes the online version of a specified Skill offline so that it is no longer used as the online version.
       *
       * @param tmpReq OfflineSkillRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return OfflineSkillResponse
       */
      Models::OfflineSkillResponse offlineSkillWithOptions(const string &workspaceId, const string &skillName, const Models::OfflineSkillRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Takes the online version of a specified Skill offline so that it is no longer used as the online version.
       *
       * @description ## Operation description
       * Takes the online version of a specified Skill offline so that it is no longer used as the online version.
       *
       * @param request OfflineSkillRequest
       * @return OfflineSkillResponse
       */
      Models::OfflineSkillResponse offlineSkill(const string &workspaceId, const string &skillName, const Models::OfflineSkillRequest &request);

      /**
       * @summary Sets a specified Skill version as the online version.
       *
       * @description ## Operation description
       * Sets a specified Skill version as the online version.
       *
       * @param tmpReq OnlineSkillRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return OnlineSkillResponse
       */
      Models::OnlineSkillResponse onlineSkillWithOptions(const string &workspaceId, const string &skillName, const Models::OnlineSkillRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets a specified Skill version as the online version.
       *
       * @description ## Operation description
       * Sets a specified Skill version as the online version.
       *
       * @param request OnlineSkillRequest
       * @return OnlineSkillResponse
       */
      Models::OnlineSkillResponse onlineSkill(const string &workspaceId, const string &skillName, const Models::OnlineSkillRequest &request);

      /**
       * @summary Parses and checks one or more Skill ZIP packages uploaded to OSS, and returns the name, version, and conflict check results.
       *
       * @description ## Operation description
       * Parses and checks one or more Skill ZIP packages uploaded to OSS, and returns the name, version, and conflict check results.
       *
       * @param tmpReq PrecheckSkillUploadViaOssRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return PrecheckSkillUploadViaOssResponse
       */
      Models::PrecheckSkillUploadViaOssResponse precheckSkillUploadViaOssWithOptions(const string &workspaceId, const Models::PrecheckSkillUploadViaOssRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Parses and checks one or more Skill ZIP packages uploaded to OSS, and returns the name, version, and conflict check results.
       *
       * @description ## Operation description
       * Parses and checks one or more Skill ZIP packages uploaded to OSS, and returns the name, version, and conflict check results.
       *
       * @param request PrecheckSkillUploadViaOssRequest
       * @return PrecheckSkillUploadViaOssResponse
       */
      Models::PrecheckSkillUploadViaOssResponse precheckSkillUploadViaOss(const string &workspaceId, const Models::PrecheckSkillUploadViaOssRequest &request);

      /**
       * @summary Publishes a specified Skill version to transition it to the published state.
       *
       * @description ## Operation description
       * Publishes a specified Skill version to transition it to the published state.
       *
       * @param tmpReq PublishSkillVersionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return PublishSkillVersionResponse
       */
      Models::PublishSkillVersionResponse publishSkillVersionWithOptions(const string &workspaceId, const string &skillName, const string &skillVersion, const Models::PublishSkillVersionRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Publishes a specified Skill version to transition it to the published state.
       *
       * @description ## Operation description
       * Publishes a specified Skill version to transition it to the published state.
       *
       * @param request PublishSkillVersionRequest
       * @return PublishSkillVersionResponse
       */
      Models::PublishSkillVersionResponse publishSkillVersion(const string &workspaceId, const string &skillName, const string &skillVersion, const Models::PublishSkillVersionRequest &request);

      /**
       * @summary Converts a specified Skill version back to an editable draft so that you can continue to modify it.
       *
       * @description ## Request description
       * Converts a specified Skill version back to an editable draft so that you can continue to modify it.
       *
       * @param tmpReq RedraftSkillVersionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RedraftSkillVersionResponse
       */
      Models::RedraftSkillVersionResponse redraftSkillVersionWithOptions(const string &workspaceId, const string &skillName, const string &skillVersion, const Models::RedraftSkillVersionRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Converts a specified Skill version back to an editable draft so that you can continue to modify it.
       *
       * @description ## Request description
       * Converts a specified Skill version back to an editable draft so that you can continue to modify it.
       *
       * @param request RedraftSkillVersionRequest
       * @return RedraftSkillVersionResponse
       */
      Models::RedraftSkillVersionResponse redraftSkillVersion(const string &workspaceId, const string &skillName, const string &skillVersion, const Models::RedraftSkillVersionRequest &request);

      /**
       * @summary Resets the logon password of a specified user. You can specify the user by using agentCoreUserId or username, and you must specify at least one of them. This operation only supports resetting passwords for users who use local password authentication in the workspace. If you do not specify the password parameter, the server generates a random password and returns it in the response.
       *
       * @param tmpReq ResetUserPasswordRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetUserPasswordResponse
       */
      Models::ResetUserPasswordResponse resetUserPasswordWithOptions(const string &workspaceId, const Models::ResetUserPasswordRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resets the logon password of a specified user. You can specify the user by using agentCoreUserId or username, and you must specify at least one of them. This operation only supports resetting passwords for users who use local password authentication in the workspace. If you do not specify the password parameter, the server generates a random password and returns it in the response.
       *
       * @param request ResetUserPasswordRequest
       * @return ResetUserPasswordResponse
       */
      Models::ResetUserPasswordResponse resetUserPassword(const string &workspaceId, const Models::ResetUserPasswordRequest &request);

      /**
       * @summary Retries the image cache.
       *
       * @description Retries the image cache for the original ImageId in the current workspace. WorkspaceId is required. The business request body is not required and can be omitted or provided as an empty object. The source authorization and transfer network reuse the trusted context of the original registration. If a digest exists, the retry uses the original digest. If no digest exists, the original tag is resolved again. A new request for a FAILED status can start a new production round. PENDING and READY statuses are reused. DELETING status is rejected, and deleted resources are not recreated. PUBLIC and PRIVATE statuses reuse the pull authorization of the original workspace. Returns a complete acceptance snapshot and retains the original ImageId and CreatedAt. ClientToken does not guarantee request deduplication. If the result is not confirmed, query the real-time status first before deciding whether to resubmit.
       *
       * @param tmpReq RetryImageCacheRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RetryImageCacheResponse
       */
      Models::RetryImageCacheResponse retryImageCacheWithOptions(const string &imageId, const Models::RetryImageCacheRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retries the image cache.
       *
       * @description Retries the image cache for the original ImageId in the current workspace. WorkspaceId is required. The business request body is not required and can be omitted or provided as an empty object. The source authorization and transfer network reuse the trusted context of the original registration. If a digest exists, the retry uses the original digest. If no digest exists, the original tag is resolved again. A new request for a FAILED status can start a new production round. PENDING and READY statuses are reused. DELETING status is rejected, and deleted resources are not recreated. PUBLIC and PRIVATE statuses reuse the pull authorization of the original workspace. Returns a complete acceptance snapshot and retains the original ImageId and CreatedAt. ClientToken does not guarantee request deduplication. If the result is not confirmed, query the real-time status first before deciding whether to resubmit.
       *
       * @param request RetryImageCacheRequest
       * @return RetryImageCacheResponse
       */
      Models::RetryImageCacheResponse retryImageCache(const string &imageId, const Models::RetryImageCacheRequest &request);

      /**
       * @summary Retrieves long-term memory from a MemoryStore based on semantics queries.
       *
       * @description Retrieves long-term memory from a MemoryStore based on semantics queries.
       *
       * @param tmpReq SearchMemoriesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchMemoriesResponse
       */
      Models::SearchMemoriesResponse searchMemoriesWithOptions(const string &workspaceId, const string &memoryStoreName, const Models::SearchMemoriesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves long-term memory from a MemoryStore based on semantics queries.
       *
       * @description Retrieves long-term memory from a MemoryStore based on semantics queries.
       *
       * @param request SearchMemoriesRequest
       * @return SearchMemoriesResponse
       */
      Models::SearchMemoriesResponse searchMemories(const string &workspaceId, const string &memoryStoreName, const Models::SearchMemoriesRequest &request);

      /**
       * @summary Submits a specified draft version of an AgentSpec for review. If no release pipeline is configured, the version is directly published online.
       *
       * @description ## Request description
       * Submits a specified draft version of an AgentSpec for review. If no release pipeline is configured, the version is directly published online.
       *
       * @param tmpReq SubmitAgentSpecVersionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitAgentSpecVersionResponse
       */
      Models::SubmitAgentSpecVersionResponse submitAgentSpecVersionWithOptions(const string &workspaceId, const string &agentSpecName, const string &agentSpecVersion, const Models::SubmitAgentSpecVersionRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a specified draft version of an AgentSpec for review. If no release pipeline is configured, the version is directly published online.
       *
       * @description ## Request description
       * Submits a specified draft version of an AgentSpec for review. If no release pipeline is configured, the version is directly published online.
       *
       * @param request SubmitAgentSpecVersionRequest
       * @return SubmitAgentSpecVersionResponse
       */
      Models::SubmitAgentSpecVersionResponse submitAgentSpecVersion(const string &workspaceId, const string &agentSpecName, const string &agentSpecVersion, const Models::SubmitAgentSpecVersionRequest &request);

      /**
       * @summary Submits a specified draft version of a skill for review.
       *
       * @description ## Operation description
       * Submits a specified draft version of a skill for review.
       *
       * @param tmpReq SubmitSkillVersionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitSkillVersionResponse
       */
      Models::SubmitSkillVersionResponse submitSkillVersionWithOptions(const string &workspaceId, const string &skillName, const string &skillVersion, const Models::SubmitSkillVersionRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a specified draft version of a skill for review.
       *
       * @description ## Operation description
       * Submits a specified draft version of a skill for review.
       *
       * @param request SubmitSkillVersionRequest
       * @return SubmitSkillVersionResponse
       */
      Models::SubmitSkillVersionResponse submitSkillVersion(const string &workspaceId, const string &skillName, const string &skillVersion, const Models::SubmitSkillVersionRequest &request);

      /**
       * @summary Updates the ServiceEndpoint, enablement status, or channel behavior configuration bound to an IM channel. At least one updatable field must be provided.
       *
       * @description Updates the ServiceEndpoint, enablement status, or channel behavior configuration bound to an IM channel. At least one updatable field must be provided.
       *
       * @param tmpReq UpdateAgentIMChannelRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAgentIMChannelResponse
       */
      Models::UpdateAgentIMChannelResponse updateAgentIMChannelWithOptions(const string &workspaceId, const string &agentId, const string &imChannelId, const Models::UpdateAgentIMChannelRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the ServiceEndpoint, enablement status, or channel behavior configuration bound to an IM channel. At least one updatable field must be provided.
       *
       * @description Updates the ServiceEndpoint, enablement status, or channel behavior configuration bound to an IM channel. At least one updatable field must be provided.
       *
       * @param request UpdateAgentIMChannelRequest
       * @return UpdateAgentIMChannelResponse
       */
      Models::UpdateAgentIMChannelResponse updateAgentIMChannel(const string &workspaceId, const string &agentId, const string &imChannelId, const Models::UpdateAgentIMChannelRequest &request);

      /**
       * @summary Fully updates the channel credentials of a specified IM channel. Secrets are not returned in the response.
       *
       * @description Fully updates the channel credentials of a specified IM channel. Secrets are not returned in the response.
       *
       * @param tmpReq UpdateAgentIMChannelCredentialRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAgentIMChannelCredentialResponse
       */
      Models::UpdateAgentIMChannelCredentialResponse updateAgentIMChannelCredentialWithOptions(const string &workspaceId, const string &agentId, const string &imChannelId, const Models::UpdateAgentIMChannelCredentialRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Fully updates the channel credentials of a specified IM channel. Secrets are not returned in the response.
       *
       * @description Fully updates the channel credentials of a specified IM channel. Secrets are not returned in the response.
       *
       * @param request UpdateAgentIMChannelCredentialRequest
       * @return UpdateAgentIMChannelCredentialResponse
       */
      Models::UpdateAgentIMChannelCredentialResponse updateAgentIMChannelCredential(const string &workspaceId, const string &agentId, const string &imChannelId, const Models::UpdateAgentIMChannelCredentialRequest &request);

      /**
       * @summary Updates the business tags, version labels, and visibility scope of a specified AgentSpec. Fields that are not provided remain unchanged.
       *
       * @description ## Operation description
       * Updates the business tags, version labels, and visibility scope of a specified AgentSpec. Fields that are not provided remain unchanged.
       *
       * @param tmpReq UpdateAgentSpecRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAgentSpecResponse
       */
      Models::UpdateAgentSpecResponse updateAgentSpecWithOptions(const string &workspaceId, const string &agentSpecName, const Models::UpdateAgentSpecRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the business tags, version labels, and visibility scope of a specified AgentSpec. Fields that are not provided remain unchanged.
       *
       * @description ## Operation description
       * Updates the business tags, version labels, and visibility scope of a specified AgentSpec. Fields that are not provided remain unchanged.
       *
       * @param request UpdateAgentSpecRequest
       * @return UpdateAgentSpecResponse
       */
      Models::UpdateAgentSpecResponse updateAgentSpec(const string &workspaceId, const string &agentSpecName, const Models::UpdateAgentSpecRequest &request);

      /**
       * @summary Updates the API Key or Service Account Key collection for an enabled QoderCLI Connector. When serviceAccountKeys is submitted, the service treats it as the complete updated key collection and performs additions, renames, rotations, and deletions accordingly.
       *
       * @description Updates the sensitive configuration of a specified Connector and aligns Service Account Keys by ID.
       *
       * @param tmpReq UpdateConnectorRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateConnectorResponse
       */
      Models::UpdateConnectorResponse updateConnectorWithOptions(const string &workspaceId, const string &connectorName, const Models::UpdateConnectorRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the API Key or Service Account Key collection for an enabled QoderCLI Connector. When serviceAccountKeys is submitted, the service treats it as the complete updated key collection and performs additions, renames, rotations, and deletions accordingly.
       *
       * @description Updates the sensitive configuration of a specified Connector and aligns Service Account Keys by ID.
       *
       * @param request UpdateConnectorRequest
       * @return UpdateConnectorResponse
       */
      Models::UpdateConnectorResponse updateConnector(const string &workspaceId, const string &connectorName, const Models::UpdateConnectorRequest &request);

      /**
       * @summary Updates the content or description of a specified credential. You must specify at least one of credentialMetadata and description. Unspecified attributes remain unchanged. The credential name and credential type cannot be modified after creation.
       *
       * @description Updates the metadata or application scope of a specified credential.
       *
       * @param tmpReq UpdateCredentialRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCredentialResponse
       */
      Models::UpdateCredentialResponse updateCredentialWithOptions(const string &workspaceId, const string &credentialId, const Models::UpdateCredentialRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the content or description of a specified credential. You must specify at least one of credentialMetadata and description. Unspecified attributes remain unchanged. The credential name and credential type cannot be modified after creation.
       *
       * @description Updates the metadata or application scope of a specified credential.
       *
       * @param request UpdateCredentialRequest
       * @return UpdateCredentialResponse
       */
      Models::UpdateCredentialResponse updateCredential(const string &workspaceId, const string &credentialId, const Models::UpdateCredentialRequest &request);

      /**
       * @summary Updates the configuration of a specified custom agent in a workspace and executes the update asynchronously. Omitted top-level fields retain their original configurations. You can call the GetCustomAgent operation to query the update result.
       *
       * @description Specify at least one top-level field to update. Omitted top-level fields retain their original configurations. When providing a configuration object, specify its required subfields and include any optional configurations that you want to retain. Arrays are replaced as a whole. Pass an empty array [] to clear a list. The agenticFsMounts field does not accept null. Pass null for the description field to clear the description, and pass null for the healthCheck field to remove the health check.
       * When updating an image, you must specify artifact.port and the type, instanceId, namespace, repo, and tag fields of artifact.container. To retain a custom startup command, also provide the entrypoint field. Currently, only ACR container image deployment is supported. Omit the artifact.code field.
       * When providing the runtime field, both compute and sessionPolicy must be present. If you omit hpa or any of its fields, unspecified elastic configurations use default values. To retain the original elastic configurations, provide them all. When providing the network field, omitted access items are treated as allowed, but actual access is still subject to the workspace network restrictions. To retain the original restrictions, provide both accessInternet and accessVpc. When providing healthCheck, you must specify the port field, and other unspecified items use default values. When providing logging.sls, you must specify both project and logstore.
       * The update is an asynchronous process. A successful response indicates that the request is accepted. You can call the GetCustomAgent operation to query latestSpecVersion, latestVersionStatus, and latestExecutionError, and check the status field to confirm the update result.
       * The clientToken field currently does not provide idempotency guarantees. Do not rely on this parameter to prevent duplicate requests. The healthyThreshold field for health checks currently does not take effect. Omit this field.
       *
       * @param tmpReq UpdateCustomAgentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCustomAgentResponse
       */
      Models::UpdateCustomAgentResponse updateCustomAgentWithOptions(const string &workspaceId, const string &agentId, const Models::UpdateCustomAgentRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the configuration of a specified custom agent in a workspace and executes the update asynchronously. Omitted top-level fields retain their original configurations. You can call the GetCustomAgent operation to query the update result.
       *
       * @description Specify at least one top-level field to update. Omitted top-level fields retain their original configurations. When providing a configuration object, specify its required subfields and include any optional configurations that you want to retain. Arrays are replaced as a whole. Pass an empty array [] to clear a list. The agenticFsMounts field does not accept null. Pass null for the description field to clear the description, and pass null for the healthCheck field to remove the health check.
       * When updating an image, you must specify artifact.port and the type, instanceId, namespace, repo, and tag fields of artifact.container. To retain a custom startup command, also provide the entrypoint field. Currently, only ACR container image deployment is supported. Omit the artifact.code field.
       * When providing the runtime field, both compute and sessionPolicy must be present. If you omit hpa or any of its fields, unspecified elastic configurations use default values. To retain the original elastic configurations, provide them all. When providing the network field, omitted access items are treated as allowed, but actual access is still subject to the workspace network restrictions. To retain the original restrictions, provide both accessInternet and accessVpc. When providing healthCheck, you must specify the port field, and other unspecified items use default values. When providing logging.sls, you must specify both project and logstore.
       * The update is an asynchronous process. A successful response indicates that the request is accepted. You can call the GetCustomAgent operation to query latestSpecVersion, latestVersionStatus, and latestExecutionError, and check the status field to confirm the update result.
       * The clientToken field currently does not provide idempotency guarantees. Do not rely on this parameter to prevent duplicate requests. The healthyThreshold field for health checks currently does not take effect. Omit this field.
       *
       * @param request UpdateCustomAgentRequest
       * @return UpdateCustomAgentResponse
       */
      Models::UpdateCustomAgentResponse updateCustomAgent(const string &workspaceId, const string &agentId, const Models::UpdateCustomAgentRequest &request);

      /**
       * @summary Updates the configuration of a specified external agent.
       *
       * @description Updates the configuration of a specified external agent.
       *
       * @param tmpReq UpdateExternalAgentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateExternalAgentResponse
       */
      Models::UpdateExternalAgentResponse updateExternalAgentWithOptions(const string &workspaceId, const string &agentId, const Models::UpdateExternalAgentRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the configuration of a specified external agent.
       *
       * @description Updates the configuration of a specified external agent.
       *
       * @param request UpdateExternalAgentRequest
       * @return UpdateExternalAgentResponse
       */
      Models::UpdateExternalAgentResponse updateExternalAgent(const string &workspaceId, const string &agentId, const Models::UpdateExternalAgentRequest &request);

      /**
       * @summary Updates the login toggle, member synchronization toggle, or application configuration of a specified external identity provider in a workspace. Unspecified properties remain unchanged. The update is an asynchronous operation. After the API returns, you can call GetIdentityProvider to query the status and track progress.
       *
       * @param tmpReq UpdateIdentityProviderRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateIdentityProviderResponse
       */
      Models::UpdateIdentityProviderResponse updateIdentityProviderWithOptions(const string &workspaceId, const string &identityProviderType, const Models::UpdateIdentityProviderRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the login toggle, member synchronization toggle, or application configuration of a specified external identity provider in a workspace. Unspecified properties remain unchanged. The update is an asynchronous operation. After the API returns, you can call GetIdentityProvider to query the status and track progress.
       *
       * @param request UpdateIdentityProviderRequest
       * @return UpdateIdentityProviderResponse
       */
      Models::UpdateIdentityProviderResponse updateIdentityProvider(const string &workspaceId, const string &identityProviderType, const Models::UpdateIdentityProviderRequest &request);

      /**
       * @summary Updates the configuration of a specified managed agent.
       *
       * @param tmpReq UpdateManagedAgentRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateManagedAgentResponse
       */
      Models::UpdateManagedAgentResponse updateManagedAgentWithOptions(const string &workspaceId, const string &agentId, const Models::UpdateManagedAgentRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the configuration of a specified managed agent.
       *
       * @param request UpdateManagedAgentRequest
       * @return UpdateManagedAgentResponse
       */
      Models::UpdateManagedAgentResponse updateManagedAgent(const string &workspaceId, const string &agentId, const Models::UpdateManagedAgentRequest &request);

      /**
       * @summary Updates the address, description, authentication, or Swagger configuration of a specified MCP service. The MCP type and protocol cannot be modified after creation. The update is an asynchronous process.
       *
       * @description ## Operation description
       * Updates the address, description, authentication, or Swagger configuration of a specified MCP service. The MCP type and protocol cannot be modified after creation. The update is an asynchronous process.
       *
       * @param tmpReq UpdateMcpRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateMcpResponse
       */
      Models::UpdateMcpResponse updateMcpWithOptions(const string &workspaceId, const string &mcpServerId, const Models::UpdateMcpRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the address, description, authentication, or Swagger configuration of a specified MCP service. The MCP type and protocol cannot be modified after creation. The update is an asynchronous process.
       *
       * @description ## Operation description
       * Updates the address, description, authentication, or Swagger configuration of a specified MCP service. The MCP type and protocol cannot be modified after creation. The update is an asynchronous process.
       *
       * @param request UpdateMcpRequest
       * @return UpdateMcpResponse
       */
      Models::UpdateMcpResponse updateMcp(const string &workspaceId, const string &mcpServerId, const Models::UpdateMcpRequest &request);

      /**
       * @summary Updates MCP parameters by template.
       *
       * @description Updates the schema-exposed parameters by using the same template version that was bound when the MCP was created, without upgrading the template version.
       *
       * @param tmpReq UpdateMcpTemplateConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateMcpTemplateConfigResponse
       */
      Models::UpdateMcpTemplateConfigResponse updateMcpTemplateConfigWithOptions(const string &workspaceId, const string &mcpServerId, const Models::UpdateMcpTemplateConfigRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates MCP parameters by template.
       *
       * @description Updates the schema-exposed parameters by using the same template version that was bound when the MCP was created, without upgrading the template version.
       *
       * @param request UpdateMcpTemplateConfigRequest
       * @return UpdateMcpTemplateConfigResponse
       */
      Models::UpdateMcpTemplateConfigResponse updateMcpTemplateConfig(const string &workspaceId, const string &mcpServerId, const Models::UpdateMcpTemplateConfigRequest &request);

      /**
       * @summary Updates the long-term memory text or metadata based on the memory ID.
       *
       * @description Updates the long-term memory text or metadata based on the memory ID.
       *
       * @param tmpReq UpdateMemoryRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateMemoryResponse
       */
      Models::UpdateMemoryResponse updateMemoryWithOptions(const string &workspaceId, const string &memoryStoreName, const string &memoryId, const Models::UpdateMemoryRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the long-term memory text or metadata based on the memory ID.
       *
       * @description Updates the long-term memory text or metadata based on the memory ID.
       *
       * @param request UpdateMemoryRequest
       * @return UpdateMemoryResponse
       */
      Models::UpdateMemoryResponse updateMemory(const string &workspaceId, const string &memoryStoreName, const string &memoryId, const Models::UpdateMemoryRequest &request);

      /**
       * @summary Updates a memory store.
       *
       * @description Updates a memory store.
       *
       * @param tmpReq UpdateMemoryStoreRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateMemoryStoreResponse
       */
      Models::UpdateMemoryStoreResponse updateMemoryStoreWithOptions(const string &workspaceId, const string &memoryStoreName, const Models::UpdateMemoryStoreRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a memory store.
       *
       * @description Updates a memory store.
       *
       * @param request UpdateMemoryStoreRequest
       * @return UpdateMemoryStoreResponse
       */
      Models::UpdateMemoryStoreResponse updateMemoryStore(const string &workspaceId, const string &memoryStoreName, const Models::UpdateMemoryStoreRequest &request);

      /**
       * @summary Updates the description, context token limit, maximum output token count, or capability configurations of a specified model.
       *
       * @description This operation supports updating description, contextSize, maxTokens, and capabilities. You must specify at least one non-null parameter. Parameters that are not specified or are set to null retain their original values. The capabilities parameter is replaced as a whole object. Capability fields that are not specified in the object are treated as false.
       * Modifying only the description does not refresh the model configurations of associated agents. When contextSize, maxTokens, or capabilities actually change, the system asynchronously refreshes managed agents that reference the model within the same workspace, as well as external agents whose model source is PLATFORM. External agents whose model source is RUNTIME are not affected. Repeatedly submitting the same configuration does not trigger a new model configuration refresh.
       * A successful response indicates that the model configuration has been saved, but does not indicate that associated agents have completed the configuration refresh or that the runtime has loaded the new configuration. You can call GetModel to query the saved model configuration.
       *
       * @param tmpReq UpdateModelRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateModelResponse
       */
      Models::UpdateModelResponse updateModelWithOptions(const string &workspaceId, const string &modelId, const Models::UpdateModelRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the description, context token limit, maximum output token count, or capability configurations of a specified model.
       *
       * @description This operation supports updating description, contextSize, maxTokens, and capabilities. You must specify at least one non-null parameter. Parameters that are not specified or are set to null retain their original values. The capabilities parameter is replaced as a whole object. Capability fields that are not specified in the object are treated as false.
       * Modifying only the description does not refresh the model configurations of associated agents. When contextSize, maxTokens, or capabilities actually change, the system asynchronously refreshes managed agents that reference the model within the same workspace, as well as external agents whose model source is PLATFORM. External agents whose model source is RUNTIME are not affected. Repeatedly submitting the same configuration does not trigger a new model configuration refresh.
       * A successful response indicates that the model configuration has been saved, but does not indicate that associated agents have completed the configuration refresh or that the runtime has loaded the new configuration. You can call GetModel to query the saved model configuration.
       *
       * @param request UpdateModelRequest
       * @return UpdateModelResponse
       */
      Models::UpdateModelResponse updateModel(const string &workspaceId, const string &modelId, const Models::UpdateModelRequest &request);

      /**
       * @summary Updates the mutable configurations of a specified model connection and resubmits the publish task. The invocation protocol cannot be modified after creation.
       *
       * @param tmpReq UpdateModelConnectionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateModelConnectionResponse
       */
      Models::UpdateModelConnectionResponse updateModelConnectionWithOptions(const string &workspaceId, const string &connectionId, const Models::UpdateModelConnectionRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the mutable configurations of a specified model connection and resubmits the publish task. The invocation protocol cannot be modified after creation.
       *
       * @param request UpdateModelConnectionRequest
       * @return UpdateModelConnectionResponse
       */
      Models::UpdateModelConnectionResponse updateModelConnection(const string &workspaceId, const string &connectionId, const Models::UpdateModelConnectionRequest &request);

      /**
       * @summary Updates the business tags of a specified skill. Other attributes not provided in the request remain unchanged.
       *
       * @description ## Request description
       * Updates the business tags of a specified skill. Other attributes not provided in the request remain unchanged.
       *
       * @param tmpReq UpdateSkillBizTagsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSkillBizTagsResponse
       */
      Models::UpdateSkillBizTagsResponse updateSkillBizTagsWithOptions(const string &workspaceId, const string &skillName, const Models::UpdateSkillBizTagsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the business tags of a specified skill. Other attributes not provided in the request remain unchanged.
       *
       * @description ## Request description
       * Updates the business tags of a specified skill. Other attributes not provided in the request remain unchanged.
       *
       * @param request UpdateSkillBizTagsRequest
       * @return UpdateSkillBizTagsResponse
       */
      Models::UpdateSkillBizTagsResponse updateSkillBizTags(const string &workspaceId, const string &skillName, const Models::UpdateSkillBizTagsRequest &request);

      /**
       * @summary Updates the version labels and their mappings for a specified Skill.
       *
       * @description ## Operation description
       * Updates the version labels and their mappings for a specified Skill.
       *
       * @param tmpReq UpdateSkillLabelsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSkillLabelsResponse
       */
      Models::UpdateSkillLabelsResponse updateSkillLabelsWithOptions(const string &workspaceId, const string &skillName, const Models::UpdateSkillLabelsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the version labels and their mappings for a specified Skill.
       *
       * @description ## Operation description
       * Updates the version labels and their mappings for a specified Skill.
       *
       * @param request UpdateSkillLabelsRequest
       * @return UpdateSkillLabelsResponse
       */
      Models::UpdateSkillLabelsResponse updateSkillLabels(const string &workspaceId, const string &skillName, const Models::UpdateSkillLabelsRequest &request);

      /**
       * @summary Updates the visibility scope of a specified skill.
       *
       * @description ## Request description
       * Updates the visibility scope of a specified skill.
       *
       * @param tmpReq UpdateSkillScopeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSkillScopeResponse
       */
      Models::UpdateSkillScopeResponse updateSkillScopeWithOptions(const string &workspaceId, const string &skillName, const Models::UpdateSkillScopeRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the visibility scope of a specified skill.
       *
       * @description ## Request description
       * Updates the visibility scope of a specified skill.
       *
       * @param request UpdateSkillScopeRequest
       * @return UpdateSkillScopeResponse
       */
      Models::UpdateSkillScopeResponse updateSkillScope(const string &workspaceId, const string &skillName, const Models::UpdateSkillScopeRequest &request);

      /**
       * @summary Updates the description and members of a specified team. When users or agents are passed, the corresponding member list is replaced based on full overwrite semantics. Member lists that are not passed remain unchanged. The team name cannot be modified after creation.
       *
       * @param tmpReq UpdateTeamRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTeamResponse
       */
      Models::UpdateTeamResponse updateTeamWithOptions(const string &workspaceId, const string &teamId, const Models::UpdateTeamRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the description and members of a specified team. When users or agents are passed, the corresponding member list is replaced based on full overwrite semantics. Member lists that are not passed remain unchanged. The team name cannot be modified after creation.
       *
       * @param request UpdateTeamRequest
       * @return UpdateTeamResponse
       */
      Models::UpdateTeamResponse updateTeam(const string &workspaceId, const string &teamId, const Models::UpdateTeamRequest &request);

      /**
       * @summary Updates the display name, email address, or note of a specified user. You must specify at least one of the displayName, email, and note parameters. Unspecified attributes remain unchanged. The username cannot be modified after creation.
       *
       * @param tmpReq UpdateUserRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateUserResponse
       */
      Models::UpdateUserResponse updateUserWithOptions(const string &workspaceId, const string &agentCoreUserId, const Models::UpdateUserRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the display name, email address, or note of a specified user. You must specify at least one of the displayName, email, and note parameters. Unspecified attributes remain unchanged. The username cannot be modified after creation.
       *
       * @param request UpdateUserRequest
       * @return UpdateUserResponse
       */
      Models::UpdateUserResponse updateUser(const string &workspaceId, const string &agentCoreUserId, const Models::UpdateUserRequest &request);

      /**
       * @summary Updates the name or network configuration of a workspace. Only workspaces in the Initialized state can be updated. Status, TenantId, and RegionId are maintained by the server and cannot be modified through this API operation.
       *
       * @description ## Request description\\nUpdates the name or network configuration of a workspace. Only workspaces in the `Initialized` state can be updated. `Status`, `TenantId`, and `RegionId` are maintained by the server and cannot be modified through this API operation. The network configuration uses `Enabled` to specify whether to enable the VPC network. If enabled, you must provide `VpcId` and at least one `VSwitchIds`.\\n.
       *
       * @param tmpReq UpdateWorkspaceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateWorkspaceResponse
       */
      Models::UpdateWorkspaceResponse updateWorkspaceWithOptions(const string &workspaceId, const Models::UpdateWorkspaceRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the name or network configuration of a workspace. Only workspaces in the Initialized state can be updated. Status, TenantId, and RegionId are maintained by the server and cannot be modified through this API operation.
       *
       * @description ## Request description\\nUpdates the name or network configuration of a workspace. Only workspaces in the `Initialized` state can be updated. `Status`, `TenantId`, and `RegionId` are maintained by the server and cannot be modified through this API operation. The network configuration uses `Enabled` to specify whether to enable the VPC network. If enabled, you must provide `VpcId` and at least one `VSwitchIds`.\\n.
       *
       * @param request UpdateWorkspaceRequest
       * @return UpdateWorkspaceResponse
       */
      Models::UpdateWorkspaceResponse updateWorkspace(const string &workspaceId, const Models::UpdateWorkspaceRequest &request);

      /**
       * @summary Imports an AgentSpec into the current workspace by retrieving and parsing an uploaded AgentSpec ZIP package from OSS.
       *
       * @description ## Request description
       * Retrieves an uploaded AgentSpec ZIP package from OSS, parses the package, and imports the AgentSpec into the current workspace.
       *
       * @param tmpReq UploadAgentSpecViaOssRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UploadAgentSpecViaOssResponse
       */
      Models::UploadAgentSpecViaOssResponse uploadAgentSpecViaOssWithOptions(const string &workspaceId, const Models::UploadAgentSpecViaOssRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Imports an AgentSpec into the current workspace by retrieving and parsing an uploaded AgentSpec ZIP package from OSS.
       *
       * @description ## Request description
       * Retrieves an uploaded AgentSpec ZIP package from OSS, parses the package, and imports the AgentSpec into the current workspace.
       *
       * @param request UploadAgentSpecViaOssRequest
       * @return UploadAgentSpecViaOssResponse
       */
      Models::UploadAgentSpecViaOssResponse uploadAgentSpecViaOss(const string &workspaceId, const Models::UploadAgentSpecViaOssRequest &request);

      /**
       * @summary Retrieves an uploaded Skill ZIP package from OSS, parses it, and imports the Skill into the current workspace.
       *
       * @description ## Operation description
       * Retrieves an uploaded Skill ZIP package from OSS, parses it, and imports the Skill into the current workspace.
       *
       * @param tmpReq UploadSkillViaOssRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UploadSkillViaOssResponse
       */
      Models::UploadSkillViaOssResponse uploadSkillViaOssWithOptions(const string &workspaceId, const Models::UploadSkillViaOssRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves an uploaded Skill ZIP package from OSS, parses it, and imports the Skill into the current workspace.
       *
       * @description ## Operation description
       * Retrieves an uploaded Skill ZIP package from OSS, parses it, and imports the Skill into the current workspace.
       *
       * @param request UploadSkillViaOssRequest
       * @return UploadSkillViaOssResponse
       */
      Models::UploadSkillViaOssResponse uploadSkillViaOss(const string &workspaceId, const Models::UploadSkillViaOssRequest &request);

      /**
       * @summary Validates whether one or more Qoder Service Account Keys are available at a specified site. This operation does not save keys or modify the Connector status.
       *
       * @description Validates whether the credentials of a specified Connector are valid and returns a list of invalid Service Account Keys.
       *
       * @param tmpReq VerifyConnectorRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return VerifyConnectorResponse
       */
      Models::VerifyConnectorResponse verifyConnectorWithOptions(const string &workspaceId, const string &connectorName, const Models::VerifyConnectorRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Validates whether one or more Qoder Service Account Keys are available at a specified site. This operation does not save keys or modify the Connector status.
       *
       * @description Validates whether the credentials of a specified Connector are valid and returns a list of invalid Service Account Keys.
       *
       * @param request VerifyConnectorRequest
       * @return VerifyConnectorResponse
       */
      Models::VerifyConnectorResponse verifyConnector(const string &workspaceId, const string &connectorName, const Models::VerifyConnectorRequest &request);

      /**
       * @summary Verifies the ACR RAM authorization for a workspace.
       *
       * @description ACR and user OSS mounts share the workspace role. If no existing role is found, AliyunAgentCoreWorkspace-{workspaceId} is used. If a valid legacy OSS mount role exists, it is retained and only new permissions are appended without overwriting existing OSS policies. Fixed historical shared roles continue to be reused and are not recreated or renamed due to new naming templates. This operation performs a read-only check to verify whether the custom policies corresponding to the target instance, namespace, and repository are attached to the shared role, and checks the workspace prerequisites. It does not create execution versions or trigger configuration delivery. AUTHORIZED only indicates that the custom policy for the target name is attached, without parsing the policy content or simulating the final permissions. ELIGIBLE does not mean that RuntimeManager capacity or template admission is complete, nor does it require ACR configuration to be delivered. Creating or updating an agent re-verifies permissions and processes ACR dependencies on the backend. Configuration waiting, failures, and retries are reported through agent details.
       *
       * @param request VerifyWorkspaceAcrRamAuthorizationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return VerifyWorkspaceAcrRamAuthorizationResponse
       */
      Models::VerifyWorkspaceAcrRamAuthorizationResponse verifyWorkspaceAcrRamAuthorizationWithOptions(const string &workspaceId, const Models::VerifyWorkspaceAcrRamAuthorizationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Verifies the ACR RAM authorization for a workspace.
       *
       * @description ACR and user OSS mounts share the workspace role. If no existing role is found, AliyunAgentCoreWorkspace-{workspaceId} is used. If a valid legacy OSS mount role exists, it is retained and only new permissions are appended without overwriting existing OSS policies. Fixed historical shared roles continue to be reused and are not recreated or renamed due to new naming templates. This operation performs a read-only check to verify whether the custom policies corresponding to the target instance, namespace, and repository are attached to the shared role, and checks the workspace prerequisites. It does not create execution versions or trigger configuration delivery. AUTHORIZED only indicates that the custom policy for the target name is attached, without parsing the policy content or simulating the final permissions. ELIGIBLE does not mean that RuntimeManager capacity or template admission is complete, nor does it require ACR configuration to be delivered. Creating or updating an agent re-verifies permissions and processes ACR dependencies on the backend. Configuration waiting, failures, and retries are reported through agent details.
       *
       * @param request VerifyWorkspaceAcrRamAuthorizationRequest
       * @return VerifyWorkspaceAcrRamAuthorizationResponse
       */
      Models::VerifyWorkspaceAcrRamAuthorizationResponse verifyWorkspaceAcrRamAuthorization(const string &workspaceId, const Models::VerifyWorkspaceAcrRamAuthorizationRequest &request);

      /**
       * @summary Queries the RAM authorization status of AgenticFS mounting for a workspace.
       *
       * @description Determines the shared role and target access point based on the workspace and server, checks whether the role has a mounted policy with the expected name and a type of Custom, and returns AUTHORIZED or UNAUTHORIZED. Consistent with OSS/ACR, this operation does not verify the policy body, role trust, or actual mount read/write permissions. If the upstream query fails, an error is returned.
       *
       * @param request VerifyWorkspaceAgenticFsMountRamAuthorizationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return VerifyWorkspaceAgenticFsMountRamAuthorizationResponse
       */
      Models::VerifyWorkspaceAgenticFsMountRamAuthorizationResponse verifyWorkspaceAgenticFsMountRamAuthorizationWithOptions(const string &workspaceId, const Models::VerifyWorkspaceAgenticFsMountRamAuthorizationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the RAM authorization status of AgenticFS mounting for a workspace.
       *
       * @description Determines the shared role and target access point based on the workspace and server, checks whether the role has a mounted policy with the expected name and a type of Custom, and returns AUTHORIZED or UNAUTHORIZED. Consistent with OSS/ACR, this operation does not verify the policy body, role trust, or actual mount read/write permissions. If the upstream query fails, an error is returned.
       *
       * @param request VerifyWorkspaceAgenticFsMountRamAuthorizationRequest
       * @return VerifyWorkspaceAgenticFsMountRamAuthorizationResponse
       */
      Models::VerifyWorkspaceAgenticFsMountRamAuthorizationResponse verifyWorkspaceAgenticFsMountRamAuthorization(const string &workspaceId, const Models::VerifyWorkspaceAgenticFsMountRamAuthorizationRequest &request);

      /**
       * @summary Verifies the RAM authorization for a workspace to access an OSS bucket and returns the current authorization status. When bucketName is specified, verifies the authorization for an agent-mounted bucket. When bucketName is not specified, verifies and updates the authorization status of the workspace\\"s private OSS storage.
       *
       * @description Queries whether the workspace OSS mount role is bound to the custom RAM policy corresponding to the target bucket, and returns AUTHORIZED or UNAUTHORIZED. When bucketName is not specified, the existing user-managed OSS binding of the workspace is used and the authorization status is saved. When bucketName is specified, only the authorization status of the specified bucket is queried without modifying the workspace OSS binding. This operation does not verify OSS data plane access permissions or resume workspace initialization tasks. Alibaba Cloud Container Registry (ACR) and user OSS mounts share the workspace role. If no existing role is available, AliyunAgentCoreWorkspace-{workspaceId} is used. If a valid legacy OSS mount role exists, it is reused and permissions are only appended without overwriting existing OSS policies. Previously pinned shared roles continue to be reused and are not recreated or renamed due to new naming templates.
       *
       * @param request VerifyWorkspaceOssMountRamAuthorizationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return VerifyWorkspaceOssMountRamAuthorizationResponse
       */
      Models::VerifyWorkspaceOssMountRamAuthorizationResponse verifyWorkspaceOssMountRamAuthorizationWithOptions(const string &workspaceId, const Models::VerifyWorkspaceOssMountRamAuthorizationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Verifies the RAM authorization for a workspace to access an OSS bucket and returns the current authorization status. When bucketName is specified, verifies the authorization for an agent-mounted bucket. When bucketName is not specified, verifies and updates the authorization status of the workspace\\"s private OSS storage.
       *
       * @description Queries whether the workspace OSS mount role is bound to the custom RAM policy corresponding to the target bucket, and returns AUTHORIZED or UNAUTHORIZED. When bucketName is not specified, the existing user-managed OSS binding of the workspace is used and the authorization status is saved. When bucketName is specified, only the authorization status of the specified bucket is queried without modifying the workspace OSS binding. This operation does not verify OSS data plane access permissions or resume workspace initialization tasks. Alibaba Cloud Container Registry (ACR) and user OSS mounts share the workspace role. If no existing role is available, AliyunAgentCoreWorkspace-{workspaceId} is used. If a valid legacy OSS mount role exists, it is reused and permissions are only appended without overwriting existing OSS policies. Previously pinned shared roles continue to be reused and are not recreated or renamed due to new naming templates.
       *
       * @param request VerifyWorkspaceOssMountRamAuthorizationRequest
       * @return VerifyWorkspaceOssMountRamAuthorizationResponse
       */
      Models::VerifyWorkspaceOssMountRamAuthorizationResponse verifyWorkspaceOssMountRamAuthorization(const string &workspaceId, const Models::VerifyWorkspaceOssMountRamAuthorizationRequest &request);
  };
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
