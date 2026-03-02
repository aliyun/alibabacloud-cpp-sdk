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
       * @summary 为OIDC身份提供商添加指定客户端ID
       *
       * @param request AddClientIdToOIDCProviderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddClientIdToOIDCProviderResponse
       */
      Models::AddClientIdToOIDCProviderResponse addClientIdToOIDCProviderWithOptions(const Models::AddClientIdToOIDCProviderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 为OIDC身份提供商添加指定客户端ID
       *
       * @param request AddClientIdToOIDCProviderRequest
       * @return AddClientIdToOIDCProviderResponse
       */
      Models::AddClientIdToOIDCProviderResponse addClientIdToOIDCProvider(const Models::AddClientIdToOIDCProviderRequest &request);

      /**
       * @summary 为OIDC身份提供商添加验证指纹
       *
       * @param request AddFingerprintToOIDCProviderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddFingerprintToOIDCProviderResponse
       */
      Models::AddFingerprintToOIDCProviderResponse addFingerprintToOIDCProviderWithOptions(const Models::AddFingerprintToOIDCProviderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 为OIDC身份提供商添加验证指纹
       *
       * @param request AddFingerprintToOIDCProviderRequest
       * @return AddFingerprintToOIDCProviderResponse
       */
      Models::AddFingerprintToOIDCProviderResponse addFingerprintToOIDCProvider(const Models::AddFingerprintToOIDCProviderRequest &request);

      /**
       * @summary 将RAM用户添加到指定的用户组
       *
       * @param request AddUserToGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddUserToGroupResponse
       */
      Models::AddUserToGroupResponse addUserToGroupWithOptions(const Models::AddUserToGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 将RAM用户添加到指定的用户组
       *
       * @param request AddUserToGroupRequest
       * @return AddUserToGroupResponse
       */
      Models::AddUserToGroupResponse addUserToGroup(const Models::AddUserToGroupRequest &request);

      /**
       * @summary 为RAM用户绑定多因素认证设备
       *
       * @param request BindMFADeviceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BindMFADeviceResponse
       */
      Models::BindMFADeviceResponse bindMFADeviceWithOptions(const Models::BindMFADeviceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 为RAM用户绑定多因素认证设备
       *
       * @param request BindMFADeviceRequest
       * @return BindMFADeviceResponse
       */
      Models::BindMFADeviceResponse bindMFADevice(const Models::BindMFADeviceRequest &request);

      /**
       * @summary 修改RAM用户的登录密码
       *
       * @param request ChangePasswordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangePasswordResponse
       */
      Models::ChangePasswordResponse changePasswordWithOptions(const Models::ChangePasswordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改RAM用户的登录密码
       *
       * @param request ChangePasswordRequest
       * @return ChangePasswordResponse
       */
      Models::ChangePasswordResponse changePassword(const Models::ChangePasswordRequest &request);

      /**
       * @summary 创建主账号或RAM用户访问密钥
       *
       * @param request CreateAccessKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAccessKeyResponse
       */
      Models::CreateAccessKeyResponse createAccessKeyWithOptions(const Models::CreateAccessKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建主账号或RAM用户访问密钥
       *
       * @param request CreateAccessKeyRequest
       * @return CreateAccessKeyResponse
       */
      Models::CreateAccessKeyResponse createAccessKey(const Models::CreateAccessKeyRequest &request);

      /**
       * @summary 为指定的应用创建应用密钥
       *
       * @param request CreateAppSecretRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAppSecretResponse
       */
      Models::CreateAppSecretResponse createAppSecretWithOptions(const Models::CreateAppSecretRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 为指定的应用创建应用密钥
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
       * @summary 创建用户组
       *
       * @param request CreateGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateGroupResponse
       */
      Models::CreateGroupResponse createGroupWithOptions(const Models::CreateGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建用户组
       *
       * @param request CreateGroupRequest
       * @return CreateGroupResponse
       */
      Models::CreateGroupResponse createGroup(const Models::CreateGroupRequest &request);

      /**
       * @summary Creates a logon configuration for a Resource Access Management (RAM) user.
       *
       * @param request CreateLoginProfileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLoginProfileResponse
       */
      Models::CreateLoginProfileResponse createLoginProfileWithOptions(const Models::CreateLoginProfileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a logon configuration for a Resource Access Management (RAM) user.
       *
       * @param request CreateLoginProfileRequest
       * @return CreateLoginProfileResponse
       */
      Models::CreateLoginProfileResponse createLoginProfile(const Models::CreateLoginProfileRequest &request);

      /**
       * @summary 创建OIDC身份供应商
       *
       * @param request CreateOIDCProviderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateOIDCProviderResponse
       */
      Models::CreateOIDCProviderResponse createOIDCProviderWithOptions(const Models::CreateOIDCProviderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建OIDC身份供应商
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
       * @summary 创建RAM用户
       *
       * @param request CreateUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateUserResponse
       */
      Models::CreateUserResponse createUserWithOptions(const Models::CreateUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建RAM用户
       *
       * @param request CreateUserRequest
       * @return CreateUserResponse
       */
      Models::CreateUserResponse createUser(const Models::CreateUserRequest &request);

      /**
       * @summary 创建多因素认证设备
       *
       * @param request CreateVirtualMFADeviceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVirtualMFADeviceResponse
       */
      Models::CreateVirtualMFADeviceResponse createVirtualMFADeviceWithOptions(const Models::CreateVirtualMFADeviceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建多因素认证设备
       *
       * @param request CreateVirtualMFADeviceRequest
       * @return CreateVirtualMFADeviceResponse
       */
      Models::CreateVirtualMFADeviceResponse createVirtualMFADevice(const Models::CreateVirtualMFADeviceRequest &request);

      /**
       * @summary 删除用户的访问密钥
       *
       * @param request DeleteAccessKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAccessKeyResponse
       */
      Models::DeleteAccessKeyResponse deleteAccessKeyWithOptions(const Models::DeleteAccessKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除用户的访问密钥
       *
       * @param request DeleteAccessKeyRequest
       * @return DeleteAccessKeyResponse
       */
      Models::DeleteAccessKeyResponse deleteAccessKey(const Models::DeleteAccessKeyRequest &request);

      /**
       * @summary 删除回收站中的访问密钥
       *
       * @param request DeleteAccessKeyInRecycleBinRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAccessKeyInRecycleBinResponse
       */
      Models::DeleteAccessKeyInRecycleBinResponse deleteAccessKeyInRecycleBinWithOptions(const Models::DeleteAccessKeyInRecycleBinRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除回收站中的访问密钥
       *
       * @param request DeleteAccessKeyInRecycleBinRequest
       * @return DeleteAccessKeyInRecycleBinResponse
       */
      Models::DeleteAccessKeyInRecycleBinResponse deleteAccessKeyInRecycleBin(const Models::DeleteAccessKeyInRecycleBinRequest &request);

      /**
       * @summary 删除指定应用的应用密钥
       *
       * @param request DeleteAppSecretRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAppSecretResponse
       */
      Models::DeleteAppSecretResponse deleteAppSecretWithOptions(const Models::DeleteAppSecretRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除指定应用的应用密钥
       *
       * @param request DeleteAppSecretRequest
       * @return DeleteAppSecretResponse
       */
      Models::DeleteAppSecretResponse deleteAppSecret(const Models::DeleteAppSecretRequest &request);

      /**
       * @summary 删除指定的应用
       *
       * @param request DeleteApplicationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteApplicationResponse
       */
      Models::DeleteApplicationResponse deleteApplicationWithOptions(const Models::DeleteApplicationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除指定的应用
       *
       * @param request DeleteApplicationRequest
       * @return DeleteApplicationResponse
       */
      Models::DeleteApplicationResponse deleteApplication(const Models::DeleteApplicationRequest &request);

      /**
       * @summary 删除指定的用户组
       *
       * @param request DeleteGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteGroupResponse
       */
      Models::DeleteGroupResponse deleteGroupWithOptions(const Models::DeleteGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除指定的用户组
       *
       * @param request DeleteGroupRequest
       * @return DeleteGroupResponse
       */
      Models::DeleteGroupResponse deleteGroup(const Models::DeleteGroupRequest &request);

      /**
       * @summary 关闭指定RAM用户的控制台登录
       *
       * @param request DeleteLoginProfileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLoginProfileResponse
       */
      Models::DeleteLoginProfileResponse deleteLoginProfileWithOptions(const Models::DeleteLoginProfileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 关闭指定RAM用户的控制台登录
       *
       * @param request DeleteLoginProfileRequest
       * @return DeleteLoginProfileResponse
       */
      Models::DeleteLoginProfileResponse deleteLoginProfile(const Models::DeleteLoginProfileRequest &request);

      /**
       * @summary 删除指定的角色SSO身份提供商
       *
       * @param request DeleteOIDCProviderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteOIDCProviderResponse
       */
      Models::DeleteOIDCProviderResponse deleteOIDCProviderWithOptions(const Models::DeleteOIDCProviderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除指定的角色SSO身份提供商
       *
       * @param request DeleteOIDCProviderRequest
       * @return DeleteOIDCProviderResponse
       */
      Models::DeleteOIDCProviderResponse deleteOIDCProvider(const Models::DeleteOIDCProviderRequest &request);

      /**
       * @summary 删除Passkey
       *
       * @param request DeletePasskeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePasskeyResponse
       */
      Models::DeletePasskeyResponse deletePasskeyWithOptions(const Models::DeletePasskeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除Passkey
       *
       * @param request DeletePasskeyRequest
       * @return DeletePasskeyResponse
       */
      Models::DeletePasskeyResponse deletePasskey(const Models::DeletePasskeyRequest &request);

      /**
       * @summary 删除指定的角色SSO身份提供商
       *
       * @param request DeleteSAMLProviderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSAMLProviderResponse
       */
      Models::DeleteSAMLProviderResponse deleteSAMLProviderWithOptions(const Models::DeleteSAMLProviderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除指定的角色SSO身份提供商
       *
       * @param request DeleteSAMLProviderRequest
       * @return DeleteSAMLProviderResponse
       */
      Models::DeleteSAMLProviderResponse deleteSAMLProvider(const Models::DeleteSAMLProviderRequest &request);

      /**
       * @summary 删除RAM用户
       *
       * @param request DeleteUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteUserResponse
       */
      Models::DeleteUserResponse deleteUserWithOptions(const Models::DeleteUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除RAM用户
       *
       * @param request DeleteUserRequest
       * @return DeleteUserResponse
       */
      Models::DeleteUserResponse deleteUser(const Models::DeleteUserRequest &request);

      /**
       * @summary 删除回收站中的用户
       *
       * @param request DeleteUserInRecycleBinRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteUserInRecycleBinResponse
       */
      Models::DeleteUserInRecycleBinResponse deleteUserInRecycleBinWithOptions(const Models::DeleteUserInRecycleBinRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除回收站中的用户
       *
       * @param request DeleteUserInRecycleBinRequest
       * @return DeleteUserInRecycleBinResponse
       */
      Models::DeleteUserInRecycleBinResponse deleteUserInRecycleBin(const Models::DeleteUserInRecycleBinRequest &request);

      /**
       * @summary 删除多因素认证设备
       *
       * @param request DeleteVirtualMFADeviceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteVirtualMFADeviceResponse
       */
      Models::DeleteVirtualMFADeviceResponse deleteVirtualMFADeviceWithOptions(const Models::DeleteVirtualMFADeviceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除多因素认证设备
       *
       * @param request DeleteVirtualMFADeviceRequest
       * @return DeleteVirtualMFADeviceResponse
       */
      Models::DeleteVirtualMFADeviceResponse deleteVirtualMFADevice(const Models::DeleteVirtualMFADeviceRequest &request);

      /**
       * @summary 解除安装应用
       *
       * @param request DeprovisionApplicationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeprovisionApplicationResponse
       */
      Models::DeprovisionApplicationResponse deprovisionApplicationWithOptions(const Models::DeprovisionApplicationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 解除安装应用
       *
       * @param request DeprovisionApplicationRequest
       * @return DeprovisionApplicationResponse
       */
      Models::DeprovisionApplicationResponse deprovisionApplication(const Models::DeprovisionApplicationRequest &request);

      /**
       * @summary 解除安装外部应用
       *
       * @param request DeprovisionExternalApplicationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeprovisionExternalApplicationResponse
       */
      Models::DeprovisionExternalApplicationResponse deprovisionExternalApplicationWithOptions(const Models::DeprovisionExternalApplicationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 解除安装外部应用
       *
       * @param request DeprovisionExternalApplicationRequest
       * @return DeprovisionExternalApplicationResponse
       */
      Models::DeprovisionExternalApplicationResponse deprovisionExternalApplication(const Models::DeprovisionExternalApplicationRequest &request);

      /**
       * @summary 解绑并删除多因素认证设备
       *
       * @param request DisableVirtualMFARequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableVirtualMFAResponse
       */
      Models::DisableVirtualMFAResponse disableVirtualMFAWithOptions(const Models::DisableVirtualMFARequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 解绑并删除多因素认证设备
       *
       * @param request DisableVirtualMFARequest
       * @return DisableVirtualMFAResponse
       */
      Models::DisableVirtualMFAResponse disableVirtualMFA(const Models::DisableVirtualMFARequest &request);

      /**
       * @summary 生成用户凭证报告
       *
       * @param request GenerateCredentialReportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateCredentialReportResponse
       */
      Models::GenerateCredentialReportResponse generateCredentialReportWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 生成用户凭证报告
       *
       * @return GenerateCredentialReportResponse
       */
      Models::GenerateCredentialReportResponse generateCredentialReport();

      /**
       * @summary 生成身份权限治理报告
       *
       * @param request GenerateGovernanceReportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateGovernanceReportResponse
       */
      Models::GenerateGovernanceReportResponse generateGovernanceReportWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 生成身份权限治理报告
       *
       * @return GenerateGovernanceReportResponse
       */
      Models::GenerateGovernanceReportResponse generateGovernanceReport();

      /**
       * @summary 查询回收站中的访问密钥信息
       *
       * @param request GetAccessKeyInfoInRecycleBinRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAccessKeyInfoInRecycleBinResponse
       */
      Models::GetAccessKeyInfoInRecycleBinResponse getAccessKeyInfoInRecycleBinWithOptions(const Models::GetAccessKeyInfoInRecycleBinRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询回收站中的访问密钥信息
       *
       * @param request GetAccessKeyInfoInRecycleBinRequest
       * @return GetAccessKeyInfoInRecycleBinResponse
       */
      Models::GetAccessKeyInfoInRecycleBinResponse getAccessKeyInfoInRecycleBin(const Models::GetAccessKeyInfoInRecycleBinRequest &request);

      /**
       * @summary 查询指定访问密钥的最后使用时间
       *
       * @param request GetAccessKeyLastUsedRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAccessKeyLastUsedResponse
       */
      Models::GetAccessKeyLastUsedResponse getAccessKeyLastUsedWithOptions(const Models::GetAccessKeyLastUsedRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询指定访问密钥的最后使用时间
       *
       * @param request GetAccessKeyLastUsedRequest
       * @return GetAccessKeyLastUsedResponse
       */
      Models::GetAccessKeyLastUsedResponse getAccessKeyLastUsed(const Models::GetAccessKeyLastUsedRequest &request);

      /**
       * @summary 查询主账号多因素认证设备信息
       *
       * @param request GetAccountMFAInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAccountMFAInfoResponse
       */
      Models::GetAccountMFAInfoResponse getAccountMFAInfoWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询主账号多因素认证设备信息
       *
       * @return GetAccountMFAInfoResponse
       */
      Models::GetAccountMFAInfoResponse getAccountMFAInfo();

      /**
       * @summary 查询阿里云账号的安全报告
       *
       * @param request GetAccountSecurityPracticeReportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAccountSecurityPracticeReportResponse
       */
      Models::GetAccountSecurityPracticeReportResponse getAccountSecurityPracticeReportWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询阿里云账号的安全报告
       *
       * @return GetAccountSecurityPracticeReportResponse
       */
      Models::GetAccountSecurityPracticeReportResponse getAccountSecurityPracticeReport();

      /**
       * @summary Retrieves a summary of an Alibaba Cloud account.
       *
       * @param request GetAccountSummaryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAccountSummaryResponse
       */
      Models::GetAccountSummaryResponse getAccountSummaryWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a summary of an Alibaba Cloud account.
       *
       * @return GetAccountSummaryResponse
       */
      Models::GetAccountSummaryResponse getAccountSummary();

      /**
       * @summary 查询指定应用密钥信息
       *
       * @param request GetAppSecretRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAppSecretResponse
       */
      Models::GetAppSecretResponse getAppSecretWithOptions(const Models::GetAppSecretRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询指定应用密钥信息
       *
       * @param request GetAppSecretRequest
       * @return GetAppSecretResponse
       */
      Models::GetAppSecretResponse getAppSecret(const Models::GetAppSecretRequest &request);

      /**
       * @summary Queries the configuration information of a specified application.
       *
       * @description This topic provides an example of how to query the configuration information of the application `472457090344041****`.
       *
       * @param request GetApplicationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetApplicationResponse
       */
      Models::GetApplicationResponse getApplicationWithOptions(const Models::GetApplicationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configuration information of a specified application.
       *
       * @description This topic provides an example of how to query the configuration information of the application `472457090344041****`.
       *
       * @param request GetApplicationRequest
       * @return GetApplicationResponse
       */
      Models::GetApplicationResponse getApplication(const Models::GetApplicationRequest &request);

      /**
       * @summary 查询应用安装信息
       *
       * @param request GetApplicationProvisionInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetApplicationProvisionInfoResponse
       */
      Models::GetApplicationProvisionInfoResponse getApplicationProvisionInfoWithOptions(const Models::GetApplicationProvisionInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询应用安装信息
       *
       * @param request GetApplicationProvisionInfoRequest
       * @return GetApplicationProvisionInfoResponse
       */
      Models::GetApplicationProvisionInfoResponse getApplicationProvisionInfo(const Models::GetApplicationProvisionInfoRequest &request);

      /**
       * @summary 查询用户凭证报告内容
       *
       * @param request GetCredentialReportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCredentialReportResponse
       */
      Models::GetCredentialReportResponse getCredentialReportWithOptions(const Models::GetCredentialReportRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询用户凭证报告内容
       *
       * @param request GetCredentialReportRequest
       * @return GetCredentialReportResponse
       */
      Models::GetCredentialReportResponse getCredentialReport(const Models::GetCredentialReportRequest &request);

      /**
       * @summary 查询默认域名
       *
       * @param request GetDefaultDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDefaultDomainResponse
       */
      Models::GetDefaultDomainResponse getDefaultDomainWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询默认域名
       *
       * @return GetDefaultDomainResponse
       */
      Models::GetDefaultDomainResponse getDefaultDomain();

      /**
       * @summary 查询外部应用
       *
       * @param request GetExternalApplicationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetExternalApplicationResponse
       */
      Models::GetExternalApplicationResponse getExternalApplicationWithOptions(const Models::GetExternalApplicationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询外部应用
       *
       * @param request GetExternalApplicationRequest
       * @return GetExternalApplicationResponse
       */
      Models::GetExternalApplicationResponse getExternalApplication(const Models::GetExternalApplicationRequest &request);

      /**
       * @summary Queries the details of a specific check item in an identity and access governance report.
       *
       * @param request GetGovernanceItemReportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetGovernanceItemReportResponse
       */
      Models::GetGovernanceItemReportResponse getGovernanceItemReportWithOptions(const Models::GetGovernanceItemReportRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a specific check item in an identity and access governance report.
       *
       * @param request GetGovernanceItemReportRequest
       * @return GetGovernanceItemReportResponse
       */
      Models::GetGovernanceItemReportResponse getGovernanceItemReport(const Models::GetGovernanceItemReportRequest &request);

      /**
       * @summary Queries the status of an identity and access governance report.
       *
       * @param request GetGovernanceReportStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetGovernanceReportStatusResponse
       */
      Models::GetGovernanceReportStatusResponse getGovernanceReportStatusWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of an identity and access governance report.
       *
       * @return GetGovernanceReportStatusResponse
       */
      Models::GetGovernanceReportStatusResponse getGovernanceReportStatus();

      /**
       * @summary 查询指定用户组信息
       *
       * @param request GetGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetGroupResponse
       */
      Models::GetGroupResponse getGroupWithOptions(const Models::GetGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询指定用户组信息
       *
       * @param request GetGroupRequest
       * @return GetGroupResponse
       */
      Models::GetGroupResponse getGroup(const Models::GetGroupRequest &request);

      /**
       * @summary Retrieves the logon information for a specified Resource Access Management (RAM) user.
       *
       * @param request GetLoginProfileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetLoginProfileResponse
       */
      Models::GetLoginProfileResponse getLoginProfileWithOptions(const Models::GetLoginProfileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the logon information for a specified Resource Access Management (RAM) user.
       *
       * @param request GetLoginProfileRequest
       * @return GetLoginProfileResponse
       */
      Models::GetLoginProfileResponse getLoginProfile(const Models::GetLoginProfileRequest &request);

      /**
       * @summary 查询OIDC身份提供商信息
       *
       * @param request GetOIDCProviderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOIDCProviderResponse
       */
      Models::GetOIDCProviderResponse getOIDCProviderWithOptions(const Models::GetOIDCProviderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询OIDC身份提供商信息
       *
       * @param request GetOIDCProviderRequest
       * @return GetOIDCProviderResponse
       */
      Models::GetOIDCProviderResponse getOIDCProvider(const Models::GetOIDCProviderRequest &request);

      /**
       * @summary Retrieves the password strength policy for Resource Access Management (RAM) users.
       *
       * @param request GetPasswordPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPasswordPolicyResponse
       */
      Models::GetPasswordPolicyResponse getPasswordPolicyWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the password strength policy for Resource Access Management (RAM) users.
       *
       * @return GetPasswordPolicyResponse
       */
      Models::GetPasswordPolicyResponse getPasswordPolicy();

      /**
       * @summary Retrieves information about a specified SAML provider for role-based SSO.
       *
       * @param request GetSAMLProviderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSAMLProviderResponse
       */
      Models::GetSAMLProviderResponse getSAMLProviderWithOptions(const Models::GetSAMLProviderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves information about a specified SAML provider for role-based SSO.
       *
       * @param request GetSAMLProviderRequest
       * @return GetSAMLProviderResponse
       */
      Models::GetSAMLProviderResponse getSAMLProvider(const Models::GetSAMLProviderRequest &request);

      /**
       * @summary Queries the global security preferences for Resource Access Management (RAM) users.
       *
       * @param request GetSecurityPreferenceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSecurityPreferenceResponse
       */
      Models::GetSecurityPreferenceResponse getSecurityPreferenceWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the global security preferences for Resource Access Management (RAM) users.
       *
       * @return GetSecurityPreferenceResponse
       */
      Models::GetSecurityPreferenceResponse getSecurityPreference();

      /**
       * @summary 查询RAM用户的详细信息
       *
       * @param request GetUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUserResponse
       */
      Models::GetUserResponse getUserWithOptions(const Models::GetUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询RAM用户的详细信息
       *
       * @param request GetUserRequest
       * @return GetUserResponse
       */
      Models::GetUserResponse getUser(const Models::GetUserRequest &request);

      /**
       * @summary 获取回收站中的用户
       *
       * @param request GetUserInRecycleBinRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUserInRecycleBinResponse
       */
      Models::GetUserInRecycleBinResponse getUserInRecycleBinWithOptions(const Models::GetUserInRecycleBinRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取回收站中的用户
       *
       * @param request GetUserInRecycleBinRequest
       * @return GetUserInRecycleBinResponse
       */
      Models::GetUserInRecycleBinResponse getUserInRecycleBin(const Models::GetUserInRecycleBinRequest &request);

      /**
       * @summary 查询RAM用户多因素认证设备信息
       *
       * @param request GetUserMFAInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUserMFAInfoResponse
       */
      Models::GetUserMFAInfoResponse getUserMFAInfoWithOptions(const Models::GetUserMFAInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询RAM用户多因素认证设备信息
       *
       * @param request GetUserMFAInfoRequest
       * @return GetUserMFAInfoResponse
       */
      Models::GetUserMFAInfoResponse getUserMFAInfo(const Models::GetUserMFAInfoRequest &request);

      /**
       * @summary Queries the identity provider settings for user-based SSO.
       *
       * @param request GetUserSsoSettingsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUserSsoSettingsResponse
       */
      Models::GetUserSsoSettingsResponse getUserSsoSettingsWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the identity provider settings for user-based SSO.
       *
       * @return GetUserSsoSettingsResponse
       */
      Models::GetUserSsoSettingsResponse getUserSsoSettings();

      /**
       * @summary 获取用户安全认证的信息
       *
       * @param request GetVerificationInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetVerificationInfoResponse
       */
      Models::GetVerificationInfoResponse getVerificationInfoWithOptions(const Models::GetVerificationInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取用户安全认证的信息
       *
       * @param request GetVerificationInfoRequest
       * @return GetVerificationInfoResponse
       */
      Models::GetVerificationInfoResponse getVerificationInfo(const Models::GetVerificationInfoRequest &request);

      /**
       * @summary 查询主账号或RAM用户访问密钥列表
       *
       * @param request ListAccessKeysRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAccessKeysResponse
       */
      Models::ListAccessKeysResponse listAccessKeysWithOptions(const Models::ListAccessKeysRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询主账号或RAM用户访问密钥列表
       *
       * @param request ListAccessKeysRequest
       * @return ListAccessKeysResponse
       */
      Models::ListAccessKeysResponse listAccessKeys(const Models::ListAccessKeysRequest &request);

      /**
       * @summary 列出回收站中访问密钥列表
       *
       * @param request ListAccessKeysInRecycleBinRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAccessKeysInRecycleBinResponse
       */
      Models::ListAccessKeysInRecycleBinResponse listAccessKeysInRecycleBinWithOptions(const Models::ListAccessKeysInRecycleBinRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 列出回收站中访问密钥列表
       *
       * @param request ListAccessKeysInRecycleBinRequest
       * @return ListAccessKeysInRecycleBinResponse
       */
      Models::ListAccessKeysInRecycleBinResponse listAccessKeysInRecycleBin(const Models::ListAccessKeysInRecycleBinRequest &request);

      /**
       * @summary 查询指定应用的应用密钥ID列表
       *
       * @param request ListAppSecretIdsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAppSecretIdsResponse
       */
      Models::ListAppSecretIdsResponse listAppSecretIdsWithOptions(const Models::ListAppSecretIdsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询指定应用的应用密钥ID列表
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
       * @summary Lists the applications that you have created.
       *
       * @description This topic provides an example of how to query the applications in your Alibaba Cloud account. The response shows that only one application, named `myapp`, exists in the account.
       *
       * @param request ListApplicationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListApplicationsResponse
       */
      Models::ListApplicationsResponse listApplicationsWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the applications that you have created.
       *
       * @description This topic provides an example of how to query the applications in your Alibaba Cloud account. The response shows that only one application, named `myapp`, exists in the account.
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
       * @summary 查询RAM用户加入的用户组列表
       *
       * @param request ListGroupsForUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListGroupsForUserResponse
       */
      Models::ListGroupsForUserResponse listGroupsForUserWithOptions(const Models::ListGroupsForUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询RAM用户加入的用户组列表
       *
       * @param request ListGroupsForUserRequest
       * @return ListGroupsForUserResponse
       */
      Models::ListGroupsForUserResponse listGroupsForUser(const Models::ListGroupsForUserRequest &request);

      /**
       * @summary 查询OIDC身份提供商列表
       *
       * @param request ListOIDCProvidersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListOIDCProvidersResponse
       */
      Models::ListOIDCProvidersResponse listOIDCProvidersWithOptions(const Models::ListOIDCProvidersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询OIDC身份提供商列表
       *
       * @param request ListOIDCProvidersRequest
       * @return ListOIDCProvidersResponse
       */
      Models::ListOIDCProvidersResponse listOIDCProviders(const Models::ListOIDCProvidersRequest &request);

      /**
       * @summary 查询Passkey
       *
       * @param request ListPasskeysRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPasskeysResponse
       */
      Models::ListPasskeysResponse listPasskeysWithOptions(const Models::ListPasskeysRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询Passkey
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
       * @summary 查询角色SSO身份提供商列表
       *
       * @param request ListSAMLProvidersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSAMLProvidersResponse
       */
      Models::ListSAMLProvidersResponse listSAMLProvidersWithOptions(const Models::ListSAMLProvidersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询角色SSO身份提供商列表
       *
       * @param request ListSAMLProvidersRequest
       * @return ListSAMLProvidersResponse
       */
      Models::ListSAMLProvidersResponse listSAMLProviders(const Models::ListSAMLProvidersRequest &request);

      /**
       * @summary 查询资源与标签的关系
       *
       * @param request ListTagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询资源与标签的关系
       *
       * @param request ListTagResourcesRequest
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResources(const Models::ListTagResourcesRequest &request);

      /**
       * @summary Queries the basic information about all Resource Access Management (RAM) users.
       *
       * @description You can call the following API operations to query information about all RAM users:
       * - ListUsers: queries the details of all RAM users.
       * - ListUserBasicInfos: queries the basic information about all RAM users. The basic information includes only the logon names (`UserPrincipalName`), display names (`DisplayName`), and user IDs (`UserId`).
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
       * - ListUsers: queries the details of all RAM users.
       * - ListUserBasicInfos: queries the basic information about all RAM users. The basic information includes only the logon names (`UserPrincipalName`), display names (`DisplayName`), and user IDs (`UserId`).
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
       * - ListUsers: queries the details of all RAM users.
       * - ListUserBasicInfos: queries the basic information about all RAM users. The basic information includes only the logon names (`UserPrincipalName`), display names (`DisplayName`), and user IDs (`UserId`).
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
       * - ListUsers: queries the details of all RAM users.
       * - ListUserBasicInfos: queries the basic information about all RAM users. The basic information includes only the logon names (`UserPrincipalName`), display names (`DisplayName`), and user IDs (`UserId`).
       *
       * @param request ListUsersRequest
       * @return ListUsersResponse
       */
      Models::ListUsersResponse listUsers(const Models::ListUsersRequest &request);

      /**
       * @summary 查询用户组中用户列表
       *
       * @param request ListUsersForGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUsersForGroupResponse
       */
      Models::ListUsersForGroupResponse listUsersForGroupWithOptions(const Models::ListUsersForGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询用户组中用户列表
       *
       * @param request ListUsersForGroupRequest
       * @return ListUsersForGroupResponse
       */
      Models::ListUsersForGroupResponse listUsersForGroup(const Models::ListUsersForGroupRequest &request);

      /**
       * @summary 查询回收站中用户列表
       *
       * @param request ListUsersInRecycleBinRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUsersInRecycleBinResponse
       */
      Models::ListUsersInRecycleBinResponse listUsersInRecycleBinWithOptions(const Models::ListUsersInRecycleBinRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询回收站中用户列表
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
       * @summary 安装应用
       *
       * @param request ProvisionApplicationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ProvisionApplicationResponse
       */
      Models::ProvisionApplicationResponse provisionApplicationWithOptions(const Models::ProvisionApplicationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 安装应用
       *
       * @param request ProvisionApplicationRequest
       * @return ProvisionApplicationResponse
       */
      Models::ProvisionApplicationResponse provisionApplication(const Models::ProvisionApplicationRequest &request);

      /**
       * @summary 安装外部应用
       *
       * @param request ProvisionExternalApplicationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ProvisionExternalApplicationResponse
       */
      Models::ProvisionExternalApplicationResponse provisionExternalApplicationWithOptions(const Models::ProvisionExternalApplicationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 安装外部应用
       *
       * @param request ProvisionExternalApplicationRequest
       * @return ProvisionExternalApplicationResponse
       */
      Models::ProvisionExternalApplicationResponse provisionExternalApplication(const Models::ProvisionExternalApplicationRequest &request);

      /**
       * @summary 移除OIDC身份提供商中的指定客户端ID
       *
       * @param request RemoveClientIdFromOIDCProviderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveClientIdFromOIDCProviderResponse
       */
      Models::RemoveClientIdFromOIDCProviderResponse removeClientIdFromOIDCProviderWithOptions(const Models::RemoveClientIdFromOIDCProviderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 移除OIDC身份提供商中的指定客户端ID
       *
       * @param request RemoveClientIdFromOIDCProviderRequest
       * @return RemoveClientIdFromOIDCProviderResponse
       */
      Models::RemoveClientIdFromOIDCProviderResponse removeClientIdFromOIDCProvider(const Models::RemoveClientIdFromOIDCProviderRequest &request);

      /**
       * @summary 移除OIDC身份提供商中指定的验证指纹
       *
       * @param request RemoveFingerprintFromOIDCProviderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveFingerprintFromOIDCProviderResponse
       */
      Models::RemoveFingerprintFromOIDCProviderResponse removeFingerprintFromOIDCProviderWithOptions(const Models::RemoveFingerprintFromOIDCProviderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 移除OIDC身份提供商中指定的验证指纹
       *
       * @param request RemoveFingerprintFromOIDCProviderRequest
       * @return RemoveFingerprintFromOIDCProviderResponse
       */
      Models::RemoveFingerprintFromOIDCProviderResponse removeFingerprintFromOIDCProvider(const Models::RemoveFingerprintFromOIDCProviderRequest &request);

      /**
       * @summary 将RAM用户从用户组中移除
       *
       * @param request RemoveUserFromGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveUserFromGroupResponse
       */
      Models::RemoveUserFromGroupResponse removeUserFromGroupWithOptions(const Models::RemoveUserFromGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 将RAM用户从用户组中移除
       *
       * @param request RemoveUserFromGroupRequest
       * @return RemoveUserFromGroupResponse
       */
      Models::RemoveUserFromGroupResponse removeUserFromGroup(const Models::RemoveUserFromGroupRequest &request);

      /**
       * @summary 清空回收站中的访问密钥
       *
       * @param request RestoreAccessKeyFromRecycleBinRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RestoreAccessKeyFromRecycleBinResponse
       */
      Models::RestoreAccessKeyFromRecycleBinResponse restoreAccessKeyFromRecycleBinWithOptions(const Models::RestoreAccessKeyFromRecycleBinRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 清空回收站中的访问密钥
       *
       * @param request RestoreAccessKeyFromRecycleBinRequest
       * @return RestoreAccessKeyFromRecycleBinResponse
       */
      Models::RestoreAccessKeyFromRecycleBinResponse restoreAccessKeyFromRecycleBin(const Models::RestoreAccessKeyFromRecycleBinRequest &request);

      /**
       * @summary 清空回收站中的用户
       *
       * @param request RestoreUserFromRecycleBinRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RestoreUserFromRecycleBinResponse
       */
      Models::RestoreUserFromRecycleBinResponse restoreUserFromRecycleBinWithOptions(const Models::RestoreUserFromRecycleBinRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 清空回收站中的用户
       *
       * @param request RestoreUserFromRecycleBinRequest
       * @return RestoreUserFromRecycleBinResponse
       */
      Models::RestoreUserFromRecycleBinResponse restoreUserFromRecycleBin(const Models::RestoreUserFromRecycleBinRequest &request);

      /**
       * @summary 设置默认域名
       *
       * @param request SetDefaultDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetDefaultDomainResponse
       */
      Models::SetDefaultDomainResponse setDefaultDomainWithOptions(const Models::SetDefaultDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 设置默认域名
       *
       * @param request SetDefaultDomainRequest
       * @return SetDefaultDomainResponse
       */
      Models::SetDefaultDomainResponse setDefaultDomain(const Models::SetDefaultDomainRequest &request);

      /**
       * @summary Sets the password strength policy for RAM users.
       *
       * @param request SetPasswordPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetPasswordPolicyResponse
       */
      Models::SetPasswordPolicyResponse setPasswordPolicyWithOptions(const Models::SetPasswordPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets the password strength policy for RAM users.
       *
       * @param request SetPasswordPolicyRequest
       * @return SetPasswordPolicyResponse
       */
      Models::SetPasswordPolicyResponse setPasswordPolicy(const Models::SetPasswordPolicyRequest &request);

      /**
       * @summary Configures the global security preferences for a Resource Access Management (RAM) user.
       *
       * @param tmpReq SetSecurityPreferenceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetSecurityPreferenceResponse
       */
      Models::SetSecurityPreferenceResponse setSecurityPreferenceWithOptions(const Models::SetSecurityPreferenceRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures the global security preferences for a Resource Access Management (RAM) user.
       *
       * @param request SetSecurityPreferenceRequest
       * @return SetSecurityPreferenceResponse
       */
      Models::SetSecurityPreferenceResponse setSecurityPreference(const Models::SetSecurityPreferenceRequest &request);

      /**
       * @summary Sets the identity provider (IdP) settings for user-based single sign-on (SSO).
       *
       * @param request SetUserSsoSettingsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetUserSsoSettingsResponse
       */
      Models::SetUserSsoSettingsResponse setUserSsoSettingsWithOptions(const Models::SetUserSsoSettingsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets the identity provider (IdP) settings for user-based single sign-on (SSO).
       *
       * @param request SetUserSsoSettingsRequest
       * @return SetUserSsoSettingsResponse
       */
      Models::SetUserSsoSettingsResponse setUserSsoSettings(const Models::SetUserSsoSettingsRequest &request);

      /**
       * @summary 新增录入/修改安全手机号码、安全邮箱的API
       *
       * @param request SetVerificationInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetVerificationInfoResponse
       */
      Models::SetVerificationInfoResponse setVerificationInfoWithOptions(const Models::SetVerificationInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 新增录入/修改安全手机号码、安全邮箱的API
       *
       * @param request SetVerificationInfoRequest
       * @return SetVerificationInfoResponse
       */
      Models::SetVerificationInfoResponse setVerificationInfo(const Models::SetVerificationInfoRequest &request);

      /**
       * @summary 资源打上标签
       *
       * @param request TagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 资源打上标签
       *
       * @param request TagResourcesRequest
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

      /**
       * @summary 为RAM用户解绑多因素认证设备
       *
       * @param request UnbindMFADeviceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnbindMFADeviceResponse
       */
      Models::UnbindMFADeviceResponse unbindMFADeviceWithOptions(const Models::UnbindMFADeviceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 为RAM用户解绑多因素认证设备
       *
       * @param request UnbindMFADeviceRequest
       * @return UnbindMFADeviceResponse
       */
      Models::UnbindMFADeviceResponse unbindMFADevice(const Models::UnbindMFADeviceRequest &request);

      /**
       * @summary 删除用户的安全认证
       *
       * @param request UnbindVerificationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnbindVerificationResponse
       */
      Models::UnbindVerificationResponse unbindVerificationWithOptions(const Models::UnbindVerificationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除用户的安全认证
       *
       * @param request UnbindVerificationRequest
       * @return UnbindVerificationResponse
       */
      Models::UnbindVerificationResponse unbindVerification(const Models::UnbindVerificationRequest &request);

      /**
       * @summary 解绑资源的标签
       *
       * @param request UntagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResourcesWithOptions(const Models::UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 解绑资源的标签
       *
       * @param request UntagResourcesRequest
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResources(const Models::UntagResourcesRequest &request);

      /**
       * @summary 修改访问密钥状态
       *
       * @param request UpdateAccessKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAccessKeyResponse
       */
      Models::UpdateAccessKeyResponse updateAccessKeyWithOptions(const Models::UpdateAccessKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改访问密钥状态
       *
       * @param request UpdateAccessKeyRequest
       * @return UpdateAccessKeyResponse
       */
      Models::UpdateAccessKeyResponse updateAccessKey(const Models::UpdateAccessKeyRequest &request);

      /**
       * @summary Updates the configuration of a specified application.
       *
       * @param request UpdateApplicationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateApplicationResponse
       */
      Models::UpdateApplicationResponse updateApplicationWithOptions(const Models::UpdateApplicationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the configuration of a specified application.
       *
       * @param request UpdateApplicationRequest
       * @return UpdateApplicationResponse
       */
      Models::UpdateApplicationResponse updateApplication(const Models::UpdateApplicationRequest &request);

      /**
       * @summary 修改指定用户组的信息
       *
       * @param request UpdateGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateGroupResponse
       */
      Models::UpdateGroupResponse updateGroupWithOptions(const Models::UpdateGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改指定用户组的信息
       *
       * @param request UpdateGroupRequest
       * @return UpdateGroupResponse
       */
      Models::UpdateGroupResponse updateGroup(const Models::UpdateGroupRequest &request);

      /**
       * @summary Modifies the console logon information for a specified Resource Access Management (RAM) user.
       *
       * @param request UpdateLoginProfileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateLoginProfileResponse
       */
      Models::UpdateLoginProfileResponse updateLoginProfileWithOptions(const Models::UpdateLoginProfileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the console logon information for a specified Resource Access Management (RAM) user.
       *
       * @param request UpdateLoginProfileRequest
       * @return UpdateLoginProfileResponse
       */
      Models::UpdateLoginProfileResponse updateLoginProfile(const Models::UpdateLoginProfileRequest &request);

      /**
       * @summary 修改OIDC身份提供商的描述和客户端ID
       *
       * @param request UpdateOIDCProviderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateOIDCProviderResponse
       */
      Models::UpdateOIDCProviderResponse updateOIDCProviderWithOptions(const Models::UpdateOIDCProviderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改OIDC身份提供商的描述和客户端ID
       *
       * @param request UpdateOIDCProviderRequest
       * @return UpdateOIDCProviderResponse
       */
      Models::UpdateOIDCProviderResponse updateOIDCProvider(const Models::UpdateOIDCProviderRequest &request);

      /**
       * @summary 更新Passkey
       *
       * @param request UpdatePasskeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePasskeyResponse
       */
      Models::UpdatePasskeyResponse updatePasskeyWithOptions(const Models::UpdatePasskeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新Passkey
       *
       * @param request UpdatePasskeyRequest
       * @return UpdatePasskeyResponse
       */
      Models::UpdatePasskeyResponse updatePasskey(const Models::UpdatePasskeyRequest &request);

      /**
       * @summary Updates the information about a specified identity provider for role-based single sign-on (SSO).
       *
       * @description This example shows how to change the description of the identity provider `test-provider` to `This is a new provider.`.
       *
       * @param request UpdateSAMLProviderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSAMLProviderResponse
       */
      Models::UpdateSAMLProviderResponse updateSAMLProviderWithOptions(const Models::UpdateSAMLProviderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the information about a specified identity provider for role-based single sign-on (SSO).
       *
       * @description This example shows how to change the description of the identity provider `test-provider` to `This is a new provider.`.
       *
       * @param request UpdateSAMLProviderRequest
       * @return UpdateSAMLProviderResponse
       */
      Models::UpdateSAMLProviderResponse updateSAMLProvider(const Models::UpdateSAMLProviderRequest &request);

      /**
       * @summary 修改RAM用户信息
       *
       * @param request UpdateUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateUserResponse
       */
      Models::UpdateUserResponse updateUserWithOptions(const Models::UpdateUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改RAM用户信息
       *
       * @param request UpdateUserRequest
       * @return UpdateUserResponse
       */
      Models::UpdateUserResponse updateUser(const Models::UpdateUserRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
