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
       * @summary 批量设置桌面管理员
       *
       * @param request BatchSetDesktopManagerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchSetDesktopManagerResponse
       */
      Models::BatchSetDesktopManagerResponse batchSetDesktopManagerWithOptions(const Models::BatchSetDesktopManagerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量设置桌面管理员
       *
       * @param request BatchSetDesktopManagerRequest
       * @return BatchSetDesktopManagerResponse
       */
      Models::BatchSetDesktopManagerResponse batchSetDesktopManager(const Models::BatchSetDesktopManagerRequest &request);

      /**
       * @summary 管理员修改用户密码
       *
       * @param request ChangeUserPasswordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeUserPasswordResponse
       */
      Models::ChangeUserPasswordResponse changeUserPasswordWithOptions(const Models::ChangeUserPasswordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 管理员修改用户密码
       *
       * @param request ChangeUserPasswordRequest
       * @return ChangeUserPasswordResponse
       */
      Models::ChangeUserPasswordResponse changeUserPassword(const Models::ChangeUserPasswordRequest &request);

      /**
       * @summary Queries whether a property is associated with one or more convenience users.
       *
       * @param request CheckUsedPropertyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckUsedPropertyResponse
       */
      Models::CheckUsedPropertyResponse checkUsedPropertyWithOptions(const Models::CheckUsedPropertyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries whether a property is associated with one or more convenience users.
       *
       * @param request CheckUsedPropertyRequest
       * @return CheckUsedPropertyResponse
       */
      Models::CheckUsedPropertyResponse checkUsedProperty(const Models::CheckUsedPropertyRequest &request);

      /**
       * @summary Queries the number of convenience accounts that are associated with the specified custom property value.
       *
       * @description Before you call the operation, you can call the [ListProperty](https://help.aliyun.com/document_detail/410890.html) operation to query the existing user properties and their IDs (PropertyId) and values (PropertyValueId).
       *
       * @param request CheckUsedPropertyValueRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckUsedPropertyValueResponse
       */
      Models::CheckUsedPropertyValueResponse checkUsedPropertyValueWithOptions(const Models::CheckUsedPropertyValueRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of convenience accounts that are associated with the specified custom property value.
       *
       * @description Before you call the operation, you can call the [ListProperty](https://help.aliyun.com/document_detail/410890.html) operation to query the existing user properties and their IDs (PropertyId) and values (PropertyValueId).
       *
       * @param request CheckUsedPropertyValueRequest
       * @return CheckUsedPropertyValueResponse
       */
      Models::CheckUsedPropertyValueResponse checkUsedPropertyValue(const Models::CheckUsedPropertyValueRequest &request);

      /**
       * @summary 创建角色.
       *
       * @param request CreateGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateGroupResponse
       */
      Models::CreateGroupResponse createGroupWithOptions(const Models::CreateGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建角色.
       *
       * @param request CreateGroupRequest
       * @return CreateGroupResponse
       */
      Models::CreateGroupResponse createGroup(const Models::CreateGroupRequest &request);

      /**
       * @summary 创建组织
       *
       * @param request CreateOrgRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateOrgResponse
       */
      Models::CreateOrgResponse createOrgWithOptions(const Models::CreateOrgRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建组织
       *
       * @param request CreateOrgRequest
       * @return CreateOrgResponse
       */
      Models::CreateOrgResponse createOrg(const Models::CreateOrgRequest &request);

      /**
       * @summary Creates a user property.
       *
       * @param request CreatePropertyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePropertyResponse
       */
      Models::CreatePropertyResponse createPropertyWithOptions(const Models::CreatePropertyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a user property.
       *
       * @param request CreatePropertyRequest
       * @return CreatePropertyResponse
       */
      Models::CreatePropertyResponse createProperty(const Models::CreatePropertyRequest &request);

      /**
       * @summary 创建资源组
       *
       * @param request CreateResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateResourceGroupResponse
       */
      Models::CreateResourceGroupResponse createResourceGroupWithOptions(const Models::CreateResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建资源组
       *
       * @param request CreateResourceGroupRequest
       * @return CreateResourceGroupResponse
       */
      Models::CreateResourceGroupResponse createResourceGroup(const Models::CreateResourceGroupRequest &request);

      /**
       * @summary Creates a convenience user.
       *
       * @description Convenience users are dedicated Elastic Desktop Service (EDS) user accounts and are suitable for scenarios in which you do not need to connect to enterprise Active Directory (AD) systems. The information about a convenience user includes the username, email address, and mobile number. You must specify the username or email address.
       *
       * @param request CreateUsersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateUsersResponse
       */
      Models::CreateUsersResponse createUsersWithOptions(const Models::CreateUsersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a convenience user.
       *
       * @description Convenience users are dedicated Elastic Desktop Service (EDS) user accounts and are suitable for scenarios in which you do not need to connect to enterprise Active Directory (AD) systems. The information about a convenience user includes the username, email address, and mobile number. You must specify the username or email address.
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
       * @summary Dissociates a user property from a user.
       *
       * @description Before you call this operation, you can call the FilterUsers operation to query the users that are associated with user properties.
       *
       * @param request DeleteUserPropertyValueRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteUserPropertyValueResponse
       */
      Models::DeleteUserPropertyValueResponse deleteUserPropertyValueWithOptions(const Models::DeleteUserPropertyValueRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Dissociates a user property from a user.
       *
       * @description Before you call this operation, you can call the FilterUsers operation to query the users that are associated with user properties.
       *
       * @param request DeleteUserPropertyValueRequest
       * @return DeleteUserPropertyValueResponse
       */
      Models::DeleteUserPropertyValueResponse deleteUserPropertyValue(const Models::DeleteUserPropertyValueRequest &request);

      /**
       * @summary 全量同步初始化
       *
       * @param request DescribeGroupUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGroupUserResponse
       */
      Models::DescribeGroupUserResponse describeGroupUserWithOptions(const Models::DescribeGroupUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 全量同步初始化
       *
       * @param request DescribeGroupUserRequest
       * @return DescribeGroupUserResponse
       */
      Models::DescribeGroupUserResponse describeGroupUser(const Models::DescribeGroupUserRequest &request);

      /**
       * @summary 全量同步初始化.
       *
       * @param request DescribeGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeGroupsResponse
       */
      Models::DescribeGroupsResponse describeGroupsWithOptions(const Models::DescribeGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 全量同步初始化.
       *
       * @param request DescribeGroupsRequest
       * @return DescribeGroupsResponse
       */
      Models::DescribeGroupsResponse describeGroups(const Models::DescribeGroupsRequest &request);

      /**
       * @summary Queries the information about virtual multi-factor authentication (MFA) devices that are bound to convenience users.
       *
       * @param request DescribeMfaDevicesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMfaDevicesResponse
       */
      Models::DescribeMfaDevicesResponse describeMfaDevicesWithOptions(const Models::DescribeMfaDevicesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about virtual multi-factor authentication (MFA) devices that are bound to convenience users.
       *
       * @param request DescribeMfaDevicesRequest
       * @return DescribeMfaDevicesResponse
       */
      Models::DescribeMfaDevicesResponse describeMfaDevices(const Models::DescribeMfaDevicesRequest &request);

      /**
       * @summary 查找下级组织
       *
       * @param request DescribeOrgByLayerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeOrgByLayerResponse
       */
      Models::DescribeOrgByLayerResponse describeOrgByLayerWithOptions(const Models::DescribeOrgByLayerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查找下级组织
       *
       * @param request DescribeOrgByLayerRequest
       * @return DescribeOrgByLayerResponse
       */
      Models::DescribeOrgByLayerResponse describeOrgByLayer(const Models::DescribeOrgByLayerRequest &request);

      /**
       * @summary Queries organizations.
       *
       * @description An organization is in a tree structure. The root organization ID is in the following format: org-aliyun-wy-org-id.
       *
       * @param tmpReq DescribeOrgsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeOrgsResponse
       */
      Models::DescribeOrgsResponse describeOrgsWithOptions(const Models::DescribeOrgsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries organizations.
       *
       * @description An organization is in a tree structure. The root organization ID is in the following format: org-aliyun-wy-org-id.
       *
       * @param request DescribeOrgsRequest
       * @return DescribeOrgsResponse
       */
      Models::DescribeOrgsResponse describeOrgs(const Models::DescribeOrgsRequest &request);

      /**
       * @summary 查看资源组
       *
       * @param request DescribeResourceGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeResourceGroupsResponse
       */
      Models::DescribeResourceGroupsResponse describeResourceGroupsWithOptions(const Models::DescribeResourceGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查看资源组
       *
       * @param request DescribeResourceGroupsRequest
       * @return DescribeResourceGroupsResponse
       */
      Models::DescribeResourceGroupsResponse describeResourceGroups(const Models::DescribeResourceGroupsRequest &request);

      /**
       * @summary Queries the information about convenience users. The information of a convenience user includes a username, an email address, and a description.
       *
       * @param tmpReq DescribeUsersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUsersResponse
       */
      Models::DescribeUsersResponse describeUsersWithOptions(const Models::DescribeUsersRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about convenience users. The information of a convenience user includes a username, an email address, and a description.
       *
       * @param request DescribeUsersRequest
       * @return DescribeUsersResponse
       */
      Models::DescribeUsersResponse describeUsers(const Models::DescribeUsersRequest &request);

      /**
       * @summary Filters convenience accounts by property.
       *
       * @param tmpReq FilterUsersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return FilterUsersResponse
       */
      Models::FilterUsersResponse filterUsersWithOptions(const Models::FilterUsersRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Filters convenience accounts by property.
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
       * @summary 初始化TenantAlias
       *
       * @param request InitTenantAliasRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return InitTenantAliasResponse
       */
      Models::InitTenantAliasResponse initTenantAliasWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 初始化TenantAlias
       *
       * @return InitTenantAliasResponse
       */
      Models::InitTenantAliasResponse initTenantAlias();

      /**
       * @summary Queries all user properties within an Alibaba Cloud account.
       *
       * @param request ListPropertyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPropertyResponse
       */
      Models::ListPropertyResponse listPropertyWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all user properties within an Alibaba Cloud account.
       *
       * @return ListPropertyResponse
       */
      Models::ListPropertyResponse listProperty();

      /**
       * @summary Queries property values of a user property.
       *
       * @param request ListPropertyValueRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPropertyValueResponse
       */
      Models::ListPropertyValueResponse listPropertyValueWithOptions(const Models::ListPropertyValueRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries property values of a user property.
       *
       * @param request ListPropertyValueRequest
       * @return ListPropertyValueResponse
       */
      Models::ListPropertyValueResponse listPropertyValue(const Models::ListPropertyValueRequest &request);

      /**
       * @summary Locks a virtual multi-factor authentication (MFA) device that is bound to a convenience user.
       *
       * @description After a virtual MFA device is locked, the status of the virtual MFA device changes to LOCKED. The convenience user to which the MFA device is bound cannot log on to the cloud desktop that resides in the workspace with the MFA feature enabled because the identity of the convenience user cannot be verified based on the virtual MFA device. You can call the [UnlockMfaDevice](https://help.aliyun.com/document_detail/286534.html) operation to unlock the virtual MFA device.
       *
       * @param request LockMfaDeviceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return LockMfaDeviceResponse
       */
      Models::LockMfaDeviceResponse lockMfaDeviceWithOptions(const Models::LockMfaDeviceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Locks a virtual multi-factor authentication (MFA) device that is bound to a convenience user.
       *
       * @description After a virtual MFA device is locked, the status of the virtual MFA device changes to LOCKED. The convenience user to which the MFA device is bound cannot log on to the cloud desktop that resides in the workspace with the MFA feature enabled because the identity of the convenience user cannot be verified based on the virtual MFA device. You can call the [UnlockMfaDevice](https://help.aliyun.com/document_detail/286534.html) operation to unlock the virtual MFA device.
       *
       * @param request LockMfaDeviceRequest
       * @return LockMfaDeviceResponse
       */
      Models::LockMfaDeviceResponse lockMfaDevice(const Models::LockMfaDeviceRequest &request);

      /**
       * @summary Locks one or more convenience users.
       *
       * @param request LockUsersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return LockUsersResponse
       */
      Models::LockUsersResponse lockUsersWithOptions(const Models::LockUsersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Locks one or more convenience users.
       *
       * @param request LockUsersRequest
       * @return LockUsersResponse
       */
      Models::LockUsersResponse lockUsers(const Models::LockUsersRequest &request);

      /**
       * @summary 修改角色.
       *
       * @param request ModifyGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyGroupResponse
       */
      Models::ModifyGroupResponse modifyGroupWithOptions(const Models::ModifyGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改角色.
       *
       * @param request ModifyGroupRequest
       * @return ModifyGroupResponse
       */
      Models::ModifyGroupResponse modifyGroup(const Models::ModifyGroupRequest &request);

      /**
       * @summary 修改组织
       *
       * @param request ModifyOrgRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyOrgResponse
       */
      Models::ModifyOrgResponse modifyOrgWithOptions(const Models::ModifyOrgRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改组织
       *
       * @param request ModifyOrgRequest
       * @return ModifyOrgResponse
       */
      Models::ModifyOrgResponse modifyOrg(const Models::ModifyOrgRequest &request);

      /**
       * @summary Modifies user information.
       *
       * @param request ModifyUserRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyUserResponse
       */
      Models::ModifyUserResponse modifyUserWithOptions(const Models::ModifyUserRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies user information.
       *
       * @param request ModifyUserRequest
       * @return ModifyUserResponse
       */
      Models::ModifyUserResponse modifyUser(const Models::ModifyUserRequest &request);

      /**
       * @summary 移动组织
       *
       * @param request MoveOrgRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MoveOrgResponse
       */
      Models::MoveOrgResponse moveOrgWithOptions(const Models::MoveOrgRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 移动组织
       *
       * @param request MoveOrgRequest
       * @return MoveOrgResponse
       */
      Models::MoveOrgResponse moveOrg(const Models::MoveOrgRequest &request);

      /**
       * @summary 移动用户组织
       *
       * @param request MoveUserOrgRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MoveUserOrgResponse
       */
      Models::MoveUserOrgResponse moveUserOrgWithOptions(const Models::MoveUserOrgRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 移动用户组织
       *
       * @param request MoveUserOrgRequest
       * @return MoveUserOrgResponse
       */
      Models::MoveUserOrgResponse moveUserOrg(const Models::MoveUserOrgRequest &request);

      /**
       * @summary 查询edu同步信息
       *
       * @param request QuerySyncStatusByAliUidRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QuerySyncStatusByAliUidResponse
       */
      Models::QuerySyncStatusByAliUidResponse querySyncStatusByAliUidWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询edu同步信息
       *
       * @return QuerySyncStatusByAliUidResponse
       */
      Models::QuerySyncStatusByAliUidResponse querySyncStatusByAliUid();

      /**
       * @summary 删除角色.
       *
       * @param request RemoveGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveGroupResponse
       */
      Models::RemoveGroupResponse removeGroupWithOptions(const Models::RemoveGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除角色.
       *
       * @param request RemoveGroupRequest
       * @return RemoveGroupResponse
       */
      Models::RemoveGroupResponse removeGroup(const Models::RemoveGroupRequest &request);

      /**
       * @summary Removes a virtual multi-factor authentication (MFA) device that is bound to a convenience user.
       *
       * @description If you remove a virtual MFA device that is bound to a convenience user, the convenience user can no longer use the virtual MFA device to log on to cloud desktops. Before the convenience user can log on to cloud desktops again, a new virtual MFA device must be bound to the convenience user.
       *
       * @param request RemoveMfaDeviceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveMfaDeviceResponse
       */
      Models::RemoveMfaDeviceResponse removeMfaDeviceWithOptions(const Models::RemoveMfaDeviceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes a virtual multi-factor authentication (MFA) device that is bound to a convenience user.
       *
       * @description If you remove a virtual MFA device that is bound to a convenience user, the convenience user can no longer use the virtual MFA device to log on to cloud desktops. Before the convenience user can log on to cloud desktops again, a new virtual MFA device must be bound to the convenience user.
       *
       * @param request RemoveMfaDeviceRequest
       * @return RemoveMfaDeviceResponse
       */
      Models::RemoveMfaDeviceResponse removeMfaDevice(const Models::RemoveMfaDeviceRequest &request);

      /**
       * @summary 移除组织
       *
       * @param request RemoveOrgRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveOrgResponse
       */
      Models::RemoveOrgResponse removeOrgWithOptions(const Models::RemoveOrgRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 移除组织
       *
       * @param request RemoveOrgRequest
       * @return RemoveOrgResponse
       */
      Models::RemoveOrgResponse removeOrg(const Models::RemoveOrgRequest &request);

      /**
       * @summary Deletes a user property.
       *
       * @param request RemovePropertyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemovePropertyResponse
       */
      Models::RemovePropertyResponse removePropertyWithOptions(const Models::RemovePropertyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a user property.
       *
       * @param request RemovePropertyRequest
       * @return RemovePropertyResponse
       */
      Models::RemovePropertyResponse removeProperty(const Models::RemovePropertyRequest &request);

      /**
       * @summary Removes one or more convenience users.
       *
       * @param request RemoveUsersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveUsersResponse
       */
      Models::RemoveUsersResponse removeUsersWithOptions(const Models::RemoveUsersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes one or more convenience users.
       *
       * @param request RemoveUsersRequest
       * @return RemoveUsersResponse
       */
      Models::RemoveUsersResponse removeUsers(const Models::RemoveUsersRequest &request);

      /**
       * @summary Resets the password for a convenience user. If you call this operation, a token that is used to reset the password is generated, and the system sends a password reset email that includes the token to the email address of the convenience user.
       *
       * @param request ResetUserPasswordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetUserPasswordResponse
       */
      Models::ResetUserPasswordResponse resetUserPasswordWithOptions(const Models::ResetUserPasswordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resets the password for a convenience user. If you call this operation, a token that is used to reset the password is generated, and the system sends a password reset email that includes the token to the email address of the convenience user.
       *
       * @param request ResetUserPasswordRequest
       * @return ResetUserPasswordResponse
       */
      Models::ResetUserPasswordResponse resetUserPassword(const Models::ResetUserPasswordRequest &request);

      /**
       * @summary Associates a user property with a convenience user.
       *
       * @param request SetUserPropertyValueRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetUserPropertyValueResponse
       */
      Models::SetUserPropertyValueResponse setUserPropertyValueWithOptions(const Models::SetUserPropertyValueRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Associates a user property with a convenience user.
       *
       * @param request SetUserPropertyValueRequest
       * @return SetUserPropertyValueResponse
       */
      Models::SetUserPropertyValueResponse setUserPropertyValue(const Models::SetUserPropertyValueRequest &request);

      /**
       * @summary 从钉钉手动同步老师学生信息
       *
       * @param request SyncAllEduInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SyncAllEduInfoResponse
       */
      Models::SyncAllEduInfoResponse syncAllEduInfoWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 从钉钉手动同步老师学生信息
       *
       * @return SyncAllEduInfoResponse
       */
      Models::SyncAllEduInfoResponse syncAllEduInfo();

      /**
       * @summary Unlocks a virtual multi-factor authentication (MFA) device that is bound to a convenience user.
       *
       * @param request UnlockMfaDeviceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnlockMfaDeviceResponse
       */
      Models::UnlockMfaDeviceResponse unlockMfaDeviceWithOptions(const Models::UnlockMfaDeviceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unlocks a virtual multi-factor authentication (MFA) device that is bound to a convenience user.
       *
       * @param request UnlockMfaDeviceRequest
       * @return UnlockMfaDeviceResponse
       */
      Models::UnlockMfaDeviceResponse unlockMfaDevice(const Models::UnlockMfaDeviceRequest &request);

      /**
       * @summary Unlocks one or more convenience users.
       *
       * @param request UnlockUsersRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnlockUsersResponse
       */
      Models::UnlockUsersResponse unlockUsersWithOptions(const Models::UnlockUsersRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unlocks one or more convenience users.
       *
       * @param request UnlockUsersRequest
       * @return UnlockUsersResponse
       */
      Models::UnlockUsersResponse unlockUsers(const Models::UnlockUsersRequest &request);

      /**
       * @summary Modifies a user property.
       *
       * @param request UpdatePropertyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePropertyResponse
       */
      Models::UpdatePropertyResponse updatePropertyWithOptions(const Models::UpdatePropertyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a user property.
       *
       * @param request UpdatePropertyRequest
       * @return UpdatePropertyResponse
       */
      Models::UpdatePropertyResponse updateProperty(const Models::UpdatePropertyRequest &request);

      /**
       * @summary 用户批量分配角色
       *
       * @param request UserBatchJoinGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UserBatchJoinGroupResponse
       */
      Models::UserBatchJoinGroupResponse userBatchJoinGroupWithOptions(const Models::UserBatchJoinGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 用户批量分配角色
       *
       * @param request UserBatchJoinGroupRequest
       * @return UserBatchJoinGroupResponse
       */
      Models::UserBatchJoinGroupResponse userBatchJoinGroup(const Models::UserBatchJoinGroupRequest &request);

      /**
       * @summary 用户批量移出角色
       *
       * @param request UserBatchQuitGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UserBatchQuitGroupResponse
       */
      Models::UserBatchQuitGroupResponse userBatchQuitGroupWithOptions(const Models::UserBatchQuitGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 用户批量移出角色
       *
       * @param request UserBatchQuitGroupRequest
       * @return UserBatchQuitGroupResponse
       */
      Models::UserBatchQuitGroupResponse userBatchQuitGroup(const Models::UserBatchQuitGroupRequest &request);
  };
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
