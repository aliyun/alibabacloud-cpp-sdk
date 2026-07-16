// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_EIAM20211201_HPP_
#define ALIBABACLOUD_EIAM20211201_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Eiam20211201Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Eiam20211201.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Adds an application account for a specified employee under the current application.
       *
       * @param request AddApplicationAccountToUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddApplicationAccountToUserResponse
       */
      Models::AddApplicationAccountToUserResponse addApplicationAccountToUserWithOptions(const Models::AddApplicationAccountToUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds an application account for a specified employee under the current application.
       *
       * @param request AddApplicationAccountToUserRequest
       * @return AddApplicationAccountToUserResponse
       */
      Models::AddApplicationAccountToUserResponse addApplicationAccountToUser(const Models::AddApplicationAccountToUserRequest &request);

      /**
       * @summary Adds an application to an authorization rule.
       *
       * @param request AddApplicationToAuthorizationRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddApplicationToAuthorizationRuleResponse
       */
      Models::AddApplicationToAuthorizationRuleResponse addApplicationToAuthorizationRuleWithOptions(const Models::AddApplicationToAuthorizationRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds an application to an authorization rule.
       *
       * @param request AddApplicationToAuthorizationRuleRequest
       * @return AddApplicationToAuthorizationRuleResponse
       */
      Models::AddApplicationToAuthorizationRuleResponse addApplicationToAuthorizationRule(const Models::AddApplicationToAuthorizationRuleRequest &request);

      /**
       * @summary Adds terms to a brand.
       *
       * @param request AddCustomPrivacyPoliciesToBrandRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddCustomPrivacyPoliciesToBrandResponse
       */
      Models::AddCustomPrivacyPoliciesToBrandResponse addCustomPrivacyPoliciesToBrandWithOptions(const Models::AddCustomPrivacyPoliciesToBrandRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds terms to a brand.
       *
       * @param request AddCustomPrivacyPoliciesToBrandRequest
       * @return AddCustomPrivacyPoliciesToBrandResponse
       */
      Models::AddCustomPrivacyPoliciesToBrandResponse addCustomPrivacyPoliciesToBrand(const Models::AddCustomPrivacyPoliciesToBrandRequest &request);

      /**
       * @summary Adds a group to an authorization rule.
       *
       * @param request AddGroupToAuthorizationRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddGroupToAuthorizationRuleResponse
       */
      Models::AddGroupToAuthorizationRuleResponse addGroupToAuthorizationRuleWithOptions(const Models::AddGroupToAuthorizationRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a group to an authorization rule.
       *
       * @param request AddGroupToAuthorizationRuleRequest
       * @return AddGroupToAuthorizationRuleResponse
       */
      Models::AddGroupToAuthorizationRuleResponse addGroupToAuthorizationRule(const Models::AddGroupToAuthorizationRuleRequest &request);

      /**
       * @summary Adds an account to an authorization rule.
       *
       * @param request AddUserToAuthorizationRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddUserToAuthorizationRuleResponse
       */
      Models::AddUserToAuthorizationRuleResponse addUserToAuthorizationRuleWithOptions(const Models::AddUserToAuthorizationRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds an account to an authorization rule.
       *
       * @param request AddUserToAuthorizationRuleRequest
       * @return AddUserToAuthorizationRuleResponse
       */
      Models::AddUserToAuthorizationRuleResponse addUserToAuthorizationRule(const Models::AddUserToAuthorizationRuleRequest &request);

      /**
       * @summary Adds a specified EIAM account to multiple EIAM organizations. If the account already exists in an organization, the operation returns a success response directly.
       *
       * @param request AddUserToOrganizationalUnitsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddUserToOrganizationalUnitsResponse
       */
      Models::AddUserToOrganizationalUnitsResponse addUserToOrganizationalUnitsWithOptions(const Models::AddUserToOrganizationalUnitsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a specified EIAM account to multiple EIAM organizations. If the account already exists in an organization, the operation returns a success response directly.
       *
       * @param request AddUserToOrganizationalUnitsRequest
       * @return AddUserToOrganizationalUnitsResponse
       */
      Models::AddUserToOrganizationalUnitsResponse addUserToOrganizationalUnits(const Models::AddUserToOrganizationalUnitsRequest &request);

      /**
       * @summary Adds multiple Employee Identity and Access Management (EIAM) accounts to a specified EIAM account group.
       *
       * @param request AddUsersToGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddUsersToGroupResponse
       */
      Models::AddUsersToGroupResponse addUsersToGroupWithOptions(const Models::AddUsersToGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds multiple Employee Identity and Access Management (EIAM) accounts to a specified EIAM account group.
       *
       * @param request AddUsersToGroupRequest
       * @return AddUsersToGroupResponse
       */
      Models::AddUsersToGroupResponse addUsersToGroup(const Models::AddUsersToGroupRequest &request);

      /**
       * @summary Grants multiple EIAM groups access to an application in a batch.
       *
       * @param request AuthorizeApplicationToGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AuthorizeApplicationToGroupsResponse
       */
      Models::AuthorizeApplicationToGroupsResponse authorizeApplicationToGroupsWithOptions(const Models::AuthorizeApplicationToGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Grants multiple EIAM groups access to an application in a batch.
       *
       * @param request AuthorizeApplicationToGroupsRequest
       * @return AuthorizeApplicationToGroupsResponse
       */
      Models::AuthorizeApplicationToGroupsResponse authorizeApplicationToGroups(const Models::AuthorizeApplicationToGroupsRequest &request);

      /**
       * @summary Grants access to an application for multiple EIAM organizations in a batch operation.
       *
       * @param request AuthorizeApplicationToOrganizationalUnitsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AuthorizeApplicationToOrganizationalUnitsResponse
       */
      Models::AuthorizeApplicationToOrganizationalUnitsResponse authorizeApplicationToOrganizationalUnitsWithOptions(const Models::AuthorizeApplicationToOrganizationalUnitsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Grants access to an application for multiple EIAM organizations in a batch operation.
       *
       * @param request AuthorizeApplicationToOrganizationalUnitsRequest
       * @return AuthorizeApplicationToOrganizationalUnitsResponse
       */
      Models::AuthorizeApplicationToOrganizationalUnitsResponse authorizeApplicationToOrganizationalUnits(const Models::AuthorizeApplicationToOrganizationalUnitsRequest &request);

      /**
       * @summary Grants multiple EIAM accounts access to an application in a batch.
       *
       * @param request AuthorizeApplicationToUsersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AuthorizeApplicationToUsersResponse
       */
      Models::AuthorizeApplicationToUsersResponse authorizeApplicationToUsersWithOptions(const Models::AuthorizeApplicationToUsersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Grants multiple EIAM accounts access to an application in a batch.
       *
       * @param request AuthorizeApplicationToUsersRequest
       * @return AuthorizeApplicationToUsersResponse
       */
      Models::AuthorizeApplicationToUsersResponse authorizeApplicationToUsers(const Models::AuthorizeApplicationToUsersRequest &request);

      /**
       * @summary Grants Scope permissions under a specified ResourceServer to a Client application.
       *
       * @param request AuthorizeResourceServerScopesToClientRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AuthorizeResourceServerScopesToClientResponse
       */
      Models::AuthorizeResourceServerScopesToClientResponse authorizeResourceServerScopesToClientWithOptions(const Models::AuthorizeResourceServerScopesToClientRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Grants Scope permissions under a specified ResourceServer to a Client application.
       *
       * @param request AuthorizeResourceServerScopesToClientRequest
       * @return AuthorizeResourceServerScopesToClientResponse
       */
      Models::AuthorizeResourceServerScopesToClientResponse authorizeResourceServerScopesToClient(const Models::AuthorizeResourceServerScopesToClientRequest &request);

      /**
       * @summary Grants Scope permissions under a specified ResourceServer to a group.
       *
       * @param request AuthorizeResourceServerScopesToGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AuthorizeResourceServerScopesToGroupResponse
       */
      Models::AuthorizeResourceServerScopesToGroupResponse authorizeResourceServerScopesToGroupWithOptions(const Models::AuthorizeResourceServerScopesToGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Grants Scope permissions under a specified ResourceServer to a group.
       *
       * @param request AuthorizeResourceServerScopesToGroupRequest
       * @return AuthorizeResourceServerScopesToGroupResponse
       */
      Models::AuthorizeResourceServerScopesToGroupResponse authorizeResourceServerScopesToGroup(const Models::AuthorizeResourceServerScopesToGroupRequest &request);

      /**
       * @summary Grants scope permissions under a specified ResourceServer to an organizational unit.
       *
       * @param request AuthorizeResourceServerScopesToOrganizationalUnitRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AuthorizeResourceServerScopesToOrganizationalUnitResponse
       */
      Models::AuthorizeResourceServerScopesToOrganizationalUnitResponse authorizeResourceServerScopesToOrganizationalUnitWithOptions(const Models::AuthorizeResourceServerScopesToOrganizationalUnitRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Grants scope permissions under a specified ResourceServer to an organizational unit.
       *
       * @param request AuthorizeResourceServerScopesToOrganizationalUnitRequest
       * @return AuthorizeResourceServerScopesToOrganizationalUnitResponse
       */
      Models::AuthorizeResourceServerScopesToOrganizationalUnitResponse authorizeResourceServerScopesToOrganizationalUnit(const Models::AuthorizeResourceServerScopesToOrganizationalUnitRequest &request);

      /**
       * @summary Grants Scope permissions under a specified ResourceServer to an account.
       *
       * @param request AuthorizeResourceServerScopesToUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AuthorizeResourceServerScopesToUserResponse
       */
      Models::AuthorizeResourceServerScopesToUserResponse authorizeResourceServerScopesToUserWithOptions(const Models::AuthorizeResourceServerScopesToUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Grants Scope permissions under a specified ResourceServer to an account.
       *
       * @param request AuthorizeResourceServerScopesToUserRequest
       * @return AuthorizeResourceServerScopesToUserResponse
       */
      Models::AuthorizeResourceServerScopesToUserResponse authorizeResourceServerScopesToUser(const Models::AuthorizeResourceServerScopesToUserRequest &request);

      /**
       * @summary Authorizes a specified ResourceServer for a Client application.
       *
       * @param request AuthorizeResourceServerToClientRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AuthorizeResourceServerToClientResponse
       */
      Models::AuthorizeResourceServerToClientResponse authorizeResourceServerToClientWithOptions(const Models::AuthorizeResourceServerToClientRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Authorizes a specified ResourceServer for a Client application.
       *
       * @param request AuthorizeResourceServerToClientRequest
       * @return AuthorizeResourceServerToClientResponse
       */
      Models::AuthorizeResourceServerToClientResponse authorizeResourceServerToClient(const Models::AuthorizeResourceServerToClientRequest &request);

      /**
       * @summary Associates a third-party logon account.
       *
       * @param request BindUserAuthnSourceMappingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BindUserAuthnSourceMappingResponse
       */
      Models::BindUserAuthnSourceMappingResponse bindUserAuthnSourceMappingWithOptions(const Models::BindUserAuthnSourceMappingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Associates a third-party logon account.
       *
       * @param request BindUserAuthnSourceMappingRequest
       * @return BindUserAuthnSourceMappingResponse
       */
      Models::BindUserAuthnSourceMappingResponse bindUserAuthnSourceMapping(const Models::BindUserAuthnSourceMappingRequest &request);

      /**
       * @summary Checks whether the primary organization for application synchronization is within the application synchronization scope.
       *
       * @param request CheckApplicationProvisioningUserPrimaryOrganizationalUnitRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckApplicationProvisioningUserPrimaryOrganizationalUnitResponse
       */
      Models::CheckApplicationProvisioningUserPrimaryOrganizationalUnitResponse checkApplicationProvisioningUserPrimaryOrganizationalUnitWithOptions(const Models::CheckApplicationProvisioningUserPrimaryOrganizationalUnitRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks whether the primary organization for application synchronization is within the application synchronization scope.
       *
       * @param request CheckApplicationProvisioningUserPrimaryOrganizationalUnitRequest
       * @return CheckApplicationProvisioningUserPrimaryOrganizationalUnitResponse
       */
      Models::CheckApplicationProvisioningUserPrimaryOrganizationalUnitResponse checkApplicationProvisioningUserPrimaryOrganizationalUnit(const Models::CheckApplicationProvisioningUserPrimaryOrganizationalUnitRequest &request);

      /**
       * @summary Checks whether an instance can be deleted.
       *
       * @param request CheckInstanceForDeleteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckInstanceForDeleteResponse
       */
      Models::CheckInstanceForDeleteResponse checkInstanceForDeleteWithOptions(const Models::CheckInstanceForDeleteRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks whether an instance can be deleted.
       *
       * @param request CheckInstanceForDeleteRequest
       * @return CheckInstanceForDeleteResponse
       */
      Models::CheckInstanceForDeleteResponse checkInstanceForDelete(const Models::CheckInstanceForDeleteRequest &request);

      /**
       * @summary Determines whether an instance has the feature of a specific module.
       *
       * @param request CheckInstanceModuleStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckInstanceModuleStatusResponse
       */
      Models::CheckInstanceModuleStatusResponse checkInstanceModuleStatusWithOptions(const Models::CheckInstanceModuleStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Determines whether an instance has the feature of a specific module.
       *
       * @param request CheckInstanceModuleStatusRequest
       * @return CheckInstanceModuleStatusResponse
       */
      Models::CheckInstanceModuleStatusResponse checkInstanceModuleStatus(const Models::CheckInstanceModuleStatusRequest &request);

      /**
       * @summary Creates an application resource in a specified EIAM instance.
       *
       * @description EIAM supports two standard SSO protocols for application access: SAML 2.0 and OIDC. This parameter cannot be changed after it is specified. Create the application based on the SSO protocol type used in your business scenario.
       *
       * @param request CreateApplicationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateApplicationResponse
       */
      Models::CreateApplicationResponse createApplicationWithOptions(const Models::CreateApplicationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an application resource in a specified EIAM instance.
       *
       * @description EIAM supports two standard SSO protocols for application access: SAML 2.0 and OIDC. This parameter cannot be changed after it is specified. Create the application based on the SSO protocol type used in your business scenario.
       *
       * @param request CreateApplicationRequest
       * @return CreateApplicationResponse
       */
      Models::CreateApplicationResponse createApplication(const Models::CreateApplicationRequest &request);

      /**
       * @summary Creates a client secret for an EIAM application. You can create a maximum of two client secrets for each EIAM application.
       *
       * @param request CreateApplicationClientSecretRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateApplicationClientSecretResponse
       */
      Models::CreateApplicationClientSecretResponse createApplicationClientSecretWithOptions(const Models::CreateApplicationClientSecretRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a client secret for an EIAM application. You can create a maximum of two client secrets for each EIAM application.
       *
       * @param request CreateApplicationClientSecretRequest
       * @return CreateApplicationClientSecretResponse
       */
      Models::CreateApplicationClientSecretResponse createApplicationClientSecret(const Models::CreateApplicationClientSecretRequest &request);

      /**
       * @summary Creates an application federated identity credential.
       *
       * @param request CreateApplicationFederatedCredentialRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateApplicationFederatedCredentialResponse
       */
      Models::CreateApplicationFederatedCredentialResponse createApplicationFederatedCredentialWithOptions(const Models::CreateApplicationFederatedCredentialRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an application federated identity credential.
       *
       * @param request CreateApplicationFederatedCredentialRequest
       * @return CreateApplicationFederatedCredentialResponse
       */
      Models::CreateApplicationFederatedCredentialResponse createApplicationFederatedCredential(const Models::CreateApplicationFederatedCredentialRequest &request);

      /**
       * @summary Creates an application role.
       *
       * @param request CreateApplicationRoleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateApplicationRoleResponse
       */
      Models::CreateApplicationRoleResponse createApplicationRoleWithOptions(const Models::CreateApplicationRoleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an application role.
       *
       * @param request CreateApplicationRoleRequest
       * @return CreateApplicationRoleResponse
       */
      Models::CreateApplicationRoleResponse createApplicationRole(const Models::CreateApplicationRoleRequest &request);

      /**
       * @summary Creates an application token.
       *
       * @param request CreateApplicationTokenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateApplicationTokenResponse
       */
      Models::CreateApplicationTokenResponse createApplicationTokenWithOptions(const Models::CreateApplicationTokenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an application token.
       *
       * @param request CreateApplicationTokenRequest
       * @return CreateApplicationTokenResponse
       */
      Models::CreateApplicationTokenResponse createApplicationToken(const Models::CreateApplicationTokenRequest &request);

      /**
       * @summary Creates an authorization resource.
       *
       * @param request CreateAuthorizationResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAuthorizationResourceResponse
       */
      Models::CreateAuthorizationResourceResponse createAuthorizationResourceWithOptions(const Models::CreateAuthorizationResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an authorization resource.
       *
       * @param request CreateAuthorizationResourceRequest
       * @return CreateAuthorizationResourceResponse
       */
      Models::CreateAuthorizationResourceResponse createAuthorizationResource(const Models::CreateAuthorizationResourceRequest &request);

      /**
       * @summary Creates an authorization rule.
       *
       * @param request CreateAuthorizationRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAuthorizationRuleResponse
       */
      Models::CreateAuthorizationRuleResponse createAuthorizationRuleWithOptions(const Models::CreateAuthorizationRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an authorization rule.
       *
       * @param request CreateAuthorizationRuleRequest
       * @return CreateAuthorizationRuleResponse
       */
      Models::CreateAuthorizationRuleResponse createAuthorizationRule(const Models::CreateAuthorizationRuleRequest &request);

      /**
       * @summary Creates a brand.
       *
       * @param request CreateBrandRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateBrandResponse
       */
      Models::CreateBrandResponse createBrandWithOptions(const Models::CreateBrandRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a brand.
       *
       * @param request CreateBrandRequest
       * @return CreateBrandResponse
       */
      Models::CreateBrandResponse createBrand(const Models::CreateBrandRequest &request);

      /**
       * @summary Creates a ClientPublicKey for an application. When an M2M client uses the PRIVATE_KEY_JWT method to request the token endpoint, this public key is used by the M2M authorization server to verify the assertion carried in the client\\"s token endpoint request.
       *
       * @param request CreateClientPublicKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateClientPublicKeyResponse
       */
      Models::CreateClientPublicKeyResponse createClientPublicKeyWithOptions(const Models::CreateClientPublicKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a ClientPublicKey for an application. When an M2M client uses the PRIVATE_KEY_JWT method to request the token endpoint, this public key is used by the M2M authorization server to verify the assertion carried in the client\\"s token endpoint request.
       *
       * @param request CreateClientPublicKeyRequest
       * @return CreateClientPublicKeyResponse
       */
      Models::CreateClientPublicKeyResponse createClientPublicKey(const Models::CreateClientPublicKeyRequest &request);

      /**
       * @summary Creates a cloud account resource in a specified EIAM instance.
       *
       * @description **Before you call this operation, make sure that you fully understand the billing methods and [pricing](https://www.aliyun.com/price/product#/ecs/detail) of IDaaS EIAM.**
       *
       * @param request CreateCloudAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCloudAccountResponse
       */
      Models::CreateCloudAccountResponse createCloudAccountWithOptions(const Models::CreateCloudAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a cloud account resource in a specified EIAM instance.
       *
       * @description **Before you call this operation, make sure that you fully understand the billing methods and [pricing](https://www.aliyun.com/price/product#/ecs/detail) of IDaaS EIAM.**
       *
       * @param request CreateCloudAccountRequest
       * @return CreateCloudAccountResponse
       */
      Models::CreateCloudAccountResponse createCloudAccount(const Models::CreateCloudAccountRequest &request);

      /**
       * @summary Creates a cloud role for a specified Alibaba Cloud account.
       *
       * @param request CreateCloudAccountRoleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCloudAccountRoleResponse
       */
      Models::CreateCloudAccountRoleResponse createCloudAccountRoleWithOptions(const Models::CreateCloudAccountRoleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a cloud role for a specified Alibaba Cloud account.
       *
       * @param request CreateCloudAccountRoleRequest
       * @return CreateCloudAccountRoleResponse
       */
      Models::CreateCloudAccountRoleResponse createCloudAccountRole(const Models::CreateCloudAccountRoleRequest &request);

      /**
       * @summary Creates a conditional access policy.
       *
       * @description Creates a conditional access policy.
       *
       * @param request CreateConditionalAccessPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateConditionalAccessPolicyResponse
       */
      Models::CreateConditionalAccessPolicyResponse createConditionalAccessPolicyWithOptions(const Models::CreateConditionalAccessPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a conditional access policy.
       *
       * @description Creates a conditional access policy.
       *
       * @param request CreateConditionalAccessPolicyRequest
       * @return CreateConditionalAccessPolicyResponse
       */
      Models::CreateConditionalAccessPolicyResponse createConditionalAccessPolicy(const Models::CreateConditionalAccessPolicyRequest &request);

      /**
       * @summary Creates a credential resource in a specified EIAM instance.
       *
       * @param request CreateCredentialRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCredentialResponse
       */
      Models::CreateCredentialResponse createCredentialWithOptions(const Models::CreateCredentialRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a credential resource in a specified EIAM instance.
       *
       * @param request CreateCredentialRequest
       * @return CreateCredentialResponse
       */
      Models::CreateCredentialResponse createCredential(const Models::CreateCredentialRequest &request);

      /**
       * @summary Creates a credential provider.
       *
       * @param request CreateCredentialProviderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCredentialProviderResponse
       */
      Models::CreateCredentialProviderResponse createCredentialProviderWithOptions(const Models::CreateCredentialProviderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a credential provider.
       *
       * @param request CreateCredentialProviderRequest
       * @return CreateCredentialProviderResponse
       */
      Models::CreateCredentialProviderResponse createCredentialProvider(const Models::CreateCredentialProviderRequest &request);

      /**
       * @summary Creates an extended field.
       *
       * @param request CreateCustomFieldRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCustomFieldResponse
       */
      Models::CreateCustomFieldResponse createCustomFieldWithOptions(const Models::CreateCustomFieldRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an extended field.
       *
       * @param request CreateCustomFieldRequest
       * @return CreateCustomFieldResponse
       */
      Models::CreateCustomFieldResponse createCustomField(const Models::CreateCustomFieldRequest &request);

      /**
       * @summary You can create custom terms.
       *
       * @param request CreateCustomPrivacyPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCustomPrivacyPolicyResponse
       */
      Models::CreateCustomPrivacyPolicyResponse createCustomPrivacyPolicyWithOptions(const Models::CreateCustomPrivacyPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can create custom terms.
       *
       * @param request CreateCustomPrivacyPolicyRequest
       * @return CreateCustomPrivacyPolicyResponse
       */
      Models::CreateCustomPrivacyPolicyResponse createCustomPrivacyPolicy(const Models::CreateCustomPrivacyPolicyRequest &request);

      /**
       * @summary Creates a custom domain name for an EIAM (Entity and Identity Access Management) instance.
       *
       * @param request CreateDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDomainResponse
       */
      Models::CreateDomainResponse createDomainWithOptions(const Models::CreateDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a custom domain name for an EIAM (Entity and Identity Access Management) instance.
       *
       * @param request CreateDomainRequest
       * @return CreateDomainResponse
       */
      Models::CreateDomainResponse createDomain(const Models::CreateDomainRequest &request);

      /**
       * @summary Creates a proxy token for a domain name of an Employee Identity and Access Management (EIAM) instance.
       *
       * @param request CreateDomainProxyTokenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDomainProxyTokenResponse
       */
      Models::CreateDomainProxyTokenResponse createDomainProxyTokenWithOptions(const Models::CreateDomainProxyTokenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a proxy token for a domain name of an Employee Identity and Access Management (EIAM) instance.
       *
       * @param request CreateDomainProxyTokenRequest
       * @return CreateDomainProxyTokenResponse
       */
      Models::CreateDomainProxyTokenResponse createDomainProxyToken(const Models::CreateDomainProxyTokenRequest &request);

      /**
       * @summary Creates a federated trust source.
       *
       * @param request CreateFederatedCredentialProviderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateFederatedCredentialProviderResponse
       */
      Models::CreateFederatedCredentialProviderResponse createFederatedCredentialProviderWithOptions(const Models::CreateFederatedCredentialProviderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a federated trust source.
       *
       * @param request CreateFederatedCredentialProviderRequest
       * @return CreateFederatedCredentialProviderResponse
       */
      Models::CreateFederatedCredentialProviderResponse createFederatedCredentialProvider(const Models::CreateFederatedCredentialProviderRequest &request);

      /**
       * @summary Create an EIAM account group.
       *
       * @param request CreateGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateGroupResponse
       */
      Models::CreateGroupResponse createGroupWithOptions(const Models::CreateGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create an EIAM account group.
       *
       * @param request CreateGroupRequest
       * @return CreateGroupResponse
       */
      Models::CreateGroupResponse createGroup(const Models::CreateGroupRequest &request);

      /**
       * @summary Create an identity provider.
       *
       * @param request CreateIdentityProviderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateIdentityProviderResponse
       */
      Models::CreateIdentityProviderResponse createIdentityProviderWithOptions(const Models::CreateIdentityProviderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create an identity provider.
       *
       * @param request CreateIdentityProviderRequest
       * @return CreateIdentityProviderResponse
       */
      Models::CreateIdentityProviderResponse createIdentityProvider(const Models::CreateIdentityProviderRequest &request);

      /**
       * @summary Creates a status check job for an identity provider.
       *
       * @param request CreateIdentityProviderStatusCheckJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateIdentityProviderStatusCheckJobResponse
       */
      Models::CreateIdentityProviderStatusCheckJobResponse createIdentityProviderStatusCheckJobWithOptions(const Models::CreateIdentityProviderStatusCheckJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a status check job for an identity provider.
       *
       * @param request CreateIdentityProviderStatusCheckJobRequest
       * @return CreateIdentityProviderStatusCheckJobResponse
       */
      Models::CreateIdentityProviderStatusCheckJobResponse createIdentityProviderStatusCheckJob(const Models::CreateIdentityProviderStatusCheckJobRequest &request);

      /**
       * @summary Creates an instance based on which all capabilities of Identity as a Service (IDaaS) Enterprise Identity and Access Management (EIAM) are provided.
       *
       * @param request CreateInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateInstanceResponse
       */
      Models::CreateInstanceResponse createInstanceWithOptions(const Models::CreateInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an instance based on which all capabilities of Identity as a Service (IDaaS) Enterprise Identity and Access Management (EIAM) are provided.
       *
       * @param request CreateInstanceRequest
       * @return CreateInstanceResponse
       */
      Models::CreateInstanceResponse createInstance(const Models::CreateInstanceRequest &request);

      /**
       * @summary Creates a trial License for an instance.
       *
       * @param request CreateInstanceTrialLicenseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateInstanceTrialLicenseResponse
       */
      Models::CreateInstanceTrialLicenseResponse createInstanceTrialLicenseWithOptions(const Models::CreateInstanceTrialLicenseRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a trial License for an instance.
       *
       * @param request CreateInstanceTrialLicenseRequest
       * @return CreateInstanceTrialLicenseResponse
       */
      Models::CreateInstanceTrialLicenseResponse createInstanceTrialLicense(const Models::CreateInstanceTrialLicenseRequest &request);

      /**
       * @summary Creates a network access endpoint.
       *
       * @param request CreateNetworkAccessEndpointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateNetworkAccessEndpointResponse
       */
      Models::CreateNetworkAccessEndpointResponse createNetworkAccessEndpointWithOptions(const Models::CreateNetworkAccessEndpointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a network access endpoint.
       *
       * @param request CreateNetworkAccessEndpointRequest
       * @return CreateNetworkAccessEndpointResponse
       */
      Models::CreateNetworkAccessEndpointResponse createNetworkAccessEndpoint(const Models::CreateNetworkAccessEndpointRequest &request);

      /**
       * @summary Creates a network zone object.
       *
       * @param request CreateNetworkZoneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateNetworkZoneResponse
       */
      Models::CreateNetworkZoneResponse createNetworkZoneWithOptions(const Models::CreateNetworkZoneRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a network zone object.
       *
       * @param request CreateNetworkZoneRequest
       * @return CreateNetworkZoneResponse
       */
      Models::CreateNetworkZoneResponse createNetworkZone(const Models::CreateNetworkZoneRequest &request);

      /**
       * @summary Creates an EIAM organization under a specified organization.
       *
       * @param request CreateOrganizationalUnitRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateOrganizationalUnitResponse
       */
      Models::CreateOrganizationalUnitResponse createOrganizationalUnitWithOptions(const Models::CreateOrganizationalUnitRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an EIAM organization under a specified organization.
       *
       * @param request CreateOrganizationalUnitRequest
       * @return CreateOrganizationalUnitResponse
       */
      Models::CreateOrganizationalUnitResponse createOrganizationalUnit(const Models::CreateOrganizationalUnitRequest &request);

      /**
       * @summary Creates a scope permission for a specified resource server.
       *
       * @param request CreateResourceServerScopeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateResourceServerScopeResponse
       */
      Models::CreateResourceServerScopeResponse createResourceServerScopeWithOptions(const Models::CreateResourceServerScopeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a scope permission for a specified resource server.
       *
       * @param request CreateResourceServerScopeRequest
       * @return CreateResourceServerScopeResponse
       */
      Models::CreateResourceServerScopeResponse createResourceServerScope(const Models::CreateResourceServerScopeRequest &request);

      /**
       * @summary Creates an EIAM account in a specified EIAM instance.
       *
       * @param request CreateUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateUserResponse
       */
      Models::CreateUserResponse createUserWithOptions(const Models::CreateUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an EIAM account in a specified EIAM instance.
       *
       * @param request CreateUserRequest
       * @return CreateUserResponse
       */
      Models::CreateUserResponse createUser(const Models::CreateUserRequest &request);

      /**
       * @summary Deletes an EIAM application resource.
       *
       * @description Before deleting a specified EIAM application, make sure the application is no longer in use. After the application is deleted, all configuration data is permanently deleted and cannot be recovered.
       *
       * @param request DeleteApplicationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteApplicationResponse
       */
      Models::DeleteApplicationResponse deleteApplicationWithOptions(const Models::DeleteApplicationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an EIAM application resource.
       *
       * @description Before deleting a specified EIAM application, make sure the application is no longer in use. After the application is deleted, all configuration data is permanently deleted and cannot be recovered.
       *
       * @param request DeleteApplicationRequest
       * @return DeleteApplicationResponse
       */
      Models::DeleteApplicationResponse deleteApplication(const Models::DeleteApplicationRequest &request);

      /**
       * @summary Deletes a client secret of an EIAM application.
       *
       * @param request DeleteApplicationClientSecretRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteApplicationClientSecretResponse
       */
      Models::DeleteApplicationClientSecretResponse deleteApplicationClientSecretWithOptions(const Models::DeleteApplicationClientSecretRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a client secret of an EIAM application.
       *
       * @param request DeleteApplicationClientSecretRequest
       * @return DeleteApplicationClientSecretResponse
       */
      Models::DeleteApplicationClientSecretResponse deleteApplicationClientSecret(const Models::DeleteApplicationClientSecretRequest &request);

      /**
       * @summary Deletes a federated identity credential of an application.
       *
       * @param request DeleteApplicationFederatedCredentialRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteApplicationFederatedCredentialResponse
       */
      Models::DeleteApplicationFederatedCredentialResponse deleteApplicationFederatedCredentialWithOptions(const Models::DeleteApplicationFederatedCredentialRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a federated identity credential of an application.
       *
       * @param request DeleteApplicationFederatedCredentialRequest
       * @return DeleteApplicationFederatedCredentialResponse
       */
      Models::DeleteApplicationFederatedCredentialResponse deleteApplicationFederatedCredential(const Models::DeleteApplicationFederatedCredentialRequest &request);

      /**
       * @summary Deletes an application role.
       *
       * @param request DeleteApplicationRoleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteApplicationRoleResponse
       */
      Models::DeleteApplicationRoleResponse deleteApplicationRoleWithOptions(const Models::DeleteApplicationRoleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an application role.
       *
       * @param request DeleteApplicationRoleRequest
       * @return DeleteApplicationRoleResponse
       */
      Models::DeleteApplicationRoleResponse deleteApplicationRole(const Models::DeleteApplicationRoleRequest &request);

      /**
       * @summary Deletes an ApplicationToken.
       *
       * @param request DeleteApplicationTokenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteApplicationTokenResponse
       */
      Models::DeleteApplicationTokenResponse deleteApplicationTokenWithOptions(const Models::DeleteApplicationTokenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an ApplicationToken.
       *
       * @param request DeleteApplicationTokenRequest
       * @return DeleteApplicationTokenResponse
       */
      Models::DeleteApplicationTokenResponse deleteApplicationToken(const Models::DeleteApplicationTokenRequest &request);

      /**
       * @summary Deletes an authorized resource.
       *
       * @param request DeleteAuthorizationResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAuthorizationResourceResponse
       */
      Models::DeleteAuthorizationResourceResponse deleteAuthorizationResourceWithOptions(const Models::DeleteAuthorizationResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an authorized resource.
       *
       * @param request DeleteAuthorizationResourceRequest
       * @return DeleteAuthorizationResourceResponse
       */
      Models::DeleteAuthorizationResourceResponse deleteAuthorizationResource(const Models::DeleteAuthorizationResourceRequest &request);

      /**
       * @summary Deletes an authorization rule. The authorization rule can be deleted only when it is in the disabled state.
       *
       * @param request DeleteAuthorizationRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAuthorizationRuleResponse
       */
      Models::DeleteAuthorizationRuleResponse deleteAuthorizationRuleWithOptions(const Models::DeleteAuthorizationRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an authorization rule. The authorization rule can be deleted only when it is in the disabled state.
       *
       * @param request DeleteAuthorizationRuleRequest
       * @return DeleteAuthorizationRuleResponse
       */
      Models::DeleteAuthorizationRuleResponse deleteAuthorizationRule(const Models::DeleteAuthorizationRuleRequest &request);

      /**
       * @summary Delete Brand
       *
       * @param request DeleteBrandRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteBrandResponse
       */
      Models::DeleteBrandResponse deleteBrandWithOptions(const Models::DeleteBrandRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete Brand
       *
       * @param request DeleteBrandRequest
       * @return DeleteBrandResponse
       */
      Models::DeleteBrandResponse deleteBrand(const Models::DeleteBrandRequest &request);

      /**
       * @summary Deletes a specified application ClientPublicKey.
       *
       * @param request DeleteClientPublicKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteClientPublicKeyResponse
       */
      Models::DeleteClientPublicKeyResponse deleteClientPublicKeyWithOptions(const Models::DeleteClientPublicKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified application ClientPublicKey.
       *
       * @param request DeleteClientPublicKeyRequest
       * @return DeleteClientPublicKeyResponse
       */
      Models::DeleteClientPublicKeyResponse deleteClientPublicKey(const Models::DeleteClientPublicKeyRequest &request);

      /**
       * @summary Deletes an Alibaba Cloud account resource.
       *
       * @param request DeleteCloudAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCloudAccountResponse
       */
      Models::DeleteCloudAccountResponse deleteCloudAccountWithOptions(const Models::DeleteCloudAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an Alibaba Cloud account resource.
       *
       * @param request DeleteCloudAccountRequest
       * @return DeleteCloudAccountResponse
       */
      Models::DeleteCloudAccountResponse deleteCloudAccount(const Models::DeleteCloudAccountRequest &request);

      /**
       * @summary Deletes a cloud role from a specified Alibaba Cloud account.
       *
       * @description You must disable the cloud role before you delete it. After you delete the role, all related data is also deleted and cannot be recovered.
       *
       * @param request DeleteCloudAccountRoleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCloudAccountRoleResponse
       */
      Models::DeleteCloudAccountRoleResponse deleteCloudAccountRoleWithOptions(const Models::DeleteCloudAccountRoleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a cloud role from a specified Alibaba Cloud account.
       *
       * @description You must disable the cloud role before you delete it. After you delete the role, all related data is also deleted and cannot be recovered.
       *
       * @param request DeleteCloudAccountRoleRequest
       * @return DeleteCloudAccountRoleResponse
       */
      Models::DeleteCloudAccountRoleResponse deleteCloudAccountRole(const Models::DeleteCloudAccountRoleRequest &request);

      /**
       * @summary Deletes a conditional access policy.
       *
       * @description Before you delete a conditional access policy, make sure that the policy is no longer in use. After the policy is deleted, all configuration data is permanently removed and cannot be recovered.
       *
       * @param request DeleteConditionalAccessPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteConditionalAccessPolicyResponse
       */
      Models::DeleteConditionalAccessPolicyResponse deleteConditionalAccessPolicyWithOptions(const Models::DeleteConditionalAccessPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a conditional access policy.
       *
       * @description Before you delete a conditional access policy, make sure that the policy is no longer in use. After the policy is deleted, all configuration data is permanently removed and cannot be recovered.
       *
       * @param request DeleteConditionalAccessPolicyRequest
       * @return DeleteConditionalAccessPolicyResponse
       */
      Models::DeleteConditionalAccessPolicyResponse deleteConditionalAccessPolicy(const Models::DeleteConditionalAccessPolicyRequest &request);

      /**
       * @summary Deletes a credential resource.
       *
       * @param request DeleteCredentialRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCredentialResponse
       */
      Models::DeleteCredentialResponse deleteCredentialWithOptions(const Models::DeleteCredentialRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a credential resource.
       *
       * @param request DeleteCredentialRequest
       * @return DeleteCredentialResponse
       */
      Models::DeleteCredentialResponse deleteCredential(const Models::DeleteCredentialRequest &request);

      /**
       * @summary Deletes a credential provider.
       *
       * @param request DeleteCredentialProviderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCredentialProviderResponse
       */
      Models::DeleteCredentialProviderResponse deleteCredentialProviderWithOptions(const Models::DeleteCredentialProviderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a credential provider.
       *
       * @param request DeleteCredentialProviderRequest
       * @return DeleteCredentialProviderResponse
       */
      Models::DeleteCredentialProviderResponse deleteCredentialProvider(const Models::DeleteCredentialProviderRequest &request);

      /**
       * @summary Deletes an extended character field.
       *
       * @param request DeleteCustomFieldRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCustomFieldResponse
       */
      Models::DeleteCustomFieldResponse deleteCustomFieldWithOptions(const Models::DeleteCustomFieldRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an extended character field.
       *
       * @param request DeleteCustomFieldRequest
       * @return DeleteCustomFieldResponse
       */
      Models::DeleteCustomFieldResponse deleteCustomField(const Models::DeleteCustomFieldRequest &request);

      /**
       * @summary Deletes a custom clause.
       *
       * @param request DeleteCustomPrivacyPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCustomPrivacyPolicyResponse
       */
      Models::DeleteCustomPrivacyPolicyResponse deleteCustomPrivacyPolicyWithOptions(const Models::DeleteCustomPrivacyPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a custom clause.
       *
       * @param request DeleteCustomPrivacyPolicyRequest
       * @return DeleteCustomPrivacyPolicyResponse
       */
      Models::DeleteCustomPrivacyPolicyResponse deleteCustomPrivacyPolicy(const Models::DeleteCustomPrivacyPolicyRequest &request);

      /**
       * @summary Deletes a custom domain name of a specified Employee Identity and Access Management (EIAM) instance. Deletion of the instance initialization domain name or default domain name is rejected.
       *
       * @param request DeleteDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDomainResponse
       */
      Models::DeleteDomainResponse deleteDomainWithOptions(const Models::DeleteDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a custom domain name of a specified Employee Identity and Access Management (EIAM) instance. Deletion of the instance initialization domain name or default domain name is rejected.
       *
       * @param request DeleteDomainRequest
       * @return DeleteDomainResponse
       */
      Models::DeleteDomainResponse deleteDomain(const Models::DeleteDomainRequest &request);

      /**
       * @summary Deletes a proxy token for a specified domain name of an EIAM instance. Only proxy tokens in the disabled state can be deleted.
       *
       * @param request DeleteDomainProxyTokenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDomainProxyTokenResponse
       */
      Models::DeleteDomainProxyTokenResponse deleteDomainProxyTokenWithOptions(const Models::DeleteDomainProxyTokenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a proxy token for a specified domain name of an EIAM instance. Only proxy tokens in the disabled state can be deleted.
       *
       * @param request DeleteDomainProxyTokenRequest
       * @return DeleteDomainProxyTokenResponse
       */
      Models::DeleteDomainProxyTokenResponse deleteDomainProxyToken(const Models::DeleteDomainProxyTokenRequest &request);

      /**
       * @summary Deletes a federated credential provider.
       *
       * @param request DeleteFederatedCredentialProviderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteFederatedCredentialProviderResponse
       */
      Models::DeleteFederatedCredentialProviderResponse deleteFederatedCredentialProviderWithOptions(const Models::DeleteFederatedCredentialProviderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a federated credential provider.
       *
       * @param request DeleteFederatedCredentialProviderRequest
       * @return DeleteFederatedCredentialProviderResponse
       */
      Models::DeleteFederatedCredentialProviderResponse deleteFederatedCredentialProvider(const Models::DeleteFederatedCredentialProviderRequest &request);

      /**
       * @summary Delete an EIAM account group.
       *
       * @param request DeleteGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteGroupResponse
       */
      Models::DeleteGroupResponse deleteGroupWithOptions(const Models::DeleteGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete an EIAM account group.
       *
       * @param request DeleteGroupRequest
       * @return DeleteGroupResponse
       */
      Models::DeleteGroupResponse deleteGroup(const Models::DeleteGroupRequest &request);

      /**
       * @summary Deletes an identity provider.
       *
       * @param request DeleteIdentityProviderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteIdentityProviderResponse
       */
      Models::DeleteIdentityProviderResponse deleteIdentityProviderWithOptions(const Models::DeleteIdentityProviderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an identity provider.
       *
       * @param request DeleteIdentityProviderRequest
       * @return DeleteIdentityProviderResponse
       */
      Models::DeleteIdentityProviderResponse deleteIdentityProvider(const Models::DeleteIdentityProviderRequest &request);

      /**
       * @summary Deletes an Employee Identity and Access Management (EIAM) instance that you no longer use.
       *
       * @description Make sure that the instance is no longer in use. After an EIAM instance is deleted, all related data is deleted.
       *
       * @param request DeleteInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteInstanceResponse
       */
      Models::DeleteInstanceResponse deleteInstanceWithOptions(const Models::DeleteInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an Employee Identity and Access Management (EIAM) instance that you no longer use.
       *
       * @description Make sure that the instance is no longer in use. After an EIAM instance is deleted, all related data is deleted.
       *
       * @param request DeleteInstanceRequest
       * @return DeleteInstanceResponse
       */
      Models::DeleteInstanceResponse deleteInstance(const Models::DeleteInstanceRequest &request);

      /**
       * @summary Deletes a dedicated network access endpoint.
       *
       * @param request DeleteNetworkAccessEndpointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteNetworkAccessEndpointResponse
       */
      Models::DeleteNetworkAccessEndpointResponse deleteNetworkAccessEndpointWithOptions(const Models::DeleteNetworkAccessEndpointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a dedicated network access endpoint.
       *
       * @param request DeleteNetworkAccessEndpointRequest
       * @return DeleteNetworkAccessEndpointResponse
       */
      Models::DeleteNetworkAccessEndpointResponse deleteNetworkAccessEndpoint(const Models::DeleteNetworkAccessEndpointRequest &request);

      /**
       * @summary Deletes a network zone object.
       *
       * @param request DeleteNetworkZoneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteNetworkZoneResponse
       */
      Models::DeleteNetworkZoneResponse deleteNetworkZoneWithOptions(const Models::DeleteNetworkZoneRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a network zone object.
       *
       * @param request DeleteNetworkZoneRequest
       * @return DeleteNetworkZoneResponse
       */
      Models::DeleteNetworkZoneResponse deleteNetworkZone(const Models::DeleteNetworkZoneRequest &request);

      /**
       * @summary Deletes a specified EIAM organizational unit. The deletion fails if the organizational unit contains EIAM accounts or child organizational units.
       *
       * @param request DeleteOrganizationalUnitRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteOrganizationalUnitResponse
       */
      Models::DeleteOrganizationalUnitResponse deleteOrganizationalUnitWithOptions(const Models::DeleteOrganizationalUnitRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified EIAM organizational unit. The deletion fails if the organizational unit contains EIAM accounts or child organizational units.
       *
       * @param request DeleteOrganizationalUnitRequest
       * @return DeleteOrganizationalUnitResponse
       */
      Models::DeleteOrganizationalUnitResponse deleteOrganizationalUnit(const Models::DeleteOrganizationalUnitRequest &request);

      /**
       * @summary Deletes all data of a specified organization. This operation can force delete all accounts and sub-organizations under the specified organization.
       *
       * @param request DeleteOrganizationalUnitChildrenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteOrganizationalUnitChildrenResponse
       */
      Models::DeleteOrganizationalUnitChildrenResponse deleteOrganizationalUnitChildrenWithOptions(const Models::DeleteOrganizationalUnitChildrenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes all data of a specified organization. This operation can force delete all accounts and sub-organizations under the specified organization.
       *
       * @param request DeleteOrganizationalUnitChildrenRequest
       * @return DeleteOrganizationalUnitChildrenResponse
       */
      Models::DeleteOrganizationalUnitChildrenResponse deleteOrganizationalUnitChildren(const Models::DeleteOrganizationalUnitChildrenRequest &request);

      /**
       * @summary Deletes a scope permission under a specified ResourceServer.
       *
       * @param request DeleteResourceServerScopeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteResourceServerScopeResponse
       */
      Models::DeleteResourceServerScopeResponse deleteResourceServerScopeWithOptions(const Models::DeleteResourceServerScopeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a scope permission under a specified ResourceServer.
       *
       * @param request DeleteResourceServerScopeRequest
       * @return DeleteResourceServerScopeResponse
       */
      Models::DeleteResourceServerScopeResponse deleteResourceServerScope(const Models::DeleteResourceServerScopeRequest &request);

      /**
       * @summary Deletes a specified EIAM account and purges all information associated with the account.
       *
       * @param request DeleteUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteUserResponse
       */
      Models::DeleteUserResponse deleteUserWithOptions(const Models::DeleteUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified EIAM account and purges all information associated with the account.
       *
       * @param request DeleteUserRequest
       * @return DeleteUserResponse
       */
      Models::DeleteUserResponse deleteUser(const Models::DeleteUserRequest &request);

      /**
       * @summary Deletes multiple accounts in a batch.
       *
       * @param request DeleteUsersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteUsersResponse
       */
      Models::DeleteUsersResponse deleteUsersWithOptions(const Models::DeleteUsersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes multiple accounts in a batch.
       *
       * @param request DeleteUsersRequest
       * @return DeleteUsersResponse
       */
      Models::DeleteUsersResponse deleteUsers(const Models::DeleteUsersRequest &request);

      /**
       * @summary Deletes the specified WebAuthn authenticator.
       *
       * @param request DeleteWebAuthnAuthenticatorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteWebAuthnAuthenticatorResponse
       */
      Models::DeleteWebAuthnAuthenticatorResponse deleteWebAuthnAuthenticatorWithOptions(const Models::DeleteWebAuthnAuthenticatorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the specified WebAuthn authenticator.
       *
       * @param request DeleteWebAuthnAuthenticatorRequest
       * @return DeleteWebAuthnAuthenticatorResponse
       */
      Models::DeleteWebAuthnAuthenticatorResponse deleteWebAuthnAuthenticator(const Models::DeleteWebAuthnAuthenticatorRequest &request);

      /**
       * @summary Disables an application by changing its status from enabled to disabled, making all capabilities of the application unavailable.
       *
       * @description When you change an application from the enabled state to the disabled state, all features of the application become unavailable (such as SSO and account synchronization). Confirm that you are aware of the risks that this operation may cause.
       *
       * @param request DisableApplicationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableApplicationResponse
       */
      Models::DisableApplicationResponse disableApplicationWithOptions(const Models::DisableApplicationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables an application by changing its status from enabled to disabled, making all capabilities of the application unavailable.
       *
       * @description When you change an application from the enabled state to the disabled state, all features of the application become unavailable (such as SSO and account synchronization). Confirm that you are aware of the risks that this operation may cause.
       *
       * @param request DisableApplicationRequest
       * @return DisableApplicationResponse
       */
      Models::DisableApplicationResponse disableApplication(const Models::DisableApplicationRequest &request);

      /**
       * @summary Disables the Developer API feature for an Employee Identity and Access Management (EIAM) application.
       *
       * @param request DisableApplicationApiInvokeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableApplicationApiInvokeResponse
       */
      Models::DisableApplicationApiInvokeResponse disableApplicationApiInvokeWithOptions(const Models::DisableApplicationApiInvokeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables the Developer API feature for an Employee Identity and Access Management (EIAM) application.
       *
       * @param request DisableApplicationApiInvokeRequest
       * @return DisableApplicationApiInvokeResponse
       */
      Models::DisableApplicationApiInvokeResponse disableApplicationApiInvoke(const Models::DisableApplicationApiInvokeRequest &request);

      /**
       * @summary Disables a client key of an Employee Identity and Access Management (EIAM) application.
       *
       * @param request DisableApplicationClientSecretRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableApplicationClientSecretResponse
       */
      Models::DisableApplicationClientSecretResponse disableApplicationClientSecretWithOptions(const Models::DisableApplicationClientSecretRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables a client key of an Employee Identity and Access Management (EIAM) application.
       *
       * @param request DisableApplicationClientSecretRequest
       * @return DisableApplicationClientSecretResponse
       */
      Models::DisableApplicationClientSecretResponse disableApplicationClientSecret(const Models::DisableApplicationClientSecretRequest &request);

      /**
       * @summary Disables a federated identity credential for an application.
       *
       * @param request DisableApplicationFederatedCredentialRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableApplicationFederatedCredentialResponse
       */
      Models::DisableApplicationFederatedCredentialResponse disableApplicationFederatedCredentialWithOptions(const Models::DisableApplicationFederatedCredentialRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables a federated identity credential for an application.
       *
       * @param request DisableApplicationFederatedCredentialRequest
       * @return DisableApplicationFederatedCredentialResponse
       */
      Models::DisableApplicationFederatedCredentialResponse disableApplicationFederatedCredential(const Models::DisableApplicationFederatedCredentialRequest &request);

      /**
       * @summary Disables the machine-to-machine (M2M) client feature for an application. This feature enables an application to act as an OAuth client and make calls to access resources.
       *
       * @param request DisableApplicationM2MClientRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableApplicationM2MClientResponse
       */
      Models::DisableApplicationM2MClientResponse disableApplicationM2MClientWithOptions(const Models::DisableApplicationM2MClientRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables the machine-to-machine (M2M) client feature for an application. This feature enables an application to act as an OAuth client and make calls to access resources.
       *
       * @param request DisableApplicationM2MClientRequest
       * @return DisableApplicationM2MClientResponse
       */
      Models::DisableApplicationM2MClientResponse disableApplicationM2MClient(const Models::DisableApplicationM2MClientRequest &request);

      /**
       * @summary Disables the account synchronization feature for an application in Identity as a Service (IDaaS) Employee Identity and Access Management (EIAM).
       *
       * @param request DisableApplicationProvisioningRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableApplicationProvisioningResponse
       */
      Models::DisableApplicationProvisioningResponse disableApplicationProvisioningWithOptions(const Models::DisableApplicationProvisioningRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables the account synchronization feature for an application in Identity as a Service (IDaaS) Employee Identity and Access Management (EIAM).
       *
       * @param request DisableApplicationProvisioningRequest
       * @return DisableApplicationProvisioningResponse
       */
      Models::DisableApplicationProvisioningResponse disableApplicationProvisioning(const Models::DisableApplicationProvisioningRequest &request);

      /**
       * @summary Disables the ResourceServer capability of a specified application.
       *
       * @param request DisableApplicationResourceServerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableApplicationResourceServerResponse
       */
      Models::DisableApplicationResourceServerResponse disableApplicationResourceServerWithOptions(const Models::DisableApplicationResourceServerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables the ResourceServer capability of a specified application.
       *
       * @param request DisableApplicationResourceServerRequest
       * @return DisableApplicationResourceServerResponse
       */
      Models::DisableApplicationResourceServerResponse disableApplicationResourceServer(const Models::DisableApplicationResourceServerRequest &request);

      /**
       * @summary Disables the single sign-on (SSO) feature for an Employee Identity and Access Management (EIAM) application. This way, employees cannot log on to the application by using SSO.
       *
       * @param request DisableApplicationSsoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableApplicationSsoResponse
       */
      Models::DisableApplicationSsoResponse disableApplicationSsoWithOptions(const Models::DisableApplicationSsoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables the single sign-on (SSO) feature for an Employee Identity and Access Management (EIAM) application. This way, employees cannot log on to the application by using SSO.
       *
       * @param request DisableApplicationSsoRequest
       * @return DisableApplicationSsoResponse
       */
      Models::DisableApplicationSsoResponse disableApplicationSso(const Models::DisableApplicationSsoRequest &request);

      /**
       * @summary Disables an application token.
       *
       * @description When you change an application from the enabled state to the disabled state, all features of the application become unavailable, such as SSO and account synchronization. Make sure that you are aware of the risks that this operation may cause.
       *
       * @param request DisableApplicationTokenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableApplicationTokenResponse
       */
      Models::DisableApplicationTokenResponse disableApplicationTokenWithOptions(const Models::DisableApplicationTokenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables an application token.
       *
       * @description When you change an application from the enabled state to the disabled state, all features of the application become unavailable, such as SSO and account synchronization. Make sure that you are aware of the risks that this operation may cause.
       *
       * @param request DisableApplicationTokenRequest
       * @return DisableApplicationTokenResponse
       */
      Models::DisableApplicationTokenResponse disableApplicationToken(const Models::DisableApplicationTokenRequest &request);

      /**
       * @summary Disables an authorization rule.
       *
       * @param request DisableAuthorizationRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableAuthorizationRuleResponse
       */
      Models::DisableAuthorizationRuleResponse disableAuthorizationRuleWithOptions(const Models::DisableAuthorizationRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables an authorization rule.
       *
       * @param request DisableAuthorizationRuleRequest
       * @return DisableAuthorizationRuleResponse
       */
      Models::DisableAuthorizationRuleResponse disableAuthorizationRule(const Models::DisableAuthorizationRuleRequest &request);

      /**
       * @summary Disables a brand.
       *
       * @param request DisableBrandRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableBrandResponse
       */
      Models::DisableBrandResponse disableBrandWithOptions(const Models::DisableBrandRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables a brand.
       *
       * @param request DisableBrandRequest
       * @return DisableBrandResponse
       */
      Models::DisableBrandResponse disableBrand(const Models::DisableBrandRequest &request);

      /**
       * @summary Disables a specified application ClientPublicKey.
       *
       * @param request DisableClientPublicKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableClientPublicKeyResponse
       */
      Models::DisableClientPublicKeyResponse disableClientPublicKeyWithOptions(const Models::DisableClientPublicKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables a specified application ClientPublicKey.
       *
       * @param request DisableClientPublicKeyRequest
       * @return DisableClientPublicKeyResponse
       */
      Models::DisableClientPublicKeyResponse disableClientPublicKey(const Models::DisableClientPublicKeyRequest &request);

      /**
       * @summary Disables a cloud role for a specified Alibaba Cloud account.
       *
       * @param request DisableCloudAccountRoleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableCloudAccountRoleResponse
       */
      Models::DisableCloudAccountRoleResponse disableCloudAccountRoleWithOptions(const Models::DisableCloudAccountRoleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables a cloud role for a specified Alibaba Cloud account.
       *
       * @param request DisableCloudAccountRoleRequest
       * @return DisableCloudAccountRoleResponse
       */
      Models::DisableCloudAccountRoleResponse disableCloudAccountRole(const Models::DisableCloudAccountRoleRequest &request);

      /**
       * @summary Disables a conditional access policy.
       *
       * @description When you change a conditional access policy from the enabled state to the disabled state, the policy no longer intercepts requests. Confirm that you are aware of the security risks that this operation may cause.
       *
       * @param request DisableConditionalAccessPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableConditionalAccessPolicyResponse
       */
      Models::DisableConditionalAccessPolicyResponse disableConditionalAccessPolicyWithOptions(const Models::DisableConditionalAccessPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables a conditional access policy.
       *
       * @description When you change a conditional access policy from the enabled state to the disabled state, the policy no longer intercepts requests. Confirm that you are aware of the security risks that this operation may cause.
       *
       * @param request DisableConditionalAccessPolicyRequest
       * @return DisableConditionalAccessPolicyResponse
       */
      Models::DisableConditionalAccessPolicyResponse disableConditionalAccessPolicy(const Models::DisableConditionalAccessPolicyRequest &request);

      /**
       * @summary Disables a credential resource.
       *
       * @param request DisableCredentialRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableCredentialResponse
       */
      Models::DisableCredentialResponse disableCredentialWithOptions(const Models::DisableCredentialRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables a credential resource.
       *
       * @param request DisableCredentialRequest
       * @return DisableCredentialResponse
       */
      Models::DisableCredentialResponse disableCredential(const Models::DisableCredentialRequest &request);

      /**
       * @summary Disables a credential provider.
       *
       * @param request DisableCredentialProviderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableCredentialProviderResponse
       */
      Models::DisableCredentialProviderResponse disableCredentialProviderWithOptions(const Models::DisableCredentialProviderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables a credential provider.
       *
       * @param request DisableCredentialProviderRequest
       * @return DisableCredentialProviderResponse
       */
      Models::DisableCredentialProviderResponse disableCredentialProvider(const Models::DisableCredentialProviderRequest &request);

      /**
       * @summary Disables a field.
       *
       * @param request DisableCustomFieldRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableCustomFieldResponse
       */
      Models::DisableCustomFieldResponse disableCustomFieldWithOptions(const Models::DisableCustomFieldRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables a field.
       *
       * @param request DisableCustomFieldRequest
       * @return DisableCustomFieldResponse
       */
      Models::DisableCustomFieldResponse disableCustomField(const Models::DisableCustomFieldRequest &request);

      /**
       * @summary Disables a custom term.
       *
       * @param request DisableCustomPrivacyPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableCustomPrivacyPolicyResponse
       */
      Models::DisableCustomPrivacyPolicyResponse disableCustomPrivacyPolicyWithOptions(const Models::DisableCustomPrivacyPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables a custom term.
       *
       * @param request DisableCustomPrivacyPolicyRequest
       * @return DisableCustomPrivacyPolicyResponse
       */
      Models::DisableCustomPrivacyPolicyResponse disableCustomPrivacyPolicy(const Models::DisableCustomPrivacyPolicyRequest &request);

      /**
       * @summary Disables a specified domain proxy token for an EIAM instance. After the token is disabled, domain usage is affected.
       *
       * @param request DisableDomainProxyTokenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableDomainProxyTokenResponse
       */
      Models::DisableDomainProxyTokenResponse disableDomainProxyTokenWithOptions(const Models::DisableDomainProxyTokenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables a specified domain proxy token for an EIAM instance. After the token is disabled, domain usage is affected.
       *
       * @param request DisableDomainProxyTokenRequest
       * @return DisableDomainProxyTokenResponse
       */
      Models::DisableDomainProxyTokenResponse disableDomainProxyToken(const Models::DisableDomainProxyTokenRequest &request);

      /**
       * @summary Disables a federated credential provider.
       *
       * @param request DisableFederatedCredentialProviderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableFederatedCredentialProviderResponse
       */
      Models::DisableFederatedCredentialProviderResponse disableFederatedCredentialProviderWithOptions(const Models::DisableFederatedCredentialProviderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables a federated credential provider.
       *
       * @param request DisableFederatedCredentialProviderRequest
       * @return DisableFederatedCredentialProviderResponse
       */
      Models::DisableFederatedCredentialProviderResponse disableFederatedCredentialProvider(const Models::DisableFederatedCredentialProviderRequest &request);

      /**
       * @summary Disables the advanced configuration.
       *
       * @param request DisableIdentityProviderAdvancedAbilityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableIdentityProviderAdvancedAbilityResponse
       */
      Models::DisableIdentityProviderAdvancedAbilityResponse disableIdentityProviderAdvancedAbilityWithOptions(const Models::DisableIdentityProviderAdvancedAbilityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables the advanced configuration.
       *
       * @param request DisableIdentityProviderAdvancedAbilityRequest
       * @return DisableIdentityProviderAdvancedAbilityResponse
       */
      Models::DisableIdentityProviderAdvancedAbilityResponse disableIdentityProviderAdvancedAbility(const Models::DisableIdentityProviderAdvancedAbilityRequest &request);

      /**
       * @summary Disables authentication.
       *
       * @description When you change an application from the enabled state to the disabled state, all features of the application become unavailable, such as SSO and account synchronization. Make sure that you are aware of the risks that this operation may cause.
       *
       * @param request DisableIdentityProviderAuthnRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableIdentityProviderAuthnResponse
       */
      Models::DisableIdentityProviderAuthnResponse disableIdentityProviderAuthnWithOptions(const Models::DisableIdentityProviderAuthnRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables authentication.
       *
       * @description When you change an application from the enabled state to the disabled state, all features of the application become unavailable, such as SSO and account synchronization. Make sure that you are aware of the risks that this operation may cause.
       *
       * @param request DisableIdentityProviderAuthnRequest
       * @return DisableIdentityProviderAuthnResponse
       */
      Models::DisableIdentityProviderAuthnResponse disableIdentityProviderAuthn(const Models::DisableIdentityProviderAuthnRequest &request);

      /**
       * @summary Disables the inbound synchronization feature of an identity provider.
       *
       * @param request DisableIdentityProviderUdPullRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableIdentityProviderUdPullResponse
       */
      Models::DisableIdentityProviderUdPullResponse disableIdentityProviderUdPullWithOptions(const Models::DisableIdentityProviderUdPullRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables the inbound synchronization feature of an identity provider.
       *
       * @param request DisableIdentityProviderUdPullRequest
       * @return DisableIdentityProviderUdPullResponse
       */
      Models::DisableIdentityProviderUdPullResponse disableIdentityProviderUdPull(const Models::DisableIdentityProviderUdPullRequest &request);

      /**
       * @summary Disables automatic redirect from the initialization domain to the default domain for an EIAM instance. After disabling, accessing the portal via the initialization domain will no longer redirect to the default domain.
       *
       * @param request DisableInitDomainAutoRedirectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableInitDomainAutoRedirectResponse
       */
      Models::DisableInitDomainAutoRedirectResponse disableInitDomainAutoRedirectWithOptions(const Models::DisableInitDomainAutoRedirectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables automatic redirect from the initialization domain to the default domain for an EIAM instance. After disabling, accessing the portal via the initialization domain will no longer redirect to the default domain.
       *
       * @param request DisableInitDomainAutoRedirectRequest
       * @return DisableInitDomainAutoRedirectResponse
       */
      Models::DisableInitDomainAutoRedirectResponse disableInitDomainAutoRedirect(const Models::DisableInitDomainAutoRedirectRequest &request);

      /**
       * @summary Disables an internal authentication source.
       *
       * @param request DisableInternalAuthenticationSourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableInternalAuthenticationSourceResponse
       */
      Models::DisableInternalAuthenticationSourceResponse disableInternalAuthenticationSourceWithOptions(const Models::DisableInternalAuthenticationSourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables an internal authentication source.
       *
       * @param request DisableInternalAuthenticationSourceRequest
       * @return DisableInternalAuthenticationSourceResponse
       */
      Models::DisableInternalAuthenticationSourceResponse disableInternalAuthenticationSource(const Models::DisableInternalAuthenticationSourceRequest &request);

      /**
       * @summary Disables the custom subject feature for a specified resource server.
       *
       * @param request DisableResourceServerCustomSubjectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableResourceServerCustomSubjectResponse
       */
      Models::DisableResourceServerCustomSubjectResponse disableResourceServerCustomSubjectWithOptions(const Models::DisableResourceServerCustomSubjectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables the custom subject feature for a specified resource server.
       *
       * @param request DisableResourceServerCustomSubjectRequest
       * @return DisableResourceServerCustomSubjectResponse
       */
      Models::DisableResourceServerCustomSubjectResponse disableResourceServerCustomSubject(const Models::DisableResourceServerCustomSubjectRequest &request);

      /**
       * @summary Sets an account status to disabled. If the account is already disabled, the operation returns success directly.
       *
       * @param request DisableUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableUserResponse
       */
      Models::DisableUserResponse disableUserWithOptions(const Models::DisableUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets an account status to disabled. If the account is already disabled, the operation returns success directly.
       *
       * @param request DisableUserRequest
       * @return DisableUserResponse
       */
      Models::DisableUserResponse disableUser(const Models::DisableUserRequest &request);

      /**
       * @summary Enables a disabled Employee Identity and Access Management (EIAM) application.
       *
       * @param request EnableApplicationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableApplicationResponse
       */
      Models::EnableApplicationResponse enableApplicationWithOptions(const Models::EnableApplicationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables a disabled Employee Identity and Access Management (EIAM) application.
       *
       * @param request EnableApplicationRequest
       * @return EnableApplicationResponse
       */
      Models::EnableApplicationResponse enableApplication(const Models::EnableApplicationRequest &request);

      /**
       * @summary You can call the EnableApplicationApiInvoke operation to enable Developer API calls for an EIAM application.
       *
       * @param request EnableApplicationApiInvokeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableApplicationApiInvokeResponse
       */
      Models::EnableApplicationApiInvokeResponse enableApplicationApiInvokeWithOptions(const Models::EnableApplicationApiInvokeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call the EnableApplicationApiInvoke operation to enable Developer API calls for an EIAM application.
       *
       * @param request EnableApplicationApiInvokeRequest
       * @return EnableApplicationApiInvokeResponse
       */
      Models::EnableApplicationApiInvokeResponse enableApplicationApiInvoke(const Models::EnableApplicationApiInvokeRequest &request);

      /**
       * @summary Enables the client key of an application in Identity as a Service (IDaaS) Employee Identity and Access Management (EIAM).
       *
       * @param request EnableApplicationClientSecretRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableApplicationClientSecretResponse
       */
      Models::EnableApplicationClientSecretResponse enableApplicationClientSecretWithOptions(const Models::EnableApplicationClientSecretRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables the client key of an application in Identity as a Service (IDaaS) Employee Identity and Access Management (EIAM).
       *
       * @param request EnableApplicationClientSecretRequest
       * @return EnableApplicationClientSecretResponse
       */
      Models::EnableApplicationClientSecretResponse enableApplicationClientSecret(const Models::EnableApplicationClientSecretRequest &request);

      /**
       * @summary Enables an application federated credential.
       *
       * @param request EnableApplicationFederatedCredentialRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableApplicationFederatedCredentialResponse
       */
      Models::EnableApplicationFederatedCredentialResponse enableApplicationFederatedCredentialWithOptions(const Models::EnableApplicationFederatedCredentialRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables an application federated credential.
       *
       * @param request EnableApplicationFederatedCredentialRequest
       * @return EnableApplicationFederatedCredentialResponse
       */
      Models::EnableApplicationFederatedCredentialResponse enableApplicationFederatedCredential(const Models::EnableApplicationFederatedCredentialRequest &request);

      /**
       * @summary Enables the machine-to-machine (M2M) client feature for an application. This allows the application to act as a caller (an OAuth client) to access resources.
       *
       * @param request EnableApplicationM2MClientRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableApplicationM2MClientResponse
       */
      Models::EnableApplicationM2MClientResponse enableApplicationM2MClientWithOptions(const Models::EnableApplicationM2MClientRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables the machine-to-machine (M2M) client feature for an application. This allows the application to act as a caller (an OAuth client) to access resources.
       *
       * @param request EnableApplicationM2MClientRequest
       * @return EnableApplicationM2MClientResponse
       */
      Models::EnableApplicationM2MClientResponse enableApplicationM2MClient(const Models::EnableApplicationM2MClientRequest &request);

      /**
       * @summary Enables the account synchronization feature for an application in Identity as a Service (IDaaS) Employee Identity and Access Management (EIAM).
       *
       * @param request EnableApplicationProvisioningRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableApplicationProvisioningResponse
       */
      Models::EnableApplicationProvisioningResponse enableApplicationProvisioningWithOptions(const Models::EnableApplicationProvisioningRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables the account synchronization feature for an application in Identity as a Service (IDaaS) Employee Identity and Access Management (EIAM).
       *
       * @param request EnableApplicationProvisioningRequest
       * @return EnableApplicationProvisioningResponse
       */
      Models::EnableApplicationProvisioningResponse enableApplicationProvisioning(const Models::EnableApplicationProvisioningRequest &request);

      /**
       * @summary Enables the ResourceServer feature for a specified application.
       *
       * @param request EnableApplicationResourceServerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableApplicationResourceServerResponse
       */
      Models::EnableApplicationResourceServerResponse enableApplicationResourceServerWithOptions(const Models::EnableApplicationResourceServerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables the ResourceServer feature for a specified application.
       *
       * @param request EnableApplicationResourceServerRequest
       * @return EnableApplicationResourceServerResponse
       */
      Models::EnableApplicationResourceServerResponse enableApplicationResourceServer(const Models::EnableApplicationResourceServerRequest &request);

      /**
       * @summary Enables the SSO feature for an EIAM application.
       *
       * @param request EnableApplicationSsoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableApplicationSsoResponse
       */
      Models::EnableApplicationSsoResponse enableApplicationSsoWithOptions(const Models::EnableApplicationSsoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables the SSO feature for an EIAM application.
       *
       * @param request EnableApplicationSsoRequest
       * @return EnableApplicationSsoResponse
       */
      Models::EnableApplicationSsoResponse enableApplicationSso(const Models::EnableApplicationSsoRequest &request);

      /**
       * @summary Enables an application token.
       *
       * @param request EnableApplicationTokenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableApplicationTokenResponse
       */
      Models::EnableApplicationTokenResponse enableApplicationTokenWithOptions(const Models::EnableApplicationTokenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables an application token.
       *
       * @param request EnableApplicationTokenRequest
       * @return EnableApplicationTokenResponse
       */
      Models::EnableApplicationTokenResponse enableApplicationToken(const Models::EnableApplicationTokenRequest &request);

      /**
       * @summary Enables an authorization rule.
       *
       * @param request EnableAuthorizationRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableAuthorizationRuleResponse
       */
      Models::EnableAuthorizationRuleResponse enableAuthorizationRuleWithOptions(const Models::EnableAuthorizationRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables an authorization rule.
       *
       * @param request EnableAuthorizationRuleRequest
       * @return EnableAuthorizationRuleResponse
       */
      Models::EnableAuthorizationRuleResponse enableAuthorizationRule(const Models::EnableAuthorizationRuleRequest &request);

      /**
       * @summary Enables a brand.
       *
       * @param request EnableBrandRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableBrandResponse
       */
      Models::EnableBrandResponse enableBrandWithOptions(const Models::EnableBrandRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables a brand.
       *
       * @param request EnableBrandRequest
       * @return EnableBrandResponse
       */
      Models::EnableBrandResponse enableBrand(const Models::EnableBrandRequest &request);

      /**
       * @summary Enables a specified application ClientPublicKey.
       *
       * @param request EnableClientPublicKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableClientPublicKeyResponse
       */
      Models::EnableClientPublicKeyResponse enableClientPublicKeyWithOptions(const Models::EnableClientPublicKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables a specified application ClientPublicKey.
       *
       * @param request EnableClientPublicKeyRequest
       * @return EnableClientPublicKeyResponse
       */
      Models::EnableClientPublicKeyResponse enableClientPublicKey(const Models::EnableClientPublicKeyRequest &request);

      /**
       * @summary Enables a cloud role for a specified Alibaba Cloud account.
       *
       * @param request EnableCloudAccountRoleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableCloudAccountRoleResponse
       */
      Models::EnableCloudAccountRoleResponse enableCloudAccountRoleWithOptions(const Models::EnableCloudAccountRoleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables a cloud role for a specified Alibaba Cloud account.
       *
       * @param request EnableCloudAccountRoleRequest
       * @return EnableCloudAccountRoleResponse
       */
      Models::EnableCloudAccountRoleResponse enableCloudAccountRole(const Models::EnableCloudAccountRoleRequest &request);

      /**
       * @summary Enables a conditional access policy.
       *
       * @description When you change a conditional access policy from enabled to disabled, the policy no longer intercepts requests. Confirm that you are aware of the risks that this operation may cause.
       *
       * @param request EnableConditionalAccessPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableConditionalAccessPolicyResponse
       */
      Models::EnableConditionalAccessPolicyResponse enableConditionalAccessPolicyWithOptions(const Models::EnableConditionalAccessPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables a conditional access policy.
       *
       * @description When you change a conditional access policy from enabled to disabled, the policy no longer intercepts requests. Confirm that you are aware of the risks that this operation may cause.
       *
       * @param request EnableConditionalAccessPolicyRequest
       * @return EnableConditionalAccessPolicyResponse
       */
      Models::EnableConditionalAccessPolicyResponse enableConditionalAccessPolicy(const Models::EnableConditionalAccessPolicyRequest &request);

      /**
       * @summary Enables a credential resource.
       *
       * @param request EnableCredentialRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableCredentialResponse
       */
      Models::EnableCredentialResponse enableCredentialWithOptions(const Models::EnableCredentialRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables a credential resource.
       *
       * @param request EnableCredentialRequest
       * @return EnableCredentialResponse
       */
      Models::EnableCredentialResponse enableCredential(const Models::EnableCredentialRequest &request);

      /**
       * @summary Enables a credential provider.
       *
       * @param request EnableCredentialProviderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableCredentialProviderResponse
       */
      Models::EnableCredentialProviderResponse enableCredentialProviderWithOptions(const Models::EnableCredentialProviderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables a credential provider.
       *
       * @param request EnableCredentialProviderRequest
       * @return EnableCredentialProviderResponse
       */
      Models::EnableCredentialProviderResponse enableCredentialProvider(const Models::EnableCredentialProviderRequest &request);

      /**
       * @summary Enables a field.
       *
       * @description **Before you use this operation, make sure that you fully understand the billing method and [pricing](https://www.aliyun.com/price/product#/ecs/detail) of IDaaS EIAM.**.
       *
       * @param request EnableCustomFieldRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableCustomFieldResponse
       */
      Models::EnableCustomFieldResponse enableCustomFieldWithOptions(const Models::EnableCustomFieldRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables a field.
       *
       * @description **Before you use this operation, make sure that you fully understand the billing method and [pricing](https://www.aliyun.com/price/product#/ecs/detail) of IDaaS EIAM.**.
       *
       * @param request EnableCustomFieldRequest
       * @return EnableCustomFieldResponse
       */
      Models::EnableCustomFieldResponse enableCustomField(const Models::EnableCustomFieldRequest &request);

      /**
       * @summary Enables a custom clause.
       *
       * @param request EnableCustomPrivacyPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableCustomPrivacyPolicyResponse
       */
      Models::EnableCustomPrivacyPolicyResponse enableCustomPrivacyPolicyWithOptions(const Models::EnableCustomPrivacyPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables a custom clause.
       *
       * @param request EnableCustomPrivacyPolicyRequest
       * @return EnableCustomPrivacyPolicyResponse
       */
      Models::EnableCustomPrivacyPolicyResponse enableCustomPrivacyPolicy(const Models::EnableCustomPrivacyPolicyRequest &request);

      /**
       * @summary Enables a domain proxy token for a specified EIAM instance domain name to verify domain security.
       *
       * @param request EnableDomainProxyTokenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableDomainProxyTokenResponse
       */
      Models::EnableDomainProxyTokenResponse enableDomainProxyTokenWithOptions(const Models::EnableDomainProxyTokenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables a domain proxy token for a specified EIAM instance domain name to verify domain security.
       *
       * @param request EnableDomainProxyTokenRequest
       * @return EnableDomainProxyTokenResponse
       */
      Models::EnableDomainProxyTokenResponse enableDomainProxyToken(const Models::EnableDomainProxyTokenRequest &request);

      /**
       * @summary Enables a federated credential provider.
       *
       * @param request EnableFederatedCredentialProviderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableFederatedCredentialProviderResponse
       */
      Models::EnableFederatedCredentialProviderResponse enableFederatedCredentialProviderWithOptions(const Models::EnableFederatedCredentialProviderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables a federated credential provider.
       *
       * @param request EnableFederatedCredentialProviderRequest
       * @return EnableFederatedCredentialProviderResponse
       */
      Models::EnableFederatedCredentialProviderResponse enableFederatedCredentialProvider(const Models::EnableFederatedCredentialProviderRequest &request);

      /**
       * @summary Enables advanced configuration.
       *
       * @param request EnableIdentityProviderAdvancedAbilityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableIdentityProviderAdvancedAbilityResponse
       */
      Models::EnableIdentityProviderAdvancedAbilityResponse enableIdentityProviderAdvancedAbilityWithOptions(const Models::EnableIdentityProviderAdvancedAbilityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables advanced configuration.
       *
       * @param request EnableIdentityProviderAdvancedAbilityRequest
       * @return EnableIdentityProviderAdvancedAbilityResponse
       */
      Models::EnableIdentityProviderAdvancedAbilityResponse enableIdentityProviderAdvancedAbility(const Models::EnableIdentityProviderAdvancedAbilityRequest &request);

      /**
       * @summary Enables authentication.
       *
       * @description When you change a conditional access policy from enabled to disabled, the policy no longer intercepts requests. Make sure that you are aware of the risks that this operation may cause.
       *
       * @param request EnableIdentityProviderAuthnRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableIdentityProviderAuthnResponse
       */
      Models::EnableIdentityProviderAuthnResponse enableIdentityProviderAuthnWithOptions(const Models::EnableIdentityProviderAuthnRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables authentication.
       *
       * @description When you change a conditional access policy from enabled to disabled, the policy no longer intercepts requests. Make sure that you are aware of the risks that this operation may cause.
       *
       * @param request EnableIdentityProviderAuthnRequest
       * @return EnableIdentityProviderAuthnResponse
       */
      Models::EnableIdentityProviderAuthnResponse enableIdentityProviderAuthn(const Models::EnableIdentityProviderAuthnRequest &request);

      /**
       * @summary Enables the inbound synchronization feature for an identity provider.
       *
       * @param request EnableIdentityProviderUdPullRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableIdentityProviderUdPullResponse
       */
      Models::EnableIdentityProviderUdPullResponse enableIdentityProviderUdPullWithOptions(const Models::EnableIdentityProviderUdPullRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables the inbound synchronization feature for an identity provider.
       *
       * @param request EnableIdentityProviderUdPullRequest
       * @return EnableIdentityProviderUdPullResponse
       */
      Models::EnableIdentityProviderUdPullResponse enableIdentityProviderUdPull(const Models::EnableIdentityProviderUdPullRequest &request);

      /**
       * @summary Enables automatic redirection from the initialization domain to the default domain for an EIAM instance. After this feature is enabled, accessing the portal through the initialization domain will redirect to the default domain address.
       *
       * @param request EnableInitDomainAutoRedirectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableInitDomainAutoRedirectResponse
       */
      Models::EnableInitDomainAutoRedirectResponse enableInitDomainAutoRedirectWithOptions(const Models::EnableInitDomainAutoRedirectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables automatic redirection from the initialization domain to the default domain for an EIAM instance. After this feature is enabled, accessing the portal through the initialization domain will redirect to the default domain address.
       *
       * @param request EnableInitDomainAutoRedirectRequest
       * @return EnableInitDomainAutoRedirectResponse
       */
      Models::EnableInitDomainAutoRedirectResponse enableInitDomainAutoRedirect(const Models::EnableInitDomainAutoRedirectRequest &request);

      /**
       * @summary Enables an internal authentication source.
       *
       * @param request EnableInternalAuthenticationSourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableInternalAuthenticationSourceResponse
       */
      Models::EnableInternalAuthenticationSourceResponse enableInternalAuthenticationSourceWithOptions(const Models::EnableInternalAuthenticationSourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables an internal authentication source.
       *
       * @param request EnableInternalAuthenticationSourceRequest
       * @return EnableInternalAuthenticationSourceResponse
       */
      Models::EnableInternalAuthenticationSourceResponse enableInternalAuthenticationSource(const Models::EnableInternalAuthenticationSourceRequest &request);

      /**
       * @summary Enables the custom subject feature for a specified resource server. After this feature is enabled, the subject of an issued access token changes from <clientId> to <clientId>:<client.activeSubjectUrn>. The `client.activeSubjectUrn` is set in the attribute mapping of the application\\"s federated identity provider.
       *
       * @param request EnableResourceServerCustomSubjectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableResourceServerCustomSubjectResponse
       */
      Models::EnableResourceServerCustomSubjectResponse enableResourceServerCustomSubjectWithOptions(const Models::EnableResourceServerCustomSubjectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables the custom subject feature for a specified resource server. After this feature is enabled, the subject of an issued access token changes from <clientId> to <clientId>:<client.activeSubjectUrn>. The `client.activeSubjectUrn` is set in the attribute mapping of the application\\"s federated identity provider.
       *
       * @param request EnableResourceServerCustomSubjectRequest
       * @return EnableResourceServerCustomSubjectResponse
       */
      Models::EnableResourceServerCustomSubjectResponse enableResourceServerCustomSubject(const Models::EnableResourceServerCustomSubjectRequest &request);

      /**
       * @summary Sets an account to the enabled state.
       *
       * @param request EnableUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableUserResponse
       */
      Models::EnableUserResponse enableUserWithOptions(const Models::EnableUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets an account to the enabled state.
       *
       * @param request EnableUserRequest
       * @return EnableUserResponse
       */
      Models::EnableUserResponse enableUser(const Models::EnableUserRequest &request);

      /**
       * @summary Resolves the metadata for an identity provider.
       *
       * @param request ExecIdentityProviderMetadataUrlResolutionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExecIdentityProviderMetadataUrlResolutionResponse
       */
      Models::ExecIdentityProviderMetadataUrlResolutionResponse execIdentityProviderMetadataUrlResolutionWithOptions(const Models::ExecIdentityProviderMetadataUrlResolutionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resolves the metadata for an identity provider.
       *
       * @param request ExecIdentityProviderMetadataUrlResolutionRequest
       * @return ExecIdentityProviderMetadataUrlResolutionResponse
       */
      Models::ExecIdentityProviderMetadataUrlResolutionResponse execIdentityProviderMetadataUrlResolution(const Models::ExecIdentityProviderMetadataUrlResolutionRequest &request);

      /**
       * @summary Generates a download URL for file import results.
       *
       * @param request GenerateDownloadUrlForSynchronizationJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateDownloadUrlForSynchronizationJobResponse
       */
      Models::GenerateDownloadUrlForSynchronizationJobResponse generateDownloadUrlForSynchronizationJobWithOptions(const Models::GenerateDownloadUrlForSynchronizationJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Generates a download URL for file import results.
       *
       * @param request GenerateDownloadUrlForSynchronizationJobRequest
       * @return GenerateDownloadUrlForSynchronizationJobResponse
       */
      Models::GenerateDownloadUrlForSynchronizationJobResponse generateDownloadUrlForSynchronizationJob(const Models::GenerateDownloadUrlForSynchronizationJobRequest &request);

      /**
       * @summary Generates a file import template.
       *
       * @param request GenerateFileImportTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateFileImportTemplateResponse
       */
      Models::GenerateFileImportTemplateResponse generateFileImportTemplateWithOptions(const Models::GenerateFileImportTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Generates a file import template.
       *
       * @param request GenerateFileImportTemplateRequest
       * @return GenerateFileImportTemplateResponse
       */
      Models::GenerateFileImportTemplateResponse generateFileImportTemplate(const Models::GenerateFileImportTemplateRequest &request);

      /**
       * @summary Obtains an access token for accessing a resource server by using a specified application as the client identity.
       *
       * @param request GenerateOauthTokenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateOauthTokenResponse
       */
      Models::GenerateOauthTokenResponse generateOauthTokenWithOptions(const Models::GenerateOauthTokenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains an access token for accessing a resource server by using a specified application as the client identity.
       *
       * @param request GenerateOauthTokenRequest
       * @return GenerateOauthTokenResponse
       */
      Models::GenerateOauthTokenResponse generateOauthToken(const Models::GenerateOauthTokenRequest &request);

      /**
       * @summary Get Upload Authentication
       *
       * @param request GenerateUploadAuthRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateUploadAuthResponse
       */
      Models::GenerateUploadAuthResponse generateUploadAuthWithOptions(const Models::GenerateUploadAuthRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get Upload Authentication
       *
       * @param request GenerateUploadAuthRequest
       * @return GenerateUploadAuthResponse
       */
      Models::GenerateUploadAuthResponse generateUploadAuth(const Models::GenerateUploadAuthRequest &request);

      /**
       * @summary Generates a WebAuthn authenticator registration URL.
       *
       * @param request GenerateWebAuthnAuthenticatorRegistrationUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateWebAuthnAuthenticatorRegistrationUrlResponse
       */
      Models::GenerateWebAuthnAuthenticatorRegistrationUrlResponse generateWebAuthnAuthenticatorRegistrationUrlWithOptions(const Models::GenerateWebAuthnAuthenticatorRegistrationUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Generates a WebAuthn authenticator registration URL.
       *
       * @param request GenerateWebAuthnAuthenticatorRegistrationUrlRequest
       * @return GenerateWebAuthnAuthenticatorRegistrationUrlResponse
       */
      Models::GenerateWebAuthnAuthenticatorRegistrationUrlResponse generateWebAuthnAuthenticatorRegistrationUrl(const Models::GenerateWebAuthnAuthenticatorRegistrationUrlRequest &request);

      /**
       * @summary Retrieves the details of a specified EIAM application.
       *
       * @param request GetApplicationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetApplicationResponse
       */
      Models::GetApplicationResponse getApplicationWithOptions(const Models::GetApplicationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a specified EIAM application.
       *
       * @param request GetApplicationRequest
       * @return GetApplicationResponse
       */
      Models::GetApplicationResponse getApplication(const Models::GetApplicationRequest &request);

      /**
       * @summary Retrieves the advanced configuration of an application.
       *
       * @param request GetApplicationAdvancedConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetApplicationAdvancedConfigResponse
       */
      Models::GetApplicationAdvancedConfigResponse getApplicationAdvancedConfigWithOptions(const Models::GetApplicationAdvancedConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the advanced configuration of an application.
       *
       * @param request GetApplicationAdvancedConfigRequest
       * @return GetApplicationAdvancedConfigResponse
       */
      Models::GetApplicationAdvancedConfigResponse getApplicationAdvancedConfig(const Models::GetApplicationAdvancedConfigRequest &request);

      /**
       * @summary Retrieves the federated identity credential of an application.
       *
       * @param request GetApplicationFederatedCredentialRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetApplicationFederatedCredentialResponse
       */
      Models::GetApplicationFederatedCredentialResponse getApplicationFederatedCredentialWithOptions(const Models::GetApplicationFederatedCredentialRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the federated identity credential of an application.
       *
       * @param request GetApplicationFederatedCredentialRequest
       * @return GetApplicationFederatedCredentialResponse
       */
      Models::GetApplicationFederatedCredentialResponse getApplicationFederatedCredential(const Models::GetApplicationFederatedCredentialRequest &request);

      /**
       * @summary Queries the Developer API authorization scope of an EIAM application.
       *
       * @param request GetApplicationGrantScopeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetApplicationGrantScopeResponse
       */
      Models::GetApplicationGrantScopeResponse getApplicationGrantScopeWithOptions(const Models::GetApplicationGrantScopeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the Developer API authorization scope of an EIAM application.
       *
       * @param request GetApplicationGrantScopeRequest
       * @return GetApplicationGrantScopeResponse
       */
      Models::GetApplicationGrantScopeResponse getApplicationGrantScope(const Models::GetApplicationGrantScopeRequest &request);

      /**
       * @summary Retrieves the account synchronization configuration for an Entity Identity and Access Management (EIAM) application.
       *
       * @param request GetApplicationProvisioningConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetApplicationProvisioningConfigResponse
       */
      Models::GetApplicationProvisioningConfigResponse getApplicationProvisioningConfigWithOptions(const Models::GetApplicationProvisioningConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the account synchronization configuration for an Entity Identity and Access Management (EIAM) application.
       *
       * @param request GetApplicationProvisioningConfigRequest
       * @return GetApplicationProvisioningConfigResponse
       */
      Models::GetApplicationProvisioningConfigResponse getApplicationProvisioningConfig(const Models::GetApplicationProvisioningConfigRequest &request);

      /**
       * @summary Queries the account synchronization scope of applications in Identity as a Service (IDaaS) Employee IAM (EIAM). This scope is the same as the scope within which developers can call the DeveloperAPI to query and manage accounts.
       *
       * @param request GetApplicationProvisioningScopeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetApplicationProvisioningScopeResponse
       */
      Models::GetApplicationProvisioningScopeResponse getApplicationProvisioningScopeWithOptions(const Models::GetApplicationProvisioningScopeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the account synchronization scope of applications in Identity as a Service (IDaaS) Employee IAM (EIAM). This scope is the same as the scope within which developers can call the DeveloperAPI to query and manage accounts.
       *
       * @param request GetApplicationProvisioningScopeRequest
       * @return GetApplicationProvisioningScopeResponse
       */
      Models::GetApplicationProvisioningScopeResponse getApplicationProvisioningScope(const Models::GetApplicationProvisioningScopeRequest &request);

      /**
       * @summary Queries the synchronization configuration of a specified application.
       *
       * @param request GetApplicationProvisioningUserPrimaryOrganizationalUnitRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetApplicationProvisioningUserPrimaryOrganizationalUnitResponse
       */
      Models::GetApplicationProvisioningUserPrimaryOrganizationalUnitResponse getApplicationProvisioningUserPrimaryOrganizationalUnitWithOptions(const Models::GetApplicationProvisioningUserPrimaryOrganizationalUnitRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the synchronization configuration of a specified application.
       *
       * @param request GetApplicationProvisioningUserPrimaryOrganizationalUnitRequest
       * @return GetApplicationProvisioningUserPrimaryOrganizationalUnitResponse
       */
      Models::GetApplicationProvisioningUserPrimaryOrganizationalUnitResponse getApplicationProvisioningUserPrimaryOrganizationalUnit(const Models::GetApplicationProvisioningUserPrimaryOrganizationalUnitRequest &request);

      /**
       * @summary Retrieves application role information.
       *
       * @param request GetApplicationRoleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetApplicationRoleResponse
       */
      Models::GetApplicationRoleResponse getApplicationRoleWithOptions(const Models::GetApplicationRoleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves application role information.
       *
       * @param request GetApplicationRoleRequest
       * @return GetApplicationRoleResponse
       */
      Models::GetApplicationRoleResponse getApplicationRole(const Models::GetApplicationRoleRequest &request);

      /**
       * @summary Retrieves the single sign-on (SSO) configuration for an application in EIAM.
       *
       * @param request GetApplicationSsoConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetApplicationSsoConfigResponse
       */
      Models::GetApplicationSsoConfigResponse getApplicationSsoConfigWithOptions(const Models::GetApplicationSsoConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the single sign-on (SSO) configuration for an application in EIAM.
       *
       * @param request GetApplicationSsoConfigRequest
       * @return GetApplicationSsoConfigResponse
       */
      Models::GetApplicationSsoConfigResponse getApplicationSsoConfig(const Models::GetApplicationSsoConfigRequest &request);

      /**
       * @summary Retrieves application template information.
       *
       * @param request GetApplicationTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetApplicationTemplateResponse
       */
      Models::GetApplicationTemplateResponse getApplicationTemplateWithOptions(const Models::GetApplicationTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves application template information.
       *
       * @param request GetApplicationTemplateRequest
       * @return GetApplicationTemplateResponse
       */
      Models::GetApplicationTemplateResponse getApplicationTemplate(const Models::GetApplicationTemplateRequest &request);

      /**
       * @summary Queries information about an authorized resource.
       *
       * @param request GetAuthorizationResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAuthorizationResourceResponse
       */
      Models::GetAuthorizationResourceResponse getAuthorizationResourceWithOptions(const Models::GetAuthorizationResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about an authorized resource.
       *
       * @param request GetAuthorizationResourceRequest
       * @return GetAuthorizationResourceResponse
       */
      Models::GetAuthorizationResourceResponse getAuthorizationResource(const Models::GetAuthorizationResourceRequest &request);

      /**
       * @summary Query information about an authorization rule.
       *
       * @param request GetAuthorizationRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAuthorizationRuleResponse
       */
      Models::GetAuthorizationRuleResponse getAuthorizationRuleWithOptions(const Models::GetAuthorizationRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query information about an authorization rule.
       *
       * @param request GetAuthorizationRuleRequest
       * @return GetAuthorizationRuleResponse
       */
      Models::GetAuthorizationRuleResponse getAuthorizationRule(const Models::GetAuthorizationRuleRequest &request);

      /**
       * @summary Queries an authorization server.
       *
       * @param request GetAuthorizationServerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAuthorizationServerResponse
       */
      Models::GetAuthorizationServerResponse getAuthorizationServerWithOptions(const Models::GetAuthorizationServerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries an authorization server.
       *
       * @param request GetAuthorizationServerRequest
       * @return GetAuthorizationServerResponse
       */
      Models::GetAuthorizationServerResponse getAuthorizationServer(const Models::GetAuthorizationServerRequest &request);

      /**
       * @summary Get Brand Details
       *
       * @param request GetBrandRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetBrandResponse
       */
      Models::GetBrandResponse getBrandWithOptions(const Models::GetBrandRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get Brand Details
       *
       * @param request GetBrandRequest
       * @return GetBrandResponse
       */
      Models::GetBrandResponse getBrand(const Models::GetBrandRequest &request);

      /**
       * @summary Queries the ClientPublicKey of a specified application.
       *
       * @param request GetClientPublicKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetClientPublicKeyResponse
       */
      Models::GetClientPublicKeyResponse getClientPublicKeyWithOptions(const Models::GetClientPublicKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the ClientPublicKey of a specified application.
       *
       * @param request GetClientPublicKeyRequest
       * @return GetClientPublicKeyResponse
       */
      Models::GetClientPublicKeyResponse getClientPublicKey(const Models::GetClientPublicKeyRequest &request);

      /**
       * @summary Queries the resource information of a cloud account.
       *
       * @param request GetCloudAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCloudAccountResponse
       */
      Models::GetCloudAccountResponse getCloudAccountWithOptions(const Models::GetCloudAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the resource information of a cloud account.
       *
       * @param request GetCloudAccountRequest
       * @return GetCloudAccountResponse
       */
      Models::GetCloudAccountResponse getCloudAccount(const Models::GetCloudAccountRequest &request);

      /**
       * @summary Queries the resource information of a cloud role.
       *
       * @param request GetCloudAccountRoleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCloudAccountRoleResponse
       */
      Models::GetCloudAccountRoleResponse getCloudAccountRoleWithOptions(const Models::GetCloudAccountRoleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the resource information of a cloud role.
       *
       * @param request GetCloudAccountRoleRequest
       * @return GetCloudAccountRoleResponse
       */
      Models::GetCloudAccountRoleResponse getCloudAccountRole(const Models::GetCloudAccountRoleRequest &request);

      /**
       * @summary Get a conditional access policy.
       *
       * @description Query a conditional access policy.
       *
       * @param request GetConditionalAccessPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetConditionalAccessPolicyResponse
       */
      Models::GetConditionalAccessPolicyResponse getConditionalAccessPolicyWithOptions(const Models::GetConditionalAccessPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get a conditional access policy.
       *
       * @description Query a conditional access policy.
       *
       * @param request GetConditionalAccessPolicyRequest
       * @return GetConditionalAccessPolicyResponse
       */
      Models::GetConditionalAccessPolicyResponse getConditionalAccessPolicy(const Models::GetConditionalAccessPolicyRequest &request);

      /**
       * @summary Queries the information about a credential resource.
       *
       * @param request GetCredentialRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCredentialResponse
       */
      Models::GetCredentialResponse getCredentialWithOptions(const Models::GetCredentialRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a credential resource.
       *
       * @param request GetCredentialRequest
       * @return GetCredentialResponse
       */
      Models::GetCredentialResponse getCredential(const Models::GetCredentialRequest &request);

      /**
       * @summary Queries the details of a credential provider.
       *
       * @param request GetCredentialProviderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCredentialProviderResponse
       */
      Models::GetCredentialProviderResponse getCredentialProviderWithOptions(const Models::GetCredentialProviderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a credential provider.
       *
       * @param request GetCredentialProviderRequest
       * @return GetCredentialProviderResponse
       */
      Models::GetCredentialProviderResponse getCredentialProvider(const Models::GetCredentialProviderRequest &request);

      /**
       * @summary Retrieves the information about an extended field.
       *
       * @param request GetCustomFieldRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCustomFieldResponse
       */
      Models::GetCustomFieldResponse getCustomFieldWithOptions(const Models::GetCustomFieldRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the information about an extended field.
       *
       * @param request GetCustomFieldRequest
       * @return GetCustomFieldResponse
       */
      Models::GetCustomFieldResponse getCustomField(const Models::GetCustomFieldRequest &request);

      /**
       * @summary Retrieves a custom privacy policy.
       *
       * @param request GetCustomPrivacyPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCustomPrivacyPolicyResponse
       */
      Models::GetCustomPrivacyPolicyResponse getCustomPrivacyPolicyWithOptions(const Models::GetCustomPrivacyPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a custom privacy policy.
       *
       * @param request GetCustomPrivacyPolicyRequest
       * @return GetCustomPrivacyPolicyResponse
       */
      Models::GetCustomPrivacyPolicyResponse getCustomPrivacyPolicy(const Models::GetCustomPrivacyPolicyRequest &request);

      /**
       * @summary Retrieves information about a domain name for an EIAM instance.
       *
       * @param request GetDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDomainResponse
       */
      Models::GetDomainResponse getDomainWithOptions(const Models::GetDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves information about a domain name for an EIAM instance.
       *
       * @param request GetDomainRequest
       * @return GetDomainResponse
       */
      Models::GetDomainResponse getDomain(const Models::GetDomainRequest &request);

      /**
       * @summary Queries the DNS Challenge record for a specified EIAM domain name. This record is used to verify domain ownership.
       *
       * @param request GetDomainDnsChallengeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDomainDnsChallengeResponse
       */
      Models::GetDomainDnsChallengeResponse getDomainDnsChallengeWithOptions(const Models::GetDomainDnsChallengeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the DNS Challenge record for a specified EIAM domain name. This record is used to verify domain ownership.
       *
       * @param request GetDomainDnsChallengeRequest
       * @return GetDomainDnsChallengeResponse
       */
      Models::GetDomainDnsChallengeResponse getDomainDnsChallenge(const Models::GetDomainDnsChallengeRequest &request);

      /**
       * @summary Retrieve a federated credential provider.
       *
       * @param request GetFederatedCredentialProviderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetFederatedCredentialProviderResponse
       */
      Models::GetFederatedCredentialProviderResponse getFederatedCredentialProviderWithOptions(const Models::GetFederatedCredentialProviderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve a federated credential provider.
       *
       * @param request GetFederatedCredentialProviderRequest
       * @return GetFederatedCredentialProviderResponse
       */
      Models::GetFederatedCredentialProviderResponse getFederatedCredentialProvider(const Models::GetFederatedCredentialProviderRequest &request);

      /**
       * @summary Queries the forgot password policy of a specified EIAM instance.
       *
       * @param request GetForgetPasswordConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetForgetPasswordConfigurationResponse
       */
      Models::GetForgetPasswordConfigurationResponse getForgetPasswordConfigurationWithOptions(const Models::GetForgetPasswordConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the forgot password policy of a specified EIAM instance.
       *
       * @param request GetForgetPasswordConfigurationRequest
       * @return GetForgetPasswordConfigurationResponse
       */
      Models::GetForgetPasswordConfigurationResponse getForgetPasswordConfiguration(const Models::GetForgetPasswordConfigurationRequest &request);

      /**
       * @summary Queries the details of an EIAM account group.
       *
       * @param request GetGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetGroupResponse
       */
      Models::GetGroupResponse getGroupWithOptions(const Models::GetGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an EIAM account group.
       *
       * @param request GetGroupRequest
       * @return GetGroupResponse
       */
      Models::GetGroupResponse getGroup(const Models::GetGroupRequest &request);

      /**
       * @summary Retrieves an identity provider.
       *
       * @param request GetIdentityProviderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetIdentityProviderResponse
       */
      Models::GetIdentityProviderResponse getIdentityProviderWithOptions(const Models::GetIdentityProviderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves an identity provider.
       *
       * @param request GetIdentityProviderRequest
       * @return GetIdentityProviderResponse
       */
      Models::GetIdentityProviderResponse getIdentityProvider(const Models::GetIdentityProviderRequest &request);

      /**
       * @summary Retrieves advanced configuration information.
       *
       * @param request GetIdentityProviderAdvancedConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetIdentityProviderAdvancedConfigurationResponse
       */
      Models::GetIdentityProviderAdvancedConfigurationResponse getIdentityProviderAdvancedConfigurationWithOptions(const Models::GetIdentityProviderAdvancedConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves advanced configuration information.
       *
       * @param request GetIdentityProviderAdvancedConfigurationRequest
       * @return GetIdentityProviderAdvancedConfigurationResponse
       */
      Models::GetIdentityProviderAdvancedConfigurationResponse getIdentityProviderAdvancedConfiguration(const Models::GetIdentityProviderAdvancedConfigurationRequest &request);

      /**
       * @summary Retrieves an IdP check task.
       *
       * @param request GetIdentityProviderStatusCheckJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetIdentityProviderStatusCheckJobResponse
       */
      Models::GetIdentityProviderStatusCheckJobResponse getIdentityProviderStatusCheckJobWithOptions(const Models::GetIdentityProviderStatusCheckJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves an IdP check task.
       *
       * @param request GetIdentityProviderStatusCheckJobRequest
       * @return GetIdentityProviderStatusCheckJobResponse
       */
      Models::GetIdentityProviderStatusCheckJobResponse getIdentityProviderStatusCheckJob(const Models::GetIdentityProviderStatusCheckJobRequest &request);

      /**
       * @summary Retrieves the inbound synchronization configuration of an identity provider (IdP).
       *
       * @param request GetIdentityProviderUdPullConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetIdentityProviderUdPullConfigurationResponse
       */
      Models::GetIdentityProviderUdPullConfigurationResponse getIdentityProviderUdPullConfigurationWithOptions(const Models::GetIdentityProviderUdPullConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the inbound synchronization configuration of an identity provider (IdP).
       *
       * @param request GetIdentityProviderUdPullConfigurationRequest
       * @return GetIdentityProviderUdPullConfigurationResponse
       */
      Models::GetIdentityProviderUdPullConfigurationResponse getIdentityProviderUdPullConfiguration(const Models::GetIdentityProviderUdPullConfigurationRequest &request);

      /**
       * @summary Retrieve the IdP outbound synchronization configuration.
       *
       * @param request GetIdentityProviderUdPushConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetIdentityProviderUdPushConfigurationResponse
       */
      Models::GetIdentityProviderUdPushConfigurationResponse getIdentityProviderUdPushConfigurationWithOptions(const Models::GetIdentityProviderUdPushConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieve the IdP outbound synchronization configuration.
       *
       * @param request GetIdentityProviderUdPushConfigurationRequest
       * @return GetIdentityProviderUdPushConfigurationResponse
       */
      Models::GetIdentityProviderUdPushConfigurationResponse getIdentityProviderUdPushConfiguration(const Models::GetIdentityProviderUdPushConfigurationRequest &request);

      /**
       * @summary Queries the details of an EIAM instance.
       *
       * @param request GetInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInstanceResponse
       */
      Models::GetInstanceResponse getInstanceWithOptions(const Models::GetInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an EIAM instance.
       *
       * @param request GetInstanceRequest
       * @return GetInstanceResponse
       */
      Models::GetInstanceResponse getInstance(const Models::GetInstanceRequest &request);

      /**
       * @summary Queries instance control items.
       *
       * @param request GetInstanceControlConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInstanceControlConfigurationResponse
       */
      Models::GetInstanceControlConfigurationResponse getInstanceControlConfigurationWithOptions(const Models::GetInstanceControlConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries instance control items.
       *
       * @param request GetInstanceControlConfigurationRequest
       * @return GetInstanceControlConfigurationResponse
       */
      Models::GetInstanceControlConfigurationResponse getInstanceControlConfiguration(const Models::GetInstanceControlConfigurationRequest &request);

      /**
       * @summary Retrieves the language and time zone information of an instance.
       *
       * @param request GetInstanceGlobalizationConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInstanceGlobalizationConfigResponse
       */
      Models::GetInstanceGlobalizationConfigResponse getInstanceGlobalizationConfigWithOptions(const Models::GetInstanceGlobalizationConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the language and time zone information of an instance.
       *
       * @param request GetInstanceGlobalizationConfigRequest
       * @return GetInstanceGlobalizationConfigResponse
       */
      Models::GetInstanceGlobalizationConfigResponse getInstanceGlobalizationConfig(const Models::GetInstanceGlobalizationConfigRequest &request);

      /**
       * @summary Queries the active license information for an instance.
       *
       * @description Ensure the instance is not in use before deletion. Deleting an EIAM instance permanently removes all of its associated data.
       *
       * @param request GetInstanceLicenseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInstanceLicenseResponse
       */
      Models::GetInstanceLicenseResponse getInstanceLicenseWithOptions(const Models::GetInstanceLicenseRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the active license information for an instance.
       *
       * @description Ensure the instance is not in use before deletion. Deleting an EIAM instance permanently removes all of its associated data.
       *
       * @param request GetInstanceLicenseRequest
       * @return GetInstanceLicenseResponse
       */
      Models::GetInstanceLicenseResponse getInstanceLicense(const Models::GetInstanceLicenseRequest &request);

      /**
       * @summary Retrieves all module information under a first-level module.
       *
       * @param request GetInstanceModuleInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInstanceModuleInfoResponse
       */
      Models::GetInstanceModuleInfoResponse getInstanceModuleInfoWithOptions(const Models::GetInstanceModuleInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves all module information under a first-level module.
       *
       * @param request GetInstanceModuleInfoRequest
       * @return GetInstanceModuleInfoResponse
       */
      Models::GetInstanceModuleInfoResponse getInstanceModuleInfo(const Models::GetInstanceModuleInfoRequest &request);

      /**
       * @summary Retrieves the quota of a single type for an instance.
       *
       * @param request GetInstanceQuotaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInstanceQuotaResponse
       */
      Models::GetInstanceQuotaResponse getInstanceQuotaWithOptions(const Models::GetInstanceQuotaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the quota of a single type for an instance.
       *
       * @param request GetInstanceQuotaRequest
       * @return GetInstanceQuotaResponse
       */
      Models::GetInstanceQuotaResponse getInstanceQuota(const Models::GetInstanceQuotaRequest &request);

      /**
       * @summary Retrieves the trial status of an instance.
       *
       * @param request GetInstanceTrialStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInstanceTrialStatusResponse
       */
      Models::GetInstanceTrialStatusResponse getInstanceTrialStatusWithOptions(const Models::GetInstanceTrialStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the trial status of an instance.
       *
       * @param request GetInstanceTrialStatusRequest
       * @return GetInstanceTrialStatusResponse
       */
      Models::GetInstanceTrialStatusResponse getInstanceTrialStatus(const Models::GetInstanceTrialStatusRequest &request);

      /**
       * @summary Sets the post-logon redirect application for a brand.
       *
       * @param request GetLoginRedirectApplicationForBrandRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetLoginRedirectApplicationForBrandResponse
       */
      Models::GetLoginRedirectApplicationForBrandResponse getLoginRedirectApplicationForBrandWithOptions(const Models::GetLoginRedirectApplicationForBrandRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets the post-logon redirect application for a brand.
       *
       * @param request GetLoginRedirectApplicationForBrandRequest
       * @return GetLoginRedirectApplicationForBrandResponse
       */
      Models::GetLoginRedirectApplicationForBrandResponse getLoginRedirectApplicationForBrand(const Models::GetLoginRedirectApplicationForBrandRequest &request);

      /**
       * @summary Queries the information about a specified network access endpoint.
       *
       * @param request GetNetworkAccessEndpointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetNetworkAccessEndpointResponse
       */
      Models::GetNetworkAccessEndpointResponse getNetworkAccessEndpointWithOptions(const Models::GetNetworkAccessEndpointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a specified network access endpoint.
       *
       * @param request GetNetworkAccessEndpointRequest
       * @return GetNetworkAccessEndpointResponse
       */
      Models::GetNetworkAccessEndpointResponse getNetworkAccessEndpoint(const Models::GetNetworkAccessEndpointRequest &request);

      /**
       * @summary Retrieves a network zone object.
       *
       * @param request GetNetworkZoneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetNetworkZoneResponse
       */
      Models::GetNetworkZoneResponse getNetworkZoneWithOptions(const Models::GetNetworkZoneRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a network zone object.
       *
       * @param request GetNetworkZoneRequest
       * @return GetNetworkZoneResponse
       */
      Models::GetNetworkZoneResponse getNetworkZone(const Models::GetNetworkZoneRequest &request);

      /**
       * @summary Queries the information of an EIAM organizational unit.
       *
       * @param request GetOrganizationalUnitRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOrganizationalUnitResponse
       */
      Models::GetOrganizationalUnitResponse getOrganizationalUnitWithOptions(const Models::GetOrganizationalUnitRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information of an EIAM organizational unit.
       *
       * @param request GetOrganizationalUnitRequest
       * @return GetOrganizationalUnitResponse
       */
      Models::GetOrganizationalUnitResponse getOrganizationalUnit(const Models::GetOrganizationalUnitRequest &request);

      /**
       * @summary Retrieves the password complexity policy for a specified EIAM instance.
       *
       * @param request GetPasswordComplexityConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPasswordComplexityConfigurationResponse
       */
      Models::GetPasswordComplexityConfigurationResponse getPasswordComplexityConfigurationWithOptions(const Models::GetPasswordComplexityConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the password complexity policy for a specified EIAM instance.
       *
       * @param request GetPasswordComplexityConfigurationRequest
       * @return GetPasswordComplexityConfigurationResponse
       */
      Models::GetPasswordComplexityConfigurationResponse getPasswordComplexityConfiguration(const Models::GetPasswordComplexityConfigurationRequest &request);

      /**
       * @summary Queries the password expiration policy of a specified EIAM instance.
       *
       * @param request GetPasswordExpirationConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPasswordExpirationConfigurationResponse
       */
      Models::GetPasswordExpirationConfigurationResponse getPasswordExpirationConfigurationWithOptions(const Models::GetPasswordExpirationConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the password expiration policy of a specified EIAM instance.
       *
       * @param request GetPasswordExpirationConfigurationRequest
       * @return GetPasswordExpirationConfigurationResponse
       */
      Models::GetPasswordExpirationConfigurationResponse getPasswordExpirationConfiguration(const Models::GetPasswordExpirationConfigurationRequest &request);

      /**
       * @summary Queries the password history policy of a specified EIAM instance.
       *
       * @param request GetPasswordHistoryConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPasswordHistoryConfigurationResponse
       */
      Models::GetPasswordHistoryConfigurationResponse getPasswordHistoryConfigurationWithOptions(const Models::GetPasswordHistoryConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the password history policy of a specified EIAM instance.
       *
       * @param request GetPasswordHistoryConfigurationRequest
       * @return GetPasswordHistoryConfigurationResponse
       */
      Models::GetPasswordHistoryConfigurationResponse getPasswordHistoryConfiguration(const Models::GetPasswordHistoryConfigurationRequest &request);

      /**
       * @summary Queries the password initialization policy of Employee Identity and Access Management (EIAM).
       *
       * @param request GetPasswordInitializationConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPasswordInitializationConfigurationResponse
       */
      Models::GetPasswordInitializationConfigurationResponse getPasswordInitializationConfigurationWithOptions(const Models::GetPasswordInitializationConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the password initialization policy of Employee Identity and Access Management (EIAM).
       *
       * @param request GetPasswordInitializationConfigurationRequest
       * @return GetPasswordInitializationConfigurationResponse
       */
      Models::GetPasswordInitializationConfigurationResponse getPasswordInitializationConfiguration(const Models::GetPasswordInitializationConfigurationRequest &request);

      /**
       * @summary Queries the scope permissions under a specified ResourceServer.
       *
       * @param request GetResourceServerScopeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetResourceServerScopeResponse
       */
      Models::GetResourceServerScopeResponse getResourceServerScopeWithOptions(const Models::GetResourceServerScopeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the scope permissions under a specified ResourceServer.
       *
       * @param request GetResourceServerScopeRequest
       * @return GetResourceServerScopeResponse
       */
      Models::GetResourceServerScopeResponse getResourceServerScope(const Models::GetResourceServerScopeRequest &request);

      /**
       * @summary Queries the root organizational unit information of EIAM.
       *
       * @param request GetRootOrganizationalUnitRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRootOrganizationalUnitResponse
       */
      Models::GetRootOrganizationalUnitResponse getRootOrganizationalUnitWithOptions(const Models::GetRootOrganizationalUnitRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the root organizational unit information of EIAM.
       *
       * @param request GetRootOrganizationalUnitRequest
       * @return GetRootOrganizationalUnitResponse
       */
      Models::GetRootOrganizationalUnitResponse getRootOrganizationalUnit(const Models::GetRootOrganizationalUnitRequest &request);

      /**
       * @summary Retrieves the service quota.
       *
       * @param request GetServiceQuotaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetServiceQuotaResponse
       */
      Models::GetServiceQuotaResponse getServiceQuotaWithOptions(const Models::GetServiceQuotaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the service quota.
       *
       * @param request GetServiceQuotaRequest
       * @return GetServiceQuotaResponse
       */
      Models::GetServiceQuotaResponse getServiceQuota(const Models::GetServiceQuotaRequest &request);

      /**
       * @summary Obtains the information about a single synchronization job.
       *
       * @param request GetSynchronizationJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSynchronizationJobResponse
       */
      Models::GetSynchronizationJobResponse getSynchronizationJobWithOptions(const Models::GetSynchronizationJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the information about a single synchronization job.
       *
       * @param request GetSynchronizationJobRequest
       * @return GetSynchronizationJobResponse
       */
      Models::GetSynchronizationJobResponse getSynchronizationJob(const Models::GetSynchronizationJobRequest &request);

      /**
       * @summary Queries the details of an EIAM account.
       *
       * @param request GetUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUserResponse
       */
      Models::GetUserResponse getUserWithOptions(const Models::GetUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an EIAM account.
       *
       * @param request GetUserRequest
       * @return GetUserResponse
       */
      Models::GetUserResponse getUser(const Models::GetUserRequest &request);

      /**
       * @summary View the list of invocation events.
       *
       * @param request ListActionTrackEventTypesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListActionTrackEventTypesResponse
       */
      Models::ListActionTrackEventTypesResponse listActionTrackEventTypesWithOptions(const Models::ListActionTrackEventTypesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary View the list of invocation events.
       *
       * @param request ListActionTrackEventTypesRequest
       * @return ListActionTrackEventTypesResponse
       */
      Models::ListActionTrackEventTypesResponse listActionTrackEventTypes(const Models::ListActionTrackEventTypesRequest &request);

      /**
       * @summary Queries the application accounts of an application by paging.
       *
       * @param request ListApplicationAccountsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListApplicationAccountsResponse
       */
      Models::ListApplicationAccountsResponse listApplicationAccountsWithOptions(const Models::ListApplicationAccountsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the application accounts of an application by paging.
       *
       * @param request ListApplicationAccountsRequest
       * @return ListApplicationAccountsResponse
       */
      Models::ListApplicationAccountsResponse listApplicationAccounts(const Models::ListApplicationAccountsRequest &request);

      /**
       * @summary Queries all accounts that belong to a specified user in an application.
       *
       * @description This operation queries only applications that are directly assigned to an organization. You can use the **ApplicationIds** parameter to filter the applications.
       *
       * @param request ListApplicationAccountsForUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListApplicationAccountsForUserResponse
       */
      Models::ListApplicationAccountsForUserResponse listApplicationAccountsForUserWithOptions(const Models::ListApplicationAccountsForUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all accounts that belong to a specified user in an application.
       *
       * @description This operation queries only applications that are directly assigned to an organization. You can use the **ApplicationIds** parameter to filter the applications.
       *
       * @param request ListApplicationAccountsForUserRequest
       * @return ListApplicationAccountsForUserResponse
       */
      Models::ListApplicationAccountsForUserResponse listApplicationAccountsForUser(const Models::ListApplicationAccountsForUserRequest &request);

      /**
       * @summary Queries all client secrets for an EIAM application. The key data in the response is masked. To obtain an unmasked key, call the ObtainApplicationClientSecret operation.
       *
       * @param request ListApplicationClientSecretsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListApplicationClientSecretsResponse
       */
      Models::ListApplicationClientSecretsResponse listApplicationClientSecretsWithOptions(const Models::ListApplicationClientSecretsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all client secrets for an EIAM application. The key data in the response is masked. To obtain an unmasked key, call the ObtainApplicationClientSecret operation.
       *
       * @param request ListApplicationClientSecretsRequest
       * @return ListApplicationClientSecretsResponse
       */
      Models::ListApplicationClientSecretsResponse listApplicationClientSecrets(const Models::ListApplicationClientSecretsRequest &request);

      /**
       * @summary Queries a list of application federated credentials.
       *
       * @param request ListApplicationFederatedCredentialsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListApplicationFederatedCredentialsResponse
       */
      Models::ListApplicationFederatedCredentialsResponse listApplicationFederatedCredentialsWithOptions(const Models::ListApplicationFederatedCredentialsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of application federated credentials.
       *
       * @param request ListApplicationFederatedCredentialsRequest
       * @return ListApplicationFederatedCredentialsResponse
       */
      Models::ListApplicationFederatedCredentialsResponse listApplicationFederatedCredentials(const Models::ListApplicationFederatedCredentialsRequest &request);

      /**
       * @summary Queries the list of application federated credentials by federated trust source ID.
       *
       * @param request ListApplicationFederatedCredentialsForProviderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListApplicationFederatedCredentialsForProviderResponse
       */
      Models::ListApplicationFederatedCredentialsForProviderResponse listApplicationFederatedCredentialsForProviderWithOptions(const Models::ListApplicationFederatedCredentialsForProviderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of application federated credentials by federated trust source ID.
       *
       * @param request ListApplicationFederatedCredentialsForProviderRequest
       * @return ListApplicationFederatedCredentialsForProviderResponse
       */
      Models::ListApplicationFederatedCredentialsForProviderResponse listApplicationFederatedCredentialsForProvider(const Models::ListApplicationFederatedCredentialsForProviderRequest &request);

      /**
       * @summary Retrieves a list of application roles using a cursor.
       *
       * @param request ListApplicationRolesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListApplicationRolesResponse
       */
      Models::ListApplicationRolesResponse listApplicationRolesWithOptions(const Models::ListApplicationRolesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of application roles using a cursor.
       *
       * @param request ListApplicationRolesRequest
       * @return ListApplicationRolesResponse
       */
      Models::ListApplicationRolesResponse listApplicationRoles(const Models::ListApplicationRolesRequest &request);

      /**
       * @summary Queries the list of account synchronization types supported by an application.
       *
       * @param request ListApplicationSupportedProvisionProtocolTypesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListApplicationSupportedProvisionProtocolTypesResponse
       */
      Models::ListApplicationSupportedProvisionProtocolTypesResponse listApplicationSupportedProvisionProtocolTypesWithOptions(const Models::ListApplicationSupportedProvisionProtocolTypesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of account synchronization types supported by an application.
       *
       * @param request ListApplicationSupportedProvisionProtocolTypesRequest
       * @return ListApplicationSupportedProvisionProtocolTypesResponse
       */
      Models::ListApplicationSupportedProvisionProtocolTypesResponse listApplicationSupportedProvisionProtocolTypes(const Models::ListApplicationSupportedProvisionProtocolTypesRequest &request);

      /**
       * @summary Retrieves the list of application tokens.
       *
       * @param request ListApplicationTokensRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListApplicationTokensResponse
       */
      Models::ListApplicationTokensResponse listApplicationTokensWithOptions(const Models::ListApplicationTokensRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the list of application tokens.
       *
       * @param request ListApplicationTokensRequest
       * @return ListApplicationTokensResponse
       */
      Models::ListApplicationTokensResponse listApplicationTokens(const Models::ListApplicationTokensRequest &request);

      /**
       * @summary Queries information about one or more EIAM applications by using paged query. Paging is supported.
       *
       * @param request ListApplicationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListApplicationsResponse
       */
      Models::ListApplicationsResponse listApplicationsWithOptions(const Models::ListApplicationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about one or more EIAM applications by using paged query. Paging is supported.
       *
       * @param request ListApplicationsRequest
       * @return ListApplicationsResponse
       */
      Models::ListApplicationsResponse listApplications(const Models::ListApplicationsRequest &request);

      /**
       * @summary Lists the applications associated with an authorization rule.
       *
       * @param request ListApplicationsForAuthorizationRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListApplicationsForAuthorizationRuleResponse
       */
      Models::ListApplicationsForAuthorizationRuleResponse listApplicationsForAuthorizationRuleWithOptions(const Models::ListApplicationsForAuthorizationRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the applications associated with an authorization rule.
       *
       * @param request ListApplicationsForAuthorizationRuleRequest
       * @return ListApplicationsForAuthorizationRuleResponse
       */
      Models::ListApplicationsForAuthorizationRuleResponse listApplicationsForAuthorizationRule(const Models::ListApplicationsForAuthorizationRuleRequest &request);

      /**
       * @summary Query the list of applications accessible to an EIAM group.
       *
       * @param request ListApplicationsForGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListApplicationsForGroupResponse
       */
      Models::ListApplicationsForGroupResponse listApplicationsForGroupWithOptions(const Models::ListApplicationsForGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the list of applications accessible to an EIAM group.
       *
       * @param request ListApplicationsForGroupRequest
       * @return ListApplicationsForGroupResponse
       */
      Models::ListApplicationsForGroupResponse listApplicationsForGroup(const Models::ListApplicationsForGroupRequest &request);

      /**
       * @summary Retrieves application information under a network access endpoint.
       *
       * @param request ListApplicationsForNetworkAccessEndpointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListApplicationsForNetworkAccessEndpointResponse
       */
      Models::ListApplicationsForNetworkAccessEndpointResponse listApplicationsForNetworkAccessEndpointWithOptions(const Models::ListApplicationsForNetworkAccessEndpointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves application information under a network access endpoint.
       *
       * @param request ListApplicationsForNetworkAccessEndpointRequest
       * @return ListApplicationsForNetworkAccessEndpointResponse
       */
      Models::ListApplicationsForNetworkAccessEndpointResponse listApplicationsForNetworkAccessEndpoint(const Models::ListApplicationsForNetworkAccessEndpointRequest &request);

      /**
       * @summary Retrieves the list of applications associated with a network domain.
       *
       * @param request ListApplicationsForNetworkZoneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListApplicationsForNetworkZoneResponse
       */
      Models::ListApplicationsForNetworkZoneResponse listApplicationsForNetworkZoneWithOptions(const Models::ListApplicationsForNetworkZoneRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the list of applications associated with a network domain.
       *
       * @param request ListApplicationsForNetworkZoneRequest
       * @return ListApplicationsForNetworkZoneResponse
       */
      Models::ListApplicationsForNetworkZoneResponse listApplicationsForNetworkZone(const Models::ListApplicationsForNetworkZoneRequest &request);

      /**
       * @summary Queries the list of applications accessible to an EIAM organizational unit by paging. The response includes application IDs. To obtain detailed application information, call the GetApplication operation.
       *
       * @description This operation queries only the direct permissions of the organizational unit, that is, applications directly assigned to the organizational unit. When you call this operation, you can use the **ApplicationIds** parameter to filter applications.
       *
       * @param request ListApplicationsForOrganizationalUnitRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListApplicationsForOrganizationalUnitResponse
       */
      Models::ListApplicationsForOrganizationalUnitResponse listApplicationsForOrganizationalUnitWithOptions(const Models::ListApplicationsForOrganizationalUnitRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of applications accessible to an EIAM organizational unit by paging. The response includes application IDs. To obtain detailed application information, call the GetApplication operation.
       *
       * @description This operation queries only the direct permissions of the organizational unit, that is, applications directly assigned to the organizational unit. When you call this operation, you can use the **ApplicationIds** parameter to filter applications.
       *
       * @param request ListApplicationsForOrganizationalUnitRequest
       * @return ListApplicationsForOrganizationalUnitResponse
       */
      Models::ListApplicationsForOrganizationalUnitResponse listApplicationsForOrganizationalUnit(const Models::ListApplicationsForOrganizationalUnitRequest &request);

      /**
       * @summary Queries the applications that an EIAM account can access and returns a paginated list of application IDs. To retrieve detailed information about a specific application, call the GetApplication operation.
       *
       * @param request ListApplicationsForUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListApplicationsForUserResponse
       */
      Models::ListApplicationsForUserResponse listApplicationsForUserWithOptions(const Models::ListApplicationsForUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the applications that an EIAM account can access and returns a paginated list of application IDs. To retrieve detailed information about a specific application, call the GetApplication operation.
       *
       * @param request ListApplicationsForUserRequest
       * @return ListApplicationsForUserResponse
       */
      Models::ListApplicationsForUserResponse listApplicationsForUser(const Models::ListApplicationsForUserRequest &request);

      /**
       * @summary Queries a list of authorization resource information.
       *
       * @param request ListAuthorizationResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAuthorizationResourcesResponse
       */
      Models::ListAuthorizationResourcesResponse listAuthorizationResourcesWithOptions(const Models::ListAuthorizationResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of authorization resource information.
       *
       * @param request ListAuthorizationResourcesRequest
       * @return ListAuthorizationResourcesResponse
       */
      Models::ListAuthorizationResourcesResponse listAuthorizationResources(const Models::ListAuthorizationResourcesRequest &request);

      /**
       * @summary Lists authorization rules.
       *
       * @param request ListAuthorizationRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAuthorizationRulesResponse
       */
      Models::ListAuthorizationRulesResponse listAuthorizationRulesWithOptions(const Models::ListAuthorizationRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists authorization rules.
       *
       * @param request ListAuthorizationRulesRequest
       * @return ListAuthorizationRulesResponse
       */
      Models::ListAuthorizationRulesResponse listAuthorizationRules(const Models::ListAuthorizationRulesRequest &request);

      /**
       * @summary Lists the authorization rules associated with an application.
       *
       * @param request ListAuthorizationRulesForApplicationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAuthorizationRulesForApplicationResponse
       */
      Models::ListAuthorizationRulesForApplicationResponse listAuthorizationRulesForApplicationWithOptions(const Models::ListAuthorizationRulesForApplicationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the authorization rules associated with an application.
       *
       * @param request ListAuthorizationRulesForApplicationRequest
       * @return ListAuthorizationRulesForApplicationResponse
       */
      Models::ListAuthorizationRulesForApplicationResponse listAuthorizationRulesForApplication(const Models::ListAuthorizationRulesForApplicationRequest &request);

      /**
       * @summary Lists the authorization rules associated with a group.
       *
       * @param request ListAuthorizationRulesForGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAuthorizationRulesForGroupResponse
       */
      Models::ListAuthorizationRulesForGroupResponse listAuthorizationRulesForGroupWithOptions(const Models::ListAuthorizationRulesForGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the authorization rules associated with a group.
       *
       * @param request ListAuthorizationRulesForGroupRequest
       * @return ListAuthorizationRulesForGroupResponse
       */
      Models::ListAuthorizationRulesForGroupResponse listAuthorizationRulesForGroup(const Models::ListAuthorizationRulesForGroupRequest &request);

      /**
       * @summary Lists the authorization rules associated with an account.
       *
       * @param request ListAuthorizationRulesForUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAuthorizationRulesForUserResponse
       */
      Models::ListAuthorizationRulesForUserResponse listAuthorizationRulesForUserWithOptions(const Models::ListAuthorizationRulesForUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the authorization rules associated with an account.
       *
       * @param request ListAuthorizationRulesForUserRequest
       * @return ListAuthorizationRulesForUserResponse
       */
      Models::ListAuthorizationRulesForUserResponse listAuthorizationRulesForUser(const Models::ListAuthorizationRulesForUserRequest &request);

      /**
       * @summary Retrieves a list of all authorization servers under an instance.
       *
       * @param request ListAuthorizationServersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAuthorizationServersResponse
       */
      Models::ListAuthorizationServersResponse listAuthorizationServersWithOptions(const Models::ListAuthorizationServersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of all authorization servers under an instance.
       *
       * @param request ListAuthorizationServersRequest
       * @return ListAuthorizationServersResponse
       */
      Models::ListAuthorizationServersResponse listAuthorizationServers(const Models::ListAuthorizationServersRequest &request);

      /**
       * @summary Retrieves a list of brands.
       *
       * @param request ListBrandsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListBrandsResponse
       */
      Models::ListBrandsResponse listBrandsWithOptions(const Models::ListBrandsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of brands.
       *
       * @param request ListBrandsRequest
       * @return ListBrandsResponse
       */
      Models::ListBrandsResponse listBrands(const Models::ListBrandsRequest &request);

      /**
       * @summary Lists the client public keys for a specified application using a cursor.
       *
       * @param request ListClientPublicKeysRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListClientPublicKeysResponse
       */
      Models::ListClientPublicKeysResponse listClientPublicKeysWithOptions(const Models::ListClientPublicKeysRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the client public keys for a specified application using a cursor.
       *
       * @param request ListClientPublicKeysRequest
       * @return ListClientPublicKeysResponse
       */
      Models::ListClientPublicKeysResponse listClientPublicKeys(const Models::ListClientPublicKeysRequest &request);

      /**
       * @summary Queries the information about one or more cloud roles by using paging.
       *
       * @param request ListCloudAccountRolesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCloudAccountRolesResponse
       */
      Models::ListCloudAccountRolesResponse listCloudAccountRolesWithOptions(const Models::ListCloudAccountRolesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about one or more cloud roles by using paging.
       *
       * @param request ListCloudAccountRolesRequest
       * @return ListCloudAccountRolesResponse
       */
      Models::ListCloudAccountRolesResponse listCloudAccountRoles(const Models::ListCloudAccountRolesRequest &request);

      /**
       * @summary Queries information about one or more cloud accounts by using paging.
       *
       * @param request ListCloudAccountsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCloudAccountsResponse
       */
      Models::ListCloudAccountsResponse listCloudAccountsWithOptions(const Models::ListCloudAccountsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about one or more cloud accounts by using paging.
       *
       * @param request ListCloudAccountsRequest
       * @return ListCloudAccountsResponse
       */
      Models::ListCloudAccountsResponse listCloudAccounts(const Models::ListCloudAccountsRequest &request);

      /**
       * @summary List conditional access policies.
       *
       * @description Query the list of conditional access policies with pagination.
       *
       * @param request ListConditionalAccessPoliciesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListConditionalAccessPoliciesResponse
       */
      Models::ListConditionalAccessPoliciesResponse listConditionalAccessPoliciesWithOptions(const Models::ListConditionalAccessPoliciesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary List conditional access policies.
       *
       * @description Query the list of conditional access policies with pagination.
       *
       * @param request ListConditionalAccessPoliciesRequest
       * @return ListConditionalAccessPoliciesResponse
       */
      Models::ListConditionalAccessPoliciesResponse listConditionalAccessPolicies(const Models::ListConditionalAccessPoliciesRequest &request);

      /**
       * @summary List conditional access policies associated with an application.
       *
       * @param request ListConditionalAccessPoliciesForApplicationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListConditionalAccessPoliciesForApplicationResponse
       */
      Models::ListConditionalAccessPoliciesForApplicationResponse listConditionalAccessPoliciesForApplicationWithOptions(const Models::ListConditionalAccessPoliciesForApplicationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary List conditional access policies associated with an application.
       *
       * @param request ListConditionalAccessPoliciesForApplicationRequest
       * @return ListConditionalAccessPoliciesForApplicationResponse
       */
      Models::ListConditionalAccessPoliciesForApplicationResponse listConditionalAccessPoliciesForApplication(const Models::ListConditionalAccessPoliciesForApplicationRequest &request);

      /**
       * @summary Retrieves the list of conditional access policies associated with a network zone.
       *
       * @description Retrieves the list of conditional access policies associated with a network zone.
       *
       * @param request ListConditionalAccessPoliciesForNetworkZoneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListConditionalAccessPoliciesForNetworkZoneResponse
       */
      Models::ListConditionalAccessPoliciesForNetworkZoneResponse listConditionalAccessPoliciesForNetworkZoneWithOptions(const Models::ListConditionalAccessPoliciesForNetworkZoneRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the list of conditional access policies associated with a network zone.
       *
       * @description Retrieves the list of conditional access policies associated with a network zone.
       *
       * @param request ListConditionalAccessPoliciesForNetworkZoneRequest
       * @return ListConditionalAccessPoliciesForNetworkZoneResponse
       */
      Models::ListConditionalAccessPoliciesForNetworkZoneResponse listConditionalAccessPoliciesForNetworkZone(const Models::ListConditionalAccessPoliciesForNetworkZoneRequest &request);

      /**
       * @summary Retrieves the list of conditional access policies associated with a user.
       *
       * @param request ListConditionalAccessPoliciesForUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListConditionalAccessPoliciesForUserResponse
       */
      Models::ListConditionalAccessPoliciesForUserResponse listConditionalAccessPoliciesForUserWithOptions(const Models::ListConditionalAccessPoliciesForUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the list of conditional access policies associated with a user.
       *
       * @param request ListConditionalAccessPoliciesForUserRequest
       * @return ListConditionalAccessPoliciesForUserResponse
       */
      Models::ListConditionalAccessPoliciesForUserResponse listConditionalAccessPoliciesForUser(const Models::ListConditionalAccessPoliciesForUserRequest &request);

      /**
       * @summary Lists credential providers.
       *
       * @param request ListCredentialProvidersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCredentialProvidersResponse
       */
      Models::ListCredentialProvidersResponse listCredentialProvidersWithOptions(const Models::ListCredentialProvidersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists credential providers.
       *
       * @param request ListCredentialProvidersRequest
       * @return ListCredentialProvidersResponse
       */
      Models::ListCredentialProvidersResponse listCredentialProviders(const Models::ListCredentialProvidersRequest &request);

      /**
       * @summary Queries the information of one or more credentials by using paging.
       *
       * @param request ListCredentialsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCredentialsResponse
       */
      Models::ListCredentialsResponse listCredentialsWithOptions(const Models::ListCredentialsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information of one or more credentials by using paging.
       *
       * @param request ListCredentialsRequest
       * @return ListCredentialsResponse
       */
      Models::ListCredentialsResponse listCredentials(const Models::ListCredentialsRequest &request);

      /**
       * @summary Queries the list of custom terms.
       *
       * @param request ListCustomPrivacyPoliciesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCustomPrivacyPoliciesResponse
       */
      Models::ListCustomPrivacyPoliciesResponse listCustomPrivacyPoliciesWithOptions(const Models::ListCustomPrivacyPoliciesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of custom terms.
       *
       * @param request ListCustomPrivacyPoliciesRequest
       * @return ListCustomPrivacyPoliciesResponse
       */
      Models::ListCustomPrivacyPoliciesResponse listCustomPrivacyPolicies(const Models::ListCustomPrivacyPoliciesRequest &request);

      /**
       * @summary Retrieves the resources of brand-linked instances.
       *
       * @param request ListCustomPrivacyPoliciesForBrandRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCustomPrivacyPoliciesForBrandResponse
       */
      Models::ListCustomPrivacyPoliciesForBrandResponse listCustomPrivacyPoliciesForBrandWithOptions(const Models::ListCustomPrivacyPoliciesForBrandRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the resources of brand-linked instances.
       *
       * @param request ListCustomPrivacyPoliciesForBrandRequest
       * @return ListCustomPrivacyPoliciesForBrandResponse
       */
      Models::ListCustomPrivacyPoliciesForBrandResponse listCustomPrivacyPoliciesForBrand(const Models::ListCustomPrivacyPoliciesForBrandRequest &request);

      /**
       * @summary Queries a list of domain proxy tokens of an EIAM instance.
       *
       * @param request ListDomainProxyTokensRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDomainProxyTokensResponse
       */
      Models::ListDomainProxyTokensResponse listDomainProxyTokensWithOptions(const Models::ListDomainProxyTokensRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of domain proxy tokens of an EIAM instance.
       *
       * @param request ListDomainProxyTokensRequest
       * @return ListDomainProxyTokensResponse
       */
      Models::ListDomainProxyTokensResponse listDomainProxyTokens(const Models::ListDomainProxyTokensRequest &request);

      /**
       * @summary Queries the domain names of an EIAM instance, including the default domain name and custom domain names.
       *
       * @param request ListDomainsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDomainsResponse
       */
      Models::ListDomainsResponse listDomainsWithOptions(const Models::ListDomainsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the domain names of an EIAM instance, including the default domain name and custom domain names.
       *
       * @param request ListDomainsRequest
       * @return ListDomainsResponse
       */
      Models::ListDomainsResponse listDomains(const Models::ListDomainsRequest &request);

      /**
       * @summary Queries the list of EIAM 2.0 and EIAM 1.0 instances.
       *
       * @param request ListEiamInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListEiamInstancesResponse
       */
      Models::ListEiamInstancesResponse listEiamInstancesWithOptions(const Models::ListEiamInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of EIAM 2.0 and EIAM 1.0 instances.
       *
       * @param request ListEiamInstancesRequest
       * @return ListEiamInstancesResponse
       */
      Models::ListEiamInstancesResponse listEiamInstances(const Models::ListEiamInstancesRequest &request);

      /**
       * @summary Lists the regions available for EIAM 1.0 and EIAM 2.0.
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListEiamRegionsResponse
       */
      Models::ListEiamRegionsResponse listEiamRegionsWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the regions available for EIAM 1.0 and EIAM 2.0.
       *
       * @return ListEiamRegionsResponse
       */
      Models::ListEiamRegionsResponse listEiamRegions();

      /**
       * @summary Queries the event list.
       *
       * @param request ListEventTypesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListEventTypesResponse
       */
      Models::ListEventTypesResponse listEventTypesWithOptions(const Models::ListEventTypesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the event list.
       *
       * @param request ListEventTypesRequest
       * @return ListEventTypesResponse
       */
      Models::ListEventTypesResponse listEventTypes(const Models::ListEventTypesRequest &request);

      /**
       * @summary Queries a list of federated trust sources.
       *
       * @param request ListFederatedCredentialProvidersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListFederatedCredentialProvidersResponse
       */
      Models::ListFederatedCredentialProvidersResponse listFederatedCredentialProvidersWithOptions(const Models::ListFederatedCredentialProvidersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of federated trust sources.
       *
       * @param request ListFederatedCredentialProvidersRequest
       * @return ListFederatedCredentialProvidersResponse
       */
      Models::ListFederatedCredentialProvidersResponse listFederatedCredentialProviders(const Models::ListFederatedCredentialProvidersRequest &request);

      /**
       * @summary List EIAM account groups.
       *
       * @param request ListGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListGroupsResponse
       */
      Models::ListGroupsResponse listGroupsWithOptions(const Models::ListGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary List EIAM account groups.
       *
       * @param request ListGroupsRequest
       * @return ListGroupsResponse
       */
      Models::ListGroupsResponse listGroups(const Models::ListGroupsRequest &request);

      /**
       * @summary Performs a paged query to list the groups authorized to access an application. The response returns the group IDs. To obtain detailed information for a group, you can call the GetGroup operation.
       *
       * @param request ListGroupsForApplicationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListGroupsForApplicationResponse
       */
      Models::ListGroupsForApplicationResponse listGroupsForApplicationWithOptions(const Models::ListGroupsForApplicationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs a paged query to list the groups authorized to access an application. The response returns the group IDs. To obtain detailed information for a group, you can call the GetGroup operation.
       *
       * @param request ListGroupsForApplicationRequest
       * @return ListGroupsForApplicationResponse
       */
      Models::ListGroupsForApplicationResponse listGroupsForApplication(const Models::ListGroupsForApplicationRequest &request);

      /**
       * @summary Lists the groups associated with an authorization rule.
       *
       * @param request ListGroupsForAuthorizationRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListGroupsForAuthorizationRuleResponse
       */
      Models::ListGroupsForAuthorizationRuleResponse listGroupsForAuthorizationRuleWithOptions(const Models::ListGroupsForAuthorizationRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the groups associated with an authorization rule.
       *
       * @param request ListGroupsForAuthorizationRuleRequest
       * @return ListGroupsForAuthorizationRuleResponse
       */
      Models::ListGroupsForAuthorizationRuleResponse listGroupsForAuthorizationRule(const Models::ListGroupsForAuthorizationRuleRequest &request);

      /**
       * @summary Lists the scopes authorized for groups on a specified resource server. This operation supports cursor-based pagination.
       *
       * @param request ListGroupsForResourceServerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListGroupsForResourceServerResponse
       */
      Models::ListGroupsForResourceServerResponse listGroupsForResourceServerWithOptions(const Models::ListGroupsForResourceServerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the scopes authorized for groups on a specified resource server. This operation supports cursor-based pagination.
       *
       * @param request ListGroupsForResourceServerRequest
       * @return ListGroupsForResourceServerResponse
       */
      Models::ListGroupsForResourceServerResponse listGroupsForResourceServer(const Models::ListGroupsForResourceServerRequest &request);

      /**
       * @summary Queries the list of account groups to which a specified EIAM account belongs.
       *
       * @param request ListGroupsForUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListGroupsForUserResponse
       */
      Models::ListGroupsForUserResponse listGroupsForUserWithOptions(const Models::ListGroupsForUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of account groups to which a specified EIAM account belongs.
       *
       * @param request ListGroupsForUserRequest
       * @return ListGroupsForUserResponse
       */
      Models::ListGroupsForUserResponse listGroupsForUser(const Models::ListGroupsForUserRequest &request);

      /**
       * @summary Query the list of identity providers.
       *
       * @param request ListIdentityProvidersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListIdentityProvidersResponse
       */
      Models::ListIdentityProvidersResponse listIdentityProvidersWithOptions(const Models::ListIdentityProvidersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the list of identity providers.
       *
       * @param request ListIdentityProvidersRequest
       * @return ListIdentityProvidersResponse
       */
      Models::ListIdentityProvidersResponse listIdentityProviders(const Models::ListIdentityProvidersRequest &request);

      /**
       * @summary Retrieves information about Identity Providers (IdPs) for a network endpoint.
       *
       * @param request ListIdentityProvidersForNetworkAccessEndpointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListIdentityProvidersForNetworkAccessEndpointResponse
       */
      Models::ListIdentityProvidersForNetworkAccessEndpointResponse listIdentityProvidersForNetworkAccessEndpointWithOptions(const Models::ListIdentityProvidersForNetworkAccessEndpointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves information about Identity Providers (IdPs) for a network endpoint.
       *
       * @param request ListIdentityProvidersForNetworkAccessEndpointRequest
       * @return ListIdentityProvidersForNetworkAccessEndpointResponse
       */
      Models::ListIdentityProvidersForNetworkAccessEndpointResponse listIdentityProvidersForNetworkAccessEndpoint(const Models::ListIdentityProvidersForNetworkAccessEndpointRequest &request);

      /**
       * @summary Queries information about one or more EIAM instances.
       *
       * @param request ListInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstancesResponse
       */
      Models::ListInstancesResponse listInstancesWithOptions(const Models::ListInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about one or more EIAM instances.
       *
       * @param request ListInstancesRequest
       * @return ListInstancesResponse
       */
      Models::ListInstancesResponse listInstances(const Models::ListInstancesRequest &request);

      /**
       * @summary Lists the available regions for creating network access endpoints in IDaaS EIAM.
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListNetworkAccessEndpointAvailableRegionsResponse
       */
      Models::ListNetworkAccessEndpointAvailableRegionsResponse listNetworkAccessEndpointAvailableRegionsWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the available regions for creating network access endpoints in IDaaS EIAM.
       *
       * @return ListNetworkAccessEndpointAvailableRegionsResponse
       */
      Models::ListNetworkAccessEndpointAvailableRegionsResponse listNetworkAccessEndpointAvailableRegions();

      /**
       * @summary Queries the list of zones that support the creation of network endpoints in a specified region for IDaaS EIAM.
       *
       * @param request ListNetworkAccessEndpointAvailableZonesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListNetworkAccessEndpointAvailableZonesResponse
       */
      Models::ListNetworkAccessEndpointAvailableZonesResponse listNetworkAccessEndpointAvailableZonesWithOptions(const Models::ListNetworkAccessEndpointAvailableZonesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of zones that support the creation of network endpoints in a specified region for IDaaS EIAM.
       *
       * @param request ListNetworkAccessEndpointAvailableZonesRequest
       * @return ListNetworkAccessEndpointAvailableZonesResponse
       */
      Models::ListNetworkAccessEndpointAvailableZonesResponse listNetworkAccessEndpointAvailableZones(const Models::ListNetworkAccessEndpointAvailableZonesRequest &request);

      /**
       * @summary Lists the network endpoints for an IDaaS EIAM instance.
       *
       * @param request ListNetworkAccessEndpointsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListNetworkAccessEndpointsResponse
       */
      Models::ListNetworkAccessEndpointsResponse listNetworkAccessEndpointsWithOptions(const Models::ListNetworkAccessEndpointsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the network endpoints for an IDaaS EIAM instance.
       *
       * @param request ListNetworkAccessEndpointsRequest
       * @return ListNetworkAccessEndpointsResponse
       */
      Models::ListNetworkAccessEndpointsResponse listNetworkAccessEndpoints(const Models::ListNetworkAccessEndpointsRequest &request);

      /**
       * @summary Queries the list of access paths under a specified network access endpoint.
       *
       * @param request ListNetworkAccessPathsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListNetworkAccessPathsResponse
       */
      Models::ListNetworkAccessPathsResponse listNetworkAccessPathsWithOptions(const Models::ListNetworkAccessPathsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of access paths under a specified network access endpoint.
       *
       * @param request ListNetworkAccessPathsRequest
       * @return ListNetworkAccessPathsResponse
       */
      Models::ListNetworkAccessPathsResponse listNetworkAccessPaths(const Models::ListNetworkAccessPathsRequest &request);

      /**
       * @summary Queries the list of network zone objects.
       *
       * @param request ListNetworkZonesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListNetworkZonesResponse
       */
      Models::ListNetworkZonesResponse listNetworkZonesWithOptions(const Models::ListNetworkZonesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of network zone objects.
       *
       * @param request ListNetworkZonesRequest
       * @return ListNetworkZonesResponse
       */
      Models::ListNetworkZonesResponse listNetworkZones(const Models::ListNetworkZonesRequest &request);

      /**
       * @summary Queries all ancestor organizations of a specified EIAM organization. The organizations in the result list are sorted in hierarchical order from the top level to the bottom level.
       *
       * @param request ListOrganizationalUnitParentsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListOrganizationalUnitParentsResponse
       */
      Models::ListOrganizationalUnitParentsResponse listOrganizationalUnitParentsWithOptions(const Models::ListOrganizationalUnitParentsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all ancestor organizations of a specified EIAM organization. The organizations in the result list are sorted in hierarchical order from the top level to the bottom level.
       *
       * @param request ListOrganizationalUnitParentsRequest
       * @return ListOrganizationalUnitParentsResponse
       */
      Models::ListOrganizationalUnitParentsResponse listOrganizationalUnitParents(const Models::ListOrganizationalUnitParentsRequest &request);

      /**
       * @summary Performs a paged query for EIAM organizational units.
       *
       * @param request ListOrganizationalUnitsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListOrganizationalUnitsResponse
       */
      Models::ListOrganizationalUnitsResponse listOrganizationalUnitsWithOptions(const Models::ListOrganizationalUnitsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs a paged query for EIAM organizational units.
       *
       * @param request ListOrganizationalUnitsRequest
       * @return ListOrganizationalUnitsResponse
       */
      Models::ListOrganizationalUnitsResponse listOrganizationalUnits(const Models::ListOrganizationalUnitsRequest &request);

      /**
       * @summary Performs a paged query to list the organizations that are granted access to an application. The response returns the IDs of the organizations. To obtain detailed information about a specific organization, call the GetOrganizationalUnit operation.
       *
       * @param request ListOrganizationalUnitsForApplicationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListOrganizationalUnitsForApplicationResponse
       */
      Models::ListOrganizationalUnitsForApplicationResponse listOrganizationalUnitsForApplicationWithOptions(const Models::ListOrganizationalUnitsForApplicationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs a paged query to list the organizations that are granted access to an application. The response returns the IDs of the organizations. To obtain detailed information about a specific organization, call the GetOrganizationalUnit operation.
       *
       * @param request ListOrganizationalUnitsForApplicationRequest
       * @return ListOrganizationalUnitsForApplicationResponse
       */
      Models::ListOrganizationalUnitsForApplicationResponse listOrganizationalUnitsForApplication(const Models::ListOrganizationalUnitsForApplicationRequest &request);

      /**
       * @summary Retrieves a cursor-paginated list of scopes that the current resource server has granted to an organization.
       *
       * @param request ListOrganizationalUnitsForResourceServerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListOrganizationalUnitsForResourceServerResponse
       */
      Models::ListOrganizationalUnitsForResourceServerResponse listOrganizationalUnitsForResourceServerWithOptions(const Models::ListOrganizationalUnitsForResourceServerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a cursor-paginated list of scopes that the current resource server has granted to an organization.
       *
       * @param request ListOrganizationalUnitsForResourceServerRequest
       * @return ListOrganizationalUnitsForResourceServerResponse
       */
      Models::ListOrganizationalUnitsForResourceServerResponse listOrganizationalUnitsForResourceServer(const Models::ListOrganizationalUnitsForResourceServerRequest &request);

      /**
       * @summary Queries a list of supported Alibaba Cloud regions.
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRegionsResponse
       */
      Models::ListRegionsResponse listRegionsWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of supported Alibaba Cloud regions.
       *
       * @return ListRegionsResponse
       */
      Models::ListRegionsResponse listRegions();

      /**
       * @summary Queries the list of scope permissions under a specified ResourceServer by using a cursor.
       *
       * @param request ListResourceServerScopesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListResourceServerScopesResponse
       */
      Models::ListResourceServerScopesResponse listResourceServerScopesWithOptions(const Models::ListResourceServerScopesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of scope permissions under a specified ResourceServer by using a cursor.
       *
       * @param request ListResourceServerScopesRequest
       * @return ListResourceServerScopesResponse
       */
      Models::ListResourceServerScopesResponse listResourceServerScopes(const Models::ListResourceServerScopesRequest &request);

      /**
       * @summary Queries the list of ResourceServer and Scope permissions granted to the current account by using a cursor-based approach.
       *
       * @param request ListResourceServersForUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListResourceServersForUserResponse
       */
      Models::ListResourceServersForUserResponse listResourceServersForUserWithOptions(const Models::ListResourceServersForUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of ResourceServer and Scope permissions granted to the current account by using a cursor-based approach.
       *
       * @param request ListResourceServersForUserRequest
       * @return ListResourceServersForUserResponse
       */
      Models::ListResourceServersForUserResponse listResourceServersForUser(const Models::ListResourceServersForUserRequest &request);

      /**
       * @summary Query the list of synchronization job details.
       *
       * @description The following two methods are supported for viewing returned data:
       * - Method 1: When querying the first page, you only need to set MaxResults to limit the number of entries returned. The NextToken in the response serves as the credential for querying subsequent pages. When querying subsequent pages, set the NextToken parameter to the NextToken value obtained from the previous response as the query credential, and set MaxResults to limit the number of entries returned. If there are no more pages, NextToken is no longer returned. The maximum value of MaxResults is 100.
       * - Method 2: Set the number of entries returned per page using PageSize, and set the page number using PageNumber.
       * You can only choose one of the above two methods. When a large number of entries are returned, Method 1 is recommended. If the MaxResults or NextToken parameter is set, the PageSize and PageNumber request parameters become invalid.
       *
       * @param request ListSynchronizationJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSynchronizationJobsResponse
       */
      Models::ListSynchronizationJobsResponse listSynchronizationJobsWithOptions(const Models::ListSynchronizationJobsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the list of synchronization job details.
       *
       * @description The following two methods are supported for viewing returned data:
       * - Method 1: When querying the first page, you only need to set MaxResults to limit the number of entries returned. The NextToken in the response serves as the credential for querying subsequent pages. When querying subsequent pages, set the NextToken parameter to the NextToken value obtained from the previous response as the query credential, and set MaxResults to limit the number of entries returned. If there are no more pages, NextToken is no longer returned. The maximum value of MaxResults is 100.
       * - Method 2: Set the number of entries returned per page using PageSize, and set the page number using PageNumber.
       * You can only choose one of the above two methods. When a large number of entries are returned, Method 1 is recommended. If the MaxResults or NextToken parameter is set, the PageSize and PageNumber request parameters become invalid.
       *
       * @param request ListSynchronizationJobsRequest
       * @return ListSynchronizationJobsResponse
       */
      Models::ListSynchronizationJobsResponse listSynchronizationJobs(const Models::ListSynchronizationJobsRequest &request);

      /**
       * @summary Lists the mappings for third-party logon accounts.
       *
       * @description This operation queries only the applications that are directly assigned to an organization. You can use the **ApplicationIds** parameter to filter the applications.
       *
       * @param request ListUserAuthnSourceMappingsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUserAuthnSourceMappingsResponse
       */
      Models::ListUserAuthnSourceMappingsResponse listUserAuthnSourceMappingsWithOptions(const Models::ListUserAuthnSourceMappingsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the mappings for third-party logon accounts.
       *
       * @description This operation queries only the applications that are directly assigned to an organization. You can use the **ApplicationIds** parameter to filter the applications.
       *
       * @param request ListUserAuthnSourceMappingsRequest
       * @return ListUserAuthnSourceMappingsResponse
       */
      Models::ListUserAuthnSourceMappingsResponse listUserAuthnSourceMappings(const Models::ListUserAuthnSourceMappingsRequest &request);

      /**
       * @summary Queries EIAM account information by using paging.
       *
       * @description This operation queries only the direct permissions of an organizational unit, which are the applications directly assigned to the organizational unit. When you call this operation, you can use the **ApplicationIds** parameter to filter applications.
       *
       * @param request ListUsersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUsersResponse
       */
      Models::ListUsersResponse listUsersWithOptions(const Models::ListUsersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries EIAM account information by using paging.
       *
       * @description This operation queries only the direct permissions of an organizational unit, which are the applications directly assigned to the organizational unit. When you call this operation, you can use the **ApplicationIds** parameter to filter applications.
       *
       * @param request ListUsersRequest
       * @return ListUsersResponse
       */
      Models::ListUsersResponse listUsers(const Models::ListUsersRequest &request);

      /**
       * @summary Performs a paged query to list the accounts that have been granted access to an application. The response includes account IDs. To retrieve detailed information about an account, call the GetUser operation.
       *
       * @param request ListUsersForApplicationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUsersForApplicationResponse
       */
      Models::ListUsersForApplicationResponse listUsersForApplicationWithOptions(const Models::ListUsersForApplicationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs a paged query to list the accounts that have been granted access to an application. The response includes account IDs. To retrieve detailed information about an account, call the GetUser operation.
       *
       * @param request ListUsersForApplicationRequest
       * @return ListUsersForApplicationResponse
       */
      Models::ListUsersForApplicationResponse listUsersForApplication(const Models::ListUsersForApplicationRequest &request);

      /**
       * @summary Lists the accounts associated with an authorization rule.
       *
       * @param request ListUsersForAuthorizationRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUsersForAuthorizationRuleResponse
       */
      Models::ListUsersForAuthorizationRuleResponse listUsersForAuthorizationRuleWithOptions(const Models::ListUsersForAuthorizationRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the accounts associated with an authorization rule.
       *
       * @param request ListUsersForAuthorizationRuleRequest
       * @return ListUsersForAuthorizationRuleResponse
       */
      Models::ListUsersForAuthorizationRuleResponse listUsersForAuthorizationRule(const Models::ListUsersForAuthorizationRuleRequest &request);

      /**
       * @summary Lists the users in a specified EIAM account group.
       *
       * @param request ListUsersForGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUsersForGroupResponse
       */
      Models::ListUsersForGroupResponse listUsersForGroupWithOptions(const Models::ListUsersForGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the users in a specified EIAM account group.
       *
       * @param request ListUsersForGroupRequest
       * @return ListUsersForGroupResponse
       */
      Models::ListUsersForGroupResponse listUsersForGroup(const Models::ListUsersForGroupRequest &request);

      /**
       * @summary List the scope permissions granted by a Resource Server to user accounts using cursor-based pagination.
       *
       * @param request ListUsersForResourceServerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUsersForResourceServerResponse
       */
      Models::ListUsersForResourceServerResponse listUsersForResourceServerWithOptions(const Models::ListUsersForResourceServerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary List the scope permissions granted by a Resource Server to user accounts using cursor-based pagination.
       *
       * @param request ListUsersForResourceServerRequest
       * @return ListUsersForResourceServerResponse
       */
      Models::ListUsersForResourceServerResponse listUsersForResourceServer(const Models::ListUsersForResourceServerRequest &request);

      /**
       * @summary Retrieves the client secret of an EIAM application. The returned secret is not masked. To retrieve masked secrets, call the ListApplicationClientSecrets operation.
       *
       * @param request ObtainApplicationClientSecretRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ObtainApplicationClientSecretResponse
       */
      Models::ObtainApplicationClientSecretResponse obtainApplicationClientSecretWithOptions(const Models::ObtainApplicationClientSecretRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the client secret of an EIAM application. The returned secret is not masked. To retrieve masked secrets, call the ListApplicationClientSecrets operation.
       *
       * @param request ObtainApplicationClientSecretRequest
       * @return ObtainApplicationClientSecretResponse
       */
      Models::ObtainApplicationClientSecretResponse obtainApplicationClientSecret(const Models::ObtainApplicationClientSecretRequest &request);

      /**
       * @summary Queries a specified application token.
       *
       * @description When you change an application from the enabled state to the disabled state, all features of the application become unavailable, such as SSO and account synchronization. Make sure that you are aware of the risks that may result from this operation.
       *
       * @param request ObtainApplicationTokenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ObtainApplicationTokenResponse
       */
      Models::ObtainApplicationTokenResponse obtainApplicationTokenWithOptions(const Models::ObtainApplicationTokenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a specified application token.
       *
       * @description When you change an application from the enabled state to the disabled state, all features of the application become unavailable, such as SSO and account synchronization. Make sure that you are aware of the risks that may result from this operation.
       *
       * @param request ObtainApplicationTokenRequest
       * @return ObtainApplicationTokenResponse
       */
      Models::ObtainApplicationTokenResponse obtainApplicationToken(const Models::ObtainApplicationTokenRequest &request);

      /**
       * @summary Queries a credential resource that contains sensitive information.
       *
       * @param request ObtainCredentialRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ObtainCredentialResponse
       */
      Models::ObtainCredentialResponse obtainCredentialWithOptions(const Models::ObtainCredentialRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a credential resource that contains sensitive information.
       *
       * @param request ObtainCredentialRequest
       * @return ObtainCredentialResponse
       */
      Models::ObtainCredentialResponse obtainCredential(const Models::ObtainCredentialRequest &request);

      /**
       * @summary Queries the proxy token of an EIAM instance domain name.
       *
       * @param request ObtainDomainProxyTokenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ObtainDomainProxyTokenResponse
       */
      Models::ObtainDomainProxyTokenResponse obtainDomainProxyTokenWithOptions(const Models::ObtainDomainProxyTokenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the proxy token of an EIAM instance domain name.
       *
       * @param request ObtainDomainProxyTokenRequest
       * @return ObtainDomainProxyTokenResponse
       */
      Models::ObtainDomainProxyTokenResponse obtainDomainProxyToken(const Models::ObtainDomainProxyTokenRequest &request);

      /**
       * @summary Deletes an application account of a specified employee under the current application.
       *
       * @description This operation only queries the direct permissions of the organization, that is, applications directly assigned to the organization. When you call this operation, you can use the **ApplicationIds** parameter to filter applications.
       *
       * @param request RemoveApplicationAccountFromUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveApplicationAccountFromUserResponse
       */
      Models::RemoveApplicationAccountFromUserResponse removeApplicationAccountFromUserWithOptions(const Models::RemoveApplicationAccountFromUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an application account of a specified employee under the current application.
       *
       * @description This operation only queries the direct permissions of the organization, that is, applications directly assigned to the organization. When you call this operation, you can use the **ApplicationIds** parameter to filter applications.
       *
       * @param request RemoveApplicationAccountFromUserRequest
       * @return RemoveApplicationAccountFromUserResponse
       */
      Models::RemoveApplicationAccountFromUserResponse removeApplicationAccountFromUser(const Models::RemoveApplicationAccountFromUserRequest &request);

      /**
       * @summary Removes an application from an authorization rule.
       *
       * @param request RemoveApplicationFromAuthorizationRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveApplicationFromAuthorizationRuleResponse
       */
      Models::RemoveApplicationFromAuthorizationRuleResponse removeApplicationFromAuthorizationRuleWithOptions(const Models::RemoveApplicationFromAuthorizationRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes an application from an authorization rule.
       *
       * @param request RemoveApplicationFromAuthorizationRuleRequest
       * @return RemoveApplicationFromAuthorizationRuleResponse
       */
      Models::RemoveApplicationFromAuthorizationRuleResponse removeApplicationFromAuthorizationRule(const Models::RemoveApplicationFromAuthorizationRuleRequest &request);

      /**
       * @summary Removes custom terms associated with a brand.
       *
       * @param request RemoveCustomPrivacyPoliciesFromBrandRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveCustomPrivacyPoliciesFromBrandResponse
       */
      Models::RemoveCustomPrivacyPoliciesFromBrandResponse removeCustomPrivacyPoliciesFromBrandWithOptions(const Models::RemoveCustomPrivacyPoliciesFromBrandRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes custom terms associated with a brand.
       *
       * @param request RemoveCustomPrivacyPoliciesFromBrandRequest
       * @return RemoveCustomPrivacyPoliciesFromBrandResponse
       */
      Models::RemoveCustomPrivacyPoliciesFromBrandResponse removeCustomPrivacyPoliciesFromBrand(const Models::RemoveCustomPrivacyPoliciesFromBrandRequest &request);

      /**
       * @summary Removes an application from an authorization rule.
       *
       * @param request RemoveGroupFromAuthorizationRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveGroupFromAuthorizationRuleResponse
       */
      Models::RemoveGroupFromAuthorizationRuleResponse removeGroupFromAuthorizationRuleWithOptions(const Models::RemoveGroupFromAuthorizationRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes an application from an authorization rule.
       *
       * @param request RemoveGroupFromAuthorizationRuleRequest
       * @return RemoveGroupFromAuthorizationRuleResponse
       */
      Models::RemoveGroupFromAuthorizationRuleResponse removeGroupFromAuthorizationRule(const Models::RemoveGroupFromAuthorizationRuleRequest &request);

      /**
       * @summary Removes an account from an authorization rule.
       *
       * @param request RemoveUserFromAuthorizationRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveUserFromAuthorizationRuleResponse
       */
      Models::RemoveUserFromAuthorizationRuleResponse removeUserFromAuthorizationRuleWithOptions(const Models::RemoveUserFromAuthorizationRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes an account from an authorization rule.
       *
       * @param request RemoveUserFromAuthorizationRuleRequest
       * @return RemoveUserFromAuthorizationRuleResponse
       */
      Models::RemoveUserFromAuthorizationRuleResponse removeUserFromAuthorizationRule(const Models::RemoveUserFromAuthorizationRuleRequest &request);

      /**
       * @summary Removes an Employee Identity and Access Management (EIAM) account from multiple EIAM organizations of Identity as a Service (IDaaS). You cannot remove an account from a primary organization.
       *
       * @param request RemoveUserFromOrganizationalUnitsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveUserFromOrganizationalUnitsResponse
       */
      Models::RemoveUserFromOrganizationalUnitsResponse removeUserFromOrganizationalUnitsWithOptions(const Models::RemoveUserFromOrganizationalUnitsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes an Employee Identity and Access Management (EIAM) account from multiple EIAM organizations of Identity as a Service (IDaaS). You cannot remove an account from a primary organization.
       *
       * @param request RemoveUserFromOrganizationalUnitsRequest
       * @return RemoveUserFromOrganizationalUnitsResponse
       */
      Models::RemoveUserFromOrganizationalUnitsResponse removeUserFromOrganizationalUnits(const Models::RemoveUserFromOrganizationalUnitsRequest &request);

      /**
       * @summary Removes Employee Identity and Access Management (EIAM) accounts from an EIAM group of Identity as a Service (IDaaS).
       *
       * @param request RemoveUsersFromGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveUsersFromGroupResponse
       */
      Models::RemoveUsersFromGroupResponse removeUsersFromGroupWithOptions(const Models::RemoveUsersFromGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes Employee Identity and Access Management (EIAM) accounts from an EIAM group of Identity as a Service (IDaaS).
       *
       * @param request RemoveUsersFromGroupRequest
       * @return RemoveUsersFromGroupResponse
       */
      Models::RemoveUsersFromGroupResponse removeUsersFromGroup(const Models::RemoveUsersFromGroupRequest &request);

      /**
       * @summary Renews a Free Edition instance.
       *
       * @param request RenewFreeLicenseEndTimeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RenewFreeLicenseEndTimeResponse
       */
      Models::RenewFreeLicenseEndTimeResponse renewFreeLicenseEndTimeWithOptions(const Models::RenewFreeLicenseEndTimeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Renews a Free Edition instance.
       *
       * @param request RenewFreeLicenseEndTimeRequest
       * @return RenewFreeLicenseEndTimeResponse
       */
      Models::RenewFreeLicenseEndTimeResponse renewFreeLicenseEndTime(const Models::RenewFreeLicenseEndTimeRequest &request);

      /**
       * @summary Revokes the permissions of multiple Employee Identity and Access Management (EIAM) groups to access an application in a batch.
       *
       * @param request RevokeApplicationFromGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RevokeApplicationFromGroupsResponse
       */
      Models::RevokeApplicationFromGroupsResponse revokeApplicationFromGroupsWithOptions(const Models::RevokeApplicationFromGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Revokes the permissions of multiple Employee Identity and Access Management (EIAM) groups to access an application in a batch.
       *
       * @param request RevokeApplicationFromGroupsRequest
       * @return RevokeApplicationFromGroupsResponse
       */
      Models::RevokeApplicationFromGroupsResponse revokeApplicationFromGroups(const Models::RevokeApplicationFromGroupsRequest &request);

      /**
       * @summary Revokes application access from multiple EIAM organizations in a batch operation.
       *
       * @param request RevokeApplicationFromOrganizationalUnitsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RevokeApplicationFromOrganizationalUnitsResponse
       */
      Models::RevokeApplicationFromOrganizationalUnitsResponse revokeApplicationFromOrganizationalUnitsWithOptions(const Models::RevokeApplicationFromOrganizationalUnitsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Revokes application access from multiple EIAM organizations in a batch operation.
       *
       * @param request RevokeApplicationFromOrganizationalUnitsRequest
       * @return RevokeApplicationFromOrganizationalUnitsResponse
       */
      Models::RevokeApplicationFromOrganizationalUnitsResponse revokeApplicationFromOrganizationalUnits(const Models::RevokeApplicationFromOrganizationalUnitsRequest &request);

      /**
       * @summary Revokes the permissions of multiple Enterprise Identity Access Management (EIAM) accounts to access an application in a batch.
       *
       * @param request RevokeApplicationFromUsersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RevokeApplicationFromUsersResponse
       */
      Models::RevokeApplicationFromUsersResponse revokeApplicationFromUsersWithOptions(const Models::RevokeApplicationFromUsersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Revokes the permissions of multiple Enterprise Identity Access Management (EIAM) accounts to access an application in a batch.
       *
       * @param request RevokeApplicationFromUsersRequest
       * @return RevokeApplicationFromUsersResponse
       */
      Models::RevokeApplicationFromUsersResponse revokeApplicationFromUsers(const Models::RevokeApplicationFromUsersRequest &request);

      /**
       * @summary Cancels the authorization granted by a specified ResourceServer to a Client application.
       *
       * @param request RevokeResourceServerFromClientRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RevokeResourceServerFromClientResponse
       */
      Models::RevokeResourceServerFromClientResponse revokeResourceServerFromClientWithOptions(const Models::RevokeResourceServerFromClientRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels the authorization granted by a specified ResourceServer to a Client application.
       *
       * @param request RevokeResourceServerFromClientRequest
       * @return RevokeResourceServerFromClientResponse
       */
      Models::RevokeResourceServerFromClientResponse revokeResourceServerFromClient(const Models::RevokeResourceServerFromClientRequest &request);

      /**
       * @summary Revokes the scope permissions of a specified ResourceServer from a client application.
       *
       * @param request RevokeResourceServerScopesFromClientRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RevokeResourceServerScopesFromClientResponse
       */
      Models::RevokeResourceServerScopesFromClientResponse revokeResourceServerScopesFromClientWithOptions(const Models::RevokeResourceServerScopesFromClientRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Revokes the scope permissions of a specified ResourceServer from a client application.
       *
       * @param request RevokeResourceServerScopesFromClientRequest
       * @return RevokeResourceServerScopesFromClientResponse
       */
      Models::RevokeResourceServerScopesFromClientResponse revokeResourceServerScopesFromClient(const Models::RevokeResourceServerScopesFromClientRequest &request);

      /**
       * @summary Revokes the authorization of Scope permissions under a specified ResourceServer from a group.
       *
       * @param request RevokeResourceServerScopesFromGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RevokeResourceServerScopesFromGroupResponse
       */
      Models::RevokeResourceServerScopesFromGroupResponse revokeResourceServerScopesFromGroupWithOptions(const Models::RevokeResourceServerScopesFromGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Revokes the authorization of Scope permissions under a specified ResourceServer from a group.
       *
       * @param request RevokeResourceServerScopesFromGroupRequest
       * @return RevokeResourceServerScopesFromGroupResponse
       */
      Models::RevokeResourceServerScopesFromGroupResponse revokeResourceServerScopesFromGroup(const Models::RevokeResourceServerScopesFromGroupRequest &request);

      /**
       * @summary Revokes the authorization of Scope permissions under a specified ResourceServer from an organizational unit.
       *
       * @param request RevokeResourceServerScopesFromOrganizationalUnitRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RevokeResourceServerScopesFromOrganizationalUnitResponse
       */
      Models::RevokeResourceServerScopesFromOrganizationalUnitResponse revokeResourceServerScopesFromOrganizationalUnitWithOptions(const Models::RevokeResourceServerScopesFromOrganizationalUnitRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Revokes the authorization of Scope permissions under a specified ResourceServer from an organizational unit.
       *
       * @param request RevokeResourceServerScopesFromOrganizationalUnitRequest
       * @return RevokeResourceServerScopesFromOrganizationalUnitResponse
       */
      Models::RevokeResourceServerScopesFromOrganizationalUnitResponse revokeResourceServerScopesFromOrganizationalUnit(const Models::RevokeResourceServerScopesFromOrganizationalUnitRequest &request);

      /**
       * @summary Revokes the Scope permissions under a specified ResourceServer from an account.
       *
       * @param request RevokeResourceServerScopesFromUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RevokeResourceServerScopesFromUserResponse
       */
      Models::RevokeResourceServerScopesFromUserResponse revokeResourceServerScopesFromUserWithOptions(const Models::RevokeResourceServerScopesFromUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Revokes the Scope permissions under a specified ResourceServer from an account.
       *
       * @param request RevokeResourceServerScopesFromUserRequest
       * @return RevokeResourceServerScopesFromUserResponse
       */
      Models::RevokeResourceServerScopesFromUserResponse revokeResourceServerScopesFromUser(const Models::RevokeResourceServerScopesFromUserRequest &request);

      /**
       * @summary Creates and immediately runs a new synchronization task.
       *
       * @param request RunSynchronizationJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunSynchronizationJobResponse
       */
      Models::RunSynchronizationJobResponse runSynchronizationJobWithOptions(const Models::RunSynchronizationJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates and immediately runs a new synchronization task.
       *
       * @param request RunSynchronizationJobRequest
       * @return RunSynchronizationJobResponse
       */
      Models::RunSynchronizationJobResponse runSynchronizationJob(const Models::RunSynchronizationJobRequest &request);

      /**
       * @summary Configures the permissions of the Developer API feature of an Employee Identity and Access Management (EIAM) application.
       *
       * @param request SetApplicationGrantScopeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetApplicationGrantScopeResponse
       */
      Models::SetApplicationGrantScopeResponse setApplicationGrantScopeWithOptions(const Models::SetApplicationGrantScopeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures the permissions of the Developer API feature of an Employee Identity and Access Management (EIAM) application.
       *
       * @param request SetApplicationGrantScopeRequest
       * @return SetApplicationGrantScopeResponse
       */
      Models::SetApplicationGrantScopeResponse setApplicationGrantScope(const Models::SetApplicationGrantScopeRequest &request);

      /**
       * @summary Sets the account synchronization configuration for an EIAM application.
       *
       * @param request SetApplicationProvisioningConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetApplicationProvisioningConfigResponse
       */
      Models::SetApplicationProvisioningConfigResponse setApplicationProvisioningConfigWithOptions(const Models::SetApplicationProvisioningConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets the account synchronization configuration for an EIAM application.
       *
       * @param request SetApplicationProvisioningConfigRequest
       * @return SetApplicationProvisioningConfigResponse
       */
      Models::SetApplicationProvisioningConfigResponse setApplicationProvisioningConfig(const Models::SetApplicationProvisioningConfigRequest &request);

      /**
       * @summary Sets the account synchronization scope of applications in Identity as a Service (IDaaS) Employee IAM (EIAM). This scope is the same as the scope within which developers can call the DeveloperAPI to query and manage accounts.
       *
       * @param request SetApplicationProvisioningScopeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetApplicationProvisioningScopeResponse
       */
      Models::SetApplicationProvisioningScopeResponse setApplicationProvisioningScopeWithOptions(const Models::SetApplicationProvisioningScopeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets the account synchronization scope of applications in Identity as a Service (IDaaS) Employee IAM (EIAM). This scope is the same as the scope within which developers can call the DeveloperAPI to query and manage accounts.
       *
       * @param request SetApplicationProvisioningScopeRequest
       * @return SetApplicationProvisioningScopeResponse
       */
      Models::SetApplicationProvisioningScopeResponse setApplicationProvisioningScope(const Models::SetApplicationProvisioningScopeRequest &request);

      /**
       * @summary Sets the primary organizational unit for an application\\"s user provisioning.
       *
       * @param request SetApplicationProvisioningUserPrimaryOrganizationalUnitRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetApplicationProvisioningUserPrimaryOrganizationalUnitResponse
       */
      Models::SetApplicationProvisioningUserPrimaryOrganizationalUnitResponse setApplicationProvisioningUserPrimaryOrganizationalUnitWithOptions(const Models::SetApplicationProvisioningUserPrimaryOrganizationalUnitRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets the primary organizational unit for an application\\"s user provisioning.
       *
       * @param request SetApplicationProvisioningUserPrimaryOrganizationalUnitRequest
       * @return SetApplicationProvisioningUserPrimaryOrganizationalUnitResponse
       */
      Models::SetApplicationProvisioningUserPrimaryOrganizationalUnitResponse setApplicationProvisioningUserPrimaryOrganizationalUnit(const Models::SetApplicationProvisioningUserPrimaryOrganizationalUnitRequest &request);

      /**
       * @summary Sets the unique identifier for a resource server. This identifier is used as the aud (audience) claim in a JSON Web Token (JWT) to specify the service that is intended to accept the token.
       *
       * @param request SetApplicationResourceServerIdentifierRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetApplicationResourceServerIdentifierResponse
       */
      Models::SetApplicationResourceServerIdentifierResponse setApplicationResourceServerIdentifierWithOptions(const Models::SetApplicationResourceServerIdentifierRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets the unique identifier for a resource server. This identifier is used as the aud (audience) claim in a JSON Web Token (JWT) to specify the service that is intended to accept the token.
       *
       * @param request SetApplicationResourceServerIdentifierRequest
       * @return SetApplicationResourceServerIdentifierResponse
       */
      Models::SetApplicationResourceServerIdentifierResponse setApplicationResourceServerIdentifier(const Models::SetApplicationResourceServerIdentifierRequest &request);

      /**
       * @summary Sets the single sign-on (SSO) configuration properties for an EIAM application.
       *
       * @description In EIAM, application management supports adding applications that use multiple single sign-on (SSO) protocols (SAML 2.0 and OIDC). However, each application supports only one SSO protocol, which is specified during creation and cannot be changed. Specify the corresponding SSO configuration property parameters based on the SSO protocol type supported by the application.
       *
       * @param request SetApplicationSsoConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetApplicationSsoConfigResponse
       */
      Models::SetApplicationSsoConfigResponse setApplicationSsoConfigWithOptions(const Models::SetApplicationSsoConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets the single sign-on (SSO) configuration properties for an EIAM application.
       *
       * @description In EIAM, application management supports adding applications that use multiple single sign-on (SSO) protocols (SAML 2.0 and OIDC). However, each application supports only one SSO protocol, which is specified during creation and cannot be changed. Specify the corresponding SSO configuration property parameters based on the SSO protocol type supported by the application.
       *
       * @param request SetApplicationSsoConfigRequest
       * @return SetApplicationSsoConfigResponse
       */
      Models::SetApplicationSsoConfigResponse setApplicationSsoConfig(const Models::SetApplicationSsoConfigRequest &request);

      /**
       * @summary Sets a specified domain name of an EIAM instance as the default domain name.
       *
       * @param request SetDefaultDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetDefaultDomainResponse
       */
      Models::SetDefaultDomainResponse setDefaultDomainWithOptions(const Models::SetDefaultDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets a specified domain name of an EIAM instance as the default domain name.
       *
       * @param request SetDefaultDomainRequest
       * @return SetDefaultDomainResponse
       */
      Models::SetDefaultDomainResponse setDefaultDomain(const Models::SetDefaultDomainRequest &request);

      /**
       * @summary Sets the forgot password policy for an EIAM instance.
       *
       * @param request SetForgetPasswordConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetForgetPasswordConfigurationResponse
       */
      Models::SetForgetPasswordConfigurationResponse setForgetPasswordConfigurationWithOptions(const Models::SetForgetPasswordConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets the forgot password policy for an EIAM instance.
       *
       * @param request SetForgetPasswordConfigurationRequest
       * @return SetForgetPasswordConfigurationResponse
       */
      Models::SetForgetPasswordConfigurationResponse setForgetPasswordConfiguration(const Models::SetForgetPasswordConfigurationRequest &request);

      /**
       * @summary Modify Authentication Information
       *
       * @param request SetIdentityProviderAuthnConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetIdentityProviderAuthnConfigurationResponse
       */
      Models::SetIdentityProviderAuthnConfigurationResponse setIdentityProviderAuthnConfigurationWithOptions(const Models::SetIdentityProviderAuthnConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modify Authentication Information
       *
       * @param request SetIdentityProviderAuthnConfigurationRequest
       * @return SetIdentityProviderAuthnConfigurationResponse
       */
      Models::SetIdentityProviderAuthnConfigurationResponse setIdentityProviderAuthnConfiguration(const Models::SetIdentityProviderAuthnConfigurationRequest &request);

      /**
       * @summary Modifies the inbound synchronization configuration of an Identity Provider (IdP).
       *
       * @param request SetIdentityProviderUdPullConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetIdentityProviderUdPullConfigurationResponse
       */
      Models::SetIdentityProviderUdPullConfigurationResponse setIdentityProviderUdPullConfigurationWithOptions(const Models::SetIdentityProviderUdPullConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the inbound synchronization configuration of an Identity Provider (IdP).
       *
       * @param request SetIdentityProviderUdPullConfigurationRequest
       * @return SetIdentityProviderUdPullConfigurationResponse
       */
      Models::SetIdentityProviderUdPullConfigurationResponse setIdentityProviderUdPullConfiguration(const Models::SetIdentityProviderUdPullConfigurationRequest &request);

      /**
       * @summary Modifies the push configuration for an identity provider (IdP).
       *
       * @param request SetIdentityProviderUdPushConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetIdentityProviderUdPushConfigurationResponse
       */
      Models::SetIdentityProviderUdPushConfigurationResponse setIdentityProviderUdPushConfigurationWithOptions(const Models::SetIdentityProviderUdPushConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the push configuration for an identity provider (IdP).
       *
       * @param request SetIdentityProviderUdPushConfigurationRequest
       * @return SetIdentityProviderUdPushConfigurationResponse
       */
      Models::SetIdentityProviderUdPushConfigurationResponse setIdentityProviderUdPushConfiguration(const Models::SetIdentityProviderUdPushConfigurationRequest &request);

      /**
       * @summary Sets the control elements of an instance.
       *
       * @param request SetInstanceControlConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetInstanceControlConfigurationResponse
       */
      Models::SetInstanceControlConfigurationResponse setInstanceControlConfigurationWithOptions(const Models::SetInstanceControlConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets the control elements of an instance.
       *
       * @param request SetInstanceControlConfigurationRequest
       * @return SetInstanceControlConfigurationResponse
       */
      Models::SetInstanceControlConfigurationResponse setInstanceControlConfiguration(const Models::SetInstanceControlConfigurationRequest &request);

      /**
       * @summary Sets the language and time zone information for an instance.
       *
       * @param request SetInstanceGlobalizationConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetInstanceGlobalizationConfigResponse
       */
      Models::SetInstanceGlobalizationConfigResponse setInstanceGlobalizationConfigWithOptions(const Models::SetInstanceGlobalizationConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets the language and time zone information for an instance.
       *
       * @param request SetInstanceGlobalizationConfigRequest
       * @return SetInstanceGlobalizationConfigResponse
       */
      Models::SetInstanceGlobalizationConfigResponse setInstanceGlobalizationConfig(const Models::SetInstanceGlobalizationConfigRequest &request);

      /**
       * @summary Set login redirect application for brand
       *
       * @param request SetLoginRedirectApplicationForBrandRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetLoginRedirectApplicationForBrandResponse
       */
      Models::SetLoginRedirectApplicationForBrandResponse setLoginRedirectApplicationForBrandWithOptions(const Models::SetLoginRedirectApplicationForBrandRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Set login redirect application for brand
       *
       * @param request SetLoginRedirectApplicationForBrandRequest
       * @return SetLoginRedirectApplicationForBrandResponse
       */
      Models::SetLoginRedirectApplicationForBrandResponse setLoginRedirectApplicationForBrand(const Models::SetLoginRedirectApplicationForBrandRequest &request);

      /**
       * @summary Sets the password complexity policy for a specified EIAM instance.
       *
       * @param request SetPasswordComplexityConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetPasswordComplexityConfigurationResponse
       */
      Models::SetPasswordComplexityConfigurationResponse setPasswordComplexityConfigurationWithOptions(const Models::SetPasswordComplexityConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets the password complexity policy for a specified EIAM instance.
       *
       * @param request SetPasswordComplexityConfigurationRequest
       * @return SetPasswordComplexityConfigurationResponse
       */
      Models::SetPasswordComplexityConfigurationResponse setPasswordComplexityConfiguration(const Models::SetPasswordComplexityConfigurationRequest &request);

      /**
       * @summary Sets the password expiration policy for a specified Enterprise Identity and Access Management (EIAM) instance.
       *
       * @param request SetPasswordExpirationConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetPasswordExpirationConfigurationResponse
       */
      Models::SetPasswordExpirationConfigurationResponse setPasswordExpirationConfigurationWithOptions(const Models::SetPasswordExpirationConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets the password expiration policy for a specified Enterprise Identity and Access Management (EIAM) instance.
       *
       * @param request SetPasswordExpirationConfigurationRequest
       * @return SetPasswordExpirationConfigurationResponse
       */
      Models::SetPasswordExpirationConfigurationResponse setPasswordExpirationConfiguration(const Models::SetPasswordExpirationConfigurationRequest &request);

      /**
       * @summary Sets the password history policy for a specified Enterprise Identity and Access Management (EIAM) instance.
       *
       * @param request SetPasswordHistoryConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetPasswordHistoryConfigurationResponse
       */
      Models::SetPasswordHistoryConfigurationResponse setPasswordHistoryConfigurationWithOptions(const Models::SetPasswordHistoryConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets the password history policy for a specified Enterprise Identity and Access Management (EIAM) instance.
       *
       * @param request SetPasswordHistoryConfigurationRequest
       * @return SetPasswordHistoryConfigurationResponse
       */
      Models::SetPasswordHistoryConfigurationResponse setPasswordHistoryConfiguration(const Models::SetPasswordHistoryConfigurationRequest &request);

      /**
       * @summary Sets the password initialization policy for a specified EIAM instance.
       *
       * @param request SetPasswordInitializationConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetPasswordInitializationConfigurationResponse
       */
      Models::SetPasswordInitializationConfigurationResponse setPasswordInitializationConfigurationWithOptions(const Models::SetPasswordInitializationConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets the password initialization policy for a specified EIAM instance.
       *
       * @param request SetPasswordInitializationConfigurationRequest
       * @return SetPasswordInitializationConfigurationResponse
       */
      Models::SetPasswordInitializationConfigurationResponse setPasswordInitializationConfiguration(const Models::SetPasswordInitializationConfigurationRequest &request);

      /**
       * @summary Sets the specified client public key as the primary key for an application.
       *
       * @param request SetPrimaryClientPublicKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetPrimaryClientPublicKeyResponse
       */
      Models::SetPrimaryClientPublicKeyResponse setPrimaryClientPublicKeyWithOptions(const Models::SetPrimaryClientPublicKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets the specified client public key as the primary key for an application.
       *
       * @param request SetPrimaryClientPublicKeyRequest
       * @return SetPrimaryClientPublicKeyResponse
       */
      Models::SetPrimaryClientPublicKeyResponse setPrimaryClientPublicKey(const Models::SetPrimaryClientPublicKeyRequest &request);

      /**
       * @summary Updates the primary organizational unit to which an Identity as a Service (IDaaS) Employee Identity and Access Management (EIAM) account belongs. This account will be removed from the previous primary organizational unit and added to the new primary organization.
       *
       * @param request SetUserPrimaryOrganizationalUnitRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetUserPrimaryOrganizationalUnitResponse
       */
      Models::SetUserPrimaryOrganizationalUnitResponse setUserPrimaryOrganizationalUnitWithOptions(const Models::SetUserPrimaryOrganizationalUnitRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the primary organizational unit to which an Identity as a Service (IDaaS) Employee Identity and Access Management (EIAM) account belongs. This account will be removed from the previous primary organizational unit and added to the new primary organization.
       *
       * @param request SetUserPrimaryOrganizationalUnitRequest
       * @return SetUserPrimaryOrganizationalUnitResponse
       */
      Models::SetUserPrimaryOrganizationalUnitResponse setUserPrimaryOrganizationalUnit(const Models::SetUserPrimaryOrganizationalUnitRequest &request);

      /**
       * @summary Sets the WebAuthn configuration.
       *
       * @param request SetWebAuthnConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetWebAuthnConfigurationResponse
       */
      Models::SetWebAuthnConfigurationResponse setWebAuthnConfigurationWithOptions(const Models::SetWebAuthnConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets the WebAuthn configuration.
       *
       * @param request SetWebAuthnConfigurationRequest
       * @return SetWebAuthnConfigurationResponse
       */
      Models::SetWebAuthnConfigurationResponse setWebAuthnConfiguration(const Models::SetWebAuthnConfigurationRequest &request);

      /**
       * @summary Detaches the TOTP authenticator for a specified user.
       *
       * @param request UnbindTotpAuthenticatorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnbindTotpAuthenticatorResponse
       */
      Models::UnbindTotpAuthenticatorResponse unbindTotpAuthenticatorWithOptions(const Models::UnbindTotpAuthenticatorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Detaches the TOTP authenticator for a specified user.
       *
       * @param request UnbindTotpAuthenticatorRequest
       * @return UnbindTotpAuthenticatorResponse
       */
      Models::UnbindTotpAuthenticatorResponse unbindTotpAuthenticator(const Models::UnbindTotpAuthenticatorRequest &request);

      /**
       * @summary Unbinds a third-party logon account from a user.
       *
       * @param request UnbindUserAuthnSourceMappingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnbindUserAuthnSourceMappingResponse
       */
      Models::UnbindUserAuthnSourceMappingResponse unbindUserAuthnSourceMappingWithOptions(const Models::UnbindUserAuthnSourceMappingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unbinds a third-party logon account from a user.
       *
       * @param request UnbindUserAuthnSourceMappingRequest
       * @return UnbindUserAuthnSourceMappingResponse
       */
      Models::UnbindUserAuthnSourceMappingResponse unbindUserAuthnSourceMapping(const Models::UnbindUserAuthnSourceMappingRequest &request);

      /**
       * @summary Unlocks a locked EIAM account.
       *
       * @param request UnlockUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnlockUserResponse
       */
      Models::UnlockUserResponse unlockUserWithOptions(const Models::UnlockUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unlocks a locked EIAM account.
       *
       * @param request UnlockUserRequest
       * @return UnlockUserResponse
       */
      Models::UnlockUserResponse unlockUser(const Models::UnlockUserRequest &request);

      /**
       * @summary Modifies the advanced configuration of an application.
       *
       * @param request UpdateApplicationAdvancedConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateApplicationAdvancedConfigResponse
       */
      Models::UpdateApplicationAdvancedConfigResponse updateApplicationAdvancedConfigWithOptions(const Models::UpdateApplicationAdvancedConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the advanced configuration of an application.
       *
       * @param request UpdateApplicationAdvancedConfigRequest
       * @return UpdateApplicationAdvancedConfigResponse
       */
      Models::UpdateApplicationAdvancedConfigResponse updateApplicationAdvancedConfig(const Models::UpdateApplicationAdvancedConfigRequest &request);

      /**
       * @summary Modifies the authorization type of an Employee Identity and Access Management (EIAM) application.
       *
       * @param request UpdateApplicationAuthorizationTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateApplicationAuthorizationTypeResponse
       */
      Models::UpdateApplicationAuthorizationTypeResponse updateApplicationAuthorizationTypeWithOptions(const Models::UpdateApplicationAuthorizationTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the authorization type of an Employee Identity and Access Management (EIAM) application.
       *
       * @param request UpdateApplicationAuthorizationTypeRequest
       * @return UpdateApplicationAuthorizationTypeResponse
       */
      Models::UpdateApplicationAuthorizationTypeResponse updateApplicationAuthorizationType(const Models::UpdateApplicationAuthorizationTypeRequest &request);

      /**
       * @summary Updates the expiration time of a specified ClientSecret for an application.
       *
       * @param request UpdateApplicationClientSecretExpirationTimeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateApplicationClientSecretExpirationTimeResponse
       */
      Models::UpdateApplicationClientSecretExpirationTimeResponse updateApplicationClientSecretExpirationTimeWithOptions(const Models::UpdateApplicationClientSecretExpirationTimeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the expiration time of a specified ClientSecret for an application.
       *
       * @param request UpdateApplicationClientSecretExpirationTimeRequest
       * @return UpdateApplicationClientSecretExpirationTimeResponse
       */
      Models::UpdateApplicationClientSecretExpirationTimeResponse updateApplicationClientSecretExpirationTime(const Models::UpdateApplicationClientSecretExpirationTimeRequest &request);

      /**
       * @summary Modifies the description of an Employee Identity and Access Management (EIAM) application.
       *
       * @param request UpdateApplicationDescriptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateApplicationDescriptionResponse
       */
      Models::UpdateApplicationDescriptionResponse updateApplicationDescriptionWithOptions(const Models::UpdateApplicationDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the description of an Employee Identity and Access Management (EIAM) application.
       *
       * @param request UpdateApplicationDescriptionRequest
       * @return UpdateApplicationDescriptionResponse
       */
      Models::UpdateApplicationDescriptionResponse updateApplicationDescription(const Models::UpdateApplicationDescriptionRequest &request);

      /**
       * @summary Updates a federated credential for an application.
       *
       * @param request UpdateApplicationFederatedCredentialRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateApplicationFederatedCredentialResponse
       */
      Models::UpdateApplicationFederatedCredentialResponse updateApplicationFederatedCredentialWithOptions(const Models::UpdateApplicationFederatedCredentialRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a federated credential for an application.
       *
       * @param request UpdateApplicationFederatedCredentialRequest
       * @return UpdateApplicationFederatedCredentialResponse
       */
      Models::UpdateApplicationFederatedCredentialResponse updateApplicationFederatedCredential(const Models::UpdateApplicationFederatedCredentialRequest &request);

      /**
       * @summary Updates the description of a federated credential for an application.
       *
       * @param request UpdateApplicationFederatedCredentialDescriptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateApplicationFederatedCredentialDescriptionResponse
       */
      Models::UpdateApplicationFederatedCredentialDescriptionResponse updateApplicationFederatedCredentialDescriptionWithOptions(const Models::UpdateApplicationFederatedCredentialDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the description of a federated credential for an application.
       *
       * @param request UpdateApplicationFederatedCredentialDescriptionRequest
       * @return UpdateApplicationFederatedCredentialDescriptionResponse
       */
      Models::UpdateApplicationFederatedCredentialDescriptionResponse updateApplicationFederatedCredentialDescription(const Models::UpdateApplicationFederatedCredentialDescriptionRequest &request);

      /**
       * @summary Updates the basic information of an application.
       *
       * @param request UpdateApplicationInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateApplicationInfoResponse
       */
      Models::UpdateApplicationInfoResponse updateApplicationInfoWithOptions(const Models::UpdateApplicationInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the basic information of an application.
       *
       * @param request UpdateApplicationInfoRequest
       * @return UpdateApplicationInfoResponse
       */
      Models::UpdateApplicationInfoResponse updateApplicationInfo(const Models::UpdateApplicationInfoRequest &request);

      /**
       * @summary Updates an application role.
       *
       * @param request UpdateApplicationRoleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateApplicationRoleResponse
       */
      Models::UpdateApplicationRoleResponse updateApplicationRoleWithOptions(const Models::UpdateApplicationRoleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates an application role.
       *
       * @param request UpdateApplicationRoleRequest
       * @return UpdateApplicationRoleResponse
       */
      Models::UpdateApplicationRoleResponse updateApplicationRole(const Models::UpdateApplicationRoleRequest &request);

      /**
       * @summary Modifies the description of an application role.
       *
       * @param request UpdateApplicationRoleDescriptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateApplicationRoleDescriptionResponse
       */
      Models::UpdateApplicationRoleDescriptionResponse updateApplicationRoleDescriptionWithOptions(const Models::UpdateApplicationRoleDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the description of an application role.
       *
       * @param request UpdateApplicationRoleDescriptionRequest
       * @return UpdateApplicationRoleDescriptionResponse
       */
      Models::UpdateApplicationRoleDescriptionResponse updateApplicationRoleDescription(const Models::UpdateApplicationRoleDescriptionRequest &request);

      /**
       * @summary Updates the SSO parameters for an application template.
       *
       * @description Updates the single sign-on (SSO) parameters for an application template from the marketplace.
       *
       * @param request UpdateApplicationSsoFormParamsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateApplicationSsoFormParamsResponse
       */
      Models::UpdateApplicationSsoFormParamsResponse updateApplicationSsoFormParamsWithOptions(const Models::UpdateApplicationSsoFormParamsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the SSO parameters for an application template.
       *
       * @description Updates the single sign-on (SSO) parameters for an application template from the marketplace.
       *
       * @param request UpdateApplicationSsoFormParamsRequest
       * @return UpdateApplicationSsoFormParamsResponse
       */
      Models::UpdateApplicationSsoFormParamsResponse updateApplicationSsoFormParams(const Models::UpdateApplicationSsoFormParamsRequest &request);

      /**
       * @summary Updates the expiration time of an application token.
       *
       * @param request UpdateApplicationTokenExpirationTimeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateApplicationTokenExpirationTimeResponse
       */
      Models::UpdateApplicationTokenExpirationTimeResponse updateApplicationTokenExpirationTimeWithOptions(const Models::UpdateApplicationTokenExpirationTimeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the expiration time of an application token.
       *
       * @param request UpdateApplicationTokenExpirationTimeRequest
       * @return UpdateApplicationTokenExpirationTimeResponse
       */
      Models::UpdateApplicationTokenExpirationTimeResponse updateApplicationTokenExpirationTime(const Models::UpdateApplicationTokenExpirationTimeRequest &request);

      /**
       * @summary Updates the basic properties of an authorization rule.
       *
       * @param request UpdateAuthorizationRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAuthorizationRuleResponse
       */
      Models::UpdateAuthorizationRuleResponse updateAuthorizationRuleWithOptions(const Models::UpdateAuthorizationRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the basic properties of an authorization rule.
       *
       * @param request UpdateAuthorizationRuleRequest
       * @return UpdateAuthorizationRuleResponse
       */
      Models::UpdateAuthorizationRuleResponse updateAuthorizationRule(const Models::UpdateAuthorizationRuleRequest &request);

      /**
       * @summary Updates the properties of the relationship between an authorization rule and an application.
       *
       * @param request UpdateAuthorizationRuleApplicationAttachmentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAuthorizationRuleApplicationAttachmentResponse
       */
      Models::UpdateAuthorizationRuleApplicationAttachmentResponse updateAuthorizationRuleApplicationAttachmentWithOptions(const Models::UpdateAuthorizationRuleApplicationAttachmentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the properties of the relationship between an authorization rule and an application.
       *
       * @param request UpdateAuthorizationRuleApplicationAttachmentRequest
       * @return UpdateAuthorizationRuleApplicationAttachmentResponse
       */
      Models::UpdateAuthorizationRuleApplicationAttachmentResponse updateAuthorizationRuleApplicationAttachment(const Models::UpdateAuthorizationRuleApplicationAttachmentRequest &request);

      /**
       * @summary Updates the description of an authorization rule.
       *
       * @param request UpdateAuthorizationRuleDescriptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAuthorizationRuleDescriptionResponse
       */
      Models::UpdateAuthorizationRuleDescriptionResponse updateAuthorizationRuleDescriptionWithOptions(const Models::UpdateAuthorizationRuleDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the description of an authorization rule.
       *
       * @param request UpdateAuthorizationRuleDescriptionRequest
       * @return UpdateAuthorizationRuleDescriptionResponse
       */
      Models::UpdateAuthorizationRuleDescriptionResponse updateAuthorizationRuleDescription(const Models::UpdateAuthorizationRuleDescriptionRequest &request);

      /**
       * @summary Updates the relationship properties between an authorization rule and a group.
       *
       * @param request UpdateAuthorizationRuleGroupAttachmentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAuthorizationRuleGroupAttachmentResponse
       */
      Models::UpdateAuthorizationRuleGroupAttachmentResponse updateAuthorizationRuleGroupAttachmentWithOptions(const Models::UpdateAuthorizationRuleGroupAttachmentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the relationship properties between an authorization rule and a group.
       *
       * @param request UpdateAuthorizationRuleGroupAttachmentRequest
       * @return UpdateAuthorizationRuleGroupAttachmentResponse
       */
      Models::UpdateAuthorizationRuleGroupAttachmentResponse updateAuthorizationRuleGroupAttachment(const Models::UpdateAuthorizationRuleGroupAttachmentRequest &request);

      /**
       * @summary Updates the relationship properties between an authorization rule and an account.
       *
       * @param request UpdateAuthorizationRuleUserAttachmentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAuthorizationRuleUserAttachmentResponse
       */
      Models::UpdateAuthorizationRuleUserAttachmentResponse updateAuthorizationRuleUserAttachmentWithOptions(const Models::UpdateAuthorizationRuleUserAttachmentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the relationship properties between an authorization rule and an account.
       *
       * @param request UpdateAuthorizationRuleUserAttachmentRequest
       * @return UpdateAuthorizationRuleUserAttachmentResponse
       */
      Models::UpdateAuthorizationRuleUserAttachmentResponse updateAuthorizationRuleUserAttachment(const Models::UpdateAuthorizationRuleUserAttachmentRequest &request);

      /**
       * @summary Updates the configuration of an authorization server.
       *
       * @param request UpdateAuthorizationServerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAuthorizationServerResponse
       */
      Models::UpdateAuthorizationServerResponse updateAuthorizationServerWithOptions(const Models::UpdateAuthorizationServerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the configuration of an authorization server.
       *
       * @param request UpdateAuthorizationServerRequest
       * @return UpdateAuthorizationServerResponse
       */
      Models::UpdateAuthorizationServerResponse updateAuthorizationServer(const Models::UpdateAuthorizationServerRequest &request);

      /**
       * @summary Updates the description of an authorization server.
       *
       * @param request UpdateAuthorizationServerDescriptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAuthorizationServerDescriptionResponse
       */
      Models::UpdateAuthorizationServerDescriptionResponse updateAuthorizationServerDescriptionWithOptions(const Models::UpdateAuthorizationServerDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the description of an authorization server.
       *
       * @param request UpdateAuthorizationServerDescriptionRequest
       * @return UpdateAuthorizationServerDescriptionResponse
       */
      Models::UpdateAuthorizationServerDescriptionResponse updateAuthorizationServerDescription(const Models::UpdateAuthorizationServerDescriptionRequest &request);

      /**
       * @summary Modifies a brand.
       *
       * @param request UpdateBrandRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateBrandResponse
       */
      Models::UpdateBrandResponse updateBrandWithOptions(const Models::UpdateBrandRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a brand.
       *
       * @param request UpdateBrandRequest
       * @return UpdateBrandResponse
       */
      Models::UpdateBrandResponse updateBrand(const Models::UpdateBrandRequest &request);

      /**
       * @summary Updates the basic information of an Alibaba Cloud account.
       *
       * @param request UpdateCloudAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCloudAccountResponse
       */
      Models::UpdateCloudAccountResponse updateCloudAccountWithOptions(const Models::UpdateCloudAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the basic information of an Alibaba Cloud account.
       *
       * @param request UpdateCloudAccountRequest
       * @return UpdateCloudAccountResponse
       */
      Models::UpdateCloudAccountResponse updateCloudAccount(const Models::UpdateCloudAccountRequest &request);

      /**
       * @summary Updates the description of an Alibaba Cloud account.
       *
       * @param request UpdateCloudAccountDescriptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCloudAccountDescriptionResponse
       */
      Models::UpdateCloudAccountDescriptionResponse updateCloudAccountDescriptionWithOptions(const Models::UpdateCloudAccountDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the description of an Alibaba Cloud account.
       *
       * @param request UpdateCloudAccountDescriptionRequest
       * @return UpdateCloudAccountDescriptionResponse
       */
      Models::UpdateCloudAccountDescriptionResponse updateCloudAccountDescription(const Models::UpdateCloudAccountDescriptionRequest &request);

      /**
       * @summary Updates the description of a cloud role.
       *
       * @param request UpdateCloudAccountRoleDescriptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCloudAccountRoleDescriptionResponse
       */
      Models::UpdateCloudAccountRoleDescriptionResponse updateCloudAccountRoleDescriptionWithOptions(const Models::UpdateCloudAccountRoleDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the description of a cloud role.
       *
       * @param request UpdateCloudAccountRoleDescriptionRequest
       * @return UpdateCloudAccountRoleDescriptionResponse
       */
      Models::UpdateCloudAccountRoleDescriptionResponse updateCloudAccountRoleDescription(const Models::UpdateCloudAccountRoleDescriptionRequest &request);

      /**
       * @summary Updates a conditional access policy.
       *
       * @description Updates a conditional access policy.
       *
       * @param request UpdateConditionalAccessPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateConditionalAccessPolicyResponse
       */
      Models::UpdateConditionalAccessPolicyResponse updateConditionalAccessPolicyWithOptions(const Models::UpdateConditionalAccessPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a conditional access policy.
       *
       * @description Updates a conditional access policy.
       *
       * @param request UpdateConditionalAccessPolicyRequest
       * @return UpdateConditionalAccessPolicyResponse
       */
      Models::UpdateConditionalAccessPolicyResponse updateConditionalAccessPolicy(const Models::UpdateConditionalAccessPolicyRequest &request);

      /**
       * @summary Updates the description of a conditional access policy.
       *
       * @description Updates the description of a conditional access policy.
       *
       * @param request UpdateConditionalAccessPolicyDescriptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateConditionalAccessPolicyDescriptionResponse
       */
      Models::UpdateConditionalAccessPolicyDescriptionResponse updateConditionalAccessPolicyDescriptionWithOptions(const Models::UpdateConditionalAccessPolicyDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the description of a conditional access policy.
       *
       * @description Updates the description of a conditional access policy.
       *
       * @param request UpdateConditionalAccessPolicyDescriptionRequest
       * @return UpdateConditionalAccessPolicyDescriptionResponse
       */
      Models::UpdateConditionalAccessPolicyDescriptionResponse updateConditionalAccessPolicyDescription(const Models::UpdateConditionalAccessPolicyDescriptionRequest &request);

      /**
       * @summary Update basic information for a credential.
       *
       * @param request UpdateCredentialRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCredentialResponse
       */
      Models::UpdateCredentialResponse updateCredentialWithOptions(const Models::UpdateCredentialRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update basic information for a credential.
       *
       * @param request UpdateCredentialRequest
       * @return UpdateCredentialResponse
       */
      Models::UpdateCredentialResponse updateCredential(const Models::UpdateCredentialRequest &request);

      /**
       * @summary Updates the description of a credential.
       *
       * @param request UpdateCredentialDescriptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCredentialDescriptionResponse
       */
      Models::UpdateCredentialDescriptionResponse updateCredentialDescriptionWithOptions(const Models::UpdateCredentialDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the description of a credential.
       *
       * @param request UpdateCredentialDescriptionRequest
       * @return UpdateCredentialDescriptionResponse
       */
      Models::UpdateCredentialDescriptionResponse updateCredentialDescription(const Models::UpdateCredentialDescriptionRequest &request);

      /**
       * @summary Updates a credential provider.
       *
       * @param request UpdateCredentialProviderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCredentialProviderResponse
       */
      Models::UpdateCredentialProviderResponse updateCredentialProviderWithOptions(const Models::UpdateCredentialProviderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a credential provider.
       *
       * @param request UpdateCredentialProviderRequest
       * @return UpdateCredentialProviderResponse
       */
      Models::UpdateCredentialProviderResponse updateCredentialProvider(const Models::UpdateCredentialProviderRequest &request);

      /**
       * @summary Update the description of a credential provider.
       *
       * @param request UpdateCredentialProviderDescriptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCredentialProviderDescriptionResponse
       */
      Models::UpdateCredentialProviderDescriptionResponse updateCredentialProviderDescriptionWithOptions(const Models::UpdateCredentialProviderDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update the description of a credential provider.
       *
       * @param request UpdateCredentialProviderDescriptionRequest
       * @return UpdateCredentialProviderDescriptionResponse
       */
      Models::UpdateCredentialProviderDescriptionResponse updateCredentialProviderDescription(const Models::UpdateCredentialProviderDescriptionRequest &request);

      /**
       * @summary Updates a custom privacy policy.
       *
       * @param request UpdateCustomPrivacyPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCustomPrivacyPolicyResponse
       */
      Models::UpdateCustomPrivacyPolicyResponse updateCustomPrivacyPolicyWithOptions(const Models::UpdateCustomPrivacyPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a custom privacy policy.
       *
       * @param request UpdateCustomPrivacyPolicyRequest
       * @return UpdateCustomPrivacyPolicyResponse
       */
      Models::UpdateCustomPrivacyPolicyResponse updateCustomPrivacyPolicy(const Models::UpdateCustomPrivacyPolicyRequest &request);

      /**
       * @summary Updates the brand associated with a domain name.
       *
       * @param request UpdateDomainBrandRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDomainBrandResponse
       */
      Models::UpdateDomainBrandResponse updateDomainBrandWithOptions(const Models::UpdateDomainBrandRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the brand associated with a domain name.
       *
       * @param request UpdateDomainBrandRequest
       * @return UpdateDomainBrandResponse
       */
      Models::UpdateDomainBrandResponse updateDomainBrand(const Models::UpdateDomainBrandRequest &request);

      /**
       * @summary Updates the ICP filing number of a domain.
       *
       * @param request UpdateDomainIcpNumberRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDomainIcpNumberResponse
       */
      Models::UpdateDomainIcpNumberResponse updateDomainIcpNumberWithOptions(const Models::UpdateDomainIcpNumberRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the ICP filing number of a domain.
       *
       * @param request UpdateDomainIcpNumberRequest
       * @return UpdateDomainIcpNumberResponse
       */
      Models::UpdateDomainIcpNumberResponse updateDomainIcpNumber(const Models::UpdateDomainIcpNumberRequest &request);

      /**
       * @summary Updates a federated trust source.
       *
       * @param request UpdateFederatedCredentialProviderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateFederatedCredentialProviderResponse
       */
      Models::UpdateFederatedCredentialProviderResponse updateFederatedCredentialProviderWithOptions(const Models::UpdateFederatedCredentialProviderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a federated trust source.
       *
       * @param request UpdateFederatedCredentialProviderRequest
       * @return UpdateFederatedCredentialProviderResponse
       */
      Models::UpdateFederatedCredentialProviderResponse updateFederatedCredentialProvider(const Models::UpdateFederatedCredentialProviderRequest &request);

      /**
       * @summary Updates the description of a federated trust source.
       *
       * @param request UpdateFederatedCredentialProviderDescriptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateFederatedCredentialProviderDescriptionResponse
       */
      Models::UpdateFederatedCredentialProviderDescriptionResponse updateFederatedCredentialProviderDescriptionWithOptions(const Models::UpdateFederatedCredentialProviderDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the description of a federated trust source.
       *
       * @param request UpdateFederatedCredentialProviderDescriptionRequest
       * @return UpdateFederatedCredentialProviderDescriptionResponse
       */
      Models::UpdateFederatedCredentialProviderDescriptionResponse updateFederatedCredentialProviderDescription(const Models::UpdateFederatedCredentialProviderDescriptionRequest &request);

      /**
       * @summary Updates the information about an account group in Identity as a Service (IDaaS) Employee Identity and Access Management (EIAM). If the information is empty, the information is not updated by default.
       *
       * @param request UpdateGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateGroupResponse
       */
      Models::UpdateGroupResponse updateGroupWithOptions(const Models::UpdateGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the information about an account group in Identity as a Service (IDaaS) Employee Identity and Access Management (EIAM). If the information is empty, the information is not updated by default.
       *
       * @param request UpdateGroupRequest
       * @return UpdateGroupResponse
       */
      Models::UpdateGroupResponse updateGroup(const Models::UpdateGroupRequest &request);

      /**
       * @summary Updates the description of an Identity as a Service (IDaaS) Employee Identity and Access Management (EIAM) account group.
       *
       * @param request UpdateGroupDescriptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateGroupDescriptionResponse
       */
      Models::UpdateGroupDescriptionResponse updateGroupDescriptionWithOptions(const Models::UpdateGroupDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the description of an Identity as a Service (IDaaS) Employee Identity and Access Management (EIAM) account group.
       *
       * @param request UpdateGroupDescriptionRequest
       * @return UpdateGroupDescriptionResponse
       */
      Models::UpdateGroupDescriptionResponse updateGroupDescription(const Models::UpdateGroupDescriptionRequest &request);

      /**
       * @summary Updates the basic configuration of an identity provider.
       *
       * @param request UpdateIdentityProviderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateIdentityProviderResponse
       */
      Models::UpdateIdentityProviderResponse updateIdentityProviderWithOptions(const Models::UpdateIdentityProviderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the basic configuration of an identity provider.
       *
       * @param request UpdateIdentityProviderRequest
       * @return UpdateIdentityProviderResponse
       */
      Models::UpdateIdentityProviderResponse updateIdentityProvider(const Models::UpdateIdentityProviderRequest &request);

      /**
       * @summary Modifies the description of a specified EIAM instance.
       *
       * @param request UpdateInstanceDescriptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateInstanceDescriptionResponse
       */
      Models::UpdateInstanceDescriptionResponse updateInstanceDescriptionWithOptions(const Models::UpdateInstanceDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the description of a specified EIAM instance.
       *
       * @param request UpdateInstanceDescriptionRequest
       * @return UpdateInstanceDescriptionResponse
       */
      Models::UpdateInstanceDescriptionResponse updateInstanceDescription(const Models::UpdateInstanceDescriptionRequest &request);

      /**
       * @summary Modifies the name of a private network access endpoint.
       *
       * @param request UpdateNetworkAccessEndpointNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateNetworkAccessEndpointNameResponse
       */
      Models::UpdateNetworkAccessEndpointNameResponse updateNetworkAccessEndpointNameWithOptions(const Models::UpdateNetworkAccessEndpointNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name of a private network access endpoint.
       *
       * @param request UpdateNetworkAccessEndpointNameRequest
       * @return UpdateNetworkAccessEndpointNameResponse
       */
      Models::UpdateNetworkAccessEndpointNameResponse updateNetworkAccessEndpointName(const Models::UpdateNetworkAccessEndpointNameRequest &request);

      /**
       * @summary Updates a network zone object.
       *
       * @param request UpdateNetworkZoneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateNetworkZoneResponse
       */
      Models::UpdateNetworkZoneResponse updateNetworkZoneWithOptions(const Models::UpdateNetworkZoneRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a network zone object.
       *
       * @param request UpdateNetworkZoneRequest
       * @return UpdateNetworkZoneResponse
       */
      Models::UpdateNetworkZoneResponse updateNetworkZone(const Models::UpdateNetworkZoneRequest &request);

      /**
       * @summary Updates the description of a network zone.
       *
       * @param request UpdateNetworkZoneDescriptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateNetworkZoneDescriptionResponse
       */
      Models::UpdateNetworkZoneDescriptionResponse updateNetworkZoneDescriptionWithOptions(const Models::UpdateNetworkZoneDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the description of a network zone.
       *
       * @param request UpdateNetworkZoneDescriptionRequest
       * @return UpdateNetworkZoneDescriptionResponse
       */
      Models::UpdateNetworkZoneDescriptionResponse updateNetworkZoneDescription(const Models::UpdateNetworkZoneDescriptionRequest &request);

      /**
       * @summary Updates the basic information about an Employee Identity and Access Management (EIAM) organization. The basic information about the organization is not updated by default if no parameter is specified.
       *
       * @param request UpdateOrganizationalUnitRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateOrganizationalUnitResponse
       */
      Models::UpdateOrganizationalUnitResponse updateOrganizationalUnitWithOptions(const Models::UpdateOrganizationalUnitRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the basic information about an Employee Identity and Access Management (EIAM) organization. The basic information about the organization is not updated by default if no parameter is specified.
       *
       * @param request UpdateOrganizationalUnitRequest
       * @return UpdateOrganizationalUnitResponse
       */
      Models::UpdateOrganizationalUnitResponse updateOrganizationalUnit(const Models::UpdateOrganizationalUnitRequest &request);

      /**
       * @summary Modifies the description of an Employee Identity and Access Management (EIAM) organization.
       *
       * @param request UpdateOrganizationalUnitDescriptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateOrganizationalUnitDescriptionResponse
       */
      Models::UpdateOrganizationalUnitDescriptionResponse updateOrganizationalUnitDescriptionWithOptions(const Models::UpdateOrganizationalUnitDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the description of an Employee Identity and Access Management (EIAM) organization.
       *
       * @param request UpdateOrganizationalUnitDescriptionRequest
       * @return UpdateOrganizationalUnitDescriptionResponse
       */
      Models::UpdateOrganizationalUnitDescriptionResponse updateOrganizationalUnitDescription(const Models::UpdateOrganizationalUnitDescriptionRequest &request);

      /**
       * @summary Updates the parent organization ID of an organization in Identity as a Service (IDaaS) Employee Identity and Access Management (EIAM). In this case, the organization is moved from a parent node to a new node.
       *
       * @param request UpdateOrganizationalUnitParentIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateOrganizationalUnitParentIdResponse
       */
      Models::UpdateOrganizationalUnitParentIdResponse updateOrganizationalUnitParentIdWithOptions(const Models::UpdateOrganizationalUnitParentIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the parent organization ID of an organization in Identity as a Service (IDaaS) Employee Identity and Access Management (EIAM). In this case, the organization is moved from a parent node to a new node.
       *
       * @param request UpdateOrganizationalUnitParentIdRequest
       * @return UpdateOrganizationalUnitParentIdResponse
       */
      Models::UpdateOrganizationalUnitParentIdResponse updateOrganizationalUnitParentId(const Models::UpdateOrganizationalUnitParentIdRequest &request);

      /**
       * @summary Updates a scope permission for a specified resource server.
       *
       * @param request UpdateResourceServerScopeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateResourceServerScopeResponse
       */
      Models::UpdateResourceServerScopeResponse updateResourceServerScopeWithOptions(const Models::UpdateResourceServerScopeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a scope permission for a specified resource server.
       *
       * @param request UpdateResourceServerScopeRequest
       * @return UpdateResourceServerScopeResponse
       */
      Models::UpdateResourceServerScopeResponse updateResourceServerScope(const Models::UpdateResourceServerScopeRequest &request);

      /**
       * @summary Updates the basic information of an EIAM account.
       *
       * @param request UpdateUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateUserResponse
       */
      Models::UpdateUserResponse updateUserWithOptions(const Models::UpdateUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the basic information of an EIAM account.
       *
       * @param request UpdateUserRequest
       * @return UpdateUserResponse
       */
      Models::UpdateUserResponse updateUser(const Models::UpdateUserRequest &request);

      /**
       * @summary Updates a user\\"s description.
       *
       * @param request UpdateUserDescriptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateUserDescriptionResponse
       */
      Models::UpdateUserDescriptionResponse updateUserDescriptionWithOptions(const Models::UpdateUserDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a user\\"s description.
       *
       * @param request UpdateUserDescriptionRequest
       * @return UpdateUserDescriptionResponse
       */
      Models::UpdateUserDescriptionResponse updateUserDescription(const Models::UpdateUserDescriptionRequest &request);

      /**
       * @summary Updates the password information of an Employee Identity and Access Management (EIAM) account of Identity as a Service (IDaaS). The password must meet the requirements of the password policies that are configured in the IDaaS console.
       *
       * @param request UpdateUserPasswordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateUserPasswordResponse
       */
      Models::UpdateUserPasswordResponse updateUserPasswordWithOptions(const Models::UpdateUserPasswordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the password information of an Employee Identity and Access Management (EIAM) account of Identity as a Service (IDaaS). The password must meet the requirements of the password policies that are configured in the IDaaS console.
       *
       * @param request UpdateUserPasswordRequest
       * @return UpdateUserPasswordResponse
       */
      Models::UpdateUserPasswordResponse updateUserPassword(const Models::UpdateUserPasswordRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
