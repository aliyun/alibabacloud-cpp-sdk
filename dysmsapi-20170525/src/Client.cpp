#include <darabonba/Core.hpp>
#include <alibabacloud/Dysmsapi20170525.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
using namespace AlibabaCloud::Dysmsapi20170525::Models;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{

AlibabaCloud::Dysmsapi20170525::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "central";
  this->_endpointMap = json({
    {"ap-southeast-1" , "dysmsapi.ap-southeast-1.aliyuncs.com"},
    {"ap-southeast-5" , "dysmsapi.ap-southeast-5.aliyuncs.com"},
    {"cn-beijing" , "dysmsapi-proxy.cn-beijing.aliyuncs.com"},
    {"cn-hongkong" , "dysmsapi-xman.cn-hongkong.aliyuncs.com"},
    {"eu-central-1" , "dysmsapi.eu-central-1.aliyuncs.com"},
    {"us-east-1" , "dysmsapi.us-east-1.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("dysmsapi", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
}


string Client::getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint) {
  if (!Darabonba::isNull(endpoint)) {
    return endpoint;
  }

  if (!Darabonba::isNull(endpointMap) && !Darabonba::isNull(endpointMap.at(regionId))) {
    return endpointMap.at(regionId);
  }

  return Utils::Utils::getEndpointRules(productId, regionId, endpointRule, network, suffix);
}

/**
 * @summary 添加验证码签名信息
 *
 * @param request AddExtCodeSignRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddExtCodeSignResponse
 */
AddExtCodeSignResponse Client::addExtCodeSignWithOptions(const AddExtCodeSignRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasExtCode()) {
    query["ExtCode"] = request.extCode();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSignName()) {
    query["SignName"] = request.signName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddExtCodeSign"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddExtCodeSignResponse>();
}

/**
 * @summary 添加验证码签名信息
 *
 * @param request AddExtCodeSignRequest
 * @return AddExtCodeSignResponse
 */
AddExtCodeSignResponse Client::addExtCodeSign(const AddExtCodeSignRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addExtCodeSignWithOptions(request, runtime);
}

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
AddShortUrlResponse Client::addShortUrlWithOptions(const AddShortUrlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  json body = {};
  if (!!request.hasEffectiveDays()) {
    body["EffectiveDays"] = request.effectiveDays();
  }

  if (!!request.hasShortUrlName()) {
    body["ShortUrlName"] = request.shortUrlName();
  }

  if (!!request.hasSourceUrl()) {
    body["SourceUrl"] = request.sourceUrl();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "AddShortUrl"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddShortUrlResponse>();
}

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
AddShortUrlResponse Client::addShortUrl(const AddShortUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addShortUrlWithOptions(request, runtime);
}

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
AddSmsSignResponse Client::addSmsSignWithOptions(const AddSmsSignRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.remark();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSignName()) {
    query["SignName"] = request.signName();
  }

  if (!!request.hasSignSource()) {
    query["SignSource"] = request.signSource();
  }

  if (!!request.hasSignType()) {
    query["SignType"] = request.signType();
  }

  json body = {};
  if (!!request.hasSignFileList()) {
    body["SignFileList"] = request.signFileList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "AddSmsSign"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddSmsSignResponse>();
}

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
AddSmsSignResponse Client::addSmsSign(const AddSmsSignRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addSmsSignWithOptions(request, runtime);
}

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
AddSmsTemplateResponse Client::addSmsTemplateWithOptions(const AddSmsTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.remark();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTemplateContent()) {
    query["TemplateContent"] = request.templateContent();
  }

  if (!!request.hasTemplateName()) {
    query["TemplateName"] = request.templateName();
  }

  if (!!request.hasTemplateType()) {
    query["TemplateType"] = request.templateType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddSmsTemplate"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddSmsTemplateResponse>();
}

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
AddSmsTemplateResponse Client::addSmsTemplate(const AddSmsTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addSmsTemplateWithOptions(request, runtime);
}

/**
 * @summary 更换签名的资质和授权书
 *
 * @param request ChangeSignatureQualificationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChangeSignatureQualificationResponse
 */
ChangeSignatureQualificationResponse Client::changeSignatureQualificationWithOptions(const ChangeSignatureQualificationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthorizationLetterId()) {
    query["AuthorizationLetterId"] = request.authorizationLetterId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasQualificationId()) {
    query["QualificationId"] = request.qualificationId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSignatureName()) {
    query["SignatureName"] = request.signatureName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ChangeSignatureQualification"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ChangeSignatureQualificationResponse>();
}

/**
 * @summary 更换签名的资质和授权书
 *
 * @param request ChangeSignatureQualificationRequest
 * @return ChangeSignatureQualificationResponse
 */
ChangeSignatureQualificationResponse Client::changeSignatureQualification(const ChangeSignatureQualificationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return changeSignatureQualificationWithOptions(request, runtime);
}

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
CheckMobilesCardSupportResponse Client::checkMobilesCardSupportWithOptions(const CheckMobilesCardSupportRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMobiles()) {
    query["Mobiles"] = request.mobiles();
  }

  if (!!request.hasTemplateCode()) {
    query["TemplateCode"] = request.templateCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CheckMobilesCardSupport"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CheckMobilesCardSupportResponse>();
}

/**
 * @summary Checks whether a mobile phone number can receive card messages.
 *
 * @description ### QPS limit
 * You can call this operation up to 2,000 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request CheckMobilesCardSupportRequest
 * @return CheckMobilesCardSupportResponse
 */
CheckMobilesCardSupportResponse Client::checkMobilesCardSupport(const CheckMobilesCardSupportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkMobilesCardSupportWithOptions(request, runtime);
}

/**
 * @summary Sends conversion rate information to Alibaba Cloud SMS.
 *
 * @param request ConversionDataIntlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ConversionDataIntlResponse
 */
ConversionDataIntlResponse Client::conversionDataIntlWithOptions(const ConversionDataIntlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConversionRate()) {
    query["ConversionRate"] = request.conversionRate();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasReportTime()) {
    query["ReportTime"] = request.reportTime();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ConversionDataIntl"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ConversionDataIntlResponse>();
}

/**
 * @summary Sends conversion rate information to Alibaba Cloud SMS.
 *
 * @param request ConversionDataIntlRequest
 * @return ConversionDataIntlResponse
 */
ConversionDataIntlResponse Client::conversionDataIntl(const ConversionDataIntlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return conversionDataIntlWithOptions(request, runtime);
}

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
CreateCardSmsTemplateResponse Client::createCardSmsTemplateWithOptions(const CreateCardSmsTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateCardSmsTemplateShrinkRequest request = CreateCardSmsTemplateShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTemplate()) {
    request.setTemplateShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq._template(), "Template", "json"));
  }

  json query = {};
  if (!!request.hasFactorys()) {
    query["Factorys"] = request.factorys();
  }

  if (!!request.hasMemo()) {
    query["Memo"] = request.memo();
  }

  if (!!request.hasTemplateShrink()) {
    query["Template"] = request.templateShrink();
  }

  if (!!request.hasTemplateName()) {
    query["TemplateName"] = request.templateName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateCardSmsTemplate"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCardSmsTemplateResponse>();
}

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
CreateCardSmsTemplateResponse Client::createCardSmsTemplate(const CreateCardSmsTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCardSmsTemplateWithOptions(request, runtime);
}

/**
 * @summary 创建短链
 *
 * @param request CreateSmartShortUrlRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSmartShortUrlResponse
 */
CreateSmartShortUrlResponse Client::createSmartShortUrlWithOptions(const CreateSmartShortUrlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOutId()) {
    query["OutId"] = request.outId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPhoneNumbers()) {
    query["PhoneNumbers"] = request.phoneNumbers();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSourceUrl()) {
    query["SourceUrl"] = request.sourceUrl();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateSmartShortUrl"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSmartShortUrlResponse>();
}

/**
 * @summary 创建短链
 *
 * @param request CreateSmartShortUrlRequest
 * @return CreateSmartShortUrlResponse
 */
CreateSmartShortUrlResponse Client::createSmartShortUrl(const CreateSmartShortUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSmartShortUrlWithOptions(request, runtime);
}

/**
 * @summary 创建委托授权书
 *
 * @param tmpReq CreateSmsAuthorizationLetterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSmsAuthorizationLetterResponse
 */
CreateSmsAuthorizationLetterResponse Client::createSmsAuthorizationLetterWithOptions(const CreateSmsAuthorizationLetterRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateSmsAuthorizationLetterShrinkRequest request = CreateSmsAuthorizationLetterShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSignList()) {
    request.setSignListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.signList(), "SignList", "json"));
  }

  json query = {};
  if (!!request.hasAuthorization()) {
    query["Authorization"] = request.authorization();
  }

  if (!!request.hasAuthorizationLetterExpDate()) {
    query["AuthorizationLetterExpDate"] = request.authorizationLetterExpDate();
  }

  if (!!request.hasAuthorizationLetterName()) {
    query["AuthorizationLetterName"] = request.authorizationLetterName();
  }

  if (!!request.hasAuthorizationLetterPic()) {
    query["AuthorizationLetterPic"] = request.authorizationLetterPic();
  }

  if (!!request.hasOrganizationCode()) {
    query["OrganizationCode"] = request.organizationCode();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasProxyAuthorization()) {
    query["ProxyAuthorization"] = request.proxyAuthorization();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSignListShrink()) {
    query["SignList"] = request.signListShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateSmsAuthorizationLetter"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSmsAuthorizationLetterResponse>();
}

