// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_PAICOPILOT20250731_HPP_
#define ALIBABACLOUD_PAICOPILOT20250731_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/PAICopilot20250731Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/PAICopilot20250731.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAICopilot20250731
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary /api/v1/sessions
       *
       * @param request SearchInfoRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchInfoResponse
       */
      Models::SearchInfoResponse searchInfoWithOptions(const Models::SearchInfoRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary /api/v1/sessions
       *
       * @param request SearchInfoRequest
       * @return SearchInfoResponse
       */
      Models::SearchInfoResponse searchInfo(const Models::SearchInfoRequest &request);
  };
} // namespace AlibabaCloud
} // namespace PAICopilot20250731
#endif
