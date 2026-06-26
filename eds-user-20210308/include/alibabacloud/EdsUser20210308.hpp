// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_EDSUSER20210308_HPP_
#define ALIBABACLOUD_EDSUSER20210308_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/EdsUser20210308Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/EdsUser20210308.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsUser20210308
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Add or remove local administrator permissions on a cloud computer for a convenience account.
       *
       * @description A convenience account with local administrator permissions can install software or modify certain system settings on the cloud computer.
       *
       * @param request BatchSetDesktopManagerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchSetDesktopManagerResponse
       */
      Models::BatchSetDesktopManagerResponse batchSetDesktopManagerWithOptions(const Models::BatchSetDesktopManagerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Add or remove local administrator permissions on a cloud computer for a convenience account.
       *
       * @description A convenience account with local administrator permissions can install software or modify certain system settings on the cloud computer.
       *
       * @param request BatchSetDesktopManagerRequest
       * @return BatchSetDesktopManagerResponse
       */
      Models::BatchSetDesktopManagerResponse batchSetDesktopManager(const Models::BatchSetDesktopManagerRequest &request);

      /**
       * @summary When the administrator activates the mode, you can use this API to modify the user logon password.
       *
       * @param request ChangeUserPasswordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeUserPasswordResponse
       */
      Models::ChangeUserPasswordResponse changeUserPasswordWithOptions(const Models::ChangeUserPasswordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary When the administrator activates the mode, you can use this API to modify the user logon password.
       *
       * @param request ChangeUserPasswordRequest
       * @return ChangeUserPasswordResponse
       */
      Models::ChangeUserPasswordResponse changeUserPassword(const Models::ChangeUserPasswordRequest &request);

      /**
       * @summary Query the number of convenience accounts associated with a specified custom property.
       *
       * @param request CheckUsedPropertyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckUsedPropertyResponse
       */
      Models::CheckUsedPropertyResponse checkUsedPropertyWithOptions(const Models::CheckUsedPropertyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the number of convenience accounts associated with a specified custom property.
       *
       * @param request CheckUsedPropertyRequest
       * @return CheckUsedPropertyResponse
       */
      Models::CheckUsedPropertyResponse checkUsedProperty(const Models::CheckUsedPropertyRequest &request);

      /**
       * @summary Query the number of convenience accounts associated with a specified custom attribute value.
       *
       * @param request CheckUsedPropertyValueRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckUsedPropertyValueResponse
       */
      Models::CheckUsedPropertyValueResponse checkUsedPropertyValueWithOptions(const Models::CheckUsedPropertyValueRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the number of convenience accounts associated with a specified custom attribute value.
       *
       * @param request CheckUsedPropertyValueRequest
       * @return CheckUsedPropertyValueResponse
       */
      Models::CheckUsedPropertyValueResponse checkUsedPropertyValue(const Models::CheckUsedPropertyValueRequest &request);

      /**
       * @summary Create a group.
       *
       * @param request CreateGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateGroupResponse
       */
      Models::CreateGroupResponse createGroupWithOptions(const Models::CreateGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create a group.
       *
       * @param request CreateGroupRequest
       * @return CreateGroupResponse
       */
      Models::CreateGroupResponse createGroup(const Models::CreateGroupRequest &request);

      /**
       * @summary Create an organization.
       *
       * @param request CreateOrgRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateOrgResponse
       */
      Models::CreateOrgResponse createOrgWithOptions(const Models::CreateOrgRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create an organization.
       *
       * @param request CreateOrgRequest
       * @return CreateOrgResponse
       */
      Models::CreateOrgResponse createOrg(const Models::CreateOrgRequest &request);

      /**
       * @summary Create a user attribute.
       *
       * @description - You can create up to 10 different properties under one Alibaba Cloud account. Each property includes a property name (PropertyKey) and multiple attribute values (PropertyValue).  
       * - You can add up to 50 different attribute values to a single property.
       *
       * @param request CreatePropertyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePropertyResponse
       */
      Models::CreatePropertyResponse createPropertyWithOptions(const Models::CreatePropertyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create a user attribute.
       *
       * @description - You can create up to 10 different properties under one Alibaba Cloud account. Each property includes a property name (PropertyKey) and multiple attribute values (PropertyValue).  
       * - You can add up to 50 different attribute values to a single property.
       *
       * @param request CreatePropertyRequest
       * @return CreatePropertyResponse
       */
      Models::CreatePropertyResponse createProperty(const Models::CreatePropertyRequest &request);

      /**
       * @summary Creates a resource group.
       *
       * @param request CreateResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateResourceGroupResponse
       */
      Models::CreateResourceGroupResponse createResourceGroupWithOptions(const Models::CreateResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a resource group.
       *
       * @param request CreateResourceGroupRequest
       * @return CreateResourceGroupResponse
       */
      Models::CreateResourceGroupResponse createResourceGroup(const Models::CreateResourceGroupRequest &request);

      /**
       * @summary Easily create accounts for your end users.
       *
       * @description <props="china">
       * A convenience account is a dedicated account system in Wuying Workspace for simple use cases that do not require enterprise AD integration. Accounts require a username, and either an email or a phone number.
       * <props="intl">
       * A convenience account is a dedicated account system in Wuying Workspace for simple use cases that do not require enterprise AD integration. Accounts require both a username and an email.
       *
       * @param request CreateUsersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateUsersResponse
       */
      Models::CreateUsersResponse createUsersWithOptions(const Models::CreateUsersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Easily create accounts for your end users.
       *
       * @description <props="china">
       * A convenience account is a dedicated account system in Wuying Workspace for simple use cases that do not require enterprise AD integration. Accounts require a username, and either an email or a phone number.
       * <props="intl">
       * A convenience account is a dedicated account system in Wuying Workspace for simple use cases that do not require enterprise AD integration. Accounts require both a username and an email.
       *
       * @param request CreateUsersRequest
       * @return CreateUsersResponse
       */
      Models::CreateUsersResponse createUsers(const Models::CreateUsersRequest &request);

      /**
       * @summary Delete a resource group.
       *
       * @param request DeleteResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteResourceGroupResponse
       */
      Models::DeleteResourceGroupResponse deleteResourceGroupWithOptions(const Models::DeleteResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete a resource group.
       *
       * @param request DeleteResourceGroupRequest
       * @return DeleteResourceGroupResponse
       */
      Models::DeleteResourceGroupResponse deleteResourceGroup(const Models::DeleteResourceGroupRequest &request);

      /**
       * @summary Detach a user from a user attribute.
       *
       * @param request DeleteUserPropertyValueRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteUserPropertyValueResponse
       */
      Models::DeleteUserPropertyValueResponse deleteUserPropertyValueWithOptions(const Models::DeleteUserPropertyValueRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Detach a user from a user attribute.
       *
       * @param request DeleteUserPropertyValueRequest
       * @return DeleteUserPropertyValueResponse
       */
      Models::DeleteUserPropertyValueResponse deleteUserPropertyValue(const Models::DeleteUserPropertyValueRequest &request);

      /**
       * @summary Query group members.
       *
       * @param request DescribeGroupUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGroupUserResponse
       */
      Models::DescribeGroupUserResponse describeGroupUserWithOptions(const Models::DescribeGroupUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query group members.
       *
       * @param request DescribeGroupUserRequest
       * @return DescribeGroupUserResponse
       */
      Models::DescribeGroupUserResponse describeGroupUser(const Models::DescribeGroupUserRequest &request);

      /**
       * @summary Query user groups.
       *
       * @param request DescribeGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGroupsResponse
       */
      Models::DescribeGroupsResponse describeGroupsWithOptions(const Models::DescribeGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query user groups.
       *
       * @param request DescribeGroupsRequest
       * @return DescribeGroupsResponse
       */
      Models::DescribeGroupsResponse describeGroups(const Models::DescribeGroupsRequest &request);

      /**
       * @summary Lists virtual MFA devices bound to directory accounts.
       *
       * @param request DescribeMfaDevicesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMfaDevicesResponse
       */
      Models::DescribeMfaDevicesResponse describeMfaDevicesWithOptions(const Models::DescribeMfaDevicesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists virtual MFA devices bound to directory accounts.
       *
       * @param request DescribeMfaDevicesRequest
       * @return DescribeMfaDevicesResponse
       */
      Models::DescribeMfaDevicesResponse describeMfaDevices(const Models::DescribeMfaDevicesRequest &request);

      /**
       * @summary Find subordinate organizations.
       *
       * @param request DescribeOrgByLayerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeOrgByLayerResponse
       */
      Models::DescribeOrgByLayerResponse describeOrgByLayerWithOptions(const Models::DescribeOrgByLayerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Find subordinate organizations.
       *
       * @param request DescribeOrgByLayerRequest
       * @return DescribeOrgByLayerResponse
       */
      Models::DescribeOrgByLayerResponse describeOrgByLayer(const Models::DescribeOrgByLayerRequest &request);

      /**
       * @summary Queries a list of organizations.
       *
       * @description Organizations are arranged in a tree-like structure. The root organization ID is org-aliyun-wy-org-id.
       *
       * @param tmpReq DescribeOrgsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeOrgsResponse
       */
      Models::DescribeOrgsResponse describeOrgsWithOptions(const Models::DescribeOrgsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of organizations.
       *
       * @description Organizations are arranged in a tree-like structure. The root organization ID is org-aliyun-wy-org-id.
       *
       * @param request DescribeOrgsRequest
       * @return DescribeOrgsResponse
       */
      Models::DescribeOrgsResponse describeOrgs(const Models::DescribeOrgsRequest &request);

      /**
       * @summary Queries resource groups.
       *
       * @param request DescribeResourceGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeResourceGroupsResponse
       */
      Models::DescribeResourceGroupsResponse describeResourceGroupsWithOptions(const Models::DescribeResourceGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries resource groups.
       *
       * @param request DescribeResourceGroupsRequest
       * @return DescribeResourceGroupsResponse
       */
      Models::DescribeResourceGroupsResponse describeResourceGroups(const Models::DescribeResourceGroupsRequest &request);

      /**
       * @summary Query user basic information
       *
       * @param request DescribeUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUserResponse
       */
      Models::DescribeUserResponse describeUserWithOptions(const Models::DescribeUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query user basic information
       *
       * @param request DescribeUserRequest
       * @return DescribeUserResponse
       */
      Models::DescribeUserResponse describeUser(const Models::DescribeUserRequest &request);

      /**
       * @summary Retrieves directory account information, including the username, email address, and display name.
       *
       * @param tmpReq DescribeUsersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUsersResponse
       */
      Models::DescribeUsersResponse describeUsersWithOptions(const Models::DescribeUsersRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves directory account information, including the username, email address, and display name.
       *
       * @param request DescribeUsersRequest
       * @return DescribeUsersResponse
       */
      Models::DescribeUsersResponse describeUsers(const Models::DescribeUsersRequest &request);

      /**
       * @summary Filter account information by user attribute.
       *
       * @param tmpReq FilterUsersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return FilterUsersResponse
       */
      Models::FilterUsersResponse filterUsersWithOptions(const Models::FilterUsersRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Filter account information by user attribute.
       *
       * @param request FilterUsersRequest
       * @return FilterUsersResponse
       */
      Models::FilterUsersResponse filterUsers(const Models::FilterUsersRequest &request);

      /**
       * @summary Obtains the information about the current logon administrator based on the authorization code.
       *
       * @param request GetManagerInfoByAuthCodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetManagerInfoByAuthCodeResponse
       */
      Models::GetManagerInfoByAuthCodeResponse getManagerInfoByAuthCodeWithOptions(const Models::GetManagerInfoByAuthCodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the information about the current logon administrator based on the authorization code.
       *
       * @param request GetManagerInfoByAuthCodeRequest
       * @return GetManagerInfoByAuthCodeResponse
       */
      Models::GetManagerInfoByAuthCodeResponse getManagerInfoByAuthCode(const Models::GetManagerInfoByAuthCodeRequest &request);

      /**
       * @summary Initialize the organization ID.
       *
       * @param request InitTenantAliasRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return InitTenantAliasResponse
       */
      Models::InitTenantAliasResponse initTenantAliasWithOptions(const Models::InitTenantAliasRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Initialize the organization ID.
       *
       * @param request InitTenantAliasRequest
       * @return InitTenantAliasResponse
       */
      Models::InitTenantAliasResponse initTenantAlias(const Models::InitTenantAliasRequest &request);

      /**
       * @summary Query the list of existing user attributes under the current account.
       *
       * @param request ListPropertyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPropertyResponse
       */
      Models::ListPropertyResponse listPropertyWithOptions(const Models::ListPropertyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the list of existing user attributes under the current account.
       *
       * @param request ListPropertyRequest
       * @return ListPropertyResponse
       */
      Models::ListPropertyResponse listProperty(const Models::ListPropertyRequest &request);

      /**
       * @summary Query the list of attribute values for a specific user attribute.
       *
       * @param request ListPropertyValueRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPropertyValueResponse
       */
      Models::ListPropertyValueResponse listPropertyValueWithOptions(const Models::ListPropertyValueRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the list of attribute values for a specific user attribute.
       *
       * @param request ListPropertyValueRequest
       * @return ListPropertyValueResponse
       */
      Models::ListPropertyValueResponse listPropertyValue(const Models::ListPropertyValueRequest &request);

      /**
       * @summary Lock the virtual MFA device attached to a convenience account.
       *
       * @description After locking, the status of the virtual MFA device changes to LOCKED. When the associated convenience account attempts to log on to a WUYING Terminal through an office network with MFA enabled, authentication will fail due to the locked MFA device, preventing successful logon. You can invoke [UnlockMfaDevice](~~UnlockMfaDevice~~) to unlock it.
       *
       * @param request LockMfaDeviceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return LockMfaDeviceResponse
       */
      Models::LockMfaDeviceResponse lockMfaDeviceWithOptions(const Models::LockMfaDeviceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lock the virtual MFA device attached to a convenience account.
       *
       * @description After locking, the status of the virtual MFA device changes to LOCKED. When the associated convenience account attempts to log on to a WUYING Terminal through an office network with MFA enabled, authentication will fail due to the locked MFA device, preventing successful logon. You can invoke [UnlockMfaDevice](~~UnlockMfaDevice~~) to unlock it.
       *
       * @param request LockMfaDeviceRequest
       * @return LockMfaDeviceResponse
       */
      Models::LockMfaDeviceResponse lockMfaDevice(const Models::LockMfaDeviceRequest &request);

      /**
       * @summary Locks one or more convenience accounts. Locked convenience accounts cannot be used to sign in to Wuying clients.
       *
       * @description For security purposes, you can lock convenience accounts. Locked convenience users cannot sign in to Wuying clients, and therefore cannot access any Wuying cloud resources.
       * > Call the [DescribeUsers](https://help.aliyun.com/document_detail/283609.html) operation to check the lock status of convenience accounts. The `Status` value in the response is 0 for unlocked accounts and 9 for locked accounts.
       *
       * @param request LockUsersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return LockUsersResponse
       */
      Models::LockUsersResponse lockUsersWithOptions(const Models::LockUsersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Locks one or more convenience accounts. Locked convenience accounts cannot be used to sign in to Wuying clients.
       *
       * @description For security purposes, you can lock convenience accounts. Locked convenience users cannot sign in to Wuying clients, and therefore cannot access any Wuying cloud resources.
       * > Call the [DescribeUsers](https://help.aliyun.com/document_detail/283609.html) operation to check the lock status of convenience accounts. The `Status` value in the response is 0 for unlocked accounts and 9 for locked accounts.
       *
       * @param request LockUsersRequest
       * @return LockUsersResponse
       */
      Models::LockUsersResponse lockUsers(const Models::LockUsersRequest &request);

      /**
       * @summary Modify the name and description of a group.
       *
       * @param request ModifyGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyGroupResponse
       */
      Models::ModifyGroupResponse modifyGroupWithOptions(const Models::ModifyGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modify the name and description of a group.
       *
       * @param request ModifyGroupRequest
       * @return ModifyGroupResponse
       */
      Models::ModifyGroupResponse modifyGroup(const Models::ModifyGroupRequest &request);

      /**
       * @summary Modify an organization.
       *
       * @param request ModifyOrgRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyOrgResponse
       */
      Models::ModifyOrgResponse modifyOrgWithOptions(const Models::ModifyOrgRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modify an organization.
       *
       * @param request ModifyOrgRequest
       * @return ModifyOrgResponse
       */
      Models::ModifyOrgResponse modifyOrg(const Models::ModifyOrgRequest &request);

      /**
       * @summary Modify the contact information of a convenience account.
       *
       * @param request ModifyUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyUserResponse
       */
      Models::ModifyUserResponse modifyUserWithOptions(const Models::ModifyUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modify the contact information of a convenience account.
       *
       * @param request ModifyUserRequest
       * @return ModifyUserResponse
       */
      Models::ModifyUserResponse modifyUser(const Models::ModifyUserRequest &request);

      /**
       * @summary Shift organization.
       *
       * @param request MoveOrgRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MoveOrgResponse
       */
      Models::MoveOrgResponse moveOrgWithOptions(const Models::MoveOrgRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Shift organization.
       *
       * @param request MoveOrgRequest
       * @return MoveOrgResponse
       */
      Models::MoveOrgResponse moveOrg(const Models::MoveOrgRequest &request);

      /**
       * @summary Shift users to the target organization architecture.
       *
       * @param request MoveUserOrgRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MoveUserOrgResponse
       */
      Models::MoveUserOrgResponse moveUserOrgWithOptions(const Models::MoveUserOrgRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Shift users to the target organization architecture.
       *
       * @param request MoveUserOrgRequest
       * @return MoveUserOrgResponse
       */
      Models::MoveUserOrgResponse moveUserOrg(const Models::MoveUserOrgRequest &request);

      /**
       * @summary Query the user synchronization status.
       *
       * @param request QuerySyncStatusByAliUidRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QuerySyncStatusByAliUidResponse
       */
      Models::QuerySyncStatusByAliUidResponse querySyncStatusByAliUidWithOptions(const Models::QuerySyncStatusByAliUidRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query the user synchronization status.
       *
       * @param request QuerySyncStatusByAliUidRequest
       * @return QuerySyncStatusByAliUidResponse
       */
      Models::QuerySyncStatusByAliUidResponse querySyncStatusByAliUid(const Models::QuerySyncStatusByAliUidRequest &request);

      /**
       * @summary Delete a group. Supports batch operations.
       *
       * @param request RemoveGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveGroupResponse
       */
      Models::RemoveGroupResponse removeGroupWithOptions(const Models::RemoveGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete a group. Supports batch operations.
       *
       * @param request RemoveGroupRequest
       * @return RemoveGroupResponse
       */
      Models::RemoveGroupResponse removeGroup(const Models::RemoveGroupRequest &request);

      /**
       * @summary Delete the virtual MFA device attached to a convenience account.
       *
       * @description Deleting the virtual MFA device attached to a convenience account unbinds the MFA device, which is equivalent to resetting or disabling it. The corresponding convenience account must reattach a new virtual MFA device when logging on to a WUYING Terminal.
       *
       * @param request RemoveMfaDeviceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveMfaDeviceResponse
       */
      Models::RemoveMfaDeviceResponse removeMfaDeviceWithOptions(const Models::RemoveMfaDeviceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete the virtual MFA device attached to a convenience account.
       *
       * @description Deleting the virtual MFA device attached to a convenience account unbinds the MFA device, which is equivalent to resetting or disabling it. The corresponding convenience account must reattach a new virtual MFA device when logging on to a WUYING Terminal.
       *
       * @param request RemoveMfaDeviceRequest
       * @return RemoveMfaDeviceResponse
       */
      Models::RemoveMfaDeviceResponse removeMfaDevice(const Models::RemoveMfaDeviceRequest &request);

      /**
       * @summary Remove an organization.
       *
       * @param request RemoveOrgRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveOrgResponse
       */
      Models::RemoveOrgResponse removeOrgWithOptions(const Models::RemoveOrgRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Remove an organization.
       *
       * @param request RemoveOrgRequest
       * @return RemoveOrgResponse
       */
      Models::RemoveOrgResponse removeOrg(const Models::RemoveOrgRequest &request);

      /**
       * @summary Delete a set of user attributes.
       *
       * @param request RemovePropertyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemovePropertyResponse
       */
      Models::RemovePropertyResponse removePropertyWithOptions(const Models::RemovePropertyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete a set of user attributes.
       *
       * @param request RemovePropertyRequest
       * @return RemovePropertyResponse
       */
      Models::RemovePropertyResponse removeProperty(const Models::RemovePropertyRequest &request);

      /**
       * @summary Delete one or more convenience accounts.
       *
       * @param request RemoveUsersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveUsersResponse
       */
      Models::RemoveUsersResponse removeUsersWithOptions(const Models::RemoveUsersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete one or more convenience accounts.
       *
       * @param request RemoveUsersRequest
       * @return RemoveUsersResponse
       */
      Models::RemoveUsersResponse removeUsers(const Models::RemoveUsersRequest &request);

      /**
       * @summary Reset the password of a convenience account, including generating a password reset token and sending a password reset email to the mailbox of the convenience account.
       *
       * @param request ResetUserPasswordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetUserPasswordResponse
       */
      Models::ResetUserPasswordResponse resetUserPasswordWithOptions(const Models::ResetUserPasswordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Reset the password of a convenience account, including generating a password reset token and sending a password reset email to the mailbox of the convenience account.
       *
       * @param request ResetUserPasswordRequest
       * @return ResetUserPasswordResponse
       */
      Models::ResetUserPasswordResponse resetUserPassword(const Models::ResetUserPasswordRequest &request);

      /**
       * @summary Associate a user attribute with a specific user.
       *
       * @param request SetUserPropertyValueRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetUserPropertyValueResponse
       */
      Models::SetUserPropertyValueResponse setUserPropertyValueWithOptions(const Models::SetUserPropertyValueRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Associate a user attribute with a specific user.
       *
       * @param request SetUserPropertyValueRequest
       * @return SetUserPropertyValueResponse
       */
      Models::SetUserPropertyValueResponse setUserPropertyValue(const Models::SetUserPropertyValueRequest &request);

      /**
       * @summary Synchronize all education information.
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return SyncAllEduInfoResponse
       */
      Models::SyncAllEduInfoResponse syncAllEduInfoWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Synchronize all education information.
       *
       * @return SyncAllEduInfoResponse
       */
      Models::SyncAllEduInfoResponse syncAllEduInfo();

      /**
       * @summary 将资源转移到资源组中
       *
       * @param request TransferResourcesIntoGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TransferResourcesIntoGroupResponse
       */
      Models::TransferResourcesIntoGroupResponse transferResourcesIntoGroupWithOptions(const Models::TransferResourcesIntoGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 将资源转移到资源组中
       *
       * @param request TransferResourcesIntoGroupRequest
       * @return TransferResourcesIntoGroupResponse
       */
      Models::TransferResourcesIntoGroupResponse transferResourcesIntoGroup(const Models::TransferResourcesIntoGroupRequest &request);

      /**
       * @summary 将资源从资源组中转出
       *
       * @param request TransferResourcesOutofGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TransferResourcesOutofGroupResponse
       */
      Models::TransferResourcesOutofGroupResponse transferResourcesOutofGroupWithOptions(const Models::TransferResourcesOutofGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 将资源从资源组中转出
       *
       * @param request TransferResourcesOutofGroupRequest
       * @return TransferResourcesOutofGroupResponse
       */
      Models::TransferResourcesOutofGroupResponse transferResourcesOutofGroup(const Models::TransferResourcesOutofGroupRequest &request);

      /**
       * @summary Unlock the virtual MFA device attached to a convenience account.
       *
       * @param request UnlockMfaDeviceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnlockMfaDeviceResponse
       */
      Models::UnlockMfaDeviceResponse unlockMfaDeviceWithOptions(const Models::UnlockMfaDeviceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unlock the virtual MFA device attached to a convenience account.
       *
       * @param request UnlockMfaDeviceRequest
       * @return UnlockMfaDeviceResponse
       */
      Models::UnlockMfaDeviceResponse unlockMfaDevice(const Models::UnlockMfaDeviceRequest &request);

      /**
       * @summary Unlock one or more convenience accounts. After being unlocked, the convenience accounts can log on to WUYING Terminal.
       *
       * @description Locked convenience accounts cannot log on to WUYING Terminal and therefore cannot access any WUYING cloud resources. To allow a convenience account to log on to WUYING Terminal, you must first unlock it.  
       * > You can invoke [DescribeUsers](https://help.aliyun.com/document_detail/283609.html) to query convenience account information. If the value of `Status` in the returned data is 0, the convenience account is not locked. If the value of `Status` is 9, the convenience account is locked.
       *
       * @param request UnlockUsersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnlockUsersResponse
       */
      Models::UnlockUsersResponse unlockUsersWithOptions(const Models::UnlockUsersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unlock one or more convenience accounts. After being unlocked, the convenience accounts can log on to WUYING Terminal.
       *
       * @description Locked convenience accounts cannot log on to WUYING Terminal and therefore cannot access any WUYING cloud resources. To allow a convenience account to log on to WUYING Terminal, you must first unlock it.  
       * > You can invoke [DescribeUsers](https://help.aliyun.com/document_detail/283609.html) to query convenience account information. If the value of `Status` in the returned data is 0, the convenience account is not locked. If the value of `Status` is 9, the convenience account is locked.
       *
       * @param request UnlockUsersRequest
       * @return UnlockUsersResponse
       */
      Models::UnlockUsersResponse unlockUsers(const Models::UnlockUsersRequest &request);

      /**
       * @summary Modify User Attributes.
       *
       * @param request UpdatePropertyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePropertyResponse
       */
      Models::UpdatePropertyResponse updatePropertyWithOptions(const Models::UpdatePropertyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modify User Attributes.
       *
       * @param request UpdatePropertyRequest
       * @return UpdatePropertyResponse
       */
      Models::UpdatePropertyResponse updateProperty(const Models::UpdatePropertyRequest &request);

      /**
       * @summary Add users to a group in batch.
       *
       * @param request UserBatchJoinGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UserBatchJoinGroupResponse
       */
      Models::UserBatchJoinGroupResponse userBatchJoinGroupWithOptions(const Models::UserBatchJoinGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Add users to a group in batch.
       *
       * @param request UserBatchJoinGroupRequest
       * @return UserBatchJoinGroupResponse
       */
      Models::UserBatchJoinGroupResponse userBatchJoinGroup(const Models::UserBatchJoinGroupRequest &request);

      /**
       * @summary Remove users from a group in batch.
       *
       * @param request UserBatchQuitGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UserBatchQuitGroupResponse
       */
      Models::UserBatchQuitGroupResponse userBatchQuitGroupWithOptions(const Models::UserBatchQuitGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Remove users from a group in batch.
       *
       * @param request UserBatchQuitGroupRequest
       * @return UserBatchQuitGroupResponse
       */
      Models::UserBatchQuitGroupResponse userBatchQuitGroup(const Models::UserBatchQuitGroupRequest &request);
  };
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
