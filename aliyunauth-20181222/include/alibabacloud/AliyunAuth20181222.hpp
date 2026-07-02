// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_ALIYUNAUTH20181222_HPP_
#define ALIBABACLOUD_ALIYUNAUTH20181222_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/AliyunAuth20181222Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/AliyunAuth20181222.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliyunAuth20181222
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @param request AuthenticateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AuthenticateResponse
       */
      Models::AuthenticateResponse authenticateWithOptions(const Models::AuthenticateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request AuthenticateRequest
       * @return AuthenticateResponse
       */
      Models::AuthenticateResponse authenticate(const Models::AuthenticateRequest &request);

      /**
       * @param request GetDetailByOrderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDetailByOrderResponse
       */
      Models::GetDetailByOrderResponse getDetailByOrderWithOptions(const Models::GetDetailByOrderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetDetailByOrderRequest
       * @return GetDetailByOrderResponse
       */
      Models::GetDetailByOrderResponse getDetailByOrder(const Models::GetDetailByOrderRequest &request);

      /**
       * @param request QueryAuthRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryAuthResponse
       */
      Models::QueryAuthResponse queryAuthWithOptions(const Models::QueryAuthRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QueryAuthRequest
       * @return QueryAuthResponse
       */
      Models::QueryAuthResponse queryAuth(const Models::QueryAuthRequest &request);

      /**
       * @param request QueryInEffectQuthOrderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryInEffectQuthOrderResponse
       */
      Models::QueryInEffectQuthOrderResponse queryInEffectQuthOrderWithOptions(const Models::QueryInEffectQuthOrderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request QueryInEffectQuthOrderRequest
       * @return QueryInEffectQuthOrderResponse
       */
      Models::QueryInEffectQuthOrderResponse queryInEffectQuthOrder(const Models::QueryInEffectQuthOrderRequest &request);
  };
} // namespace AlibabaCloud
} // namespace AliyunAuth20181222
#endif
