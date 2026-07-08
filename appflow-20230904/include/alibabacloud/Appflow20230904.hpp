// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_APPFLOW20230904_HPP_
#define ALIBABACLOUD_APPFLOW20230904_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Appflow20230904Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Appflow20230904.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Appflow20230904
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Creates a flow.
       *
       * @description Creates a flow or a flow version.
       *
       * @param request CreateFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateFlowResponse
       */
      Models::CreateFlowResponse createFlowWithOptions(const Models::CreateFlowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a flow.
       *
       * @description Creates a flow or a flow version.
       *
       * @param request CreateFlowRequest
       * @return CreateFlowResponse
       */
      Models::CreateFlowResponse createFlow(const Models::CreateFlowRequest &request);

      /**
       * @summary Creates a user authentication credential.
       *
       * @description Creates a connection flow or a connection flow version.
       *
       * @param request CreateUserAuthConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateUserAuthConfigResponse
       */
      Models::CreateUserAuthConfigResponse createUserAuthConfigWithOptions(const Models::CreateUserAuthConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a user authentication credential.
       *
       * @description Creates a connection flow or a connection flow version.
       *
       * @param request CreateUserAuthConfigRequest
       * @return CreateUserAuthConfigResponse
       */
      Models::CreateUserAuthConfigResponse createUserAuthConfig(const Models::CreateUserAuthConfigRequest &request);

      /**
       * @summary Deletes a connection flow.
       *
       * @param request DeleteFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteFlowResponse
       */
      Models::DeleteFlowResponse deleteFlowWithOptions(const Models::DeleteFlowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a connection flow.
       *
       * @param request DeleteFlowRequest
       * @return DeleteFlowResponse
       */
      Models::DeleteFlowResponse deleteFlow(const Models::DeleteFlowRequest &request);

      /**
       * @summary Deletes a user authentication credential.
       *
       * @description Creates a connection flow or a connection flow version.
       *
       * @param request DeleteUserAuthConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteUserAuthConfigResponse
       */
      Models::DeleteUserAuthConfigResponse deleteUserAuthConfigWithOptions(const Models::DeleteUserAuthConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a user authentication credential.
       *
       * @description Creates a connection flow or a connection flow version.
       *
       * @param request DeleteUserAuthConfigRequest
       * @return DeleteUserAuthConfigResponse
       */
      Models::DeleteUserAuthConfigResponse deleteUserAuthConfig(const Models::DeleteUserAuthConfigRequest &request);

      /**
       * @summary Disables a flow.
       *
       * @param request DisableFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableFlowResponse
       */
      Models::DisableFlowResponse disableFlowWithOptions(const Models::DisableFlowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables a flow.
       *
       * @param request DisableFlowRequest
       * @return DisableFlowResponse
       */
      Models::DisableFlowResponse disableFlow(const Models::DisableFlowRequest &request);

      /**
       * @summary Enables a flow.
       *
       * @param request EnableFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableFlowResponse
       */
      Models::EnableFlowResponse enableFlowWithOptions(const Models::EnableFlowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables a flow.
       *
       * @param request EnableFlowRequest
       * @return EnableFlowResponse
       */
      Models::EnableFlowResponse enableFlow(const Models::EnableFlowRequest &request);

      /**
       * @summary Generates a logon session token.
       *
       * @param request GenerateUserSessionTokenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateUserSessionTokenResponse
       */
      Models::GenerateUserSessionTokenResponse generateUserSessionTokenWithOptions(const Models::GenerateUserSessionTokenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Generates a logon session token.
       *
       * @param request GenerateUserSessionTokenRequest
       * @return GenerateUserSessionTokenResponse
       */
      Models::GenerateUserSessionTokenResponse generateUserSessionToken(const Models::GenerateUserSessionTokenRequest &request);

      /**
       * @summary Queries the details of a flow.
       *
       * @param request GetFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetFlowResponse
       */
      Models::GetFlowResponse getFlowWithOptions(const Models::GetFlowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a flow.
       *
       * @param request GetFlowRequest
       * @return GetFlowResponse
       */
      Models::GetFlowResponse getFlow(const Models::GetFlowRequest &request);

      /**
       * @summary Gets the details of a user authentication credential.
       *
       * @description This operation gets the details of a specified credential.
       *
       * @param request GetUserAuthConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUserAuthConfigResponse
       */
      Models::GetUserAuthConfigResponse getUserAuthConfigWithOptions(const Models::GetUserAuthConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Gets the details of a user authentication credential.
       *
       * @description This operation gets the details of a specified credential.
       *
       * @param request GetUserAuthConfigRequest
       * @return GetUserAuthConfigResponse
       */
      Models::GetUserAuthConfigResponse getUserAuthConfig(const Models::GetUserAuthConfigRequest &request);

      /**
       * @summary Invokes a connector action.
       *
       * @param tmpReq InvokeActionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return InvokeActionResponse
       */
      FutureGenerator<Models::InvokeActionResponse> invokeActionWithSSE(const Models::InvokeActionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invokes a connector action.
       *
       * @param tmpReq InvokeActionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return InvokeActionResponse
       */
      Models::InvokeActionResponse invokeActionWithOptions(const Models::InvokeActionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invokes a connector action.
       *
       * @param request InvokeActionRequest
       * @return InvokeActionResponse
       */
      Models::InvokeActionResponse invokeAction(const Models::InvokeActionRequest &request);

      /**
       * @summary Launches a flow.
       *
       * @param request LaunchFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return LaunchFlowResponse
       */
      Models::LaunchFlowResponse launchFlowWithOptions(const Models::LaunchFlowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Launches a flow.
       *
       * @param request LaunchFlowRequest
       * @return LaunchFlowResponse
       */
      Models::LaunchFlowResponse launchFlow(const Models::LaunchFlowRequest &request);

      /**
       * @summary Retrieves a list of connector flows.
       *
       * @description Creates a connector flow or a connector flow version.
       *
       * @param request ListFlowsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListFlowsResponse
       */
      Models::ListFlowsResponse listFlowsWithOptions(const Models::ListFlowsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of connector flows.
       *
       * @description Creates a connector flow or a connector flow version.
       *
       * @param request ListFlowsRequest
       * @return ListFlowsResponse
       */
      Models::ListFlowsResponse listFlows(const Models::ListFlowsRequest &request);

      /**
       * @summary Lists user authentication credentials.
       *
       * @description This operation retrieves user auth configs that match specified filters.
       *
       * @param request ListUserAuthConfigsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUserAuthConfigsResponse
       */
      Models::ListUserAuthConfigsResponse listUserAuthConfigsWithOptions(const Models::ListUserAuthConfigsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists user authentication credentials.
       *
       * @description This operation retrieves user auth configs that match specified filters.
       *
       * @param request ListUserAuthConfigsRequest
       * @return ListUserAuthConfigsResponse
       */
      Models::ListUserAuthConfigsResponse listUserAuthConfigs(const Models::ListUserAuthConfigsRequest &request);

      /**
       * @summary Updates a connection flow.
       *
       * @param request UpdateFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateFlowResponse
       */
      Models::UpdateFlowResponse updateFlowWithOptions(const Models::UpdateFlowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a connection flow.
       *
       * @param request UpdateFlowRequest
       * @return UpdateFlowResponse
       */
      Models::UpdateFlowResponse updateFlow(const Models::UpdateFlowRequest &request);

      /**
       * @summary Updates a user authentication credential.
       *
       * @description Updates the configuration of a specific user authentication credential.
       *
       * @param request UpdateUserAuthConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateUserAuthConfigResponse
       */
      Models::UpdateUserAuthConfigResponse updateUserAuthConfigWithOptions(const Models::UpdateUserAuthConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a user authentication credential.
       *
       * @description Updates the configuration of a specific user authentication credential.
       *
       * @param request UpdateUserAuthConfigRequest
       * @return UpdateUserAuthConfigResponse
       */
      Models::UpdateUserAuthConfigResponse updateUserAuthConfig(const Models::UpdateUserAuthConfigRequest &request);

      /**
       * @summary Withdraws a connection flow.
       *
       * @param request WithdrawFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return WithdrawFlowResponse
       */
      Models::WithdrawFlowResponse withdrawFlowWithOptions(const Models::WithdrawFlowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Withdraws a connection flow.
       *
       * @param request WithdrawFlowRequest
       * @return WithdrawFlowResponse
       */
      Models::WithdrawFlowResponse withdrawFlow(const Models::WithdrawFlowRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Appflow20230904
#endif
