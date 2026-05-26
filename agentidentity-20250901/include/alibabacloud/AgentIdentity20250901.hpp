// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_AGENTIDENTITY20250901_HPP_
#define ALIBABACLOUD_AGENTIDENTITY20250901_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/AgentIdentity20250901Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/AgentIdentity20250901.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentIdentity20250901
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 创建应用
       *
       * @param request AddSAMLIdentityProviderCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddSAMLIdentityProviderCertificateResponse
       */
      Models::AddSAMLIdentityProviderCertificateResponse addSAMLIdentityProviderCertificateWithOptions(const Models::AddSAMLIdentityProviderCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建应用
       *
       * @param request AddSAMLIdentityProviderCertificateRequest
       * @return AddSAMLIdentityProviderCertificateResponse
       */
      Models::AddSAMLIdentityProviderCertificateResponse addSAMLIdentityProviderCertificate(const Models::AddSAMLIdentityProviderCertificateRequest &request);

      /**
       * @summary 策略集关联网关
       *
       * @param request AttachPolicySetToGatewayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachPolicySetToGatewayResponse
       */
      Models::AttachPolicySetToGatewayResponse attachPolicySetToGatewayWithOptions(const Models::AttachPolicySetToGatewayRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 策略集关联网关
       *
       * @param request AttachPolicySetToGatewayRequest
       * @return AttachPolicySetToGatewayResponse
       */
      Models::AttachPolicySetToGatewayResponse attachPolicySetToGateway(const Models::AttachPolicySetToGatewayRequest &request);

      /**
       * @summary 创建一个 API 密钥凭证提供商
       *
       * @param request CreateAPIKeyCredentialProviderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAPIKeyCredentialProviderResponse
       */
      Models::CreateAPIKeyCredentialProviderResponse createAPIKeyCredentialProviderWithOptions(const Models::CreateAPIKeyCredentialProviderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建一个 API 密钥凭证提供商
       *
       * @param request CreateAPIKeyCredentialProviderRequest
       * @return CreateAPIKeyCredentialProviderResponse
       */
      Models::CreateAPIKeyCredentialProviderResponse createAPIKeyCredentialProvider(const Models::CreateAPIKeyCredentialProviderRequest &request);

      /**
       * @summary 创建WorkloadIdentity
       *
       * @param request CreateClientSecretRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateClientSecretResponse
       */
      Models::CreateClientSecretResponse createClientSecretWithOptions(const Models::CreateClientSecretRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建WorkloadIdentity
       *
       * @param request CreateClientSecretRequest
       * @return CreateClientSecretResponse
       */
      Models::CreateClientSecretResponse createClientSecret(const Models::CreateClientSecretRequest &request);

      /**
       * @summary 创建IdentityProvider
       *
       * @param tmpReq CreateIdentityProviderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateIdentityProviderResponse
       */
      Models::CreateIdentityProviderResponse createIdentityProviderWithOptions(const Models::CreateIdentityProviderRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建IdentityProvider
       *
       * @param request CreateIdentityProviderRequest
       * @return CreateIdentityProviderResponse
       */
      Models::CreateIdentityProviderResponse createIdentityProvider(const Models::CreateIdentityProviderRequest &request);

      /**
       * @summary 创建 OAuth2 凭证提供商
       *
       * @param tmpReq CreateOAuth2CredentialProviderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateOAuth2CredentialProviderResponse
       */
      Models::CreateOAuth2CredentialProviderResponse createOAuth2CredentialProviderWithOptions(const Models::CreateOAuth2CredentialProviderRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建 OAuth2 凭证提供商
       *
       * @param request CreateOAuth2CredentialProviderRequest
       * @return CreateOAuth2CredentialProviderResponse
       */
      Models::CreateOAuth2CredentialProviderResponse createOAuth2CredentialProvider(const Models::CreateOAuth2CredentialProviderRequest &request);

      /**
       * @summary 创建一个权限策略
       *
       * @param tmpReq CreatePolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePolicyResponse
       */
      Models::CreatePolicyResponse createPolicyWithOptions(const Models::CreatePolicyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建一个权限策略
       *
       * @param request CreatePolicyRequest
       * @return CreatePolicyResponse
       */
      Models::CreatePolicyResponse createPolicy(const Models::CreatePolicyRequest &request);

      /**
       * @summary 创建一个权限策略集合
       *
       * @param request CreatePolicySetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePolicySetResponse
       */
      Models::CreatePolicySetResponse createPolicySetWithOptions(const Models::CreatePolicySetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建一个权限策略集合
       *
       * @param request CreatePolicySetRequest
       * @return CreatePolicySetResponse
       */
      Models::CreatePolicySetResponse createPolicySet(const Models::CreatePolicySetRequest &request);

      /**
       * @summary 创建Role
       *
       * @param request CreateRoleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRoleResponse
       */
      Models::CreateRoleResponse createRoleWithOptions(const Models::CreateRoleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建Role
       *
       * @param request CreateRoleRequest
       * @return CreateRoleResponse
       */
      Models::CreateRoleResponse createRole(const Models::CreateRoleRequest &request);

      /**
       * @summary 策略集关联网关
       *
       * @param request CreateRoleAssignmentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRoleAssignmentResponse
       */
      Models::CreateRoleAssignmentResponse createRoleAssignmentWithOptions(const Models::CreateRoleAssignmentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 策略集关联网关
       *
       * @param request CreateRoleAssignmentRequest
       * @return CreateRoleAssignmentResponse
       */
      Models::CreateRoleAssignmentResponse createRoleAssignment(const Models::CreateRoleAssignmentRequest &request);

      /**
       * @summary 创建一个凭证库
       *
       * @param tmpReq CreateTokenVaultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTokenVaultResponse
       */
      Models::CreateTokenVaultResponse createTokenVaultWithOptions(const Models::CreateTokenVaultRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建一个凭证库
       *
       * @param request CreateTokenVaultRequest
       * @return CreateTokenVaultResponse
       */
      Models::CreateTokenVaultResponse createTokenVault(const Models::CreateTokenVaultRequest &request);

      /**
       * @summary 创建UserPool
       *
       * @param request CreateUserPoolRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateUserPoolResponse
       */
      Models::CreateUserPoolResponse createUserPoolWithOptions(const Models::CreateUserPoolRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建UserPool
       *
       * @param request CreateUserPoolRequest
       * @return CreateUserPoolResponse
       */
      Models::CreateUserPoolResponse createUserPool(const Models::CreateUserPoolRequest &request);

      /**
       * @summary 创建WorkloadIdentity
       *
       * @param tmpReq CreateUserPoolClientRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateUserPoolClientResponse
       */
      Models::CreateUserPoolClientResponse createUserPoolClientWithOptions(const Models::CreateUserPoolClientRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建WorkloadIdentity
       *
       * @param request CreateUserPoolClientRequest
       * @return CreateUserPoolClientResponse
       */
      Models::CreateUserPoolClientResponse createUserPoolClient(const Models::CreateUserPoolClientRequest &request);

      /**
       * @summary 创建WorkloadIdentity
       *
       * @param tmpReq CreateWorkloadIdentityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateWorkloadIdentityResponse
       */
      Models::CreateWorkloadIdentityResponse createWorkloadIdentityWithOptions(const Models::CreateWorkloadIdentityRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建WorkloadIdentity
       *
       * @param request CreateWorkloadIdentityRequest
       * @return CreateWorkloadIdentityResponse
       */
      Models::CreateWorkloadIdentityResponse createWorkloadIdentity(const Models::CreateWorkloadIdentityRequest &request);

      /**
       * @summary 删除一个 API 密钥凭证提供商
       *
       * @param request DeleteAPIKeyCredentialProviderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAPIKeyCredentialProviderResponse
       */
      Models::DeleteAPIKeyCredentialProviderResponse deleteAPIKeyCredentialProviderWithOptions(const Models::DeleteAPIKeyCredentialProviderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除一个 API 密钥凭证提供商
       *
       * @param request DeleteAPIKeyCredentialProviderRequest
       * @return DeleteAPIKeyCredentialProviderResponse
       */
      Models::DeleteAPIKeyCredentialProviderResponse deleteAPIKeyCredentialProvider(const Models::DeleteAPIKeyCredentialProviderRequest &request);

      /**
       * @summary 删除IdentityProvider
       *
       * @param request DeleteClientSecretRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteClientSecretResponse
       */
      Models::DeleteClientSecretResponse deleteClientSecretWithOptions(const Models::DeleteClientSecretRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除IdentityProvider
       *
       * @param request DeleteClientSecretRequest
       * @return DeleteClientSecretResponse
       */
      Models::DeleteClientSecretResponse deleteClientSecret(const Models::DeleteClientSecretRequest &request);

      /**
       * @summary 删除IdentityProvider
       *
       * @param request DeleteIdentityProviderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteIdentityProviderResponse
       */
      Models::DeleteIdentityProviderResponse deleteIdentityProviderWithOptions(const Models::DeleteIdentityProviderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除IdentityProvider
       *
       * @param request DeleteIdentityProviderRequest
       * @return DeleteIdentityProviderResponse
       */
      Models::DeleteIdentityProviderResponse deleteIdentityProvider(const Models::DeleteIdentityProviderRequest &request);

      /**
       * @summary 删除 OAuth2 凭证提供商
       *
       * @param request DeleteOAuth2CredentialProviderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteOAuth2CredentialProviderResponse
       */
      Models::DeleteOAuth2CredentialProviderResponse deleteOAuth2CredentialProviderWithOptions(const Models::DeleteOAuth2CredentialProviderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除 OAuth2 凭证提供商
       *
       * @param request DeleteOAuth2CredentialProviderRequest
       * @return DeleteOAuth2CredentialProviderResponse
       */
      Models::DeleteOAuth2CredentialProviderResponse deleteOAuth2CredentialProvider(const Models::DeleteOAuth2CredentialProviderRequest &request);

      /**
       * @summary 删除一个权限策略
       *
       * @param request DeletePolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePolicyResponse
       */
      Models::DeletePolicyResponse deletePolicyWithOptions(const Models::DeletePolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除一个权限策略
       *
       * @param request DeletePolicyRequest
       * @return DeletePolicyResponse
       */
      Models::DeletePolicyResponse deletePolicy(const Models::DeletePolicyRequest &request);

      /**
       * @summary 删除一个权限策略集合
       *
       * @param request DeletePolicySetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePolicySetResponse
       */
      Models::DeletePolicySetResponse deletePolicySetWithOptions(const Models::DeletePolicySetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除一个权限策略集合
       *
       * @param request DeletePolicySetRequest
       * @return DeletePolicySetResponse
       */
      Models::DeletePolicySetResponse deletePolicySet(const Models::DeletePolicySetRequest &request);

      /**
       * @summary 删除Role
       *
       * @param request DeleteRoleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRoleResponse
       */
      Models::DeleteRoleResponse deleteRoleWithOptions(const Models::DeleteRoleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除Role
       *
       * @param request DeleteRoleRequest
       * @return DeleteRoleResponse
       */
      Models::DeleteRoleResponse deleteRole(const Models::DeleteRoleRequest &request);

      /**
       * @summary 网关取消关联策略集
       *
       * @param request DeleteRoleAssignmentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRoleAssignmentResponse
       */
      Models::DeleteRoleAssignmentResponse deleteRoleAssignmentWithOptions(const Models::DeleteRoleAssignmentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 网关取消关联策略集
       *
       * @param request DeleteRoleAssignmentRequest
       * @return DeleteRoleAssignmentResponse
       */
      Models::DeleteRoleAssignmentResponse deleteRoleAssignment(const Models::DeleteRoleAssignmentRequest &request);

      /**
       * @summary 删除WorkloadIdentity
       *
       * @param request DeleteSAMLIdentityProviderCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSAMLIdentityProviderCertificateResponse
       */
      Models::DeleteSAMLIdentityProviderCertificateResponse deleteSAMLIdentityProviderCertificateWithOptions(const Models::DeleteSAMLIdentityProviderCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除WorkloadIdentity
       *
       * @param request DeleteSAMLIdentityProviderCertificateRequest
       * @return DeleteSAMLIdentityProviderCertificateResponse
       */
      Models::DeleteSAMLIdentityProviderCertificateResponse deleteSAMLIdentityProviderCertificate(const Models::DeleteSAMLIdentityProviderCertificateRequest &request);

      /**
       * @summary 删除一个指定的凭证库。
       *
       * @param request DeleteTokenVaultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTokenVaultResponse
       */
      Models::DeleteTokenVaultResponse deleteTokenVaultWithOptions(const Models::DeleteTokenVaultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除一个指定的凭证库。
       *
       * @param request DeleteTokenVaultRequest
       * @return DeleteTokenVaultResponse
       */
      Models::DeleteTokenVaultResponse deleteTokenVault(const Models::DeleteTokenVaultRequest &request);

      /**
       * @summary 删除User
       *
       * @param request DeleteUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteUserResponse
       */
      Models::DeleteUserResponse deleteUserWithOptions(const Models::DeleteUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除User
       *
       * @param request DeleteUserRequest
       * @return DeleteUserResponse
       */
      Models::DeleteUserResponse deleteUser(const Models::DeleteUserRequest &request);

      /**
       * @summary 删除UserPool
       *
       * @param request DeleteUserPoolRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteUserPoolResponse
       */
      Models::DeleteUserPoolResponse deleteUserPoolWithOptions(const Models::DeleteUserPoolRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除UserPool
       *
       * @param request DeleteUserPoolRequest
       * @return DeleteUserPoolResponse
       */
      Models::DeleteUserPoolResponse deleteUserPool(const Models::DeleteUserPoolRequest &request);

      /**
       * @summary 删除WorkloadIdentity
       *
       * @param request DeleteUserPoolClientRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteUserPoolClientResponse
       */
      Models::DeleteUserPoolClientResponse deleteUserPoolClientWithOptions(const Models::DeleteUserPoolClientRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除WorkloadIdentity
       *
       * @param request DeleteUserPoolClientRequest
       * @return DeleteUserPoolClientResponse
       */
      Models::DeleteUserPoolClientResponse deleteUserPoolClient(const Models::DeleteUserPoolClientRequest &request);

      /**
       * @summary 删除WorkloadIdentity
       *
       * @param request DeleteWorkloadIdentityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteWorkloadIdentityResponse
       */
      Models::DeleteWorkloadIdentityResponse deleteWorkloadIdentityWithOptions(const Models::DeleteWorkloadIdentityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除WorkloadIdentity
       *
       * @param request DeleteWorkloadIdentityRequest
       * @return DeleteWorkloadIdentityResponse
       */
      Models::DeleteWorkloadIdentityResponse deleteWorkloadIdentity(const Models::DeleteWorkloadIdentityRequest &request);

      /**
       * @summary 网关取消关联策略集
       *
       * @param request DetachPolicySetFromGatewayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetachPolicySetFromGatewayResponse
       */
      Models::DetachPolicySetFromGatewayResponse detachPolicySetFromGatewayWithOptions(const Models::DetachPolicySetFromGatewayRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 网关取消关联策略集
       *
       * @param request DetachPolicySetFromGatewayRequest
       * @return DetachPolicySetFromGatewayResponse
       */
      Models::DetachPolicySetFromGatewayResponse detachPolicySetFromGateway(const Models::DetachPolicySetFromGatewayRequest &request);

      /**
       * @summary 查询一个 API 密钥凭证提供商
       *
       * @param request GetAPIKeyCredentialProviderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAPIKeyCredentialProviderResponse
       */
      Models::GetAPIKeyCredentialProviderResponse getAPIKeyCredentialProviderWithOptions(const Models::GetAPIKeyCredentialProviderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询一个 API 密钥凭证提供商
       *
       * @param request GetAPIKeyCredentialProviderRequest
       * @return GetAPIKeyCredentialProviderResponse
       */
      Models::GetAPIKeyCredentialProviderResponse getAPIKeyCredentialProvider(const Models::GetAPIKeyCredentialProviderRequest &request);

      /**
       * @summary 查询网关策略配置
       *
       * @param request GetGatewayPolicyConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetGatewayPolicyConfigResponse
       */
      Models::GetGatewayPolicyConfigResponse getGatewayPolicyConfigWithOptions(const Models::GetGatewayPolicyConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询网关策略配置
       *
       * @param request GetGatewayPolicyConfigRequest
       * @return GetGatewayPolicyConfigResponse
       */
      Models::GetGatewayPolicyConfigResponse getGatewayPolicyConfig(const Models::GetGatewayPolicyConfigRequest &request);

      /**
       * @summary 创建应用
       *
       * @param request GetIdentityProviderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetIdentityProviderResponse
       */
      Models::GetIdentityProviderResponse getIdentityProviderWithOptions(const Models::GetIdentityProviderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建应用
       *
       * @param request GetIdentityProviderRequest
       * @return GetIdentityProviderResponse
       */
      Models::GetIdentityProviderResponse getIdentityProvider(const Models::GetIdentityProviderRequest &request);

      /**
       * @summary 查询 OAuth2 凭证提供商
       *
       * @param request GetOAuth2CredentialProviderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOAuth2CredentialProviderResponse
       */
      Models::GetOAuth2CredentialProviderResponse getOAuth2CredentialProviderWithOptions(const Models::GetOAuth2CredentialProviderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询 OAuth2 凭证提供商
       *
       * @param request GetOAuth2CredentialProviderRequest
       * @return GetOAuth2CredentialProviderResponse
       */
      Models::GetOAuth2CredentialProviderResponse getOAuth2CredentialProvider(const Models::GetOAuth2CredentialProviderRequest &request);

      /**
       * @summary 查询一个 权限策略
       *
       * @param request GetPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPolicyResponse
       */
      Models::GetPolicyResponse getPolicyWithOptions(const Models::GetPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询一个 权限策略
       *
       * @param request GetPolicyRequest
       * @return GetPolicyResponse
       */
      Models::GetPolicyResponse getPolicy(const Models::GetPolicyRequest &request);

      /**
       * @summary 查询一个 权限策略集合
       *
       * @param request GetPolicySetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPolicySetResponse
       */
      Models::GetPolicySetResponse getPolicySetWithOptions(const Models::GetPolicySetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询一个 权限策略集合
       *
       * @param request GetPolicySetRequest
       * @return GetPolicySetResponse
       */
      Models::GetPolicySetResponse getPolicySet(const Models::GetPolicySetRequest &request);

      /**
       * @summary 获取Role
       *
       * @param request GetRoleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRoleResponse
       */
      Models::GetRoleResponse getRoleWithOptions(const Models::GetRoleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取Role
       *
       * @param request GetRoleRequest
       * @return GetRoleResponse
       */
      Models::GetRoleResponse getRole(const Models::GetRoleRequest &request);

      /**
       * @summary 创建应用
       *
       * @param request GetSAMLIdentityProviderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSAMLIdentityProviderResponse
       */
      Models::GetSAMLIdentityProviderResponse getSAMLIdentityProviderWithOptions(const Models::GetSAMLIdentityProviderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建应用
       *
       * @param request GetSAMLIdentityProviderRequest
       * @return GetSAMLIdentityProviderResponse
       */
      Models::GetSAMLIdentityProviderResponse getSAMLIdentityProvider(const Models::GetSAMLIdentityProviderRequest &request);

      /**
       * @summary 创建应用
       *
       * @param request GetSAMLServiceProviderInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSAMLServiceProviderInfoResponse
       */
      Models::GetSAMLServiceProviderInfoResponse getSAMLServiceProviderInfoWithOptions(const Models::GetSAMLServiceProviderInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建应用
       *
       * @param request GetSAMLServiceProviderInfoRequest
       * @return GetSAMLServiceProviderInfoResponse
       */
      Models::GetSAMLServiceProviderInfoResponse getSAMLServiceProviderInfo(const Models::GetSAMLServiceProviderInfoRequest &request);

      /**
       * @summary 获取指定凭证库的详细配置。
       *
       * @param request GetTokenVaultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTokenVaultResponse
       */
      Models::GetTokenVaultResponse getTokenVaultWithOptions(const Models::GetTokenVaultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取指定凭证库的详细配置。
       *
       * @param request GetTokenVaultRequest
       * @return GetTokenVaultResponse
       */
      Models::GetTokenVaultResponse getTokenVault(const Models::GetTokenVaultRequest &request);

      /**
       * @summary 获取用户
       *
       * @param request GetUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUserResponse
       */
      Models::GetUserResponse getUserWithOptions(const Models::GetUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取用户
       *
       * @param request GetUserRequest
       * @return GetUserResponse
       */
      Models::GetUserResponse getUser(const Models::GetUserRequest &request);

      /**
       * @summary 获取UserPool
       *
       * @param request GetUserPoolRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUserPoolResponse
       */
      Models::GetUserPoolResponse getUserPoolWithOptions(const Models::GetUserPoolRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取UserPool
       *
       * @param request GetUserPoolRequest
       * @return GetUserPoolResponse
       */
      Models::GetUserPoolResponse getUserPool(const Models::GetUserPoolRequest &request);

      /**
       * @summary 创建应用
       *
       * @param request GetUserPoolClientRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUserPoolClientResponse
       */
      Models::GetUserPoolClientResponse getUserPoolClientWithOptions(const Models::GetUserPoolClientRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建应用
       *
       * @param request GetUserPoolClientRequest
       * @return GetUserPoolClientResponse
       */
      Models::GetUserPoolClientResponse getUserPoolClient(const Models::GetUserPoolClientRequest &request);

      /**
       * @summary 创建应用
       *
       * @param request GetWorkloadIdentityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetWorkloadIdentityResponse
       */
      Models::GetWorkloadIdentityResponse getWorkloadIdentityWithOptions(const Models::GetWorkloadIdentityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建应用
       *
       * @param request GetWorkloadIdentityRequest
       * @return GetWorkloadIdentityResponse
       */
      Models::GetWorkloadIdentityResponse getWorkloadIdentity(const Models::GetWorkloadIdentityRequest &request);

      /**
       * @summary 列出 API 密钥凭证提供商
       *
       * @param request ListAPIKeyCredentialProvidersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAPIKeyCredentialProvidersResponse
       */
      Models::ListAPIKeyCredentialProvidersResponse listAPIKeyCredentialProvidersWithOptions(const Models::ListAPIKeyCredentialProvidersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 列出 API 密钥凭证提供商
       *
       * @param request ListAPIKeyCredentialProvidersRequest
       * @return ListAPIKeyCredentialProvidersResponse
       */
      Models::ListAPIKeyCredentialProvidersResponse listAPIKeyCredentialProviders(const Models::ListAPIKeyCredentialProvidersRequest &request);

      /**
       * @summary 列出IdentityProvider
       *
       * @param request ListClientSecretsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListClientSecretsResponse
       */
      Models::ListClientSecretsResponse listClientSecretsWithOptions(const Models::ListClientSecretsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 列出IdentityProvider
       *
       * @param request ListClientSecretsRequest
       * @return ListClientSecretsResponse
       */
      Models::ListClientSecretsResponse listClientSecrets(const Models::ListClientSecretsRequest &request);

      /**
       * @summary 列出IdentityProvider
       *
       * @param request ListIdentityProvidersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListIdentityProvidersResponse
       */
      Models::ListIdentityProvidersResponse listIdentityProvidersWithOptions(const Models::ListIdentityProvidersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 列出IdentityProvider
       *
       * @param request ListIdentityProvidersRequest
       * @return ListIdentityProvidersResponse
       */
      Models::ListIdentityProvidersResponse listIdentityProviders(const Models::ListIdentityProvidersRequest &request);

      /**
       * @summary 列出 OAuth2 凭证提供商
       *
       * @param request ListOAuth2CredentialProvidersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListOAuth2CredentialProvidersResponse
       */
      Models::ListOAuth2CredentialProvidersResponse listOAuth2CredentialProvidersWithOptions(const Models::ListOAuth2CredentialProvidersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 列出 OAuth2 凭证提供商
       *
       * @param request ListOAuth2CredentialProvidersRequest
       * @return ListOAuth2CredentialProvidersResponse
       */
      Models::ListOAuth2CredentialProvidersResponse listOAuth2CredentialProviders(const Models::ListOAuth2CredentialProvidersRequest &request);

      /**
       * @summary 列出权限策略
       *
       * @param request ListPoliciesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPoliciesResponse
       */
      Models::ListPoliciesResponse listPoliciesWithOptions(const Models::ListPoliciesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 列出权限策略
       *
       * @param request ListPoliciesRequest
       * @return ListPoliciesResponse
       */
      Models::ListPoliciesResponse listPolicies(const Models::ListPoliciesRequest &request);

      /**
       * @summary 列出网关策略配置
       *
       * @param request ListPolicySetAttachedGatewaysRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPolicySetAttachedGatewaysResponse
       */
      Models::ListPolicySetAttachedGatewaysResponse listPolicySetAttachedGatewaysWithOptions(const Models::ListPolicySetAttachedGatewaysRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 列出网关策略配置
       *
       * @param request ListPolicySetAttachedGatewaysRequest
       * @return ListPolicySetAttachedGatewaysResponse
       */
      Models::ListPolicySetAttachedGatewaysResponse listPolicySetAttachedGateways(const Models::ListPolicySetAttachedGatewaysRequest &request);

      /**
       * @summary 列出权限策略集合
       *
       * @param request ListPolicySetsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPolicySetsResponse
       */
      Models::ListPolicySetsResponse listPolicySetsWithOptions(const Models::ListPolicySetsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 列出权限策略集合
       *
       * @param request ListPolicySetsRequest
       * @return ListPolicySetsResponse
       */
      Models::ListPolicySetsResponse listPolicySets(const Models::ListPolicySetsRequest &request);

      /**
       * @summary 列出网关策略配置
       *
       * @param request ListRoleAssignmentsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRoleAssignmentsResponse
       */
      Models::ListRoleAssignmentsResponse listRoleAssignmentsWithOptions(const Models::ListRoleAssignmentsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 列出网关策略配置
       *
       * @param request ListRoleAssignmentsRequest
       * @return ListRoleAssignmentsResponse
       */
      Models::ListRoleAssignmentsResponse listRoleAssignments(const Models::ListRoleAssignmentsRequest &request);

      /**
       * @summary 列出Roles
       *
       * @param request ListRolesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRolesResponse
       */
      Models::ListRolesResponse listRolesWithOptions(const Models::ListRolesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 列出Roles
       *
       * @param request ListRolesRequest
       * @return ListRolesResponse
       */
      Models::ListRolesResponse listRoles(const Models::ListRolesRequest &request);

      /**
       * @summary 列出IdentityProvider
       *
       * @param request ListSAMLIdentityProviderCertificatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSAMLIdentityProviderCertificatesResponse
       */
      Models::ListSAMLIdentityProviderCertificatesResponse listSAMLIdentityProviderCertificatesWithOptions(const Models::ListSAMLIdentityProviderCertificatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 列出IdentityProvider
       *
       * @param request ListSAMLIdentityProviderCertificatesRequest
       * @return ListSAMLIdentityProviderCertificatesResponse
       */
      Models::ListSAMLIdentityProviderCertificatesResponse listSAMLIdentityProviderCertificates(const Models::ListSAMLIdentityProviderCertificatesRequest &request);

      /**
       * @summary 分页列出账户下所有的 API 密钥凭证
       *
       * @param request ListTokenVaultsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTokenVaultsResponse
       */
      Models::ListTokenVaultsResponse listTokenVaultsWithOptions(const Models::ListTokenVaultsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 分页列出账户下所有的 API 密钥凭证
       *
       * @param request ListTokenVaultsRequest
       * @return ListTokenVaultsResponse
       */
      Models::ListTokenVaultsResponse listTokenVaults(const Models::ListTokenVaultsRequest &request);

      /**
       * @summary 列出IdentityProvider
       *
       * @param request ListUserPoolClientsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUserPoolClientsResponse
       */
      Models::ListUserPoolClientsResponse listUserPoolClientsWithOptions(const Models::ListUserPoolClientsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 列出IdentityProvider
       *
       * @param request ListUserPoolClientsRequest
       * @return ListUserPoolClientsResponse
       */
      Models::ListUserPoolClientsResponse listUserPoolClients(const Models::ListUserPoolClientsRequest &request);

      /**
       * @summary 列出IdentityProvider
       *
       * @param request ListUserPoolsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUserPoolsResponse
       */
      Models::ListUserPoolsResponse listUserPoolsWithOptions(const Models::ListUserPoolsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 列出IdentityProvider
       *
       * @param request ListUserPoolsRequest
       * @return ListUserPoolsResponse
       */
      Models::ListUserPoolsResponse listUserPools(const Models::ListUserPoolsRequest &request);

      /**
       * @summary 列出用户
       *
       * @param request ListUsersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUsersResponse
       */
      Models::ListUsersResponse listUsersWithOptions(const Models::ListUsersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 列出用户
       *
       * @param request ListUsersRequest
       * @return ListUsersResponse
       */
      Models::ListUsersResponse listUsers(const Models::ListUsersRequest &request);

      /**
       * @summary 列出IdentityProvider
       *
       * @param request ListWorkloadIdentitiesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListWorkloadIdentitiesResponse
       */
      Models::ListWorkloadIdentitiesResponse listWorkloadIdentitiesWithOptions(const Models::ListWorkloadIdentitiesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 列出IdentityProvider
       *
       * @param request ListWorkloadIdentitiesRequest
       * @return ListWorkloadIdentitiesResponse
       */
      Models::ListWorkloadIdentitiesResponse listWorkloadIdentities(const Models::ListWorkloadIdentitiesRequest &request);

      /**
       * @summary 创建WorkloadIdentity
       *
       * @param tmpReq SetSAMLIdentityProviderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetSAMLIdentityProviderResponse
       */
      Models::SetSAMLIdentityProviderResponse setSAMLIdentityProviderWithOptions(const Models::SetSAMLIdentityProviderRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建WorkloadIdentity
       *
       * @param request SetSAMLIdentityProviderRequest
       * @return SetSAMLIdentityProviderResponse
       */
      Models::SetSAMLIdentityProviderResponse setSAMLIdentityProvider(const Models::SetSAMLIdentityProviderRequest &request);

      /**
       * @summary 更新一个 API 密钥凭证提供商
       *
       * @param request UpdateAPIKeyCredentialProviderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAPIKeyCredentialProviderResponse
       */
      Models::UpdateAPIKeyCredentialProviderResponse updateAPIKeyCredentialProviderWithOptions(const Models::UpdateAPIKeyCredentialProviderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新一个 API 密钥凭证提供商
       *
       * @param request UpdateAPIKeyCredentialProviderRequest
       * @return UpdateAPIKeyCredentialProviderResponse
       */
      Models::UpdateAPIKeyCredentialProviderResponse updateAPIKeyCredentialProvider(const Models::UpdateAPIKeyCredentialProviderRequest &request);

      /**
       * @summary 查询网关策略配置
       *
       * @param request UpdateGatewayPolicyConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateGatewayPolicyConfigResponse
       */
      Models::UpdateGatewayPolicyConfigResponse updateGatewayPolicyConfigWithOptions(const Models::UpdateGatewayPolicyConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询网关策略配置
       *
       * @param request UpdateGatewayPolicyConfigRequest
       * @return UpdateGatewayPolicyConfigResponse
       */
      Models::UpdateGatewayPolicyConfigResponse updateGatewayPolicyConfig(const Models::UpdateGatewayPolicyConfigRequest &request);

      /**
       * @summary 更新IdentityProvider
       *
       * @param tmpReq UpdateIdentityProviderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateIdentityProviderResponse
       */
      Models::UpdateIdentityProviderResponse updateIdentityProviderWithOptions(const Models::UpdateIdentityProviderRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新IdentityProvider
       *
       * @param request UpdateIdentityProviderRequest
       * @return UpdateIdentityProviderResponse
       */
      Models::UpdateIdentityProviderResponse updateIdentityProvider(const Models::UpdateIdentityProviderRequest &request);

      /**
       * @summary 修改 OAuth2 凭证提供商
       *
       * @param tmpReq UpdateOAuth2CredentialProviderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateOAuth2CredentialProviderResponse
       */
      Models::UpdateOAuth2CredentialProviderResponse updateOAuth2CredentialProviderWithOptions(const Models::UpdateOAuth2CredentialProviderRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改 OAuth2 凭证提供商
       *
       * @param request UpdateOAuth2CredentialProviderRequest
       * @return UpdateOAuth2CredentialProviderResponse
       */
      Models::UpdateOAuth2CredentialProviderResponse updateOAuth2CredentialProvider(const Models::UpdateOAuth2CredentialProviderRequest &request);

      /**
       * @summary 更新一个权限策略
       *
       * @param tmpReq UpdatePolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePolicyResponse
       */
      Models::UpdatePolicyResponse updatePolicyWithOptions(const Models::UpdatePolicyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新一个权限策略
       *
       * @param request UpdatePolicyRequest
       * @return UpdatePolicyResponse
       */
      Models::UpdatePolicyResponse updatePolicy(const Models::UpdatePolicyRequest &request);

      /**
       * @summary 更新一个权限策略集合
       *
       * @param request UpdatePolicySetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePolicySetResponse
       */
      Models::UpdatePolicySetResponse updatePolicySetWithOptions(const Models::UpdatePolicySetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新一个权限策略集合
       *
       * @param request UpdatePolicySetRequest
       * @return UpdatePolicySetResponse
       */
      Models::UpdatePolicySetResponse updatePolicySet(const Models::UpdatePolicySetRequest &request);

      /**
       * @summary 更新Role
       *
       * @param request UpdateRoleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRoleResponse
       */
      Models::UpdateRoleResponse updateRoleWithOptions(const Models::UpdateRoleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新Role
       *
       * @param request UpdateRoleRequest
       * @return UpdateRoleResponse
       */
      Models::UpdateRoleResponse updateRole(const Models::UpdateRoleRequest &request);

      /**
       * @summary 更新凭证库。
       *
       * @param request UpdateTokenVaultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTokenVaultResponse
       */
      Models::UpdateTokenVaultResponse updateTokenVaultWithOptions(const Models::UpdateTokenVaultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新凭证库。
       *
       * @param request UpdateTokenVaultRequest
       * @return UpdateTokenVaultResponse
       */
      Models::UpdateTokenVaultResponse updateTokenVault(const Models::UpdateTokenVaultRequest &request);

      /**
       * @summary 更新IdentityProvider
       *
       * @param request UpdateUserPoolRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateUserPoolResponse
       */
      Models::UpdateUserPoolResponse updateUserPoolWithOptions(const Models::UpdateUserPoolRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新IdentityProvider
       *
       * @param request UpdateUserPoolRequest
       * @return UpdateUserPoolResponse
       */
      Models::UpdateUserPoolResponse updateUserPool(const Models::UpdateUserPoolRequest &request);

      /**
       * @summary 创建应用
       *
       * @param tmpReq UpdateUserPoolClientRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateUserPoolClientResponse
       */
      Models::UpdateUserPoolClientResponse updateUserPoolClientWithOptions(const Models::UpdateUserPoolClientRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建应用
       *
       * @param request UpdateUserPoolClientRequest
       * @return UpdateUserPoolClientResponse
       */
      Models::UpdateUserPoolClientResponse updateUserPoolClient(const Models::UpdateUserPoolClientRequest &request);

      /**
       * @summary 创建应用
       *
       * @param tmpReq UpdateWorkloadIdentityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateWorkloadIdentityResponse
       */
      Models::UpdateWorkloadIdentityResponse updateWorkloadIdentityWithOptions(const Models::UpdateWorkloadIdentityRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建应用
       *
       * @param request UpdateWorkloadIdentityRequest
       * @return UpdateWorkloadIdentityResponse
       */
      Models::UpdateWorkloadIdentityResponse updateWorkloadIdentity(const Models::UpdateWorkloadIdentityRequest &request);
  };
} // namespace AlibabaCloud
} // namespace AgentIdentity20250901
#endif
