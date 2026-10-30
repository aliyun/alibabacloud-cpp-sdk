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
       * @summary Creates an account and directly adds a member.
       *
       * @param request AddOrganizationMemberRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddOrganizationMemberResponse
       */
      Models::AddOrganizationMemberResponse addOrganizationMemberWithOptions(const Models::AddOrganizationMemberRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an account and directly adds a member.
       *
       * @param request AddOrganizationMemberRequest
       * @return AddOrganizationMemberResponse
       */
      Models::AddOrganizationMemberResponse addOrganizationMember(const Models::AddOrganizationMemberRequest &request);

      /**
       * @summary Assigns seats to member accounts in batches.
       *
       * @param request BatchAssignSeatsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchAssignSeatsResponse
       */
      Models::BatchAssignSeatsResponse batchAssignSeatsWithOptions(const Models::BatchAssignSeatsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Assigns seats to member accounts in batches.
       *
       * @param request BatchAssignSeatsRequest
       * @return BatchAssignSeatsResponse
       */
      Models::BatchAssignSeatsResponse batchAssignSeats(const Models::BatchAssignSeatsRequest &request);

      /**
       * @summary Revokes member-level seats in bulk.
       *
       * @param tmpReq BatchRevokeSeatsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchRevokeSeatsResponse
       */
      Models::BatchRevokeSeatsResponse batchRevokeSeatsWithOptions(const Models::BatchRevokeSeatsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Revokes member-level seats in bulk.
       *
       * @param request BatchRevokeSeatsRequest
       * @return BatchRevokeSeatsResponse
       */
      Models::BatchRevokeSeatsResponse batchRevokeSeats(const Models::BatchRevokeSeatsRequest &request);

      /**
       * @summary Creates an API key as an authentication credential before using large models or applications in Alibaba Cloud Model Studio.
       *
       * @param request CreateApiKeyRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateApiKeyResponse
       */
      Models::CreateApiKeyResponse createApiKeyWithOptions(const Models::CreateApiKeyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an API key as an authentication credential before using large models or applications in Alibaba Cloud Model Studio.
       *
       * @param request CreateApiKeyRequest
       * @return CreateApiKeyResponse
       */
      Models::CreateApiKeyResponse createApiKey(const Models::CreateApiKeyRequest &request);

      /**
       * @summary Creates an invitation link for a TokenPlan member.
       *
       * @description A user can have only one valid invitation link.
       * If the user already has a valid invitation link, this operation returns the existing link.
       * To create a new link, call the RevokeTokenPlanInviteLink operation to invalidate the current link.
       * This operation returns only the generated token. The invitation link is concatenated in the following format: `https://{host}/accept-invite?token=[token]&orgId=[orgId]`.
       * * For the China site, the host is tokenplan-enterprise.bailian.aliyunportal.com.
       * * For the international site, the host is tokenplan-enterprise.modelstudio.aliyunportal.com.
       *
       * @param request CreateTokenPlanInviteLinkRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTokenPlanInviteLinkResponse
       */
      Models::CreateTokenPlanInviteLinkResponse createTokenPlanInviteLinkWithOptions(const Models::CreateTokenPlanInviteLinkRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an invitation link for a TokenPlan member.
       *
       * @description A user can have only one valid invitation link.
       * If the user already has a valid invitation link, this operation returns the existing link.
       * To create a new link, call the RevokeTokenPlanInviteLink operation to invalidate the current link.
       * This operation returns only the generated token. The invitation link is concatenated in the following format: `https://{host}/accept-invite?token=[token]&orgId=[orgId]`.
       * * For the China site, the host is tokenplan-enterprise.bailian.aliyunportal.com.
       * * For the international site, the host is tokenplan-enterprise.modelstudio.aliyunportal.com.
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
       * @summary Creates a workspace.
       *
       * @param request CreateWorkspaceRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateWorkspaceResponse
       */
      Models::CreateWorkspaceResponse createWorkspaceWithOptions(const Models::CreateWorkspaceRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a workspace.
       *
       * @param request CreateWorkspaceRequest
       * @return CreateWorkspaceResponse
       */
      Models::CreateWorkspaceResponse createWorkspace(const Models::CreateWorkspaceRequest &request);

      /**
       * @summary Deletes an authentication API key.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteApiKeyResponse
       */
      Models::DeleteApiKeyResponse deleteApiKeyWithOptions(const string &apiKeyId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an authentication API key.
       *
       * @return DeleteApiKeyResponse
       */
      Models::DeleteApiKeyResponse deleteApiKey(const string &apiKeyId);

      /**
       * @summary Deletes a workspace.
       *
       * @description You can delete a workspace only if it meets the following conditional requirements:
       * 1. The workspace is not the default workspace.
       * 2. The workspace is not used to purchase other services, such as AMB.
       * 3. The workspace is not granted to Resource Access Management (RAM) users or RAM roles in permission management.
       * 4. No resources exist in the workspace, such as API keys, model deployments, or knowledge bases.
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
       * @description You can delete a workspace only if it meets the following conditional requirements:
       * 1. The workspace is not the default workspace.
       * 2. The workspace is not used to purchase other services, such as AMB.
       * 3. The workspace is not granted to Resource Access Management (RAM) users or RAM roles in permission management.
       * 4. No resources exist in the workspace, such as API keys, model deployments, or knowledge bases.
       *
       * @param request DeleteWorkspaceRequest
       * @return DeleteWorkspaceResponse
       */
      Models::DeleteWorkspaceResponse deleteWorkspace(const string &workspaceId, const Models::DeleteWorkspaceRequest &request);

      /**
       * @summary Disables an API key.
       *
       * @description You cannot disable an API key repeatedly.
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
       * @description You cannot disable an API key repeatedly.
       *
       * @param request DisableApiKeyRequest
       * @return DisableApiKeyResponse
       */
      Models::DisableApiKeyResponse disableApiKey(const string &apiKeyId, const Models::DisableApiKeyRequest &request);

      /**
       * @summary Enables an API key.
       *
       * @description You cannot enable an API key multiple times.
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
       * @description You cannot enable an API key multiple times.
       *
       * @param request EnableApiKeyRequest
       * @return EnableApiKeyResponse
       */
      Models::EnableApiKeyResponse enableApiKey(const string &apiKeyId, const Models::EnableApiKeyRequest &request);

      /**
       * @summary Retrieves the information about a specified API key.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetApiKeyResponse
       */
      Models::GetApiKeyResponse getApiKeyWithOptions(const string &apiKeyId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the information about a specified API key.
       *
       * @return GetApiKeyResponse
       */
      Models::GetApiKeyResponse getApiKey(const string &apiKeyId);

      /**
       * @summary Queries the billing overview.
       *
       * @param tmpReq GetBillingOverviewRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetBillingOverviewResponse
       */
      Models::GetBillingOverviewResponse getBillingOverviewWithOptions(const Models::GetBillingOverviewRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the billing overview.
       *
       * @param request GetBillingOverviewRequest
       * @return GetBillingOverviewResponse
       */
      Models::GetBillingOverviewResponse getBillingOverview(const Models::GetBillingOverviewRequest &request);

      /**
       * @summary Queries the billing trends.
       *
       * @param tmpReq GetBillingTrendRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetBillingTrendResponse
       */
      Models::GetBillingTrendResponse getBillingTrendWithOptions(const Models::GetBillingTrendRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the billing trends.
       *
       * @param request GetBillingTrendRequest
       * @return GetBillingTrendResponse
       */
      Models::GetBillingTrendResponse getBillingTrend(const Models::GetBillingTrendRequest &request);

      /**
       * @summary Retrieves the details of a specified organization.
       *
       * @description Retrieves the details of a specified organization by using the organization ID.
       *
       * @param request GetOrganizationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOrganizationResponse
       */
      Models::GetOrganizationResponse getOrganizationWithOptions(const Models::GetOrganizationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a specified organization.
       *
       * @description Retrieves the details of a specified organization by using the organization ID.
       *
       * @param request GetOrganizationRequest
       * @return GetOrganizationResponse
       */
      Models::GetOrganizationResponse getOrganization(const Models::GetOrganizationRequest &request);

      /**
       * @summary Queries the statistics information of organization members, including the total number of members, the number of administrators, the number of regular members, the number of members with allocated seats, and the number of members without allocated seats.
       *
       * @param request GetOrganizationMemberSeatStatsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOrganizationMemberSeatStatsResponse
       */
      Models::GetOrganizationMemberSeatStatsResponse getOrganizationMemberSeatStatsWithOptions(const Models::GetOrganizationMemberSeatStatsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the statistics information of organization members, including the total number of members, the number of administrators, the number of regular members, the number of members with allocated seats, and the number of members without allocated seats.
       *
       * @param request GetOrganizationMemberSeatStatsRequest
       * @return GetOrganizationMemberSeatStatsResponse
       */
      Models::GetOrganizationMemberSeatStatsResponse getOrganizationMemberSeatStats(const Models::GetOrganizationMemberSeatStatsRequest &request);

      /**
       * @summary Performs a paging query on seat details.
       *
       * @param request GetSubscriptionSeatDetailsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSubscriptionSeatDetailsResponse
       */
      Models::GetSubscriptionSeatDetailsResponse getSubscriptionSeatDetailsWithOptions(const Models::GetSubscriptionSeatDetailsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs a paging query on seat details.
       *
       * @param request GetSubscriptionSeatDetailsRequest
       * @return GetSubscriptionSeatDetailsResponse
       */
      Models::GetSubscriptionSeatDetailsResponse getSubscriptionSeatDetails(const Models::GetSubscriptionSeatDetailsRequest &request);

      /**
       * @summary Queries the member and seat count information for member management.
       *
       * @param request GetSubscriptionStatsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSubscriptionStatsResponse
       */
      Models::GetSubscriptionStatsResponse getSubscriptionStatsWithOptions(const Models::GetSubscriptionStatsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the member and seat count information for member management.
       *
       * @param request GetSubscriptionStatsRequest
       * @return GetSubscriptionStatsResponse
       */
      Models::GetSubscriptionStatsResponse getSubscriptionStats(const Models::GetSubscriptionStatsRequest &request);

      /**
       * @summary Retrieves the details and organization information of a TokenPlan account.
       *
       * @description Retrieves the account information from the TokenPlan management platform when logged on.
       *
       * @param request GetTokenPlanAccountDetailRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTokenPlanAccountDetailResponse
       */
      Models::GetTokenPlanAccountDetailResponse getTokenPlanAccountDetailWithOptions(const Models::GetTokenPlanAccountDetailRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details and organization information of a TokenPlan account.
       *
       * @description Retrieves the account information from the TokenPlan management platform when logged on.
       *
       * @param request GetTokenPlanAccountDetailRequest
       * @return GetTokenPlanAccountDetailResponse
       */
      Models::GetTokenPlanAccountDetailResponse getTokenPlanAccountDetail(const Models::GetTokenPlanAccountDetailRequest &request);

      /**
       * @summary Retrieves the invitation link for a TokenPlan member.
       *
       * @description This operation returns only the generated token and expiration time. The invitation link is concatenated in the following format: `https://{host}/accept-invite?token=[token]&orgId=[orgId]`.
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
       * @summary Retrieves the invitation link for a TokenPlan member.
       *
       * @description This operation returns only the generated token and expiration time. The invitation link is concatenated in the following format: `https://{host}/accept-invite?token=[token]&orgId=[orgId]`.
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
       * @summary Retrieves a list of API Key authentication credentials.
       *
       * @param request ListApiKeysRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListApiKeysResponse
       */
      Models::ListApiKeysResponse listApiKeysWithOptions(const Models::ListApiKeysRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of API Key authentication credentials.
       *
       * @param request ListApiKeysRequest
       * @return ListApiKeysResponse
       */
      Models::ListApiKeysResponse listApiKeys(const Models::ListApiKeysRequest &request);

      /**
       * @summary Queries model throttling for a workspace.
       *
       * @param request ListModelLimitsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListModelLimitsResponse
       */
      Models::ListModelLimitsResponse listModelLimitsWithOptions(const Models::ListModelLimitsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries model throttling for a workspace.
       *
       * @param request ListModelLimitsRequest
       * @return ListModelLimitsResponse
       */
      Models::ListModelLimitsResponse listModelLimits(const Models::ListModelLimitsRequest &request);

      /**
       * @summary Queries model authorizations in a workspace.
       *
       * @description ## Request description
       * - Specify the workspace to query by using `workspaceId` (required and cannot be empty).
       * - Uses token-based pagination: `nextToken` is a string offset and is not required for the first page. The default value of `maxResults` is 20. If the value exceeds the upper limit, the `InvalidParameter.maxResults` error is returned.
       * - `authorizationScope` controls the query dimension: `AUTHORIZED` specifies models that are authorized for the specified action, and `AUTHORIZABLE` specifies all authorizable directories.
       * - `modelAction` specifies the authorization action dimension. Currently, only `INFERENCE` is supported. If this parameter is left empty, the default value `INFERENCE` is used.
       * - `filter` supports filtering by `name` (fuzzy match for model and name) or `model` (exact match for a single model).
       * - Returns `TokenBasedPage`, which contains the authorization status (inference, fine-tuning, and deployment) and throttling information for each model.
       *
       * @param request ListModelPermissionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListModelPermissionsResponse
       */
      Models::ListModelPermissionsResponse listModelPermissionsWithOptions(const Models::ListModelPermissionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries model authorizations in a workspace.
       *
       * @description ## Request description
       * - Specify the workspace to query by using `workspaceId` (required and cannot be empty).
       * - Uses token-based pagination: `nextToken` is a string offset and is not required for the first page. The default value of `maxResults` is 20. If the value exceeds the upper limit, the `InvalidParameter.maxResults` error is returned.
       * - `authorizationScope` controls the query dimension: `AUTHORIZED` specifies models that are authorized for the specified action, and `AUTHORIZABLE` specifies all authorizable directories.
       * - `modelAction` specifies the authorization action dimension. Currently, only `INFERENCE` is supported. If this parameter is left empty, the default value `INFERENCE` is used.
       * - `filter` supports filtering by `name` (fuzzy match for model and name) or `model` (exact match for a single model).
       * - Returns `TokenBasedPage`, which contains the authorization status (inference, fine-tuning, and deployment) and throttling information for each model.
       *
       * @param request ListModelPermissionsRequest
       * @return ListModelPermissionsResponse
       */
      Models::ListModelPermissionsResponse listModelPermissions(const Models::ListModelPermissionsRequest &request);

      /**
       * @summary Queries a list of models.
       *
       * @param tmpReq ListModelsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListModelsResponse
       */
      Models::ListModelsResponse listModelsWithOptions(const Models::ListModelsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of models.
       *
       * @param request ListModelsRequest
       * @return ListModelsResponse
       */
      Models::ListModelsResponse listModels(const Models::ListModelsRequest &request);

      /**
       * @summary Queries a list of organization members, including seat information. Supports filtering by name, status, and seat allocation status, and supports pagination.
       *
       * @param request ListOrganizationMembersRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListOrganizationMembersResponse
       */
      Models::ListOrganizationMembersResponse listOrganizationMembersWithOptions(const Models::ListOrganizationMembersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of organization members, including seat information. Supports filtering by name, status, and seat allocation status, and supports pagination.
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
       * @summary Retrieves the list of workspaces.
       *
       * @param request ListWorkspacesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListWorkspacesResponse
       */
      Models::ListWorkspacesResponse listWorkspacesWithOptions(const Models::ListWorkspacesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the list of workspaces.
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
       * @summary Revokes the TokenPlan member invitation link.
       *
       * @param request RevokeTokenPlanInviteLinkRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return RevokeTokenPlanInviteLinkResponse
       */
      Models::RevokeTokenPlanInviteLinkResponse revokeTokenPlanInviteLinkWithOptions(const Models::RevokeTokenPlanInviteLinkRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Revokes the TokenPlan member invitation link.
       *
       * @param request RevokeTokenPlanInviteLinkRequest
       * @return RevokeTokenPlanInviteLinkResponse
       */
      Models::RevokeTokenPlanInviteLinkResponse revokeTokenPlanInviteLink(const Models::RevokeTokenPlanInviteLinkRequest &request);

      /**
       * @summary Resets a UAC API key.
       *
       * @description Only the API key changes. The API key ID remains unchanged.
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
       * @description Only the API key changes. The API key ID remains unchanged.
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
       * @summary Modifies the information of an API key.
       *
       * @param request UpdateApiKeyRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateApiKeyResponse
       */
      Models::UpdateApiKeyResponse updateApiKeyWithOptions(const string &apiKeyId, const Models::UpdateApiKeyRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the information of an API key.
       *
       * @param request UpdateApiKeyRequest
       * @return UpdateApiKeyResponse
       */
      Models::UpdateApiKeyResponse updateApiKey(const string &apiKeyId, const Models::UpdateApiKeyRequest &request);

      /**
       * @summary Updates the model throttling settings for a workspace.
       *
       * @param tmpReq UpdateModelLimitsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateModelLimitsResponse
       */
      Models::UpdateModelLimitsResponse updateModelLimitsWithOptions(const Models::UpdateModelLimitsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the model throttling settings for a workspace.
       *
       * @param request UpdateModelLimitsRequest
       * @return UpdateModelLimitsResponse
       */
      Models::UpdateModelLimitsResponse updateModelLimits(const Models::UpdateModelLimitsRequest &request);

      /**
       * @summary Updates the model authorization for a workspace.
       *
       * @param request UpdateModelPermissionsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateModelPermissionsResponse
       */
      Models::UpdateModelPermissionsResponse updateModelPermissionsWithOptions(const Models::UpdateModelPermissionsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the model authorization for a workspace.
       *
       * @param request UpdateModelPermissionsRequest
       * @return UpdateModelPermissionsResponse
       */
      Models::UpdateModelPermissionsResponse updateModelPermissions(const Models::UpdateModelPermissionsRequest &request);

      /**
       * @summary Modifies the organization information.
       *
       * @param request UpdateOrganizationRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateOrganizationResponse
       */
      Models::UpdateOrganizationResponse updateOrganizationWithOptions(const Models::UpdateOrganizationRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the organization information.
       *
       * @param request UpdateOrganizationRequest
       * @return UpdateOrganizationResponse
       */
      Models::UpdateOrganizationResponse updateOrganization(const Models::UpdateOrganizationRequest &request);

      /**
       * @summary Modifies the roles of organization members.
       *
       * @param request UpdateOrganizationMemberRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateOrganizationMemberResponse
       */
      Models::UpdateOrganizationMemberResponse updateOrganizationMemberWithOptions(const Models::UpdateOrganizationMemberRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the roles of organization members.
       *
       * @param request UpdateOrganizationMemberRequest
       * @return UpdateOrganizationMemberResponse
       */
      Models::UpdateOrganizationMemberResponse updateOrganizationMember(const Models::UpdateOrganizationMemberRequest &request);
  };
} // namespace AlibabaCloud
} // namespace ModelStudio20260210
#endif
