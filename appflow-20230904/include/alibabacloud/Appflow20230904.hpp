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
       * @summary 创建连接流
       *
       * @param request CreateFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateFlowResponse
       */
      Models::CreateFlowResponse createFlowWithOptions(const Models::CreateFlowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建连接流
       *
       * @param request CreateFlowRequest
       * @return CreateFlowResponse
       */
      Models::CreateFlowResponse createFlow(const Models::CreateFlowRequest &request);

      /**
       * @summary 创建用户鉴权凭证
       *
       * @param request CreateUserAuthConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateUserAuthConfigResponse
       */
      Models::CreateUserAuthConfigResponse createUserAuthConfigWithOptions(const Models::CreateUserAuthConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建用户鉴权凭证
       *
       * @param request CreateUserAuthConfigRequest
       * @return CreateUserAuthConfigResponse
       */
      Models::CreateUserAuthConfigResponse createUserAuthConfig(const Models::CreateUserAuthConfigRequest &request);

      /**
       * @summary 删除连接流
       *
       * @param request DeleteFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteFlowResponse
       */
      Models::DeleteFlowResponse deleteFlowWithOptions(const Models::DeleteFlowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除连接流
       *
       * @param request DeleteFlowRequest
       * @return DeleteFlowResponse
       */
      Models::DeleteFlowResponse deleteFlow(const Models::DeleteFlowRequest &request);

      /**
       * @summary 删除用户鉴权凭证
       *
       * @param request DeleteUserAuthConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteUserAuthConfigResponse
       */
      Models::DeleteUserAuthConfigResponse deleteUserAuthConfigWithOptions(const Models::DeleteUserAuthConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除用户鉴权凭证
       *
       * @param request DeleteUserAuthConfigRequest
       * @return DeleteUserAuthConfigResponse
       */
      Models::DeleteUserAuthConfigResponse deleteUserAuthConfig(const Models::DeleteUserAuthConfigRequest &request);

      /**
       * @summary 禁用连接流
       *
       * @param request DisableFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableFlowResponse
       */
      Models::DisableFlowResponse disableFlowWithOptions(const Models::DisableFlowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 禁用连接流
       *
       * @param request DisableFlowRequest
       * @return DisableFlowResponse
       */
      Models::DisableFlowResponse disableFlow(const Models::DisableFlowRequest &request);

      /**
       * @summary 启用连接流
       *
       * @param request EnableFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableFlowResponse
       */
      Models::EnableFlowResponse enableFlowWithOptions(const Models::EnableFlowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 启用连接流
       *
       * @param request EnableFlowRequest
       * @return EnableFlowResponse
       */
      Models::EnableFlowResponse enableFlow(const Models::EnableFlowRequest &request);

      /**
       * @summary Generate Login Session Token
       *
       * @param request GenerateUserSessionTokenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateUserSessionTokenResponse
       */
      Models::GenerateUserSessionTokenResponse generateUserSessionTokenWithOptions(const Models::GenerateUserSessionTokenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Generate Login Session Token
       *
       * @param request GenerateUserSessionTokenRequest
       * @return GenerateUserSessionTokenResponse
       */
      Models::GenerateUserSessionTokenResponse generateUserSessionToken(const Models::GenerateUserSessionTokenRequest &request);

      /**
       * @summary 获取连接流详情
       *
       * @param request GetFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetFlowResponse
       */
      Models::GetFlowResponse getFlowWithOptions(const Models::GetFlowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取连接流详情
       *
       * @param request GetFlowRequest
       * @return GetFlowResponse
       */
      Models::GetFlowResponse getFlow(const Models::GetFlowRequest &request);

      /**
       * @summary 获取用户鉴权凭证详情
       *
       * @param request GetUserAuthConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUserAuthConfigResponse
       */
      Models::GetUserAuthConfigResponse getUserAuthConfigWithOptions(const Models::GetUserAuthConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取用户鉴权凭证详情
       *
       * @param request GetUserAuthConfigRequest
       * @return GetUserAuthConfigResponse
       */
      Models::GetUserAuthConfigResponse getUserAuthConfig(const Models::GetUserAuthConfigRequest &request);

      /**
       * @summary 运行连接器的执行动作
       *
       * @param tmpReq InvokeActionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return InvokeActionResponse
       */
      FutureGenerator<Models::InvokeActionResponse> invokeActionWithSSE(const Models::InvokeActionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 运行连接器的执行动作
       *
       * @param tmpReq InvokeActionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return InvokeActionResponse
       */
      Models::InvokeActionResponse invokeActionWithOptions(const Models::InvokeActionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 运行连接器的执行动作
       *
       * @param request InvokeActionRequest
       * @return InvokeActionResponse
       */
      Models::InvokeActionResponse invokeAction(const Models::InvokeActionRequest &request);

      /**
       * @summary 发布连接流
       *
       * @param request LaunchFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return LaunchFlowResponse
       */
      Models::LaunchFlowResponse launchFlowWithOptions(const Models::LaunchFlowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 发布连接流
       *
       * @param request LaunchFlowRequest
       * @return LaunchFlowResponse
       */
      Models::LaunchFlowResponse launchFlow(const Models::LaunchFlowRequest &request);

      /**
       * @summary 获取用户鉴权凭证列表
       *
       * @param request ListUserAuthConfigsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUserAuthConfigsResponse
       */
      Models::ListUserAuthConfigsResponse listUserAuthConfigsWithOptions(const Models::ListUserAuthConfigsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取用户鉴权凭证列表
       *
       * @param request ListUserAuthConfigsRequest
       * @return ListUserAuthConfigsResponse
       */
      Models::ListUserAuthConfigsResponse listUserAuthConfigs(const Models::ListUserAuthConfigsRequest &request);

      /**
       * @summary 更新连接流
       *
       * @param request UpdateFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateFlowResponse
       */
      Models::UpdateFlowResponse updateFlowWithOptions(const Models::UpdateFlowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新连接流
       *
       * @param request UpdateFlowRequest
       * @return UpdateFlowResponse
       */
      Models::UpdateFlowResponse updateFlow(const Models::UpdateFlowRequest &request);

      /**
       * @summary 编辑用户鉴权凭证
       *
       * @param request UpdateUserAuthConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateUserAuthConfigResponse
       */
      Models::UpdateUserAuthConfigResponse updateUserAuthConfigWithOptions(const Models::UpdateUserAuthConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 编辑用户鉴权凭证
       *
       * @param request UpdateUserAuthConfigRequest
       * @return UpdateUserAuthConfigResponse
       */
      Models::UpdateUserAuthConfigResponse updateUserAuthConfig(const Models::UpdateUserAuthConfigRequest &request);

      /**
       * @summary 下线连接流
       *
       * @param request WithdrawFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return WithdrawFlowResponse
       */
      Models::WithdrawFlowResponse withdrawFlowWithOptions(const Models::WithdrawFlowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 下线连接流
       *
       * @param request WithdrawFlowRequest
       * @return WithdrawFlowResponse
       */
      Models::WithdrawFlowResponse withdrawFlow(const Models::WithdrawFlowRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Appflow20230904
#endif
