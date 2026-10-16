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
       * @summary Attaches a policy set to a gateway.
       *
       * @description Attaches a policy set to a target gateway.
       * The attachment relationship is 1:1. A gateway can have only one policy set attached at a time. If you attach a policy set multiple times, the latest attachment takes effect. You can specify the policy enforcement mode by using the EnforcementMode parameter. Valid values: ENFORCE (blocks non-compliant requests) and LOG_ONLY (records non-compliant requests but allows them, which is commonly used for canary release observation).
       *
       * @param request AttachPolicySetToGatewayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachPolicySetToGatewayResponse
       */
      Models::AttachPolicySetToGatewayResponse attachPolicySetToGatewayWithOptions(const Models::AttachPolicySetToGatewayRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Attaches a policy set to a gateway.
       *
       * @description Attaches a policy set to a target gateway.
       * The attachment relationship is 1:1. A gateway can have only one policy set attached at a time. If you attach a policy set multiple times, the latest attachment takes effect. You can specify the policy enforcement mode by using the EnforcementMode parameter. Valid values: ENFORCE (blocks non-compliant requests) and LOG_ONLY (records non-compliant requests but allows them, which is commonly used for canary release observation).
       *
       * @param request AttachPolicySetToGatewayRequest
       * @return AttachPolicySetToGatewayResponse
       */
      Models::AttachPolicySetToGatewayResponse attachPolicySetToGateway(const Models::AttachPolicySetToGatewayRequest &request);

      /**
       * @summary Creates an API key credential provider.
       *
       * @param request CreateAPIKeyCredentialProviderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAPIKeyCredentialProviderResponse
       */
      Models::CreateAPIKeyCredentialProviderResponse createAPIKeyCredentialProviderWithOptions(const Models::CreateAPIKeyCredentialProviderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an API key credential provider.
       *
       * @param request CreateAPIKeyCredentialProviderRequest
       * @return CreateAPIKeyCredentialProviderResponse
       */
      Models::CreateAPIKeyCredentialProviderResponse createAPIKeyCredentialProvider(const Models::CreateAPIKeyCredentialProviderRequest &request);

      /**
       * @summary Creates a workload identity.
       *
       * @description The response includes the plaintext client secret (ClientSecretValue). For security reasons, the plaintext secret is returned only once upon creation and cannot be retrieved later. Store it securely.
       *
       * @param request CreateClientSecretRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateClientSecretResponse
       */
      Models::CreateClientSecretResponse createClientSecretWithOptions(const Models::CreateClientSecretRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a workload identity.
       *
       * @description The response includes the plaintext client secret (ClientSecretValue). For security reasons, the plaintext secret is returned only once upon creation and cannot be retrieved later. Store it securely.
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
       * @summary Creates an OAuth 2.0 credential provider.
       *
       * @param tmpReq CreateOAuth2CredentialProviderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateOAuth2CredentialProviderResponse
       */
      Models::CreateOAuth2CredentialProviderResponse createOAuth2CredentialProviderWithOptions(const Models::CreateOAuth2CredentialProviderRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an OAuth 2.0 credential provider.
       *
       * @param request CreateOAuth2CredentialProviderRequest
       * @return CreateOAuth2CredentialProviderResponse
       */
      Models::CreateOAuth2CredentialProviderResponse createOAuth2CredentialProvider(const Models::CreateOAuth2CredentialProviderRequest &request);

      /**
       * @summary Creates an access policy.
       *
       * @description Calls the CreatePolicy operation to add a policy to an existing policy set. The policy defines specific control rules, such as throttling thresholds, admission conditions, and allow or block actions, through the Definition field. After a policy set is mounted to a gateway, requests on the gateway are evaluated and controlled based on the merged results of all policies in the policy set.
       *
       * @param tmpReq CreatePolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePolicyResponse
       */
      Models::CreatePolicyResponse createPolicyWithOptions(const Models::CreatePolicyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an access policy.
       *
       * @description Calls the CreatePolicy operation to add a policy to an existing policy set. The policy defines specific control rules, such as throttling thresholds, admission conditions, and allow or block actions, through the Definition field. After a policy set is mounted to a gateway, requests on the gateway are evaluated and controlled based on the merged results of all policies in the policy set.
       *
       * @param request CreatePolicyRequest
       * @return CreatePolicyResponse
       */
      Models::CreatePolicyResponse createPolicy(const Models::CreatePolicyRequest &request);

      /**
       * @summary Creates an access policy set.
       *
       * @description Calls CreatePolicySet to create a policy set in the current account. A policy set is a container for a group of policies. After a policy set is mounted to a gateway, all policies in the set evaluate requests to the gateway as a whole.
       *
       * @param request CreatePolicySetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePolicySetResponse
       */
      Models::CreatePolicySetResponse createPolicySetWithOptions(const Models::CreatePolicySetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an access policy set.
       *
       * @description Calls CreatePolicySet to create a policy set in the current account. A policy set is a container for a group of policies. After a policy set is mounted to a gateway, all policies in the set evaluate requests to the gateway as a whole.
       *
       * @param request CreatePolicySetRequest
       * @return CreatePolicySetResponse
       */
      Models::CreatePolicySetResponse createPolicySet(const Models::CreatePolicySetRequest &request);

      /**
       * @summary Creates a role.
       *
       * @description Users in a user pool can be allocated roles to enable quick authorization. Administrators can specify permissions for roles in an access policy.
       * When a user pool is created, the platform automatically provisions a default role, and newly created users are automatically allocated this default role. This operation creates a custom role of the Manual type, which must be explicitly allocated to users by calling CreateRoleAssignment.
       *
       * @param request CreateRoleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRoleResponse
       */
      Models::CreateRoleResponse createRoleWithOptions(const Models::CreateRoleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a role.
       *
       * @description Users in a user pool can be allocated roles to enable quick authorization. Administrators can specify permissions for roles in an access policy.
       * When a user pool is created, the platform automatically provisions a default role, and newly created users are automatically allocated this default role. This operation creates a custom role of the Manual type, which must be explicitly allocated to users by calling CreateRoleAssignment.
       *
       * @param request CreateRoleRequest
       * @return CreateRoleResponse
       */
      Models::CreateRoleResponse createRole(const Models::CreateRoleRequest &request);

      /**
       * @summary Associates a policy set with a gateway.
       *
       * @description Users must be assigned roles to complete authorization. When a user is created through JIT, a default role is automatically assigned. Administrators can use this operation to assign additional custom roles to users.
       * PrincipalType currently supports only User. A single identity can have multiple role assignments.
       *
       * @param request CreateRoleAssignmentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRoleAssignmentResponse
       */
      Models::CreateRoleAssignmentResponse createRoleAssignmentWithOptions(const Models::CreateRoleAssignmentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Associates a policy set with a gateway.
       *
       * @description Users must be assigned roles to complete authorization. When a user is created through JIT, a default role is automatically assigned. Administrators can use this operation to assign additional custom roles to users.
       * PrincipalType currently supports only User. A single identity can have multiple role assignments.
       *
       * @param request CreateRoleAssignmentRequest
       * @return CreateRoleAssignmentResponse
       */
      Models::CreateRoleAssignmentResponse createRoleAssignment(const Models::CreateRoleAssignmentRequest &request);

      /**
       * @summary Creates a token vault.
       *
       * @description Calls the CreateTokenVault operation to create a token vault within the current Alibaba Cloud account. A token vault is a container used by the AgentIdentity service to securely store sensitive credentials such as OAuth2 tokens and API keys. Each token is encrypted when it is written to the vault.
       * You can specify the encryption configuration when you create the vault. By default, a service-managed key (SERVICE_MANAGED_KEY) is used. For greater control over the key, you can use a customer-managed Key Management Service (KMS) key (CUSTOMER_MANAGED_KEY). To use a customer-managed key, specify the Alibaba Cloud Resource Name (ARN) of the KMS key and use the RoleArn parameter to authorize the AgentIdentity service to access the KMS key.
       *
       * @param tmpReq CreateTokenVaultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTokenVaultResponse
       */
      Models::CreateTokenVaultResponse createTokenVaultWithOptions(const Models::CreateTokenVaultRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a token vault.
       *
       * @description Calls the CreateTokenVault operation to create a token vault within the current Alibaba Cloud account. A token vault is a container used by the AgentIdentity service to securely store sensitive credentials such as OAuth2 tokens and API keys. Each token is encrypted when it is written to the vault.
       * You can specify the encryption configuration when you create the vault. By default, a service-managed key (SERVICE_MANAGED_KEY) is used. For greater control over the key, you can use a customer-managed Key Management Service (KMS) key (CUSTOMER_MANAGED_KEY). To use a customer-managed key, specify the Alibaba Cloud Resource Name (ARN) of the KMS key and use the RoleArn parameter to authorize the AgentIdentity service to access the KMS key.
       *
       * @param request CreateTokenVaultRequest
       * @return CreateTokenVaultResponse
       */
      Models::CreateTokenVaultResponse createTokenVault(const Models::CreateTokenVaultRequest &request);

      /**
       * @summary Creates a user in a user pool.
       *
       * @description Creates a user in a specified user pool. The type of the created user is Manual, and the default status is Enabled. The username must be unique within the user pool and can contain letters, digits, underscores (_), periods (.), and hyphens (-), and must be 3 to 128 characters in length. The email address must be unique within the user pool. After the user is created, you can call the SetUserPassword operation to set a logon password for the user and call the CreateRoleAssignment operation to assign a role to the user.
       *
       * @param request CreateUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateUserResponse
       */
      Models::CreateUserResponse createUserWithOptions(const Models::CreateUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a user in a user pool.
       *
       * @description Creates a user in a specified user pool. The type of the created user is Manual, and the default status is Enabled. The username must be unique within the user pool and can contain letters, digits, underscores (_), periods (.), and hyphens (-), and must be 3 to 128 characters in length. The email address must be unique within the user pool. After the user is created, you can call the SetUserPassword operation to set a logon password for the user and call the CreateRoleAssignment operation to assign a role to the user.
       *
       * @param request CreateUserRequest
       * @return CreateUserResponse
       */
      Models::CreateUserResponse createUser(const Models::CreateUserRequest &request);

      /**
       * @summary Creates a user pool.
       *
       * @description A user pool is a secure and isolated user folder designed by the Agent Identity platform for the AI agent ecosystem. You can create multiple user pools under a single Alibaba Cloud account for the independent user identity management of different AI agents. When you create a user pool, you only need to specify the name (UserPoolName). The description is optional. After the user pool is created, the platform automatically generates a default role for the user pool. Users subsequently created through SAML SSO just-in-time (JIT) synchronization are automatically allocated this default role.
       *
       * @param request CreateUserPoolRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateUserPoolResponse
       */
      Models::CreateUserPoolResponse createUserPoolWithOptions(const Models::CreateUserPoolRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a user pool.
       *
       * @description A user pool is a secure and isolated user folder designed by the Agent Identity platform for the AI agent ecosystem. You can create multiple user pools under a single Alibaba Cloud account for the independent user identity management of different AI agents. When you create a user pool, you only need to specify the name (UserPoolName). The description is optional. After the user pool is created, the platform automatically generates a default role for the user pool. Users subsequently created through SAML SSO just-in-time (JIT) synchronization are automatically allocated this default role.
       *
       * @param request CreateUserPoolRequest
       * @return CreateUserPoolResponse
       */
      Models::CreateUserPoolResponse createUserPool(const Models::CreateUserPoolRequest &request);

      /**
       * @summary Creates a WorkloadIdentity.
       *
       * @description A client represents an application that is integrated with a user pool. When you create a client, you must specify the client name and redirect URIs. You can configure whether an application secret is required, whether to enforce Proof Key for Code Exchange (PKCE), the access token validity period, and the refresh token validity period. The application scopes are generated by the platform by default. If SecretRequired is set to true, you must call CreateClientSecret to create a client secret.
       *
       * @param tmpReq CreateUserPoolClientRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateUserPoolClientResponse
       */
      Models::CreateUserPoolClientResponse createUserPoolClientWithOptions(const Models::CreateUserPoolClientRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a WorkloadIdentity.
       *
       * @description A client represents an application that is integrated with a user pool. When you create a client, you must specify the client name and redirect URIs. You can configure whether an application secret is required, whether to enforce Proof Key for Code Exchange (PKCE), the access token validity period, and the refresh token validity period. The application scopes are generated by the platform by default. If SecretRequired is set to true, you must call CreateClientSecret to create a client secret.
       *
       * @param request CreateUserPoolClientRequest
       * @return CreateUserPoolClientResponse
       */
      Models::CreateUserPoolClientResponse createUserPoolClient(const Models::CreateUserPoolClientRequest &request);

      /**
       * @summary Create a workload identity for an AI Agent to uniquely identify it.
       *
       * @param tmpReq CreateWorkloadIdentityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateWorkloadIdentityResponse
       */
      Models::CreateWorkloadIdentityResponse createWorkloadIdentityWithOptions(const Models::CreateWorkloadIdentityRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create a workload identity for an AI Agent to uniquely identify it.
       *
       * @param request CreateWorkloadIdentityRequest
       * @return CreateWorkloadIdentityResponse
       */
      Models::CreateWorkloadIdentityResponse createWorkloadIdentity(const Models::CreateWorkloadIdentityRequest &request);

      /**
       * @summary Deletes a specified API key credential provider.
       *
       * @param request DeleteAPIKeyCredentialProviderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAPIKeyCredentialProviderResponse
       */
      Models::DeleteAPIKeyCredentialProviderResponse deleteAPIKeyCredentialProviderWithOptions(const Models::DeleteAPIKeyCredentialProviderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified API key credential provider.
       *
       * @param request DeleteAPIKeyCredentialProviderRequest
       * @return DeleteAPIKeyCredentialProviderResponse
       */
      Models::DeleteAPIKeyCredentialProviderResponse deleteAPIKeyCredentialProvider(const Models::DeleteAPIKeyCredentialProviderRequest &request);

      /**
       * @summary Deletes an identity provider.
       *
       * @description Deletes a specified client secret by client ID and key ID. The secret becomes invalid immediately after deletion, and all OAuth authentication flows that use this secret will fail.
       *
       * @param request DeleteClientSecretRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteClientSecretResponse
       */
      Models::DeleteClientSecretResponse deleteClientSecretWithOptions(const Models::DeleteClientSecretRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an identity provider.
       *
       * @description Deletes a specified client secret by client ID and key ID. The secret becomes invalid immediately after deletion, and all OAuth authentication flows that use this secret will fail.
       *
       * @param request DeleteClientSecretRequest
       * @return DeleteClientSecretResponse
       */
      Models::DeleteClientSecretResponse deleteClientSecret(const Models::DeleteClientSecretRequest &request);

      /**
       * @summary Deletes a specified identity provider.
       *
       * @param request DeleteIdentityProviderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteIdentityProviderResponse
       */
      Models::DeleteIdentityProviderResponse deleteIdentityProviderWithOptions(const Models::DeleteIdentityProviderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified identity provider.
       *
       * @param request DeleteIdentityProviderRequest
       * @return DeleteIdentityProviderResponse
       */
      Models::DeleteIdentityProviderResponse deleteIdentityProvider(const Models::DeleteIdentityProviderRequest &request);

      /**
       * @summary Deletes a specified OAuth 2.0 credential provider.
       *
       * @param request DeleteOAuth2CredentialProviderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteOAuth2CredentialProviderResponse
       */
      Models::DeleteOAuth2CredentialProviderResponse deleteOAuth2CredentialProviderWithOptions(const Models::DeleteOAuth2CredentialProviderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified OAuth 2.0 credential provider.
       *
       * @param request DeleteOAuth2CredentialProviderRequest
       * @return DeleteOAuth2CredentialProviderResponse
       */
      Models::DeleteOAuth2CredentialProviderResponse deleteOAuth2CredentialProvider(const Models::DeleteOAuth2CredentialProviderRequest &request);

      /**
       * @summary Deletes an access policy.
       *
       * @description Calls DeletePolicy to remove a policy from a specified policy set. The policy becomes invalid immediately after deletion, and gateways that depend on the policy set do not need to be remounted.
       *
       * @param request DeletePolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePolicyResponse
       */
      Models::DeletePolicyResponse deletePolicyWithOptions(const Models::DeletePolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an access policy.
       *
       * @description Calls DeletePolicy to remove a policy from a specified policy set. The policy becomes invalid immediately after deletion, and gateways that depend on the policy set do not need to be remounted.
       *
       * @param request DeletePolicyRequest
       * @return DeletePolicyResponse
       */
      Models::DeletePolicyResponse deletePolicy(const Models::DeletePolicyRequest &request);

      /**
       * @summary Deletes an access policy set.
       *
       * @description Calls DeletePolicySet to delete a policy set that is no longer in use.
       * Before deleting the policy set, ensure that it is unmounted from all gateways (you can query this by calling ListPolicySetAttachedGateways) and contains no policies. Otherwise, the deletion fails.
       *
       * @param request DeletePolicySetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePolicySetResponse
       */
      Models::DeletePolicySetResponse deletePolicySetWithOptions(const Models::DeletePolicySetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an access policy set.
       *
       * @description Calls DeletePolicySet to delete a policy set that is no longer in use.
       * Before deleting the policy set, ensure that it is unmounted from all gateways (you can query this by calling ListPolicySetAttachedGateways) and contains no policies. Otherwise, the deletion fails.
       *
       * @param request DeletePolicySetRequest
       * @return DeletePolicySetResponse
       */
      Models::DeletePolicySetResponse deletePolicySet(const Models::DeletePolicySetRequest &request);

      /**
       * @summary Deletes a role.
       *
       * @description Before deletion, the system checks whether the role has any bound users. If role assignments exist, the deletion is rejected. You must call DeleteRoleAssignment to remove the assignments before deleting the role. Default roles (Type=Default) cannot be deleted.
       *
       * @param request DeleteRoleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRoleResponse
       */
      Models::DeleteRoleResponse deleteRoleWithOptions(const Models::DeleteRoleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a role.
       *
       * @description Before deletion, the system checks whether the role has any bound users. If role assignments exist, the deletion is rejected. You must call DeleteRoleAssignment to remove the assignments before deleting the role. Default roles (Type=Default) cannot be deleted.
       *
       * @param request DeleteRoleRequest
       * @return DeleteRoleResponse
       */
      Models::DeleteRoleResponse deleteRole(const Models::DeleteRoleRequest &request);

      /**
       * @summary Disassociates a policy set from a gateway.
       *
       * @description Removes the role assignment relationship between an identity and a role.
       *
       * @param request DeleteRoleAssignmentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRoleAssignmentResponse
       */
      Models::DeleteRoleAssignmentResponse deleteRoleAssignmentWithOptions(const Models::DeleteRoleAssignmentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disassociates a policy set from a gateway.
       *
       * @description Removes the role assignment relationship between an identity and a role.
       *
       * @param request DeleteRoleAssignmentRequest
       * @return DeleteRoleAssignmentResponse
       */
      Models::DeleteRoleAssignmentResponse deleteRoleAssignment(const Models::DeleteRoleAssignmentRequest &request);

      /**
       * @summary Deletes a workload identity.
       *
       * @description Cleans up expired or unused certificates after certificate rotation is complete. Before deleting the certificate, ensure that it is no longer used for SAML assertion signature verification. Otherwise, SSO logon may fail.
       *
       * @param request DeleteSAMLIdentityProviderCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSAMLIdentityProviderCertificateResponse
       */
      Models::DeleteSAMLIdentityProviderCertificateResponse deleteSAMLIdentityProviderCertificateWithOptions(const Models::DeleteSAMLIdentityProviderCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a workload identity.
       *
       * @description Cleans up expired or unused certificates after certificate rotation is complete. Before deleting the certificate, ensure that it is no longer used for SAML assertion signature verification. Otherwise, SSO logon may fail.
       *
       * @param request DeleteSAMLIdentityProviderCertificateRequest
       * @return DeleteSAMLIdentityProviderCertificateResponse
       */
      Models::DeleteSAMLIdentityProviderCertificateResponse deleteSAMLIdentityProviderCertificate(const Models::DeleteSAMLIdentityProviderCertificateRequest &request);

      /**
       * @summary Deletes a specified token vault.
       *
       * @description Call DeleteTokenVault to delete a token vault that is no longer in use.
       * Before deletion, ensure that the token vault is not referenced by any credential provider. Otherwise, the deletion may cause credentials that depend on the token vault to become unavailable. This operation cannot be undone.
       *
       * @param request DeleteTokenVaultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTokenVaultResponse
       */
      Models::DeleteTokenVaultResponse deleteTokenVaultWithOptions(const Models::DeleteTokenVaultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified token vault.
       *
       * @description Call DeleteTokenVault to delete a token vault that is no longer in use.
       * Before deletion, ensure that the token vault is not referenced by any credential provider. Otherwise, the deletion may cause credentials that depend on the token vault to become unavailable. This operation cannot be undone.
       *
       * @param request DeleteTokenVaultRequest
       * @return DeleteTokenVaultResponse
       */
      Models::DeleteTokenVaultResponse deleteTokenVault(const Models::DeleteTokenVaultRequest &request);

      /**
       * @summary Deletes a user.
       *
       * @description Deleting a user forcibly clears all role assignments of the user in the user pool. This operation is irreversible. Proceed with caution.
       *
       * @param request DeleteUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteUserResponse
       */
      Models::DeleteUserResponse deleteUserWithOptions(const Models::DeleteUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a user.
       *
       * @description Deleting a user forcibly clears all role assignments of the user in the user pool. This operation is irreversible. Proceed with caution.
       *
       * @param request DeleteUserRequest
       * @return DeleteUserResponse
       */
      Models::DeleteUserResponse deleteUser(const Models::DeleteUserRequest &request);

      /**
       * @summary Deletes a user pool.
       *
       * @description Before deleting a user pool, you must clean up all resources in the user pool, including all users, roles, clients, SAML IdPs, and role assignments. Calls to this operation are rejected if the resources are not cleaned up. This operation is irreversible. Proceed with caution.
       *
       * @param request DeleteUserPoolRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteUserPoolResponse
       */
      Models::DeleteUserPoolResponse deleteUserPoolWithOptions(const Models::DeleteUserPoolRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a user pool.
       *
       * @description Before deleting a user pool, you must clean up all resources in the user pool, including all users, roles, clients, SAML IdPs, and role assignments. Calls to this operation are rejected if the resources are not cleaned up. This operation is irreversible. Proceed with caution.
       *
       * @param request DeleteUserPoolRequest
       * @return DeleteUserPoolResponse
       */
      Models::DeleteUserPoolResponse deleteUserPool(const Models::DeleteUserPoolRequest &request);

      /**
       * @summary Deletes a WorkloadIdentity.
       *
       * @description Deleting a client also removes all its associated client secrets. After deletion, the client can no longer be used for OAuth authentication and authorization flows. Proceed with caution.
       *
       * @param request DeleteUserPoolClientRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteUserPoolClientResponse
       */
      Models::DeleteUserPoolClientResponse deleteUserPoolClientWithOptions(const Models::DeleteUserPoolClientRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a WorkloadIdentity.
       *
       * @description Deleting a client also removes all its associated client secrets. After deletion, the client can no longer be used for OAuth authentication and authorization flows. Proceed with caution.
       *
       * @param request DeleteUserPoolClientRequest
       * @return DeleteUserPoolClientResponse
       */
      Models::DeleteUserPoolClientResponse deleteUserPoolClient(const Models::DeleteUserPoolClientRequest &request);

      /**
       * @summary Deletes a specified workload identity.
       *
       * @param request DeleteWorkloadIdentityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteWorkloadIdentityResponse
       */
      Models::DeleteWorkloadIdentityResponse deleteWorkloadIdentityWithOptions(const Models::DeleteWorkloadIdentityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified workload identity.
       *
       * @param request DeleteWorkloadIdentityRequest
       * @return DeleteWorkloadIdentityResponse
       */
      Models::DeleteWorkloadIdentityResponse deleteWorkloadIdentity(const Models::DeleteWorkloadIdentityRequest &request);

      /**
       * @summary Detaches a policy set from a gateway.
       *
       * @description Detaches a policy set from a gateway. After the policy set is detached, requests on the gateway are no longer governed by the policies in the policy set.
       *
       * @param request DetachPolicySetFromGatewayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetachPolicySetFromGatewayResponse
       */
      Models::DetachPolicySetFromGatewayResponse detachPolicySetFromGatewayWithOptions(const Models::DetachPolicySetFromGatewayRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Detaches a policy set from a gateway.
       *
       * @description Detaches a policy set from a gateway. After the policy set is detached, requests on the gateway are no longer governed by the policies in the policy set.
       *
       * @param request DetachPolicySetFromGatewayRequest
       * @return DetachPolicySetFromGatewayResponse
       */
      Models::DetachPolicySetFromGatewayResponse detachPolicySetFromGateway(const Models::DetachPolicySetFromGatewayRequest &request);

      /**
       * @summary Retrieves the details of a specified API key credential provider.
       *
       * @param request GetAPIKeyCredentialProviderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAPIKeyCredentialProviderResponse
       */
      Models::GetAPIKeyCredentialProviderResponse getAPIKeyCredentialProviderWithOptions(const Models::GetAPIKeyCredentialProviderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a specified API key credential provider.
       *
       * @param request GetAPIKeyCredentialProviderRequest
       * @return GetAPIKeyCredentialProviderResponse
       */
      Models::GetAPIKeyCredentialProviderResponse getAPIKeyCredentialProvider(const Models::GetAPIKeyCredentialProviderRequest &request);

      /**
       * @summary Queries the gateway policy configuration.
       *
       * @description Calls the GetGatewayPolicyConfig operation to query the currently effective policy configuration of a gateway, including the ARN of the mounted policy set and the enforcement mode.
       *
       * @param request GetGatewayPolicyConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetGatewayPolicyConfigResponse
       */
      Models::GetGatewayPolicyConfigResponse getGatewayPolicyConfigWithOptions(const Models::GetGatewayPolicyConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the gateway policy configuration.
       *
       * @description Calls the GetGatewayPolicyConfig operation to query the currently effective policy configuration of a gateway, including the ARN of the mounted policy set and the enforcement mode.
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
       * @summary 查询身份源同步范围与统计（已选部门有效性 + 展开部门数/预计人数）
       *
       * @description 目标用户池需已配置指定类型的身份源。本接口使用已保存的身份源配置，无需传入钉钉或飞书应用密钥。
       * 同步范围支持 AllAuthorized 和 SelectedDepartments。未显式配置范围时默认为 AllAuthorized，表示第三方应用授权可见范围内的全部用户。SelectedDepartments 包含选中部门及其全部后代部门；人员有任一当前所属部门命中展开集合，即命中同步范围。
       * 本接口不修改范围、不创建人员同步任务。查询可能触发后台统计；EstimateStatus 表示范围统计状态，不是人员同步任务状态。统计结果可能复用缓存，也可能来自同一范围最近一次同步结果；跨部门重复用户可能重复计数，不应视为实时、精确去重人数。
       * 对应身份源未配置时返回 EntityNotExists.IdpConfiguration；目录权限或通讯录可见范围不足时，返回 DingTalkApiPermissionDenied 或 FeishuApiPermissionDenied，不会将权限问题当作部门不存在。
       *
       * @param request GetIdentityProviderSyncScopeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetIdentityProviderSyncScopeResponse
       */
      Models::GetIdentityProviderSyncScopeResponse getIdentityProviderSyncScopeWithOptions(const Models::GetIdentityProviderSyncScopeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询身份源同步范围与统计（已选部门有效性 + 展开部门数/预计人数）
       *
       * @description 目标用户池需已配置指定类型的身份源。本接口使用已保存的身份源配置，无需传入钉钉或飞书应用密钥。
       * 同步范围支持 AllAuthorized 和 SelectedDepartments。未显式配置范围时默认为 AllAuthorized，表示第三方应用授权可见范围内的全部用户。SelectedDepartments 包含选中部门及其全部后代部门；人员有任一当前所属部门命中展开集合，即命中同步范围。
       * 本接口不修改范围、不创建人员同步任务。查询可能触发后台统计；EstimateStatus 表示范围统计状态，不是人员同步任务状态。统计结果可能复用缓存，也可能来自同一范围最近一次同步结果；跨部门重复用户可能重复计数，不应视为实时、精确去重人数。
       * 对应身份源未配置时返回 EntityNotExists.IdpConfiguration；目录权限或通讯录可见范围不足时，返回 DingTalkApiPermissionDenied 或 FeishuApiPermissionDenied，不会将权限问题当作部门不存在。
       *
       * @param request GetIdentityProviderSyncScopeRequest
       * @return GetIdentityProviderSyncScopeResponse
       */
      Models::GetIdentityProviderSyncScopeResponse getIdentityProviderSyncScope(const Models::GetIdentityProviderSyncScopeRequest &request);

      /**
       * @summary Retrieves the logon-related configurations of a user pool.
       *
       * @description Retrieves the logon configuration and password policy of a specified user pool. The logon configuration includes preference settings such as whether to enable password logon. The password policy includes rules for password complexity, length limits, and logon failure lockouts. The password policy is read-only and does not support custom modifications.
       *
       * @param request GetLoginPreferenceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetLoginPreferenceResponse
       */
      Models::GetLoginPreferenceResponse getLoginPreferenceWithOptions(const Models::GetLoginPreferenceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the logon-related configurations of a user pool.
       *
       * @description Retrieves the logon configuration and password policy of a specified user pool. The logon configuration includes preference settings such as whether to enable password logon. The password policy includes rules for password complexity, length limits, and logon failure lockouts. The password policy is read-only and does not support custom modifications.
       *
       * @param request GetLoginPreferenceRequest
       * @return GetLoginPreferenceResponse
       */
      Models::GetLoginPreferenceResponse getLoginPreference(const Models::GetLoginPreferenceRequest &request);

      /**
       * @summary Retrieves the details of a specified OAuth 2.0 credential provider.
       *
       * @param request GetOAuth2CredentialProviderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOAuth2CredentialProviderResponse
       */
      Models::GetOAuth2CredentialProviderResponse getOAuth2CredentialProviderWithOptions(const Models::GetOAuth2CredentialProviderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a specified OAuth 2.0 credential provider.
       *
       * @param request GetOAuth2CredentialProviderRequest
       * @return GetOAuth2CredentialProviderResponse
       */
      Models::GetOAuth2CredentialProviderResponse getOAuth2CredentialProvider(const Models::GetOAuth2CredentialProviderRequest &request);

      /**
       * @summary Queries an access policy.
       *
       * @description Calls GetPolicy to retrieve the complete configuration of a single policy, including its definition, associated policy set, and creation and update times.
       *
       * @param request GetPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPolicyResponse
       */
      Models::GetPolicyResponse getPolicyWithOptions(const Models::GetPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries an access policy.
       *
       * @description Calls GetPolicy to retrieve the complete configuration of a single policy, including its definition, associated policy set, and creation and update times.
       *
       * @param request GetPolicyRequest
       * @return GetPolicyResponse
       */
      Models::GetPolicyResponse getPolicy(const Models::GetPolicyRequest &request);

      /**
       * @summary Queries an access policy set.
       *
       * @description Calls GetPolicySet to query the complete configuration of a single policy set, including the ARN, description, creation time, and update time.
       *
       * @param request GetPolicySetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPolicySetResponse
       */
      Models::GetPolicySetResponse getPolicySetWithOptions(const Models::GetPolicySetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries an access policy set.
       *
       * @description Calls GetPolicySet to query the complete configuration of a single policy set, including the ARN, description, creation time, and update time.
       *
       * @param request GetPolicySetRequest
       * @return GetPolicySetResponse
       */
      Models::GetPolicySetResponse getPolicySet(const Models::GetPolicySetRequest &request);

      /**
       * @summary Retrieves a role.
       *
       * @description Returns the complete information about a specified role, including the role ID, name, description, type (Default or Manual), and creation and update times.
       *
       * @param request GetRoleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRoleResponse
       */
      Models::GetRoleResponse getRoleWithOptions(const Models::GetRoleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a role.
       *
       * @description Returns the complete information about a specified role, including the role ID, name, description, type (Default or Manual), and creation and update times.
       *
       * @param request GetRoleRequest
       * @return GetRoleResponse
       */
      Models::GetRoleResponse getRole(const Models::GetRoleRequest &request);

      /**
       * @summary Creates an application.
       *
       * @description Returns the complete configuration of the SAML IdP, including the EntityId, logon URL, X509 certificate list, and the enabling status of SSO and JIT synchronization.
       *
       * @param request GetSAMLIdentityProviderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSAMLIdentityProviderResponse
       */
      Models::GetSAMLIdentityProviderResponse getSAMLIdentityProviderWithOptions(const Models::GetSAMLIdentityProviderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an application.
       *
       * @description Returns the complete configuration of the SAML IdP, including the EntityId, logon URL, X509 certificate list, and the enabling status of SSO and JIT synchronization.
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
       * @summary Retrieves the specified identity provider.
       *
       * @description Queries the SSO configuration of a specific type of identity provider in a specified user pool. Returns information such as the enabling status, synchronization callback status, and metadata of the IdP. For security reasons, sensitive fields such as appSecret, encryptKey, and verificationToken are not returned in the response.
       *
       * @param request GetSpecificIdentityProviderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSpecificIdentityProviderResponse
       */
      Models::GetSpecificIdentityProviderResponse getSpecificIdentityProviderWithOptions(const Models::GetSpecificIdentityProviderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the specified identity provider.
       *
       * @description Queries the SSO configuration of a specific type of identity provider in a specified user pool. Returns information such as the enabling status, synchronization callback status, and metadata of the IdP. For security reasons, sensitive fields such as appSecret, encryptKey, and verificationToken are not returned in the response.
       *
       * @param request GetSpecificIdentityProviderRequest
       * @return GetSpecificIdentityProviderResponse
       */
      Models::GetSpecificIdentityProviderResponse getSpecificIdentityProvider(const Models::GetSpecificIdentityProviderRequest &request);

      /**
       * @summary Retrieves the detailed configuration of a specified token vault.
       *
       * @description Calls GetTokenVault to retrieve the complete configuration of a single token vault, including the encryption method, associated RAM role ARN, creation time, and update time.
       *
       * @param request GetTokenVaultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTokenVaultResponse
       */
      Models::GetTokenVaultResponse getTokenVaultWithOptions(const Models::GetTokenVaultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the detailed configuration of a specified token vault.
       *
       * @description Calls GetTokenVault to retrieve the complete configuration of a single token vault, including the encryption method, associated RAM role ARN, creation time, and update time.
       *
       * @param request GetTokenVaultRequest
       * @return GetTokenVaultResponse
       */
      Models::GetTokenVaultResponse getTokenVault(const Models::GetTokenVaultRequest &request);

      /**
       * @summary Retrieves a user.
       *
       * @description Returns the complete information of a specified user, including the user ID, username, display name, description, and creation and update times.
       *
       * @param request GetUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUserResponse
       */
      Models::GetUserResponse getUserWithOptions(const Models::GetUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a user.
       *
       * @description Returns the complete information of a specified user, including the user ID, username, display name, description, and creation and update times.
       *
       * @param request GetUserRequest
       * @return GetUserResponse
       */
      Models::GetUserResponse getUser(const Models::GetUserRequest &request);

      /**
       * @summary Retrieves a user pool.
       *
       * @description Returns the complete configuration information of a specified user pool, including the user pool ID, name, description, creation time, and update time.
       *
       * @param request GetUserPoolRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUserPoolResponse
       */
      Models::GetUserPoolResponse getUserPoolWithOptions(const Models::GetUserPoolRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a user pool.
       *
       * @description Returns the complete configuration information of a specified user pool, including the user pool ID, name, description, creation time, and update time.
       *
       * @param request GetUserPoolRequest
       * @return GetUserPoolResponse
       */
      Models::GetUserPoolResponse getUserPool(const Models::GetUserPoolRequest &request);

      /**
       * @summary Creates an application.
       *
       * @description Returns the complete configuration information of a client, including the client ID, name, redirect URIs, token validity periods, SecretRequired and EnforcePKCE settings, and default client scopes.
       *
       * @param request GetUserPoolClientRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUserPoolClientResponse
       */
      Models::GetUserPoolClientResponse getUserPoolClientWithOptions(const Models::GetUserPoolClientRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an application.
       *
       * @description Returns the complete configuration information of a client, including the client ID, name, redirect URIs, token validity periods, SecretRequired and EnforcePKCE settings, and default client scopes.
       *
       * @param request GetUserPoolClientRequest
       * @return GetUserPoolClientResponse
       */
      Models::GetUserPoolClientResponse getUserPoolClient(const Models::GetUserPoolClientRequest &request);

      /**
       * @summary Retrieves the details of a synchronization task in a user pool.
       *
       * @description Queries the execution details of a single synchronization task in a specified user pool, including the task status, start and end times, synchronization result statistics (the number of created, updated, deleted, and unchanged users), and error messages.
       *
       * @param request GetUserPoolSyncJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUserPoolSyncJobResponse
       */
      Models::GetUserPoolSyncJobResponse getUserPoolSyncJobWithOptions(const Models::GetUserPoolSyncJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a synchronization task in a user pool.
       *
       * @description Queries the execution details of a single synchronization task in a specified user pool, including the task status, start and end times, synchronization result statistics (the number of created, updated, deleted, and unchanged users), and error messages.
       *
       * @param request GetUserPoolSyncJobRequest
       * @return GetUserPoolSyncJobResponse
       */
      Models::GetUserPoolSyncJobResponse getUserPoolSyncJob(const Models::GetUserPoolSyncJobRequest &request);

      /**
       * @summary Queries the detailed configuration of a workload identity by name.
       *
       * @param request GetWorkloadIdentityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetWorkloadIdentityResponse
       */
      Models::GetWorkloadIdentityResponse getWorkloadIdentityWithOptions(const Models::GetWorkloadIdentityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the detailed configuration of a workload identity by name.
       *
       * @param request GetWorkloadIdentityRequest
       * @return GetWorkloadIdentityResponse
       */
      Models::GetWorkloadIdentityResponse getWorkloadIdentity(const Models::GetWorkloadIdentityRequest &request);

      /**
       * @summary Lists all API key credential providers in the account.
       *
       * @param request ListAPIKeyCredentialProvidersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAPIKeyCredentialProvidersResponse
       */
      Models::ListAPIKeyCredentialProvidersResponse listAPIKeyCredentialProvidersWithOptions(const Models::ListAPIKeyCredentialProvidersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists all API key credential providers in the account.
       *
       * @param request ListAPIKeyCredentialProvidersRequest
       * @return ListAPIKeyCredentialProvidersResponse
       */
      Models::ListAPIKeyCredentialProvidersResponse listAPIKeyCredentialProviders(const Models::ListAPIKeyCredentialProvidersRequest &request);

      /**
       * @summary Lists identity providers.
       *
       * @description Returns summary information about all secrets of a client, including the client key ID and creation time. For security reasons, the plaintext secret (ClientSecretValue) is not returned in the list.
       *
       * @param request ListClientSecretsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListClientSecretsResponse
       */
      Models::ListClientSecretsResponse listClientSecretsWithOptions(const Models::ListClientSecretsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists identity providers.
       *
       * @description Returns summary information about all secrets of a client, including the client key ID and creation time. For security reasons, the plaintext secret (ClientSecretValue) is not returned in the list.
       *
       * @param request ListClientSecretsRequest
       * @return ListClientSecretsResponse
       */
      Models::ListClientSecretsResponse listClientSecrets(const Models::ListClientSecretsRequest &request);

      /**
       * @summary 查询身份源部门树（按层懒加载，供控制台勾选同步范围）
       *
       * @description 用户池需已配置相应身份源，且应用具有目标部门的通讯录访问权限。本接口使用已保存的身份源配置，无需传入应用密钥。
       * 本接口仅返回指定父部门的直属子部门，不包含父部门本身，不递归返回整棵部门树。未传父部门时，钉钉默认查询根部门1下的直属子部门，飞书默认查询根部门0下的直属子部门。部门浏览受应用授权可见范围限制，不受当前保存的同步范围限制。
       * 本接口不修改同步范围，不触发人员同步。
       *
       * @param request ListIdentityProviderDepartmentsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListIdentityProviderDepartmentsResponse
       */
      Models::ListIdentityProviderDepartmentsResponse listIdentityProviderDepartmentsWithOptions(const Models::ListIdentityProviderDepartmentsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询身份源部门树（按层懒加载，供控制台勾选同步范围）
       *
       * @description 用户池需已配置相应身份源，且应用具有目标部门的通讯录访问权限。本接口使用已保存的身份源配置，无需传入应用密钥。
       * 本接口仅返回指定父部门的直属子部门，不包含父部门本身，不递归返回整棵部门树。未传父部门时，钉钉默认查询根部门1下的直属子部门，飞书默认查询根部门0下的直属子部门。部门浏览受应用授权可见范围限制，不受当前保存的同步范围限制。
       * 本接口不修改同步范围，不触发人员同步。
       *
       * @param request ListIdentityProviderDepartmentsRequest
       * @return ListIdentityProviderDepartmentsResponse
       */
      Models::ListIdentityProviderDepartmentsResponse listIdentityProviderDepartments(const Models::ListIdentityProviderDepartmentsRequest &request);

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
       * @summary Lists all OAuth 2.0 credential providers in the account.
       *
       * @param request ListOAuth2CredentialProvidersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListOAuth2CredentialProvidersResponse
       */
      Models::ListOAuth2CredentialProvidersResponse listOAuth2CredentialProvidersWithOptions(const Models::ListOAuth2CredentialProvidersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists all OAuth 2.0 credential providers in the account.
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
       * @summary Lists gateway policy configurations.
       *
       * @description Calls ListPolicySetAttachedGateways to query the gateways to which a specific policy set is currently attached. Call this operation before deleting a policy set to verify that no residual attachments exist.
       *
       * @param request ListPolicySetAttachedGatewaysRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPolicySetAttachedGatewaysResponse
       */
      Models::ListPolicySetAttachedGatewaysResponse listPolicySetAttachedGatewaysWithOptions(const Models::ListPolicySetAttachedGatewaysRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists gateway policy configurations.
       *
       * @description Calls ListPolicySetAttachedGateways to query the gateways to which a specific policy set is currently attached. Call this operation before deleting a policy set to verify that no residual attachments exist.
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
       * @summary Lists roles.
       *
       * @description Returns summary information about all roles in a user pool, including the default role Default and custom roles Manual. The information includes the role ID, name, description, creation time, update time, and role type.
       *
       * @param request ListRolesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRolesResponse
       */
      Models::ListRolesResponse listRolesWithOptions(const Models::ListRolesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists roles.
       *
       * @description Returns summary information about all roles in a user pool, including the default role Default and custom roles Manual. The information includes the role ID, name, description, creation time, update time, and role type.
       *
       * @param request ListRolesRequest
       * @return ListRolesResponse
       */
      Models::ListRolesResponse listRoles(const Models::ListRolesRequest &request);

      /**
       * @summary Lists identity providers.
       *
       * @description Returns a list of all X.509 certificates under the SAML IdP configuration of the user pool to help administrators manage the certificate lifecycle and perform certificate rotation.
       *
       * @param request ListSAMLIdentityProviderCertificatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSAMLIdentityProviderCertificatesResponse
       */
      Models::ListSAMLIdentityProviderCertificatesResponse listSAMLIdentityProviderCertificatesWithOptions(const Models::ListSAMLIdentityProviderCertificatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists identity providers.
       *
       * @description Returns a list of all X.509 certificates under the SAML IdP configuration of the user pool to help administrators manage the certificate lifecycle and perform certificate rotation.
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
       * @summary Lists identity providers.
       *
       * @description Returns summary information about all clients in a user pool, including the client ID, name, redirect URIs, creation time, and configurations such as PKCE, client secret, and token validity periods.
       *
       * @param request ListUserPoolClientsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUserPoolClientsResponse
       */
      Models::ListUserPoolClientsResponse listUserPoolClientsWithOptions(const Models::ListUserPoolClientsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists identity providers.
       *
       * @description Returns summary information about all clients in a user pool, including the client ID, name, redirect URIs, creation time, and configurations such as PKCE, client secret, and token validity periods.
       *
       * @param request ListUserPoolClientsRequest
       * @return ListUserPoolClientsResponse
       */
      Models::ListUserPoolClientsResponse listUserPoolClients(const Models::ListUserPoolClientsRequest &request);

      /**
       * @summary 列出IdentityProvider
       *
       * @param request ListUserPoolSyncJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUserPoolSyncJobsResponse
       */
      Models::ListUserPoolSyncJobsResponse listUserPoolSyncJobsWithOptions(const Models::ListUserPoolSyncJobsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 列出IdentityProvider
       *
       * @param request ListUserPoolSyncJobsRequest
       * @return ListUserPoolSyncJobsResponse
       */
      Models::ListUserPoolSyncJobsResponse listUserPoolSyncJobs(const Models::ListUserPoolSyncJobsRequest &request);

      /**
       * @summary Lists identity providers.
       *
       * @description Returns summary information about all user pools within the current account, including the user pool ID, name, description, and creation and update times. Supports pagination by using NextToken.
       *
       * @param request ListUserPoolsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUserPoolsResponse
       */
      Models::ListUserPoolsResponse listUserPoolsWithOptions(const Models::ListUserPoolsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists identity providers.
       *
       * @description Returns summary information about all user pools within the current account, including the user pool ID, name, description, and creation and update times. Supports pagination by using NextToken.
       *
       * @param request ListUserPoolsRequest
       * @return ListUserPoolsResponse
       */
      Models::ListUserPoolsResponse listUserPools(const Models::ListUserPoolsRequest &request);

      /**
       * @summary Lists users.
       *
       * @description Returns the summary information of all users in a user pool, including the user ID, username, display name, description, creation time, and update time.
       *
       * @param request ListUsersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUsersResponse
       */
      Models::ListUsersResponse listUsersWithOptions(const Models::ListUsersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists users.
       *
       * @description Returns the summary information of all users in a user pool, including the user ID, username, display name, description, creation time, and update time.
       *
       * @param request ListUsersRequest
       * @return ListUsersResponse
       */
      Models::ListUsersResponse listUsers(const Models::ListUsersRequest &request);

      /**
       * @summary Lists workload identities with pagination.
       *
       * @param request ListWorkloadIdentitiesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListWorkloadIdentitiesResponse
       */
      Models::ListWorkloadIdentitiesResponse listWorkloadIdentitiesWithOptions(const Models::ListWorkloadIdentitiesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists workload identities with pagination.
       *
       * @param request ListWorkloadIdentitiesRequest
       * @return ListWorkloadIdentitiesResponse
       */
      Models::ListWorkloadIdentitiesResponse listWorkloadIdentities(const Models::ListWorkloadIdentitiesRequest &request);

      /**
       * @summary Triggers a user synchronization task in a user pool.
       *
       * @description Creates and immediately executes a user synchronization task in a specified user pool. The system pulls user data from the specified identity provider and synchronizes the data to the user pool. The task runs asynchronously. The operation completes after the task ID is returned. You can call GetUserPoolSyncJob to query the execution progress and results. Only one synchronization task can run in a user pool at a time.
       *
       * @param request RunUserPoolSyncJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunUserPoolSyncJobResponse
       */
      Models::RunUserPoolSyncJobResponse runUserPoolSyncJobWithOptions(const Models::RunUserPoolSyncJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Triggers a user synchronization task in a user pool.
       *
       * @description Creates and immediately executes a user synchronization task in a specified user pool. The system pulls user data from the specified identity provider and synchronizes the data to the user pool. The task runs asynchronously. The operation completes after the task ID is returned. You can call GetUserPoolSyncJob to query the execution progress and results. Only one synchronization task can run in a user pool at a time.
       *
       * @param request RunUserPoolSyncJobRequest
       * @return RunUserPoolSyncJobResponse
       */
      Models::RunUserPoolSyncJobResponse runUserPoolSyncJob(const Models::RunUserPoolSyncJobRequest &request);

      /**
       * @summary Creates a workload identity.
       *
       * @description This operation sets or updates the core configurations of a SAML identity provider (IdP), including the IdP identifier (EntityId), logon URL (LoginURL), X.509 certificates, single sign-on (SSO) status, and Just-In-Time (JIT) user provisioning and update settings. If you specify X509Certificates, all existing certificates in the user pool are replaced. To append certificates while retaining the existing ones, use AddSAMLIdentityProviderCertificate.
       *
       * @param tmpReq SetSAMLIdentityProviderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetSAMLIdentityProviderResponse
       */
      Models::SetSAMLIdentityProviderResponse setSAMLIdentityProviderWithOptions(const Models::SetSAMLIdentityProviderRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a workload identity.
       *
       * @description This operation sets or updates the core configurations of a SAML identity provider (IdP), including the IdP identifier (EntityId), logon URL (LoginURL), X.509 certificates, single sign-on (SSO) status, and Just-In-Time (JIT) user provisioning and update settings. If you specify X509Certificates, all existing certificates in the user pool are replaced. To append certificates while retaining the existing ones, use AddSAMLIdentityProviderCertificate.
       *
       * @param request SetSAMLIdentityProviderRequest
       * @return SetSAMLIdentityProviderResponse
       */
      Models::SetSAMLIdentityProviderResponse setSAMLIdentityProvider(const Models::SetSAMLIdentityProviderRequest &request);

      /**
       * @summary Configures the SSO settings for a specified type of identity provider in a user pool.
       *
       * @description Configures a specific type of identity provider for a specified user pool. This operation is used to configure SSO logon and address book synchronization for non-SAML IdPs such as DingTalk. A user pool does not support enabling multiple identity providers at the same time. You must disable other enabled IdPs before enabling a new IdP.
       *
       * @param request SetSpecificIdentityProviderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetSpecificIdentityProviderResponse
       */
      Models::SetSpecificIdentityProviderResponse setSpecificIdentityProviderWithOptions(const Models::SetSpecificIdentityProviderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures the SSO settings for a specified type of identity provider in a user pool.
       *
       * @description Configures a specific type of identity provider for a specified user pool. This operation is used to configure SSO logon and address book synchronization for non-SAML IdPs such as DingTalk. A user pool does not support enabling multiple identity providers at the same time. You must disable other enabled IdPs before enabling a new IdP.
       *
       * @param request SetSpecificIdentityProviderRequest
       * @return SetSpecificIdentityProviderResponse
       */
      Models::SetSpecificIdentityProviderResponse setSpecificIdentityProvider(const Models::SetSpecificIdentityProviderRequest &request);

      /**
       * @summary Modifies the logon password of a user.
       *
       * @description Sets or resets the logon password for a user in a specified user pool. Two methods are supported: specifying a password (Password) or generating a random password (GenerateRandomPassword). The two methods are mutually exclusive, and you must select exactly one. If you specify a password, it must meet the password policy requirements: a minimum length of 8 characters, containing at least three of the following character types: uppercase letters, lowercase letters, digits, and special characters, and it must not contain the username. Passwords are managed independently of the user creation process and are not passed through CreateUser.
       *
       * @param request SetUserPasswordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetUserPasswordResponse
       */
      Models::SetUserPasswordResponse setUserPasswordWithOptions(const Models::SetUserPasswordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the logon password of a user.
       *
       * @description Sets or resets the logon password for a user in a specified user pool. Two methods are supported: specifying a password (Password) or generating a random password (GenerateRandomPassword). The two methods are mutually exclusive, and you must select exactly one. If you specify a password, it must meet the password policy requirements: a minimum length of 8 characters, containing at least three of the following character types: uppercase letters, lowercase letters, digits, and special characters, and it must not contain the username. Passwords are managed independently of the user creation process and are not passed through CreateUser.
       *
       * @param request SetUserPasswordRequest
       * @return SetUserPasswordResponse
       */
      Models::SetUserPasswordResponse setUserPassword(const Models::SetUserPasswordRequest &request);

      /**
       * @summary Updates an existing API key credential provider.
       *
       * @param request UpdateAPIKeyCredentialProviderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAPIKeyCredentialProviderResponse
       */
      Models::UpdateAPIKeyCredentialProviderResponse updateAPIKeyCredentialProviderWithOptions(const Models::UpdateAPIKeyCredentialProviderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates an existing API key credential provider.
       *
       * @param request UpdateAPIKeyCredentialProviderRequest
       * @return UpdateAPIKeyCredentialProviderResponse
       */
      Models::UpdateAPIKeyCredentialProviderResponse updateAPIKeyCredentialProvider(const Models::UpdateAPIKeyCredentialProviderRequest &request);

      /**
       * @summary Queries the gateway policy configuration.
       *
       * @description Calls UpdateGatewayPolicyConfig to adjust the policy enforcement mode on a gateway. Common usage: Use LOG_ONLY for observation and verification during the initial rollout of a policy. After confirming that everything is correct, switch the gateway to ENFORCE to enforce interception. This operation does not modify the attached policy set itself. To replace the policy set, call AttachPolicySetToGateway.
       *
       * @param request UpdateGatewayPolicyConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateGatewayPolicyConfigResponse
       */
      Models::UpdateGatewayPolicyConfigResponse updateGatewayPolicyConfigWithOptions(const Models::UpdateGatewayPolicyConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the gateway policy configuration.
       *
       * @description Calls UpdateGatewayPolicyConfig to adjust the policy enforcement mode on a gateway. Common usage: Use LOG_ONLY for observation and verification during the initial rollout of a policy. After confirming that everything is correct, switch the gateway to ENFORCE to enforce interception. This operation does not modify the attached policy set itself. To replace the policy set, call AttachPolicySetToGateway.
       *
       * @param request UpdateGatewayPolicyConfigRequest
       * @return UpdateGatewayPolicyConfigResponse
       */
      Models::UpdateGatewayPolicyConfigResponse updateGatewayPolicyConfig(const Models::UpdateGatewayPolicyConfigRequest &request);

      /**
       * @summary Updates the specified identity provider.
       *
       * @param tmpReq UpdateIdentityProviderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateIdentityProviderResponse
       */
      Models::UpdateIdentityProviderResponse updateIdentityProviderWithOptions(const Models::UpdateIdentityProviderRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the specified identity provider.
       *
       * @param request UpdateIdentityProviderRequest
       * @return UpdateIdentityProviderResponse
       */
      Models::UpdateIdentityProviderResponse updateIdentityProvider(const Models::UpdateIdentityProviderRequest &request);

      /**
       * @summary Updates the logon configuration of a user pool.
       *
       * @description Updates the logon configuration of a specified user pool. Currently, only logon preferences, such as whether password logon is enabled, can be updated. The password policy cannot be modified. Specify only the fields to be updated. Unspecified fields remain unchanged.
       *
       * @param tmpReq UpdateLoginPreferenceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateLoginPreferenceResponse
       */
      Models::UpdateLoginPreferenceResponse updateLoginPreferenceWithOptions(const Models::UpdateLoginPreferenceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the logon configuration of a user pool.
       *
       * @description Updates the logon configuration of a specified user pool. Currently, only logon preferences, such as whether password logon is enabled, can be updated. The password policy cannot be modified. Specify only the fields to be updated. Unspecified fields remain unchanged.
       *
       * @param request UpdateLoginPreferenceRequest
       * @return UpdateLoginPreferenceResponse
       */
      Models::UpdateLoginPreferenceResponse updateLoginPreference(const Models::UpdateLoginPreferenceRequest &request);

      /**
       * @summary Updates the configuration of an existing OAuth 2.0 credential provider.
       *
       * @param tmpReq UpdateOAuth2CredentialProviderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateOAuth2CredentialProviderResponse
       */
      Models::UpdateOAuth2CredentialProviderResponse updateOAuth2CredentialProviderWithOptions(const Models::UpdateOAuth2CredentialProviderRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the configuration of an existing OAuth 2.0 credential provider.
       *
       * @param request UpdateOAuth2CredentialProviderRequest
       * @return UpdateOAuth2CredentialProviderResponse
       */
      Models::UpdateOAuth2CredentialProviderResponse updateOAuth2CredentialProvider(const Models::UpdateOAuth2CredentialProviderRequest &request);

      /**
       * @summary Updates an access policy.
       *
       * @description Calls the UpdatePolicy operation to update the description and definition of an existing policy. The updated definition takes effect immediately for all gateways to which the policy set is mounted.
       *
       * @param tmpReq UpdatePolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePolicyResponse
       */
      Models::UpdatePolicyResponse updatePolicyWithOptions(const Models::UpdatePolicyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates an access policy.
       *
       * @description Calls the UpdatePolicy operation to update the description and definition of an existing policy. The updated definition takes effect immediately for all gateways to which the policy set is mounted.
       *
       * @param request UpdatePolicyRequest
       * @return UpdatePolicyResponse
       */
      Models::UpdatePolicyResponse updatePolicy(const Models::UpdatePolicyRequest &request);

      /**
       * @summary Updates an access policy set.
       *
       * @description Calls UpdatePolicySet to update the description of an existing policy set. To modify specific policies in the policy set, use UpdatePolicy. To change the mount relationship, use AttachPolicySetToGateway or DetachPolicySetFromGateway.
       *
       * @param request UpdatePolicySetRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePolicySetResponse
       */
      Models::UpdatePolicySetResponse updatePolicySetWithOptions(const Models::UpdatePolicySetRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates an access policy set.
       *
       * @description Calls UpdatePolicySet to update the description of an existing policy set. To modify specific policies in the policy set, use UpdatePolicy. To change the mount relationship, use AttachPolicySetToGateway or DetachPolicySetFromGateway.
       *
       * @param request UpdatePolicySetRequest
       * @return UpdatePolicySetResponse
       */
      Models::UpdatePolicySetResponse updatePolicySet(const Models::UpdatePolicySetRequest &request);

      /**
       * @summary Updates a role.
       *
       * @description Updates the Description field of a role. The RoleName field serves as a unique identifier and cannot be modified.
       *
       * @param request UpdateRoleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRoleResponse
       */
      Models::UpdateRoleResponse updateRoleWithOptions(const Models::UpdateRoleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a role.
       *
       * @description Updates the Description field of a role. The RoleName field serves as a unique identifier and cannot be modified.
       *
       * @param request UpdateRoleRequest
       * @return UpdateRoleResponse
       */
      Models::UpdateRoleResponse updateRole(const Models::UpdateRoleRequest &request);

      /**
       * @summary Updates a token vault.
       *
       * @description Updates the description and role configuration of an existing token vault. Note: The encryption configuration (KeyType or KmsKeyArn) of a token vault cannot be changed after it is created.
       *
       * @param request UpdateTokenVaultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTokenVaultResponse
       */
      Models::UpdateTokenVaultResponse updateTokenVaultWithOptions(const Models::UpdateTokenVaultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a token vault.
       *
       * @description Updates the description and role configuration of an existing token vault. Note: The encryption configuration (KeyType or KmsKeyArn) of a token vault cannot be changed after it is created.
       *
       * @param request UpdateTokenVaultRequest
       * @return UpdateTokenVaultResponse
       */
      Models::UpdateTokenVaultResponse updateTokenVault(const Models::UpdateTokenVaultRequest &request);

      /**
       * @summary Updates a user in a user pool.
       *
       * @description Updates the attribute information of a user in a specified user pool. Specify only the fields that you want to update. Unspecified fields remain unchanged. UserName is the user identifier and cannot be modified. You can update the display name, description, email address, and status. Email addresses must be unique within the user pool.
       *
       * @param request UpdateUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateUserResponse
       */
      Models::UpdateUserResponse updateUserWithOptions(const Models::UpdateUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a user in a user pool.
       *
       * @description Updates the attribute information of a user in a specified user pool. Specify only the fields that you want to update. Unspecified fields remain unchanged. UserName is the user identifier and cannot be modified. You can update the display name, description, email address, and status. Email addresses must be unique within the user pool.
       *
       * @param request UpdateUserRequest
       * @return UpdateUserResponse
       */
      Models::UpdateUserResponse updateUser(const Models::UpdateUserRequest &request);

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
       * @summary Creates an application.
       *
       * @description Updates the callback URLs (RedirectURIs), whether an application secret is required (SecretRequired), whether Proof Key for Code Exchange (PKCE) is enforced (EnforcePKCE), and the validity periods of the access token and refresh token. The client name (ClientName) serves as a unique identifier and cannot be modified.
       *
       * @param tmpReq UpdateUserPoolClientRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateUserPoolClientResponse
       */
      Models::UpdateUserPoolClientResponse updateUserPoolClientWithOptions(const Models::UpdateUserPoolClientRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an application.
       *
       * @description Updates the callback URLs (RedirectURIs), whether an application secret is required (SecretRequired), whether Proof Key for Code Exchange (PKCE) is enforced (EnforcePKCE), and the validity periods of the access token and refresh token. The client name (ClientName) serves as a unique identifier and cannot be modified.
       *
       * @param request UpdateUserPoolClientRequest
       * @return UpdateUserPoolClientResponse
       */
      Models::UpdateUserPoolClientResponse updateUserPoolClient(const Models::UpdateUserPoolClientRequest &request);

      /**
       * @summary Updates the specified workload identity.
       *
       * @param tmpReq UpdateWorkloadIdentityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateWorkloadIdentityResponse
       */
      Models::UpdateWorkloadIdentityResponse updateWorkloadIdentityWithOptions(const Models::UpdateWorkloadIdentityRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the specified workload identity.
       *
       * @param request UpdateWorkloadIdentityRequest
       * @return UpdateWorkloadIdentityResponse
       */
      Models::UpdateWorkloadIdentityResponse updateWorkloadIdentity(const Models::UpdateWorkloadIdentityRequest &request);
  };
} // namespace AlibabaCloud
} // namespace AgentIdentity20250901
#endif
