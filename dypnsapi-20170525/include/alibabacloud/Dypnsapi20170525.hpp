// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_DYPNSAPI20170525_HPP_
#define ALIBABACLOUD_DYPNSAPI20170525_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Dypnsapi20170525Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Dypnsapi20170525.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dypnsapi20170525
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Verifies SMS verification codes.
       *
       * @param request CheckSmsVerifyCodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckSmsVerifyCodeResponse
       */
      Models::CheckSmsVerifyCodeResponse checkSmsVerifyCodeWithOptions(const Models::CheckSmsVerifyCodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Verifies SMS verification codes.
       *
       * @param request CheckSmsVerifyCodeRequest
       * @return CheckSmsVerifyCodeResponse
       */
      Models::CheckSmsVerifyCodeResponse checkSmsVerifyCode(const Models::CheckSmsVerifyCodeRequest &request);

      /**
       * @summary Creates a code for a converged communication authentication service.
       *
       * @param request CreateSchemeConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSchemeConfigResponse
       */
      Models::CreateSchemeConfigResponse createSchemeConfigWithOptions(const Models::CreateSchemeConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a code for a converged communication authentication service.
       *
       * @param request CreateSchemeConfigRequest
       * @return CreateSchemeConfigResponse
       */
      Models::CreateSchemeConfigResponse createSchemeConfig(const Models::CreateSchemeConfigRequest &request);

      /**
       * @summary Creates a verification service.
       *
       * @description ### [](#qps)QPS limits
       * You can call this operation up to 100 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request CreateVerifySchemeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateVerifySchemeResponse
       */
      Models::CreateVerifySchemeResponse createVerifySchemeWithOptions(const Models::CreateVerifySchemeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a verification service.
       *
       * @description ### [](#qps)QPS limits
       * You can call this operation up to 100 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request CreateVerifySchemeRequest
       * @return CreateVerifySchemeResponse
       */
      Models::CreateVerifySchemeResponse createVerifyScheme(const Models::CreateVerifySchemeRequest &request);

      /**
       * @summary Deletes a verification service.
       *
       * @description ### [](#qps)QPS limits
       * You can call this operation up to 100 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DeleteVerifySchemeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteVerifySchemeResponse
       */
      Models::DeleteVerifySchemeResponse deleteVerifySchemeWithOptions(const Models::DeleteVerifySchemeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a verification service.
       *
       * @description ### [](#qps)QPS limits
       * You can call this operation up to 100 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DeleteVerifySchemeRequest
       * @return DeleteVerifySchemeResponse
       */
      Models::DeleteVerifySchemeResponse deleteVerifyScheme(const Models::DeleteVerifySchemeRequest &request);

      /**
       * @summary Queries the details of a verification service.
       *
       * @description ### [](#qps)QPS limits
       * You can call this operation up to 100 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribeVerifySchemeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVerifySchemeResponse
       */
      Models::DescribeVerifySchemeResponse describeVerifySchemeWithOptions(const Models::DescribeVerifySchemeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a verification service.
       *
       * @description ### [](#qps)QPS limits
       * You can call this operation up to 100 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribeVerifySchemeRequest
       * @return DescribeVerifySchemeResponse
       */
      Models::DescribeVerifySchemeResponse describeVerifyScheme(const Models::DescribeVerifySchemeRequest &request);

      /**
       * @summary Obtains the authorization token used for the authentication of the phone number verification for HTML5 pages. You can obtain AccessToken and JwtToken after a successful call.
       *
       * @description ### [](#)Preparations
       * You must register an Alibaba Cloud account, obtain an Alibaba Cloud AccessKey pair, and create a verification service. For more information, see [Use the phone number verification feature for HTML5 pages](https://help.aliyun.com/document_detail/169786.html).
       * ### [](#qps)QPS limits
       * You can call this operation up to 1,000 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request GetAuthTokenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAuthTokenResponse
       */
      Models::GetAuthTokenResponse getAuthTokenWithOptions(const Models::GetAuthTokenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the authorization token used for the authentication of the phone number verification for HTML5 pages. You can obtain AccessToken and JwtToken after a successful call.
       *
       * @description ### [](#)Preparations
       * You must register an Alibaba Cloud account, obtain an Alibaba Cloud AccessKey pair, and create a verification service. For more information, see [Use the phone number verification feature for HTML5 pages](https://help.aliyun.com/document_detail/169786.html).
       * ### [](#qps)QPS limits
       * You can call this operation up to 1,000 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request GetAuthTokenRequest
       * @return GetAuthTokenResponse
       */
      Models::GetAuthTokenResponse getAuthToken(const Models::GetAuthTokenRequest &request);

      /**
       * @summary Obtains the URL for the Alipay account authorization.
       *
       * @description ### [](#)Preparations
       * You must register an Alibaba Cloud account and obtain an Alibaba Cloud AccessKey pair. For more information, see [Process of communication authorization](https://help.aliyun.com/document_detail/196922.html).
       * ### [](#qps)QPS limits
       * You can call this operation up to 1,000 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request GetAuthorizationUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAuthorizationUrlResponse
       */
      Models::GetAuthorizationUrlResponse getAuthorizationUrlWithOptions(const Models::GetAuthorizationUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the URL for the Alipay account authorization.
       *
       * @description ### [](#)Preparations
       * You must register an Alibaba Cloud account and obtain an Alibaba Cloud AccessKey pair. For more information, see [Process of communication authorization](https://help.aliyun.com/document_detail/196922.html).
       * ### [](#qps)QPS limits
       * You can call this operation up to 1,000 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request GetAuthorizationUrlRequest
       * @return GetAuthorizationUrlResponse
       */
      Models::GetAuthorizationUrlResponse getAuthorizationUrl(const Models::GetAuthorizationUrlRequest &request);

      /**
       * @summary Obtains the verification results by using the token that is obtained from the client SDKs.
       *
       * @param request GetFusionAuthTokenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetFusionAuthTokenResponse
       */
      Models::GetFusionAuthTokenResponse getFusionAuthTokenWithOptions(const Models::GetFusionAuthTokenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the verification results by using the token that is obtained from the client SDKs.
       *
       * @param request GetFusionAuthTokenRequest
       * @return GetFusionAuthTokenResponse
       */
      Models::GetFusionAuthTokenResponse getFusionAuthToken(const Models::GetFusionAuthTokenRequest &request);

      /**
       * @summary Obtains a phone number for one-click logon.
       *
       * @description ### [](#)Preparations
       * You must register an Alibaba Cloud account, obtain an Alibaba Cloud AccessKey pair, and create a verification service. For more information, see [Getting Started](https://help.aliyun.com/document_detail/84541.html).
       * >  This operation is applicable only to one-click logon or registration. You can call this operation only after you confirm the authorization on the authorization page provided by the SDK for one-click logon. You are prohibited from simulating or bypassing the authorization process. Alibaba Cloud reserves the right to terminate our services and take legal actions against such violations.
       * ### [](#qps)QPS limits
       * You can call this operation up to 5,000 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request GetMobileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMobileResponse
       */
      Models::GetMobileResponse getMobileWithOptions(const Models::GetMobileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains a phone number for one-click logon.
       *
       * @description ### [](#)Preparations
       * You must register an Alibaba Cloud account, obtain an Alibaba Cloud AccessKey pair, and create a verification service. For more information, see [Getting Started](https://help.aliyun.com/document_detail/84541.html).
       * >  This operation is applicable only to one-click logon or registration. You can call this operation only after you confirm the authorization on the authorization page provided by the SDK for one-click logon. You are prohibited from simulating or bypassing the authorization process. Alibaba Cloud reserves the right to terminate our services and take legal actions against such violations.
       * ### [](#qps)QPS limits
       * You can call this operation up to 5,000 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request GetMobileRequest
       * @return GetMobileResponse
       */
      Models::GetMobileResponse getMobile(const Models::GetMobileRequest &request);

      /**
       * @summary Obtains a phone number for one-click logon. This operation is exclusive to HTML5 pages.
       *
       * @description ### [](#)Preparations
       * You must register an Alibaba Cloud account, obtain an Alibaba Cloud AccessKey pair, and create a verification service. For more information, see [Getting Started](https://help.aliyun.com/document_detail/84541.html).
       * >  This operation is applicable only to one-click logon or registration in HTML5 pages. You can call this operation only after you confirm the authorization on the authorization page provided by the JavaScript SDK. You are prohibited from simulating or bypassing the authorization process. Alibaba Cloud reserves the right to terminate our services and take legal actions against such violations.
       * ### [](#qps)QPS limits
       * You can call this operation up to 500 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request GetPhoneWithTokenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPhoneWithTokenResponse
       */
      Models::GetPhoneWithTokenResponse getPhoneWithTokenWithOptions(const Models::GetPhoneWithTokenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains a phone number for one-click logon. This operation is exclusive to HTML5 pages.
       *
       * @description ### [](#)Preparations
       * You must register an Alibaba Cloud account, obtain an Alibaba Cloud AccessKey pair, and create a verification service. For more information, see [Getting Started](https://help.aliyun.com/document_detail/84541.html).
       * >  This operation is applicable only to one-click logon or registration in HTML5 pages. You can call this operation only after you confirm the authorization on the authorization page provided by the JavaScript SDK. You are prohibited from simulating or bypassing the authorization process. Alibaba Cloud reserves the right to terminate our services and take legal actions against such violations.
       * ### [](#qps)QPS limits
       * You can call this operation up to 500 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request GetPhoneWithTokenRequest
       * @return GetPhoneWithTokenResponse
       */
      Models::GetPhoneWithTokenResponse getPhoneWithToken(const Models::GetPhoneWithTokenRequest &request);

      /**
       * @summary Obtains the authorization token for an SMS verification code.
       *
       * @description ### [](#)Preparations
       * You must register an Alibaba Cloud account, obtain an Alibaba Cloud AccessKey pair, and create a verification service. For more information, see [Use the SMS verification feature](https://help.aliyun.com/document_detail/313209.html).
       * ### [](#qps)QPS limits
       * You can call this operation up to 5,000 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request GetSmsAuthTokensRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSmsAuthTokensResponse
       */
      Models::GetSmsAuthTokensResponse getSmsAuthTokensWithOptions(const Models::GetSmsAuthTokensRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the authorization token for an SMS verification code.
       *
       * @description ### [](#)Preparations
       * You must register an Alibaba Cloud account, obtain an Alibaba Cloud AccessKey pair, and create a verification service. For more information, see [Use the SMS verification feature](https://help.aliyun.com/document_detail/313209.html).
       * ### [](#qps)QPS limits
       * You can call this operation up to 5,000 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request GetSmsAuthTokensRequest
       * @return GetSmsAuthTokensResponse
       */
      Models::GetSmsAuthTokensResponse getSmsAuthTokens(const Models::GetSmsAuthTokensRequest &request);

      /**
       * @summary Queries the fees generated by a verification service.
       *
       * @description ### [](#qps)QPS limits
       * You can call this operation up to 500 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request QueryGateVerifyBillingPublicRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryGateVerifyBillingPublicResponse
       */
      Models::QueryGateVerifyBillingPublicResponse queryGateVerifyBillingPublicWithOptions(const Models::QueryGateVerifyBillingPublicRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the fees generated by a verification service.
       *
       * @description ### [](#qps)QPS limits
       * You can call this operation up to 500 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request QueryGateVerifyBillingPublicRequest
       * @return QueryGateVerifyBillingPublicResponse
       */
      Models::QueryGateVerifyBillingPublicResponse queryGateVerifyBillingPublic(const Models::QueryGateVerifyBillingPublicRequest &request);

      /**
       * @summary Queries the calls of Phone Number Verification Service.
       *
       * @description ### [](#qps)QPS limits
       * You can call this operation up to 500 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request QueryGateVerifyStatisticPublicRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryGateVerifyStatisticPublicResponse
       */
      Models::QueryGateVerifyStatisticPublicResponse queryGateVerifyStatisticPublicWithOptions(const Models::QueryGateVerifyStatisticPublicRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the calls of Phone Number Verification Service.
       *
       * @description ### [](#qps)QPS limits
       * You can call this operation up to 500 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request QueryGateVerifyStatisticPublicRequest
       * @return QueryGateVerifyStatisticPublicResponse
       */
      Models::QueryGateVerifyStatisticPublicResponse queryGateVerifyStatisticPublic(const Models::QueryGateVerifyStatisticPublicRequest &request);

      /**
       * @deprecated OpenAPI QuerySendDetails is deprecated
       *
       * @summary Queries the delivery status of the SMS verification code. You can query only the delivery status of the SMS verification code that is sent by calling corresponding API operations.
       *
       * @param request QuerySendDetailsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QuerySendDetailsResponse
       */
      Models::QuerySendDetailsResponse querySendDetailsWithOptions(const Models::QuerySendDetailsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI QuerySendDetails is deprecated
       *
       * @summary Queries the delivery status of the SMS verification code. You can query only the delivery status of the SMS verification code that is sent by calling corresponding API operations.
       *
       * @param request QuerySendDetailsRequest
       * @return QuerySendDetailsResponse
       */
      Models::QuerySendDetailsResponse querySendDetails(const Models::QuerySendDetailsRequest &request);

      /**
       * @summary Sends SMS verification codes.
       *
       * @param request SendSmsVerifyCodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SendSmsVerifyCodeResponse
       */
      Models::SendSmsVerifyCodeResponse sendSmsVerifyCodeWithOptions(const Models::SendSmsVerifyCodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sends SMS verification codes.
       *
       * @param request SendSmsVerifyCodeRequest
       * @return SendSmsVerifyCodeResponse
       */
      Models::SendSmsVerifyCodeResponse sendSmsVerifyCode(const Models::SendSmsVerifyCodeRequest &request);

      /**
       * @summary Verifies the phone number that you use.
       *
       * @description ### [](#)Preparations
       * You must register an Alibaba Cloud account, obtain an Alibaba Cloud AccessKey pair, and create a verification service. For more information, see [Getting Started](https://help.aliyun.com/document_detail/84541.html).
       * >  This operation is applicable to only the verification of thephone number that you use. To obtain a phone number for one-click logon, call [GetMobile](https://help.aliyun.com/document_detail/189865.html).
       * ### [](#qps)QPS limits
       * You can call this operation up to 5,000 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request VerifyMobileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return VerifyMobileResponse
       */
      Models::VerifyMobileResponse verifyMobileWithOptions(const Models::VerifyMobileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Verifies the phone number that you use.
       *
       * @description ### [](#)Preparations
       * You must register an Alibaba Cloud account, obtain an Alibaba Cloud AccessKey pair, and create a verification service. For more information, see [Getting Started](https://help.aliyun.com/document_detail/84541.html).
       * >  This operation is applicable to only the verification of thephone number that you use. To obtain a phone number for one-click logon, call [GetMobile](https://help.aliyun.com/document_detail/189865.html).
       * ### [](#qps)QPS limits
       * You can call this operation up to 5,000 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request VerifyMobileRequest
       * @return VerifyMobileResponse
       */
      Models::VerifyMobileResponse verifyMobile(const Models::VerifyMobileRequest &request);

      /**
       * @summary Verifies the phone number used in HTML5 pages.
       *
       * @description ### [](#)Preparations
       * You must register an Alibaba Cloud account, obtain an Alibaba Cloud AccessKey pair, and create a verification service. For more information, see [Use the phone number verification feature for HTML5 pages](https://help.aliyun.com/document_detail/169786.html).
       * ### [](#qps)QPS limits
       * You can call this operation up to 1,000 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request VerifyPhoneWithTokenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return VerifyPhoneWithTokenResponse
       */
      Models::VerifyPhoneWithTokenResponse verifyPhoneWithTokenWithOptions(const Models::VerifyPhoneWithTokenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Verifies the phone number used in HTML5 pages.
       *
       * @description ### [](#)Preparations
       * You must register an Alibaba Cloud account, obtain an Alibaba Cloud AccessKey pair, and create a verification service. For more information, see [Use the phone number verification feature for HTML5 pages](https://help.aliyun.com/document_detail/169786.html).
       * ### [](#qps)QPS limits
       * You can call this operation up to 1,000 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request VerifyPhoneWithTokenRequest
       * @return VerifyPhoneWithTokenResponse
       */
      Models::VerifyPhoneWithTokenResponse verifyPhoneWithToken(const Models::VerifyPhoneWithTokenRequest &request);

      /**
       * @summary Verifies SMS verification codes.
       *
       * @description ### [](#)Preparations
       * You must register an Alibaba Cloud account, obtain an Alibaba Cloud AccessKey pair, and create a verification service. For more information, see [Use the SMS verification feature](https://help.aliyun.com/document_detail/313209.html).
       * ### [](#qps)QPS limits
       * You can call this operation up to 500 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request VerifySmsCodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return VerifySmsCodeResponse
       */
      Models::VerifySmsCodeResponse verifySmsCodeWithOptions(const Models::VerifySmsCodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Verifies SMS verification codes.
       *
       * @description ### [](#)Preparations
       * You must register an Alibaba Cloud account, obtain an Alibaba Cloud AccessKey pair, and create a verification service. For more information, see [Use the SMS verification feature](https://help.aliyun.com/document_detail/313209.html).
       * ### [](#qps)QPS limits
       * You can call this operation up to 500 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request VerifySmsCodeRequest
       * @return VerifySmsCodeResponse
       */
      Models::VerifySmsCodeResponse verifySmsCode(const Models::VerifySmsCodeRequest &request);

      /**
       * @summary Obtains the verification results by using the verification token that is obtained by using the authentication token.
       *
       * @param request VerifyWithFusionAuthTokenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return VerifyWithFusionAuthTokenResponse
       */
      Models::VerifyWithFusionAuthTokenResponse verifyWithFusionAuthTokenWithOptions(const Models::VerifyWithFusionAuthTokenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the verification results by using the verification token that is obtained by using the authentication token.
       *
       * @param request VerifyWithFusionAuthTokenRequest
       * @return VerifyWithFusionAuthTokenResponse
       */
      Models::VerifyWithFusionAuthTokenResponse verifyWithFusionAuthToken(const Models::VerifyWithFusionAuthTokenRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Dypnsapi20170525
#endif
