// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_AGENTIDENTITYDATA20251127_HPP_
#define ALIBABACLOUD_AGENTIDENTITYDATA20251127_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/AgentIdentityData20251127Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/AgentIdentityData20251127.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentIdentityData20251127
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 获取工作负载访问令牌
       *
       * @param request AssumeRoleForWorkloadIdentityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AssumeRoleForWorkloadIdentityResponse
       */
      Models::AssumeRoleForWorkloadIdentityResponse assumeRoleForWorkloadIdentityWithOptions(const Models::AssumeRoleForWorkloadIdentityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取工作负载访问令牌
       *
       * @param request AssumeRoleForWorkloadIdentityRequest
       * @return AssumeRoleForWorkloadIdentityResponse
       */
      Models::AssumeRoleForWorkloadIdentityResponse assumeRoleForWorkloadIdentity(const Models::AssumeRoleForWorkloadIdentityRequest &request);

      /**
       * @summary 确认用户授权会话已完成
       *
       * @param tmpReq CompleteResourceTokenAuthRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CompleteResourceTokenAuthResponse
       */
      Models::CompleteResourceTokenAuthResponse completeResourceTokenAuthWithOptions(const Models::CompleteResourceTokenAuthRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 确认用户授权会话已完成
       *
       * @param request CompleteResourceTokenAuthRequest
       * @return CompleteResourceTokenAuthResponse
       */
      Models::CompleteResourceTokenAuthResponse completeResourceTokenAuth(const Models::CompleteResourceTokenAuthRequest &request);

      /**
       * @summary 获取下游资源的 API 密钥
       *
       * @param request GetResourceAPIKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetResourceAPIKeyResponse
       */
      Models::GetResourceAPIKeyResponse getResourceAPIKeyWithOptions(const Models::GetResourceAPIKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取下游资源的 API 密钥
       *
       * @param request GetResourceAPIKeyRequest
       * @return GetResourceAPIKeyResponse
       */
      Models::GetResourceAPIKeyResponse getResourceAPIKey(const Models::GetResourceAPIKeyRequest &request);

      /**
       * @summary 获取下游资源的 OAuth 2.0 访问令牌
       *
       * @param tmpReq GetResourceOAuth2TokenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetResourceOAuth2TokenResponse
       */
      Models::GetResourceOAuth2TokenResponse getResourceOAuth2TokenWithOptions(const Models::GetResourceOAuth2TokenRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取下游资源的 OAuth 2.0 访问令牌
       *
       * @param request GetResourceOAuth2TokenRequest
       * @return GetResourceOAuth2TokenResponse
       */
      Models::GetResourceOAuth2TokenResponse getResourceOAuth2Token(const Models::GetResourceOAuth2TokenRequest &request);

      /**
       * @summary 获取工作负载访问令牌
       *
       * @param request GetWorkloadAccessTokenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetWorkloadAccessTokenResponse
       */
      Models::GetWorkloadAccessTokenResponse getWorkloadAccessTokenWithOptions(const Models::GetWorkloadAccessTokenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取工作负载访问令牌
       *
       * @param request GetWorkloadAccessTokenRequest
       * @return GetWorkloadAccessTokenResponse
       */
      Models::GetWorkloadAccessTokenResponse getWorkloadAccessToken(const Models::GetWorkloadAccessTokenRequest &request);

      /**
       * @summary 获取工作负载访问令牌
       *
       * @param request GetWorkloadAccessTokenForJWTRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetWorkloadAccessTokenForJWTResponse
       */
      Models::GetWorkloadAccessTokenForJWTResponse getWorkloadAccessTokenForJWTWithOptions(const Models::GetWorkloadAccessTokenForJWTRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取工作负载访问令牌
       *
       * @param request GetWorkloadAccessTokenForJWTRequest
       * @return GetWorkloadAccessTokenForJWTResponse
       */
      Models::GetWorkloadAccessTokenForJWTResponse getWorkloadAccessTokenForJWT(const Models::GetWorkloadAccessTokenForJWTRequest &request);

      /**
       * @summary 获取工作负载访问令牌
       *
       * @param request GetWorkloadAccessTokenForUserIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetWorkloadAccessTokenForUserIdResponse
       */
      Models::GetWorkloadAccessTokenForUserIdResponse getWorkloadAccessTokenForUserIdWithOptions(const Models::GetWorkloadAccessTokenForUserIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取工作负载访问令牌
       *
       * @param request GetWorkloadAccessTokenForUserIdRequest
       * @return GetWorkloadAccessTokenForUserIdResponse
       */
      Models::GetWorkloadAccessTokenForUserIdResponse getWorkloadAccessTokenForUserId(const Models::GetWorkloadAccessTokenForUserIdRequest &request);
  };
} // namespace AlibabaCloud
} // namespace AgentIdentityData20251127
#endif
