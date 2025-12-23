// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_NLSCLOUDMETA20190228_HPP_
#define ALIBABACLOUD_NLSCLOUDMETA20190228_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/NlsCloudMeta20190228Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/NlsCloudMeta20190228.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NlsCloudMeta20190228
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 创建鉴权Token
       *
       * @param request CreateTokenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTokenResponse
       */
      Models::CreateTokenResponse createTokenWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建鉴权Token
       *
       * @return CreateTokenResponse
       */
      Models::CreateTokenResponse createToken();
  };
} // namespace AlibabaCloud
} // namespace NlsCloudMeta20190228
#endif
