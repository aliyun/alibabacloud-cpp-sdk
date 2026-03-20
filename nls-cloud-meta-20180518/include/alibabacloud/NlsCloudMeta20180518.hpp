// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_NLSCLOUDMETA20180518_HPP_
#define ALIBABACLOUD_NLSCLOUDMETA20180518_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/NlsCloudMeta20180518Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/NlsCloudMeta20180518.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NlsCloudMeta20180518
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 创建Token
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTokenResponse
       */
      Models::CreateTokenResponse createTokenWithOptions(const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建Token
       *
       * @return CreateTokenResponse
       */
      Models::CreateTokenResponse createToken();
  };
} // namespace AlibabaCloud
} // namespace NlsCloudMeta20180518
#endif
