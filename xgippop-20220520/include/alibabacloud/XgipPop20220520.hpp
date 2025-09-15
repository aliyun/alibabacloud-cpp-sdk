// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_XGIPPOP20220520_HPP_
#define ALIBABACLOUD_XGIPPOP20220520_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/XgipPop20220520Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/XgipPop20220520.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace XgipPop20220520
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 订购qos云产品服务
       *
       * @param request OrderQosProductRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OrderQosProductResponse
       */
      Models::OrderQosProductResponse orderQosProductWithOptions(const Models::OrderQosProductRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 订购qos云产品服务
       *
       * @param request OrderQosProductRequest
       * @return OrderQosProductResponse
       */
      Models::OrderQosProductResponse orderQosProduct(const Models::OrderQosProductRequest &request);
  };
} // namespace AlibabaCloud
} // namespace XgipPop20220520
#endif
