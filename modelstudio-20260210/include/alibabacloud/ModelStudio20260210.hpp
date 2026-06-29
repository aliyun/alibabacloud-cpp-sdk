// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELSTUDIO20260210_HPP_
#define ALIBABACLOUD_MODELSTUDIO20260210_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/ModelStudio20260210Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/ModelStudio20260210.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ModelStudio20260210
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Creates an account and directly adds it as a member.
       *
       * @param request AddOrganizationMemberRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddOrganizationMemberResponse
       */
      Models::AddOrganizationMemberResponse addOrganizationMemberWithOptions(const Models::AddOrganizationMemberRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an account and directly adds it as a member.
       *
       * @param request AddOrganizationMemberRequest
       * @return AddOrganizationMemberResponse
       */
      Models::AddOrganizationMemberResponse addOrganizationMember(const Models::AddOrganizationMemberRequest &request);

      /**
       * @summary Assigns seats in batches to the member level.
       *
       * @param request BatchAssignSeatsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchAssignSeatsResponse
       */
      Models::BatchAssignSeatsResponse batchAssignSeatsWithOptions(const Models::BatchAssignSeatsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Assigns seats in batches to the member level.
       *
       * @param request BatchAssignSeatsRequest
       * @return BatchAssignSeatsResponse
       */
      Models::BatchAssignSeatsResponse batchAssignSeats(const Models::BatchAssignSeatsRequest &request);

      /**
       * @summary Revokes member-level seats in batches.
       *
       * @param tmpReq BatchRevokeSeatsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchRevokeSeatsResponse
       */
      Models::BatchRevokeSeatsResponse batchRevokeSeatsWithOptions(const Models::BatchRevokeSeatsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Revokes member-level seats in batches.
       *
       * @param request BatchRevokeSeatsRequest
       * @return BatchRevokeSeatsResponse
       */
      Models::BatchRevokeSeatsResponse batchRevokeSeats(const Models::BatchRevokeSeatsRequest &request);

      /**
       * @summary Before using large models or applications in Alibaba Cloud Model Studio, create an API key as an authentication credential.
       *
       * @param request CreateApiKeyRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateApiKeyResponse
       */
      Models::CreateApiKeyResponse createApiKeyWithOptions(const Models::CreateApiKeyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Before using large models or applications in Alibaba Cloud Model Studio, create an API key as an authentication credential.
       *
       * @param request CreateApiKeyRequest
       * @return CreateApiKeyResponse
       */
      Models::CreateApiKeyResponse createApiKey(const Models::CreateApiKeyRequest &request);

      /**
       * @summary Creates a TokenPlan member invitation link.
       *
       * @description A user can have only one valid invitation link at a time.
       * If the user already has a valid invitation link, this operation returns the existing link.
       * To create a new link, call the RevokeTokenPlanInviteLink operation to invalidate the current link first.
       * This operation returns only the generated token. The invitation link is assembled in the following format: `https://{host}/accept-invite?token=[token]&orgId=[orgId]`
       * * For the China site, the host is tokenplan-enterprise.bailian.aliyunportal.com.
       * * For the China site, the host is tokenplan-enterprise.modelstudio.aliyunportal.com.
       *
       * @param request CreateTokenPlanInviteLinkRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTokenPlanInviteLinkResponse
       */
      Models::CreateTokenPlanInviteLinkResponse createTokenPlanInviteLinkWithOptions(const Models::CreateTokenPlanInviteLinkRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a TokenPlan member invitation link.
       *
       * @description A user can have only one valid invitation link at a time.
       * If the user already has a valid invitation link, this operation returns the existing link.
       * To create a new link, call the RevokeTokenPlanInviteLink operation to invalidate the current link first.
       * This operation returns only the generated token. The invitation link is assembled in the following format: `https://{host}/accept-invite?token=[token]&orgId=[orgId]`
       * * For the China site, the host is tokenplan-enterprise.bailian.aliyunportal.com.
       * * For the China site, the host is tokenplan-enterprise.modelstudio.aliyunportal.com.
       *
       * @param request CreateTokenPlanInviteLinkRequest
       * @return CreateTokenPlanInviteLinkResponse
       */
      Models::CreateTokenPlanInviteLinkResponse createTokenPlanInviteLink(const Models::CreateTokenPlanInviteLinkRequest &request);

      /**
       * @summary Creates a UAC API key.
       *
       * @param request CreateTokenPlanKeyRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTokenPlanKeyResponse
       */
      Models::CreateTokenPlanKeyResponse createTokenPlanKeyWithOptions(const Models::CreateTokenPlanKeyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a UAC API key.
       *
       * @param request CreateTokenPlanKeyRequest
       * @return CreateTokenPlanKeyResponse
       */
      Models::CreateTokenPlanKeyResponse createTokenPlanKey(const Models::CreateTokenPlanKeyRequest &request);

      /**
       * @summary Creates a business workspace.
       *
       * @param request CreateWorkspaceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateWorkspaceResponse
       */
      Models::CreateWorkspaceResponse createWorkspaceWithOptions(const Models::CreateWorkspaceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a business workspace.
       *
       * @param request CreateWorkspaceRequest
       * @return CreateWorkspaceResponse
       */
      Models::CreateWorkspaceResponse createWorkspace(const Models::CreateWorkspaceRequest &request);

      /**
       * @summary Deletes an authentication credential API key.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteApiKeyResponse
       */
      Models::DeleteApiKeyResponse deleteApiKeyWithOptions(const string &apiKeyId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an authentication credential API key.
       *
       * @return DeleteApiKeyResponse
       */
      Models::DeleteApiKeyResponse deleteApiKey(const string &apiKeyId);

      /**
       * @summary Deletes a workspace.
       *
       * @description A workspace can be deleted only if the following conditional requirements are met:
       * 1. The workspace is not the default workspace.
       * 2. The workspace is not used to purchase other products, such as AMB.
       * 3. In permission management, the workspace is not granted to Resource Access Management (RAM) users or RAM roles.
       * 4. The workspace does not contain any resources, such as API keys, model deployments, or knowledge bases.
       *
       * @param request DeleteWorkspaceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteWorkspaceResponse
       */
      Models::DeleteWorkspaceResponse deleteWorkspaceWithOptions(const string &workspaceId, const Models::DeleteWorkspaceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a workspace.
       *
       * @description A workspace can be deleted only if the following conditional requirements are met:
       * 1. The workspace is not the default workspace.
       * 2. The workspace is not used to purchase other products, such as AMB.
       * 3. In permission management, the workspace is not granted to Resource Access Management (RAM) users or RAM roles.
       * 4. The workspace does not contain any resources, such as API keys, model deployments, or knowledge bases.
       *
       * @param request DeleteWorkspaceRequest
       * @return DeleteWorkspaceResponse
       */
      Models::DeleteWorkspaceResponse deleteWorkspace(const string &workspaceId, const Models::DeleteWorkspaceRequest &request);

      /**
       * @summary Disables an API key.
       *
       * @description An API key cannot be disabled if it is already disabled.
       *
       * @param request DisableApiKeyRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableApiKeyResponse
       */
      Models::DisableApiKeyResponse disableApiKeyWithOptions(const string &apiKeyId, const Models::DisableApiKeyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables an API key.
       *
       * @description An API key cannot be disabled if it is already disabled.
       *
       * @param request DisableApiKeyRequest
       * @return DisableApiKeyResponse
       */
      Models::DisableApiKeyResponse disableApiKey(const string &apiKeyId, const Models::DisableApiKeyRequest &request);

      /**
       * @summary Enables an API key.
       *
       * @description An API key that is already enabled cannot be enabled again.
       *
       * @param request EnableApiKeyRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableApiKeyResponse
       */
      Models::EnableApiKeyResponse enableApiKeyWithOptions(const string &apiKeyId, const Models::EnableApiKeyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables an API key.
       *
       * @description An API key that is already enabled cannot be enabled again.
       *
       * @param request EnableApiKeyRequest
       * @return EnableApiKeyResponse
       */
      Models::EnableApiKeyResponse enableApiKey(const string &apiKeyId, const Models::EnableApiKeyRequest &request);

      /**
       * @summary Retrieves the information of a specified authentication credential API key.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetApiKeyResponse
       */
      Models::GetApiKeyResponse getApiKeyWithOptions(const string &apiKeyId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the information of a specified authentication credential API key.
       *
       * @return GetApiKeyResponse
       */
      Models::GetApiKeyResponse getApiKey(const string &apiKeyId);

      /**
       * @summary Retrieves information about a specified organization.
       *
       * @description Retrieves information about a specified organization by OrgId.
       *
       * @param request GetOrganizationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOrganizationResponse
       */
      Models::GetOrganizationResponse getOrganizationWithOptions(const Models::GetOrganizationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves information about a specified organization.
       *
       * @description Retrieves information about a specified organization by OrgId.
       *
       * @param request GetOrganizationRequest
       * @return GetOrganizationResponse
       */
      Models::GetOrganizationResponse getOrganization(const Models::GetOrganizationRequest &request);

      /**
       * @summary Queries organization member statistics information, including the total number of members, the number of administrators, the number of regular members, the number of members with allocated seats, and the number of members without allocated seats.
       *
       * @param request GetOrganizationMemberSeatStatsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOrganizationMemberSeatStatsResponse
       */
      Models::GetOrganizationMemberSeatStatsResponse getOrganizationMemberSeatStatsWithOptions(const Models::GetOrganizationMemberSeatStatsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries organization member statistics information, including the total number of members, the number of administrators, the number of regular members, the number of members with allocated seats, and the number of members without allocated seats.
       *
       * @param request GetOrganizationMemberSeatStatsRequest
       * @return GetOrganizationMemberSeatStatsResponse
       */
      Models::GetOrganizationMemberSeatStatsResponse getOrganizationMemberSeatStats(const Models::GetOrganizationMemberSeatStatsRequest &request);

      /**
       * @summary Queries seat details by paging.
       *
       * @param request GetSubscriptionSeatDetailsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSubscriptionSeatDetailsResponse
       */
      Models::GetSubscriptionSeatDetailsResponse getSubscriptionSeatDetailsWithOptions(const Models::GetSubscriptionSeatDetailsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries seat details by paging.
       *
       * @param request GetSubscriptionSeatDetailsRequest
       * @return GetSubscriptionSeatDetailsResponse
       */
      Models::GetSubscriptionSeatDetailsResponse getSubscriptionSeatDetails(const Models::GetSubscriptionSeatDetailsRequest &request);

      /**
       * @summary Queries the number of members and seats for member management.
       *
       * @param request GetSubscriptionStatsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSubscriptionStatsResponse
       */
      Models::GetSubscriptionStatsResponse getSubscriptionStatsWithOptions(const Models::GetSubscriptionStatsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of members and seats for member management.
       *
       * @param request GetSubscriptionStatsRequest
       * @return GetSubscriptionStatsResponse
       */
      Models::GetSubscriptionStatsResponse getSubscriptionStats(const Models::GetSubscriptionStatsRequest &request);

      /**
       * @summary Retrieves the TokenPlan account details and organization information.
       *
       * @description Retrieves the TokenPlan management platform account information when the user is logged in.
       *
       * @param request GetTokenPlanAccountDetailRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTokenPlanAccountDetailResponse
       */
      Models::GetTokenPlanAccountDetailResponse getTokenPlanAccountDetailWithOptions(const Models::GetTokenPlanAccountDetailRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the TokenPlan account details and organization information.
       *
       * @description Retrieves the TokenPlan management platform account information when the user is logged in.
       *
       * @param request GetTokenPlanAccountDetailRequest
       * @return GetTokenPlanAccountDetailResponse
       */
      Models::GetTokenPlanAccountDetailResponse getTokenPlanAccountDetail(const Models::GetTokenPlanAccountDetailRequest &request);

      /**
       * @summary Retrieves the TokenPlan member invitation link.
       *
       * @description This operation returns only the generated token and expiration time. The invitation link is assembled in the following format: `https://{host}/accept-invite?token=[token]&orgId=[orgId]`
       * * For the China site, the host is tokenplan-enterprise.bailian.aliyunportal.com.
       * * For the international site, the host is tokenplan-enterprise.modelstudio.aliyunportal.com.
       *
       * @param request GetTokenPlanInviteLinkRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTokenPlanInviteLinkResponse
       */
      Models::GetTokenPlanInviteLinkResponse getTokenPlanInviteLinkWithOptions(const Models::GetTokenPlanInviteLinkRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the TokenPlan member invitation link.
       *
       * @description This operation returns only the generated token and expiration time. The invitation link is assembled in the following format: `https://{host}/accept-invite?token=[token]&orgId=[orgId]`
       * * For the China site, the host is tokenplan-enterprise.bailian.aliyunportal.com.
       * * For the international site, the host is tokenplan-enterprise.modelstudio.aliyunportal.com.
       *
       * @param request GetTokenPlanInviteLinkRequest
       * @return GetTokenPlanInviteLinkResponse
       */
      Models::GetTokenPlanInviteLinkResponse getTokenPlanInviteLink(const Models::GetTokenPlanInviteLinkRequest &request);

      /**
       * @summary Retrieves the TokenPlan member invitation configuration.
       *
       * @param request GetTokenPlanOrgInviteConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTokenPlanOrgInviteConfigResponse
       */
      Models::GetTokenPlanOrgInviteConfigResponse getTokenPlanOrgInviteConfigWithOptions(const Models::GetTokenPlanOrgInviteConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the TokenPlan member invitation configuration.
       *
       * @param request GetTokenPlanOrgInviteConfigRequest
       * @return GetTokenPlanOrgInviteConfigResponse
       */
      Models::GetTokenPlanOrgInviteConfigResponse getTokenPlanOrgInviteConfig(const Models::GetTokenPlanOrgInviteConfigRequest &request);

      /**
       * @summary Retrieves a list of API key authentication credentials.
       *
       * @param request ListApiKeysRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListApiKeysResponse
       */
      Models::ListApiKeysResponse listApiKeysWithOptions(const Models::ListApiKeysRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of API key authentication credentials.
       *
       * @param request ListApiKeysRequest
       * @return ListApiKeysResponse
       */
      Models::ListApiKeysResponse listApiKeys(const Models::ListApiKeysRequest &request);

      /**
       * @summary Queries the list of organization members including seat information. Supports filtering by name, status, and seat assignment, and supports pagination.
       *
       * @param request ListOrganizationMembersRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListOrganizationMembersResponse
       */
      Models::ListOrganizationMembersResponse listOrganizationMembersWithOptions(const Models::ListOrganizationMembersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of organization members including seat information. Supports filtering by name, status, and seat assignment, and supports pagination.
       *
       * @param request ListOrganizationMembersRequest
       * @return ListOrganizationMembersResponse
       */
      Models::ListOrganizationMembersResponse listOrganizationMembers(const Models::ListOrganizationMembersRequest &request);

      /**
       * @summary Queries the details of shared packages by paging.
       *
       * @param request ListSubscriptionSharedPackagesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSubscriptionSharedPackagesResponse
       */
      Models::ListSubscriptionSharedPackagesResponse listSubscriptionSharedPackagesWithOptions(const Models::ListSubscriptionSharedPackagesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of shared packages by paging.
       *
       * @param request ListSubscriptionSharedPackagesRequest
       * @return ListSubscriptionSharedPackagesResponse
       */
      Models::ListSubscriptionSharedPackagesResponse listSubscriptionSharedPackages(const Models::ListSubscriptionSharedPackagesRequest &request);

      /**
       * @summary Retrieves the list of business workspaces.
       *
       * @param request ListWorkspacesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListWorkspacesResponse
       */
      Models::ListWorkspacesResponse listWorkspacesWithOptions(const Models::ListWorkspacesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the list of business workspaces.
       *
       * @param request ListWorkspacesRequest
       * @return ListWorkspacesResponse
       */
      Models::ListWorkspacesResponse listWorkspaces(const Models::ListWorkspacesRequest &request);

      /**
       * @summary Removes organization members. Before removal, checks whether the member holds a seat. If the member holds a seat, the removal is rejected.
       *
       * @param request RemoveOrganizationMemberRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveOrganizationMemberResponse
       */
      Models::RemoveOrganizationMemberResponse removeOrganizationMemberWithOptions(const Models::RemoveOrganizationMemberRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes organization members. Before removal, checks whether the member holds a seat. If the member holds a seat, the removal is rejected.
       *
       * @param request RemoveOrganizationMemberRequest
       * @return RemoveOrganizationMemberResponse
       */
      Models::RemoveOrganizationMemberResponse removeOrganizationMember(const Models::RemoveOrganizationMemberRequest &request);

      /**
       * @summary Resets an API key.
       *
       * @description Only the API key value changes. The API key ID remains unchanged.
       *
       * @param request ResetApiKeyRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ResetApiKeyResponse
       */
      Models::ResetApiKeyResponse resetApiKeyWithOptions(const string &apiKeyId, const Models::ResetApiKeyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resets an API key.
       *
       * @description Only the API key value changes. The API key ID remains unchanged.
       *
       * @param request ResetApiKeyRequest
       * @return ResetApiKeyResponse
       */
      Models::ResetApiKeyResponse resetApiKey(const string &apiKeyId, const Models::ResetApiKeyRequest &request);

      /**
       * @summary Revokes a TokenPlan member invitation link.
       *
       * @param request RevokeTokenPlanInviteLinkRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RevokeTokenPlanInviteLinkResponse
       */
      Models::RevokeTokenPlanInviteLinkResponse revokeTokenPlanInviteLinkWithOptions(const Models::RevokeTokenPlanInviteLinkRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Revokes a TokenPlan member invitation link.
       *
       * @param request RevokeTokenPlanInviteLinkRequest
       * @return RevokeTokenPlanInviteLinkResponse
       */
      Models::RevokeTokenPlanInviteLinkResponse revokeTokenPlanInviteLink(const Models::RevokeTokenPlanInviteLinkRequest &request);

      /**
       * @summary Resets a UAC API key.
       *
       * @description Only the API Key value changes. The API Key ID remains unchanged.
       *
       * @param request RotateTokenPlanKeyRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RotateTokenPlanKeyResponse
       */
      Models::RotateTokenPlanKeyResponse rotateTokenPlanKeyWithOptions(const Models::RotateTokenPlanKeyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Resets a UAC API key.
       *
       * @description Only the API Key value changes. The API Key ID remains unchanged.
       *
       * @param request RotateTokenPlanKeyRequest
       * @return RotateTokenPlanKeyResponse
       */
      Models::RotateTokenPlanKeyResponse rotateTokenPlanKey(const Models::RotateTokenPlanKeyRequest &request);

      /**
       * @summary Configures the member invitation settings for a TokenPlan.
       *
       * @param request SetTokenPlanOrgInviteConfigRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetTokenPlanOrgInviteConfigResponse
       */
      Models::SetTokenPlanOrgInviteConfigResponse setTokenPlanOrgInviteConfigWithOptions(const Models::SetTokenPlanOrgInviteConfigRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures the member invitation settings for a TokenPlan.
       *
       * @param request SetTokenPlanOrgInviteConfigRequest
       * @return SetTokenPlanOrgInviteConfigResponse
       */
      Models::SetTokenPlanOrgInviteConfigResponse setTokenPlanOrgInviteConfig(const Models::SetTokenPlanOrgInviteConfigRequest &request);

      /**
       * @summary Edits the information of an authentication credential API key.
       *
       * @param request UpdateApiKeyRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateApiKeyResponse
       */
      Models::UpdateApiKeyResponse updateApiKeyWithOptions(const string &apiKeyId, const Models::UpdateApiKeyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Edits the information of an authentication credential API key.
       *
       * @param request UpdateApiKeyRequest
       * @return UpdateApiKeyResponse
       */
      Models::UpdateApiKeyResponse updateApiKey(const string &apiKeyId, const Models::UpdateApiKeyRequest &request);

      /**
       * @summary Modifies organization information.
       *
       * @param request UpdateOrganizationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateOrganizationResponse
       */
      Models::UpdateOrganizationResponse updateOrganizationWithOptions(const Models::UpdateOrganizationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies organization information.
       *
       * @param request UpdateOrganizationRequest
       * @return UpdateOrganizationResponse
       */
      Models::UpdateOrganizationResponse updateOrganization(const Models::UpdateOrganizationRequest &request);

      /**
       * @summary 修改组织成员角色
       *
       * @param request UpdateOrganizationMemberRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateOrganizationMemberResponse
       */
      Models::UpdateOrganizationMemberResponse updateOrganizationMemberWithOptions(const Models::UpdateOrganizationMemberRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改组织成员角色
       *
       * @param request UpdateOrganizationMemberRequest
       * @return UpdateOrganizationMemberResponse
       */
      Models::UpdateOrganizationMemberResponse updateOrganizationMember(const Models::UpdateOrganizationMemberRequest &request);
  };
} // namespace AlibabaCloud
} // namespace ModelStudio20260210
#endif