/**
 * @summary 创建委托授权书
 *
 * @param request CreateSmsAuthorizationLetterRequest
 * @return CreateSmsAuthorizationLetterResponse
 */
CreateSmsAuthorizationLetterResponse Client::createSmsAuthorizationLetter(const CreateSmsAuthorizationLetterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSmsAuthorizationLetterWithOptions(request, runtime);
}

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
CreateSmsSignResponse Client::createSmsSignWithOptions(const CreateSmsSignRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateSmsSignShrinkRequest request = CreateSmsSignShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasMoreData()) {
    request.setMoreDataShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.moreData(), "MoreData", "json"));
  }

  json query = {};
  if (!!request.hasApplySceneContent()) {
    query["ApplySceneContent"] = request.applySceneContent();
  }

  if (!!request.hasAuthorizationLetterId()) {
    query["AuthorizationLetterId"] = request.authorizationLetterId();
  }

  if (!!request.hasMoreDataShrink()) {
    query["MoreData"] = request.moreDataShrink();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasQualificationId()) {
    query["QualificationId"] = request.qualificationId();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.remark();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSignName()) {
    query["SignName"] = request.signName();
  }

  if (!!request.hasSignSource()) {
    query["SignSource"] = request.signSource();
  }

  if (!!request.hasSignType()) {
    query["SignType"] = request.signType();
  }

  if (!!request.hasThirdParty()) {
    query["ThirdParty"] = request.thirdParty();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateSmsSign"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSmsSignResponse>();
}

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
CreateSmsSignResponse Client::createSmsSign(const CreateSmsSignRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSmsSignWithOptions(request, runtime);
}

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
CreateSmsTemplateResponse Client::createSmsTemplateWithOptions(const CreateSmsTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateSmsTemplateShrinkRequest request = CreateSmsTemplateShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasMoreData()) {
    request.setMoreDataShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.moreData(), "MoreData", "json"));
  }

  json query = {};
  if (!!request.hasApplySceneContent()) {
    query["ApplySceneContent"] = request.applySceneContent();
  }

  if (!!request.hasIntlType()) {
    query["IntlType"] = request.intlType();
  }

  if (!!request.hasMoreDataShrink()) {
    query["MoreData"] = request.moreDataShrink();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRelatedSignName()) {
    query["RelatedSignName"] = request.relatedSignName();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.remark();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTemplateContent()) {
    query["TemplateContent"] = request.templateContent();
  }

  if (!!request.hasTemplateName()) {
    query["TemplateName"] = request.templateName();
  }

  if (!!request.hasTemplateRule()) {
    query["TemplateRule"] = request.templateRule();
  }

  if (!!request.hasTemplateType()) {
    query["TemplateType"] = request.templateType();
  }

  if (!!request.hasTrafficDriving()) {
    query["TrafficDriving"] = request.trafficDriving();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateSmsTemplate"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSmsTemplateResponse>();
}

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
CreateSmsTemplateResponse Client::createSmsTemplate(const CreateSmsTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSmsTemplateWithOptions(request, runtime);
}

/**
 * @summary 删除验证码签名
 *
 * @param request DeleteExtCodeSignRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteExtCodeSignResponse
 */
DeleteExtCodeSignResponse Client::deleteExtCodeSignWithOptions(const DeleteExtCodeSignRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasExtCode()) {
    query["ExtCode"] = request.extCode();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSignName()) {
    query["SignName"] = request.signName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteExtCodeSign"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteExtCodeSignResponse>();
}

/**
 * @summary 删除验证码签名
 *
 * @param request DeleteExtCodeSignRequest
 * @return DeleteExtCodeSignResponse
 */
