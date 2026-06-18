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
       * @summary Assigns seats in bulk to the member level.
       *
       * @param request BatchAssignSeatsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchAssignSeatsResponse
       */
      Models::BatchAssignSeatsResponse batchAssignSeatsWithOptions(const Models::BatchAssignSeatsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Assigns seats in bulk to the member level.
       *
       * @param request BatchAssignSeatsRequest
       * @return BatchAssignSeatsResponse
       */
      Models::BatchAssignSeatsResponse batchAssignSeats(const Models::BatchAssignSeatsRequest &request);

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
       * @summary Obtain the list of authentication credential API Key information.
       *
       * @param request ListApiKeysRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListApiKeysResponse
       */
      Models::ListApiKeysResponse listApiKeysWithOptions(const Models::ListApiKeysRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtain the list of authentication credential API Key information.
       *
       * @param request ListApiKeysRequest
       * @return ListApiKeysResponse
       */
      Models::ListApiKeysResponse listApiKeys(const Models::ListApiKeysRequest &request);

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
  };
} // namespace AlibabaCloud
} // namespace ModelStudio20260210
#endif
