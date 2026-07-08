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
       * @summary Three-element (name, ID card number, and ID card photo) verification. Used to compare whether the three pieces of information (the name and ID card number filled in by the user and the uploaded portrait photo) belong to the same user.
       *
       * @description - Before using this API, log on to the Cell Phone Number Service console, go to the Tag Square page, find the corresponding tag, click Apply to Activate, fill in the application materials, and use the tag after the application is approved.
       * - Before using this API, make sure that you have fully understood the [Cell Phone Number Service pricing](https://help.aliyun.com/document_detail/154751.html).
       * - Billing applies only when the API return value is Code="OK". Other return results are not billed.
       * - For the verifiable scope, see [ID Card Three Elements Verification](https://help.aliyun.com/document_detail/2844379.html).
       * ### QPS limit
       * - The per-user QPS limit for this API is 200 calls per second. If you exceed the limit, API calls are throttled, which may affect your business. Call the API reasonably.
       *
       * @param request CertNoThreeElementVerificationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CertNoThreeElementVerificationResponse
       */
      Models::CertNoThreeElementVerificationResponse certNoThreeElementVerificationWithOptions(const Models::CertNoThreeElementVerificationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Three-element (name, ID card number, and ID card photo) verification. Used to compare whether the three pieces of information (the name and ID card number filled in by the user and the uploaded portrait photo) belong to the same user.
       *
       * @description - Before using this API, log on to the Cell Phone Number Service console, go to the Tag Square page, find the corresponding tag, click Apply to Activate, fill in the application materials, and use the tag after the application is approved.
       * - Before using this API, make sure that you have fully understood the [Cell Phone Number Service pricing](https://help.aliyun.com/document_detail/154751.html).
       * - Billing applies only when the API return value is Code="OK". Other return results are not billed.
       * - For the verifiable scope, see [ID Card Three Elements Verification](https://help.aliyun.com/document_detail/2844379.html).
       * ### QPS limit
       * - The per-user QPS limit for this API is 200 calls per second. If you exceed the limit, API calls are throttled, which may affect your business. Call the API reasonably.
       *
       * @param request CertNoThreeElementVerificationRequest
       * @return CertNoThreeElementVerificationResponse
       */
      Models::CertNoThreeElementVerificationResponse certNoThreeElementVerification(const Models::CertNoThreeElementVerificationRequest &request);

      /**
       * @summary Two-element (name and ID card number) verification. Used to verify whether the name and ID card number entered by a user belong to the same person.
       *
       * @description - Before using this operation, make sure that you have fully understood the pricing of Cell Phone Number Service.
       * - Before using this operation, log on to the Cell Phone Number Service console. On the Tag Marketplace page, find the desired tag, click Apply to Activate, and fill in the application information. You can use the operation only after your application is approved.
       * - The operation is charged when the response contains Code="OK" and IsConsistent != 2. Other response results are not charged.
       * ## QPS Limit
       * The per-user QPS limit of this operation is 200 calls per second. If the limit is exceeded, the API calls are throttled, which may affect your business. Call the operation properly.
       *
       * @param request CertNoTwoElementVerificationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CertNoTwoElementVerificationResponse
       */
      Models::CertNoTwoElementVerificationResponse certNoTwoElementVerificationWithOptions(const Models::CertNoTwoElementVerificationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Two-element (name and ID card number) verification. Used to verify whether the name and ID card number entered by a user belong to the same person.
       *
       * @description - Before using this operation, make sure that you have fully understood the pricing of Cell Phone Number Service.
       * - Before using this operation, log on to the Cell Phone Number Service console. On the Tag Marketplace page, find the desired tag, click Apply to Activate, and fill in the application information. You can use the operation only after your application is approved.
       * - The operation is charged when the response contains Code="OK" and IsConsistent != 2. Other response results are not charged.
       * ## QPS Limit
       * The per-user QPS limit of this operation is 200 calls per second. If the limit is exceeded, the API calls are throttled, which may affect your business. Call the operation properly.
       *
       * @param request CertNoTwoElementVerificationRequest
       * @return CertNoTwoElementVerificationResponse
       */
      Models::CertNoTwoElementVerificationResponse certNoTwoElementVerification(const Models::CertNoTwoElementVerificationRequest &request);

      /**
       * @summary Verifies the enterprise name, enterprise certificate number, enterprise legal person name, and enterprise legal person ID card number. All four items must be consistent and the enterprise\\"s operating status must be active for verification to pass.
       *
       * @description - Before you use this API, make sure that you fully understand the billing method and prices of the Enterprise Four-Element Verification product. For billing details, see [Product Billing](https://help.aliyun.com/document_detail/154751.html?spm=a2c4g.154007.0.0.3edd7eb6E90YT4).
       * - Billing applies when VerifyResult returns true/false and ReasonCode is 0, 1, or 2 in the response. Billing does not apply in other cases.
       * - Before you use this API, log on to the [Cell Phone Number Service console](https://account.aliyun.com/login/login.htm?oauth_callback=https%3A%2F%2Fdytns.console.aliyun.com%2Foverview%3Fspm%3Da2c4g.608385.0.0.79847f8b3awqUC&lang=zh), go to the [Tag Square](https://dytns.console.aliyun.com/analysis/square) page, find the corresponding tag, click **Apply to Activate**, and submit your application. You can use the API after the application is approved.
       * ### QPS limit
       * The per-user QPS limit for this API is 200 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call the API appropriately.
       *
       * @param request CompanyFourElementsVerificationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CompanyFourElementsVerificationResponse
       */
      Models::CompanyFourElementsVerificationResponse companyFourElementsVerificationWithOptions(const Models::CompanyFourElementsVerificationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Verifies the enterprise name, enterprise certificate number, enterprise legal person name, and enterprise legal person ID card number. All four items must be consistent and the enterprise\\"s operating status must be active for verification to pass.
       *
       * @description - Before you use this API, make sure that you fully understand the billing method and prices of the Enterprise Four-Element Verification product. For billing details, see [Product Billing](https://help.aliyun.com/document_detail/154751.html?spm=a2c4g.154007.0.0.3edd7eb6E90YT4).
       * - Billing applies when VerifyResult returns true/false and ReasonCode is 0, 1, or 2 in the response. Billing does not apply in other cases.
       * - Before you use this API, log on to the [Cell Phone Number Service console](https://account.aliyun.com/login/login.htm?oauth_callback=https%3A%2F%2Fdytns.console.aliyun.com%2Foverview%3Fspm%3Da2c4g.608385.0.0.79847f8b3awqUC&lang=zh), go to the [Tag Square](https://dytns.console.aliyun.com/analysis/square) page, find the corresponding tag, click **Apply to Activate**, and submit your application. You can use the API after the application is approved.
       * ### QPS limit
       * The per-user QPS limit for this API is 200 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call the API appropriately.
       *
       * @param request CompanyFourElementsVerificationRequest
       * @return CompanyFourElementsVerificationResponse
       */
      Models::CompanyFourElementsVerificationResponse companyFourElementsVerification(const Models::CompanyFourElementsVerificationRequest &request);

      /**
       * @summary Used to verify a company name, company certificate number, and the name of the company\\"s legal representative. Verification passes only when all three are consistent and the company\\"s operating status is in business.
       *
       * @description - Before you use this API, make sure that you have fully understood the billing method and pricing of the Three-Element Company Verification product. For billing details, see [Billing](https://help.aliyun.com/document_detail/154751.html?spm=a2c4g.154007.0.0.3edd7eb6E90YT4).
       * - In the returned result, charges apply when VerifyResult is true/false and ReasonCode is 0/1/2. No charges apply in other cases.
       * - Before you use this API, log on to the [Cell Phone Number Service console](https://account.aliyun.com/login/login.htm?oauth_callback=https%3A%2F%2Fdytns.console.aliyun.com%2Foverview%3Fspm%3Da2c4g.608385.0.0.79847f8b3awqUC&lang=zh), go to the [Tag Plaza](https://dytns.console.aliyun.com/analysis/square) page, find the corresponding tag, click **Apply for Activation**, and submit the application materials. You can use the API after the application is approved.
       * ### QPS limit
       * The per-user QPS limit for this API is 200 calls per second. Requests that exceed this limit are throttled, which may affect your business. Call this API at a reasonable rate.
       *
       * @param request CompanyThreeElementsVerificationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CompanyThreeElementsVerificationResponse
       */
      Models::CompanyThreeElementsVerificationResponse companyThreeElementsVerificationWithOptions(const Models::CompanyThreeElementsVerificationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Used to verify a company name, company certificate number, and the name of the company\\"s legal representative. Verification passes only when all three are consistent and the company\\"s operating status is in business.
       *
       * @description - Before you use this API, make sure that you have fully understood the billing method and pricing of the Three-Element Company Verification product. For billing details, see [Billing](https://help.aliyun.com/document_detail/154751.html?spm=a2c4g.154007.0.0.3edd7eb6E90YT4).
       * - In the returned result, charges apply when VerifyResult is true/false and ReasonCode is 0/1/2. No charges apply in other cases.
       * - Before you use this API, log on to the [Cell Phone Number Service console](https://account.aliyun.com/login/login.htm?oauth_callback=https%3A%2F%2Fdytns.console.aliyun.com%2Foverview%3Fspm%3Da2c4g.608385.0.0.79847f8b3awqUC&lang=zh), go to the [Tag Plaza](https://dytns.console.aliyun.com/analysis/square) page, find the corresponding tag, click **Apply for Activation**, and submit the application materials. You can use the API after the application is approved.
       * ### QPS limit
       * The per-user QPS limit for this API is 200 calls per second. Requests that exceed this limit are throttled, which may affect your business. Call this API at a reasonable rate.
       *
       * @param request CompanyThreeElementsVerificationRequest
       * @return CompanyThreeElementsVerificationResponse
       */
      Models::CompanyThreeElementsVerificationResponse companyThreeElementsVerification(const Models::CompanyThreeElementsVerificationRequest &request);

      /**
       * @summary Used to verify the enterprise name and enterprise certificate number. The name and certificate must be fully consistent, and the enterprise must be in operating status for the verification to pass.
       *
       * @description - Before you use this API, make sure that you fully understand the billing methods and pricing of the Enterprise Two-Element Verification product. For billing details, see [Product billing](https://help.aliyun.com/document_detail/154751.html?spm=a2c4g.154007.0.0.3edd7eb6E90YT4).
       * - Billing applies when Code=OK and ReasonCode=0/1/3 in the returned result. Other cases are not billed.
       * - Before you use this API, log on to the [Cell Phone Number Service console](https://account.aliyun.com/login/login.htm?oauth_callback=https%3A%2F%2Fdytns.console.aliyun.com%2Foverview%3Fspm%3Da2c4g.608385.0.0.79847f8b3awqUC&lang=zh), find the corresponding tag on the [Tag Plaza](https://dytns.console.aliyun.com/analysis/square) page, click **Apply to Activate**, and fill in the application materials. After the application is approved, you can use the API.
       * ### QPS limit
       * The single-user QPS limit for this API is 200 times/second. If the limit is exceeded, API calls will be throttled, which may affect your business. Please call the API reasonably.
       *
       * @param request CompanyTwoElementsVerificationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CompanyTwoElementsVerificationResponse
       */
      Models::CompanyTwoElementsVerificationResponse companyTwoElementsVerificationWithOptions(const Models::CompanyTwoElementsVerificationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Used to verify the enterprise name and enterprise certificate number. The name and certificate must be fully consistent, and the enterprise must be in operating status for the verification to pass.
       *
       * @description - Before you use this API, make sure that you fully understand the billing methods and pricing of the Enterprise Two-Element Verification product. For billing details, see [Product billing](https://help.aliyun.com/document_detail/154751.html?spm=a2c4g.154007.0.0.3edd7eb6E90YT4).
       * - Billing applies when Code=OK and ReasonCode=0/1/3 in the returned result. Other cases are not billed.
       * - Before you use this API, log on to the [Cell Phone Number Service console](https://account.aliyun.com/login/login.htm?oauth_callback=https%3A%2F%2Fdytns.console.aliyun.com%2Foverview%3Fspm%3Da2c4g.608385.0.0.79847f8b3awqUC&lang=zh), find the corresponding tag on the [Tag Plaza](https://dytns.console.aliyun.com/analysis/square) page, click **Apply to Activate**, and fill in the application materials. After the application is approved, you can use the API.
       * ### QPS limit
       * The single-user QPS limit for this API is 200 times/second. If the limit is exceeded, API calls will be throttled, which may affect your business. Please call the API reasonably.
       *
       * @param request CompanyTwoElementsVerificationRequest
       * @return CompanyTwoElementsVerificationResponse
       */
      Models::CompanyTwoElementsVerificationResponse companyTwoElementsVerification(const Models::CompanyTwoElementsVerificationRequest &request);

      /**
       * @summary Deletes a contact.
       *
       * @description - Make sure you have activated Phone Number Identity Service before calling this operation.
       *
       * @param request DeleteContactsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteContactsResponse
       */
      Models::DeleteContactsResponse deleteContactsWithOptions(const Models::DeleteContactsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a contact.
       *
       * @description - Make sure you have activated Phone Number Identity Service before calling this operation.
       *
       * @param request DeleteContactsRequest
       * @return DeleteContactsResponse
       */
      Models::DeleteContactsResponse deleteContacts(const Models::DeleteContactsRequest &request);

      /**
       * @summary Predicts whether a phone number is invalid by using AI algorithms.
       *
       * @description - 本接口用于验证号码是否为空号。发起调用该接口验证号码请求时，系统会根据验证次数计费，标准价为0.01元/次。**请确保在使用该接口前，已充分了解本产品的收费方式和价格。**
       * - 当返回结果中：Code="OK" 且 Status != UNKNOWN 时计费，其他情况不计费。 
       * - 由于本产品通过AI算法预测手机号的空号概率，所以无法做到100%准确。当前评估的准确率和召回率约为95%左右。**调用时请注意差别**。
       * - 使用本接口前，请登录号码百科控制台，在[标签广场](https://dytns.console.aliyun.com/analysis/square)页面，找到对应的标签，单击**申请开通**，填写申请资料，审批通过后即可使用。
       * ### QPS限制
       * 本接口的单用户QPS限制为100次/秒。超过限制，API调用会被限流，这可能会影响您的业务，请合理调用。
       * ### 授权信息
       * 默认仅限阿里云账号使用本接口，RAM用户只有在被授予了相关API操作权限后方可使用。具体请参见[为RAM用户授权](https://help.aliyun.com/document_detail/154006.html)。
       *
       * @param request DescribeEmptyNumberRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEmptyNumberResponse
       */
      Models::DescribeEmptyNumberResponse describeEmptyNumberWithOptions(const Models::DescribeEmptyNumberRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Predicts whether a phone number is invalid by using AI algorithms.
       *
       * @description - 本接口用于验证号码是否为空号。发起调用该接口验证号码请求时，系统会根据验证次数计费，标准价为0.01元/次。**请确保在使用该接口前，已充分了解本产品的收费方式和价格。**
       * - 当返回结果中：Code="OK" 且 Status != UNKNOWN 时计费，其他情况不计费。 
       * - 由于本产品通过AI算法预测手机号的空号概率，所以无法做到100%准确。当前评估的准确率和召回率约为95%左右。**调用时请注意差别**。
       * - 使用本接口前，请登录号码百科控制台，在[标签广场](https://dytns.console.aliyun.com/analysis/square)页面，找到对应的标签，单击**申请开通**，填写申请资料，审批通过后即可使用。
       * ### QPS限制
       * 本接口的单用户QPS限制为100次/秒。超过限制，API调用会被限流，这可能会影响您的业务，请合理调用。
       * ### 授权信息
       * 默认仅限阿里云账号使用本接口，RAM用户只有在被授予了相关API操作权限后方可使用。具体请参见[为RAM用户授权](https://help.aliyun.com/document_detail/154006.html)。
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
       * @summary Obtains the result returned by phone number analysis.
       *
       * @description - Before you use this API, log on to the Phone Number Service console, go to the [Tag Plaza](https://dytns.console.aliyun.com/analysis/square) page, find the corresponding tag, click **Apply to Activate**, fill in the application materials, and then use the API after the application is approved.
       * - Before you use this API, make sure that you fully understand the [billing](https://help.aliyun.com/document_detail/154008.html) of Phone Number Service.
       * ### QPS limit
       * The QPS limit of this API is 1,000 calls per second per user. If the limit is exceeded, API calls are throttled, which may affect your business. Make calls properly.
       * ### Authorization information
       * By default, only Alibaba Cloud accounts can use this API. RAM users can use this API only after they are granted the related API operation permissions. For more information, see [Authorize a RAM user](https://help.aliyun.com/document_detail/154006.html).
       *
       * @param request DescribePhoneNumberAnalysisRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePhoneNumberAnalysisResponse
       */
      Models::DescribePhoneNumberAnalysisResponse describePhoneNumberAnalysisWithOptions(const Models::DescribePhoneNumberAnalysisRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the result returned by phone number analysis.
       *
       * @description - Before you use this API, log on to the Phone Number Service console, go to the [Tag Plaza](https://dytns.console.aliyun.com/analysis/square) page, find the corresponding tag, click **Apply to Activate**, fill in the application materials, and then use the API after the application is approved.
       * - Before you use this API, make sure that you fully understand the [billing](https://help.aliyun.com/document_detail/154008.html) of Phone Number Service.
       * ### QPS limit
       * The QPS limit of this API is 1,000 calls per second per user. If the limit is exceeded, API calls are throttled, which may affect your business. Make calls properly.
       * ### Authorization information
       * By default, only Alibaba Cloud accounts can use this API. RAM users can use this API only after they are granted the related API operation permissions. For more information, see [Authorize a RAM user](https://help.aliyun.com/document_detail/154006.html).
       *
       * @param request DescribePhoneNumberAnalysisRequest
       * @return DescribePhoneNumberAnalysisResponse
       */
      Models::DescribePhoneNumberAnalysisResponse describePhoneNumberAnalysis(const Models::DescribePhoneNumberAnalysisRequest &request);

      /**
       * @summary Get the phone number analysis result.
       *
       * @description Before using this operation, log on to the Cell Phone Number Service console, go to the Tag Square page, find the corresponding tag, click Apply to activate, and fill in the application materials. You can use the operation after the application is approved.
       * Make sure that you fully understand the billing of the Cell Phone Number Service before you use this operation.
       *
       * @param request DescribePhoneNumberAnalysisAIRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePhoneNumberAnalysisAIResponse
       */
      Models::DescribePhoneNumberAnalysisAIResponse describePhoneNumberAnalysisAIWithOptions(const Models::DescribePhoneNumberAnalysisAIRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Get the phone number analysis result.
       *
       * @description Before using this operation, log on to the Cell Phone Number Service console, go to the Tag Square page, find the corresponding tag, click Apply to activate, and fill in the application materials. You can use the operation after the application is approved.
       * Make sure that you fully understand the billing of the Cell Phone Number Service before you use this operation.
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
       * @param request DescribePhoneNumberAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePhoneNumberAttributeResponse
       */
      Models::DescribePhoneNumberAttributeResponse describePhoneNumberAttributeWithOptions(const Models::DescribePhoneNumberAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DescribePhoneNumberAttribute is deprecated, please use Dytnsapi::2020-02-17::DescribePhoneNumberOperatorAttribute instead.
       *
       * @param request DescribePhoneNumberAttributeRequest
       * @return DescribePhoneNumberAttributeResponse
       */
      Models::DescribePhoneNumberAttributeResponse describePhoneNumberAttribute(const Models::DescribePhoneNumberAttributeRequest &request);

      /**
       * @summary Queries the duration for which a mobile user has been registered on the carrier\\"s network.
       *
       * @description - Before using this API, log on to the Cell Phone Number Service console, go to the [Tag Square](https://dytns.console.aliyun.com/analysis/square) page, find the corresponding tag, click **Apply for Activation**, fill in the application materials, and use the API after the application is approved.
       * - Make sure that you fully understand the [product pricing](https://help.aliyun.com/document_detail/154751.html) of Cell Phone Number Service before using this API.
       * ### QPS limit
       * The per-user QPS limit for this API is 200 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this API at a reasonable rate.
       *
       * @param request DescribePhoneNumberOnlineTimeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePhoneNumberOnlineTimeResponse
       */
      Models::DescribePhoneNumberOnlineTimeResponse describePhoneNumberOnlineTimeWithOptions(const Models::DescribePhoneNumberOnlineTimeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the duration for which a mobile user has been registered on the carrier\\"s network.
       *
       * @description - Before using this API, log on to the Cell Phone Number Service console, go to the [Tag Square](https://dytns.console.aliyun.com/analysis/square) page, find the corresponding tag, click **Apply for Activation**, fill in the application materials, and use the API after the application is approved.
       * - Make sure that you fully understand the [product pricing](https://help.aliyun.com/document_detail/154751.html) of Cell Phone Number Service before using this API.
       * ### QPS limit
       * The per-user QPS limit for this API is 200 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this API at a reasonable rate.
       *
       * @param request DescribePhoneNumberOnlineTimeRequest
       * @return DescribePhoneNumberOnlineTimeResponse
       */
      Models::DescribePhoneNumberOnlineTimeResponse describePhoneNumberOnlineTime(const Models::DescribePhoneNumberOnlineTimeRequest &request);

      /**
       * @summary Queries the carrier information of a phone number, including the province, city, basic carrier (China Mobile, China Unicom, China Telecom, or China Broadnet), mobile virtual network operator (such as Alibaba Cloud Communication), whether the number has been ported, and the number segment.
       *
       * @description - Before you use this API, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/154008.html) of Cell Phone Number Service.
       * - By default, only Alibaba Cloud accounts can use this API. RAM users can use this API only after they are granted the required permissions. For more information, see [Grant permissions to a RAM user](https://help.aliyun.com/document_detail/154006.html).
       * - This API is used to obtain the current carrier, location, and number portability information of a phone number. The API supports queries for **plaintext**, **MD5**, and **SHA256** encrypted phone numbers.
       * - Before you use this API, log on to the Cell Phone Number Service console, go to the [Tag Square](https://dytns.console.aliyun.com/analysis/square) page, find the corresponding tag, click **Apply for Activation**, and submit the application materials. You can use the API after your application is approved.
       * ### QPS limit
       * The QPS limit per user for this API is 2,000 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Make calls reasonably.
       *
       * @param request DescribePhoneNumberOperatorAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePhoneNumberOperatorAttributeResponse
       */
      Models::DescribePhoneNumberOperatorAttributeResponse describePhoneNumberOperatorAttributeWithOptions(const Models::DescribePhoneNumberOperatorAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the carrier information of a phone number, including the province, city, basic carrier (China Mobile, China Unicom, China Telecom, or China Broadnet), mobile virtual network operator (such as Alibaba Cloud Communication), whether the number has been ported, and the number segment.
       *
       * @description - Before you use this API, make sure that you are familiar with the [billing](https://help.aliyun.com/document_detail/154008.html) of Cell Phone Number Service.
       * - By default, only Alibaba Cloud accounts can use this API. RAM users can use this API only after they are granted the required permissions. For more information, see [Grant permissions to a RAM user](https://help.aliyun.com/document_detail/154006.html).
       * - This API is used to obtain the current carrier, location, and number portability information of a phone number. The API supports queries for **plaintext**, **MD5**, and **SHA256** encrypted phone numbers.
       * - Before you use this API, log on to the Cell Phone Number Service console, go to the [Tag Square](https://dytns.console.aliyun.com/analysis/square) page, find the corresponding tag, click **Apply for Activation**, and submit the application materials. You can use the API after your application is approved.
       * ### QPS limit
       * The QPS limit per user for this API is 2,000 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Make calls reasonably.
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
       * @summary Quickly verify in a single request if a mobile phone number is a carrier\\"s secondary number assignment.
       *
       * @description - Before you use this API, make sure you understand the [pricing](https://help.aliyun.com/document_detail/154751.html) for Phone Number Verification Service.
       * - You are charged only when the API response returns `Code="OK"` and `VerifyResult` is not `0`. No charge is incurred in any other case.
       * - Before you use this API, log in to the Phone Number Verification Service console. On the [Tag Square](https://dytns.console.aliyun.com/analysis/square) page, find the tag you need, click **Request Activation**, and complete the application form. You can use the API once your application is approved.
       * ## QPS limits
       * The QPS limit is 100 per user. If you exceed this limit, the system throttles your API calls, which may affect your business. Plan your API calls accordingly.
       * ## Authorization
       * By default, only an Alibaba Cloud account can call this API. A RAM user must be granted the required permissions to call the API. For more information, see [Grant permissions to a RAM user](https://help.aliyun.com/document_detail/154006.html).
       *
       * @param request DescribePhoneTwiceTelVerifyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePhoneTwiceTelVerifyResponse
       */
      Models::DescribePhoneTwiceTelVerifyResponse describePhoneTwiceTelVerifyWithOptions(const Models::DescribePhoneTwiceTelVerifyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Quickly verify in a single request if a mobile phone number is a carrier\\"s secondary number assignment.
       *
       * @description - Before you use this API, make sure you understand the [pricing](https://help.aliyun.com/document_detail/154751.html) for Phone Number Verification Service.
       * - You are charged only when the API response returns `Code="OK"` and `VerifyResult` is not `0`. No charge is incurred in any other case.
       * - Before you use this API, log in to the Phone Number Verification Service console. On the [Tag Square](https://dytns.console.aliyun.com/analysis/square) page, find the tag you need, click **Request Activation**, and complete the application form. You can use the API once your application is approved.
       * ## QPS limits
       * The QPS limit is 100 per user. If you exceed this limit, the system throttles your API calls, which may affect your business. Plan your API calls accordingly.
       * ## Authorization
       * By default, only an Alibaba Cloud account can call this API. A RAM user must be granted the required permissions to call the API. For more information, see [Grant permissions to a RAM user](https://help.aliyun.com/document_detail/154006.html).
       *
       * @param request DescribePhoneTwiceTelVerifyRequest
       * @return DescribePhoneTwiceTelVerifyResponse
       */
      Models::DescribePhoneTwiceTelVerifyResponse describePhoneTwiceTelVerify(const Models::DescribePhoneTwiceTelVerifyRequest &request);

      /**
       * @summary This API only provides the signing functionality for acquiring an authorization token during UAID retrieval from the three-network operators.
       *
       * @description This API provides only the **signing function for obtaining an authorization token** as part of the UAID retrieval process for China\\"s three major operators.
       * - To generate the other parameters required to obtain the authorization token, refer to the respective operator\\"s documentation.
       * - To request the authorization token, refer to the respective operator\\"s documentation. Note that the request must be sent from the user\\"s mobile device over a cellular network.
       * - After obtaining the authorization token, call the [UAIDVerification](~~UAIDVerification~~) API to complete the UAID retrieval.
       * ### How to request an authorization token
       * >Notice: 
       * When you request an authorization token, the client or H5 page must be connected to a cellular network.
       * #### China Mobile (CM)
       * Protocol: HTTPS + application/json
       * Method: POST
       * URL: https\\://msg.cmpassport.com/h5/getMobile
       * ##### Request parameters
       * Request example:
       * `{ "traceId": "mfawsxtcmyplwzpayzzvdvbsowxmkynr", "appId": "300011580392", "sign": "2c61b3c58ffbeed97461e31be4fd931a", "msgId": "redbyxsdetddwaaffajcwwapspykftzx", "expandParams": "", "businessType": "3", "version": "1.0", "timestamp": "20201125101540980" }`
       * Parameter description:
       * - `version`: Use `1.0`.
       * - `timestamp`: The request timestamp, with millisecond precision. This value and its format must match the `Time` input parameter for this API.
       * - `appId`: Use `300011580392`.
       * - `businessType`: Use `3`.
       * - `traceId`: The trace ID. This value must match this API\\"s `OutId` input parameter.
       * - `sign`: Obtained by calling this API.
       * - `msgId`: A unique message identifier.
       * ##### Response parameters
       * Response example:
       * `{ "header": { "appId": "300011580392", "msgId": "redbyxsdetddwaaffajcwwapspykftzx", "timestamp": "20201125101607932" }, "body": { "resultCode": "103000", "expandParams": "", "resultDesc": "成功", "token": "H5HTTPS4187AE9743AFCB14F8D99B9D65ED9E01" } }`
       * Retrieve the `token` from the response `body`.
       * #### China Unicom (CU)
       * Obtain the token in two steps.
       * ##### Step 1: Obtain the authurl
       * Send a request to the portal server to get the authentication server address (`authurl`).
       * Protocol: HTTPS + application/json
       * Method: GET
       * URL: https\\://nisportal.10010.com:9001/api
       * ###### Request parameters
       * Request examples:
       * JSON request: `?appid=1554778161153`
       * JSONP request: `?appid=1554778161153&callback=callbackFunction`
       * Parameter description:
       * - `appid`: Use 1554778161153.
       * - `callback`: The name of the JSONP callback function. This parameter is required only for JSONP requests.
       * ###### Response parameters
       * Response examples:
       * JSON response:
       * `{"authurl": "https://enrichgw.10010.com/d93222629f52ec79"}`
       * JSONP response:
       * `callbackFunction({"authurl":"https://enrichgw.10010.com/d93222629f52ec79"})`
       * Retrieve the `authurl` from the response.
       * ##### Step 2: Obtain the token
       * Protocol: HTTPS + application/json
       * Method: GET
       * URL: The authurl from Step 1, with /api appended.
       * Request URL example: `https://enrichgw.10010.com/d93222629f52ec79/api`
       * ###### Request parameters
       * Request examples:
       * JSON request: `?appid=1554778161153`
       * JSONP request: `?appid=1554778161153&callback=callbackFunction`
       * Parameter description:
       * - `appid`: Use 1554778161153.
       * - `callback`: The name of the JSONP callback function. This parameter is required only for JSONP requests.
       * ###### Response parameters
       * Response examples:
       * JSON response:
       * `{ "province": "1", "code": "7nHS1nggx2WP613750206700RN6oiRN1" }`
       * JSONP response:
       * `callbackFunction({"province":"1","code":"7nHS3Dnkd1BS701851092400RN6oiRN1"})`
       * Retrieve the `code` from the response.
       * #### China Telecom (CT)
       * Protocol: HTTPS + application/x-www-form-urlencoded;charset=UTF-8
       * Method: GET
       * URL: https\\://id6.me/gw/preuniq.do
       * ##### Request parameters
       * Request example:
       * `?clientType=30100&appId=9390188202&format=json&sign=D63C166FA19E1996EF********09C6A5397C10B4&paramKey=1D7C25EB8B0B8B4CB3CF8DC60628F6549********786B0AF1FEF93FA1335057A35BF5F0B39A3867EAA9BE14B3898********8B01DE34965060445B6E1F66401D714650E4AB161CD6DCF4A72********3B856F22A192B8B0C39D7A55B961062E68C89C928894F119B25********7C548355FE9DB82852EB93C939F2200B48CD17&paramStr=140********95AF8E138B94754CB4CF83BA6FB********52B258BFDFD38BF233&version=1.1`
       * Parameter description:
       * - `appId`: Use `9390188202`.
       * - `clientType`: The client type. This value must match the `ClientType` input parameter for this API.
       * - `format`: Use `json` or `jsonp`.
       * - `version`: Use `1.1`.
       * - `sign`: Obtained by calling this API.
       * - `paramKey`: The ciphertext of key A. Key A is a 16-character random string generated by the client. To generate paramKey, encrypt key A using the RSA algorithm and the China Telecom public key. The padding mode is `RSA/ECB/PKCS1Padding`. Download the [China Telecom RSA public key](https://id.189.cn/source/files/API.pem).
       * - `paramStr`: The ciphertext of a parameter string. This string contains `timeStamp` (a Unix timestamp with millisecond precision, for example `1697791988302`, that corresponds to the value of the `Time` parameter of this API) and `callback` (the name of the JSONP callback function, required only when `format` is set to `jsonp`). To generate `paramStr`, encrypt the string using AES with key A. The padding mode is `AES/CBC/PKCS5Padding`, and the initialization vector is `0000000000000000`.
       * ##### Response parameters
       * Response example:
       * `callback?result=10000&msg=success&data=a35336711c70456cb883f4f224e9a259`
       * The `data` parameter contains the ciphertext of the business result. To get the result, decrypt the data value using key A, the `AES/CBC/PKCS5Padding` mode, and an initialization vector of `0000000000000000`.
       * Decrypted business result example:
       * `{"accessCode": "H5HTTPS4187AE9743AFCB14F8D99B9D65ED9E01"}`
       * Retrieve the `accessCode` from the decrypted result.
       *
       * @param request GetUAIDApplyTokenSignRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUAIDApplyTokenSignResponse
       */
      Models::GetUAIDApplyTokenSignResponse getUAIDApplyTokenSignWithOptions(const Models::GetUAIDApplyTokenSignRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This API only provides the signing functionality for acquiring an authorization token during UAID retrieval from the three-network operators.
       *
       * @description This API provides only the **signing function for obtaining an authorization token** as part of the UAID retrieval process for China\\"s three major operators.
       * - To generate the other parameters required to obtain the authorization token, refer to the respective operator\\"s documentation.
       * - To request the authorization token, refer to the respective operator\\"s documentation. Note that the request must be sent from the user\\"s mobile device over a cellular network.
       * - After obtaining the authorization token, call the [UAIDVerification](~~UAIDVerification~~) API to complete the UAID retrieval.
       * ### How to request an authorization token
       * >Notice: 
       * When you request an authorization token, the client or H5 page must be connected to a cellular network.
       * #### China Mobile (CM)
       * Protocol: HTTPS + application/json
       * Method: POST
       * URL: https\\://msg.cmpassport.com/h5/getMobile
       * ##### Request parameters
       * Request example:
       * `{ "traceId": "mfawsxtcmyplwzpayzzvdvbsowxmkynr", "appId": "300011580392", "sign": "2c61b3c58ffbeed97461e31be4fd931a", "msgId": "redbyxsdetddwaaffajcwwapspykftzx", "expandParams": "", "businessType": "3", "version": "1.0", "timestamp": "20201125101540980" }`
       * Parameter description:
       * - `version`: Use `1.0`.
       * - `timestamp`: The request timestamp, with millisecond precision. This value and its format must match the `Time` input parameter for this API.
       * - `appId`: Use `300011580392`.
       * - `businessType`: Use `3`.
       * - `traceId`: The trace ID. This value must match this API\\"s `OutId` input parameter.
       * - `sign`: Obtained by calling this API.
       * - `msgId`: A unique message identifier.
       * ##### Response parameters
       * Response example:
       * `{ "header": { "appId": "300011580392", "msgId": "redbyxsdetddwaaffajcwwapspykftzx", "timestamp": "20201125101607932" }, "body": { "resultCode": "103000", "expandParams": "", "resultDesc": "成功", "token": "H5HTTPS4187AE9743AFCB14F8D99B9D65ED9E01" } }`
       * Retrieve the `token` from the response `body`.
       * #### China Unicom (CU)
       * Obtain the token in two steps.
       * ##### Step 1: Obtain the authurl
       * Send a request to the portal server to get the authentication server address (`authurl`).
       * Protocol: HTTPS + application/json
       * Method: GET
       * URL: https\\://nisportal.10010.com:9001/api
       * ###### Request parameters
       * Request examples:
       * JSON request: `?appid=1554778161153`
       * JSONP request: `?appid=1554778161153&callback=callbackFunction`
       * Parameter description:
       * - `appid`: Use 1554778161153.
       * - `callback`: The name of the JSONP callback function. This parameter is required only for JSONP requests.
       * ###### Response parameters
       * Response examples:
       * JSON response:
       * `{"authurl": "https://enrichgw.10010.com/d93222629f52ec79"}`
       * JSONP response:
       * `callbackFunction({"authurl":"https://enrichgw.10010.com/d93222629f52ec79"})`
       * Retrieve the `authurl` from the response.
       * ##### Step 2: Obtain the token
       * Protocol: HTTPS + application/json
       * Method: GET
       * URL: The authurl from Step 1, with /api appended.
       * Request URL example: `https://enrichgw.10010.com/d93222629f52ec79/api`
       * ###### Request parameters
       * Request examples:
       * JSON request: `?appid=1554778161153`
       * JSONP request: `?appid=1554778161153&callback=callbackFunction`
       * Parameter description:
       * - `appid`: Use 1554778161153.
       * - `callback`: The name of the JSONP callback function. This parameter is required only for JSONP requests.
       * ###### Response parameters
       * Response examples:
       * JSON response:
       * `{ "province": "1", "code": "7nHS1nggx2WP613750206700RN6oiRN1" }`
       * JSONP response:
       * `callbackFunction({"province":"1","code":"7nHS3Dnkd1BS701851092400RN6oiRN1"})`
       * Retrieve the `code` from the response.
       * #### China Telecom (CT)
       * Protocol: HTTPS + application/x-www-form-urlencoded;charset=UTF-8
       * Method: GET
       * URL: https\\://id6.me/gw/preuniq.do
       * ##### Request parameters
       * Request example:
       * `?clientType=30100&appId=9390188202&format=json&sign=D63C166FA19E1996EF********09C6A5397C10B4&paramKey=1D7C25EB8B0B8B4CB3CF8DC60628F6549********786B0AF1FEF93FA1335057A35BF5F0B39A3867EAA9BE14B3898********8B01DE34965060445B6E1F66401D714650E4AB161CD6DCF4A72********3B856F22A192B8B0C39D7A55B961062E68C89C928894F119B25********7C548355FE9DB82852EB93C939F2200B48CD17&paramStr=140********95AF8E138B94754CB4CF83BA6FB********52B258BFDFD38BF233&version=1.1`
       * Parameter description:
       * - `appId`: Use `9390188202`.
       * - `clientType`: The client type. This value must match the `ClientType` input parameter for this API.
       * - `format`: Use `json` or `jsonp`.
       * - `version`: Use `1.1`.
       * - `sign`: Obtained by calling this API.
       * - `paramKey`: The ciphertext of key A. Key A is a 16-character random string generated by the client. To generate paramKey, encrypt key A using the RSA algorithm and the China Telecom public key. The padding mode is `RSA/ECB/PKCS1Padding`. Download the [China Telecom RSA public key](https://id.189.cn/source/files/API.pem).
       * - `paramStr`: The ciphertext of a parameter string. This string contains `timeStamp` (a Unix timestamp with millisecond precision, for example `1697791988302`, that corresponds to the value of the `Time` parameter of this API) and `callback` (the name of the JSONP callback function, required only when `format` is set to `jsonp`). To generate `paramStr`, encrypt the string using AES with key A. The padding mode is `AES/CBC/PKCS5Padding`, and the initialization vector is `0000000000000000`.
       * ##### Response parameters
       * Response example:
       * `callback?result=10000&msg=success&data=a35336711c70456cb883f4f224e9a259`
       * The `data` parameter contains the ciphertext of the business result. To get the result, decrypt the data value using key A, the `AES/CBC/PKCS5Padding` mode, and an initialization vector of `0000000000000000`.
       * Decrypted business result example:
       * `{"accessCode": "H5HTTPS4187AE9743AFCB14F8D99B9D65ED9E01"}`
       * Retrieve the `accessCode` from the decrypted result.
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
       * @summary Verifies whether a name, phone number, and ID number belonged to the same user at a specific point in time.
       *
       * @description ## Usage notes
       * - Before you use this API, ensure you understand its [pricing](https://help.aliyun.com/zh/cpns/product-overview/pricing-of-cpns).
       * - Before you use this API, log on to the Phone Number Intelligence console and apply for the required tag on the [Tag Plaza](https://dytns.console.aliyun.com/analysis/square) page.
       * - You are charged for a call only when the response returns `Code=\\"OK\\"` and `IsConsistent != 0`. No charges are incurred for any other results.
       * - Verification of China Broadcasting Network numbers (numbers with the 192 prefix) is not supported. If you provide a number with the 192 prefix, an HTTP 400 error is returned.
       * - Due to number portability, the actual carrier may differ from the current carrier of record. You can use the `Carrier` parameter to route the query to a specific carrier.
       * - The queries per second (QPS) limit per user is 200. Requests that exceed this limit are throttled.
       * - In the authorization information, the action is `dytns:HistoryThreeElementsVerification`, the access level is Read, and the resource type is All Resources.
       *
       * @param request HistoryThreeElementsVerificationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return HistoryThreeElementsVerificationResponse
       */
      Models::HistoryThreeElementsVerificationResponse historyThreeElementsVerificationWithOptions(const Models::HistoryThreeElementsVerificationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Verifies whether a name, phone number, and ID number belonged to the same user at a specific point in time.
       *
       * @description ## Usage notes
       * - Before you use this API, ensure you understand its [pricing](https://help.aliyun.com/zh/cpns/product-overview/pricing-of-cpns).
       * - Before you use this API, log on to the Phone Number Intelligence console and apply for the required tag on the [Tag Plaza](https://dytns.console.aliyun.com/analysis/square) page.
       * - You are charged for a call only when the response returns `Code=\\"OK\\"` and `IsConsistent != 0`. No charges are incurred for any other results.
       * - Verification of China Broadcasting Network numbers (numbers with the 192 prefix) is not supported. If you provide a number with the 192 prefix, an HTTP 400 error is returned.
       * - Due to number portability, the actual carrier may differ from the current carrier of record. You can use the `Carrier` parameter to route the query to a specific carrier.
       * - The queries per second (QPS) limit per user is 200. Requests that exceed this limit are throttled.
       * - In the authorization information, the action is `dytns:HistoryThreeElementsVerification`, the access level is Read, and the resource type is All Resources.
       *
       * @param request HistoryThreeElementsVerificationRequest
       * @return HistoryThreeElementsVerificationResponse
       */
      Models::HistoryThreeElementsVerificationResponse historyThreeElementsVerification(const Models::HistoryThreeElementsVerificationRequest &request);

      /**
       * @summary Performs invalid phone number filtering operations.
       *
       * @description Before you call this operation, log on to the Cell Phone Number Service console. On the [Tag Square](https://dytns.console.aliyun.com/analysis/square) page, find the corresponding tag, click **Apply for Activation**, and submit the application materials. You can use this operation after the application is approved.
       * ### QPS limit
       * The QPS limit per user for this operation is 1,000 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call the operation at a reasonable frequency.
       *
       * @param request InvalidPhoneNumberFilterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return InvalidPhoneNumberFilterResponse
       */
      Models::InvalidPhoneNumberFilterResponse invalidPhoneNumberFilterWithOptions(const Models::InvalidPhoneNumberFilterRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Performs invalid phone number filtering operations.
       *
       * @description Before you call this operation, log on to the Cell Phone Number Service console. On the [Tag Square](https://dytns.console.aliyun.com/analysis/square) page, find the corresponding tag, click **Apply for Activation**, and submit the application materials. You can use this operation after the application is approved.
       * ### QPS limit
       * The QPS limit per user for this operation is 1,000 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call the operation at a reasonable frequency.
       *
       * @param request InvalidPhoneNumberFilterRequest
       * @return InvalidPhoneNumberFilterResponse
       */
      Models::InvalidPhoneNumberFilterResponse invalidPhoneNumberFilter(const Models::InvalidPhoneNumberFilterRequest &request);

      /**
       * @summary Lists the alert contacts for Number Encyclopedia.
       *
       * @description - Before using this API, ensure that you have activated Number Encyclopedia.
       *
       * @param request ListContactsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListContactsResponse
       */
      Models::ListContactsResponse listContactsWithOptions(const Models::ListContactsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists the alert contacts for Number Encyclopedia.
       *
       * @description - Before using this API, ensure that you have activated Number Encyclopedia.
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
       * @summary Encrypts an original phone number into a virtual phone number that starts with 140. By integrating with Alibaba Cloud communication services, you can use the encrypted 140 phone number to initiate voice calls, achieving the effect of a virtual phone number call.
       *
       * @description Before you use this API, log on to the Cell Phone Number Service console, go to the [Tag Plaza](https://dytns.console.aliyun.com/analysis/square) page, find the corresponding tag, click **Apply for Activation**, and fill in the application materials. You can use this API after the application is approved.
       * ### QPS limit
       * The per-user QPS limit of this API is 1,000 calls per second. If the number of API calls exceeds the limit, the calls will be throttled, which may affect your business. Call the API properly.
       *
       * @param request PhoneNumberEncryptRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PhoneNumberEncryptResponse
       */
      Models::PhoneNumberEncryptResponse phoneNumberEncryptWithOptions(const Models::PhoneNumberEncryptRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Encrypts an original phone number into a virtual phone number that starts with 140. By integrating with Alibaba Cloud communication services, you can use the encrypted 140 phone number to initiate voice calls, achieving the effect of a virtual phone number call.
       *
       * @description Before you use this API, log on to the Cell Phone Number Service console, go to the [Tag Plaza](https://dytns.console.aliyun.com/analysis/square) page, find the corresponding tag, click **Apply for Activation**, and fill in the application materials. You can use this API after the application is approved.
       * ### QPS limit
       * The per-user QPS limit of this API is 1,000 calls per second. If the number of API calls exceeds the limit, the calls will be throttled, which may affect your business. Call the API properly.
       *
       * @param request PhoneNumberEncryptRequest
       * @return PhoneNumberEncryptResponse
       */
      Models::PhoneNumberEncryptResponse phoneNumberEncrypt(const Models::PhoneNumberEncryptRequest &request);

      /**
       * @summary Retrieves the real-time network status of a mobile phone number, such as active, shutdown, or non-existent. You can query numbers that are in plaintext or hashed using MD5 or SHA256.
       *
       * @description - **Before you use this operation, make sure that you fully understand the [pricing](https://help.aliyun.com/document_detail/154751.html) of Phone Number Intelligence.**
       * - By default, only an Alibaba Cloud account can call this operation. A RAM user can call this operation only after receiving the required permissions. For more information, see [Grant permissions to RAM users](https://help.aliyun.com/document_detail/154006.html).
       * - Before you use this operation, log on to the Phone Number Intelligence console. On the [Tag Plaza](https://dytns.console.aliyun.com/analysis/square) page, find the required tag, click **Apply**, and then submit the required information. You can use this operation once your application is approved.
       * - The phone number status query feature supports numbers from China Telecom, China Unicom, and China Mobile. This feature does not support numbers from China Broadnet. If you call this operation to query a China Broadnet number, the API returns the error code `OperatorLimit`, which indicates that the query is prohibited by the carrier.
       * ### QPS limit
       * This operation has a queries per second (QPS) limit of 300 per user. If you exceed this limit, your API calls are throttled, which may affect your services. We recommend that you call this operation at a reasonable frequency.
       *
       * @param request PhoneNumberStatusForAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PhoneNumberStatusForAccountResponse
       */
      Models::PhoneNumberStatusForAccountResponse phoneNumberStatusForAccountWithOptions(const Models::PhoneNumberStatusForAccountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the real-time network status of a mobile phone number, such as active, shutdown, or non-existent. You can query numbers that are in plaintext or hashed using MD5 or SHA256.
       *
       * @description - **Before you use this operation, make sure that you fully understand the [pricing](https://help.aliyun.com/document_detail/154751.html) of Phone Number Intelligence.**
       * - By default, only an Alibaba Cloud account can call this operation. A RAM user can call this operation only after receiving the required permissions. For more information, see [Grant permissions to RAM users](https://help.aliyun.com/document_detail/154006.html).
       * - Before you use this operation, log on to the Phone Number Intelligence console. On the [Tag Plaza](https://dytns.console.aliyun.com/analysis/square) page, find the required tag, click **Apply**, and then submit the required information. You can use this operation once your application is approved.
       * - The phone number status query feature supports numbers from China Telecom, China Unicom, and China Mobile. This feature does not support numbers from China Broadnet. If you call this operation to query a China Broadnet number, the API returns the error code `OperatorLimit`, which indicates that the query is prohibited by the carrier.
       * ### QPS limit
       * This operation has a queries per second (QPS) limit of 300 per user. If you exceed this limit, your API calls are throttled, which may affect your services. We recommend that you call this operation at a reasonable frequency.
       *
       * @param request PhoneNumberStatusForAccountRequest
       * @return PhoneNumberStatusForAccountResponse
       */
      Models::PhoneNumberStatusForAccountResponse phoneNumberStatusForAccount(const Models::PhoneNumberStatusForAccountRequest &request);

      /**
       * @summary Queries the real-time status of a mobile phone number to determine whether it is in service, suspended, or non-existent. This operation supports queries for plaintext numbers or numbers encrypted with MD5 or SHA256.
       *
       * @description - **Before you call this operation, make sure that you fully understand the [pricing](https://help.aliyun.com/document_detail/154751.html) of Phone Number Intelligence.**
       * - By default, only an Alibaba Cloud account can call this operation. A RAM user must be granted the required permissions before calling this operation. For more information, see [Grant permissions to RAM users](https://help.aliyun.com/document_detail/154006.html).
       * - Before calling this operation, log on to the Phone Number Intelligence console. On the [Tag Square](https://dytns.console.aliyun.com/analysis/square) page, find the required tag, click **Apply**, and submit your application. You can use the operation after your application is approved.
       * - The number status query feature supports numbers from China Telecom, China Unicom, and China Mobile, but does not support numbers from China Broadnet. If you call this operation to query the status of a China Broadnet number, the `OperatorLimit` error code is returned, which indicates that the query is prohibited by the carrier.
       * ### QPS limit
       * The queries per second (QPS) limit for each user is 300. API calls that exceed this limit are throttled. To avoid business disruptions, plan your calls accordingly.
       *
       * @param request PhoneNumberStatusForPublicRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PhoneNumberStatusForPublicResponse
       */
      Models::PhoneNumberStatusForPublicResponse phoneNumberStatusForPublicWithOptions(const Models::PhoneNumberStatusForPublicRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the real-time status of a mobile phone number to determine whether it is in service, suspended, or non-existent. This operation supports queries for plaintext numbers or numbers encrypted with MD5 or SHA256.
       *
       * @description - **Before you call this operation, make sure that you fully understand the [pricing](https://help.aliyun.com/document_detail/154751.html) of Phone Number Intelligence.**
       * - By default, only an Alibaba Cloud account can call this operation. A RAM user must be granted the required permissions before calling this operation. For more information, see [Grant permissions to RAM users](https://help.aliyun.com/document_detail/154006.html).
       * - Before calling this operation, log on to the Phone Number Intelligence console. On the [Tag Square](https://dytns.console.aliyun.com/analysis/square) page, find the required tag, click **Apply**, and submit your application. You can use the operation after your application is approved.
       * - The number status query feature supports numbers from China Telecom, China Unicom, and China Mobile, but does not support numbers from China Broadnet. If you call this operation to query the status of a China Broadnet number, the `OperatorLimit` error code is returned, which indicates that the query is prohibited by the carrier.
       * ### QPS limit
       * The queries per second (QPS) limit for each user is 300. API calls that exceed this limit are throttled. To avoid business disruptions, plan your calls accordingly.
       *
       * @param request PhoneNumberStatusForPublicRequest
       * @return PhoneNumberStatusForPublicResponse
       */
      Models::PhoneNumberStatusForPublicResponse phoneNumberStatusForPublic(const Models::PhoneNumberStatusForPublicRequest &request);

      /**
       * @summary Queries the real-time status of a mobile phone number, such as normal, suspended, or not in service. This operation supports queries for phone numbers that are in plaintext or encrypted by using MD5, SHA256, or SM3.
       *
       * @description - **Before calling this operation, ensure you fully understand the [pricing](https://help.aliyun.com/document_detail/154751.html) of Phone Number Intelligence.**
       * - By default, only an Alibaba Cloud account can call this operation. To allow a RAM user to call this operation, you must first grant the required permissions. For more information, see [Grant permissions to RAM users](https://help.aliyun.com/document_detail/154006.html).
       * - Before you call this operation, log on to the Phone Number Intelligence console. On the [Tag Square](https://dytns.console.aliyun.com/analysis/square) page, find the required tag, click **Request Activation**, and then submit your application. You can call this operation only after your application is approved.
       * - This operation supports phone numbers from China Telecom, China Unicom, and China Mobile. Numbers from China Broadnet are not supported. If you call this operation to query a China Broadnet number, the API returns the error code `OperatorLimit` and an error message indicating that the query is restricted by the carrier.
       * ### QPS limit
       * The QPS limit for this operation is 300 queries per second (QPS) per user. The system throttles calls that exceed this limit, which may affect your business. Plan your calls accordingly.
       *
       * @param request PhoneNumberStatusForRealRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PhoneNumberStatusForRealResponse
       */
      Models::PhoneNumberStatusForRealResponse phoneNumberStatusForRealWithOptions(const Models::PhoneNumberStatusForRealRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the real-time status of a mobile phone number, such as normal, suspended, or not in service. This operation supports queries for phone numbers that are in plaintext or encrypted by using MD5, SHA256, or SM3.
       *
       * @description - **Before calling this operation, ensure you fully understand the [pricing](https://help.aliyun.com/document_detail/154751.html) of Phone Number Intelligence.**
       * - By default, only an Alibaba Cloud account can call this operation. To allow a RAM user to call this operation, you must first grant the required permissions. For more information, see [Grant permissions to RAM users](https://help.aliyun.com/document_detail/154006.html).
       * - Before you call this operation, log on to the Phone Number Intelligence console. On the [Tag Square](https://dytns.console.aliyun.com/analysis/square) page, find the required tag, click **Request Activation**, and then submit your application. You can call this operation only after your application is approved.
       * - This operation supports phone numbers from China Telecom, China Unicom, and China Mobile. Numbers from China Broadnet are not supported. If you call this operation to query a China Broadnet number, the API returns the error code `OperatorLimit` and an error message indicating that the query is restricted by the carrier.
       * ### QPS limit
       * The QPS limit for this operation is 300 queries per second (QPS) per user. The system throttles calls that exceed this limit, which may affect your business. Plan your calls accordingly.
       *
       * @param request PhoneNumberStatusForRealRequest
       * @return PhoneNumberStatusForRealResponse
       */
      Models::PhoneNumberStatusForRealResponse phoneNumberStatusForReal(const Models::PhoneNumberStatusForRealRequest &request);

      /**
       * @summary Retrieves the real-time network status of a phone number, such as active, shutdown, or non-existent. This operation supports queries for numbers in plaintext or numbers encrypted by using MD5, SHA256, or SM3.
       *
       * @description - **Before you call this operation, make sure you understand the [Product Pricing](https://help.aliyun.com/document_detail/154751.html) of Phone Number Pedia**.
       * - By default, only an Alibaba Cloud account can call this operation. A RAM user can call this operation only after being granted the required permissions. For more information, see [Grant permissions to a RAM user](https://help.aliyun.com/document_detail/154006.html).
       * - Before calling this operation, log on to the Phone Number Pedia console. On the [Tag Square](https://dytns.console.aliyun.com/analysis/square) page, find the required tag, click **Request Activation**, and then complete the application form. You can use this operation only after your application is approved.
       * - This feature supports phone numbers from China Telecom, China Unicom, and China Mobile, but does not support phone numbers from China Broadnet. If you call this operation to query the status of a China Broadnet number, the `OperatorLimit` error code and the "The number is limited by the operator." message are returned.
       * ### QPS limit
       * This operation is limited to 300 queries per second (QPS) for each user. Calls that exceed this limit are throttled, which may affect your business. Plan your calls accordingly.
       *
       * @param request PhoneNumberStatusForSmsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PhoneNumberStatusForSmsResponse
       */
      Models::PhoneNumberStatusForSmsResponse phoneNumberStatusForSmsWithOptions(const Models::PhoneNumberStatusForSmsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the real-time network status of a phone number, such as active, shutdown, or non-existent. This operation supports queries for numbers in plaintext or numbers encrypted by using MD5, SHA256, or SM3.
       *
       * @description - **Before you call this operation, make sure you understand the [Product Pricing](https://help.aliyun.com/document_detail/154751.html) of Phone Number Pedia**.
       * - By default, only an Alibaba Cloud account can call this operation. A RAM user can call this operation only after being granted the required permissions. For more information, see [Grant permissions to a RAM user](https://help.aliyun.com/document_detail/154006.html).
       * - Before calling this operation, log on to the Phone Number Pedia console. On the [Tag Square](https://dytns.console.aliyun.com/analysis/square) page, find the required tag, click **Request Activation**, and then complete the application form. You can use this operation only after your application is approved.
       * - This feature supports phone numbers from China Telecom, China Unicom, and China Mobile, but does not support phone numbers from China Broadnet. If you call this operation to query the status of a China Broadnet number, the `OperatorLimit` error code and the "The number is limited by the operator." message are returned.
       * ### QPS limit
       * This operation is limited to 300 queries per second (QPS) for each user. Calls that exceed this limit are throttled, which may affect your business. Plan your calls accordingly.
       *
       * @param request PhoneNumberStatusForSmsRequest
       * @return PhoneNumberStatusForSmsResponse
       */
      Models::PhoneNumberStatusForSmsResponse phoneNumberStatusForSms(const Models::PhoneNumberStatusForSmsRequest &request);

      /**
       * @summary Queries the real-time network status of a mobile phone number, such as normal, shutdown, or non-existent. This operation supports queries for numbers in plaintext and numbers encrypted by using MD5, SHA256, or SM3.
       *
       * @description - **Before you use this API, make sure that you understand the [pricing](https://help.aliyun.com/document_detail/154751.html) of Phone Number Encyclopedia**.
       * - By default, only Alibaba Cloud accounts can call this API. To allow a RAM user to do so, you must grant them the required permissions. For more information, see [Grant permissions to RAM users](https://help.aliyun.com/document_detail/154006.html).
       * - Before you use this API, log in to the Phone Number Encyclopedia console. On the [Tag Square](https://dytns.console.aliyun.com/analysis/square) page, find the required tag, click **Apply for Access**, and then complete the application form. You can call this API after your application is approved.
       * - This feature supports phone numbers from China Telecom, China Unicom, and China Mobile, but not from China Broadnet. If you query a China Broadnet number, the `OperatorLimit` error code and an error message are returned: The number is limited by the operator.
       * ### QPS limit
       * The QPS limit for a single user is 300 queries per second. If you exceed this limit, the system throttles your API calls, which may impact your business. To avoid interruptions, call this API at a reasonable rate.
       *
       * @param request PhoneNumberStatusForVoiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PhoneNumberStatusForVoiceResponse
       */
      Models::PhoneNumberStatusForVoiceResponse phoneNumberStatusForVoiceWithOptions(const Models::PhoneNumberStatusForVoiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the real-time network status of a mobile phone number, such as normal, shutdown, or non-existent. This operation supports queries for numbers in plaintext and numbers encrypted by using MD5, SHA256, or SM3.
       *
       * @description - **Before you use this API, make sure that you understand the [pricing](https://help.aliyun.com/document_detail/154751.html) of Phone Number Encyclopedia**.
       * - By default, only Alibaba Cloud accounts can call this API. To allow a RAM user to do so, you must grant them the required permissions. For more information, see [Grant permissions to RAM users](https://help.aliyun.com/document_detail/154006.html).
       * - Before you use this API, log in to the Phone Number Encyclopedia console. On the [Tag Square](https://dytns.console.aliyun.com/analysis/square) page, find the required tag, click **Apply for Access**, and then complete the application form. You can call this API after your application is approved.
       * - This feature supports phone numbers from China Telecom, China Unicom, and China Mobile, but not from China Broadnet. If you query a China Broadnet number, the `OperatorLimit` error code and an error message are returned: The number is limited by the operator.
       * ### QPS limit
       * The QPS limit for a single user is 300 queries per second. If you exceed this limit, the system throttles your API calls, which may impact your business. To avoid interruptions, call this API at a reasonable rate.
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
       * @summary Queries package type information.
       *
       * @param request QueryPackageTypeInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryPackageTypeInfoResponse
       */
      Models::QueryPackageTypeInfoResponse queryPackageTypeInfoWithOptions(const Models::QueryPackageTypeInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries package type information.
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
       * @summary Queries tag information.
       *
       * @param request QueryTagInfoBySelectionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryTagInfoBySelectionResponse
       */
      Models::QueryTagInfoBySelectionResponse queryTagInfoBySelectionWithOptions(const Models::QueryTagInfoBySelectionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries tag information.
       *
       * @param request QueryTagInfoBySelectionRequest
       * @return QueryTagInfoBySelectionResponse
       */
      Models::QueryTagInfoBySelectionResponse queryTagInfoBySelection(const Models::QueryTagInfoBySelectionRequest &request);

      /**
       * @summary Queries the tag list by page.
       *
       * @param request QueryTagListPageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryTagListPageResponse
       */
      Models::QueryTagListPageResponse queryTagListPageWithOptions(const Models::QueryTagListPageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the tag list by page.
       *
       * @param request QueryTagListPageRequest
       * @return QueryTagListPageResponse
       */
      Models::QueryTagListPageResponse queryTagListPage(const Models::QueryTagListPageRequest &request);

      /**
       * @summary Queries a list of offline tasks.
       *
       * @param tmpReq QueryTaskListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryTaskListResponse
       */
      Models::QueryTaskListResponse queryTaskListWithOptions(const Models::QueryTaskListRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of offline tasks.
       *
       * @param request QueryTaskListRequest
       * @return QueryTaskListResponse
       */
      Models::QueryTaskListResponse queryTaskList(const Models::QueryTaskListRequest &request);

      /**
       * @summary Queries usage statistics by tag ID.
       *
       * @param request QueryUsageStatisticsByTagIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryUsageStatisticsByTagIdResponse
       */
      Models::QueryUsageStatisticsByTagIdResponse queryUsageStatisticsByTagIdWithOptions(const Models::QueryUsageStatisticsByTagIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries usage statistics by tag ID.
       *
       * @param request QueryUsageStatisticsByTagIdRequest
       * @return QueryUsageStatisticsByTagIdResponse
       */
      Models::QueryUsageStatisticsByTagIdResponse queryUsageStatisticsByTagId(const Models::QueryUsageStatisticsByTagIdRequest &request);

      /**
       * @summary Saves an alert contact.
       *
       * @description - Before you call this operation, ensure you have activated Phone Number Intelligence.
       *
       * @param request SaveContactsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SaveContactsResponse
       */
      Models::SaveContactsResponse saveContactsWithOptions(const Models::SaveContactsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Saves an alert contact.
       *
       * @description - Before you call this operation, ensure you have activated Phone Number Intelligence.
       *
       * @param request SaveContactsRequest
       * @return SaveContactsResponse
       */
      Models::SaveContactsResponse saveContacts(const Models::SaveContactsRequest &request);

      /**
       * @summary Verification of three elements (name, mobile phone number, and ID card number). Used to verify whether the name, mobile phone number, and ID card number entered by a user belong to the same user.
       *
       * @description - Before you call this API, make sure that you have fully understood the [pricing](https://help.aliyun.com/document_detail/154751.html) of Cell Phone Number Service.
       * - Before you call this API, log on to the Cell Phone Number Service console, go to the [Tag Square](https://dytns.console.aliyun.com/analysis/square) page, find the corresponding tag, click **Apply for Activation**, fill in the application materials, and call the API after the application is approved.
       * - Billing applies when the API returns Code=\\"OK\\" and IsConsistent != 2. Other return results are not billed.
       * - The verification of virtual carrier numbers is not supported. Virtual carrier numbers refer to numbers that start with 170, 171, 162, or 165.
       * ### QPS limit
       * The QPS limit per user for this API is 200 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call the API in a reasonable manner.
       *
       * @param request ThreeElementsVerificationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ThreeElementsVerificationResponse
       */
      Models::ThreeElementsVerificationResponse threeElementsVerificationWithOptions(const Models::ThreeElementsVerificationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Verification of three elements (name, mobile phone number, and ID card number). Used to verify whether the name, mobile phone number, and ID card number entered by a user belong to the same user.
       *
       * @description - Before you call this API, make sure that you have fully understood the [pricing](https://help.aliyun.com/document_detail/154751.html) of Cell Phone Number Service.
       * - Before you call this API, log on to the Cell Phone Number Service console, go to the [Tag Square](https://dytns.console.aliyun.com/analysis/square) page, find the corresponding tag, click **Apply for Activation**, fill in the application materials, and call the API after the application is approved.
       * - Billing applies when the API returns Code=\\"OK\\" and IsConsistent != 2. Other return results are not billed.
       * - The verification of virtual carrier numbers is not supported. Virtual carrier numbers refer to numbers that start with 170, 171, 162, or 165.
       * ### QPS limit
       * The QPS limit per user for this API is 200 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call the API in a reasonable manner.
       *
       * @param request ThreeElementsVerificationRequest
       * @return ThreeElementsVerificationResponse
       */
      Models::ThreeElementsVerificationResponse threeElementsVerification(const Models::ThreeElementsVerificationRequest &request);

      /**
       * @summary Two-element (name and phone number) verification. Used to compare whether the name and phone number entered by the user belong to the same user.
       *
       * @description - Before using this API, ensure that you fully understand the [product pricing](https://help.aliyun.com/document_detail/154751.html) of Cell Phone Number Service.
       * - Before using this API, log on to the Cell Phone Number Service console, go to the [Tag Square](https://dytns.console.aliyun.com/analysis/square) page, find the corresponding tag, click **Apply to Enable**, fill in the application materials, and use it after the approval.
       * - Billing is applied when the API returns Code="OK" and IsConsistent != 2. Other return results are not billed.
       * - MVNO number verification is not supported. MVNO numbers refer to numbers starting with 170, 171, 162, and 165.
       * ### QPS limit
       * The per-user QPS limit of this API is 200 times/second. If the limit is exceeded, API calls will be throttled, which may affect your business. Please call the API reasonably.
       *
       * @param request TwoElementsVerificationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TwoElementsVerificationResponse
       */
      Models::TwoElementsVerificationResponse twoElementsVerificationWithOptions(const Models::TwoElementsVerificationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Two-element (name and phone number) verification. Used to compare whether the name and phone number entered by the user belong to the same user.
       *
       * @description - Before using this API, ensure that you fully understand the [product pricing](https://help.aliyun.com/document_detail/154751.html) of Cell Phone Number Service.
       * - Before using this API, log on to the Cell Phone Number Service console, go to the [Tag Square](https://dytns.console.aliyun.com/analysis/square) page, find the corresponding tag, click **Apply to Enable**, fill in the application materials, and use it after the approval.
       * - Billing is applied when the API returns Code="OK" and IsConsistent != 2. Other return results are not billed.
       * - MVNO number verification is not supported. MVNO numbers refer to numbers starting with 170, 171, 162, and 165.
       * ### QPS limit
       * The per-user QPS limit of this API is 200 times/second. If the limit is exceeded, API calls will be throttled, which may affect your business. Please call the API reasonably.
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
       * @summary Obtains a UAID based on the carrier authorization token.
       * For information about how to obtain the authorization token and its signature, see the GetUAIDApplyTokenSign API documentation.
       * A UAID is 64 characters in length. The first 32 characters describe the device information, and the last 32 characters describe the phone number information.
       *
       * @description Before you call this API, make sure that you have fully understood the billing method and [pricing](https://www.aliyun.com/price/product#/dytns/detail/dytns_penqbag_public_cn) of Cell Phone Number Service.  
       * Obtains a UAID based on the carrier authorization token.  
       * For information about how to obtain the authorization token and its signature, see the GetUAIDApplyTokenSign API documentation.
       *
       * @param request UAIDVerificationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UAIDVerificationResponse
       */
      Models::UAIDVerificationResponse uAIDVerificationWithOptions(const Models::UAIDVerificationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains a UAID based on the carrier authorization token.
       * For information about how to obtain the authorization token and its signature, see the GetUAIDApplyTokenSign API documentation.
       * A UAID is 64 characters in length. The first 32 characters describe the device information, and the last 32 characters describe the phone number information.
       *
       * @description Before you call this API, make sure that you have fully understood the billing method and [pricing](https://www.aliyun.com/price/product#/dytns/detail/dytns_penqbag_public_cn) of Cell Phone Number Service.  
       * Obtains a UAID based on the carrier authorization token.  
       * For information about how to obtain the authorization token and its signature, see the GetUAIDApplyTokenSign API documentation.
       *
       * @param request UAIDVerificationRequest
       * @return UAIDVerificationResponse
       */
      Models::UAIDVerificationResponse uAIDVerification(const Models::UAIDVerificationRequest &request);

      /**
       * @summary Updates an alert contact.
       *
       * @description - Ensure that you have activated the Phone Number Information Service before calling this operation.
       *
       * @param request UpdateContactsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateContactsResponse
       */
      Models::UpdateContactsResponse updateContactsWithOptions(const Models::UpdateContactsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates an alert contact.
       *
       * @description - Ensure that you have activated the Phone Number Information Service before calling this operation.
       *
       * @param request UpdateContactsRequest
       * @return UpdateContactsResponse
       */
      Models::UpdateContactsResponse updateContacts(const Models::UpdateContactsRequest &request);

      /**
       * @summary 虚商三要素
       *
       * @param request VirtualThreeElementsVerificationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return VirtualThreeElementsVerificationResponse
       */
      Models::VirtualThreeElementsVerificationResponse virtualThreeElementsVerificationWithOptions(const Models::VirtualThreeElementsVerificationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 虚商三要素
       *
       * @param request VirtualThreeElementsVerificationRequest
       * @return VirtualThreeElementsVerificationResponse
       */
      Models::VirtualThreeElementsVerificationResponse virtualThreeElementsVerification(const Models::VirtualThreeElementsVerificationRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Dytnsapi20200217
#endif
