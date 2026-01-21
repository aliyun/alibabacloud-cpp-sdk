// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_BSN20150512_HPP_
#define ALIBABACLOUD_BSN20150512_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Bsn20150512Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Bsn20150512.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bsn20150512
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @param request GetBsnByResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetBsnByResourceResponse
       */
      Models::GetBsnByResourceResponse getBsnByResourceWithOptions(const Models::GetBsnByResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetBsnByResourceRequest
       * @return GetBsnByResourceResponse
       */
      Models::GetBsnByResourceResponse getBsnByResource(const Models::GetBsnByResourceRequest &request);

      /**
       * @summary 授权服务码，供虚商使用
       *
       * @param request GrantBsnCodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GrantBsnCodeResponse
       */
      Models::GrantBsnCodeResponse grantBsnCodeWithOptions(const Models::GrantBsnCodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 授权服务码，供虚商使用
       *
       * @param request GrantBsnCodeRequest
       * @return GrantBsnCodeResponse
       */
      Models::GrantBsnCodeResponse grantBsnCode(const Models::GrantBsnCodeRequest &request);

      /**
       * @param request ProductBindBsnRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ProductBindBsnResponse
       */
      Models::ProductBindBsnResponse productBindBsnWithOptions(const Models::ProductBindBsnRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ProductBindBsnRequest
       * @return ProductBindBsnResponse
       */
      Models::ProductBindBsnResponse productBindBsn(const Models::ProductBindBsnRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Bsn20150512
#endif
