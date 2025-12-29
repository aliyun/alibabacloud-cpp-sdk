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
  this->_endpointRule = "central";
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
 * @summary 身份证三要素
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
 * @summary 身份证三要素
 *
 * @param request CertNoThreeElementVerificationRequest
 * @return CertNoThreeElementVerificationResponse
 */
CertNoThreeElementVerificationResponse Client::certNoThreeElementVerification(const CertNoThreeElementVerificationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return certNoThreeElementVerificationWithOptions(request, runtime);
}

/**
 * @summary 身份证二要素认证
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
 * @summary 身份证二要素认证
 *
 * @param request CertNoTwoElementVerificationRequest
 * @return CertNoTwoElementVerificationResponse
 */
CertNoTwoElementVerificationResponse Client::certNoTwoElementVerification(const CertNoTwoElementVerificationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return certNoTwoElementVerificationWithOptions(request, runtime);
}

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
 * @summary Verifies whether the enterprise name, the business license number, and the name and ID card of the legal representative belong to the same enterprise. The verification is successful only when the preceding four elements belong to the same enterprise and the business status of the enterprise is Active.
 *
 * @description *   Before you call this operation, make sure that you are familiar with the billing of services related to four-element verification for enterprises. For more information, see [Billing](https://help.aliyun.com/document_detail/154751.html?spm=a2c4g.154007.0.0.3edd7eb6E90YT4).
 * *   You are charged only if the value of VerifyResult is true or false and the value of ReasonCode is 0, 1, or 2.
 * *   Before you call this operation, perform the following operations: Log on to the [Cell Phone Number Service console](https://account.aliyun.com/login/login.htm?oauth_callback=https%3A%2F%2Fdytns.console.aliyun.com%2Foverview%3Fspm%3Da2c4g.608385.0.0.79847f8b3awqUC\\&lang=zh). On the [Labels](https://dytns.console.aliyun.com/analysis/square) page, find the label that you want to use, click **Activate Now**, enter the required information, and then submit your application. After your application is approved, you can use the label.
 *
 * @param request CompanyFourElementsVerificationRequest
 * @return CompanyFourElementsVerificationResponse
 */
CompanyFourElementsVerificationResponse Client::companyFourElementsVerification(const CompanyFourElementsVerificationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return companyFourElementsVerificationWithOptions(request, runtime);
}

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
 * @summary Verifies whether the enterprise name, the business license number, and the name of the legal representative belong to the same enterprise. The verification is successful only when the three elements belong to the same enterprise and the business status of the enterprise is Active.
 *
 * @description *   Before you call this operation, make sure that you are familiar with the billing of services related to three-element verification for enterprises. For more information, see [Billing](https://help.aliyun.com/document_detail/154751.html?spm=a2c4g.154007.0.0.3edd7eb6E90YT4).
 * *   You are charged only if the value of VerifyResult is true or false and the value of ReasonCode is 0, 1, or 2.
 * *   Before you call this operation, perform the following operations: Log on to the [Cell Phone Number Service console](https://account.aliyun.com/login/login.htm?oauth_callback=https%3A%2F%2Fdytns.console.aliyun.com%2Foverview%3Fspm%3Da2c4g.608385.0.0.79847f8b3awqUC\\&lang=zh). On the [Labels](https://dytns.console.aliyun.com/analysis/square) page, find the label that you want to use, click **Activate Now**, enter the required information, and then submit your application. After your application is approved, you can use the label.
 *
 * @param request CompanyThreeElementsVerificationRequest
 * @return CompanyThreeElementsVerificationResponse
 */
CompanyThreeElementsVerificationResponse Client::companyThreeElementsVerification(const CompanyThreeElementsVerificationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return companyThreeElementsVerificationWithOptions(request, runtime);
}

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
 * @summary Verifies whether the enterprise name and the business license number belong to the same enterprise. The verification is successful only when the two elements belong to the same enterprise and the business status of the enterprise is Active.
 *
 * @description *   Before you call this operation, make sure that you are familiar with the billing of services related to two-element verification for enterprises. For more information, see [Billing](https://help.aliyun.com/document_detail/154751.html?spm=a2c4g.154007.0.0.3edd7eb6E90YT4).
 * *   You are charged only if the value of VerifyResult is true or false and the value of ReasonCode is 0 or 1.
 * *   Before you call this operation, perform the following operations: Log on to the [Cell Phone Number Service console](https://account.aliyun.com/login/login.htm?oauth_callback=https%3A%2F%2Fdytns.console.aliyun.com%2Foverview%3Fspm%3Da2c4g.608385.0.0.79847f8b3awqUC\\&lang=zh). On the [Labels](https://dytns.console.aliyun.com/analysis/square) page, find the label that you want to use, click **Activate Now**, enter the required information, and then submit your application. After your application is approved, you can use the label.
 *
 * @param request CompanyTwoElementsVerificationRequest
 * @return CompanyTwoElementsVerificationResponse
 */
CompanyTwoElementsVerificationResponse Client::companyTwoElementsVerification(const CompanyTwoElementsVerificationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return companyTwoElementsVerificationWithOptions(request, runtime);
}

/**
 * @summary 预警联系人删除
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
 * @summary 预警联系人删除
 *
 * @param request DeleteContactsRequest
 * @return DeleteContactsResponse
 */
DeleteContactsResponse Client::deleteContacts(const DeleteContactsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteContactsWithOptions(request, runtime);
}

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
 * @summary 号码分析实时查询蚂蚁
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
 * @summary 号码分析实时查询蚂蚁
 *
 * @param request DescribePhoneNumberAnalysisRequest
 * @return DescribePhoneNumberAnalysisResponse
 */
DescribePhoneNumberAnalysisResponse Client::describePhoneNumberAnalysis(const DescribePhoneNumberAnalysisRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePhoneNumberAnalysisWithOptions(request, runtime);
}

/**
 * @summary Obtains the analysis results of a phone number.
 *
 * @description Before you call this operation, perform the following operations: Log on to the Cell Phone Number Service console. On the Labels page, find the label that you want to use, click Activate Now, enter the required information, and then submit your application. After your application is approved, you can use the label. Before you call this operation, make sure that you are familiar with the billing of Cell Phone Number Service.
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
 * @summary Obtains the analysis results of a phone number.
 *
 * @description Before you call this operation, perform the following operations: Log on to the Cell Phone Number Service console. On the Labels page, find the label that you want to use, click Activate Now, enter the required information, and then submit your application. After your application is approved, you can use the label. Before you call this operation, make sure that you are familiar with the billing of Cell Phone Number Service.
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
DescribePhoneNumberAttributeResponse Client::describePhoneNumberAttribute(const DescribePhoneNumberAttributeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePhoneNumberAttributeWithOptions(request, runtime);
}

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
DescribePhoneNumberOnlineTimeResponse Client::describePhoneNumberOnlineTime(const DescribePhoneNumberOnlineTimeRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePhoneNumberOnlineTimeWithOptions(request, runtime);
}

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
DescribePhoneTwiceTelVerifyResponse Client::describePhoneTwiceTelVerify(const DescribePhoneTwiceTelVerifyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePhoneTwiceTelVerifyWithOptions(request, runtime);
}

/**
 * @summary 获取UAID申请Token所需的签名字段
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
 * @summary 获取UAID申请Token所需的签名字段
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
 * @summary Filters invalid phone numbers.
 *
 * @description Before you call this operation, perform the following operations: Log on to the Cell Phone Number Service console. On the [Labels](https://dytns.console.aliyun.com/analysis/square) page, find the label that you want to use, click **Activate Now**, enter the required information, and then submit your application. After your application is approved, you can use the label.
 * ### [](#qps)QPS limits
 * You can call this operation up to 1,000 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request InvalidPhoneNumberFilterRequest
 * @return InvalidPhoneNumberFilterResponse
 */
InvalidPhoneNumberFilterResponse Client::invalidPhoneNumberFilter(const InvalidPhoneNumberFilterRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return invalidPhoneNumberFilterWithOptions(request, runtime);
}

/**
 * @summary 预警联系人查询
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
 * @summary 预警联系人查询
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
 * @summary Encrypts the original phone number into a virtual number that starts with 140. Cell Phone Number Service integrates the communications services provided by Alibaba Cloud. This allows you to initiate a call by using a virtual number that starts with 140.
 *
 * @description Before you call this operation, perform the following operations: Log on to the Cell Phone Number Service console. On the [Labels](https://dytns.console.aliyun.com/analysis/square) page, find the label that you want to use, click **Activate Now**, enter the required information, and then submit your application. After your application is approved, you can use the label.
 * ### [](#qps)QPS limits
 * You can call this operation up to 1,000 times per second per account. If the number of calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request PhoneNumberEncryptRequest
 * @return PhoneNumberEncryptResponse
 */
PhoneNumberEncryptResponse Client::phoneNumberEncrypt(const PhoneNumberEncryptRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return phoneNumberEncryptWithOptions(request, runtime);
}

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
PhoneNumberStatusForAccountResponse Client::phoneNumberStatusForAccount(const PhoneNumberStatusForAccountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return phoneNumberStatusForAccountWithOptions(request, runtime);
}

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
PhoneNumberStatusForPublicResponse Client::phoneNumberStatusForPublic(const PhoneNumberStatusForPublicRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return phoneNumberStatusForPublicWithOptions(request, runtime);
}

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
PhoneNumberStatusForRealResponse Client::phoneNumberStatusForReal(const PhoneNumberStatusForRealRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return phoneNumberStatusForRealWithOptions(request, runtime);
}

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
PhoneNumberStatusForSmsResponse Client::phoneNumberStatusForSms(const PhoneNumberStatusForSmsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return phoneNumberStatusForSmsWithOptions(request, runtime);
}

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
 * @summary 套餐包类型信息查询
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
 * @summary 套餐包类型信息查询
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
 * @summary Queries information about tags.
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
 * @summary Queries information about tags.
 *
 * @param request QueryTagInfoBySelectionRequest
 * @return QueryTagInfoBySelectionResponse
 */
QueryTagInfoBySelectionResponse Client::queryTagInfoBySelection(const QueryTagInfoBySelectionRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryTagInfoBySelectionWithOptions(request, runtime);
}

/**
 * @summary Queries a list of tags by page.
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
 * @summary Queries a list of tags by page.
 *
 * @param request QueryTagListPageRequest
 * @return QueryTagListPageResponse
 */
QueryTagListPageResponse Client::queryTagListPage(const QueryTagListPageRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryTagListPageWithOptions(request, runtime);
}

/**
 * @summary 查询离线任务列表
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
 * @summary 查询离线任务列表
 *
 * @param request QueryTaskListRequest
 * @return QueryTaskListResponse
 */
QueryTaskListResponse Client::queryTaskList(const QueryTaskListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryTaskListWithOptions(request, runtime);
}

/**
 * @summary Queries the usage statistics based on tag IDs.
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
 * @summary Queries the usage statistics based on tag IDs.
 *
 * @param request QueryUsageStatisticsByTagIdRequest
 * @return QueryUsageStatisticsByTagIdResponse
 */
QueryUsageStatisticsByTagIdResponse Client::queryUsageStatisticsByTagId(const QueryUsageStatisticsByTagIdRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return queryUsageStatisticsByTagIdWithOptions(request, runtime);
}

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
ThreeElementsVerificationResponse Client::threeElementsVerification(const ThreeElementsVerificationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return threeElementsVerificationWithOptions(request, runtime);
}

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
 * @summary 获取UAID
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
 * @summary 获取UAID
 *
 * @param request UAIDVerificationRequest
 * @return UAIDVerificationResponse
 */
UAIDVerificationResponse Client::uAIDVerification(const UAIDVerificationRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return uAIDVerificationWithOptions(request, runtime);
}

/**
 * @summary 预警联系人更新
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
 * @summary 预警联系人更新
 *
 * @param request UpdateContactsRequest
 * @return UpdateContactsResponse
 */
UpdateContactsResponse Client::updateContacts(const UpdateContactsRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateContactsWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Dytnsapi20200217