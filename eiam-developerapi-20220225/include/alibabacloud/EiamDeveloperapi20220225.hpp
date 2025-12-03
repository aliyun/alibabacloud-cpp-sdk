// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_EIAMDEVELOPERAPI20220225_HPP_
#define ALIBABACLOUD_EIAMDEVELOPERAPI20220225_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/EiamDeveloperapi20220225Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/EiamDeveloperapi20220225.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EiamDeveloperapi20220225
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 将账户加入多个组织
       *
       * @param request AddUserToOrganizationalUnitsRequest
       * @param headers AddUserToOrganizationalUnitsHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddUserToOrganizationalUnitsResponse
       */
      Models::AddUserToOrganizationalUnitsResponse addUserToOrganizationalUnitsWithOptions(const string &instanceId, const string &applicationId, const string &userId, const Models::AddUserToOrganizationalUnitsRequest &request, const Models::AddUserToOrganizationalUnitsHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 将账户加入多个组织
       *
       * @param request AddUserToOrganizationalUnitsRequest
       * @return AddUserToOrganizationalUnitsResponse
       */
      Models::AddUserToOrganizationalUnitsResponse addUserToOrganizationalUnits(const string &instanceId, const string &applicationId, const string &userId, const Models::AddUserToOrganizationalUnitsRequest &request);

      /**
       * @summary Adds multiple Employee Identity and Access Management (EIAM) accounts to an EIAM group. If the accounts are already added to the specified group, no update is performed.
       *
       * @param request AddUsersToGroupRequest
       * @param headers AddUsersToGroupHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddUsersToGroupResponse
       */
      Models::AddUsersToGroupResponse addUsersToGroupWithOptions(const string &instanceId, const string &applicationId, const string &groupId, const Models::AddUsersToGroupRequest &request, const Models::AddUsersToGroupHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds multiple Employee Identity and Access Management (EIAM) accounts to an EIAM group. If the accounts are already added to the specified group, no update is performed.
       *
       * @param request AddUsersToGroupRequest
       * @return AddUsersToGroupResponse
       */
      Models::AddUsersToGroupResponse addUsersToGroup(const string &instanceId, const string &applicationId, const string &groupId, const Models::AddUsersToGroupRequest &request);

      /**
       * @summary Creates a group.
       *
       * @param request CreateGroupRequest
       * @param headers CreateGroupHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateGroupResponse
       */
      Models::CreateGroupResponse createGroupWithOptions(const string &instanceId, const string &applicationId, const Models::CreateGroupRequest &request, const Models::CreateGroupHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a group.
       *
       * @param request CreateGroupRequest
       * @return CreateGroupResponse
       */
      Models::CreateGroupResponse createGroup(const string &instanceId, const string &applicationId, const Models::CreateGroupRequest &request);

      /**
       * @summary Creates an organizational unit.
       *
       * @param request CreateOrganizationalUnitRequest
       * @param headers CreateOrganizationalUnitHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateOrganizationalUnitResponse
       */
      Models::CreateOrganizationalUnitResponse createOrganizationalUnitWithOptions(const string &instanceId, const string &applicationId, const Models::CreateOrganizationalUnitRequest &request, const Models::CreateOrganizationalUnitHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an organizational unit.
       *
       * @param request CreateOrganizationalUnitRequest
       * @return CreateOrganizationalUnitResponse
       */
      Models::CreateOrganizationalUnitResponse createOrganizationalUnit(const string &instanceId, const string &applicationId, const Models::CreateOrganizationalUnitRequest &request);

      /**
       * @summary Creates an Employee Identity and Access Management (EIAM) account in an organizational unit.
       *
       * @param request CreateUserRequest
       * @param headers CreateUserHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateUserResponse
       */
      Models::CreateUserResponse createUserWithOptions(const string &instanceId, const string &applicationId, const Models::CreateUserRequest &request, const Models::CreateUserHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an Employee Identity and Access Management (EIAM) account in an organizational unit.
       *
       * @param request CreateUserRequest
       * @return CreateUserResponse
       */
      Models::CreateUserResponse createUser(const string &instanceId, const string &applicationId, const Models::CreateUserRequest &request);

      /**
       * @summary Deletes a group.
       *
       * @param headers DeleteGroupHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteGroupResponse
       */
      Models::DeleteGroupResponse deleteGroupWithOptions(const string &instanceId, const string &applicationId, const string &groupId, const Models::DeleteGroupHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a group.
       *
       * @return DeleteGroupResponse
       */
      Models::DeleteGroupResponse deleteGroup(const string &instanceId, const string &applicationId, const string &groupId);

      /**
       * @summary Deletes an organizational unit.
       *
       * @param headers DeleteOrganizationalUnitHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteOrganizationalUnitResponse
       */
      Models::DeleteOrganizationalUnitResponse deleteOrganizationalUnitWithOptions(const string &instanceId, const string &applicationId, const string &organizationalUnitId, const Models::DeleteOrganizationalUnitHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an organizational unit.
       *
       * @return DeleteOrganizationalUnitResponse
       */
      Models::DeleteOrganizationalUnitResponse deleteOrganizationalUnit(const string &instanceId, const string &applicationId, const string &organizationalUnitId);

      /**
       * @summary Deletes an Employee Identity and Access Management (EIAM) account.
       *
       * @param headers DeleteUserHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteUserResponse
       */
      Models::DeleteUserResponse deleteUserWithOptions(const string &instanceId, const string &applicationId, const string &userId, const Models::DeleteUserHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an Employee Identity and Access Management (EIAM) account.
       *
       * @return DeleteUserResponse
       */
      Models::DeleteUserResponse deleteUser(const string &instanceId, const string &applicationId, const string &userId);

      /**
       * @summary Disables an Employee Identity and Access Management (EIAM) account.
       *
       * @param headers DisableUserHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableUserResponse
       */
      Models::DisableUserResponse disableUserWithOptions(const string &instanceId, const string &applicationId, const string &userId, const Models::DisableUserHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables an Employee Identity and Access Management (EIAM) account.
       *
       * @return DisableUserResponse
       */
      Models::DisableUserResponse disableUser(const string &instanceId, const string &applicationId, const string &userId);

      /**
       * @summary Enables an Employee Identity and Access Management (EIAM) account.
       *
       * @param headers EnableUserHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableUserResponse
       */
      Models::EnableUserResponse enableUserWithOptions(const string &instanceId, const string &applicationId, const string &userId, const Models::EnableUserHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables an Employee Identity and Access Management (EIAM) account.
       *
       * @return EnableUserResponse
       */
      Models::EnableUserResponse enableUser(const string &instanceId, const string &applicationId, const string &userId);

      /**
       * @summary Generates a device code.
       *
       * @param request GenerateDeviceCodeRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateDeviceCodeResponse
       */
      Models::GenerateDeviceCodeResponse generateDeviceCodeWithOptions(const string &instanceId, const string &applicationId, const Models::GenerateDeviceCodeRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Generates a device code.
       *
       * @param request GenerateDeviceCodeRequest
       * @return GenerateDeviceCodeResponse
       */
      Models::GenerateDeviceCodeResponse generateDeviceCode(const string &instanceId, const string &applicationId, const Models::GenerateDeviceCodeRequest &request);

      /**
       * @summary Generates a token for accessing an application in an instance.
       *
       * @description The following authorization types are supported: authorization code, device code, refresh token, and client credentials.
       *
       * @param request GenerateTokenRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateTokenResponse
       */
      Models::GenerateTokenResponse generateTokenWithOptions(const string &instanceId, const string &applicationId, const Models::GenerateTokenRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Generates a token for accessing an application in an instance.
       *
       * @description The following authorization types are supported: authorization code, device code, refresh token, and client credentials.
       *
       * @param request GenerateTokenRequest
       * @return GenerateTokenResponse
       */
      Models::GenerateTokenResponse generateToken(const string &instanceId, const string &applicationId, const Models::GenerateTokenRequest &request);

      /**
       * @summary Queries the synchronization scope of an application in an instance.
       *
       * @description > 
       * *   You can go to the Applications page in the IDaaS console to set the synchronization scope. After an application is created, the application has the permission to call this operation by default.
       *
       * @param headers GetApplicationProvisioningScopeHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetApplicationProvisioningScopeResponse
       */
      Models::GetApplicationProvisioningScopeResponse getApplicationProvisioningScopeWithOptions(const string &instanceId, const string &applicationId, const Models::GetApplicationProvisioningScopeHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the synchronization scope of an application in an instance.
       *
       * @description > 
       * *   You can go to the Applications page in the IDaaS console to set the synchronization scope. After an application is created, the application has the permission to call this operation by default.
       *
       * @return GetApplicationProvisioningScopeResponse
       */
      Models::GetApplicationProvisioningScopeResponse getApplicationProvisioningScope(const string &instanceId, const string &applicationId);

      /**
       * @summary Queries the details of a group.
       *
       * @param headers GetGroupHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetGroupResponse
       */
      Models::GetGroupResponse getGroupWithOptions(const string &instanceId, const string &applicationId, const string &groupId, const Models::GetGroupHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a group.
       *
       * @return GetGroupResponse
       */
      Models::GetGroupResponse getGroup(const string &instanceId, const string &applicationId, const string &groupId);

      /**
       * @summary Queries the information of an organizational unit.
       *
       * @param headers GetOrganizationalUnitHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOrganizationalUnitResponse
       */
      Models::GetOrganizationalUnitResponse getOrganizationalUnitWithOptions(const string &instanceId, const string &applicationId, const string &organizationalUnitId, const Models::GetOrganizationalUnitHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information of an organizational unit.
       *
       * @return GetOrganizationalUnitResponse
       */
      Models::GetOrganizationalUnitResponse getOrganizationalUnit(const string &instanceId, const string &applicationId, const string &organizationalUnitId);

      /**
       * @summary Obtains the ID of an organizational unit based on the external ID
       *
       * @param request GetOrganizationalUnitIdByExternalIdRequest
       * @param headers GetOrganizationalUnitIdByExternalIdHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOrganizationalUnitIdByExternalIdResponse
       */
      Models::GetOrganizationalUnitIdByExternalIdResponse getOrganizationalUnitIdByExternalIdWithOptions(const string &instanceId, const string &applicationId, const Models::GetOrganizationalUnitIdByExternalIdRequest &request, const Models::GetOrganizationalUnitIdByExternalIdHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the ID of an organizational unit based on the external ID
       *
       * @param request GetOrganizationalUnitIdByExternalIdRequest
       * @return GetOrganizationalUnitIdByExternalIdResponse
       */
      Models::GetOrganizationalUnitIdByExternalIdResponse getOrganizationalUnitIdByExternalId(const string &instanceId, const string &applicationId, const Models::GetOrganizationalUnitIdByExternalIdRequest &request);

      /**
       * @summary Queries the details of an Employee Identity and Access Management (EIAM) account.
       *
       * @param headers GetUserHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUserResponse
       */
      Models::GetUserResponse getUserWithOptions(const string &instanceId, const string &applicationId, const string &userId, const Models::GetUserHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an Employee Identity and Access Management (EIAM) account.
       *
       * @return GetUserResponse
       */
      Models::GetUserResponse getUser(const string &instanceId, const string &applicationId, const string &userId);

      /**
       * @summary Queries the ID of an Employee Identity and Access Management (EIAM) account by email address.
       *
       * @param request GetUserIdByEmailRequest
       * @param headers GetUserIdByEmailHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUserIdByEmailResponse
       */
      Models::GetUserIdByEmailResponse getUserIdByEmailWithOptions(const string &instanceId, const string &applicationId, const Models::GetUserIdByEmailRequest &request, const Models::GetUserIdByEmailHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the ID of an Employee Identity and Access Management (EIAM) account by email address.
       *
       * @param request GetUserIdByEmailRequest
       * @return GetUserIdByEmailResponse
       */
      Models::GetUserIdByEmailResponse getUserIdByEmail(const string &instanceId, const string &applicationId, const Models::GetUserIdByEmailRequest &request);

      /**
       * @summary Queries the ID of an Employee Identity and Access Management (EIAM) account based on the mobile number.
       *
       * @param request GetUserIdByPhoneNumberRequest
       * @param headers GetUserIdByPhoneNumberHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUserIdByPhoneNumberResponse
       */
      Models::GetUserIdByPhoneNumberResponse getUserIdByPhoneNumberWithOptions(const string &instanceId, const string &applicationId, const Models::GetUserIdByPhoneNumberRequest &request, const Models::GetUserIdByPhoneNumberHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the ID of an Employee Identity and Access Management (EIAM) account based on the mobile number.
       *
       * @param request GetUserIdByPhoneNumberRequest
       * @return GetUserIdByPhoneNumberResponse
       */
      Models::GetUserIdByPhoneNumberResponse getUserIdByPhoneNumber(const string &instanceId, const string &applicationId, const Models::GetUserIdByPhoneNumberRequest &request);

      /**
       * @summary Queries the ID of an Employee Identity and Access Management (EIAM) account based on the external ID.
       *
       * @param request GetUserIdByUserExternalIdRequest
       * @param headers GetUserIdByUserExternalIdHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUserIdByUserExternalIdResponse
       */
      Models::GetUserIdByUserExternalIdResponse getUserIdByUserExternalIdWithOptions(const string &instanceId, const string &applicationId, const Models::GetUserIdByUserExternalIdRequest &request, const Models::GetUserIdByUserExternalIdHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the ID of an Employee Identity and Access Management (EIAM) account based on the external ID.
       *
       * @param request GetUserIdByUserExternalIdRequest
       * @return GetUserIdByUserExternalIdResponse
       */
      Models::GetUserIdByUserExternalIdResponse getUserIdByUserExternalId(const string &instanceId, const string &applicationId, const Models::GetUserIdByUserExternalIdRequest &request);

      /**
       * @summary Queries the ID of an Employee Identity and Access Management (EIAM) account based on the username.
       *
       * @param request GetUserIdByUsernameRequest
       * @param headers GetUserIdByUsernameHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUserIdByUsernameResponse
       */
      Models::GetUserIdByUsernameResponse getUserIdByUsernameWithOptions(const string &instanceId, const string &applicationId, const Models::GetUserIdByUsernameRequest &request, const Models::GetUserIdByUsernameHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the ID of an Employee Identity and Access Management (EIAM) account based on the username.
       *
       * @param request GetUserIdByUsernameRequest
       * @return GetUserIdByUsernameResponse
       */
      Models::GetUserIdByUsernameResponse getUserIdByUsername(const string &instanceId, const string &applicationId, const Models::GetUserIdByUsernameRequest &request);

      /**
       * @summary Queries the information of a user by using the user token.
       *
       * @param headers GetUserInfoHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUserInfoResponse
       */
      Models::GetUserInfoResponse getUserInfoWithOptions(const string &instanceId, const string &applicationId, const Models::GetUserInfoHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information of a user by using the user token.
       *
       * @return GetUserInfoResponse
       */
      Models::GetUserInfoResponse getUserInfo(const string &instanceId, const string &applicationId);

      /**
       * @summary Queries information about Employee Identity and Access Management (EIAM) groups by page.
       *
       * @param request ListGroupsRequest
       * @param headers ListGroupsHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListGroupsResponse
       */
      Models::ListGroupsResponse listGroupsWithOptions(const string &instanceId, const string &applicationId, const Models::ListGroupsRequest &request, const Models::ListGroupsHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about Employee Identity and Access Management (EIAM) groups by page.
       *
       * @param request ListGroupsRequest
       * @return ListGroupsResponse
       */
      Models::ListGroupsResponse listGroups(const string &instanceId, const string &applicationId, const Models::ListGroupsRequest &request);

      /**
       * @summary 获取账户关联组列表
       *
       * @param request ListGroupsForUserRequest
       * @param headers ListGroupsForUserHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListGroupsForUserResponse
       */
      Models::ListGroupsForUserResponse listGroupsForUserWithOptions(const string &instanceId, const string &applicationId, const string &userId, const Models::ListGroupsForUserRequest &request, const Models::ListGroupsForUserHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取账户关联组列表
       *
       * @param request ListGroupsForUserRequest
       * @return ListGroupsForUserResponse
       */
      Models::ListGroupsForUserResponse listGroupsForUser(const string &instanceId, const string &applicationId, const string &userId, const Models::ListGroupsForUserRequest &request);

      /**
       * @summary Queries the information of all the parent organizational units of an organizational unit.
       *
       * @param headers ListOrganizationalUnitParentIdsHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListOrganizationalUnitParentIdsResponse
       */
      Models::ListOrganizationalUnitParentIdsResponse listOrganizationalUnitParentIdsWithOptions(const string &instanceId, const string &applicationId, const string &organizationalUnitId, const Models::ListOrganizationalUnitParentIdsHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information of all the parent organizational units of an organizational unit.
       *
       * @return ListOrganizationalUnitParentIdsResponse
       */
      Models::ListOrganizationalUnitParentIdsResponse listOrganizationalUnitParentIds(const string &instanceId, const string &applicationId, const string &organizationalUnitId);

      /**
       * @summary Queries the information of Employee Identity and Access Management (EIAM) organizational units by page.
       *
       * @param request ListOrganizationalUnitsRequest
       * @param headers ListOrganizationalUnitsHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListOrganizationalUnitsResponse
       */
      Models::ListOrganizationalUnitsResponse listOrganizationalUnitsWithOptions(const string &instanceId, const string &applicationId, const Models::ListOrganizationalUnitsRequest &request, const Models::ListOrganizationalUnitsHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information of Employee Identity and Access Management (EIAM) organizational units by page.
       *
       * @param request ListOrganizationalUnitsRequest
       * @return ListOrganizationalUnitsResponse
       */
      Models::ListOrganizationalUnitsResponse listOrganizationalUnits(const string &instanceId, const string &applicationId, const Models::ListOrganizationalUnitsRequest &request);

      /**
       * @summary Queries the information of Employee Identity and Access Management (EIAM) accounts by page.
       *
       * @param request ListUsersRequest
       * @param headers ListUsersHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUsersResponse
       */
      Models::ListUsersResponse listUsersWithOptions(const string &instanceId, const string &applicationId, const Models::ListUsersRequest &request, const Models::ListUsersHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information of Employee Identity and Access Management (EIAM) accounts by page.
       *
       * @param request ListUsersRequest
       * @return ListUsersResponse
       */
      Models::ListUsersResponse listUsers(const string &instanceId, const string &applicationId, const Models::ListUsersRequest &request);

      /**
       * @summary Queries accounts in an Employee Identity and Access Management (EIAM) group.
       *
       * @param request ListUsersForGroupRequest
       * @param headers ListUsersForGroupHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUsersForGroupResponse
       */
      Models::ListUsersForGroupResponse listUsersForGroupWithOptions(const string &instanceId, const string &applicationId, const string &groupId, const Models::ListUsersForGroupRequest &request, const Models::ListUsersForGroupHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries accounts in an Employee Identity and Access Management (EIAM) group.
       *
       * @param request ListUsersForGroupRequest
       * @return ListUsersForGroupResponse
       */
      Models::ListUsersForGroupResponse listUsersForGroup(const string &instanceId, const string &applicationId, const string &groupId, const Models::ListUsersForGroupRequest &request);

      /**
       * @summary Modifies information about an Employee Identity and Access Management (EIAM) group.
       *
       * @param request PatchGroupRequest
       * @param headers PatchGroupHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return PatchGroupResponse
       */
      Models::PatchGroupResponse patchGroupWithOptions(const string &instanceId, const string &applicationId, const string &groupId, const Models::PatchGroupRequest &request, const Models::PatchGroupHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies information about an Employee Identity and Access Management (EIAM) group.
       *
       * @param request PatchGroupRequest
       * @return PatchGroupResponse
       */
      Models::PatchGroupResponse patchGroup(const string &instanceId, const string &applicationId, const string &groupId, const Models::PatchGroupRequest &request);

      /**
       * @summary Modifies an EIAM organizational unit.
       *
       * @description The operation conforms to the HTTP PATCH request method. The value of a parameter is modified only if the parameter is specified in the request.
       *
       * @param request PatchOrganizationalUnitRequest
       * @param headers PatchOrganizationalUnitHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return PatchOrganizationalUnitResponse
       */
      Models::PatchOrganizationalUnitResponse patchOrganizationalUnitWithOptions(const string &instanceId, const string &applicationId, const string &organizationalUnitId, const Models::PatchOrganizationalUnitRequest &request, const Models::PatchOrganizationalUnitHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies an EIAM organizational unit.
       *
       * @description The operation conforms to the HTTP PATCH request method. The value of a parameter is modified only if the parameter is specified in the request.
       *
       * @param request PatchOrganizationalUnitRequest
       * @return PatchOrganizationalUnitResponse
       */
      Models::PatchOrganizationalUnitResponse patchOrganizationalUnit(const string &instanceId, const string &applicationId, const string &organizationalUnitId, const Models::PatchOrganizationalUnitRequest &request);

      /**
       * @summary Modifies an Employee Identity and Access Management (EIAM) account.
       *
       * @description The operation conforms to the HTTP PATCH request method. The value of a parameter is modified only if the parameter is specified in the request.
       *
       * @param request PatchUserRequest
       * @param headers PatchUserHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return PatchUserResponse
       */
      Models::PatchUserResponse patchUserWithOptions(const string &instanceId, const string &applicationId, const string &userId, const Models::PatchUserRequest &request, const Models::PatchUserHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies an Employee Identity and Access Management (EIAM) account.
       *
       * @description The operation conforms to the HTTP PATCH request method. The value of a parameter is modified only if the parameter is specified in the request.
       *
       * @param request PatchUserRequest
       * @return PatchUserResponse
       */
      Models::PatchUserResponse patchUser(const string &instanceId, const string &applicationId, const string &userId, const Models::PatchUserRequest &request);

      /**
       * @summary 将账户从多个组织移除【不支持移除主组织】
       *
       * @param request RemoveUserFromOrganizationalUnitsRequest
       * @param headers RemoveUserFromOrganizationalUnitsHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveUserFromOrganizationalUnitsResponse
       */
      Models::RemoveUserFromOrganizationalUnitsResponse removeUserFromOrganizationalUnitsWithOptions(const string &instanceId, const string &applicationId, const string &userId, const Models::RemoveUserFromOrganizationalUnitsRequest &request, const Models::RemoveUserFromOrganizationalUnitsHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 将账户从多个组织移除【不支持移除主组织】
       *
       * @param request RemoveUserFromOrganizationalUnitsRequest
       * @return RemoveUserFromOrganizationalUnitsResponse
       */
      Models::RemoveUserFromOrganizationalUnitsResponse removeUserFromOrganizationalUnits(const string &instanceId, const string &applicationId, const string &userId, const Models::RemoveUserFromOrganizationalUnitsRequest &request);

      /**
       * @summary Removes multiple Employee Identity and Access Management (EIAM) accounts from an EIAM group. If an account does not belong to the group, the removal succeeds by default.
       *
       * @param request RemoveUsersFromGroupRequest
       * @param headers RemoveUsersFromGroupHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveUsersFromGroupResponse
       */
      Models::RemoveUsersFromGroupResponse removeUsersFromGroupWithOptions(const string &instanceId, const string &applicationId, const string &groupId, const Models::RemoveUsersFromGroupRequest &request, const Models::RemoveUsersFromGroupHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes multiple Employee Identity and Access Management (EIAM) accounts from an EIAM group. If an account does not belong to the group, the removal succeeds by default.
       *
       * @param request RemoveUsersFromGroupRequest
       * @return RemoveUsersFromGroupResponse
       */
      Models::RemoveUsersFromGroupResponse removeUsersFromGroup(const string &instanceId, const string &applicationId, const string &groupId, const Models::RemoveUsersFromGroupRequest &request);

      /**
       * @summary Revokes an access token or refresh token.
       *
       * @param request RevokeTokenRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RevokeTokenResponse
       */
      Models::RevokeTokenResponse revokeTokenWithOptions(const string &instanceId, const string &applicationId, const Models::RevokeTokenRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Revokes an access token or refresh token.
       *
       * @param request RevokeTokenRequest
       * @return RevokeTokenResponse
       */
      Models::RevokeTokenResponse revokeToken(const string &instanceId, const string &applicationId, const Models::RevokeTokenRequest &request);

      /**
       * @summary 将指定组织设置为账户主组织，移除旧主组织，加入新主组织。
       *
       * @param request SetUserPrimaryOrganizationalUnitRequest
       * @param headers SetUserPrimaryOrganizationalUnitHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetUserPrimaryOrganizationalUnitResponse
       */
      Models::SetUserPrimaryOrganizationalUnitResponse setUserPrimaryOrganizationalUnitWithOptions(const string &instanceId, const string &applicationId, const string &userId, const Models::SetUserPrimaryOrganizationalUnitRequest &request, const Models::SetUserPrimaryOrganizationalUnitHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 将指定组织设置为账户主组织，移除旧主组织，加入新主组织。
       *
       * @param request SetUserPrimaryOrganizationalUnitRequest
       * @return SetUserPrimaryOrganizationalUnitResponse
       */
      Models::SetUserPrimaryOrganizationalUnitResponse setUserPrimaryOrganizationalUnit(const string &instanceId, const string &applicationId, const string &userId, const Models::SetUserPrimaryOrganizationalUnitRequest &request);

      /**
       * @summary 更新账户密码
       *
       * @param request UpdateUserPasswordRequest
       * @param headers UpdateUserPasswordHeaders
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateUserPasswordResponse
       */
      Models::UpdateUserPasswordResponse updateUserPasswordWithOptions(const string &instanceId, const string &applicationId, const string &userId, const Models::UpdateUserPasswordRequest &request, const Models::UpdateUserPasswordHeaders &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新账户密码
       *
       * @param request UpdateUserPasswordRequest
       * @return UpdateUserPasswordResponse
       */
      Models::UpdateUserPasswordResponse updateUserPassword(const string &instanceId, const string &applicationId, const string &userId, const Models::UpdateUserPasswordRequest &request);
  };
} // namespace AlibabaCloud
} // namespace EiamDeveloperapi20220225
#endif