DeleteExtCodeSignResponse Client::deleteExtCodeSign(const DeleteExtCodeSignRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteExtCodeSignWithOptions(request, runtime);
}

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
DeleteShortUrlResponse Client::deleteShortUrlWithOptions(const DeleteShortUrlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  json body = {};
  if (!!request.hasSourceUrl()) {
    body["SourceUrl"] = request.sourceUrl();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "DeleteShortUrl"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteShortUrlResponse>();
}

/**
 * @summary Deletes a short URL. After you delete a short URL, it cannot be changed to its original state.
 *
 * @description ### QPS limits
 * You can call this operation up to 100 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DeleteShortUrlRequest
 * @return DeleteShortUrlResponse
 */
DeleteShortUrlResponse Client::deleteShortUrl(const DeleteShortUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteShortUrlWithOptions(request, runtime);
}

/**
 * @summary 删除资质对客openAPI
 *
 * @param request DeleteSmsQualificationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteSmsQualificationResponse
 */
DeleteSmsQualificationResponse Client::deleteSmsQualificationWithOptions(const DeleteSmsQualificationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOrderId()) {
    query["OrderId"] = request.orderId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasQualificationGroupId()) {
    query["QualificationGroupId"] = request.qualificationGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteSmsQualification"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSmsQualificationResponse>();
}

/**
 * @summary 删除资质对客openAPI
 *
 * @param request DeleteSmsQualificationRequest
 * @return DeleteSmsQualificationResponse
 */
DeleteSmsQualificationResponse Client::deleteSmsQualification(const DeleteSmsQualificationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSmsQualificationWithOptions(request, runtime);
}

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
DeleteSmsSignResponse Client::deleteSmsSignWithOptions(const DeleteSmsSignRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSignName()) {
    query["SignName"] = request.signName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteSmsSign"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSmsSignResponse>();
}

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
DeleteSmsSignResponse Client::deleteSmsSign(const DeleteSmsSignRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSmsSignWithOptions(request, runtime);
}

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
DeleteSmsTemplateResponse Client::deleteSmsTemplateWithOptions(const DeleteSmsTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTemplateCode()) {
    query["TemplateCode"] = request.templateCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteSmsTemplate"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteSmsTemplateResponse>();
}

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
DeleteSmsTemplateResponse Client::deleteSmsTemplate(const DeleteSmsTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSmsTemplateWithOptions(request, runtime);
}

/**
 * @summary Query card sending details
 *
 * @param request GetCardSmsDetailsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCardSmsDetailsResponse
 */
GetCardSmsDetailsResponse Client::getCardSmsDetailsWithOptions(const GetCardSmsDetailsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizCardId()) {
    query["BizCardId"] = request.bizCardId();
  }

  if (!!request.hasBizDigitId()) {
    query["BizDigitId"] = request.bizDigitId();
  }

  if (!!request.hasBizSmsId()) {
    query["BizSmsId"] = request.bizSmsId();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasPhoneNumber()) {
    query["PhoneNumber"] = request.phoneNumber();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSendDate()) {
    query["SendDate"] = request.sendDate();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetCardSmsDetails"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCardSmsDetailsResponse>();
}

/**
 * @summary Query card sending details
 *
 * @param request GetCardSmsDetailsRequest
 * @return GetCardSmsDetailsResponse
 */
GetCardSmsDetailsResponse Client::getCardSmsDetails(const GetCardSmsDetailsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCardSmsDetailsWithOptions(request, runtime);
}

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
GetCardSmsLinkResponse Client::getCardSmsLinkWithOptions(const GetCardSmsLinkRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCardCodeType()) {
    query["CardCodeType"] = request.cardCodeType();
  }

  if (!!request.hasCardLinkType()) {
    query["CardLinkType"] = request.cardLinkType();
  }

  if (!!request.hasCardTemplateCode()) {
    query["CardTemplateCode"] = request.cardTemplateCode();
  }

  if (!!request.hasCardTemplateParamJson()) {
    query["CardTemplateParamJson"] = request.cardTemplateParamJson();
  }

  if (!!request.hasCustomShortCodeJson()) {
    query["CustomShortCodeJson"] = request.customShortCodeJson();
  }

  if (!!request.hasDomain()) {
    query["Domain"] = request.domain();
  }

  if (!!request.hasOutId()) {
    query["OutId"] = request.outId();
  }

  if (!!request.hasPhoneNumberJson()) {
    query["PhoneNumberJson"] = request.phoneNumberJson();
  }

  if (!!request.hasSignNameJson()) {
    query["SignNameJson"] = request.signNameJson();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetCardSmsLink"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCardSmsLinkResponse>();
}

/**
 * @summary Queries the short URLs of a card messages template.
 *
 * @description ### QPS limit
 * You can call this operation up to 1,000 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request GetCardSmsLinkRequest
 * @return GetCardSmsLinkResponse
 */
GetCardSmsLinkResponse Client::getCardSmsLink(const GetCardSmsLinkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCardSmsLinkWithOptions(request, runtime);
}

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
GetMediaResourceIdResponse Client::getMediaResourceIdWithOptions(const GetMediaResourceIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasExtendInfo()) {
    query["ExtendInfo"] = request.extendInfo();
  }

  if (!!request.hasFileSize()) {
    query["FileSize"] = request.fileSize();
  }

  if (!!request.hasMemo()) {
    query["Memo"] = request.memo();
  }

  if (!!request.hasOssKey()) {
    query["OssKey"] = request.ossKey();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetMediaResourceId"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetMediaResourceIdResponse>();
}

/**
 * @summary Converts a resource uploaded to the specified Object Storage Service (OSS) bucket for unified management. Then, a resource ID is returned. You can manage the resource based on the ID.
 *
 * @description ### QPS limit
 * You can call this operation up to 300 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request GetMediaResourceIdRequest
 * @return GetMediaResourceIdResponse
 */
GetMediaResourceIdResponse Client::getMediaResourceId(const GetMediaResourceIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMediaResourceIdWithOptions(request, runtime);
}

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
GetOSSInfoForCardTemplateResponse Client::getOSSInfoForCardTemplateWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "GetOSSInfoForCardTemplate"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetOSSInfoForCardTemplateResponse>();
}

/**
 * @summary Queries the OSS configuration information about card messages.
 *
 * @description Resources such as images and videos used for card message templates can be uploaded to Object Storage Service (OSS) buckets for storage. For more information, see [Upload files to OSS](https://help.aliyun.com/document_detail/437303.html).
 * ### QPS limit
 * You can call this operation up to 300 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @return GetOSSInfoForCardTemplateResponse
 */
GetOSSInfoForCardTemplateResponse Client::getOSSInfoForCardTemplate() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getOSSInfoForCardTemplateWithOptions(runtime);
}

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
GetOSSInfoForUploadFileResponse Client::getOSSInfoForUploadFileWithOptions(const GetOSSInfoForUploadFileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizType()) {
    query["BizType"] = request.bizType();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetOSSInfoForUploadFile"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetOSSInfoForUploadFileResponse>();
}

/**
 * @summary SMS File Upload, Get Authorization Info
 *
 * @description - When creating signatures or templates, you can upload materials such as login pages with links, backend page screenshots, software copyrights, supplementary agreements, etc. This helps the review personnel understand your business details. If there are multiple materials, they can be combined into one file, supporting png, jpg, jpeg, doc, docx, pdf formats.
 * - For additional materials needed when creating signatures or templates, you can upload them to the OSS file system for storage. For file upload operations, refer to [OSS File Upload](https://help.aliyun.com/zh/sms/upload-files-through-oss).
 *
 * @param request GetOSSInfoForUploadFileRequest
 * @return GetOSSInfoForUploadFileResponse
 */
GetOSSInfoForUploadFileResponse Client::getOSSInfoForUploadFile(const GetOSSInfoForUploadFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getOSSInfoForUploadFileWithOptions(request, runtime);
}

/**
 * @summary 上传文件获取oss配置
 *
 * @param request GetQualificationOssInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetQualificationOssInfoResponse
 */
GetQualificationOssInfoResponse Client::getQualificationOssInfoWithOptions(const GetQualificationOssInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizType()) {
    query["BizType"] = request.bizType();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetQualificationOssInfo"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetQualificationOssInfoResponse>();
}

/**
 * @summary 上传文件获取oss配置
 *
 * @param request GetQualificationOssInfoRequest
 * @return GetQualificationOssInfoResponse
 */
GetQualificationOssInfoResponse Client::getQualificationOssInfo(const GetQualificationOssInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getQualificationOssInfoWithOptions(request, runtime);
}

/**
 * @summary 获取OCR的OSS信息
 *
 * @param request GetSmsOcrOssInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSmsOcrOssInfoResponse
 */
GetSmsOcrOssInfoResponse Client::getSmsOcrOssInfoWithOptions(const GetSmsOcrOssInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTaskType()) {
    query["TaskType"] = request.taskType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSmsOcrOssInfo"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSmsOcrOssInfoResponse>();
}

/**
 * @summary 获取OCR的OSS信息
 *
 * @param request GetSmsOcrOssInfoRequest
 * @return GetSmsOcrOssInfoResponse
 */
