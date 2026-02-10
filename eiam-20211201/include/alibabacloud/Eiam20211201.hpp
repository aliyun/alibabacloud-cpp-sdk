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
       * @summary 在当前应用下给指定员工添加一个应用账号。
       *
       * @param request AddApplicationAccountToUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddApplicationAccountToUserResponse
       */
      Models::AddApplicationAccountToUserResponse addApplicationAccountToUserWithOptions(const Models::AddApplicationAccountToUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 在当前应用下给指定员工添加一个应用账号。
       *
       * @param request AddApplicationAccountToUserRequest
       * @return AddApplicationAccountToUserResponse
       */
      Models::AddApplicationAccountToUserResponse addApplicationAccountToUser(const Models::AddApplicationAccountToUserRequest &request);

      /**
       * @summary 将应用添加到授权规则
       *
       * @param request AddApplicationToAuthorizationRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddApplicationToAuthorizationRuleResponse
       */
      Models::AddApplicationToAuthorizationRuleResponse addApplicationToAuthorizationRuleWithOptions(const Models::AddApplicationToAuthorizationRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 将应用添加到授权规则
       *
       * @param request AddApplicationToAuthorizationRuleRequest
       * @return AddApplicationToAuthorizationRuleResponse
       */
      Models::AddApplicationToAuthorizationRuleResponse addApplicationToAuthorizationRule(const Models::AddApplicationToAuthorizationRuleRequest &request);

      /**
       * @summary 添加条款到品牌
       *
       * @param request AddCustomPrivacyPoliciesToBrandRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddCustomPrivacyPoliciesToBrandResponse
       */
      Models::AddCustomPrivacyPoliciesToBrandResponse addCustomPrivacyPoliciesToBrandWithOptions(const Models::AddCustomPrivacyPoliciesToBrandRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 添加条款到品牌
       *
       * @param request AddCustomPrivacyPoliciesToBrandRequest
       * @return AddCustomPrivacyPoliciesToBrandResponse
       */
      Models::AddCustomPrivacyPoliciesToBrandResponse addCustomPrivacyPoliciesToBrand(const Models::AddCustomPrivacyPoliciesToBrandRequest &request);

      /**
       * @summary 将组添加到授权规则
       *
       * @param request AddGroupToAuthorizationRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddGroupToAuthorizationRuleResponse
       */
      Models::AddGroupToAuthorizationRuleResponse addGroupToAuthorizationRuleWithOptions(const Models::AddGroupToAuthorizationRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 将组添加到授权规则
       *
       * @param request AddGroupToAuthorizationRuleRequest
       * @return AddGroupToAuthorizationRuleResponse
       */
      Models::AddGroupToAuthorizationRuleResponse addGroupToAuthorizationRule(const Models::AddGroupToAuthorizationRuleRequest &request);

      /**
       * @summary 将账户添加到授权规则
       *
       * @param request AddUserToAuthorizationRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddUserToAuthorizationRuleResponse
       */
      Models::AddUserToAuthorizationRuleResponse addUserToAuthorizationRuleWithOptions(const Models::AddUserToAuthorizationRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 将账户添加到授权规则
       *
       * @param request AddUserToAuthorizationRuleRequest
       * @return AddUserToAuthorizationRuleResponse
       */
      Models::AddUserToAuthorizationRuleResponse addUserToAuthorizationRule(const Models::AddUserToAuthorizationRuleRequest &request);

      /**
       * @summary Adds an Employee Identity and Access Management (EIAM) account to multiple EIAM organizations of Identity as a Service (IDaaS). If the account already exists in the organizational unit, the system directly returns a success response.
       *
       * @param request AddUserToOrganizationalUnitsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddUserToOrganizationalUnitsResponse
       */
      Models::AddUserToOrganizationalUnitsResponse addUserToOrganizationalUnitsWithOptions(const Models::AddUserToOrganizationalUnitsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds an Employee Identity and Access Management (EIAM) account to multiple EIAM organizations of Identity as a Service (IDaaS). If the account already exists in the organizational unit, the system directly returns a success response.
       *
       * @param request AddUserToOrganizationalUnitsRequest
       * @return AddUserToOrganizationalUnitsResponse
       */
      Models::AddUserToOrganizationalUnitsResponse addUserToOrganizationalUnits(const Models::AddUserToOrganizationalUnitsRequest &request);

      /**
       * @summary Adds Employee Identity and Access Management (EIAM) accounts to an EIAM group of Identity as a Service (IDaaS).
       *
       * @param request AddUsersToGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddUsersToGroupResponse
       */
      Models::AddUsersToGroupResponse addUsersToGroupWithOptions(const Models::AddUsersToGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds Employee Identity and Access Management (EIAM) accounts to an EIAM group of Identity as a Service (IDaaS).
       *
       * @param request AddUsersToGroupRequest
       * @return AddUsersToGroupResponse
       */
      Models::AddUsersToGroupResponse addUsersToGroup(const Models::AddUsersToGroupRequest &request);

      /**
       * @summary Grants the permissions to access an application to multiple account groups at a time in Identity as a Service (IDaaS) Employee Identity and Access Management (EIAM).
       *
       * @param request AuthorizeApplicationToGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AuthorizeApplicationToGroupsResponse
       */
      Models::AuthorizeApplicationToGroupsResponse authorizeApplicationToGroupsWithOptions(const Models::AuthorizeApplicationToGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Grants the permissions to access an application to multiple account groups at a time in Identity as a Service (IDaaS) Employee Identity and Access Management (EIAM).
       *
       * @param request AuthorizeApplicationToGroupsRequest
       * @return AuthorizeApplicationToGroupsResponse
       */
      Models::AuthorizeApplicationToGroupsResponse authorizeApplicationToGroups(const Models::AuthorizeApplicationToGroupsRequest &request);

      /**
       * @summary Grants the access permissions on an application to multiple Employee Identity and Access Management (EIAM) organizations at a time.
       *
       * @param request AuthorizeApplicationToOrganizationalUnitsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AuthorizeApplicationToOrganizationalUnitsResponse
       */
      Models::AuthorizeApplicationToOrganizationalUnitsResponse authorizeApplicationToOrganizationalUnitsWithOptions(const Models::AuthorizeApplicationToOrganizationalUnitsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Grants the access permissions on an application to multiple Employee Identity and Access Management (EIAM) organizations at a time.
       *
       * @param request AuthorizeApplicationToOrganizationalUnitsRequest
       * @return AuthorizeApplicationToOrganizationalUnitsResponse
       */
      Models::AuthorizeApplicationToOrganizationalUnitsResponse authorizeApplicationToOrganizationalUnits(const Models::AuthorizeApplicationToOrganizationalUnitsRequest &request);

      /**
       * @summary Grants the access permissions on an application to multiple Employee Identity and Access Management (EIAM) accounts at a time.
       *
       * @param request AuthorizeApplicationToUsersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AuthorizeApplicationToUsersResponse
       */
      Models::AuthorizeApplicationToUsersResponse authorizeApplicationToUsersWithOptions(const Models::AuthorizeApplicationToUsersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Grants the access permissions on an application to multiple Employee Identity and Access Management (EIAM) accounts at a time.
       *
       * @param request AuthorizeApplicationToUsersRequest
       * @return AuthorizeApplicationToUsersResponse
       */
      Models::AuthorizeApplicationToUsersResponse authorizeApplicationToUsers(const Models::AuthorizeApplicationToUsersRequest &request);

      /**
       * @summary 授权指定ResourceServer下的Scope给Client
       *
       * @param request AuthorizeResourceServerScopesToClientRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AuthorizeResourceServerScopesToClientResponse
       */
      Models::AuthorizeResourceServerScopesToClientResponse authorizeResourceServerScopesToClientWithOptions(const Models::AuthorizeResourceServerScopesToClientRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 授权指定ResourceServer下的Scope给Client
       *
       * @param request AuthorizeResourceServerScopesToClientRequest
       * @return AuthorizeResourceServerScopesToClientResponse
       */
      Models::AuthorizeResourceServerScopesToClientResponse authorizeResourceServerScopesToClient(const Models::AuthorizeResourceServerScopesToClientRequest &request);

      /**
       * @summary 授予组ResourceServerScope权限
       *
       * @param request AuthorizeResourceServerScopesToGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AuthorizeResourceServerScopesToGroupResponse
       */
      Models::AuthorizeResourceServerScopesToGroupResponse authorizeResourceServerScopesToGroupWithOptions(const Models::AuthorizeResourceServerScopesToGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 授予组ResourceServerScope权限
       *
       * @param request AuthorizeResourceServerScopesToGroupRequest
       * @return AuthorizeResourceServerScopesToGroupResponse
       */
      Models::AuthorizeResourceServerScopesToGroupResponse authorizeResourceServerScopesToGroup(const Models::AuthorizeResourceServerScopesToGroupRequest &request);

      /**
       * @summary 授予组织ResourceServerScope权限
       *
       * @param request AuthorizeResourceServerScopesToOrganizationalUnitRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AuthorizeResourceServerScopesToOrganizationalUnitResponse
       */
      Models::AuthorizeResourceServerScopesToOrganizationalUnitResponse authorizeResourceServerScopesToOrganizationalUnitWithOptions(const Models::AuthorizeResourceServerScopesToOrganizationalUnitRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 授予组织ResourceServerScope权限
       *
       * @param request AuthorizeResourceServerScopesToOrganizationalUnitRequest
       * @return AuthorizeResourceServerScopesToOrganizationalUnitResponse
       */
      Models::AuthorizeResourceServerScopesToOrganizationalUnitResponse authorizeResourceServerScopesToOrganizationalUnit(const Models::AuthorizeResourceServerScopesToOrganizationalUnitRequest &request);

      /**
       * @summary 授予用户ResourceServerScope权限
       *
       * @param request AuthorizeResourceServerScopesToUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AuthorizeResourceServerScopesToUserResponse
       */
      Models::AuthorizeResourceServerScopesToUserResponse authorizeResourceServerScopesToUserWithOptions(const Models::AuthorizeResourceServerScopesToUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 授予用户ResourceServerScope权限
       *
       * @param request AuthorizeResourceServerScopesToUserRequest
       * @return AuthorizeResourceServerScopesToUserResponse
       */
      Models::AuthorizeResourceServerScopesToUserResponse authorizeResourceServerScopesToUser(const Models::AuthorizeResourceServerScopesToUserRequest &request);

      /**
       * @summary 授权指定ResourceServer给Client
       *
       * @param request AuthorizeResourceServerToClientRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AuthorizeResourceServerToClientResponse
       */
      Models::AuthorizeResourceServerToClientResponse authorizeResourceServerToClientWithOptions(const Models::AuthorizeResourceServerToClientRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 授权指定ResourceServer给Client
       *
       * @param request AuthorizeResourceServerToClientRequest
       * @return AuthorizeResourceServerToClientResponse
       */
      Models::AuthorizeResourceServerToClientResponse authorizeResourceServerToClient(const Models::AuthorizeResourceServerToClientRequest &request);

      /**
       * @summary 绑定三方登录账户
       *
       * @param request BindUserAuthnSourceMappingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BindUserAuthnSourceMappingResponse
       */
      Models::BindUserAuthnSourceMappingResponse bindUserAuthnSourceMappingWithOptions(const Models::BindUserAuthnSourceMappingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 绑定三方登录账户
       *
       * @param request BindUserAuthnSourceMappingRequest
       * @return BindUserAuthnSourceMappingResponse
       */
      Models::BindUserAuthnSourceMappingResponse bindUserAuthnSourceMapping(const Models::BindUserAuthnSourceMappingRequest &request);

      /**
       * @summary 检查应用同步主组织是否在应用同步范围
       *
       * @param request CheckApplicationProvisioningUserPrimaryOrganizationalUnitRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckApplicationProvisioningUserPrimaryOrganizationalUnitResponse
       */
      Models::CheckApplicationProvisioningUserPrimaryOrganizationalUnitResponse checkApplicationProvisioningUserPrimaryOrganizationalUnitWithOptions(const Models::CheckApplicationProvisioningUserPrimaryOrganizationalUnitRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 检查应用同步主组织是否在应用同步范围
       *
       * @param request CheckApplicationProvisioningUserPrimaryOrganizationalUnitRequest
       * @return CheckApplicationProvisioningUserPrimaryOrganizationalUnitResponse
       */
      Models::CheckApplicationProvisioningUserPrimaryOrganizationalUnitResponse checkApplicationProvisioningUserPrimaryOrganizationalUnit(const Models::CheckApplicationProvisioningUserPrimaryOrganizationalUnitRequest &request);

      /**
       * @summary 实例删除检查。
       *
       * @param request CheckInstanceForDeleteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckInstanceForDeleteResponse
       */
      Models::CheckInstanceForDeleteResponse checkInstanceForDeleteWithOptions(const Models::CheckInstanceForDeleteRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 实例删除检查。
       *
       * @param request CheckInstanceForDeleteRequest
       * @return CheckInstanceForDeleteResponse
       */
      Models::CheckInstanceForDeleteResponse checkInstanceForDelete(const Models::CheckInstanceForDeleteRequest &request);

      /**
       * @summary 判断实例是否具有某个模块的功能
       *
       * @param request CheckInstanceModuleStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckInstanceModuleStatusResponse
       */
      Models::CheckInstanceModuleStatusResponse checkInstanceModuleStatusWithOptions(const Models::CheckInstanceModuleStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 判断实例是否具有某个模块的功能
       *
       * @param request CheckInstanceModuleStatusRequest
       * @return CheckInstanceModuleStatusResponse
       */
      Models::CheckInstanceModuleStatusResponse checkInstanceModuleStatus(const Models::CheckInstanceModuleStatusRequest &request);

      /**
       * @summary Adds an application to an Enterprise Identity Access Management (EIAM) instance of Identity as a Service (IDaaS).
       *
       * @description IDaaS EIAM supports the following two standard single sign-on (SSO) protocols for adding applications: SAML 2.0 and OIDC. You can select an SSO protocol based on your business requirements when you add an application. You cannot change the SSO protocol that you selected after the application is added.
       *
       * @param request CreateApplicationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateApplicationResponse
       */
      Models::CreateApplicationResponse createApplicationWithOptions(const Models::CreateApplicationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds an application to an Enterprise Identity Access Management (EIAM) instance of Identity as a Service (IDaaS).
       *
       * @description IDaaS EIAM supports the following two standard single sign-on (SSO) protocols for adding applications: SAML 2.0 and OIDC. You can select an SSO protocol based on your business requirements when you add an application. You cannot change the SSO protocol that you selected after the application is added.
       *
       * @param request CreateApplicationRequest
       * @return CreateApplicationResponse
       */
      Models::CreateApplicationResponse createApplication(const Models::CreateApplicationRequest &request);

      /**
       * @summary Creates a client key for an Employee Identity and Access Management (EIAM) application. An EIAM application can have up to two client keys.
       *
       * @param request CreateApplicationClientSecretRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateApplicationClientSecretResponse
       */
      Models::CreateApplicationClientSecretResponse createApplicationClientSecretWithOptions(const Models::CreateApplicationClientSecretRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a client key for an Employee Identity and Access Management (EIAM) application. An EIAM application can have up to two client keys.
       *
       * @param request CreateApplicationClientSecretRequest
       * @return CreateApplicationClientSecretResponse
       */
      Models::CreateApplicationClientSecretResponse createApplicationClientSecret(const Models::CreateApplicationClientSecretRequest &request);

      /**
       * @summary 创建应用联邦凭证
       *
       * @param request CreateApplicationFederatedCredentialRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateApplicationFederatedCredentialResponse
       */
      Models::CreateApplicationFederatedCredentialResponse createApplicationFederatedCredentialWithOptions(const Models::CreateApplicationFederatedCredentialRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建应用联邦凭证
       *
       * @param request CreateApplicationFederatedCredentialRequest
       * @return CreateApplicationFederatedCredentialResponse
       */
      Models::CreateApplicationFederatedCredentialResponse createApplicationFederatedCredential(const Models::CreateApplicationFederatedCredentialRequest &request);

      /**
       * @summary 创建应用角色
       *
       * @param request CreateApplicationRoleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateApplicationRoleResponse
       */
      Models::CreateApplicationRoleResponse createApplicationRoleWithOptions(const Models::CreateApplicationRoleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建应用角色
       *
       * @param request CreateApplicationRoleRequest
       * @return CreateApplicationRoleResponse
       */
      Models::CreateApplicationRoleResponse createApplicationRole(const Models::CreateApplicationRoleRequest &request);

      /**
       * @summary 创建应用Token
       *
       * @param request CreateApplicationTokenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateApplicationTokenResponse
       */
      Models::CreateApplicationTokenResponse createApplicationTokenWithOptions(const Models::CreateApplicationTokenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建应用Token
       *
       * @param request CreateApplicationTokenRequest
       * @return CreateApplicationTokenResponse
       */
      Models::CreateApplicationTokenResponse createApplicationToken(const Models::CreateApplicationTokenRequest &request);

      /**
       * @summary 创建授权资源
       *
       * @param request CreateAuthorizationResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAuthorizationResourceResponse
       */
      Models::CreateAuthorizationResourceResponse createAuthorizationResourceWithOptions(const Models::CreateAuthorizationResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建授权资源
       *
       * @param request CreateAuthorizationResourceRequest
       * @return CreateAuthorizationResourceResponse
       */
      Models::CreateAuthorizationResourceResponse createAuthorizationResource(const Models::CreateAuthorizationResourceRequest &request);

      /**
       * @summary 创建授权规则
       *
       * @param request CreateAuthorizationRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAuthorizationRuleResponse
       */
      Models::CreateAuthorizationRuleResponse createAuthorizationRuleWithOptions(const Models::CreateAuthorizationRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建授权规则
       *
       * @param request CreateAuthorizationRuleRequest
       * @return CreateAuthorizationRuleResponse
       */
      Models::CreateAuthorizationRuleResponse createAuthorizationRule(const Models::CreateAuthorizationRuleRequest &request);

      /**
       * @summary 创建品牌
       *
       * @param request CreateBrandRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateBrandResponse
       */
      Models::CreateBrandResponse createBrandWithOptions(const Models::CreateBrandRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建品牌
       *
       * @param request CreateBrandRequest
       * @return CreateBrandResponse
       */
      Models::CreateBrandResponse createBrand(const Models::CreateBrandRequest &request);

      /**
       * @summary 创建应用ClientPublicKey
       *
       * @param request CreateClientPublicKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateClientPublicKeyResponse
       */
      Models::CreateClientPublicKeyResponse createClientPublicKeyWithOptions(const Models::CreateClientPublicKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建应用ClientPublicKey
       *
       * @param request CreateClientPublicKeyRequest
       * @return CreateClientPublicKeyResponse
       */
      Models::CreateClientPublicKeyResponse createClientPublicKey(const Models::CreateClientPublicKeyRequest &request);

      /**
       * @summary 创建云账号
       *
       * @param request CreateCloudAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCloudAccountResponse
       */
      Models::CreateCloudAccountResponse createCloudAccountWithOptions(const Models::CreateCloudAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建云账号
       *
       * @param request CreateCloudAccountRequest
       * @return CreateCloudAccountResponse
       */
      Models::CreateCloudAccountResponse createCloudAccount(const Models::CreateCloudAccountRequest &request);

      /**
       * @summary 创建云角色
       *
       * @param request CreateCloudAccountRoleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCloudAccountRoleResponse
       */
      Models::CreateCloudAccountRoleResponse createCloudAccountRoleWithOptions(const Models::CreateCloudAccountRoleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建云角色
       *
       * @param request CreateCloudAccountRoleRequest
       * @return CreateCloudAccountRoleResponse
       */
      Models::CreateCloudAccountRoleResponse createCloudAccountRole(const Models::CreateCloudAccountRoleRequest &request);

      /**
       * @summary Create Conditional Access Policy
       *
       * @description Create Conditional Access Policy
       *
       * @param request CreateConditionalAccessPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateConditionalAccessPolicyResponse
       */
      Models::CreateConditionalAccessPolicyResponse createConditionalAccessPolicyWithOptions(const Models::CreateConditionalAccessPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create Conditional Access Policy
       *
       * @description Create Conditional Access Policy
       *
       * @param request CreateConditionalAccessPolicyRequest
       * @return CreateConditionalAccessPolicyResponse
       */
      Models::CreateConditionalAccessPolicyResponse createConditionalAccessPolicy(const Models::CreateConditionalAccessPolicyRequest &request);

      /**
       * @summary 创建扩展字段
       *
       * @param request CreateCustomFieldRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCustomFieldResponse
       */
      Models::CreateCustomFieldResponse createCustomFieldWithOptions(const Models::CreateCustomFieldRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建扩展字段
       *
       * @param request CreateCustomFieldRequest
       * @return CreateCustomFieldResponse
       */
      Models::CreateCustomFieldResponse createCustomField(const Models::CreateCustomFieldRequest &request);

      /**
       * @summary 创建自定义条款
       *
       * @param request CreateCustomPrivacyPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCustomPrivacyPolicyResponse
       */
      Models::CreateCustomPrivacyPolicyResponse createCustomPrivacyPolicyWithOptions(const Models::CreateCustomPrivacyPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建自定义条款
       *
       * @param request CreateCustomPrivacyPolicyRequest
       * @return CreateCustomPrivacyPolicyResponse
       */
      Models::CreateCustomPrivacyPolicyResponse createCustomPrivacyPolicy(const Models::CreateCustomPrivacyPolicyRequest &request);

      /**
       * @summary Creates a custom domain name for an Employee Identity and Access Management (EIAM) instance.
       *
       * @param request CreateDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDomainResponse
       */
      Models::CreateDomainResponse createDomainWithOptions(const Models::CreateDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a custom domain name for an Employee Identity and Access Management (EIAM) instance.
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
       * @summary 创建联邦凭证提供方
       *
       * @param request CreateFederatedCredentialProviderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateFederatedCredentialProviderResponse
       */
      Models::CreateFederatedCredentialProviderResponse createFederatedCredentialProviderWithOptions(const Models::CreateFederatedCredentialProviderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建联邦凭证提供方
       *
       * @param request CreateFederatedCredentialProviderRequest
       * @return CreateFederatedCredentialProviderResponse
       */
      Models::CreateFederatedCredentialProviderResponse createFederatedCredentialProvider(const Models::CreateFederatedCredentialProviderRequest &request);

      /**
       * @summary Creates an account group in Identity as a Service (IDaaS) Employee Identity and Access Management (EIAM).
       *
       * @param request CreateGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateGroupResponse
       */
      Models::CreateGroupResponse createGroupWithOptions(const Models::CreateGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an account group in Identity as a Service (IDaaS) Employee Identity and Access Management (EIAM).
       *
       * @param request CreateGroupRequest
       * @return CreateGroupResponse
       */
      Models::CreateGroupResponse createGroup(const Models::CreateGroupRequest &request);

      /**
       * @summary Create Identity Provider
       *
       * @param request CreateIdentityProviderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateIdentityProviderResponse
       */
      Models::CreateIdentityProviderResponse createIdentityProviderWithOptions(const Models::CreateIdentityProviderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create Identity Provider
       *
       * @param request CreateIdentityProviderRequest
       * @return CreateIdentityProviderResponse
       */
      Models::CreateIdentityProviderResponse createIdentityProvider(const Models::CreateIdentityProviderRequest &request);

      /**
       * @summary 创建IdP状态检查任务
       *
       * @param request CreateIdentityProviderStatusCheckJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateIdentityProviderStatusCheckJobResponse
       */
      Models::CreateIdentityProviderStatusCheckJobResponse createIdentityProviderStatusCheckJobWithOptions(const Models::CreateIdentityProviderStatusCheckJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建IdP状态检查任务
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
       * @summary 为实例创建试用版 License
       *
       * @param request CreateInstanceTrialLicenseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateInstanceTrialLicenseResponse
       */
      Models::CreateInstanceTrialLicenseResponse createInstanceTrialLicenseWithOptions(const Models::CreateInstanceTrialLicenseRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 为实例创建试用版 License
       *
       * @param request CreateInstanceTrialLicenseRequest
       * @return CreateInstanceTrialLicenseResponse
       */
      Models::CreateInstanceTrialLicenseResponse createInstanceTrialLicense(const Models::CreateInstanceTrialLicenseRequest &request);

      /**
       * @summary Creates a dedicated endpoint.
       *
       * @param request CreateNetworkAccessEndpointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateNetworkAccessEndpointResponse
       */
      Models::CreateNetworkAccessEndpointResponse createNetworkAccessEndpointWithOptions(const Models::CreateNetworkAccessEndpointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a dedicated endpoint.
       *
       * @param request CreateNetworkAccessEndpointRequest
       * @return CreateNetworkAccessEndpointResponse
       */
      Models::CreateNetworkAccessEndpointResponse createNetworkAccessEndpoint(const Models::CreateNetworkAccessEndpointRequest &request);

      /**
       * @summary 创建网络区域对象
       *
       * @param request CreateNetworkZoneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateNetworkZoneResponse
       */
      Models::CreateNetworkZoneResponse createNetworkZoneWithOptions(const Models::CreateNetworkZoneRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建网络区域对象
       *
       * @param request CreateNetworkZoneRequest
       * @return CreateNetworkZoneResponse
       */
      Models::CreateNetworkZoneResponse createNetworkZone(const Models::CreateNetworkZoneRequest &request);

      /**
       * @summary Creates an organization in Identity as a Service (IDaaS) Employee Identity and Access Management (EIAM).
       *
       * @param request CreateOrganizationalUnitRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateOrganizationalUnitResponse
       */
      Models::CreateOrganizationalUnitResponse createOrganizationalUnitWithOptions(const Models::CreateOrganizationalUnitRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an organization in Identity as a Service (IDaaS) Employee Identity and Access Management (EIAM).
       *
       * @param request CreateOrganizationalUnitRequest
       * @return CreateOrganizationalUnitResponse
       */
      Models::CreateOrganizationalUnitResponse createOrganizationalUnit(const Models::CreateOrganizationalUnitRequest &request);

      /**
       * @summary 创建指定ResourceServer下的Scope
       *
       * @param request CreateResourceServerScopeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateResourceServerScopeResponse
       */
      Models::CreateResourceServerScopeResponse createResourceServerScopeWithOptions(const Models::CreateResourceServerScopeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建指定ResourceServer下的Scope
       *
       * @param request CreateResourceServerScopeRequest
       * @return CreateResourceServerScopeResponse
       */
      Models::CreateResourceServerScopeResponse createResourceServerScope(const Models::CreateResourceServerScopeRequest &request);

      /**
       * @summary Creates an account in an Identity as a Service (IDaaS) Enterprise Identity Access Management (EIAM) instance.
       *
       * @param request CreateUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateUserResponse
       */
      Models::CreateUserResponse createUserWithOptions(const Models::CreateUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an account in an Identity as a Service (IDaaS) Enterprise Identity Access Management (EIAM) instance.
       *
       * @param request CreateUserRequest
       * @return CreateUserResponse
       */
      Models::CreateUserResponse createUser(const Models::CreateUserRequest &request);

      /**
       * @summary Deletes an Employee Identity and Access Management (EIAM) application.
       *
       * @description Make sure that the EIAM application that you want to delete is not used before you delete the EIAM application. After you delete the EIAM application, all configurations are deleted and cannot be restored.
       *
       * @param request DeleteApplicationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteApplicationResponse
       */
      Models::DeleteApplicationResponse deleteApplicationWithOptions(const Models::DeleteApplicationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an Employee Identity and Access Management (EIAM) application.
       *
       * @description Make sure that the EIAM application that you want to delete is not used before you delete the EIAM application. After you delete the EIAM application, all configurations are deleted and cannot be restored.
       *
       * @param request DeleteApplicationRequest
       * @return DeleteApplicationResponse
       */
      Models::DeleteApplicationResponse deleteApplication(const Models::DeleteApplicationRequest &request);

      /**
       * @summary Deletes a client key for an Employee Identity and Access Management (EIAM) application.
       *
       * @param request DeleteApplicationClientSecretRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteApplicationClientSecretResponse
       */
      Models::DeleteApplicationClientSecretResponse deleteApplicationClientSecretWithOptions(const Models::DeleteApplicationClientSecretRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a client key for an Employee Identity and Access Management (EIAM) application.
       *
       * @param request DeleteApplicationClientSecretRequest
       * @return DeleteApplicationClientSecretResponse
       */
      Models::DeleteApplicationClientSecretResponse deleteApplicationClientSecret(const Models::DeleteApplicationClientSecretRequest &request);

      /**
       * @summary 删除应用联邦凭证
       *
       * @param request DeleteApplicationFederatedCredentialRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteApplicationFederatedCredentialResponse
       */
      Models::DeleteApplicationFederatedCredentialResponse deleteApplicationFederatedCredentialWithOptions(const Models::DeleteApplicationFederatedCredentialRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除应用联邦凭证
       *
       * @param request DeleteApplicationFederatedCredentialRequest
       * @return DeleteApplicationFederatedCredentialResponse
       */
      Models::DeleteApplicationFederatedCredentialResponse deleteApplicationFederatedCredential(const Models::DeleteApplicationFederatedCredentialRequest &request);

      /**
       * @summary 删除应用角色
       *
       * @param request DeleteApplicationRoleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteApplicationRoleResponse
       */
      Models::DeleteApplicationRoleResponse deleteApplicationRoleWithOptions(const Models::DeleteApplicationRoleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除应用角色
       *
       * @param request DeleteApplicationRoleRequest
       * @return DeleteApplicationRoleResponse
       */
      Models::DeleteApplicationRoleResponse deleteApplicationRole(const Models::DeleteApplicationRoleRequest &request);

      /**
       * @summary 删除ApplicationToken
       *
       * @param request DeleteApplicationTokenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteApplicationTokenResponse
       */
      Models::DeleteApplicationTokenResponse deleteApplicationTokenWithOptions(const Models::DeleteApplicationTokenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除ApplicationToken
       *
       * @param request DeleteApplicationTokenRequest
       * @return DeleteApplicationTokenResponse
       */
      Models::DeleteApplicationTokenResponse deleteApplicationToken(const Models::DeleteApplicationTokenRequest &request);

      /**
       * @summary 删除授权资源
       *
       * @param request DeleteAuthorizationResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAuthorizationResourceResponse
       */
      Models::DeleteAuthorizationResourceResponse deleteAuthorizationResourceWithOptions(const Models::DeleteAuthorizationResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除授权资源
       *
       * @param request DeleteAuthorizationResourceRequest
       * @return DeleteAuthorizationResourceResponse
       */
      Models::DeleteAuthorizationResourceResponse deleteAuthorizationResource(const Models::DeleteAuthorizationResourceRequest &request);

      /**
       * @summary 删除授权规则
       *
       * @param request DeleteAuthorizationRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAuthorizationRuleResponse
       */
      Models::DeleteAuthorizationRuleResponse deleteAuthorizationRuleWithOptions(const Models::DeleteAuthorizationRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除授权规则
       *
       * @param request DeleteAuthorizationRuleRequest
       * @return DeleteAuthorizationRuleResponse
       */
      Models::DeleteAuthorizationRuleResponse deleteAuthorizationRule(const Models::DeleteAuthorizationRuleRequest &request);

      /**
       * @summary 删除品牌
       *
       * @param request DeleteBrandRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteBrandResponse
       */
      Models::DeleteBrandResponse deleteBrandWithOptions(const Models::DeleteBrandRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除品牌
       *
       * @param request DeleteBrandRequest
       * @return DeleteBrandResponse
       */
      Models::DeleteBrandResponse deleteBrand(const Models::DeleteBrandRequest &request);

      /**
       * @summary 删除指定的应用ClientPublicKey
       *
       * @param request DeleteClientPublicKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteClientPublicKeyResponse
       */
      Models::DeleteClientPublicKeyResponse deleteClientPublicKeyWithOptions(const Models::DeleteClientPublicKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除指定的应用ClientPublicKey
       *
       * @param request DeleteClientPublicKeyRequest
       * @return DeleteClientPublicKeyResponse
       */
      Models::DeleteClientPublicKeyResponse deleteClientPublicKey(const Models::DeleteClientPublicKeyRequest &request);

      /**
       * @summary 删除云账号
       *
       * @param request DeleteCloudAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCloudAccountResponse
       */
      Models::DeleteCloudAccountResponse deleteCloudAccountWithOptions(const Models::DeleteCloudAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除云账号
       *
       * @param request DeleteCloudAccountRequest
       * @return DeleteCloudAccountResponse
       */
      Models::DeleteCloudAccountResponse deleteCloudAccount(const Models::DeleteCloudAccountRequest &request);

      /**
       * @summary 删除云角色
       *
       * @param request DeleteCloudAccountRoleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCloudAccountRoleResponse
       */
      Models::DeleteCloudAccountRoleResponse deleteCloudAccountRoleWithOptions(const Models::DeleteCloudAccountRoleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除云角色
       *
       * @param request DeleteCloudAccountRoleRequest
       * @return DeleteCloudAccountRoleResponse
       */
      Models::DeleteCloudAccountRoleResponse deleteCloudAccountRole(const Models::DeleteCloudAccountRoleRequest &request);

      /**
       * @summary Delete Conditional Access Policy
       *
       * @description When deleting a specified conditional access policy, please ensure that the policy is no longer in use. After deletion, all configuration data will be removed and cannot be recovered.
       *
       * @param request DeleteConditionalAccessPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteConditionalAccessPolicyResponse
       */
      Models::DeleteConditionalAccessPolicyResponse deleteConditionalAccessPolicyWithOptions(const Models::DeleteConditionalAccessPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete Conditional Access Policy
       *
       * @description When deleting a specified conditional access policy, please ensure that the policy is no longer in use. After deletion, all configuration data will be removed and cannot be recovered.
       *
       * @param request DeleteConditionalAccessPolicyRequest
       * @return DeleteConditionalAccessPolicyResponse
       */
      Models::DeleteConditionalAccessPolicyResponse deleteConditionalAccessPolicy(const Models::DeleteConditionalAccessPolicyRequest &request);

      /**
       * @summary 删除扩展字段
       *
       * @param request DeleteCustomFieldRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCustomFieldResponse
       */
      Models::DeleteCustomFieldResponse deleteCustomFieldWithOptions(const Models::DeleteCustomFieldRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除扩展字段
       *
       * @param request DeleteCustomFieldRequest
       * @return DeleteCustomFieldResponse
       */
      Models::DeleteCustomFieldResponse deleteCustomField(const Models::DeleteCustomFieldRequest &request);

      /**
       * @summary 删除自定义条款
       *
       * @param request DeleteCustomPrivacyPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCustomPrivacyPolicyResponse
       */
      Models::DeleteCustomPrivacyPolicyResponse deleteCustomPrivacyPolicyWithOptions(const Models::DeleteCustomPrivacyPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除自定义条款
       *
       * @param request DeleteCustomPrivacyPolicyRequest
       * @return DeleteCustomPrivacyPolicyResponse
       */
      Models::DeleteCustomPrivacyPolicyResponse deleteCustomPrivacyPolicy(const Models::DeleteCustomPrivacyPolicyRequest &request);

      /**
       * @summary Deletes a custom domain name of an Employee Identity and Access Management (EIAM) instance. You cannot delete the initial domain name and default domain name of the instance.
       *
       * @param request DeleteDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDomainResponse
       */
      Models::DeleteDomainResponse deleteDomainWithOptions(const Models::DeleteDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a custom domain name of an Employee Identity and Access Management (EIAM) instance. You cannot delete the initial domain name and default domain name of the instance.
       *
       * @param request DeleteDomainRequest
       * @return DeleteDomainResponse
       */
      Models::DeleteDomainResponse deleteDomain(const Models::DeleteDomainRequest &request);

      /**
       * @summary Deletes a proxy token for a domain name of an Employee Identity and Access Management (EIAM) instance. Only the proxy tokens in the disabled state can be deleted.
       *
       * @param request DeleteDomainProxyTokenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDomainProxyTokenResponse
       */
      Models::DeleteDomainProxyTokenResponse deleteDomainProxyTokenWithOptions(const Models::DeleteDomainProxyTokenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a proxy token for a domain name of an Employee Identity and Access Management (EIAM) instance. Only the proxy tokens in the disabled state can be deleted.
       *
       * @param request DeleteDomainProxyTokenRequest
       * @return DeleteDomainProxyTokenResponse
       */
      Models::DeleteDomainProxyTokenResponse deleteDomainProxyToken(const Models::DeleteDomainProxyTokenRequest &request);

      /**
       * @summary 删除联邦凭证提供方
       *
       * @param request DeleteFederatedCredentialProviderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteFederatedCredentialProviderResponse
       */
      Models::DeleteFederatedCredentialProviderResponse deleteFederatedCredentialProviderWithOptions(const Models::DeleteFederatedCredentialProviderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除联邦凭证提供方
       *
       * @param request DeleteFederatedCredentialProviderRequest
       * @return DeleteFederatedCredentialProviderResponse
       */
      Models::DeleteFederatedCredentialProviderResponse deleteFederatedCredentialProvider(const Models::DeleteFederatedCredentialProviderRequest &request);

      /**
       * @summary Deletes the information of an account group in Identity as a Service (IDaaS) Employee Identity and Access Management (EIAM).
       *
       * @param request DeleteGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteGroupResponse
       */
      Models::DeleteGroupResponse deleteGroupWithOptions(const Models::DeleteGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the information of an account group in Identity as a Service (IDaaS) Employee Identity and Access Management (EIAM).
       *
       * @param request DeleteGroupRequest
       * @return DeleteGroupResponse
       */
      Models::DeleteGroupResponse deleteGroup(const Models::DeleteGroupRequest &request);

      /**
       * @summary Delete identity provider
       *
       * @param request DeleteIdentityProviderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteIdentityProviderResponse
       */
      Models::DeleteIdentityProviderResponse deleteIdentityProviderWithOptions(const Models::DeleteIdentityProviderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete identity provider
       *
       * @param request DeleteIdentityProviderRequest
       * @return DeleteIdentityProviderResponse
       */
      Models::DeleteIdentityProviderResponse deleteIdentityProvider(const Models::DeleteIdentityProviderRequest &request);

      /**
       * @summary Deletes an Employee Identity and Access Management (EIAM) instance of Identity as a Service (IDaaS) that you do not need.
       *
       * @description Make sure that the instance to be deleted is no longer used. If the instance is deleted, all data related to the instance will be deleted.
       *
       * @param request DeleteInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteInstanceResponse
       */
      Models::DeleteInstanceResponse deleteInstanceWithOptions(const Models::DeleteInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an Employee Identity and Access Management (EIAM) instance of Identity as a Service (IDaaS) that you do not need.
       *
       * @description Make sure that the instance to be deleted is no longer used. If the instance is deleted, all data related to the instance will be deleted.
       *
       * @param request DeleteInstanceRequest
       * @return DeleteInstanceResponse
       */
      Models::DeleteInstanceResponse deleteInstance(const Models::DeleteInstanceRequest &request);

      /**
       * @summary Delete a network endpoint of a specific type.
       *
       * @param request DeleteNetworkAccessEndpointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteNetworkAccessEndpointResponse
       */
      Models::DeleteNetworkAccessEndpointResponse deleteNetworkAccessEndpointWithOptions(const Models::DeleteNetworkAccessEndpointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete a network endpoint of a specific type.
       *
       * @param request DeleteNetworkAccessEndpointRequest
       * @return DeleteNetworkAccessEndpointResponse
       */
      Models::DeleteNetworkAccessEndpointResponse deleteNetworkAccessEndpoint(const Models::DeleteNetworkAccessEndpointRequest &request);

      /**
       * @summary 删除网络区域对象
       *
       * @param request DeleteNetworkZoneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteNetworkZoneResponse
       */
      Models::DeleteNetworkZoneResponse deleteNetworkZoneWithOptions(const Models::DeleteNetworkZoneRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除网络区域对象
       *
       * @param request DeleteNetworkZoneRequest
       * @return DeleteNetworkZoneResponse
       */
      Models::DeleteNetworkZoneResponse deleteNetworkZone(const Models::DeleteNetworkZoneRequest &request);

      /**
       * @summary Deletes an organization in Identity as a Service (IDaaS) Employee Identity and Access Management (EIAM). If the organization has EIAM accounts or child organizations, the delete operation fails.
       *
       * @param request DeleteOrganizationalUnitRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteOrganizationalUnitResponse
       */
      Models::DeleteOrganizationalUnitResponse deleteOrganizationalUnitWithOptions(const Models::DeleteOrganizationalUnitRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an organization in Identity as a Service (IDaaS) Employee Identity and Access Management (EIAM). If the organization has EIAM accounts or child organizations, the delete operation fails.
       *
       * @param request DeleteOrganizationalUnitRequest
       * @return DeleteOrganizationalUnitResponse
       */
      Models::DeleteOrganizationalUnitResponse deleteOrganizationalUnit(const Models::DeleteOrganizationalUnitRequest &request);

      /**
       * @summary Deletes information about an organization and forcefully deletes all accounts and sub-organizations in the organization.
       *
       * @param request DeleteOrganizationalUnitChildrenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteOrganizationalUnitChildrenResponse
       */
      Models::DeleteOrganizationalUnitChildrenResponse deleteOrganizationalUnitChildrenWithOptions(const Models::DeleteOrganizationalUnitChildrenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes information about an organization and forcefully deletes all accounts and sub-organizations in the organization.
       *
       * @param request DeleteOrganizationalUnitChildrenRequest
       * @return DeleteOrganizationalUnitChildrenResponse
       */
      Models::DeleteOrganizationalUnitChildrenResponse deleteOrganizationalUnitChildren(const Models::DeleteOrganizationalUnitChildrenRequest &request);

      /**
       * @summary 删除指定ResourceServer下的Scope
       *
       * @param request DeleteResourceServerScopeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteResourceServerScopeResponse
       */
      Models::DeleteResourceServerScopeResponse deleteResourceServerScopeWithOptions(const Models::DeleteResourceServerScopeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除指定ResourceServer下的Scope
       *
       * @param request DeleteResourceServerScopeRequest
       * @return DeleteResourceServerScopeResponse
       */
      Models::DeleteResourceServerScopeResponse deleteResourceServerScope(const Models::DeleteResourceServerScopeRequest &request);

      /**
       * @summary Deletes an Employee Identity and Access Management (EIAM) account of Identity as a Service (IDaaS). The information related to the account is cleared.
       *
       * @param request DeleteUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteUserResponse
       */
      Models::DeleteUserResponse deleteUserWithOptions(const Models::DeleteUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an Employee Identity and Access Management (EIAM) account of Identity as a Service (IDaaS). The information related to the account is cleared.
       *
       * @param request DeleteUserRequest
       * @return DeleteUserResponse
       */
      Models::DeleteUserResponse deleteUser(const Models::DeleteUserRequest &request);

      /**
       * @summary 批量删除账号
       *
       * @param request DeleteUsersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteUsersResponse
       */
      Models::DeleteUsersResponse deleteUsersWithOptions(const Models::DeleteUsersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量删除账号
       *
       * @param request DeleteUsersRequest
       * @return DeleteUsersResponse
       */
      Models::DeleteUsersResponse deleteUsers(const Models::DeleteUsersRequest &request);

      /**
       * @summary 删除指定WebAuthn认证器名称
       *
       * @param request DeleteWebAuthnAuthenticatorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteWebAuthnAuthenticatorResponse
       */
      Models::DeleteWebAuthnAuthenticatorResponse deleteWebAuthnAuthenticatorWithOptions(const Models::DeleteWebAuthnAuthenticatorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除指定WebAuthn认证器名称
       *
       * @param request DeleteWebAuthnAuthenticatorRequest
       * @return DeleteWebAuthnAuthenticatorResponse
       */
      Models::DeleteWebAuthnAuthenticatorResponse deleteWebAuthnAuthenticator(const Models::DeleteWebAuthnAuthenticatorRequest &request);

      /**
       * @summary Disables an enabled Employee Identity and Access Management (EIAM) application. All features of the EIAM application cannot be used if you disable the EIAM application.
       *
       * @description All features of the EIAM application cannot be used if you disable the EIAM application, such as single sign-on (SSO) and account synchronization. Make sure that you acknowledge the risks of the delete operation.
       *
       * @param request DisableApplicationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableApplicationResponse
       */
      Models::DisableApplicationResponse disableApplicationWithOptions(const Models::DisableApplicationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables an enabled Employee Identity and Access Management (EIAM) application. All features of the EIAM application cannot be used if you disable the EIAM application.
       *
       * @description All features of the EIAM application cannot be used if you disable the EIAM application, such as single sign-on (SSO) and account synchronization. Make sure that you acknowledge the risks of the delete operation.
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
       * @summary 禁用应用联邦凭证
       *
       * @param request DisableApplicationFederatedCredentialRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableApplicationFederatedCredentialResponse
       */
      Models::DisableApplicationFederatedCredentialResponse disableApplicationFederatedCredentialWithOptions(const Models::DisableApplicationFederatedCredentialRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 禁用应用联邦凭证
       *
       * @param request DisableApplicationFederatedCredentialRequest
       * @return DisableApplicationFederatedCredentialResponse
       */
      Models::DisableApplicationFederatedCredentialResponse disableApplicationFederatedCredential(const Models::DisableApplicationFederatedCredentialRequest &request);

      /**
       * @summary 禁用M2M Client 能力
       *
       * @param request DisableApplicationM2MClientRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableApplicationM2MClientResponse
       */
      Models::DisableApplicationM2MClientResponse disableApplicationM2MClientWithOptions(const Models::DisableApplicationM2MClientRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 禁用M2M Client 能力
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
       * @summary 禁用ResourceServer能力
       *
       * @param request DisableApplicationResourceServerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableApplicationResourceServerResponse
       */
      Models::DisableApplicationResourceServerResponse disableApplicationResourceServerWithOptions(const Models::DisableApplicationResourceServerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 禁用ResourceServer能力
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
       * @summary 禁用应用Token
       *
       * @param request DisableApplicationTokenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableApplicationTokenResponse
       */
      Models::DisableApplicationTokenResponse disableApplicationTokenWithOptions(const Models::DisableApplicationTokenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 禁用应用Token
       *
       * @param request DisableApplicationTokenRequest
       * @return DisableApplicationTokenResponse
       */
      Models::DisableApplicationTokenResponse disableApplicationToken(const Models::DisableApplicationTokenRequest &request);

      /**
       * @summary 禁用授权规则
       *
       * @param request DisableAuthorizationRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableAuthorizationRuleResponse
       */
      Models::DisableAuthorizationRuleResponse disableAuthorizationRuleWithOptions(const Models::DisableAuthorizationRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 禁用授权规则
       *
       * @param request DisableAuthorizationRuleRequest
       * @return DisableAuthorizationRuleResponse
       */
      Models::DisableAuthorizationRuleResponse disableAuthorizationRule(const Models::DisableAuthorizationRuleRequest &request);

      /**
       * @summary 禁用品牌
       *
       * @param request DisableBrandRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableBrandResponse
       */
      Models::DisableBrandResponse disableBrandWithOptions(const Models::DisableBrandRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 禁用品牌
       *
       * @param request DisableBrandRequest
       * @return DisableBrandResponse
       */
      Models::DisableBrandResponse disableBrand(const Models::DisableBrandRequest &request);

      /**
       * @summary 禁用指定的应用ClientPublicKey
       *
       * @param request DisableClientPublicKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableClientPublicKeyResponse
       */
      Models::DisableClientPublicKeyResponse disableClientPublicKeyWithOptions(const Models::DisableClientPublicKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 禁用指定的应用ClientPublicKey
       *
       * @param request DisableClientPublicKeyRequest
       * @return DisableClientPublicKeyResponse
       */
      Models::DisableClientPublicKeyResponse disableClientPublicKey(const Models::DisableClientPublicKeyRequest &request);

      /**
       * @summary 禁用云角色
       *
       * @param request DisableCloudAccountRoleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableCloudAccountRoleResponse
       */
      Models::DisableCloudAccountRoleResponse disableCloudAccountRoleWithOptions(const Models::DisableCloudAccountRoleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 禁用云角色
       *
       * @param request DisableCloudAccountRoleRequest
       * @return DisableCloudAccountRoleResponse
       */
      Models::DisableCloudAccountRoleResponse disableCloudAccountRole(const Models::DisableCloudAccountRoleRequest &request);

      /**
       * @summary Disable Conditional Access Policy
       *
       * @description When changing a conditional access policy from an enabled state to a disabled state, the policy will no longer intercept. Please confirm that you are aware of the potential risks associated with this action.
       *
       * @param request DisableConditionalAccessPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableConditionalAccessPolicyResponse
       */
      Models::DisableConditionalAccessPolicyResponse disableConditionalAccessPolicyWithOptions(const Models::DisableConditionalAccessPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disable Conditional Access Policy
       *
       * @description When changing a conditional access policy from an enabled state to a disabled state, the policy will no longer intercept. Please confirm that you are aware of the potential risks associated with this action.
       *
       * @param request DisableConditionalAccessPolicyRequest
       * @return DisableConditionalAccessPolicyResponse
       */
      Models::DisableConditionalAccessPolicyResponse disableConditionalAccessPolicy(const Models::DisableConditionalAccessPolicyRequest &request);

      /**
       * @summary 禁用字段
       *
       * @param request DisableCustomFieldRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableCustomFieldResponse
       */
      Models::DisableCustomFieldResponse disableCustomFieldWithOptions(const Models::DisableCustomFieldRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 禁用字段
       *
       * @param request DisableCustomFieldRequest
       * @return DisableCustomFieldResponse
       */
      Models::DisableCustomFieldResponse disableCustomField(const Models::DisableCustomFieldRequest &request);

      /**
       * @summary 禁用自定义条款
       *
       * @param request DisableCustomPrivacyPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableCustomPrivacyPolicyResponse
       */
      Models::DisableCustomPrivacyPolicyResponse disableCustomPrivacyPolicyWithOptions(const Models::DisableCustomPrivacyPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 禁用自定义条款
       *
       * @param request DisableCustomPrivacyPolicyRequest
       * @return DisableCustomPrivacyPolicyResponse
       */
      Models::DisableCustomPrivacyPolicyResponse disableCustomPrivacyPolicy(const Models::DisableCustomPrivacyPolicyRequest &request);

      /**
       * @summary Disables a proxy token for a domain name of an Employee Identity and Access Management (EIAM) instance. After the proxy token is disabled, the domain name may not be used as expected.
       *
       * @param request DisableDomainProxyTokenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableDomainProxyTokenResponse
       */
      Models::DisableDomainProxyTokenResponse disableDomainProxyTokenWithOptions(const Models::DisableDomainProxyTokenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables a proxy token for a domain name of an Employee Identity and Access Management (EIAM) instance. After the proxy token is disabled, the domain name may not be used as expected.
       *
       * @param request DisableDomainProxyTokenRequest
       * @return DisableDomainProxyTokenResponse
       */
      Models::DisableDomainProxyTokenResponse disableDomainProxyToken(const Models::DisableDomainProxyTokenRequest &request);

      /**
       * @summary 禁用联邦凭证提供方
       *
       * @param request DisableFederatedCredentialProviderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableFederatedCredentialProviderResponse
       */
      Models::DisableFederatedCredentialProviderResponse disableFederatedCredentialProviderWithOptions(const Models::DisableFederatedCredentialProviderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 禁用联邦凭证提供方
       *
       * @param request DisableFederatedCredentialProviderRequest
       * @return DisableFederatedCredentialProviderResponse
       */
      Models::DisableFederatedCredentialProviderResponse disableFederatedCredentialProvider(const Models::DisableFederatedCredentialProviderRequest &request);

      /**
       * @summary 禁用高级配置
       *
       * @param request DisableIdentityProviderAdvancedAbilityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableIdentityProviderAdvancedAbilityResponse
       */
      Models::DisableIdentityProviderAdvancedAbilityResponse disableIdentityProviderAdvancedAbilityWithOptions(const Models::DisableIdentityProviderAdvancedAbilityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 禁用高级配置
       *
       * @param request DisableIdentityProviderAdvancedAbilityRequest
       * @return DisableIdentityProviderAdvancedAbilityResponse
       */
      Models::DisableIdentityProviderAdvancedAbilityResponse disableIdentityProviderAdvancedAbility(const Models::DisableIdentityProviderAdvancedAbilityRequest &request);

      /**
       * @summary 禁用认证
       *
       * @param request DisableIdentityProviderAuthnRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableIdentityProviderAuthnResponse
       */
      Models::DisableIdentityProviderAuthnResponse disableIdentityProviderAuthnWithOptions(const Models::DisableIdentityProviderAuthnRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 禁用认证
       *
       * @param request DisableIdentityProviderAuthnRequest
       * @return DisableIdentityProviderAuthnResponse
       */
      Models::DisableIdentityProviderAuthnResponse disableIdentityProviderAuthn(const Models::DisableIdentityProviderAuthnRequest &request);

      /**
       * @summary Disable identity provider synchronization
       *
       * @param request DisableIdentityProviderUdPullRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableIdentityProviderUdPullResponse
       */
      Models::DisableIdentityProviderUdPullResponse disableIdentityProviderUdPullWithOptions(const Models::DisableIdentityProviderUdPullRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disable identity provider synchronization
       *
       * @param request DisableIdentityProviderUdPullRequest
       * @return DisableIdentityProviderUdPullResponse
       */
      Models::DisableIdentityProviderUdPullResponse disableIdentityProviderUdPull(const Models::DisableIdentityProviderUdPullRequest &request);

      /**
       * @summary Disables the feature of automatically redirecting the initial domain name to the default domain name for an Employee Identity and Access Management (EIAM) instance. After the feature is disabled, users who visit the portal page by using the initial domain name are not redirected to the default domain name.
       *
       * @param request DisableInitDomainAutoRedirectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableInitDomainAutoRedirectResponse
       */
      Models::DisableInitDomainAutoRedirectResponse disableInitDomainAutoRedirectWithOptions(const Models::DisableInitDomainAutoRedirectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables the feature of automatically redirecting the initial domain name to the default domain name for an Employee Identity and Access Management (EIAM) instance. After the feature is disabled, users who visit the portal page by using the initial domain name are not redirected to the default domain name.
       *
       * @param request DisableInitDomainAutoRedirectRequest
       * @return DisableInitDomainAutoRedirectResponse
       */
      Models::DisableInitDomainAutoRedirectResponse disableInitDomainAutoRedirect(const Models::DisableInitDomainAutoRedirectRequest &request);

      /**
       * @summary 禁用内部认证源
       *
       * @param request DisableInternalAuthenticationSourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableInternalAuthenticationSourceResponse
       */
      Models::DisableInternalAuthenticationSourceResponse disableInternalAuthenticationSourceWithOptions(const Models::DisableInternalAuthenticationSourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 禁用内部认证源
       *
       * @param request DisableInternalAuthenticationSourceRequest
       * @return DisableInternalAuthenticationSourceResponse
       */
      Models::DisableInternalAuthenticationSourceResponse disableInternalAuthenticationSource(const Models::DisableInternalAuthenticationSourceRequest &request);

      /**
       * @summary 禁用资源服务器自定义主体
       *
       * @param request DisableResourceServerCustomSubjectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableResourceServerCustomSubjectResponse
       */
      Models::DisableResourceServerCustomSubjectResponse disableResourceServerCustomSubjectWithOptions(const Models::DisableResourceServerCustomSubjectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 禁用资源服务器自定义主体
       *
       * @param request DisableResourceServerCustomSubjectRequest
       * @return DisableResourceServerCustomSubjectResponse
       */
      Models::DisableResourceServerCustomSubjectResponse disableResourceServerCustomSubject(const Models::DisableResourceServerCustomSubjectRequest &request);

      /**
       * @summary Disables an Identity as a Service (IDaaS) Employee Identity and Access Management (EIAM) account. If the account is disabled, a success message is returned.
       *
       * @param request DisableUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableUserResponse
       */
      Models::DisableUserResponse disableUserWithOptions(const Models::DisableUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables an Identity as a Service (IDaaS) Employee Identity and Access Management (EIAM) account. If the account is disabled, a success message is returned.
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
       * @summary Enables the Developer API feature for an Employee Identity and Access Management (EIAM) application.
       *
       * @param request EnableApplicationApiInvokeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableApplicationApiInvokeResponse
       */
      Models::EnableApplicationApiInvokeResponse enableApplicationApiInvokeWithOptions(const Models::EnableApplicationApiInvokeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables the Developer API feature for an Employee Identity and Access Management (EIAM) application.
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
       * @summary 启用应用联邦凭证
       *
       * @param request EnableApplicationFederatedCredentialRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableApplicationFederatedCredentialResponse
       */
      Models::EnableApplicationFederatedCredentialResponse enableApplicationFederatedCredentialWithOptions(const Models::EnableApplicationFederatedCredentialRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 启用应用联邦凭证
       *
       * @param request EnableApplicationFederatedCredentialRequest
       * @return EnableApplicationFederatedCredentialResponse
       */
      Models::EnableApplicationFederatedCredentialResponse enableApplicationFederatedCredential(const Models::EnableApplicationFederatedCredentialRequest &request);

      /**
       * @summary 启用M2M Client 能力
       *
       * @param request EnableApplicationM2MClientRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableApplicationM2MClientResponse
       */
      Models::EnableApplicationM2MClientResponse enableApplicationM2MClientWithOptions(const Models::EnableApplicationM2MClientRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 启用M2M Client 能力
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
       * @summary 启用ResourceServer能力
       *
       * @param request EnableApplicationResourceServerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableApplicationResourceServerResponse
       */
      Models::EnableApplicationResourceServerResponse enableApplicationResourceServerWithOptions(const Models::EnableApplicationResourceServerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 启用ResourceServer能力
       *
       * @param request EnableApplicationResourceServerRequest
       * @return EnableApplicationResourceServerResponse
       */
      Models::EnableApplicationResourceServerResponse enableApplicationResourceServer(const Models::EnableApplicationResourceServerRequest &request);

      /**
       * @summary Enables the single sign-on (SSO) feature for an Employee Identity and Access Management (EIAM) application.
       *
       * @param request EnableApplicationSsoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableApplicationSsoResponse
       */
      Models::EnableApplicationSsoResponse enableApplicationSsoWithOptions(const Models::EnableApplicationSsoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables the single sign-on (SSO) feature for an Employee Identity and Access Management (EIAM) application.
       *
       * @param request EnableApplicationSsoRequest
       * @return EnableApplicationSsoResponse
       */
      Models::EnableApplicationSsoResponse enableApplicationSso(const Models::EnableApplicationSsoRequest &request);

      /**
       * @summary 启用应用Token
       *
       * @param request EnableApplicationTokenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableApplicationTokenResponse
       */
      Models::EnableApplicationTokenResponse enableApplicationTokenWithOptions(const Models::EnableApplicationTokenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 启用应用Token
       *
       * @param request EnableApplicationTokenRequest
       * @return EnableApplicationTokenResponse
       */
      Models::EnableApplicationTokenResponse enableApplicationToken(const Models::EnableApplicationTokenRequest &request);

      /**
       * @summary 启用授权规则
       *
       * @param request EnableAuthorizationRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableAuthorizationRuleResponse
       */
      Models::EnableAuthorizationRuleResponse enableAuthorizationRuleWithOptions(const Models::EnableAuthorizationRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 启用授权规则
       *
       * @param request EnableAuthorizationRuleRequest
       * @return EnableAuthorizationRuleResponse
       */
      Models::EnableAuthorizationRuleResponse enableAuthorizationRule(const Models::EnableAuthorizationRuleRequest &request);

      /**
       * @summary 启用品牌
       *
       * @param request EnableBrandRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableBrandResponse
       */
      Models::EnableBrandResponse enableBrandWithOptions(const Models::EnableBrandRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 启用品牌
       *
       * @param request EnableBrandRequest
       * @return EnableBrandResponse
       */
      Models::EnableBrandResponse enableBrand(const Models::EnableBrandRequest &request);

      /**
       * @summary 启用指定的应用ClientPublicKey
       *
       * @param request EnableClientPublicKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableClientPublicKeyResponse
       */
      Models::EnableClientPublicKeyResponse enableClientPublicKeyWithOptions(const Models::EnableClientPublicKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 启用指定的应用ClientPublicKey
       *
       * @param request EnableClientPublicKeyRequest
       * @return EnableClientPublicKeyResponse
       */
      Models::EnableClientPublicKeyResponse enableClientPublicKey(const Models::EnableClientPublicKeyRequest &request);

      /**
       * @summary 启用云角色
       *
       * @param request EnableCloudAccountRoleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableCloudAccountRoleResponse
       */
      Models::EnableCloudAccountRoleResponse enableCloudAccountRoleWithOptions(const Models::EnableCloudAccountRoleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 启用云角色
       *
       * @param request EnableCloudAccountRoleRequest
       * @return EnableCloudAccountRoleResponse
       */
      Models::EnableCloudAccountRoleResponse enableCloudAccountRole(const Models::EnableCloudAccountRoleRequest &request);

      /**
       * @summary Enable Conditional Access Policy
       *
       * @description When changing the status of a conditional access policy from enabled to disabled, the policy will no longer intercept. Please confirm that you are aware of the potential risks associated with this action.
       *
       * @param request EnableConditionalAccessPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableConditionalAccessPolicyResponse
       */
      Models::EnableConditionalAccessPolicyResponse enableConditionalAccessPolicyWithOptions(const Models::EnableConditionalAccessPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enable Conditional Access Policy
       *
       * @description When changing the status of a conditional access policy from enabled to disabled, the policy will no longer intercept. Please confirm that you are aware of the potential risks associated with this action.
       *
       * @param request EnableConditionalAccessPolicyRequest
       * @return EnableConditionalAccessPolicyResponse
       */
      Models::EnableConditionalAccessPolicyResponse enableConditionalAccessPolicy(const Models::EnableConditionalAccessPolicyRequest &request);

      /**
       * @summary 启用字段
       *
       * @param request EnableCustomFieldRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableCustomFieldResponse
       */
      Models::EnableCustomFieldResponse enableCustomFieldWithOptions(const Models::EnableCustomFieldRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 启用字段
       *
       * @param request EnableCustomFieldRequest
       * @return EnableCustomFieldResponse
       */
      Models::EnableCustomFieldResponse enableCustomField(const Models::EnableCustomFieldRequest &request);

      /**
       * @summary 启用自定义条款
       *
       * @param request EnableCustomPrivacyPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableCustomPrivacyPolicyResponse
       */
      Models::EnableCustomPrivacyPolicyResponse enableCustomPrivacyPolicyWithOptions(const Models::EnableCustomPrivacyPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 启用自定义条款
       *
       * @param request EnableCustomPrivacyPolicyRequest
       * @return EnableCustomPrivacyPolicyResponse
       */
      Models::EnableCustomPrivacyPolicyResponse enableCustomPrivacyPolicy(const Models::EnableCustomPrivacyPolicyRequest &request);

      /**
       * @summary Enables a proxy token for a domain name of an Employee Identity and Access Management (EIAM) instance. The proxy token is used to verify the security of the domain name.
       *
       * @param request EnableDomainProxyTokenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableDomainProxyTokenResponse
       */
      Models::EnableDomainProxyTokenResponse enableDomainProxyTokenWithOptions(const Models::EnableDomainProxyTokenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables a proxy token for a domain name of an Employee Identity and Access Management (EIAM) instance. The proxy token is used to verify the security of the domain name.
       *
       * @param request EnableDomainProxyTokenRequest
       * @return EnableDomainProxyTokenResponse
       */
      Models::EnableDomainProxyTokenResponse enableDomainProxyToken(const Models::EnableDomainProxyTokenRequest &request);

      /**
       * @summary 启用联邦凭证提供方
       *
       * @param request EnableFederatedCredentialProviderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableFederatedCredentialProviderResponse
       */
      Models::EnableFederatedCredentialProviderResponse enableFederatedCredentialProviderWithOptions(const Models::EnableFederatedCredentialProviderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 启用联邦凭证提供方
       *
       * @param request EnableFederatedCredentialProviderRequest
       * @return EnableFederatedCredentialProviderResponse
       */
      Models::EnableFederatedCredentialProviderResponse enableFederatedCredentialProvider(const Models::EnableFederatedCredentialProviderRequest &request);

      /**
       * @summary 启用高级配置
       *
       * @param request EnableIdentityProviderAdvancedAbilityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableIdentityProviderAdvancedAbilityResponse
       */
      Models::EnableIdentityProviderAdvancedAbilityResponse enableIdentityProviderAdvancedAbilityWithOptions(const Models::EnableIdentityProviderAdvancedAbilityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 启用高级配置
       *
       * @param request EnableIdentityProviderAdvancedAbilityRequest
       * @return EnableIdentityProviderAdvancedAbilityResponse
       */
      Models::EnableIdentityProviderAdvancedAbilityResponse enableIdentityProviderAdvancedAbility(const Models::EnableIdentityProviderAdvancedAbilityRequest &request);

      /**
       * @summary 启用认证
       *
       * @param request EnableIdentityProviderAuthnRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableIdentityProviderAuthnResponse
       */
      Models::EnableIdentityProviderAuthnResponse enableIdentityProviderAuthnWithOptions(const Models::EnableIdentityProviderAuthnRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 启用认证
       *
       * @param request EnableIdentityProviderAuthnRequest
       * @return EnableIdentityProviderAuthnResponse
       */
      Models::EnableIdentityProviderAuthnResponse enableIdentityProviderAuthn(const Models::EnableIdentityProviderAuthnRequest &request);

      /**
       * @summary Enable identity provider synchronization.
       *
       * @param request EnableIdentityProviderUdPullRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableIdentityProviderUdPullResponse
       */
      Models::EnableIdentityProviderUdPullResponse enableIdentityProviderUdPullWithOptions(const Models::EnableIdentityProviderUdPullRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enable identity provider synchronization.
       *
       * @param request EnableIdentityProviderUdPullRequest
       * @return EnableIdentityProviderUdPullResponse
       */
      Models::EnableIdentityProviderUdPullResponse enableIdentityProviderUdPull(const Models::EnableIdentityProviderUdPullRequest &request);

      /**
       * @summary Enables the feature of automatically redirecting the initial domain name to the default domain name for an Employee Identity and Access Management (EIAM) instance.
       *
       * @param request EnableInitDomainAutoRedirectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableInitDomainAutoRedirectResponse
       */
      Models::EnableInitDomainAutoRedirectResponse enableInitDomainAutoRedirectWithOptions(const Models::EnableInitDomainAutoRedirectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables the feature of automatically redirecting the initial domain name to the default domain name for an Employee Identity and Access Management (EIAM) instance.
       *
       * @param request EnableInitDomainAutoRedirectRequest
       * @return EnableInitDomainAutoRedirectResponse
       */
      Models::EnableInitDomainAutoRedirectResponse enableInitDomainAutoRedirect(const Models::EnableInitDomainAutoRedirectRequest &request);

      /**
       * @summary 启用内部认证源
       *
       * @param request EnableInternalAuthenticationSourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableInternalAuthenticationSourceResponse
       */
      Models::EnableInternalAuthenticationSourceResponse enableInternalAuthenticationSourceWithOptions(const Models::EnableInternalAuthenticationSourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 启用内部认证源
       *
       * @param request EnableInternalAuthenticationSourceRequest
       * @return EnableInternalAuthenticationSourceResponse
       */
      Models::EnableInternalAuthenticationSourceResponse enableInternalAuthenticationSource(const Models::EnableInternalAuthenticationSourceRequest &request);

      /**
       * @summary 启用资源服务器自定义主体
       *
       * @param request EnableResourceServerCustomSubjectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableResourceServerCustomSubjectResponse
       */
      Models::EnableResourceServerCustomSubjectResponse enableResourceServerCustomSubjectWithOptions(const Models::EnableResourceServerCustomSubjectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 启用资源服务器自定义主体
       *
       * @param request EnableResourceServerCustomSubjectRequest
       * @return EnableResourceServerCustomSubjectResponse
       */
      Models::EnableResourceServerCustomSubjectResponse enableResourceServerCustomSubject(const Models::EnableResourceServerCustomSubjectRequest &request);

      /**
       * @summary Enables an Employee Identity and Access Management (EIAM) account of Identity as a Service (IDaaS).
       *
       * @param request EnableUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableUserResponse
       */
      Models::EnableUserResponse enableUserWithOptions(const Models::EnableUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables an Employee Identity and Access Management (EIAM) account of Identity as a Service (IDaaS).
       *
       * @param request EnableUserRequest
       * @return EnableUserResponse
       */
      Models::EnableUserResponse enableUser(const Models::EnableUserRequest &request);

      /**
       * @summary 解析IdP Metadata信息。
       *
       * @param request ExecIdentityProviderMetadataUrlResolutionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExecIdentityProviderMetadataUrlResolutionResponse
       */
      Models::ExecIdentityProviderMetadataUrlResolutionResponse execIdentityProviderMetadataUrlResolutionWithOptions(const Models::ExecIdentityProviderMetadataUrlResolutionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 解析IdP Metadata信息。
       *
       * @param request ExecIdentityProviderMetadataUrlResolutionRequest
       * @return ExecIdentityProviderMetadataUrlResolutionResponse
       */
      Models::ExecIdentityProviderMetadataUrlResolutionResponse execIdentityProviderMetadataUrlResolution(const Models::ExecIdentityProviderMetadataUrlResolutionRequest &request);

      /**
       * @summary 生成文件导入结果下载地址
       *
       * @param request GenerateDownloadUrlForSynchronizationJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateDownloadUrlForSynchronizationJobResponse
       */
      Models::GenerateDownloadUrlForSynchronizationJobResponse generateDownloadUrlForSynchronizationJobWithOptions(const Models::GenerateDownloadUrlForSynchronizationJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 生成文件导入结果下载地址
       *
       * @param request GenerateDownloadUrlForSynchronizationJobRequest
       * @return GenerateDownloadUrlForSynchronizationJobResponse
       */
      Models::GenerateDownloadUrlForSynchronizationJobResponse generateDownloadUrlForSynchronizationJob(const Models::GenerateDownloadUrlForSynchronizationJobRequest &request);

      /**
       * @summary 生成文件导入模板
       *
       * @param request GenerateFileImportTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateFileImportTemplateResponse
       */
      Models::GenerateFileImportTemplateResponse generateFileImportTemplateWithOptions(const Models::GenerateFileImportTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 生成文件导入模板
       *
       * @param request GenerateFileImportTemplateRequest
       * @return GenerateFileImportTemplateResponse
       */
      Models::GenerateFileImportTemplateResponse generateFileImportTemplate(const Models::GenerateFileImportTemplateRequest &request);

      /**
       * @summary 生成 Oauth Token
       *
       * @param request GenerateOauthTokenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateOauthTokenResponse
       */
      Models::GenerateOauthTokenResponse generateOauthTokenWithOptions(const Models::GenerateOauthTokenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 生成 Oauth Token
       *
       * @param request GenerateOauthTokenRequest
       * @return GenerateOauthTokenResponse
       */
      Models::GenerateOauthTokenResponse generateOauthToken(const Models::GenerateOauthTokenRequest &request);

      /**
       * @summary 获取上传认证
       *
       * @param request GenerateUploadAuthRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateUploadAuthResponse
       */
      Models::GenerateUploadAuthResponse generateUploadAuthWithOptions(const Models::GenerateUploadAuthRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取上传认证
       *
       * @param request GenerateUploadAuthRequest
       * @return GenerateUploadAuthResponse
       */
      Models::GenerateUploadAuthResponse generateUploadAuth(const Models::GenerateUploadAuthRequest &request);

      /**
       * @summary Queries the details of an Employee Identity and Access Management (EIAM) application.
       *
       * @param request GetApplicationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetApplicationResponse
       */
      Models::GetApplicationResponse getApplicationWithOptions(const Models::GetApplicationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an Employee Identity and Access Management (EIAM) application.
       *
       * @param request GetApplicationRequest
       * @return GetApplicationResponse
       */
      Models::GetApplicationResponse getApplication(const Models::GetApplicationRequest &request);

      /**
       * @summary 获取应用高阶配置
       *
       * @param request GetApplicationAdvancedConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetApplicationAdvancedConfigResponse
       */
      Models::GetApplicationAdvancedConfigResponse getApplicationAdvancedConfigWithOptions(const Models::GetApplicationAdvancedConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取应用高阶配置
       *
       * @param request GetApplicationAdvancedConfigRequest
       * @return GetApplicationAdvancedConfigResponse
       */
      Models::GetApplicationAdvancedConfigResponse getApplicationAdvancedConfig(const Models::GetApplicationAdvancedConfigRequest &request);

      /**
       * @summary 获取应用联邦凭证
       *
       * @param request GetApplicationFederatedCredentialRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetApplicationFederatedCredentialResponse
       */
      Models::GetApplicationFederatedCredentialResponse getApplicationFederatedCredentialWithOptions(const Models::GetApplicationFederatedCredentialRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取应用联邦凭证
       *
       * @param request GetApplicationFederatedCredentialRequest
       * @return GetApplicationFederatedCredentialResponse
       */
      Models::GetApplicationFederatedCredentialResponse getApplicationFederatedCredential(const Models::GetApplicationFederatedCredentialRequest &request);

      /**
       * @summary Queries the permissions of the Developer API feature for an Employee Identity and Access Management (EIAM) application.
       *
       * @param request GetApplicationGrantScopeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetApplicationGrantScopeResponse
       */
      Models::GetApplicationGrantScopeResponse getApplicationGrantScopeWithOptions(const Models::GetApplicationGrantScopeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the permissions of the Developer API feature for an Employee Identity and Access Management (EIAM) application.
       *
       * @param request GetApplicationGrantScopeRequest
       * @return GetApplicationGrantScopeResponse
       */
      Models::GetApplicationGrantScopeResponse getApplicationGrantScope(const Models::GetApplicationGrantScopeRequest &request);

      /**
       * @summary Queries the configuration of the account synchronization feature for an application in Identity as a Service (IDaaS) Employee Identity and Access Management (EIAM).
       *
       * @param request GetApplicationProvisioningConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetApplicationProvisioningConfigResponse
       */
      Models::GetApplicationProvisioningConfigResponse getApplicationProvisioningConfigWithOptions(const Models::GetApplicationProvisioningConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configuration of the account synchronization feature for an application in Identity as a Service (IDaaS) Employee Identity and Access Management (EIAM).
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
       * @summary 查询指定应用同步配置
       *
       * @param request GetApplicationProvisioningUserPrimaryOrganizationalUnitRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetApplicationProvisioningUserPrimaryOrganizationalUnitResponse
       */
      Models::GetApplicationProvisioningUserPrimaryOrganizationalUnitResponse getApplicationProvisioningUserPrimaryOrganizationalUnitWithOptions(const Models::GetApplicationProvisioningUserPrimaryOrganizationalUnitRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询指定应用同步配置
       *
       * @param request GetApplicationProvisioningUserPrimaryOrganizationalUnitRequest
       * @return GetApplicationProvisioningUserPrimaryOrganizationalUnitResponse
       */
      Models::GetApplicationProvisioningUserPrimaryOrganizationalUnitResponse getApplicationProvisioningUserPrimaryOrganizationalUnit(const Models::GetApplicationProvisioningUserPrimaryOrganizationalUnitRequest &request);

      /**
       * @summary 获取角色信息
       *
       * @param request GetApplicationRoleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetApplicationRoleResponse
       */
      Models::GetApplicationRoleResponse getApplicationRoleWithOptions(const Models::GetApplicationRoleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取角色信息
       *
       * @param request GetApplicationRoleRequest
       * @return GetApplicationRoleResponse
       */
      Models::GetApplicationRoleResponse getApplicationRole(const Models::GetApplicationRoleRequest &request);

      /**
       * @summary Queries the single sign-on (SSO) configuration attributes of an application in Identity as a Service (IDaaS) Employee IAM (EIAM).
       *
       * @param request GetApplicationSsoConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetApplicationSsoConfigResponse
       */
      Models::GetApplicationSsoConfigResponse getApplicationSsoConfigWithOptions(const Models::GetApplicationSsoConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the single sign-on (SSO) configuration attributes of an application in Identity as a Service (IDaaS) Employee IAM (EIAM).
       *
       * @param request GetApplicationSsoConfigRequest
       * @return GetApplicationSsoConfigResponse
       */
      Models::GetApplicationSsoConfigResponse getApplicationSsoConfig(const Models::GetApplicationSsoConfigRequest &request);

      /**
       * @summary 获取应用模板信息
       *
       * @param request GetApplicationTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetApplicationTemplateResponse
       */
      Models::GetApplicationTemplateResponse getApplicationTemplateWithOptions(const Models::GetApplicationTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取应用模板信息
       *
       * @param request GetApplicationTemplateRequest
       * @return GetApplicationTemplateResponse
       */
      Models::GetApplicationTemplateResponse getApplicationTemplate(const Models::GetApplicationTemplateRequest &request);

      /**
       * @summary 获取授权资源信息
       *
       * @param request GetAuthorizationResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAuthorizationResourceResponse
       */
      Models::GetAuthorizationResourceResponse getAuthorizationResourceWithOptions(const Models::GetAuthorizationResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取授权资源信息
       *
       * @param request GetAuthorizationResourceRequest
       * @return GetAuthorizationResourceResponse
       */
      Models::GetAuthorizationResourceResponse getAuthorizationResource(const Models::GetAuthorizationResourceRequest &request);

      /**
       * @summary 获取授权规则信息
       *
       * @param request GetAuthorizationRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAuthorizationRuleResponse
       */
      Models::GetAuthorizationRuleResponse getAuthorizationRuleWithOptions(const Models::GetAuthorizationRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取授权规则信息
       *
       * @param request GetAuthorizationRuleRequest
       * @return GetAuthorizationRuleResponse
       */
      Models::GetAuthorizationRuleResponse getAuthorizationRule(const Models::GetAuthorizationRuleRequest &request);

      /**
       * @summary 获取品牌详情
       *
       * @param request GetBrandRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetBrandResponse
       */
      Models::GetBrandResponse getBrandWithOptions(const Models::GetBrandRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取品牌详情
       *
       * @param request GetBrandRequest
       * @return GetBrandResponse
       */
      Models::GetBrandResponse getBrand(const Models::GetBrandRequest &request);

      /**
       * @summary 查询指定应用ClientPublicKey
       *
       * @param request GetClientPublicKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetClientPublicKeyResponse
       */
      Models::GetClientPublicKeyResponse getClientPublicKeyWithOptions(const Models::GetClientPublicKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询指定应用ClientPublicKey
       *
       * @param request GetClientPublicKeyRequest
       * @return GetClientPublicKeyResponse
       */
      Models::GetClientPublicKeyResponse getClientPublicKey(const Models::GetClientPublicKeyRequest &request);

      /**
       * @summary 获取云账号
       *
       * @param request GetCloudAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCloudAccountResponse
       */
      Models::GetCloudAccountResponse getCloudAccountWithOptions(const Models::GetCloudAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取云账号
       *
       * @param request GetCloudAccountRequest
       * @return GetCloudAccountResponse
       */
      Models::GetCloudAccountResponse getCloudAccount(const Models::GetCloudAccountRequest &request);

      /**
       * @summary 获取云角色
       *
       * @param request GetCloudAccountRoleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCloudAccountRoleResponse
       */
      Models::GetCloudAccountRoleResponse getCloudAccountRoleWithOptions(const Models::GetCloudAccountRoleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取云角色
       *
       * @param request GetCloudAccountRoleRequest
       * @return GetCloudAccountRoleResponse
       */
      Models::GetCloudAccountRoleResponse getCloudAccountRole(const Models::GetCloudAccountRoleRequest &request);

      /**
       * @summary Get Conditional Access Policy
       *
       * @description Query Conditional Access Policy
       *
       * @param request GetConditionalAccessPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetConditionalAccessPolicyResponse
       */
      Models::GetConditionalAccessPolicyResponse getConditionalAccessPolicyWithOptions(const Models::GetConditionalAccessPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get Conditional Access Policy
       *
       * @description Query Conditional Access Policy
       *
       * @param request GetConditionalAccessPolicyRequest
       * @return GetConditionalAccessPolicyResponse
       */
      Models::GetConditionalAccessPolicyResponse getConditionalAccessPolicy(const Models::GetConditionalAccessPolicyRequest &request);

      /**
       * @summary 获取扩展字段信息
       *
       * @param request GetCustomFieldRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCustomFieldResponse
       */
      Models::GetCustomFieldResponse getCustomFieldWithOptions(const Models::GetCustomFieldRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取扩展字段信息
       *
       * @param request GetCustomFieldRequest
       * @return GetCustomFieldResponse
       */
      Models::GetCustomFieldResponse getCustomField(const Models::GetCustomFieldRequest &request);

      /**
       * @summary 获取自定义条款
       *
       * @param request GetCustomPrivacyPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCustomPrivacyPolicyResponse
       */
      Models::GetCustomPrivacyPolicyResponse getCustomPrivacyPolicyWithOptions(const Models::GetCustomPrivacyPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取自定义条款
       *
       * @param request GetCustomPrivacyPolicyRequest
       * @return GetCustomPrivacyPolicyResponse
       */
      Models::GetCustomPrivacyPolicyResponse getCustomPrivacyPolicy(const Models::GetCustomPrivacyPolicyRequest &request);

      /**
       * @summary Queries the information about a domain name of an Employee Identity and Access Management (EIAM) instance.
       *
       * @param request GetDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDomainResponse
       */
      Models::GetDomainResponse getDomainWithOptions(const Models::GetDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a domain name of an Employee Identity and Access Management (EIAM) instance.
       *
       * @param request GetDomainRequest
       * @return GetDomainResponse
       */
      Models::GetDomainResponse getDomain(const Models::GetDomainRequest &request);

      /**
       * @summary Queries the domain name system (DNS) challenge records of a domain name of an Employee Identity and Access Management (EIAM) instance. The generated records are used to verify the ownership of the domain name.
       *
       * @param request GetDomainDnsChallengeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDomainDnsChallengeResponse
       */
      Models::GetDomainDnsChallengeResponse getDomainDnsChallengeWithOptions(const Models::GetDomainDnsChallengeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the domain name system (DNS) challenge records of a domain name of an Employee Identity and Access Management (EIAM) instance. The generated records are used to verify the ownership of the domain name.
       *
       * @param request GetDomainDnsChallengeRequest
       * @return GetDomainDnsChallengeResponse
       */
      Models::GetDomainDnsChallengeResponse getDomainDnsChallenge(const Models::GetDomainDnsChallengeRequest &request);

      /**
       * @summary 获取联邦凭证提供方
       *
       * @param request GetFederatedCredentialProviderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetFederatedCredentialProviderResponse
       */
      Models::GetFederatedCredentialProviderResponse getFederatedCredentialProviderWithOptions(const Models::GetFederatedCredentialProviderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取联邦凭证提供方
       *
       * @param request GetFederatedCredentialProviderRequest
       * @return GetFederatedCredentialProviderResponse
       */
      Models::GetFederatedCredentialProviderResponse getFederatedCredentialProvider(const Models::GetFederatedCredentialProviderRequest &request);

      /**
       * @summary Queries the forgot password configurations of an Employee Identity and Access Management (EIAM) instance of Identity as a Service (IDaaS).
       *
       * @param request GetForgetPasswordConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetForgetPasswordConfigurationResponse
       */
      Models::GetForgetPasswordConfigurationResponse getForgetPasswordConfigurationWithOptions(const Models::GetForgetPasswordConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the forgot password configurations of an Employee Identity and Access Management (EIAM) instance of Identity as a Service (IDaaS).
       *
       * @param request GetForgetPasswordConfigurationRequest
       * @return GetForgetPasswordConfigurationResponse
       */
      Models::GetForgetPasswordConfigurationResponse getForgetPasswordConfiguration(const Models::GetForgetPasswordConfigurationRequest &request);

      /**
       * @summary Queries the information of an account group in Identity as a Service (IDaaS) Employee Identity and Access Management (EIAM).
       *
       * @param request GetGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetGroupResponse
       */
      Models::GetGroupResponse getGroupWithOptions(const Models::GetGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information of an account group in Identity as a Service (IDaaS) Employee Identity and Access Management (EIAM).
       *
       * @param request GetGroupRequest
       * @return GetGroupResponse
       */
      Models::GetGroupResponse getGroup(const Models::GetGroupRequest &request);

      /**
       * @summary Get identity provider
       *
       * @param request GetIdentityProviderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetIdentityProviderResponse
       */
      Models::GetIdentityProviderResponse getIdentityProviderWithOptions(const Models::GetIdentityProviderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get identity provider
       *
       * @param request GetIdentityProviderRequest
       * @return GetIdentityProviderResponse
       */
      Models::GetIdentityProviderResponse getIdentityProvider(const Models::GetIdentityProviderRequest &request);

      /**
       * @summary 获取高级配置信息
       *
       * @param request GetIdentityProviderAdvancedConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetIdentityProviderAdvancedConfigurationResponse
       */
      Models::GetIdentityProviderAdvancedConfigurationResponse getIdentityProviderAdvancedConfigurationWithOptions(const Models::GetIdentityProviderAdvancedConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取高级配置信息
       *
       * @param request GetIdentityProviderAdvancedConfigurationRequest
       * @return GetIdentityProviderAdvancedConfigurationResponse
       */
      Models::GetIdentityProviderAdvancedConfigurationResponse getIdentityProviderAdvancedConfiguration(const Models::GetIdentityProviderAdvancedConfigurationRequest &request);

      /**
       * @summary 获取IdP检查任务
       *
       * @param request GetIdentityProviderStatusCheckJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetIdentityProviderStatusCheckJobResponse
       */
      Models::GetIdentityProviderStatusCheckJobResponse getIdentityProviderStatusCheckJobWithOptions(const Models::GetIdentityProviderStatusCheckJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取IdP检查任务
       *
       * @param request GetIdentityProviderStatusCheckJobRequest
       * @return GetIdentityProviderStatusCheckJobResponse
       */
      Models::GetIdentityProviderStatusCheckJobResponse getIdentityProviderStatusCheckJob(const Models::GetIdentityProviderStatusCheckJobRequest &request);

      /**
       * @summary Get IdP Inbound Synchronization Configuration Information
       *
       * @param request GetIdentityProviderUdPullConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetIdentityProviderUdPullConfigurationResponse
       */
      Models::GetIdentityProviderUdPullConfigurationResponse getIdentityProviderUdPullConfigurationWithOptions(const Models::GetIdentityProviderUdPullConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get IdP Inbound Synchronization Configuration Information
       *
       * @param request GetIdentityProviderUdPullConfigurationRequest
       * @return GetIdentityProviderUdPullConfigurationResponse
       */
      Models::GetIdentityProviderUdPullConfigurationResponse getIdentityProviderUdPullConfiguration(const Models::GetIdentityProviderUdPullConfigurationRequest &request);

      /**
       * @summary 获取IdP同步出配置
       *
       * @param request GetIdentityProviderUdPushConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetIdentityProviderUdPushConfigurationResponse
       */
      Models::GetIdentityProviderUdPushConfigurationResponse getIdentityProviderUdPushConfigurationWithOptions(const Models::GetIdentityProviderUdPushConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取IdP同步出配置
       *
       * @param request GetIdentityProviderUdPushConfigurationRequest
       * @return GetIdentityProviderUdPushConfigurationResponse
       */
      Models::GetIdentityProviderUdPushConfigurationResponse getIdentityProviderUdPushConfiguration(const Models::GetIdentityProviderUdPushConfigurationRequest &request);

      /**
       * @summary Queries the information of an Enterprise Identity and Access Management (EIAM) instance of Identity as a Service (IDaaS).
       *
       * @param request GetInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInstanceResponse
       */
      Models::GetInstanceResponse getInstanceWithOptions(const Models::GetInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information of an Enterprise Identity and Access Management (EIAM) instance of Identity as a Service (IDaaS).
       *
       * @param request GetInstanceRequest
       * @return GetInstanceResponse
       */
      Models::GetInstanceResponse getInstance(const Models::GetInstanceRequest &request);

      /**
       * @summary 查询实例控制项
       *
       * @param request GetInstanceControlConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInstanceControlConfigurationResponse
       */
      Models::GetInstanceControlConfigurationResponse getInstanceControlConfigurationWithOptions(const Models::GetInstanceControlConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询实例控制项
       *
       * @param request GetInstanceControlConfigurationRequest
       * @return GetInstanceControlConfigurationResponse
       */
      Models::GetInstanceControlConfigurationResponse getInstanceControlConfiguration(const Models::GetInstanceControlConfigurationRequest &request);

      /**
       * @summary 获取实例语言、时区信息
       *
       * @param request GetInstanceGlobalizationConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInstanceGlobalizationConfigResponse
       */
      Models::GetInstanceGlobalizationConfigResponse getInstanceGlobalizationConfigWithOptions(const Models::GetInstanceGlobalizationConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取实例语言、时区信息
       *
       * @param request GetInstanceGlobalizationConfigRequest
       * @return GetInstanceGlobalizationConfigResponse
       */
      Models::GetInstanceGlobalizationConfigResponse getInstanceGlobalizationConfig(const Models::GetInstanceGlobalizationConfigRequest &request);

      /**
       * @summary Query the currently effective License information of the instance
       *
       * @description Please ensure that your current instance is no longer in use. When the EIAM instance is deleted, all related data will be deleted.
       *
       * @param request GetInstanceLicenseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInstanceLicenseResponse
       */
      Models::GetInstanceLicenseResponse getInstanceLicenseWithOptions(const Models::GetInstanceLicenseRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the currently effective License information of the instance
       *
       * @description Please ensure that your current instance is no longer in use. When the EIAM instance is deleted, all related data will be deleted.
       *
       * @param request GetInstanceLicenseRequest
       * @return GetInstanceLicenseResponse
       */
      Models::GetInstanceLicenseResponse getInstanceLicense(const Models::GetInstanceLicenseRequest &request);

      /**
       * @summary 获取一级模块下，所有模块信息
       *
       * @param request GetInstanceModuleInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInstanceModuleInfoResponse
       */
      Models::GetInstanceModuleInfoResponse getInstanceModuleInfoWithOptions(const Models::GetInstanceModuleInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取一级模块下，所有模块信息
       *
       * @param request GetInstanceModuleInfoRequest
       * @return GetInstanceModuleInfoResponse
       */
      Models::GetInstanceModuleInfoResponse getInstanceModuleInfo(const Models::GetInstanceModuleInfoRequest &request);

      /**
       * @summary 获取实例单一类型的Quota
       *
       * @param request GetInstanceQuotaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInstanceQuotaResponse
       */
      Models::GetInstanceQuotaResponse getInstanceQuotaWithOptions(const Models::GetInstanceQuotaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取实例单一类型的Quota
       *
       * @param request GetInstanceQuotaRequest
       * @return GetInstanceQuotaResponse
       */
      Models::GetInstanceQuotaResponse getInstanceQuota(const Models::GetInstanceQuotaRequest &request);

      /**
       * @summary 获取实例的试用状态
       *
       * @param request GetInstanceTrialStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInstanceTrialStatusResponse
       */
      Models::GetInstanceTrialStatusResponse getInstanceTrialStatusWithOptions(const Models::GetInstanceTrialStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取实例的试用状态
       *
       * @param request GetInstanceTrialStatusRequest
       * @return GetInstanceTrialStatusResponse
       */
      Models::GetInstanceTrialStatusResponse getInstanceTrialStatus(const Models::GetInstanceTrialStatusRequest &request);

      /**
       * @summary 获取品牌登录后跳转应用
       *
       * @param request GetLoginRedirectApplicationForBrandRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetLoginRedirectApplicationForBrandResponse
       */
      Models::GetLoginRedirectApplicationForBrandResponse getLoginRedirectApplicationForBrandWithOptions(const Models::GetLoginRedirectApplicationForBrandRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取品牌登录后跳转应用
       *
       * @param request GetLoginRedirectApplicationForBrandRequest
       * @return GetLoginRedirectApplicationForBrandResponse
       */
      Models::GetLoginRedirectApplicationForBrandResponse getLoginRedirectApplicationForBrand(const Models::GetLoginRedirectApplicationForBrandRequest &request);

      /**
       * @summary Get Network Endpoint Information
       *
       * @param request GetNetworkAccessEndpointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetNetworkAccessEndpointResponse
       */
      Models::GetNetworkAccessEndpointResponse getNetworkAccessEndpointWithOptions(const Models::GetNetworkAccessEndpointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get Network Endpoint Information
       *
       * @param request GetNetworkAccessEndpointRequest
       * @return GetNetworkAccessEndpointResponse
       */
      Models::GetNetworkAccessEndpointResponse getNetworkAccessEndpoint(const Models::GetNetworkAccessEndpointRequest &request);

      /**
       * @summary 获取网络区域对象
       *
       * @param request GetNetworkZoneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetNetworkZoneResponse
       */
      Models::GetNetworkZoneResponse getNetworkZoneWithOptions(const Models::GetNetworkZoneRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取网络区域对象
       *
       * @param request GetNetworkZoneRequest
       * @return GetNetworkZoneResponse
       */
      Models::GetNetworkZoneResponse getNetworkZone(const Models::GetNetworkZoneRequest &request);

      /**
       * @summary Queries the information about an organizational unit in Identity as a Service (IDaaS) Employee IAM (EIAM).
       *
       * @param request GetOrganizationalUnitRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOrganizationalUnitResponse
       */
      Models::GetOrganizationalUnitResponse getOrganizationalUnitWithOptions(const Models::GetOrganizationalUnitRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about an organizational unit in Identity as a Service (IDaaS) Employee IAM (EIAM).
       *
       * @param request GetOrganizationalUnitRequest
       * @return GetOrganizationalUnitResponse
       */
      Models::GetOrganizationalUnitResponse getOrganizationalUnit(const Models::GetOrganizationalUnitRequest &request);

      /**
       * @summary Queries the password complexity configurations of an Employee Identity and Access Management (EIAM) instance of Identity as a Service (IDaaS).
       *
       * @param request GetPasswordComplexityConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPasswordComplexityConfigurationResponse
       */
      Models::GetPasswordComplexityConfigurationResponse getPasswordComplexityConfigurationWithOptions(const Models::GetPasswordComplexityConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the password complexity configurations of an Employee Identity and Access Management (EIAM) instance of Identity as a Service (IDaaS).
       *
       * @param request GetPasswordComplexityConfigurationRequest
       * @return GetPasswordComplexityConfigurationResponse
       */
      Models::GetPasswordComplexityConfigurationResponse getPasswordComplexityConfiguration(const Models::GetPasswordComplexityConfigurationRequest &request);

      /**
       * @summary Queries the password expiration configurations of an Employee Identity and Access Management (EIAM) instance of Identity as a Service (IDaaS).
       *
       * @param request GetPasswordExpirationConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPasswordExpirationConfigurationResponse
       */
      Models::GetPasswordExpirationConfigurationResponse getPasswordExpirationConfigurationWithOptions(const Models::GetPasswordExpirationConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the password expiration configurations of an Employee Identity and Access Management (EIAM) instance of Identity as a Service (IDaaS).
       *
       * @param request GetPasswordExpirationConfigurationRequest
       * @return GetPasswordExpirationConfigurationResponse
       */
      Models::GetPasswordExpirationConfigurationResponse getPasswordExpirationConfiguration(const Models::GetPasswordExpirationConfigurationRequest &request);

      /**
       * @summary Queries the password history configurations of an Employee Identity and Access Management (EIAM) instance of Identity as a Service (IDaaS).
       *
       * @param request GetPasswordHistoryConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPasswordHistoryConfigurationResponse
       */
      Models::GetPasswordHistoryConfigurationResponse getPasswordHistoryConfigurationWithOptions(const Models::GetPasswordHistoryConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the password history configurations of an Employee Identity and Access Management (EIAM) instance of Identity as a Service (IDaaS).
       *
       * @param request GetPasswordHistoryConfigurationRequest
       * @return GetPasswordHistoryConfigurationResponse
       */
      Models::GetPasswordHistoryConfigurationResponse getPasswordHistoryConfiguration(const Models::GetPasswordHistoryConfigurationRequest &request);

      /**
       * @summary Queries the password initialization configurations of an Employee Identity and Access Management (EIAM) instance of Identity as a Service (IDaaS).
       *
       * @param request GetPasswordInitializationConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPasswordInitializationConfigurationResponse
       */
      Models::GetPasswordInitializationConfigurationResponse getPasswordInitializationConfigurationWithOptions(const Models::GetPasswordInitializationConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the password initialization configurations of an Employee Identity and Access Management (EIAM) instance of Identity as a Service (IDaaS).
       *
       * @param request GetPasswordInitializationConfigurationRequest
       * @return GetPasswordInitializationConfigurationResponse
       */
      Models::GetPasswordInitializationConfigurationResponse getPasswordInitializationConfiguration(const Models::GetPasswordInitializationConfigurationRequest &request);

      /**
       * @summary 查询指定ResourceServer下的Scope
       *
       * @param request GetResourceServerScopeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetResourceServerScopeResponse
       */
      Models::GetResourceServerScopeResponse getResourceServerScopeWithOptions(const Models::GetResourceServerScopeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询指定ResourceServer下的Scope
       *
       * @param request GetResourceServerScopeRequest
       * @return GetResourceServerScopeResponse
       */
      Models::GetResourceServerScopeResponse getResourceServerScope(const Models::GetResourceServerScopeRequest &request);

      /**
       * @summary Queries the information about the root organizational unit in Identity as a Service (IDaaS) Employee Identity and Access Management (EIAM).
       *
       * @param request GetRootOrganizationalUnitRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRootOrganizationalUnitResponse
       */
      Models::GetRootOrganizationalUnitResponse getRootOrganizationalUnitWithOptions(const Models::GetRootOrganizationalUnitRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about the root organizational unit in Identity as a Service (IDaaS) Employee Identity and Access Management (EIAM).
       *
       * @param request GetRootOrganizationalUnitRequest
       * @return GetRootOrganizationalUnitResponse
       */
      Models::GetRootOrganizationalUnitResponse getRootOrganizationalUnit(const Models::GetRootOrganizationalUnitRequest &request);

      /**
       * @summary 获取服务Quota
       *
       * @param request GetServiceQuotaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetServiceQuotaResponse
       */
      Models::GetServiceQuotaResponse getServiceQuotaWithOptions(const Models::GetServiceQuotaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取服务Quota
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
       * @summary Queries the details of an account in Identity as a Service (IDaaS) Employee IAM (EIAM).
       *
       * @param request GetUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUserResponse
       */
      Models::GetUserResponse getUserWithOptions(const Models::GetUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an account in Identity as a Service (IDaaS) Employee IAM (EIAM).
       *
       * @param request GetUserRequest
       * @return GetUserResponse
       */
      Models::GetUserResponse getUser(const Models::GetUserRequest &request);

      /**
       * @summary 查看调用事件列表
       *
       * @param request ListActionTrackEventTypesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListActionTrackEventTypesResponse
       */
      Models::ListActionTrackEventTypesResponse listActionTrackEventTypesWithOptions(const Models::ListActionTrackEventTypesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查看调用事件列表
       *
       * @param request ListActionTrackEventTypesRequest
       * @return ListActionTrackEventTypesResponse
       */
      Models::ListActionTrackEventTypesResponse listActionTrackEventTypes(const Models::ListActionTrackEventTypesRequest &request);

      /**
       * @summary 分页查询应用下的应用账户列表
       *
       * @param request ListApplicationAccountsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListApplicationAccountsResponse
       */
      Models::ListApplicationAccountsResponse listApplicationAccountsWithOptions(const Models::ListApplicationAccountsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 分页查询应用下的应用账户列表
       *
       * @param request ListApplicationAccountsRequest
       * @return ListApplicationAccountsResponse
       */
      Models::ListApplicationAccountsResponse listApplicationAccounts(const Models::ListApplicationAccountsRequest &request);

      /**
       * @summary 查询当前应用下指定用户的所有账号
       *
       * @param request ListApplicationAccountsForUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListApplicationAccountsForUserResponse
       */
      Models::ListApplicationAccountsForUserResponse listApplicationAccountsForUserWithOptions(const Models::ListApplicationAccountsForUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询当前应用下指定用户的所有账号
       *
       * @param request ListApplicationAccountsForUserRequest
       * @return ListApplicationAccountsForUserResponse
       */
      Models::ListApplicationAccountsForUserResponse listApplicationAccountsForUser(const Models::ListApplicationAccountsForUserRequest &request);

      /**
       * @summary Queries all client keys of an Employee Identity and Access Management (EIAM) application. The returned key secret is not masked. If you want to query the key secret that is masked, call the ObtainApplicationClientSecret operation.
       *
       * @param request ListApplicationClientSecretsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListApplicationClientSecretsResponse
       */
      Models::ListApplicationClientSecretsResponse listApplicationClientSecretsWithOptions(const Models::ListApplicationClientSecretsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all client keys of an Employee Identity and Access Management (EIAM) application. The returned key secret is not masked. If you want to query the key secret that is masked, call the ObtainApplicationClientSecret operation.
       *
       * @param request ListApplicationClientSecretsRequest
       * @return ListApplicationClientSecretsResponse
       */
      Models::ListApplicationClientSecretsResponse listApplicationClientSecrets(const Models::ListApplicationClientSecretsRequest &request);

      /**
       * @summary 查询应用联邦凭证列表
       *
       * @param request ListApplicationFederatedCredentialsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListApplicationFederatedCredentialsResponse
       */
      Models::ListApplicationFederatedCredentialsResponse listApplicationFederatedCredentialsWithOptions(const Models::ListApplicationFederatedCredentialsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询应用联邦凭证列表
       *
       * @param request ListApplicationFederatedCredentialsRequest
       * @return ListApplicationFederatedCredentialsResponse
       */
      Models::ListApplicationFederatedCredentialsResponse listApplicationFederatedCredentials(const Models::ListApplicationFederatedCredentialsRequest &request);

      /**
       * @summary 根据联邦凭证提供方查询应用联邦凭证列表
       *
       * @param request ListApplicationFederatedCredentialsForProviderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListApplicationFederatedCredentialsForProviderResponse
       */
      Models::ListApplicationFederatedCredentialsForProviderResponse listApplicationFederatedCredentialsForProviderWithOptions(const Models::ListApplicationFederatedCredentialsForProviderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 根据联邦凭证提供方查询应用联邦凭证列表
       *
       * @param request ListApplicationFederatedCredentialsForProviderRequest
       * @return ListApplicationFederatedCredentialsForProviderResponse
       */
      Models::ListApplicationFederatedCredentialsForProviderResponse listApplicationFederatedCredentialsForProvider(const Models::ListApplicationFederatedCredentialsForProviderRequest &request);

      /**
       * @summary 游标分页查询应用角色
       *
       * @param request ListApplicationRolesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListApplicationRolesResponse
       */
      Models::ListApplicationRolesResponse listApplicationRolesWithOptions(const Models::ListApplicationRolesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 游标分页查询应用角色
       *
       * @param request ListApplicationRolesRequest
       * @return ListApplicationRolesResponse
       */
      Models::ListApplicationRolesResponse listApplicationRoles(const Models::ListApplicationRolesRequest &request);

      /**
       * @summary Queries the synchronization protocol types that are supported by an application.
       *
       * @param request ListApplicationSupportedProvisionProtocolTypesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListApplicationSupportedProvisionProtocolTypesResponse
       */
      Models::ListApplicationSupportedProvisionProtocolTypesResponse listApplicationSupportedProvisionProtocolTypesWithOptions(const Models::ListApplicationSupportedProvisionProtocolTypesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the synchronization protocol types that are supported by an application.
       *
       * @param request ListApplicationSupportedProvisionProtocolTypesRequest
       * @return ListApplicationSupportedProvisionProtocolTypesResponse
       */
      Models::ListApplicationSupportedProvisionProtocolTypesResponse listApplicationSupportedProvisionProtocolTypes(const Models::ListApplicationSupportedProvisionProtocolTypesRequest &request);

      /**
       * @summary 创建应用Token
       *
       * @param request ListApplicationTokensRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListApplicationTokensResponse
       */
      Models::ListApplicationTokensResponse listApplicationTokensWithOptions(const Models::ListApplicationTokensRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建应用Token
       *
       * @param request ListApplicationTokensRequest
       * @return ListApplicationTokensResponse
       */
      Models::ListApplicationTokensResponse listApplicationTokens(const Models::ListApplicationTokensRequest &request);

      /**
       * @summary Queries the information about one or multiple Employee Identity and Access Management (EIAM) applications by page.
       *
       * @param request ListApplicationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListApplicationsResponse
       */
      Models::ListApplicationsResponse listApplicationsWithOptions(const Models::ListApplicationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about one or multiple Employee Identity and Access Management (EIAM) applications by page.
       *
       * @param request ListApplicationsRequest
       * @return ListApplicationsResponse
       */
      Models::ListApplicationsResponse listApplications(const Models::ListApplicationsRequest &request);

      /**
       * @summary 查询授权规则关联的应用列表
       *
       * @param request ListApplicationsForAuthorizationRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListApplicationsForAuthorizationRuleResponse
       */
      Models::ListApplicationsForAuthorizationRuleResponse listApplicationsForAuthorizationRuleWithOptions(const Models::ListApplicationsForAuthorizationRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询授权规则关联的应用列表
       *
       * @param request ListApplicationsForAuthorizationRuleRequest
       * @return ListApplicationsForAuthorizationRuleResponse
       */
      Models::ListApplicationsForAuthorizationRuleResponse listApplicationsForAuthorizationRule(const Models::ListApplicationsForAuthorizationRuleRequest &request);

      /**
       * @summary 查询一个EIAM组可访问的应用列表
       *
       * @param request ListApplicationsForGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListApplicationsForGroupResponse
       */
      Models::ListApplicationsForGroupResponse listApplicationsForGroupWithOptions(const Models::ListApplicationsForGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询一个EIAM组可访问的应用列表
       *
       * @param request ListApplicationsForGroupRequest
       * @return ListApplicationsForGroupResponse
       */
      Models::ListApplicationsForGroupResponse listApplicationsForGroup(const Models::ListApplicationsForGroupRequest &request);

      /**
       * @summary 获取网络访问端点下的App信息。
       *
       * @param request ListApplicationsForNetworkAccessEndpointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListApplicationsForNetworkAccessEndpointResponse
       */
      Models::ListApplicationsForNetworkAccessEndpointResponse listApplicationsForNetworkAccessEndpointWithOptions(const Models::ListApplicationsForNetworkAccessEndpointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取网络访问端点下的App信息。
       *
       * @param request ListApplicationsForNetworkAccessEndpointRequest
       * @return ListApplicationsForNetworkAccessEndpointResponse
       */
      Models::ListApplicationsForNetworkAccessEndpointResponse listApplicationsForNetworkAccessEndpoint(const Models::ListApplicationsForNetworkAccessEndpointRequest &request);

      /**
       * @summary 获取NetworkZone关联的应用列表
       *
       * @param request ListApplicationsForNetworkZoneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListApplicationsForNetworkZoneResponse
       */
      Models::ListApplicationsForNetworkZoneResponse listApplicationsForNetworkZoneWithOptions(const Models::ListApplicationsForNetworkZoneRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取NetworkZone关联的应用列表
       *
       * @param request ListApplicationsForNetworkZoneRequest
       * @return ListApplicationsForNetworkZoneResponse
       */
      Models::ListApplicationsForNetworkZoneResponse listApplicationsForNetworkZone(const Models::ListApplicationsForNetworkZoneRequest &request);

      /**
       * @summary Queries the applications that an Employee Identity and Access Management (EIAM) organization can access. The return result includes the IDs of the applications. If you want to obtain the details of the applications, call the GetApplication operation.
       *
       * @description You can only query the permissions that are directly granted to the EIAM organization by calling the ListApplicationsForOrganizationalUnit operation. You can filter applications by configuring the **ApplicationIds** parameter when you call this operation.
       *
       * @param request ListApplicationsForOrganizationalUnitRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListApplicationsForOrganizationalUnitResponse
       */
      Models::ListApplicationsForOrganizationalUnitResponse listApplicationsForOrganizationalUnitWithOptions(const Models::ListApplicationsForOrganizationalUnitRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the applications that an Employee Identity and Access Management (EIAM) organization can access. The return result includes the IDs of the applications. If you want to obtain the details of the applications, call the GetApplication operation.
       *
       * @description You can only query the permissions that are directly granted to the EIAM organization by calling the ListApplicationsForOrganizationalUnit operation. You can filter applications by configuring the **ApplicationIds** parameter when you call this operation.
       *
       * @param request ListApplicationsForOrganizationalUnitRequest
       * @return ListApplicationsForOrganizationalUnitResponse
       */
      Models::ListApplicationsForOrganizationalUnitResponse listApplicationsForOrganizationalUnit(const Models::ListApplicationsForOrganizationalUnitRequest &request);

      /**
       * @summary Queries the applications that an Employee Identity and Access Management (EIAM) account can access. The return result includes the IDs of the applications. If you want to obtain the details of the applications, call the GetApplication operation.
       *
       * @param request ListApplicationsForUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListApplicationsForUserResponse
       */
      Models::ListApplicationsForUserResponse listApplicationsForUserWithOptions(const Models::ListApplicationsForUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the applications that an Employee Identity and Access Management (EIAM) account can access. The return result includes the IDs of the applications. If you want to obtain the details of the applications, call the GetApplication operation.
       *
       * @param request ListApplicationsForUserRequest
       * @return ListApplicationsForUserResponse
       */
      Models::ListApplicationsForUserResponse listApplicationsForUser(const Models::ListApplicationsForUserRequest &request);

      /**
       * @summary 查询授权资源信息列表
       *
       * @param request ListAuthorizationResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAuthorizationResourcesResponse
       */
      Models::ListAuthorizationResourcesResponse listAuthorizationResourcesWithOptions(const Models::ListAuthorizationResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询授权资源信息列表
       *
       * @param request ListAuthorizationResourcesRequest
       * @return ListAuthorizationResourcesResponse
       */
      Models::ListAuthorizationResourcesResponse listAuthorizationResources(const Models::ListAuthorizationResourcesRequest &request);

      /**
       * @summary 查询授权规则信息列表
       *
       * @param request ListAuthorizationRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAuthorizationRulesResponse
       */
      Models::ListAuthorizationRulesResponse listAuthorizationRulesWithOptions(const Models::ListAuthorizationRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询授权规则信息列表
       *
       * @param request ListAuthorizationRulesRequest
       * @return ListAuthorizationRulesResponse
       */
      Models::ListAuthorizationRulesResponse listAuthorizationRules(const Models::ListAuthorizationRulesRequest &request);

      /**
       * @summary 查询应用关联的授权规则信息列表
       *
       * @param request ListAuthorizationRulesForApplicationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAuthorizationRulesForApplicationResponse
       */
      Models::ListAuthorizationRulesForApplicationResponse listAuthorizationRulesForApplicationWithOptions(const Models::ListAuthorizationRulesForApplicationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询应用关联的授权规则信息列表
       *
       * @param request ListAuthorizationRulesForApplicationRequest
       * @return ListAuthorizationRulesForApplicationResponse
       */
      Models::ListAuthorizationRulesForApplicationResponse listAuthorizationRulesForApplication(const Models::ListAuthorizationRulesForApplicationRequest &request);

      /**
       * @summary 查询组关联的授权规则信息列表
       *
       * @param request ListAuthorizationRulesForGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAuthorizationRulesForGroupResponse
       */
      Models::ListAuthorizationRulesForGroupResponse listAuthorizationRulesForGroupWithOptions(const Models::ListAuthorizationRulesForGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询组关联的授权规则信息列表
       *
       * @param request ListAuthorizationRulesForGroupRequest
       * @return ListAuthorizationRulesForGroupResponse
       */
      Models::ListAuthorizationRulesForGroupResponse listAuthorizationRulesForGroup(const Models::ListAuthorizationRulesForGroupRequest &request);

      /**
       * @summary 查询用户关联的授权规则信息列表
       *
       * @param request ListAuthorizationRulesForUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAuthorizationRulesForUserResponse
       */
      Models::ListAuthorizationRulesForUserResponse listAuthorizationRulesForUserWithOptions(const Models::ListAuthorizationRulesForUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询用户关联的授权规则信息列表
       *
       * @param request ListAuthorizationRulesForUserRequest
       * @return ListAuthorizationRulesForUserResponse
       */
      Models::ListAuthorizationRulesForUserResponse listAuthorizationRulesForUser(const Models::ListAuthorizationRulesForUserRequest &request);

      /**
       * @summary 获取品牌列表
       *
       * @param request ListBrandsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListBrandsResponse
       */
      Models::ListBrandsResponse listBrandsWithOptions(const Models::ListBrandsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取品牌列表
       *
       * @param request ListBrandsRequest
       * @return ListBrandsResponse
       */
      Models::ListBrandsResponse listBrands(const Models::ListBrandsRequest &request);

      /**
       * @summary 查询指定应用所属的全部ClientPublicKey
       *
       * @param request ListClientPublicKeysRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListClientPublicKeysResponse
       */
      Models::ListClientPublicKeysResponse listClientPublicKeysWithOptions(const Models::ListClientPublicKeysRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询指定应用所属的全部ClientPublicKey
       *
       * @param request ListClientPublicKeysRequest
       * @return ListClientPublicKeysResponse
       */
      Models::ListClientPublicKeysResponse listClientPublicKeys(const Models::ListClientPublicKeysRequest &request);

      /**
       * @summary 查询云角色列表
       *
       * @param request ListCloudAccountRolesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCloudAccountRolesResponse
       */
      Models::ListCloudAccountRolesResponse listCloudAccountRolesWithOptions(const Models::ListCloudAccountRolesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询云角色列表
       *
       * @param request ListCloudAccountRolesRequest
       * @return ListCloudAccountRolesResponse
       */
      Models::ListCloudAccountRolesResponse listCloudAccountRoles(const Models::ListCloudAccountRolesRequest &request);

      /**
       * @summary 查询云账号列表
       *
       * @param request ListCloudAccountsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCloudAccountsResponse
       */
      Models::ListCloudAccountsResponse listCloudAccountsWithOptions(const Models::ListCloudAccountsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询云账号列表
       *
       * @param request ListCloudAccountsRequest
       * @return ListCloudAccountsResponse
       */
      Models::ListCloudAccountsResponse listCloudAccounts(const Models::ListCloudAccountsRequest &request);

      /**
       * @summary List of Conditional Access Policies
       *
       * @description Paginated query for the list of conditional access policies
       *
       * @param request ListConditionalAccessPoliciesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListConditionalAccessPoliciesResponse
       */
      Models::ListConditionalAccessPoliciesResponse listConditionalAccessPoliciesWithOptions(const Models::ListConditionalAccessPoliciesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary List of Conditional Access Policies
       *
       * @description Paginated query for the list of conditional access policies
       *
       * @param request ListConditionalAccessPoliciesRequest
       * @return ListConditionalAccessPoliciesResponse
       */
      Models::ListConditionalAccessPoliciesResponse listConditionalAccessPolicies(const Models::ListConditionalAccessPoliciesRequest &request);

      /**
       * @summary 获取应用关联的条件访问策略列表
       *
       * @param request ListConditionalAccessPoliciesForApplicationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListConditionalAccessPoliciesForApplicationResponse
       */
      Models::ListConditionalAccessPoliciesForApplicationResponse listConditionalAccessPoliciesForApplicationWithOptions(const Models::ListConditionalAccessPoliciesForApplicationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取应用关联的条件访问策略列表
       *
       * @param request ListConditionalAccessPoliciesForApplicationRequest
       * @return ListConditionalAccessPoliciesForApplicationResponse
       */
      Models::ListConditionalAccessPoliciesForApplicationResponse listConditionalAccessPoliciesForApplication(const Models::ListConditionalAccessPoliciesForApplicationRequest &request);

      /**
       * @summary List Conditional Access Policies Associated with Network Areas
       *
       * @description List Conditional Access Policies Associated with Network Zones
       *
       * @param request ListConditionalAccessPoliciesForNetworkZoneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListConditionalAccessPoliciesForNetworkZoneResponse
       */
      Models::ListConditionalAccessPoliciesForNetworkZoneResponse listConditionalAccessPoliciesForNetworkZoneWithOptions(const Models::ListConditionalAccessPoliciesForNetworkZoneRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary List Conditional Access Policies Associated with Network Areas
       *
       * @description List Conditional Access Policies Associated with Network Zones
       *
       * @param request ListConditionalAccessPoliciesForNetworkZoneRequest
       * @return ListConditionalAccessPoliciesForNetworkZoneResponse
       */
      Models::ListConditionalAccessPoliciesForNetworkZoneResponse listConditionalAccessPoliciesForNetworkZone(const Models::ListConditionalAccessPoliciesForNetworkZoneRequest &request);

      /**
       * @summary 获取用户关联的条件访问策略列表
       *
       * @param request ListConditionalAccessPoliciesForUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListConditionalAccessPoliciesForUserResponse
       */
      Models::ListConditionalAccessPoliciesForUserResponse listConditionalAccessPoliciesForUserWithOptions(const Models::ListConditionalAccessPoliciesForUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取用户关联的条件访问策略列表
       *
       * @param request ListConditionalAccessPoliciesForUserRequest
       * @return ListConditionalAccessPoliciesForUserResponse
       */
      Models::ListConditionalAccessPoliciesForUserResponse listConditionalAccessPoliciesForUser(const Models::ListConditionalAccessPoliciesForUserRequest &request);

      /**
       * @summary 自定义条款列表查询。
       *
       * @param request ListCustomPrivacyPoliciesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCustomPrivacyPoliciesResponse
       */
      Models::ListCustomPrivacyPoliciesResponse listCustomPrivacyPoliciesWithOptions(const Models::ListCustomPrivacyPoliciesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 自定义条款列表查询。
       *
       * @param request ListCustomPrivacyPoliciesRequest
       * @return ListCustomPrivacyPoliciesResponse
       */
      Models::ListCustomPrivacyPoliciesResponse listCustomPrivacyPolicies(const Models::ListCustomPrivacyPoliciesRequest &request);

      /**
       * @summary 获取品牌关联资源的资源
       *
       * @param request ListCustomPrivacyPoliciesForBrandRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCustomPrivacyPoliciesForBrandResponse
       */
      Models::ListCustomPrivacyPoliciesForBrandResponse listCustomPrivacyPoliciesForBrandWithOptions(const Models::ListCustomPrivacyPoliciesForBrandRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取品牌关联资源的资源
       *
       * @param request ListCustomPrivacyPoliciesForBrandRequest
       * @return ListCustomPrivacyPoliciesForBrandResponse
       */
      Models::ListCustomPrivacyPoliciesForBrandResponse listCustomPrivacyPoliciesForBrand(const Models::ListCustomPrivacyPoliciesForBrandRequest &request);

      /**
       * @summary Queries the proxy tokens of a domain name of an Employee Identity and Access Management (EIAM) instance.
       *
       * @param request ListDomainProxyTokensRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDomainProxyTokensResponse
       */
      Models::ListDomainProxyTokensResponse listDomainProxyTokensWithOptions(const Models::ListDomainProxyTokensRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the proxy tokens of a domain name of an Employee Identity and Access Management (EIAM) instance.
       *
       * @param request ListDomainProxyTokensRequest
       * @return ListDomainProxyTokensResponse
       */
      Models::ListDomainProxyTokensResponse listDomainProxyTokens(const Models::ListDomainProxyTokensRequest &request);

      /**
       * @summary Queries a list of domain names of an Employee Identity and Access Management (EIAM) instance. The list contains the initial domain name and custom domain names.
       *
       * @param request ListDomainsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDomainsResponse
       */
      Models::ListDomainsResponse listDomainsWithOptions(const Models::ListDomainsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of domain names of an Employee Identity and Access Management (EIAM) instance. The list contains the initial domain name and custom domain names.
       *
       * @param request ListDomainsRequest
       * @return ListDomainsResponse
       */
      Models::ListDomainsResponse listDomains(const Models::ListDomainsRequest &request);

      /**
       * @summary Queries the information about Employee Identity and Access Management (EIAM) V1.0 instances or EIAM V2.0 instances.
       *
       * @param request ListEiamInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListEiamInstancesResponse
       */
      Models::ListEiamInstancesResponse listEiamInstancesWithOptions(const Models::ListEiamInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about Employee Identity and Access Management (EIAM) V1.0 instances or EIAM V2.0 instances.
       *
       * @param request ListEiamInstancesRequest
       * @return ListEiamInstancesResponse
       */
      Models::ListEiamInstancesResponse listEiamInstances(const Models::ListEiamInstancesRequest &request);

      /**
       * @summary Queries the regions in which Employee Identity and Access Management (EIAM) V1.0 instances or EIAM V2.0 instances reside.
       *
       * @param request ListEiamRegionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListEiamRegionsResponse
       */
      Models::ListEiamRegionsResponse listEiamRegionsWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the regions in which Employee Identity and Access Management (EIAM) V1.0 instances or EIAM V2.0 instances reside.
       *
       * @return ListEiamRegionsResponse
       */
      Models::ListEiamRegionsResponse listEiamRegions();

      /**
       * @summary 查看事件列表
       *
       * @param request ListEventTypesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListEventTypesResponse
       */
      Models::ListEventTypesResponse listEventTypesWithOptions(const Models::ListEventTypesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查看事件列表
       *
       * @param request ListEventTypesRequest
       * @return ListEventTypesResponse
       */
      Models::ListEventTypesResponse listEventTypes(const Models::ListEventTypesRequest &request);

      /**
       * @summary 查询联邦凭证提供方列表
       *
       * @param request ListFederatedCredentialProvidersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListFederatedCredentialProvidersResponse
       */
      Models::ListFederatedCredentialProvidersResponse listFederatedCredentialProvidersWithOptions(const Models::ListFederatedCredentialProvidersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询联邦凭证提供方列表
       *
       * @param request ListFederatedCredentialProvidersRequest
       * @return ListFederatedCredentialProvidersResponse
       */
      Models::ListFederatedCredentialProvidersResponse listFederatedCredentialProviders(const Models::ListFederatedCredentialProvidersRequest &request);

      /**
       * @summary Queries a list of account groups in Identity as a Service (IDaaS) Employee Identity and Access Management (EIAM).
       *
       * @param request ListGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListGroupsResponse
       */
      Models::ListGroupsResponse listGroupsWithOptions(const Models::ListGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of account groups in Identity as a Service (IDaaS) Employee Identity and Access Management (EIAM).
       *
       * @param request ListGroupsRequest
       * @return ListGroupsResponse
       */
      Models::ListGroupsResponse listGroups(const Models::ListGroupsRequest &request);

      /**
       * @summary Queries the account groups that are granted permissions to access an application and displays the results by page. The IDs of the account groups are returned. To query the detailed information about the account groups, call the GetGroup operation.
       *
       * @param request ListGroupsForApplicationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListGroupsForApplicationResponse
       */
      Models::ListGroupsForApplicationResponse listGroupsForApplicationWithOptions(const Models::ListGroupsForApplicationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the account groups that are granted permissions to access an application and displays the results by page. The IDs of the account groups are returned. To query the detailed information about the account groups, call the GetGroup operation.
       *
       * @param request ListGroupsForApplicationRequest
       * @return ListGroupsForApplicationResponse
       */
      Models::ListGroupsForApplicationResponse listGroupsForApplication(const Models::ListGroupsForApplicationRequest &request);

      /**
       * @summary 查询授权规则关联的组列表
       *
       * @param request ListGroupsForAuthorizationRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListGroupsForAuthorizationRuleResponse
       */
      Models::ListGroupsForAuthorizationRuleResponse listGroupsForAuthorizationRuleWithOptions(const Models::ListGroupsForAuthorizationRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询授权规则关联的组列表
       *
       * @param request ListGroupsForAuthorizationRuleRequest
       * @return ListGroupsForAuthorizationRuleResponse
       */
      Models::ListGroupsForAuthorizationRuleResponse listGroupsForAuthorizationRule(const Models::ListGroupsForAuthorizationRuleRequest &request);

      /**
       * @summary 查询ResourceServer授权的组和Scope权限
       *
       * @param request ListGroupsForResourceServerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListGroupsForResourceServerResponse
       */
      Models::ListGroupsForResourceServerResponse listGroupsForResourceServerWithOptions(const Models::ListGroupsForResourceServerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询ResourceServer授权的组和Scope权限
       *
       * @param request ListGroupsForResourceServerRequest
       * @return ListGroupsForResourceServerResponse
       */
      Models::ListGroupsForResourceServerResponse listGroupsForResourceServer(const Models::ListGroupsForResourceServerRequest &request);

      /**
       * @summary Queries a list of account groups to which an Employee Identity and Access Management (EIAM) account of Identity as a Service (IDaaS) belongs.
       *
       * @param request ListGroupsForUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListGroupsForUserResponse
       */
      Models::ListGroupsForUserResponse listGroupsForUserWithOptions(const Models::ListGroupsForUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of account groups to which an Employee Identity and Access Management (EIAM) account of Identity as a Service (IDaaS) belongs.
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
       * @summary 获取网络端点下的IdP信息。
       *
       * @param request ListIdentityProvidersForNetworkAccessEndpointRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListIdentityProvidersForNetworkAccessEndpointResponse
       */
      Models::ListIdentityProvidersForNetworkAccessEndpointResponse listIdentityProvidersForNetworkAccessEndpointWithOptions(const Models::ListIdentityProvidersForNetworkAccessEndpointRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取网络端点下的IdP信息。
       *
       * @param request ListIdentityProvidersForNetworkAccessEndpointRequest
       * @return ListIdentityProvidersForNetworkAccessEndpointResponse
       */
      Models::ListIdentityProvidersForNetworkAccessEndpointResponse listIdentityProvidersForNetworkAccessEndpoint(const Models::ListIdentityProvidersForNetworkAccessEndpointRequest &request);

      /**
       * @summary Queries the information about one or more Enterprise Identity and Access Management (EIAM) instances of Identity as a Service (IDaaS).
       *
       * @param request ListInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstancesResponse
       */
      Models::ListInstancesResponse listInstancesWithOptions(const Models::ListInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about one or more Enterprise Identity and Access Management (EIAM) instances of Identity as a Service (IDaaS).
       *
       * @param request ListInstancesRequest
       * @return ListInstancesResponse
       */
      Models::ListInstancesResponse listInstances(const Models::ListInstancesRequest &request);

      /**
       * @summary Get a list of regions that support network access endpoints.
       *
       * @param request ListNetworkAccessEndpointAvailableRegionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListNetworkAccessEndpointAvailableRegionsResponse
       */
      Models::ListNetworkAccessEndpointAvailableRegionsResponse listNetworkAccessEndpointAvailableRegionsWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get a list of regions that support network access endpoints.
       *
       * @return ListNetworkAccessEndpointAvailableRegionsResponse
       */
      Models::ListNetworkAccessEndpointAvailableRegionsResponse listNetworkAccessEndpointAvailableRegions();

      /**
       * @summary Queries the zones that support dedicated network endpoints in the specified region of Identity as a Service (IDaaS) Employee Identity and Access Management (EIAM).
       *
       * @param request ListNetworkAccessEndpointAvailableZonesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListNetworkAccessEndpointAvailableZonesResponse
       */
      Models::ListNetworkAccessEndpointAvailableZonesResponse listNetworkAccessEndpointAvailableZonesWithOptions(const Models::ListNetworkAccessEndpointAvailableZonesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the zones that support dedicated network endpoints in the specified region of Identity as a Service (IDaaS) Employee Identity and Access Management (EIAM).
       *
       * @param request ListNetworkAccessEndpointAvailableZonesRequest
       * @return ListNetworkAccessEndpointAvailableZonesResponse
       */
      Models::ListNetworkAccessEndpointAvailableZonesResponse listNetworkAccessEndpointAvailableZones(const Models::ListNetworkAccessEndpointAvailableZonesRequest &request);

      /**
       * @summary List query dedicated network endpoint
       *
       * @param request ListNetworkAccessEndpointsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListNetworkAccessEndpointsResponse
       */
      Models::ListNetworkAccessEndpointsResponse listNetworkAccessEndpointsWithOptions(const Models::ListNetworkAccessEndpointsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary List query dedicated network endpoint
       *
       * @param request ListNetworkAccessEndpointsRequest
       * @return ListNetworkAccessEndpointsResponse
       */
      Models::ListNetworkAccessEndpointsResponse listNetworkAccessEndpoints(const Models::ListNetworkAccessEndpointsRequest &request);

      /**
       * @summary List the access paths under a certain network access endpoint.
       *
       * @param request ListNetworkAccessPathsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListNetworkAccessPathsResponse
       */
      Models::ListNetworkAccessPathsResponse listNetworkAccessPathsWithOptions(const Models::ListNetworkAccessPathsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary List the access paths under a certain network access endpoint.
       *
       * @param request ListNetworkAccessPathsRequest
       * @return ListNetworkAccessPathsResponse
       */
      Models::ListNetworkAccessPathsResponse listNetworkAccessPaths(const Models::ListNetworkAccessPathsRequest &request);

      /**
       * @summary 网络区域对象列表
       *
       * @param request ListNetworkZonesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListNetworkZonesResponse
       */
      Models::ListNetworkZonesResponse listNetworkZonesWithOptions(const Models::ListNetworkZonesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 网络区域对象列表
       *
       * @param request ListNetworkZonesRequest
       * @return ListNetworkZonesResponse
       */
      Models::ListNetworkZonesResponse listNetworkZones(const Models::ListNetworkZonesRequest &request);

      /**
       * @summary Queries all parent organizations of an Employee Identity and Access Management (EIAM) organization.
       *
       * @param request ListOrganizationalUnitParentsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListOrganizationalUnitParentsResponse
       */
      Models::ListOrganizationalUnitParentsResponse listOrganizationalUnitParentsWithOptions(const Models::ListOrganizationalUnitParentsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all parent organizations of an Employee Identity and Access Management (EIAM) organization.
       *
       * @param request ListOrganizationalUnitParentsRequest
       * @return ListOrganizationalUnitParentsResponse
       */
      Models::ListOrganizationalUnitParentsResponse listOrganizationalUnitParents(const Models::ListOrganizationalUnitParentsRequest &request);

      /**
       * @summary Queries the information about organizational units in Identity as a Service (IDaaS) Employee IAM (EIAM) by page.
       *
       * @param request ListOrganizationalUnitsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListOrganizationalUnitsResponse
       */
      Models::ListOrganizationalUnitsResponse listOrganizationalUnitsWithOptions(const Models::ListOrganizationalUnitsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about organizational units in Identity as a Service (IDaaS) Employee IAM (EIAM) by page.
       *
       * @param request ListOrganizationalUnitsRequest
       * @return ListOrganizationalUnitsResponse
       */
      Models::ListOrganizationalUnitsResponse listOrganizationalUnits(const Models::ListOrganizationalUnitsRequest &request);

      /**
       * @summary Queries the organizations that are allowed to access an Employee Identity and Access Management (EIAM) application by page. The return result includes the IDs of the organizations. If you want to obtain the details of the organizations, call the GetOrganizationalUnit operation.
       *
       * @param request ListOrganizationalUnitsForApplicationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListOrganizationalUnitsForApplicationResponse
       */
      Models::ListOrganizationalUnitsForApplicationResponse listOrganizationalUnitsForApplicationWithOptions(const Models::ListOrganizationalUnitsForApplicationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the organizations that are allowed to access an Employee Identity and Access Management (EIAM) application by page. The return result includes the IDs of the organizations. If you want to obtain the details of the organizations, call the GetOrganizationalUnit operation.
       *
       * @param request ListOrganizationalUnitsForApplicationRequest
       * @return ListOrganizationalUnitsForApplicationResponse
       */
      Models::ListOrganizationalUnitsForApplicationResponse listOrganizationalUnitsForApplication(const Models::ListOrganizationalUnitsForApplicationRequest &request);

      /**
       * @summary 查询被授权到组织的ResourceServers和Scopes权限
       *
       * @param request ListOrganizationalUnitsForResourceServerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListOrganizationalUnitsForResourceServerResponse
       */
      Models::ListOrganizationalUnitsForResourceServerResponse listOrganizationalUnitsForResourceServerWithOptions(const Models::ListOrganizationalUnitsForResourceServerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询被授权到组织的ResourceServers和Scopes权限
       *
       * @param request ListOrganizationalUnitsForResourceServerRequest
       * @return ListOrganizationalUnitsForResourceServerResponse
       */
      Models::ListOrganizationalUnitsForResourceServerResponse listOrganizationalUnitsForResourceServer(const Models::ListOrganizationalUnitsForResourceServerRequest &request);

      /**
       * @summary Queries a list of supported Alibaba Cloud regions.
       *
       * @param request ListRegionsRequest
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
       * @summary 查询用户的被授予ResourceServers和Scopes的权限
       *
       * @param request ListResourceServersForUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListResourceServersForUserResponse
       */
      Models::ListResourceServersForUserResponse listResourceServersForUserWithOptions(const Models::ListResourceServersForUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询用户的被授予ResourceServers和Scopes的权限
       *
       * @param request ListResourceServersForUserRequest
       * @return ListResourceServersForUserResponse
       */
      Models::ListResourceServersForUserResponse listResourceServersForUser(const Models::ListResourceServersForUserRequest &request);

      /**
       * @summary Queries a list of synchronization jobs.
       *
       * @param request ListSynchronizationJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSynchronizationJobsResponse
       */
      Models::ListSynchronizationJobsResponse listSynchronizationJobsWithOptions(const Models::ListSynchronizationJobsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of synchronization jobs.
       *
       * @param request ListSynchronizationJobsRequest
       * @return ListSynchronizationJobsResponse
       */
      Models::ListSynchronizationJobsResponse listSynchronizationJobs(const Models::ListSynchronizationJobsRequest &request);

      /**
       * @summary 查询三方登录账户绑定关系
       *
       * @param request ListUserAuthnSourceMappingsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUserAuthnSourceMappingsResponse
       */
      Models::ListUserAuthnSourceMappingsResponse listUserAuthnSourceMappingsWithOptions(const Models::ListUserAuthnSourceMappingsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询三方登录账户绑定关系
       *
       * @param request ListUserAuthnSourceMappingsRequest
       * @return ListUserAuthnSourceMappingsResponse
       */
      Models::ListUserAuthnSourceMappingsResponse listUserAuthnSourceMappings(const Models::ListUserAuthnSourceMappingsRequest &request);

      /**
       * @summary Queries the details of accounts in Identity as a Service (IDaaS) Employee IAM (EIAM) by page.
       *
       * @param request ListUsersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUsersResponse
       */
      Models::ListUsersResponse listUsersWithOptions(const Models::ListUsersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of accounts in Identity as a Service (IDaaS) Employee IAM (EIAM) by page.
       *
       * @param request ListUsersRequest
       * @return ListUsersResponse
       */
      Models::ListUsersResponse listUsers(const Models::ListUsersRequest &request);

      /**
       * @summary Queries the accounts that are allowed to access an Employee Identity and Access Management (EIAM) application. The return results include the IDs of the accounts. If you need to obtain the details of the accounts, call the GetUser operation.
       *
       * @param request ListUsersForApplicationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUsersForApplicationResponse
       */
      Models::ListUsersForApplicationResponse listUsersForApplicationWithOptions(const Models::ListUsersForApplicationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the accounts that are allowed to access an Employee Identity and Access Management (EIAM) application. The return results include the IDs of the accounts. If you need to obtain the details of the accounts, call the GetUser operation.
       *
       * @param request ListUsersForApplicationRequest
       * @return ListUsersForApplicationResponse
       */
      Models::ListUsersForApplicationResponse listUsersForApplication(const Models::ListUsersForApplicationRequest &request);

      /**
       * @summary 查询授权规则关联的账户列表
       *
       * @param request ListUsersForAuthorizationRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUsersForAuthorizationRuleResponse
       */
      Models::ListUsersForAuthorizationRuleResponse listUsersForAuthorizationRuleWithOptions(const Models::ListUsersForAuthorizationRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询授权规则关联的账户列表
       *
       * @param request ListUsersForAuthorizationRuleRequest
       * @return ListUsersForAuthorizationRuleResponse
       */
      Models::ListUsersForAuthorizationRuleResponse listUsersForAuthorizationRule(const Models::ListUsersForAuthorizationRuleRequest &request);

      /**
       * @summary Queries the information of accounts in an Employee Identity and Access Management (EIAM) group of Identity as a Service (IDaaS).
       *
       * @param request ListUsersForGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUsersForGroupResponse
       */
      Models::ListUsersForGroupResponse listUsersForGroupWithOptions(const Models::ListUsersForGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information of accounts in an Employee Identity and Access Management (EIAM) group of Identity as a Service (IDaaS).
       *
       * @param request ListUsersForGroupRequest
       * @return ListUsersForGroupResponse
       */
      Models::ListUsersForGroupResponse listUsersForGroup(const Models::ListUsersForGroupRequest &request);

      /**
       * @summary 查询ResourceServer授权的用户和Scope权限
       *
       * @param request ListUsersForResourceServerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUsersForResourceServerResponse
       */
      Models::ListUsersForResourceServerResponse listUsersForResourceServerWithOptions(const Models::ListUsersForResourceServerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询ResourceServer授权的用户和Scope权限
       *
       * @param request ListUsersForResourceServerRequest
       * @return ListUsersForResourceServerResponse
       */
      Models::ListUsersForResourceServerResponse listUsersForResourceServer(const Models::ListUsersForResourceServerRequest &request);

      /**
       * @summary Queries a client key of an Employee Identity and Access Management (EIAM) application. The returned key secret is masked. If you want to query the key secret that is not masked, call the ListApplicationClientSecrets operation.
       *
       * @param request ObtainApplicationClientSecretRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ObtainApplicationClientSecretResponse
       */
      Models::ObtainApplicationClientSecretResponse obtainApplicationClientSecretWithOptions(const Models::ObtainApplicationClientSecretRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a client key of an Employee Identity and Access Management (EIAM) application. The returned key secret is masked. If you want to query the key secret that is not masked, call the ListApplicationClientSecrets operation.
       *
       * @param request ObtainApplicationClientSecretRequest
       * @return ObtainApplicationClientSecretResponse
       */
      Models::ObtainApplicationClientSecretResponse obtainApplicationClientSecret(const Models::ObtainApplicationClientSecretRequest &request);

      /**
       * @summary 查询指定应用Token
       *
       * @param request ObtainApplicationTokenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ObtainApplicationTokenResponse
       */
      Models::ObtainApplicationTokenResponse obtainApplicationTokenWithOptions(const Models::ObtainApplicationTokenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询指定应用Token
       *
       * @param request ObtainApplicationTokenRequest
       * @return ObtainApplicationTokenResponse
       */
      Models::ObtainApplicationTokenResponse obtainApplicationToken(const Models::ObtainApplicationTokenRequest &request);

      /**
       * @summary Queries the information about a proxy token of a domain name of an Employee Identity and Access Management (EIAM) instance.
       *
       * @param request ObtainDomainProxyTokenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ObtainDomainProxyTokenResponse
       */
      Models::ObtainDomainProxyTokenResponse obtainDomainProxyTokenWithOptions(const Models::ObtainDomainProxyTokenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a proxy token of a domain name of an Employee Identity and Access Management (EIAM) instance.
       *
       * @param request ObtainDomainProxyTokenRequest
       * @return ObtainDomainProxyTokenResponse
       */
      Models::ObtainDomainProxyTokenResponse obtainDomainProxyToken(const Models::ObtainDomainProxyTokenRequest &request);

      /**
       * @summary 删除一个当前应用下的指定员工的应用账号
       *
       * @param request RemoveApplicationAccountFromUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveApplicationAccountFromUserResponse
       */
      Models::RemoveApplicationAccountFromUserResponse removeApplicationAccountFromUserWithOptions(const Models::RemoveApplicationAccountFromUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除一个当前应用下的指定员工的应用账号
       *
       * @param request RemoveApplicationAccountFromUserRequest
       * @return RemoveApplicationAccountFromUserResponse
       */
      Models::RemoveApplicationAccountFromUserResponse removeApplicationAccountFromUser(const Models::RemoveApplicationAccountFromUserRequest &request);

      /**
       * @summary 将应用从授权规则中解除
       *
       * @param request RemoveApplicationFromAuthorizationRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveApplicationFromAuthorizationRuleResponse
       */
      Models::RemoveApplicationFromAuthorizationRuleResponse removeApplicationFromAuthorizationRuleWithOptions(const Models::RemoveApplicationFromAuthorizationRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 将应用从授权规则中解除
       *
       * @param request RemoveApplicationFromAuthorizationRuleRequest
       * @return RemoveApplicationFromAuthorizationRuleResponse
       */
      Models::RemoveApplicationFromAuthorizationRuleResponse removeApplicationFromAuthorizationRule(const Models::RemoveApplicationFromAuthorizationRuleRequest &request);

      /**
       * @summary 移除品牌关联条款
       *
       * @param request RemoveCustomPrivacyPoliciesFromBrandRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveCustomPrivacyPoliciesFromBrandResponse
       */
      Models::RemoveCustomPrivacyPoliciesFromBrandResponse removeCustomPrivacyPoliciesFromBrandWithOptions(const Models::RemoveCustomPrivacyPoliciesFromBrandRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 移除品牌关联条款
       *
       * @param request RemoveCustomPrivacyPoliciesFromBrandRequest
       * @return RemoveCustomPrivacyPoliciesFromBrandResponse
       */
      Models::RemoveCustomPrivacyPoliciesFromBrandResponse removeCustomPrivacyPoliciesFromBrand(const Models::RemoveCustomPrivacyPoliciesFromBrandRequest &request);

      /**
       * @summary 将组从授权规则中解除
       *
       * @param request RemoveGroupFromAuthorizationRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveGroupFromAuthorizationRuleResponse
       */
      Models::RemoveGroupFromAuthorizationRuleResponse removeGroupFromAuthorizationRuleWithOptions(const Models::RemoveGroupFromAuthorizationRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 将组从授权规则中解除
       *
       * @param request RemoveGroupFromAuthorizationRuleRequest
       * @return RemoveGroupFromAuthorizationRuleResponse
       */
      Models::RemoveGroupFromAuthorizationRuleResponse removeGroupFromAuthorizationRule(const Models::RemoveGroupFromAuthorizationRuleRequest &request);

      /**
       * @summary 将账户从授权规则中解除
       *
       * @param request RemoveUserFromAuthorizationRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveUserFromAuthorizationRuleResponse
       */
      Models::RemoveUserFromAuthorizationRuleResponse removeUserFromAuthorizationRuleWithOptions(const Models::RemoveUserFromAuthorizationRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 将账户从授权规则中解除
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
       * @summary 免费版续期
       *
       * @param request RenewFreeLicenseEndTimeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RenewFreeLicenseEndTimeResponse
       */
      Models::RenewFreeLicenseEndTimeResponse renewFreeLicenseEndTimeWithOptions(const Models::RenewFreeLicenseEndTimeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 免费版续期
       *
       * @param request RenewFreeLicenseEndTimeRequest
       * @return RenewFreeLicenseEndTimeResponse
       */
      Models::RenewFreeLicenseEndTimeResponse renewFreeLicenseEndTime(const Models::RenewFreeLicenseEndTimeRequest &request);

      /**
       * @summary Revokes the permissions to access an application from multiple account groups at a time in Identity as a Service (IDaaS) Employee Identity and Access Management (EIAM).
       *
       * @param request RevokeApplicationFromGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RevokeApplicationFromGroupsResponse
       */
      Models::RevokeApplicationFromGroupsResponse revokeApplicationFromGroupsWithOptions(const Models::RevokeApplicationFromGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Revokes the permissions to access an application from multiple account groups at a time in Identity as a Service (IDaaS) Employee Identity and Access Management (EIAM).
       *
       * @param request RevokeApplicationFromGroupsRequest
       * @return RevokeApplicationFromGroupsResponse
       */
      Models::RevokeApplicationFromGroupsResponse revokeApplicationFromGroups(const Models::RevokeApplicationFromGroupsRequest &request);

      /**
       * @summary Revokes the permissions to access an application from multiple Employee Identity and Access Management (EIAM) organizations at a time.
       *
       * @param request RevokeApplicationFromOrganizationalUnitsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RevokeApplicationFromOrganizationalUnitsResponse
       */
      Models::RevokeApplicationFromOrganizationalUnitsResponse revokeApplicationFromOrganizationalUnitsWithOptions(const Models::RevokeApplicationFromOrganizationalUnitsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Revokes the permissions to access an application from multiple Employee Identity and Access Management (EIAM) organizations at a time.
       *
       * @param request RevokeApplicationFromOrganizationalUnitsRequest
       * @return RevokeApplicationFromOrganizationalUnitsResponse
       */
      Models::RevokeApplicationFromOrganizationalUnitsResponse revokeApplicationFromOrganizationalUnits(const Models::RevokeApplicationFromOrganizationalUnitsRequest &request);

      /**
       * @summary Revokes the permissions to access an application from multiple Employee Identity and Access Management (EIAM) accounts at a time.
       *
       * @param request RevokeApplicationFromUsersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RevokeApplicationFromUsersResponse
       */
      Models::RevokeApplicationFromUsersResponse revokeApplicationFromUsersWithOptions(const Models::RevokeApplicationFromUsersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Revokes the permissions to access an application from multiple Employee Identity and Access Management (EIAM) accounts at a time.
       *
       * @param request RevokeApplicationFromUsersRequest
       * @return RevokeApplicationFromUsersResponse
       */
      Models::RevokeApplicationFromUsersResponse revokeApplicationFromUsers(const Models::RevokeApplicationFromUsersRequest &request);

      /**
       * @summary 解除指定ResourceServer到Client的授权
       *
       * @param request RevokeResourceServerFromClientRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RevokeResourceServerFromClientResponse
       */
      Models::RevokeResourceServerFromClientResponse revokeResourceServerFromClientWithOptions(const Models::RevokeResourceServerFromClientRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 解除指定ResourceServer到Client的授权
       *
       * @param request RevokeResourceServerFromClientRequest
       * @return RevokeResourceServerFromClientResponse
       */
      Models::RevokeResourceServerFromClientResponse revokeResourceServerFromClient(const Models::RevokeResourceServerFromClientRequest &request);

      /**
       * @summary 解除指定ResourceServer下的Scope给Client
       *
       * @param request RevokeResourceServerScopesFromClientRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RevokeResourceServerScopesFromClientResponse
       */
      Models::RevokeResourceServerScopesFromClientResponse revokeResourceServerScopesFromClientWithOptions(const Models::RevokeResourceServerScopesFromClientRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 解除指定ResourceServer下的Scope给Client
       *
       * @param request RevokeResourceServerScopesFromClientRequest
       * @return RevokeResourceServerScopesFromClientResponse
       */
      Models::RevokeResourceServerScopesFromClientResponse revokeResourceServerScopesFromClient(const Models::RevokeResourceServerScopesFromClientRequest &request);

      /**
       * @summary 取消被授予到组的ResourceServerScope权限
       *
       * @param request RevokeResourceServerScopesFromGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RevokeResourceServerScopesFromGroupResponse
       */
      Models::RevokeResourceServerScopesFromGroupResponse revokeResourceServerScopesFromGroupWithOptions(const Models::RevokeResourceServerScopesFromGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 取消被授予到组的ResourceServerScope权限
       *
       * @param request RevokeResourceServerScopesFromGroupRequest
       * @return RevokeResourceServerScopesFromGroupResponse
       */
      Models::RevokeResourceServerScopesFromGroupResponse revokeResourceServerScopesFromGroup(const Models::RevokeResourceServerScopesFromGroupRequest &request);

      /**
       * @summary 取消被授予到组织的ResourceServerScope权限
       *
       * @param request RevokeResourceServerScopesFromOrganizationalUnitRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RevokeResourceServerScopesFromOrganizationalUnitResponse
       */
      Models::RevokeResourceServerScopesFromOrganizationalUnitResponse revokeResourceServerScopesFromOrganizationalUnitWithOptions(const Models::RevokeResourceServerScopesFromOrganizationalUnitRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 取消被授予到组织的ResourceServerScope权限
       *
       * @param request RevokeResourceServerScopesFromOrganizationalUnitRequest
       * @return RevokeResourceServerScopesFromOrganizationalUnitResponse
       */
      Models::RevokeResourceServerScopesFromOrganizationalUnitResponse revokeResourceServerScopesFromOrganizationalUnit(const Models::RevokeResourceServerScopesFromOrganizationalUnitRequest &request);

      /**
       * @summary 取消被授予用户的ResourceServerScope权限
       *
       * @param request RevokeResourceServerScopesFromUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RevokeResourceServerScopesFromUserResponse
       */
      Models::RevokeResourceServerScopesFromUserResponse revokeResourceServerScopesFromUserWithOptions(const Models::RevokeResourceServerScopesFromUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 取消被授予用户的ResourceServerScope权限
       *
       * @param request RevokeResourceServerScopesFromUserRequest
       * @return RevokeResourceServerScopesFromUserResponse
       */
      Models::RevokeResourceServerScopesFromUserResponse revokeResourceServerScopesFromUser(const Models::RevokeResourceServerScopesFromUserRequest &request);

      /**
       * @summary Creates a synchronization job and immediately runs the job.
       *
       * @param request RunSynchronizationJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RunSynchronizationJobResponse
       */
      Models::RunSynchronizationJobResponse runSynchronizationJobWithOptions(const Models::RunSynchronizationJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a synchronization job and immediately runs the job.
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
       * @summary Configures the account synchronization feature for an application in Identity as a Service (IDaaS) Employee Identity and Access Management (EIAM).
       *
       * @param request SetApplicationProvisioningConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetApplicationProvisioningConfigResponse
       */
      Models::SetApplicationProvisioningConfigResponse setApplicationProvisioningConfigWithOptions(const Models::SetApplicationProvisioningConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures the account synchronization feature for an application in Identity as a Service (IDaaS) Employee Identity and Access Management (EIAM).
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
       * @summary 配置应用同步用户主组织
       *
       * @param request SetApplicationProvisioningUserPrimaryOrganizationalUnitRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetApplicationProvisioningUserPrimaryOrganizationalUnitResponse
       */
      Models::SetApplicationProvisioningUserPrimaryOrganizationalUnitResponse setApplicationProvisioningUserPrimaryOrganizationalUnitWithOptions(const Models::SetApplicationProvisioningUserPrimaryOrganizationalUnitRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 配置应用同步用户主组织
       *
       * @param request SetApplicationProvisioningUserPrimaryOrganizationalUnitRequest
       * @return SetApplicationProvisioningUserPrimaryOrganizationalUnitResponse
       */
      Models::SetApplicationProvisioningUserPrimaryOrganizationalUnitResponse setApplicationProvisioningUserPrimaryOrganizationalUnit(const Models::SetApplicationProvisioningUserPrimaryOrganizationalUnitRequest &request);

      /**
       * @summary 设置ResourceServer的Identifier
       *
       * @param request SetApplicationResourceServerIdentifierRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetApplicationResourceServerIdentifierResponse
       */
      Models::SetApplicationResourceServerIdentifierResponse setApplicationResourceServerIdentifierWithOptions(const Models::SetApplicationResourceServerIdentifierRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 设置ResourceServer的Identifier
       *
       * @param request SetApplicationResourceServerIdentifierRequest
       * @return SetApplicationResourceServerIdentifierResponse
       */
      Models::SetApplicationResourceServerIdentifierResponse setApplicationResourceServerIdentifier(const Models::SetApplicationResourceServerIdentifierRequest &request);

      /**
       * @summary Specifies the single sign-on (SSO) configuration attributes of an application in Identity as a Service (IDaaS) Employee IAM (EIAM).
       *
       * @description In IDaaS EIAM, the application management feature supports multiple SSO protocols for applications, including SAML 2.0 and OIDC protocols. Each application supports only one protocol, and the protocol cannot be changed after the application is created. You can specify the SSO configuration attributes of an application based on the supported SSO protocol.
       *
       * @param request SetApplicationSsoConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetApplicationSsoConfigResponse
       */
      Models::SetApplicationSsoConfigResponse setApplicationSsoConfigWithOptions(const Models::SetApplicationSsoConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Specifies the single sign-on (SSO) configuration attributes of an application in Identity as a Service (IDaaS) Employee IAM (EIAM).
       *
       * @description In IDaaS EIAM, the application management feature supports multiple SSO protocols for applications, including SAML 2.0 and OIDC protocols. Each application supports only one protocol, and the protocol cannot be changed after the application is created. You can specify the SSO configuration attributes of an application based on the supported SSO protocol.
       *
       * @param request SetApplicationSsoConfigRequest
       * @return SetApplicationSsoConfigResponse
       */
      Models::SetApplicationSsoConfigResponse setApplicationSsoConfig(const Models::SetApplicationSsoConfigRequest &request);

      /**
       * @summary Sets a domain name of an Employee Identity and Access Management (EIAM) instance as the default domain name.
       *
       * @param request SetDefaultDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetDefaultDomainResponse
       */
      Models::SetDefaultDomainResponse setDefaultDomainWithOptions(const Models::SetDefaultDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets a domain name of an Employee Identity and Access Management (EIAM) instance as the default domain name.
       *
       * @param request SetDefaultDomainRequest
       * @return SetDefaultDomainResponse
       */
      Models::SetDefaultDomainResponse setDefaultDomain(const Models::SetDefaultDomainRequest &request);

      /**
       * @summary Configures a forgot password policy for an Employee Identity and Access Management (EIAM) instance of Identity as a Service (IDaaS).
       *
       * @param request SetForgetPasswordConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetForgetPasswordConfigurationResponse
       */
      Models::SetForgetPasswordConfigurationResponse setForgetPasswordConfigurationWithOptions(const Models::SetForgetPasswordConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures a forgot password policy for an Employee Identity and Access Management (EIAM) instance of Identity as a Service (IDaaS).
       *
       * @param request SetForgetPasswordConfigurationRequest
       * @return SetForgetPasswordConfigurationResponse
       */
      Models::SetForgetPasswordConfigurationResponse setForgetPasswordConfiguration(const Models::SetForgetPasswordConfigurationRequest &request);

      /**
       * @summary 修改认证信息
       *
       * @param request SetIdentityProviderAuthnConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetIdentityProviderAuthnConfigurationResponse
       */
      Models::SetIdentityProviderAuthnConfigurationResponse setIdentityProviderAuthnConfigurationWithOptions(const Models::SetIdentityProviderAuthnConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改认证信息
       *
       * @param request SetIdentityProviderAuthnConfigurationRequest
       * @return SetIdentityProviderAuthnConfigurationResponse
       */
      Models::SetIdentityProviderAuthnConfigurationResponse setIdentityProviderAuthnConfiguration(const Models::SetIdentityProviderAuthnConfigurationRequest &request);

      /**
       * @summary Update IdP synchronization configuration.
       *
       * @param request SetIdentityProviderUdPullConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetIdentityProviderUdPullConfigurationResponse
       */
      Models::SetIdentityProviderUdPullConfigurationResponse setIdentityProviderUdPullConfigurationWithOptions(const Models::SetIdentityProviderUdPullConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update IdP synchronization configuration.
       *
       * @param request SetIdentityProviderUdPullConfigurationRequest
       * @return SetIdentityProviderUdPullConfigurationResponse
       */
      Models::SetIdentityProviderUdPullConfigurationResponse setIdentityProviderUdPullConfiguration(const Models::SetIdentityProviderUdPullConfigurationRequest &request);

      /**
       * @summary 修改IdP同步出配置
       *
       * @param request SetIdentityProviderUdPushConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetIdentityProviderUdPushConfigurationResponse
       */
      Models::SetIdentityProviderUdPushConfigurationResponse setIdentityProviderUdPushConfigurationWithOptions(const Models::SetIdentityProviderUdPushConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改IdP同步出配置
       *
       * @param request SetIdentityProviderUdPushConfigurationRequest
       * @return SetIdentityProviderUdPushConfigurationResponse
       */
      Models::SetIdentityProviderUdPushConfigurationResponse setIdentityProviderUdPushConfiguration(const Models::SetIdentityProviderUdPushConfigurationRequest &request);

      /**
       * @summary 设置实例控制项
       *
       * @param request SetInstanceControlConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetInstanceControlConfigurationResponse
       */
      Models::SetInstanceControlConfigurationResponse setInstanceControlConfigurationWithOptions(const Models::SetInstanceControlConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 设置实例控制项
       *
       * @param request SetInstanceControlConfigurationRequest
       * @return SetInstanceControlConfigurationResponse
       */
      Models::SetInstanceControlConfigurationResponse setInstanceControlConfiguration(const Models::SetInstanceControlConfigurationRequest &request);

      /**
       * @summary 设置实例语言、时区信息
       *
       * @param request SetInstanceGlobalizationConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetInstanceGlobalizationConfigResponse
       */
      Models::SetInstanceGlobalizationConfigResponse setInstanceGlobalizationConfigWithOptions(const Models::SetInstanceGlobalizationConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 设置实例语言、时区信息
       *
       * @param request SetInstanceGlobalizationConfigRequest
       * @return SetInstanceGlobalizationConfigResponse
       */
      Models::SetInstanceGlobalizationConfigResponse setInstanceGlobalizationConfig(const Models::SetInstanceGlobalizationConfigRequest &request);

      /**
       * @summary 为品牌设置登录后跳转应用
       *
       * @param request SetLoginRedirectApplicationForBrandRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetLoginRedirectApplicationForBrandResponse
       */
      Models::SetLoginRedirectApplicationForBrandResponse setLoginRedirectApplicationForBrandWithOptions(const Models::SetLoginRedirectApplicationForBrandRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 为品牌设置登录后跳转应用
       *
       * @param request SetLoginRedirectApplicationForBrandRequest
       * @return SetLoginRedirectApplicationForBrandResponse
       */
      Models::SetLoginRedirectApplicationForBrandResponse setLoginRedirectApplicationForBrand(const Models::SetLoginRedirectApplicationForBrandRequest &request);

      /**
       * @summary Configures a password complexity policy for an Employee Identity and Access Management (EIAM) instance of Identity as a Service (IDaaS).
       *
       * @param request SetPasswordComplexityConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetPasswordComplexityConfigurationResponse
       */
      Models::SetPasswordComplexityConfigurationResponse setPasswordComplexityConfigurationWithOptions(const Models::SetPasswordComplexityConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures a password complexity policy for an Employee Identity and Access Management (EIAM) instance of Identity as a Service (IDaaS).
       *
       * @param request SetPasswordComplexityConfigurationRequest
       * @return SetPasswordComplexityConfigurationResponse
       */
      Models::SetPasswordComplexityConfigurationResponse setPasswordComplexityConfiguration(const Models::SetPasswordComplexityConfigurationRequest &request);

      /**
       * @summary Configures a password expiration policy for an Employee Identity and Access Management (EIAM) instance of Identity as a Service (IDaaS).
       *
       * @param request SetPasswordExpirationConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetPasswordExpirationConfigurationResponse
       */
      Models::SetPasswordExpirationConfigurationResponse setPasswordExpirationConfigurationWithOptions(const Models::SetPasswordExpirationConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures a password expiration policy for an Employee Identity and Access Management (EIAM) instance of Identity as a Service (IDaaS).
       *
       * @param request SetPasswordExpirationConfigurationRequest
       * @return SetPasswordExpirationConfigurationResponse
       */
      Models::SetPasswordExpirationConfigurationResponse setPasswordExpirationConfiguration(const Models::SetPasswordExpirationConfigurationRequest &request);

      /**
       * @summary Configures a password history policy for an Employee Identity and Access Management (EIAM) instance of Identity as a Service (IDaaS).
       *
       * @param request SetPasswordHistoryConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetPasswordHistoryConfigurationResponse
       */
      Models::SetPasswordHistoryConfigurationResponse setPasswordHistoryConfigurationWithOptions(const Models::SetPasswordHistoryConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures a password history policy for an Employee Identity and Access Management (EIAM) instance of Identity as a Service (IDaaS).
       *
       * @param request SetPasswordHistoryConfigurationRequest
       * @return SetPasswordHistoryConfigurationResponse
       */
      Models::SetPasswordHistoryConfigurationResponse setPasswordHistoryConfiguration(const Models::SetPasswordHistoryConfigurationRequest &request);

      /**
       * @summary Sets the password initialization configurations for an Employee Identity and Access Management (EIAM) instance of Identity as a Service (IDaaS).
       *
       * @param request SetPasswordInitializationConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetPasswordInitializationConfigurationResponse
       */
      Models::SetPasswordInitializationConfigurationResponse setPasswordInitializationConfigurationWithOptions(const Models::SetPasswordInitializationConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets the password initialization configurations for an Employee Identity and Access Management (EIAM) instance of Identity as a Service (IDaaS).
       *
       * @param request SetPasswordInitializationConfigurationRequest
       * @return SetPasswordInitializationConfigurationResponse
       */
      Models::SetPasswordInitializationConfigurationResponse setPasswordInitializationConfiguration(const Models::SetPasswordInitializationConfigurationRequest &request);

      /**
       * @summary 设置指定的应用ClientPublicKey优先启用状态
       *
       * @param request SetPrimaryClientPublicKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetPrimaryClientPublicKeyResponse
       */
      Models::SetPrimaryClientPublicKeyResponse setPrimaryClientPublicKeyWithOptions(const Models::SetPrimaryClientPublicKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 设置指定的应用ClientPublicKey优先启用状态
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
       * @summary 设置WebAuthn配置
       *
       * @param request SetWebAuthnConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetWebAuthnConfigurationResponse
       */
      Models::SetWebAuthnConfigurationResponse setWebAuthnConfigurationWithOptions(const Models::SetWebAuthnConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 设置WebAuthn配置
       *
       * @param request SetWebAuthnConfigurationRequest
       * @return SetWebAuthnConfigurationResponse
       */
      Models::SetWebAuthnConfigurationResponse setWebAuthnConfiguration(const Models::SetWebAuthnConfigurationRequest &request);

      /**
       * @summary 解绑指定用户TOTP
       *
       * @param request UnbindTotpAuthenticatorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnbindTotpAuthenticatorResponse
       */
      Models::UnbindTotpAuthenticatorResponse unbindTotpAuthenticatorWithOptions(const Models::UnbindTotpAuthenticatorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 解绑指定用户TOTP
       *
       * @param request UnbindTotpAuthenticatorRequest
       * @return UnbindTotpAuthenticatorResponse
       */
      Models::UnbindTotpAuthenticatorResponse unbindTotpAuthenticator(const Models::UnbindTotpAuthenticatorRequest &request);

      /**
       * @summary 解绑三方登录账户
       *
       * @param request UnbindUserAuthnSourceMappingRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnbindUserAuthnSourceMappingResponse
       */
      Models::UnbindUserAuthnSourceMappingResponse unbindUserAuthnSourceMappingWithOptions(const Models::UnbindUserAuthnSourceMappingRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 解绑三方登录账户
       *
       * @param request UnbindUserAuthnSourceMappingRequest
       * @return UnbindUserAuthnSourceMappingResponse
       */
      Models::UnbindUserAuthnSourceMappingResponse unbindUserAuthnSourceMapping(const Models::UnbindUserAuthnSourceMappingRequest &request);

      /**
       * @summary Unlocks an Employee Identity and Access Management (EIAM) account of Identity as a Service (IDaaS) that is locked.
       *
       * @param request UnlockUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnlockUserResponse
       */
      Models::UnlockUserResponse unlockUserWithOptions(const Models::UnlockUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unlocks an Employee Identity and Access Management (EIAM) account of Identity as a Service (IDaaS) that is locked.
       *
       * @param request UnlockUserRequest
       * @return UnlockUserResponse
       */
      Models::UnlockUserResponse unlockUser(const Models::UnlockUserRequest &request);

      /**
       * @summary 修改应用高阶配置
       *
       * @param request UpdateApplicationAdvancedConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateApplicationAdvancedConfigResponse
       */
      Models::UpdateApplicationAdvancedConfigResponse updateApplicationAdvancedConfigWithOptions(const Models::UpdateApplicationAdvancedConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改应用高阶配置
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
       * @summary 更新应用的指定ClientSecret的到期时间
       *
       * @param request UpdateApplicationClientSecretExpirationTimeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateApplicationClientSecretExpirationTimeResponse
       */
      Models::UpdateApplicationClientSecretExpirationTimeResponse updateApplicationClientSecretExpirationTimeWithOptions(const Models::UpdateApplicationClientSecretExpirationTimeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新应用的指定ClientSecret的到期时间
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
       * @summary 更新应用联邦凭证
       *
       * @param request UpdateApplicationFederatedCredentialRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateApplicationFederatedCredentialResponse
       */
      Models::UpdateApplicationFederatedCredentialResponse updateApplicationFederatedCredentialWithOptions(const Models::UpdateApplicationFederatedCredentialRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新应用联邦凭证
       *
       * @param request UpdateApplicationFederatedCredentialRequest
       * @return UpdateApplicationFederatedCredentialResponse
       */
      Models::UpdateApplicationFederatedCredentialResponse updateApplicationFederatedCredential(const Models::UpdateApplicationFederatedCredentialRequest &request);

      /**
       * @summary 更新应用联邦凭证描述
       *
       * @param request UpdateApplicationFederatedCredentialDescriptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateApplicationFederatedCredentialDescriptionResponse
       */
      Models::UpdateApplicationFederatedCredentialDescriptionResponse updateApplicationFederatedCredentialDescriptionWithOptions(const Models::UpdateApplicationFederatedCredentialDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新应用联邦凭证描述
       *
       * @param request UpdateApplicationFederatedCredentialDescriptionRequest
       * @return UpdateApplicationFederatedCredentialDescriptionResponse
       */
      Models::UpdateApplicationFederatedCredentialDescriptionResponse updateApplicationFederatedCredentialDescription(const Models::UpdateApplicationFederatedCredentialDescriptionRequest &request);

      /**
       * @summary 更新应用基本信息
       *
       * @param request UpdateApplicationInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateApplicationInfoResponse
       */
      Models::UpdateApplicationInfoResponse updateApplicationInfoWithOptions(const Models::UpdateApplicationInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新应用基本信息
       *
       * @param request UpdateApplicationInfoRequest
       * @return UpdateApplicationInfoResponse
       */
      Models::UpdateApplicationInfoResponse updateApplicationInfo(const Models::UpdateApplicationInfoRequest &request);

      /**
       * @summary 修改应用角色
       *
       * @param request UpdateApplicationRoleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateApplicationRoleResponse
       */
      Models::UpdateApplicationRoleResponse updateApplicationRoleWithOptions(const Models::UpdateApplicationRoleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改应用角色
       *
       * @param request UpdateApplicationRoleRequest
       * @return UpdateApplicationRoleResponse
       */
      Models::UpdateApplicationRoleResponse updateApplicationRole(const Models::UpdateApplicationRoleRequest &request);

      /**
       * @summary 修改应用角色描述
       *
       * @param request UpdateApplicationRoleDescriptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateApplicationRoleDescriptionResponse
       */
      Models::UpdateApplicationRoleDescriptionResponse updateApplicationRoleDescriptionWithOptions(const Models::UpdateApplicationRoleDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改应用角色描述
       *
       * @param request UpdateApplicationRoleDescriptionRequest
       * @return UpdateApplicationRoleDescriptionResponse
       */
      Models::UpdateApplicationRoleDescriptionResponse updateApplicationRoleDescription(const Models::UpdateApplicationRoleDescriptionRequest &request);

      /**
       * @summary 更新模板应用的SSO参数
       *
       * @param request UpdateApplicationSsoFormParamsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateApplicationSsoFormParamsResponse
       */
      Models::UpdateApplicationSsoFormParamsResponse updateApplicationSsoFormParamsWithOptions(const Models::UpdateApplicationSsoFormParamsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新模板应用的SSO参数
       *
       * @param request UpdateApplicationSsoFormParamsRequest
       * @return UpdateApplicationSsoFormParamsResponse
       */
      Models::UpdateApplicationSsoFormParamsResponse updateApplicationSsoFormParams(const Models::UpdateApplicationSsoFormParamsRequest &request);

      /**
       * @summary 更新ApplicationToken过期时间
       *
       * @param request UpdateApplicationTokenExpirationTimeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateApplicationTokenExpirationTimeResponse
       */
      Models::UpdateApplicationTokenExpirationTimeResponse updateApplicationTokenExpirationTimeWithOptions(const Models::UpdateApplicationTokenExpirationTimeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新ApplicationToken过期时间
       *
       * @param request UpdateApplicationTokenExpirationTimeRequest
       * @return UpdateApplicationTokenExpirationTimeResponse
       */
      Models::UpdateApplicationTokenExpirationTimeResponse updateApplicationTokenExpirationTime(const Models::UpdateApplicationTokenExpirationTimeRequest &request);

      /**
       * @summary 更新授权规则信息
       *
       * @param request UpdateAuthorizationRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAuthorizationRuleResponse
       */
      Models::UpdateAuthorizationRuleResponse updateAuthorizationRuleWithOptions(const Models::UpdateAuthorizationRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新授权规则信息
       *
       * @param request UpdateAuthorizationRuleRequest
       * @return UpdateAuthorizationRuleResponse
       */
      Models::UpdateAuthorizationRuleResponse updateAuthorizationRule(const Models::UpdateAuthorizationRuleRequest &request);

      /**
       * @summary 更新授权规则应用关联关系属性
       *
       * @param request UpdateAuthorizationRuleApplicationAttachmentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAuthorizationRuleApplicationAttachmentResponse
       */
      Models::UpdateAuthorizationRuleApplicationAttachmentResponse updateAuthorizationRuleApplicationAttachmentWithOptions(const Models::UpdateAuthorizationRuleApplicationAttachmentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新授权规则应用关联关系属性
       *
       * @param request UpdateAuthorizationRuleApplicationAttachmentRequest
       * @return UpdateAuthorizationRuleApplicationAttachmentResponse
       */
      Models::UpdateAuthorizationRuleApplicationAttachmentResponse updateAuthorizationRuleApplicationAttachment(const Models::UpdateAuthorizationRuleApplicationAttachmentRequest &request);

      /**
       * @summary 更新授权规则描述信息
       *
       * @param request UpdateAuthorizationRuleDescriptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAuthorizationRuleDescriptionResponse
       */
      Models::UpdateAuthorizationRuleDescriptionResponse updateAuthorizationRuleDescriptionWithOptions(const Models::UpdateAuthorizationRuleDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新授权规则描述信息
       *
       * @param request UpdateAuthorizationRuleDescriptionRequest
       * @return UpdateAuthorizationRuleDescriptionResponse
       */
      Models::UpdateAuthorizationRuleDescriptionResponse updateAuthorizationRuleDescription(const Models::UpdateAuthorizationRuleDescriptionRequest &request);

      /**
       * @summary 更新授权规则组关联关系属性
       *
       * @param request UpdateAuthorizationRuleGroupAttachmentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAuthorizationRuleGroupAttachmentResponse
       */
      Models::UpdateAuthorizationRuleGroupAttachmentResponse updateAuthorizationRuleGroupAttachmentWithOptions(const Models::UpdateAuthorizationRuleGroupAttachmentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新授权规则组关联关系属性
       *
       * @param request UpdateAuthorizationRuleGroupAttachmentRequest
       * @return UpdateAuthorizationRuleGroupAttachmentResponse
       */
      Models::UpdateAuthorizationRuleGroupAttachmentResponse updateAuthorizationRuleGroupAttachment(const Models::UpdateAuthorizationRuleGroupAttachmentRequest &request);

      /**
       * @summary 更新授权规则账户关联关系属性
       *
       * @param request UpdateAuthorizationRuleUserAttachmentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAuthorizationRuleUserAttachmentResponse
       */
      Models::UpdateAuthorizationRuleUserAttachmentResponse updateAuthorizationRuleUserAttachmentWithOptions(const Models::UpdateAuthorizationRuleUserAttachmentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新授权规则账户关联关系属性
       *
       * @param request UpdateAuthorizationRuleUserAttachmentRequest
       * @return UpdateAuthorizationRuleUserAttachmentResponse
       */
      Models::UpdateAuthorizationRuleUserAttachmentResponse updateAuthorizationRuleUserAttachment(const Models::UpdateAuthorizationRuleUserAttachmentRequest &request);

      /**
       * @summary 修改品牌
       *
       * @param request UpdateBrandRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateBrandResponse
       */
      Models::UpdateBrandResponse updateBrandWithOptions(const Models::UpdateBrandRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改品牌
       *
       * @param request UpdateBrandRequest
       * @return UpdateBrandResponse
       */
      Models::UpdateBrandResponse updateBrand(const Models::UpdateBrandRequest &request);

      /**
       * @summary 更新云账号
       *
       * @param request UpdateCloudAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCloudAccountResponse
       */
      Models::UpdateCloudAccountResponse updateCloudAccountWithOptions(const Models::UpdateCloudAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新云账号
       *
       * @param request UpdateCloudAccountRequest
       * @return UpdateCloudAccountResponse
       */
      Models::UpdateCloudAccountResponse updateCloudAccount(const Models::UpdateCloudAccountRequest &request);

      /**
       * @summary 更新云账号描述
       *
       * @param request UpdateCloudAccountDescriptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCloudAccountDescriptionResponse
       */
      Models::UpdateCloudAccountDescriptionResponse updateCloudAccountDescriptionWithOptions(const Models::UpdateCloudAccountDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新云账号描述
       *
       * @param request UpdateCloudAccountDescriptionRequest
       * @return UpdateCloudAccountDescriptionResponse
       */
      Models::UpdateCloudAccountDescriptionResponse updateCloudAccountDescription(const Models::UpdateCloudAccountDescriptionRequest &request);

      /**
       * @summary 更新云角色描述
       *
       * @param request UpdateCloudAccountRoleDescriptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCloudAccountRoleDescriptionResponse
       */
      Models::UpdateCloudAccountRoleDescriptionResponse updateCloudAccountRoleDescriptionWithOptions(const Models::UpdateCloudAccountRoleDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新云角色描述
       *
       * @param request UpdateCloudAccountRoleDescriptionRequest
       * @return UpdateCloudAccountRoleDescriptionResponse
       */
      Models::UpdateCloudAccountRoleDescriptionResponse updateCloudAccountRoleDescription(const Models::UpdateCloudAccountRoleDescriptionRequest &request);

      /**
       * @summary Update Conditional Access Policy
       *
       * @description Update Conditional Access Policy
       *
       * @param request UpdateConditionalAccessPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateConditionalAccessPolicyResponse
       */
      Models::UpdateConditionalAccessPolicyResponse updateConditionalAccessPolicyWithOptions(const Models::UpdateConditionalAccessPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update Conditional Access Policy
       *
       * @description Update Conditional Access Policy
       *
       * @param request UpdateConditionalAccessPolicyRequest
       * @return UpdateConditionalAccessPolicyResponse
       */
      Models::UpdateConditionalAccessPolicyResponse updateConditionalAccessPolicy(const Models::UpdateConditionalAccessPolicyRequest &request);

      /**
       * @summary Update Conditional Access Policy Description
       *
       * @description Update Conditional Access Policy Description
       *
       * @param request UpdateConditionalAccessPolicyDescriptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateConditionalAccessPolicyDescriptionResponse
       */
      Models::UpdateConditionalAccessPolicyDescriptionResponse updateConditionalAccessPolicyDescriptionWithOptions(const Models::UpdateConditionalAccessPolicyDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update Conditional Access Policy Description
       *
       * @description Update Conditional Access Policy Description
       *
       * @param request UpdateConditionalAccessPolicyDescriptionRequest
       * @return UpdateConditionalAccessPolicyDescriptionResponse
       */
      Models::UpdateConditionalAccessPolicyDescriptionResponse updateConditionalAccessPolicyDescription(const Models::UpdateConditionalAccessPolicyDescriptionRequest &request);

      /**
       * @summary 更新自定义条款
       *
       * @param request UpdateCustomPrivacyPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCustomPrivacyPolicyResponse
       */
      Models::UpdateCustomPrivacyPolicyResponse updateCustomPrivacyPolicyWithOptions(const Models::UpdateCustomPrivacyPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新自定义条款
       *
       * @param request UpdateCustomPrivacyPolicyRequest
       * @return UpdateCustomPrivacyPolicyResponse
       */
      Models::UpdateCustomPrivacyPolicyResponse updateCustomPrivacyPolicy(const Models::UpdateCustomPrivacyPolicyRequest &request);

      /**
       * @summary 修改域名关联的品牌。
       *
       * @param request UpdateDomainBrandRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDomainBrandResponse
       */
      Models::UpdateDomainBrandResponse updateDomainBrandWithOptions(const Models::UpdateDomainBrandRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改域名关联的品牌。
       *
       * @param request UpdateDomainBrandRequest
       * @return UpdateDomainBrandResponse
       */
      Models::UpdateDomainBrandResponse updateDomainBrand(const Models::UpdateDomainBrandRequest &request);

      /**
       * @summary 更新域名备案号。
       *
       * @param request UpdateDomainIcpNumberRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDomainIcpNumberResponse
       */
      Models::UpdateDomainIcpNumberResponse updateDomainIcpNumberWithOptions(const Models::UpdateDomainIcpNumberRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新域名备案号。
       *
       * @param request UpdateDomainIcpNumberRequest
       * @return UpdateDomainIcpNumberResponse
       */
      Models::UpdateDomainIcpNumberResponse updateDomainIcpNumber(const Models::UpdateDomainIcpNumberRequest &request);

      /**
       * @summary 更新联邦凭证提供方
       *
       * @param request UpdateFederatedCredentialProviderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateFederatedCredentialProviderResponse
       */
      Models::UpdateFederatedCredentialProviderResponse updateFederatedCredentialProviderWithOptions(const Models::UpdateFederatedCredentialProviderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新联邦凭证提供方
       *
       * @param request UpdateFederatedCredentialProviderRequest
       * @return UpdateFederatedCredentialProviderResponse
       */
      Models::UpdateFederatedCredentialProviderResponse updateFederatedCredentialProvider(const Models::UpdateFederatedCredentialProviderRequest &request);

      /**
       * @summary 更新联邦凭证提供方描述
       *
       * @param request UpdateFederatedCredentialProviderDescriptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateFederatedCredentialProviderDescriptionResponse
       */
      Models::UpdateFederatedCredentialProviderDescriptionResponse updateFederatedCredentialProviderDescriptionWithOptions(const Models::UpdateFederatedCredentialProviderDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新联邦凭证提供方描述
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
       * @summary 更新idp基础配置
       *
       * @param request UpdateIdentityProviderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateIdentityProviderResponse
       */
      Models::UpdateIdentityProviderResponse updateIdentityProviderWithOptions(const Models::UpdateIdentityProviderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新idp基础配置
       *
       * @param request UpdateIdentityProviderRequest
       * @return UpdateIdentityProviderResponse
       */
      Models::UpdateIdentityProviderResponse updateIdentityProvider(const Models::UpdateIdentityProviderRequest &request);

      /**
       * @summary Modifies the description of an Enterprise Identity and Access Management (EIAM) instance of Identity as a Service (IDaaS).
       *
       * @param request UpdateInstanceDescriptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateInstanceDescriptionResponse
       */
      Models::UpdateInstanceDescriptionResponse updateInstanceDescriptionWithOptions(const Models::UpdateInstanceDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the description of an Enterprise Identity and Access Management (EIAM) instance of Identity as a Service (IDaaS).
       *
       * @param request UpdateInstanceDescriptionRequest
       * @return UpdateInstanceDescriptionResponse
       */
      Models::UpdateInstanceDescriptionResponse updateInstanceDescription(const Models::UpdateInstanceDescriptionRequest &request);

      /**
       * @summary 更新一个专属网络端点的名称。
       *
       * @param request UpdateNetworkAccessEndpointNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateNetworkAccessEndpointNameResponse
       */
      Models::UpdateNetworkAccessEndpointNameResponse updateNetworkAccessEndpointNameWithOptions(const Models::UpdateNetworkAccessEndpointNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新一个专属网络端点的名称。
       *
       * @param request UpdateNetworkAccessEndpointNameRequest
       * @return UpdateNetworkAccessEndpointNameResponse
       */
      Models::UpdateNetworkAccessEndpointNameResponse updateNetworkAccessEndpointName(const Models::UpdateNetworkAccessEndpointNameRequest &request);

      /**
       * @summary 更新网络区域对象
       *
       * @param request UpdateNetworkZoneRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateNetworkZoneResponse
       */
      Models::UpdateNetworkZoneResponse updateNetworkZoneWithOptions(const Models::UpdateNetworkZoneRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新网络区域对象
       *
       * @param request UpdateNetworkZoneRequest
       * @return UpdateNetworkZoneResponse
       */
      Models::UpdateNetworkZoneResponse updateNetworkZone(const Models::UpdateNetworkZoneRequest &request);

      /**
       * @summary 更新网络区域对象描述
       *
       * @param request UpdateNetworkZoneDescriptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateNetworkZoneDescriptionResponse
       */
      Models::UpdateNetworkZoneDescriptionResponse updateNetworkZoneDescriptionWithOptions(const Models::UpdateNetworkZoneDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新网络区域对象描述
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
       * @summary 更新指定ResourceServer下的Scope
       *
       * @param request UpdateResourceServerScopeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateResourceServerScopeResponse
       */
      Models::UpdateResourceServerScopeResponse updateResourceServerScopeWithOptions(const Models::UpdateResourceServerScopeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新指定ResourceServer下的Scope
       *
       * @param request UpdateResourceServerScopeRequest
       * @return UpdateResourceServerScopeResponse
       */
      Models::UpdateResourceServerScopeResponse updateResourceServerScope(const Models::UpdateResourceServerScopeRequest &request);

      /**
       * @summary Updates the basic information about an Employee Identity and Access Management (EIAM) account of Identity as a Service (IDaaS).
       *
       * @param request UpdateUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateUserResponse
       */
      Models::UpdateUserResponse updateUserWithOptions(const Models::UpdateUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the basic information about an Employee Identity and Access Management (EIAM) account of Identity as a Service (IDaaS).
       *
       * @param request UpdateUserRequest
       * @return UpdateUserResponse
       */
      Models::UpdateUserResponse updateUser(const Models::UpdateUserRequest &request);

      /**
       * @summary Modifies the description of an Identity as a Service (IDaaS) Employee Identity and Access Management (EIAM) account.
       *
       * @param request UpdateUserDescriptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateUserDescriptionResponse
       */
      Models::UpdateUserDescriptionResponse updateUserDescriptionWithOptions(const Models::UpdateUserDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the description of an Identity as a Service (IDaaS) Employee Identity and Access Management (EIAM) account.
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
