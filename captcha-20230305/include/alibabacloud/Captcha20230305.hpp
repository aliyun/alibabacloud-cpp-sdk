// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_CAPTCHA20230305_HPP_
#define ALIBABACLOUD_CAPTCHA20230305_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Captcha20230305Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Captcha20230305.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Captcha20230305
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 验证码验证
       *
       * @param request VerifyCaptchaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return VerifyCaptchaResponse
       */
      Models::VerifyCaptchaResponse verifyCaptchaWithOptions(const Models::VerifyCaptchaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 验证码验证
       *
       * @param request VerifyCaptchaRequest
       * @return VerifyCaptchaResponse
       */
      Models::VerifyCaptchaResponse verifyCaptcha(const Models::VerifyCaptchaRequest &request);

      /**
       * @summary 验证码验证
       *
       * @param request VerifyIntelligentCaptchaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return VerifyIntelligentCaptchaResponse
       */
      Models::VerifyIntelligentCaptchaResponse verifyIntelligentCaptchaWithOptions(const Models::VerifyIntelligentCaptchaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 验证码验证
       *
       * @param request VerifyIntelligentCaptchaRequest
       * @return VerifyIntelligentCaptchaResponse
       */
      Models::VerifyIntelligentCaptchaResponse verifyIntelligentCaptcha(const Models::VerifyIntelligentCaptchaRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Captcha20230305
#endif
