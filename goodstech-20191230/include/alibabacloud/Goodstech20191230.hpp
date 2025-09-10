// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_GOODSTECH20191230_HPP_
#define ALIBABACLOUD_GOODSTECH20191230_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Goodstech20191230Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Goodstech20191230.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Goodstech20191230
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);

      Darabonba::Json _postOSSObject(const string &bucketName, const Darabonba::Json &form);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @param request ClassifyCommodityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ClassifyCommodityResponse
       */
      Models::ClassifyCommodityResponse classifyCommodityWithOptions(const Models::ClassifyCommodityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ClassifyCommodityRequest
       * @return ClassifyCommodityResponse
       */
      Models::ClassifyCommodityResponse classifyCommodity(const Models::ClassifyCommodityRequest &request);

      Models::ClassifyCommodityResponse classifyCommodityAdvance(const Models::ClassifyCommodityAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);
  };
} // namespace AlibabaCloud
} // namespace Goodstech20191230
#endif
