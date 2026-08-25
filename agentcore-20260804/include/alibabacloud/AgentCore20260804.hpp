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
       * @summary 更新模型
       *
       * @param tmpReq UpdateModelRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateModelResponse
       */
      Models::UpdateModelResponse updateModelWithOptions(const string &workspaceId, const string &modelId, const Models::UpdateModelRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新模型
       *
       * @param request UpdateModelRequest
       * @return UpdateModelResponse
       */
      Models::UpdateModelResponse updateModel(const string &workspaceId, const string &modelId, const Models::UpdateModelRequest &request);

      /**
       * @summary 更新模型连接
       *
       * @param tmpReq UpdateModelConnectionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateModelConnectionResponse
       */
      Models::UpdateModelConnectionResponse updateModelConnectionWithOptions(const string &workspaceId, const string &connectionId, const Models::UpdateModelConnectionRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新模型连接
       *
       * @param request UpdateModelConnectionRequest
       * @return UpdateModelConnectionResponse
       */
      Models::UpdateModelConnectionResponse updateModelConnection(const string &workspaceId, const string &connectionId, const Models::UpdateModelConnectionRequest &request);

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
  };
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
