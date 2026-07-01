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
       * @summary 创建/编辑5G消息固定菜单
       *
       * @param request AddRcsSignMenuRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddRcsSignMenuResponse
       */
      Models::AddRcsSignMenuResponse addRcsSignMenuWithOptions(const Models::AddRcsSignMenuRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建/编辑5G消息固定菜单
       *
       * @param request AddRcsSignMenuRequest
       * @return AddRcsSignMenuResponse
       */
      Models::AddRcsSignMenuResponse addRcsSignMenu(const Models::AddRcsSignMenuRequest &request);

      /**
       * @summary Creates a short URL.
       *
       * @description >Notice: 
       * Short Message Service does not currently support this API operation.
       * - You can create up to 3,000 short URLs per calendar day.
       * - After a short URL is generated, it must pass a security review, which typically takes 10 minutes to 2 hours. You cannot access the short URL until it passes this review.
       *
       * @param request AddShortUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddShortUrlResponse
       */
      Models::AddShortUrlResponse addShortUrlWithOptions(const Models::AddShortUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a short URL.
       *
       * @description >Notice: 
       * Short Message Service does not currently support this API operation.
       * - You can create up to 3,000 short URLs per calendar day.
       * - After a short URL is generated, it must pass a security review, which typically takes 10 minutes to 2 hours. You cannot access the short URL until it passes this review.
       *
       * @param request AddShortUrlRequest
       * @return AddShortUrlResponse
       */
      Models::AddShortUrlResponse addShortUrl(const Models::AddShortUrlRequest &request);

      /**
       * @summary This API has been discontinued.
       *
       * @description - In accordance with the regulations of the Ministry of Industry and Information Technology (MIIT) and the [relevant requirements](https://help.aliyun.com/document_detail/2806975.html) of carriers, Alibaba Cloud has made functional modifications to signature-related APIs. To improve the review efficiency and approval rate of your signatures, use the new API [CreateSmsSign - Apply for an SMS signature](https://help.aliyun.com/document_detail/2807427.html).
       * - An individual user can apply for one signature per natural day under the same Alibaba Cloud account. Enterprise users have no limit on the number of applications. For details about the differences in rights and interests between individual users and enterprise users, see [Usage notes](https://help.aliyun.com/document_detail/55324.html).
       * - The signature information applied for through the API is synchronized to the SMS console. For operations on signatures in the console, see [SMS signatures](https://help.aliyun.com/document_detail/108073.html).
       * - After you submit a signature application, you can call the [QuerySmsSign](https://help.aliyun.com/document_detail/419283.html) API to query the review status and details of the signature. You can also [configure receipt messages](https://help.aliyun.com/document_detail/101508.html) and use [SignSmsReport](https://help.aliyun.com/document_detail/120998.html) to obtain signature review status messages.
       * ### QPS limit
       * The single-user QPS limit for this API is 1 call per second. If the limit is exceeded, API calls will be throttled, which may affect your business. Call this API at a reasonable rate.
       *
       * @param request AddSmsSignRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddSmsSignResponse
       */
      Models::AddSmsSignResponse addSmsSignWithOptions(const Models::AddSmsSignRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This API has been discontinued.
       *
       * @description - In accordance with the regulations of the Ministry of Industry and Information Technology (MIIT) and the [relevant requirements](https://help.aliyun.com/document_detail/2806975.html) of carriers, Alibaba Cloud has made functional modifications to signature-related APIs. To improve the review efficiency and approval rate of your signatures, use the new API [CreateSmsSign - Apply for an SMS signature](https://help.aliyun.com/document_detail/2807427.html).
       * - An individual user can apply for one signature per natural day under the same Alibaba Cloud account. Enterprise users have no limit on the number of applications. For details about the differences in rights and interests between individual users and enterprise users, see [Usage notes](https://help.aliyun.com/document_detail/55324.html).
       * - The signature information applied for through the API is synchronized to the SMS console. For operations on signatures in the console, see [SMS signatures](https://help.aliyun.com/document_detail/108073.html).
       * - After you submit a signature application, you can call the [QuerySmsSign](https://help.aliyun.com/document_detail/419283.html) API to query the review status and details of the signature. You can also [configure receipt messages](https://help.aliyun.com/document_detail/101508.html) and use [SignSmsReport](https://help.aliyun.com/document_detail/120998.html) to obtain signature review status messages.
       * ### QPS limit
       * The single-user QPS limit for this API is 1 call per second. If the limit is exceeded, API calls will be throttled, which may affect your business. Call this API at a reasonable rate.
       *
       * @param request AddSmsSignRequest
       * @return AddSmsSignResponse
       */
      Models::AddSmsSignResponse addSmsSign(const Models::AddSmsSignRequest &request);

      /**
       * @deprecated OpenAPI AddSmsTemplate is deprecated, please use Dysmsapi::2017-05-25::CreateSmsTemplate instead.
       *
       * @summary An SMS template is the detailed content received by the recipient, including variables and template content. You can apply for verification code, notification, or promotional SMS templates based on your business needs. SMS can only be sent after the template is approved.
       *
       * @description - In accordance with the regulations of the Ministry of Industry and Information Technology and the [related requirements](https://help.aliyun.com/document_detail/2806975.html) of carriers, Alibaba Cloud has revamped the functionality of template-related APIs. To improve the review efficiency and approval rate of your templates, please use the new operation [CreateSmsTemplate - Apply for SMS template](https://help.aliyun.com/document_detail/2807431.html).
       * - You can submit a maximum of 100 SMS template applications per natural day via the API. It is recommended that each application be submitted at intervals of at least 30 seconds. There is no limit on the number of submissions when applying for SMS templates through the [console](https://dysms.console.aliyun.com/domestic/text/template).
       * - Template information applied for through the API is synchronized to the SMS service console. For related template operations in the console, see [SMS templates](https://help.aliyun.com/document_detail/108085.html).
       * - After submitting the template application, you can query the template review status and details through the [QuerySmsTemplate](https://help.aliyun.com/document_detail/419289.html) operation. You can also [configure receipt messages](https://help.aliyun.com/document_detail/101508.html) and obtain the template review status messages through [TemplateSmsReport](https://help.aliyun.com/document_detail/120999.html).
       * - Domestic SMS templates and international/Hong Kong, Macao, and Taiwan SMS templates are not interchangeable (cannot be mixed). Please apply for templates based on your business usage scenarios.
       * - Only enterprise-verified users can apply for promotional SMS and international/Hong Kong, Macao, and Taiwan messages. For details about the differences between individual and enterprise user privileges, see [Usage notes](https://help.aliyun.com/document_detail/55324.html).
       * ### QPS limits
       * The per-user QPS limit for this operation is 1,000 calls per second. If the limit is exceeded, API calls will be throttled, which may affect your business. Please call the operation reasonably.
       *
       * @param request AddSmsTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddSmsTemplateResponse
       */
      Models::AddSmsTemplateResponse addSmsTemplateWithOptions(const Models::AddSmsTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI AddSmsTemplate is deprecated, please use Dysmsapi::2017-05-25::CreateSmsTemplate instead.
       *
       * @summary An SMS template is the detailed content received by the recipient, including variables and template content. You can apply for verification code, notification, or promotional SMS templates based on your business needs. SMS can only be sent after the template is approved.
       *
       * @description - In accordance with the regulations of the Ministry of Industry and Information Technology and the [related requirements](https://help.aliyun.com/document_detail/2806975.html) of carriers, Alibaba Cloud has revamped the functionality of template-related APIs. To improve the review efficiency and approval rate of your templates, please use the new operation [CreateSmsTemplate - Apply for SMS template](https://help.aliyun.com/document_detail/2807431.html).
       * - You can submit a maximum of 100 SMS template applications per natural day via the API. It is recommended that each application be submitted at intervals of at least 30 seconds. There is no limit on the number of submissions when applying for SMS templates through the [console](https://dysms.console.aliyun.com/domestic/text/template).
       * - Template information applied for through the API is synchronized to the SMS service console. For related template operations in the console, see [SMS templates](https://help.aliyun.com/document_detail/108085.html).
       * - After submitting the template application, you can query the template review status and details through the [QuerySmsTemplate](https://help.aliyun.com/document_detail/419289.html) operation. You can also [configure receipt messages](https://help.aliyun.com/document_detail/101508.html) and obtain the template review status messages through [TemplateSmsReport](https://help.aliyun.com/document_detail/120999.html).
       * - Domestic SMS templates and international/Hong Kong, Macao, and Taiwan SMS templates are not interchangeable (cannot be mixed). Please apply for templates based on your business usage scenarios.
       * - Only enterprise-verified users can apply for promotional SMS and international/Hong Kong, Macao, and Taiwan messages. For details about the differences between individual and enterprise user privileges, see [Usage notes](https://help.aliyun.com/document_detail/55324.html).
       * ### QPS limits
       * The per-user QPS limit for this operation is 1,000 calls per second. If the limit is exceeded, API calls will be throttled, which may affect your business. Please call the operation reasonably.
       *
       * @param request AddSmsTemplateRequest
       * @return AddSmsTemplateResponse
       */
      Models::AddSmsTemplateResponse addSmsTemplate(const Models::AddSmsTemplateRequest &request);

      /**
       * @summary Updates the qualification and authorization letter for a signature.
       *
       * @param request ChangeSignatureQualificationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeSignatureQualificationResponse
       */
      Models::ChangeSignatureQualificationResponse changeSignatureQualificationWithOptions(const Models::ChangeSignatureQualificationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the qualification and authorization letter for a signature.
       *
       * @param request ChangeSignatureQualificationRequest
       * @return ChangeSignatureQualificationResponse
       */
      Models::ChangeSignatureQualificationResponse changeSignatureQualification(const Models::ChangeSignatureQualificationRequest &request);

      /**
       * @summary Checks whether phone numbers support card SMS.
       *
       * @description - Alibaba Cloud accounts that have not activated card SMS cannot call this API.
       * - Card SMS is currently in the internal invitation phase. Contact your Alibaba Cloud account manager to apply for activation or [contact Alibaba Cloud pre-sales](https://help.aliyun.com/document_detail/464625.html).
       * - We recommend that you use the new API [QueryMobilesCardSupport](~~QueryMobilesCardSupport~~) to query whether phone numbers support card SMS.
       * ### QPS limit
       * The per-user QPS limit for this API is 2,000 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Make calls reasonably.
       *
       * @param request CheckMobilesCardSupportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckMobilesCardSupportResponse
       */
      Models::CheckMobilesCardSupportResponse checkMobilesCardSupportWithOptions(const Models::CheckMobilesCardSupportRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks whether phone numbers support card SMS.
       *
       * @description - Alibaba Cloud accounts that have not activated card SMS cannot call this API.
       * - Card SMS is currently in the internal invitation phase. Contact your Alibaba Cloud account manager to apply for activation or [contact Alibaba Cloud pre-sales](https://help.aliyun.com/document_detail/464625.html).
       * - We recommend that you use the new API [QueryMobilesCardSupport](~~QueryMobilesCardSupport~~) to query whether phone numbers support card SMS.
       * ### QPS limit
       * The per-user QPS limit for this API is 2,000 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Make calls reasonably.
       *
       * @param request CheckMobilesCardSupportRequest
       * @return CheckMobilesCardSupportResponse
       */
      Models::CheckMobilesCardSupportResponse checkMobilesCardSupport(const Models::CheckMobilesCardSupportRequest &request);

      /**
       * @summary Reports SMS conversion rate statistics to the Alibaba Cloud SMS platform.
       *
       * @description 指标说明：转化率=OTP 转化量/OTP 发送量。
       * - OTP发送量：验证码发送量。
       * - OTP转化量：验证码转换量。（用户成功获取验证码，并进行回传）
       * >转化率反馈功能会对业务系统有一定的侵入性，为了防止调用转化率 API 的抖动影响业务逻辑，请考虑： 
       * >- 使用异步模式（例如：队列或事件驱动）调用 API。 
       * >- 添加可降级的方案保护业务逻辑（例如：手动降级开工或者使用断路器自动降级）。
       *
       * @param request ConversionDataIntlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConversionDataIntlResponse
       */
      Models::ConversionDataIntlResponse conversionDataIntlWithOptions(const Models::ConversionDataIntlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Reports SMS conversion rate statistics to the Alibaba Cloud SMS platform.
       *
       * @description 指标说明：转化率=OTP 转化量/OTP 发送量。
       * - OTP发送量：验证码发送量。
       * - OTP转化量：验证码转换量。（用户成功获取验证码，并进行回传）
       * >转化率反馈功能会对业务系统有一定的侵入性，为了防止调用转化率 API 的抖动影响业务逻辑，请考虑： 
       * >- 使用异步模式（例如：队列或事件驱动）调用 API。 
       * >- 添加可降级的方案保护业务逻辑（例如：手动降级开工或者使用断路器自动降级）。
       *
       * @param request ConversionDataIntlRequest
       * @return ConversionDataIntlResponse
       */
      Models::ConversionDataIntlResponse conversionDataIntl(const Models::ConversionDataIntlRequest &request);

      /**
       * @summary Creates a card SMS template.
       *
       * @description - The card SMS feature is currently available by invitation only. To enable this feature, contact your Alibaba Cloud business manager or our [pre-sales consultation](https://help.aliyun.com/document_detail/464625.html?spm=a2c4g.11186623.0.0.213273d4Xe6UEu#section-81n-72q-ybm) team.
       * - This operation saves a card SMS template, submits it to mobile phone vendors for review, and returns a template code.
       * - If a card SMS template contains a type or event that a vendor does not support, the system does not submit the template to that vendor for review. For more information, see [Supported template types by vendor](https://help.aliyun.com/document_detail/434611.html).
       * - For more examples of card SMS templates, see [Card SMS template examples](https://help.aliyun.com/document_detail/435361.html).
       * ### QPS limit
       * The QPS limit for a single user is 300. API calls that exceed this limit are throttled, which may impact your business. Plan your calls accordingly.
       *
       * @param tmpReq CreateCardSmsTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCardSmsTemplateResponse
       */
      Models::CreateCardSmsTemplateResponse createCardSmsTemplateWithOptions(const Models::CreateCardSmsTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a card SMS template.
       *
       * @description - The card SMS feature is currently available by invitation only. To enable this feature, contact your Alibaba Cloud business manager or our [pre-sales consultation](https://help.aliyun.com/document_detail/464625.html?spm=a2c4g.11186623.0.0.213273d4Xe6UEu#section-81n-72q-ybm) team.
       * - This operation saves a card SMS template, submits it to mobile phone vendors for review, and returns a template code.
       * - If a card SMS template contains a type or event that a vendor does not support, the system does not submit the template to that vendor for review. For more information, see [Supported template types by vendor](https://help.aliyun.com/document_detail/434611.html).
       * - For more examples of card SMS templates, see [Card SMS template examples](https://help.aliyun.com/document_detail/435361.html).
       * ### QPS limit
       * The QPS limit for a single user is 300. API calls that exceed this limit are throttled, which may impact your business. Plan your calls accordingly.
       *
       * @param request CreateCardSmsTemplateRequest
       * @return CreateCardSmsTemplateResponse
       */
      Models::CreateCardSmsTemplateResponse createCardSmsTemplate(const Models::CreateCardSmsTemplateRequest &request);

      /**
       * @summary Creates an order to add, update, or delete a digital message signature.
       *
       * @description Creates, updates, or deletes a signature.
       *
       * @param tmpReq CreateDigitalSignOrderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDigitalSignOrderResponse
       */
      Models::CreateDigitalSignOrderResponse createDigitalSignOrderWithOptions(const Models::CreateDigitalSignOrderRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an order to add, update, or delete a digital message signature.
       *
       * @description Creates, updates, or deletes a signature.
       *
       * @param request CreateDigitalSignOrderRequest
       * @return CreateDigitalSignOrderResponse
       */
      Models::CreateDigitalSignOrderResponse createDigitalSignOrder(const Models::CreateDigitalSignOrderRequest &request);

      /**
       * @summary Creates a digital SMS template.
       *
       * @description Use this operation to create a reusable template for your digital SMS messages.
       *
       * @param request CreateDigitalSmsTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDigitalSmsTemplateResponse
       */
      Models::CreateDigitalSmsTemplateResponse createDigitalSmsTemplateWithOptions(const Models::CreateDigitalSmsTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a digital SMS template.
       *
       * @description Use this operation to create a reusable template for your digital SMS messages.
       *
       * @param request CreateDigitalSmsTemplateRequest
       * @return CreateDigitalSmsTemplateResponse
       */
      Models::CreateDigitalSmsTemplateResponse createDigitalSmsTemplate(const Models::CreateDigitalSmsTemplateRequest &request);

      /**
       * @summary 创建终端5G适配情况查询任务
       *
       * @param request CreateRCSMobileCapableTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRCSMobileCapableTaskResponse
       */
      Models::CreateRCSMobileCapableTaskResponse createRCSMobileCapableTaskWithOptions(const Models::CreateRCSMobileCapableTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建终端5G适配情况查询任务
       *
       * @param request CreateRCSMobileCapableTaskRequest
       * @return CreateRCSMobileCapableTaskResponse
       */
      Models::CreateRCSMobileCapableTaskResponse createRCSMobileCapableTask(const Models::CreateRCSMobileCapableTaskRequest &request);

      /**
       * @summary 创建5G消息模板
       *
       * @param request CreateRCSTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRCSTemplateResponse
       */
      Models::CreateRCSTemplateResponse createRCSTemplateWithOptions(const Models::CreateRCSTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建5G消息模板
       *
       * @param request CreateRCSTemplateRequest
       * @return CreateRCSTemplateResponse
       */
      Models::CreateRCSTemplateResponse createRCSTemplate(const Models::CreateRCSTemplateRequest &request);

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
       * @summary The process for using a live app as a signature source has changed. If you use an app as the signature source, you must call this operation to create an ICP filing record for it.
       *
       * @description >Notice: To use a **live app** as a signature source, you must now provide its ICP filing information. This requires you to upload a screenshot of the app\\"s ICP filing.
       *
       * @param request CreateSmsAppIcpRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSmsAppIcpRecordResponse
       */
      Models::CreateSmsAppIcpRecordResponse createSmsAppIcpRecordWithOptions(const Models::CreateSmsAppIcpRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The process for using a live app as a signature source has changed. If you use an app as the signature source, you must call this operation to create an ICP filing record for it.
       *
       * @description >Notice: To use a **live app** as a signature source, you must now provide its ICP filing information. This requires you to upload a screenshot of the app\\"s ICP filing.
       *
       * @param request CreateSmsAppIcpRecordRequest
       * @return CreateSmsAppIcpRecordResponse
       */
      Models::CreateSmsAppIcpRecordResponse createSmsAppIcpRecord(const Models::CreateSmsAppIcpRecordRequest &request);

      /**
       * @summary If the qualification is intended for use by a third party or the requested signature involves third-party rights, you must obtain third-party authorization and create an authorization letter before submitting the application.
       *
       * @description - Before use, please read the [Authorization Letter Specifications](https://help.aliyun.com/document_detail/56741.html). Download the [Authorization Letter Template](https://help-static-aliyun-doc.aliyuncs.com/file-manage-files/zh-CN/20250414/bvpcmo/%E6%8E%88%E6%9D%83%E5%A7%94%E6%89%98%E4%B9%A6%E6%A8%A1%E7%89%88.doc), fill it out and stamp it according to the specifications, and then upload it.
       * - The authorization letter you create can be used when applying for SMS qualifications or SMS signatures. If your qualification or signature is intended for use by a third party, you must create and submit an authorization letter.
       * - After creating an authorization letter, you can call [QuerySmsAuthorizationLetter](~~QuerySmsAuthorizationLetter~~) to query the details of the created authorization letter. Authorization letter information created through the API is synchronized to the Short Message Service console.
       *
       * @param tmpReq CreateSmsAuthorizationLetterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSmsAuthorizationLetterResponse
       */
      Models::CreateSmsAuthorizationLetterResponse createSmsAuthorizationLetterWithOptions(const Models::CreateSmsAuthorizationLetterRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary If the qualification is intended for use by a third party or the requested signature involves third-party rights, you must obtain third-party authorization and create an authorization letter before submitting the application.
       *
       * @description - Before use, please read the [Authorization Letter Specifications](https://help.aliyun.com/document_detail/56741.html). Download the [Authorization Letter Template](https://help-static-aliyun-doc.aliyuncs.com/file-manage-files/zh-CN/20250414/bvpcmo/%E6%8E%88%E6%9D%83%E5%A7%94%E6%89%98%E4%B9%A6%E6%A8%A1%E7%89%88.doc), fill it out and stamp it according to the specifications, and then upload it.
       * - The authorization letter you create can be used when applying for SMS qualifications or SMS signatures. If your qualification or signature is intended for use by a third party, you must create and submit an authorization letter.
       * - After creating an authorization letter, you can call [QuerySmsAuthorizationLetter](~~QuerySmsAuthorizationLetter~~) to query the details of the created authorization letter. Authorization letter information created through the API is synchronized to the Short Message Service console.
       *
       * @param request CreateSmsAuthorizationLetterRequest
       * @return CreateSmsAuthorizationLetterResponse
       */
      Models::CreateSmsAuthorizationLetterResponse createSmsAuthorizationLetter(const Models::CreateSmsAuthorizationLetterRequest &request);

      /**
       * @summary An SMS signature identifies the sender of an SMS message. Before sending SMS messages, you must apply for a signature and a template. The system prepends the approved SMS signature to the message content and sends them together to the recipient.
       *
       * @description - For details about the changes between the new and original operations, see [Announcement on updating signature and template operations for Short Message Service](https://help.aliyun.com/document_detail/2806975.html).
       * - Users who verify your identity - Individual account can apply for one formal signature per calendar day per Alibaba Cloud account. Users who verify your identity - Enterprise account currently have no such limit. For details about the differences between individual and enterprise user privileges, see [Before you begin](https://help.aliyun.com/document_detail/55324.html).
       * - Read the [Signature specifications](https://help.aliyun.com/document_detail/108076.html) to learn about the SMS signature review standards.
       * - Signatures applied for through the API are synchronized to the Short Message Service console. For console-related operations, see [SMS signatures](https://help.aliyun.com/document_detail/108073.html).
       * - After you submit a signature application, you can call the [GetSmsSign](https://help.aliyun.com/document_detail/2807429.html) operation to query the signature review status and details. You can also [configure receipt messages](https://help.aliyun.com/document_detail/101508.html) and use [SignSmsReport](https://help.aliyun.com/document_detail/120998.html) to obtain the signature review status messages.
       *
       * @param tmpReq CreateSmsSignRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSmsSignResponse
       */
      Models::CreateSmsSignResponse createSmsSignWithOptions(const Models::CreateSmsSignRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary An SMS signature identifies the sender of an SMS message. Before sending SMS messages, you must apply for a signature and a template. The system prepends the approved SMS signature to the message content and sends them together to the recipient.
       *
       * @description - For details about the changes between the new and original operations, see [Announcement on updating signature and template operations for Short Message Service](https://help.aliyun.com/document_detail/2806975.html).
       * - Users who verify your identity - Individual account can apply for one formal signature per calendar day per Alibaba Cloud account. Users who verify your identity - Enterprise account currently have no such limit. For details about the differences between individual and enterprise user privileges, see [Before you begin](https://help.aliyun.com/document_detail/55324.html).
       * - Read the [Signature specifications](https://help.aliyun.com/document_detail/108076.html) to learn about the SMS signature review standards.
       * - Signatures applied for through the API are synchronized to the Short Message Service console. For console-related operations, see [SMS signatures](https://help.aliyun.com/document_detail/108073.html).
       * - After you submit a signature application, you can call the [GetSmsSign](https://help.aliyun.com/document_detail/2807429.html) operation to query the signature review status and details. You can also [configure receipt messages](https://help.aliyun.com/document_detail/101508.html) and use [SignSmsReport](https://help.aliyun.com/document_detail/120998.html) to obtain the signature review status messages.
       *
       * @param request CreateSmsSignRequest
       * @return CreateSmsSignResponse
       */
      Models::CreateSmsSignResponse createSmsSign(const Models::CreateSmsSignRequest &request);

      /**
       * @summary A message template defines the content of an SMS message. This content includes the message text and any variables. You can create templates for various business needs, such as sending verification codes, notifications, or promotional messages. A template must be approved before you can use it to send messages.
       *
       * @description - For details on the API changes for signatures and templates, see the [Announcement on Signature and Template API Updates for Short Message Service](https://help.aliyun.com/document_detail/2806975.html).
       * - Wait at least 30 seconds between API calls when applying for a message template.
       * - Message templates you apply for via the API are synchronized to the Short Message Service console. For details on how to manage message templates in the console, see [Message templates](https://help.aliyun.com/document_detail/108085.html).
       * - After you submit a template for review, you can call the [GetSmsTemplate](https://help.aliyun.com/document_detail/2807433.html) API to query the template\\"s review status and details. You can also [configure status reports](https://help.aliyun.com/document_detail/101508.html) to receive the template\\"s review status through [TemplateSmsReport](https://help.aliyun.com/document_detail/120999.html).
       * - Message templates for Chinese mainland messages and international messages are not interchangeable. Apply for message templates based on your use case.
       * - Only enterprise-verified users can apply for message templates for promotional messages and international messages. For details on the permission differences between individual and enterprise users, see [Usage notes](https://help.aliyun.com/document_detail/55324.html).
       *
       * @param tmpReq CreateSmsTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSmsTemplateResponse
       */
      Models::CreateSmsTemplateResponse createSmsTemplateWithOptions(const Models::CreateSmsTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary A message template defines the content of an SMS message. This content includes the message text and any variables. You can create templates for various business needs, such as sending verification codes, notifications, or promotional messages. A template must be approved before you can use it to send messages.
       *
       * @description - For details on the API changes for signatures and templates, see the [Announcement on Signature and Template API Updates for Short Message Service](https://help.aliyun.com/document_detail/2806975.html).
       * - Wait at least 30 seconds between API calls when applying for a message template.
       * - Message templates you apply for via the API are synchronized to the Short Message Service console. For details on how to manage message templates in the console, see [Message templates](https://help.aliyun.com/document_detail/108085.html).
       * - After you submit a template for review, you can call the [GetSmsTemplate](https://help.aliyun.com/document_detail/2807433.html) API to query the template\\"s review status and details. You can also [configure status reports](https://help.aliyun.com/document_detail/101508.html) to receive the template\\"s review status through [TemplateSmsReport](https://help.aliyun.com/document_detail/120999.html).
       * - Message templates for Chinese mainland messages and international messages are not interchangeable. Apply for message templates based on your use case.
       * - Only enterprise-verified users can apply for message templates for promotional messages and international messages. For details on the permission differences between individual and enterprise users, see [Usage notes](https://help.aliyun.com/document_detail/55324.html).
       *
       * @param request CreateSmsTemplateRequest
       * @return CreateSmsTemplateResponse
       */
      Models::CreateSmsTemplateResponse createSmsTemplate(const Models::CreateSmsTemplateRequest &request);

      /**
       * @summary Creates a trademark entity. This operation is used when you need to upload trademark information when the signature source is set to trademark.
       *
       * @description The trademark must be searchable on the China Trademark Network of the Trademark Office of the China National Intellectual Property Administration, and the trademark owner must match the enterprise name.
       *
       * @param request CreateSmsTrademarkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSmsTrademarkResponse
       */
      Models::CreateSmsTrademarkResponse createSmsTrademarkWithOptions(const Models::CreateSmsTrademarkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a trademark entity. This operation is used when you need to upload trademark information when the signature source is set to trademark.
       *
       * @description The trademark must be searchable on the China Trademark Network of the Trademark Office of the China National Intellectual Property Administration, and the trademark owner must match the enterprise name.
       *
       * @param request CreateSmsTrademarkRequest
       * @return CreateSmsTrademarkResponse
       */
      Models::CreateSmsTrademarkResponse createSmsTrademark(const Models::CreateSmsTrademarkRequest &request);

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
       * @summary Deletes a short URL. After deletion, the short URL is no longer usable and cannot be resolved to the source URL.
       *
       * @description >Notice: 
       * Short Message Service does not currently support this API operation.
       * ### QPS limit
       * The QPS limit for a single user is 100. Calls that exceed this limit are subject to rate limiting, which may affect your business. To prevent disruptions, call this operation at a reasonable frequency.
       *
       * @param request DeleteShortUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteShortUrlResponse
       */
      Models::DeleteShortUrlResponse deleteShortUrlWithOptions(const Models::DeleteShortUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a short URL. After deletion, the short URL is no longer usable and cannot be resolved to the source URL.
       *
       * @description >Notice: 
       * Short Message Service does not currently support this API operation.
       * ### QPS limit
       * The QPS limit for a single user is 100. Calls that exceed this limit are subject to rate limiting, which may affect your business. To prevent disruptions, call this operation at a reasonable frequency.
       *
       * @param request DeleteShortUrlRequest
       * @return DeleteShortUrlResponse
       */
      Models::DeleteShortUrlResponse deleteShortUrl(const Models::DeleteShortUrlRequest &request);

      /**
       * @summary If you no longer use an SMS qualification or need to delete it for other reasons, call this API or delete the SMS qualification in the Short Message Service console.
       *
       * @description >Warning: Once a qualification is deleted, it cannot be restored or selected when you apply for signatures later. Proceed with caution.
       * - Qualifications under review cannot be modified or deleted. You can withdraw the application in the Short Message Service [console](https://dysms.console.aliyun.com/domestic/text/qualification) before performing the operation.
       * - Approved qualifications that have been bound to signatures cannot be deleted.
       * - Rejected qualifications can be directly resubmitted for review after you [modify the qualification information](~~UpdateSmsQualification~~).
       *
       * @param request DeleteSmsQualificationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSmsQualificationResponse
       */
      Models::DeleteSmsQualificationResponse deleteSmsQualificationWithOptions(const Models::DeleteSmsQualificationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary If you no longer use an SMS qualification or need to delete it for other reasons, call this API or delete the SMS qualification in the Short Message Service console.
       *
       * @description >Warning: Once a qualification is deleted, it cannot be restored or selected when you apply for signatures later. Proceed with caution.
       * - Qualifications under review cannot be modified or deleted. You can withdraw the application in the Short Message Service [console](https://dysms.console.aliyun.com/domestic/text/qualification) before performing the operation.
       * - Approved qualifications that have been bound to signatures cannot be deleted.
       * - Rejected qualifications can be directly resubmitted for review after you [modify the qualification information](~~UpdateSmsQualification~~).
       *
       * @param request DeleteSmsQualificationRequest
       * @return DeleteSmsQualificationResponse
       */
      Models::DeleteSmsQualificationResponse deleteSmsQualification(const Models::DeleteSmsQualificationRequest &request);

      /**
       * @summary If you no longer use an SMS signature and need to delete it, call this operation or delete the SMS signature in the SMS Service console.
       *
       * @description - You can delete signatures that are in the Withdrawn, Failed, or Approved state. You cannot delete signatures that are in the Pending Approval state.
       * - Deleted SMS signatures cannot be recovered, and the signature can no longer be used to send SMS messages. Proceed with caution.
       * - Signature deletion operations performed via the API are synchronized to the SMS Service console. For information about how to manage templates in the console, see [SMS signatures](https://help.aliyun.com/document_detail/108073.html).
       *
       * @param request DeleteSmsSignRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSmsSignResponse
       */
      Models::DeleteSmsSignResponse deleteSmsSignWithOptions(const Models::DeleteSmsSignRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary If you no longer use an SMS signature and need to delete it, call this operation or delete the SMS signature in the SMS Service console.
       *
       * @description - You can delete signatures that are in the Withdrawn, Failed, or Approved state. You cannot delete signatures that are in the Pending Approval state.
       * - Deleted SMS signatures cannot be recovered, and the signature can no longer be used to send SMS messages. Proceed with caution.
       * - Signature deletion operations performed via the API are synchronized to the SMS Service console. For information about how to manage templates in the console, see [SMS signatures](https://help.aliyun.com/document_detail/108073.html).
       *
       * @param request DeleteSmsSignRequest
       * @return DeleteSmsSignResponse
       */
      Models::DeleteSmsSignResponse deleteSmsSign(const Models::DeleteSmsSignRequest &request);

      /**
       * @summary Deletes an SMS template that you no longer need.
       *
       * @description - 支持删除已撤回、审核失败或审核通过的模板，审核中的短信模板不支持删除。
       * - 删除短信模板后不可恢复，且后续不可再使用该模板发送短信，请谨慎操作。
       * - 通过接口删除模板的操作会在短信服务控制台同步，在控制台对模板的相关操作，请参见[短信模板](https://help.aliyun.com/document_detail/108085.html)。
       * ### QPS限制
       * 本接口的单用户QPS限制为1000次/秒。超过限制，API调用会被限流，这可能会影响您的业务，请合理调用。
       *
       * @param request DeleteSmsTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSmsTemplateResponse
       */
      Models::DeleteSmsTemplateResponse deleteSmsTemplateWithOptions(const Models::DeleteSmsTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an SMS template that you no longer need.
       *
       * @description - 支持删除已撤回、审核失败或审核通过的模板，审核中的短信模板不支持删除。
       * - 删除短信模板后不可恢复，且后续不可再使用该模板发送短信，请谨慎操作。
       * - 通过接口删除模板的操作会在短信服务控制台同步，在控制台对模板的相关操作，请参见[短信模板](https://help.aliyun.com/document_detail/108085.html)。
       * ### QPS限制
       * 本接口的单用户QPS限制为1000次/秒。超过限制，API调用会被限流，这可能会影响您的业务，请合理调用。
       *
       * @param request DeleteSmsTemplateRequest
       * @return DeleteSmsTemplateResponse
       */
      Models::DeleteSmsTemplateResponse deleteSmsTemplate(const Models::DeleteSmsTemplateRequest &request);

      /**
       * @summary Queries the card SMS sending records and sending status of a single phone number.
       *
       * @param request GetCardSmsDetailsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCardSmsDetailsResponse
       */
      Models::GetCardSmsDetailsResponse getCardSmsDetailsWithOptions(const Models::GetCardSmsDetailsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the card SMS sending records and sending status of a single phone number.
       *
       * @param request GetCardSmsDetailsRequest
       * @return GetCardSmsDetailsResponse
       */
      Models::GetCardSmsDetailsResponse getCardSmsDetails(const Models::GetCardSmsDetailsRequest &request);

      /**
       * @summary Retrieves the short URL for a card message.
       *
       * @description - 目前卡片短信在内部邀约阶段，请联系您的阿里云商务经理申请开通或联系[阿里云售前咨询](https://help.aliyun.com/document_detail/464625.html?spm=a2c4g.11186623.0.0.213273d4Xe6UEu#section-81n-72q-ybm)。
       * ### QPS限制
       * - 本接口的单用户QPS限制为1000次/秒。超过限制，API调用会被限流，这可能会影响您的业务，请合理调用。
       *
       * @param request GetCardSmsLinkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCardSmsLinkResponse
       */
      Models::GetCardSmsLinkResponse getCardSmsLinkWithOptions(const Models::GetCardSmsLinkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the short URL for a card message.
       *
       * @description - 目前卡片短信在内部邀约阶段，请联系您的阿里云商务经理申请开通或联系[阿里云售前咨询](https://help.aliyun.com/document_detail/464625.html?spm=a2c4g.11186623.0.0.213273d4Xe6UEu#section-81n-72q-ybm)。
       * ### QPS限制
       * - 本接口的单用户QPS限制为1000次/秒。超过限制，API调用会被限流，这可能会影响您的业务，请合理调用。
       *
       * @param request GetCardSmsLinkRequest
       * @return GetCardSmsLinkResponse
       */
      Models::GetCardSmsLinkResponse getCardSmsLink(const Models::GetCardSmsLinkRequest &request);

      /**
       * @summary Converts images and videos uploaded to OSS storage for card SMS into resource data for unified management, and returns a resource ID. You can manage the returned resource ID as needed.
       *
       * @description ### QPS限制
       * 本接口的单用户QPS限制为300次/秒。超过限制，API调用会被限流，这可能会影响您的业务，请合理调用。
       *
       * @param request GetMediaResourceIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMediaResourceIdResponse
       */
      Models::GetMediaResourceIdResponse getMediaResourceIdWithOptions(const Models::GetMediaResourceIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Converts images and videos uploaded to OSS storage for card SMS into resource data for unified management, and returns a resource ID. You can manage the returned resource ID as needed.
       *
       * @description ### QPS限制
       * 本接口的单用户QPS限制为300次/秒。超过限制，API调用会被限流，这可能会影响您的业务，请合理调用。
       *
       * @param request GetMediaResourceIdRequest
       * @return GetMediaResourceIdResponse
       */
      Models::GetMediaResourceIdResponse getMediaResourceId(const Models::GetMediaResourceIdRequest &request);

      /**
       * @summary Retrieves the OSS resource configuration information for card messages. This information is used for subsequent OSS file upload operations.
       *
       * @description - 您在调用卡片短信相关API接口前，首先需要开通卡片短信功能，目前卡片短信在内部邀约阶段，请联系您的阿里云商务经理申请开通或联系[阿里云售前咨询](https://help.aliyun.com/document_detail/464625.html)。
       * - 卡片短信模板中使用的图片、视频等素材资源可上传到OSS文件系统保存。文件上传操作，请参见[OSS文件上传](https://help.aliyun.com/document_detail/437303.html)。
       * ### QPS限制
       * 本接口的单用户QPS限制为300次/秒。超过限制，API调用会被限流，这可能会影响您的业务，请合理调用。
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOSSInfoForCardTemplateResponse
       */
      Models::GetOSSInfoForCardTemplateResponse getOSSInfoForCardTemplateWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the OSS resource configuration information for card messages. This information is used for subsequent OSS file upload operations.
       *
       * @description - 您在调用卡片短信相关API接口前，首先需要开通卡片短信功能，目前卡片短信在内部邀约阶段，请联系您的阿里云商务经理申请开通或联系[阿里云售前咨询](https://help.aliyun.com/document_detail/464625.html)。
       * - 卡片短信模板中使用的图片、视频等素材资源可上传到OSS文件系统保存。文件上传操作，请参见[OSS文件上传](https://help.aliyun.com/document_detail/437303.html)。
       * ### QPS限制
       * 本接口的单用户QPS限制为300次/秒。超过限制，API调用会被限流，这可能会影响您的业务，请合理调用。
       *
       * @return GetOSSInfoForCardTemplateResponse
       */
      Models::GetOSSInfoForCardTemplateResponse getOSSInfoForCardTemplate();

      /**
       * @summary Obtains OSS resource configuration information, which will be used for subsequent OSS file upload operations.
       *
       * @description - When you create a signature or template, you can upload materials such as login pages with links, backend page screenshots, software copyrights, and supplementary agreements. These materials help reviewers understand the details of your business. If you have multiple materials, you can combine them into one file. The supported formats are png, jpg, jpeg, doc, docx, and pdf.
       * - Additional materials required for creating a signature or template can be uploaded to the OSS file system for storage. For information about file upload operations, see [Upload files to OSS](https://help.aliyun.com/document_detail/2833114.html).
       *
       * @param request GetOSSInfoForUploadFileRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetOSSInfoForUploadFileResponse
       */
      Models::GetOSSInfoForUploadFileResponse getOSSInfoForUploadFileWithOptions(const Models::GetOSSInfoForUploadFileRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains OSS resource configuration information, which will be used for subsequent OSS file upload operations.
       *
       * @description - When you create a signature or template, you can upload materials such as login pages with links, backend page screenshots, software copyrights, and supplementary agreements. These materials help reviewers understand the details of your business. If you have multiple materials, you can combine them into one file. The supported formats are png, jpg, jpeg, doc, docx, and pdf.
       * - Additional materials required for creating a signature or template can be uploaded to the OSS file system for storage. For information about file upload operations, see [Upload files to OSS](https://help.aliyun.com/document_detail/2833114.html).
       *
       * @param request GetOSSInfoForUploadFileRequest
       * @return GetOSSInfoForUploadFileResponse
       */
      Models::GetOSSInfoForUploadFileResponse getOSSInfoForUploadFile(const Models::GetOSSInfoForUploadFileRequest &request);

      /**
       * @summary Obtains the OSS resource configuration information for qualification materials. This configuration information will be used for subsequent uploads of qualification files such as authorization letters and enterprise certificates.
       *
       * @description - When you apply for a qualification or signature, if the purpose is for other use or involves a third party, you must provide an [authorization letter](https://help.aliyun.com/document_detail/56741.html).
       * - After you use this API to obtain the OSS resource configuration information, upload the related qualification materials through OSS. For more information, see [Upload files through OSS](https://help.aliyun.com/document_detail/2833114.html).
       * - The names of files to be uploaded cannot contain Chinese characters or special symbols.
       *
       * @param request GetQualificationOssInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetQualificationOssInfoResponse
       */
      Models::GetQualificationOssInfoResponse getQualificationOssInfoWithOptions(const Models::GetQualificationOssInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the OSS resource configuration information for qualification materials. This configuration information will be used for subsequent uploads of qualification files such as authorization letters and enterprise certificates.
       *
       * @description - When you apply for a qualification or signature, if the purpose is for other use or involves a third party, you must provide an [authorization letter](https://help.aliyun.com/document_detail/56741.html).
       * - After you use this API to obtain the OSS resource configuration information, upload the related qualification materials through OSS. For more information, see [Upload files through OSS](https://help.aliyun.com/document_detail/2833114.html).
       * - The names of files to be uploaded cannot contain Chinese characters or special symbols.
       *
       * @param request GetQualificationOssInfoRequest
       * @return GetQualificationOssInfoResponse
       */
      Models::GetQualificationOssInfoResponse getQualificationOssInfo(const Models::GetQualificationOssInfoRequest &request);

      /**
       * @summary 查询5g短信详情
       *
       * @param request GetRCSSignatureRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRCSSignatureResponse
       */
      Models::GetRCSSignatureResponse getRCSSignatureWithOptions(const Models::GetRCSSignatureRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询5g短信详情
       *
       * @param request GetRCSSignatureRequest
       * @return GetRCSSignatureResponse
       */
      Models::GetRCSSignatureResponse getRCSSignature(const Models::GetRCSSignatureRequest &request);

      /**
       * @summary Retrieves the OSS information for OCR.
       *
       * @param request GetSmsOcrOssInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSmsOcrOssInfoResponse
       */
      Models::GetSmsOcrOssInfoResponse getSmsOcrOssInfoWithOptions(const Models::GetSmsOcrOssInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the OSS information for OCR.
       *
       * @param request GetSmsOcrOssInfoRequest
       * @return GetSmsOcrOssInfoResponse
       */
      Models::GetSmsOcrOssInfoResponse getSmsOcrOssInfo(const Models::GetSmsOcrOssInfoRequest &request);

      /**
       * @summary Queries the review details of a signature after you apply for it.
       *
       * @description - 仅可查询**首次创建**的签名资料或者**最新审核通过**的资料。
       * - 新接口和原接口变更的公告详情请参见[关于短信服务更新签名&模板接口的公告](https://help.aliyun.com/document_detail/2806975.html)。
       * - 审核时间：一般情况下，签名提交后，阿里云预计在 2 个小时内审核完成（审核工作时间：周一至周日 9:00~21:00，法定节假日顺延）。
       * - 如果签名未通过审核，会返回审核失败的原因，请参考[短信审核失败的处理建议](https://help.aliyun.com/document_detail/65990.html)，调用[UpdateSmsSign](https://help.aliyun.com/document_detail/2807428.html)接口或在[签名管理](https://dysms.console.aliyun.com/domestic/text/sign)页面修改未审核通过的短信签名。
       * - [QuerySmsSignList](~~QuerySmsSignList~~)接口可以查询您账号下的所有签名，包括签名审核状态、签名类型、签名名称等。
       * - 本接口的单用户QPS限制为150次/秒。超过限制，API调用将会被限流，这可能会影响您的业务，请合理调用。
       *
       * @param request GetSmsSignRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSmsSignResponse
       */
      Models::GetSmsSignResponse getSmsSignWithOptions(const Models::GetSmsSignRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the review details of a signature after you apply for it.
       *
       * @description - 仅可查询**首次创建**的签名资料或者**最新审核通过**的资料。
       * - 新接口和原接口变更的公告详情请参见[关于短信服务更新签名&模板接口的公告](https://help.aliyun.com/document_detail/2806975.html)。
       * - 审核时间：一般情况下，签名提交后，阿里云预计在 2 个小时内审核完成（审核工作时间：周一至周日 9:00~21:00，法定节假日顺延）。
       * - 如果签名未通过审核，会返回审核失败的原因，请参考[短信审核失败的处理建议](https://help.aliyun.com/document_detail/65990.html)，调用[UpdateSmsSign](https://help.aliyun.com/document_detail/2807428.html)接口或在[签名管理](https://dysms.console.aliyun.com/domestic/text/sign)页面修改未审核通过的短信签名。
       * - [QuerySmsSignList](~~QuerySmsSignList~~)接口可以查询您账号下的所有签名，包括签名审核状态、签名类型、签名名称等。
       * - 本接口的单用户QPS限制为150次/秒。超过限制，API调用将会被限流，这可能会影响您的业务，请合理调用。
       *
       * @param request GetSmsSignRequest
       * @return GetSmsSignResponse
       */
      Models::GetSmsSignResponse getSmsSign(const Models::GetSmsSignRequest &request);

      /**
       * @summary Queries the approval details of a template after you submit a template application. You can view the approval status of the template.
       *
       * @description - 新接口和原接口变更的公告详情请参见[关于短信服务更新签名&模板接口的公告](https://help.aliyun.com/document_detail/2806975.html)。
       * - 审核时间：一般情况下，模板提交后，阿里云预计在2个小时内审核完成（审核工作时间：周一至周日9:00~21:00，法定节假日顺延）。
       * - 如果模板未通过审核，会返回审核失败的原因，请参考[短信审核失败的处理建议](https://help.aliyun.com/document_detail/65990.html)，调用[UpdateSmsTemplate](~~UpdateSmsTemplate~~)接口或在[模板管理](https://dysms.console.aliyun.com/domestic/text/template)页面修改短信模板。
       * - 当前接口是通过模板Code查询单个模板的审核详情。[QuerySmsTemplateList](https://help.aliyun.com/document_detail/419288.html)接口可以查询您当前账号下所有模板的模板详情。
       *
       * @param request GetSmsTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSmsTemplateResponse
       */
      Models::GetSmsTemplateResponse getSmsTemplateWithOptions(const Models::GetSmsTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the approval details of a template after you submit a template application. You can view the approval status of the template.
       *
       * @description - 新接口和原接口变更的公告详情请参见[关于短信服务更新签名&模板接口的公告](https://help.aliyun.com/document_detail/2806975.html)。
       * - 审核时间：一般情况下，模板提交后，阿里云预计在2个小时内审核完成（审核工作时间：周一至周日9:00~21:00，法定节假日顺延）。
       * - 如果模板未通过审核，会返回审核失败的原因，请参考[短信审核失败的处理建议](https://help.aliyun.com/document_detail/65990.html)，调用[UpdateSmsTemplate](~~UpdateSmsTemplate~~)接口或在[模板管理](https://dysms.console.aliyun.com/domestic/text/template)页面修改短信模板。
       * - 当前接口是通过模板Code查询单个模板的审核详情。[QuerySmsTemplateList](https://help.aliyun.com/document_detail/419288.html)接口可以查询您当前账号下所有模板的模板详情。
       *
       * @param request GetSmsTemplateRequest
       * @return GetSmsTemplateResponse
       */
      Models::GetSmsTemplateResponse getSmsTemplate(const Models::GetSmsTemplateRequest &request);

      /**
       * @summary 查询模板列表详情（新接口）
       *
       * @param tmpReq GetSmsTemplateListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSmsTemplateListResponse
       */
      Models::GetSmsTemplateListResponse getSmsTemplateListWithOptions(const Models::GetSmsTemplateListRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询模板列表详情（新接口）
       *
       * @param request GetSmsTemplateListRequest
       * @return GetSmsTemplateListResponse
       */
      Models::GetSmsTemplateListResponse getSmsTemplateList(const Models::GetSmsTemplateListRequest &request);

      /**
       * @summary Tags are markers that you add to templates. Each tag consists of a key-value pair (Key-Value). You can query the template codes bound to a tag key-value pair, or query all tags bound to a specific template.
       *
       * @description You can log on to the Short Message Service (SMS) console and go to the [Template Management](https://dysms.console.aliyun.com/domestic/text/template) page to filter SMS templates that are bound to tag key-value pairs, or click **Details** in the Actions column to view the tags that are bound to the current template.
       * ### QPS limit
       * The per-user QPS limit of this operation is 50 calls per second. If the limit is exceeded, API calls will be throttled, which may affect your business. Call this operation properly.
       *
       * @param request ListTagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Tags are markers that you add to templates. Each tag consists of a key-value pair (Key-Value). You can query the template codes bound to a tag key-value pair, or query all tags bound to a specific template.
       *
       * @description You can log on to the Short Message Service (SMS) console and go to the [Template Management](https://dysms.console.aliyun.com/domestic/text/template) page to filter SMS templates that are bound to tag key-value pairs, or click **Details** in the Actions column to view the tags that are bound to the current template.
       * ### QPS limit
       * The per-user QPS limit of this operation is 50 calls per second. If the limit is exceeded, API calls will be throttled, which may affect your business. Call this operation properly.
       *
       * @param request ListTagResourcesRequest
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResources(const Models::ListTagResourcesRequest &request);

      /**
       * @summary This operation is discontinued.
       *
       * @description - 根据工信部规定与运营商[相关要求](https://help.aliyun.com/document_detail/2806975.html)，阿里云进行了签名相关API的功能改造。为提升您签名的审核效率和审核通过率，请您使用新接口[UpdateSmsSign-修改短信签名](https://help.aliyun.com/document_detail/2807428.html)。
       * - 仅支持修改未通过审核的签名，请参考[短信审核失败的处理建议](https://help.aliyun.com/document_detail/65990.html)，调用此接口修改后自动提交审核，签名进入待审核状态。
       * - 通过接口修改签名的操作会在短信服务控制台同步，在控制台对签名的相关操作，请参见[短信签名](https://help.aliyun.com/document_detail/108073.html)。
       *
       * @param request ModifySmsSignRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySmsSignResponse
       */
      Models::ModifySmsSignResponse modifySmsSignWithOptions(const Models::ModifySmsSignRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This operation is discontinued.
       *
       * @description - 根据工信部规定与运营商[相关要求](https://help.aliyun.com/document_detail/2806975.html)，阿里云进行了签名相关API的功能改造。为提升您签名的审核效率和审核通过率，请您使用新接口[UpdateSmsSign-修改短信签名](https://help.aliyun.com/document_detail/2807428.html)。
       * - 仅支持修改未通过审核的签名，请参考[短信审核失败的处理建议](https://help.aliyun.com/document_detail/65990.html)，调用此接口修改后自动提交审核，签名进入待审核状态。
       * - 通过接口修改签名的操作会在短信服务控制台同步，在控制台对签名的相关操作，请参见[短信签名](https://help.aliyun.com/document_detail/108073.html)。
       *
       * @param request ModifySmsSignRequest
       * @return ModifySmsSignResponse
       */
      Models::ModifySmsSignResponse modifySmsSign(const Models::ModifySmsSignRequest &request);

      /**
       * @deprecated OpenAPI ModifySmsTemplate is deprecated, please use Dysmsapi::2017-05-25::UpdateSmsTemplate instead.
       *
       * @summary This operation is discontinued.
       *
       * @description - 根据工信部规定与运营商[相关要求](https://help.aliyun.com/document_detail/2806975.html)，阿里云进行了模板相关API的功能改造。为提升您模板的审核效率和审核通过率，请您使用新接口[UpdateSmsTemplate-修改短信模板](https://help.aliyun.com/document_detail/2807432.html)。
       * - 仅支持修改未通过审核的模板，请参考[短信审核失败的处理建议](https://help.aliyun.com/document_detail/65990.html)，调用此接口修改后重新提交审核。
       * - 通过接口修改模板的操作会在短信服务控制台同步，在控制台对模板的相关操作，请参见[短信模板](https://help.aliyun.com/document_detail/108085.html)。
       * ### QPS限制
       * 本接口的单用户QPS限制为1000次/秒。超过限制，API调用会被限流，这可能会影响您的业务，请合理调用。
       *
       * @param request ModifySmsTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifySmsTemplateResponse
       */
      Models::ModifySmsTemplateResponse modifySmsTemplateWithOptions(const Models::ModifySmsTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI ModifySmsTemplate is deprecated, please use Dysmsapi::2017-05-25::UpdateSmsTemplate instead.
       *
       * @summary This operation is discontinued.
       *
       * @description - 根据工信部规定与运营商[相关要求](https://help.aliyun.com/document_detail/2806975.html)，阿里云进行了模板相关API的功能改造。为提升您模板的审核效率和审核通过率，请您使用新接口[UpdateSmsTemplate-修改短信模板](https://help.aliyun.com/document_detail/2807432.html)。
       * - 仅支持修改未通过审核的模板，请参考[短信审核失败的处理建议](https://help.aliyun.com/document_detail/65990.html)，调用此接口修改后重新提交审核。
       * - 通过接口修改模板的操作会在短信服务控制台同步，在控制台对模板的相关操作，请参见[短信模板](https://help.aliyun.com/document_detail/108085.html)。
       * ### QPS限制
       * 本接口的单用户QPS限制为1000次/秒。超过限制，API调用会被限流，这可能会影响您的业务，请合理调用。
       *
       * @param request ModifySmsTemplateRequest
       * @return ModifySmsTemplateResponse
       */
      Models::ModifySmsTemplateResponse modifySmsTemplate(const Models::ModifySmsTemplateRequest &request);

      /**
       * @summary Queries the review status of a card SMS template and returns information about the review by mobile phone vendors.
       *
       * @description - Alibaba Cloud accounts that have not activated the card SMS service cannot call this API.
       * - The card SMS service is currently in the internal invitation phase. Contact your Alibaba Cloud business manager to apply for activation or [contact Alibaba Cloud pre-sales consultation](https://help.aliyun.com/document_detail/464625.html).
       * - You can also log on to the [Domestic Card SMS](https://dysms.console.aliyun.com/domestic/card) page in the console and query the review status of card SMS templates on the Template Management tab.
       * ### QPS limit
       * The per-user QPS limit for this operation is 300 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation responsibly.
       *
       * @param request QueryCardSmsTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryCardSmsTemplateResponse
       */
      Models::QueryCardSmsTemplateResponse queryCardSmsTemplateWithOptions(const Models::QueryCardSmsTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the review status of a card SMS template and returns information about the review by mobile phone vendors.
       *
       * @description - Alibaba Cloud accounts that have not activated the card SMS service cannot call this API.
       * - The card SMS service is currently in the internal invitation phase. Contact your Alibaba Cloud business manager to apply for activation or [contact Alibaba Cloud pre-sales consultation](https://help.aliyun.com/document_detail/464625.html).
       * - You can also log on to the [Domestic Card SMS](https://dysms.console.aliyun.com/domestic/card) page in the console and query the review status of card SMS templates on the Template Management tab.
       * ### QPS limit
       * The per-user QPS limit for this operation is 300 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation responsibly.
       *
       * @param request QueryCardSmsTemplateRequest
       * @return QueryCardSmsTemplateResponse
       */
      Models::QueryCardSmsTemplateResponse queryCardSmsTemplate(const Models::QueryCardSmsTemplateRequest &request);

      /**
       * @summary Queries the parsing data of a specified card SMS template. The parsing data includes the number of successful SMS parsing receipts, the number of message exposures, and the number of message clicks.
       *
       * @description ### QPS limit
       * The QPS limit on this operation is 300 calls per second per user. If the number of calls per second exceeds the limit, throttling is triggered. This may affect your business. Call this operation at a reasonable pace.
       *
       * @param request QueryCardSmsTemplateReportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryCardSmsTemplateReportResponse
       */
      Models::QueryCardSmsTemplateReportResponse queryCardSmsTemplateReportWithOptions(const Models::QueryCardSmsTemplateReportRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the parsing data of a specified card SMS template. The parsing data includes the number of successful SMS parsing receipts, the number of message exposures, and the number of message clicks.
       *
       * @description ### QPS limit
       * The QPS limit on this operation is 300 calls per second per user. If the number of calls per second exceeds the limit, throttling is triggered. This may affect your business. Call this operation at a reasonable pace.
       *
       * @param request QueryCardSmsTemplateReportRequest
       * @return QueryCardSmsTemplateReportResponse
       */
      Models::QueryCardSmsTemplateReportResponse queryCardSmsTemplateReport(const Models::QueryCardSmsTemplateReportRequest &request);

      /**
       * @summary Retrieves the details of a digital SMS signature by its name.
       *
       * @description You can query only the digital SMS signatures that belong to your Alibaba Cloud account.
       *
       * @param request QueryDigitalSignByNameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryDigitalSignByNameResponse
       */
      Models::QueryDigitalSignByNameResponse queryDigitalSignByNameWithOptions(const Models::QueryDigitalSignByNameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a digital SMS signature by its name.
       *
       * @description You can query only the digital SMS signatures that belong to your Alibaba Cloud account.
       *
       * @param request QueryDigitalSignByNameRequest
       * @return QueryDigitalSignByNameResponse
       */
      Models::QueryDigitalSignByNameResponse queryDigitalSignByName(const Models::QueryDigitalSignByNameRequest &request);

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
       * @summary Queries whether a phone number supports card SMS messages.
       *
       * @description - 未开通卡片短信业务的阿里云账号无法调用此API。
       * - 目前卡片短信在内部邀约阶段，请联系您的阿里云商务经理申请开通或[联系阿里云售前咨询](https://help.aliyun.com/document_detail/464625.html)。
       *
       * @param tmpReq QueryMobilesCardSupportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryMobilesCardSupportResponse
       */
      Models::QueryMobilesCardSupportResponse queryMobilesCardSupportWithOptions(const Models::QueryMobilesCardSupportRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries whether a phone number supports card SMS messages.
       *
       * @description - 未开通卡片短信业务的阿里云账号无法调用此API。
       * - 目前卡片短信在内部邀约阶段，请联系您的阿里云商务经理申请开通或[联系阿里云售前咨询](https://help.aliyun.com/document_detail/464625.html)。
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
       * @summary 批量查询终端5G适配情况
       *
       * @param request QueryRCSMobileCapableRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryRCSMobileCapableResponse
       */
      Models::QueryRCSMobileCapableResponse queryRCSMobileCapableWithOptions(const Models::QueryRCSMobileCapableRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量查询终端5G适配情况
       *
       * @param request QueryRCSMobileCapableRequest
       * @return QueryRCSMobileCapableResponse
       */
      Models::QueryRCSMobileCapableResponse queryRCSMobileCapable(const Models::QueryRCSMobileCapableRequest &request);

      /**
       * @summary 查询终端5G适配情况任务结果
       *
       * @param request QueryRCSMobileCapableTaskResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryRCSMobileCapableTaskResultResponse
       */
      Models::QueryRCSMobileCapableTaskResultResponse queryRCSMobileCapableTaskResultWithOptions(const Models::QueryRCSMobileCapableTaskResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询终端5G适配情况任务结果
       *
       * @param request QueryRCSMobileCapableTaskResultRequest
       * @return QueryRCSMobileCapableTaskResultResponse
       */
      Models::QueryRCSMobileCapableTaskResultResponse queryRCSMobileCapableTaskResult(const Models::QueryRCSMobileCapableTaskResultRequest &request);

      /**
       * @summary 查询5G模板详情
       *
       * @param request QueryRCSTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryRCSTemplateResponse
       */
      Models::QueryRCSTemplateResponse queryRCSTemplateWithOptions(const Models::QueryRCSTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询5G模板详情
       *
       * @param request QueryRCSTemplateRequest
       * @return QueryRCSTemplateResponse
       */
      Models::QueryRCSTemplateResponse queryRCSTemplate(const Models::QueryRCSTemplateRequest &request);

      /**
       * @summary 指定版本查看5G消息固定菜单详情
       *
       * @param request QueryRcsSignMenuByVersionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryRcsSignMenuByVersionResponse
       */
      Models::QueryRcsSignMenuByVersionResponse queryRcsSignMenuByVersionWithOptions(const Models::QueryRcsSignMenuByVersionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 指定版本查看5G消息固定菜单详情
       *
       * @param request QueryRcsSignMenuByVersionRequest
       * @return QueryRcsSignMenuByVersionResponse
       */
      Models::QueryRcsSignMenuByVersionResponse queryRcsSignMenuByVersion(const Models::QueryRcsSignMenuByVersionRequest &request);

      /**
       * @summary Queries the delivery records and status of SMS messages sent to a single phone number.
       *
       * @description - This operation queries the details of SMS messages sent to a specific phone number on a given date. You can also provide the `BizId` to query a specific delivery record.
       * - This operation queries delivery details for a single phone number at a time. To view delivery details in bulk, use the [QuerySendStatistics](https://help.aliyun.com/document_detail/419276.html) operation to query delivery statistics, or log in to the [Delivery Receipts](https://dysms.console.aliyun.com/record) page in the console.
       * ### QPS limit
       * The QPS limit for this operation is 5,000 requests per second per user. Calls that exceed this limit are throttled.
       *
       * @param request QuerySendDetailsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QuerySendDetailsResponse
       */
      Models::QuerySendDetailsResponse querySendDetailsWithOptions(const Models::QuerySendDetailsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the delivery records and status of SMS messages sent to a single phone number.
       *
       * @description - This operation queries the details of SMS messages sent to a specific phone number on a given date. You can also provide the `BizId` to query a specific delivery record.
       * - This operation queries delivery details for a single phone number at a time. To view delivery details in bulk, use the [QuerySendStatistics](https://help.aliyun.com/document_detail/419276.html) operation to query delivery statistics, or log in to the [Delivery Receipts](https://dysms.console.aliyun.com/record) page in the console.
       * ### QPS limit
       * The QPS limit for this operation is 5,000 requests per second per user. Calls that exceed this limit are throttled.
       *
       * @param request QuerySendDetailsRequest
       * @return QuerySendDetailsResponse
       */
      Models::QuerySendDetailsResponse querySendDetails(const Models::QuerySendDetailsRequest &request);

      /**
       * @summary Queries message delivery statistics, including send dates, the number of successfully sent messages, and the number of received delivery receipts.
       *
       * @description - If you query data over a long time range, the results are paginated. You can specify the page size and page number to navigate through the Delivery Logs.
       * - You can also view delivery details by logging in to the [Short Message Service console](https://dysms.console.aliyun.com/dysms.htm#/overview) and navigating to the **Business Statistics** > **Delivery Logs** page.
       *
       * @param request QuerySendStatisticsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QuerySendStatisticsResponse
       */
      Models::QuerySendStatisticsResponse querySendStatisticsWithOptions(const Models::QuerySendStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries message delivery statistics, including send dates, the number of successfully sent messages, and the number of received delivery receipts.
       *
       * @description - If you query data over a long time range, the results are paginated. You can specify the page size and page number to navigate through the Delivery Logs.
       * - You can also view delivery details by logging in to the [Short Message Service console](https://dysms.console.aliyun.com/dysms.htm#/overview) and navigating to the **Business Statistics** > **Delivery Logs** page.
       *
       * @param request QuerySendStatisticsRequest
       * @return QuerySendStatisticsResponse
       */
      Models::QuerySendStatisticsResponse querySendStatistics(const Models::QuerySendStatisticsRequest &request);

      /**
       * @summary Checks the status and availability of a short link.
       *
       * @description >Notice: 
       * This API is not currently supported by Short Message Service.
       * ### QPS limit
       * The QPS limit for this API is 20 queries per second per user. API calls that exceed this limit are rate-limited, which can impact your business. Plan your calls accordingly.
       *
       * @param request QueryShortUrlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryShortUrlResponse
       */
      Models::QueryShortUrlResponse queryShortUrlWithOptions(const Models::QueryShortUrlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks the status and availability of a short link.
       *
       * @description >Notice: 
       * This API is not currently supported by Short Message Service.
       * ### QPS limit
       * The QPS limit for this API is 20 queries per second per user. API calls that exceed this limit are rate-limited, which can impact your business. Plan your calls accordingly.
       *
       * @param request QueryShortUrlRequest
       * @return QueryShortUrlResponse
       */
      Models::QueryShortUrlResponse queryShortUrl(const Models::QueryShortUrlRequest &request);

      /**
       * @summary After you apply for SMS qualifications, you can call this operation to query the details of a single qualification.
       *
       * @description - This API queries the details of a single qualification (enterprise information, legal representative information, and administrator information).
       * - To query all qualification information under your current account, or to query review details, call the [QuerySmsQualificationRecord](~~QuerySmsQualificationRecord~~) operation.
       * - Affected by the SMS signature real-name registration requirements, the volume of qualification review tickets is growing rapidly, and the review time may be extended. Please be patient. The review is expected to be completed within 2 business days (review hours: Monday to Sunday 9:00-21:00, postponed for legal holidays). In special cases, the review time may be extended. Please be patient.
       *
       * @param request QuerySingleSmsQualificationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QuerySingleSmsQualificationResponse
       */
      Models::QuerySingleSmsQualificationResponse querySingleSmsQualificationWithOptions(const Models::QuerySingleSmsQualificationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary After you apply for SMS qualifications, you can call this operation to query the details of a single qualification.
       *
       * @description - This API queries the details of a single qualification (enterprise information, legal representative information, and administrator information).
       * - To query all qualification information under your current account, or to query review details, call the [QuerySmsQualificationRecord](~~QuerySmsQualificationRecord~~) operation.
       * - Affected by the SMS signature real-name registration requirements, the volume of qualification review tickets is growing rapidly, and the review time may be extended. Please be patient. The review is expected to be completed within 2 business days (review hours: Monday to Sunday 9:00-21:00, postponed for legal holidays). In special cases, the review time may be extended. Please be patient.
       *
       * @param request QuerySingleSmsQualificationRequest
       * @return QuerySingleSmsQualificationResponse
       */
      Models::QuerySingleSmsQualificationResponse querySingleSmsQualification(const Models::QuerySingleSmsQualificationRequest &request);

      /**
       * @summary Queries icp record details.
       *
       * @description Pass a list of icp record IDs to retrieve their details.
       * For example, call the QuerySmsSignList or GetSmsSign API to obtain the required icp record IDs.
       *
       * @param tmpReq QuerySmsAppIcpRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QuerySmsAppIcpRecordResponse
       */
      Models::QuerySmsAppIcpRecordResponse querySmsAppIcpRecordWithOptions(const Models::QuerySmsAppIcpRecordRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries icp record details.
       *
       * @description Pass a list of icp record IDs to retrieve their details.
       * For example, call the QuerySmsSignList or GetSmsSign API to obtain the required icp record IDs.
       *
       * @param request QuerySmsAppIcpRecordRequest
       * @return QuerySmsAppIcpRecordResponse
       */
      Models::QuerySmsAppIcpRecordResponse querySmsAppIcpRecord(const Models::QuerySmsAppIcpRecordRequest &request);

      /**
       * @summary Queries created letters of authorization. You can view the review status and authorized signature scope of the letters.
       *
       * @description - Supports full query or conditional query:
       *   - **Full query**: Queries the information of all letters of authorization under your current account. No parameters need to be passed. Full query is performed by default.
       *   - **Conditional query**: Supports queries by letter of authorization ID, signature name, and review status of the letter of authorization. Pass the parameters by which you want to filter.
       * - Review duration: Affected by the real-name registration requirements for SMS signatures, the volume of qualification review tickets is currently increasing rapidly, and the review duration may be extended. Please wait patiently. The review is expected to be completed within 2 working days. SMS signatures and templates are expected to be reviewed within 2 hours after submission. Reviews involving governments and enterprises are generally completed within 2 working days. If verification upgrades, a large number of review tasks, or non-working hours are encountered, the review duration may be extended. Please wait patiently. (Review working hours: Monday to Sunday, 9:00–21:00, postponed for statutory holidays.)
       *
       * @param tmpReq QuerySmsAuthorizationLetterRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QuerySmsAuthorizationLetterResponse
       */
      Models::QuerySmsAuthorizationLetterResponse querySmsAuthorizationLetterWithOptions(const Models::QuerySmsAuthorizationLetterRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries created letters of authorization. You can view the review status and authorized signature scope of the letters.
       *
       * @description - Supports full query or conditional query:
       *   - **Full query**: Queries the information of all letters of authorization under your current account. No parameters need to be passed. Full query is performed by default.
       *   - **Conditional query**: Supports queries by letter of authorization ID, signature name, and review status of the letter of authorization. Pass the parameters by which you want to filter.
       * - Review duration: Affected by the real-name registration requirements for SMS signatures, the volume of qualification review tickets is currently increasing rapidly, and the review duration may be extended. Please wait patiently. The review is expected to be completed within 2 working days. SMS signatures and templates are expected to be reviewed within 2 hours after submission. Reviews involving governments and enterprises are generally completed within 2 working days. If verification upgrades, a large number of review tasks, or non-working hours are encountered, the review duration may be extended. Please wait patiently. (Review working hours: Monday to Sunday, 9:00–21:00, postponed for statutory holidays.)
       *
       * @param request QuerySmsAuthorizationLetterRequest
       * @return QuerySmsAuthorizationLetterResponse
       */
      Models::QuerySmsAuthorizationLetterResponse querySmsAuthorizationLetter(const Models::QuerySmsAuthorizationLetterRequest &request);

      /**
       * @summary Queries a list of SMS qualifications and their review details after you submit qualification applications. This operation supports filtered query.
       *
       * @description - 支持全量查询或条件查询：
       *   - **全量查询**：查询您当前帐户下所有短信资质，无需传参。默认全量查询。
       *   - **条件查询**：支持根据资质名称、企业名称、法人姓名、审核状态、审核工单ID、资质用途进行查询，传入您希望筛选的参数即可。
       * - 本接口用于查询资质及其审核信息，如果需要查询单个资质的具体信息（企业信息、法人信息、管理员信息），请调用[查询单个资质详情](~~QuerySingleSmsQualification~~)接口。
       * - 受短信签名实名制报备要求影响，当前资质审核工单量增长快速，审核时间可能会延长，请耐心等待，预计2个工作日内完成（审核工作时间：周一至周日 9:00~21:00，法定节假日顺延）。特殊情况可能延长审核时间，请耐心等待。
       * - 如果资质未通过审核，审核备注`AuditRemark`会返回审核失败的原因，请参考[审核失败的处理建议](~~2384377#a96cc318b94x1~~)，调用[修改短信资质](~~UpdateSmsQualification~~)接口或在控制台[资质管理](https://dysms.console.aliyun.com/domestic/text/qualification)页面修改资质信息后，重新发起审核。
       *
       * @param request QuerySmsQualificationRecordRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QuerySmsQualificationRecordResponse
       */
      Models::QuerySmsQualificationRecordResponse querySmsQualificationRecordWithOptions(const Models::QuerySmsQualificationRecordRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of SMS qualifications and their review details after you submit qualification applications. This operation supports filtered query.
       *
       * @description - 支持全量查询或条件查询：
       *   - **全量查询**：查询您当前帐户下所有短信资质，无需传参。默认全量查询。
       *   - **条件查询**：支持根据资质名称、企业名称、法人姓名、审核状态、审核工单ID、资质用途进行查询，传入您希望筛选的参数即可。
       * - 本接口用于查询资质及其审核信息，如果需要查询单个资质的具体信息（企业信息、法人信息、管理员信息），请调用[查询单个资质详情](~~QuerySingleSmsQualification~~)接口。
       * - 受短信签名实名制报备要求影响，当前资质审核工单量增长快速，审核时间可能会延长，请耐心等待，预计2个工作日内完成（审核工作时间：周一至周日 9:00~21:00，法定节假日顺延）。特殊情况可能延长审核时间，请耐心等待。
       * - 如果资质未通过审核，审核备注`AuditRemark`会返回审核失败的原因，请参考[审核失败的处理建议](~~2384377#a96cc318b94x1~~)，调用[修改短信资质](~~UpdateSmsQualification~~)接口或在控制台[资质管理](https://dysms.console.aliyun.com/domestic/text/qualification)页面修改资质信息后，重新发起审核。
       *
       * @param request QuerySmsQualificationRecordRequest
       * @return QuerySmsQualificationRecordResponse
       */
      Models::QuerySmsQualificationRecordResponse querySmsQualificationRecord(const Models::QuerySmsQualificationRecordRequest &request);

      /**
       * @summary Queries the review status of an SMS signature.
       *
       * @description - To comply with regulations from the Ministry of Industry and Information Technology (MIIT) and [related requirements](https://help.aliyun.com/document_detail/2806975.html) from carriers, Alibaba Cloud has upgraded its SMS signature management APIs. We recommend using the new [GetSmsSign - Query Signature Details](https://help.aliyun.com/document_detail/2807429.html) API, which returns more detailed information about signatures than this API.
       * - We typically review signatures within two hours of submission. The review service is available from 9:00 to 21:00, Monday to Sunday. Reviews may be delayed during public holidays. We recommend submitting your application before 18:00 for a timely review.
       * - If a signature is rejected, the response includes the review reason. For troubleshooting information, see [Troubleshooting Signature Review Failures](https://help.aliyun.com/document_detail/65990.html). You can then call the [ModifySmsTemplate](https://help.aliyun.com/document_detail/419287.html) API or modify the SMS signature on the [Signature Management](https://dysms.console.aliyun.com/domestic/text) page.
       * - This API queries the review details for a single signature by name. To query all signatures in your account, call the [QuerySmsSignList](https://help.aliyun.com/document_detail/419288.html) API.
       *
       * @param request QuerySmsSignRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QuerySmsSignResponse
       */
      Models::QuerySmsSignResponse querySmsSignWithOptions(const Models::QuerySmsSignRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the review status of an SMS signature.
       *
       * @description - To comply with regulations from the Ministry of Industry and Information Technology (MIIT) and [related requirements](https://help.aliyun.com/document_detail/2806975.html) from carriers, Alibaba Cloud has upgraded its SMS signature management APIs. We recommend using the new [GetSmsSign - Query Signature Details](https://help.aliyun.com/document_detail/2807429.html) API, which returns more detailed information about signatures than this API.
       * - We typically review signatures within two hours of submission. The review service is available from 9:00 to 21:00, Monday to Sunday. Reviews may be delayed during public holidays. We recommend submitting your application before 18:00 for a timely review.
       * - If a signature is rejected, the response includes the review reason. For troubleshooting information, see [Troubleshooting Signature Review Failures](https://help.aliyun.com/document_detail/65990.html). You can then call the [ModifySmsTemplate](https://help.aliyun.com/document_detail/419287.html) API or modify the SMS signature on the [Signature Management](https://dysms.console.aliyun.com/domestic/text) page.
       * - This API queries the review details for a single signature by name. To query all signatures in your account, call the [QuerySmsSignList](https://help.aliyun.com/document_detail/419288.html) API.
       *
       * @param request QuerySmsSignRequest
       * @return QuerySmsSignResponse
       */
      Models::QuerySmsSignResponse querySmsSign(const Models::QuerySmsSignRequest &request);

      /**
       * @summary You can call this operation to query all signatures under your account, including signature audit status, signature type, and signature name.
       *
       * @description This operation queries the signature information that was **first created** or the **most recently approved** signature details under your current account. If you need to query more information such as application scenario content or files uploaded during application, you can call the [GetSmsSign](~~GetSmsSign~~) operation to query the audit details of a single signature by signature name.
       *
       * @param request QuerySmsSignListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QuerySmsSignListResponse
       */
      Models::QuerySmsSignListResponse querySmsSignListWithOptions(const Models::QuerySmsSignListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call this operation to query all signatures under your account, including signature audit status, signature type, and signature name.
       *
       * @description This operation queries the signature information that was **first created** or the **most recently approved** signature details under your current account. If you need to query more information such as application scenario content or files uploaded during application, you can call the [GetSmsSign](~~GetSmsSign~~) operation to query the audit details of a single signature by signature name.
       *
       * @param request QuerySmsSignListRequest
       * @return QuerySmsSignListResponse
       */
      Models::QuerySmsSignListResponse querySmsSignList(const Models::QuerySmsSignListRequest &request);

      /**
       * @deprecated OpenAPI QuerySmsTemplate is deprecated, please use Dysmsapi::2017-05-25::GetSmsTemplate instead.
       *
       * @summary This API has been deprecated.
       *
       * @description - Alibaba Cloud has updated its template-related APIs to comply with regulatory and [carrier requirements](https://help.aliyun.com/document_detail/2806975.html). We recommend that you use the new [GetSmsTemplate - Query template review details](https://help.aliyun.com/document_detail/2807433.html) API. The new API returns more detailed template information in its response.
       * - Review timeline: After you submit a template, Alibaba Cloud typically completes the review within two hours. Review hours are 9:00 to 21:00 (UTC+8) from Monday to Sunday. Reviews are postponed during public holidays. We recommend that you submit your templates before 18:00 (UTC+8).
       * - If a template fails review, the response includes the reason for the rejection. For more information, see [Suggestions for handling a failed review](https://help.aliyun.com/document_detail/65990.html). You can then call the [ModifySmsTemplate](https://help.aliyun.com/document_detail/419287.html) API or modify the template on the [Template Management](https://dysms.console.aliyun.com/domestic/text/template) page.
       * - QuerySmsTemplate queries the review details of a single template by its template code. To query the details of all templates in your account, call the [QuerySmsTemplateList](https://help.aliyun.com/document_detail/419288.html) API.
       *
       * @param request QuerySmsTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QuerySmsTemplateResponse
       */
      Models::QuerySmsTemplateResponse querySmsTemplateWithOptions(const Models::QuerySmsTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI QuerySmsTemplate is deprecated, please use Dysmsapi::2017-05-25::GetSmsTemplate instead.
       *
       * @summary This API has been deprecated.
       *
       * @description - Alibaba Cloud has updated its template-related APIs to comply with regulatory and [carrier requirements](https://help.aliyun.com/document_detail/2806975.html). We recommend that you use the new [GetSmsTemplate - Query template review details](https://help.aliyun.com/document_detail/2807433.html) API. The new API returns more detailed template information in its response.
       * - Review timeline: After you submit a template, Alibaba Cloud typically completes the review within two hours. Review hours are 9:00 to 21:00 (UTC+8) from Monday to Sunday. Reviews are postponed during public holidays. We recommend that you submit your templates before 18:00 (UTC+8).
       * - If a template fails review, the response includes the reason for the rejection. For more information, see [Suggestions for handling a failed review](https://help.aliyun.com/document_detail/65990.html). You can then call the [ModifySmsTemplate](https://help.aliyun.com/document_detail/419287.html) API or modify the template on the [Template Management](https://dysms.console.aliyun.com/domestic/text/template) page.
       * - QuerySmsTemplate queries the review details of a single template by its template code. To query the details of all templates in your account, call the [QuerySmsTemplateList](https://help.aliyun.com/document_detail/419288.html) API.
       *
       * @param request QuerySmsTemplateRequest
       * @return QuerySmsTemplateResponse
       */
      Models::QuerySmsTemplateResponse querySmsTemplate(const Models::QuerySmsTemplateRequest &request);

      /**
       * @summary You can call this operation to query all templates under your account. This way, you can view template details, including the template approval status, template type, and template content.
       *
       * @description - This operation queries the template details of all templates under your current account. To query more details such as the template variable content and the file information uploaded during application, you can call the [GetSmsTemplate](~~GetSmsTemplate~~) operation to query the approval details of a single template by template code.
       * - You can also log on to the Short Message Service (SMS) console and view the template details of all templates under your current account on the [Template Management](https://dysms.console.aliyun.com/domestic/text/template) page.
       *
       * @param request QuerySmsTemplateListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QuerySmsTemplateListResponse
       */
      Models::QuerySmsTemplateListResponse querySmsTemplateListWithOptions(const Models::QuerySmsTemplateListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call this operation to query all templates under your account. This way, you can view template details, including the template approval status, template type, and template content.
       *
       * @description - This operation queries the template details of all templates under your current account. To query more details such as the template variable content and the file information uploaded during application, you can call the [GetSmsTemplate](~~GetSmsTemplate~~) operation to query the approval details of a single template by template code.
       * - You can also log on to the Short Message Service (SMS) console and view the template details of all templates under your current account on the [Template Management](https://dysms.console.aliyun.com/domestic/text/template) page.
       *
       * @param request QuerySmsTemplateListRequest
       * @return QuerySmsTemplateListResponse
       */
      Models::QuerySmsTemplateListResponse querySmsTemplateList(const Models::QuerySmsTemplateListRequest &request);

      /**
       * @summary Queries the details of one or more trademarks.
       *
       * @description This operation retrieves the details of trademarks by using a list of trademark IDs.
       * For example, you can obtain trademark IDs by calling signature query operations such as `QuerySmsSignList` or `GetSmsSign`. You can then use this operation to retrieve the details of each trademark.
       *
       * @param tmpReq QuerySmsTrademarkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QuerySmsTrademarkResponse
       */
      Models::QuerySmsTrademarkResponse querySmsTrademarkWithOptions(const Models::QuerySmsTrademarkRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of one or more trademarks.
       *
       * @description This operation retrieves the details of trademarks by using a list of trademark IDs.
       * For example, you can obtain trademark IDs by calling signature query operations such as `QuerySmsSignList` or `GetSmsSign`. You can then use this operation to retrieve the details of each trademark.
       *
       * @param request QuerySmsTrademarkRequest
       * @return QuerySmsTrademarkResponse
       */
      Models::QuerySmsTrademarkResponse querySmsTrademark(const Models::QuerySmsTrademarkRequest &request);

      /**
       * @summary When applying for SMS qualification, the administrator\\"s phone number must be verified. Use this operation to obtain an SMS verification code.
       *
       * @description - After you receive the phone verification code, pass it to the `CertifyCode` parameter of the [SubmitSmsQualification](~~SubmitSmsQualification~~) or [UpdateSmsQualification](~~UpdateSmsQualification~~) operation.
       * - You can call the [ValidPhoneCode](~~ValidPhoneCode~~) operation to verify whether the SMS verification code is correct.
       * - This operation is subject to [throttling](~~44335#section-0wh-xn6-0t7~~). Do not call it too frequently. For the same phone number, a maximum of 1 message per minute, 5 messages per hour, and 10 messages per day are supported.
       *
       * @param request RequiredPhoneCodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RequiredPhoneCodeResponse
       */
      Models::RequiredPhoneCodeResponse requiredPhoneCodeWithOptions(const Models::RequiredPhoneCodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary When applying for SMS qualification, the administrator\\"s phone number must be verified. Use this operation to obtain an SMS verification code.
       *
       * @description - After you receive the phone verification code, pass it to the `CertifyCode` parameter of the [SubmitSmsQualification](~~SubmitSmsQualification~~) or [UpdateSmsQualification](~~UpdateSmsQualification~~) operation.
       * - You can call the [ValidPhoneCode](~~ValidPhoneCode~~) operation to verify whether the SMS verification code is correct.
       * - This operation is subject to [throttling](~~44335#section-0wh-xn6-0t7~~). Do not call it too frequently. For the same phone number, a maximum of 1 message per minute, 5 messages per hour, and 10 messages per day are supported.
       *
       * @param request RequiredPhoneCodeRequest
       * @return RequiredPhoneCodeResponse
       */
      Models::RequiredPhoneCodeResponse requiredPhoneCode(const Models::RequiredPhoneCodeRequest &request);

      /**
       * @summary Sends card SMS messages in batches.
       *
       * @description - Sending card SMS messages is a billable operation. You are not charged if a card SMS message fails to be sent or rendered. For more information, see [Multimedia SMS pricing](https://help.aliyun.com/document_detail/437951.html).
       * - The card SMS feature is currently in the internal invitation phase. Contact your Alibaba Cloud business manager to apply for activation, or contact [Alibaba Cloud pre-sales consulting](https://help.aliyun.com/document_detail/464625.html?spm=a2c4g.11186623.0.0.213219fcSn2Ykj#section-81n-72q-ybm).
       * - We recommend that you set the timeout period for card SMS messages to a value greater than or equal to 3 seconds. If a timeout failure occurs, we recommend that you check the delivery status before deciding whether to retry. We also recommend that you do not enable SDK retry logic when calling this operation; otherwise, multiple sending attempts may occur. For more information about timeout and retry settings, see [Timeout mechanism](https://help.aliyun.com/document_detail/262079.html) and [Retry mechanism](https://help.aliyun.com/document_detail/262080.html).
       * - Domestic SMS, international SMS, and multimedia SMS do not currently support idempotency. Implement idempotency control to prevent duplicate operations caused by multiple retries.
       * - Before you send a card SMS message, you must add and obtain approval for a card SMS template. When this operation is called to send an SMS message, the system checks whether the phone number supports card SMS messages. If the phone number does not support card SMS messages, you can configure whether to accept fallback to digital SMS or text SMS in the operation to improve the delivery rate.
       * - When you send card SMS messages in batches, each phone number can use a different signature and a different fallback. In a single request, you can send card SMS messages to a maximum of 100 phone numbers.
       * ### QPS limit
       * The QPS limit per user for this operation is 1,000 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation in a reasonable manner.
       *
       * @param request SendBatchCardSmsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SendBatchCardSmsResponse
       */
      Models::SendBatchCardSmsResponse sendBatchCardSmsWithOptions(const Models::SendBatchCardSmsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sends card SMS messages in batches.
       *
       * @description - Sending card SMS messages is a billable operation. You are not charged if a card SMS message fails to be sent or rendered. For more information, see [Multimedia SMS pricing](https://help.aliyun.com/document_detail/437951.html).
       * - The card SMS feature is currently in the internal invitation phase. Contact your Alibaba Cloud business manager to apply for activation, or contact [Alibaba Cloud pre-sales consulting](https://help.aliyun.com/document_detail/464625.html?spm=a2c4g.11186623.0.0.213219fcSn2Ykj#section-81n-72q-ybm).
       * - We recommend that you set the timeout period for card SMS messages to a value greater than or equal to 3 seconds. If a timeout failure occurs, we recommend that you check the delivery status before deciding whether to retry. We also recommend that you do not enable SDK retry logic when calling this operation; otherwise, multiple sending attempts may occur. For more information about timeout and retry settings, see [Timeout mechanism](https://help.aliyun.com/document_detail/262079.html) and [Retry mechanism](https://help.aliyun.com/document_detail/262080.html).
       * - Domestic SMS, international SMS, and multimedia SMS do not currently support idempotency. Implement idempotency control to prevent duplicate operations caused by multiple retries.
       * - Before you send a card SMS message, you must add and obtain approval for a card SMS template. When this operation is called to send an SMS message, the system checks whether the phone number supports card SMS messages. If the phone number does not support card SMS messages, you can configure whether to accept fallback to digital SMS or text SMS in the operation to improve the delivery rate.
       * - When you send card SMS messages in batches, each phone number can use a different signature and a different fallback. In a single request, you can send card SMS messages to a maximum of 100 phone numbers.
       * ### QPS limit
       * The QPS limit per user for this operation is 1,000 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation in a reasonable manner.
       *
       * @param request SendBatchCardSmsRequest
       * @return SendBatchCardSmsResponse
       */
      Models::SendBatchCardSmsResponse sendBatchCardSms(const Models::SendBatchCardSmsRequest &request);

      /**
       * @summary This operation sends messages to different phone numbers using a single template, with different signatures and template variables for each recipient.
       *
       * @description ### Basic information
       * - You can send messages to a maximum of 100 phone numbers in a single call.
       * - The global [endpoint](https://help.aliyun.com/document_detail/419270.html) is `dysmsapi.aliyuncs.com`. For a list of region-specific endpoints, see [Endpoints](https://help.aliyun.com/document_detail/419270.html).
       * ### API calls
       * - We recommend calling this operation using an SDK. For more information, see [Make your first API call](https://help.aliyun.com/document_detail/2841024.html).
       * - To send messages from the console, see [Send group messages](https://help.aliyun.com/document_detail/108266.html).
       * - To build your own API requests, see [V3 request body and signature mechanism](https://help.aliyun.com/document_detail/2593177.html).
       * ### Usage notes
       * - For domestic SMS, we recommend setting the timeout period to 1 second or longer. If a timeout occurs, check the delivery receipt status before you retry the request. For more information about timeout and retry settings, see [timeout mechanism](https://help.aliyun.com/document_detail/262079.html) and [retry mechanism](https://help.aliyun.com/document_detail/262080.html).
       * - This operation does not support idempotence for domestic SMS, international SMS, or Multimedia Messaging Service (MMS) messages. You must implement your own idempotence controls to prevent duplicate operations caused by multiple retries.
       * - This is a billable operation. For domestic SMS, you are charged based on the delivery receipt status from the carrier. You are not charged for messages that are successfully submitted but fail carrier delivery. For more information, see [Billing overview](https://help.aliyun.com/document_detail/44340.html).
       *   >Warning: 
       *   Batch message delivery may be delayed due to system capacity limits. For time-sensitive messages, such as verification codes or alert notifications, use the SendSms operation to send messages individually.
       *   
       * ### QPS limit
       * The Queries Per Second (QPS) limit for a single user is 5,000. Calls that exceed this limit are throttled. Plan your usage accordingly.
       *
       * @param request SendBatchSmsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SendBatchSmsResponse
       */
      Models::SendBatchSmsResponse sendBatchSmsWithOptions(const Models::SendBatchSmsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This operation sends messages to different phone numbers using a single template, with different signatures and template variables for each recipient.
       *
       * @description ### Basic information
       * - You can send messages to a maximum of 100 phone numbers in a single call.
       * - The global [endpoint](https://help.aliyun.com/document_detail/419270.html) is `dysmsapi.aliyuncs.com`. For a list of region-specific endpoints, see [Endpoints](https://help.aliyun.com/document_detail/419270.html).
       * ### API calls
       * - We recommend calling this operation using an SDK. For more information, see [Make your first API call](https://help.aliyun.com/document_detail/2841024.html).
       * - To send messages from the console, see [Send group messages](https://help.aliyun.com/document_detail/108266.html).
       * - To build your own API requests, see [V3 request body and signature mechanism](https://help.aliyun.com/document_detail/2593177.html).
       * ### Usage notes
       * - For domestic SMS, we recommend setting the timeout period to 1 second or longer. If a timeout occurs, check the delivery receipt status before you retry the request. For more information about timeout and retry settings, see [timeout mechanism](https://help.aliyun.com/document_detail/262079.html) and [retry mechanism](https://help.aliyun.com/document_detail/262080.html).
       * - This operation does not support idempotence for domestic SMS, international SMS, or Multimedia Messaging Service (MMS) messages. You must implement your own idempotence controls to prevent duplicate operations caused by multiple retries.
       * - This is a billable operation. For domestic SMS, you are charged based on the delivery receipt status from the carrier. You are not charged for messages that are successfully submitted but fail carrier delivery. For more information, see [Billing overview](https://help.aliyun.com/document_detail/44340.html).
       *   >Warning: 
       *   Batch message delivery may be delayed due to system capacity limits. For time-sensitive messages, such as verification codes or alert notifications, use the SendSms operation to send messages individually.
       *   
       * ### QPS limit
       * The Queries Per Second (QPS) limit for a single user is 5,000. Calls that exceed this limit are throttled. Plan your usage accordingly.
       *
       * @param request SendBatchSmsRequest
       * @return SendBatchSmsResponse
       */
      Models::SendBatchSmsResponse sendBatchSms(const Models::SendBatchSmsRequest &request);

      /**
       * @summary Sends a card message.
       *
       * @description - 发送卡片短信为计费接口，卡片短信发送失败或渲染失败时不计费，详情请参见[多媒体短信定价](https://help.aliyun.com/document_detail/437951.html)。
       * - 目前卡片短信在内部邀约阶段，请联系您的阿里云商务经理申请开通或联系[阿里云售前咨询](https://help.aliyun.com/document_detail/464625.html?spm=a2c4g.11186623.0.0.213219fcSn2Ykj#section-81n-72q-ybm)。
       * - 卡片短信超时时间建议设置为≥3S；发生超时失败的情况时，建议查看回执状态后再判断是否重试。同时建议您在调用此接口时，不要开启SDK重试逻辑，否则可能会造成多次发送的情况。超时和重试的相关设置，请参见[超时机制](https://help.aliyun.com/document_detail/262079.html)、[重试机制](https://help.aliyun.com/document_detail/262080.html)。
       * - 国内短信、国际短信及多媒体短信目前均不支持幂等的能力，请您做好幂等控制，防止因多次重试而导致的重复操作问题。
       * - 发送卡片短信前需添加卡片短信模板且模板审核通过。本接口在发送短信时，会校验号码是否支持卡片短信。如果该手机号不支持发送卡片短信，可在接口中设置是否接受数字短信和文本短信的回落，提升发送的触达率。
       * ### QPS限制
       * 本接口的单用户QPS限制为1000次/秒。超过限制，API调用会被限流，这可能会影响您的业务，请合理调用。
       *
       * @param request SendCardSmsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SendCardSmsResponse
       */
      Models::SendCardSmsResponse sendCardSmsWithOptions(const Models::SendCardSmsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sends a card message.
       *
       * @description - 发送卡片短信为计费接口，卡片短信发送失败或渲染失败时不计费，详情请参见[多媒体短信定价](https://help.aliyun.com/document_detail/437951.html)。
       * - 目前卡片短信在内部邀约阶段，请联系您的阿里云商务经理申请开通或联系[阿里云售前咨询](https://help.aliyun.com/document_detail/464625.html?spm=a2c4g.11186623.0.0.213219fcSn2Ykj#section-81n-72q-ybm)。
       * - 卡片短信超时时间建议设置为≥3S；发生超时失败的情况时，建议查看回执状态后再判断是否重试。同时建议您在调用此接口时，不要开启SDK重试逻辑，否则可能会造成多次发送的情况。超时和重试的相关设置，请参见[超时机制](https://help.aliyun.com/document_detail/262079.html)、[重试机制](https://help.aliyun.com/document_detail/262080.html)。
       * - 国内短信、国际短信及多媒体短信目前均不支持幂等的能力，请您做好幂等控制，防止因多次重试而导致的重复操作问题。
       * - 发送卡片短信前需添加卡片短信模板且模板审核通过。本接口在发送短信时，会校验号码是否支持卡片短信。如果该手机号不支持发送卡片短信，可在接口中设置是否接受数字短信和文本短信的回落，提升发送的触达率。
       * ### QPS限制
       * 本接口的单用户QPS限制为1000次/秒。超过限制，API调用会被限流，这可能会影响您的业务，请合理调用。
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
       * @summary 5G消息首次下行
       *
       * @param request SendRCSRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SendRCSResponse
       */
      Models::SendRCSResponse sendRCSWithOptions(const Models::SendRCSRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 5G消息首次下行
       *
       * @param request SendRCSRequest
       * @return SendRCSResponse
       */
      Models::SendRCSResponse sendRCS(const Models::SendRCSRequest &request);

      /**
       * @summary 5G消息交互下行
       *
       * @param request SendRCSReplyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SendRCSReplyResponse
       */
      Models::SendRCSReplyResponse sendRCSReplyWithOptions(const Models::SendRCSReplyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 5G消息交互下行
       *
       * @param request SendRCSReplyRequest
       * @return SendRCSReplyResponse
       */
      Models::SendRCSReplyResponse sendRCSReply(const Models::SendRCSReplyRequest &request);

      /**
       * @summary Sends an SMS message to one or more specified mobile numbers.
       *
       * @description Use this API to send an SMS message to a single mobile number. This API also supports sending messages with the same signature and template variables to multiple mobile numbers, up to 1,000 per request. Note that bulk sending may experience some latency. If you need to send messages with different signatures or template variables to multiple recipients, use the [SendBatchSms](https://help.aliyun.com/document_detail/419274.html) API, which supports up to 100 mobile numbers per request.
       * ### Usage notes
       * - For SMS messages sent to the Chinese mainland, we recommend setting the timeout period to 1 second or longer. If a timeout occurs, check the delivery receipt status before retrying the request. For more information about timeout and retry settings, see [Timeout mechanism](https://help.aliyun.com/document_detail/262079.html) and [Retry mechanism](https://help.aliyun.com/document_detail/262080.html).
       * - This API does not support idempotence for domestic, international, or multimedia SMS messages. You must implement your own idempotence controls to prevent sending duplicate messages during retries.
       * - This is a billable API. For messages sent to the Chinese mainland, billing is based on the delivery receipt status from the carrier. You are not charged if the API call is successful but the carrier fails to deliver the message. For more information, see [Billing](https://help.aliyun.com/document_detail/44340.html).
       * ### QPS limit
       * This API has a queries per second (QPS) limit of 5,000 for each user. The system throttles calls that exceed this limit. To avoid throttling, use this API within the specified limit.
       *
       * @param request SendSmsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SendSmsResponse
       */
      Models::SendSmsResponse sendSmsWithOptions(const Models::SendSmsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sends an SMS message to one or more specified mobile numbers.
       *
       * @description Use this API to send an SMS message to a single mobile number. This API also supports sending messages with the same signature and template variables to multiple mobile numbers, up to 1,000 per request. Note that bulk sending may experience some latency. If you need to send messages with different signatures or template variables to multiple recipients, use the [SendBatchSms](https://help.aliyun.com/document_detail/419274.html) API, which supports up to 100 mobile numbers per request.
       * ### Usage notes
       * - For SMS messages sent to the Chinese mainland, we recommend setting the timeout period to 1 second or longer. If a timeout occurs, check the delivery receipt status before retrying the request. For more information about timeout and retry settings, see [Timeout mechanism](https://help.aliyun.com/document_detail/262079.html) and [Retry mechanism](https://help.aliyun.com/document_detail/262080.html).
       * - This API does not support idempotence for domestic, international, or multimedia SMS messages. You must implement your own idempotence controls to prevent sending duplicate messages during retries.
       * - This is a billable API. For messages sent to the Chinese mainland, billing is based on the delivery receipt status from the carrier. You are not charged if the API call is successful but the carrier fails to deliver the message. For more information, see [Billing](https://help.aliyun.com/document_detail/44340.html).
       * ### QPS limit
       * This API has a queries per second (QPS) limit of 5,000 for each user. The system throttles calls that exceed this limit. To avoid throttling, use this API within the specified limit.
       *
       * @param request SendSmsRequest
       * @return SendSmsResponse
       */
      Models::SendSmsResponse sendSms(const Models::SendSmsRequest &request);

      /**
       * @summary Feeds back the SMS delivery status corresponding to each message ID (MessageId) to the Alibaba Cloud International SMS platform.
       *
       * @description Metric definitions:
       * - OTP send volume: the number of verification codes sent.
       * - OTP conversion volume: the number of verification codes converted (the number of times a user successfully obtained a verification code and reported it back).
       * Conversion rate = OTP conversion volume / OTP send volume.
       * > The conversion rate feedback feature has a certain level of intrusiveness on the business system. To prevent jitter in conversion rate API calls from affecting business logic, please consider the following:  - Call the API in asynchronous mode (for example, using a queue or event-driven approach).  - Add a degradable solution to protect business logic (for example, manual degradation, or automatic degradation using a circuit breaker).
       *
       * @param request SmsConversionIntlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SmsConversionIntlResponse
       */
      Models::SmsConversionIntlResponse smsConversionIntlWithOptions(const Models::SmsConversionIntlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Feeds back the SMS delivery status corresponding to each message ID (MessageId) to the Alibaba Cloud International SMS platform.
       *
       * @description Metric definitions:
       * - OTP send volume: the number of verification codes sent.
       * - OTP conversion volume: the number of verification codes converted (the number of times a user successfully obtained a verification code and reported it back).
       * Conversion rate = OTP conversion volume / OTP send volume.
       * > The conversion rate feedback feature has a certain level of intrusiveness on the business system. To prevent jitter in conversion rate API calls from affecting business logic, please consider the following:  - Call the API in asynchronous mode (for example, using a queue or event-driven approach).  - Add a degradable solution to protect business logic (for example, manual degradation, or automatic degradation using a circuit breaker).
       *
       * @param request SmsConversionIntlRequest
       * @return SmsConversionIntlResponse
       */
      Models::SmsConversionIntlResponse smsConversionIntl(const Models::SmsConversionIntlRequest &request);

      /**
       * @summary Submits an SMS qualification application. As required by the Ministry of Industry and Information Technology (MIIT) and carriers for real-name SMS sending, domestic SMS services require qualification credential information of the signature owner. Apply for an SMS qualification first, and then apply for signatures and templates.
       *
       * @description - Before submitting an application, read [Qualification material description](https://help.aliyun.com/document_detail/2384377.html) and prepare the required qualification materials.
       * - Currently, only users who have completed **verify your identity - Enterprise account** can use the API to apply for SMS qualifications. If your Alibaba Cloud account has completed verify your identity - Individual account, apply for qualifications through the Short Message Service [console](https://dysms.console.aliyun.com/domestic/text/qualification/add), or [upgrade to verify your identity - Enterprise account](https://help.aliyun.com/document_detail/37178.html). [View my account verification type](https://myaccount.console.aliyun.com/cert-info)
       * - Batch qualification applications are not supported. Wait at least 5 seconds between applications.
       *
       * @param tmpReq SubmitSmsQualificationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitSmsQualificationResponse
       */
      Models::SubmitSmsQualificationResponse submitSmsQualificationWithOptions(const Models::SubmitSmsQualificationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits an SMS qualification application. As required by the Ministry of Industry and Information Technology (MIIT) and carriers for real-name SMS sending, domestic SMS services require qualification credential information of the signature owner. Apply for an SMS qualification first, and then apply for signatures and templates.
       *
       * @description - Before submitting an application, read [Qualification material description](https://help.aliyun.com/document_detail/2384377.html) and prepare the required qualification materials.
       * - Currently, only users who have completed **verify your identity - Enterprise account** can use the API to apply for SMS qualifications. If your Alibaba Cloud account has completed verify your identity - Individual account, apply for qualifications through the Short Message Service [console](https://dysms.console.aliyun.com/domestic/text/qualification/add), or [upgrade to verify your identity - Enterprise account](https://help.aliyun.com/document_detail/37178.html). [View my account verification type](https://myaccount.console.aliyun.com/cert-info)
       * - Batch qualification applications are not supported. Wait at least 5 seconds between applications.
       *
       * @param request SubmitSmsQualificationRequest
       * @return SubmitSmsQualificationResponse
       */
      Models::SubmitSmsQualificationResponse submitSmsQualification(const Models::SubmitSmsQualificationRequest &request);

      /**
       * @summary Tags can mark resources, allowing enterprises or individuals to classify templates of the same type for easier search and resource aggregation. Call this operation to bind tags to SMS templates.
       *
       * @description - Each template can be bound to up to 20 tags.
       * - The tag key (Key) must be unique within the same template. If a template has two tags with the same Key but different Values, the new value overwrites the old value.
       * - This feature is only available for domestic text messages of Short Message Service on the China site.
       * ### QPS limit
       * The per-user QPS limit of this operation is 50 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation at a reasonable frequency.
       *
       * @param request TagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Tags can mark resources, allowing enterprises or individuals to classify templates of the same type for easier search and resource aggregation. Call this operation to bind tags to SMS templates.
       *
       * @description - Each template can be bound to up to 20 tags.
       * - The tag key (Key) must be unique within the same template. If a template has two tags with the same Key but different Values, the new value overwrites the old value.
       * - This feature is only available for domestic text messages of Short Message Service on the China site.
       * ### QPS limit
       * The per-user QPS limit of this operation is 50 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation at a reasonable frequency.
       *
       * @param request TagResourcesRequest
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

      /**
       * @summary Tags can mark resources, allowing enterprises or individuals to categorize templates of the same type for easier search and resource aggregation. If a template is no longer applicable to its currently bound tags, you can unbind the tags from the template. You can delete a single tag or delete tags in batches.
       *
       * @description ### QPS limit
       * The QPS limit per user for this operation is 50 calls per second. If the limit is exceeded, API calls will be throttled, which may affect your business. Please call the operation reasonably.
       *
       * @param request UntagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResourcesWithOptions(const Models::UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Tags can mark resources, allowing enterprises or individuals to categorize templates of the same type for easier search and resource aggregation. If a template is no longer applicable to its currently bound tags, you can unbind the tags from the template. You can delete a single tag or delete tags in batches.
       *
       * @description ### QPS limit
       * The QPS limit per user for this operation is 50 calls per second. If the limit is exceeded, API calls will be throttled, which may affect your business. Please call the operation reasonably.
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
       * @summary 编辑5g签名
       *
       * @param request UpdateRCSSignatureRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateRCSSignatureResponse
       */
      Models::UpdateRCSSignatureResponse updateRCSSignatureWithOptions(const Models::UpdateRCSSignatureRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 编辑5g签名
       *
       * @param request UpdateRCSSignatureRequest
       * @return UpdateRCSSignatureResponse
       */
      Models::UpdateRCSSignatureResponse updateRCSSignature(const Models::UpdateRCSSignatureRequest &request);

      /**
       * @summary If you need to update SMS qualification information, you can submit a modification request through this API. After submission, it will re-enter the review process.
       *
       * @description - Qualifications under review do not support modification. Please wait for the review process to finish, or [withdraw the application](https://dysms.console.aliyun.com/domestic/text/qualification) in the SMS Service console before making modifications.
       * - The modified SMS qualification **must be re-reviewed** (including qualifications that have already passed review). Please upload materials that meet the specifications according to the [Qualification Material Description](https://help.aliyun.com/document_detail/2384377.html).
       * - **Modification is not supported** for the qualification name, application purpose, or unified social credit code.
       * - Batch modification of SMS qualifications is not supported. It is recommended to leave at least 5 seconds between modifications.
       *
       * @param tmpReq UpdateSmsQualificationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSmsQualificationResponse
       */
      Models::UpdateSmsQualificationResponse updateSmsQualificationWithOptions(const Models::UpdateSmsQualificationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary If you need to update SMS qualification information, you can submit a modification request through this API. After submission, it will re-enter the review process.
       *
       * @description - Qualifications under review do not support modification. Please wait for the review process to finish, or [withdraw the application](https://dysms.console.aliyun.com/domestic/text/qualification) in the SMS Service console before making modifications.
       * - The modified SMS qualification **must be re-reviewed** (including qualifications that have already passed review). Please upload materials that meet the specifications according to the [Qualification Material Description](https://help.aliyun.com/document_detail/2384377.html).
       * - **Modification is not supported** for the qualification name, application purpose, or unified social credit code.
       * - Batch modification of SMS qualifications is not supported. It is recommended to leave at least 5 seconds between modifications.
       *
       * @param request UpdateSmsQualificationRequest
       * @return UpdateSmsQualificationResponse
       */
      Models::UpdateSmsQualificationResponse updateSmsQualification(const Models::UpdateSmsQualificationRequest &request);

      /**
       * @summary You can modify rejected or approved signatures. A modified signature is automatically submitted for review, and its status changes to pending review.
       *
       * @description - For details about the updates to the signature and template APIs, see [Announcement on Updating Signature & Template APIs for Short Message Service](https://help.aliyun.com/document_detail/2806975.html).
       * - You can modify signatures that are either **rejected** or **approved**. For guidance on handling review failures, see [Handling signature review failures](https://help.aliyun.com/document_detail/65990.html). Call this API to modify and resubmit the signature for review.
       * - You cannot use this API to edit the name of a **rejected** signature. To edit the name, go to the [Short Message Service console](https://dysms.console.aliyun.com/domestic/text/sign).
       * - Signatures you request using this API are synchronized with the Short Message Service console. For information on managing signatures in the console, see [Signatures](https://help.aliyun.com/document_detail/108073.html).
       *
       * @param tmpReq UpdateSmsSignRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSmsSignResponse
       */
      Models::UpdateSmsSignResponse updateSmsSignWithOptions(const Models::UpdateSmsSignRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can modify rejected or approved signatures. A modified signature is automatically submitted for review, and its status changes to pending review.
       *
       * @description - For details about the updates to the signature and template APIs, see [Announcement on Updating Signature & Template APIs for Short Message Service](https://help.aliyun.com/document_detail/2806975.html).
       * - You can modify signatures that are either **rejected** or **approved**. For guidance on handling review failures, see [Handling signature review failures](https://help.aliyun.com/document_detail/65990.html). Call this API to modify and resubmit the signature for review.
       * - You cannot use this API to edit the name of a **rejected** signature. To edit the name, go to the [Short Message Service console](https://dysms.console.aliyun.com/domestic/text/sign).
       * - Signatures you request using this API are synchronized with the Short Message Service console. For information on managing signatures in the console, see [Signatures](https://help.aliyun.com/document_detail/108073.html).
       *
       * @param request UpdateSmsSignRequest
       * @return UpdateSmsSignResponse
       */
      Models::UpdateSmsSignResponse updateSmsSign(const Models::UpdateSmsSignRequest &request);

      /**
       * @summary This API modifies a template that failed review and automatically resubmits it.
       *
       * @description - For details about the changes to the signature and template APIs, see [Announcement on Updating Signature & Template APIs for Short Message Service](https://help.aliyun.com/document_detail/2806975.html).
       * - You can only modify templates that have failed review. For troubleshooting, see [Suggestions for handling failed SMS template reviews](https://help.aliyun.com/document_detail/65990.html). After modifying a template with this API, you must resubmit it for review.
       * - Template changes made using this API are synchronized with the Short Message Service console. To learn more about managing templates in the console, see [SMS templates](https://help.aliyun.com/document_detail/108085.html).
       * ### QPS limit
       * The QPS limit for this API is 1,000 queries per second per user. If you exceed this limit, your API calls will be throttled. This can affect your business, so please use the API responsibly.
       *
       * @param tmpReq UpdateSmsTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateSmsTemplateResponse
       */
      Models::UpdateSmsTemplateResponse updateSmsTemplateWithOptions(const Models::UpdateSmsTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This API modifies a template that failed review and automatically resubmits it.
       *
       * @description - For details about the changes to the signature and template APIs, see [Announcement on Updating Signature & Template APIs for Short Message Service](https://help.aliyun.com/document_detail/2806975.html).
       * - You can only modify templates that have failed review. For troubleshooting, see [Suggestions for handling failed SMS template reviews](https://help.aliyun.com/document_detail/65990.html). After modifying a template with this API, you must resubmit it for review.
       * - Template changes made using this API are synchronized with the Short Message Service console. To learn more about managing templates in the console, see [SMS templates](https://help.aliyun.com/document_detail/108085.html).
       * ### QPS limit
       * The QPS limit for this API is 1,000 queries per second per user. If you exceed this limit, your API calls will be throttled. This can affect your business, so please use the API responsibly.
       *
       * @param request UpdateSmsTemplateRequest
       * @return UpdateSmsTemplateResponse
       */
      Models::UpdateSmsTemplateResponse updateSmsTemplate(const Models::UpdateSmsTemplateRequest &request);

      /**
       * @summary 升级文本短信为5g签名
       *
       * @param request UpgradeToRCSSignatureRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpgradeToRCSSignatureResponse
       */
      Models::UpgradeToRCSSignatureResponse upgradeToRCSSignatureWithOptions(const Models::UpgradeToRCSSignatureRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 升级文本短信为5g签名
       *
       * @param request UpgradeToRCSSignatureRequest
       * @return UpgradeToRCSSignatureResponse
       */
      Models::UpgradeToRCSSignatureResponse upgradeToRCSSignature(const Models::UpgradeToRCSSignatureRequest &request);

      /**
       * @summary When applying for SMS qualification, the administrator\\"s phone number must be verified. This operation verifies the phone number and the received verification code.
       *
       * @description - Call the [RequiredPhoneCode](~~RequiredPhoneCode~~) operation first. Alibaba Cloud sends an SMS verification code to the phone number that you provided.
       * - This operation does not affect the SMS qualification application process and is used only to verify the SMS verification code. When you submit the actual application, pass the verification code into the `CertifyCode` parameter of the [SubmitSmsQualification](~~SubmitSmsQualification~~) operation.
       *
       * @param request ValidPhoneCodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ValidPhoneCodeResponse
       */
      Models::ValidPhoneCodeResponse validPhoneCodeWithOptions(const Models::ValidPhoneCodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary When applying for SMS qualification, the administrator\\"s phone number must be verified. This operation verifies the phone number and the received verification code.
       *
       * @description - Call the [RequiredPhoneCode](~~RequiredPhoneCode~~) operation first. Alibaba Cloud sends an SMS verification code to the phone number that you provided.
       * - This operation does not affect the SMS qualification application process and is used only to verify the SMS verification code. When you submit the actual application, pass the verification code into the `CertifyCode` parameter of the [SubmitSmsQualification](~~SubmitSmsQualification~~) operation.
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
