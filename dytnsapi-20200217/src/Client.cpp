#include <darabonba/Core.hpp>
#include <alibabacloud/Dytnsapi20200217.hpp>
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
using namespace AlibabaCloud::Dytnsapi20200217::Models;
namespace AlibabaCloud
{
namespace Dytnsapi20200217
{

AlibabaCloud::Dytnsapi20200217::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"us-west-1" , "dytnsapi.aliyuncs.com"},
    {"us-east-1" , "dytnsapi.aliyuncs.com"},
    {"me-east-1" , "dytnsapi.aliyuncs.com"},
    {"eu-west-1" , "dytnsapi.aliyuncs.com"},
    {"eu-central-1" , "dytnsapi.aliyuncs.com"},
    {"cn-zhangjiakou" , "dytnsapi.aliyuncs.com"},
    {"cn-wulanchabu" , "dytnsapi.aliyuncs.com"},
    {"cn-shenzhen-finance-1" , "dytnsapi.aliyuncs.com"},
    {"cn-shenzhen" , "dytnsapi.aliyuncs.com"},
    {"cn-shanghai-finance-1" , "dytnsapi.aliyuncs.com"},
    {"cn-shanghai" , "dytnsapi.aliyuncs.com"},
    {"cn-qingdao" , "dytnsapi.aliyuncs.com"},
    {"cn-huhehaote" , "dytnsapi.aliyuncs.com"},
    {"cn-hongkong" , "dytnsapi.aliyuncs.com"},
    {"cn-hangzhou-finance" , "dytnsapi.aliyuncs.com"},
    {"cn-hangzhou" , "dytnsapi.aliyuncs.com"},
    {"cn-chengdu" , "dytnsapi.aliyuncs.com"},
    {"cn-beijing-finance-1" , "dytnsapi.aliyuncs.com"},
    {"cn-beijing" , "dytnsapi.aliyuncs.com"},
    {"ap-southeast-5" , "dytnsapi.aliyuncs.com"},
    {"ap-southeast-3" , "dytnsapi.aliyuncs.com"},
    {"ap-southeast-1" , "dytnsapi.aliyuncs.com"},
    {"ap-northeast-1" , "dytnsapi.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("dytnsapi", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
CertNoThreeElementVerificationResponse Client::certNoThreeElementVerificationWithOptions(const CertNoThreeElementVerificationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthCode()) {
    query["AuthCode"] = request.getAuthCode();
  }

  if (!!request.hasCertName()) {
    query["CertName"] = request.getCertName();
  }

  if (!!request.hasCertNo()) {
    query["CertNo"] = request.getCertNo();
  }

  if (!!request.hasCertPicture()) {
    query["CertPicture"] = request.getCertPicture();
  }

  if (!!request.hasMask()) {
    query["Mask"] = request.getMask();
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
    {"action" , "CertNoThreeElementVerification"},
    {"version" , "2020-02-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CertNoThreeElementVerificationResponse>();
}

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
CertNoThreeElementVerificationResponse Client::certNoThreeElementVerification(const CertNoThreeElementVerificationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return certNoThreeElementVerificationWithOptions(request, runtime);
}

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
CertNoTwoElementVerificationResponse Client::certNoTwoElementVerificationWithOptions(const CertNoTwoElementVerificationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthCode()) {
    query["AuthCode"] = request.getAuthCode();
  }

  if (!!request.hasCertName()) {
    query["CertName"] = request.getCertName();
  }

  if (!!request.hasCertNo()) {
    query["CertNo"] = request.getCertNo();
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
    {"action" , "CertNoTwoElementVerification"},
    {"version" , "2020-02-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CertNoTwoElementVerificationResponse>();
}

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
CertNoTwoElementVerificationResponse Client::certNoTwoElementVerification(const CertNoTwoElementVerificationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return certNoTwoElementVerificationWithOptions(request, runtime);
}

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
CompanyFourElementsVerificationResponse Client::companyFourElementsVerificationWithOptions(const CompanyFourElementsVerificationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthCode()) {
    query["AuthCode"] = request.getAuthCode();
  }

  if (!!request.hasEpCertName()) {
    query["EpCertName"] = request.getEpCertName();
  }

  if (!!request.hasEpCertNo()) {
    query["EpCertNo"] = request.getEpCertNo();
  }

  if (!!request.hasLegalPersonCertName()) {
    query["LegalPersonCertName"] = request.getLegalPersonCertName();
  }

  if (!!request.hasLegalPersonCertNo()) {
    query["LegalPersonCertNo"] = request.getLegalPersonCertNo();
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
    {"action" , "CompanyFourElementsVerification"},
    {"version" , "2020-02-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CompanyFourElementsVerificationResponse>();
}

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
CompanyFourElementsVerificationResponse Client::companyFourElementsVerification(const CompanyFourElementsVerificationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return companyFourElementsVerificationWithOptions(request, runtime);
}

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
CompanyThreeElementsVerificationResponse Client::companyThreeElementsVerificationWithOptions(const CompanyThreeElementsVerificationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthCode()) {
    query["AuthCode"] = request.getAuthCode();
  }

  if (!!request.hasEpCertName()) {
    query["EpCertName"] = request.getEpCertName();
  }

  if (!!request.hasEpCertNo()) {
    query["EpCertNo"] = request.getEpCertNo();
  }

  if (!!request.hasLegalPersonCertName()) {
    query["LegalPersonCertName"] = request.getLegalPersonCertName();
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
    {"action" , "CompanyThreeElementsVerification"},
    {"version" , "2020-02-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CompanyThreeElementsVerificationResponse>();
}

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
CompanyThreeElementsVerificationResponse Client::companyThreeElementsVerification(const CompanyThreeElementsVerificationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return companyThreeElementsVerificationWithOptions(request, runtime);
}

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
CompanyTwoElementsVerificationResponse Client::companyTwoElementsVerificationWithOptions(const CompanyTwoElementsVerificationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthCode()) {
    query["AuthCode"] = request.getAuthCode();
  }

  if (!!request.hasEpCertName()) {
    query["EpCertName"] = request.getEpCertName();
  }

  if (!!request.hasEpCertNo()) {
    query["EpCertNo"] = request.getEpCertNo();
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
    {"action" , "CompanyTwoElementsVerification"},
    {"version" , "2020-02-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CompanyTwoElementsVerificationResponse>();
}

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
CompanyTwoElementsVerificationResponse Client::companyTwoElementsVerification(const CompanyTwoElementsVerificationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return companyTwoElementsVerificationWithOptions(request, runtime);
}

/**
 * @summary Deletes a contact.
 *
 * @description - Make sure you have activated Phone Number Identity Service before calling this operation.
 *
 * @param request DeleteContactsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteContactsResponse
 */
DeleteContactsResponse Client::deleteContactsWithOptions(const DeleteContactsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactId()) {
    query["ContactId"] = request.getContactId();
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
    {"action" , "DeleteContacts"},
    {"version" , "2020-02-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteContactsResponse>();
}

/**
 * @summary Deletes a contact.
 *
 * @description - Make sure you have activated Phone Number Identity Service before calling this operation.
 *
 * @param request DeleteContactsRequest
 * @return DeleteContactsResponse
 */
DeleteContactsResponse Client::deleteContacts(const DeleteContactsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteContactsWithOptions(request, runtime);
}

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
DescribeEmptyNumberResponse Client::describeEmptyNumberWithOptions(const DescribeEmptyNumberRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthCode()) {
    query["AuthCode"] = request.getAuthCode();
  }

  if (!!request.hasInputNumber()) {
    query["InputNumber"] = request.getInputNumber();
  }

  if (!!request.hasMask()) {
    query["Mask"] = request.getMask();
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
    {"action" , "DescribeEmptyNumber"},
    {"version" , "2020-02-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeEmptyNumberResponse>();
}

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
DescribeEmptyNumberResponse Client::describeEmptyNumber(const DescribeEmptyNumberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeEmptyNumberWithOptions(request, runtime);
}

/**
 * @summary 号码归属地查询v2
 *
 * @param request DescribeMobileOperatorAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeMobileOperatorAttributeResponse
 */
DescribeMobileOperatorAttributeResponse Client::describeMobileOperatorAttributeWithOptions(const DescribeMobileOperatorAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthCode()) {
    query["AuthCode"] = request.getAuthCode();
  }

  if (!!request.hasInputNumber()) {
    query["InputNumber"] = request.getInputNumber();
  }

  if (!!request.hasMask()) {
    query["Mask"] = request.getMask();
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
    {"action" , "DescribeMobileOperatorAttribute"},
    {"version" , "2020-02-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeMobileOperatorAttributeResponse>();
}

/**
 * @summary 号码归属地查询v2
 *
 * @param request DescribeMobileOperatorAttributeRequest
 * @return DescribeMobileOperatorAttributeResponse
 */
DescribeMobileOperatorAttributeResponse Client::describeMobileOperatorAttribute(const DescribeMobileOperatorAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeMobileOperatorAttributeWithOptions(request, runtime);
}

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
DescribePhoneNumberAnalysisResponse Client::describePhoneNumberAnalysisWithOptions(const DescribePhoneNumberAnalysisRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthCode()) {
    query["AuthCode"] = request.getAuthCode();
  }

  if (!!request.hasInputNumber()) {
    query["InputNumber"] = request.getInputNumber();
  }

  if (!!request.hasMask()) {
    query["Mask"] = request.getMask();
  }

  if (!!request.hasNumberType()) {
    query["NumberType"] = request.getNumberType();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRate()) {
    query["Rate"] = request.getRate();
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
    {"action" , "DescribePhoneNumberAnalysis"},
    {"version" , "2020-02-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePhoneNumberAnalysisResponse>();
}

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
DescribePhoneNumberAnalysisResponse Client::describePhoneNumberAnalysis(const DescribePhoneNumberAnalysisRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePhoneNumberAnalysisWithOptions(request, runtime);
}

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
DescribePhoneNumberAnalysisAIResponse Client::describePhoneNumberAnalysisAIWithOptions(const DescribePhoneNumberAnalysisAIRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthCode()) {
    query["AuthCode"] = request.getAuthCode();
  }

  if (!!request.hasInputNumber()) {
    query["InputNumber"] = request.getInputNumber();
  }

  if (!!request.hasModelConfig()) {
    query["ModelConfig"] = request.getModelConfig();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRate()) {
    query["Rate"] = request.getRate();
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
    {"action" , "DescribePhoneNumberAnalysisAI"},
    {"version" , "2020-02-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePhoneNumberAnalysisAIResponse>();
}

/**
 * @summary Get the phone number analysis result.
 *
 * @description Before using this operation, log on to the Cell Phone Number Service console, go to the Tag Square page, find the corresponding tag, click Apply to activate, and fill in the application materials. You can use the operation after the application is approved.
 * Make sure that you fully understand the billing of the Cell Phone Number Service before you use this operation.
 *
 * @param request DescribePhoneNumberAnalysisAIRequest
 * @return DescribePhoneNumberAnalysisAIResponse
 */
DescribePhoneNumberAnalysisAIResponse Client::describePhoneNumberAnalysisAI(const DescribePhoneNumberAnalysisAIRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePhoneNumberAnalysisAIWithOptions(request, runtime);
}

/**
 * @summary 号码分析服务pai供应商批量查询接口
 *
 * @param request DescribePhoneNumberAnalysisPaiRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePhoneNumberAnalysisPaiResponse
 */
DescribePhoneNumberAnalysisPaiResponse Client::describePhoneNumberAnalysisPaiWithOptions(const DescribePhoneNumberAnalysisPaiRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthCode()) {
    query["AuthCode"] = request.getAuthCode();
  }

  if (!!request.hasInputNumber()) {
    query["InputNumber"] = request.getInputNumber();
  }

  if (!!request.hasModelConfig()) {
    query["ModelConfig"] = request.getModelConfig();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasRate()) {
    query["Rate"] = request.getRate();
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
    {"action" , "DescribePhoneNumberAnalysisPai"},
    {"version" , "2020-02-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePhoneNumberAnalysisPaiResponse>();
}

/**
 * @summary 号码分析服务pai供应商批量查询接口
 *
 * @param request DescribePhoneNumberAnalysisPaiRequest
 * @return DescribePhoneNumberAnalysisPaiResponse
 */
DescribePhoneNumberAnalysisPaiResponse Client::describePhoneNumberAnalysisPai(const DescribePhoneNumberAnalysisPaiRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePhoneNumberAnalysisPaiWithOptions(request, runtime);
}

/**
 * @summary 泛行业人群筛选
 *
 * @param request DescribePhoneNumberAnalysisTransparentRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePhoneNumberAnalysisTransparentResponse
 */
DescribePhoneNumberAnalysisTransparentResponse Client::describePhoneNumberAnalysisTransparentWithOptions(const DescribePhoneNumberAnalysisTransparentRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthCode()) {
    query["AuthCode"] = request.getAuthCode();
  }

  if (!!request.hasInputNumber()) {
    query["InputNumber"] = request.getInputNumber();
  }

  if (!!request.hasIp()) {
    query["Ip"] = request.getIp();
  }

  if (!!request.hasNumberType()) {
    query["NumberType"] = request.getNumberType();
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
    {"action" , "DescribePhoneNumberAnalysisTransparent"},
    {"version" , "2020-02-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePhoneNumberAnalysisTransparentResponse>();
}

/**
 * @summary 泛行业人群筛选
 *
 * @param request DescribePhoneNumberAnalysisTransparentRequest
 * @return DescribePhoneNumberAnalysisTransparentResponse
 */
DescribePhoneNumberAnalysisTransparentResponse Client::describePhoneNumberAnalysisTransparent(const DescribePhoneNumberAnalysisTransparentRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePhoneNumberAnalysisTransparentWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI DescribePhoneNumberAttribute is deprecated, please use Dytnsapi::2020-02-17::DescribePhoneNumberOperatorAttribute instead.
 *
 * @param request DescribePhoneNumberAttributeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePhoneNumberAttributeResponse
 */
DescribePhoneNumberAttributeResponse Client::describePhoneNumberAttributeWithOptions(const DescribePhoneNumberAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePhoneNumberAttribute"},
    {"version" , "2020-02-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePhoneNumberAttributeResponse>();
}

/**
 * @deprecated OpenAPI DescribePhoneNumberAttribute is deprecated, please use Dytnsapi::2020-02-17::DescribePhoneNumberOperatorAttribute instead.
 *
 * @param request DescribePhoneNumberAttributeRequest
 * @return DescribePhoneNumberAttributeResponse
 */
DescribePhoneNumberAttributeResponse Client::describePhoneNumberAttribute(const DescribePhoneNumberAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePhoneNumberAttributeWithOptions(request, runtime);
}

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
DescribePhoneNumberOnlineTimeResponse Client::describePhoneNumberOnlineTimeWithOptions(const DescribePhoneNumberOnlineTimeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthCode()) {
    query["AuthCode"] = request.getAuthCode();
  }

  if (!!request.hasCarrier()) {
    query["Carrier"] = request.getCarrier();
  }

  if (!!request.hasInputNumber()) {
    query["InputNumber"] = request.getInputNumber();
  }

  if (!!request.hasMask()) {
    query["Mask"] = request.getMask();
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
    {"action" , "DescribePhoneNumberOnlineTime"},
    {"version" , "2020-02-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePhoneNumberOnlineTimeResponse>();
}

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
DescribePhoneNumberOnlineTimeResponse Client::describePhoneNumberOnlineTime(const DescribePhoneNumberOnlineTimeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePhoneNumberOnlineTimeWithOptions(request, runtime);
}

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
DescribePhoneNumberOperatorAttributeResponse Client::describePhoneNumberOperatorAttributeWithOptions(const DescribePhoneNumberOperatorAttributeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthCode()) {
    query["AuthCode"] = request.getAuthCode();
  }

  if (!!request.hasFlowName()) {
    query["FlowName"] = request.getFlowName();
  }

  if (!!request.hasInputNumber()) {
    query["InputNumber"] = request.getInputNumber();
  }

  if (!!request.hasMask()) {
    query["Mask"] = request.getMask();
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

  if (!!request.hasResultCount()) {
    query["ResultCount"] = request.getResultCount();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePhoneNumberOperatorAttribute"},
    {"version" , "2020-02-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePhoneNumberOperatorAttributeResponse>();
}

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
DescribePhoneNumberOperatorAttributeResponse Client::describePhoneNumberOperatorAttribute(const DescribePhoneNumberOperatorAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePhoneNumberOperatorAttributeWithOptions(request, runtime);
}

/**
 * @summary 号码归属服务(包年包月客户专用)
 *
 * @param request DescribePhoneNumberOperatorAttributeAnnualRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePhoneNumberOperatorAttributeAnnualResponse
 */
DescribePhoneNumberOperatorAttributeAnnualResponse Client::describePhoneNumberOperatorAttributeAnnualWithOptions(const DescribePhoneNumberOperatorAttributeAnnualRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthCode()) {
    query["AuthCode"] = request.getAuthCode();
  }

  if (!!request.hasMask()) {
    query["Mask"] = request.getMask();
  }

  if (!!request.hasNumber()) {
    query["Number"] = request.getNumber();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePhoneNumberOperatorAttributeAnnual"},
    {"version" , "2020-02-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePhoneNumberOperatorAttributeAnnualResponse>();
}

/**
 * @summary 号码归属服务(包年包月客户专用)
 *
 * @param request DescribePhoneNumberOperatorAttributeAnnualRequest
 * @return DescribePhoneNumberOperatorAttributeAnnualResponse
 */
DescribePhoneNumberOperatorAttributeAnnualResponse Client::describePhoneNumberOperatorAttributeAnnual(const DescribePhoneNumberOperatorAttributeAnnualRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePhoneNumberOperatorAttributeAnnualWithOptions(request, runtime);
}

/**
 * @summary 号码归属服务(包年包月客户专用)
 *
 * @param request DescribePhoneNumberOperatorAttributeAnnualUseRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePhoneNumberOperatorAttributeAnnualUseResponse
 */
DescribePhoneNumberOperatorAttributeAnnualUseResponse Client::describePhoneNumberOperatorAttributeAnnualUseWithOptions(const DescribePhoneNumberOperatorAttributeAnnualUseRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthCode()) {
    query["AuthCode"] = request.getAuthCode();
  }

  if (!!request.hasInputNumber()) {
    query["InputNumber"] = request.getInputNumber();
  }

  if (!!request.hasMask()) {
    query["Mask"] = request.getMask();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePhoneNumberOperatorAttributeAnnualUse"},
    {"version" , "2020-02-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePhoneNumberOperatorAttributeAnnualUseResponse>();
}

/**
 * @summary 号码归属服务(包年包月客户专用)
 *
 * @param request DescribePhoneNumberOperatorAttributeAnnualUseRequest
 * @return DescribePhoneNumberOperatorAttributeAnnualUseResponse
 */
DescribePhoneNumberOperatorAttributeAnnualUseResponse Client::describePhoneNumberOperatorAttributeAnnualUse(const DescribePhoneNumberOperatorAttributeAnnualUseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePhoneNumberOperatorAttributeAnnualUseWithOptions(request, runtime);
}

/**
 * @summary 风险用户评分
 *
 * @param request DescribePhoneNumberRiskRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePhoneNumberRiskResponse
 */
DescribePhoneNumberRiskResponse Client::describePhoneNumberRiskWithOptions(const DescribePhoneNumberRiskRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthCode()) {
    query["AuthCode"] = request.getAuthCode();
  }

  if (!!request.hasInputNumber()) {
    query["InputNumber"] = request.getInputNumber();
  }

  if (!!request.hasMask()) {
    query["Mask"] = request.getMask();
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
    {"action" , "DescribePhoneNumberRisk"},
    {"version" , "2020-02-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePhoneNumberRiskResponse>();
}

/**
 * @summary 风险用户评分
 *
 * @param request DescribePhoneNumberRiskRequest
 * @return DescribePhoneNumberRiskResponse
 */
DescribePhoneNumberRiskResponse Client::describePhoneNumberRisk(const DescribePhoneNumberRiskRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePhoneNumberRiskWithOptions(request, runtime);
}

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
DescribePhoneTwiceTelVerifyResponse Client::describePhoneTwiceTelVerifyWithOptions(const DescribePhoneTwiceTelVerifyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthCode()) {
    query["AuthCode"] = request.getAuthCode();
  }

  if (!!request.hasInputNumber()) {
    query["InputNumber"] = request.getInputNumber();
  }

  if (!!request.hasMask()) {
    query["Mask"] = request.getMask();
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

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePhoneTwiceTelVerify"},
    {"version" , "2020-02-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePhoneTwiceTelVerifyResponse>();
}

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
DescribePhoneTwiceTelVerifyResponse Client::describePhoneTwiceTelVerify(const DescribePhoneTwiceTelVerifyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePhoneTwiceTelVerifyWithOptions(request, runtime);
}

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
GetUAIDApplyTokenSignResponse Client::getUAIDApplyTokenSignWithOptions(const GetUAIDApplyTokenSignRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthCode()) {
    query["AuthCode"] = request.getAuthCode();
  }

  if (!!request.hasCarrier()) {
    query["Carrier"] = request.getCarrier();
  }

  if (!!request.hasClientType()) {
    query["ClientType"] = request.getClientType();
  }

  if (!!request.hasFormat()) {
    query["Format"] = request.getFormat();
  }

  if (!!request.hasOutId()) {
    query["OutId"] = request.getOutId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasParamKey()) {
    query["ParamKey"] = request.getParamKey();
  }

  if (!!request.hasParamStr()) {
    query["ParamStr"] = request.getParamStr();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTime()) {
    query["Time"] = request.getTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetUAIDApplyTokenSign"},
    {"version" , "2020-02-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetUAIDApplyTokenSignResponse>();
}

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
GetUAIDApplyTokenSignResponse Client::getUAIDApplyTokenSign(const GetUAIDApplyTokenSignRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getUAIDApplyTokenSignWithOptions(request, runtime);
}

/**
 * @summary 获取号码采集服务申请Token所需的签名字段
 *
 * @param request GetUAIDConversionSignRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetUAIDConversionSignResponse
 */
GetUAIDConversionSignResponse Client::getUAIDConversionSignWithOptions(const GetUAIDConversionSignRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthCode()) {
    query["AuthCode"] = request.getAuthCode();
  }

  if (!!request.hasCarrier()) {
    query["Carrier"] = request.getCarrier();
  }

  if (!!request.hasClientType()) {
    query["ClientType"] = request.getClientType();
  }

  if (!!request.hasFormat()) {
    query["Format"] = request.getFormat();
  }

  if (!!request.hasOutId()) {
    query["OutId"] = request.getOutId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasParamKey()) {
    query["ParamKey"] = request.getParamKey();
  }

  if (!!request.hasParamStr()) {
    query["ParamStr"] = request.getParamStr();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasTime()) {
    query["Time"] = request.getTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetUAIDConversionSign"},
    {"version" , "2020-02-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetUAIDConversionSignResponse>();
}

/**
 * @summary 获取号码采集服务申请Token所需的签名字段
 *
 * @param request GetUAIDConversionSignRequest
 * @return GetUAIDConversionSignResponse
 */
GetUAIDConversionSignResponse Client::getUAIDConversionSign(const GetUAIDConversionSignRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getUAIDConversionSignWithOptions(request, runtime);
}

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
HistoryThreeElementsVerificationResponse Client::historyThreeElementsVerificationWithOptions(const HistoryThreeElementsVerificationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthCode()) {
    query["AuthCode"] = request.getAuthCode();
  }

  if (!!request.hasCarrier()) {
    query["Carrier"] = request.getCarrier();
  }

  if (!!request.hasCertCode()) {
    query["CertCode"] = request.getCertCode();
  }

  if (!!request.hasInputNumber()) {
    query["InputNumber"] = request.getInputNumber();
  }

  if (!!request.hasMask()) {
    query["Mask"] = request.getMask();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
  }

  if (!!request.hasVerificationTime()) {
    query["VerificationTime"] = request.getVerificationTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "HistoryThreeElementsVerification"},
    {"version" , "2020-02-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<HistoryThreeElementsVerificationResponse>();
}

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
HistoryThreeElementsVerificationResponse Client::historyThreeElementsVerification(const HistoryThreeElementsVerificationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return historyThreeElementsVerificationWithOptions(request, runtime);
}

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
InvalidPhoneNumberFilterResponse Client::invalidPhoneNumberFilterWithOptions(const InvalidPhoneNumberFilterRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthCode()) {
    query["AuthCode"] = request.getAuthCode();
  }

  if (!!request.hasInputNumber()) {
    query["InputNumber"] = request.getInputNumber();
  }

  if (!!request.hasMask()) {
    query["Mask"] = request.getMask();
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
    {"action" , "InvalidPhoneNumberFilter"},
    {"version" , "2020-02-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<InvalidPhoneNumberFilterResponse>();
}

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
InvalidPhoneNumberFilterResponse Client::invalidPhoneNumberFilter(const InvalidPhoneNumberFilterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return invalidPhoneNumberFilterWithOptions(request, runtime);
}

/**
 * @summary Lists the alert contacts for Number Encyclopedia.
 *
 * @description - Before using this API, ensure that you have activated Number Encyclopedia.
 *
 * @param request ListContactsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListContactsResponse
 */
ListContactsResponse Client::listContactsWithOptions(const ListContactsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizType()) {
    query["BizType"] = request.getBizType();
  }

  if (!!request.hasContactId()) {
    query["ContactId"] = request.getContactId();
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
    {"action" , "ListContacts"},
    {"version" , "2020-02-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListContactsResponse>();
}

/**
 * @summary Lists the alert contacts for Number Encyclopedia.
 *
 * @description - Before using this API, ensure that you have activated Number Encyclopedia.
 *
 * @param request ListContactsRequest
 * @return ListContactsResponse
 */
ListContactsResponse Client::listContacts(const ListContactsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listContactsWithOptions(request, runtime);
}

/**
 * @param request PhoneNumberConvertServiceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return PhoneNumberConvertServiceResponse
 */
PhoneNumberConvertServiceResponse Client::phoneNumberConvertServiceWithOptions(const PhoneNumberConvertServiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthCode()) {
    query["AuthCode"] = request.getAuthCode();
  }

  if (!!request.hasInputNumber()) {
    query["InputNumber"] = request.getInputNumber();
  }

  if (!!request.hasMask()) {
    query["Mask"] = request.getMask();
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
    {"action" , "PhoneNumberConvertService"},
    {"version" , "2020-02-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PhoneNumberConvertServiceResponse>();
}

/**
 * @param request PhoneNumberConvertServiceRequest
 * @return PhoneNumberConvertServiceResponse
 */
PhoneNumberConvertServiceResponse Client::phoneNumberConvertService(const PhoneNumberConvertServiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return phoneNumberConvertServiceWithOptions(request, runtime);
}

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
PhoneNumberEncryptResponse Client::phoneNumberEncryptWithOptions(const PhoneNumberEncryptRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthCode()) {
    query["AuthCode"] = request.getAuthCode();
  }

  if (!!request.hasInputNumber()) {
    query["InputNumber"] = request.getInputNumber();
  }

  if (!!request.hasMask()) {
    query["Mask"] = request.getMask();
  }

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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "PhoneNumberEncrypt"},
    {"version" , "2020-02-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PhoneNumberEncryptResponse>();
}

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
PhoneNumberEncryptResponse Client::phoneNumberEncrypt(const PhoneNumberEncryptRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return phoneNumberEncryptWithOptions(request, runtime);
}

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
PhoneNumberStatusForAccountResponse Client::phoneNumberStatusForAccountWithOptions(const PhoneNumberStatusForAccountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthCode()) {
    query["AuthCode"] = request.getAuthCode();
  }

  if (!!request.hasInputNumber()) {
    query["InputNumber"] = request.getInputNumber();
  }

  if (!!request.hasMask()) {
    query["Mask"] = request.getMask();
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
    {"action" , "PhoneNumberStatusForAccount"},
    {"version" , "2020-02-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PhoneNumberStatusForAccountResponse>();
}

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
PhoneNumberStatusForAccountResponse Client::phoneNumberStatusForAccount(const PhoneNumberStatusForAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return phoneNumberStatusForAccountWithOptions(request, runtime);
}

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
PhoneNumberStatusForPublicResponse Client::phoneNumberStatusForPublicWithOptions(const PhoneNumberStatusForPublicRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthCode()) {
    query["AuthCode"] = request.getAuthCode();
  }

  if (!!request.hasInputNumber()) {
    query["InputNumber"] = request.getInputNumber();
  }

  if (!!request.hasMask()) {
    query["Mask"] = request.getMask();
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
    {"action" , "PhoneNumberStatusForPublic"},
    {"version" , "2020-02-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PhoneNumberStatusForPublicResponse>();
}

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
PhoneNumberStatusForPublicResponse Client::phoneNumberStatusForPublic(const PhoneNumberStatusForPublicRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return phoneNumberStatusForPublicWithOptions(request, runtime);
}

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
PhoneNumberStatusForRealResponse Client::phoneNumberStatusForRealWithOptions(const PhoneNumberStatusForRealRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthCode()) {
    query["AuthCode"] = request.getAuthCode();
  }

  if (!!request.hasInputNumber()) {
    query["InputNumber"] = request.getInputNumber();
  }

  if (!!request.hasMask()) {
    query["Mask"] = request.getMask();
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
    {"action" , "PhoneNumberStatusForReal"},
    {"version" , "2020-02-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PhoneNumberStatusForRealResponse>();
}

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
PhoneNumberStatusForRealResponse Client::phoneNumberStatusForReal(const PhoneNumberStatusForRealRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return phoneNumberStatusForRealWithOptions(request, runtime);
}

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
PhoneNumberStatusForSmsResponse Client::phoneNumberStatusForSmsWithOptions(const PhoneNumberStatusForSmsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthCode()) {
    query["AuthCode"] = request.getAuthCode();
  }

  if (!!request.hasInputNumber()) {
    query["InputNumber"] = request.getInputNumber();
  }

  if (!!request.hasMask()) {
    query["Mask"] = request.getMask();
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
    {"action" , "PhoneNumberStatusForSms"},
    {"version" , "2020-02-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PhoneNumberStatusForSmsResponse>();
}

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
PhoneNumberStatusForSmsResponse Client::phoneNumberStatusForSms(const PhoneNumberStatusForSmsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return phoneNumberStatusForSmsWithOptions(request, runtime);
}

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
PhoneNumberStatusForVoiceResponse Client::phoneNumberStatusForVoiceWithOptions(const PhoneNumberStatusForVoiceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthCode()) {
    query["AuthCode"] = request.getAuthCode();
  }

  if (!!request.hasInputNumber()) {
    query["InputNumber"] = request.getInputNumber();
  }

  if (!!request.hasMask()) {
    query["Mask"] = request.getMask();
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
    {"action" , "PhoneNumberStatusForVoice"},
    {"version" , "2020-02-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<PhoneNumberStatusForVoiceResponse>();
}

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
PhoneNumberStatusForVoiceResponse Client::phoneNumberStatusForVoice(const PhoneNumberStatusForVoiceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return phoneNumberStatusForVoiceWithOptions(request, runtime);
}

/**
 * @summary Queries available authorization codes.
 *
 * @param request QueryAvailableAuthCodeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryAvailableAuthCodeResponse
 */
QueryAvailableAuthCodeResponse Client::queryAvailableAuthCodeWithOptions(const QueryAvailableAuthCodeRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  if (!!request.hasTagId()) {
    query["TagId"] = request.getTagId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryAvailableAuthCode"},
    {"version" , "2020-02-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryAvailableAuthCodeResponse>();
}

/**
 * @summary Queries available authorization codes.
 *
 * @param request QueryAvailableAuthCodeRequest
 * @return QueryAvailableAuthCodeResponse
 */
QueryAvailableAuthCodeResponse Client::queryAvailableAuthCode(const QueryAvailableAuthCodeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryAvailableAuthCodeWithOptions(request, runtime);
}

/**
 * @summary Queries package type information.
 *
 * @param request QueryPackageTypeInfoRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryPackageTypeInfoResponse
 */
QueryPackageTypeInfoResponse Client::queryPackageTypeInfoWithOptions(const QueryPackageTypeInfoRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasProductName()) {
    query["ProductName"] = request.getProductName();
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
    {"action" , "QueryPackageTypeInfo"},
    {"version" , "2020-02-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryPackageTypeInfoResponse>();
}

/**
 * @summary Queries package type information.
 *
 * @param request QueryPackageTypeInfoRequest
 * @return QueryPackageTypeInfoResponse
 */
QueryPackageTypeInfoResponse Client::queryPackageTypeInfo(const QueryPackageTypeInfoRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryPackageTypeInfoWithOptions(request, runtime);
}

/**
 * @summary 在网时长专用接口
 *
 * @param request QueryPhoneNumberOnlineTimeRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryPhoneNumberOnlineTimeResponse
 */
QueryPhoneNumberOnlineTimeResponse Client::queryPhoneNumberOnlineTimeWithOptions(const QueryPhoneNumberOnlineTimeRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthCode()) {
    query["AuthCode"] = request.getAuthCode();
  }

  if (!!request.hasInputNumber()) {
    query["InputNumber"] = request.getInputNumber();
  }

  if (!!request.hasMask()) {
    query["Mask"] = request.getMask();
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
    {"action" , "QueryPhoneNumberOnlineTime"},
    {"version" , "2020-02-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryPhoneNumberOnlineTimeResponse>();
}

/**
 * @summary 在网时长专用接口
 *
 * @param request QueryPhoneNumberOnlineTimeRequest
 * @return QueryPhoneNumberOnlineTimeResponse
 */
QueryPhoneNumberOnlineTimeResponse Client::queryPhoneNumberOnlineTime(const QueryPhoneNumberOnlineTimeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryPhoneNumberOnlineTimeWithOptions(request, runtime);
}

/**
 * @summary 二次号携号转网号码查询
 *
 * @param request QueryPhoneTwiceTelVerifyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryPhoneTwiceTelVerifyResponse
 */
QueryPhoneTwiceTelVerifyResponse Client::queryPhoneTwiceTelVerifyWithOptions(const QueryPhoneTwiceTelVerifyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthCode()) {
    query["AuthCode"] = request.getAuthCode();
  }

  if (!!request.hasInputNumber()) {
    query["InputNumber"] = request.getInputNumber();
  }

  if (!!request.hasMask()) {
    query["Mask"] = request.getMask();
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

  if (!!request.hasStartTime()) {
    query["StartTime"] = request.getStartTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryPhoneTwiceTelVerify"},
    {"version" , "2020-02-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryPhoneTwiceTelVerifyResponse>();
}

/**
 * @summary 二次号携号转网号码查询
 *
 * @param request QueryPhoneTwiceTelVerifyRequest
 * @return QueryPhoneTwiceTelVerifyResponse
 */
QueryPhoneTwiceTelVerifyResponse Client::queryPhoneTwiceTelVerify(const QueryPhoneTwiceTelVerifyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryPhoneTwiceTelVerifyWithOptions(request, runtime);
}

/**
 * @summary Queries tag application rules.
 *
 * @param request QueryTagApplyRuleRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryTagApplyRuleResponse
 */
QueryTagApplyRuleResponse Client::queryTagApplyRuleWithOptions(const QueryTagApplyRuleRequest &request, const Darabonba::RuntimeOptions &runtime) {
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

  if (!!request.hasTagId()) {
    query["TagId"] = request.getTagId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryTagApplyRule"},
    {"version" , "2020-02-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryTagApplyRuleResponse>();
}

/**
 * @summary Queries tag application rules.
 *
 * @param request QueryTagApplyRuleRequest
 * @return QueryTagApplyRuleResponse
 */
QueryTagApplyRuleResponse Client::queryTagApplyRule(const QueryTagApplyRuleRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryTagApplyRuleWithOptions(request, runtime);
}

/**
 * @summary Queries tag information.
 *
 * @param request QueryTagInfoBySelectionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryTagInfoBySelectionResponse
 */
QueryTagInfoBySelectionResponse Client::queryTagInfoBySelectionWithOptions(const QueryTagInfoBySelectionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIndustryId()) {
    query["IndustryId"] = request.getIndustryId();
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

  if (!!request.hasSceneId()) {
    query["SceneId"] = request.getSceneId();
  }

  if (!!request.hasTagId()) {
    query["TagId"] = request.getTagId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryTagInfoBySelection"},
    {"version" , "2020-02-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryTagInfoBySelectionResponse>();
}

/**
 * @summary Queries tag information.
 *
 * @param request QueryTagInfoBySelectionRequest
 * @return QueryTagInfoBySelectionResponse
 */
QueryTagInfoBySelectionResponse Client::queryTagInfoBySelection(const QueryTagInfoBySelectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryTagInfoBySelectionWithOptions(request, runtime);
}

/**
 * @summary Queries the tag list by page.
 *
 * @param request QueryTagListPageRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryTagListPageResponse
 */
QueryTagListPageResponse Client::queryTagListPageWithOptions(const QueryTagListPageRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
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

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryTagListPage"},
    {"version" , "2020-02-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryTagListPageResponse>();
}

/**
 * @summary Queries the tag list by page.
 *
 * @param request QueryTagListPageRequest
 * @return QueryTagListPageResponse
 */
QueryTagListPageResponse Client::queryTagListPage(const QueryTagListPageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryTagListPageWithOptions(request, runtime);
}

/**
 * @summary Queries a list of offline tasks.
 *
 * @param tmpReq QueryTaskListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryTaskListResponse
 */
QueryTaskListResponse Client::queryTaskListWithOptions(const QueryTaskListRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  QueryTaskListShrinkRequest request = QueryTaskListShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasResult()) {
    request.setResultShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getResult(), "Result", "json"));
  }

  if (!!tmpReq.hasTaskType()) {
    request.setTaskTypeShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getTaskType(), "TaskType", "json"));
  }

  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
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

  if (!!request.hasResultShrink()) {
    query["Result"] = request.getResultShrink();
  }

  if (!!request.hasTagId()) {
    query["TagId"] = request.getTagId();
  }

  if (!!request.hasTaskId()) {
    query["TaskId"] = request.getTaskId();
  }

  if (!!request.hasTaskName()) {
    query["TaskName"] = request.getTaskName();
  }

  if (!!request.hasTaskTypeShrink()) {
    query["TaskType"] = request.getTaskTypeShrink();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryTaskList"},
    {"version" , "2020-02-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryTaskListResponse>();
}

/**
 * @summary Queries a list of offline tasks.
 *
 * @param request QueryTaskListRequest
 * @return QueryTaskListResponse
 */
QueryTaskListResponse Client::queryTaskList(const QueryTaskListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryTaskListWithOptions(request, runtime);
}

/**
 * @summary Queries usage statistics by tag ID.
 *
 * @param request QueryUsageStatisticsByTagIdRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return QueryUsageStatisticsByTagIdResponse
 */
QueryUsageStatisticsByTagIdResponse Client::queryUsageStatisticsByTagIdWithOptions(const QueryUsageStatisticsByTagIdRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBeginTime()) {
    query["BeginTime"] = request.getBeginTime();
  }

  if (!!request.hasEndTime()) {
    query["EndTime"] = request.getEndTime();
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

  if (!!request.hasTagId()) {
    query["TagId"] = request.getTagId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "QueryUsageStatisticsByTagId"},
    {"version" , "2020-02-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<QueryUsageStatisticsByTagIdResponse>();
}

/**
 * @summary Queries usage statistics by tag ID.
 *
 * @param request QueryUsageStatisticsByTagIdRequest
 * @return QueryUsageStatisticsByTagIdResponse
 */
QueryUsageStatisticsByTagIdResponse Client::queryUsageStatisticsByTagId(const QueryUsageStatisticsByTagIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryUsageStatisticsByTagIdWithOptions(request, runtime);
}

/**
 * @summary Saves an alert contact.
 *
 * @description - Before you call this operation, ensure you have activated Phone Number Intelligence.
 *
 * @param request SaveContactsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SaveContactsResponse
 */
SaveContactsResponse Client::saveContactsWithOptions(const SaveContactsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasBizType()) {
    query["BizType"] = request.getBizType();
  }

  if (!!request.hasContactEmail()) {
    query["ContactEmail"] = request.getContactEmail();
  }

  if (!!request.hasContactName()) {
    query["ContactName"] = request.getContactName();
  }

  if (!!request.hasContactPhone()) {
    query["ContactPhone"] = request.getContactPhone();
  }

  if (!!request.hasMailStatus()) {
    query["MailStatus"] = request.getMailStatus();
  }

  if (!!request.hasOpenStatusWarning()) {
    query["OpenStatusWarning"] = request.getOpenStatusWarning();
  }

  if (!!request.hasOpentAttributionWarning()) {
    query["OpentAttributionWarning"] = request.getOpentAttributionWarning();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPhoneStatus()) {
    query["PhoneStatus"] = request.getPhoneStatus();
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
    {"action" , "SaveContacts"},
    {"version" , "2020-02-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SaveContactsResponse>();
}

/**
 * @summary Saves an alert contact.
 *
 * @description - Before you call this operation, ensure you have activated Phone Number Intelligence.
 *
 * @param request SaveContactsRequest
 * @return SaveContactsResponse
 */
SaveContactsResponse Client::saveContacts(const SaveContactsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return saveContactsWithOptions(request, runtime);
}

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
ThreeElementsVerificationResponse Client::threeElementsVerificationWithOptions(const ThreeElementsVerificationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthCode()) {
    query["AuthCode"] = request.getAuthCode();
  }

  if (!!request.hasCertCode()) {
    query["CertCode"] = request.getCertCode();
  }

  if (!!request.hasInputNumber()) {
    query["InputNumber"] = request.getInputNumber();
  }

  if (!!request.hasMask()) {
    query["Mask"] = request.getMask();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
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
    {"action" , "ThreeElementsVerification"},
    {"version" , "2020-02-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ThreeElementsVerificationResponse>();
}

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
ThreeElementsVerificationResponse Client::threeElementsVerification(const ThreeElementsVerificationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return threeElementsVerificationWithOptions(request, runtime);
}

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
TwoElementsVerificationResponse Client::twoElementsVerificationWithOptions(const TwoElementsVerificationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthCode()) {
    query["AuthCode"] = request.getAuthCode();
  }

  if (!!request.hasInputNumber()) {
    query["InputNumber"] = request.getInputNumber();
  }

  if (!!request.hasMask()) {
    query["Mask"] = request.getMask();
  }

  if (!!request.hasName()) {
    query["Name"] = request.getName();
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
    {"action" , "TwoElementsVerification"},
    {"version" , "2020-02-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<TwoElementsVerificationResponse>();
}

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
TwoElementsVerificationResponse Client::twoElementsVerification(const TwoElementsVerificationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return twoElementsVerificationWithOptions(request, runtime);
}

/**
 * @summary UAID采集
 *
 * @param request UAIDCollectionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UAIDCollectionResponse
 */
UAIDCollectionResponse Client::uAIDCollectionWithOptions(const UAIDCollectionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthCode()) {
    query["AuthCode"] = request.getAuthCode();
  }

  if (!!request.hasCarrier()) {
    query["Carrier"] = request.getCarrier();
  }

  if (!!request.hasIp()) {
    query["Ip"] = request.getIp();
  }

  if (!!request.hasOutId()) {
    query["OutId"] = request.getOutId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasProvince()) {
    query["Province"] = request.getProvince();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasToken()) {
    query["Token"] = request.getToken();
  }

  if (!!request.hasUserGrantId()) {
    query["UserGrantId"] = request.getUserGrantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UAIDCollection"},
    {"version" , "2020-02-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UAIDCollectionResponse>();
}

/**
 * @summary UAID采集
 *
 * @param request UAIDCollectionRequest
 * @return UAIDCollectionResponse
 */
UAIDCollectionResponse Client::uAIDCollection(const UAIDCollectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return uAIDCollectionWithOptions(request, runtime);
}

/**
 * @summary uaid号码转换服务
 *
 * @param request UAIDConversionRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UAIDConversionResponse
 */
UAIDConversionResponse Client::uAIDConversionWithOptions(const UAIDConversionRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthCode()) {
    query["AuthCode"] = request.getAuthCode();
  }

  if (!!request.hasCarrier()) {
    query["Carrier"] = request.getCarrier();
  }

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

  if (!!request.hasUaidList()) {
    query["UaidList"] = request.getUaidList();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UAIDConversion"},
    {"version" , "2020-02-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UAIDConversionResponse>();
}

/**
 * @summary uaid号码转换服务
 *
 * @param request UAIDConversionRequest
 * @return UAIDConversionResponse
 */
UAIDConversionResponse Client::uAIDConversion(const UAIDConversionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return uAIDConversionWithOptions(request, runtime);
}

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
UAIDVerificationResponse Client::uAIDVerificationWithOptions(const UAIDVerificationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthCode()) {
    query["AuthCode"] = request.getAuthCode();
  }

  if (!!request.hasCarrier()) {
    query["Carrier"] = request.getCarrier();
  }

  if (!!request.hasIp()) {
    query["Ip"] = request.getIp();
  }

  if (!!request.hasOutId()) {
    query["OutId"] = request.getOutId();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasProvince()) {
    query["Province"] = request.getProvince();
  }

  if (!!request.hasResourceOwnerAccount()) {
    query["ResourceOwnerAccount"] = request.getResourceOwnerAccount();
  }

  if (!!request.hasResourceOwnerId()) {
    query["ResourceOwnerId"] = request.getResourceOwnerId();
  }

  if (!!request.hasToken()) {
    query["Token"] = request.getToken();
  }

  if (!!request.hasUserGrantId()) {
    query["UserGrantId"] = request.getUserGrantId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UAIDVerification"},
    {"version" , "2020-02-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UAIDVerificationResponse>();
}

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
UAIDVerificationResponse Client::uAIDVerification(const UAIDVerificationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return uAIDVerificationWithOptions(request, runtime);
}

/**
 * @summary Updates an alert contact.
 *
 * @description - Ensure that you have activated the Phone Number Information Service before calling this operation.
 *
 * @param request UpdateContactsRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateContactsResponse
 */
UpdateContactsResponse Client::updateContactsWithOptions(const UpdateContactsRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasContactEmail()) {
    query["ContactEmail"] = request.getContactEmail();
  }

  if (!!request.hasContactId()) {
    query["ContactId"] = request.getContactId();
  }

  if (!!request.hasContactName()) {
    query["ContactName"] = request.getContactName();
  }

  if (!!request.hasContactPhone()) {
    query["ContactPhone"] = request.getContactPhone();
  }

  if (!!request.hasMailStatus()) {
    query["MailStatus"] = request.getMailStatus();
  }

  if (!!request.hasOpenStatusWarning()) {
    query["OpenStatusWarning"] = request.getOpenStatusWarning();
  }

  if (!!request.hasOpentAttributionWarning()) {
    query["OpentAttributionWarning"] = request.getOpentAttributionWarning();
  }

  if (!!request.hasOwnerId()) {
    query["OwnerId"] = request.getOwnerId();
  }

  if (!!request.hasPhoneStatus()) {
    query["PhoneStatus"] = request.getPhoneStatus();
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
    {"action" , "UpdateContacts"},
    {"version" , "2020-02-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateContactsResponse>();
}

/**
 * @summary Updates an alert contact.
 *
 * @description - Ensure that you have activated the Phone Number Information Service before calling this operation.
 *
 * @param request UpdateContactsRequest
 * @return UpdateContactsResponse
 */
UpdateContactsResponse Client::updateContacts(const UpdateContactsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateContactsWithOptions(request, runtime);
}

/**
 * @summary 虚商三要素
 *
 * @param request VirtualThreeElementsVerificationRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return VirtualThreeElementsVerificationResponse
 */
VirtualThreeElementsVerificationResponse Client::virtualThreeElementsVerificationWithOptions(const VirtualThreeElementsVerificationRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAuthCode()) {
    query["AuthCode"] = request.getAuthCode();
  }

  if (!!request.hasCertCode()) {
    query["CertCode"] = request.getCertCode();
  }

  if (!!request.hasCertName()) {
    query["CertName"] = request.getCertName();
  }

  if (!!request.hasInputNumber()) {
    query["InputNumber"] = request.getInputNumber();
  }

  if (!!request.hasMask()) {
    query["Mask"] = request.getMask();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "VirtualThreeElementsVerification"},
    {"version" , "2020-02-17"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<VirtualThreeElementsVerificationResponse>();
}

/**
 * @summary 虚商三要素
 *
 * @param request VirtualThreeElementsVerificationRequest
 * @return VirtualThreeElementsVerificationResponse
 */
VirtualThreeElementsVerificationResponse Client::virtualThreeElementsVerification(const VirtualThreeElementsVerificationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return virtualThreeElementsVerificationWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Dytnsapi20200217