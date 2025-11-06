// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_CONSOLECS20160406_HPP_
#define ALIBABACLOUD_CONSOLECS20160406_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Consolecs20160406Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Consolecs20160406.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Consolecs20160406
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @param request GetOpenApiListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOpenApiListResponse
       */
      Models::GetOpenApiListResponse getOpenApiListWithOptions(const Models::GetOpenApiListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetOpenApiListRequest
       * @return GetOpenApiListResponse
       */
      Models::GetOpenApiListResponse getOpenApiList(const Models::GetOpenApiListRequest &request);

      /**
       * @param request ListConsoleProductRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListConsoleProductResponse
       */
      Models::ListConsoleProductResponse listConsoleProductWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @return ListConsoleProductResponse
       */
      Models::ListConsoleProductResponse listConsoleProduct();
  };
} // namespace AlibabaCloud
} // namespace Consolecs20160406
#endif