GetSmsOcrOssInfoResponse Client::getSmsOcrOssInfo(const GetSmsOcrOssInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSmsOcrOssInfoWithOptions(request, runtime);
}

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
GetSmsSignResponse Client::getSmsSignWithOptions(const GetSmsSignRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSignName()) {
    query["SignName"] = request.signName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSmsSign"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSmsSignResponse>();
}

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
GetSmsSignResponse Client::getSmsSign(const GetSmsSignRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSmsSignWithOptions(request, runtime);
}

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
GetSmsTemplateResponse Client::getSmsTemplateWithOptions(const GetSmsTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTemplateCode()) {
    query["TemplateCode"] = request.templateCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSmsTemplate"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSmsTemplateResponse>();
}

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
GetSmsTemplateResponse Client::getSmsTemplate(const GetSmsTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSmsTemplateWithOptions(request, runtime);
}

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
ListTagResourcesResponse Client::listTagResourcesWithOptions(const ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasProdCode()) {
    query["ProdCode"] = request.prodCode();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListTagResources"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListTagResourcesResponse>();
}

/**
 * @summary Queries the tags of a message template.
 *
 * @description ### QPS limit
 * You can call this operation up to 50 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request ListTagResourcesRequest
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResources(const ListTagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagResourcesWithOptions(request, runtime);
}

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
ModifySmsSignResponse Client::modifySmsSignWithOptions(const ModifySmsSignRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.remark();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSignName()) {
    query["SignName"] = request.signName();
  }

  if (!!request.hasSignSource()) {
    query["SignSource"] = request.signSource();
  }

  if (!!request.hasSignType()) {
    query["SignType"] = request.signType();
  }

  json body = {};
  if (!!request.hasSignFileList()) {
    body["SignFileList"] = request.signFileList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "ModifySmsSign"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifySmsSignResponse>();
}

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
ModifySmsSignResponse Client::modifySmsSign(const ModifySmsSignRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifySmsSignWithOptions(request, runtime);
}

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
ModifySmsTemplateResponse Client::modifySmsTemplateWithOptions(const ModifySmsTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.remark();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTemplateCode()) {
    query["TemplateCode"] = request.templateCode();
  }

  if (!!request.hasTemplateContent()) {
    query["TemplateContent"] = request.templateContent();
  }

  if (!!request.hasTemplateName()) {
    query["TemplateName"] = request.templateName();
  }

  if (!!request.hasTemplateType()) {
    query["TemplateType"] = request.templateType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ModifySmsTemplate"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ModifySmsTemplateResponse>();
}

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
ModifySmsTemplateResponse Client::modifySmsTemplate(const ModifySmsTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifySmsTemplateWithOptions(request, runtime);
}

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
QueryCardSmsTemplateResponse Client::queryCardSmsTemplateWithOptions(const QueryCardSmsTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTemplateCode()) {
    query["TemplateCode"] = request.templateCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryCardSmsTemplate"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryCardSmsTemplateResponse>();
}

/**
 * @summary Queries the review status of a message template.
 *
 * @description ### QPS limit
 * You can call this operation up to 300 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request QueryCardSmsTemplateRequest
 * @return QueryCardSmsTemplateResponse
 */
QueryCardSmsTemplateResponse Client::queryCardSmsTemplate(const QueryCardSmsTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryCardSmsTemplateWithOptions(request, runtime);
}

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
QueryCardSmsTemplateReportResponse Client::queryCardSmsTemplateReportWithOptions(const QueryCardSmsTemplateReportRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndDate()) {
    query["EndDate"] = request.endDate();
  }

  if (!!request.hasStartDate()) {
    query["StartDate"] = request.startDate();
  }

  if (!!request.hasTemplateCodes()) {
    query["TemplateCodes"] = request.templateCodes();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryCardSmsTemplateReport"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryCardSmsTemplateReportResponse>();
}

/**
 * @summary Queries sent card messages.
 *
 * @description ### QPS limit
 * You can call this operation up to 300 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request QueryCardSmsTemplateReportRequest
 * @return QueryCardSmsTemplateReportResponse
 */
QueryCardSmsTemplateReportResponse Client::queryCardSmsTemplateReport(const QueryCardSmsTemplateReportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryCardSmsTemplateReportWithOptions(request, runtime);
}

/**
 * @summary 查询验证码签名
 *
 * @param request QueryExtCodeSignRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryExtCodeSignResponse
 */
QueryExtCodeSignResponse Client::queryExtCodeSignWithOptions(const QueryExtCodeSignRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasExtCode()) {
    query["ExtCode"] = request.extCode();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSignName()) {
    query["SignName"] = request.signName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryExtCodeSign"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryExtCodeSignResponse>();
}

/**
 * @summary 查询验证码签名
 *
 * @param request QueryExtCodeSignRequest
 * @return QueryExtCodeSignResponse
 */
QueryExtCodeSignResponse Client::queryExtCodeSign(const QueryExtCodeSignRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryExtCodeSignWithOptions(request, runtime);
}

/**
 * @summary Checks whether a mobile phone number can receive card messages.
 *
 * @param tmpReq QueryMobilesCardSupportRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryMobilesCardSupportResponse
 */
QueryMobilesCardSupportResponse Client::queryMobilesCardSupportWithOptions(const QueryMobilesCardSupportRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  QueryMobilesCardSupportShrinkRequest request = QueryMobilesCardSupportShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasMobiles()) {
    request.setMobilesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.mobiles(), "Mobiles", "json"));
  }

  json query = {};
  if (!!request.hasEncryptType()) {
    query["EncryptType"] = request.encryptType();
  }

  if (!!request.hasMobilesShrink()) {
    query["Mobiles"] = request.mobilesShrink();
  }

  if (!!request.hasTemplateCode()) {
    query["TemplateCode"] = request.templateCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryMobilesCardSupport"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryMobilesCardSupportResponse>();
}

/**
 * @summary Checks whether a mobile phone number can receive card messages.
 *
 * @param request QueryMobilesCardSupportRequest
 * @return QueryMobilesCardSupportResponse
 */
QueryMobilesCardSupportResponse Client::queryMobilesCardSupport(const QueryMobilesCardSupportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryMobilesCardSupportWithOptions(request, runtime);
}

/**
 * @summary 点击明细查询
 *
 * @param request QueryPageSmartShortUrlLogRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryPageSmartShortUrlLogResponse
 */
QueryPageSmartShortUrlLogResponse Client::queryPageSmartShortUrlLogWithOptions(const QueryPageSmartShortUrlLogRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCreateDateEnd()) {
    query["CreateDateEnd"] = request.createDateEnd();
  }

  if (!!request.hasCreateDateStart()) {
    query["CreateDateStart"] = request.createDateStart();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasPhoneNumber()) {
    query["PhoneNumber"] = request.phoneNumber();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasShortUrl()) {
    query["ShortUrl"] = request.shortUrl();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryPageSmartShortUrlLog"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryPageSmartShortUrlLogResponse>();
}

/**
 * @summary 点击明细查询
 *
 * @param request QueryPageSmartShortUrlLogRequest
 * @return QueryPageSmartShortUrlLogResponse
 */
QueryPageSmartShortUrlLogResponse Client::queryPageSmartShortUrlLog(const QueryPageSmartShortUrlLogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryPageSmartShortUrlLogWithOptions(request, runtime);
}

/**
 * @summary Queries the information about a message.
 *
 * @param request QuerySendDetailsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QuerySendDetailsResponse
 */
