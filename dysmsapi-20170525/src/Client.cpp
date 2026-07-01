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
    {"us-east-1" , "dysmsapi.us-east-1.aliyuncs.com"},
    {"cn-zhangjiakou" , "dysmsapi.aliyuncs.com"},
    {"cn-shenzhen-finance-1" , "dysmsapi.aliyuncs.com"},
    {"cn-shenzhen" , "dysmsapi.aliyuncs.com"},
    {"cn-shanghai-finance-1" , "dysmsapi.aliyuncs.com"},
    {"cn-qingdao" , "dysmsapi.aliyuncs.com"},
    {"cn-north-2-gov-1" , "dysmsapi.aliyuncs.com"},
    {"cn-huhehaote" , "dysmsapi.aliyuncs.com"},
    {"cn-hangzhou-finance" , "dysmsapi.aliyuncs.com"},
    {"cn-hangzhou" , "dysmsapi.aliyuncs.com"},
    {"cn-chengdu" , "dysmsapi.aliyuncs.com"},
    {"cn-beijing-finance-1" , "dysmsapi.aliyuncs.com"}
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
    query["ExtCode"] = request.getExtCode();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSignName()) {
    query["SignName"] = request.getSignName();
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
 * @summary 创建/编辑5G消息固定菜单
 *
 * @param request AddRcsSignMenuRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AddRcsSignMenuResponse
 */
AddRcsSignMenuResponse Client::addRcsSignMenuWithOptions(const AddRcsSignMenuRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMenuContent()) {
    query["MenuContent"] = request.getMenuContent();
  }

  if (!!request.hasSignName()) {
    query["SignName"] = request.getSignName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AddRcsSignMenu"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AddRcsSignMenuResponse>();
}

/**
 * @summary 创建/编辑5G消息固定菜单
 *
 * @param request AddRcsSignMenuRequest
 * @return AddRcsSignMenuResponse
 */
AddRcsSignMenuResponse Client::addRcsSignMenu(const AddRcsSignMenuRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addRcsSignMenuWithOptions(request, runtime);
}

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
AddShortUrlResponse Client::addShortUrlWithOptions(const AddShortUrlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  json body = {};
  if (!!request.hasEffectiveDays()) {
    body["EffectiveDays"] = request.getEffectiveDays();
  }

  if (!!request.hasShortUrlName()) {
    body["ShortUrlName"] = request.getShortUrlName();
  }

  if (!!request.hasSourceUrl()) {
    body["SourceUrl"] = request.getSourceUrl();
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
 * @description >Notice: 
 * Short Message Service does not currently support this API operation.
 * - You can create up to 3,000 short URLs per calendar day.
 * - After a short URL is generated, it must pass a security review, which typically takes 10 minutes to 2 hours. You cannot access the short URL until it passes this review.
 *
 * @param request AddShortUrlRequest
 * @return AddShortUrlResponse
 */
AddShortUrlResponse Client::addShortUrl(const AddShortUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addShortUrlWithOptions(request, runtime);
}

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
AddSmsSignResponse Client::addSmsSignWithOptions(const AddSmsSignRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.getRemark();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSignName()) {
    query["SignName"] = request.getSignName();
  }

  if (!!request.hasSignSource()) {
    query["SignSource"] = request.getSignSource();
  }

  if (!!request.hasSignType()) {
    query["SignType"] = request.getSignType();
  }

  json body = {};
  if (!!request.hasSignFileList()) {
    body["SignFileList"] = request.getSignFileList();
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
AddSmsSignResponse Client::addSmsSign(const AddSmsSignRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addSmsSignWithOptions(request, runtime);
}

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
AddSmsTemplateResponse Client::addSmsTemplateWithOptions(const AddSmsTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.getRemark();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTemplateContent()) {
    query["TemplateContent"] = request.getTemplateContent();
  }

  if (!!request.hasTemplateName()) {
    query["TemplateName"] = request.getTemplateName();
  }

  if (!!request.hasTemplateType()) {
    query["TemplateType"] = request.getTemplateType();
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
AddSmsTemplateResponse Client::addSmsTemplate(const AddSmsTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return addSmsTemplateWithOptions(request, runtime);
}

/**
 * @summary Updates the qualification and authorization letter for a signature.
 *
 * @param request ChangeSignatureQualificationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ChangeSignatureQualificationResponse
 */
ChangeSignatureQualificationResponse Client::changeSignatureQualificationWithOptions(const ChangeSignatureQualificationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthorizationLetterId()) {
    query["AuthorizationLetterId"] = request.getAuthorizationLetterId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasQualificationId()) {
    query["QualificationId"] = request.getQualificationId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSignatureName()) {
    query["SignatureName"] = request.getSignatureName();
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
 * @summary Updates the qualification and authorization letter for a signature.
 *
 * @param request ChangeSignatureQualificationRequest
 * @return ChangeSignatureQualificationResponse
 */
ChangeSignatureQualificationResponse Client::changeSignatureQualification(const ChangeSignatureQualificationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return changeSignatureQualificationWithOptions(request, runtime);
}

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
CheckMobilesCardSupportResponse Client::checkMobilesCardSupportWithOptions(const CheckMobilesCardSupportRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMobiles()) {
    query["Mobiles"] = request.getMobiles();
  }

  if (!!request.hasTemplateCode()) {
    query["TemplateCode"] = request.getTemplateCode();
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
CheckMobilesCardSupportResponse Client::checkMobilesCardSupport(const CheckMobilesCardSupportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return checkMobilesCardSupportWithOptions(request, runtime);
}

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
ConversionDataIntlResponse Client::conversionDataIntlWithOptions(const ConversionDataIntlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConversionRate()) {
    query["ConversionRate"] = request.getConversionRate();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasReportTime()) {
    query["ReportTime"] = request.getReportTime();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
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
ConversionDataIntlResponse Client::conversionDataIntl(const ConversionDataIntlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return conversionDataIntlWithOptions(request, runtime);
}

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
CreateCardSmsTemplateResponse Client::createCardSmsTemplateWithOptions(const CreateCardSmsTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateCardSmsTemplateShrinkRequest request = CreateCardSmsTemplateShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTemplate()) {
    request.setTemplateShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTemplate(), "Template", "json"));
  }

  json query = {};
  if (!!request.hasFactorys()) {
    query["Factorys"] = request.getFactorys();
  }

  if (!!request.hasMemo()) {
    query["Memo"] = request.getMemo();
  }

  if (!!request.hasTemplateShrink()) {
    query["Template"] = request.getTemplateShrink();
  }

  if (!!request.hasTemplateName()) {
    query["TemplateName"] = request.getTemplateName();
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
CreateCardSmsTemplateResponse Client::createCardSmsTemplate(const CreateCardSmsTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCardSmsTemplateWithOptions(request, runtime);
}

/**
 * @summary Creates an order to add, update, or delete a digital message signature.
 *
 * @description Creates, updates, or deletes a signature.
 *
 * @param tmpReq CreateDigitalSignOrderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDigitalSignOrderResponse
 */
CreateDigitalSignOrderResponse Client::createDigitalSignOrderWithOptions(const CreateDigitalSignOrderRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateDigitalSignOrderShrinkRequest request = CreateDigitalSignOrderShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasOrderContext()) {
    request.setOrderContextShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getOrderContext(), "OrderContext", "json"));
  }

  json query = {};
  if (!!request.hasExtendMessage()) {
    query["ExtendMessage"] = request.getExtendMessage();
  }

  if (!!request.hasOrderContextShrink()) {
    query["OrderContext"] = request.getOrderContextShrink();
  }

  if (!!request.hasOrderType()) {
    query["OrderType"] = request.getOrderType();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasQualificationId()) {
    query["QualificationId"] = request.getQualificationId();
  }

  if (!!request.hasQualificationVersion()) {
    query["QualificationVersion"] = request.getQualificationVersion();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSignId()) {
    query["SignId"] = request.getSignId();
  }

  if (!!request.hasSignIndustry()) {
    query["SignIndustry"] = request.getSignIndustry();
  }

  if (!!request.hasSignName()) {
    query["SignName"] = request.getSignName();
  }

  if (!!request.hasSignSource()) {
    query["SignSource"] = request.getSignSource();
  }

  if (!!request.hasSubmitter()) {
    query["Submitter"] = request.getSubmitter();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDigitalSignOrder"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDigitalSignOrderResponse>();
}

/**
 * @summary Creates an order to add, update, or delete a digital message signature.
 *
 * @description Creates, updates, or deletes a signature.
 *
 * @param request CreateDigitalSignOrderRequest
 * @return CreateDigitalSignOrderResponse
 */
CreateDigitalSignOrderResponse Client::createDigitalSignOrder(const CreateDigitalSignOrderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDigitalSignOrderWithOptions(request, runtime);
}

/**
 * @summary Creates a digital SMS template.
 *
 * @description Use this operation to create a reusable template for your digital SMS messages.
 *
 * @param request CreateDigitalSmsTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDigitalSmsTemplateResponse
 */
CreateDigitalSmsTemplateResponse Client::createDigitalSmsTemplateWithOptions(const CreateDigitalSmsTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.getRemark();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSignName()) {
    query["SignName"] = request.getSignName();
  }

  if (!!request.hasTemplateContents()) {
    query["TemplateContents"] = request.getTemplateContents();
  }

  if (!!request.hasTemplateName()) {
    query["TemplateName"] = request.getTemplateName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDigitalSmsTemplate"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDigitalSmsTemplateResponse>();
}

/**
 * @summary Creates a digital SMS template.
 *
 * @description Use this operation to create a reusable template for your digital SMS messages.
 *
 * @param request CreateDigitalSmsTemplateRequest
 * @return CreateDigitalSmsTemplateResponse
 */
CreateDigitalSmsTemplateResponse Client::createDigitalSmsTemplate(const CreateDigitalSmsTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDigitalSmsTemplateWithOptions(request, runtime);
}

/**
 * @summary 创建终端5G适配情况查询任务
 *
 * @param request CreateRCSMobileCapableTaskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRCSMobileCapableTaskResponse
 */
CreateRCSMobileCapableTaskResponse Client::createRCSMobileCapableTaskWithOptions(const CreateRCSMobileCapableTaskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPhoneNumbersFile()) {
    query["PhoneNumbersFile"] = request.getPhoneNumbersFile();
  }

  if (!!request.hasSignName()) {
    query["SignName"] = request.getSignName();
  }

  if (!!request.hasTemplateCode()) {
    query["TemplateCode"] = request.getTemplateCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateRCSMobileCapableTask"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateRCSMobileCapableTaskResponse>();
}

/**
 * @summary 创建终端5G适配情况查询任务
 *
 * @param request CreateRCSMobileCapableTaskRequest
 * @return CreateRCSMobileCapableTaskResponse
 */
CreateRCSMobileCapableTaskResponse Client::createRCSMobileCapableTask(const CreateRCSMobileCapableTaskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createRCSMobileCapableTaskWithOptions(request, runtime);
}

/**
 * @summary 创建5G消息模板
 *
 * @param request CreateRCSTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRCSTemplateResponse
 */
CreateRCSTemplateResponse Client::createRCSTemplateWithOptions(const CreateRCSTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRelatedSignNames()) {
    query["RelatedSignNames"] = request.getRelatedSignNames();
  }

  if (!!request.hasTemplateContent()) {
    query["TemplateContent"] = request.getTemplateContent();
  }

  if (!!request.hasTemplateFormat()) {
    query["TemplateFormat"] = request.getTemplateFormat();
  }

  if (!!request.hasTemplateMenu()) {
    query["TemplateMenu"] = request.getTemplateMenu();
  }

  if (!!request.hasTemplateName()) {
    query["TemplateName"] = request.getTemplateName();
  }

  if (!!request.hasTemplateRule()) {
    query["TemplateRule"] = request.getTemplateRule();
  }

  if (!!request.hasTemplateType()) {
    query["TemplateType"] = request.getTemplateType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateRCSTemplate"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateRCSTemplateResponse>();
}

/**
 * @summary 创建5G消息模板
 *
 * @param request CreateRCSTemplateRequest
 * @return CreateRCSTemplateResponse
 */
CreateRCSTemplateResponse Client::createRCSTemplate(const CreateRCSTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createRCSTemplateWithOptions(request, runtime);
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
    query["OutId"] = request.getOutId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPhoneNumbers()) {
    query["PhoneNumbers"] = request.getPhoneNumbers();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSourceUrl()) {
    query["SourceUrl"] = request.getSourceUrl();
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
 * @summary The process for using a live app as a signature source has changed. If you use an app as the signature source, you must call this operation to create an ICP filing record for it.
 *
 * @description >Notice: To use a **live app** as a signature source, you must now provide its ICP filing information. This requires you to upload a screenshot of the app\\"s ICP filing.
 *
 * @param request CreateSmsAppIcpRecordRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSmsAppIcpRecordResponse
 */
CreateSmsAppIcpRecordResponse Client::createSmsAppIcpRecordWithOptions(const CreateSmsAppIcpRecordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAppApprovalDate()) {
    query["AppApprovalDate"] = request.getAppApprovalDate();
  }

  if (!!request.hasAppIcpLicenseNumber()) {
    query["AppIcpLicenseNumber"] = request.getAppIcpLicenseNumber();
  }

  if (!!request.hasAppIcpRecordPic()) {
    query["AppIcpRecordPic"] = request.getAppIcpRecordPic();
  }

  if (!!request.hasAppPrincipalUnitName()) {
    query["AppPrincipalUnitName"] = request.getAppPrincipalUnitName();
  }

  if (!!request.hasAppRuntimePic()) {
    query["AppRuntimePic"] = request.getAppRuntimePic();
  }

  if (!!request.hasAppServiceName()) {
    query["AppServiceName"] = request.getAppServiceName();
  }

  if (!!request.hasAppStoreDownloadPic()) {
    query["AppStoreDownloadPic"] = request.getAppStoreDownloadPic();
  }

  if (!!request.hasDomain()) {
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateSmsAppIcpRecord"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSmsAppIcpRecordResponse>();
}

/**
 * @summary The process for using a live app as a signature source has changed. If you use an app as the signature source, you must call this operation to create an ICP filing record for it.
 *
 * @description >Notice: To use a **live app** as a signature source, you must now provide its ICP filing information. This requires you to upload a screenshot of the app\\"s ICP filing.
 *
 * @param request CreateSmsAppIcpRecordRequest
 * @return CreateSmsAppIcpRecordResponse
 */
CreateSmsAppIcpRecordResponse Client::createSmsAppIcpRecord(const CreateSmsAppIcpRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSmsAppIcpRecordWithOptions(request, runtime);
}

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
CreateSmsAuthorizationLetterResponse Client::createSmsAuthorizationLetterWithOptions(const CreateSmsAuthorizationLetterRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateSmsAuthorizationLetterShrinkRequest request = CreateSmsAuthorizationLetterShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasSignList()) {
    request.setSignListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getSignList(), "SignList", "json"));
  }

  json query = {};
  if (!!request.hasAuthorization()) {
    query["Authorization"] = request.getAuthorization();
  }

  if (!!request.hasAuthorizationLetterExpDate()) {
    query["AuthorizationLetterExpDate"] = request.getAuthorizationLetterExpDate();
  }

  if (!!request.hasAuthorizationLetterName()) {
    query["AuthorizationLetterName"] = request.getAuthorizationLetterName();
  }

  if (!!request.hasAuthorizationLetterPic()) {
    query["AuthorizationLetterPic"] = request.getAuthorizationLetterPic();
  }

  if (!!request.hasOrganizationCode()) {
    query["OrganizationCode"] = request.getOrganizationCode();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasProxyAuthorization()) {
    query["ProxyAuthorization"] = request.getProxyAuthorization();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSignListShrink()) {
    query["SignList"] = request.getSignListShrink();
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
 * @summary If the qualification is intended for use by a third party or the requested signature involves third-party rights, you must obtain third-party authorization and create an authorization letter before submitting the application.
 *
 * @description - Before use, please read the [Authorization Letter Specifications](https://help.aliyun.com/document_detail/56741.html). Download the [Authorization Letter Template](https://help-static-aliyun-doc.aliyuncs.com/file-manage-files/zh-CN/20250414/bvpcmo/%E6%8E%88%E6%9D%83%E5%A7%94%E6%89%98%E4%B9%A6%E6%A8%A1%E7%89%88.doc), fill it out and stamp it according to the specifications, and then upload it.
 * - The authorization letter you create can be used when applying for SMS qualifications or SMS signatures. If your qualification or signature is intended for use by a third party, you must create and submit an authorization letter.
 * - After creating an authorization letter, you can call [QuerySmsAuthorizationLetter](~~QuerySmsAuthorizationLetter~~) to query the details of the created authorization letter. Authorization letter information created through the API is synchronized to the Short Message Service console.
 *
 * @param request CreateSmsAuthorizationLetterRequest
 * @return CreateSmsAuthorizationLetterResponse
 */
CreateSmsAuthorizationLetterResponse Client::createSmsAuthorizationLetter(const CreateSmsAuthorizationLetterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSmsAuthorizationLetterWithOptions(request, runtime);
}

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
CreateSmsSignResponse Client::createSmsSignWithOptions(const CreateSmsSignRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateSmsSignShrinkRequest request = CreateSmsSignShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasMoreData()) {
    request.setMoreDataShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getMoreData(), "MoreData", "json"));
  }

  json query = {};
  if (!!request.hasAppIcpRecordId()) {
    query["AppIcpRecordId"] = request.getAppIcpRecordId();
  }

  if (!!request.hasApplySceneContent()) {
    query["ApplySceneContent"] = request.getApplySceneContent();
  }

  if (!!request.hasAuthorizationLetterId()) {
    query["AuthorizationLetterId"] = request.getAuthorizationLetterId();
  }

  if (!!request.hasMoreDataShrink()) {
    query["MoreData"] = request.getMoreDataShrink();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasQualificationId()) {
    query["QualificationId"] = request.getQualificationId();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.getRemark();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSignName()) {
    query["SignName"] = request.getSignName();
  }

  if (!!request.hasSignSource()) {
    query["SignSource"] = request.getSignSource();
  }

  if (!!request.hasSignType()) {
    query["SignType"] = request.getSignType();
  }

  if (!!request.hasThirdParty()) {
    query["ThirdParty"] = request.getThirdParty();
  }

  if (!!request.hasTrademarkId()) {
    query["TrademarkId"] = request.getTrademarkId();
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
CreateSmsSignResponse Client::createSmsSign(const CreateSmsSignRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSmsSignWithOptions(request, runtime);
}

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
CreateSmsTemplateResponse Client::createSmsTemplateWithOptions(const CreateSmsTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateSmsTemplateShrinkRequest request = CreateSmsTemplateShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasMoreData()) {
    request.setMoreDataShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getMoreData(), "MoreData", "json"));
  }

  json query = {};
  if (!!request.hasApplySceneContent()) {
    query["ApplySceneContent"] = request.getApplySceneContent();
  }

  if (!!request.hasIntlType()) {
    query["IntlType"] = request.getIntlType();
  }

  if (!!request.hasMoreDataShrink()) {
    query["MoreData"] = request.getMoreDataShrink();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRelatedSignName()) {
    query["RelatedSignName"] = request.getRelatedSignName();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.getRemark();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTemplateContent()) {
    query["TemplateContent"] = request.getTemplateContent();
  }

  if (!!request.hasTemplateName()) {
    query["TemplateName"] = request.getTemplateName();
  }

  if (!!request.hasTemplateRule()) {
    query["TemplateRule"] = request.getTemplateRule();
  }

  if (!!request.hasTemplateType()) {
    query["TemplateType"] = request.getTemplateType();
  }

  if (!!request.hasTrafficDriving()) {
    query["TrafficDriving"] = request.getTrafficDriving();
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
CreateSmsTemplateResponse Client::createSmsTemplate(const CreateSmsTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSmsTemplateWithOptions(request, runtime);
}

/**
 * @summary Creates a trademark entity. This operation is used when you need to upload trademark information when the signature source is set to trademark.
 *
 * @description The trademark must be searchable on the China Trademark Network of the Trademark Office of the China National Intellectual Property Administration, and the trademark owner must match the enterprise name.
 *
 * @param request CreateSmsTrademarkRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSmsTrademarkResponse
 */
CreateSmsTrademarkResponse Client::createSmsTrademarkWithOptions(const CreateSmsTrademarkRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTrademarkApplicantName()) {
    query["TrademarkApplicantName"] = request.getTrademarkApplicantName();
  }

  if (!!request.hasTrademarkEffExpDate()) {
    query["TrademarkEffExpDate"] = request.getTrademarkEffExpDate();
  }

  if (!!request.hasTrademarkName()) {
    query["TrademarkName"] = request.getTrademarkName();
  }

  if (!!request.hasTrademarkPic()) {
    query["TrademarkPic"] = request.getTrademarkPic();
  }

  if (!!request.hasTrademarkRegistrationNumber()) {
    query["TrademarkRegistrationNumber"] = request.getTrademarkRegistrationNumber();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateSmsTrademark"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSmsTrademarkResponse>();
}

/**
 * @summary Creates a trademark entity. This operation is used when you need to upload trademark information when the signature source is set to trademark.
 *
 * @description The trademark must be searchable on the China Trademark Network of the Trademark Office of the China National Intellectual Property Administration, and the trademark owner must match the enterprise name.
 *
 * @param request CreateSmsTrademarkRequest
 * @return CreateSmsTrademarkResponse
 */
CreateSmsTrademarkResponse Client::createSmsTrademark(const CreateSmsTrademarkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSmsTrademarkWithOptions(request, runtime);
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
    query["ExtCode"] = request.getExtCode();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSignName()) {
    query["SignName"] = request.getSignName();
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
DeleteShortUrlResponse Client::deleteShortUrlWithOptions(const DeleteShortUrlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  json body = {};
  if (!!request.hasSourceUrl()) {
    body["SourceUrl"] = request.getSourceUrl();
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
DeleteShortUrlResponse Client::deleteShortUrl(const DeleteShortUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteShortUrlWithOptions(request, runtime);
}

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
DeleteSmsQualificationResponse Client::deleteSmsQualificationWithOptions(const DeleteSmsQualificationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOrderId()) {
    query["OrderId"] = request.getOrderId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasQualificationGroupId()) {
    query["QualificationGroupId"] = request.getQualificationGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
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
DeleteSmsQualificationResponse Client::deleteSmsQualification(const DeleteSmsQualificationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSmsQualificationWithOptions(request, runtime);
}

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
DeleteSmsSignResponse Client::deleteSmsSignWithOptions(const DeleteSmsSignRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSignName()) {
    query["SignName"] = request.getSignName();
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
 * @summary If you no longer use an SMS signature and need to delete it, call this operation or delete the SMS signature in the SMS Service console.
 *
 * @description - You can delete signatures that are in the Withdrawn, Failed, or Approved state. You cannot delete signatures that are in the Pending Approval state.
 * - Deleted SMS signatures cannot be recovered, and the signature can no longer be used to send SMS messages. Proceed with caution.
 * - Signature deletion operations performed via the API are synchronized to the SMS Service console. For information about how to manage templates in the console, see [SMS signatures](https://help.aliyun.com/document_detail/108073.html).
 *
 * @param request DeleteSmsSignRequest
 * @return DeleteSmsSignResponse
 */
DeleteSmsSignResponse Client::deleteSmsSign(const DeleteSmsSignRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSmsSignWithOptions(request, runtime);
}

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
DeleteSmsTemplateResponse Client::deleteSmsTemplateWithOptions(const DeleteSmsTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTemplateCode()) {
    query["TemplateCode"] = request.getTemplateCode();
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
DeleteSmsTemplateResponse Client::deleteSmsTemplate(const DeleteSmsTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteSmsTemplateWithOptions(request, runtime);
}

/**
 * @summary Queries the card SMS sending records and sending status of a single phone number.
 *
 * @param request GetCardSmsDetailsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCardSmsDetailsResponse
 */
GetCardSmsDetailsResponse Client::getCardSmsDetailsWithOptions(const GetCardSmsDetailsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizCardId()) {
    query["BizCardId"] = request.getBizCardId();
  }

  if (!!request.hasBizDigitId()) {
    query["BizDigitId"] = request.getBizDigitId();
  }

  if (!!request.hasBizSmsId()) {
    query["BizSmsId"] = request.getBizSmsId();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPhoneNumber()) {
    query["PhoneNumber"] = request.getPhoneNumber();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSendDate()) {
    query["SendDate"] = request.getSendDate();
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
 * @summary Queries the card SMS sending records and sending status of a single phone number.
 *
 * @param request GetCardSmsDetailsRequest
 * @return GetCardSmsDetailsResponse
 */
GetCardSmsDetailsResponse Client::getCardSmsDetails(const GetCardSmsDetailsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCardSmsDetailsWithOptions(request, runtime);
}

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
GetCardSmsLinkResponse Client::getCardSmsLinkWithOptions(const GetCardSmsLinkRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCardCodeType()) {
    query["CardCodeType"] = request.getCardCodeType();
  }

  if (!!request.hasCardLinkType()) {
    query["CardLinkType"] = request.getCardLinkType();
  }

  if (!!request.hasCardTemplateCode()) {
    query["CardTemplateCode"] = request.getCardTemplateCode();
  }

  if (!!request.hasCardTemplateParamJson()) {
    query["CardTemplateParamJson"] = request.getCardTemplateParamJson();
  }

  if (!!request.hasCustomShortCodeJson()) {
    query["CustomShortCodeJson"] = request.getCustomShortCodeJson();
  }

  if (!!request.hasDomain()) {
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasOutId()) {
    query["OutId"] = request.getOutId();
  }

  if (!!request.hasPhoneNumberJson()) {
    query["PhoneNumberJson"] = request.getPhoneNumberJson();
  }

  if (!!request.hasSignNameJson()) {
    query["SignNameJson"] = request.getSignNameJson();
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
 * @summary Retrieves the short URL for a card message.
 *
 * @description - 目前卡片短信在内部邀约阶段，请联系您的阿里云商务经理申请开通或联系[阿里云售前咨询](https://help.aliyun.com/document_detail/464625.html?spm=a2c4g.11186623.0.0.213273d4Xe6UEu#section-81n-72q-ybm)。
 * ### QPS限制
 * - 本接口的单用户QPS限制为1000次/秒。超过限制，API调用会被限流，这可能会影响您的业务，请合理调用。
 *
 * @param request GetCardSmsLinkRequest
 * @return GetCardSmsLinkResponse
 */
GetCardSmsLinkResponse Client::getCardSmsLink(const GetCardSmsLinkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCardSmsLinkWithOptions(request, runtime);
}

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
GetMediaResourceIdResponse Client::getMediaResourceIdWithOptions(const GetMediaResourceIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasExtendInfo()) {
    query["ExtendInfo"] = request.getExtendInfo();
  }

  if (!!request.hasFileSize()) {
    query["FileSize"] = request.getFileSize();
  }

  if (!!request.hasMemo()) {
    query["Memo"] = request.getMemo();
  }

  if (!!request.hasOssKey()) {
    query["OssKey"] = request.getOssKey();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
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
 * @summary Converts images and videos uploaded to OSS storage for card SMS into resource data for unified management, and returns a resource ID. You can manage the returned resource ID as needed.
 *
 * @description ### QPS限制
 * 本接口的单用户QPS限制为300次/秒。超过限制，API调用会被限流，这可能会影响您的业务，请合理调用。
 *
 * @param request GetMediaResourceIdRequest
 * @return GetMediaResourceIdResponse
 */
GetMediaResourceIdResponse Client::getMediaResourceId(const GetMediaResourceIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getMediaResourceIdWithOptions(request, runtime);
}

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
 * @summary Retrieves the OSS resource configuration information for card messages. This information is used for subsequent OSS file upload operations.
 *
 * @description - 您在调用卡片短信相关API接口前，首先需要开通卡片短信功能，目前卡片短信在内部邀约阶段，请联系您的阿里云商务经理申请开通或联系[阿里云售前咨询](https://help.aliyun.com/document_detail/464625.html)。
 * - 卡片短信模板中使用的图片、视频等素材资源可上传到OSS文件系统保存。文件上传操作，请参见[OSS文件上传](https://help.aliyun.com/document_detail/437303.html)。
 * ### QPS限制
 * 本接口的单用户QPS限制为300次/秒。超过限制，API调用会被限流，这可能会影响您的业务，请合理调用。
 *
 * @return GetOSSInfoForCardTemplateResponse
 */
GetOSSInfoForCardTemplateResponse Client::getOSSInfoForCardTemplate() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getOSSInfoForCardTemplateWithOptions(runtime);
}

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
GetOSSInfoForUploadFileResponse Client::getOSSInfoForUploadFileWithOptions(const GetOSSInfoForUploadFileRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizType()) {
    query["BizType"] = request.getBizType();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
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
 * @summary Obtains OSS resource configuration information, which will be used for subsequent OSS file upload operations.
 *
 * @description - When you create a signature or template, you can upload materials such as login pages with links, backend page screenshots, software copyrights, and supplementary agreements. These materials help reviewers understand the details of your business. If you have multiple materials, you can combine them into one file. The supported formats are png, jpg, jpeg, doc, docx, and pdf.
 * - Additional materials required for creating a signature or template can be uploaded to the OSS file system for storage. For information about file upload operations, see [Upload files to OSS](https://help.aliyun.com/document_detail/2833114.html).
 *
 * @param request GetOSSInfoForUploadFileRequest
 * @return GetOSSInfoForUploadFileResponse
 */
GetOSSInfoForUploadFileResponse Client::getOSSInfoForUploadFile(const GetOSSInfoForUploadFileRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getOSSInfoForUploadFileWithOptions(request, runtime);
}

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
GetQualificationOssInfoResponse Client::getQualificationOssInfoWithOptions(const GetQualificationOssInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizType()) {
    query["BizType"] = request.getBizType();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
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
 * @summary Obtains the OSS resource configuration information for qualification materials. This configuration information will be used for subsequent uploads of qualification files such as authorization letters and enterprise certificates.
 *
 * @description - When you apply for a qualification or signature, if the purpose is for other use or involves a third party, you must provide an [authorization letter](https://help.aliyun.com/document_detail/56741.html).
 * - After you use this API to obtain the OSS resource configuration information, upload the related qualification materials through OSS. For more information, see [Upload files through OSS](https://help.aliyun.com/document_detail/2833114.html).
 * - The names of files to be uploaded cannot contain Chinese characters or special symbols.
 *
 * @param request GetQualificationOssInfoRequest
 * @return GetQualificationOssInfoResponse
 */
GetQualificationOssInfoResponse Client::getQualificationOssInfo(const GetQualificationOssInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getQualificationOssInfoWithOptions(request, runtime);
}

/**
 * @summary 查询5g短信详情
 *
 * @param request GetRCSSignatureRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetRCSSignatureResponse
 */
GetRCSSignatureResponse Client::getRCSSignatureWithOptions(const GetRCSSignatureRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSignName()) {
    query["SignName"] = request.getSignName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetRCSSignature"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetRCSSignatureResponse>();
}

/**
 * @summary 查询5g短信详情
 *
 * @param request GetRCSSignatureRequest
 * @return GetRCSSignatureResponse
 */
GetRCSSignatureResponse Client::getRCSSignature(const GetRCSSignatureRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getRCSSignatureWithOptions(request, runtime);
}

/**
 * @summary Retrieves the OSS information for OCR.
 *
 * @param request GetSmsOcrOssInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSmsOcrOssInfoResponse
 */
GetSmsOcrOssInfoResponse Client::getSmsOcrOssInfoWithOptions(const GetSmsOcrOssInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTaskType()) {
    query["TaskType"] = request.getTaskType();
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
 * @summary Retrieves the OSS information for OCR.
 *
 * @param request GetSmsOcrOssInfoRequest
 * @return GetSmsOcrOssInfoResponse
 */
GetSmsOcrOssInfoResponse Client::getSmsOcrOssInfo(const GetSmsOcrOssInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSmsOcrOssInfoWithOptions(request, runtime);
}

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
GetSmsSignResponse Client::getSmsSignWithOptions(const GetSmsSignRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSignName()) {
    query["SignName"] = request.getSignName();
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
GetSmsSignResponse Client::getSmsSign(const GetSmsSignRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSmsSignWithOptions(request, runtime);
}

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
GetSmsTemplateResponse Client::getSmsTemplateWithOptions(const GetSmsTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTemplateCode()) {
    query["TemplateCode"] = request.getTemplateCode();
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
GetSmsTemplateResponse Client::getSmsTemplate(const GetSmsTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSmsTemplateWithOptions(request, runtime);
}

/**
 * @summary 查询模板列表详情（新接口）
 *
 * @param tmpReq GetSmsTemplateListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetSmsTemplateListResponse
 */
GetSmsTemplateListResponse Client::getSmsTemplateListWithOptions(const GetSmsTemplateListRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  GetSmsTemplateListShrinkRequest request = GetSmsTemplateListShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasUsableStateList()) {
    request.setUsableStateListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getUsableStateList(), "UsableStateList", "json"));
  }

  json query = {};
  if (!!request.hasAuditStatus()) {
    query["AuditStatus"] = request.getAuditStatus();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageIndex()) {
    query["PageIndex"] = request.getPageIndex();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSignName()) {
    query["SignName"] = request.getSignName();
  }

  if (!!request.hasTemplateCode()) {
    query["TemplateCode"] = request.getTemplateCode();
  }

  if (!!request.hasTemplateName()) {
    query["TemplateName"] = request.getTemplateName();
  }

  if (!!request.hasTemplateTag()) {
    query["TemplateTag"] = request.getTemplateTag();
  }

  if (!!request.hasTemplateType()) {
    query["TemplateType"] = request.getTemplateType();
  }

  if (!!request.hasUsableStateListShrink()) {
    query["UsableStateList"] = request.getUsableStateListShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetSmsTemplateList"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetSmsTemplateListResponse>();
}

/**
 * @summary 查询模板列表详情（新接口）
 *
 * @param request GetSmsTemplateListRequest
 * @return GetSmsTemplateListResponse
 */
GetSmsTemplateListResponse Client::getSmsTemplateList(const GetSmsTemplateListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getSmsTemplateListWithOptions(request, runtime);
}

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
ListTagResourcesResponse Client::listTagResourcesWithOptions(const ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasProdCode()) {
    query["ProdCode"] = request.getProdCode();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
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
 * @summary Tags are markers that you add to templates. Each tag consists of a key-value pair (Key-Value). You can query the template codes bound to a tag key-value pair, or query all tags bound to a specific template.
 *
 * @description You can log on to the Short Message Service (SMS) console and go to the [Template Management](https://dysms.console.aliyun.com/domestic/text/template) page to filter SMS templates that are bound to tag key-value pairs, or click **Details** in the Actions column to view the tags that are bound to the current template.
 * ### QPS limit
 * The per-user QPS limit of this operation is 50 calls per second. If the limit is exceeded, API calls will be throttled, which may affect your business. Call this operation properly.
 *
 * @param request ListTagResourcesRequest
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResources(const ListTagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagResourcesWithOptions(request, runtime);
}

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
ModifySmsSignResponse Client::modifySmsSignWithOptions(const ModifySmsSignRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.getRemark();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSignName()) {
    query["SignName"] = request.getSignName();
  }

  if (!!request.hasSignSource()) {
    query["SignSource"] = request.getSignSource();
  }

  if (!!request.hasSignType()) {
    query["SignType"] = request.getSignType();
  }

  json body = {};
  if (!!request.hasSignFileList()) {
    body["SignFileList"] = request.getSignFileList();
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
 * @summary This operation is discontinued.
 *
 * @description - 根据工信部规定与运营商[相关要求](https://help.aliyun.com/document_detail/2806975.html)，阿里云进行了签名相关API的功能改造。为提升您签名的审核效率和审核通过率，请您使用新接口[UpdateSmsSign-修改短信签名](https://help.aliyun.com/document_detail/2807428.html)。
 * - 仅支持修改未通过审核的签名，请参考[短信审核失败的处理建议](https://help.aliyun.com/document_detail/65990.html)，调用此接口修改后自动提交审核，签名进入待审核状态。
 * - 通过接口修改签名的操作会在短信服务控制台同步，在控制台对签名的相关操作，请参见[短信签名](https://help.aliyun.com/document_detail/108073.html)。
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
ModifySmsTemplateResponse Client::modifySmsTemplateWithOptions(const ModifySmsTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.getRemark();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTemplateCode()) {
    query["TemplateCode"] = request.getTemplateCode();
  }

  if (!!request.hasTemplateContent()) {
    query["TemplateContent"] = request.getTemplateContent();
  }

  if (!!request.hasTemplateName()) {
    query["TemplateName"] = request.getTemplateName();
  }

  if (!!request.hasTemplateType()) {
    query["TemplateType"] = request.getTemplateType();
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
ModifySmsTemplateResponse Client::modifySmsTemplate(const ModifySmsTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return modifySmsTemplateWithOptions(request, runtime);
}

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
QueryCardSmsTemplateResponse Client::queryCardSmsTemplateWithOptions(const QueryCardSmsTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTemplateCode()) {
    query["TemplateCode"] = request.getTemplateCode();
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
QueryCardSmsTemplateResponse Client::queryCardSmsTemplate(const QueryCardSmsTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryCardSmsTemplateWithOptions(request, runtime);
}

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
QueryCardSmsTemplateReportResponse Client::queryCardSmsTemplateReportWithOptions(const QueryCardSmsTemplateReportRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndDate()) {
    query["EndDate"] = request.getEndDate();
  }

  if (!!request.hasStartDate()) {
    query["StartDate"] = request.getStartDate();
  }

  if (!!request.hasTemplateCodes()) {
    query["TemplateCodes"] = request.getTemplateCodes();
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
 * @summary Queries the parsing data of a specified card SMS template. The parsing data includes the number of successful SMS parsing receipts, the number of message exposures, and the number of message clicks.
 *
 * @description ### QPS limit
 * The QPS limit on this operation is 300 calls per second per user. If the number of calls per second exceeds the limit, throttling is triggered. This may affect your business. Call this operation at a reasonable pace.
 *
 * @param request QueryCardSmsTemplateReportRequest
 * @return QueryCardSmsTemplateReportResponse
 */
QueryCardSmsTemplateReportResponse Client::queryCardSmsTemplateReport(const QueryCardSmsTemplateReportRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryCardSmsTemplateReportWithOptions(request, runtime);
}

/**
 * @summary Retrieves the details of a digital SMS signature by its name.
 *
 * @description You can query only the digital SMS signatures that belong to your Alibaba Cloud account.
 *
 * @param request QueryDigitalSignByNameRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryDigitalSignByNameResponse
 */
QueryDigitalSignByNameResponse Client::queryDigitalSignByNameWithOptions(const QueryDigitalSignByNameRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSignName()) {
    query["SignName"] = request.getSignName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryDigitalSignByName"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryDigitalSignByNameResponse>();
}

/**
 * @summary Retrieves the details of a digital SMS signature by its name.
 *
 * @description You can query only the digital SMS signatures that belong to your Alibaba Cloud account.
 *
 * @param request QueryDigitalSignByNameRequest
 * @return QueryDigitalSignByNameResponse
 */
QueryDigitalSignByNameResponse Client::queryDigitalSignByName(const QueryDigitalSignByNameRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryDigitalSignByNameWithOptions(request, runtime);
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
    query["ExtCode"] = request.getExtCode();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSignName()) {
    query["SignName"] = request.getSignName();
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
 * @summary Queries whether a phone number supports card SMS messages.
 *
 * @description - 未开通卡片短信业务的阿里云账号无法调用此API。
 * - 目前卡片短信在内部邀约阶段，请联系您的阿里云商务经理申请开通或[联系阿里云售前咨询](https://help.aliyun.com/document_detail/464625.html)。
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
    request.setMobilesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getMobiles(), "Mobiles", "json"));
  }

  json query = {};
  if (!!request.hasEncryptType()) {
    query["EncryptType"] = request.getEncryptType();
  }

  if (!!request.hasMobilesShrink()) {
    query["Mobiles"] = request.getMobilesShrink();
  }

  if (!!request.hasTemplateCode()) {
    query["TemplateCode"] = request.getTemplateCode();
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
 * @summary Queries whether a phone number supports card SMS messages.
 *
 * @description - 未开通卡片短信业务的阿里云账号无法调用此API。
 * - 目前卡片短信在内部邀约阶段，请联系您的阿里云商务经理申请开通或[联系阿里云售前咨询](https://help.aliyun.com/document_detail/464625.html)。
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
    query["CreateDateEnd"] = request.getCreateDateEnd();
  }

  if (!!request.hasCreateDateStart()) {
    query["CreateDateStart"] = request.getCreateDateStart();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPhoneNumber()) {
    query["PhoneNumber"] = request.getPhoneNumber();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasShortUrl()) {
    query["ShortUrl"] = request.getShortUrl();
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
 * @summary 批量查询终端5G适配情况
 *
 * @param request QueryRCSMobileCapableRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryRCSMobileCapableResponse
 */
QueryRCSMobileCapableResponse Client::queryRCSMobileCapableWithOptions(const QueryRCSMobileCapableRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasPhoneNumbers()) {
    query["PhoneNumbers"] = request.getPhoneNumbers();
  }

  if (!!request.hasSignName()) {
    query["SignName"] = request.getSignName();
  }

  if (!!request.hasTemplateCode()) {
    query["TemplateCode"] = request.getTemplateCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryRCSMobileCapable"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryRCSMobileCapableResponse>();
}

/**
 * @summary 批量查询终端5G适配情况
 *
 * @param request QueryRCSMobileCapableRequest
 * @return QueryRCSMobileCapableResponse
 */
QueryRCSMobileCapableResponse Client::queryRCSMobileCapable(const QueryRCSMobileCapableRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryRCSMobileCapableWithOptions(request, runtime);
}

/**
 * @summary 查询终端5G适配情况任务结果
 *
 * @param request QueryRCSMobileCapableTaskResultRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryRCSMobileCapableTaskResultResponse
 */
QueryRCSMobileCapableTaskResultResponse Client::queryRCSMobileCapableTaskResultWithOptions(const QueryRCSMobileCapableTaskResultRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryRCSMobileCapableTaskResult"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryRCSMobileCapableTaskResultResponse>();
}

/**
 * @summary 查询终端5G适配情况任务结果
 *
 * @param request QueryRCSMobileCapableTaskResultRequest
 * @return QueryRCSMobileCapableTaskResultResponse
 */
QueryRCSMobileCapableTaskResultResponse Client::queryRCSMobileCapableTaskResult(const QueryRCSMobileCapableTaskResultRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryRCSMobileCapableTaskResultWithOptions(request, runtime);
}

/**
 * @summary 查询5G模板详情
 *
 * @param request QueryRCSTemplateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryRCSTemplateResponse
 */
QueryRCSTemplateResponse Client::queryRCSTemplateWithOptions(const QueryRCSTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasTemplateCode()) {
    query["TemplateCode"] = request.getTemplateCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryRCSTemplate"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryRCSTemplateResponse>();
}

/**
 * @summary 查询5G模板详情
 *
 * @param request QueryRCSTemplateRequest
 * @return QueryRCSTemplateResponse
 */
QueryRCSTemplateResponse Client::queryRCSTemplate(const QueryRCSTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryRCSTemplateWithOptions(request, runtime);
}

/**
 * @summary 指定版本查看5G消息固定菜单详情
 *
 * @param request QueryRcsSignMenuByVersionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryRcsSignMenuByVersionResponse
 */
QueryRcsSignMenuByVersionResponse Client::queryRcsSignMenuByVersionWithOptions(const QueryRcsSignMenuByVersionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRcsMenuVersion()) {
    query["RcsMenuVersion"] = request.getRcsMenuVersion();
  }

  if (!!request.hasSignName()) {
    query["SignName"] = request.getSignName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryRcsSignMenuByVersion"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryRcsSignMenuByVersionResponse>();
}

/**
 * @summary 指定版本查看5G消息固定菜单详情
 *
 * @param request QueryRcsSignMenuByVersionRequest
 * @return QueryRcsSignMenuByVersionResponse
 */
QueryRcsSignMenuByVersionResponse Client::queryRcsSignMenuByVersion(const QueryRcsSignMenuByVersionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryRcsSignMenuByVersionWithOptions(request, runtime);
}

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
QuerySendDetailsResponse Client::querySendDetailsWithOptions(const QuerySendDetailsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizId()) {
    query["BizId"] = request.getBizId();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasPhoneNumber()) {
    query["PhoneNumber"] = request.getPhoneNumber();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSendDate()) {
    query["SendDate"] = request.getSendDate();
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
QuerySendDetailsResponse Client::querySendDetails(const QuerySendDetailsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return querySendDetailsWithOptions(request, runtime);
}

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
QuerySendStatisticsResponse Client::querySendStatisticsWithOptions(const QuerySendStatisticsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEndDate()) {
    query["EndDate"] = request.getEndDate();
  }

  if (!!request.hasIsGlobe()) {
    query["IsGlobe"] = request.getIsGlobe();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageIndex()) {
    query["PageIndex"] = request.getPageIndex();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSignName()) {
    query["SignName"] = request.getSignName();
  }

  if (!!request.hasStartDate()) {
    query["StartDate"] = request.getStartDate();
  }

  if (!!request.hasTemplateType()) {
    query["TemplateType"] = request.getTemplateType();
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
 * @summary Queries message delivery statistics, including send dates, the number of successfully sent messages, and the number of received delivery receipts.
 *
 * @description - If you query data over a long time range, the results are paginated. You can specify the page size and page number to navigate through the Delivery Logs.
 * - You can also view delivery details by logging in to the [Short Message Service console](https://dysms.console.aliyun.com/dysms.htm#/overview) and navigating to the **Business Statistics** > **Delivery Logs** page.
 *
 * @param request QuerySendStatisticsRequest
 * @return QuerySendStatisticsResponse
 */
QuerySendStatisticsResponse Client::querySendStatistics(const QuerySendStatisticsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return querySendStatisticsWithOptions(request, runtime);
}

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
QueryShortUrlResponse Client::queryShortUrlWithOptions(const QueryShortUrlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  json body = {};
  if (!!request.hasShortUrl()) {
    body["ShortUrl"] = request.getShortUrl();
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
QueryShortUrlResponse Client::queryShortUrl(const QueryShortUrlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryShortUrlWithOptions(request, runtime);
}

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
QuerySingleSmsQualificationResponse Client::querySingleSmsQualificationWithOptions(const QuerySingleSmsQualificationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOrderId()) {
    query["OrderId"] = request.getOrderId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasQualificationGroupId()) {
    query["QualificationGroupId"] = request.getQualificationGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
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
 * @summary After you apply for SMS qualifications, you can call this operation to query the details of a single qualification.
 *
 * @description - This API queries the details of a single qualification (enterprise information, legal representative information, and administrator information).
 * - To query all qualification information under your current account, or to query review details, call the [QuerySmsQualificationRecord](~~QuerySmsQualificationRecord~~) operation.
 * - Affected by the SMS signature real-name registration requirements, the volume of qualification review tickets is growing rapidly, and the review time may be extended. Please be patient. The review is expected to be completed within 2 business days (review hours: Monday to Sunday 9:00-21:00, postponed for legal holidays). In special cases, the review time may be extended. Please be patient.
 *
 * @param request QuerySingleSmsQualificationRequest
 * @return QuerySingleSmsQualificationResponse
 */
QuerySingleSmsQualificationResponse Client::querySingleSmsQualification(const QuerySingleSmsQualificationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return querySingleSmsQualificationWithOptions(request, runtime);
}

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
QuerySmsAppIcpRecordResponse Client::querySmsAppIcpRecordWithOptions(const QuerySmsAppIcpRecordRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  QuerySmsAppIcpRecordShrinkRequest request = QuerySmsAppIcpRecordShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAppIcpRecordIdList()) {
    request.setAppIcpRecordIdListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAppIcpRecordIdList(), "AppIcpRecordIdList", "json"));
  }

  json query = {};
  if (!!request.hasAppIcpRecordIdListShrink()) {
    query["AppIcpRecordIdList"] = request.getAppIcpRecordIdListShrink();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QuerySmsAppIcpRecord"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QuerySmsAppIcpRecordResponse>();
}

/**
 * @summary Queries icp record details.
 *
 * @description Pass a list of icp record IDs to retrieve their details.
 * For example, call the QuerySmsSignList or GetSmsSign API to obtain the required icp record IDs.
 *
 * @param request QuerySmsAppIcpRecordRequest
 * @return QuerySmsAppIcpRecordResponse
 */
QuerySmsAppIcpRecordResponse Client::querySmsAppIcpRecord(const QuerySmsAppIcpRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return querySmsAppIcpRecordWithOptions(request, runtime);
}

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
QuerySmsAuthorizationLetterResponse Client::querySmsAuthorizationLetterWithOptions(const QuerySmsAuthorizationLetterRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  QuerySmsAuthorizationLetterShrinkRequest request = QuerySmsAuthorizationLetterShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasAuthorizationLetterIdList()) {
    request.setAuthorizationLetterIdListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getAuthorizationLetterIdList(), "AuthorizationLetterIdList", "json"));
  }

  json query = {};
  if (!!request.hasAuthorizationLetterIdListShrink()) {
    query["AuthorizationLetterIdList"] = request.getAuthorizationLetterIdListShrink();
  }

  if (!!request.hasOrganizationCode()) {
    query["OrganizationCode"] = request.getOrganizationCode();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSignName()) {
    query["SignName"] = request.getSignName();
  }

  if (!!request.hasState()) {
    query["State"] = request.getState();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
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
QuerySmsAuthorizationLetterResponse Client::querySmsAuthorizationLetter(const QuerySmsAuthorizationLetterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return querySmsAuthorizationLetterWithOptions(request, runtime);
}

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
QuerySmsQualificationRecordResponse Client::querySmsQualificationRecordWithOptions(const QuerySmsQualificationRecordRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCompanyName()) {
    query["CompanyName"] = request.getCompanyName();
  }

  if (!!request.hasLegalPersonName()) {
    query["LegalPersonName"] = request.getLegalPersonName();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageNo()) {
    query["PageNo"] = request.getPageNo();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasQualificationGroupName()) {
    query["QualificationGroupName"] = request.getQualificationGroupName();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasState()) {
    query["State"] = request.getState();
  }

  if (!!request.hasUseBySelf()) {
    query["UseBySelf"] = request.getUseBySelf();
  }

  if (!!request.hasWorkOrderId()) {
    query["WorkOrderId"] = request.getWorkOrderId();
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
QuerySmsQualificationRecordResponse Client::querySmsQualificationRecord(const QuerySmsQualificationRecordRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return querySmsQualificationRecordWithOptions(request, runtime);
}

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
QuerySmsSignResponse Client::querySmsSignWithOptions(const QuerySmsSignRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSignName()) {
    query["SignName"] = request.getSignName();
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
QuerySmsSignResponse Client::querySmsSign(const QuerySmsSignRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return querySmsSignWithOptions(request, runtime);
}

/**
 * @summary You can call this operation to query all signatures under your account, including signature audit status, signature type, and signature name.
 *
 * @description This operation queries the signature information that was **first created** or the **most recently approved** signature details under your current account. If you need to query more information such as application scenario content or files uploaded during application, you can call the [GetSmsSign](~~GetSmsSign~~) operation to query the audit details of a single signature by signature name.
 *
 * @param request QuerySmsSignListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QuerySmsSignListResponse
 */
QuerySmsSignListResponse Client::querySmsSignListWithOptions(const QuerySmsSignListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageIndex()) {
    query["PageIndex"] = request.getPageIndex();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
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
 * @summary You can call this operation to query all signatures under your account, including signature audit status, signature type, and signature name.
 *
 * @description This operation queries the signature information that was **first created** or the **most recently approved** signature details under your current account. If you need to query more information such as application scenario content or files uploaded during application, you can call the [GetSmsSign](~~GetSmsSign~~) operation to query the audit details of a single signature by signature name.
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
QuerySmsTemplateResponse Client::querySmsTemplateWithOptions(const QuerySmsTemplateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTemplateCode()) {
    query["TemplateCode"] = request.getTemplateCode();
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
QuerySmsTemplateResponse Client::querySmsTemplate(const QuerySmsTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return querySmsTemplateWithOptions(request, runtime);
}

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
QuerySmsTemplateListResponse Client::querySmsTemplateListWithOptions(const QuerySmsTemplateListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPageIndex()) {
    query["PageIndex"] = request.getPageIndex();
  }

  if (!!request.hasPageSize()) {
    query["PageSize"] = request.getPageSize();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
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
 * @summary You can call this operation to query all templates under your account. This way, you can view template details, including the template approval status, template type, and template content.
 *
 * @description - This operation queries the template details of all templates under your current account. To query more details such as the template variable content and the file information uploaded during application, you can call the [GetSmsTemplate](~~GetSmsTemplate~~) operation to query the approval details of a single template by template code.
 * - You can also log on to the Short Message Service (SMS) console and view the template details of all templates under your current account on the [Template Management](https://dysms.console.aliyun.com/domestic/text/template) page.
 *
 * @param request QuerySmsTemplateListRequest
 * @return QuerySmsTemplateListResponse
 */
QuerySmsTemplateListResponse Client::querySmsTemplateList(const QuerySmsTemplateListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return querySmsTemplateListWithOptions(request, runtime);
}

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
QuerySmsTrademarkResponse Client::querySmsTrademarkWithOptions(const QuerySmsTrademarkRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  QuerySmsTrademarkShrinkRequest request = QuerySmsTrademarkShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasTrademarkIdList()) {
    request.setTrademarkIdListShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTrademarkIdList(), "TrademarkIdList", "json"));
  }

  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTrademarkIdListShrink()) {
    query["TrademarkIdList"] = request.getTrademarkIdListShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QuerySmsTrademark"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QuerySmsTrademarkResponse>();
}

/**
 * @summary Queries the details of one or more trademarks.
 *
 * @description This operation retrieves the details of trademarks by using a list of trademark IDs.
 * For example, you can obtain trademark IDs by calling signature query operations such as `QuerySmsSignList` or `GetSmsSign`. You can then use this operation to retrieve the details of each trademark.
 *
 * @param request QuerySmsTrademarkRequest
 * @return QuerySmsTrademarkResponse
 */
QuerySmsTrademarkResponse Client::querySmsTrademark(const QuerySmsTrademarkRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return querySmsTrademarkWithOptions(request, runtime);
}

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
RequiredPhoneCodeResponse Client::requiredPhoneCodeWithOptions(const RequiredPhoneCodeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPhoneNo()) {
    query["PhoneNo"] = request.getPhoneNo();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
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
 * @summary When applying for SMS qualification, the administrator\\"s phone number must be verified. Use this operation to obtain an SMS verification code.
 *
 * @description - After you receive the phone verification code, pass it to the `CertifyCode` parameter of the [SubmitSmsQualification](~~SubmitSmsQualification~~) or [UpdateSmsQualification](~~UpdateSmsQualification~~) operation.
 * - You can call the [ValidPhoneCode](~~ValidPhoneCode~~) operation to verify whether the SMS verification code is correct.
 * - This operation is subject to [throttling](~~44335#section-0wh-xn6-0t7~~). Do not call it too frequently. For the same phone number, a maximum of 1 message per minute, 5 messages per hour, and 10 messages per day are supported.
 *
 * @param request RequiredPhoneCodeRequest
 * @return RequiredPhoneCodeResponse
 */
RequiredPhoneCodeResponse Client::requiredPhoneCode(const RequiredPhoneCodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return requiredPhoneCodeWithOptions(request, runtime);
}

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
SendBatchCardSmsResponse Client::sendBatchCardSmsWithOptions(const SendBatchCardSmsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCardTemplateCode()) {
    query["CardTemplateCode"] = request.getCardTemplateCode();
  }

  if (!!request.hasCardTemplateParamJson()) {
    query["CardTemplateParamJson"] = request.getCardTemplateParamJson();
  }

  if (!!request.hasDigitalTemplateCode()) {
    query["DigitalTemplateCode"] = request.getDigitalTemplateCode();
  }

  if (!!request.hasDigitalTemplateParamJson()) {
    query["DigitalTemplateParamJson"] = request.getDigitalTemplateParamJson();
  }

  if (!!request.hasFallbackType()) {
    query["FallbackType"] = request.getFallbackType();
  }

  if (!!request.hasOutId()) {
    query["OutId"] = request.getOutId();
  }

  if (!!request.hasPhoneNumberJson()) {
    query["PhoneNumberJson"] = request.getPhoneNumberJson();
  }

  if (!!request.hasSignNameJson()) {
    query["SignNameJson"] = request.getSignNameJson();
  }

  if (!!request.hasSmsTemplateCode()) {
    query["SmsTemplateCode"] = request.getSmsTemplateCode();
  }

  if (!!request.hasSmsTemplateParamJson()) {
    query["SmsTemplateParamJson"] = request.getSmsTemplateParamJson();
  }

  if (!!request.hasSmsUpExtendCodeJson()) {
    query["SmsUpExtendCodeJson"] = request.getSmsUpExtendCodeJson();
  }

  if (!!request.hasTemplateCode()) {
    query["TemplateCode"] = request.getTemplateCode();
  }

  if (!!request.hasTemplateParamJson()) {
    query["TemplateParamJson"] = request.getTemplateParamJson();
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
SendBatchCardSmsResponse Client::sendBatchCardSms(const SendBatchCardSmsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return sendBatchCardSmsWithOptions(request, runtime);
}

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
SendBatchSmsResponse Client::sendBatchSmsWithOptions(const SendBatchSmsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOutId()) {
    query["OutId"] = request.getOutId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTemplateCode()) {
    query["TemplateCode"] = request.getTemplateCode();
  }

  json body = {};
  if (!!request.hasPhoneNumberJson()) {
    body["PhoneNumberJson"] = request.getPhoneNumberJson();
  }

  if (!!request.hasSignNameJson()) {
    body["SignNameJson"] = request.getSignNameJson();
  }

  if (!!request.hasSmsUpExtendCodeJson()) {
    body["SmsUpExtendCodeJson"] = request.getSmsUpExtendCodeJson();
  }

  if (!!request.hasTemplateParamJson()) {
    body["TemplateParamJson"] = request.getTemplateParamJson();
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
SendBatchSmsResponse Client::sendBatchSms(const SendBatchSmsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return sendBatchSmsWithOptions(request, runtime);
}

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
SendCardSmsResponse Client::sendCardSmsWithOptions(const SendCardSmsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCardObjects()) {
    query["CardObjects"] = request.getCardObjects();
  }

  if (!!request.hasCardTemplateCode()) {
    query["CardTemplateCode"] = request.getCardTemplateCode();
  }

  if (!!request.hasDigitalTemplateCode()) {
    query["DigitalTemplateCode"] = request.getDigitalTemplateCode();
  }

  if (!!request.hasDigitalTemplateParam()) {
    query["DigitalTemplateParam"] = request.getDigitalTemplateParam();
  }

  if (!!request.hasFallbackType()) {
    query["FallbackType"] = request.getFallbackType();
  }

  if (!!request.hasOutId()) {
    query["OutId"] = request.getOutId();
  }

  if (!!request.hasSignName()) {
    query["SignName"] = request.getSignName();
  }

  if (!!request.hasSmsTemplateCode()) {
    query["SmsTemplateCode"] = request.getSmsTemplateCode();
  }

  if (!!request.hasSmsTemplateParam()) {
    query["SmsTemplateParam"] = request.getSmsTemplateParam();
  }

  if (!!request.hasSmsUpExtendCode()) {
    query["SmsUpExtendCode"] = request.getSmsUpExtendCode();
  }

  if (!!request.hasTemplateCode()) {
    query["TemplateCode"] = request.getTemplateCode();
  }

  if (!!request.hasTemplateParam()) {
    query["TemplateParam"] = request.getTemplateParam();
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
    query["ExpressCompanyCode"] = request.getExpressCompanyCode();
  }

  if (!!request.hasMailNo()) {
    query["MailNo"] = request.getMailNo();
  }

  if (!!request.hasOutId()) {
    query["OutId"] = request.getOutId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPlatformCompanyCode()) {
    query["PlatformCompanyCode"] = request.getPlatformCompanyCode();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSignName()) {
    query["SignName"] = request.getSignName();
  }

  if (!!request.hasTemplateCode()) {
    query["TemplateCode"] = request.getTemplateCode();
  }

  if (!!request.hasTemplateParam()) {
    query["TemplateParam"] = request.getTemplateParam();
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
 * @summary 5G消息首次下行
 *
 * @param request SendRCSRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SendRCSResponse
 */
SendRCSResponse Client::sendRCSWithOptions(const SendRCSRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOutId()) {
    query["OutId"] = request.getOutId();
  }

  if (!!request.hasPhoneNumbers()) {
    query["PhoneNumbers"] = request.getPhoneNumbers();
  }

  if (!!request.hasSignName()) {
    query["SignName"] = request.getSignName();
  }

  if (!!request.hasTemplateCode()) {
    query["TemplateCode"] = request.getTemplateCode();
  }

  if (!!request.hasTemplateParam()) {
    query["TemplateParam"] = request.getTemplateParam();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SendRCS"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SendRCSResponse>();
}

/**
 * @summary 5G消息首次下行
 *
 * @param request SendRCSRequest
 * @return SendRCSResponse
 */
SendRCSResponse Client::sendRCS(const SendRCSRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return sendRCSWithOptions(request, runtime);
}

/**
 * @summary 5G消息交互下行
 *
 * @param request SendRCSReplyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SendRCSReplyResponse
 */
SendRCSReplyResponse Client::sendRCSReplyWithOptions(const SendRCSReplyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasInReplyToRcsID()) {
    query["InReplyToRcsID"] = request.getInReplyToRcsID();
  }

  if (!!request.hasOutId()) {
    query["OutId"] = request.getOutId();
  }

  if (!!request.hasPhoneNumbers()) {
    query["PhoneNumbers"] = request.getPhoneNumbers();
  }

  if (!!request.hasSignName()) {
    query["SignName"] = request.getSignName();
  }

  if (!!request.hasTemplateCode()) {
    query["TemplateCode"] = request.getTemplateCode();
  }

  if (!!request.hasTemplateParam()) {
    query["TemplateParam"] = request.getTemplateParam();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "SendRCSReply"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SendRCSReplyResponse>();
}

/**
 * @summary 5G消息交互下行
 *
 * @param request SendRCSReplyRequest
 * @return SendRCSReplyResponse
 */
SendRCSReplyResponse Client::sendRCSReply(const SendRCSReplyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return sendRCSReplyWithOptions(request, runtime);
}

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
SendSmsResponse Client::sendSmsWithOptions(const SendSmsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOutId()) {
    query["OutId"] = request.getOutId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPhoneNumbers()) {
    query["PhoneNumbers"] = request.getPhoneNumbers();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSignName()) {
    query["SignName"] = request.getSignName();
  }

  if (!!request.hasSmsUpExtendCode()) {
    query["SmsUpExtendCode"] = request.getSmsUpExtendCode();
  }

  if (!!request.hasTemplateCode()) {
    query["TemplateCode"] = request.getTemplateCode();
  }

  if (!!request.hasTemplateParam()) {
    query["TemplateParam"] = request.getTemplateParam();
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
SendSmsResponse Client::sendSms(const SendSmsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return sendSmsWithOptions(request, runtime);
}

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
SmsConversionIntlResponse Client::smsConversionIntlWithOptions(const SmsConversionIntlRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasConversionTime()) {
    query["ConversionTime"] = request.getConversionTime();
  }

  if (!!request.hasDelivered()) {
    query["Delivered"] = request.getDelivered();
  }

  if (!!request.hasMessageId()) {
    query["MessageId"] = request.getMessageId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
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
SmsConversionIntlResponse Client::smsConversionIntl(const SmsConversionIntlRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return smsConversionIntlWithOptions(request, runtime);
}

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
SubmitSmsQualificationResponse Client::submitSmsQualificationWithOptions(const SubmitSmsQualificationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  SubmitSmsQualificationShrinkRequest request = SubmitSmsQualificationShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBusinessLicensePics()) {
    request.setBusinessLicensePicsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBusinessLicensePics(), "BusinessLicensePics", "json"));
  }

  if (!!tmpReq.hasOtherFiles()) {
    request.setOtherFilesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getOtherFiles(), "OtherFiles", "json"));
  }

  json query = {};
  if (!!request.hasAdminIDCardExpDate()) {
    query["AdminIDCardExpDate"] = request.getAdminIDCardExpDate();
  }

  if (!!request.hasAdminIDCardFrontFace()) {
    query["AdminIDCardFrontFace"] = request.getAdminIDCardFrontFace();
  }

  if (!!request.hasAdminIDCardNo()) {
    query["AdminIDCardNo"] = request.getAdminIDCardNo();
  }

  if (!!request.hasAdminIDCardPic()) {
    query["AdminIDCardPic"] = request.getAdminIDCardPic();
  }

  if (!!request.hasAdminIDCardType()) {
    query["AdminIDCardType"] = request.getAdminIDCardType();
  }

  if (!!request.hasAdminName()) {
    query["AdminName"] = request.getAdminName();
  }

  if (!!request.hasAdminPhoneNo()) {
    query["AdminPhoneNo"] = request.getAdminPhoneNo();
  }

  if (!!request.hasBusinessLicensePicsShrink()) {
    query["BusinessLicensePics"] = request.getBusinessLicensePicsShrink();
  }

  if (!!request.hasBussinessLicenseExpDate()) {
    query["BussinessLicenseExpDate"] = request.getBussinessLicenseExpDate();
  }

  if (!!request.hasCertifyCode()) {
    query["CertifyCode"] = request.getCertifyCode();
  }

  if (!!request.hasCompanyName()) {
    query["CompanyName"] = request.getCompanyName();
  }

  if (!!request.hasCompanyType()) {
    query["CompanyType"] = request.getCompanyType();
  }

  if (!!request.hasLegalPersonIDCardNo()) {
    query["LegalPersonIDCardNo"] = request.getLegalPersonIDCardNo();
  }

  if (!!request.hasLegalPersonIDCardType()) {
    query["LegalPersonIDCardType"] = request.getLegalPersonIDCardType();
  }

  if (!!request.hasLegalPersonIdCardBackSide()) {
    query["LegalPersonIdCardBackSide"] = request.getLegalPersonIdCardBackSide();
  }

  if (!!request.hasLegalPersonIdCardEffTime()) {
    query["LegalPersonIdCardEffTime"] = request.getLegalPersonIdCardEffTime();
  }

  if (!!request.hasLegalPersonIdCardFrontSide()) {
    query["LegalPersonIdCardFrontSide"] = request.getLegalPersonIdCardFrontSide();
  }

  if (!!request.hasLegalPersonName()) {
    query["LegalPersonName"] = request.getLegalPersonName();
  }

  if (!!request.hasOrganizationCode()) {
    query["OrganizationCode"] = request.getOrganizationCode();
  }

  if (!!request.hasOtherFilesShrink()) {
    query["OtherFiles"] = request.getOtherFilesShrink();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasQualificationName()) {
    query["QualificationName"] = request.getQualificationName();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.getRemark();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasUseBySelf()) {
    query["UseBySelf"] = request.getUseBySelf();
  }

  if (!!request.hasWhetherShare()) {
    query["WhetherShare"] = request.getWhetherShare();
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
 * @summary Submits an SMS qualification application. As required by the Ministry of Industry and Information Technology (MIIT) and carriers for real-name SMS sending, domestic SMS services require qualification credential information of the signature owner. Apply for an SMS qualification first, and then apply for signatures and templates.
 *
 * @description - Before submitting an application, read [Qualification material description](https://help.aliyun.com/document_detail/2384377.html) and prepare the required qualification materials.
 * - Currently, only users who have completed **verify your identity - Enterprise account** can use the API to apply for SMS qualifications. If your Alibaba Cloud account has completed verify your identity - Individual account, apply for qualifications through the Short Message Service [console](https://dysms.console.aliyun.com/domestic/text/qualification/add), or [upgrade to verify your identity - Enterprise account](https://help.aliyun.com/document_detail/37178.html). [View my account verification type](https://myaccount.console.aliyun.com/cert-info)
 * - Batch qualification applications are not supported. Wait at least 5 seconds between applications.
 *
 * @param request SubmitSmsQualificationRequest
 * @return SubmitSmsQualificationResponse
 */
SubmitSmsQualificationResponse Client::submitSmsQualification(const SubmitSmsQualificationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return submitSmsQualificationWithOptions(request, runtime);
}

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
TagResourcesResponse Client::tagResourcesWithOptions(const TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasProdCode()) {
    query["ProdCode"] = request.getProdCode();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasTag()) {
    query["Tag"] = request.getTag();
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
TagResourcesResponse Client::tagResources(const TagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return tagResourcesWithOptions(request, runtime);
}

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
UntagResourcesResponse Client::untagResourcesWithOptions(const UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAll()) {
    query["All"] = request.getAll();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasProdCode()) {
    query["ProdCode"] = request.getProdCode();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
  }

  if (!!request.hasTagKey()) {
    query["TagKey"] = request.getTagKey();
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
 * @summary Tags can mark resources, allowing enterprises or individuals to categorize templates of the same type for easier search and resource aggregation. If a template is no longer applicable to its currently bound tags, you can unbind the tags from the template. You can delete a single tag or delete tags in batches.
 *
 * @description ### QPS limit
 * The QPS limit per user for this operation is 50 calls per second. If the limit is exceeded, API calls will be throttled, which may affect your business. Please call the operation reasonably.
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
    query["ExistExtCode"] = request.getExistExtCode();
  }

  if (!!request.hasNewExtCode()) {
    query["NewExtCode"] = request.getNewExtCode();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSignName()) {
    query["SignName"] = request.getSignName();
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
 * @summary 编辑5g签名
 *
 * @param request UpdateRCSSignatureRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateRCSSignatureResponse
 */
UpdateRCSSignatureResponse Client::updateRCSSignatureWithOptions(const UpdateRCSSignatureRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackgroundImage()) {
    query["BackgroundImage"] = request.getBackgroundImage();
  }

  if (!!request.hasBubbleColor()) {
    query["BubbleColor"] = request.getBubbleColor();
  }

  if (!!request.hasCategory()) {
    query["Category"] = request.getCategory();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasLatitude()) {
    query["Latitude"] = request.getLatitude();
  }

  if (!!request.hasLogo()) {
    query["Logo"] = request.getLogo();
  }

  if (!!request.hasLongitude()) {
    query["Longitude"] = request.getLongitude();
  }

  if (!!request.hasOfficeAddress()) {
    query["OfficeAddress"] = request.getOfficeAddress();
  }

  if (!!request.hasServiceEmail()) {
    query["ServiceEmail"] = request.getServiceEmail();
  }

  if (!!request.hasServicePhone()) {
    query["ServicePhone"] = request.getServicePhone();
  }

  if (!!request.hasServiceTerms()) {
    query["ServiceTerms"] = request.getServiceTerms();
  }

  if (!!request.hasServiceWebsite()) {
    query["ServiceWebsite"] = request.getServiceWebsite();
  }

  if (!!request.hasSignName()) {
    query["SignName"] = request.getSignName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateRCSSignature"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateRCSSignatureResponse>();
}

/**
 * @summary 编辑5g签名
 *
 * @param request UpdateRCSSignatureRequest
 * @return UpdateRCSSignatureResponse
 */
UpdateRCSSignatureResponse Client::updateRCSSignature(const UpdateRCSSignatureRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateRCSSignatureWithOptions(request, runtime);
}

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
UpdateSmsQualificationResponse Client::updateSmsQualificationWithOptions(const UpdateSmsQualificationRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateSmsQualificationShrinkRequest request = UpdateSmsQualificationShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasBusinessLicensePics()) {
    request.setBusinessLicensePicsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getBusinessLicensePics(), "BusinessLicensePics", "json"));
  }

  if (!!tmpReq.hasOtherFiles()) {
    request.setOtherFilesShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getOtherFiles(), "OtherFiles", "json"));
  }

  json query = {};
  if (!!request.hasAdminIDCardExpDate()) {
    query["AdminIDCardExpDate"] = request.getAdminIDCardExpDate();
  }

  if (!!request.hasAdminIDCardFrontFace()) {
    query["AdminIDCardFrontFace"] = request.getAdminIDCardFrontFace();
  }

  if (!!request.hasAdminIDCardNo()) {
    query["AdminIDCardNo"] = request.getAdminIDCardNo();
  }

  if (!!request.hasAdminIDCardPic()) {
    query["AdminIDCardPic"] = request.getAdminIDCardPic();
  }

  if (!!request.hasAdminIDCardType()) {
    query["AdminIDCardType"] = request.getAdminIDCardType();
  }

  if (!!request.hasAdminName()) {
    query["AdminName"] = request.getAdminName();
  }

  if (!!request.hasAdminPhoneNo()) {
    query["AdminPhoneNo"] = request.getAdminPhoneNo();
  }

  if (!!request.hasBusinessLicensePicsShrink()) {
    query["BusinessLicensePics"] = request.getBusinessLicensePicsShrink();
  }

  if (!!request.hasBussinessLicenseExpDate()) {
    query["BussinessLicenseExpDate"] = request.getBussinessLicenseExpDate();
  }

  if (!!request.hasCertifyCode()) {
    query["CertifyCode"] = request.getCertifyCode();
  }

  if (!!request.hasCompanyName()) {
    query["CompanyName"] = request.getCompanyName();
  }

  if (!!request.hasLegalPersonIDCardNo()) {
    query["LegalPersonIDCardNo"] = request.getLegalPersonIDCardNo();
  }

  if (!!request.hasLegalPersonIDCardType()) {
    query["LegalPersonIDCardType"] = request.getLegalPersonIDCardType();
  }

  if (!!request.hasLegalPersonIdCardBackSide()) {
    query["LegalPersonIdCardBackSide"] = request.getLegalPersonIdCardBackSide();
  }

  if (!!request.hasLegalPersonIdCardEffTime()) {
    query["LegalPersonIdCardEffTime"] = request.getLegalPersonIdCardEffTime();
  }

  if (!!request.hasLegalPersonIdCardFrontSide()) {
    query["LegalPersonIdCardFrontSide"] = request.getLegalPersonIdCardFrontSide();
  }

  if (!!request.hasLegalPersonName()) {
    query["LegalPersonName"] = request.getLegalPersonName();
  }

  if (!!request.hasOrderId()) {
    query["OrderId"] = request.getOrderId();
  }

  if (!!request.hasOtherFilesShrink()) {
    query["OtherFiles"] = request.getOtherFilesShrink();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasQualificationGroupId()) {
    query["QualificationGroupId"] = request.getQualificationGroupId();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
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
UpdateSmsQualificationResponse Client::updateSmsQualification(const UpdateSmsQualificationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateSmsQualificationWithOptions(request, runtime);
}

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
UpdateSmsSignResponse Client::updateSmsSignWithOptions(const UpdateSmsSignRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateSmsSignShrinkRequest request = UpdateSmsSignShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasMoreData()) {
    request.setMoreDataShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getMoreData(), "MoreData", "json"));
  }

  json query = {};
  if (!!request.hasAppIcpRecordId()) {
    query["AppIcpRecordId"] = request.getAppIcpRecordId();
  }

  if (!!request.hasApplySceneContent()) {
    query["ApplySceneContent"] = request.getApplySceneContent();
  }

  if (!!request.hasAuthorizationLetterId()) {
    query["AuthorizationLetterId"] = request.getAuthorizationLetterId();
  }

  if (!!request.hasMoreDataShrink()) {
    query["MoreData"] = request.getMoreDataShrink();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasQualificationId()) {
    query["QualificationId"] = request.getQualificationId();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.getRemark();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasSignName()) {
    query["SignName"] = request.getSignName();
  }

  if (!!request.hasSignSource()) {
    query["SignSource"] = request.getSignSource();
  }

  if (!!request.hasSignType()) {
    query["SignType"] = request.getSignType();
  }

  if (!!request.hasThirdParty()) {
    query["ThirdParty"] = request.getThirdParty();
  }

  if (!!request.hasTrademarkId()) {
    query["TrademarkId"] = request.getTrademarkId();
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
UpdateSmsSignResponse Client::updateSmsSign(const UpdateSmsSignRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateSmsSignWithOptions(request, runtime);
}

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
UpdateSmsTemplateResponse Client::updateSmsTemplateWithOptions(const UpdateSmsTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  UpdateSmsTemplateShrinkRequest request = UpdateSmsTemplateShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasMoreData()) {
    request.setMoreDataShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getMoreData(), "MoreData", "json"));
  }

  json query = {};
  if (!!request.hasApplySceneContent()) {
    query["ApplySceneContent"] = request.getApplySceneContent();
  }

  if (!!request.hasIntlType()) {
    query["IntlType"] = request.getIntlType();
  }

  if (!!request.hasMoreDataShrink()) {
    query["MoreData"] = request.getMoreDataShrink();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRelatedSignName()) {
    query["RelatedSignName"] = request.getRelatedSignName();
  }

  if (!!request.hasRemark()) {
    query["Remark"] = request.getRemark();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTemplateCode()) {
    query["TemplateCode"] = request.getTemplateCode();
  }

  if (!!request.hasTemplateContent()) {
    query["TemplateContent"] = request.getTemplateContent();
  }

  if (!!request.hasTemplateName()) {
    query["TemplateName"] = request.getTemplateName();
  }

  if (!!request.hasTemplateRule()) {
    query["TemplateRule"] = request.getTemplateRule();
  }

  if (!!request.hasTemplateType()) {
    query["TemplateType"] = request.getTemplateType();
  }

  if (!!request.hasTrafficDriving()) {
    query["TrafficDriving"] = request.getTrafficDriving();
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
UpdateSmsTemplateResponse Client::updateSmsTemplate(const UpdateSmsTemplateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateSmsTemplateWithOptions(request, runtime);
}

/**
 * @summary 升级文本短信为5g签名
 *
 * @param request UpgradeToRCSSignatureRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpgradeToRCSSignatureResponse
 */
UpgradeToRCSSignatureResponse Client::upgradeToRCSSignatureWithOptions(const UpgradeToRCSSignatureRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBackgroundImage()) {
    query["BackgroundImage"] = request.getBackgroundImage();
  }

  if (!!request.hasBubbleColor()) {
    query["BubbleColor"] = request.getBubbleColor();
  }

  if (!!request.hasCategory()) {
    query["Category"] = request.getCategory();
  }

  if (!!request.hasDescription()) {
    query["Description"] = request.getDescription();
  }

  if (!!request.hasLatitude()) {
    query["Latitude"] = request.getLatitude();
  }

  if (!!request.hasLogo()) {
    query["Logo"] = request.getLogo();
  }

  if (!!request.hasLongitude()) {
    query["Longitude"] = request.getLongitude();
  }

  if (!!request.hasOfficeAddress()) {
    query["OfficeAddress"] = request.getOfficeAddress();
  }

  if (!!request.hasServiceEmail()) {
    query["ServiceEmail"] = request.getServiceEmail();
  }

  if (!!request.hasServicePhone()) {
    query["ServicePhone"] = request.getServicePhone();
  }

  if (!!request.hasServiceTerms()) {
    query["ServiceTerms"] = request.getServiceTerms();
  }

  if (!!request.hasServiceWebsite()) {
    query["ServiceWebsite"] = request.getServiceWebsite();
  }

  if (!!request.hasSignName()) {
    query["SignName"] = request.getSignName();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpgradeToRCSSignature"},
    {"version" , "2017-05-25"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpgradeToRCSSignatureResponse>();
}

/**
 * @summary 升级文本短信为5g签名
 *
 * @param request UpgradeToRCSSignatureRequest
 * @return UpgradeToRCSSignatureResponse
 */
UpgradeToRCSSignatureResponse Client::upgradeToRCSSignature(const UpgradeToRCSSignatureRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return upgradeToRCSSignatureWithOptions(request, runtime);
}

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
ValidPhoneCodeResponse Client::validPhoneCodeWithOptions(const ValidPhoneCodeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCertifyCode()) {
    query["CertifyCode"] = request.getCertifyCode();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPhoneNo()) {
    query["PhoneNo"] = request.getPhoneNo();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
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
 * @summary When applying for SMS qualification, the administrator\\"s phone number must be verified. This operation verifies the phone number and the received verification code.
 *
 * @description - Call the [RequiredPhoneCode](~~RequiredPhoneCode~~) operation first. Alibaba Cloud sends an SMS verification code to the phone number that you provided.
 * - This operation does not affect the SMS qualification application process and is used only to verify the SMS verification code. When you submit the actual application, pass the verification code into the `CertifyCode` parameter of the [SubmitSmsQualification](~~SubmitSmsQualification~~) operation.
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
    query["ExpressCompanyCode"] = request.getExpressCompanyCode();
  }

  if (!!request.hasMailNo()) {
    query["MailNo"] = request.getMailNo();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPlatformCompanyCode()) {
    query["PlatformCompanyCode"] = request.getPlatformCompanyCode();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
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