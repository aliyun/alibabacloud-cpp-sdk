// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_CLOUDSSO20210515_HPP_
#define ALIBABACLOUD_CLOUDSSO20210515_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Cloudsso20210515Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Cloudsso20210515.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudsso20210515
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Adds a Security Assertion Markup Language (SAML) signing certificate.
       *
       * @description You can add up to two SAML signing certificates.
       * This topic provides an example on how to add a SAML signing certificate to the directory `d-00fc2p61****`.
       *
       * @param request AddExternalSAMLIdPCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddExternalSAMLIdPCertificateResponse
       */
      Models::AddExternalSAMLIdPCertificateResponse addExternalSAMLIdPCertificateWithOptions(const Models::AddExternalSAMLIdPCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a Security Assertion Markup Language (SAML) signing certificate.
       *
       * @description You can add up to two SAML signing certificates.
       * This topic provides an example on how to add a SAML signing certificate to the directory `d-00fc2p61****`.
       *
       * @param request AddExternalSAMLIdPCertificateRequest
       * @return AddExternalSAMLIdPCertificateResponse
       */
      Models::AddExternalSAMLIdPCertificateResponse addExternalSAMLIdPCertificate(const Models::AddExternalSAMLIdPCertificateRequest &request);

      /**
       * @summary Adds a policy to an access configuration.
       *
       * @description This topic provides an example on how to add the system policy `AliyunECSFullAccess` to the access configuration `ac-00jhtfl8thteu6uj****`.
       *
       * @param request AddPermissionPolicyToAccessConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddPermissionPolicyToAccessConfigurationResponse
       */
      Models::AddPermissionPolicyToAccessConfigurationResponse addPermissionPolicyToAccessConfigurationWithOptions(const Models::AddPermissionPolicyToAccessConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a policy to an access configuration.
       *
       * @description This topic provides an example on how to add the system policy `AliyunECSFullAccess` to the access configuration `ac-00jhtfl8thteu6uj****`.
       *
       * @param request AddPermissionPolicyToAccessConfigurationRequest
       * @return AddPermissionPolicyToAccessConfigurationResponse
       */
      Models::AddPermissionPolicyToAccessConfigurationResponse addPermissionPolicyToAccessConfiguration(const Models::AddPermissionPolicyToAccessConfigurationRequest &request);

      /**
       * @summary Adds a user to a group.
       *
       * @description If System for Cross-domain Identity Management (SCIM) synchronization is enabled, you cannot add a user to a group that is synchronized by using SCIM.
       * This topic provides an example on how to add the user `u-00q8wbq42wiltcrk****` to the group `g-00jqzghi2n3o5hkh****`.
       *
       * @param request AddUserToGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddUserToGroupResponse
       */
      Models::AddUserToGroupResponse addUserToGroupWithOptions(const Models::AddUserToGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a user to a group.
       *
       * @description If System for Cross-domain Identity Management (SCIM) synchronization is enabled, you cannot add a user to a group that is synchronized by using SCIM.
       * This topic provides an example on how to add the user `u-00q8wbq42wiltcrk****` to the group `g-00jqzghi2n3o5hkh****`.
       *
       * @param request AddUserToGroupRequest
       * @return AddUserToGroupResponse
       */
      Models::AddUserToGroupResponse addUserToGroup(const Models::AddUserToGroupRequest &request);

      /**
       * @summary Clears the configurations of a Security Assertion Markup Language (SAML) identity provider (IdP).
       *
       * @description If single sign-on (SSO) logon is disabled, you can clear the configurations of a SAML IdP. If SSO logon is enabled, you cannot clear the configurations.
       * This topic provides an example on how to clear the configurations of the SAML IdP within the directory `d-00fc2p61****`.
       *
       * @param request ClearExternalSAMLIdentityProviderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ClearExternalSAMLIdentityProviderResponse
       */
      Models::ClearExternalSAMLIdentityProviderResponse clearExternalSAMLIdentityProviderWithOptions(const Models::ClearExternalSAMLIdentityProviderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Clears the configurations of a Security Assertion Markup Language (SAML) identity provider (IdP).
       *
       * @description If single sign-on (SSO) logon is disabled, you can clear the configurations of a SAML IdP. If SSO logon is enabled, you cannot clear the configurations.
       * This topic provides an example on how to clear the configurations of the SAML IdP within the directory `d-00fc2p61****`.
       *
       * @param request ClearExternalSAMLIdentityProviderRequest
       * @return ClearExternalSAMLIdentityProviderResponse
       */
      Models::ClearExternalSAMLIdentityProviderResponse clearExternalSAMLIdentityProvider(const Models::ClearExternalSAMLIdentityProviderRequest &request);

      /**
       * @summary Assigns access permissions on an account in your resource directory to a user or a group by using an access configuration.
       *
       * @description When you call this operation, an asynchronous task is created. You can call the [GetTask](https://help.aliyun.com/document_detail/340670.html) operation to query the progress of the task based on the value of the `TaskId` response parameter.
       * For more information about how to assign permissions on an account in your resource directory, see [Overview of multi-account authorization](https://help.aliyun.com/document_detail/266726.html).
       * This topic provides an example on how to assign access permissions on the account `114240524784****` in your resource directory to the CloudSSO user `u-00q8wbq42wiltcrk****` by using the access configuration `ac-00jhtfl8thteu6uj****`. After the call is successful, the CloudSSO user can access resources within the account in the resource directory.
       *
       * @param request CreateAccessAssignmentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAccessAssignmentResponse
       */
      Models::CreateAccessAssignmentResponse createAccessAssignmentWithOptions(const Models::CreateAccessAssignmentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Assigns access permissions on an account in your resource directory to a user or a group by using an access configuration.
       *
       * @description When you call this operation, an asynchronous task is created. You can call the [GetTask](https://help.aliyun.com/document_detail/340670.html) operation to query the progress of the task based on the value of the `TaskId` response parameter.
       * For more information about how to assign permissions on an account in your resource directory, see [Overview of multi-account authorization](https://help.aliyun.com/document_detail/266726.html).
       * This topic provides an example on how to assign access permissions on the account `114240524784****` in your resource directory to the CloudSSO user `u-00q8wbq42wiltcrk****` by using the access configuration `ac-00jhtfl8thteu6uj****`. After the call is successful, the CloudSSO user can access resources within the account in the resource directory.
       *
       * @param request CreateAccessAssignmentRequest
       * @return CreateAccessAssignmentResponse
       */
      Models::CreateAccessAssignmentResponse createAccessAssignment(const Models::CreateAccessAssignmentRequest &request);

      /**
       * @summary Creates an access configuration.
       *
       * @description For more information about access configurations, see [Access configuration overview](https://help.aliyun.com/document_detail/266737.html).
       * This topic provides an example on how to create an access configuration named `ECS-Admin`.
       *
       * @param request CreateAccessConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAccessConfigurationResponse
       */
      Models::CreateAccessConfigurationResponse createAccessConfigurationWithOptions(const Models::CreateAccessConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an access configuration.
       *
       * @description For more information about access configurations, see [Access configuration overview](https://help.aliyun.com/document_detail/266737.html).
       * This topic provides an example on how to create an access configuration named `ECS-Admin`.
       *
       * @param request CreateAccessConfigurationRequest
       * @return CreateAccessConfigurationResponse
       */
      Models::CreateAccessConfigurationResponse createAccessConfiguration(const Models::CreateAccessConfigurationRequest &request);

      /**
       * @summary Creates a directory.
       *
       * @description ### [](#)Operation description
       * A directory is a CloudSSO instance. Before you can use CloudSSO, you must create a directory. The directory is used to manage all CloudSSO resources.
       * To create a directory, you must select a region. Alibaba Cloud stores data in the directory only in the region that you select. However, you can deploy Alibaba Cloud resources including Elastic Compute Service (ECS) instances and ApsaraDB RDS instances in other regions. You can also use your cloud account for logons and access the Alibaba Cloud resources in other regions. You can select a region to create a directory based on your security compliance requirements and the geographic location of specific users. If you do not have strict security compliance requirements, we recommend that you select a region that is the closest to the geographical location of the specific users. This way, access to cloud resources is accelerated. You can create the CloudSSO directory in the China (Shanghai), China (Hong Kong), US (Silicon Valley), or Germany (Frankfurt) region.
       * This topic provides an example on how to create a directory named `example` in the China (Shanghai) region.
       * ### [](#)Limits
       * *   You can create only one directory for a management account.
       * *   If you want to change the region of a directory, you must delete the directory and then create a directory in a different region.
       *
       * @param request CreateDirectoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDirectoryResponse
       */
      Models::CreateDirectoryResponse createDirectoryWithOptions(const Models::CreateDirectoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a directory.
       *
       * @description ### [](#)Operation description
       * A directory is a CloudSSO instance. Before you can use CloudSSO, you must create a directory. The directory is used to manage all CloudSSO resources.
       * To create a directory, you must select a region. Alibaba Cloud stores data in the directory only in the region that you select. However, you can deploy Alibaba Cloud resources including Elastic Compute Service (ECS) instances and ApsaraDB RDS instances in other regions. You can also use your cloud account for logons and access the Alibaba Cloud resources in other regions. You can select a region to create a directory based on your security compliance requirements and the geographic location of specific users. If you do not have strict security compliance requirements, we recommend that you select a region that is the closest to the geographical location of the specific users. This way, access to cloud resources is accelerated. You can create the CloudSSO directory in the China (Shanghai), China (Hong Kong), US (Silicon Valley), or Germany (Frankfurt) region.
       * This topic provides an example on how to create a directory named `example` in the China (Shanghai) region.
       * ### [](#)Limits
       * *   You can create only one directory for a management account.
       * *   If you want to change the region of a directory, you must delete the directory and then create a directory in a different region.
       *
       * @param request CreateDirectoryRequest
       * @return CreateDirectoryResponse
       */
      Models::CreateDirectoryResponse createDirectory(const Models::CreateDirectoryRequest &request);

      /**
       * @summary Creates a group.
       *
       * @description This topic provides an example on how to create a group named `TestGroup`.
       *
       * @param request CreateGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateGroupResponse
       */
      Models::CreateGroupResponse createGroupWithOptions(const Models::CreateGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a group.
       *
       * @description This topic provides an example on how to create a group named `TestGroup`.
       *
       * @param request CreateGroupRequest
       * @return CreateGroupResponse
       */
      Models::CreateGroupResponse createGroup(const Models::CreateGroupRequest &request);

      /**
       * @summary Creates a System for Cross-domain Identity Management (SCIM) credential.
       *
       * @description SCIM credentials are required for SCIM synchronization. You can create up to two SCIM credentials.
       * This topic provides an example on how to create a SCIM credential within the directory `d-00fc2p61****`.
       *
       * @param request CreateSCIMServerCredentialRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSCIMServerCredentialResponse
       */
      Models::CreateSCIMServerCredentialResponse createSCIMServerCredentialWithOptions(const Models::CreateSCIMServerCredentialRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a System for Cross-domain Identity Management (SCIM) credential.
       *
       * @description SCIM credentials are required for SCIM synchronization. You can create up to two SCIM credentials.
       * This topic provides an example on how to create a SCIM credential within the directory `d-00fc2p61****`.
       *
       * @param request CreateSCIMServerCredentialRequest
       * @return CreateSCIMServerCredentialResponse
       */
      Models::CreateSCIMServerCredentialResponse createSCIMServerCredential(const Models::CreateSCIMServerCredentialRequest &request);

      /**
       * @summary Creates a user by calling CreateUser.
       *
       * @param request CreateUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateUserResponse
       */
      Models::CreateUserResponse createUserWithOptions(const Models::CreateUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a user by calling CreateUser.
       *
       * @param request CreateUserRequest
       * @return CreateUserResponse
       */
      Models::CreateUserResponse createUser(const Models::CreateUserRequest &request);

      /**
       * @summary Creates a Resource Access Management (RAM) user provisioning.
       *
       * @description You can create a RAM user provisioning for a member in your resource directory to create a RAM user that has the same username as a CloudSSO user. This way, the CloudSSO user can access the resources of the member as the RAM user.
       *
       * @param request CreateUserProvisioningRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateUserProvisioningResponse
       */
      Models::CreateUserProvisioningResponse createUserProvisioningWithOptions(const Models::CreateUserProvisioningRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a Resource Access Management (RAM) user provisioning.
       *
       * @description You can create a RAM user provisioning for a member in your resource directory to create a RAM user that has the same username as a CloudSSO user. This way, the CloudSSO user can access the resources of the member as the RAM user.
       *
       * @param request CreateUserProvisioningRequest
       * @return CreateUserProvisioningResponse
       */
      Models::CreateUserProvisioningResponse createUserProvisioning(const Models::CreateUserProvisioningRequest &request);

      /**
       * @summary Removes the access permissions on an account in a resource directory.
       *
       * @description When you call this operation, an asynchronous task is created. You can call the [GetTask](https://help.aliyun.com/document_detail/340670.html) operation to query the progress of the task based on the value of the `TaskId` response parameter.
       * This topic provides an example on how to remove the access permissions on the account `114240524784****` in the resource directory from the CloudSSO user `u-00q8wbq42wiltcrk****`. The access permissions are assigned by using the access configuration `ac-00jhtfl8thteu6uj****`.
       *
       * @param request DeleteAccessAssignmentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAccessAssignmentResponse
       */
      Models::DeleteAccessAssignmentResponse deleteAccessAssignmentWithOptions(const Models::DeleteAccessAssignmentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes the access permissions on an account in a resource directory.
       *
       * @description When you call this operation, an asynchronous task is created. You can call the [GetTask](https://help.aliyun.com/document_detail/340670.html) operation to query the progress of the task based on the value of the `TaskId` response parameter.
       * This topic provides an example on how to remove the access permissions on the account `114240524784****` in the resource directory from the CloudSSO user `u-00q8wbq42wiltcrk****`. The access permissions are assigned by using the access configuration `ac-00jhtfl8thteu6uj****`.
       *
       * @param request DeleteAccessAssignmentRequest
       * @return DeleteAccessAssignmentResponse
       */
      Models::DeleteAccessAssignmentResponse deleteAccessAssignment(const Models::DeleteAccessAssignmentRequest &request);

      /**
       * @summary Deletes an access configuration.
       *
       * @description ### [](#)Prerequisites
       * The access configuration that you want to delete is de-provisioned from the accounts in your resource directory. For more information, see [DeprovisionAccessConfiguration](https://help.aliyun.com/document_detail/338352.html).
       * ### [](#)Operation description
       * This topic provides an example on how to delete the access configuration whose ID is `ac-001j9mcm3k7335bc****`.
       *
       * @param request DeleteAccessConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAccessConfigurationResponse
       */
      Models::DeleteAccessConfigurationResponse deleteAccessConfigurationWithOptions(const Models::DeleteAccessConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an access configuration.
       *
       * @description ### [](#)Prerequisites
       * The access configuration that you want to delete is de-provisioned from the accounts in your resource directory. For more information, see [DeprovisionAccessConfiguration](https://help.aliyun.com/document_detail/338352.html).
       * ### [](#)Operation description
       * This topic provides an example on how to delete the access configuration whose ID is `ac-001j9mcm3k7335bc****`.
       *
       * @param request DeleteAccessConfigurationRequest
       * @return DeleteAccessConfigurationResponse
       */
      Models::DeleteAccessConfigurationResponse deleteAccessConfiguration(const Models::DeleteAccessConfigurationRequest &request);

      /**
       * @summary Deletes a directory.
       *
       * @description ### [](#)Prerequisites
       * No resources are contained in the directory that you want to delete.
       * *   Access permissions on the accounts in your resource directory are removed from all users and groups. For more information, see [DeleteAccessAssignment](https://help.aliyun.com/document_detail/338350.html).
       * *   Users are deleted. For more information, see [DeleteUser](https://help.aliyun.com/document_detail/341671.html).
       * *   Groups are deleted. For more information, see [DeleteGroup](https://help.aliyun.com/document_detail/341821.html).
       * *   Access configurations are deleted. For more information, see [DeleteAccessConfiguration](https://help.aliyun.com/document_detail/336907.html).
       * *   System for Cross-domain Identity Management (SCIM) credentials are deleted. For more information, see [DeleteSCIMServerCredential](https://help.aliyun.com/document_detail/341842.html).
       * *   Single sign-on (SSO) logon configurations are deleted. For more information, see [ClearExternalSAMLIdentityProvider](https://help.aliyun.com/document_detail/341573.html).
       * ### [](#)Operation description
       * This topic provides an example on how to delete a directory whose ID is `d-00fc2p61****`.
       *
       * @param request DeleteDirectoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDirectoryResponse
       */
      Models::DeleteDirectoryResponse deleteDirectoryWithOptions(const Models::DeleteDirectoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a directory.
       *
       * @description ### [](#)Prerequisites
       * No resources are contained in the directory that you want to delete.
       * *   Access permissions on the accounts in your resource directory are removed from all users and groups. For more information, see [DeleteAccessAssignment](https://help.aliyun.com/document_detail/338350.html).
       * *   Users are deleted. For more information, see [DeleteUser](https://help.aliyun.com/document_detail/341671.html).
       * *   Groups are deleted. For more information, see [DeleteGroup](https://help.aliyun.com/document_detail/341821.html).
       * *   Access configurations are deleted. For more information, see [DeleteAccessConfiguration](https://help.aliyun.com/document_detail/336907.html).
       * *   System for Cross-domain Identity Management (SCIM) credentials are deleted. For more information, see [DeleteSCIMServerCredential](https://help.aliyun.com/document_detail/341842.html).
       * *   Single sign-on (SSO) logon configurations are deleted. For more information, see [ClearExternalSAMLIdentityProvider](https://help.aliyun.com/document_detail/341573.html).
       * ### [](#)Operation description
       * This topic provides an example on how to delete a directory whose ID is `d-00fc2p61****`.
       *
       * @param request DeleteDirectoryRequest
       * @return DeleteDirectoryResponse
       */
      Models::DeleteDirectoryResponse deleteDirectory(const Models::DeleteDirectoryRequest &request);

      /**
       * @summary Deletes a group.
       *
       * @description ### [](#)Prerequisites
       * The group that you want to delete is not associated with the following resources. If the group is associated with the resources, the deletion fails.
       * - Users: You must remove users from the group. For more information, see [RemoveUserFromGroup](https://help.aliyun.com/document_detail/335116.html).
       * - Access permissions: You must remove the access permissions on the accounts in your resource directory from the group. For more information, see [DeleteAccessAssignment](https://help.aliyun.com/document_detail/338350.html).
       * ### [](#)Operation description
       * If System for Cross-domain Identity Management (SCIM) synchronization is enabled, you cannot delete a group that is synchronized by using SCIM.
       * This topic provides an example on how to delete the group `g-00jqzghi2n3o5hkh****`.
       *
       * @param request DeleteGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteGroupResponse
       */
      Models::DeleteGroupResponse deleteGroupWithOptions(const Models::DeleteGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a group.
       *
       * @description ### [](#)Prerequisites
       * The group that you want to delete is not associated with the following resources. If the group is associated with the resources, the deletion fails.
       * - Users: You must remove users from the group. For more information, see [RemoveUserFromGroup](https://help.aliyun.com/document_detail/335116.html).
       * - Access permissions: You must remove the access permissions on the accounts in your resource directory from the group. For more information, see [DeleteAccessAssignment](https://help.aliyun.com/document_detail/338350.html).
       * ### [](#)Operation description
       * If System for Cross-domain Identity Management (SCIM) synchronization is enabled, you cannot delete a group that is synchronized by using SCIM.
       * This topic provides an example on how to delete the group `g-00jqzghi2n3o5hkh****`.
       *
       * @param request DeleteGroupRequest
       * @return DeleteGroupResponse
       */
      Models::DeleteGroupResponse deleteGroup(const Models::DeleteGroupRequest &request);

      /**
       * @summary Deletes the MFA device of a user.
       *
       * @description This topic provides an example on how to delete the MFA device `mfa-00ujhet8pycljj7j****` that is attached to the user `u-00q8wbq42wiltcrk****`.
       *
       * @param request DeleteMFADeviceForUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMFADeviceForUserResponse
       */
      Models::DeleteMFADeviceForUserResponse deleteMFADeviceForUserWithOptions(const Models::DeleteMFADeviceForUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the MFA device of a user.
       *
       * @description This topic provides an example on how to delete the MFA device `mfa-00ujhet8pycljj7j****` that is attached to the user `u-00q8wbq42wiltcrk****`.
       *
       * @param request DeleteMFADeviceForUserRequest
       * @return DeleteMFADeviceForUserResponse
       */
      Models::DeleteMFADeviceForUserResponse deleteMFADeviceForUser(const Models::DeleteMFADeviceForUserRequest &request);

      /**
       * @summary Deletes a System for Cross-domain Identity Management (SCIM) credential.
       *
       * @description After a SCIM credential is deleted, the synchronization task that uses the SCIM credential fails.
       * This topic provides an example on how to delete the SCIM credential whose ID is `scimcred-004whl0kvfwcypbi****`.
       *
       * @param request DeleteSCIMServerCredentialRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSCIMServerCredentialResponse
       */
      Models::DeleteSCIMServerCredentialResponse deleteSCIMServerCredentialWithOptions(const Models::DeleteSCIMServerCredentialRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a System for Cross-domain Identity Management (SCIM) credential.
       *
       * @description After a SCIM credential is deleted, the synchronization task that uses the SCIM credential fails.
       * This topic provides an example on how to delete the SCIM credential whose ID is `scimcred-004whl0kvfwcypbi****`.
       *
       * @param request DeleteSCIMServerCredentialRequest
       * @return DeleteSCIMServerCredentialResponse
       */
      Models::DeleteSCIMServerCredentialResponse deleteSCIMServerCredential(const Models::DeleteSCIMServerCredentialRequest &request);

      /**
       * @summary Deletes a user.
       *
       * @description ### [](#)Prerequisites
       * Before you delete a user, make sure that the user is not associated with the following resources. Otherwise, the deletion fails.
       * *   Multi-factor authentication (MFA) devices: You must delete the MFA devices bound to the user. For more information, see [DeleteMFADeviceForUser](https://help.aliyun.com/document_detail/341675.html).
       * *   Access permissions: You must remove the access permissions on the accounts in your resource directory from the user. For more information, see [DeleteAccessAssignment](https://help.aliyun.com/document_detail/338350.html).
       * *   Groups: You must remove the user from groups. For more information, see [RemoveUserFromGroup](https://help.aliyun.com/document_detail/335116.html).
       * ### [](#)Precautions
       * If System for Cross-domain Identity Management (SCIM) synchronization is enabled, you cannot delete a user that is synchronized by using SCIM.
       * This topic provides an example on how to delete the user whose ID is `u-00q8wbq42wiltcrk****`.
       *
       * @param request DeleteUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteUserResponse
       */
      Models::DeleteUserResponse deleteUserWithOptions(const Models::DeleteUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a user.
       *
       * @description ### [](#)Prerequisites
       * Before you delete a user, make sure that the user is not associated with the following resources. Otherwise, the deletion fails.
       * *   Multi-factor authentication (MFA) devices: You must delete the MFA devices bound to the user. For more information, see [DeleteMFADeviceForUser](https://help.aliyun.com/document_detail/341675.html).
       * *   Access permissions: You must remove the access permissions on the accounts in your resource directory from the user. For more information, see [DeleteAccessAssignment](https://help.aliyun.com/document_detail/338350.html).
       * *   Groups: You must remove the user from groups. For more information, see [RemoveUserFromGroup](https://help.aliyun.com/document_detail/335116.html).
       * ### [](#)Precautions
       * If System for Cross-domain Identity Management (SCIM) synchronization is enabled, you cannot delete a user that is synchronized by using SCIM.
       * This topic provides an example on how to delete the user whose ID is `u-00q8wbq42wiltcrk****`.
       *
       * @param request DeleteUserRequest
       * @return DeleteUserResponse
       */
      Models::DeleteUserResponse deleteUser(const Models::DeleteUserRequest &request);

      /**
       * @summary Deletes a Resource Access Management (RAM) user provisioning.
       *
       * @param request DeleteUserProvisioningRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteUserProvisioningResponse
       */
      Models::DeleteUserProvisioningResponse deleteUserProvisioningWithOptions(const Models::DeleteUserProvisioningRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a Resource Access Management (RAM) user provisioning.
       *
       * @param request DeleteUserProvisioningRequest
       * @return DeleteUserProvisioningResponse
       */
      Models::DeleteUserProvisioningResponse deleteUserProvisioning(const Models::DeleteUserProvisioningRequest &request);

      /**
       * @summary Deletes a Resource Access Management (RAM) user provisioning event.
       *
       * @param request DeleteUserProvisioningEventRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteUserProvisioningEventResponse
       */
      Models::DeleteUserProvisioningEventResponse deleteUserProvisioningEventWithOptions(const Models::DeleteUserProvisioningEventRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a Resource Access Management (RAM) user provisioning event.
       *
       * @param request DeleteUserProvisioningEventRequest
       * @return DeleteUserProvisioningEventResponse
       */
      Models::DeleteUserProvisioningEventResponse deleteUserProvisioningEvent(const Models::DeleteUserProvisioningEventRequest &request);

      /**
       * @summary De-provisions an access configuration from an account in your resource directory.
       *
       * @description When you call this operation, an asynchronous task is automatically created. You can call the [GetTask](https://help.aliyun.com/document_detail/340670.html) operation to query the progress of the task based on the value of the `TaskId` response parameter.
       * This topic provides an example on how to de-provision the access configuration `ac-00jhtfl8thteu6uj****` from the account `114240524784****` in your resource directory.
       *
       * @param request DeprovisionAccessConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeprovisionAccessConfigurationResponse
       */
      Models::DeprovisionAccessConfigurationResponse deprovisionAccessConfigurationWithOptions(const Models::DeprovisionAccessConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary De-provisions an access configuration from an account in your resource directory.
       *
       * @description When you call this operation, an asynchronous task is automatically created. You can call the [GetTask](https://help.aliyun.com/document_detail/340670.html) operation to query the progress of the task based on the value of the `TaskId` response parameter.
       * This topic provides an example on how to de-provision the access configuration `ac-00jhtfl8thteu6uj****` from the account `114240524784****` in your resource directory.
       *
       * @param request DeprovisionAccessConfigurationRequest
       * @return DeprovisionAccessConfigurationResponse
       */
      Models::DeprovisionAccessConfigurationResponse deprovisionAccessConfiguration(const Models::DeprovisionAccessConfigurationRequest &request);

      /**
       * @summary Disables the delegated administrator account of CloudSSO.
       *
       * @param request DisableDelegateAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableDelegateAccountResponse
       */
      Models::DisableDelegateAccountResponse disableDelegateAccountWithOptions(const Models::DisableDelegateAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables the delegated administrator account of CloudSSO.
       *
       * @param request DisableDelegateAccountRequest
       * @return DisableDelegateAccountResponse
       */
      Models::DisableDelegateAccountResponse disableDelegateAccount(const Models::DisableDelegateAccountRequest &request);

      /**
       * @summary Disables CloudSSO.
       *
       * @description You can disable CloudSSO only when no directories exist in CloudSSO. After you disable CloudSSO, you can re-enable it at any time.
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableServiceResponse
       */
      Models::DisableServiceResponse disableServiceWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables CloudSSO.
       *
       * @description You can disable CloudSSO only when no directories exist in CloudSSO. After you disable CloudSSO, you can re-enable it at any time.
       *
       * @return DisableServiceResponse
       */
      Models::DisableServiceResponse disableService();

      /**
       * @summary Enables the delegated administrator account of CloudSSO.
       *
       * @description You can use the management account of a resource directory to specify a member of the resource directory as the delegated administrator account of CloudSSO. For more information, see [Add a delegated administrator account](https://help.aliyun.com/document_detail/208117.html).
       * After the delegated administrator account of CloudSSO is specified, you can call this operation to enable the delegated administrator account of CloudSSO to manage CloudSSO resources.
       *
       * @param request EnableDelegateAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableDelegateAccountResponse
       */
      Models::EnableDelegateAccountResponse enableDelegateAccountWithOptions(const Models::EnableDelegateAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables the delegated administrator account of CloudSSO.
       *
       * @description You can use the management account of a resource directory to specify a member of the resource directory as the delegated administrator account of CloudSSO. For more information, see [Add a delegated administrator account](https://help.aliyun.com/document_detail/208117.html).
       * After the delegated administrator account of CloudSSO is specified, you can call this operation to enable the delegated administrator account of CloudSSO to manage CloudSSO resources.
       *
       * @param request EnableDelegateAccountRequest
       * @return EnableDelegateAccountResponse
       */
      Models::EnableDelegateAccountResponse enableDelegateAccount(const Models::EnableDelegateAccountRequest &request);

      /**
       * @summary Enables CloudSSO.
       *
       * @description Only users under the management account of a resource directory who have the permissions to enable CloudSSO can call this operation. For more information, see [Enable CloudSSO](https://help.aliyun.com/document_detail/262819.html).
       * By calling this operation, you agree to the [Alibaba Cloud International Website Product Terms of Service](https://www.alibabacloud.com/help/doc-detail/42416.htm).
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableServiceResponse
       */
      Models::EnableServiceResponse enableServiceWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables CloudSSO.
       *
       * @description Only users under the management account of a resource directory who have the permissions to enable CloudSSO can call this operation. For more information, see [Enable CloudSSO](https://help.aliyun.com/document_detail/262819.html).
       * By calling this operation, you agree to the [Alibaba Cloud International Website Product Terms of Service](https://www.alibabacloud.com/help/doc-detail/42416.htm).
       *
       * @return EnableServiceResponse
       */
      Models::EnableServiceResponse enableService();

      /**
       * @summary Queries the information about an access configuration.
       *
       * @description This topic provides an example on how to query the information about the access configuration whose ID is `ac-00ccule7tadaijxc****`.
       *
       * @param request GetAccessConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAccessConfigurationResponse
       */
      Models::GetAccessConfigurationResponse getAccessConfigurationWithOptions(const Models::GetAccessConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about an access configuration.
       *
       * @description This topic provides an example on how to query the information about the access configuration whose ID is `ac-00ccule7tadaijxc****`.
       *
       * @param request GetAccessConfigurationRequest
       * @return GetAccessConfigurationResponse
       */
      Models::GetAccessConfigurationResponse getAccessConfiguration(const Models::GetAccessConfigurationRequest &request);

      /**
       * @summary Queries information about a directory.
       *
       * @description This topic provides an example on how to query information about the directory whose ID is `d-00fc2p61****`.
       *
       * @param request GetDirectoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDirectoryResponse
       */
      Models::GetDirectoryResponse getDirectoryWithOptions(const Models::GetDirectoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about a directory.
       *
       * @description This topic provides an example on how to query information about the directory whose ID is `d-00fc2p61****`.
       *
       * @param request GetDirectoryRequest
       * @return GetDirectoryResponse
       */
      Models::GetDirectoryResponse getDirectory(const Models::GetDirectoryRequest &request);

      /**
       * @summary Queries information about a Security Assertion Markup Language (SAML) service provider (SP).
       *
       * @description During SAML 2.0-based single sign-on (SSO) logon, CloudSSO is an SP, and the identity management system of an enterprise is an identity provider (IdP).
       * This topic provides an example on how to query information about the SP within the directory `d-00fc2p61****`.
       *
       * @param request GetDirectorySAMLServiceProviderInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDirectorySAMLServiceProviderInfoResponse
       */
      Models::GetDirectorySAMLServiceProviderInfoResponse getDirectorySAMLServiceProviderInfoWithOptions(const Models::GetDirectorySAMLServiceProviderInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about a Security Assertion Markup Language (SAML) service provider (SP).
       *
       * @description During SAML 2.0-based single sign-on (SSO) logon, CloudSSO is an SP, and the identity management system of an enterprise is an identity provider (IdP).
       * This topic provides an example on how to query information about the SP within the directory `d-00fc2p61****`.
       *
       * @param request GetDirectorySAMLServiceProviderInfoRequest
       * @return GetDirectorySAMLServiceProviderInfoResponse
       */
      Models::GetDirectorySAMLServiceProviderInfoResponse getDirectorySAMLServiceProviderInfo(const Models::GetDirectorySAMLServiceProviderInfoRequest &request);

      /**
       * @summary Queries the statistics of a directory.
       *
       * @description This topic provides an example on how to query the statistics of a directory whose ID is `d-00fc2p61****`. The statistics include the number of users, quota for users, number of groups, quota for groups, number of access configurations, quota for access configurations, number of access permissions that are assigned, number of system policies that can be configured for an access configuration, number of System for Cross-domain Identity Management (SCIM) credentials, number of asynchronous tasks, status of single sign-on (SSO) logon, and status of SCIM synchronization.
       *
       * @param request GetDirectoryStatisticsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDirectoryStatisticsResponse
       */
      Models::GetDirectoryStatisticsResponse getDirectoryStatisticsWithOptions(const Models::GetDirectoryStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the statistics of a directory.
       *
       * @description This topic provides an example on how to query the statistics of a directory whose ID is `d-00fc2p61****`. The statistics include the number of users, quota for users, number of groups, quota for groups, number of access configurations, quota for access configurations, number of access permissions that are assigned, number of system policies that can be configured for an access configuration, number of System for Cross-domain Identity Management (SCIM) credentials, number of asynchronous tasks, status of single sign-on (SSO) logon, and status of SCIM synchronization.
       *
       * @param request GetDirectoryStatisticsRequest
       * @return GetDirectoryStatisticsResponse
       */
      Models::GetDirectoryStatisticsResponse getDirectoryStatistics(const Models::GetDirectoryStatisticsRequest &request);

      /**
       * @summary Queries the configurations of a Security Assertion Markup Language (SAML) identity provider (IdP).
       *
       * @description This topic provides an example on how to query the configurations of the SAML IdP within the directory `d-00fc2p61****`.
       *
       * @param request GetExternalSAMLIdentityProviderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetExternalSAMLIdentityProviderResponse
       */
      Models::GetExternalSAMLIdentityProviderResponse getExternalSAMLIdentityProviderWithOptions(const Models::GetExternalSAMLIdentityProviderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configurations of a Security Assertion Markup Language (SAML) identity provider (IdP).
       *
       * @description This topic provides an example on how to query the configurations of the SAML IdP within the directory `d-00fc2p61****`.
       *
       * @param request GetExternalSAMLIdentityProviderRequest
       * @return GetExternalSAMLIdentityProviderResponse
       */
      Models::GetExternalSAMLIdentityProviderResponse getExternalSAMLIdentityProvider(const Models::GetExternalSAMLIdentityProviderRequest &request);

      /**
       * @summary Queries information about a group.
       *
       * @description This topic provides an example on how to query information about the group `g-00jqzghi2n3o5hkh****` in the directory `d-00fc2p61****`.
       *
       * @param request GetGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetGroupResponse
       */
      Models::GetGroupResponse getGroupWithOptions(const Models::GetGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about a group.
       *
       * @description This topic provides an example on how to query information about the group `g-00jqzghi2n3o5hkh****` in the directory `d-00fc2p61****`.
       *
       * @param request GetGroupRequest
       * @return GetGroupResponse
       */
      Models::GetGroupResponse getGroup(const Models::GetGroupRequest &request);

      /**
       * @summary Queries the logon preference of CloudSSO users.
       *
       * @param request GetLoginPreferenceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetLoginPreferenceResponse
       */
      Models::GetLoginPreferenceResponse getLoginPreferenceWithOptions(const Models::GetLoginPreferenceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the logon preference of CloudSSO users.
       *
       * @param request GetLoginPreferenceRequest
       * @return GetLoginPreferenceResponse
       */
      Models::GetLoginPreferenceResponse getLoginPreference(const Models::GetLoginPreferenceRequest &request);

      /**
       * @summary Queries the global multi-factor authentication (MFA) configuration.
       *
       * @description When username-password logon is enabled, you can retrieve the global MFA verification policy for user logon.
       * This topic provides an example on how to query the global MFA verification policy for CloudSSO users in the directory `u-00q8wbq42wiltcrk****`.
       *
       * @param request GetMFAAuthenticationSettingInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMFAAuthenticationSettingInfoResponse
       */
      Models::GetMFAAuthenticationSettingInfoResponse getMFAAuthenticationSettingInfoWithOptions(const Models::GetMFAAuthenticationSettingInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the global multi-factor authentication (MFA) configuration.
       *
       * @description When username-password logon is enabled, you can retrieve the global MFA verification policy for user logon.
       * This topic provides an example on how to query the global MFA verification policy for CloudSSO users in the directory `u-00q8wbq42wiltcrk****`.
       *
       * @param request GetMFAAuthenticationSettingInfoRequest
       * @return GetMFAAuthenticationSettingInfoResponse
       */
      Models::GetMFAAuthenticationSettingInfoResponse getMFAAuthenticationSettingInfo(const Models::GetMFAAuthenticationSettingInfoRequest &request);

      /**
       * @summary Queries the multi-factor authentication (MFA) setting of all users.
       *
       * @description >  This operation is no longer maintained and updated. You can call the [GetMFAAuthenticationSettingInfo](https://help.aliyun.com/document_detail/611286.html) operation to query more detailed information.
       * This topic provides an example on how to query the MFA setting of the users that belong to the directory named `d-00fc2p61****`. The returned result shows that MFA is enabled for all the users.
       *
       * @param request GetMFAAuthenticationSettingsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMFAAuthenticationSettingsResponse
       */
      Models::GetMFAAuthenticationSettingsResponse getMFAAuthenticationSettingsWithOptions(const Models::GetMFAAuthenticationSettingsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the multi-factor authentication (MFA) setting of all users.
       *
       * @description >  This operation is no longer maintained and updated. You can call the [GetMFAAuthenticationSettingInfo](https://help.aliyun.com/document_detail/611286.html) operation to query more detailed information.
       * This topic provides an example on how to query the MFA setting of the users that belong to the directory named `d-00fc2p61****`. The returned result shows that MFA is enabled for all the users.
       *
       * @param request GetMFAAuthenticationSettingsRequest
       * @return GetMFAAuthenticationSettingsResponse
       */
      Models::GetMFAAuthenticationSettingsResponse getMFAAuthenticationSettings(const Models::GetMFAAuthenticationSettingsRequest &request);

      /**
       * @summary Checks whether multi-factor authentication (MFA) is enabled for users.
       *
       * @description This topic provides an example on how to check whether MFA is enabled for users in the directory whose ID is `d-00fc2p61****`. The returned result shows that MFA is in the Enabled state.
       *
       * @param request GetMFAAuthenticationStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMFAAuthenticationStatusResponse
       */
      Models::GetMFAAuthenticationStatusResponse getMFAAuthenticationStatusWithOptions(const Models::GetMFAAuthenticationStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks whether multi-factor authentication (MFA) is enabled for users.
       *
       * @description This topic provides an example on how to check whether MFA is enabled for users in the directory whose ID is `d-00fc2p61****`. The returned result shows that MFA is in the Enabled state.
       *
       * @param request GetMFAAuthenticationStatusRequest
       * @return GetMFAAuthenticationStatusResponse
       */
      Models::GetMFAAuthenticationStatusResponse getMFAAuthenticationStatus(const Models::GetMFAAuthenticationStatusRequest &request);

      /**
       * @summary Queries the password policy of CloudSSO users.
       *
       * @param request GetPasswordPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPasswordPolicyResponse
       */
      Models::GetPasswordPolicyResponse getPasswordPolicyWithOptions(const Models::GetPasswordPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the password policy of CloudSSO users.
       *
       * @param request GetPasswordPolicyRequest
       * @return GetPasswordPolicyResponse
       */
      Models::GetPasswordPolicyResponse getPasswordPolicy(const Models::GetPasswordPolicyRequest &request);

      /**
       * @summary Queries the status of System for Cross-domain Identity Management (SCIM) synchronization.
       *
       * @description This topic provides an example on how to query the status of SCIM synchronization within the directory `d-00fc2p61****`. The returned result shows that SCIM synchronization is in the Enabled state.
       *
       * @param request GetSCIMSynchronizationStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSCIMSynchronizationStatusResponse
       */
      Models::GetSCIMSynchronizationStatusResponse getSCIMSynchronizationStatusWithOptions(const Models::GetSCIMSynchronizationStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of System for Cross-domain Identity Management (SCIM) synchronization.
       *
       * @description This topic provides an example on how to query the status of SCIM synchronization within the directory `d-00fc2p61****`. The returned result shows that SCIM synchronization is in the Enabled state.
       *
       * @param request GetSCIMSynchronizationStatusRequest
       * @return GetSCIMSynchronizationStatusResponse
       */
      Models::GetSCIMSynchronizationStatusResponse getSCIMSynchronizationStatus(const Models::GetSCIMSynchronizationStatusRequest &request);

      /**
       * @summary Queries the status of CloudSSO.
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetServiceStatusResponse
       */
      Models::GetServiceStatusResponse getServiceStatusWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of CloudSSO.
       *
       * @return GetServiceStatusResponse
       */
      Models::GetServiceStatusResponse getServiceStatus();

      /**
       * @summary Queries information about an asynchronous task.
       *
       * @description This topic provides an example on how to query the information about the task whose ID is `t-shfqw1u1edszvxw5****`.
       *
       * @param request GetTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTaskResponse
       */
      Models::GetTaskResponse getTaskWithOptions(const Models::GetTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about an asynchronous task.
       *
       * @description This topic provides an example on how to query the information about the task whose ID is `t-shfqw1u1edszvxw5****`.
       *
       * @param request GetTaskRequest
       * @return GetTaskResponse
       */
      Models::GetTaskResponse getTask(const Models::GetTaskRequest &request);

      /**
       * @summary Queries the status of an asynchronous task.
       *
       * @description You can call the GetTaskStatus operation to query the status of an asynchronous task. If you want to query more information about an asynchronous task, call the [GetTask](https://help.aliyun.com/document_detail/340670.html) operation.
       * This topic provides an example on how to query the information about the task whose ID is `t-shfqw1u1edszvxw5****`.
       *
       * @param request GetTaskStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTaskStatusResponse
       */
      Models::GetTaskStatusResponse getTaskStatusWithOptions(const Models::GetTaskStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of an asynchronous task.
       *
       * @description You can call the GetTaskStatus operation to query the status of an asynchronous task. If you want to query more information about an asynchronous task, call the [GetTask](https://help.aliyun.com/document_detail/340670.html) operation.
       * This topic provides an example on how to query the information about the task whose ID is `t-shfqw1u1edszvxw5****`.
       *
       * @param request GetTaskStatusRequest
       * @return GetTaskStatusResponse
       */
      Models::GetTaskStatusResponse getTaskStatus(const Models::GetTaskStatusRequest &request);

      /**
       * @summary Queries the information about a specified user.
       *
       * @param request GetUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUserResponse
       */
      Models::GetUserResponse getUserWithOptions(const Models::GetUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a specified user.
       *
       * @param request GetUserRequest
       * @return GetUserResponse
       */
      Models::GetUserResponse getUser(const Models::GetUserRequest &request);

      /**
       * @summary Queries the ID of a user in a resource directory by using the ExternalId parameter.
       *
       * @param tmpReq GetUserIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUserIdResponse
       */
      Models::GetUserIdResponse getUserIdWithOptions(const Models::GetUserIdRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the ID of a user in a resource directory by using the ExternalId parameter.
       *
       * @param request GetUserIdRequest
       * @return GetUserIdResponse
       */
      Models::GetUserIdResponse getUserId(const Models::GetUserIdRequest &request);

      /**
       * @summary Queries the multi-factor authentication (MFA) setting of a single user.
       *
       * @description This topic provides an example on how to query the MFA setting of the user named `u-00q8wbq42wiltcrk****`. The returned result shows that MFA is enabled for the user.
       *
       * @param request GetUserMFAAuthenticationSettingsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUserMFAAuthenticationSettingsResponse
       */
      Models::GetUserMFAAuthenticationSettingsResponse getUserMFAAuthenticationSettingsWithOptions(const Models::GetUserMFAAuthenticationSettingsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the multi-factor authentication (MFA) setting of a single user.
       *
       * @description This topic provides an example on how to query the MFA setting of the user named `u-00q8wbq42wiltcrk****`. The returned result shows that MFA is enabled for the user.
       *
       * @param request GetUserMFAAuthenticationSettingsRequest
       * @return GetUserMFAAuthenticationSettingsResponse
       */
      Models::GetUserMFAAuthenticationSettingsResponse getUserMFAAuthenticationSettings(const Models::GetUserMFAAuthenticationSettingsRequest &request);

      /**
       * @summary Queries a Resource Access Management (RAM) user provisioning.
       *
       * @param request GetUserProvisioningRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUserProvisioningResponse
       */
      Models::GetUserProvisioningResponse getUserProvisioningWithOptions(const Models::GetUserProvisioningRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a Resource Access Management (RAM) user provisioning.
       *
       * @param request GetUserProvisioningRequest
       * @return GetUserProvisioningResponse
       */
      Models::GetUserProvisioningResponse getUserProvisioning(const Models::GetUserProvisioningRequest &request);

      /**
       * @summary Queries the global configurations of a Resource Access Management (RAM) user provisioning.
       *
       * @param request GetUserProvisioningConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUserProvisioningConfigurationResponse
       */
      Models::GetUserProvisioningConfigurationResponse getUserProvisioningConfigurationWithOptions(const Models::GetUserProvisioningConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the global configurations of a Resource Access Management (RAM) user provisioning.
       *
       * @param request GetUserProvisioningConfigurationRequest
       * @return GetUserProvisioningConfigurationResponse
       */
      Models::GetUserProvisioningConfigurationResponse getUserProvisioningConfiguration(const Models::GetUserProvisioningConfigurationRequest &request);

      /**
       * @summary Queries the information about a Resource Access Management (RAM) user provisioning.
       *
       * @param request GetUserProvisioningEventRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUserProvisioningEventResponse
       */
      Models::GetUserProvisioningEventResponse getUserProvisioningEventWithOptions(const Models::GetUserProvisioningEventRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a Resource Access Management (RAM) user provisioning.
       *
       * @param request GetUserProvisioningEventRequest
       * @return GetUserProvisioningEventResponse
       */
      Models::GetUserProvisioningEventResponse getUserProvisioningEvent(const Models::GetUserProvisioningEventRequest &request);

      /**
       * @summary Queries statistics of Resource Access Management (RAM) user provisioning events that are created for the member in a resource directory.
       *
       * @param request GetUserProvisioningRdAccountStatisticsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUserProvisioningRdAccountStatisticsResponse
       */
      Models::GetUserProvisioningRdAccountStatisticsResponse getUserProvisioningRdAccountStatisticsWithOptions(const Models::GetUserProvisioningRdAccountStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries statistics of Resource Access Management (RAM) user provisioning events that are created for the member in a resource directory.
       *
       * @param request GetUserProvisioningRdAccountStatisticsRequest
       * @return GetUserProvisioningRdAccountStatisticsResponse
       */
      Models::GetUserProvisioningRdAccountStatisticsResponse getUserProvisioningRdAccountStatistics(const Models::GetUserProvisioningRdAccountStatisticsRequest &request);

      /**
       * @summary Queries the statistics of a Resource Access Management (RAM) user provisioning.
       *
       * @param request GetUserProvisioningStatisticsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUserProvisioningStatisticsResponse
       */
      Models::GetUserProvisioningStatisticsResponse getUserProvisioningStatisticsWithOptions(const Models::GetUserProvisioningStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the statistics of a Resource Access Management (RAM) user provisioning.
       *
       * @param request GetUserProvisioningStatisticsRequest
       * @return GetUserProvisioningStatisticsResponse
       */
      Models::GetUserProvisioningStatisticsResponse getUserProvisioningStatistics(const Models::GetUserProvisioningStatisticsRequest &request);

      /**
       * @summary Queries the access permissions that are assigned.
       *
       * @description This topic provides an example on how to query the assigned access permissions on the account `114240524784****` in your resource directory. The returned result shows that access permissions on the account in your resource directory is assigned to one user.
       *
       * @param request ListAccessAssignmentsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAccessAssignmentsResponse
       */
      Models::ListAccessAssignmentsResponse listAccessAssignmentsWithOptions(const Models::ListAccessAssignmentsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the access permissions that are assigned.
       *
       * @description This topic provides an example on how to query the assigned access permissions on the account `114240524784****` in your resource directory. The returned result shows that access permissions on the account in your resource directory is assigned to one user.
       *
       * @param request ListAccessAssignmentsRequest
       * @return ListAccessAssignmentsResponse
       */
      Models::ListAccessAssignmentsResponse listAccessAssignments(const Models::ListAccessAssignmentsRequest &request);

      /**
       * @summary Queries the access configurations that are provisioned.
       *
       * @description This topic provides an example on how to query the accounts for which the access permission `ac-00ccule7tadaijxc****` is provisioned. The returned result shows that the access configuration is provisioned for two accounts in your resource directory.
       *
       * @param request ListAccessConfigurationProvisioningsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAccessConfigurationProvisioningsResponse
       */
      Models::ListAccessConfigurationProvisioningsResponse listAccessConfigurationProvisioningsWithOptions(const Models::ListAccessConfigurationProvisioningsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the access configurations that are provisioned.
       *
       * @description This topic provides an example on how to query the accounts for which the access permission `ac-00ccule7tadaijxc****` is provisioned. The returned result shows that the access configuration is provisioned for two accounts in your resource directory.
       *
       * @param request ListAccessConfigurationProvisioningsRequest
       * @return ListAccessConfigurationProvisioningsResponse
       */
      Models::ListAccessConfigurationProvisioningsResponse listAccessConfigurationProvisionings(const Models::ListAccessConfigurationProvisioningsRequest &request);

      /**
       * @summary Queries the list of access configurations.
       *
       * @description This topic provides an example on how to query the access configurations in the directory `d-00fc2p61****`. The response shows that there are two access configurations: `VPC-Admin` and `ECS-Admin`.
       *
       * @param request ListAccessConfigurationsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAccessConfigurationsResponse
       */
      Models::ListAccessConfigurationsResponse listAccessConfigurationsWithOptions(const Models::ListAccessConfigurationsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of access configurations.
       *
       * @description This topic provides an example on how to query the access configurations in the directory `d-00fc2p61****`. The response shows that there are two access configurations: `VPC-Admin` and `ECS-Admin`.
       *
       * @param request ListAccessConfigurationsRequest
       * @return ListAccessConfigurationsResponse
       */
      Models::ListAccessConfigurationsResponse listAccessConfigurations(const Models::ListAccessConfigurationsRequest &request);

      /**
       * @summary Queries directories.
       *
       * @description This topic provides an example on how to query the directories within your Alibaba Cloud account. The returned result shows that only one directory with the ID `d-00fc2p61****` is created within your Alibaba Cloud account.
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDirectoriesResponse
       */
      Models::ListDirectoriesResponse listDirectoriesWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries directories.
       *
       * @description This topic provides an example on how to query the directories within your Alibaba Cloud account. The returned result shows that only one directory with the ID `d-00fc2p61****` is created within your Alibaba Cloud account.
       *
       * @return ListDirectoriesResponse
       */
      Models::ListDirectoriesResponse listDirectories();

      /**
       * @summary Queries Security Assertion Markup Language (SAML) signing certificates.
       *
       * @description This topic provides an example on how to query the SAML signing certificates within the directory `d-00fc2p61****`. The returned result shows that the directory contains one SAML signing certificate.
       *
       * @param request ListExternalSAMLIdPCertificatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListExternalSAMLIdPCertificatesResponse
       */
      Models::ListExternalSAMLIdPCertificatesResponse listExternalSAMLIdPCertificatesWithOptions(const Models::ListExternalSAMLIdPCertificatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries Security Assertion Markup Language (SAML) signing certificates.
       *
       * @description This topic provides an example on how to query the SAML signing certificates within the directory `d-00fc2p61****`. The returned result shows that the directory contains one SAML signing certificate.
       *
       * @param request ListExternalSAMLIdPCertificatesRequest
       * @return ListExternalSAMLIdPCertificatesResponse
       */
      Models::ListExternalSAMLIdPCertificatesResponse listExternalSAMLIdPCertificates(const Models::ListExternalSAMLIdPCertificatesRequest &request);

      /**
       * @summary Queries the users in a group.
       *
       * @description This topic provides an example on how to query the users in the group `g-00jqzghi2n3o5hkh****`. The returned result shows that the group contains the user `Alice` and the user `user1`.
       *
       * @param request ListGroupMembersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListGroupMembersResponse
       */
      Models::ListGroupMembersResponse listGroupMembersWithOptions(const Models::ListGroupMembersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the users in a group.
       *
       * @description This topic provides an example on how to query the users in the group `g-00jqzghi2n3o5hkh****`. The returned result shows that the group contains the user `Alice` and the user `user1`.
       *
       * @param request ListGroupMembersRequest
       * @return ListGroupMembersResponse
       */
      Models::ListGroupMembersResponse listGroupMembers(const Models::ListGroupMembersRequest &request);

      /**
       * @summary Queries groups.
       *
       * @description This topic provides an example on how to query the groups in the directory `d-00fc2p61****`. The returned result shows that the directory contains three groups. The groups `group1` and `group2` are synchronized from an external identity provider (IdP). The group `TestGroup` is manually created in CloudSSO.
       *
       * @param request ListGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListGroupsResponse
       */
      Models::ListGroupsResponse listGroupsWithOptions(const Models::ListGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries groups.
       *
       * @description This topic provides an example on how to query the groups in the directory `d-00fc2p61****`. The returned result shows that the directory contains three groups. The groups `group1` and `group2` are synchronized from an external identity provider (IdP). The group `TestGroup` is manually created in CloudSSO.
       *
       * @param request ListGroupsRequest
       * @return ListGroupsResponse
       */
      Models::ListGroupsResponse listGroups(const Models::ListGroupsRequest &request);

      /**
       * @summary Queries the groups to which a user is added.
       *
       * @description This topic provides an example on how to query the groups to which the user `u-00q8wbq42wiltcrk****` is added. The returned result shows that the user is added to both the `TestGroup` and the `group1` groups.
       *
       * @param request ListJoinedGroupsForUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListJoinedGroupsForUserResponse
       */
      Models::ListJoinedGroupsForUserResponse listJoinedGroupsForUserWithOptions(const Models::ListJoinedGroupsForUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the groups to which a user is added.
       *
       * @description This topic provides an example on how to query the groups to which the user `u-00q8wbq42wiltcrk****` is added. The returned result shows that the user is added to both the `TestGroup` and the `group1` groups.
       *
       * @param request ListJoinedGroupsForUserRequest
       * @return ListJoinedGroupsForUserResponse
       */
      Models::ListJoinedGroupsForUserResponse listJoinedGroupsForUser(const Models::ListJoinedGroupsForUserRequest &request);

      /**
       * @summary Queries the MFA device list of a user. Each user can have a maximum of two MFA devices.
       *
       * @description This topic provides an example on how to query the MFA device list of the user `u-00q8wbq42wiltcrk****`. The response shows that the user has one MFA device named `Alice-MFA1`.
       *
       * @param request ListMFADevicesForUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListMFADevicesForUserResponse
       */
      Models::ListMFADevicesForUserResponse listMFADevicesForUserWithOptions(const Models::ListMFADevicesForUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the MFA device list of a user. Each user can have a maximum of two MFA devices.
       *
       * @description This topic provides an example on how to query the MFA device list of the user `u-00q8wbq42wiltcrk****`. The response shows that the user has one MFA device named `Alice-MFA1`.
       *
       * @param request ListMFADevicesForUserRequest
       * @return ListMFADevicesForUserResponse
       */
      Models::ListMFADevicesForUserResponse listMFADevicesForUser(const Models::ListMFADevicesForUserRequest &request);

      /**
       * @summary Queries the policies that are created for an access configuration.
       *
       * @description This topic provides an example on how to query the policies that are created for the access configuration `ac-00jhtfl8thteu6uj****`. The returned result shows that the access configuration contains one system policy and one inline policy.
       *
       * @param request ListPermissionPoliciesInAccessConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPermissionPoliciesInAccessConfigurationResponse
       */
      Models::ListPermissionPoliciesInAccessConfigurationResponse listPermissionPoliciesInAccessConfigurationWithOptions(const Models::ListPermissionPoliciesInAccessConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the policies that are created for an access configuration.
       *
       * @description This topic provides an example on how to query the policies that are created for the access configuration `ac-00jhtfl8thteu6uj****`. The returned result shows that the access configuration contains one system policy and one inline policy.
       *
       * @param request ListPermissionPoliciesInAccessConfigurationRequest
       * @return ListPermissionPoliciesInAccessConfigurationResponse
       */
      Models::ListPermissionPoliciesInAccessConfigurationResponse listPermissionPoliciesInAccessConfiguration(const Models::ListPermissionPoliciesInAccessConfigurationRequest &request);

      /**
       * @summary Queries Cross-domain Identity Management (SCIM) credentials.
       *
       * @description This topic provides an example on how to query the SCIM credentials within the `d-00fc2p61****` directory.
       *
       * @param request ListSCIMServerCredentialsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSCIMServerCredentialsResponse
       */
      Models::ListSCIMServerCredentialsResponse listSCIMServerCredentialsWithOptions(const Models::ListSCIMServerCredentialsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries Cross-domain Identity Management (SCIM) credentials.
       *
       * @description This topic provides an example on how to query the SCIM credentials within the `d-00fc2p61****` directory.
       *
       * @param request ListSCIMServerCredentialsRequest
       * @return ListSCIMServerCredentialsResponse
       */
      Models::ListSCIMServerCredentialsResponse listSCIMServerCredentials(const Models::ListSCIMServerCredentialsRequest &request);

      /**
       * @summary Queries asynchronous tasks.
       *
       * @description By default, this operation queries the tasks within the previous 24 hours. This operation allows you to query the tasks within a maximum of 7 days. You can specify the start time of the query by using `Filter`.
       * This topic provides an example on how to query the tasks within the previous 24 hours.
       *
       * @param request ListTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTasksResponse
       */
      Models::ListTasksResponse listTasksWithOptions(const Models::ListTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries asynchronous tasks.
       *
       * @description By default, this operation queries the tasks within the previous 24 hours. This operation allows you to query the tasks within a maximum of 7 days. You can specify the start time of the query by using `Filter`.
       * This topic provides an example on how to query the tasks within the previous 24 hours.
       *
       * @param request ListTasksRequest
       * @return ListTasksResponse
       */
      Models::ListTasksResponse listTasks(const Models::ListTasksRequest &request);

      /**
       * @summary Queries Resource Access Management (RAM) user provisioning events.
       *
       * @param request ListUserProvisioningEventsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUserProvisioningEventsResponse
       */
      Models::ListUserProvisioningEventsResponse listUserProvisioningEventsWithOptions(const Models::ListUserProvisioningEventsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries Resource Access Management (RAM) user provisioning events.
       *
       * @param request ListUserProvisioningEventsRequest
       * @return ListUserProvisioningEventsResponse
       */
      Models::ListUserProvisioningEventsResponse listUserProvisioningEvents(const Models::ListUserProvisioningEventsRequest &request);

      /**
       * @summary Queries Resource Access Management (RAM) user provisionings.
       *
       * @param request ListUserProvisioningsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUserProvisioningsResponse
       */
      Models::ListUserProvisioningsResponse listUserProvisioningsWithOptions(const Models::ListUserProvisioningsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries Resource Access Management (RAM) user provisionings.
       *
       * @param request ListUserProvisioningsRequest
       * @return ListUserProvisioningsResponse
       */
      Models::ListUserProvisioningsResponse listUserProvisionings(const Models::ListUserProvisioningsRequest &request);

      /**
       * @summary Queries a list of users.
       *
       * @param request ListUsersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUsersResponse
       */
      Models::ListUsersResponse listUsersWithOptions(const Models::ListUsersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of users.
       *
       * @param request ListUsersRequest
       * @return ListUsersResponse
       */
      Models::ListUsersResponse listUsers(const Models::ListUsersRequest &request);

      /**
       * @summary Provisions an access configuration for an account in your resource directory.
       *
       * @description When you call this operation, an asynchronous task is automatically created. You can call the [GetTask](https://help.aliyun.com/document_detail/340670.html) operation to query the progress of the task based on the value of the `TaskId` response parameter.
       * This topic provides an example on how to provision the access configuration `ac-00jhtfl8thteu6uj****` for the account `114240524784****` in your resource directory.
       *
       * @param request ProvisionAccessConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ProvisionAccessConfigurationResponse
       */
      Models::ProvisionAccessConfigurationResponse provisionAccessConfigurationWithOptions(const Models::ProvisionAccessConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Provisions an access configuration for an account in your resource directory.
       *
       * @description When you call this operation, an asynchronous task is automatically created. You can call the [GetTask](https://help.aliyun.com/document_detail/340670.html) operation to query the progress of the task based on the value of the `TaskId` response parameter.
       * This topic provides an example on how to provision the access configuration `ac-00jhtfl8thteu6uj****` for the account `114240524784****` in your resource directory.
       *
       * @param request ProvisionAccessConfigurationRequest
       * @return ProvisionAccessConfigurationResponse
       */
      Models::ProvisionAccessConfigurationResponse provisionAccessConfiguration(const Models::ProvisionAccessConfigurationRequest &request);

      /**
       * @summary Removes a Security Assertion Markup Language (SAML) signing certificate.
       *
       * @description This topic provides an example on how to remove the SAML signing certificate whose ID is `idp-c-00dt9gnl7fmjaw9c****`.
       *
       * @param request RemoveExternalSAMLIdPCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveExternalSAMLIdPCertificateResponse
       */
      Models::RemoveExternalSAMLIdPCertificateResponse removeExternalSAMLIdPCertificateWithOptions(const Models::RemoveExternalSAMLIdPCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes a Security Assertion Markup Language (SAML) signing certificate.
       *
       * @description This topic provides an example on how to remove the SAML signing certificate whose ID is `idp-c-00dt9gnl7fmjaw9c****`.
       *
       * @param request RemoveExternalSAMLIdPCertificateRequest
       * @return RemoveExternalSAMLIdPCertificateResponse
       */
      Models::RemoveExternalSAMLIdPCertificateResponse removeExternalSAMLIdPCertificate(const Models::RemoveExternalSAMLIdPCertificateRequest &request);

      /**
       * @summary Removes a policy from an access configuration.
       *
       * @description After you remove an inline policy from an access configuration, the policy cannot be restored.
       * This topic provides an example on how to remove the system policy `AliyunECSFullAccess` from the access configuration `ac-00jhtfl8thteu6uj****`.
       *
       * @param request RemovePermissionPolicyFromAccessConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemovePermissionPolicyFromAccessConfigurationResponse
       */
      Models::RemovePermissionPolicyFromAccessConfigurationResponse removePermissionPolicyFromAccessConfigurationWithOptions(const Models::RemovePermissionPolicyFromAccessConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes a policy from an access configuration.
       *
       * @description After you remove an inline policy from an access configuration, the policy cannot be restored.
       * This topic provides an example on how to remove the system policy `AliyunECSFullAccess` from the access configuration `ac-00jhtfl8thteu6uj****`.
       *
       * @param request RemovePermissionPolicyFromAccessConfigurationRequest
       * @return RemovePermissionPolicyFromAccessConfigurationResponse
       */
      Models::RemovePermissionPolicyFromAccessConfigurationResponse removePermissionPolicyFromAccessConfiguration(const Models::RemovePermissionPolicyFromAccessConfigurationRequest &request);

      /**
       * @summary Removes a user from a group.
       *
       * @description If System for Cross-domain Identity Management (SCIM) synchronization is enabled, you cannot remove a user from a group that is synchronized by using SCIM.
       * This topic provides an example on how to remove the user `u-00q8wbq42wiltcrk****` from the group `g-00jqzghi2n3o5hkh****`.
       *
       * @param request RemoveUserFromGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveUserFromGroupResponse
       */
      Models::RemoveUserFromGroupResponse removeUserFromGroupWithOptions(const Models::RemoveUserFromGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes a user from a group.
       *
       * @description If System for Cross-domain Identity Management (SCIM) synchronization is enabled, you cannot remove a user from a group that is synchronized by using SCIM.
       * This topic provides an example on how to remove the user `u-00q8wbq42wiltcrk****` from the group `g-00jqzghi2n3o5hkh****`.
       *
       * @param request RemoveUserFromGroupRequest
       * @return RemoveUserFromGroupResponse
       */
      Models::RemoveUserFromGroupResponse removeUserFromGroup(const Models::RemoveUserFromGroupRequest &request);

      /**
       * @summary Resets the password of a user.
       *
       * @description If a user forgets the password, the password expires, or the password poses security risks, a CloudSSO administrator can reset the password for the user.
       * > After you enable single sign-on (SSO) logon, the password of a user cannot be reset.
       * This topic provides an example on how to reset the password of the user `u-00q8wbq42wiltcrk****`. The new password is automatically generated by the system.
       *
       * @param request ResetUserPasswordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetUserPasswordResponse
       */
      Models::ResetUserPasswordResponse resetUserPasswordWithOptions(const Models::ResetUserPasswordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resets the password of a user.
       *
       * @description If a user forgets the password, the password expires, or the password poses security risks, a CloudSSO administrator can reset the password for the user.
       * > After you enable single sign-on (SSO) logon, the password of a user cannot be reset.
       * This topic provides an example on how to reset the password of the user `u-00q8wbq42wiltcrk****`. The new password is automatically generated by the system.
       *
       * @param request ResetUserPasswordRequest
       * @return ResetUserPasswordResponse
       */
      Models::ResetUserPasswordResponse resetUserPassword(const Models::ResetUserPasswordRequest &request);

      /**
       * @summary Retries a Resource Access Management (RAM) user provisioning event.
       *
       * @param request RetryUserProvisioningEventRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RetryUserProvisioningEventResponse
       */
      Models::RetryUserProvisioningEventResponse retryUserProvisioningEventWithOptions(const Models::RetryUserProvisioningEventRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retries a Resource Access Management (RAM) user provisioning event.
       *
       * @param request RetryUserProvisioningEventRequest
       * @return RetryUserProvisioningEventResponse
       */
      Models::RetryUserProvisioningEventResponse retryUserProvisioningEvent(const Models::RetryUserProvisioningEventRequest &request);

      /**
       * @summary Configures a Security Assertion Markup Language (SAML) identity provider (IdP).
       *
       * @description During SAML 2.0-based single sign-on (SSO) logon, CloudSSO is a service provider (SP), and the identity management system of an enterprise is an IdP.
       * You can use one of the following methods to configure a SAML IdP. You can obtain the required metadata file or parameter values from your IdP.
       * *   Use the metadata file: You can specify the `EncodedMetadataDocument` parameter to upload the metadata file.
       * *   Manually configure the IdP: You can manually specify the following parameters for your IdP: `EntityId`, `LoginUrl`, `WantRequestSigned`, and `X509Certificate`.
       * If you have configured a SAML IdP, the existing configurations are replaced after you call this operation.
       * *   If the IdP is configured by using the metadata file, all existing configurations are replaced with new configurations.
       * *   If the IdP is manually configured, the original parameter values that are different from the new parameter values are replaced.
       * >  If SSO logon is enabled, new configurations immediately take effect. Take note of the impacts on the production environment.
       * This topic provides an example on how to configure an IdP by using the metadata file within the directory `d-00fc2p61****`.
       *
       * @param request SetExternalSAMLIdentityProviderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetExternalSAMLIdentityProviderResponse
       */
      Models::SetExternalSAMLIdentityProviderResponse setExternalSAMLIdentityProviderWithOptions(const Models::SetExternalSAMLIdentityProviderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures a Security Assertion Markup Language (SAML) identity provider (IdP).
       *
       * @description During SAML 2.0-based single sign-on (SSO) logon, CloudSSO is a service provider (SP), and the identity management system of an enterprise is an IdP.
       * You can use one of the following methods to configure a SAML IdP. You can obtain the required metadata file or parameter values from your IdP.
       * *   Use the metadata file: You can specify the `EncodedMetadataDocument` parameter to upload the metadata file.
       * *   Manually configure the IdP: You can manually specify the following parameters for your IdP: `EntityId`, `LoginUrl`, `WantRequestSigned`, and `X509Certificate`.
       * If you have configured a SAML IdP, the existing configurations are replaced after you call this operation.
       * *   If the IdP is configured by using the metadata file, all existing configurations are replaced with new configurations.
       * *   If the IdP is manually configured, the original parameter values that are different from the new parameter values are replaced.
       * >  If SSO logon is enabled, new configurations immediately take effect. Take note of the impacts on the production environment.
       * This topic provides an example on how to configure an IdP by using the metadata file within the directory `d-00fc2p61****`.
       *
       * @param request SetExternalSAMLIdentityProviderRequest
       * @return SetExternalSAMLIdentityProviderResponse
       */
      Models::SetExternalSAMLIdentityProviderResponse setExternalSAMLIdentityProvider(const Models::SetExternalSAMLIdentityProviderRequest &request);

      /**
       * @summary Configures the logon preference of CloudSSO users.
       *
       * @param request SetLoginPreferenceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetLoginPreferenceResponse
       */
      Models::SetLoginPreferenceResponse setLoginPreferenceWithOptions(const Models::SetLoginPreferenceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures the logon preference of CloudSSO users.
       *
       * @param request SetLoginPreferenceRequest
       * @return SetLoginPreferenceResponse
       */
      Models::SetLoginPreferenceResponse setLoginPreference(const Models::SetLoginPreferenceRequest &request);

      /**
       * @summary Enables or disables multi-factor authentication (MFA) for users in a directory.
       *
       * @description If a CloudSSO administrator enables username-password logon for users, CloudSSO automatically enables MFA to improve security. The administrator can call this operation to enable or disable MFA based on the business requirements.
       * This topic provides an example on how to enable MFA for users.
       *
       * @param request SetMFAAuthenticationStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetMFAAuthenticationStatusResponse
       */
      Models::SetMFAAuthenticationStatusResponse setMFAAuthenticationStatusWithOptions(const Models::SetMFAAuthenticationStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables or disables multi-factor authentication (MFA) for users in a directory.
       *
       * @description If a CloudSSO administrator enables username-password logon for users, CloudSSO automatically enables MFA to improve security. The administrator can call this operation to enable or disable MFA based on the business requirements.
       * This topic provides an example on how to enable MFA for users.
       *
       * @param request SetMFAAuthenticationStatusRequest
       * @return SetMFAAuthenticationStatusResponse
       */
      Models::SetMFAAuthenticationStatusResponse setMFAAuthenticationStatus(const Models::SetMFAAuthenticationStatusRequest &request);

      /**
       * @summary Configures a password policy for CloudSSO users.
       *
       * @param request SetPasswordPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetPasswordPolicyResponse
       */
      Models::SetPasswordPolicyResponse setPasswordPolicyWithOptions(const Models::SetPasswordPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures a password policy for CloudSSO users.
       *
       * @param request SetPasswordPolicyRequest
       * @return SetPasswordPolicyResponse
       */
      Models::SetPasswordPolicyResponse setPasswordPolicy(const Models::SetPasswordPolicyRequest &request);

      /**
       * @summary Enables or disables System for Cross-domain Identity Management (SCIM) synchronization.
       *
       * @description You can synchronize users or groups from an external identity provider (IdP) that supports SCIM 2.0 to CloudSSO only after SCIM synchronization is enabled. If you disable SCIM synchronization, you can no longer synchronize users or groups to CloudSSO. The following list describes the impacts after SCIM synchronization is enabled or disabled:
       * *   After you enable SCIM synchronization, you cannot modify or delete the users or groups that are synchronized to CloudSSO by using SCIM. In addition, you cannot add users to or remove users from the groups. However, you can change the passwords of the users and enable or disable the logon of the users.
       * *   After you disable SCIM synchronization, you can modify and delete the users and groups that are synchronized to CloudSSO by using SCIM. You can also add users to or remove users from the groups.
       * This topic provides an example on how to enable SCIM synchronization within the directory `d-00fc2p61****`.
       *
       * @param request SetSCIMSynchronizationStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetSCIMSynchronizationStatusResponse
       */
      Models::SetSCIMSynchronizationStatusResponse setSCIMSynchronizationStatusWithOptions(const Models::SetSCIMSynchronizationStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables or disables System for Cross-domain Identity Management (SCIM) synchronization.
       *
       * @description You can synchronize users or groups from an external identity provider (IdP) that supports SCIM 2.0 to CloudSSO only after SCIM synchronization is enabled. If you disable SCIM synchronization, you can no longer synchronize users or groups to CloudSSO. The following list describes the impacts after SCIM synchronization is enabled or disabled:
       * *   After you enable SCIM synchronization, you cannot modify or delete the users or groups that are synchronized to CloudSSO by using SCIM. In addition, you cannot add users to or remove users from the groups. However, you can change the passwords of the users and enable or disable the logon of the users.
       * *   After you disable SCIM synchronization, you can modify and delete the users and groups that are synchronized to CloudSSO by using SCIM. You can also add users to or remove users from the groups.
       * This topic provides an example on how to enable SCIM synchronization within the directory `d-00fc2p61****`.
       *
       * @param request SetSCIMSynchronizationStatusRequest
       * @return SetSCIMSynchronizationStatusResponse
       */
      Models::SetSCIMSynchronizationStatusResponse setSCIMSynchronizationStatus(const Models::SetSCIMSynchronizationStatusRequest &request);

      /**
       * @summary Modifies information about an access configuration.
       *
       * @description You can modify the `Description`, `SessionDuration`, and `RelayState` parameters for an access configuration.
       * This topic provides an example on how to change the initial web page in the access configuration `ac-00jhtfl8thteu6uj****` to `https://cloudsso.console.aliyun.com`.
       *
       * @param request UpdateAccessConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAccessConfigurationResponse
       */
      Models::UpdateAccessConfigurationResponse updateAccessConfigurationWithOptions(const Models::UpdateAccessConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies information about an access configuration.
       *
       * @description You can modify the `Description`, `SessionDuration`, and `RelayState` parameters for an access configuration.
       * This topic provides an example on how to change the initial web page in the access configuration `ac-00jhtfl8thteu6uj****` to `https://cloudsso.console.aliyun.com`.
       *
       * @param request UpdateAccessConfigurationRequest
       * @return UpdateAccessConfigurationResponse
       */
      Models::UpdateAccessConfigurationResponse updateAccessConfiguration(const Models::UpdateAccessConfigurationRequest &request);

      /**
       * @summary Changes the name of a directory.
       *
       * @description After you change the name of a directory, the URL that is used to log on to the CloudSSO user portal is changed. You must notify the CloudSSO users of the correct URL.
       * This topic provides an example on how to change the name of a directory to `new-example`.
       *
       * @param request UpdateDirectoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDirectoryResponse
       */
      Models::UpdateDirectoryResponse updateDirectoryWithOptions(const Models::UpdateDirectoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the name of a directory.
       *
       * @description After you change the name of a directory, the URL that is used to log on to the CloudSSO user portal is changed. You must notify the CloudSSO users of the correct URL.
       * This topic provides an example on how to change the name of a directory to `new-example`.
       *
       * @param request UpdateDirectoryRequest
       * @return UpdateDirectoryResponse
       */
      Models::UpdateDirectoryResponse updateDirectory(const Models::UpdateDirectoryRequest &request);

      /**
       * @summary Modifies the information about a group.
       *
       * @description You can modify `GroupName` and `Description` for a group.
       * > If System for Cross-domain Identity Management (SCIM) synchronization is enabled, you cannot modify information about a group that is synchronized by using SCIM.
       * This topic provides an example on how to modify the name of the group `g-00jqzghi2n3o5hkh****` to `NewTestGroup`.
       *
       * @param request UpdateGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateGroupResponse
       */
      Models::UpdateGroupResponse updateGroupWithOptions(const Models::UpdateGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the information about a group.
       *
       * @description You can modify `GroupName` and `Description` for a group.
       * > If System for Cross-domain Identity Management (SCIM) synchronization is enabled, you cannot modify information about a group that is synchronized by using SCIM.
       * This topic provides an example on how to modify the name of the group `g-00jqzghi2n3o5hkh****` to `NewTestGroup`.
       *
       * @param request UpdateGroupRequest
       * @return UpdateGroupResponse
       */
      Models::UpdateGroupResponse updateGroup(const Models::UpdateGroupRequest &request);

      /**
       * @summary Modifies an inline policy that is created for an access configuration.
       *
       * @description This topic provides an example on how to modify an inline policy that is created for the access configuration `ac-00jhtfl8thteu6uj****`.
       *
       * @param request UpdateInlinePolicyForAccessConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateInlinePolicyForAccessConfigurationResponse
       */
      Models::UpdateInlinePolicyForAccessConfigurationResponse updateInlinePolicyForAccessConfigurationWithOptions(const Models::UpdateInlinePolicyForAccessConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies an inline policy that is created for an access configuration.
       *
       * @description This topic provides an example on how to modify an inline policy that is created for the access configuration `ac-00jhtfl8thteu6uj****`.
       *
       * @param request UpdateInlinePolicyForAccessConfigurationRequest
       * @return UpdateInlinePolicyForAccessConfigurationResponse
       */
      Models::UpdateInlinePolicyForAccessConfigurationResponse updateInlinePolicyForAccessConfiguration(const Models::UpdateInlinePolicyForAccessConfigurationRequest &request);

      /**
       * @summary Modifies the global multi-factor authentication (MFA) settings.
       *
       * @description When username-password logon is enabled, you can configure the global MFA verification policy for user logon.
       * This topic provides an example on how to enable MFA verification for all CloudSSO users in the directory `d-00fc2p61****`.
       *
       * @param tmpReq UpdateMFAAuthenticationSettingsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateMFAAuthenticationSettingsResponse
       */
      Models::UpdateMFAAuthenticationSettingsResponse updateMFAAuthenticationSettingsWithOptions(const Models::UpdateMFAAuthenticationSettingsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the global multi-factor authentication (MFA) settings.
       *
       * @description When username-password logon is enabled, you can configure the global MFA verification policy for user logon.
       * This topic provides an example on how to enable MFA verification for all CloudSSO users in the directory `d-00fc2p61****`.
       *
       * @param request UpdateMFAAuthenticationSettingsRequest
       * @return UpdateMFAAuthenticationSettingsResponse
       */
      Models::UpdateMFAAuthenticationSettingsResponse updateMFAAuthenticationSettings(const Models::UpdateMFAAuthenticationSettingsRequest &request);

      /**
       * @summary Enables or disables a System for Cross-domain Identity Management (SCIM) credential.
       *
       * @description This topic provides an example on how to disable the SCIM credential whose ID is `scimcred-004whl0kvfwcypbi****`. After the SCIM credential is disabled, the synchronization task that uses the SCIM credential fails. You can call this operation again to enable the SCIM credential.
       *
       * @param request UpdateSCIMServerCredentialStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSCIMServerCredentialStatusResponse
       */
      Models::UpdateSCIMServerCredentialStatusResponse updateSCIMServerCredentialStatusWithOptions(const Models::UpdateSCIMServerCredentialStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables or disables a System for Cross-domain Identity Management (SCIM) credential.
       *
       * @description This topic provides an example on how to disable the SCIM credential whose ID is `scimcred-004whl0kvfwcypbi****`. After the SCIM credential is disabled, the synchronization task that uses the SCIM credential fails. You can call this operation again to enable the SCIM credential.
       *
       * @param request UpdateSCIMServerCredentialStatusRequest
       * @return UpdateSCIMServerCredentialStatusResponse
       */
      Models::UpdateSCIMServerCredentialStatusResponse updateSCIMServerCredentialStatus(const Models::UpdateSCIMServerCredentialStatusRequest &request);

      /**
       * @summary Modifies information about a user.
       *
       * @description You can modify `FirstName`, `LastName`, `DisplayName`, `Email`, and `Description` for a user. You cannot modify `UserName` for a user.
       * > If System for Cross-domain Identity Management (SCIM) synchronization is enabled, you cannot modify information about a user that is synchronized by using SCIM.
       *
       * @param request UpdateUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateUserResponse
       */
      Models::UpdateUserResponse updateUserWithOptions(const Models::UpdateUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies information about a user.
       *
       * @description You can modify `FirstName`, `LastName`, `DisplayName`, `Email`, and `Description` for a user. You cannot modify `UserName` for a user.
       * > If System for Cross-domain Identity Management (SCIM) synchronization is enabled, you cannot modify information about a user that is synchronized by using SCIM.
       *
       * @param request UpdateUserRequest
       * @return UpdateUserResponse
       */
      Models::UpdateUserResponse updateUser(const Models::UpdateUserRequest &request);

      /**
       * @summary Modifies the multi-factor authentication (MFA) setting of a single user.
       *
       * @description If you call the [UpdateMFAAuthenticationSettings](https://help.aliyun.com/document_detail/450134.html) operation to set the MFAAuthenticationSettings parameter to `Byuser`, user-specific settings are applied. Then, you must call the UpdateUserMFAAuthenticationSettings operation to configure MFA for each user.
       * By default, the MFAAuthenticationSettings parameter is set to `Enabled` for a new user.
       * This topic provides an example on how to enable MFA for the user named `u-00q8wbq42wiltcrk****`.
       *
       * @param request UpdateUserMFAAuthenticationSettingsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateUserMFAAuthenticationSettingsResponse
       */
      Models::UpdateUserMFAAuthenticationSettingsResponse updateUserMFAAuthenticationSettingsWithOptions(const Models::UpdateUserMFAAuthenticationSettingsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the multi-factor authentication (MFA) setting of a single user.
       *
       * @description If you call the [UpdateMFAAuthenticationSettings](https://help.aliyun.com/document_detail/450134.html) operation to set the MFAAuthenticationSettings parameter to `Byuser`, user-specific settings are applied. Then, you must call the UpdateUserMFAAuthenticationSettings operation to configure MFA for each user.
       * By default, the MFAAuthenticationSettings parameter is set to `Enabled` for a new user.
       * This topic provides an example on how to enable MFA for the user named `u-00q8wbq42wiltcrk****`.
       *
       * @param request UpdateUserMFAAuthenticationSettingsRequest
       * @return UpdateUserMFAAuthenticationSettingsResponse
       */
      Models::UpdateUserMFAAuthenticationSettingsResponse updateUserMFAAuthenticationSettings(const Models::UpdateUserMFAAuthenticationSettingsRequest &request);

      /**
       * @summary Modifies a Resource Access Management (RAM) user provisioning.
       *
       * @param request UpdateUserProvisioningRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateUserProvisioningResponse
       */
      Models::UpdateUserProvisioningResponse updateUserProvisioningWithOptions(const Models::UpdateUserProvisioningRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a Resource Access Management (RAM) user provisioning.
       *
       * @param request UpdateUserProvisioningRequest
       * @return UpdateUserProvisioningResponse
       */
      Models::UpdateUserProvisioningResponse updateUserProvisioning(const Models::UpdateUserProvisioningRequest &request);

      /**
       * @summary Modifies the global configurations of a Resource Access Management (RAM) user provisioning.
       *
       * @param request UpdateUserProvisioningConfigurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateUserProvisioningConfigurationResponse
       */
      Models::UpdateUserProvisioningConfigurationResponse updateUserProvisioningConfigurationWithOptions(const Models::UpdateUserProvisioningConfigurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the global configurations of a Resource Access Management (RAM) user provisioning.
       *
       * @param request UpdateUserProvisioningConfigurationRequest
       * @return UpdateUserProvisioningConfigurationResponse
       */
      Models::UpdateUserProvisioningConfigurationResponse updateUserProvisioningConfiguration(const Models::UpdateUserProvisioningConfigurationRequest &request);

      /**
       * @summary Changes the status of a user.
       *
       * @description This topic provides an example on how to change the status of the user whose ID is `u-00q8wbq42wiltcrk****` to Disabled. Users in the Disabled state cannot log on to the CloudSSO user portal.
       *
       * @param request UpdateUserStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateUserStatusResponse
       */
      Models::UpdateUserStatusResponse updateUserStatusWithOptions(const Models::UpdateUserStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the status of a user.
       *
       * @description This topic provides an example on how to change the status of the user whose ID is `u-00q8wbq42wiltcrk****` to Disabled. Users in the Disabled state cannot log on to the CloudSSO user portal.
       *
       * @param request UpdateUserStatusRequest
       * @return UpdateUserStatusResponse
       */
      Models::UpdateUserStatusResponse updateUserStatus(const Models::UpdateUserStatusRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Cloudsso20210515
#endif
