// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_DYTNSAPI20200217_HPP_
#define ALIBABACLOUD_DYTNSAPI20200217_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Dytnsapi20200217Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Dytnsapi20200217.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dytnsapi20200217
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 身份证三要素
       *
       * @param request CertNoThreeElementVerificationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CertNoThreeElementVerificationResponse
       */
      Models::CertNoThreeElementVerificationResponse certNoThreeElementVerificationWithOptions(const Models::CertNoThreeElementVerificationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 身份证三要素
       *
       * @param request CertNoThreeElementVerificationRequest
       * @return CertNoThreeElementVerificationResponse
       */
      Models::CertNoThreeElementVerificationResponse certNoThreeElementVerification(const Models::CertNoThreeElementVerificationRequest &request);

      /**
       * @summary 身份证二要素认证
       *
       * @param request CertNoTwoElementVerificationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CertNoTwoElementVerificationResponse
       */
      Models::CertNoTwoElementVerificationResponse certNoTwoElementVerificationWithOptions(const Models::CertNoTwoElementVerificationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 身份证二要素认证
       *
       * @param request CertNoTwoElementVerificationRequest
       * @return CertNoTwoElementVerificationResponse
       */
      Models::CertNoTwoElementVerificationResponse certNoTwoElementVerification(const Models::CertNoTwoElementVerificationRequest &request);

      /**
       * @summary Verifies whether the enterprise name, the business license number, and the name and ID card of the legal representative belong to the same enterprise. The verification is successful only when the preceding four elements belong to the same enterprise and the business status of the enterprise is Active.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the billing of services related to four-element verification for enterprises. For more information, see [Billing](https://help.aliyun.com/document_detail/154751.html?spm=a2c4g.154007.0.0.3edd7eb6E90YT4).
       * *   You are charged only if the value of VerifyResult is true or false and the value of ReasonCode is 0, 1, or 2.
       * *   Before you call this operation, perform the following operations: Log on to the [Cell Phone Number Service console](https://account.aliyun.com/login/login.htm?oauth_callback=https%3A%2F%2Fdytns.console.aliyun.com%2Foverview%3Fspm%3Da2c4g.608385.0.0.79847f8b3awqUC\\&lang=zh). On the [Labels](https://dytns.console.aliyun.com/analysis/square) page, find the label that you want to use, click **Activate Now**, enter the required information, and then submit your application. After your application is approved, you can use the label.
       *
       * @param request CompanyFourElementsVerificationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CompanyFourElementsVerificationResponse
       */
      Models::CompanyFourElementsVerificationResponse companyFourElementsVerificationWithOptions(const Models::CompanyFourElementsVerificationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Verifies whether the enterprise name, the business license number, and the name and ID card of the legal representative belong to the same enterprise. The verification is successful only when the preceding four elements belong to the same enterprise and the business status of the enterprise is Active.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the billing of services related to four-element verification for enterprises. For more information, see [Billing](https://help.aliyun.com/document_detail/154751.html?spm=a2c4g.154007.0.0.3edd7eb6E90YT4).
       * *   You are charged only if the value of VerifyResult is true or false and the value of ReasonCode is 0, 1, or 2.
       * *   Before you call this operation, perform the following operations: Log on to the [Cell Phone Number Service console](https://account.aliyun.com/login/login.htm?oauth_callback=https%3A%2F%2Fdytns.console.aliyun.com%2Foverview%3Fspm%3Da2c4g.608385.0.0.79847f8b3awqUC\\&lang=zh). On the [Labels](https://dytns.console.aliyun.com/analysis/square) page, find the label that you want to use, click **Activate Now**, enter the required information, and then submit your application. After your application is approved, you can use the label.
       *
       * @param request CompanyFourElementsVerificationRequest
       * @return CompanyFourElementsVerificationResponse
       */
      Models::CompanyFourElementsVerificationResponse companyFourElementsVerification(const Models::CompanyFourElementsVerificationRequest &request);

      /**
       * @summary Verifies whether the enterprise name, the business license number, and the name of the legal representative belong to the same enterprise. The verification is successful only when the three elements belong to the same enterprise and the business status of the enterprise is Active.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the billing of services related to three-element verification for enterprises. For more information, see [Billing](https://help.aliyun.com/document_detail/154751.html?spm=a2c4g.154007.0.0.3edd7eb6E90YT4).
       * *   You are charged only if the value of VerifyResult is true or false and the value of ReasonCode is 0, 1, or 2.
       * *   Before you call this operation, perform the following operations: Log on to the [Cell Phone Number Service console](https://account.aliyun.com/login/login.htm?oauth_callback=https%3A%2F%2Fdytns.console.aliyun.com%2Foverview%3Fspm%3Da2c4g.608385.0.0.79847f8b3awqUC\\&lang=zh). On the [Labels](https://dytns.console.aliyun.com/analysis/square) page, find the label that you want to use, click **Activate Now**, enter the required information, and then submit your application. After your application is approved, you can use the label.
       *
       * @param request CompanyThreeElementsVerificationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CompanyThreeElementsVerificationResponse
       */
      Models::CompanyThreeElementsVerificationResponse companyThreeElementsVerificationWithOptions(const Models::CompanyThreeElementsVerificationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Verifies whether the enterprise name, the business license number, and the name of the legal representative belong to the same enterprise. The verification is successful only when the three elements belong to the same enterprise and the business status of the enterprise is Active.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the billing of services related to three-element verification for enterprises. For more information, see [Billing](https://help.aliyun.com/document_detail/154751.html?spm=a2c4g.154007.0.0.3edd7eb6E90YT4).
       * *   You are charged only if the value of VerifyResult is true or false and the value of ReasonCode is 0, 1, or 2.
       * *   Before you call this operation, perform the following operations: Log on to the [Cell Phone Number Service console](https://account.aliyun.com/login/login.htm?oauth_callback=https%3A%2F%2Fdytns.console.aliyun.com%2Foverview%3Fspm%3Da2c4g.608385.0.0.79847f8b3awqUC\\&lang=zh). On the [Labels](https://dytns.console.aliyun.com/analysis/square) page, find the label that you want to use, click **Activate Now**, enter the required information, and then submit your application. After your application is approved, you can use the label.
       *
       * @param request CompanyThreeElementsVerificationRequest
       * @return CompanyThreeElementsVerificationResponse
       */
      Models::CompanyThreeElementsVerificationResponse companyThreeElementsVerification(const Models::CompanyThreeElementsVerificationRequest &request);

      /**
       * @summary Verifies whether the enterprise name and the business license number belong to the same enterprise. The verification is successful only when the two elements belong to the same enterprise and the business status of the enterprise is Active.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the billing of services related to two-element verification for enterprises. For more information, see [Billing](https://help.aliyun.com/document_detail/154751.html?spm=a2c4g.154007.0.0.3edd7eb6E90YT4).
       * *   You are charged only if the value of VerifyResult is true or false and the value of ReasonCode is 0 or 1.
       * *   Before you call this operation, perform the following operations: Log on to the [Cell Phone Number Service console](https://account.aliyun.com/login/login.htm?oauth_callback=https%3A%2F%2Fdytns.console.aliyun.com%2Foverview%3Fspm%3Da2c4g.608385.0.0.79847f8b3awqUC\\&lang=zh). On the [Labels](https://dytns.console.aliyun.com/analysis/square) page, find the label that you want to use, click **Activate Now**, enter the required information, and then submit your application. After your application is approved, you can use the label.
       *
       * @param request CompanyTwoElementsVerificationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CompanyTwoElementsVerificationResponse
       */
      Models::CompanyTwoElementsVerificationResponse companyTwoElementsVerificationWithOptions(const Models::CompanyTwoElementsVerificationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Verifies whether the enterprise name and the business license number belong to the same enterprise. The verification is successful only when the two elements belong to the same enterprise and the business status of the enterprise is Active.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the billing of services related to two-element verification for enterprises. For more information, see [Billing](https://help.aliyun.com/document_detail/154751.html?spm=a2c4g.154007.0.0.3edd7eb6E90YT4).
       * *   You are charged only if the value of VerifyResult is true or false and the value of ReasonCode is 0 or 1.
       * *   Before you call this operation, perform the following operations: Log on to the [Cell Phone Number Service console](https://account.aliyun.com/login/login.htm?oauth_callback=https%3A%2F%2Fdytns.console.aliyun.com%2Foverview%3Fspm%3Da2c4g.608385.0.0.79847f8b3awqUC\\&lang=zh). On the [Labels](https://dytns.console.aliyun.com/analysis/square) page, find the label that you want to use, click **Activate Now**, enter the required information, and then submit your application. After your application is approved, you can use the label.
       *
       * @param request CompanyTwoElementsVerificationRequest
       * @return CompanyTwoElementsVerificationResponse
       */
      Models::CompanyTwoElementsVerificationResponse companyTwoElementsVerification(const Models::CompanyTwoElementsVerificationRequest &request);

      /**
       * @summary 预警联系人删除
       *
       * @param request DeleteContactsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteContactsResponse
       */
      Models::DeleteContactsResponse deleteContactsWithOptions(const Models::DeleteContactsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 预警联系人删除
       *
       * @param request DeleteContactsRequest
       * @return DeleteContactsResponse
       */
      Models::DeleteContactsResponse deleteContacts(const Models::DeleteContactsRequest &request);

      /**
       * @summary Predicts whether a phone number is a nonexistent number by using AI algorithms.
       *
       * @description *   You can call this operation to verify whether a phone number is a nonexistent number. When you call this operation to verify a number, the system charges you CNY 0.01 per verification based on the number of verifications. **Before you call this operation, make sure that you are familiar with the billing of Cell Phone Number Service.**
       * *   You are charged only if the value of Code is OK and the value of Status is not UNKNOWN.
       * *   The prediction is not strictly accurate because Cell Phone Number Service predicts the nonexistent number probability by using AI algorithms. The accuracy rate of the prediction and the recall rate of empty numbers are about 95%. **Pay attention to this point when you call this operation**.
       * *   Before you call this operation, perform the following operations: Log on to the Cell Phone Number Service console. On the [Labels](https://dytns.console.aliyun.com/analysis/square) page, find the label that you want to use, click **Activate Now**, enter the required information, and then submit your application. After your application is approved, you can use the label.
       * ### [](#qps)QPS limits
       * You can call this operation up to 100 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       * ### [](#)Authorization information
       * By default, only Alibaba Cloud accounts can call this operation. RAM users can call this operation only after the RAM users are granted the related permissions. For more information, see [Grant permissions to RAM users](https://help.aliyun.com/document_detail/154006.html).
       *
       * @param request DescribeEmptyNumberRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEmptyNumberResponse
       */
      Models::DescribeEmptyNumberResponse describeEmptyNumberWithOptions(const Models::DescribeEmptyNumberRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Predicts whether a phone number is a nonexistent number by using AI algorithms.
       *
       * @description *   You can call this operation to verify whether a phone number is a nonexistent number. When you call this operation to verify a number, the system charges you CNY 0.01 per verification based on the number of verifications. **Before you call this operation, make sure that you are familiar with the billing of Cell Phone Number Service.**
       * *   You are charged only if the value of Code is OK and the value of Status is not UNKNOWN.
       * *   The prediction is not strictly accurate because Cell Phone Number Service predicts the nonexistent number probability by using AI algorithms. The accuracy rate of the prediction and the recall rate of empty numbers are about 95%. **Pay attention to this point when you call this operation**.
       * *   Before you call this operation, perform the following operations: Log on to the Cell Phone Number Service console. On the [Labels](https://dytns.console.aliyun.com/analysis/square) page, find the label that you want to use, click **Activate Now**, enter the required information, and then submit your application. After your application is approved, you can use the label.
       * ### [](#qps)QPS limits
       * You can call this operation up to 100 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       * ### [](#)Authorization information
       * By default, only Alibaba Cloud accounts can call this operation. RAM users can call this operation only after the RAM users are granted the related permissions. For more information, see [Grant permissions to RAM users](https://help.aliyun.com/document_detail/154006.html).
       *
       * @param request DescribeEmptyNumberRequest
       * @return DescribeEmptyNumberResponse
       */
      Models::DescribeEmptyNumberResponse describeEmptyNumber(const Models::DescribeEmptyNumberRequest &request);

      /**
       * @summary 号码归属地查询v2
       *
       * @param request DescribeMobileOperatorAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeMobileOperatorAttributeResponse
       */
      Models::DescribeMobileOperatorAttributeResponse describeMobileOperatorAttributeWithOptions(const Models::DescribeMobileOperatorAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 号码归属地查询v2
       *
       * @param request DescribeMobileOperatorAttributeRequest
       * @return DescribeMobileOperatorAttributeResponse
       */
      Models::DescribeMobileOperatorAttributeResponse describeMobileOperatorAttribute(const Models::DescribeMobileOperatorAttributeRequest &request);

      /**
       * @summary 号码分析实时查询蚂蚁
       *
       * @param request DescribePhoneNumberAnalysisRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePhoneNumberAnalysisResponse
       */
      Models::DescribePhoneNumberAnalysisResponse describePhoneNumberAnalysisWithOptions(const Models::DescribePhoneNumberAnalysisRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 号码分析实时查询蚂蚁
       *
       * @param request DescribePhoneNumberAnalysisRequest
       * @return DescribePhoneNumberAnalysisResponse
       */
      Models::DescribePhoneNumberAnalysisResponse describePhoneNumberAnalysis(const Models::DescribePhoneNumberAnalysisRequest &request);

      /**
       * @summary Obtains the analysis results of a phone number.
       *
       * @description Before you call this operation, perform the following operations: Log on to the Cell Phone Number Service console. On the Labels page, find the label that you want to use, click Activate Now, enter the required information, and then submit your application. After your application is approved, you can use the label. Before you call this operation, make sure that you are familiar with the billing of Cell Phone Number Service.
       *
       * @param request DescribePhoneNumberAnalysisAIRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePhoneNumberAnalysisAIResponse
       */
      Models::DescribePhoneNumberAnalysisAIResponse describePhoneNumberAnalysisAIWithOptions(const Models::DescribePhoneNumberAnalysisAIRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the analysis results of a phone number.
       *
       * @description Before you call this operation, perform the following operations: Log on to the Cell Phone Number Service console. On the Labels page, find the label that you want to use, click Activate Now, enter the required information, and then submit your application. After your application is approved, you can use the label. Before you call this operation, make sure that you are familiar with the billing of Cell Phone Number Service.
       *
       * @param request DescribePhoneNumberAnalysisAIRequest
       * @return DescribePhoneNumberAnalysisAIResponse
       */
      Models::DescribePhoneNumberAnalysisAIResponse describePhoneNumberAnalysisAI(const Models::DescribePhoneNumberAnalysisAIRequest &request);

      /**
       * @summary 号码分析服务pai供应商批量查询接口
       *
       * @param request DescribePhoneNumberAnalysisPaiRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePhoneNumberAnalysisPaiResponse
       */
      Models::DescribePhoneNumberAnalysisPaiResponse describePhoneNumberAnalysisPaiWithOptions(const Models::DescribePhoneNumberAnalysisPaiRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 号码分析服务pai供应商批量查询接口
       *
       * @param request DescribePhoneNumberAnalysisPaiRequest
       * @return DescribePhoneNumberAnalysisPaiResponse
       */
      Models::DescribePhoneNumberAnalysisPaiResponse describePhoneNumberAnalysisPai(const Models::DescribePhoneNumberAnalysisPaiRequest &request);

      /**
       * @summary 泛行业人群筛选
       *
       * @param request DescribePhoneNumberAnalysisTransparentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePhoneNumberAnalysisTransparentResponse
       */
      Models::DescribePhoneNumberAnalysisTransparentResponse describePhoneNumberAnalysisTransparentWithOptions(const Models::DescribePhoneNumberAnalysisTransparentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 泛行业人群筛选
       *
       * @param request DescribePhoneNumberAnalysisTransparentRequest
       * @return DescribePhoneNumberAnalysisTransparentResponse
       */
      Models::DescribePhoneNumberAnalysisTransparentResponse describePhoneNumberAnalysisTransparent(const Models::DescribePhoneNumberAnalysisTransparentRequest &request);

      /**
       * @deprecated OpenAPI DescribePhoneNumberAttribute is deprecated, please use Dytnsapi::2020-02-17::DescribePhoneNumberOperatorAttribute instead.
       *
       * @summary Queries the carrier, registration location, and mobile number portability information of a phone number.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/154751.html) of Cell Phone Number Service.
       * *   By default, only Alibaba Cloud accounts can call this operation. RAM users can call this operation only after the RAM users are granted the related permissions. For more information, see [Grant permissions to RAM users](https://help.aliyun.com/document_detail/154006.html).
       * ### [](#qps)QPS limits
       * You can call this operation up to 2,000 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribePhoneNumberAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePhoneNumberAttributeResponse
       */
      Models::DescribePhoneNumberAttributeResponse describePhoneNumberAttributeWithOptions(const Models::DescribePhoneNumberAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DescribePhoneNumberAttribute is deprecated, please use Dytnsapi::2020-02-17::DescribePhoneNumberOperatorAttribute instead.
       *
       * @summary Queries the carrier, registration location, and mobile number portability information of a phone number.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/154751.html) of Cell Phone Number Service.
       * *   By default, only Alibaba Cloud accounts can call this operation. RAM users can call this operation only after the RAM users are granted the related permissions. For more information, see [Grant permissions to RAM users](https://help.aliyun.com/document_detail/154006.html).
       * ### [](#qps)QPS limits
       * You can call this operation up to 2,000 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribePhoneNumberAttributeRequest
       * @return DescribePhoneNumberAttributeResponse
       */
      Models::DescribePhoneNumberAttributeResponse describePhoneNumberAttribute(const Models::DescribePhoneNumberAttributeRequest &request);

      /**
       * @summary Queries the usage period of a phone number of a user.
       *
       * @description *   Before you call this operation, perform the following operations: Log on to the Cell Phone Number Service console. On the [Labels](https://dytns.console.aliyun.com/analysis/square) page, find the label that you want to use, click **Activate Now**, enter the required information, and then submit your application. After your application is approved, you can use the label.
       * *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/154751.html) of Cell Phone Number Service.
       * ### [](#qps)QPS limits
       * You can call this operation up to 200 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribePhoneNumberOnlineTimeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePhoneNumberOnlineTimeResponse
       */
      Models::DescribePhoneNumberOnlineTimeResponse describePhoneNumberOnlineTimeWithOptions(const Models::DescribePhoneNumberOnlineTimeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the usage period of a phone number of a user.
       *
       * @description *   Before you call this operation, perform the following operations: Log on to the Cell Phone Number Service console. On the [Labels](https://dytns.console.aliyun.com/analysis/square) page, find the label that you want to use, click **Activate Now**, enter the required information, and then submit your application. After your application is approved, you can use the label.
       * *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/154751.html) of Cell Phone Number Service.
       * ### [](#qps)QPS limits
       * You can call this operation up to 200 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DescribePhoneNumberOnlineTimeRequest
       * @return DescribePhoneNumberOnlineTimeResponse
       */
      Models::DescribePhoneNumberOnlineTimeResponse describePhoneNumberOnlineTime(const Models::DescribePhoneNumberOnlineTimeRequest &request);

      /**
       * @summary Queries the attribute information about a phone number, including the registration province, registration city, basic carrier (such as China Mobile, China Unicom, China Telecom, or China Broadnet), reseller of mobile communications services (such as Alibaba Communications), mobile number portability, and the number segment to which the phone number belongs.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/154008.html) of Cell Phone Number Service.
       * *   By default, only Alibaba Cloud accounts can call this operation. RAM users can call this operation only after the RAM users are granted the related permissions. For more information, see [Grant permissions to RAM users](https://help.aliyun.com/document_detail/154006.html).
       * *   You can call this operation to obtain the carrier, registration location, and mobile number portability information about a phone number. You can query phone numbers in **plaintext** and phone numbers that are encrypted by using **MD5** and **SHA256**.
       * *   Before you call this operation, perform the following operations: Log on to the Cell Phone Number Service console. On the [Labels](https://dytns.console.aliyun.com/analysis/square) page, find the label that you want to use, click **Activate Now**, enter the required information, and then submit your application. After your application is approved, you can use the label.
       *
       * @param request DescribePhoneNumberOperatorAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePhoneNumberOperatorAttributeResponse
       */
      Models::DescribePhoneNumberOperatorAttributeResponse describePhoneNumberOperatorAttributeWithOptions(const Models::DescribePhoneNumberOperatorAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the attribute information about a phone number, including the registration province, registration city, basic carrier (such as China Mobile, China Unicom, China Telecom, or China Broadnet), reseller of mobile communications services (such as Alibaba Communications), mobile number portability, and the number segment to which the phone number belongs.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/154008.html) of Cell Phone Number Service.
       * *   By default, only Alibaba Cloud accounts can call this operation. RAM users can call this operation only after the RAM users are granted the related permissions. For more information, see [Grant permissions to RAM users](https://help.aliyun.com/document_detail/154006.html).
       * *   You can call this operation to obtain the carrier, registration location, and mobile number portability information about a phone number. You can query phone numbers in **plaintext** and phone numbers that are encrypted by using **MD5** and **SHA256**.
       * *   Before you call this operation, perform the following operations: Log on to the Cell Phone Number Service console. On the [Labels](https://dytns.console.aliyun.com/analysis/square) page, find the label that you want to use, click **Activate Now**, enter the required information, and then submit your application. After your application is approved, you can use the label.
       *
       * @param request DescribePhoneNumberOperatorAttributeRequest
       * @return DescribePhoneNumberOperatorAttributeResponse
       */
      Models::DescribePhoneNumberOperatorAttributeResponse describePhoneNumberOperatorAttribute(const Models::DescribePhoneNumberOperatorAttributeRequest &request);

      /**
       * @summary 号码归属服务(包年包月客户专用)
       *
       * @param request DescribePhoneNumberOperatorAttributeAnnualRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePhoneNumberOperatorAttributeAnnualResponse
       */
      Models::DescribePhoneNumberOperatorAttributeAnnualResponse describePhoneNumberOperatorAttributeAnnualWithOptions(const Models::DescribePhoneNumberOperatorAttributeAnnualRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 号码归属服务(包年包月客户专用)
       *
       * @param request DescribePhoneNumberOperatorAttributeAnnualRequest
       * @return DescribePhoneNumberOperatorAttributeAnnualResponse
       */
      Models::DescribePhoneNumberOperatorAttributeAnnualResponse describePhoneNumberOperatorAttributeAnnual(const Models::DescribePhoneNumberOperatorAttributeAnnualRequest &request);

      /**
       * @summary 号码归属服务(包年包月客户专用)
       *
       * @param request DescribePhoneNumberOperatorAttributeAnnualUseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePhoneNumberOperatorAttributeAnnualUseResponse
       */
      Models::DescribePhoneNumberOperatorAttributeAnnualUseResponse describePhoneNumberOperatorAttributeAnnualUseWithOptions(const Models::DescribePhoneNumberOperatorAttributeAnnualUseRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 号码归属服务(包年包月客户专用)
       *
       * @param request DescribePhoneNumberOperatorAttributeAnnualUseRequest
       * @return DescribePhoneNumberOperatorAttributeAnnualUseResponse
       */
      Models::DescribePhoneNumberOperatorAttributeAnnualUseResponse describePhoneNumberOperatorAttributeAnnualUse(const Models::DescribePhoneNumberOperatorAttributeAnnualUseRequest &request);

      /**
       * @summary 风险用户评分
       *
       * @param request DescribePhoneNumberRiskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePhoneNumberRiskResponse
       */
      Models::DescribePhoneNumberRiskResponse describePhoneNumberRiskWithOptions(const Models::DescribePhoneNumberRiskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 风险用户评分
       *
       * @param request DescribePhoneNumberRiskRequest
       * @return DescribePhoneNumberRiskResponse
       */
      Models::DescribePhoneNumberRiskResponse describePhoneNumberRisk(const Models::DescribePhoneNumberRiskRequest &request);

      /**
       * @summary Verifies whether a phone number is a reassigned phone number by calling this operation.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/154751.html) of Cell Phone Number Service.
       * *   You are charged for phone number verifications only if the value of Code is OK and the value of VerifyResult is not 0.
       * *   Before you call this operation, perform the following operations: Log on to the Cell Phone Number Service console. On the [Labels](https://dytns.console.aliyun.com/analysis/square) page, find the label that you want to use, click **Activate Now**, enter the required information, and then submit your application. After your application is approved, you can use the label.
       * ## [](#qps)QPS limits
       * You can call this operation up to 100 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       * ## [](#)Authorization information
       * By default, only Alibaba Cloud accounts can call this operation. RAM users can call this operation only after the RAM users are granted the related permissions. For more information, see [Grant permissions to RAM users](https://help.aliyun.com/document_detail/154006.html).
       *
       * @param request DescribePhoneTwiceTelVerifyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePhoneTwiceTelVerifyResponse
       */
      Models::DescribePhoneTwiceTelVerifyResponse describePhoneTwiceTelVerifyWithOptions(const Models::DescribePhoneTwiceTelVerifyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Verifies whether a phone number is a reassigned phone number by calling this operation.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/154751.html) of Cell Phone Number Service.
       * *   You are charged for phone number verifications only if the value of Code is OK and the value of VerifyResult is not 0.
       * *   Before you call this operation, perform the following operations: Log on to the Cell Phone Number Service console. On the [Labels](https://dytns.console.aliyun.com/analysis/square) page, find the label that you want to use, click **Activate Now**, enter the required information, and then submit your application. After your application is approved, you can use the label.
       * ## [](#qps)QPS limits
       * You can call this operation up to 100 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       * ## [](#)Authorization information
       * By default, only Alibaba Cloud accounts can call this operation. RAM users can call this operation only after the RAM users are granted the related permissions. For more information, see [Grant permissions to RAM users](https://help.aliyun.com/document_detail/154006.html).
       *
       * @param request DescribePhoneTwiceTelVerifyRequest
       * @return DescribePhoneTwiceTelVerifyResponse
       */
      Models::DescribePhoneTwiceTelVerifyResponse describePhoneTwiceTelVerify(const Models::DescribePhoneTwiceTelVerifyRequest &request);

      /**
       * @summary 获取UAID申请Token所需的签名字段
       *
       * @param request GetUAIDApplyTokenSignRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUAIDApplyTokenSignResponse
       */
      Models::GetUAIDApplyTokenSignResponse getUAIDApplyTokenSignWithOptions(const Models::GetUAIDApplyTokenSignRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取UAID申请Token所需的签名字段
       *
       * @param request GetUAIDApplyTokenSignRequest
       * @return GetUAIDApplyTokenSignResponse
       */
      Models::GetUAIDApplyTokenSignResponse getUAIDApplyTokenSign(const Models::GetUAIDApplyTokenSignRequest &request);

      /**
       * @summary 获取号码采集服务申请Token所需的签名字段
       *
       * @param request GetUAIDConversionSignRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUAIDConversionSignResponse
       */
      Models::GetUAIDConversionSignResponse getUAIDConversionSignWithOptions(const Models::GetUAIDConversionSignRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取号码采集服务申请Token所需的签名字段
       *
       * @param request GetUAIDConversionSignRequest
       * @return GetUAIDConversionSignResponse
       */
      Models::GetUAIDConversionSignResponse getUAIDConversionSign(const Models::GetUAIDConversionSignRequest &request);

      /**
       * @summary Filters invalid phone numbers.
       *
       * @description Before you call this operation, perform the following operations: Log on to the Cell Phone Number Service console. On the [Labels](https://dytns.console.aliyun.com/analysis/square) page, find the label that you want to use, click **Activate Now**, enter the required information, and then submit your application. After your application is approved, you can use the label.
       * ### [](#qps)QPS limits
       * You can call this operation up to 1,000 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request InvalidPhoneNumberFilterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return InvalidPhoneNumberFilterResponse
       */
      Models::InvalidPhoneNumberFilterResponse invalidPhoneNumberFilterWithOptions(const Models::InvalidPhoneNumberFilterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Filters invalid phone numbers.
       *
       * @description Before you call this operation, perform the following operations: Log on to the Cell Phone Number Service console. On the [Labels](https://dytns.console.aliyun.com/analysis/square) page, find the label that you want to use, click **Activate Now**, enter the required information, and then submit your application. After your application is approved, you can use the label.
       * ### [](#qps)QPS limits
       * You can call this operation up to 1,000 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request InvalidPhoneNumberFilterRequest
       * @return InvalidPhoneNumberFilterResponse
       */
      Models::InvalidPhoneNumberFilterResponse invalidPhoneNumberFilter(const Models::InvalidPhoneNumberFilterRequest &request);

      /**
       * @summary 预警联系人查询
       *
       * @param request ListContactsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListContactsResponse
       */
      Models::ListContactsResponse listContactsWithOptions(const Models::ListContactsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 预警联系人查询
       *
       * @param request ListContactsRequest
       * @return ListContactsResponse
       */
      Models::ListContactsResponse listContacts(const Models::ListContactsRequest &request);

      /**
       * @param request PhoneNumberConvertServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PhoneNumberConvertServiceResponse
       */
      Models::PhoneNumberConvertServiceResponse phoneNumberConvertServiceWithOptions(const Models::PhoneNumberConvertServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request PhoneNumberConvertServiceRequest
       * @return PhoneNumberConvertServiceResponse
       */
      Models::PhoneNumberConvertServiceResponse phoneNumberConvertService(const Models::PhoneNumberConvertServiceRequest &request);

      /**
       * @summary Encrypts the original phone number into a virtual number that starts with 140. Cell Phone Number Service integrates the communications services provided by Alibaba Cloud. This allows you to initiate a call by using a virtual number that starts with 140.
       *
       * @description Before you call this operation, perform the following operations: Log on to the Cell Phone Number Service console. On the [Labels](https://dytns.console.aliyun.com/analysis/square) page, find the label that you want to use, click **Activate Now**, enter the required information, and then submit your application. After your application is approved, you can use the label.
       * ### [](#qps)QPS limits
       * You can call this operation up to 1,000 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request PhoneNumberEncryptRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PhoneNumberEncryptResponse
       */
      Models::PhoneNumberEncryptResponse phoneNumberEncryptWithOptions(const Models::PhoneNumberEncryptRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Encrypts the original phone number into a virtual number that starts with 140. Cell Phone Number Service integrates the communications services provided by Alibaba Cloud. This allows you to initiate a call by using a virtual number that starts with 140.
       *
       * @description Before you call this operation, perform the following operations: Log on to the Cell Phone Number Service console. On the [Labels](https://dytns.console.aliyun.com/analysis/square) page, find the label that you want to use, click **Activate Now**, enter the required information, and then submit your application. After your application is approved, you can use the label.
       * ### [](#qps)QPS limits
       * You can call this operation up to 1,000 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request PhoneNumberEncryptRequest
       * @return PhoneNumberEncryptResponse
       */
      Models::PhoneNumberEncryptResponse phoneNumberEncrypt(const Models::PhoneNumberEncryptRequest &request);

      /**
       * @summary Queries the real-time service state of a phone number. The state includes NORMAL, SHUTDOWN, and NOT_EXIST. You can choose an encryption method for your phone number query, including plaintext, MD5, and SHA256.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/154751.html) of Cell Phone Number Service.
       * *   By default, only Alibaba Cloud accounts can call this operation. RAM users can call this operation only after the RAM users are granted the related permissions. For more information, see [Grant permissions to RAM users](https://help.aliyun.com/document_detail/154006.html).
       * *   Before you call this operation, perform the following operations: Log on to the Cell Phone Number Service console. On the [Labels](https://dytns.console.aliyun.com/analysis/square) page, find the label that you want to use, click **Activate Now**, enter the required information, and then submit your application. After your application is approved, you can use the label.
       * ### [](#qps)QPS limits
       * You can call this operation up to 300 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request PhoneNumberStatusForAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PhoneNumberStatusForAccountResponse
       */
      Models::PhoneNumberStatusForAccountResponse phoneNumberStatusForAccountWithOptions(const Models::PhoneNumberStatusForAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the real-time service state of a phone number. The state includes NORMAL, SHUTDOWN, and NOT_EXIST. You can choose an encryption method for your phone number query, including plaintext, MD5, and SHA256.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/154751.html) of Cell Phone Number Service.
       * *   By default, only Alibaba Cloud accounts can call this operation. RAM users can call this operation only after the RAM users are granted the related permissions. For more information, see [Grant permissions to RAM users](https://help.aliyun.com/document_detail/154006.html).
       * *   Before you call this operation, perform the following operations: Log on to the Cell Phone Number Service console. On the [Labels](https://dytns.console.aliyun.com/analysis/square) page, find the label that you want to use, click **Activate Now**, enter the required information, and then submit your application. After your application is approved, you can use the label.
       * ### [](#qps)QPS limits
       * You can call this operation up to 300 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request PhoneNumberStatusForAccountRequest
       * @return PhoneNumberStatusForAccountResponse
       */
      Models::PhoneNumberStatusForAccountResponse phoneNumberStatusForAccount(const Models::PhoneNumberStatusForAccountRequest &request);

      /**
       * @summary Queries the real-time service state of a phone number. The state includes NORMAL, SHUTDOWN, and NOT_EXIST. You can choose an encryption method for your phone number query, including plaintext, MD5, and SHA256.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/154751.html) of Cell Phone Number Service.
       * *   By default, only Alibaba Cloud accounts can call this operation. RAM users can call this operation only after the RAM users are granted the related permissions. For more information, see [Grant permissions to RAM users](https://help.aliyun.com/document_detail/154006.html).
       * *   Before you call this operation, perform the following operations: Log on to the Cell Phone Number Service console. On the [Labels](https://dytns.console.aliyun.com/analysis/square) page, find the label that you want to use, click **Activate Now**, enter the required information, and then submit your application. After your application is approved, you can use the label.
       * ### [](#qps)QPS limits
       * You can call this operation up to 300 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request PhoneNumberStatusForPublicRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PhoneNumberStatusForPublicResponse
       */
      Models::PhoneNumberStatusForPublicResponse phoneNumberStatusForPublicWithOptions(const Models::PhoneNumberStatusForPublicRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the real-time service state of a phone number. The state includes NORMAL, SHUTDOWN, and NOT_EXIST. You can choose an encryption method for your phone number query, including plaintext, MD5, and SHA256.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/154751.html) of Cell Phone Number Service.
       * *   By default, only Alibaba Cloud accounts can call this operation. RAM users can call this operation only after the RAM users are granted the related permissions. For more information, see [Grant permissions to RAM users](https://help.aliyun.com/document_detail/154006.html).
       * *   Before you call this operation, perform the following operations: Log on to the Cell Phone Number Service console. On the [Labels](https://dytns.console.aliyun.com/analysis/square) page, find the label that you want to use, click **Activate Now**, enter the required information, and then submit your application. After your application is approved, you can use the label.
       * ### [](#qps)QPS limits
       * You can call this operation up to 300 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request PhoneNumberStatusForPublicRequest
       * @return PhoneNumberStatusForPublicResponse
       */
      Models::PhoneNumberStatusForPublicResponse phoneNumberStatusForPublic(const Models::PhoneNumberStatusForPublicRequest &request);

      /**
       * @summary Queries the real-time service state of a phone number. The state includes NORMAL, SHUTDOWN, and NOT_EXIST. You can choose an encryption method for your phone number query, including plaintext, MD5, and SHA256.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/154751.html) of Cell Phone Number Service.
       * *   By default, only Alibaba Cloud accounts can call this operation. RAM users can call this operation only after the RAM users are granted the related permissions. For more information, see [Grant permissions to RAM users](https://help.aliyun.com/document_detail/154006.html).
       * *   Before you call this operation, perform the following operations: Log on to the Cell Phone Number Service console. On the [Labels](https://dytns.console.aliyun.com/analysis/square) page, find the label that you want to use, click **Activate Now**, enter the required information, and then submit your application. After your application is approved, you can use the label.
       * ### [](#qps)QPS limits
       * You can call this operation up to 300 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request PhoneNumberStatusForRealRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PhoneNumberStatusForRealResponse
       */
      Models::PhoneNumberStatusForRealResponse phoneNumberStatusForRealWithOptions(const Models::PhoneNumberStatusForRealRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the real-time service state of a phone number. The state includes NORMAL, SHUTDOWN, and NOT_EXIST. You can choose an encryption method for your phone number query, including plaintext, MD5, and SHA256.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/154751.html) of Cell Phone Number Service.
       * *   By default, only Alibaba Cloud accounts can call this operation. RAM users can call this operation only after the RAM users are granted the related permissions. For more information, see [Grant permissions to RAM users](https://help.aliyun.com/document_detail/154006.html).
       * *   Before you call this operation, perform the following operations: Log on to the Cell Phone Number Service console. On the [Labels](https://dytns.console.aliyun.com/analysis/square) page, find the label that you want to use, click **Activate Now**, enter the required information, and then submit your application. After your application is approved, you can use the label.
       * ### [](#qps)QPS limits
       * You can call this operation up to 300 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request PhoneNumberStatusForRealRequest
       * @return PhoneNumberStatusForRealResponse
       */
      Models::PhoneNumberStatusForRealResponse phoneNumberStatusForReal(const Models::PhoneNumberStatusForRealRequest &request);

      /**
       * @summary Queries the real-time service state of a phone number. The state includes NORMAL, SHUTDOWN, and NOT_EXIST. You can choose an encryption method for your phone number query, including plaintext, MD5, and SHA256.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/154751.html) of Cell Phone Number Service.
       * *   By default, only Alibaba Cloud accounts can call this operation. RAM users can call this operation only after the RAM users are granted the related permissions. For more information, see [Grant permissions to RAM users](https://help.aliyun.com/document_detail/154006.html).
       * *   Before you call this operation, perform the following operations: Log on to the Cell Phone Number Service console. On the [Labels](https://dytns.console.aliyun.com/analysis/square) page, find the label that you want to use, click **Activate Now**, enter the required information, and then submit your application. After your application is approved, you can use the label.
       * ### [](#qps)QPS limits
       * You can call this operation up to 300 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request PhoneNumberStatusForSmsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PhoneNumberStatusForSmsResponse
       */
      Models::PhoneNumberStatusForSmsResponse phoneNumberStatusForSmsWithOptions(const Models::PhoneNumberStatusForSmsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the real-time service state of a phone number. The state includes NORMAL, SHUTDOWN, and NOT_EXIST. You can choose an encryption method for your phone number query, including plaintext, MD5, and SHA256.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/154751.html) of Cell Phone Number Service.
       * *   By default, only Alibaba Cloud accounts can call this operation. RAM users can call this operation only after the RAM users are granted the related permissions. For more information, see [Grant permissions to RAM users](https://help.aliyun.com/document_detail/154006.html).
       * *   Before you call this operation, perform the following operations: Log on to the Cell Phone Number Service console. On the [Labels](https://dytns.console.aliyun.com/analysis/square) page, find the label that you want to use, click **Activate Now**, enter the required information, and then submit your application. After your application is approved, you can use the label.
       * ### [](#qps)QPS limits
       * You can call this operation up to 300 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request PhoneNumberStatusForSmsRequest
       * @return PhoneNumberStatusForSmsResponse
       */
      Models::PhoneNumberStatusForSmsResponse phoneNumberStatusForSms(const Models::PhoneNumberStatusForSmsRequest &request);

      /**
       * @summary Queries the real-time service state of a phone number. The state includes NORMAL, SHUTDOWN, and NOT_EXIST. You can choose an encryption method for your phone number query, including plaintext, MD5, and SHA256.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/154751.html) of Cell Phone Number Service.
       * *   By default, only Alibaba Cloud accounts can call this operation. RAM users can call this operation only after the RAM users are granted the related permissions. For more information, see [Grant permissions to RAM users](https://help.aliyun.com/document_detail/154006.html).
       * *   Before you call this operation, perform the following operations: Log on to the Cell Phone Number Service console. On the [Labels](https://dytns.console.aliyun.com/analysis/square) page, find the label that you want to use, click **Activate Now**, enter the required information, and then submit your application. After your application is approved, you can use the label.
       * ### [](#qps)QPS limits
       * You can call this operation up to 300 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request PhoneNumberStatusForVoiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PhoneNumberStatusForVoiceResponse
       */
      Models::PhoneNumberStatusForVoiceResponse phoneNumberStatusForVoiceWithOptions(const Models::PhoneNumberStatusForVoiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the real-time service state of a phone number. The state includes NORMAL, SHUTDOWN, and NOT_EXIST. You can choose an encryption method for your phone number query, including plaintext, MD5, and SHA256.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/154751.html) of Cell Phone Number Service.
       * *   By default, only Alibaba Cloud accounts can call this operation. RAM users can call this operation only after the RAM users are granted the related permissions. For more information, see [Grant permissions to RAM users](https://help.aliyun.com/document_detail/154006.html).
       * *   Before you call this operation, perform the following operations: Log on to the Cell Phone Number Service console. On the [Labels](https://dytns.console.aliyun.com/analysis/square) page, find the label that you want to use, click **Activate Now**, enter the required information, and then submit your application. After your application is approved, you can use the label.
       * ### [](#qps)QPS limits
       * You can call this operation up to 300 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request PhoneNumberStatusForVoiceRequest
       * @return PhoneNumberStatusForVoiceResponse
       */
      Models::PhoneNumberStatusForVoiceResponse phoneNumberStatusForVoice(const Models::PhoneNumberStatusForVoiceRequest &request);

      /**
       * @summary Queries available authorization codes.
       *
       * @param request QueryAvailableAuthCodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryAvailableAuthCodeResponse
       */
      Models::QueryAvailableAuthCodeResponse queryAvailableAuthCodeWithOptions(const Models::QueryAvailableAuthCodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries available authorization codes.
       *
       * @param request QueryAvailableAuthCodeRequest
       * @return QueryAvailableAuthCodeResponse
       */
      Models::QueryAvailableAuthCodeResponse queryAvailableAuthCode(const Models::QueryAvailableAuthCodeRequest &request);

      /**
       * @summary 套餐包类型信息查询
       *
       * @param request QueryPackageTypeInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryPackageTypeInfoResponse
       */
      Models::QueryPackageTypeInfoResponse queryPackageTypeInfoWithOptions(const Models::QueryPackageTypeInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 套餐包类型信息查询
       *
       * @param request QueryPackageTypeInfoRequest
       * @return QueryPackageTypeInfoResponse
       */
      Models::QueryPackageTypeInfoResponse queryPackageTypeInfo(const Models::QueryPackageTypeInfoRequest &request);

      /**
       * @summary 在网时长专用接口
       *
       * @param request QueryPhoneNumberOnlineTimeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryPhoneNumberOnlineTimeResponse
       */
      Models::QueryPhoneNumberOnlineTimeResponse queryPhoneNumberOnlineTimeWithOptions(const Models::QueryPhoneNumberOnlineTimeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 在网时长专用接口
       *
       * @param request QueryPhoneNumberOnlineTimeRequest
       * @return QueryPhoneNumberOnlineTimeResponse
       */
      Models::QueryPhoneNumberOnlineTimeResponse queryPhoneNumberOnlineTime(const Models::QueryPhoneNumberOnlineTimeRequest &request);

      /**
       * @summary 二次号携号转网号码查询
       *
       * @param request QueryPhoneTwiceTelVerifyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryPhoneTwiceTelVerifyResponse
       */
      Models::QueryPhoneTwiceTelVerifyResponse queryPhoneTwiceTelVerifyWithOptions(const Models::QueryPhoneTwiceTelVerifyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 二次号携号转网号码查询
       *
       * @param request QueryPhoneTwiceTelVerifyRequest
       * @return QueryPhoneTwiceTelVerifyResponse
       */
      Models::QueryPhoneTwiceTelVerifyResponse queryPhoneTwiceTelVerify(const Models::QueryPhoneTwiceTelVerifyRequest &request);

      /**
       * @summary Queries tag application rules.
       *
       * @param request QueryTagApplyRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryTagApplyRuleResponse
       */
      Models::QueryTagApplyRuleResponse queryTagApplyRuleWithOptions(const Models::QueryTagApplyRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries tag application rules.
       *
       * @param request QueryTagApplyRuleRequest
       * @return QueryTagApplyRuleResponse
       */
      Models::QueryTagApplyRuleResponse queryTagApplyRule(const Models::QueryTagApplyRuleRequest &request);

      /**
       * @summary Queries information about tags.
       *
       * @param request QueryTagInfoBySelectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryTagInfoBySelectionResponse
       */
      Models::QueryTagInfoBySelectionResponse queryTagInfoBySelectionWithOptions(const Models::QueryTagInfoBySelectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about tags.
       *
       * @param request QueryTagInfoBySelectionRequest
       * @return QueryTagInfoBySelectionResponse
       */
      Models::QueryTagInfoBySelectionResponse queryTagInfoBySelection(const Models::QueryTagInfoBySelectionRequest &request);

      /**
       * @summary Queries a list of tags by page.
       *
       * @param request QueryTagListPageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryTagListPageResponse
       */
      Models::QueryTagListPageResponse queryTagListPageWithOptions(const Models::QueryTagListPageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of tags by page.
       *
       * @param request QueryTagListPageRequest
       * @return QueryTagListPageResponse
       */
      Models::QueryTagListPageResponse queryTagListPage(const Models::QueryTagListPageRequest &request);

      /**
       * @summary 查询离线任务列表
       *
       * @param tmpReq QueryTaskListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryTaskListResponse
       */
      Models::QueryTaskListResponse queryTaskListWithOptions(const Models::QueryTaskListRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询离线任务列表
       *
       * @param request QueryTaskListRequest
       * @return QueryTaskListResponse
       */
      Models::QueryTaskListResponse queryTaskList(const Models::QueryTaskListRequest &request);

      /**
       * @summary Queries the usage statistics based on tag IDs.
       *
       * @param request QueryUsageStatisticsByTagIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryUsageStatisticsByTagIdResponse
       */
      Models::QueryUsageStatisticsByTagIdResponse queryUsageStatisticsByTagIdWithOptions(const Models::QueryUsageStatisticsByTagIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the usage statistics based on tag IDs.
       *
       * @param request QueryUsageStatisticsByTagIdRequest
       * @return QueryUsageStatisticsByTagIdResponse
       */
      Models::QueryUsageStatisticsByTagIdResponse queryUsageStatisticsByTagId(const Models::QueryUsageStatisticsByTagIdRequest &request);

      /**
       * @summary 预警联系人保存
       *
       * @param request SaveContactsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveContactsResponse
       */
      Models::SaveContactsResponse saveContactsWithOptions(const Models::SaveContactsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 预警联系人保存
       *
       * @param request SaveContactsRequest
       * @return SaveContactsResponse
       */
      Models::SaveContactsResponse saveContacts(const Models::SaveContactsRequest &request);

      /**
       * @summary Verifies whether the name, phone number, and ID card number entered by a user belong to the same user.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/154751.html) of Cell Phone Number Service.
       * *   Before you call this operation, perform the following operations: Log on to the Cell Phone Number Service console. On the [Labels](https://dytns.console.aliyun.com/analysis/square) page, find the label that you want to use, click **Activate Now**, enter the required information, and then submit your application. After your application is approved, you can use the label.
       * *   You are charged only if the value of Code is OK and the value of IsConsistent is not 2.
       * ### [](#qps)QPS limits
       * You can call this operation up to 200 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request ThreeElementsVerificationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ThreeElementsVerificationResponse
       */
      Models::ThreeElementsVerificationResponse threeElementsVerificationWithOptions(const Models::ThreeElementsVerificationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Verifies whether the name, phone number, and ID card number entered by a user belong to the same user.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/154751.html) of Cell Phone Number Service.
       * *   Before you call this operation, perform the following operations: Log on to the Cell Phone Number Service console. On the [Labels](https://dytns.console.aliyun.com/analysis/square) page, find the label that you want to use, click **Activate Now**, enter the required information, and then submit your application. After your application is approved, you can use the label.
       * *   You are charged only if the value of Code is OK and the value of IsConsistent is not 2.
       * ### [](#qps)QPS limits
       * You can call this operation up to 200 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request ThreeElementsVerificationRequest
       * @return ThreeElementsVerificationResponse
       */
      Models::ThreeElementsVerificationResponse threeElementsVerification(const Models::ThreeElementsVerificationRequest &request);

      /**
       * @summary Verifies whether the name and phone number entered by a user belong to the same user.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/154751.html) of Cell Phone Number Service.
       * *   Before you call this operation, perform the following operations: Log on to the Cell Phone Number Service console. On the [Labels](https://dytns.console.aliyun.com/analysis/square) page, find the label that you want to use, click **Activate Now**, enter the required information, and then submit your application. After your application is approved, you can use the label.
       * *   You are charged only if the value of Code is OK and the value of IsConsistent is not 2.
       * ### [](#qps)QPS limits
       * You can call this operation up to 200 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request TwoElementsVerificationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TwoElementsVerificationResponse
       */
      Models::TwoElementsVerificationResponse twoElementsVerificationWithOptions(const Models::TwoElementsVerificationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Verifies whether the name and phone number entered by a user belong to the same user.
       *
       * @description *   Before you call this operation, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/154751.html) of Cell Phone Number Service.
       * *   Before you call this operation, perform the following operations: Log on to the Cell Phone Number Service console. On the [Labels](https://dytns.console.aliyun.com/analysis/square) page, find the label that you want to use, click **Activate Now**, enter the required information, and then submit your application. After your application is approved, you can use the label.
       * *   You are charged only if the value of Code is OK and the value of IsConsistent is not 2.
       * ### [](#qps)QPS limits
       * You can call this operation up to 200 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request TwoElementsVerificationRequest
       * @return TwoElementsVerificationResponse
       */
      Models::TwoElementsVerificationResponse twoElementsVerification(const Models::TwoElementsVerificationRequest &request);

      /**
       * @summary UAID采集
       *
       * @param request UAIDCollectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UAIDCollectionResponse
       */
      Models::UAIDCollectionResponse uAIDCollectionWithOptions(const Models::UAIDCollectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary UAID采集
       *
       * @param request UAIDCollectionRequest
       * @return UAIDCollectionResponse
       */
      Models::UAIDCollectionResponse uAIDCollection(const Models::UAIDCollectionRequest &request);

      /**
       * @summary uaid号码转换服务
       *
       * @param request UAIDConversionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UAIDConversionResponse
       */
      Models::UAIDConversionResponse uAIDConversionWithOptions(const Models::UAIDConversionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary uaid号码转换服务
       *
       * @param request UAIDConversionRequest
       * @return UAIDConversionResponse
       */
      Models::UAIDConversionResponse uAIDConversion(const Models::UAIDConversionRequest &request);

      /**
       * @summary 获取UAID
       *
       * @param request UAIDVerificationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UAIDVerificationResponse
       */
      Models::UAIDVerificationResponse uAIDVerificationWithOptions(const Models::UAIDVerificationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取UAID
       *
       * @param request UAIDVerificationRequest
       * @return UAIDVerificationResponse
       */
      Models::UAIDVerificationResponse uAIDVerification(const Models::UAIDVerificationRequest &request);

      /**
       * @summary 预警联系人更新
       *
       * @param request UpdateContactsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateContactsResponse
       */
      Models::UpdateContactsResponse updateContactsWithOptions(const Models::UpdateContactsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 预警联系人更新
       *
       * @param request UpdateContactsRequest
       * @return UpdateContactsResponse
       */
      Models::UpdateContactsResponse updateContacts(const Models::UpdateContactsRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Dytnsapi20200217
#endif
