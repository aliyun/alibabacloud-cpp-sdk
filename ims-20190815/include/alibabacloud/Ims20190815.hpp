// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_IMS20190815_HPP_
#define ALIBABACLOUD_IMS20190815_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Ims20190815Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Ims20190815.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Adds a client ID to an OpenID Connect (OIDC) identity provider (IdP).
       *
       * @param request AddClientIdToOIDCProviderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddClientIdToOIDCProviderResponse
       */
      Models::AddClientIdToOIDCProviderResponse addClientIdToOIDCProviderWithOptions(const Models::AddClientIdToOIDCProviderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a client ID to an OpenID Connect (OIDC) identity provider (IdP).
       *
       * @param request AddClientIdToOIDCProviderRequest
       * @return AddClientIdToOIDCProviderResponse
       */
      Models::AddClientIdToOIDCProviderResponse addClientIdToOIDCProvider(const Models::AddClientIdToOIDCProviderRequest &request);

      /**
       * @summary Adds a fingerprint to an OpenID Connect (OIDC) identity provider (IdP).
       *
       * @description ###
       * This topic provides an example on how to add the fingerprint `902ef2deeb3c5b13ea4c3d5193629309e231****` to the OIDC IdP named `TestOIDCProvider`.
       *
       * @param request AddFingerprintToOIDCProviderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddFingerprintToOIDCProviderResponse
       */
      Models::AddFingerprintToOIDCProviderResponse addFingerprintToOIDCProviderWithOptions(const Models::AddFingerprintToOIDCProviderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a fingerprint to an OpenID Connect (OIDC) identity provider (IdP).
       *
       * @description ###
       * This topic provides an example on how to add the fingerprint `902ef2deeb3c5b13ea4c3d5193629309e231****` to the OIDC IdP named `TestOIDCProvider`.
       *
       * @param request AddFingerprintToOIDCProviderRequest
       * @return AddFingerprintToOIDCProviderResponse
       */
      Models::AddFingerprintToOIDCProviderResponse addFingerprintToOIDCProvider(const Models::AddFingerprintToOIDCProviderRequest &request);

      /**
       * @summary Adds a Resource Access Management (RAM) user to a RAM user group.
       *
       * @param request AddUserToGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddUserToGroupResponse
       */
      Models::AddUserToGroupResponse addUserToGroupWithOptions(const Models::AddUserToGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a Resource Access Management (RAM) user to a RAM user group.
       *
       * @param request AddUserToGroupRequest
       * @return AddUserToGroupResponse
       */
      Models::AddUserToGroupResponse addUserToGroup(const Models::AddUserToGroupRequest &request);

      /**
       * @summary Binds a multi-factor authentication (MFA) device to a Resource Access Management (RAM) user.
       *
       * @param request BindMFADeviceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BindMFADeviceResponse
       */
      Models::BindMFADeviceResponse bindMFADeviceWithOptions(const Models::BindMFADeviceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Binds a multi-factor authentication (MFA) device to a Resource Access Management (RAM) user.
       *
       * @param request BindMFADeviceRequest
       * @return BindMFADeviceResponse
       */
      Models::BindMFADeviceResponse bindMFADevice(const Models::BindMFADeviceRequest &request);

      /**
       * @summary Changes the password that is used to log on to the console for a Resource Access Management (RAM) user.
       *
       * @description >  This operation is available only for RAM users. Before you call this operation, make sure that `AllowUserToChangePassword` in [SetSecurityPreference](https://help.aliyun.com/document_detail/43765.html) is set to `True`. The value True indicates that RAM users can manage their passwords.
       *
       * @param request ChangePasswordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangePasswordResponse
       */
      Models::ChangePasswordResponse changePasswordWithOptions(const Models::ChangePasswordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the password that is used to log on to the console for a Resource Access Management (RAM) user.
       *
       * @description >  This operation is available only for RAM users. Before you call this operation, make sure that `AllowUserToChangePassword` in [SetSecurityPreference](https://help.aliyun.com/document_detail/43765.html) is set to `True`. The value True indicates that RAM users can manage their passwords.
       *
       * @param request ChangePasswordRequest
       * @return ChangePasswordResponse
       */
      Models::ChangePasswordResponse changePassword(const Models::ChangePasswordRequest &request);

      /**
       * @summary Creates an AccessKey pair for an Alibaba Cloud account or a Resource Access Management (RAM) user.
       *
       * @param request CreateAccessKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAccessKeyResponse
       */
      Models::CreateAccessKeyResponse createAccessKeyWithOptions(const Models::CreateAccessKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an AccessKey pair for an Alibaba Cloud account or a Resource Access Management (RAM) user.
       *
       * @param request CreateAccessKeyRequest
       * @return CreateAccessKeyResponse
       */
      Models::CreateAccessKeyResponse createAccessKey(const Models::CreateAccessKeyRequest &request);

      /**
       * @summary Creates an application secret for an application.
       *
       * @param request CreateAppSecretRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAppSecretResponse
       */
      Models::CreateAppSecretResponse createAppSecretWithOptions(const Models::CreateAppSecretRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an application secret for an application.
       *
       * @param request CreateAppSecretRequest
       * @return CreateAppSecretResponse
       */
      Models::CreateAppSecretResponse createAppSecret(const Models::CreateAppSecretRequest &request);

      /**
       * @summary Creates an application.
       *
       * @param request CreateApplicationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateApplicationResponse
       */
      Models::CreateApplicationResponse createApplicationWithOptions(const Models::CreateApplicationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an application.
       *
       * @param request CreateApplicationRequest
       * @return CreateApplicationResponse
       */
      Models::CreateApplicationResponse createApplication(const Models::CreateApplicationRequest &request);

      /**
       * @summary Creates a Resource Access Management (RAM) user group.
       *
       * @param request CreateGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateGroupResponse
       */
      Models::CreateGroupResponse createGroupWithOptions(const Models::CreateGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a Resource Access Management (RAM) user group.
       *
       * @param request CreateGroupRequest
       * @return CreateGroupResponse
       */
      Models::CreateGroupResponse createGroup(const Models::CreateGroupRequest &request);

      /**
       * @summary Enables logon to the console for a Resource Access Management (RAM) user.
       *
       * @param request CreateLoginProfileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLoginProfileResponse
       */
      Models::CreateLoginProfileResponse createLoginProfileWithOptions(const Models::CreateLoginProfileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables logon to the console for a Resource Access Management (RAM) user.
       *
       * @param request CreateLoginProfileRequest
       * @return CreateLoginProfileResponse
       */
      Models::CreateLoginProfileResponse createLoginProfile(const Models::CreateLoginProfileRequest &request);

      /**
       * @summary Creates an OpenID Connect (OIDC) identity provider (IdP) to configure a trust relationship between Alibaba Cloud and an external IdP. This topic provides an example on how to create an IdP named TestOIDCProvider to configure a trust relationship between the external IdP Okta and Alibaba Cloud.
       *
       * @description ### [](#)Prerequisites
       * Before you call this operation, make sure that the information such as the URL of the issuer, the fingerprints of HTTPS certificate authority (CA) certificates, and the client IDs are obtained from an external IdP, such as Google Workspace or Okta.
       * ### [](#)Limits
       * *   You can create a maximum of 100 OIDC IdPs in an Alibaba Cloud account.
       * *   You can add a maximum of 50 client IDs to an OIDC IdP.
       * *   You can add a maximum of five fingerprints to an OIDC IdP.
       * ### [](#)Operation description
       * This topic provides an example on how to create an IdP named `TestOIDCProvider` to configure a trust relationship between the external IdP and Alibaba Cloud.
       *
       * @param request CreateOIDCProviderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateOIDCProviderResponse
       */
      Models::CreateOIDCProviderResponse createOIDCProviderWithOptions(const Models::CreateOIDCProviderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an OpenID Connect (OIDC) identity provider (IdP) to configure a trust relationship between Alibaba Cloud and an external IdP. This topic provides an example on how to create an IdP named TestOIDCProvider to configure a trust relationship between the external IdP Okta and Alibaba Cloud.
       *
       * @description ### [](#)Prerequisites
       * Before you call this operation, make sure that the information such as the URL of the issuer, the fingerprints of HTTPS certificate authority (CA) certificates, and the client IDs are obtained from an external IdP, such as Google Workspace or Okta.
       * ### [](#)Limits
       * *   You can create a maximum of 100 OIDC IdPs in an Alibaba Cloud account.
       * *   You can add a maximum of 50 client IDs to an OIDC IdP.
       * *   You can add a maximum of five fingerprints to an OIDC IdP.
       * ### [](#)Operation description
       * This topic provides an example on how to create an IdP named `TestOIDCProvider` to configure a trust relationship between the external IdP and Alibaba Cloud.
       *
       * @param request CreateOIDCProviderRequest
       * @return CreateOIDCProviderResponse
       */
      Models::CreateOIDCProviderResponse createOIDCProvider(const Models::CreateOIDCProviderRequest &request);

      /**
       * @summary Creates an identity provider (IdP) for role-based single sign-on (SSO).
       *
       * @param request CreateSAMLProviderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSAMLProviderResponse
       */
      Models::CreateSAMLProviderResponse createSAMLProviderWithOptions(const Models::CreateSAMLProviderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an identity provider (IdP) for role-based single sign-on (SSO).
       *
       * @param request CreateSAMLProviderRequest
       * @return CreateSAMLProviderResponse
       */
      Models::CreateSAMLProviderResponse createSAMLProvider(const Models::CreateSAMLProviderRequest &request);

      /**
       * @summary Creates a RAM user.
       *
       * @description This topic provides an example on how to create a RAM user named `test`.
       *
       * @param request CreateUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateUserResponse
       */
      Models::CreateUserResponse createUserWithOptions(const Models::CreateUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a RAM user.
       *
       * @description This topic provides an example on how to create a RAM user named `test`.
       *
       * @param request CreateUserRequest
       * @return CreateUserResponse
       */
      Models::CreateUserResponse createUser(const Models::CreateUserRequest &request);

      /**
       * @summary Creates a virtual multi-factor authentication (MFA) device.
       *
       * @param request CreateVirtualMFADeviceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVirtualMFADeviceResponse
       */
      Models::CreateVirtualMFADeviceResponse createVirtualMFADeviceWithOptions(const Models::CreateVirtualMFADeviceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a virtual multi-factor authentication (MFA) device.
       *
       * @param request CreateVirtualMFADeviceRequest
       * @return CreateVirtualMFADeviceResponse
       */
      Models::CreateVirtualMFADeviceResponse createVirtualMFADevice(const Models::CreateVirtualMFADeviceRequest &request);

      /**
       * @summary Deletes an AccessKey pair for an Alibaba Cloud account or a Resource Access Management (RAM) user.
       *
       * @param request DeleteAccessKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAccessKeyResponse
       */
      Models::DeleteAccessKeyResponse deleteAccessKeyWithOptions(const Models::DeleteAccessKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an AccessKey pair for an Alibaba Cloud account or a Resource Access Management (RAM) user.
       *
       * @param request DeleteAccessKeyRequest
       * @return DeleteAccessKeyResponse
       */
      Models::DeleteAccessKeyResponse deleteAccessKey(const Models::DeleteAccessKeyRequest &request);

      /**
       * @summary Deletes a specific AccessKey pair that belongs to a Resource Access Management (RAM) user from the recycle bin.
       *
       * @param request DeleteAccessKeyInRecycleBinRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAccessKeyInRecycleBinResponse
       */
      Models::DeleteAccessKeyInRecycleBinResponse deleteAccessKeyInRecycleBinWithOptions(const Models::DeleteAccessKeyInRecycleBinRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specific AccessKey pair that belongs to a Resource Access Management (RAM) user from the recycle bin.
       *
       * @param request DeleteAccessKeyInRecycleBinRequest
       * @return DeleteAccessKeyInRecycleBinResponse
       */
      Models::DeleteAccessKeyInRecycleBinResponse deleteAccessKeyInRecycleBin(const Models::DeleteAccessKeyInRecycleBinRequest &request);

      /**
       * @summary Deletes the application secret of an application.
       *
       * @param request DeleteAppSecretRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAppSecretResponse
       */
      Models::DeleteAppSecretResponse deleteAppSecretWithOptions(const Models::DeleteAppSecretRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the application secret of an application.
       *
       * @param request DeleteAppSecretRequest
       * @return DeleteAppSecretResponse
       */
      Models::DeleteAppSecretResponse deleteAppSecret(const Models::DeleteAppSecretRequest &request);

      /**
       * @summary Deletes an application.
       *
       * @param request DeleteApplicationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteApplicationResponse
       */
      Models::DeleteApplicationResponse deleteApplicationWithOptions(const Models::DeleteApplicationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an application.
       *
       * @param request DeleteApplicationRequest
       * @return DeleteApplicationResponse
       */
      Models::DeleteApplicationResponse deleteApplication(const Models::DeleteApplicationRequest &request);

      /**
       * @summary Deletes a Resource Access Management (RAM) user group.
       *
       * @description Before you delete a RAM user group, make sure that no policies are attached to the group and no RAM users are included in the group.
       *
       * @param request DeleteGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteGroupResponse
       */
      Models::DeleteGroupResponse deleteGroupWithOptions(const Models::DeleteGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a Resource Access Management (RAM) user group.
       *
       * @description Before you delete a RAM user group, make sure that no policies are attached to the group and no RAM users are included in the group.
       *
       * @param request DeleteGroupRequest
       * @return DeleteGroupResponse
       */
      Models::DeleteGroupResponse deleteGroup(const Models::DeleteGroupRequest &request);

      /**
       * @summary Disables logon to the console for a Resource Access Management (RAM) user.
       *
       * @param request DeleteLoginProfileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLoginProfileResponse
       */
      Models::DeleteLoginProfileResponse deleteLoginProfileWithOptions(const Models::DeleteLoginProfileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables logon to the console for a Resource Access Management (RAM) user.
       *
       * @param request DeleteLoginProfileRequest
       * @return DeleteLoginProfileResponse
       */
      Models::DeleteLoginProfileResponse deleteLoginProfile(const Models::DeleteLoginProfileRequest &request);

      /**
       * @summary Deletes an OpenID Connect (OIDC) identity provider (IdP).
       *
       * @description ###
       * This topic provides an example on how to remove the OIDC IdP named `TestOIDCProvider`.
       *
       * @param request DeleteOIDCProviderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteOIDCProviderResponse
       */
      Models::DeleteOIDCProviderResponse deleteOIDCProviderWithOptions(const Models::DeleteOIDCProviderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an OpenID Connect (OIDC) identity provider (IdP).
       *
       * @description ###
       * This topic provides an example on how to remove the OIDC IdP named `TestOIDCProvider`.
       *
       * @param request DeleteOIDCProviderRequest
       * @return DeleteOIDCProviderResponse
       */
      Models::DeleteOIDCProviderResponse deleteOIDCProvider(const Models::DeleteOIDCProviderRequest &request);

      /**
       * @summary Deletes a passkey for a Resource Access Management (RAM) user.
       *
       * @param request DeletePasskeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePasskeyResponse
       */
      Models::DeletePasskeyResponse deletePasskeyWithOptions(const Models::DeletePasskeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a passkey for a Resource Access Management (RAM) user.
       *
       * @param request DeletePasskeyRequest
       * @return DeletePasskeyResponse
       */
      Models::DeletePasskeyResponse deletePasskey(const Models::DeletePasskeyRequest &request);

      /**
       * @summary Deletes an identity provider (IdP) for role-based single sign-on (SSO).
       *
       * @param request DeleteSAMLProviderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSAMLProviderResponse
       */
      Models::DeleteSAMLProviderResponse deleteSAMLProviderWithOptions(const Models::DeleteSAMLProviderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an identity provider (IdP) for role-based single sign-on (SSO).
       *
       * @param request DeleteSAMLProviderRequest
       * @return DeleteSAMLProviderResponse
       */
      Models::DeleteSAMLProviderResponse deleteSAMLProvider(const Models::DeleteSAMLProviderRequest &request);

      /**
       * @summary Deletes a Resource Access Management (RAM) user.
       *
       * @param request DeleteUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteUserResponse
       */
      Models::DeleteUserResponse deleteUserWithOptions(const Models::DeleteUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a Resource Access Management (RAM) user.
       *
       * @param request DeleteUserRequest
       * @return DeleteUserResponse
       */
      Models::DeleteUserResponse deleteUser(const Models::DeleteUserRequest &request);

      /**
       * @summary Deletes a specific Resource Access Management (RAM) user from the recycle bin.
       *
       * @param request DeleteUserInRecycleBinRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteUserInRecycleBinResponse
       */
      Models::DeleteUserInRecycleBinResponse deleteUserInRecycleBinWithOptions(const Models::DeleteUserInRecycleBinRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specific Resource Access Management (RAM) user from the recycle bin.
       *
       * @param request DeleteUserInRecycleBinRequest
       * @return DeleteUserInRecycleBinResponse
       */
      Models::DeleteUserInRecycleBinResponse deleteUserInRecycleBin(const Models::DeleteUserInRecycleBinRequest &request);

      /**
       * @summary Deletes a multi-factor authentication (MFA) device.
       *
       * @param request DeleteVirtualMFADeviceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteVirtualMFADeviceResponse
       */
      Models::DeleteVirtualMFADeviceResponse deleteVirtualMFADeviceWithOptions(const Models::DeleteVirtualMFADeviceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a multi-factor authentication (MFA) device.
       *
       * @param request DeleteVirtualMFADeviceRequest
       * @return DeleteVirtualMFADeviceResponse
       */
      Models::DeleteVirtualMFADeviceResponse deleteVirtualMFADevice(const Models::DeleteVirtualMFADeviceRequest &request);

      /**
       * @summary Uninstalls an external application or an internal application of the ServerApp type.
       *
       * @description If you want to call this operation to uninstall an internal application, the type of the internal application must be **ServerApp**. Otherwise, an error occurs when you call this operation.
       * >  For **internal applications**, only internal applications of the ServerApp type need to be **installed or provisioned**. Therefore, only internal applications of the ServerApp type **can be uninstalled**. Internal applications of the WebApp and NativeApp types **do not need to and cannot be uninstalled**.
       *
       * @param request DeprovisionApplicationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeprovisionApplicationResponse
       */
      Models::DeprovisionApplicationResponse deprovisionApplicationWithOptions(const Models::DeprovisionApplicationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Uninstalls an external application or an internal application of the ServerApp type.
       *
       * @description If you want to call this operation to uninstall an internal application, the type of the internal application must be **ServerApp**. Otherwise, an error occurs when you call this operation.
       * >  For **internal applications**, only internal applications of the ServerApp type need to be **installed or provisioned**. Therefore, only internal applications of the ServerApp type **can be uninstalled**. Internal applications of the WebApp and NativeApp types **do not need to and cannot be uninstalled**.
       *
       * @param request DeprovisionApplicationRequest
       * @return DeprovisionApplicationResponse
       */
      Models::DeprovisionApplicationResponse deprovisionApplication(const Models::DeprovisionApplicationRequest &request);

      /**
       * @summary Deletes an installed external application.
       *
       * @param request DeprovisionExternalApplicationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeprovisionExternalApplicationResponse
       */
      Models::DeprovisionExternalApplicationResponse deprovisionExternalApplicationWithOptions(const Models::DeprovisionExternalApplicationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an installed external application.
       *
       * @param request DeprovisionExternalApplicationRequest
       * @return DeprovisionExternalApplicationResponse
       */
      Models::DeprovisionExternalApplicationResponse deprovisionExternalApplication(const Models::DeprovisionExternalApplicationRequest &request);

      /**
       * @summary Unbinds and deletes a multi-factor authentication (MFA) device from a Resource Access Management (RAM) user.
       *
       * @param request DisableVirtualMFARequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableVirtualMFAResponse
       */
      Models::DisableVirtualMFAResponse disableVirtualMFAWithOptions(const Models::DisableVirtualMFARequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unbinds and deletes a multi-factor authentication (MFA) device from a Resource Access Management (RAM) user.
       *
       * @param request DisableVirtualMFARequest
       * @return DisableVirtualMFAResponse
       */
      Models::DisableVirtualMFAResponse disableVirtualMFA(const Models::DisableVirtualMFARequest &request);

      /**
       * @summary Generates the user credential report of an Alibaba Cloud account.
       *
       * @param request GenerateCredentialReportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateCredentialReportResponse
       */
      Models::GenerateCredentialReportResponse generateCredentialReportWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Generates the user credential report of an Alibaba Cloud account.
       *
       * @return GenerateCredentialReportResponse
       */
      Models::GenerateCredentialReportResponse generateCredentialReport();

      /**
       * @summary Generates a check report for Cloud Governance.
       *
       * @param request GenerateGovernanceReportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateGovernanceReportResponse
       */
      Models::GenerateGovernanceReportResponse generateGovernanceReportWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Generates a check report for Cloud Governance.
       *
       * @return GenerateGovernanceReportResponse
       */
      Models::GenerateGovernanceReportResponse generateGovernanceReport();

      /**
       * @summary Queries information about a specific AccessKey pair of a Resource Access Management (RAM) user in the recycle bin.
       *
       * @param request GetAccessKeyInfoInRecycleBinRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAccessKeyInfoInRecycleBinResponse
       */
      Models::GetAccessKeyInfoInRecycleBinResponse getAccessKeyInfoInRecycleBinWithOptions(const Models::GetAccessKeyInfoInRecycleBinRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about a specific AccessKey pair of a Resource Access Management (RAM) user in the recycle bin.
       *
       * @param request GetAccessKeyInfoInRecycleBinRequest
       * @return GetAccessKeyInfoInRecycleBinResponse
       */
      Models::GetAccessKeyInfoInRecycleBinResponse getAccessKeyInfoInRecycleBin(const Models::GetAccessKeyInfoInRecycleBinRequest &request);

      /**
       * @summary Queries the time when an AccessKey pair was used for the last time.
       *
       * @param request GetAccessKeyLastUsedRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAccessKeyLastUsedResponse
       */
      Models::GetAccessKeyLastUsedResponse getAccessKeyLastUsedWithOptions(const Models::GetAccessKeyLastUsedRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the time when an AccessKey pair was used for the last time.
       *
       * @param request GetAccessKeyLastUsedRequest
       * @return GetAccessKeyLastUsedResponse
       */
      Models::GetAccessKeyLastUsedResponse getAccessKeyLastUsed(const Models::GetAccessKeyLastUsedRequest &request);

      /**
       * @summary Queries information about the multi-factor authentication (MFA) devices of an Alibaba Cloud account.
       *
       * @param request GetAccountMFAInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAccountMFAInfoResponse
       */
      Models::GetAccountMFAInfoResponse getAccountMFAInfoWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about the multi-factor authentication (MFA) devices of an Alibaba Cloud account.
       *
       * @return GetAccountMFAInfoResponse
       */
      Models::GetAccountMFAInfoResponse getAccountMFAInfo();

      /**
       * @summary Queries the security report of an Alibaba Cloud account.
       *
       * @param request GetAccountSecurityPracticeReportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAccountSecurityPracticeReportResponse
       */
      Models::GetAccountSecurityPracticeReportResponse getAccountSecurityPracticeReportWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the security report of an Alibaba Cloud account.
       *
       * @return GetAccountSecurityPracticeReportResponse
       */
      Models::GetAccountSecurityPracticeReportResponse getAccountSecurityPracticeReport();

      /**
       * @summary Queries the overview information about an Alibaba Cloud account.
       *
       * @param request GetAccountSummaryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAccountSummaryResponse
       */
      Models::GetAccountSummaryResponse getAccountSummaryWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the overview information about an Alibaba Cloud account.
       *
       * @return GetAccountSummaryResponse
       */
      Models::GetAccountSummaryResponse getAccountSummary();

      /**
       * @summary Queries the details of an application secret.
       *
       * @param request GetAppSecretRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAppSecretResponse
       */
      Models::GetAppSecretResponse getAppSecretWithOptions(const Models::GetAppSecretRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an application secret.
       *
       * @param request GetAppSecretRequest
       * @return GetAppSecretResponse
       */
      Models::GetAppSecretResponse getAppSecret(const Models::GetAppSecretRequest &request);

      /**
       * @summary Queries the configuration information about an application.
       *
       * @description This topic provides an example on how to query the configurations of an application named `472457090344041****`.
       *
       * @param request GetApplicationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetApplicationResponse
       */
      Models::GetApplicationResponse getApplicationWithOptions(const Models::GetApplicationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configuration information about an application.
       *
       * @description This topic provides an example on how to query the configurations of an application named `472457090344041****`.
       *
       * @param request GetApplicationRequest
       * @return GetApplicationResponse
       */
      Models::GetApplicationResponse getApplication(const Models::GetApplicationRequest &request);

      /**
       * @summary Queries installation information about a specified installed application.
       *
       * @param request GetApplicationProvisionInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetApplicationProvisionInfoResponse
       */
      Models::GetApplicationProvisionInfoResponse getApplicationProvisionInfoWithOptions(const Models::GetApplicationProvisionInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries installation information about a specified installed application.
       *
       * @param request GetApplicationProvisionInfoRequest
       * @return GetApplicationProvisionInfoResponse
       */
      Models::GetApplicationProvisionInfoResponse getApplicationProvisionInfo(const Models::GetApplicationProvisionInfoRequest &request);

      /**
       * @summary Queries the user credential reports of an Alibaba Cloud account.
       *
       * @param request GetCredentialReportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCredentialReportResponse
       */
      Models::GetCredentialReportResponse getCredentialReportWithOptions(const Models::GetCredentialReportRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the user credential reports of an Alibaba Cloud account.
       *
       * @param request GetCredentialReportRequest
       * @return GetCredentialReportResponse
       */
      Models::GetCredentialReportResponse getCredentialReport(const Models::GetCredentialReportRequest &request);

      /**
       * @summary Queries the default domain name of an Alibaba Cloud account.
       *
       * @param request GetDefaultDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDefaultDomainResponse
       */
      Models::GetDefaultDomainResponse getDefaultDomainWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the default domain name of an Alibaba Cloud account.
       *
       * @return GetDefaultDomainResponse
       */
      Models::GetDefaultDomainResponse getDefaultDomain();

      /**
       * @summary Queries information about an installed external application.
       *
       * @param request GetExternalApplicationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetExternalApplicationResponse
       */
      Models::GetExternalApplicationResponse getExternalApplicationWithOptions(const Models::GetExternalApplicationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about an installed external application.
       *
       * @param request GetExternalApplicationRequest
       * @return GetExternalApplicationResponse
       */
      Models::GetExternalApplicationResponse getExternalApplication(const Models::GetExternalApplicationRequest &request);

      /**
       * @summary 查询用户的单项ram治理报告
       *
       * @param request GetGovernanceItemReportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetGovernanceItemReportResponse
       */
      Models::GetGovernanceItemReportResponse getGovernanceItemReportWithOptions(const Models::GetGovernanceItemReportRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询用户的单项ram治理报告
       *
       * @param request GetGovernanceItemReportRequest
       * @return GetGovernanceItemReportResponse
       */
      Models::GetGovernanceItemReportResponse getGovernanceItemReport(const Models::GetGovernanceItemReportRequest &request);

      /**
       * @summary 查询成熟度报告状态
       *
       * @param request GetGovernanceReportStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetGovernanceReportStatusResponse
       */
      Models::GetGovernanceReportStatusResponse getGovernanceReportStatusWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询成熟度报告状态
       *
       * @return GetGovernanceReportStatusResponse
       */
      Models::GetGovernanceReportStatusResponse getGovernanceReportStatus();

      /**
       * @summary Queries the information about a Resource Access Management (RAM) user group.
       *
       * @param request GetGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetGroupResponse
       */
      Models::GetGroupResponse getGroupWithOptions(const Models::GetGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a Resource Access Management (RAM) user group.
       *
       * @param request GetGroupRequest
       * @return GetGroupResponse
       */
      Models::GetGroupResponse getGroup(const Models::GetGroupRequest &request);

      /**
       * @summary Queries the logon configurations of a Resource Access Management (RAM) user.
       *
       * @param request GetLoginProfileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetLoginProfileResponse
       */
      Models::GetLoginProfileResponse getLoginProfileWithOptions(const Models::GetLoginProfileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the logon configurations of a Resource Access Management (RAM) user.
       *
       * @param request GetLoginProfileRequest
       * @return GetLoginProfileResponse
       */
      Models::GetLoginProfileResponse getLoginProfile(const Models::GetLoginProfileRequest &request);

      /**
       * @summary Queries the information about an OIDC IdP.
       *
       * @description ###
       * This topic provides an example on how to query the information about an OpenID Connect (OIDC) identity provider (IdP) named `TestOIDCProvider`.
       *
       * @param request GetOIDCProviderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOIDCProviderResponse
       */
      Models::GetOIDCProviderResponse getOIDCProviderWithOptions(const Models::GetOIDCProviderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about an OIDC IdP.
       *
       * @description ###
       * This topic provides an example on how to query the information about an OpenID Connect (OIDC) identity provider (IdP) named `TestOIDCProvider`.
       *
       * @param request GetOIDCProviderRequest
       * @return GetOIDCProviderResponse
       */
      Models::GetOIDCProviderResponse getOIDCProvider(const Models::GetOIDCProviderRequest &request);

      /**
       * @summary Queries the details of the password policy for RAM users.
       *
       * @param request GetPasswordPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPasswordPolicyResponse
       */
      Models::GetPasswordPolicyResponse getPasswordPolicyWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of the password policy for RAM users.
       *
       * @return GetPasswordPolicyResponse
       */
      Models::GetPasswordPolicyResponse getPasswordPolicy();

      /**
       * @summary Queries the information about an identity provider (IdP) for role-based single sign-on (SSO).
       *
       * @param request GetSAMLProviderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSAMLProviderResponse
       */
      Models::GetSAMLProviderResponse getSAMLProviderWithOptions(const Models::GetSAMLProviderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about an identity provider (IdP) for role-based single sign-on (SSO).
       *
       * @param request GetSAMLProviderRequest
       * @return GetSAMLProviderResponse
       */
      Models::GetSAMLProviderResponse getSAMLProvider(const Models::GetSAMLProviderRequest &request);

      /**
       * @summary Queries the security preferences for RAM users.
       *
       * @param request GetSecurityPreferenceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSecurityPreferenceResponse
       */
      Models::GetSecurityPreferenceResponse getSecurityPreferenceWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the security preferences for RAM users.
       *
       * @return GetSecurityPreferenceResponse
       */
      Models::GetSecurityPreferenceResponse getSecurityPreference();

      /**
       * @summary Queries the information about a RAM user.
       *
       * @param request GetUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUserResponse
       */
      Models::GetUserResponse getUserWithOptions(const Models::GetUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a RAM user.
       *
       * @param request GetUserRequest
       * @return GetUserResponse
       */
      Models::GetUserResponse getUser(const Models::GetUserRequest &request);

      /**
       * @summary Queries information about a specific Resource Access Management (RAM) user in the recycle bin.
       *
       * @param request GetUserInRecycleBinRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUserInRecycleBinResponse
       */
      Models::GetUserInRecycleBinResponse getUserInRecycleBinWithOptions(const Models::GetUserInRecycleBinRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about a specific Resource Access Management (RAM) user in the recycle bin.
       *
       * @param request GetUserInRecycleBinRequest
       * @return GetUserInRecycleBinResponse
       */
      Models::GetUserInRecycleBinResponse getUserInRecycleBin(const Models::GetUserInRecycleBinRequest &request);

      /**
       * @summary Queries information about the multi-factor authentication (MFA) device that is bound to a Resource Access Management (RAM) user.
       *
       * @param request GetUserMFAInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUserMFAInfoResponse
       */
      Models::GetUserMFAInfoResponse getUserMFAInfoWithOptions(const Models::GetUserMFAInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about the multi-factor authentication (MFA) device that is bound to a Resource Access Management (RAM) user.
       *
       * @param request GetUserMFAInfoRequest
       * @return GetUserMFAInfoResponse
       */
      Models::GetUserMFAInfoResponse getUserMFAInfo(const Models::GetUserMFAInfoRequest &request);

      /**
       * @summary Queries the configurations of user-based single sign-on (SSO).
       *
       * @param request GetUserSsoSettingsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUserSsoSettingsResponse
       */
      Models::GetUserSsoSettingsResponse getUserSsoSettingsWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configurations of user-based single sign-on (SSO).
       *
       * @return GetUserSsoSettingsResponse
       */
      Models::GetUserSsoSettingsResponse getUserSsoSettings();

      /**
       * @summary Queries the status of the mobile phone or email that is bound to a Resource Access Management (RAM) user.
       *
       * @param request GetVerificationInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetVerificationInfoResponse
       */
      Models::GetVerificationInfoResponse getVerificationInfoWithOptions(const Models::GetVerificationInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of the mobile phone or email that is bound to a Resource Access Management (RAM) user.
       *
       * @param request GetVerificationInfoRequest
       * @return GetVerificationInfoResponse
       */
      Models::GetVerificationInfoResponse getVerificationInfo(const Models::GetVerificationInfoRequest &request);

      /**
       * @summary Queries the AccessKey pairs of an Alibaba Cloud account or a Resource Access Management (RAM) user.
       *
       * @param request ListAccessKeysRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAccessKeysResponse
       */
      Models::ListAccessKeysResponse listAccessKeysWithOptions(const Models::ListAccessKeysRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the AccessKey pairs of an Alibaba Cloud account or a Resource Access Management (RAM) user.
       *
       * @param request ListAccessKeysRequest
       * @return ListAccessKeysResponse
       */
      Models::ListAccessKeysResponse listAccessKeys(const Models::ListAccessKeysRequest &request);

      /**
       * @summary Queries the AccessKey pairs of a specific Resource Access Management (RAM) user in the recycle bin.
       *
       * @param request ListAccessKeysInRecycleBinRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAccessKeysInRecycleBinResponse
       */
      Models::ListAccessKeysInRecycleBinResponse listAccessKeysInRecycleBinWithOptions(const Models::ListAccessKeysInRecycleBinRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the AccessKey pairs of a specific Resource Access Management (RAM) user in the recycle bin.
       *
       * @param request ListAccessKeysInRecycleBinRequest
       * @return ListAccessKeysInRecycleBinResponse
       */
      Models::ListAccessKeysInRecycleBinResponse listAccessKeysInRecycleBin(const Models::ListAccessKeysInRecycleBinRequest &request);

      /**
       * @summary Queries the secret IDs of an application.
       *
       * @param request ListAppSecretIdsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAppSecretIdsResponse
       */
      Models::ListAppSecretIdsResponse listAppSecretIdsWithOptions(const Models::ListAppSecretIdsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the secret IDs of an application.
       *
       * @param request ListAppSecretIdsRequest
       * @return ListAppSecretIdsResponse
       */
      Models::ListAppSecretIdsResponse listAppSecretIds(const Models::ListAppSecretIdsRequest &request);

      /**
       * @summary Queries installation information about all installed applications.
       *
       * @param request ListApplicationProvisionInfosRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListApplicationProvisionInfosResponse
       */
      Models::ListApplicationProvisionInfosResponse listApplicationProvisionInfosWithOptions(const Models::ListApplicationProvisionInfosRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries installation information about all installed applications.
       *
       * @param request ListApplicationProvisionInfosRequest
       * @return ListApplicationProvisionInfosResponse
       */
      Models::ListApplicationProvisionInfosResponse listApplicationProvisionInfos(const Models::ListApplicationProvisionInfosRequest &request);

      /**
       * @summary Lists the created applications.
       *
       * @description This topic provides an example on how to query the applications within the current account. The returned result shows that only one application named `myapp` belongs to the current account.
       *
       * @param request ListApplicationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListApplicationsResponse
       */
      Models::ListApplicationsResponse listApplicationsWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the created applications.
       *
       * @description This topic provides an example on how to query the applications within the current account. The returned result shows that only one application named `myapp` belongs to the current account.
       *
       * @return ListApplicationsResponse
       */
      Models::ListApplicationsResponse listApplications();

      /**
       * @summary Queries information about all installed external applications.
       *
       * @param request ListExternalApplicationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListExternalApplicationsResponse
       */
      Models::ListExternalApplicationsResponse listExternalApplicationsWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about all installed external applications.
       *
       * @return ListExternalApplicationsResponse
       */
      Models::ListExternalApplicationsResponse listExternalApplications();

      /**
       * @summary Queries Resource Access Management (RAM) user groups.
       *
       * @param request ListGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListGroupsResponse
       */
      Models::ListGroupsResponse listGroupsWithOptions(const Models::ListGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries Resource Access Management (RAM) user groups.
       *
       * @param request ListGroupsRequest
       * @return ListGroupsResponse
       */
      Models::ListGroupsResponse listGroups(const Models::ListGroupsRequest &request);

      /**
       * @summary Queries the Resource Access Management (RAM) user groups to which a RAM user belongs.
       *
       * @param request ListGroupsForUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListGroupsForUserResponse
       */
      Models::ListGroupsForUserResponse listGroupsForUserWithOptions(const Models::ListGroupsForUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the Resource Access Management (RAM) user groups to which a RAM user belongs.
       *
       * @param request ListGroupsForUserRequest
       * @return ListGroupsForUserResponse
       */
      Models::ListGroupsForUserResponse listGroupsForUser(const Models::ListGroupsForUserRequest &request);

      /**
       * @summary Queries OIDC IdPs.
       *
       * @description ###
       * This topic provides an example on how to query all OpenID Connect (OIDC) identity providers (IdPs) within your Alibaba Cloud account. The response shows that your Alibaba Cloud account has only one OIDC IdP named `TestOIDCProvider`.
       *
       * @param request ListOIDCProvidersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListOIDCProvidersResponse
       */
      Models::ListOIDCProvidersResponse listOIDCProvidersWithOptions(const Models::ListOIDCProvidersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries OIDC IdPs.
       *
       * @description ###
       * This topic provides an example on how to query all OpenID Connect (OIDC) identity providers (IdPs) within your Alibaba Cloud account. The response shows that your Alibaba Cloud account has only one OIDC IdP named `TestOIDCProvider`.
       *
       * @param request ListOIDCProvidersRequest
       * @return ListOIDCProvidersResponse
       */
      Models::ListOIDCProvidersResponse listOIDCProviders(const Models::ListOIDCProvidersRequest &request);

      /**
       * @summary Queries the information about the passkeys that are bound to a Resource Access Management (RAM) user.
       *
       * @param request ListPasskeysRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPasskeysResponse
       */
      Models::ListPasskeysResponse listPasskeysWithOptions(const Models::ListPasskeysRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about the passkeys that are bound to a Resource Access Management (RAM) user.
       *
       * @param request ListPasskeysRequest
       * @return ListPasskeysResponse
       */
      Models::ListPasskeysResponse listPasskeys(const Models::ListPasskeysRequest &request);

      /**
       * @summary Queries predefined application permissions.
       *
       * @param request ListPredefinedScopesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPredefinedScopesResponse
       */
      Models::ListPredefinedScopesResponse listPredefinedScopesWithOptions(const Models::ListPredefinedScopesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries predefined application permissions.
       *
       * @param request ListPredefinedScopesRequest
       * @return ListPredefinedScopesResponse
       */
      Models::ListPredefinedScopesResponse listPredefinedScopes(const Models::ListPredefinedScopesRequest &request);

      /**
       * @summary Queries all metric values in the most recent governance check.
       *
       * @param request ListRecentGovernanceMetricsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRecentGovernanceMetricsResponse
       */
      Models::ListRecentGovernanceMetricsResponse listRecentGovernanceMetricsWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all metric values in the most recent governance check.
       *
       * @return ListRecentGovernanceMetricsResponse
       */
      Models::ListRecentGovernanceMetricsResponse listRecentGovernanceMetrics();

      /**
       * @summary Queries information about identity providers (IdPs) for role-based single sign-on (SSO).
       *
       * @param request ListSAMLProvidersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSAMLProvidersResponse
       */
      Models::ListSAMLProvidersResponse listSAMLProvidersWithOptions(const Models::ListSAMLProvidersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about identity providers (IdPs) for role-based single sign-on (SSO).
       *
       * @param request ListSAMLProvidersRequest
       * @return ListSAMLProvidersResponse
       */
      Models::ListSAMLProvidersResponse listSAMLProviders(const Models::ListSAMLProvidersRequest &request);

      /**
       * @summary Queries the tags that are added resources.
       *
       * @description ###
       * You must specify at least one of the following parameters or parameter pairs in a request to determine a query object:
       * *   `ResourceId.N`
       * *   `Tag.N.Key`
       * *   `Tag.N.Key` and `Tag.N.Value`
       *
       * @param request ListTagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the tags that are added resources.
       *
       * @description ###
       * You must specify at least one of the following parameters or parameter pairs in a request to determine a query object:
       * *   `ResourceId.N`
       * *   `Tag.N.Key`
       * *   `Tag.N.Key` and `Tag.N.Value`
       *
       * @param request ListTagResourcesRequest
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResources(const Models::ListTagResourcesRequest &request);

      /**
       * @summary Queries the basic information about all Resource Access Management (RAM) users.
       *
       * @description You can call the following API operations to query information about all RAM users:
       * *   ListUsers: queries the details of all RAM users.
       * *   ListUserBasicInfos: queries the basic information about all RAM users. The basic information includes only the logon names (`UserPrincipalName`), display names (`DisplayName`), and user IDs (`UserId`).
       *
       * @param request ListUserBasicInfosRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUserBasicInfosResponse
       */
      Models::ListUserBasicInfosResponse listUserBasicInfosWithOptions(const Models::ListUserBasicInfosRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the basic information about all Resource Access Management (RAM) users.
       *
       * @description You can call the following API operations to query information about all RAM users:
       * *   ListUsers: queries the details of all RAM users.
       * *   ListUserBasicInfos: queries the basic information about all RAM users. The basic information includes only the logon names (`UserPrincipalName`), display names (`DisplayName`), and user IDs (`UserId`).
       *
       * @param request ListUserBasicInfosRequest
       * @return ListUserBasicInfosResponse
       */
      Models::ListUserBasicInfosResponse listUserBasicInfos(const Models::ListUserBasicInfosRequest &request);

      /**
       * @summary Queries information about all Resource Access Management (RAM) users.
       *
       * @description ### [](#)
       * You can call the following API operations to query the details of all RAM users:
       * *   ListUsers: queries the details of all RAM users.
       * *   ListUserBasicInfos: queries the basic information about all RAM users. The basic information includes only the logon names (`UserPrincipalName`), display names (`DisplayName`), and user IDs (`UserId`).
       *
       * @param request ListUsersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUsersResponse
       */
      Models::ListUsersResponse listUsersWithOptions(const Models::ListUsersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about all Resource Access Management (RAM) users.
       *
       * @description ### [](#)
       * You can call the following API operations to query the details of all RAM users:
       * *   ListUsers: queries the details of all RAM users.
       * *   ListUserBasicInfos: queries the basic information about all RAM users. The basic information includes only the logon names (`UserPrincipalName`), display names (`DisplayName`), and user IDs (`UserId`).
       *
       * @param request ListUsersRequest
       * @return ListUsersResponse
       */
      Models::ListUsersResponse listUsers(const Models::ListUsersRequest &request);

      /**
       * @summary Queries Resource Access Management (RAM) users in a RAM user group.
       *
       * @param request ListUsersForGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUsersForGroupResponse
       */
      Models::ListUsersForGroupResponse listUsersForGroupWithOptions(const Models::ListUsersForGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries Resource Access Management (RAM) users in a RAM user group.
       *
       * @param request ListUsersForGroupRequest
       * @return ListUsersForGroupResponse
       */
      Models::ListUsersForGroupResponse listUsersForGroup(const Models::ListUsersForGroupRequest &request);

      /**
       * @summary Queries the basic information about all Resource Access Management (RAM) users in the recycle bin.
       *
       * @param request ListUsersInRecycleBinRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUsersInRecycleBinResponse
       */
      Models::ListUsersInRecycleBinResponse listUsersInRecycleBinWithOptions(const Models::ListUsersInRecycleBinRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the basic information about all Resource Access Management (RAM) users in the recycle bin.
       *
       * @param request ListUsersInRecycleBinRequest
       * @return ListUsersInRecycleBinResponse
       */
      Models::ListUsersInRecycleBinResponse listUsersInRecycleBin(const Models::ListUsersInRecycleBinRequest &request);

      /**
       * @summary Queries multi-factor authentication (MFA) devices.
       *
       * @param request ListVirtualMFADevicesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListVirtualMFADevicesResponse
       */
      Models::ListVirtualMFADevicesResponse listVirtualMFADevicesWithOptions(const Models::ListVirtualMFADevicesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries multi-factor authentication (MFA) devices.
       *
       * @param request ListVirtualMFADevicesRequest
       * @return ListVirtualMFADevicesResponse
       */
      Models::ListVirtualMFADevicesResponse listVirtualMFADevices(const Models::ListVirtualMFADevicesRequest &request);

      /**
       * @summary Installs an application.
       *
       * @param request ProvisionApplicationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ProvisionApplicationResponse
       */
      Models::ProvisionApplicationResponse provisionApplicationWithOptions(const Models::ProvisionApplicationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Installs an application.
       *
       * @param request ProvisionApplicationRequest
       * @return ProvisionApplicationResponse
       */
      Models::ProvisionApplicationResponse provisionApplication(const Models::ProvisionApplicationRequest &request);

      /**
       * @summary Installs an external application.
       *
       * @param request ProvisionExternalApplicationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ProvisionExternalApplicationResponse
       */
      Models::ProvisionExternalApplicationResponse provisionExternalApplicationWithOptions(const Models::ProvisionExternalApplicationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Installs an external application.
       *
       * @param request ProvisionExternalApplicationRequest
       * @return ProvisionExternalApplicationResponse
       */
      Models::ProvisionExternalApplicationResponse provisionExternalApplication(const Models::ProvisionExternalApplicationRequest &request);

      /**
       * @summary Removes a client ID from an OpenID Connect (OIDC) identity provider (IdP).
       *
       * @description ###
       * This topic provides an example on how to remove the client ID `498469743454717****` from the OIDC IdP named `TestOIDCProvider`.
       *
       * @param request RemoveClientIdFromOIDCProviderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveClientIdFromOIDCProviderResponse
       */
      Models::RemoveClientIdFromOIDCProviderResponse removeClientIdFromOIDCProviderWithOptions(const Models::RemoveClientIdFromOIDCProviderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes a client ID from an OpenID Connect (OIDC) identity provider (IdP).
       *
       * @description ###
       * This topic provides an example on how to remove the client ID `498469743454717****` from the OIDC IdP named `TestOIDCProvider`.
       *
       * @param request RemoveClientIdFromOIDCProviderRequest
       * @return RemoveClientIdFromOIDCProviderResponse
       */
      Models::RemoveClientIdFromOIDCProviderResponse removeClientIdFromOIDCProvider(const Models::RemoveClientIdFromOIDCProviderRequest &request);

      /**
       * @summary Removes a fingerprint from an OpenID Connect (OIDC) identity provider (IdP).
       *
       * @description ###
       * This topic provides an example on how to remove the fingerprint `6938fd4d98bab03faadb97b34396831e3780****` from the OIDC IdP named `TestOIDCProvider`.
       *
       * @param request RemoveFingerprintFromOIDCProviderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveFingerprintFromOIDCProviderResponse
       */
      Models::RemoveFingerprintFromOIDCProviderResponse removeFingerprintFromOIDCProviderWithOptions(const Models::RemoveFingerprintFromOIDCProviderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes a fingerprint from an OpenID Connect (OIDC) identity provider (IdP).
       *
       * @description ###
       * This topic provides an example on how to remove the fingerprint `6938fd4d98bab03faadb97b34396831e3780****` from the OIDC IdP named `TestOIDCProvider`.
       *
       * @param request RemoveFingerprintFromOIDCProviderRequest
       * @return RemoveFingerprintFromOIDCProviderResponse
       */
      Models::RemoveFingerprintFromOIDCProviderResponse removeFingerprintFromOIDCProvider(const Models::RemoveFingerprintFromOIDCProviderRequest &request);

      /**
       * @summary Removes a Resource Access Management (RAM) user from a RAM user group.
       *
       * @param request RemoveUserFromGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveUserFromGroupResponse
       */
      Models::RemoveUserFromGroupResponse removeUserFromGroupWithOptions(const Models::RemoveUserFromGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes a Resource Access Management (RAM) user from a RAM user group.
       *
       * @param request RemoveUserFromGroupRequest
       * @return RemoveUserFromGroupResponse
       */
      Models::RemoveUserFromGroupResponse removeUserFromGroup(const Models::RemoveUserFromGroupRequest &request);

      /**
       * @summary Restores a specific AccessKey pair that belongs to a Resource Access Management (RAM) user from the recycle bin.
       *
       * @param request RestoreAccessKeyFromRecycleBinRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RestoreAccessKeyFromRecycleBinResponse
       */
      Models::RestoreAccessKeyFromRecycleBinResponse restoreAccessKeyFromRecycleBinWithOptions(const Models::RestoreAccessKeyFromRecycleBinRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restores a specific AccessKey pair that belongs to a Resource Access Management (RAM) user from the recycle bin.
       *
       * @param request RestoreAccessKeyFromRecycleBinRequest
       * @return RestoreAccessKeyFromRecycleBinResponse
       */
      Models::RestoreAccessKeyFromRecycleBinResponse restoreAccessKeyFromRecycleBin(const Models::RestoreAccessKeyFromRecycleBinRequest &request);

      /**
       * @summary Restores a specific Resource Access Management (RAM) user from the recycle bin.
       *
       * @param request RestoreUserFromRecycleBinRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RestoreUserFromRecycleBinResponse
       */
      Models::RestoreUserFromRecycleBinResponse restoreUserFromRecycleBinWithOptions(const Models::RestoreUserFromRecycleBinRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Restores a specific Resource Access Management (RAM) user from the recycle bin.
       *
       * @param request RestoreUserFromRecycleBinRequest
       * @return RestoreUserFromRecycleBinResponse
       */
      Models::RestoreUserFromRecycleBinResponse restoreUserFromRecycleBin(const Models::RestoreUserFromRecycleBinRequest &request);

      /**
       * @summary Configures the default domain name for an Alibaba Cloud account.
       *
       * @param request SetDefaultDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetDefaultDomainResponse
       */
      Models::SetDefaultDomainResponse setDefaultDomainWithOptions(const Models::SetDefaultDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures the default domain name for an Alibaba Cloud account.
       *
       * @param request SetDefaultDomainRequest
       * @return SetDefaultDomainResponse
       */
      Models::SetDefaultDomainResponse setDefaultDomain(const Models::SetDefaultDomainRequest &request);

      /**
       * @summary Configures the password policy for Resource Access Management (RAM) users.
       *
       * @param request SetPasswordPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetPasswordPolicyResponse
       */
      Models::SetPasswordPolicyResponse setPasswordPolicyWithOptions(const Models::SetPasswordPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures the password policy for Resource Access Management (RAM) users.
       *
       * @param request SetPasswordPolicyRequest
       * @return SetPasswordPolicyResponse
       */
      Models::SetPasswordPolicyResponse setPasswordPolicy(const Models::SetPasswordPolicyRequest &request);

      /**
       * @summary Configures security preferences for a RAM user.
       *
       * @description ###
       * This topic provides an example on how to enable multi-factor authentication (MFA) only for RAM users who initiated unusual logons.
       *
       * @param tmpReq SetSecurityPreferenceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetSecurityPreferenceResponse
       */
      Models::SetSecurityPreferenceResponse setSecurityPreferenceWithOptions(const Models::SetSecurityPreferenceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures security preferences for a RAM user.
       *
       * @description ###
       * This topic provides an example on how to enable multi-factor authentication (MFA) only for RAM users who initiated unusual logons.
       *
       * @param request SetSecurityPreferenceRequest
       * @return SetSecurityPreferenceResponse
       */
      Models::SetSecurityPreferenceResponse setSecurityPreference(const Models::SetSecurityPreferenceRequest &request);

      /**
       * @summary Configures information about user-based single sign-on (SSO).
       *
       * @param request SetUserSsoSettingsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetUserSsoSettingsResponse
       */
      Models::SetUserSsoSettingsResponse setUserSsoSettingsWithOptions(const Models::SetUserSsoSettingsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures information about user-based single sign-on (SSO).
       *
       * @param request SetUserSsoSettingsRequest
       * @return SetUserSsoSettingsResponse
       */
      Models::SetUserSsoSettingsResponse setUserSsoSettings(const Models::SetUserSsoSettingsRequest &request);

      /**
       * @summary Binds a mobile phone or email to a Resource Access Management (RAM) user.
       *
       * @param request SetVerificationInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetVerificationInfoResponse
       */
      Models::SetVerificationInfoResponse setVerificationInfoWithOptions(const Models::SetVerificationInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Binds a mobile phone or email to a Resource Access Management (RAM) user.
       *
       * @param request SetVerificationInfoRequest
       * @return SetVerificationInfoResponse
       */
      Models::SetVerificationInfoResponse setVerificationInfo(const Models::SetVerificationInfoRequest &request);

      /**
       * @summary Adds tags to resources.
       *
       * @param request TagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds tags to resources.
       *
       * @param request TagResourcesRequest
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

      /**
       * @summary Unbinds a multi-factor authentication (MFA) device from a Resource Access Management (RAM) user.
       *
       * @param request UnbindMFADeviceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnbindMFADeviceResponse
       */
      Models::UnbindMFADeviceResponse unbindMFADeviceWithOptions(const Models::UnbindMFADeviceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unbinds a multi-factor authentication (MFA) device from a Resource Access Management (RAM) user.
       *
       * @param request UnbindMFADeviceRequest
       * @return UnbindMFADeviceResponse
       */
      Models::UnbindMFADeviceResponse unbindMFADevice(const Models::UnbindMFADeviceRequest &request);

      /**
       * @summary Unbinds a mobile phone or email from a Resource Access Management (RAM) user.
       *
       * @param request UnbindVerificationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnbindVerificationResponse
       */
      Models::UnbindVerificationResponse unbindVerificationWithOptions(const Models::UnbindVerificationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unbinds a mobile phone or email from a Resource Access Management (RAM) user.
       *
       * @param request UnbindVerificationRequest
       * @return UnbindVerificationResponse
       */
      Models::UnbindVerificationResponse unbindVerification(const Models::UnbindVerificationRequest &request);

      /**
       * @summary Removes tags from a resource.
       *
       * @param request UntagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResourcesWithOptions(const Models::UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes tags from a resource.
       *
       * @param request UntagResourcesRequest
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResources(const Models::UntagResourcesRequest &request);

      /**
       * @summary Modifies the status of an AccessKey pair for an Alibaba Cloud account or a Resource Access Management (RAM) user.
       *
       * @param request UpdateAccessKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAccessKeyResponse
       */
      Models::UpdateAccessKeyResponse updateAccessKeyWithOptions(const Models::UpdateAccessKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the status of an AccessKey pair for an Alibaba Cloud account or a Resource Access Management (RAM) user.
       *
       * @param request UpdateAccessKeyRequest
       * @return UpdateAccessKeyResponse
       */
      Models::UpdateAccessKeyResponse updateAccessKey(const Models::UpdateAccessKeyRequest &request);

      /**
       * @summary Modifies the information about a specified application.
       *
       * @param request UpdateApplicationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateApplicationResponse
       */
      Models::UpdateApplicationResponse updateApplicationWithOptions(const Models::UpdateApplicationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the information about a specified application.
       *
       * @param request UpdateApplicationRequest
       * @return UpdateApplicationResponse
       */
      Models::UpdateApplicationResponse updateApplication(const Models::UpdateApplicationRequest &request);

      /**
       * @summary Modifies information about a Resource Access Management (RAM) user group.
       *
       * @param request UpdateGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateGroupResponse
       */
      Models::UpdateGroupResponse updateGroupWithOptions(const Models::UpdateGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies information about a Resource Access Management (RAM) user group.
       *
       * @param request UpdateGroupRequest
       * @return UpdateGroupResponse
       */
      Models::UpdateGroupResponse updateGroup(const Models::UpdateGroupRequest &request);

      /**
       * @summary Modifies the console logon configurations of a Resource Access Management (RAM) user.
       *
       * @param request UpdateLoginProfileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateLoginProfileResponse
       */
      Models::UpdateLoginProfileResponse updateLoginProfileWithOptions(const Models::UpdateLoginProfileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the console logon configurations of a Resource Access Management (RAM) user.
       *
       * @param request UpdateLoginProfileRequest
       * @return UpdateLoginProfileResponse
       */
      Models::UpdateLoginProfileResponse updateLoginProfile(const Models::UpdateLoginProfileRequest &request);

      /**
       * @summary Modifies the description and client IDs of an OpenID Connect (OIDC) identity provider (IdP).
       *
       * @description ###
       * This topic provides an example on how to change the description of the OIDC IdP named `TestOIDCProvider` to `This is a new OIDC Provider.`
       *
       * @param request UpdateOIDCProviderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateOIDCProviderResponse
       */
      Models::UpdateOIDCProviderResponse updateOIDCProviderWithOptions(const Models::UpdateOIDCProviderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the description and client IDs of an OpenID Connect (OIDC) identity provider (IdP).
       *
       * @description ###
       * This topic provides an example on how to change the description of the OIDC IdP named `TestOIDCProvider` to `This is a new OIDC Provider.`
       *
       * @param request UpdateOIDCProviderRequest
       * @return UpdateOIDCProviderResponse
       */
      Models::UpdateOIDCProviderResponse updateOIDCProvider(const Models::UpdateOIDCProviderRequest &request);

      /**
       * @summary Updates the name of a passkey.
       *
       * @param request UpdatePasskeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePasskeyResponse
       */
      Models::UpdatePasskeyResponse updatePasskeyWithOptions(const Models::UpdatePasskeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the name of a passkey.
       *
       * @param request UpdatePasskeyRequest
       * @return UpdatePasskeyResponse
       */
      Models::UpdatePasskeyResponse updatePasskey(const Models::UpdatePasskeyRequest &request);

      /**
       * @summary Modifies information about an identity provider (IdP) for role-based single sign-on (SSO).
       *
       * @description This topic provides an example on how to change the description of an IdP named `test-provider` to `This is a new provider.`
       *
       * @param request UpdateSAMLProviderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSAMLProviderResponse
       */
      Models::UpdateSAMLProviderResponse updateSAMLProviderWithOptions(const Models::UpdateSAMLProviderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies information about an identity provider (IdP) for role-based single sign-on (SSO).
       *
       * @description This topic provides an example on how to change the description of an IdP named `test-provider` to `This is a new provider.`
       *
       * @param request UpdateSAMLProviderRequest
       * @return UpdateSAMLProviderResponse
       */
      Models::UpdateSAMLProviderResponse updateSAMLProvider(const Models::UpdateSAMLProviderRequest &request);

      /**
       * @summary Modifies the information about a RAM user.
       *
       * @description This topic provides an example to show how to modify the name of a RAM user from `test@example.onaliyun.com` to `new@example.onaliyun.com`.
       *
       * @param request UpdateUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateUserResponse
       */
      Models::UpdateUserResponse updateUserWithOptions(const Models::UpdateUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the information about a RAM user.
       *
       * @description This topic provides an example to show how to modify the name of a RAM user from `test@example.onaliyun.com` to `new@example.onaliyun.com`.
       *
       * @param request UpdateUserRequest
       * @return UpdateUserResponse
       */
      Models::UpdateUserResponse updateUser(const Models::UpdateUserRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
