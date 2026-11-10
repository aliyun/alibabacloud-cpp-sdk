// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_INTERNETBANKOPEN20240612_HPP_
#define ALIBABACLOUD_INTERNETBANKOPEN20240612_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/InternetBankOpen20240612Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/InternetBankOpen20240612.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace InternetBankOpen20240612
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 数据产品统一调用入口
       *
       * @param request InvokeDataProductRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return InvokeDataProductResponse
       */
      Models::InvokeDataProductResponse invokeDataProductWithOptions(const Models::InvokeDataProductRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 数据产品统一调用入口
       *
       * @param request InvokeDataProductRequest
       * @return InvokeDataProductResponse
       */
      Models::InvokeDataProductResponse invokeDataProduct(const Models::InvokeDataProductRequest &request);
  };
} // namespace AlibabaCloud
} // namespace InternetBankOpen20240612
#endif
