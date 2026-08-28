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
       * @summary 批量删除模型
       *
       * @param tmpReq BatchDeleteModelsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchDeleteModelsResponse
       */
      Models::BatchDeleteModelsResponse batchDeleteModelsWithOptions(const string &workspaceId, const Models::BatchDeleteModelsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量删除模型
       *
       * @param request BatchDeleteModelsRequest
       * @return BatchDeleteModelsResponse
       */
      Models::BatchDeleteModelsResponse batchDeleteModels(const string &workspaceId, const Models::BatchDeleteModelsRequest &request);

      /**
       * @summary Uploads Skill ZIP packages in bulk through OSS and returns the processing result of each Skill.
       *
       * @description ## Operation description
       * Uploads Skill ZIP packages in bulk through OSS and returns the processing result of each Skill.
       *
       * @param tmpReq BatchUploadSkillsViaOssRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchUploadSkillsViaOssResponse
       */
      Models::BatchUploadSkillsViaOssResponse batchUploadSkillsViaOssWithOptions(const string &workspaceId, const Models::BatchUploadSkillsViaOssRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Uploads Skill ZIP packages in bulk through OSS and returns the processing result of each Skill.
       *
       * @description ## Operation description
       * Uploads Skill ZIP packages in bulk through OSS and returns the processing result of each Skill.
       *
       * @param request BatchUploadSkillsViaOssRequest
       * @return BatchUploadSkillsViaOssResponse
       */
      Models::BatchUploadSkillsViaOssResponse batchUploadSkillsViaOss(const string &workspaceId, const Models::BatchUploadSkillsViaOssRequest &request);

      /**
       * @summary Creates an IM channel for a specified agent and binds a publicly accessible ServiceEndpoint.
       *
       * @description Creates an IM channel for a specified agent and binds a publicly accessible ServiceEndpoint.
       *
       * @param tmpReq CreateAgentIMChannelRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAgentIMChannelResponse
       */
      Models::CreateAgentIMChannelResponse createAgentIMChannelWithOptions(const string &workspaceId, const string &agentId, const Models::CreateAgentIMChannelRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an IM channel for a specified agent and binds a publicly accessible ServiceEndpoint.
       *
       * @description Creates an IM channel for a specified agent and binds a publicly accessible ServiceEndpoint.
       *
       * @param request CreateAgentIMChannelRequest
       * @return CreateAgentIMChannelResponse
       */
      Models::CreateAgentIMChannelResponse createAgentIMChannel(const string &workspaceId, const string &agentId, const Models::CreateAgentIMChannelRequest &request);

      /**
       * @summary Creates an AgentSpec in the specified workspace and generates the first draft version. Returns a resource conflict error if an AgentSpec with the same name already exists.
       *
       * @description ## Operation description
       * Creates an AgentSpec in the specified workspace and generates the first draft version. Returns a resource conflict error if an AgentSpec with the same name already exists.
       *
       * @param tmpReq CreateAgentSpecRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAgentSpecResponse
       */
      Models::CreateAgentSpecResponse createAgentSpecWithOptions(const string &workspaceId, const Models::CreateAgentSpecRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an AgentSpec in the specified workspace and generates the first draft version. Returns a resource conflict error if an AgentSpec with the same name already exists.
       *
       * @description ## Operation description
       * Creates an AgentSpec in the specified workspace and generates the first draft version. Returns a resource conflict error if an AgentSpec with the same name already exists.
       *
       * @param request CreateAgentSpecRequest
       * @return CreateAgentSpecResponse
       */
      Models::CreateAgentSpecResponse createAgentSpec(const string &workspaceId, const Models::CreateAgentSpecRequest &request);

      /**
       * @summary Creates a new draft version for an existing AgentSpec. The AgentSpec must exist, and there must not be a draft currently being edited.
       *
       * @description ## Request description
       * Creates a new draft version for an existing AgentSpec. The AgentSpec must exist, and there must not be a draft currently being edited.
       *
       * @param tmpReq CreateAgentSpecVersionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAgentSpecVersionResponse
       */
      Models::CreateAgentSpecVersionResponse createAgentSpecVersionWithOptions(const string &workspaceId, const string &agentSpecName, const Models::CreateAgentSpecVersionRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a new draft version for an existing AgentSpec. The AgentSpec must exist, and there must not be a draft currently being edited.
       *
       * @description ## Request description
       * Creates a new draft version for an existing AgentSpec. The AgentSpec must exist, and there must not be a draft currently being edited.
       *
       * @param request CreateAgentSpecVersionRequest
       * @return CreateAgentSpecVersionResponse
       */
      Models::CreateAgentSpecVersionResponse createAgentSpecVersion(const string &workspaceId, const string &agentSpecName, const Models::CreateAgentSpecVersionRequest &request);

      /**
       * @summary 创建凭证
       *
       * @param tmpReq CreateCredentialRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCredentialResponse
       */
      Models::CreateCredentialResponse createCredentialWithOptions(const string &workspaceId, const Models::CreateCredentialRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建凭证
       *
       * @param request CreateCredentialRequest
       * @return CreateCredentialResponse
       */
      Models::CreateCredentialResponse createCredential(const string &workspaceId, const Models::CreateCredentialRequest &request);

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
       * @summary Creates a Bootstrap Token and CMS configuration required for connecting a specified external agent.
       *
       * @description Creates a Bootstrap Token and CMS configuration required for connecting a specified external agent.
       *
       * @param request CreateExternalAgentBootstrapTokenRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateExternalAgentBootstrapTokenResponse
       */
      Models::CreateExternalAgentBootstrapTokenResponse createExternalAgentBootstrapTokenWithOptions(const string &workspaceId, const string &agentId, const Models::CreateExternalAgentBootstrapTokenRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a Bootstrap Token and CMS configuration required for connecting a specified external agent.
       *
       * @description Creates a Bootstrap Token and CMS configuration required for connecting a specified external agent.
       *
       * @param request CreateExternalAgentBootstrapTokenRequest
       * @return CreateExternalAgentBootstrapTokenResponse
       */
      Models::CreateExternalAgentBootstrapTokenResponse createExternalAgentBootstrapToken(const string &workspaceId, const string &agentId, const Models::CreateExternalAgentBootstrapTokenRequest &request);

      /**
       * @summary Binds an external identity provider to a specified workspace for single sign-on and organization member synchronization. Each workspace can be bound to at most one external identity provider. The binding is an asynchronous operation. After the API returns, you can track the progress by querying the status through GetIdentityProvider.
       *
       * @param tmpReq CreateIdentityProviderRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateIdentityProviderResponse
       */
      Models::CreateIdentityProviderResponse createIdentityProviderWithOptions(const string &workspaceId, const Models::CreateIdentityProviderRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Binds an external identity provider to a specified workspace for single sign-on and organization member synchronization. Each workspace can be bound to at most one external identity provider. The binding is an asynchronous operation. After the API returns, you can track the progress by querying the status through GetIdentityProvider.
       *
       * @param request CreateIdentityProviderRequest
       * @return CreateIdentityProviderResponse
       */
      Models::CreateIdentityProviderResponse createIdentityProvider(const string &workspaceId, const Models::CreateIdentityProviderRequest &request);

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
       * @summary Creates a model configuration under a specified model connection in a workspace.
       *
       * @param tmpReq CreateModelRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateModelResponse
       */
      Models::CreateModelResponse createModelWithOptions(const string &workspaceId, const Models::CreateModelRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a model configuration under a specified model connection in a workspace.
       *
       * @param request CreateModelRequest
       * @return CreateModelResponse
       */
      Models::CreateModelResponse createModel(const string &workspaceId, const Models::CreateModelRequest &request);

      /**
       * @summary 创建模型连接
       *
       * @param tmpReq CreateModelConnectionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateModelConnectionResponse
       */
      Models::CreateModelConnectionResponse createModelConnectionWithOptions(const string &workspaceId, const Models::CreateModelConnectionRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建模型连接
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
       * @summary 创建团队
       *
       * @param tmpReq CreateTeamRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTeamResponse
       */
      Models::CreateTeamResponse createTeamWithOptions(const string &workspaceId, const Models::CreateTeamRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建团队
       *
       * @param request CreateTeamRequest
       * @return CreateTeamResponse
       */
      Models::CreateTeamResponse createTeam(const string &workspaceId, const Models::CreateTeamRequest &request);

      /**
       * @summary 创建用户
       *
       * @param tmpReq CreateUserRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateUserResponse
       */
      Models::CreateUserResponse createUserWithOptions(const string &workspaceId, const Models::CreateUserRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建用户
       *
       * @param request CreateUserRequest
       * @return CreateUserResponse
       */
      Models::CreateUserResponse createUser(const string &workspaceId, const Models::CreateUserRequest &request);

      /**
       * @summary Creates an AgentCore workspace control plane record. The server completes the state transition from Initializing to Initialized within the same transaction.
       *
       * @description ## Operation description\\nCreates an AgentCore workspace control plane record. The server completes the state transition from `Initializing` to `Initialized` within the same transaction. The network configuration uses `Enabled` to specify whether to enable VPC networking. When enabled, you must provide `VpcId` and at least one `VSwitchIds`.\\n.
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
       * @description ## Operation description\\nCreates an AgentCore workspace control plane record. The server completes the state transition from `Initializing` to `Initialized` within the same transaction. The network configuration uses `Enabled` to specify whether to enable VPC networking. When enabled, you must provide `VpcId` and at least one `VSwitchIds`.\\n.
       *
       * @param request CreateWorkspaceRequest
       * @return CreateWorkspaceResponse
       */
      Models::CreateWorkspaceResponse createWorkspace(const Models::CreateWorkspaceRequest &request);

      /**
       * @summary 调试模型
       *
       * @param tmpReq DebugModelRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DebugModelResponse
       */
      Models::DebugModelResponse debugModelWithOptions(const string &workspaceId, const string &modelId, const Models::DebugModelRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 调试模型
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
       * @summary Deletes a specified AgentSpec along with all its versions and metadata. This operation is irreversible.
       *
       * @description ## Request description
       * Deletes a specified AgentSpec along with all its versions and metadata. This operation is irreversible.
       *
       * @param request DeleteAgentSpecRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAgentSpecResponse
       */
      Models::DeleteAgentSpecResponse deleteAgentSpecWithOptions(const string &workspaceId, const string &agentSpecName, const Models::DeleteAgentSpecRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified AgentSpec along with all its versions and metadata. This operation is irreversible.
       *
       * @description ## Request description
       * Deletes a specified AgentSpec along with all its versions and metadata. This operation is irreversible.
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
       * @summary 删除凭证
       *
       * @param request DeleteCredentialRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCredentialResponse
       */
      Models::DeleteCredentialResponse deleteCredentialWithOptions(const string &workspaceId, const string &credentialId, const Models::DeleteCredentialRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除凭证
       *
       * @param request DeleteCredentialRequest
       * @return DeleteCredentialResponse
       */
      Models::DeleteCredentialResponse deleteCredential(const string &workspaceId, const string &credentialId, const Models::DeleteCredentialRequest &request);

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
       * @summary Unbinds the external identity provider from a specified workspace and cleans up users synchronized by that identity provider. The unbinding is an asynchronous operation. After the API returns, you can track the progress by querying the status through GetIdentityProvider.
       *
       * @param request DeleteIdentityProviderRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteIdentityProviderResponse
       */
      Models::DeleteIdentityProviderResponse deleteIdentityProviderWithOptions(const string &workspaceId, const string &identityProviderType, const Models::DeleteIdentityProviderRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unbinds the external identity provider from a specified workspace and cleans up users synchronized by that identity provider. The unbinding is an asynchronous operation. After the API returns, you can track the progress by querying the status through GetIdentityProvider.
       *
       * @param request DeleteIdentityProviderRequest
       * @return DeleteIdentityProviderResponse
       */
      Models::DeleteIdentityProviderResponse deleteIdentityProvider(const string &workspaceId, const string &identityProviderType, const Models::DeleteIdentityProviderRequest &request);

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
       * @summary Deletes a specified MCP service. The deletion is an asynchronous process. After the deletion is complete, the MCP service is no longer returned.
       *
       * @description ## Request description
       * Deletes a specified MCP service. The deletion is an asynchronous process. After the deletion is complete, the MCP service is no longer returned.
       *
       * @param request DeleteMcpRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMcpResponse
       */
      Models::DeleteMcpResponse deleteMcpWithOptions(const string &mcpServerId, const string &workspaceId, const Models::DeleteMcpRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified MCP service. The deletion is an asynchronous process. After the deletion is complete, the MCP service is no longer returned.
       *
       * @description ## Request description
       * Deletes a specified MCP service. The deletion is an asynchronous process. After the deletion is complete, the MCP service is no longer returned.
       *
       * @param request DeleteMcpRequest
       * @return DeleteMcpResponse
       */
      Models::DeleteMcpResponse deleteMcp(const string &mcpServerId, const string &workspaceId, const Models::DeleteMcpRequest &request);

      /**
       * @summary 删除模型
       *
       * @param request DeleteModelRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteModelResponse
       */
      Models::DeleteModelResponse deleteModelWithOptions(const string &workspaceId, const string &modelId, const Models::DeleteModelRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除模型
       *
       * @param request DeleteModelRequest
       * @return DeleteModelResponse
       */
      Models::DeleteModelResponse deleteModel(const string &workspaceId, const string &modelId, const Models::DeleteModelRequest &request);

      /**
       * @summary 删除模型连接
       *
       * @param request DeleteModelConnectionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteModelConnectionResponse
       */
      Models::DeleteModelConnectionResponse deleteModelConnectionWithOptions(const string &workspaceId, const string &connectionId, const Models::DeleteModelConnectionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除模型连接
       *
       * @param request DeleteModelConnectionRequest
       * @return DeleteModelConnectionResponse
       */
      Models::DeleteModelConnectionResponse deleteModelConnection(const string &workspaceId, const string &connectionId, const Models::DeleteModelConnectionRequest &request);

      /**
       * @summary Deletes a skill and its related version data from a specified workspace. This operation is irreversible.
       *
       * @description ## Request description
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
       * @description ## Request description
       * Deletes a skill and its related version data from a specified workspace. This operation is irreversible.
       *
       * @param request DeleteSkillRequest
       * @return DeleteSkillResponse
       */
      Models::DeleteSkillResponse deleteSkill(const string &workspaceId, const string &skillName, const Models::DeleteSkillRequest &request);

      /**
       * @summary Deletes the draft version currently being edited for a specified Skill.
       *
       * @description ## Request description
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
       * @description ## Request description
       * Deletes the draft version currently being edited for a specified Skill.
       *
       * @param request DeleteSkillDraftRequest
       * @return DeleteSkillDraftResponse
       */
      Models::DeleteSkillDraftResponse deleteSkillDraft(const string &workspaceId, const string &skillName, const Models::DeleteSkillDraftRequest &request);

      /**
       * @summary 删除团队
       *
       * @param request DeleteTeamRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTeamResponse
       */
      Models::DeleteTeamResponse deleteTeamWithOptions(const string &workspaceId, const string &teamId, const Models::DeleteTeamRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除团队
       *
       * @param request DeleteTeamRequest
       * @return DeleteTeamResponse
       */
      Models::DeleteTeamResponse deleteTeam(const string &workspaceId, const string &teamId, const Models::DeleteTeamRequest &request);

      /**
       * @summary 删除用户
       *
       * @param request DeleteUserRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteUserResponse
       */
      Models::DeleteUserResponse deleteUserWithOptions(const string &workspaceId, const string &agentCoreUserId, const Models::DeleteUserRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除用户
       *
       * @param request DeleteUserRequest
       * @return DeleteUserResponse
       */
      Models::DeleteUserResponse deleteUser(const string &workspaceId, const string &agentCoreUserId, const Models::DeleteUserRequest &request);

      /**
       * @summary Deletes the control plane record of a specified workspace. The server completes the state transition from Deleting to Deleted within the same transaction. When you repeatedly delete a workspace that is in the Deleting or Deleted state, the server handles the request with idempotence semantics.
       *
       * @description ## Request description\\nDeletes the control plane record of a specified workspace. The server completes the state transition from `Deleting` to `Deleted` within the same transaction. When you repeatedly delete a workspace that is in the `Deleting` or `Deleted` state, the server handles the request with idempotence semantics.\\n.
       *
       * @param request DeleteWorkspaceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteWorkspaceResponse
       */
      Models::DeleteWorkspaceResponse deleteWorkspaceWithOptions(const string &workspaceId, const Models::DeleteWorkspaceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the control plane record of a specified workspace. The server completes the state transition from Deleting to Deleted within the same transaction. When you repeatedly delete a workspace that is in the Deleting or Deleted state, the server handles the request with idempotence semantics.
       *
       * @description ## Request description\\nDeletes the control plane record of a specified workspace. The server completes the state transition from `Deleting` to `Deleted` within the same transaction. When you repeatedly delete a workspace that is in the `Deleting` or `Deleted` state, the server handles the request with idempotence semantics.\\n.
       *
       * @param request DeleteWorkspaceRequest
       * @return DeleteWorkspaceResponse
       */
      Models::DeleteWorkspaceResponse deleteWorkspace(const string &workspaceId, const Models::DeleteWorkspaceRequest &request);

      /**
       * @summary Retrieves a pre-signed OSS download URL for a specified AgentSpec ZIP package.
       *
       * @description ## Operation description
       * Retrieves a pre-signed OSS download URL for a specified AgentSpec, which is used to download the AgentSpec ZIP package.
       *
       * @param request DownloadAgentSpecViaOssRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DownloadAgentSpecViaOssResponse
       */
      Models::DownloadAgentSpecViaOssResponse downloadAgentSpecViaOssWithOptions(const string &workspaceId, const string &agentSpecName, const Models::DownloadAgentSpecViaOssRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a pre-signed OSS download URL for a specified AgentSpec ZIP package.
       *
       * @description ## Operation description
       * Retrieves a pre-signed OSS download URL for a specified AgentSpec, which is used to download the AgentSpec ZIP package.
       *
       * @param request DownloadAgentSpecViaOssRequest
       * @return DownloadAgentSpecViaOssResponse
       */
      Models::DownloadAgentSpecViaOssResponse downloadAgentSpecViaOss(const string &workspaceId, const string &agentSpecName, const Models::DownloadAgentSpecViaOssRequest &request);

      /**
       * @summary Retrieves a pre-signed OSS download URL for a specified Skill version, which is used to download the corresponding Skill ZIP package.
       *
       * @description ## Request description
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
       * @description ## Request description
       * Retrieves a pre-signed OSS download URL for a specified Skill version, which is used to download the corresponding Skill ZIP package.
       *
       * @param request DownloadSkillVersionViaOssRequest
       * @return DownloadSkillVersionViaOssResponse
       */
      Models::DownloadSkillVersionViaOssResponse downloadSkillVersionViaOss(const string &workspaceId, const string &skillName, const string &skillVersion, const Models::DownloadSkillVersionViaOssRequest &request);

      /**
       * @summary Skips the regular review process and forcibly publishes the specified Skill version.
       *
       * @description ## Request description
       * Skips the regular review process and forcibly publishes the specified Skill version.
       *
       * @param tmpReq ForcePublishSkillVersionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ForcePublishSkillVersionResponse
       */
      Models::ForcePublishSkillVersionResponse forcePublishSkillVersionWithOptions(const string &workspaceId, const string &skillName, const string &skillVersion, const Models::ForcePublishSkillVersionRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Skips the regular review process and forcibly publishes the specified Skill version.
       *
       * @description ## Request description
       * Skips the regular review process and forcibly publishes the specified Skill version.
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
       * @description ## Operation description
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
       * @description ## Operation description
       * Queries the governance details of a specified AgentSpec, including basic information, governance pointers, and summaries of all versions.
       *
       * @param request GetAgentSpecRequest
       * @return GetAgentSpecResponse
       */
      Models::GetAgentSpecResponse getAgentSpec(const string &workspaceId, const string &agentSpecName, const Models::GetAgentSpecRequest &request);

      /**
       * @summary Retrieves the OSS pre-signed upload URL and object name required for importing an AgentSpec ZIP package. After the upload is complete, call the AgentSpec OSS upload operation to complete the import.
       *
       * @description ## Operation description
       * Retrieves the OSS pre-signed upload URL and object name required for importing an AgentSpec ZIP package. After the upload is complete, call the AgentSpec OSS upload operation to complete the import.
       *
       * @param request GetAgentSpecImportFileUrlRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAgentSpecImportFileUrlResponse
       */
      Models::GetAgentSpecImportFileUrlResponse getAgentSpecImportFileUrlWithOptions(const string &workspaceId, const Models::GetAgentSpecImportFileUrlRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the OSS pre-signed upload URL and object name required for importing an AgentSpec ZIP package. After the upload is complete, call the AgentSpec OSS upload operation to complete the import.
       *
       * @description ## Operation description
       * Retrieves the OSS pre-signed upload URL and object name required for importing an AgentSpec ZIP package. After the upload is complete, call the AgentSpec OSS upload operation to complete the import.
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
       * @summary Queries the complete content of a specified AgentSpec version, including manifest content, resource files, and metadata.
       *
       * @description ## Operation description
       * Queries the complete content of a specified AgentSpec version, including manifest content, resource files, and metadata.
       *
       * @param request GetAgentSpecVersionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAgentSpecVersionResponse
       */
      Models::GetAgentSpecVersionResponse getAgentSpecVersionWithOptions(const string &workspaceId, const string &agentSpecName, const string &agentSpecVersion, const Models::GetAgentSpecVersionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the complete content of a specified AgentSpec version, including manifest content, resource files, and metadata.
       *
       * @description ## Operation description
       * Queries the complete content of a specified AgentSpec version, including manifest content, resource files, and metadata.
       *
       * @param request GetAgentSpecVersionRequest
       * @return GetAgentSpecVersionResponse
       */
      Models::GetAgentSpecVersionResponse getAgentSpecVersion(const string &workspaceId, const string &agentSpecName, const string &agentSpecVersion, const Models::GetAgentSpecVersionRequest &request);

      /**
       * @summary 查询凭证
       *
       * @param request GetCredentialRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCredentialResponse
       */
      Models::GetCredentialResponse getCredentialWithOptions(const string &workspaceId, const string &credentialId, const Models::GetCredentialRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询凭证
       *
       * @param request GetCredentialRequest
       * @return GetCredentialResponse
       */
      Models::GetCredentialResponse getCredential(const string &workspaceId, const string &credentialId, const Models::GetCredentialRequest &request);

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
       * @summary Queries the available network types for a specified external agent.
       *
       * @description Queries the available network types for a specified external agent.
       *
       * @param request GetExternalAgentBootstrapOptionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetExternalAgentBootstrapOptionsResponse
       */
      Models::GetExternalAgentBootstrapOptionsResponse getExternalAgentBootstrapOptionsWithOptions(const string &workspaceId, const string &agentId, const Models::GetExternalAgentBootstrapOptionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the available network types for a specified external agent.
       *
       * @description Queries the available network types for a specified external agent.
       *
       * @param request GetExternalAgentBootstrapOptionsRequest
       * @return GetExternalAgentBootstrapOptionsResponse
       */
      Models::GetExternalAgentBootstrapOptionsResponse getExternalAgentBootstrapOptions(const string &workspaceId, const string &agentId, const Models::GetExternalAgentBootstrapOptionsRequest &request);

      /**
       * @summary Queries the binding details of an external identity provider for a specified workspace, including the binding status, application configuration, and callback URLs that need to be configured on the identity provider side. Application secret configurations are not returned.
       *
       * @param request GetIdentityProviderRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetIdentityProviderResponse
       */
      Models::GetIdentityProviderResponse getIdentityProviderWithOptions(const string &workspaceId, const string &identityProviderType, const Models::GetIdentityProviderRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the binding details of an external identity provider for a specified workspace, including the binding status, application configuration, and callback URLs that need to be configured on the identity provider side. Application secret configurations are not returned.
       *
       * @param request GetIdentityProviderRequest
       * @return GetIdentityProviderResponse
       */
      Models::GetIdentityProviderResponse getIdentityProvider(const string &workspaceId, const string &identityProviderType, const Models::GetIdentityProviderRequest &request);

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
       * @summary Queries the details of a specified MCP service, including its address, type, status, authentication configuration, and protocol.
       *
       * @description ## Operation description
       * Queries the details of a specified MCP service, including its address, type, status, authentication configuration, and protocol.
       *
       * @param request GetMcpRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMcpResponse
       */
      Models::GetMcpResponse getMcpWithOptions(const string &workspaceId, const string &mcpServerId, const Models::GetMcpRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a specified MCP service, including its address, type, status, authentication configuration, and protocol.
       *
       * @description ## Operation description
       * Queries the details of a specified MCP service, including its address, type, status, authentication configuration, and protocol.
       *
       * @param request GetMcpRequest
       * @return GetMcpResponse
       */
      Models::GetMcpResponse getMcp(const string &workspaceId, const string &mcpServerId, const Models::GetMcpRequest &request);

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
       * @summary 查询模型连接
       *
       * @param request GetModelConnectionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetModelConnectionResponse
       */
      Models::GetModelConnectionResponse getModelConnectionWithOptions(const string &workspaceId, const string &connectionId, const Models::GetModelConnectionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询模型连接
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
       * @summary Queries the currently active API Key and its invocation method for a specified service endpoint within a workspace.
       *
       * @description Queries the currently active API Key for a specified service endpoint. The call succeeds only when the service endpoint has API_KEY authentication enabled and the gateway consumer and credentials are ready. The service reads the API Key from the gateway in real time. AgentCore does not persist the plaintext. Keep the returned API Key secure and avoid logging it or exposing it in public configurations.
       *
       * @param request GetServiceEndpointApiKeyRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetServiceEndpointApiKeyResponse
       */
      Models::GetServiceEndpointApiKeyResponse getServiceEndpointApiKeyWithOptions(const string &workspaceId, const string &serviceEndpointId, const Models::GetServiceEndpointApiKeyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the currently active API Key and its invocation method for a specified service endpoint within a workspace.
       *
       * @description Queries the currently active API Key for a specified service endpoint. The call succeeds only when the service endpoint has API_KEY authentication enabled and the gateway consumer and credentials are ready. The service reads the API Key from the gateway in real time. AgentCore does not persist the plaintext. Keep the returned API Key secure and avoid logging it or exposing it in public configurations.
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
       * @summary Retrieves the OSS pre-signed upload URL and object name required for importing a Skill ZIP package. After the upload is complete, call the Skill OSS upload operation to complete the import.
       *
       * @description ## Request description
       * Retrieves the OSS pre-signed upload URL and object name required for importing a Skill ZIP package. After the upload is complete, call the Skill OSS upload operation to complete the import.
       *
       * @param request GetSkillImportFileUrlRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSkillImportFileUrlResponse
       */
      Models::GetSkillImportFileUrlResponse getSkillImportFileUrlWithOptions(const string &workspaceId, const Models::GetSkillImportFileUrlRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the OSS pre-signed upload URL and object name required for importing a Skill ZIP package. After the upload is complete, call the Skill OSS upload operation to complete the import.
       *
       * @description ## Request description
       * Retrieves the OSS pre-signed upload URL and object name required for importing a Skill ZIP package. After the upload is complete, call the Skill OSS upload operation to complete the import.
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
       * @summary 查询团队
       *
       * @param request GetTeamRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTeamResponse
       */
      Models::GetTeamResponse getTeamWithOptions(const string &workspaceId, const string &teamId, const Models::GetTeamRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询团队
       *
       * @param request GetTeamRequest
       * @return GetTeamResponse
       */
      Models::GetTeamResponse getTeam(const string &workspaceId, const string &teamId, const Models::GetTeamRequest &request);

      /**
       * @summary 查询用户
       *
       * @param request GetUserRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUserResponse
       */
      Models::GetUserResponse getUserWithOptions(const string &workspaceId, const string &agentCoreUserId, const Models::GetUserRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询用户
       *
       * @param request GetUserRequest
       * @return GetUserResponse
       */
      Models::GetUserResponse getUser(const string &workspaceId, const string &agentCoreUserId, const Models::GetUserRequest &request);

      /**
       * @summary Queries workspace details by workspace ID, including lifecycle status, CMS Workspace, AIRegistry Namespace, and current network policy.
       *
       * @description ## Operation description\\nQueries workspace details by workspace ID, including lifecycle status, CMS Workspace, AIRegistry Namespace, and current network policy.\\n.
       *
       * @param request GetWorkspaceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetWorkspaceResponse
       */
      Models::GetWorkspaceResponse getWorkspaceWithOptions(const string &workspaceId, const Models::GetWorkspaceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries workspace details by workspace ID, including lifecycle status, CMS Workspace, AIRegistry Namespace, and current network policy.
       *
       * @description ## Operation description\\nQueries workspace details by workspace ID, including lifecycle status, CMS Workspace, AIRegistry Namespace, and current network policy.\\n.
       *
       * @param request GetWorkspaceRequest
       * @return GetWorkspaceResponse
       */
      Models::GetWorkspaceResponse getWorkspace(const string &workspaceId, const Models::GetWorkspaceRequest &request);

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
       * @summary Installs a plugin for a specified AgentCore workspace. Currently supports the collaboration plugin. The installation process is executed asynchronously.
       *
       * @description ## Operation description\\nInstalls a plugin for a specified AgentCore workspace. Currently supports the `collaboration` plugin. Plugin configuration is passed through the `Config` parameter, and different plugins can define their own configuration structures. The `collaboration` plugin uses `Config.NetworkConfiguration` to specify VPC and public network access policies. The installation process is executed asynchronously. When you repeatedly call this operation for a plugin with the same name that is being installed or already installed, the operation returns the current status with idempotent semantics if the configuration is the same. If the configuration is different, the operation returns an operation conflict error.\\n.
       *
       * @param tmpReq InstallWorkspacePluginRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return InstallWorkspacePluginResponse
       */
      Models::InstallWorkspacePluginResponse installWorkspacePluginWithOptions(const string &workspaceId, const string &pluginName, const Models::InstallWorkspacePluginRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Installs a plugin for a specified AgentCore workspace. Currently supports the collaboration plugin. The installation process is executed asynchronously.
       *
       * @description ## Operation description\\nInstalls a plugin for a specified AgentCore workspace. Currently supports the `collaboration` plugin. Plugin configuration is passed through the `Config` parameter, and different plugins can define their own configuration structures. The `collaboration` plugin uses `Config.NetworkConfiguration` to specify VPC and public network access policies. The installation process is executed asynchronously. When you repeatedly call this operation for a plugin with the same name that is being installed or already installed, the operation returns the current status with idempotent semantics if the configuration is the same. If the configuration is different, the operation returns an operation conflict error.\\n.
       *
       * @param request InstallWorkspacePluginRequest
       * @return InstallWorkspacePluginResponse
       */
      Models::InstallWorkspacePluginResponse installWorkspacePlugin(const string &workspaceId, const string &pluginName, const Models::InstallWorkspacePluginRequest &request);

      /**
       * @summary Queries the IM channel list of a specified agent.
       *
       * @description Queries the IM channel list of a specified agent.
       *
       * @param request ListAgentIMChannelsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAgentIMChannelsResponse
       */
      Models::ListAgentIMChannelsResponse listAgentIMChannelsWithOptions(const string &workspaceId, const string &agentId, const Models::ListAgentIMChannelsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the IM channel list of a specified agent.
       *
       * @description Queries the IM channel list of a specified agent.
       *
       * @param request ListAgentIMChannelsRequest
       * @return ListAgentIMChannelsResponse
       */
      Models::ListAgentIMChannelsResponse listAgentIMChannels(const string &workspaceId, const string &agentId, const Models::ListAgentIMChannelsRequest &request);

      /**
       * @summary Queries AgentSpec resources in a specified workspace by using paging, supporting name search, sorting, and filtering by owner, visibility scope, and business labels.
       *
       * @description ## Operation description
       * Queries AgentSpec resources in a specified workspace by using paging, supporting name search, sorting, and filtering by owner, visibility scope, and business labels.
       *
       * @param request ListAgentSpecsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAgentSpecsResponse
       */
      Models::ListAgentSpecsResponse listAgentSpecsWithOptions(const string &workspaceId, const Models::ListAgentSpecsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries AgentSpec resources in a specified workspace by using paging, supporting name search, sorting, and filtering by owner, visibility scope, and business labels.
       *
       * @description ## Operation description
       * Queries AgentSpec resources in a specified workspace by using paging, supporting name search, sorting, and filtering by owner, visibility scope, and business labels.
       *
       * @param request ListAgentSpecsRequest
       * @return ListAgentSpecsResponse
       */
      Models::ListAgentSpecsResponse listAgentSpecs(const string &workspaceId, const Models::ListAgentSpecsRequest &request);

      /**
       * @summary Queries the list of teams to which specified agents belong. Specify the agent IDs through agentIds to retrieve the membership information between each agent and its teams, including the team ID, team name, and the role that the agent assumes in the team.
       *
       * @param tmpReq ListAgentTeamsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAgentTeamsResponse
       */
      Models::ListAgentTeamsResponse listAgentTeamsWithOptions(const string &workspaceId, const Models::ListAgentTeamsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of teams to which specified agents belong. Specify the agent IDs through agentIds to retrieve the membership information between each agent and its teams, including the team ID, team name, and the role that the agent assumes in the team.
       *
       * @param request ListAgentTeamsRequest
       * @return ListAgentTeamsResponse
       */
      Models::ListAgentTeamsResponse listAgentTeams(const string &workspaceId, const Models::ListAgentTeamsRequest &request);

      /**
       * @summary 查询凭证列表
       *
       * @param request ListCredentialsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCredentialsResponse
       */
      Models::ListCredentialsResponse listCredentialsWithOptions(const string &workspaceId, const Models::ListCredentialsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询凭证列表
       *
       * @param request ListCredentialsRequest
       * @return ListCredentialsResponse
       */
      Models::ListCredentialsResponse listCredentials(const string &workspaceId, const Models::ListCredentialsRequest &request);

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
       * @summary Queries the external identity provider bound to a specified workspace. Each workspace can be bound to at most one external identity provider, so the response returns at most one record. Application secret configurations are not returned.
       *
       * @param request ListIdentityProvidersRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListIdentityProvidersResponse
       */
      Models::ListIdentityProvidersResponse listIdentityProvidersWithOptions(const string &workspaceId, const Models::ListIdentityProvidersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the external identity provider bound to a specified workspace. Each workspace can be bound to at most one external identity provider, so the response returns at most one record. Application secret configurations are not returned.
       *
       * @param request ListIdentityProvidersRequest
       * @return ListIdentityProvidersResponse
       */
      Models::ListIdentityProvidersResponse listIdentityProviders(const string &workspaceId, const Models::ListIdentityProvidersRequest &request);

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
       * @summary 查询模型连接列表
       *
       * @param request ListModelConnectionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListModelConnectionsResponse
       */
      Models::ListModelConnectionsResponse listModelConnectionsWithOptions(const string &workspaceId, const Models::ListModelConnectionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询模型连接列表
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
       * @summary 查询预定义模型供应商目录
       *
       * @param request ListPredefinedModelProvidersRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPredefinedModelProvidersResponse
       */
      Models::ListPredefinedModelProvidersResponse listPredefinedModelProvidersWithOptions(const Models::ListPredefinedModelProvidersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询预定义模型供应商目录
       *
       * @param request ListPredefinedModelProvidersRequest
       * @return ListPredefinedModelProvidersResponse
       */
      Models::ListPredefinedModelProvidersResponse listPredefinedModelProviders(const Models::ListPredefinedModelProvidersRequest &request);

      /**
       * @summary Queries the models and their capability information for a specified provider in the AgentCore built-in model catalog.
       *
       * @param request ListPredefinedModelsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPredefinedModelsResponse
       */
      Models::ListPredefinedModelsResponse listPredefinedModelsWithOptions(const string &providerType, const Models::ListPredefinedModelsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the models and their capability information for a specified provider in the AgentCore built-in model catalog.
       *
       * @param request ListPredefinedModelsRequest
       * @return ListPredefinedModelsResponse
       */
      Models::ListPredefinedModelsResponse listPredefinedModels(const string &providerType, const Models::ListPredefinedModelsRequest &request);

      /**
       * @summary Queries service endpoints in a specified workspace by using paging. Supports filtering by target type, agent, collaboration component, and status.
       *
       * @description ## Request description\\nQueries service endpoints in a specified workspace by using paging. Filter results by targetType, agentId, agentVersion, resourceBindingId, collaborationComponent, and status. Use maxResults to specify the maximum number of records per page, and use nextToken to retrieve the next page. If maxResults is not specified, the server returns 20 records by default.\\n
       *
       * @param request ListServiceEndpointsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListServiceEndpointsResponse
       */
      Models::ListServiceEndpointsResponse listServiceEndpointsWithOptions(const string &workspaceId, const Models::ListServiceEndpointsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries service endpoints in a specified workspace by using paging. Supports filtering by target type, agent, collaboration component, and status.
       *
       * @description ## Request description\\nQueries service endpoints in a specified workspace by using paging. Filter results by targetType, agentId, agentVersion, resourceBindingId, collaborationComponent, and status. Use maxResults to specify the maximum number of records per page, and use nextToken to retrieve the next page. If maxResults is not specified, the server returns 20 records by default.\\n
       *
       * @param request ListServiceEndpointsRequest
       * @return ListServiceEndpointsResponse
       */
      Models::ListServiceEndpointsResponse listServiceEndpoints(const string &workspaceId, const Models::ListServiceEndpointsRequest &request);

      /**
       * @summary Performs a paged query of Skills in a specified workspace, and returns basic Skill information, version status, and paging details.
       *
       * @description ## Operation description
       * Performs a paged query of Skills in a specified workspace, and returns basic Skill information, version status, and paging details.
       *
       * @param request ListSkillsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSkillsResponse
       */
      Models::ListSkillsResponse listSkillsWithOptions(const string &workspaceId, const Models::ListSkillsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs a paged query of Skills in a specified workspace, and returns basic Skill information, version status, and paging details.
       *
       * @description ## Operation description
       * Performs a paged query of Skills in a specified workspace, and returns basic Skill information, version status, and paging details.
       *
       * @param request ListSkillsRequest
       * @return ListSkillsResponse
       */
      Models::ListSkillsResponse listSkills(const string &workspaceId, const Models::ListSkillsRequest &request);

      /**
       * @summary 查询团队列表
       *
       * @param request ListTeamsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTeamsResponse
       */
      Models::ListTeamsResponse listTeamsWithOptions(const string &workspaceId, const Models::ListTeamsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询团队列表
       *
       * @param request ListTeamsRequest
       * @return ListTeamsResponse
       */
      Models::ListTeamsResponse listTeams(const string &workspaceId, const Models::ListTeamsRequest &request);

      /**
       * @summary 查询用户列表
       *
       * @param request ListUsersRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUsersResponse
       */
      Models::ListUsersResponse listUsersWithOptions(const string &workspaceId, const Models::ListUsersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询用户列表
       *
       * @param request ListUsersRequest
       * @return ListUsersResponse
       */
      Models::ListUsersResponse listUsers(const string &workspaceId, const Models::ListUsersRequest &request);

      /**
       * @summary Queries workspaces under the current tenant with paging. The list does not return soft-deleted records with a status of Deleted by default. Results are stably sorted by creation order on the server side.
       *
       * @description ## Request description\\nQueries workspaces under the current tenant with paging. The list does not return soft-deleted records with a status of `Deleted` by default. Results are stably sorted by creation order on the server side. Use `nextToken` to retrieve the next page, `skip` to skip a specified number of workspaces, `maxResults` to specify the maximum number of records per page, and `nameLike` to filter workspaces by name using fuzzy match. If `maxResults` is not specified or is set to 0, the server returns 20 records by default.\\n
       *
       * @param request ListWorkspacesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListWorkspacesResponse
       */
      Models::ListWorkspacesResponse listWorkspacesWithOptions(const Models::ListWorkspacesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries workspaces under the current tenant with paging. The list does not return soft-deleted records with a status of Deleted by default. Results are stably sorted by creation order on the server side.
       *
       * @description ## Request description\\nQueries workspaces under the current tenant with paging. The list does not return soft-deleted records with a status of `Deleted` by default. Results are stably sorted by creation order on the server side. Use `nextToken` to retrieve the next page, `skip` to skip a specified number of workspaces, `maxResults` to specify the maximum number of records per page, and `nameLike` to filter workspaces by name using fuzzy match. If `maxResults` is not specified or is set to 0, the server returns 20 records by default.\\n
       *
       * @param request ListWorkspacesRequest
       * @return ListWorkspacesResponse
       */
      Models::ListWorkspacesResponse listWorkspaces(const Models::ListWorkspacesRequest &request);

      /**
       * @summary Takes the online version of a specified Skill offline so that it is no longer used as the online version.
       *
       * @description ## Request description
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
       * @description ## Request description
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
       * @description ## Request description
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
       * @description ## Request description
       * Parses and checks one or more Skill ZIP packages uploaded to OSS, and returns the name, version, and conflict check results.
       *
       * @param request PrecheckSkillUploadViaOssRequest
       * @return PrecheckSkillUploadViaOssResponse
       */
      Models::PrecheckSkillUploadViaOssResponse precheckSkillUploadViaOss(const string &workspaceId, const Models::PrecheckSkillUploadViaOssRequest &request);

      /**
       * @summary Publishes a specified Skill version to change its state to published.
       *
       * @description ## Operation description
       * Publishes a specified Skill version to change its state to published.
       *
       * @param tmpReq PublishSkillVersionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return PublishSkillVersionResponse
       */
      Models::PublishSkillVersionResponse publishSkillVersionWithOptions(const string &workspaceId, const string &skillName, const string &skillVersion, const Models::PublishSkillVersionRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Publishes a specified Skill version to change its state to published.
       *
       * @description ## Operation description
       * Publishes a specified Skill version to change its state to published.
       *
       * @param request PublishSkillVersionRequest
       * @return PublishSkillVersionResponse
       */
      Models::PublishSkillVersionResponse publishSkillVersion(const string &workspaceId, const string &skillName, const string &skillVersion, const Models::PublishSkillVersionRequest &request);

      /**
       * @summary Converts a specified Skill version back into an editable draft for further modifications.
       *
       * @description ## Operation description
       * Converts a specified Skill version back into an editable draft for further modifications.
       *
       * @param tmpReq RedraftSkillVersionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RedraftSkillVersionResponse
       */
      Models::RedraftSkillVersionResponse redraftSkillVersionWithOptions(const string &workspaceId, const string &skillName, const string &skillVersion, const Models::RedraftSkillVersionRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Converts a specified Skill version back into an editable draft for further modifications.
       *
       * @description ## Operation description
       * Converts a specified Skill version back into an editable draft for further modifications.
       *
       * @param request RedraftSkillVersionRequest
       * @return RedraftSkillVersionResponse
       */
      Models::RedraftSkillVersionResponse redraftSkillVersion(const string &workspaceId, const string &skillName, const string &skillVersion, const Models::RedraftSkillVersionRequest &request);

      /**
       * @summary 重置用户密码
       *
       * @param tmpReq ResetUserPasswordRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetUserPasswordResponse
       */
      Models::ResetUserPasswordResponse resetUserPasswordWithOptions(const string &workspaceId, const Models::ResetUserPasswordRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 重置用户密码
       *
       * @param request ResetUserPasswordRequest
       * @return ResetUserPasswordResponse
       */
      Models::ResetUserPasswordResponse resetUserPassword(const string &workspaceId, const Models::ResetUserPasswordRequest &request);

      /**
       * @summary Submits a specified AgentSpec draft version for review. If no release pipeline is configured, the version is published directly to online status.
       *
       * @description ## Operation description
       * Submits a specified AgentSpec draft version for review. If no release pipeline is configured, the version is published directly to online status.
       *
       * @param tmpReq SubmitAgentSpecVersionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitAgentSpecVersionResponse
       */
      Models::SubmitAgentSpecVersionResponse submitAgentSpecVersionWithOptions(const string &workspaceId, const string &agentSpecName, const string &agentSpecVersion, const Models::SubmitAgentSpecVersionRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a specified AgentSpec draft version for review. If no release pipeline is configured, the version is published directly to online status.
       *
       * @description ## Operation description
       * Submits a specified AgentSpec draft version for review. If no release pipeline is configured, the version is published directly to online status.
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
       * @summary Updates the ServiceEndpoint binding, enabled/disabled status, or channel behavior configuration of an IM channel. At least one updatable field must be provided.
       *
       * @description Updates the ServiceEndpoint binding, enabled/disabled status, or channel behavior configuration of an IM channel. At least one updatable field must be provided.
       *
       * @param tmpReq UpdateAgentIMChannelRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAgentIMChannelResponse
       */
      Models::UpdateAgentIMChannelResponse updateAgentIMChannelWithOptions(const string &workspaceId, const string &agentId, const string &imChannelId, const Models::UpdateAgentIMChannelRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the ServiceEndpoint binding, enabled/disabled status, or channel behavior configuration of an IM channel. At least one updatable field must be provided.
       *
       * @description Updates the ServiceEndpoint binding, enabled/disabled status, or channel behavior configuration of an IM channel. At least one updatable field must be provided.
       *
       * @param request UpdateAgentIMChannelRequest
       * @return UpdateAgentIMChannelResponse
       */
      Models::UpdateAgentIMChannelResponse updateAgentIMChannel(const string &workspaceId, const string &agentId, const string &imChannelId, const Models::UpdateAgentIMChannelRequest &request);

      /**
       * @summary Performs a full update of the channel credential for a specified IM channel of an agent. Secrets are not returned in the response.
       *
       * @description Performs a full update of the channel credential for a specified IM channel of an agent. Secrets are not returned in the response.
       *
       * @param tmpReq UpdateAgentIMChannelCredentialRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAgentIMChannelCredentialResponse
       */
      Models::UpdateAgentIMChannelCredentialResponse updateAgentIMChannelCredentialWithOptions(const string &workspaceId, const string &agentId, const string &imChannelId, const Models::UpdateAgentIMChannelCredentialRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs a full update of the channel credential for a specified IM channel of an agent. Secrets are not returned in the response.
       *
       * @description Performs a full update of the channel credential for a specified IM channel of an agent. Secrets are not returned in the response.
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
       * @summary 更新凭证
       *
       * @param tmpReq UpdateCredentialRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCredentialResponse
       */
      Models::UpdateCredentialResponse updateCredentialWithOptions(const string &workspaceId, const string &credentialId, const Models::UpdateCredentialRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新凭证
       *
       * @param request UpdateCredentialRequest
       * @return UpdateCredentialResponse
       */
      Models::UpdateCredentialResponse updateCredential(const string &workspaceId, const string &credentialId, const Models::UpdateCredentialRequest &request);

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
       * @summary Updates the login switch, member synchronization switch, or application configuration of a specified external identity provider in a workspace. Unspecified properties remain unchanged. The update is an asynchronous operation. After the API returns, you can call GetIdentityProvider to query the status and track progress.
       *
       * @param tmpReq UpdateIdentityProviderRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateIdentityProviderResponse
       */
      Models::UpdateIdentityProviderResponse updateIdentityProviderWithOptions(const string &workspaceId, const string &identityProviderType, const Models::UpdateIdentityProviderRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the login switch, member synchronization switch, or application configuration of a specified external identity provider in a workspace. Unspecified properties remain unchanged. The update is an asynchronous operation. After the API returns, you can call GetIdentityProvider to query the status and track progress.
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
       * @summary Updates the description of a specified model. Other model configurations cannot be modified through this operation.
       *
       * @param tmpReq UpdateModelRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateModelResponse
       */
      Models::UpdateModelResponse updateModelWithOptions(const string &workspaceId, const string &modelId, const Models::UpdateModelRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the description of a specified model. Other model configurations cannot be modified through this operation.
       *
       * @param request UpdateModelRequest
       * @return UpdateModelResponse
       */
      Models::UpdateModelResponse updateModel(const string &workspaceId, const string &modelId, const Models::UpdateModelRequest &request);

      /**
       * @summary Updates the mutable configuration of a specified model connection and resubmits the publish task. The protocol cannot be modified after the model connection is created.
       *
       * @param tmpReq UpdateModelConnectionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateModelConnectionResponse
       */
      Models::UpdateModelConnectionResponse updateModelConnectionWithOptions(const string &workspaceId, const string &connectionId, const Models::UpdateModelConnectionRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the mutable configuration of a specified model connection and resubmits the publish task. The protocol cannot be modified after the model connection is created.
       *
       * @param request UpdateModelConnectionRequest
       * @return UpdateModelConnectionResponse
       */
      Models::UpdateModelConnectionResponse updateModelConnection(const string &workspaceId, const string &connectionId, const Models::UpdateModelConnectionRequest &request);

      /**
       * @summary Updates the business tags of a specified Skill. Other attributes that are not included in the request remain unchanged.
       *
       * @description ## Operation description
       * Updates the business tags of a specified Skill. Other attributes that are not included in the request remain unchanged.
       *
       * @param tmpReq UpdateSkillBizTagsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSkillBizTagsResponse
       */
      Models::UpdateSkillBizTagsResponse updateSkillBizTagsWithOptions(const string &workspaceId, const string &skillName, const Models::UpdateSkillBizTagsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the business tags of a specified Skill. Other attributes that are not included in the request remain unchanged.
       *
       * @description ## Operation description
       * Updates the business tags of a specified Skill. Other attributes that are not included in the request remain unchanged.
       *
       * @param request UpdateSkillBizTagsRequest
       * @return UpdateSkillBizTagsResponse
       */
      Models::UpdateSkillBizTagsResponse updateSkillBizTags(const string &workspaceId, const string &skillName, const Models::UpdateSkillBizTagsRequest &request);

      /**
       * @summary Updates the version labels and their mappings for a specified Skill.
       *
       * @description ## Request description
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
       * @description ## Request description
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
       * @summary 更新团队
       *
       * @param tmpReq UpdateTeamRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTeamResponse
       */
      Models::UpdateTeamResponse updateTeamWithOptions(const string &workspaceId, const string &teamId, const Models::UpdateTeamRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新团队
       *
       * @param request UpdateTeamRequest
       * @return UpdateTeamResponse
       */
      Models::UpdateTeamResponse updateTeam(const string &workspaceId, const string &teamId, const Models::UpdateTeamRequest &request);

      /**
       * @summary 更新用户
       *
       * @param tmpReq UpdateUserRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateUserResponse
       */
      Models::UpdateUserResponse updateUserWithOptions(const string &workspaceId, const string &agentCoreUserId, const Models::UpdateUserRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新用户
       *
       * @param request UpdateUserRequest
       * @return UpdateUserResponse
       */
      Models::UpdateUserResponse updateUser(const string &workspaceId, const string &agentCoreUserId, const Models::UpdateUserRequest &request);

      /**
       * @summary Updates the name or network configuration of a workspace. Only workspaces in the Initialized status can be updated. Status, TenantId, and RegionId are maintained by the server and cannot be modified through this operation.
       *
       * @description ## Operation description\\nUpdates the name or network configuration of a workspace. Only workspaces in the `Initialized` status can be updated. `Status`, `TenantId`, and `RegionId` are maintained by the server and cannot be modified through this operation. The network configuration uses `Enabled` to specify whether to enable VPC networking. When enabled, you must also provide `VpcId` and at least one `VSwitchIds`.\\n.
       *
       * @param tmpReq UpdateWorkspaceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateWorkspaceResponse
       */
      Models::UpdateWorkspaceResponse updateWorkspaceWithOptions(const string &workspaceId, const Models::UpdateWorkspaceRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the name or network configuration of a workspace. Only workspaces in the Initialized status can be updated. Status, TenantId, and RegionId are maintained by the server and cannot be modified through this operation.
       *
       * @description ## Operation description\\nUpdates the name or network configuration of a workspace. Only workspaces in the `Initialized` status can be updated. `Status`, `TenantId`, and `RegionId` are maintained by the server and cannot be modified through this operation. The network configuration uses `Enabled` to specify whether to enable VPC networking. When enabled, you must also provide `VpcId` and at least one `VSwitchIds`.\\n.
       *
       * @param request UpdateWorkspaceRequest
       * @return UpdateWorkspaceResponse
       */
      Models::UpdateWorkspaceResponse updateWorkspace(const string &workspaceId, const Models::UpdateWorkspaceRequest &request);

      /**
       * @summary Retrieves an uploaded AgentSpec ZIP package from OSS, parses it, and imports the AgentSpec into the current workspace.
       *
       * @description ## Operation description
       * Retrieves an uploaded AgentSpec ZIP package from OSS, parses it, and imports the AgentSpec into the current workspace.
       *
       * @param tmpReq UploadAgentSpecViaOssRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UploadAgentSpecViaOssResponse
       */
      Models::UploadAgentSpecViaOssResponse uploadAgentSpecViaOssWithOptions(const string &workspaceId, const Models::UploadAgentSpecViaOssRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves an uploaded AgentSpec ZIP package from OSS, parses it, and imports the AgentSpec into the current workspace.
       *
       * @description ## Operation description
       * Retrieves an uploaded AgentSpec ZIP package from OSS, parses it, and imports the AgentSpec into the current workspace.
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
  };
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
