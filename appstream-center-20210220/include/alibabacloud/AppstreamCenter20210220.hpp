// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_APPSTREAMCENTER20210220_HPP_
#define ALIBABACLOUD_APPSTREAMCENTER20210220_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/AppstreamCenter20210220Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/AppstreamCenter20210220.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210220
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 终端用户登出
       *
       * @param request ClientUserLogoutRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ClientUserLogoutResponse
       */
      Models::ClientUserLogoutResponse clientUserLogoutWithOptions(const Models::ClientUserLogoutRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 终端用户登出
       *
       * @param request ClientUserLogoutRequest
       * @return ClientUserLogoutResponse
       */
      Models::ClientUserLogoutResponse clientUserLogout(const Models::ClientUserLogoutRequest &request);

      /**
       * @summary Queries the information about identity providers by logon identifier.
       *
       * @param tmpReq FindIdpListByLoginIdentifierRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return FindIdpListByLoginIdentifierResponse
       */
      Models::FindIdpListByLoginIdentifierResponse findIdpListByLoginIdentifierWithOptions(const Models::FindIdpListByLoginIdentifierRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about identity providers by logon identifier.
       *
       * @param request FindIdpListByLoginIdentifierRequest
       * @return FindIdpListByLoginIdentifierResponse
       */
      Models::FindIdpListByLoginIdentifierResponse findIdpListByLoginIdentifier(const Models::FindIdpListByLoginIdentifierRequest &request);

      /**
       * @summary Queries a logon token using an enterprise identifier.
       *
       * @param tmpReq GetLoginTokenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetLoginTokenResponse
       */
      Models::GetLoginTokenResponse getLoginTokenWithOptions(const Models::GetLoginTokenRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a logon token using an enterprise identifier.
       *
       * @param request GetLoginTokenRequest
       * @return GetLoginTokenResponse
       */
      Models::GetLoginTokenResponse getLoginToken(const Models::GetLoginTokenRequest &request);

      /**
       * @summary Obtains an STS token.
       *
       * @param request GetStsTokenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetStsTokenResponse
       */
      Models::GetStsTokenResponse getStsTokenWithOptions(const Models::GetStsTokenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains an STS token.
       *
       * @param request GetStsTokenRequest
       * @return GetStsTokenResponse
       */
      Models::GetStsTokenResponse getStsToken(const Models::GetStsTokenRequest &request);

      /**
       * @summary Refreshes a logon token.
       *
       * @param request RefreshLoginTokenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RefreshLoginTokenResponse
       */
      Models::RefreshLoginTokenResponse refreshLoginTokenWithOptions(const Models::RefreshLoginTokenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Refreshes a logon token.
       *
       * @param request RefreshLoginTokenRequest
       * @return RefreshLoginTokenResponse
       */
      Models::RefreshLoginTokenResponse refreshLoginToken(const Models::RefreshLoginTokenRequest &request);
  };
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210220
#endif
