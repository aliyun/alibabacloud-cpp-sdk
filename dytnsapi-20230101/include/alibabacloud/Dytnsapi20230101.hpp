// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_DYTNSAPI20230101_HPP_
#define ALIBABACLOUD_DYTNSAPI20230101_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Dytnsapi20230101Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Dytnsapi20230101.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dytnsapi20230101
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary HLR服务
       *
       * @param request DescribeNumberHLRRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNumberHLRResponse
       */
      Models::DescribeNumberHLRResponse describeNumberHLRWithOptions(const Models::DescribeNumberHLRRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary HLR服务
       *
       * @param request DescribeNumberHLRRequest
       * @return DescribeNumberHLRResponse
       */
      Models::DescribeNumberHLRResponse describeNumberHLR(const Models::DescribeNumberHLRRequest &request);

      /**
       * @summary 号码百科国际站号码归属服务
       *
       * @param request DescribeNumberMccMncRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeNumberMccMncResponse
       */
      Models::DescribeNumberMccMncResponse describeNumberMccMncWithOptions(const Models::DescribeNumberMccMncRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 号码百科国际站号码归属服务
       *
       * @param request DescribeNumberMccMncRequest
       * @return DescribeNumberMccMncResponse
       */
      Models::DescribeNumberMccMncResponse describeNumberMccMnc(const Models::DescribeNumberMccMncRequest &request);

      /**
       * @summary 获取认证结果
       *
       * @param request GetIdentificationResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetIdentificationResultResponse
       */
      Models::GetIdentificationResultResponse getIdentificationResultWithOptions(const Models::GetIdentificationResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取认证结果
       *
       * @param request GetIdentificationResultRequest
       * @return GetIdentificationResultResponse
       */
      Models::GetIdentificationResultResponse getIdentificationResult(const Models::GetIdentificationResultRequest &request);

      /**
       * @summary 国际认证获取sessionId
       *
       * @param request GetIdentificationSessionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetIdentificationSessionResponse
       */
      Models::GetIdentificationSessionResponse getIdentificationSessionWithOptions(const Models::GetIdentificationSessionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 国际认证获取sessionId
       *
       * @param request GetIdentificationSessionRequest
       * @return GetIdentificationSessionResponse
       */
      Models::GetIdentificationSessionResponse getIdentificationSession(const Models::GetIdentificationSessionRequest &request);

      /**
       * @summary Obtains the verification result of your phone number.
       *
       * @param request GetPhoneNumberIdentificationResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPhoneNumberIdentificationResultResponse
       */
      Models::GetPhoneNumberIdentificationResultResponse getPhoneNumberIdentificationResultWithOptions(const Models::GetPhoneNumberIdentificationResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the verification result of your phone number.
       *
       * @param request GetPhoneNumberIdentificationResultRequest
       * @return GetPhoneNumberIdentificationResultResponse
       */
      Models::GetPhoneNumberIdentificationResultResponse getPhoneNumberIdentificationResult(const Models::GetPhoneNumberIdentificationResultRequest &request);

      /**
       * @summary Obtains the verification URL of your phone number.
       *
       * @param request GetPhoneNumberIdentificationUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPhoneNumberIdentificationUrlResponse
       */
      Models::GetPhoneNumberIdentificationUrlResponse getPhoneNumberIdentificationUrlWithOptions(const Models::GetPhoneNumberIdentificationUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the verification URL of your phone number.
       *
       * @param request GetPhoneNumberIdentificationUrlRequest
       * @return GetPhoneNumberIdentificationUrlResponse
       */
      Models::GetPhoneNumberIdentificationUrlResponse getPhoneNumberIdentificationUrl(const Models::GetPhoneNumberIdentificationUrlRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Dytnsapi20230101
#endif