QuerySendDetailsResponse Client::querySendDetailsWithOptions(const QuerySendDetailsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.bizId();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasPhoneNumber()) {
    query["PhoneNumber"] = request.phoneNumber();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSendDate()) {
    query["SendDate"] = request.sendDate();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QuerySendDetails"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QuerySendDetailsResponse>();
}

/**
 * @summary Queries the information about a message.
 *
 * @param request QuerySendDetailsRequest
 * @return QuerySendDetailsResponse
 */
QuerySendDetailsResponse Client::querySendDetails(const QuerySendDetailsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return querySendDetailsWithOptions(request, runtime);
}

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
QuerySendStatisticsResponse Client::querySendStatisticsWithOptions(const QuerySendStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndDate()) {
    query["EndDate"] = request.endDate();
  }

  if (!!request.hasIsGlobe()) {
    query["IsGlobe"] = request.isGlobe();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPageIndex()) {
    query["PageIndex"] = request.pageIndex();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSignName()) {
    query["SignName"] = request.signName();
  }

  if (!!request.hasStartDate()) {
    query["StartDate"] = request.startDate();
  }

  if (!!request.hasTemplateType()) {
    query["TemplateType"] = request.templateType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QuerySendStatistics"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QuerySendStatisticsResponse>();
}

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
QuerySendStatisticsResponse Client::querySendStatistics(const QuerySendStatisticsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return querySendStatisticsWithOptions(request, runtime);
}

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
QueryShortUrlResponse Client::queryShortUrlWithOptions(const QueryShortUrlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  json body = {};
  if (!!request.hasShortUrl()) {
    body["ShortUrl"] = request.shortUrl();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "QueryShortUrl"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryShortUrlResponse>();
}

/**
 * @summary Queries the status of a short URL.
 *
 * @description ### QPS limits
 * You can call this operation up to 20 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request QueryShortUrlRequest
 * @return QueryShortUrlResponse
 */
QueryShortUrlResponse Client::queryShortUrl(const QueryShortUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryShortUrlWithOptions(request, runtime);
}

/**
 * @summary 查询单个资质详情
 *
 * @param request QuerySingleSmsQualificationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QuerySingleSmsQualificationResponse
 */
QuerySingleSmsQualificationResponse Client::querySingleSmsQualificationWithOptions(const QuerySingleSmsQualificationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOrderId()) {
    query["OrderId"] = request.orderId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasQualificationGroupId()) {
    query["QualificationGroupId"] = request.qualificationGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QuerySingleSmsQualification"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QuerySingleSmsQualificationResponse>();
}

/**
 * @summary 查询单个资质详情
 *
 * @param request QuerySingleSmsQualificationRequest
 * @return QuerySingleSmsQualificationResponse
 */
QuerySingleSmsQualificationResponse Client::querySingleSmsQualification(const QuerySingleSmsQualificationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return querySingleSmsQualificationWithOptions(request, runtime);
}

/**
 * @summary 查询委托授权书
 *
 * @param tmpReq QuerySmsAuthorizationLetterRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QuerySmsAuthorizationLetterResponse
 */
QuerySmsAuthorizationLetterResponse Client::querySmsAuthorizationLetterWithOptions(const QuerySmsAuthorizationLetterRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  QuerySmsAuthorizationLetterShrinkRequest request = QuerySmsAuthorizationLetterShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAuthorizationLetterIdList()) {
    request.setAuthorizationLetterIdListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.authorizationLetterIdList(), "AuthorizationLetterIdList", "json"));
  }

  json query = {};
  if (!!request.hasAuthorizationLetterIdListShrink()) {
    query["AuthorizationLetterIdList"] = request.authorizationLetterIdListShrink();
  }

  if (!!request.hasOrganizationCode()) {
    query["OrganizationCode"] = request.organizationCode();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSignName()) {
    query["SignName"] = request.signName();
  }

  if (!!request.hasState()) {
    query["State"] = request.state();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QuerySmsAuthorizationLetter"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QuerySmsAuthorizationLetterResponse>();
}

/**
 * @summary 查询委托授权书
 *
 * @param request QuerySmsAuthorizationLetterRequest
 * @return QuerySmsAuthorizationLetterResponse
 */
QuerySmsAuthorizationLetterResponse Client::querySmsAuthorizationLetter(const QuerySmsAuthorizationLetterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return querySmsAuthorizationLetterWithOptions(request, runtime);
}

/**
 * @summary 查询资质审核列表页
 *
 * @param request QuerySmsQualificationRecordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QuerySmsQualificationRecordResponse
 */
QuerySmsQualificationRecordResponse Client::querySmsQualificationRecordWithOptions(const QuerySmsQualificationRecordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCompanyName()) {
    query["CompanyName"] = request.companyName();
  }

  if (!!request.hasLegalPersonName()) {
    query["LegalPersonName"] = request.legalPersonName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.pageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasQualificationGroupName()) {
    query["QualificationGroupName"] = request.qualificationGroupName();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasState()) {
    query["State"] = request.state();
  }

  if (!!request.hasUseBySelf()) {
    query["UseBySelf"] = request.useBySelf();
  }

  if (!!request.hasWorkOrderId()) {
    query["WorkOrderId"] = request.workOrderId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QuerySmsQualificationRecord"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QuerySmsQualificationRecordResponse>();
}

/**
 * @summary 查询资质审核列表页
 *
 * @param request QuerySmsQualificationRecordRequest
 * @return QuerySmsQualificationRecordResponse
 */
QuerySmsQualificationRecordResponse Client::querySmsQualificationRecord(const QuerySmsQualificationRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return querySmsQualificationRecordWithOptions(request, runtime);
}

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
QuerySmsSignResponse Client::querySmsSignWithOptions(const QuerySmsSignRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSignName()) {
    query["SignName"] = request.signName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QuerySmsSign"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QuerySmsSignResponse>();
}

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
QuerySmsSignResponse Client::querySmsSign(const QuerySmsSignRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return querySmsSignWithOptions(request, runtime);
}

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
QuerySmsSignListResponse Client::querySmsSignListWithOptions(const QuerySmsSignListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPageIndex()) {
    query["PageIndex"] = request.pageIndex();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QuerySmsSignList"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QuerySmsSignListResponse>();
}

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
QuerySmsSignListResponse Client::querySmsSignList(const QuerySmsSignListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return querySmsSignListWithOptions(request, runtime);
}

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
QuerySmsTemplateResponse Client::querySmsTemplateWithOptions(const QuerySmsTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTemplateCode()) {
    query["TemplateCode"] = request.templateCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QuerySmsTemplate"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QuerySmsTemplateResponse>();
}

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
QuerySmsTemplateResponse Client::querySmsTemplate(const QuerySmsTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return querySmsTemplateWithOptions(request, runtime);
}

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
QuerySmsTemplateListResponse Client::querySmsTemplateListWithOptions(const QuerySmsTemplateListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPageIndex()) {
    query["PageIndex"] = request.pageIndex();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.pageSize();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QuerySmsTemplateList"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QuerySmsTemplateListResponse>();
}

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
QuerySmsTemplateListResponse Client::querySmsTemplateList(const QuerySmsTemplateListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return querySmsTemplateListWithOptions(request, runtime);
}

/**
 * @summary 验证手机验证码
 *
 * @param request RequiredPhoneCodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RequiredPhoneCodeResponse
 */
