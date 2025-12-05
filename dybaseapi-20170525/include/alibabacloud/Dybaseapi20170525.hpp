// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_DYBASEAPI20170525_HPP_
#define ALIBABACLOUD_DYBASEAPI20170525_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Dybaseapi20170525Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Dybaseapi20170525.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dybaseapi20170525
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @param request QueryTokenForMnsQueueRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryTokenForMnsQueueResponse
       */
      Models::QueryTokenForMnsQueueResponse queryTokenForMnsQueueWithOptions(const Models::QueryTokenForMnsQueueRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QueryTokenForMnsQueueRequest
       * @return QueryTokenForMnsQueueResponse
       */
      Models::QueryTokenForMnsQueueResponse queryTokenForMnsQueue(const Models::QueryTokenForMnsQueueRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Dybaseapi20170525
#endif
