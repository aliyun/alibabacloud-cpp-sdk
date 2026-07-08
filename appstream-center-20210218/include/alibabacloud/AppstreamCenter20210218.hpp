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
       * @summary Manually expires a logon token before its automatic expiration.
       *
       * @param request ExpireLoginTokenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExpireLoginTokenResponse
       */
      Models::ExpireLoginTokenResponse expireLoginTokenWithOptions(const Models::ExpireLoginTokenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Manually expires a logon token before its automatic expiration.
       *
       * @param request ExpireLoginTokenRequest
       * @return ExpireLoginTokenResponse
       */
      Models::ExpireLoginTokenResponse expireLoginToken(const Models::ExpireLoginTokenRequest &request);

      /**
       * @summary Obtains an authorization code that contains user identity and permission information. The authorization code can be used to launch a cloud application in integration scenarios.
       *
       * @param request GetAuthCodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAuthCodeResponse
       */
      Models::GetAuthCodeResponse getAuthCodeWithOptions(const Models::GetAuthCodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains an authorization code that contains user identity and permission information. The authorization code can be used to launch a cloud application in integration scenarios.
       *
       * @param request GetAuthCodeRequest
       * @return GetAuthCodeResponse
       */
      Models::GetAuthCodeResponse getAuthCode(const Models::GetAuthCodeRequest &request);

      /**
       * @summary Gets a Security Token Service (STS) token.
       *
       * @param request GetStsTokenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetStsTokenResponse
       */
      Models::GetStsTokenResponse getStsTokenWithOptions(const Models::GetStsTokenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Gets a Security Token Service (STS) token.
       *
       * @param request GetStsTokenRequest
       * @return GetStsTokenResponse
       */
      Models::GetStsTokenResponse getStsToken(const Models::GetStsTokenRequest &request);
  };
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210218
#endif