RequiredPhoneCodeResponse Client::requiredPhoneCodeWithOptions(const RequiredPhoneCodeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPhoneNo()) {
    query["PhoneNo"] = request.phoneNo();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RequiredPhoneCode"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RequiredPhoneCodeResponse>();
}

/**
 * @summary 验证手机验证码
 *
 * @param request RequiredPhoneCodeRequest
 * @return RequiredPhoneCodeResponse
 */
RequiredPhoneCodeResponse Client::requiredPhoneCode(const RequiredPhoneCodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return requiredPhoneCodeWithOptions(request, runtime);
}

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
SendBatchCardSmsResponse Client::sendBatchCardSmsWithOptions(const SendBatchCardSmsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCardTemplateCode()) {
    query["CardTemplateCode"] = request.cardTemplateCode();
  }

  if (!!request.hasCardTemplateParamJson()) {
    query["CardTemplateParamJson"] = request.cardTemplateParamJson();
  }

  if (!!request.hasDigitalTemplateCode()) {
    query["DigitalTemplateCode"] = request.digitalTemplateCode();
  }

  if (!!request.hasDigitalTemplateParamJson()) {
    query["DigitalTemplateParamJson"] = request.digitalTemplateParamJson();
  }

  if (!!request.hasFallbackType()) {
    query["FallbackType"] = request.fallbackType();
  }

  if (!!request.hasOutId()) {
    query["OutId"] = request.outId();
  }

  if (!!request.hasPhoneNumberJson()) {
    query["PhoneNumberJson"] = request.phoneNumberJson();
  }

  if (!!request.hasSignNameJson()) {
    query["SignNameJson"] = request.signNameJson();
  }

  if (!!request.hasSmsTemplateCode()) {
    query["SmsTemplateCode"] = request.smsTemplateCode();
  }

  if (!!request.hasSmsTemplateParamJson()) {
    query["SmsTemplateParamJson"] = request.smsTemplateParamJson();
  }

  if (!!request.hasSmsUpExtendCodeJson()) {
    query["SmsUpExtendCodeJson"] = request.smsUpExtendCodeJson();
  }

  if (!!request.hasTemplateCode()) {
    query["TemplateCode"] = request.templateCode();
  }

  if (!!request.hasTemplateParamJson()) {
    query["TemplateParamJson"] = request.templateParamJson();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SendBatchCardSms"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SendBatchCardSmsResponse>();
}

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
SendBatchCardSmsResponse Client::sendBatchCardSms(const SendBatchCardSmsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return sendBatchCardSmsWithOptions(request, runtime);
}

/**
 * @summary Uses a single message template and multiple signatures to send messages to multiple recipients.
 *
 * @description You can call the operation to send messages to a maximum of 100 recipients at a time.
 *
 * @param request SendBatchSmsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SendBatchSmsResponse
 */
SendBatchSmsResponse Client::sendBatchSmsWithOptions(const SendBatchSmsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOutId()) {
    query["OutId"] = request.outId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTemplateCode()) {
    query["TemplateCode"] = request.templateCode();
  }

  json body = {};
  if (!!request.hasPhoneNumberJson()) {
    body["PhoneNumberJson"] = request.phoneNumberJson();
  }

  if (!!request.hasSignNameJson()) {
    body["SignNameJson"] = request.signNameJson();
  }

  if (!!request.hasSmsUpExtendCodeJson()) {
    body["SmsUpExtendCodeJson"] = request.smsUpExtendCodeJson();
  }

  if (!!request.hasTemplateParamJson()) {
    body["TemplateParamJson"] = request.templateParamJson();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "SendBatchSms"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SendBatchSmsResponse>();
}

/**
 * @summary Uses a single message template and multiple signatures to send messages to multiple recipients.
 *
 * @description You can call the operation to send messages to a maximum of 100 recipients at a time.
 *
 * @param request SendBatchSmsRequest
 * @return SendBatchSmsResponse
 */
SendBatchSmsResponse Client::sendBatchSms(const SendBatchSmsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return sendBatchSmsWithOptions(request, runtime);
}

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
SendCardSmsResponse Client::sendCardSmsWithOptions(const SendCardSmsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCardObjects()) {
    query["CardObjects"] = request.cardObjects();
  }

  if (!!request.hasCardTemplateCode()) {
    query["CardTemplateCode"] = request.cardTemplateCode();
  }

  if (!!request.hasDigitalTemplateCode()) {
    query["DigitalTemplateCode"] = request.digitalTemplateCode();
  }

  if (!!request.hasDigitalTemplateParam()) {
    query["DigitalTemplateParam"] = request.digitalTemplateParam();
  }

  if (!!request.hasFallbackType()) {
    query["FallbackType"] = request.fallbackType();
  }

  if (!!request.hasOutId()) {
    query["OutId"] = request.outId();
  }

  if (!!request.hasSignName()) {
    query["SignName"] = request.signName();
  }

  if (!!request.hasSmsTemplateCode()) {
    query["SmsTemplateCode"] = request.smsTemplateCode();
  }

  if (!!request.hasSmsTemplateParam()) {
    query["SmsTemplateParam"] = request.smsTemplateParam();
  }

  if (!!request.hasSmsUpExtendCode()) {
    query["SmsUpExtendCode"] = request.smsUpExtendCode();
  }

  if (!!request.hasTemplateCode()) {
    query["TemplateCode"] = request.templateCode();
  }

  if (!!request.hasTemplateParam()) {
    query["TemplateParam"] = request.templateParam();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SendCardSms"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SendCardSmsResponse>();
}

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
SendCardSmsResponse Client::sendCardSms(const SendCardSmsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return sendCardSmsWithOptions(request, runtime);
}

/**
 * @summary 发送物流短信
 *
 * @param request SendLogisticsSmsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SendLogisticsSmsResponse
 */
SendLogisticsSmsResponse Client::sendLogisticsSmsWithOptions(const SendLogisticsSmsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasExpressCompanyCode()) {
    query["ExpressCompanyCode"] = request.expressCompanyCode();
  }

  if (!!request.hasMailNo()) {
    query["MailNo"] = request.mailNo();
  }

  if (!!request.hasOutId()) {
    query["OutId"] = request.outId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPlatformCompanyCode()) {
    query["PlatformCompanyCode"] = request.platformCompanyCode();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSignName()) {
    query["SignName"] = request.signName();
  }

  if (!!request.hasTemplateCode()) {
    query["TemplateCode"] = request.templateCode();
  }

  if (!!request.hasTemplateParam()) {
    query["TemplateParam"] = request.templateParam();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SendLogisticsSms"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SendLogisticsSmsResponse>();
}

/**
 * @summary 发送物流短信
 *
 * @param request SendLogisticsSmsRequest
 * @return SendLogisticsSmsResponse
 */
SendLogisticsSmsResponse Client::sendLogisticsSms(const SendLogisticsSmsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return sendLogisticsSmsWithOptions(request, runtime);
}

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
SendSmsResponse Client::sendSmsWithOptions(const SendSmsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOutId()) {
    query["OutId"] = request.outId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPhoneNumbers()) {
    query["PhoneNumbers"] = request.phoneNumbers();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSignName()) {
    query["SignName"] = request.signName();
  }

  if (!!request.hasSmsUpExtendCode()) {
    query["SmsUpExtendCode"] = request.smsUpExtendCode();
  }

  if (!!request.hasTemplateCode()) {
    query["TemplateCode"] = request.templateCode();
  }

  if (!!request.hasTemplateParam()) {
    query["TemplateParam"] = request.templateParam();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SendSms"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SendSmsResponse>();
}

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
SendSmsResponse Client::sendSms(const SendSmsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return sendSmsWithOptions(request, runtime);
}

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
SmsConversionIntlResponse Client::smsConversionIntlWithOptions(const SmsConversionIntlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConversionTime()) {
    query["ConversionTime"] = request.conversionTime();
  }

  if (!!request.hasDelivered()) {
    query["Delivered"] = request.delivered();
  }

  if (!!request.hasMessageId()) {
    query["MessageId"] = request.messageId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SmsConversionIntl"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SmsConversionIntlResponse>();
}

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
SmsConversionIntlResponse Client::smsConversionIntl(const SmsConversionIntlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return smsConversionIntlWithOptions(request, runtime);
}

