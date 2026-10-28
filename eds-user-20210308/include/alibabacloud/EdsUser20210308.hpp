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
       * @summary Grants or revokes local administrator permissions on a cloud desktop for a convenience account.
       *
       * @description A convenience account with local administrator permissions can install software or modify specific system settings on the cloud desktop.
       *
       * @param request BatchSetDesktopManagerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchSetDesktopManagerResponse
       */
      Models::BatchSetDesktopManagerResponse batchSetDesktopManagerWithOptions(const Models::BatchSetDesktopManagerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Grants or revokes local administrator permissions on a cloud desktop for a convenience account.
       *
       * @description A convenience account with local administrator permissions can install software or modify specific system settings on the cloud desktop.
       *
       * @param request BatchSetDesktopManagerRequest
       * @return BatchSetDesktopManagerResponse
       */
      Models::BatchSetDesktopManagerResponse batchSetDesktopManager(const Models::BatchSetDesktopManagerRequest &request);

      /**
       * @summary Modifies the logon password of a user in administrator activation mode.
       *
       * @param request ChangeUserPasswordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeUserPasswordResponse
       */
      Models::ChangeUserPasswordResponse changeUserPasswordWithOptions(const Models::ChangeUserPasswordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the logon password of a user in administrator activation mode.
       *
       * @param request ChangeUserPasswordRequest
       * @return ChangeUserPasswordResponse
       */
      Models::ChangeUserPasswordResponse changeUserPassword(const Models::ChangeUserPasswordRequest &request);

      /**
       * @summary Queries the number of convenience accounts associated with a specified custom property.
       *
       * @param request CheckUsedPropertyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckUsedPropertyResponse
       */
      Models::CheckUsedPropertyResponse checkUsedPropertyWithOptions(const Models::CheckUsedPropertyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of convenience accounts associated with a specified custom property.
       *
       * @param request CheckUsedPropertyRequest
       * @return CheckUsedPropertyResponse
       */
      Models::CheckUsedPropertyResponse checkUsedProperty(const Models::CheckUsedPropertyRequest &request);

      /**
       * @summary Queries the number of convenience accounts associated with a specified custom property value.
       *
       * @param request CheckUsedPropertyValueRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckUsedPropertyValueResponse
       */
      Models::CheckUsedPropertyValueResponse checkUsedPropertyValueWithOptions(const Models::CheckUsedPropertyValueRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of convenience accounts associated with a specified custom property value.
       *
       * @param request CheckUsedPropertyValueRequest
       * @return CheckUsedPropertyValueResponse
       */
      Models::CheckUsedPropertyValueResponse checkUsedPropertyValue(const Models::CheckUsedPropertyValueRequest &request);

      /**
       * @summary Creates a user group.
       *
       * @param request CreateGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateGroupResponse
       */
      Models::CreateGroupResponse createGroupWithOptions(const Models::CreateGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a user group.
       *
       * @param request CreateGroupRequest
       * @return CreateGroupResponse
       */
      Models::CreateGroupResponse createGroup(const Models::CreateGroupRequest &request);

      /**
       * @summary Creates an organization.
       *
       * @param request CreateOrgRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateOrgResponse
       */
      Models::CreateOrgResponse createOrgWithOptions(const Models::CreateOrgRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an organization.
       *
       * @param request CreateOrgRequest
       * @return CreateOrgResponse
       */
      Models::CreateOrgResponse createOrg(const Models::CreateOrgRequest &request);

      /**
       * @summary Creates a user property.
       *
       * @description - You can create up to 10 different properties under an Alibaba Cloud account. Each property includes a property key (PropertyKey) and multiple property values (PropertyValue).
       * - You can add up to 50 different property values to a single property.
       *
       * @param request CreatePropertyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePropertyResponse
       */
      Models::CreatePropertyResponse createPropertyWithOptions(const Models::CreatePropertyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a user property.
       *
       * @description - You can create up to 10 different properties under an Alibaba Cloud account. Each property includes a property key (PropertyKey) and multiple property values (PropertyValue).
       * - You can add up to 50 different property values to a single property.
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
       * @summary Creates a convenience account for an end user.
       *
       * @description <props="china">A convenience account is an account system dedicated to Wuying Workspace, which is suitable for simple scenarios where you do not want to connect to an enterprise Active Directory (AD). The information of a convenience account includes the username, email address, and phone number. The username is required, and you must specify at least one of the email address and phone number.
       * <props="intl">A convenience account is an account system dedicated to Wuying Workspace, which is suitable for simple scenarios where you do not want to connect to an enterprise Active Directory (AD). The information of a convenience account includes the username and email address, both of which are required.
       *
       * @param request CreateUsersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateUsersResponse
       */
      Models::CreateUsersResponse createUsersWithOptions(const Models::CreateUsersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a convenience account for an end user.
       *
       * @description <props="china">A convenience account is an account system dedicated to Wuying Workspace, which is suitable for simple scenarios where you do not want to connect to an enterprise Active Directory (AD). The information of a convenience account includes the username, email address, and phone number. The username is required, and you must specify at least one of the email address and phone number.
       * <props="intl">A convenience account is an account system dedicated to Wuying Workspace, which is suitable for simple scenarios where you do not want to connect to an enterprise Active Directory (AD). The information of a convenience account includes the username and email address, both of which are required.
       *
       * @param request CreateUsersRequest
       * @return CreateUsersResponse
       */
      Models::CreateUsersResponse createUsers(const Models::CreateUsersRequest &request);

      /**
       * @summary Deletes a resource group.
       *
       * @param request DeleteResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteResourceGroupResponse
       */
      Models::DeleteResourceGroupResponse deleteResourceGroupWithOptions(const Models::DeleteResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a resource group.
       *
       * @param request DeleteResourceGroupRequest
       * @return DeleteResourceGroupResponse
       */
      Models::DeleteResourceGroupResponse deleteResourceGroup(const Models::DeleteResourceGroupRequest &request);

      /**
       * @summary Dissociates a user from a user property.
       *
       * @param request DeleteUserPropertyValueRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteUserPropertyValueResponse
       */
      Models::DeleteUserPropertyValueResponse deleteUserPropertyValueWithOptions(const Models::DeleteUserPropertyValueRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Dissociates a user from a user property.
       *
       * @param request DeleteUserPropertyValueRequest
       * @return DeleteUserPropertyValueResponse
       */
      Models::DeleteUserPropertyValueResponse deleteUserPropertyValue(const Models::DeleteUserPropertyValueRequest &request);

      /**
       * @summary Queries the members of a user group.
       *
       * @param request DescribeGroupUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGroupUserResponse
       */
      Models::DescribeGroupUserResponse describeGroupUserWithOptions(const Models::DescribeGroupUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the members of a user group.
       *
       * @param request DescribeGroupUserRequest
       * @return DescribeGroupUserResponse
       */
      Models::DescribeGroupUserResponse describeGroupUser(const Models::DescribeGroupUserRequest &request);

      /**
       * @summary Queries user groups.
       *
       * @param request DescribeGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGroupsResponse
       */
      Models::DescribeGroupsResponse describeGroupsWithOptions(const Models::DescribeGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries user groups.
       *
       * @param request DescribeGroupsRequest
       * @return DescribeGroupsResponse
       */
      Models::DescribeGroupsResponse describeGroups(const Models::DescribeGroupsRequest &request);

      /**
       * @summary Queries the virtual MFA devices bound to convenience accounts.
       *
       * @param request DescribeMfaDevicesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMfaDevicesResponse
       */
      Models::DescribeMfaDevicesResponse describeMfaDevicesWithOptions(const Models::DescribeMfaDevicesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the virtual MFA devices bound to convenience accounts.
       *
       * @param request DescribeMfaDevicesRequest
       * @return DescribeMfaDevicesResponse
       */
      Models::DescribeMfaDevicesResponse describeMfaDevices(const Models::DescribeMfaDevicesRequest &request);

      /**
       * @summary Queries subordinate organizations.
       *
       * @param request DescribeOrgByLayerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeOrgByLayerResponse
       */
      Models::DescribeOrgByLayerResponse describeOrgByLayerWithOptions(const Models::DescribeOrgByLayerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries subordinate organizations.
       *
       * @param request DescribeOrgByLayerRequest
       * @return DescribeOrgByLayerResponse
       */
      Models::DescribeOrgByLayerResponse describeOrgByLayer(const Models::DescribeOrgByLayerRequest &request);

      /**
       * @summary Queries the list of organizations.
       *
       * @description Organizations use a tree structure. The root organization ID is org-aliyun-wy-org-id.
       *
       * @param tmpReq DescribeOrgsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeOrgsResponse
       */
      Models::DescribeOrgsResponse describeOrgsWithOptions(const Models::DescribeOrgsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of organizations.
       *
       * @description Organizations use a tree structure. The root organization ID is org-aliyun-wy-org-id.
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
       * @summary Queries the basic information of a user.
       *
       * @param request DescribeUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUserResponse
       */
      Models::DescribeUserResponse describeUserWithOptions(const Models::DescribeUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the basic information of a user.
       *
       * @param request DescribeUserRequest
       * @return DescribeUserResponse
       */
      Models::DescribeUserResponse describeUser(const Models::DescribeUserRequest &request);

      /**
       * @summary Queries the information of convenience users, such as usernames, email addresses, and remarks.
       *
       * @param tmpReq DescribeUsersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUsersResponse
       */
      Models::DescribeUsersResponse describeUsersWithOptions(const Models::DescribeUsersRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information of convenience users, such as usernames, email addresses, and remarks.
       *
       * @param request DescribeUsersRequest
       * @return DescribeUsersResponse
       */
      Models::DescribeUsersResponse describeUsers(const Models::DescribeUsersRequest &request);

      /**
       * @summary Queries convenience account information by filtering based on user property.
       *
       * @param tmpReq FilterUsersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return FilterUsersResponse
       */
      Models::FilterUsersResponse filterUsersWithOptions(const Models::FilterUsersRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries convenience account information by filtering based on user property.
       *
       * @param request FilterUsersRequest
       * @return FilterUsersResponse
       */
      Models::FilterUsersResponse filterUsers(const Models::FilterUsersRequest &request);

      /**
       * @summary Retrieves the number of Active Directory (AD) users.
       *
       * @description For security purposes, you can lock convenience accounts. Locked convenience users cannot log on to Wuying terminals and therefore cannot access any Wuying cloud resources.
       * > You can call [DescribeUsers](https://help.aliyun.com/document_detail/283609.html) to query convenience account information. If the `Status` value in the returned data is 0, the convenience account is not locked. If the `Status` value is 9, the convenience account is locked.
       *
       * @param request GetAdUsersCountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAdUsersCountResponse
       */
      Models::GetAdUsersCountResponse getAdUsersCountWithOptions(const Models::GetAdUsersCountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the number of Active Directory (AD) users.
       *
       * @description For security purposes, you can lock convenience accounts. Locked convenience users cannot log on to Wuying terminals and therefore cannot access any Wuying cloud resources.
       * > You can call [DescribeUsers](https://help.aliyun.com/document_detail/283609.html) to query convenience account information. If the `Status` value in the returned data is 0, the convenience account is not locked. If the `Status` value is 9, the convenience account is locked.
       *
       * @param request GetAdUsersCountRequest
       * @return GetAdUsersCountResponse
       */
      Models::GetAdUsersCountResponse getAdUsersCount(const Models::GetAdUsersCountRequest &request);

      /**
       * @summary Retrieves the information about the currently logged-on administrator based on the authorization code.
       *
       * @param request GetManagerInfoByAuthCodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetManagerInfoByAuthCodeResponse
       */
      Models::GetManagerInfoByAuthCodeResponse getManagerInfoByAuthCodeWithOptions(const Models::GetManagerInfoByAuthCodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the information about the currently logged-on administrator based on the authorization code.
       *
       * @param request GetManagerInfoByAuthCodeRequest
       * @return GetManagerInfoByAuthCodeResponse
       */
      Models::GetManagerInfoByAuthCodeResponse getManagerInfoByAuthCode(const Models::GetManagerInfoByAuthCodeRequest &request);

      /**
       * @summary Retrieves the total number of Wuying convenience users.
       *
       * @description For security purposes, you can lock convenience accounts. Locked convenience users cannot log on to Wuying terminals and therefore cannot access any Wuying cloud resources.
       * > You can call [DescribeUsers](https://help.aliyun.com/document_detail/283609.html) to query convenience account information. If the `Status` value in the returned data is 0, the convenience account is not locked. If the `Status` value is 9, the convenience account is locked.
       *
       * @param request GetUsersCountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUsersCountResponse
       */
      Models::GetUsersCountResponse getUsersCountWithOptions(const Models::GetUsersCountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the total number of Wuying convenience users.
       *
       * @description For security purposes, you can lock convenience accounts. Locked convenience users cannot log on to Wuying terminals and therefore cannot access any Wuying cloud resources.
       * > You can call [DescribeUsers](https://help.aliyun.com/document_detail/283609.html) to query convenience account information. If the `Status` value in the returned data is 0, the convenience account is not locked. If the `Status` value is 9, the convenience account is locked.
       *
       * @param request GetUsersCountRequest
       * @return GetUsersCountResponse
       */
      Models::GetUsersCountResponse getUsersCount(const Models::GetUsersCountRequest &request);

      /**
       * @summary Initializes the organization ID.
       *
       * @param request InitTenantAliasRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return InitTenantAliasResponse
       */
      Models::InitTenantAliasResponse initTenantAliasWithOptions(const Models::InitTenantAliasRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Initializes the organization ID.
       *
       * @param request InitTenantAliasRequest
       * @return InitTenantAliasResponse
       */
      Models::InitTenantAliasResponse initTenantAlias(const Models::InitTenantAliasRequest &request);

      /**
       * @summary Queries the list of user properties under the current account.
       *
       * @param request ListPropertyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPropertyResponse
       */
      Models::ListPropertyResponse listPropertyWithOptions(const Models::ListPropertyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of user properties under the current account.
       *
       * @param request ListPropertyRequest
       * @return ListPropertyResponse
       */
      Models::ListPropertyResponse listProperty(const Models::ListPropertyRequest &request);

      /**
       * @summary Queries the list of property values for a specific user property.
       *
       * @param request ListPropertyValueRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPropertyValueResponse
       */
      Models::ListPropertyValueResponse listPropertyValueWithOptions(const Models::ListPropertyValueRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of property values for a specific user property.
       *
       * @param request ListPropertyValueRequest
       * @return ListPropertyValueResponse
       */
      Models::ListPropertyValueResponse listPropertyValue(const Models::ListPropertyValueRequest &request);

      /**
       * @summary Locks the virtual MFA device bound to a convenience account.
       *
       * @description After the device is locked, the status of the virtual MFA device changes to LOCKED. When the corresponding convenience account logs on to a Wuying terminal through an office network with MFA enabled, the logon fails because the MFA device cannot be authenticated. You can call [UnlockMfaDevice](~~UnlockMfaDevice~~) to unlock the device.
       *
       * @param request LockMfaDeviceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return LockMfaDeviceResponse
       */
      Models::LockMfaDeviceResponse lockMfaDeviceWithOptions(const Models::LockMfaDeviceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Locks the virtual MFA device bound to a convenience account.
       *
       * @description After the device is locked, the status of the virtual MFA device changes to LOCKED. When the corresponding convenience account logs on to a Wuying terminal through an office network with MFA enabled, the logon fails because the MFA device cannot be authenticated. You can call [UnlockMfaDevice](~~UnlockMfaDevice~~) to unlock the device.
       *
       * @param request LockMfaDeviceRequest
       * @return LockMfaDeviceResponse
       */
      Models::LockMfaDeviceResponse lockMfaDevice(const Models::LockMfaDeviceRequest &request);

      /**
       * @summary Locks one or more convenience accounts. Locked convenience accounts cannot log on to cloud desktop terminals.
       *
       * @description For security purposes, you can lock convenience accounts. Locked convenience users cannot log on to cloud desktop terminals and therefore cannot access any cloud desktop resources.
       * > You can call [DescribeUsers](https://help.aliyun.com/document_detail/283609.html) to query convenience account information. If the `Status` value in the response is 0, the convenience account is not locked. If the `Status` value is 9, the convenience account is locked.
       *
       * @param request LockUsersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return LockUsersResponse
       */
      Models::LockUsersResponse lockUsersWithOptions(const Models::LockUsersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Locks one or more convenience accounts. Locked convenience accounts cannot log on to cloud desktop terminals.
       *
       * @description For security purposes, you can lock convenience accounts. Locked convenience users cannot log on to cloud desktop terminals and therefore cannot access any cloud desktop resources.
       * > You can call [DescribeUsers](https://help.aliyun.com/document_detail/283609.html) to query convenience account information. If the `Status` value in the response is 0, the convenience account is not locked. If the `Status` value is 9, the convenience account is locked.
       *
       * @param request LockUsersRequest
       * @return LockUsersResponse
       */
      Models::LockUsersResponse lockUsers(const Models::LockUsersRequest &request);

      /**
       * @summary Modifies the name and description of a user group.
       *
       * @param request ModifyGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyGroupResponse
       */
      Models::ModifyGroupResponse modifyGroupWithOptions(const Models::ModifyGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the name and description of a user group.
       *
       * @param request ModifyGroupRequest
       * @return ModifyGroupResponse
       */
      Models::ModifyGroupResponse modifyGroup(const Models::ModifyGroupRequest &request);

      /**
       * @summary Updates an organization.
       *
       * @param request ModifyOrgRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyOrgResponse
       */
      Models::ModifyOrgResponse modifyOrgWithOptions(const Models::ModifyOrgRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates an organization.
       *
       * @param request ModifyOrgRequest
       * @return ModifyOrgResponse
       */
      Models::ModifyOrgResponse modifyOrg(const Models::ModifyOrgRequest &request);

      /**
       * @summary Updates the contact information of a convenience account.
       *
       * @param request ModifyUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyUserResponse
       */
      Models::ModifyUserResponse modifyUserWithOptions(const Models::ModifyUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the contact information of a convenience account.
       *
       * @param request ModifyUserRequest
       * @return ModifyUserResponse
       */
      Models::ModifyUserResponse modifyUser(const Models::ModifyUserRequest &request);

      /**
       * @summary Moves an organization.
       *
       * @param request MoveOrgRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MoveOrgResponse
       */
      Models::MoveOrgResponse moveOrgWithOptions(const Models::MoveOrgRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Moves an organization.
       *
       * @param request MoveOrgRequest
       * @return MoveOrgResponse
       */
      Models::MoveOrgResponse moveOrg(const Models::MoveOrgRequest &request);

      /**
       * @summary Moves users to the target organizational structure.
       *
       * @param request MoveUserOrgRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MoveUserOrgResponse
       */
      Models::MoveUserOrgResponse moveUserOrgWithOptions(const Models::MoveUserOrgRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Moves users to the target organizational structure.
       *
       * @param request MoveUserOrgRequest
       * @return MoveUserOrgResponse
       */
      Models::MoveUserOrgResponse moveUserOrg(const Models::MoveUserOrgRequest &request);

      /**
       * @summary Queries the user synchronization status.
       *
       * @param request QuerySyncStatusByAliUidRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QuerySyncStatusByAliUidResponse
       */
      Models::QuerySyncStatusByAliUidResponse querySyncStatusByAliUidWithOptions(const Models::QuerySyncStatusByAliUidRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the user synchronization status.
       *
       * @param request QuerySyncStatusByAliUidRequest
       * @return QuerySyncStatusByAliUidResponse
       */
      Models::QuerySyncStatusByAliUidResponse querySyncStatusByAliUid(const Models::QuerySyncStatusByAliUidRequest &request);

      /**
       * @summary Deletes one or more user groups. Batch operations are supported.
       *
       * @param request RemoveGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveGroupResponse
       */
      Models::RemoveGroupResponse removeGroupWithOptions(const Models::RemoveGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes one or more user groups. Batch operations are supported.
       *
       * @param request RemoveGroupRequest
       * @return RemoveGroupResponse
       */
      Models::RemoveGroupResponse removeGroup(const Models::RemoveGroupRequest &request);

      /**
       * @summary Deletes the virtual MFA device bound to a convenience user.
       *
       * @description Deleting the virtual MFA device bound to a convenience user unbinds the MFA device, which is equivalent to resetting or disabling the MFA device. The convenience user must bind a new virtual MFA device when logging on to the Wuying terminal.
       *
       * @param request RemoveMfaDeviceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveMfaDeviceResponse
       */
      Models::RemoveMfaDeviceResponse removeMfaDeviceWithOptions(const Models::RemoveMfaDeviceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the virtual MFA device bound to a convenience user.
       *
       * @description Deleting the virtual MFA device bound to a convenience user unbinds the MFA device, which is equivalent to resetting or disabling the MFA device. The convenience user must bind a new virtual MFA device when logging on to the Wuying terminal.
       *
       * @param request RemoveMfaDeviceRequest
       * @return RemoveMfaDeviceResponse
       */
      Models::RemoveMfaDeviceResponse removeMfaDevice(const Models::RemoveMfaDeviceRequest &request);

      /**
       * @summary Removes an organization.
       *
       * @param request RemoveOrgRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveOrgResponse
       */
      Models::RemoveOrgResponse removeOrgWithOptions(const Models::RemoveOrgRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes an organization.
       *
       * @param request RemoveOrgRequest
       * @return RemoveOrgResponse
       */
      Models::RemoveOrgResponse removeOrg(const Models::RemoveOrgRequest &request);

      /**
       * @summary Deletes a set of user properties.
       *
       * @param request RemovePropertyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemovePropertyResponse
       */
      Models::RemovePropertyResponse removePropertyWithOptions(const Models::RemovePropertyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a set of user properties.
       *
       * @param request RemovePropertyRequest
       * @return RemovePropertyResponse
       */
      Models::RemovePropertyResponse removeProperty(const Models::RemovePropertyRequest &request);

      /**
       * @summary Deletes one or more convenience users.
       *
       * @param request RemoveUsersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveUsersResponse
       */
      Models::RemoveUsersResponse removeUsersWithOptions(const Models::RemoveUsersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes one or more convenience users.
       *
       * @param request RemoveUsersRequest
       * @return RemoveUsersResponse
       */
      Models::RemoveUsersResponse removeUsers(const Models::RemoveUsersRequest &request);

      /**
       * @summary Resets the password of a convenience user, including generating a password reset token and sending a password reset email to the email address of the convenience user.
       *
       * @param request ResetUserPasswordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetUserPasswordResponse
       */
      Models::ResetUserPasswordResponse resetUserPasswordWithOptions(const Models::ResetUserPasswordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resets the password of a convenience user, including generating a password reset token and sending a password reset email to the email address of the convenience user.
       *
       * @param request ResetUserPasswordRequest
       * @return ResetUserPasswordResponse
       */
      Models::ResetUserPasswordResponse resetUserPassword(const Models::ResetUserPasswordRequest &request);

      /**
       * @summary Associates a user property with a specified user.
       *
       * @param request SetUserPropertyValueRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetUserPropertyValueResponse
       */
      Models::SetUserPropertyValueResponse setUserPropertyValueWithOptions(const Models::SetUserPropertyValueRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Associates a user property with a specified user.
       *
       * @param request SetUserPropertyValueRequest
       * @return SetUserPropertyValueResponse
       */
      Models::SetUserPropertyValueResponse setUserPropertyValue(const Models::SetUserPropertyValueRequest &request);

      /**
       * @summary Synchronizes all education information.
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return SyncAllEduInfoResponse
       */
      Models::SyncAllEduInfoResponse syncAllEduInfoWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Synchronizes all education information.
       *
       * @return SyncAllEduInfoResponse
       */
      Models::SyncAllEduInfoResponse syncAllEduInfo();

      /**
       * @summary Transfers resources to a resource group.
       *
       * @param request TransferResourcesIntoGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TransferResourcesIntoGroupResponse
       */
      Models::TransferResourcesIntoGroupResponse transferResourcesIntoGroupWithOptions(const Models::TransferResourcesIntoGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Transfers resources to a resource group.
       *
       * @param request TransferResourcesIntoGroupRequest
       * @return TransferResourcesIntoGroupResponse
       */
      Models::TransferResourcesIntoGroupResponse transferResourcesIntoGroup(const Models::TransferResourcesIntoGroupRequest &request);

      /**
       * @summary Moves resources out of a resource group.
       *
       * @param request TransferResourcesOutofGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TransferResourcesOutofGroupResponse
       */
      Models::TransferResourcesOutofGroupResponse transferResourcesOutofGroupWithOptions(const Models::TransferResourcesOutofGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Moves resources out of a resource group.
       *
       * @param request TransferResourcesOutofGroupRequest
       * @return TransferResourcesOutofGroupResponse
       */
      Models::TransferResourcesOutofGroupResponse transferResourcesOutofGroup(const Models::TransferResourcesOutofGroupRequest &request);

      /**
       * @summary Unlocks the virtual MFA device bound to a convenience account.
       *
       * @param request UnlockMfaDeviceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnlockMfaDeviceResponse
       */
      Models::UnlockMfaDeviceResponse unlockMfaDeviceWithOptions(const Models::UnlockMfaDeviceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unlocks the virtual MFA device bound to a convenience account.
       *
       * @param request UnlockMfaDeviceRequest
       * @return UnlockMfaDeviceResponse
       */
      Models::UnlockMfaDeviceResponse unlockMfaDevice(const Models::UnlockMfaDeviceRequest &request);

      /**
       * @summary Unlocks one or more convenience users. Unlocked convenience users can log on to Wuying terminals.
       *
       * @description Locked convenience users cannot log on to Wuying terminals and therefore cannot access any Wuying cloud resources. To allow a convenience user to log on to a Wuying terminal, you must unlock the user first.
       * > You can call [DescribeUsers](https://help.aliyun.com/document_detail/283609.html) to query the information of convenience users. If the `Status` parameter in the response is 0, the convenience user is not locked. If the `Status` parameter is 9, the convenience user is locked.
       *
       * @param request UnlockUsersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnlockUsersResponse
       */
      Models::UnlockUsersResponse unlockUsersWithOptions(const Models::UnlockUsersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unlocks one or more convenience users. Unlocked convenience users can log on to Wuying terminals.
       *
       * @description Locked convenience users cannot log on to Wuying terminals and therefore cannot access any Wuying cloud resources. To allow a convenience user to log on to a Wuying terminal, you must unlock the user first.
       * > You can call [DescribeUsers](https://help.aliyun.com/document_detail/283609.html) to query the information of convenience users. If the `Status` parameter in the response is 0, the convenience user is not locked. If the `Status` parameter is 9, the convenience user is locked.
       *
       * @param request UnlockUsersRequest
       * @return UnlockUsersResponse
       */
      Models::UnlockUsersResponse unlockUsers(const Models::UnlockUsersRequest &request);

      /**
       * @summary Updates user properties.
       *
       * @param request UpdatePropertyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePropertyResponse
       */
      Models::UpdatePropertyResponse updatePropertyWithOptions(const Models::UpdatePropertyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates user properties.
       *
       * @param request UpdatePropertyRequest
       * @return UpdatePropertyResponse
       */
      Models::UpdatePropertyResponse updateProperty(const Models::UpdatePropertyRequest &request);

      /**
       * @summary Adds users to a user group in batches.
       *
       * @param request UserBatchJoinGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UserBatchJoinGroupResponse
       */
      Models::UserBatchJoinGroupResponse userBatchJoinGroupWithOptions(const Models::UserBatchJoinGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds users to a user group in batches.
       *
       * @param request UserBatchJoinGroupRequest
       * @return UserBatchJoinGroupResponse
       */
      Models::UserBatchJoinGroupResponse userBatchJoinGroup(const Models::UserBatchJoinGroupRequest &request);

      /**
       * @summary Removes multiple users from a user group.
       *
       * @param request UserBatchQuitGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UserBatchQuitGroupResponse
       */
      Models::UserBatchQuitGroupResponse userBatchQuitGroupWithOptions(const Models::UserBatchQuitGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes multiple users from a user group.
       *
       * @param request UserBatchQuitGroupRequest
       * @return UserBatchQuitGroupResponse
       */
      Models::UserBatchQuitGroupResponse userBatchQuitGroup(const Models::UserBatchQuitGroupRequest &request);
  };
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
