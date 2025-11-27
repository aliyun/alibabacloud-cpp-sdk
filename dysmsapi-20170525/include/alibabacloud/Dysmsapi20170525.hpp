// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_DYSMSAPI20170525_HPP_
#define ALIBABACLOUD_DYSMSAPI20170525_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Dysmsapi20170525Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Dysmsapi20170525.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 添加验证码签名信息
       *
       * @param request AddExtCodeSignRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddExtCodeSignResponse
       */
      Models::AddExtCodeSignResponse addExtCodeSignWithOptions(const Models::AddExtCodeSignRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 添加验证码签名信息
       *
       * @param request AddExtCodeSignRequest
       * @return AddExtCodeSignResponse
       */
      Models::AddExtCodeSignResponse addExtCodeSign(const Models::AddExtCodeSignRequest &request);

      /**
       * @summary Creates a short URL.
       *
       * @description *   Before you call this operation, you must register the primary domain name of the source URL in the Short Message Service (SMS) console. After the domain name is registered, you can call this operation to create a short URL. For more information, see [Domain name registration](https://help.aliyun.com/document_detail/302325.html#title-mau-zdh-hd0).
       * *   You can create up to 3,000 short URLs within a natural day.
       * *   After a short URL is generated, a security review is required. Generally, the review takes 10 minutes to 2 hours to complete. Before the security review is passed, the short URL cannot be directly accessed.
       *
       * @param request AddShortUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddShortUrlResponse
       */
      Models::AddShortUrlResponse addShortUrlWithOptions(const Models::AddShortUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a short URL.
       *
       * @description *   Before you call this operation, you must register the primary domain name of the source URL in the Short Message Service (SMS) console. After the domain name is registered, you can call this operation to create a short URL. For more information, see [Domain name registration](https://help.aliyun.com/document_detail/302325.html#title-mau-zdh-hd0).
       * *   You can create up to 3,000 short URLs within a natural day.
       * *   After a short URL is generated, a security review is required. Generally, the review takes 10 minutes to 2 hours to complete. Before the security review is passed, the short URL cannot be directly accessed.
       *
       * @param request AddShortUrlRequest
       * @return AddShortUrlResponse
       */
      Models::AddShortUrlResponse addShortUrl(const Models::AddShortUrlRequest &request);

      /**
       * @summary Creates a signature.
       *
       * @description You can call the AddSmsSign operation or use the [Short Message Service (SMS) console](https://dysms.console.aliyun.com/dysms.htm#/overview) to create an SMS signature. The signature must comply with the [SMS signature specifications](https://help.aliyun.com/document_detail/108076.html). You can call the QuerySmsSign operation or use the SMS console to query the review status of the signature.
       * For more information, see [Usage notes](https://help.aliyun.com/document_detail/55324.html).
       * ### QPS limit
       * You can call this operation only once per second. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       * > 
       * *   You cannot cancel the review of a signature.
       * *   Individual users can create only one verification code signature, and can create only one general-purpose signature within a natural day. If you need to apply for multiple signatures, we recommend that you upgrade your account to an enterprise user.
       * *   If you need to use the same signature for messages sent to recipients both in and outside the Chinese mainland, the signature must be a general-purpose signature.
       * *   If you apply for a signature or message template, you must specify the signature scenario or template type. You must also provide the information of your services, such as a website URL, a domain name with an ICP filing, an application download URL, or the name of your WeChat official account or mini program. For sign-in scenarios, you must also provide an account and password for tests. A detailed description can improve the review efficiency of signatures and templates.
       * *   An SMS signature must undergo a thorough review process before it can be approved for use.
       *
       * @param request AddSmsSignRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddSmsSignResponse
       */
      Models::AddSmsSignResponse addSmsSignWithOptions(const Models::AddSmsSignRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a signature.
       *
       * @description You can call the AddSmsSign operation or use the [Short Message Service (SMS) console](https://dysms.console.aliyun.com/dysms.htm#/overview) to create an SMS signature. The signature must comply with the [SMS signature specifications](https://help.aliyun.com/document_detail/108076.html). You can call the QuerySmsSign operation or use the SMS console to query the review status of the signature.
       * For more information, see [Usage notes](https://help.aliyun.com/document_detail/55324.html).
       * ### QPS limit
       * You can call this operation only once per second. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       * > 
       * *   You cannot cancel the review of a signature.
       * *   Individual users can create only one verification code signature, and can create only one general-purpose signature within a natural day. If you need to apply for multiple signatures, we recommend that you upgrade your account to an enterprise user.
       * *   If you need to use the same signature for messages sent to recipients both in and outside the Chinese mainland, the signature must be a general-purpose signature.
       * *   If you apply for a signature or message template, you must specify the signature scenario or template type. You must also provide the information of your services, such as a website URL, a domain name with an ICP filing, an application download URL, or the name of your WeChat official account or mini program. For sign-in scenarios, you must also provide an account and password for tests. A detailed description can improve the review efficiency of signatures and templates.
       * *   An SMS signature must undergo a thorough review process before it can be approved for use.
       *
       * @param request AddSmsSignRequest
       * @return AddSmsSignResponse
       */
      Models::AddSmsSignResponse addSmsSign(const Models::AddSmsSignRequest &request);

      /**
       * @deprecated OpenAPI AddSmsTemplate is deprecated, please use Dysmsapi::2017-05-25::CreateSmsTemplate instead.
       *
       * @summary Creates a message template.
       *
       * @description You can call the operation or use the [Alibaba Cloud SMS console](https://dysms.console.aliyun.com/dysms.htm#/overview) to apply for a message template. The template must comply with the [message template specifications](https://help.aliyun.com/document_detail/108253.html). You can call the [QuerySmsTemplate](https://help.aliyun.com/document_detail/419289.html) operation or use the Alibaba Cloud SMS console to check whether the message template is approved.
       * > 
       * *   Message templates pending approval can be withdrawn. You can withdraw a message template pending approval on the Message Templates tab in the [Alibaba Cloud SMS console](https://dysms.console.aliyun.com/dysms.htm#/overview).
       * *   Message templates that have been approved can be deleted, and cannot be modified. You can delete a message template pending approval on the Message Templates tab in the [Alibaba Cloud SMS console](https://dysms.console.aliyun.com/dysms.htm#/overview).
       * *   If you call the AddSmsTemplate operation, you can apply for a maximum of 100 message templates in a calendar day. After you apply for a message template, we recommend that you wait for at least 30 seconds before you apply for another one. If you use the Alibaba Cloud SMS console, you can apply for an unlimited number of message templates.
       * *   Messages sent to the Chinese mainland and messages sent to countries or regions outside the Chinese mainland use separate message templates. Create message templates based on your needs.
       * *   If you apply for a signature or message template, you must specify the signature scenario or template type. You must also provide the information of your services, such as a website URL, a domain name with an ICP filing, an application download URL, or the name of your WeChat official account or mini program. For sign-in scenarios, you must also provide an account and password for tests. A detailed description can improve the review efficiency of signatures and templates.
       * *   A signature must undergo a thorough review process before it can be approved for use. For more information, see [Usage notes](https://help.aliyun.com/document_detail/55324.html).
       * ### QPS limits
       * You can call this operation up to 1,000 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request AddSmsTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddSmsTemplateResponse
       */
      Models::AddSmsTemplateResponse addSmsTemplateWithOptions(const Models::AddSmsTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI AddSmsTemplate is deprecated, please use Dysmsapi::2017-05-25::CreateSmsTemplate instead.
       *
       * @summary Creates a message template.
       *
       * @description You can call the operation or use the [Alibaba Cloud SMS console](https://dysms.console.aliyun.com/dysms.htm#/overview) to apply for a message template. The template must comply with the [message template specifications](https://help.aliyun.com/document_detail/108253.html). You can call the [QuerySmsTemplate](https://help.aliyun.com/document_detail/419289.html) operation or use the Alibaba Cloud SMS console to check whether the message template is approved.
       * > 
       * *   Message templates pending approval can be withdrawn. You can withdraw a message template pending approval on the Message Templates tab in the [Alibaba Cloud SMS console](https://dysms.console.aliyun.com/dysms.htm#/overview).
       * *   Message templates that have been approved can be deleted, and cannot be modified. You can delete a message template pending approval on the Message Templates tab in the [Alibaba Cloud SMS console](https://dysms.console.aliyun.com/dysms.htm#/overview).
       * *   If you call the AddSmsTemplate operation, you can apply for a maximum of 100 message templates in a calendar day. After you apply for a message template, we recommend that you wait for at least 30 seconds before you apply for another one. If you use the Alibaba Cloud SMS console, you can apply for an unlimited number of message templates.
       * *   Messages sent to the Chinese mainland and messages sent to countries or regions outside the Chinese mainland use separate message templates. Create message templates based on your needs.
       * *   If you apply for a signature or message template, you must specify the signature scenario or template type. You must also provide the information of your services, such as a website URL, a domain name with an ICP filing, an application download URL, or the name of your WeChat official account or mini program. For sign-in scenarios, you must also provide an account and password for tests. A detailed description can improve the review efficiency of signatures and templates.
       * *   A signature must undergo a thorough review process before it can be approved for use. For more information, see [Usage notes](https://help.aliyun.com/document_detail/55324.html).
       * ### QPS limits
       * You can call this operation up to 1,000 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request AddSmsTemplateRequest
       * @return AddSmsTemplateResponse
       */
      Models::AddSmsTemplateResponse addSmsTemplate(const Models::AddSmsTemplateRequest &request);

      /**
       * @summary 更换签名的资质和授权书
       *
       * @param request ChangeSignatureQualificationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeSignatureQualificationResponse
       */
      Models::ChangeSignatureQualificationResponse changeSignatureQualificationWithOptions(const Models::ChangeSignatureQualificationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更换签名的资质和授权书
       *
       * @param request ChangeSignatureQualificationRequest
       * @return ChangeSignatureQualificationResponse
       */
      Models::ChangeSignatureQualificationResponse changeSignatureQualification(const Models::ChangeSignatureQualificationRequest &request);

      /**
       * @summary Checks whether a mobile phone number can receive card messages.
       *
       * @description ### QPS limit
       * You can call this operation up to 2,000 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request CheckMobilesCardSupportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckMobilesCardSupportResponse
       */
      Models::CheckMobilesCardSupportResponse checkMobilesCardSupportWithOptions(const Models::CheckMobilesCardSupportRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks whether a mobile phone number can receive card messages.
       *
       * @description ### QPS limit
       * You can call this operation up to 2,000 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request CheckMobilesCardSupportRequest
       * @return CheckMobilesCardSupportResponse
       */
      Models::CheckMobilesCardSupportResponse checkMobilesCardSupport(const Models::CheckMobilesCardSupportRequest &request);

      /**
       * @summary Sends conversion rate information to Alibaba Cloud SMS.
       *
       * @param request ConversionDataIntlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConversionDataIntlResponse
       */
      Models::ConversionDataIntlResponse conversionDataIntlWithOptions(const Models::ConversionDataIntlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sends conversion rate information to Alibaba Cloud SMS.
       *
       * @param request ConversionDataIntlRequest
       * @return ConversionDataIntlResponse
       */
      Models::ConversionDataIntlResponse conversionDataIntl(const Models::ConversionDataIntlRequest &request);

      /**
       * @summary Creates a card message template.
       *
       * @description *   The CreateCardSmsTemplate operation saves the card message template information, submits it to the mobile phone manufacturer for approval, and returns the message template ID.
       * *   If the type of the message template is not supported or events that are not supported by the mobile phone manufacturer are specified, the template is not submitted. For more information, see [Supported message templates](https://help.aliyun.com/document_detail/434611.html).
       * *   For information about sample card message templates, see [Sample card message templates](https://help.aliyun.com/document_detail/435361.html).
       * ### QPS limit
       * You can call this operation up to 300 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param tmpReq CreateCardSmsTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCardSmsTemplateResponse
       */
      Models::CreateCardSmsTemplateResponse createCardSmsTemplateWithOptions(const Models::CreateCardSmsTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a card message template.
       *
       * @description *   The CreateCardSmsTemplate operation saves the card message template information, submits it to the mobile phone manufacturer for approval, and returns the message template ID.
       * *   If the type of the message template is not supported or events that are not supported by the mobile phone manufacturer are specified, the template is not submitted. For more information, see [Supported message templates](https://help.aliyun.com/document_detail/434611.html).
       * *   For information about sample card message templates, see [Sample card message templates](https://help.aliyun.com/document_detail/435361.html).
       * ### QPS limit
       * You can call this operation up to 300 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request CreateCardSmsTemplateRequest
       * @return CreateCardSmsTemplateResponse
       */
      Models::CreateCardSmsTemplateResponse createCardSmsTemplate(const Models::CreateCardSmsTemplateRequest &request);

      /**
       * @summary 创建短链
       *
       * @param request CreateSmartShortUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSmartShortUrlResponse
       */
      Models::CreateSmartShortUrlResponse createSmartShortUrlWithOptions(const Models::CreateSmartShortUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建短链
       *
       * @param request CreateSmartShortUrlRequest
       * @return CreateSmartShortUrlResponse
       */
      Models::CreateSmartShortUrlResponse createSmartShortUrl(const Models::CreateSmartShortUrlRequest &request);

      /**
       * @summary 创建委托授权书
       *
       * @param tmpReq CreateSmsAuthorizationLetterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSmsAuthorizationLetterResponse
       */
      Models::CreateSmsAuthorizationLetterResponse createSmsAuthorizationLetterWithOptions(const Models::CreateSmsAuthorizationLetterRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建委托授权书
       *
       * @param request CreateSmsAuthorizationLetterRequest
       * @return CreateSmsAuthorizationLetterResponse
       */
      Models::CreateSmsAuthorizationLetterResponse createSmsAuthorizationLetter(const Models::CreateSmsAuthorizationLetterRequest &request);

      /**
       * @summary Create SMS Signature
       *
       * @description - For details about the announcement of changes to the new and original interfaces, see [Announcement on Updates to SMS Service Signature & Template Interfaces](https://help.aliyun.com/zh/sms/product-overview/announcement-on-sms-service-update-signature-template-interface).
       * - Individual authenticated users can apply for one formal signature per natural day under the same Alibaba Cloud account, while enterprise authenticated users have no current restrictions. For details on the differences in rights between individual and enterprise users, please refer to [User Guide](https://help.aliyun.com/zh/sms/user-guide/usage-notes?spm).
       * - Signature information applied through the interface will be synchronized in the SMS service console. For operations related to signatures in the console, see [SMS Signatures](https://help.aliyun.com/zh/sms/user-guide/create-signatures?spm).
       * - After submitting the signature application, you can query the signature review status and details via the [GetSmsSign](https://help.aliyun.com/zh/sms/developer-reference/api-dysmsapi-2017-05-25-getsmssign?spm) interface. You can also [Configure Receipt Messages](https://help.aliyun.com/zh/sms/developer-reference/configure-delivery-receipts-1?spm) and obtain signature review status messages through SignSmsReport.
       *
       * @param tmpReq CreateSmsSignRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSmsSignResponse
       */
      Models::CreateSmsSignResponse createSmsSignWithOptions(const Models::CreateSmsSignRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create SMS Signature
       *
       * @description - For details about the announcement of changes to the new and original interfaces, see [Announcement on Updates to SMS Service Signature & Template Interfaces](https://help.aliyun.com/zh/sms/product-overview/announcement-on-sms-service-update-signature-template-interface).
       * - Individual authenticated users can apply for one formal signature per natural day under the same Alibaba Cloud account, while enterprise authenticated users have no current restrictions. For details on the differences in rights between individual and enterprise users, please refer to [User Guide](https://help.aliyun.com/zh/sms/user-guide/usage-notes?spm).
       * - Signature information applied through the interface will be synchronized in the SMS service console. For operations related to signatures in the console, see [SMS Signatures](https://help.aliyun.com/zh/sms/user-guide/create-signatures?spm).
       * - After submitting the signature application, you can query the signature review status and details via the [GetSmsSign](https://help.aliyun.com/zh/sms/developer-reference/api-dysmsapi-2017-05-25-getsmssign?spm) interface. You can also [Configure Receipt Messages](https://help.aliyun.com/zh/sms/developer-reference/configure-delivery-receipts-1?spm) and obtain signature review status messages through SignSmsReport.
       *
       * @param request CreateSmsSignRequest
       * @return CreateSmsSignResponse
       */
      Models::CreateSmsSignResponse createSmsSign(const Models::CreateSmsSignRequest &request);

      /**
       * @summary Create SMS Template
       *
       * @description - For details about the changes of this new interface compared to the original one, please refer to [Announcement on the Update of SMS Service Signature & Template Interfaces](https://help.aliyun.com/zh/sms/product-overview/announcement-on-sms-service-update-signature-template-interface).
       * - It is recommended to apply for SMS templates via the API with at least a 30-second interval between each request.
       * - The template information applied through the API will be synchronized in the SMS service console. For operations related to templates in the console, please refer to SMS Templates.
       * - After submitting the template application, you can query the audit status and details using the GetSmsTemplate interface. You can also configure delivery receipts to obtain the audit status messages via TemplateSmsReport.
       * - Domestic SMS templates are not interchangeable with international/Hong Kong, Macao, and Taiwan SMS templates. Please apply for templates based on your business scenario.
       * - Only enterprise-verified users can apply for promotional messages and international/Hong Kong, Macao, and Taiwan messages. For differences in rights between personal and enterprise users, please refer to Usage Instructions.
       *
       * @param tmpReq CreateSmsTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSmsTemplateResponse
       */
      Models::CreateSmsTemplateResponse createSmsTemplateWithOptions(const Models::CreateSmsTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create SMS Template
       *
       * @description - For details about the changes of this new interface compared to the original one, please refer to [Announcement on the Update of SMS Service Signature & Template Interfaces](https://help.aliyun.com/zh/sms/product-overview/announcement-on-sms-service-update-signature-template-interface).
       * - It is recommended to apply for SMS templates via the API with at least a 30-second interval between each request.
       * - The template information applied through the API will be synchronized in the SMS service console. For operations related to templates in the console, please refer to SMS Templates.
       * - After submitting the template application, you can query the audit status and details using the GetSmsTemplate interface. You can also configure delivery receipts to obtain the audit status messages via TemplateSmsReport.
       * - Domestic SMS templates are not interchangeable with international/Hong Kong, Macao, and Taiwan SMS templates. Please apply for templates based on your business scenario.
       * - Only enterprise-verified users can apply for promotional messages and international/Hong Kong, Macao, and Taiwan messages. For differences in rights between personal and enterprise users, please refer to Usage Instructions.
       *
       * @param request CreateSmsTemplateRequest
       * @return CreateSmsTemplateResponse
       */
      Models::CreateSmsTemplateResponse createSmsTemplate(const Models::CreateSmsTemplateRequest &request);

      /**
       * @summary 删除验证码签名
       *
       * @param request DeleteExtCodeSignRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteExtCodeSignResponse
       */
      Models::DeleteExtCodeSignResponse deleteExtCodeSignWithOptions(const Models::DeleteExtCodeSignRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除验证码签名
       *
       * @param request DeleteExtCodeSignRequest
       * @return DeleteExtCodeSignResponse
       */
      Models::DeleteExtCodeSignResponse deleteExtCodeSign(const Models::DeleteExtCodeSignRequest &request);

      /**
       * @summary Deletes a short URL. After you delete a short URL, it cannot be changed to its original state.
       *
       * @description ### QPS limits
       * You can call this operation up to 100 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DeleteShortUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteShortUrlResponse
       */
      Models::DeleteShortUrlResponse deleteShortUrlWithOptions(const Models::DeleteShortUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a short URL. After you delete a short URL, it cannot be changed to its original state.
       *
       * @description ### QPS limits
       * You can call this operation up to 100 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DeleteShortUrlRequest
       * @return DeleteShortUrlResponse
       */
      Models::DeleteShortUrlResponse deleteShortUrl(const Models::DeleteShortUrlRequest &request);

      /**
       * @summary 删除资质对客openAPI
       *
       * @param request DeleteSmsQualificationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSmsQualificationResponse
       */
      Models::DeleteSmsQualificationResponse deleteSmsQualificationWithOptions(const Models::DeleteSmsQualificationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除资质对客openAPI
       *
       * @param request DeleteSmsQualificationRequest
       * @return DeleteSmsQualificationResponse
       */
      Models::DeleteSmsQualificationResponse deleteSmsQualification(const Models::DeleteSmsQualificationRequest &request);

      /**
       * @summary Deletes a signature.
       *
       * @description *   You cannot delete a signature that has not been approved.
       * *   After you delete a signature, you cannot recover it. Proceed with caution.
       * ### QPS limits
       * You can call this operation up to 1,000 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DeleteSmsSignRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSmsSignResponse
       */
      Models::DeleteSmsSignResponse deleteSmsSignWithOptions(const Models::DeleteSmsSignRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a signature.
       *
       * @description *   You cannot delete a signature that has not been approved.
       * *   After you delete a signature, you cannot recover it. Proceed with caution.
       * ### QPS limits
       * You can call this operation up to 1,000 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DeleteSmsSignRequest
       * @return DeleteSmsSignResponse
       */
      Models::DeleteSmsSignResponse deleteSmsSign(const Models::DeleteSmsSignRequest &request);

      /**
       * @summary Deletes a message template.
       *
       * @description *   Message templates pending approval can be withdrawn. You can delete a message template pending approval on the Message Templates tab in the [Alibaba Cloud SMS console](https://dysms.console.aliyun.com/dysms.htm#/overview).
       * *   Message templates that have been approved can be deleted, and cannot be modified. You can delete a message template pending approval on the Message Templates tab in the [Alibaba Cloud SMS console](https://dysms.console.aliyun.com/dysms.htm#/overview).
       * *   You cannot recover deleted message templates. Proceed with caution.
       * ### QPS limits
       * You can call this operation up to 1,000 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DeleteSmsTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSmsTemplateResponse
       */
      Models::DeleteSmsTemplateResponse deleteSmsTemplateWithOptions(const Models::DeleteSmsTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a message template.
       *
       * @description *   Message templates pending approval can be withdrawn. You can delete a message template pending approval on the Message Templates tab in the [Alibaba Cloud SMS console](https://dysms.console.aliyun.com/dysms.htm#/overview).
       * *   Message templates that have been approved can be deleted, and cannot be modified. You can delete a message template pending approval on the Message Templates tab in the [Alibaba Cloud SMS console](https://dysms.console.aliyun.com/dysms.htm#/overview).
       * *   You cannot recover deleted message templates. Proceed with caution.
       * ### QPS limits
       * You can call this operation up to 1,000 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DeleteSmsTemplateRequest
       * @return DeleteSmsTemplateResponse
       */
      Models::DeleteSmsTemplateResponse deleteSmsTemplate(const Models::DeleteSmsTemplateRequest &request);

      /**
       * @summary Query card sending details
       *
       * @param request GetCardSmsDetailsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCardSmsDetailsResponse
       */
      Models::GetCardSmsDetailsResponse getCardSmsDetailsWithOptions(const Models::GetCardSmsDetailsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query card sending details
       *
       * @param request GetCardSmsDetailsRequest
       * @return GetCardSmsDetailsResponse
       */
      Models::GetCardSmsDetailsResponse getCardSmsDetails(const Models::GetCardSmsDetailsRequest &request);

      /**
       * @summary Queries the short URLs of a card messages template.
       *
       * @description ### QPS limit
       * You can call this operation up to 1,000 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request GetCardSmsLinkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCardSmsLinkResponse
       */
      Models::GetCardSmsLinkResponse getCardSmsLinkWithOptions(const Models::GetCardSmsLinkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the short URLs of a card messages template.
       *
       * @description ### QPS limit
       * You can call this operation up to 1,000 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request GetCardSmsLinkRequest
       * @return GetCardSmsLinkResponse
       */
      Models::GetCardSmsLinkResponse getCardSmsLink(const Models::GetCardSmsLinkRequest &request);

      /**
       * @summary Converts a resource uploaded to the specified Object Storage Service (OSS) bucket for unified management. Then, a resource ID is returned. You can manage the resource based on the ID.
       *
       * @description ### QPS limit
       * You can call this operation up to 300 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request GetMediaResourceIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMediaResourceIdResponse
       */
      Models::GetMediaResourceIdResponse getMediaResourceIdWithOptions(const Models::GetMediaResourceIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Converts a resource uploaded to the specified Object Storage Service (OSS) bucket for unified management. Then, a resource ID is returned. You can manage the resource based on the ID.
       *
       * @description ### QPS limit
       * You can call this operation up to 300 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request GetMediaResourceIdRequest
       * @return GetMediaResourceIdResponse
       */
      Models::GetMediaResourceIdResponse getMediaResourceId(const Models::GetMediaResourceIdRequest &request);

      /**
       * @summary Queries the OSS configuration information about card messages.
       *
       * @description Resources such as images and videos used for card message templates can be uploaded to Object Storage Service (OSS) buckets for storage. For more information, see [Upload files to OSS](https://help.aliyun.com/document_detail/437303.html).
       * ### QPS limit
       * You can call this operation up to 300 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request GetOSSInfoForCardTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOSSInfoForCardTemplateResponse
       */
      Models::GetOSSInfoForCardTemplateResponse getOSSInfoForCardTemplateWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the OSS configuration information about card messages.
       *
       * @description Resources such as images and videos used for card message templates can be uploaded to Object Storage Service (OSS) buckets for storage. For more information, see [Upload files to OSS](https://help.aliyun.com/document_detail/437303.html).
       * ### QPS limit
       * You can call this operation up to 300 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @return GetOSSInfoForCardTemplateResponse
       */
      Models::GetOSSInfoForCardTemplateResponse getOSSInfoForCardTemplate();

      /**
       * @summary SMS File Upload, Get Authorization Info
       *
       * @description - When creating signatures or templates, you can upload materials such as login pages with links, backend page screenshots, software copyrights, supplementary agreements, etc. This helps the review personnel understand your business details. If there are multiple materials, they can be combined into one file, supporting png, jpg, jpeg, doc, docx, pdf formats.
       * - For additional materials needed when creating signatures or templates, you can upload them to the OSS file system for storage. For file upload operations, refer to [OSS File Upload](https://help.aliyun.com/zh/sms/upload-files-through-oss).
       *
       * @param request GetOSSInfoForUploadFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOSSInfoForUploadFileResponse
       */
      Models::GetOSSInfoForUploadFileResponse getOSSInfoForUploadFileWithOptions(const Models::GetOSSInfoForUploadFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary SMS File Upload, Get Authorization Info
       *
       * @description - When creating signatures or templates, you can upload materials such as login pages with links, backend page screenshots, software copyrights, supplementary agreements, etc. This helps the review personnel understand your business details. If there are multiple materials, they can be combined into one file, supporting png, jpg, jpeg, doc, docx, pdf formats.
       * - For additional materials needed when creating signatures or templates, you can upload them to the OSS file system for storage. For file upload operations, refer to [OSS File Upload](https://help.aliyun.com/zh/sms/upload-files-through-oss).
       *
       * @param request GetOSSInfoForUploadFileRequest
       * @return GetOSSInfoForUploadFileResponse
       */
      Models::GetOSSInfoForUploadFileResponse getOSSInfoForUploadFile(const Models::GetOSSInfoForUploadFileRequest &request);

      /**
       * @summary 上传文件获取oss配置
       *
       * @param request GetQualificationOssInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetQualificationOssInfoResponse
       */
      Models::GetQualificationOssInfoResponse getQualificationOssInfoWithOptions(const Models::GetQualificationOssInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 上传文件获取oss配置
       *
       * @param request GetQualificationOssInfoRequest
       * @return GetQualificationOssInfoResponse
       */
      Models::GetQualificationOssInfoResponse getQualificationOssInfo(const Models::GetQualificationOssInfoRequest &request);

      /**
       * @summary 获取OCR的OSS信息
       *
       * @param request GetSmsOcrOssInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSmsOcrOssInfoResponse
       */
      Models::GetSmsOcrOssInfoResponse getSmsOcrOssInfoWithOptions(const Models::GetSmsOcrOssInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取OCR的OSS信息
       *
       * @param request GetSmsOcrOssInfoRequest
       * @return GetSmsOcrOssInfoResponse
       */
      Models::GetSmsOcrOssInfoResponse getSmsOcrOssInfo(const Models::GetSmsOcrOssInfoRequest &request);

      /**
       * @summary Query SMS Signature Details
       *
       * @description - For details about the changes of this new interface and the original one, please refer to [Announcement on the Update of SMS Signature & Template Interfaces](https://help.aliyun.com/zh/sms/product-overview/announcement-on-sms-service-update-signature-template-interface).
       * - Review Time: Generally, after submitting the signature, Alibaba Cloud expects to complete the review within 2 hours (Review Business Hours: Monday to Sunday 9:00~21:00, with legal holidays postponed). It is recommended to submit your application before 18:00.
       * - If the signature fails the review, the reason for the failure will be returned. Please refer to [Handling Suggestions for Failed SMS Reviews](https://help.aliyun.com/zh/sms/user-guide/causes-of-application-failures-and-suggestions?spm), invoke the [UpdateSmsSign](https://help.aliyun.com/zh/sms/developer-reference/api-dysmsapi-2017-05-25-updatesmssign?spm) API, or modify the unapproved SMS signature on the [Signature Management](https://dysms.console.aliyun.com/domestic/text/sign) page.
       *
       * @param request GetSmsSignRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSmsSignResponse
       */
      Models::GetSmsSignResponse getSmsSignWithOptions(const Models::GetSmsSignRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query SMS Signature Details
       *
       * @description - For details about the changes of this new interface and the original one, please refer to [Announcement on the Update of SMS Signature & Template Interfaces](https://help.aliyun.com/zh/sms/product-overview/announcement-on-sms-service-update-signature-template-interface).
       * - Review Time: Generally, after submitting the signature, Alibaba Cloud expects to complete the review within 2 hours (Review Business Hours: Monday to Sunday 9:00~21:00, with legal holidays postponed). It is recommended to submit your application before 18:00.
       * - If the signature fails the review, the reason for the failure will be returned. Please refer to [Handling Suggestions for Failed SMS Reviews](https://help.aliyun.com/zh/sms/user-guide/causes-of-application-failures-and-suggestions?spm), invoke the [UpdateSmsSign](https://help.aliyun.com/zh/sms/developer-reference/api-dysmsapi-2017-05-25-updatesmssign?spm) API, or modify the unapproved SMS signature on the [Signature Management](https://dysms.console.aliyun.com/domestic/text/sign) page.
       *
       * @param request GetSmsSignRequest
       * @return GetSmsSignResponse
       */
      Models::GetSmsSignResponse getSmsSign(const Models::GetSmsSignRequest &request);

      /**
       * @summary Query Text SMS Template Details
       *
       * @description - For details about the announcement of changes to the new and original interfaces, see [Announcement on Updates to SMS Service Signature & Template Interfaces](https://help.aliyun.com/zh/sms/product-overview/announcement-on-sms-service-update-signature-template-interface).
       * - Review Time: Under normal circumstances, Alibaba Cloud expects to complete the review within 2 hours after template submission (review working hours: Monday to Sunday 9:00~21:00, with statutory holidays postponed). It is recommended to submit your application before 18:00.
       * - If the template fails the review, the reason for the failure will be returned. Please refer to [Handling Suggestions for Failed SMS Reviews](https://help.aliyun.com/zh/sms/user-guide/causes-of-application-failures-and-suggestions?spm=a2c4g.11186623.0.0.41fd339f3bPSCQ), invoke the [ModifySmsTemplate](https://help.aliyun.com/zh/sms/developer-reference/api-dysmsapi-2017-05-25-modifysmstemplate?spm=a2c4g.11186623.0.0.5b1f6e8bQloFit) API or modify the SMS template on the [Template Management](https://dysms.console.aliyun.com/domestic/text/template) page.
       * - The current QuerySmsTemplate interface queries the audit details of a single template by template code. The [QuerySmsTemplateList](https://help.aliyun.com/zh/sms/developer-reference/api-dysmsapi-2017-05-25-querysmstemplatelist?spm=a2c4g.11186623.0.0.24086e8bO8cFn4) interface can query the template details of all templates under your current account.
       *
       * @param request GetSmsTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSmsTemplateResponse
       */
      Models::GetSmsTemplateResponse getSmsTemplateWithOptions(const Models::GetSmsTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Query Text SMS Template Details
       *
       * @description - For details about the announcement of changes to the new and original interfaces, see [Announcement on Updates to SMS Service Signature & Template Interfaces](https://help.aliyun.com/zh/sms/product-overview/announcement-on-sms-service-update-signature-template-interface).
       * - Review Time: Under normal circumstances, Alibaba Cloud expects to complete the review within 2 hours after template submission (review working hours: Monday to Sunday 9:00~21:00, with statutory holidays postponed). It is recommended to submit your application before 18:00.
       * - If the template fails the review, the reason for the failure will be returned. Please refer to [Handling Suggestions for Failed SMS Reviews](https://help.aliyun.com/zh/sms/user-guide/causes-of-application-failures-and-suggestions?spm=a2c4g.11186623.0.0.41fd339f3bPSCQ), invoke the [ModifySmsTemplate](https://help.aliyun.com/zh/sms/developer-reference/api-dysmsapi-2017-05-25-modifysmstemplate?spm=a2c4g.11186623.0.0.5b1f6e8bQloFit) API or modify the SMS template on the [Template Management](https://dysms.console.aliyun.com/domestic/text/template) page.
       * - The current QuerySmsTemplate interface queries the audit details of a single template by template code. The [QuerySmsTemplateList](https://help.aliyun.com/zh/sms/developer-reference/api-dysmsapi-2017-05-25-querysmstemplatelist?spm=a2c4g.11186623.0.0.24086e8bO8cFn4) interface can query the template details of all templates under your current account.
       *
       * @param request GetSmsTemplateRequest
       * @return GetSmsTemplateResponse
       */
      Models::GetSmsTemplateResponse getSmsTemplate(const Models::GetSmsTemplateRequest &request);

      /**
       * @summary Queries the tags of a message template.
       *
       * @description ### QPS limit
       * You can call this operation up to 50 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request ListTagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the tags of a message template.
       *
       * @description ### QPS limit
       * You can call this operation up to 50 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request ListTagResourcesRequest
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResources(const Models::ListTagResourcesRequest &request);

      /**
       * @summary Modifies a rejected signature and submit it for approval. Signatures that are pending approval or have been approved cannot be modified.
       *
       * @description You can call the operation or use the [Alibaba Cloud SMS console](https://dysms.console.aliyun.com/dysms.htm#/overview) to modify an existing signature and submit the signature for approval. The signature must comply with the [signature specifications](https://help.aliyun.com/document_detail/108076.html).
       * For more information, see [Usage notes](https://help.aliyun.com/document_detail/55324.html).
       * ### QPS limits
       * You can call this operation up to 1,000 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       * > 
       * *   Signatures pending approval cannot be modified.
       * *   You cannot modify a signature after it is approved. If you no longer need the signature, you can delete it.
       * *   If you are an individual user, you cannot apply for a new signature on the same day that your signature is rejected or deleted. We recommend that you modify the rejected signature and submit it again.
       *
       * @param request ModifySmsSignRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySmsSignResponse
       */
      Models::ModifySmsSignResponse modifySmsSignWithOptions(const Models::ModifySmsSignRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a rejected signature and submit it for approval. Signatures that are pending approval or have been approved cannot be modified.
       *
       * @description You can call the operation or use the [Alibaba Cloud SMS console](https://dysms.console.aliyun.com/dysms.htm#/overview) to modify an existing signature and submit the signature for approval. The signature must comply with the [signature specifications](https://help.aliyun.com/document_detail/108076.html).
       * For more information, see [Usage notes](https://help.aliyun.com/document_detail/55324.html).
       * ### QPS limits
       * You can call this operation up to 1,000 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       * > 
       * *   Signatures pending approval cannot be modified.
       * *   You cannot modify a signature after it is approved. If you no longer need the signature, you can delete it.
       * *   If you are an individual user, you cannot apply for a new signature on the same day that your signature is rejected or deleted. We recommend that you modify the rejected signature and submit it again.
       *
       * @param request ModifySmsSignRequest
       * @return ModifySmsSignResponse
       */
      Models::ModifySmsSignResponse modifySmsSign(const Models::ModifySmsSignRequest &request);

      /**
       * @deprecated OpenAPI ModifySmsTemplate is deprecated, please use Dysmsapi::2017-05-25::UpdateSmsTemplate instead.
       *
       * @summary Modifies the information of an unapproved message template and submits it for review again.
       *
       * @description After you apply for a message template, if the template fails to pass the review, you can call this operation to modify the template and submit the template again. You can call this operation to modify only a template for a specific message type.
       * The template content must comply with the [SMS template specifications](https://help.aliyun.com/document_detail/108253.html).
       * For more information, see [Usage notes](https://help.aliyun.com/document_detail/55324.html).
       * ### QPS limit
       * You can call this operation up to 1,000 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request ModifySmsTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySmsTemplateResponse
       */
      Models::ModifySmsTemplateResponse modifySmsTemplateWithOptions(const Models::ModifySmsTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI ModifySmsTemplate is deprecated, please use Dysmsapi::2017-05-25::UpdateSmsTemplate instead.
       *
       * @summary Modifies the information of an unapproved message template and submits it for review again.
       *
       * @description After you apply for a message template, if the template fails to pass the review, you can call this operation to modify the template and submit the template again. You can call this operation to modify only a template for a specific message type.
       * The template content must comply with the [SMS template specifications](https://help.aliyun.com/document_detail/108253.html).
       * For more information, see [Usage notes](https://help.aliyun.com/document_detail/55324.html).
       * ### QPS limit
       * You can call this operation up to 1,000 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request ModifySmsTemplateRequest
       * @return ModifySmsTemplateResponse
       */
      Models::ModifySmsTemplateResponse modifySmsTemplate(const Models::ModifySmsTemplateRequest &request);

      /**
       * @summary Queries the review status of a message template.
       *
       * @description ### QPS limit
       * You can call this operation up to 300 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request QueryCardSmsTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryCardSmsTemplateResponse
       */
      Models::QueryCardSmsTemplateResponse queryCardSmsTemplateWithOptions(const Models::QueryCardSmsTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the review status of a message template.
       *
       * @description ### QPS limit
       * You can call this operation up to 300 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request QueryCardSmsTemplateRequest
       * @return QueryCardSmsTemplateResponse
       */
      Models::QueryCardSmsTemplateResponse queryCardSmsTemplate(const Models::QueryCardSmsTemplateRequest &request);

      /**
       * @summary Queries sent card messages.
       *
       * @description ### QPS limit
       * You can call this operation up to 300 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request QueryCardSmsTemplateReportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryCardSmsTemplateReportResponse
       */
      Models::QueryCardSmsTemplateReportResponse queryCardSmsTemplateReportWithOptions(const Models::QueryCardSmsTemplateReportRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries sent card messages.
       *
       * @description ### QPS limit
       * You can call this operation up to 300 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request QueryCardSmsTemplateReportRequest
       * @return QueryCardSmsTemplateReportResponse
       */
      Models::QueryCardSmsTemplateReportResponse queryCardSmsTemplateReport(const Models::QueryCardSmsTemplateReportRequest &request);

      /**
       * @summary 查询验证码签名
       *
       * @param request QueryExtCodeSignRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryExtCodeSignResponse
       */
      Models::QueryExtCodeSignResponse queryExtCodeSignWithOptions(const Models::QueryExtCodeSignRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询验证码签名
       *
       * @param request QueryExtCodeSignRequest
       * @return QueryExtCodeSignResponse
       */
      Models::QueryExtCodeSignResponse queryExtCodeSign(const Models::QueryExtCodeSignRequest &request);

      /**
       * @summary Checks whether a mobile phone number can receive card messages.
       *
       * @param tmpReq QueryMobilesCardSupportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryMobilesCardSupportResponse
       */
      Models::QueryMobilesCardSupportResponse queryMobilesCardSupportWithOptions(const Models::QueryMobilesCardSupportRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks whether a mobile phone number can receive card messages.
       *
       * @param request QueryMobilesCardSupportRequest
       * @return QueryMobilesCardSupportResponse
       */
      Models::QueryMobilesCardSupportResponse queryMobilesCardSupport(const Models::QueryMobilesCardSupportRequest &request);

      /**
       * @summary 点击明细查询
       *
       * @param request QueryPageSmartShortUrlLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryPageSmartShortUrlLogResponse
       */
      Models::QueryPageSmartShortUrlLogResponse queryPageSmartShortUrlLogWithOptions(const Models::QueryPageSmartShortUrlLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 点击明细查询
       *
       * @param request QueryPageSmartShortUrlLogRequest
       * @return QueryPageSmartShortUrlLogResponse
       */
      Models::QueryPageSmartShortUrlLogResponse queryPageSmartShortUrlLog(const Models::QueryPageSmartShortUrlLogRequest &request);

      /**
       * @summary Queries the information about a message.
       *
       * @param request QuerySendDetailsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QuerySendDetailsResponse
       */
      Models::QuerySendDetailsResponse querySendDetailsWithOptions(const Models::QuerySendDetailsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a message.
       *
       * @param request QuerySendDetailsRequest
       * @return QuerySendDetailsResponse
       */
      Models::QuerySendDetailsResponse querySendDetails(const Models::QuerySendDetailsRequest &request);

      /**
       * @summary Queries message delivery details.
       *
       * @description You can call the operation to query message delivery details, including the number of delivered messages, the number of messages with delivery receipts, and the time that a message is sent. If a large number of messages are sent on the specified date, you can specify the number of items displayed on each page and the number of pages to view the details by page.
       * ### QPS limits
       * You can call this operation up to 20 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request QuerySendStatisticsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QuerySendStatisticsResponse
       */
      Models::QuerySendStatisticsResponse querySendStatisticsWithOptions(const Models::QuerySendStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries message delivery details.
       *
       * @description You can call the operation to query message delivery details, including the number of delivered messages, the number of messages with delivery receipts, and the time that a message is sent. If a large number of messages are sent on the specified date, you can specify the number of items displayed on each page and the number of pages to view the details by page.
       * ### QPS limits
       * You can call this operation up to 20 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request QuerySendStatisticsRequest
       * @return QuerySendStatisticsResponse
       */
      Models::QuerySendStatisticsResponse querySendStatistics(const Models::QuerySendStatisticsRequest &request);

      /**
       * @summary Queries the status of a short URL.
       *
       * @description ### QPS limits
       * You can call this operation up to 20 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request QueryShortUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryShortUrlResponse
       */
      Models::QueryShortUrlResponse queryShortUrlWithOptions(const Models::QueryShortUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of a short URL.
       *
       * @description ### QPS limits
       * You can call this operation up to 20 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request QueryShortUrlRequest
       * @return QueryShortUrlResponse
       */
      Models::QueryShortUrlResponse queryShortUrl(const Models::QueryShortUrlRequest &request);

      /**
       * @summary 查询单个资质详情
       *
       * @param request QuerySingleSmsQualificationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QuerySingleSmsQualificationResponse
       */
      Models::QuerySingleSmsQualificationResponse querySingleSmsQualificationWithOptions(const Models::QuerySingleSmsQualificationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询单个资质详情
       *
       * @param request QuerySingleSmsQualificationRequest
       * @return QuerySingleSmsQualificationResponse
       */
      Models::QuerySingleSmsQualificationResponse querySingleSmsQualification(const Models::QuerySingleSmsQualificationRequest &request);

      /**
       * @summary 查询委托授权书
       *
       * @param tmpReq QuerySmsAuthorizationLetterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QuerySmsAuthorizationLetterResponse
       */
      Models::QuerySmsAuthorizationLetterResponse querySmsAuthorizationLetterWithOptions(const Models::QuerySmsAuthorizationLetterRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询委托授权书
       *
       * @param request QuerySmsAuthorizationLetterRequest
       * @return QuerySmsAuthorizationLetterResponse
       */
      Models::QuerySmsAuthorizationLetterResponse querySmsAuthorizationLetter(const Models::QuerySmsAuthorizationLetterRequest &request);

      /**
       * @summary 查询资质审核列表页
       *
       * @param request QuerySmsQualificationRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QuerySmsQualificationRecordResponse
       */
      Models::QuerySmsQualificationRecordResponse querySmsQualificationRecordWithOptions(const Models::QuerySmsQualificationRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询资质审核列表页
       *
       * @param request QuerySmsQualificationRecordRequest
       * @return QuerySmsQualificationRecordResponse
       */
      Models::QuerySmsQualificationRecordResponse querySmsQualificationRecord(const Models::QuerySmsQualificationRecordRequest &request);

      /**
       * @summary Queries the status of a signature.
       *
       * @description After you apply for an SMS signature, you can query its status by using the [Alibaba Cloud SMS console](https://dysms.console.aliyun.com/dysms.htm) or calling the operation. If the signature is rejected, you can modify the signature based on the reason why it is rejected.
       * ### QPS limits
       * You can call this API operation up to 500 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request QuerySmsSignRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QuerySmsSignResponse
       */
      Models::QuerySmsSignResponse querySmsSignWithOptions(const Models::QuerySmsSignRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of a signature.
       *
       * @description After you apply for an SMS signature, you can query its status by using the [Alibaba Cloud SMS console](https://dysms.console.aliyun.com/dysms.htm) or calling the operation. If the signature is rejected, you can modify the signature based on the reason why it is rejected.
       * ### QPS limits
       * You can call this API operation up to 500 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request QuerySmsSignRequest
       * @return QuerySmsSignResponse
       */
      Models::QuerySmsSignResponse querySmsSign(const Models::QuerySmsSignRequest &request);

      /**
       * @summary Queries message signatures by page.
       *
       * @description You can call this operation to query the details of message signatures, including the name, creation time, and approval status of each signature. If a message template is rejected, the reason is returned. Modify the message signature based on the reason.
       * ### QPS limit
       * You can call this operation up to 10 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request QuerySmsSignListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QuerySmsSignListResponse
       */
      Models::QuerySmsSignListResponse querySmsSignListWithOptions(const Models::QuerySmsSignListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries message signatures by page.
       *
       * @description You can call this operation to query the details of message signatures, including the name, creation time, and approval status of each signature. If a message template is rejected, the reason is returned. Modify the message signature based on the reason.
       * ### QPS limit
       * You can call this operation up to 10 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request QuerySmsSignListRequest
       * @return QuerySmsSignListResponse
       */
      Models::QuerySmsSignListResponse querySmsSignList(const Models::QuerySmsSignListRequest &request);

      /**
       * @deprecated OpenAPI QuerySmsTemplate is deprecated, please use Dysmsapi::2017-05-25::GetSmsTemplate instead.
       *
       * @summary Queries the approval status of a message template.
       *
       * @description After you create a message template, you can call this operation to query the approval status of the template. If a message template is rejected, the reason is returned. Modify the message template based on the reason.
       * ### QPS limit
       * You can call this operation up to 5,000 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request QuerySmsTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QuerySmsTemplateResponse
       */
      Models::QuerySmsTemplateResponse querySmsTemplateWithOptions(const Models::QuerySmsTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI QuerySmsTemplate is deprecated, please use Dysmsapi::2017-05-25::GetSmsTemplate instead.
       *
       * @summary Queries the approval status of a message template.
       *
       * @description After you create a message template, you can call this operation to query the approval status of the template. If a message template is rejected, the reason is returned. Modify the message template based on the reason.
       * ### QPS limit
       * You can call this operation up to 5,000 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request QuerySmsTemplateRequest
       * @return QuerySmsTemplateResponse
       */
      Models::QuerySmsTemplateResponse querySmsTemplate(const Models::QuerySmsTemplateRequest &request);

      /**
       * @summary Queries message templates.
       *
       * @description You can call this operation to query the details of message templates, including the name, creation time, and approval status of each template. If a message template is rejected, the reason is returned. Modify the message template based on the reason.
       * ### QPS limit
       * You can call this operation up to 10 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request QuerySmsTemplateListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QuerySmsTemplateListResponse
       */
      Models::QuerySmsTemplateListResponse querySmsTemplateListWithOptions(const Models::QuerySmsTemplateListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries message templates.
       *
       * @description You can call this operation to query the details of message templates, including the name, creation time, and approval status of each template. If a message template is rejected, the reason is returned. Modify the message template based on the reason.
       * ### QPS limit
       * You can call this operation up to 10 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request QuerySmsTemplateListRequest
       * @return QuerySmsTemplateListResponse
       */
      Models::QuerySmsTemplateListResponse querySmsTemplateList(const Models::QuerySmsTemplateListRequest &request);

      /**
       * @summary 验证手机验证码
       *
       * @param request RequiredPhoneCodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RequiredPhoneCodeResponse
       */
      Models::RequiredPhoneCodeResponse requiredPhoneCodeWithOptions(const Models::RequiredPhoneCodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 验证手机验证码
       *
       * @param request RequiredPhoneCodeRequest
       * @return RequiredPhoneCodeResponse
       */
      Models::RequiredPhoneCodeResponse requiredPhoneCode(const Models::RequiredPhoneCodeRequest &request);

      /**
       * @summary Sends multiple card messages at a time.
       *
       * @description You can call the operation to send multiple card messages to a maximum of mobile phone numbers at a time. Different signatures and rollback settings can be specified for the mobile phone numbers.
       * ### QPS limit
       * You can call this operation up to 1,000 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request SendBatchCardSmsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SendBatchCardSmsResponse
       */
      Models::SendBatchCardSmsResponse sendBatchCardSmsWithOptions(const Models::SendBatchCardSmsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sends multiple card messages at a time.
       *
       * @description You can call the operation to send multiple card messages to a maximum of mobile phone numbers at a time. Different signatures and rollback settings can be specified for the mobile phone numbers.
       * ### QPS limit
       * You can call this operation up to 1,000 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request SendBatchCardSmsRequest
       * @return SendBatchCardSmsResponse
       */
      Models::SendBatchCardSmsResponse sendBatchCardSms(const Models::SendBatchCardSmsRequest &request);

      /**
       * @summary Uses a single message template and multiple signatures to send messages to multiple recipients.
       *
       * @description You can call the operation to send messages to a maximum of 100 recipients at a time.
       *
       * @param request SendBatchSmsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SendBatchSmsResponse
       */
      Models::SendBatchSmsResponse sendBatchSmsWithOptions(const Models::SendBatchSmsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Uses a single message template and multiple signatures to send messages to multiple recipients.
       *
       * @description You can call the operation to send messages to a maximum of 100 recipients at a time.
       *
       * @param request SendBatchSmsRequest
       * @return SendBatchSmsResponse
       */
      Models::SendBatchSmsResponse sendBatchSms(const Models::SendBatchSmsRequest &request);

      /**
       * @summary Sends a card message.
       *
       * @description *   Make sure that the message template that you want to use has been approved. If the mobile phone number of a recipient does not support card messages, the SendCardSms operation allows the rollback feature to ensure successful delivery.
       * *   When you call the SendCardSms operation to send card messages, the operation checks whether the mobile phone numbers of the recipients support card messages. If the mobile phone numbers do not support card messages, you can specify whether to enable rollback. Otherwise, the card message cannot be delivered.
       * ### QPS limit
       * You can call this operation up to 1,000 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request SendCardSmsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SendCardSmsResponse
       */
      Models::SendCardSmsResponse sendCardSmsWithOptions(const Models::SendCardSmsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sends a card message.
       *
       * @description *   Make sure that the message template that you want to use has been approved. If the mobile phone number of a recipient does not support card messages, the SendCardSms operation allows the rollback feature to ensure successful delivery.
       * *   When you call the SendCardSms operation to send card messages, the operation checks whether the mobile phone numbers of the recipients support card messages. If the mobile phone numbers do not support card messages, you can specify whether to enable rollback. Otherwise, the card message cannot be delivered.
       * ### QPS limit
       * You can call this operation up to 1,000 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request SendCardSmsRequest
       * @return SendCardSmsResponse
       */
      Models::SendCardSmsResponse sendCardSms(const Models::SendCardSmsRequest &request);

      /**
       * @summary 发送物流短信
       *
       * @param request SendLogisticsSmsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SendLogisticsSmsResponse
       */
      Models::SendLogisticsSmsResponse sendLogisticsSmsWithOptions(const Models::SendLogisticsSmsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 发送物流短信
       *
       * @param request SendLogisticsSmsRequest
       * @return SendLogisticsSmsResponse
       */
      Models::SendLogisticsSmsResponse sendLogisticsSms(const Models::SendLogisticsSmsRequest &request);

      /**
       * @summary Sends a message. Before you call this operation, submit a message signature and message template, and make sure that the signature and template are approved.
       *
       * @description *   This operation is mainly used to send a single message. In special scenarios, you can send multiple messages with the same content to a maximum of 1,000 mobile numbers. Note that group sending may be delayed.
       * *   To send messages with different signatures and template content to multiple mobile numbers in a single request, call the [SendBatchSms](https://help.aliyun.com/document_detail/102364.html) operation.
       * *   You are charged for using Alibaba Cloud Short Message Service (SMS) based on the amount of messages sent. For more information, see [Pricing](https://www.aliyun.com/price/product#/sms/detail).
       * *   If your verification code signature and general-purpose signature have the same name, the system uses the general-purpose signature to send messages by default.
       *
       * @param request SendSmsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SendSmsResponse
       */
      Models::SendSmsResponse sendSmsWithOptions(const Models::SendSmsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sends a message. Before you call this operation, submit a message signature and message template, and make sure that the signature and template are approved.
       *
       * @description *   This operation is mainly used to send a single message. In special scenarios, you can send multiple messages with the same content to a maximum of 1,000 mobile numbers. Note that group sending may be delayed.
       * *   To send messages with different signatures and template content to multiple mobile numbers in a single request, call the [SendBatchSms](https://help.aliyun.com/document_detail/102364.html) operation.
       * *   You are charged for using Alibaba Cloud Short Message Service (SMS) based on the amount of messages sent. For more information, see [Pricing](https://www.aliyun.com/price/product#/sms/detail).
       * *   If your verification code signature and general-purpose signature have the same name, the system uses the general-purpose signature to send messages by default.
       *
       * @param request SendSmsRequest
       * @return SendSmsResponse
       */
      Models::SendSmsResponse sendSms(const Models::SendSmsRequest &request);

      /**
       * @summary Reports the status of an OTP message to Alibaba Cloud SMS.
       *
       * @description Metrics:
       * *   Requested OTP messages
       * *   Verified OTP messages
       * An OTP conversion rate is calculated based on the following formula: OTP conversion rate = Number of verified OTP messages/Number of requested OTP messages.
       * > If you call the SmsConversion operation to query OTP conversion rates, your business may be affected. We recommend that you perform the following operations: 1. Call the SmsConversion operation in an asynchronous manner by configuring queues or events. 2. Manually degrade your services or use a circuit breaker to automatically degrade services.
       *
       * @param request SmsConversionIntlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SmsConversionIntlResponse
       */
      Models::SmsConversionIntlResponse smsConversionIntlWithOptions(const Models::SmsConversionIntlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Reports the status of an OTP message to Alibaba Cloud SMS.
       *
       * @description Metrics:
       * *   Requested OTP messages
       * *   Verified OTP messages
       * An OTP conversion rate is calculated based on the following formula: OTP conversion rate = Number of verified OTP messages/Number of requested OTP messages.
       * > If you call the SmsConversion operation to query OTP conversion rates, your business may be affected. We recommend that you perform the following operations: 1. Call the SmsConversion operation in an asynchronous manner by configuring queues or events. 2. Manually degrade your services or use a circuit breaker to automatically degrade services.
       *
       * @param request SmsConversionIntlRequest
       * @return SmsConversionIntlResponse
       */
      Models::SmsConversionIntlResponse smsConversionIntl(const Models::SmsConversionIntlRequest &request);

      /**
       * @summary 创建资质对客openAPI
       *
       * @param tmpReq SubmitSmsQualificationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitSmsQualificationResponse
       */
      Models::SubmitSmsQualificationResponse submitSmsQualificationWithOptions(const Models::SubmitSmsQualificationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建资质对客openAPI
       *
       * @param request SubmitSmsQualificationRequest
       * @return SubmitSmsQualificationResponse
       */
      Models::SubmitSmsQualificationResponse submitSmsQualification(const Models::SubmitSmsQualificationRequest &request);

      /**
       * @summary Attaches tags to a message template.
       *
       * @description ### QPS limit
       * You can call this operation up to 50 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request TagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Attaches tags to a message template.
       *
       * @description ### QPS limit
       * You can call this operation up to 50 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request TagResourcesRequest
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

      /**
       * @summary Deletes tags from a message template.
       *
       * @description ### QPS limit
       * You can call this operation up to 50 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request UntagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResourcesWithOptions(const Models::UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes tags from a message template.
       *
       * @description ### QPS limit
       * You can call this operation up to 50 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request UntagResourcesRequest
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResources(const Models::UntagResourcesRequest &request);

      /**
       * @summary 修改验证码签名
       *
       * @param request UpdateExtCodeSignRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateExtCodeSignResponse
       */
      Models::UpdateExtCodeSignResponse updateExtCodeSignWithOptions(const Models::UpdateExtCodeSignRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改验证码签名
       *
       * @param request UpdateExtCodeSignRequest
       * @return UpdateExtCodeSignResponse
       */
      Models::UpdateExtCodeSignResponse updateExtCodeSign(const Models::UpdateExtCodeSignRequest &request);

      /**
       * @summary 修改资质对客openAPI
       *
       * @param tmpReq UpdateSmsQualificationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSmsQualificationResponse
       */
      Models::UpdateSmsQualificationResponse updateSmsQualificationWithOptions(const Models::UpdateSmsQualificationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 修改资质对客openAPI
       *
       * @param request UpdateSmsQualificationRequest
       * @return UpdateSmsQualificationResponse
       */
      Models::UpdateSmsQualificationResponse updateSmsQualification(const Models::UpdateSmsQualificationRequest &request);

      /**
       * @summary Update Text SMS Signature
       *
       * @description - For details about the changes of this new interface and the original one, please refer to [Announcement on the Update of SMS Signature & Template Interfaces](https://help.aliyun.com/zh/sms/product-overview/announcement-on-sms-service-update-signature-template-interface).
       * - Only signatures that have not passed the review can be modified. Please refer to [Handling Suggestions for Failed SMS Reviews](https://help.aliyun.com/zh/sms/user-guide/causes-of-application-failures-and-suggestions?spm) and call this interface to modify and resubmit for review after modification.
       * - Signature information applied through the interface will be synchronized in the SMS service console. For operations related to signatures in the console, please see [SMS Signatures](https://help.aliyun.com/zh/sms/user-guide/create-signatures?spm).
       *
       * @param tmpReq UpdateSmsSignRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSmsSignResponse
       */
      Models::UpdateSmsSignResponse updateSmsSignWithOptions(const Models::UpdateSmsSignRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update Text SMS Signature
       *
       * @description - For details about the changes of this new interface and the original one, please refer to [Announcement on the Update of SMS Signature & Template Interfaces](https://help.aliyun.com/zh/sms/product-overview/announcement-on-sms-service-update-signature-template-interface).
       * - Only signatures that have not passed the review can be modified. Please refer to [Handling Suggestions for Failed SMS Reviews](https://help.aliyun.com/zh/sms/user-guide/causes-of-application-failures-and-suggestions?spm) and call this interface to modify and resubmit for review after modification.
       * - Signature information applied through the interface will be synchronized in the SMS service console. For operations related to signatures in the console, please see [SMS Signatures](https://help.aliyun.com/zh/sms/user-guide/create-signatures?spm).
       *
       * @param request UpdateSmsSignRequest
       * @return UpdateSmsSignResponse
       */
      Models::UpdateSmsSignResponse updateSmsSign(const Models::UpdateSmsSignRequest &request);

      /**
       * @summary Update Text SMS Template
       *
       * @description - For details about the changes of this new interface compared to the original one, please refer to [Announcement on SMS Service Update: Signature & Template Interfaces](https://help.aliyun.com/zh/sms/product-overview/announcement-on-sms-service-update-signature-template-interface).
       * - Only templates that have not passed the review can be modified. Please refer to [Handling Suggestions for Failed SMS Template Reviews](https://help.aliyun.com/zh/sms/user-guide/causes-of-application-failures-and-suggestions?spm=a2c4g.11186623.0.0.4bf5561ajcFtMQ) and call this interface to modify and resubmit for review.
       * - Modifications made through the interface will be synchronized in the SMS service console. For related operations on templates in the console, see [SMS Templates](https://help.aliyun.com/zh/sms/user-guide/message-templates/?spm=a2c4g.11186623.0.0.35a947464Itaxp).
       * ### QPS Limit
       * The single-user QPS limit for this interface is 1000 times/second. Exceeding this limit will result in API throttling, which may impact your business. Please make calls reasonably.
       *
       * @param tmpReq UpdateSmsTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSmsTemplateResponse
       */
      Models::UpdateSmsTemplateResponse updateSmsTemplateWithOptions(const Models::UpdateSmsTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update Text SMS Template
       *
       * @description - For details about the changes of this new interface compared to the original one, please refer to [Announcement on SMS Service Update: Signature & Template Interfaces](https://help.aliyun.com/zh/sms/product-overview/announcement-on-sms-service-update-signature-template-interface).
       * - Only templates that have not passed the review can be modified. Please refer to [Handling Suggestions for Failed SMS Template Reviews](https://help.aliyun.com/zh/sms/user-guide/causes-of-application-failures-and-suggestions?spm=a2c4g.11186623.0.0.4bf5561ajcFtMQ) and call this interface to modify and resubmit for review.
       * - Modifications made through the interface will be synchronized in the SMS service console. For related operations on templates in the console, see [SMS Templates](https://help.aliyun.com/zh/sms/user-guide/message-templates/?spm=a2c4g.11186623.0.0.35a947464Itaxp).
       * ### QPS Limit
       * The single-user QPS limit for this interface is 1000 times/second. Exceeding this limit will result in API throttling, which may impact your business. Please make calls reasonably.
       *
       * @param request UpdateSmsTemplateRequest
       * @return UpdateSmsTemplateResponse
       */
      Models::UpdateSmsTemplateResponse updateSmsTemplate(const Models::UpdateSmsTemplateRequest &request);

      /**
       * @summary 发送手机验证码
       *
       * @param request ValidPhoneCodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ValidPhoneCodeResponse
       */
      Models::ValidPhoneCodeResponse validPhoneCodeWithOptions(const Models::ValidPhoneCodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 发送手机验证码
       *
       * @param request ValidPhoneCodeRequest
       * @return ValidPhoneCodeResponse
       */
      Models::ValidPhoneCodeResponse validPhoneCode(const Models::ValidPhoneCodeRequest &request);

      /**
       * @summary 物流短信运单号校验
       *
       * @param request VerifyLogisticsSmsMailNoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return VerifyLogisticsSmsMailNoResponse
       */
      Models::VerifyLogisticsSmsMailNoResponse verifyLogisticsSmsMailNoWithOptions(const Models::VerifyLogisticsSmsMailNoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 物流短信运单号校验
       *
       * @param request VerifyLogisticsSmsMailNoRequest
       * @return VerifyLogisticsSmsMailNoResponse
       */
      Models::VerifyLogisticsSmsMailNoResponse verifyLogisticsSmsMailNo(const Models::VerifyLogisticsSmsMailNoRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