/**
 * @summary 创建资质对客openAPI
 *
 * @param tmpReq SubmitSmsQualificationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SubmitSmsQualificationResponse
 */
SubmitSmsQualificationResponse Client::submitSmsQualificationWithOptions(const SubmitSmsQualificationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SubmitSmsQualificationShrinkRequest request = SubmitSmsQualificationShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBusinessLicensePics()) {
    request.setBusinessLicensePicsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.businessLicensePics(), "BusinessLicensePics", "json"));
  }

  if (!!tmpReq.hasOtherFiles()) {
    request.setOtherFilesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.otherFiles(), "OtherFiles", "json"));
  }

  json query = {};
  if (!!request.hasAdminIDCardExpDate()) {
    query["AdminIDCardExpDate"] = request.adminIDCardExpDate();
  }

  if (!!request.hasAdminIDCardFrontFace()) {
    query["AdminIDCardFrontFace"] = request.adminIDCardFrontFace();
  }

  if (!!request.hasAdminIDCardNo()) {
    query["AdminIDCardNo"] = request.adminIDCardNo();
  }

  if (!!request.hasAdminIDCardPic()) {
    query["AdminIDCardPic"] = request.adminIDCardPic();
  }

  if (!!request.hasAdminIDCardType()) {
    query["AdminIDCardType"] = request.adminIDCardType();
  }

  if (!!request.hasAdminName()) {
    query["AdminName"] = request.adminName();
  }

  if (!!request.hasAdminPhoneNo()) {
    query["AdminPhoneNo"] = request.adminPhoneNo();
  }

  if (!!request.hasBusinessLicensePicsShrink()) {
    query["BusinessLicensePics"] = request.businessLicensePicsShrink();
  }

  if (!!request.hasBussinessLicenseExpDate()) {
    query["BussinessLicenseExpDate"] = request.bussinessLicenseExpDate();
  }

  if (!!request.hasCertifyCode()) {
    query["CertifyCode"] = request.certifyCode();
  }

  if (!!request.hasCompanyName()) {
    query["CompanyName"] = request.companyName();
  }

  if (!!request.hasCompanyType()) {
    query["CompanyType"] = request.companyType();
  }

  if (!!request.hasLegalPersonIDCardNo()) {
    query["LegalPersonIDCardNo"] = request.legalPersonIDCardNo();
  }

  if (!!request.hasLegalPersonIDCardType()) {
    query["LegalPersonIDCardType"] = request.legalPersonIDCardType();
  }

  if (!!request.hasLegalPersonIdCardBackSide()) {
    query["LegalPersonIdCardBackSide"] = request.legalPersonIdCardBackSide();
  }

  if (!!request.hasLegalPersonIdCardEffTime()) {
    query["LegalPersonIdCardEffTime"] = request.legalPersonIdCardEffTime();
  }

  if (!!request.hasLegalPersonIdCardFrontSide()) {
    query["LegalPersonIdCardFrontSide"] = request.legalPersonIdCardFrontSide();
  }

  if (!!request.hasLegalPersonName()) {
    query["LegalPersonName"] = request.legalPersonName();
  }

  if (!!request.hasOrganizationCode()) {
    query["OrganizationCode"] = request.organizationCode();
  }

  if (!!request.hasOtherFilesShrink()) {
    query["OtherFiles"] = request.otherFilesShrink();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasQualificationName()) {
    query["QualificationName"] = request.qualificationName();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.remark();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasUseBySelf()) {
    query["UseBySelf"] = request.useBySelf();
  }

  if (!!request.hasWhetherShare()) {
    query["WhetherShare"] = request.whetherShare();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SubmitSmsQualification"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SubmitSmsQualificationResponse>();
}

/**
 * @summary 创建资质对客openAPI
 *
 * @param request SubmitSmsQualificationRequest
 * @return SubmitSmsQualificationResponse
 */
SubmitSmsQualificationResponse Client::submitSmsQualification(const SubmitSmsQualificationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitSmsQualificationWithOptions(request, runtime);
}

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
TagResourcesResponse Client::tagResourcesWithOptions(const TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasProdCode()) {
    query["ProdCode"] = request.prodCode();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.tag();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "TagResources"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TagResourcesResponse>();
}

/**
 * @summary Attaches tags to a message template.
 *
 * @description ### QPS limit
 * You can call this operation up to 50 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request TagResourcesRequest
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResources(const TagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return tagResourcesWithOptions(request, runtime);
}

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
UntagResourcesResponse Client::untagResourcesWithOptions(const UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAll()) {
    query["All"] = request.all();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasProdCode()) {
    query["ProdCode"] = request.prodCode();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  if (!!request.hasTagKey()) {
    query["TagKey"] = request.tagKey();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UntagResources"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UntagResourcesResponse>();
}

/**
 * @summary Deletes tags from a message template.
 *
 * @description ### QPS limit
 * You can call this operation up to 50 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request UntagResourcesRequest
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResources(const UntagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return untagResourcesWithOptions(request, runtime);
}

/**
 * @summary 修改验证码签名
 *
 * @param request UpdateExtCodeSignRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateExtCodeSignResponse
 */
UpdateExtCodeSignResponse Client::updateExtCodeSignWithOptions(const UpdateExtCodeSignRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasExistExtCode()) {
    query["ExistExtCode"] = request.existExtCode();
  }

  if (!!request.hasNewExtCode()) {
    query["NewExtCode"] = request.newExtCode();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSignName()) {
    query["SignName"] = request.signName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateExtCodeSign"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateExtCodeSignResponse>();
}

/**
 * @summary 修改验证码签名
 *
 * @param request UpdateExtCodeSignRequest
 * @return UpdateExtCodeSignResponse
 */
UpdateExtCodeSignResponse Client::updateExtCodeSign(const UpdateExtCodeSignRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateExtCodeSignWithOptions(request, runtime);
}

/**
 * @summary 修改资质对客openAPI
 *
 * @param tmpReq UpdateSmsQualificationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateSmsQualificationResponse
 */
