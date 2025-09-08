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
  };
} // namespace AlibabaCloud
} // namespace Appflow20230904
#endif
