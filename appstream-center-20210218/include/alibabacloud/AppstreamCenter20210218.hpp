// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_APPSTREAMCENTER20210218_HPP_
#define ALIBABACLOUD_APPSTREAMCENTER20210218_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/AppstreamCenter20210218Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/AppstreamCenter20210218.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210218
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Creates a time-limited static access token for a specified user in the current account to access a single cloud desktop.
       *
       * @description When you call this operation, you must provide Resource and specify both ResourceType and ResourceId. Only a single cloud desktop is supported. You cannot omit Resource to authorize or query all cloud desktops.
       * AuthorizerId is the WyId of the user and cannot be replaced by a username. BusinessChannel supports Enterprise and Business. If omitted, the default value is Enterprise.
       * Before creation, the user must belong to the current calling account and have access permissions for the target cloud desktop. This operation only creates an access token. It does not create a user or add an authorization relationship between the user and the cloud desktop. Each successful call creates a new time-limited token. To obtain an existing token, call GetLatestThirdAppAccessToken and pass the same AuthorizerId and Resource.
       * The unit of Expiration is seconds. Valid values: 1 to 15552000. If omitted, the default value is 15552000, which equals 180 days. Permanent validity is not supported. Keep the returned AccessToken secure and avoid displaying the full token in logs or public content.
       *
       * @param tmpReq CreateThirdAppAccessTokenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateThirdAppAccessTokenResponse
       */
      Models::CreateThirdAppAccessTokenResponse createThirdAppAccessTokenWithOptions(const Models::CreateThirdAppAccessTokenRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a time-limited static access token for a specified user in the current account to access a single cloud desktop.
       *
       * @description When you call this operation, you must provide Resource and specify both ResourceType and ResourceId. Only a single cloud desktop is supported. You cannot omit Resource to authorize or query all cloud desktops.
       * AuthorizerId is the WyId of the user and cannot be replaced by a username. BusinessChannel supports Enterprise and Business. If omitted, the default value is Enterprise.
       * Before creation, the user must belong to the current calling account and have access permissions for the target cloud desktop. This operation only creates an access token. It does not create a user or add an authorization relationship between the user and the cloud desktop. Each successful call creates a new time-limited token. To obtain an existing token, call GetLatestThirdAppAccessToken and pass the same AuthorizerId and Resource.
       * The unit of Expiration is seconds. Valid values: 1 to 15552000. If omitted, the default value is 15552000, which equals 180 days. Permanent validity is not supported. Keep the returned AccessToken secure and avoid displaying the full token in logs or public content.
       *
       * @param request CreateThirdAppAccessTokenRequest
       * @return CreateThirdAppAccessTokenResponse
       */
      Models::CreateThirdAppAccessTokenResponse createThirdAppAccessToken(const Models::CreateThirdAppAccessTokenRequest &request);

      /**
       * @summary Invalidates a Wuying Workspace logon session before it naturally expires.
       *
       * @param request ExpireLoginTokenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExpireLoginTokenResponse
       */
      Models::ExpireLoginTokenResponse expireLoginTokenWithOptions(const Models::ExpireLoginTokenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Invalidates a Wuying Workspace logon session before it naturally expires.
       *
       * @param request ExpireLoginTokenRequest
       * @return ExpireLoginTokenResponse
       */
      Models::ExpireLoginTokenResponse expireLoginToken(const Models::ExpireLoginTokenRequest &request);

      /**
       * @summary Retrieves an authorization code that contains user identity and permission information, which can be used to invoke cloud applications in integration scenarios.
       *
       * @description Retrieves an authorization code that contains user identity and permission information, which can be used to invoke cloud applications in integration scenarios.
       *
       * @param request GetAuthCodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAuthCodeResponse
       */
      Models::GetAuthCodeResponse getAuthCodeWithOptions(const Models::GetAuthCodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves an authorization code that contains user identity and permission information, which can be used to invoke cloud applications in integration scenarios.
       *
       * @description Retrieves an authorization code that contains user identity and permission information, which can be used to invoke cloud applications in integration scenarios.
       *
       * @param request GetAuthCodeRequest
       * @return GetAuthCodeResponse
       */
      Models::GetAuthCodeResponse getAuthCode(const Models::GetAuthCodeRequest &request);

      /**
       * @summary Retrieves the current valid static access token for a specified user and a single cloud desktop under the current account, keeping the original expiration time.
       *
       * @description You must provide Resource and specify both ResourceType and ResourceId when calling this operation. Only a single cloud desktop is supported. You cannot omit Resource to authorize or query all cloud desktops.
       * AuthorizerId is the WyId of the user and cannot be replaced by a username. BusinessChannel supports Enterprise and Business. If omitted, the default value is Enterprise.
       * The AuthorizerId and Resource in the query conditions must be consistent with those used when the token was created. This operation only returns the current valid token for the current account, user, and cloud desktop. It does not create a new token, renew the token, or restore or roll back to a historical token. If no valid token is found, the token has expired, or the corresponding cache has been cleared, AccessToken.NotFound is returned. To obtain a new token, call CreateThirdAppAccessToken.
       * Keep the returned AccessToken secure and avoid displaying the full token in logs or public content.
       *
       * @param tmpReq GetLatestThirdAppAccessTokenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetLatestThirdAppAccessTokenResponse
       */
      Models::GetLatestThirdAppAccessTokenResponse getLatestThirdAppAccessTokenWithOptions(const Models::GetLatestThirdAppAccessTokenRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the current valid static access token for a specified user and a single cloud desktop under the current account, keeping the original expiration time.
       *
       * @description You must provide Resource and specify both ResourceType and ResourceId when calling this operation. Only a single cloud desktop is supported. You cannot omit Resource to authorize or query all cloud desktops.
       * AuthorizerId is the WyId of the user and cannot be replaced by a username. BusinessChannel supports Enterprise and Business. If omitted, the default value is Enterprise.
       * The AuthorizerId and Resource in the query conditions must be consistent with those used when the token was created. This operation only returns the current valid token for the current account, user, and cloud desktop. It does not create a new token, renew the token, or restore or roll back to a historical token. If no valid token is found, the token has expired, or the corresponding cache has been cleared, AccessToken.NotFound is returned. To obtain a new token, call CreateThirdAppAccessToken.
       * Keep the returned AccessToken secure and avoid displaying the full token in logs or public content.
       *
       * @param request GetLatestThirdAppAccessTokenRequest
       * @return GetLatestThirdAppAccessTokenResponse
       */
      Models::GetLatestThirdAppAccessTokenResponse getLatestThirdAppAccessToken(const Models::GetLatestThirdAppAccessTokenRequest &request);

      /**
       * @summary Retrieves a Wuying STS token (temporary identity credential).
       *
       * @param request GetStsTokenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetStsTokenResponse
       */
      Models::GetStsTokenResponse getStsTokenWithOptions(const Models::GetStsTokenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a Wuying STS token (temporary identity credential).
       *
       * @param request GetStsTokenRequest
       * @return GetStsTokenResponse
       */
      Models::GetStsTokenResponse getStsToken(const Models::GetStsTokenRequest &request);
  };
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210218
#endif