UpdateSmsQualificationResponse Client::updateSmsQualificationWithOptions(const UpdateSmsQualificationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateSmsQualificationShrinkRequest request = UpdateSmsQualificationShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBusinessLicensePics()) {
    request.setBusinessLicensePicsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.businessLicensePics(), "BusinessLicensePics", "json"));
  }

  if (!!tmpReq.hasOtherFiles()) {
    request.setOtherFilesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.otherFiles(), "OtherFiles", "json"));
  }

  json query = {};
  if (!!request.hasAdminIDCardExpDate()) {
    query["AdminIDCardExpDate"] = request.adminIDCardExpDate();
  }

  if (!!request.hasAdminIDCardFrontFace()) {
    query["AdminIDCardFrontFace"] = request.adminIDCardFrontFace();
  }

  if (!!request.hasAdminIDCardNo()) {
    query["AdminIDCardNo"] = request.adminIDCardNo();
  }

  if (!!request.hasAdminIDCardPic()) {
    query["AdminIDCardPic"] = request.adminIDCardPic();
  }

  if (!!request.hasAdminIDCardType()) {
    query["AdminIDCardType"] = request.adminIDCardType();
  }

  if (!!request.hasAdminName()) {
    query["AdminName"] = request.adminName();
  }

  if (!!request.hasAdminPhoneNo()) {
    query["AdminPhoneNo"] = request.adminPhoneNo();
  }

  if (!!request.hasBusinessLicensePicsShrink()) {
    query["BusinessLicensePics"] = request.businessLicensePicsShrink();
  }

  if (!!request.hasBussinessLicenseExpDate()) {
    query["BussinessLicenseExpDate"] = request.bussinessLicenseExpDate();
  }

  if (!!request.hasCertifyCode()) {
    query["CertifyCode"] = request.certifyCode();
  }

  if (!!request.hasCompanyName()) {
    query["CompanyName"] = request.companyName();
  }

  if (!!request.hasLegalPersonIDCardNo()) {
    query["LegalPersonIDCardNo"] = request.legalPersonIDCardNo();
  }

  if (!!request.hasLegalPersonIDCardType()) {
    query["LegalPersonIDCardType"] = request.legalPersonIDCardType();
  }

  if (!!request.hasLegalPersonIdCardBackSide()) {
    query["LegalPersonIdCardBackSide"] = request.legalPersonIdCardBackSide();
  }

  if (!!request.hasLegalPersonIdCardEffTime()) {
    query["LegalPersonIdCardEffTime"] = request.legalPersonIdCardEffTime();
  }

  if (!!request.hasLegalPersonIdCardFrontSide()) {
    query["LegalPersonIdCardFrontSide"] = request.legalPersonIdCardFrontSide();
  }

  if (!!request.hasLegalPersonName()) {
    query["LegalPersonName"] = request.legalPersonName();
  }

  if (!!request.hasOrderId()) {
    query["OrderId"] = request.orderId();
  }

  if (!!request.hasOtherFilesShrink()) {
    query["OtherFiles"] = request.otherFilesShrink();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasQualificationGroupId()) {
    query["QualificationGroupId"] = request.qualificationGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateSmsQualification"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateSmsQualificationResponse>();
}

/**
 * @summary 修改资质对客openAPI
 *
 * @param request UpdateSmsQualificationRequest
 * @return UpdateSmsQualificationResponse
 */
UpdateSmsQualificationResponse Client::updateSmsQualification(const UpdateSmsQualificationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateSmsQualificationWithOptions(request, runtime);
}

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
UpdateSmsSignResponse Client::updateSmsSignWithOptions(const UpdateSmsSignRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateSmsSignShrinkRequest request = UpdateSmsSignShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasMoreData()) {
    request.setMoreDataShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.moreData(), "MoreData", "json"));
  }

  json query = {};
  if (!!request.hasApplySceneContent()) {
    query["ApplySceneContent"] = request.applySceneContent();
  }

  if (!!request.hasAuthorizationLetterId()) {
    query["AuthorizationLetterId"] = request.authorizationLetterId();
  }

  if (!!request.hasMoreDataShrink()) {
    query["MoreData"] = request.moreDataShrink();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasQualificationId()) {
    query["QualificationId"] = request.qualificationId();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.remark();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasSignName()) {
    query["SignName"] = request.signName();
  }

  if (!!request.hasSignSource()) {
    query["SignSource"] = request.signSource();
  }

  if (!!request.hasSignType()) {
    query["SignType"] = request.signType();
  }

  if (!!request.hasThirdParty()) {
    query["ThirdParty"] = request.thirdParty();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateSmsSign"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateSmsSignResponse>();
}

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
UpdateSmsSignResponse Client::updateSmsSign(const UpdateSmsSignRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateSmsSignWithOptions(request, runtime);
}

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
UpdateSmsTemplateResponse Client::updateSmsTemplateWithOptions(const UpdateSmsTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateSmsTemplateShrinkRequest request = UpdateSmsTemplateShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasMoreData()) {
    request.setMoreDataShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.moreData(), "MoreData", "json"));
  }

  json query = {};
  if (!!request.hasApplySceneContent()) {
    query["ApplySceneContent"] = request.applySceneContent();
  }

  if (!!request.hasIntlType()) {
    query["IntlType"] = request.intlType();
  }

  if (!!request.hasMoreDataShrink()) {
    query["MoreData"] = request.moreDataShrink();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasRelatedSignName()) {
    query["RelatedSignName"] = request.relatedSignName();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.remark();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  if (!!request.hasTemplateCode()) {
    query["TemplateCode"] = request.templateCode();
  }

  if (!!request.hasTemplateContent()) {
    query["TemplateContent"] = request.templateContent();
  }

  if (!!request.hasTemplateName()) {
    query["TemplateName"] = request.templateName();
  }

  if (!!request.hasTemplateRule()) {
    query["TemplateRule"] = request.templateRule();
  }

  if (!!request.hasTemplateType()) {
    query["TemplateType"] = request.templateType();
  }

  if (!!request.hasTrafficDriving()) {
    query["TrafficDriving"] = request.trafficDriving();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateSmsTemplate"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateSmsTemplateResponse>();
}

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
UpdateSmsTemplateResponse Client::updateSmsTemplate(const UpdateSmsTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateSmsTemplateWithOptions(request, runtime);
}

/**
 * @summary 发送手机验证码
 *
 * @param request ValidPhoneCodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ValidPhoneCodeResponse
 */
ValidPhoneCodeResponse Client::validPhoneCodeWithOptions(const ValidPhoneCodeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCertifyCode()) {
    query["CertifyCode"] = request.certifyCode();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPhoneNo()) {
    query["PhoneNo"] = request.phoneNo();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ValidPhoneCode"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ValidPhoneCodeResponse>();
}

/**
 * @summary 发送手机验证码
 *
 * @param request ValidPhoneCodeRequest
 * @return ValidPhoneCodeResponse
 */
ValidPhoneCodeResponse Client::validPhoneCode(const ValidPhoneCodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return validPhoneCodeWithOptions(request, runtime);
}

/**
 * @summary 物流短信运单号校验
 *
 * @param request VerifyLogisticsSmsMailNoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return VerifyLogisticsSmsMailNoResponse
 */
VerifyLogisticsSmsMailNoResponse Client::verifyLogisticsSmsMailNoWithOptions(const VerifyLogisticsSmsMailNoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasExpressCompanyCode()) {
    query["ExpressCompanyCode"] = request.expressCompanyCode();
  }

  if (!!request.hasMailNo()) {
    query["MailNo"] = request.mailNo();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.ownerId();
  }

  if (!!request.hasPlatformCompanyCode()) {
    query["PlatformCompanyCode"] = request.platformCompanyCode();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.resourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.resourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "VerifyLogisticsSmsMailNo"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<VerifyLogisticsSmsMailNoResponse>();
}

/**
 * @summary 物流短信运单号校验
 *
 * @param request VerifyLogisticsSmsMailNoRequest
 * @return VerifyLogisticsSmsMailNoResponse
 */
VerifyLogisticsSmsMailNoResponse Client::verifyLogisticsSmsMailNo(const VerifyLogisticsSmsMailNoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return verifyLogisticsSmsMailNoWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525