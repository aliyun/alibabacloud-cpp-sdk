// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_RAM20150501_HPP_
#define ALIBABACLOUD_RAM20150501_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Ram20150501Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Ram20150501.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ram20150501
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

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
       * @summary Attaches a policy to a Resource Access Management (RAM) user group.
       *
       * @param request AttachPolicyToGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachPolicyToGroupResponse
       */
      Models::AttachPolicyToGroupResponse attachPolicyToGroupWithOptions(const Models::AttachPolicyToGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Attaches a policy to a Resource Access Management (RAM) user group.
       *
       * @param request AttachPolicyToGroupRequest
       * @return AttachPolicyToGroupResponse
       */
      Models::AttachPolicyToGroupResponse attachPolicyToGroup(const Models::AttachPolicyToGroupRequest &request);

      /**
       * @summary Attaches a policy to a Resource Access Management (RAM) role.
       *
       * @param request AttachPolicyToRoleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachPolicyToRoleResponse
       */
      Models::AttachPolicyToRoleResponse attachPolicyToRoleWithOptions(const Models::AttachPolicyToRoleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Attaches a policy to a Resource Access Management (RAM) role.
       *
       * @param request AttachPolicyToRoleRequest
       * @return AttachPolicyToRoleResponse
       */
      Models::AttachPolicyToRoleResponse attachPolicyToRole(const Models::AttachPolicyToRoleRequest &request);

      /**
       * @summary Attaches a policy to a Resource Access Management (RAM) user.
       *
       * @param request AttachPolicyToUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AttachPolicyToUserResponse
       */
      Models::AttachPolicyToUserResponse attachPolicyToUserWithOptions(const Models::AttachPolicyToUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Attaches a policy to a Resource Access Management (RAM) user.
       *
       * @param request AttachPolicyToUserRequest
       * @return AttachPolicyToUserResponse
       */
      Models::AttachPolicyToUserResponse attachPolicyToUser(const Models::AttachPolicyToUserRequest &request);

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
       * @summary Deletes the alias of an Alibaba Cloud account.
       *
       * @param request ClearAccountAliasRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ClearAccountAliasResponse
       */
      Models::ClearAccountAliasResponse clearAccountAliasWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the alias of an Alibaba Cloud account.
       *
       * @return ClearAccountAliasResponse
       */
      Models::ClearAccountAliasResponse clearAccountAlias();

      /**
       * @summary Creates an AccessKey pair for a Resource Access Management (RAM) user.
       *
       * @param request CreateAccessKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAccessKeyResponse
       */
      Models::CreateAccessKeyResponse createAccessKeyWithOptions(const Models::CreateAccessKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an AccessKey pair for a Resource Access Management (RAM) user.
       *
       * @param request CreateAccessKeyRequest
       * @return CreateAccessKeyResponse
       */
      Models::CreateAccessKeyResponse createAccessKey(const Models::CreateAccessKeyRequest &request);

      /**
       * @summary Creates a RAM user group.
       *
       * @param request CreateGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateGroupResponse
       */
      Models::CreateGroupResponse createGroupWithOptions(const Models::CreateGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a RAM user group.
       *
       * @param request CreateGroupRequest
       * @return CreateGroupResponse
       */
      Models::CreateGroupResponse createGroup(const Models::CreateGroupRequest &request);

      /**
       * @summary Enables console logon for a Resource Access Management (RAM) user.
       *
       * @param request CreateLoginProfileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateLoginProfileResponse
       */
      Models::CreateLoginProfileResponse createLoginProfileWithOptions(const Models::CreateLoginProfileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables console logon for a Resource Access Management (RAM) user.
       *
       * @param request CreateLoginProfileRequest
       * @return CreateLoginProfileResponse
       */
      Models::CreateLoginProfileResponse createLoginProfile(const Models::CreateLoginProfileRequest &request);

      /**
       * @summary Creates a custom policy.
       *
       * @description For more information about policies, see [Policy overview](https://help.aliyun.com/document_detail/93732.html).
       * This topic provides an example on how to create a custom policy to query Elastic Compute Service (ECS) instances in a specific region.
       *
       * @param tmpReq CreatePolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePolicyResponse
       */
      Models::CreatePolicyResponse createPolicyWithOptions(const Models::CreatePolicyRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a custom policy.
       *
       * @description For more information about policies, see [Policy overview](https://help.aliyun.com/document_detail/93732.html).
       * This topic provides an example on how to create a custom policy to query Elastic Compute Service (ECS) instances in a specific region.
       *
       * @param request CreatePolicyRequest
       * @return CreatePolicyResponse
       */
      Models::CreatePolicyResponse createPolicy(const Models::CreatePolicyRequest &request);

      /**
       * @summary Creates a version for a policy.
       *
       * @param request CreatePolicyVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePolicyVersionResponse
       */
      Models::CreatePolicyVersionResponse createPolicyVersionWithOptions(const Models::CreatePolicyVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a version for a policy.
       *
       * @param request CreatePolicyVersionRequest
       * @return CreatePolicyVersionResponse
       */
      Models::CreatePolicyVersionResponse createPolicyVersion(const Models::CreatePolicyVersionRequest &request);

      /**
       * @summary Creates a Resource Access Management (RAM) role.
       *
       * @description ### [](#)Operation description
       * For more information about RAM roles, see [Overview of RAM roles](https://help.aliyun.com/document_detail/93689.html).
       *
       * @param tmpReq CreateRoleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRoleResponse
       */
      Models::CreateRoleResponse createRoleWithOptions(const Models::CreateRoleRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a Resource Access Management (RAM) role.
       *
       * @description ### [](#)Operation description
       * For more information about RAM roles, see [Overview of RAM roles](https://help.aliyun.com/document_detail/93689.html).
       *
       * @param request CreateRoleRequest
       * @return CreateRoleResponse
       */
      Models::CreateRoleResponse createRole(const Models::CreateRoleRequest &request);

      /**
       * @summary Creates a Resource Access Management (RAM) user.
       *
       * @description This topic provides an example on how to create a RAM user named `alice`.
       *
       * @param request CreateUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateUserResponse
       */
      Models::CreateUserResponse createUserWithOptions(const Models::CreateUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a Resource Access Management (RAM) user.
       *
       * @description This topic provides an example on how to create a RAM user named `alice`.
       *
       * @param request CreateUserRequest
       * @return CreateUserResponse
       */
      Models::CreateUserResponse createUser(const Models::CreateUserRequest &request);

      /**
       * @summary Creates a multi-factor authentication (MFA) device.
       *
       * @param request CreateVirtualMFADeviceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVirtualMFADeviceResponse
       */
      Models::CreateVirtualMFADeviceResponse createVirtualMFADeviceWithOptions(const Models::CreateVirtualMFADeviceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a multi-factor authentication (MFA) device.
       *
       * @param request CreateVirtualMFADeviceRequest
       * @return CreateVirtualMFADeviceResponse
       */
      Models::CreateVirtualMFADeviceResponse createVirtualMFADevice(const Models::CreateVirtualMFADeviceRequest &request);

      /**
       * @summary Decodes the diagnostic information in the response that contains an access denied error. The error is caused by no RAM permissions.
       *
       * @param request DecodeDiagnosticMessageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DecodeDiagnosticMessageResponse
       */
      Models::DecodeDiagnosticMessageResponse decodeDiagnosticMessageWithOptions(const Models::DecodeDiagnosticMessageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Decodes the diagnostic information in the response that contains an access denied error. The error is caused by no RAM permissions.
       *
       * @param request DecodeDiagnosticMessageRequest
       * @return DecodeDiagnosticMessageResponse
       */
      Models::DecodeDiagnosticMessageResponse decodeDiagnosticMessage(const Models::DecodeDiagnosticMessageRequest &request);

      /**
       * @summary Deletes an AccessKey pair of a Resource Access Management (RAM) user.
       *
       * @param request DeleteAccessKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAccessKeyResponse
       */
      Models::DeleteAccessKeyResponse deleteAccessKeyWithOptions(const Models::DeleteAccessKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an AccessKey pair of a Resource Access Management (RAM) user.
       *
       * @param request DeleteAccessKeyRequest
       * @return DeleteAccessKeyResponse
       */
      Models::DeleteAccessKeyResponse deleteAccessKey(const Models::DeleteAccessKeyRequest &request);

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
       * @summary Disables console logon for a Resource Access Management (RAM) user.
       *
       * @param request DeleteLoginProfileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteLoginProfileResponse
       */
      Models::DeleteLoginProfileResponse deleteLoginProfileWithOptions(const Models::DeleteLoginProfileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables console logon for a Resource Access Management (RAM) user.
       *
       * @param request DeleteLoginProfileRequest
       * @return DeleteLoginProfileResponse
       */
      Models::DeleteLoginProfileResponse deleteLoginProfile(const Models::DeleteLoginProfileRequest &request);

      /**
       * @summary Deletes a policy.
       *
       * @param request DeletePolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePolicyResponse
       */
      Models::DeletePolicyResponse deletePolicyWithOptions(const Models::DeletePolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a policy.
       *
       * @param request DeletePolicyRequest
       * @return DeletePolicyResponse
       */
      Models::DeletePolicyResponse deletePolicy(const Models::DeletePolicyRequest &request);

      /**
       * @summary Deletes a policy version.
       *
       * @param request DeletePolicyVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePolicyVersionResponse
       */
      Models::DeletePolicyVersionResponse deletePolicyVersionWithOptions(const Models::DeletePolicyVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a policy version.
       *
       * @param request DeletePolicyVersionRequest
       * @return DeletePolicyVersionResponse
       */
      Models::DeletePolicyVersionResponse deletePolicyVersion(const Models::DeletePolicyVersionRequest &request);

      /**
       * @summary Deletes a regular Resource Access Management (RAM) role.
       *
       * @description Before you delete a regular RAM role, call the [DetachPolicyFromRole](https://help.aliyun.com/document_detail/2337680.html) operation to remove all policies from the RAM role.
       * The DeleteRole operation cannot be used to delete service-linked roles and reserved roles for cloud services.
       *
       * @param request DeleteRoleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRoleResponse
       */
      Models::DeleteRoleResponse deleteRoleWithOptions(const Models::DeleteRoleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a regular Resource Access Management (RAM) role.
       *
       * @description Before you delete a regular RAM role, call the [DetachPolicyFromRole](https://help.aliyun.com/document_detail/2337680.html) operation to remove all policies from the RAM role.
       * The DeleteRole operation cannot be used to delete service-linked roles and reserved roles for cloud services.
       *
       * @param request DeleteRoleRequest
       * @return DeleteRoleResponse
       */
      Models::DeleteRoleResponse deleteRole(const Models::DeleteRoleRequest &request);

      /**
       * @summary Deletes a Resource Access Management (RAM) user.
       *
       * @description Before you delete a RAM user, make sure that no policies are attached to the RAM user and that the RAM user does not belong to any groups.
       *
       * @param request DeleteUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteUserResponse
       */
      Models::DeleteUserResponse deleteUserWithOptions(const Models::DeleteUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a Resource Access Management (RAM) user.
       *
       * @description Before you delete a RAM user, make sure that no policies are attached to the RAM user and that the RAM user does not belong to any groups.
       *
       * @param request DeleteUserRequest
       * @return DeleteUserResponse
       */
      Models::DeleteUserResponse deleteUser(const Models::DeleteUserRequest &request);

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
       * @summary Detaches a policy from a Resource Access Management (RAM) user group.
       *
       * @param request DetachPolicyFromGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetachPolicyFromGroupResponse
       */
      Models::DetachPolicyFromGroupResponse detachPolicyFromGroupWithOptions(const Models::DetachPolicyFromGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Detaches a policy from a Resource Access Management (RAM) user group.
       *
       * @param request DetachPolicyFromGroupRequest
       * @return DetachPolicyFromGroupResponse
       */
      Models::DetachPolicyFromGroupResponse detachPolicyFromGroup(const Models::DetachPolicyFromGroupRequest &request);

      /**
       * @summary Detaches a policy from a Resource Access Management (RAM) role.
       *
       * @param request DetachPolicyFromRoleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetachPolicyFromRoleResponse
       */
      Models::DetachPolicyFromRoleResponse detachPolicyFromRoleWithOptions(const Models::DetachPolicyFromRoleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Detaches a policy from a Resource Access Management (RAM) role.
       *
       * @param request DetachPolicyFromRoleRequest
       * @return DetachPolicyFromRoleResponse
       */
      Models::DetachPolicyFromRoleResponse detachPolicyFromRole(const Models::DetachPolicyFromRoleRequest &request);

      /**
       * @summary Detaches a policy from a Resource Access Management (RAM) user.
       *
       * @param request DetachPolicyFromUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetachPolicyFromUserResponse
       */
      Models::DetachPolicyFromUserResponse detachPolicyFromUserWithOptions(const Models::DetachPolicyFromUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Detaches a policy from a Resource Access Management (RAM) user.
       *
       * @param request DetachPolicyFromUserRequest
       * @return DetachPolicyFromUserResponse
       */
      Models::DetachPolicyFromUserResponse detachPolicyFromUser(const Models::DetachPolicyFromUserRequest &request);

      /**
       * @param request GetAccessKeyLastUsedRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAccessKeyLastUsedResponse
       */
      Models::GetAccessKeyLastUsedResponse getAccessKeyLastUsedWithOptions(const Models::GetAccessKeyLastUsedRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetAccessKeyLastUsedRequest
       * @return GetAccessKeyLastUsedResponse
       */
      Models::GetAccessKeyLastUsedResponse getAccessKeyLastUsed(const Models::GetAccessKeyLastUsedRequest &request);

      /**
       * @summary Queries the alias of an Alibaba Cloud account.
       *
       * @param request GetAccountAliasRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAccountAliasResponse
       */
      Models::GetAccountAliasResponse getAccountAliasWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the alias of an Alibaba Cloud account.
       *
       * @return GetAccountAliasResponse
       */
      Models::GetAccountAliasResponse getAccountAlias();

      /**
       * @summary Queries information about a Resource Access Management (RAM) user group.
       *
       * @param request GetGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetGroupResponse
       */
      Models::GetGroupResponse getGroupWithOptions(const Models::GetGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about a Resource Access Management (RAM) user group.
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
       * @summary Queries the password policy of Resource Access Management (RAM) users, including the password strength.
       *
       * @param request GetPasswordPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPasswordPolicyResponse
       */
      Models::GetPasswordPolicyResponse getPasswordPolicyWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the password policy of Resource Access Management (RAM) users, including the password strength.
       *
       * @return GetPasswordPolicyResponse
       */
      Models::GetPasswordPolicyResponse getPasswordPolicy();

      /**
       * @summary Queries information about a policy.
       *
       * @param request GetPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPolicyResponse
       */
      Models::GetPolicyResponse getPolicyWithOptions(const Models::GetPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about a policy.
       *
       * @param request GetPolicyRequest
       * @return GetPolicyResponse
       */
      Models::GetPolicyResponse getPolicy(const Models::GetPolicyRequest &request);

      /**
       * @summary Queries the information about a policy version.
       *
       * @param request GetPolicyVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPolicyVersionResponse
       */
      Models::GetPolicyVersionResponse getPolicyVersionWithOptions(const Models::GetPolicyVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a policy version.
       *
       * @param request GetPolicyVersionRequest
       * @return GetPolicyVersionResponse
       */
      Models::GetPolicyVersionResponse getPolicyVersion(const Models::GetPolicyVersionRequest &request);

      /**
       * @summary Queries information about a Resource Access Management (RAM) role.
       *
       * @param request GetRoleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRoleResponse
       */
      Models::GetRoleResponse getRoleWithOptions(const Models::GetRoleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about a Resource Access Management (RAM) role.
       *
       * @param request GetRoleRequest
       * @return GetRoleResponse
       */
      Models::GetRoleResponse getRole(const Models::GetRoleRequest &request);

      /**
       * @summary Queries the security preferences.
       *
       * @param request GetSecurityPreferenceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSecurityPreferenceResponse
       */
      Models::GetSecurityPreferenceResponse getSecurityPreferenceWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the security preferences.
       *
       * @return GetSecurityPreferenceResponse
       */
      Models::GetSecurityPreferenceResponse getSecurityPreference();

      /**
       * @summary Queries information about a Resource Access Management (RAM) user.
       *
       * @description This topic provides an example on how to query information about the RAM user `alice`.
       *
       * @param request GetUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUserResponse
       */
      Models::GetUserResponse getUserWithOptions(const Models::GetUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about a Resource Access Management (RAM) user.
       *
       * @description This topic provides an example on how to query information about the RAM user `alice`.
       *
       * @param request GetUserRequest
       * @return GetUserResponse
       */
      Models::GetUserResponse getUser(const Models::GetUserRequest &request);

      /**
       * @summary Queries the multi-factor authentication (MFA) device that is bound to a Resource Access Management (RAM) user.
       *
       * @param request GetUserMFAInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUserMFAInfoResponse
       */
      Models::GetUserMFAInfoResponse getUserMFAInfoWithOptions(const Models::GetUserMFAInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the multi-factor authentication (MFA) device that is bound to a Resource Access Management (RAM) user.
       *
       * @param request GetUserMFAInfoRequest
       * @return GetUserMFAInfoResponse
       */
      Models::GetUserMFAInfoResponse getUserMFAInfo(const Models::GetUserMFAInfoRequest &request);

      /**
       * @summary Queries all AccessKey pairs that belong to a Resource Access Management (RAM) user.
       *
       * @param request ListAccessKeysRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAccessKeysResponse
       */
      Models::ListAccessKeysResponse listAccessKeysWithOptions(const Models::ListAccessKeysRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all AccessKey pairs that belong to a Resource Access Management (RAM) user.
       *
       * @param request ListAccessKeysRequest
       * @return ListAccessKeysResponse
       */
      Models::ListAccessKeysResponse listAccessKeys(const Models::ListAccessKeysRequest &request);

      /**
       * @summary Queries the entities to which a policy is attached.
       *
       * @param request ListEntitiesForPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListEntitiesForPolicyResponse
       */
      Models::ListEntitiesForPolicyResponse listEntitiesForPolicyWithOptions(const Models::ListEntitiesForPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the entities to which a policy is attached.
       *
       * @param request ListEntitiesForPolicyRequest
       * @return ListEntitiesForPolicyResponse
       */
      Models::ListEntitiesForPolicyResponse listEntitiesForPolicy(const Models::ListEntitiesForPolicyRequest &request);

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
       * @description ### [](#)
       * This topic provides an example on how to query the RAM user groups to which the RAM user `Alice` belongs. The response shows that `Alice` belongs to the RAM user group named `Dev-Team`.
       *
       * @param request ListGroupsForUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListGroupsForUserResponse
       */
      Models::ListGroupsForUserResponse listGroupsForUserWithOptions(const Models::ListGroupsForUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the Resource Access Management (RAM) user groups to which a RAM user belongs.
       *
       * @description ### [](#)
       * This topic provides an example on how to query the RAM user groups to which the RAM user `Alice` belongs. The response shows that `Alice` belongs to the RAM user group named `Dev-Team`.
       *
       * @param request ListGroupsForUserRequest
       * @return ListGroupsForUserResponse
       */
      Models::ListGroupsForUserResponse listGroupsForUser(const Models::ListGroupsForUserRequest &request);

      /**
       * @summary Queries a list of policies.
       *
       * @param tmpReq ListPoliciesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPoliciesResponse
       */
      Models::ListPoliciesResponse listPoliciesWithOptions(const Models::ListPoliciesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of policies.
       *
       * @param request ListPoliciesRequest
       * @return ListPoliciesResponse
       */
      Models::ListPoliciesResponse listPolicies(const Models::ListPoliciesRequest &request);

      /**
       * @summary Queries the policies that are attached to a Resource Access Management (RAM) user group.
       *
       * @param request ListPoliciesForGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPoliciesForGroupResponse
       */
      Models::ListPoliciesForGroupResponse listPoliciesForGroupWithOptions(const Models::ListPoliciesForGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the policies that are attached to a Resource Access Management (RAM) user group.
       *
       * @param request ListPoliciesForGroupRequest
       * @return ListPoliciesForGroupResponse
       */
      Models::ListPoliciesForGroupResponse listPoliciesForGroup(const Models::ListPoliciesForGroupRequest &request);

      /**
       * @summary Queries the policies that are attached to a Resource Access Management (RAM) role.
       *
       * @param request ListPoliciesForRoleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPoliciesForRoleResponse
       */
      Models::ListPoliciesForRoleResponse listPoliciesForRoleWithOptions(const Models::ListPoliciesForRoleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the policies that are attached to a Resource Access Management (RAM) role.
       *
       * @param request ListPoliciesForRoleRequest
       * @return ListPoliciesForRoleResponse
       */
      Models::ListPoliciesForRoleResponse listPoliciesForRole(const Models::ListPoliciesForRoleRequest &request);

      /**
       * @summary Queries the policies that are attached to a RAM user.
       *
       * @description > You can call this operation to query only the policies that are attached to Alibaba Cloud accounts. You cannot query the policies that are attached to resource groups.
       *
       * @param request ListPoliciesForUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPoliciesForUserResponse
       */
      Models::ListPoliciesForUserResponse listPoliciesForUserWithOptions(const Models::ListPoliciesForUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the policies that are attached to a RAM user.
       *
       * @description > You can call this operation to query only the policies that are attached to Alibaba Cloud accounts. You cannot query the policies that are attached to resource groups.
       *
       * @param request ListPoliciesForUserRequest
       * @return ListPoliciesForUserResponse
       */
      Models::ListPoliciesForUserResponse listPoliciesForUser(const Models::ListPoliciesForUserRequest &request);

      /**
       * @summary Queries the versions of a policy.
       *
       * @param request ListPolicyVersionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPolicyVersionsResponse
       */
      Models::ListPolicyVersionsResponse listPolicyVersionsWithOptions(const Models::ListPolicyVersionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the versions of a policy.
       *
       * @param request ListPolicyVersionsRequest
       * @return ListPolicyVersionsResponse
       */
      Models::ListPolicyVersionsResponse listPolicyVersions(const Models::ListPolicyVersionsRequest &request);

      /**
       * @summary Queries all Resource Access Management (RAM) roles.
       *
       * @param tmpReq ListRolesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRolesResponse
       */
      Models::ListRolesResponse listRolesWithOptions(const Models::ListRolesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all Resource Access Management (RAM) roles.
       *
       * @param request ListRolesRequest
       * @return ListRolesResponse
       */
      Models::ListRolesResponse listRoles(const Models::ListRolesRequest &request);

      /**
       * @summary Queries the tags that are added to cloud resources which are Resource Access Management (RAM) roles and policies.
       *
       * @param tmpReq ListTagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the tags that are added to cloud resources which are Resource Access Management (RAM) roles and policies.
       *
       * @param request ListTagResourcesRequest
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResources(const Models::ListTagResourcesRequest &request);

      /**
       * @summary Queries the information about all RAM users.
       *
       * @param request ListUsersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUsersResponse
       */
      Models::ListUsersResponse listUsersWithOptions(const Models::ListUsersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about all RAM users.
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
       * @summary Queries multi-factor authentication (MFA) devices.
       *
       * @param request ListVirtualMFADevicesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListVirtualMFADevicesResponse
       */
      Models::ListVirtualMFADevicesResponse listVirtualMFADevicesWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries multi-factor authentication (MFA) devices.
       *
       * @return ListVirtualMFADevicesResponse
       */
      Models::ListVirtualMFADevicesResponse listVirtualMFADevices();

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
       * @summary Configures an alias for an Alibaba Cloud account.
       *
       * @param request SetAccountAliasRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetAccountAliasResponse
       */
      Models::SetAccountAliasResponse setAccountAliasWithOptions(const Models::SetAccountAliasRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures an alias for an Alibaba Cloud account.
       *
       * @param request SetAccountAliasRequest
       * @return SetAccountAliasResponse
       */
      Models::SetAccountAliasResponse setAccountAlias(const Models::SetAccountAliasRequest &request);

      /**
       * @summary Specifies a version for a policy as the default version.
       *
       * @param request SetDefaultPolicyVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetDefaultPolicyVersionResponse
       */
      Models::SetDefaultPolicyVersionResponse setDefaultPolicyVersionWithOptions(const Models::SetDefaultPolicyVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Specifies a version for a policy as the default version.
       *
       * @param request SetDefaultPolicyVersionRequest
       * @return SetDefaultPolicyVersionResponse
       */
      Models::SetDefaultPolicyVersionResponse setDefaultPolicyVersion(const Models::SetDefaultPolicyVersionRequest &request);

      /**
       * @summary Configures the password policy for Resource Access Management (RAM) users, including the password strength.
       *
       * @param request SetPasswordPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetPasswordPolicyResponse
       */
      Models::SetPasswordPolicyResponse setPasswordPolicyWithOptions(const Models::SetPasswordPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures the password policy for Resource Access Management (RAM) users, including the password strength.
       *
       * @param request SetPasswordPolicyRequest
       * @return SetPasswordPolicyResponse
       */
      Models::SetPasswordPolicyResponse setPasswordPolicy(const Models::SetPasswordPolicyRequest &request);

      /**
       * @summary Configures the security preferences.
       *
       * @param request SetSecurityPreferenceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetSecurityPreferenceResponse
       */
      Models::SetSecurityPreferenceResponse setSecurityPreferenceWithOptions(const Models::SetSecurityPreferenceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures the security preferences.
       *
       * @param request SetSecurityPreferenceRequest
       * @return SetSecurityPreferenceResponse
       */
      Models::SetSecurityPreferenceResponse setSecurityPreference(const Models::SetSecurityPreferenceRequest &request);

      /**
       * @summary Adds tags to cloud resources which are Resource Access Management (RAM) roles and policies.
       *
       * @param tmpReq TagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds tags to cloud resources which are Resource Access Management (RAM) roles and policies.
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
       * @summary Removes tags from cloud resources that are Resource Access Management (RAM) roles and policies.
       *
       * @param tmpReq UntagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResourcesWithOptions(const Models::UntagResourcesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes tags from cloud resources that are Resource Access Management (RAM) roles and policies.
       *
       * @param request UntagResourcesRequest
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResources(const Models::UntagResourcesRequest &request);

      /**
       * @summary Changes the status of an AccessKey pair that belongs to a Resource Access Management (RAM) user.
       *
       * @param request UpdateAccessKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAccessKeyResponse
       */
      Models::UpdateAccessKeyResponse updateAccessKeyWithOptions(const Models::UpdateAccessKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the status of an AccessKey pair that belongs to a Resource Access Management (RAM) user.
       *
       * @param request UpdateAccessKeyRequest
       * @return UpdateAccessKeyResponse
       */
      Models::UpdateAccessKeyResponse updateAccessKey(const Models::UpdateAccessKeyRequest &request);

      /**
       * @summary Modifies a Resource Access Management (RAM) user group.
       *
       * @param request UpdateGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateGroupResponse
       */
      Models::UpdateGroupResponse updateGroupWithOptions(const Models::UpdateGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a Resource Access Management (RAM) user group.
       *
       * @param request UpdateGroupRequest
       * @return UpdateGroupResponse
       */
      Models::UpdateGroupResponse updateGroup(const Models::UpdateGroupRequest &request);

      /**
       * @summary Modifies the logon configurations of a Resource Access Management (RAM) user.
       *
       * @param request UpdateLoginProfileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateLoginProfileResponse
       */
      Models::UpdateLoginProfileResponse updateLoginProfileWithOptions(const Models::UpdateLoginProfileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the logon configurations of a Resource Access Management (RAM) user.
       *
       * @param request UpdateLoginProfileRequest
       * @return UpdateLoginProfileResponse
       */
      Models::UpdateLoginProfileResponse updateLoginProfile(const Models::UpdateLoginProfileRequest &request);

      /**
       * @summary Modifies the description of a custom policy.
       *
       * @description ### [](#)
       * You can call this operation to modify only the description of a custom policy. You cannot modify the description of a system policy.
       *
       * @param request UpdatePolicyDescriptionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePolicyDescriptionResponse
       */
      Models::UpdatePolicyDescriptionResponse updatePolicyDescriptionWithOptions(const Models::UpdatePolicyDescriptionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the description of a custom policy.
       *
       * @description ### [](#)
       * You can call this operation to modify only the description of a custom policy. You cannot modify the description of a system policy.
       *
       * @param request UpdatePolicyDescriptionRequest
       * @return UpdatePolicyDescriptionResponse
       */
      Models::UpdatePolicyDescriptionResponse updatePolicyDescription(const Models::UpdatePolicyDescriptionRequest &request);

      /**
       * @summary Modifies information about a Resource Access Management (RAM) role.
       *
       * @description This topic provides an example on how to change the description of `ECSAdmin` to `ECS administrator`.
       *
       * @param request UpdateRoleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRoleResponse
       */
      Models::UpdateRoleResponse updateRoleWithOptions(const Models::UpdateRoleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies information about a Resource Access Management (RAM) role.
       *
       * @description This topic provides an example on how to change the description of `ECSAdmin` to `ECS administrator`.
       *
       * @param request UpdateRoleRequest
       * @return UpdateRoleResponse
       */
      Models::UpdateRoleResponse updateRole(const Models::UpdateRoleRequest &request);

      /**
       * @summary Modifies information about a Resource Access Management (RAM) user.
       *
       * @description This topic provides an example on how to change the name of a RAM user from `zhangq****` to `xiaoq****`.
       *
       * @param request UpdateUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateUserResponse
       */
      Models::UpdateUserResponse updateUserWithOptions(const Models::UpdateUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies information about a Resource Access Management (RAM) user.
       *
       * @description This topic provides an example on how to change the name of a RAM user from `zhangq****` to `xiaoq****`.
       *
       * @param request UpdateUserRequest
       * @return UpdateUserResponse
       */
      Models::UpdateUserResponse updateUser(const Models::UpdateUserRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Ram20150501
#endif
