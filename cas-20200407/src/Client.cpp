#include <darabonba/Core.hpp>
#include <alibabacloud/Cas20200407.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::Cas20200407::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace Cas20200407
{

AlibabaCloud::Cas20200407::Client::Client(Config &config): OpenApiClient(config){
  this->_endpointRule = "regional";
  this->_endpointMap = json({
    {"cn-hangzhou" , "cas.aliyuncs.com"},
    {"ap-northeast-2-pop" , "cas.aliyuncs.com"},
    {"ap-southeast-3" , "cas.aliyuncs.com"},
    {"ap-southeast-5" , "cas.aliyuncs.com"},
    {"cn-beijing" , "cas.aliyuncs.com"},
    {"cn-beijing-finance-1" , "cas.aliyuncs.com"},
    {"cn-beijing-finance-pop" , "cas.aliyuncs.com"},
    {"cn-beijing-gov-1" , "cas.aliyuncs.com"},
    {"cn-beijing-nu16-b01" , "cas.aliyuncs.com"},
    {"cn-chengdu" , "cas.aliyuncs.com"},
    {"cn-edge-1" , "cas.aliyuncs.com"},
    {"cn-fujian" , "cas.aliyuncs.com"},
    {"cn-haidian-cm12-c01" , "cas.aliyuncs.com"},
    {"cn-hangzhou-bj-b01" , "cas.aliyuncs.com"},
    {"cn-hangzhou-finance" , "cas.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1" , "cas.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1" , "cas.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2" , "cas.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3" , "cas.aliyuncs.com"},
    {"cn-hangzhou-test-306" , "cas.aliyuncs.com"},
    {"cn-hongkong" , "cas.aliyuncs.com"},
    {"cn-hongkong-finance-pop" , "cas.aliyuncs.com"},
    {"cn-huhehaote" , "cas.aliyuncs.com"},
    {"cn-huhehaote-nebula-1" , "cas.aliyuncs.com"},
    {"cn-north-2-gov-1" , "cas.aliyuncs.com"},
    {"cn-qingdao" , "cas.aliyuncs.com"},
    {"cn-qingdao-nebula" , "cas.aliyuncs.com"},
    {"cn-shanghai" , "cas.aliyuncs.com"},
    {"cn-shanghai-et15-b01" , "cas.aliyuncs.com"},
    {"cn-shanghai-et2-b01" , "cas.aliyuncs.com"},
    {"cn-shanghai-finance-1" , "cas.aliyuncs.com"},
    {"cn-shanghai-inner" , "cas.aliyuncs.com"},
    {"cn-shanghai-internal-test-1" , "cas.aliyuncs.com"},
    {"cn-shenzhen" , "cas.aliyuncs.com"},
    {"cn-shenzhen-finance-1" , "cas.aliyuncs.com"},
    {"cn-shenzhen-inner" , "cas.aliyuncs.com"},
    {"cn-shenzhen-st4-d01" , "cas.aliyuncs.com"},
    {"cn-shenzhen-su18-b01" , "cas.aliyuncs.com"},
    {"cn-wuhan" , "cas.aliyuncs.com"},
    {"cn-wulanchabu" , "cas.aliyuncs.com"},
    {"cn-yushanfang" , "cas.aliyuncs.com"},
    {"cn-zhangbei" , "cas.aliyuncs.com"},
    {"cn-zhangbei-na61-b01" , "cas.aliyuncs.com"},
    {"cn-zhangjiakou" , "cas.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01" , "cas.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1" , "cas.aliyuncs.com"},
    {"eu-west-1" , "cas.aliyuncs.com"},
    {"eu-west-1-oxs" , "cas.aliyuncs.com"},
    {"rus-west-1-pop" , "cas.aliyuncs.com"},
    {"us-east-1" , "cas.aliyuncs.com"},
    {"us-west-1" , "cas.aliyuncs.com"}
  }).get<map<string, string>>();
  checkConfig(config);
  this->_endpoint = getEndpoint("cas", _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint);
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
 * @summary Revokes an issued certificate and cancels the application order of the certificate.
 *
 * @description You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request CancelCertificateForPackageRequestRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelCertificateForPackageRequestResponse
 */
CancelCertificateForPackageRequestResponse Client::cancelCertificateForPackageRequestWithOptions(const CancelCertificateForPackageRequestRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOrderId()) {
    query["OrderId"] = request.orderId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CancelCertificateForPackageRequest"},
    {"version" , "2020-04-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelCertificateForPackageRequestResponse>();
}

/**
 * @summary Revokes an issued certificate and cancels the application order of the certificate.
 *
 * @description You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request CancelCertificateForPackageRequestRequest
 * @return CancelCertificateForPackageRequestResponse
 */
CancelCertificateForPackageRequestResponse Client::cancelCertificateForPackageRequest(const CancelCertificateForPackageRequestRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelCertificateForPackageRequestWithOptions(request, runtime);
}

/**
 * @summary Cancels a certificate application order that is in the pending validation or being reviewed state.
 *
 * @description You can call this operation up to 100 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request CancelOrderRequestRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CancelOrderRequestResponse
 */
CancelOrderRequestResponse Client::cancelOrderRequestWithOptions(const CancelOrderRequestRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOrderId()) {
    query["OrderId"] = request.orderId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CancelOrderRequest"},
    {"version" , "2020-04-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CancelOrderRequestResponse>();
}

/**
 * @summary Cancels a certificate application order that is in the pending validation or being reviewed state.
 *
 * @description You can call this operation up to 100 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request CancelOrderRequestRequest
 * @return CancelOrderRequestResponse
 */
CancelOrderRequestResponse Client::cancelOrderRequest(const CancelOrderRequestRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return cancelOrderRequestWithOptions(request, runtime);
}

/**
 * @summary Submits a certificate application.
 *
 * @description *   Before you call this operation, make sure that you have purchased a certificate resource plan of the required specifications. For more information about how to purchase a certificate resource plan, see [Purchase a certificate resource plan](https://help.aliyun.com/document_detail/28542.html). You can call the [DescribePackageState](https://help.aliyun.com/document_detail/455800.html) operation to query the usage of a certificate resource plan of specified specifications, including the total number of certificate resource plans that you purchase, the number of certificate applications that you submit, and the number of certificates that are issued.
 * *   After you call this operation to submit a certificate application and the certificate is issued, the certificate quota provided by the resource plan that you purchased is consumed. When you call this operation, you can use the **ProductCode** parameter to specify the specifications of the certificate that you want to apply for.
 * *   After you call this operation to submit a certificate application, you also need to call the [DescribeCertificateState](https://help.aliyun.com/document_detail/455800.html) operation to obtain the information that is required for domain name ownership verification and manually complete the verification. Then, your certificate application is reviewed by the certificate authority (CA). If you use the Domain Name System (DNS) verification method, you must complete the verification on your DNS service provider system. If you use the file verification method, you must complete the verification on the DNS server.
 *
 * @param request CreateCertificateForPackageRequestRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCertificateForPackageRequestResponse
 */
CreateCertificateForPackageRequestResponse Client::createCertificateForPackageRequestWithOptions(const CreateCertificateForPackageRequestRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCompanyName()) {
    query["CompanyName"] = request.companyName();
  }

  if (!!request.hasCsr()) {
    query["Csr"] = request.csr();
  }

  if (!!request.hasDomain()) {
    query["Domain"] = request.domain();
  }

  if (!!request.hasEmail()) {
    query["Email"] = request.email();
  }

  if (!!request.hasPhone()) {
    query["Phone"] = request.phone();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.productCode();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.tags();
  }

  if (!!request.hasUsername()) {
    query["Username"] = request.username();
  }

  if (!!request.hasValidateType()) {
    query["ValidateType"] = request.validateType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateCertificateForPackageRequest"},
    {"version" , "2020-04-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCertificateForPackageRequestResponse>();
}

/**
 * @summary Submits a certificate application.
 *
 * @description *   Before you call this operation, make sure that you have purchased a certificate resource plan of the required specifications. For more information about how to purchase a certificate resource plan, see [Purchase a certificate resource plan](https://help.aliyun.com/document_detail/28542.html). You can call the [DescribePackageState](https://help.aliyun.com/document_detail/455800.html) operation to query the usage of a certificate resource plan of specified specifications, including the total number of certificate resource plans that you purchase, the number of certificate applications that you submit, and the number of certificates that are issued.
 * *   After you call this operation to submit a certificate application and the certificate is issued, the certificate quota provided by the resource plan that you purchased is consumed. When you call this operation, you can use the **ProductCode** parameter to specify the specifications of the certificate that you want to apply for.
 * *   After you call this operation to submit a certificate application, you also need to call the [DescribeCertificateState](https://help.aliyun.com/document_detail/455800.html) operation to obtain the information that is required for domain name ownership verification and manually complete the verification. Then, your certificate application is reviewed by the certificate authority (CA). If you use the Domain Name System (DNS) verification method, you must complete the verification on your DNS service provider system. If you use the file verification method, you must complete the verification on the DNS server.
 *
 * @param request CreateCertificateForPackageRequestRequest
 * @return CreateCertificateForPackageRequestResponse
 */
CreateCertificateForPackageRequestResponse Client::createCertificateForPackageRequest(const CreateCertificateForPackageRequestRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCertificateForPackageRequestWithOptions(request, runtime);
}

/**
 * @summary Purchases, applies for, and issues a domain validated (DV) certificate by using extended certificate services.
 *
 * @description *   You can call this operation to apply for only DV certificates. If you want to apply for an organization validated (OV) or extended validation (EV) certificate, we recommend that you call the [CreateCertificateForPackageRequest](https://help.aliyun.com/document_detail/455296.html) operation. This operation allows you to apply for certificates of all specifications and specify the method to generate a certificate signing request (CSR) file.
 * *   Before you call this operation, make sure that you have purchased a certificate resource plan of the required specifications. For more information about how to purchase a certificate resource plan, see [Purchase a certificate resource plan](https://help.aliyun.com/document_detail/28542.html). You can call the [DescribePackageState](https://help.aliyun.com/document_detail/455803.html) operation to query the usage of a certificate resource plan of specified specifications, including the total number of certificate resource plans that you purchase, the number of certificate applications that you submit, and the number of certificates that are issued.
 * *   When you call this operation, you can use the **ProductCode** parameter to specify the specifications of the certificate.
 * *   After you call this operation to submit a certificate application, Certificate Management Service automatically creates a CSR file for your application and consumes the certificate quota in the certificate resource plans of the specified specifications that you purchased. After you call this operation, you also need to call the [DescribeCertificateState](https://help.aliyun.com/document_detail/455800.html) operation to obtain the information that is required to complete domain name verification, and manually complete the verification. If you use the DNS verification method, you must complete the verification on the management platform of the domain name. If you use the file verification method, you must complete the verification on your DNS server. Then, the certificate authority (CA) will review your certificate application.
 *
 * @param request CreateCertificateRequestRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCertificateRequestResponse
 */
CreateCertificateRequestResponse Client::createCertificateRequestWithOptions(const CreateCertificateRequestRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasDomain()) {
    query["Domain"] = request.domain();
  }

  if (!!request.hasEmail()) {
    query["Email"] = request.email();
  }

  if (!!request.hasPhone()) {
    query["Phone"] = request.phone();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.productCode();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.tags();
  }

  if (!!request.hasUsername()) {
    query["Username"] = request.username();
  }

  if (!!request.hasValidateType()) {
    query["ValidateType"] = request.validateType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateCertificateRequest"},
    {"version" , "2020-04-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCertificateRequestResponse>();
}

/**
 * @summary Purchases, applies for, and issues a domain validated (DV) certificate by using extended certificate services.
 *
 * @description *   You can call this operation to apply for only DV certificates. If you want to apply for an organization validated (OV) or extended validation (EV) certificate, we recommend that you call the [CreateCertificateForPackageRequest](https://help.aliyun.com/document_detail/455296.html) operation. This operation allows you to apply for certificates of all specifications and specify the method to generate a certificate signing request (CSR) file.
 * *   Before you call this operation, make sure that you have purchased a certificate resource plan of the required specifications. For more information about how to purchase a certificate resource plan, see [Purchase a certificate resource plan](https://help.aliyun.com/document_detail/28542.html). You can call the [DescribePackageState](https://help.aliyun.com/document_detail/455803.html) operation to query the usage of a certificate resource plan of specified specifications, including the total number of certificate resource plans that you purchase, the number of certificate applications that you submit, and the number of certificates that are issued.
 * *   When you call this operation, you can use the **ProductCode** parameter to specify the specifications of the certificate.
 * *   After you call this operation to submit a certificate application, Certificate Management Service automatically creates a CSR file for your application and consumes the certificate quota in the certificate resource plans of the specified specifications that you purchased. After you call this operation, you also need to call the [DescribeCertificateState](https://help.aliyun.com/document_detail/455800.html) operation to obtain the information that is required to complete domain name verification, and manually complete the verification. If you use the DNS verification method, you must complete the verification on the management platform of the domain name. If you use the file verification method, you must complete the verification on your DNS server. Then, the certificate authority (CA) will review your certificate application.
 *
 * @param request CreateCertificateRequestRequest
 * @return CreateCertificateRequestResponse
 */
CreateCertificateRequestResponse Client::createCertificateRequest(const CreateCertificateRequestRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCertificateRequestWithOptions(request, runtime);
}

/**
 * @summary Purchases, applies for, and issues a domain validated (DV) certificate by using a custom certificate signing request (CSR) file. You can use extended certificate services to purchase and apply for a DV certificate with a few clicks.
 *
 * @description *   You can use this operation to apply for only a domain validated (DV) certificate. You cannot use this operation to apply for an organization validated (OV) certificate. We recommend that you use the [CreateCertificateForPackageRequest](https://help.aliyun.com/document_detail/455296.html) operation to apply for a certificate. You can use the CreateCertificateForPackageRequest operation to apply for certificates of all types and specify the CSR generation method.
 * *   Before you call this operation, make sure that you have purchased a certificate resource plan of the required specifications. For more information about how to purchase a certificate resource plan, see [Purchase a certificate resource plan](https://help.aliyun.com/document_detail/28542.html). You can call the [DescribePackageState](https://help.aliyun.com/document_detail/455803.html) operation to query the usage of a certificate resource plan of specified specifications, including the total number of certificate resource plans that you purchase, the number of certificate applications that you submit, and the number of certificates that are issued.
 * *   When you call this operation, you can use the **ProductCode** parameter to specify the specifications of the certificate that you want to apply for.
 * *   After you call this operation to submit a certificate application, the certificate quota of the required specifications that you purchased is consumed. After you call this operation, you must call the [DescribeCertificateState](https://help.aliyun.com/document_detail/455800.html) operation to obtain the information that is required for domain name ownership verification and manually complete the verification. Then, your certificate application is reviewed by the certificate authority (CA). If you use the Domain Name System (DNS) verification method, you must complete the verification on your DNS service provider system. If you use the file verification method, you must complete the verification on the DNS server.
 *
 * @param request CreateCertificateWithCsrRequestRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCertificateWithCsrRequestResponse
 */
CreateCertificateWithCsrRequestResponse Client::createCertificateWithCsrRequestWithOptions(const CreateCertificateWithCsrRequestRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCsr()) {
    query["Csr"] = request.csr();
  }

  if (!!request.hasEmail()) {
    query["Email"] = request.email();
  }

  if (!!request.hasPhone()) {
    query["Phone"] = request.phone();
  }

  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.productCode();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.tags();
  }

  if (!!request.hasUsername()) {
    query["Username"] = request.username();
  }

  if (!!request.hasValidateType()) {
    query["ValidateType"] = request.validateType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateCertificateWithCsrRequest"},
    {"version" , "2020-04-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCertificateWithCsrRequestResponse>();
}

/**
 * @summary Purchases, applies for, and issues a domain validated (DV) certificate by using a custom certificate signing request (CSR) file. You can use extended certificate services to purchase and apply for a DV certificate with a few clicks.
 *
 * @description *   You can use this operation to apply for only a domain validated (DV) certificate. You cannot use this operation to apply for an organization validated (OV) certificate. We recommend that you use the [CreateCertificateForPackageRequest](https://help.aliyun.com/document_detail/455296.html) operation to apply for a certificate. You can use the CreateCertificateForPackageRequest operation to apply for certificates of all types and specify the CSR generation method.
 * *   Before you call this operation, make sure that you have purchased a certificate resource plan of the required specifications. For more information about how to purchase a certificate resource plan, see [Purchase a certificate resource plan](https://help.aliyun.com/document_detail/28542.html). You can call the [DescribePackageState](https://help.aliyun.com/document_detail/455803.html) operation to query the usage of a certificate resource plan of specified specifications, including the total number of certificate resource plans that you purchase, the number of certificate applications that you submit, and the number of certificates that are issued.
 * *   When you call this operation, you can use the **ProductCode** parameter to specify the specifications of the certificate that you want to apply for.
 * *   After you call this operation to submit a certificate application, the certificate quota of the required specifications that you purchased is consumed. After you call this operation, you must call the [DescribeCertificateState](https://help.aliyun.com/document_detail/455800.html) operation to obtain the information that is required for domain name ownership verification and manually complete the verification. Then, your certificate application is reviewed by the certificate authority (CA). If you use the Domain Name System (DNS) verification method, you must complete the verification on your DNS service provider system. If you use the file verification method, you must complete the verification on the DNS server.
 *
 * @param request CreateCertificateWithCsrRequestRequest
 * @return CreateCertificateWithCsrRequestResponse
 */
CreateCertificateWithCsrRequestResponse Client::createCertificateWithCsrRequest(const CreateCertificateWithCsrRequestRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCertificateWithCsrRequestWithOptions(request, runtime);
}

/**
 * @summary Creates a certificate signing request (CSR). A CSR file contains the information about an SSL certificate that you want to apply for. The information includes the domain names that you want to bind to the certificate and the name and the geographical location of the certificate holder. When you submit a certificate application to a certificate authority (CA), you must provide a CSR. After the CA approves your certificate application, the CA uses the private key of the root CA to sign your CSR and generates a public key file. The public key file is the SSL certificate that the CA issues to you. The private key of the SSL certificate is generated when you create the CSR.
 *
 * @param request CreateCsrRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCsrResponse
 */
CreateCsrResponse Client::createCsrWithOptions(const CreateCsrRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlgorithm()) {
    query["Algorithm"] = request.algorithm();
  }

  if (!!request.hasCommonName()) {
    query["CommonName"] = request.commonName();
  }

  if (!!request.hasCorpName()) {
    query["CorpName"] = request.corpName();
  }

  if (!!request.hasCountryCode()) {
    query["CountryCode"] = request.countryCode();
  }

  if (!!request.hasDepartment()) {
    query["Department"] = request.department();
  }

  if (!!request.hasKeySize()) {
    query["KeySize"] = request.keySize();
  }

  if (!!request.hasLocality()) {
    query["Locality"] = request.locality();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasProvince()) {
    query["Province"] = request.province();
  }

  if (!!request.hasSans()) {
    query["Sans"] = request.sans();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateCsr"},
    {"version" , "2020-04-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCsrResponse>();
}

/**
 * @summary Creates a certificate signing request (CSR). A CSR file contains the information about an SSL certificate that you want to apply for. The information includes the domain names that you want to bind to the certificate and the name and the geographical location of the certificate holder. When you submit a certificate application to a certificate authority (CA), you must provide a CSR. After the CA approves your certificate application, the CA uses the private key of the root CA to sign your CSR and generates a public key file. The public key file is the SSL certificate that the CA issues to you. The private key of the SSL certificate is generated when you create the CSR.
 *
 * @param request CreateCsrRequest
 * @return CreateCsrResponse
 */
CreateCsrResponse Client::createCsr(const CreateCsrRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCsrWithOptions(request, runtime);
}

/**
 * @summary Creates a certificate deployment task. After an SSL certificate is issued, you can create a certificate deployment task to immediately deploy the certificate to an Alibaba Cloud service or deploy the certificate to the service at a specific point in time. Then, the certificate can implement trusted identity authentication and ensure the security of data transmission for your website hosted on the service.
 *
 * @description After the task creation is completed, the task will be in the editing state. You need to call the UpdateDeploymentJobStatus interface to change the status to the pending state, otherwise the task will not be executed.
 *
 * @param request CreateDeploymentJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateDeploymentJobResponse
 */
CreateDeploymentJobResponse Client::createDeploymentJobWithOptions(const CreateDeploymentJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCertIds()) {
    query["CertIds"] = request.certIds();
  }

  if (!!request.hasContactIds()) {
    query["ContactIds"] = request.contactIds();
  }

  if (!!request.hasJobType()) {
    query["JobType"] = request.jobType();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasResourceIds()) {
    query["ResourceIds"] = request.resourceIds();
  }

  if (!!request.hasScheduleTime()) {
    query["ScheduleTime"] = request.scheduleTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateDeploymentJob"},
    {"version" , "2020-04-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateDeploymentJobResponse>();
}

/**
 * @summary Creates a certificate deployment task. After an SSL certificate is issued, you can create a certificate deployment task to immediately deploy the certificate to an Alibaba Cloud service or deploy the certificate to the service at a specific point in time. Then, the certificate can implement trusted identity authentication and ensure the security of data transmission for your website hosted on the service.
 *
 * @description After the task creation is completed, the task will be in the editing state. You need to call the UpdateDeploymentJobStatus interface to change the status to the pending state, otherwise the task will not be executed.
 *
 * @param request CreateDeploymentJobRequest
 * @return CreateDeploymentJobResponse
 */
CreateDeploymentJobResponse Client::createDeploymentJob(const CreateDeploymentJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createDeploymentJobWithOptions(request, runtime);
}

/**
 * @summary Decrypts a certificate in a certificate repository.
 *
 * @description You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DecryptRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DecryptResponse
 */
DecryptResponse Client::decryptWithOptions(const DecryptRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlgorithm()) {
    query["Algorithm"] = request.algorithm();
  }

  if (!!request.hasCertIdentifier()) {
    query["CertIdentifier"] = request.certIdentifier();
  }

  if (!!request.hasCiphertextBlob()) {
    query["CiphertextBlob"] = request.ciphertextBlob();
  }

  if (!!request.hasCustomIdentifier()) {
    query["CustomIdentifier"] = request.customIdentifier();
  }

  if (!!request.hasMessageType()) {
    query["MessageType"] = request.messageType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "Decrypt"},
    {"version" , "2020-04-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DecryptResponse>();
}

/**
 * @summary Decrypts a certificate in a certificate repository.
 *
 * @description You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DecryptRequest
 * @return DecryptResponse
 */
DecryptResponse Client::decrypt(const DecryptRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return decryptWithOptions(request, runtime);
}

/**
 * @summary Deletes an order in which the application for a domain validated (DV) certificate failed.
 *
 * @description You can call this operation to delete a certificate application order only in the following scenarios:
 * *   The status of the order is **review failed**. You have called the [DescribeCertificateState](https://help.aliyun.com/document_detail/455800.html) operation to query the status of the certificate application order and the value of the **Type** parameter is **verify_fail**.
 * *   The status of the order is **pending application**. You have called the [CancelOrderRequest](https://help.aliyun.com/document_detail/455299.html) operation to cancel a certificate application order whose status is pending review or being reviewed. The status of the certificate application order that is canceled in this case changes to **pending application**.
 *
 * @param request DeleteCertificateRequestRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCertificateRequestResponse
 */
DeleteCertificateRequestResponse Client::deleteCertificateRequestWithOptions(const DeleteCertificateRequestRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOrderId()) {
    query["OrderId"] = request.orderId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteCertificateRequest"},
    {"version" , "2020-04-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCertificateRequestResponse>();
}

/**
 * @summary Deletes an order in which the application for a domain validated (DV) certificate failed.
 *
 * @description You can call this operation to delete a certificate application order only in the following scenarios:
 * *   The status of the order is **review failed**. You have called the [DescribeCertificateState](https://help.aliyun.com/document_detail/455800.html) operation to query the status of the certificate application order and the value of the **Type** parameter is **verify_fail**.
 * *   The status of the order is **pending application**. You have called the [CancelOrderRequest](https://help.aliyun.com/document_detail/455299.html) operation to cancel a certificate application order whose status is pending review or being reviewed. The status of the certificate application order that is canceled in this case changes to **pending application**.
 *
 * @param request DeleteCertificateRequestRequest
 * @return DeleteCertificateRequestResponse
 */
DeleteCertificateRequestResponse Client::deleteCertificateRequest(const DeleteCertificateRequestRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCertificateRequestWithOptions(request, runtime);
}

/**
 * @summary Deletes a certificate signing request (CSR) file.
 *
 * @param request DeleteCsrRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteCsrResponse
 */
DeleteCsrResponse Client::deleteCsrWithOptions(const DeleteCsrRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCsrId()) {
    query["CsrId"] = request.csrId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteCsr"},
    {"version" , "2020-04-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteCsrResponse>();
}

/**
 * @summary Deletes a certificate signing request (CSR) file.
 *
 * @param request DeleteCsrRequest
 * @return DeleteCsrResponse
 */
DeleteCsrResponse Client::deleteCsr(const DeleteCsrRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteCsrWithOptions(request, runtime);
}

/**
 * @summary Deletes a deployment task.
 *
 * @param request DeleteDeploymentJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteDeploymentJobResponse
 */
DeleteDeploymentJobResponse Client::deleteDeploymentJobWithOptions(const DeleteDeploymentJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteDeploymentJob"},
    {"version" , "2020-04-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteDeploymentJobResponse>();
}

/**
 * @summary Deletes a deployment task.
 *
 * @param request DeleteDeploymentJobRequest
 * @return DeleteDeploymentJobResponse
 */
DeleteDeploymentJobResponse Client::deleteDeploymentJob(const DeleteDeploymentJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteDeploymentJobWithOptions(request, runtime);
}

/**
 * @summary Deletes a private certificate from a certificate application repository.
 *
 * @description You can call the DeletePCACert operation to delete a private certificate from a certificate application repository.
 * ### Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DeletePCACertRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeletePCACertResponse
 */
DeletePCACertResponse Client::deletePCACertWithOptions(const DeletePCACertRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIdentifier()) {
    query["Identifier"] = request.identifier();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeletePCACert"},
    {"version" , "2020-04-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeletePCACertResponse>();
}

/**
 * @summary Deletes a private certificate from a certificate application repository.
 *
 * @description You can call the DeletePCACert operation to delete a private certificate from a certificate application repository.
 * ### Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DeletePCACertRequest
 * @return DeletePCACertResponse
 */
DeletePCACertResponse Client::deletePCACert(const DeletePCACertRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deletePCACertWithOptions(request, runtime);
}

/**
 * @summary Deletes an expired or uploaded certificate.
 *
 * @description You can call this operation up to 100 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DeleteUserCertificateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteUserCertificateResponse
 */
DeleteUserCertificateResponse Client::deleteUserCertificateWithOptions(const DeleteUserCertificateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCertId()) {
    query["CertId"] = request.certId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteUserCertificate"},
    {"version" , "2020-04-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteUserCertificateResponse>();
}

/**
 * @summary Deletes an expired or uploaded certificate.
 *
 * @description You can call this operation up to 100 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DeleteUserCertificateRequest
 * @return DeleteUserCertificateResponse
 */
DeleteUserCertificateResponse Client::deleteUserCertificate(const DeleteUserCertificateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteUserCertificateWithOptions(request, runtime);
}

/**
 * @summary Deletes the worker of a deployment task.
 *
 * @param request DeleteWorkerResourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteWorkerResourceResponse
 */
DeleteWorkerResourceResponse Client::deleteWorkerResourceWithOptions(const DeleteWorkerResourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  if (!!request.hasWorkerId()) {
    query["WorkerId"] = request.workerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteWorkerResource"},
    {"version" , "2020-04-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteWorkerResourceResponse>();
}

/**
 * @summary Deletes the worker of a deployment task.
 *
 * @param request DeleteWorkerResourceRequest
 * @return DeleteWorkerResourceResponse
 */
DeleteWorkerResourceResponse Client::deleteWorkerResource(const DeleteWorkerResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteWorkerResourceWithOptions(request, runtime);
}

/**
 * @summary Queries the status of a specified certificate application order.
 *
 * @description If you do not complete the verification of the domain name ownership after you submit a certificate application, you can call this operation to obtain the information that is required to complete the verification. You can complete the verification of the domain name ownership based on the data returned. If you use the DNS verification method, you must complete the verification on the management platform of the domain name. If you use the file verification method, you must complete the verification on the DNS server.
 * The certificate authority (CA) reviews your certificate application only after you complete the verification of the domain name ownership. After the CA approves your certificate application, the CA issues the certificate. If a certificate is issued, you can call this operation to obtain the CA certificate and private key of the certificate.
 *
 * @param request DescribeCertificateStateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCertificateStateResponse
 */
DescribeCertificateStateResponse Client::describeCertificateStateWithOptions(const DescribeCertificateStateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasOrderId()) {
    query["OrderId"] = request.orderId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCertificateState"},
    {"version" , "2020-04-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCertificateStateResponse>();
}

/**
 * @summary Queries the status of a specified certificate application order.
 *
 * @description If you do not complete the verification of the domain name ownership after you submit a certificate application, you can call this operation to obtain the information that is required to complete the verification. You can complete the verification of the domain name ownership based on the data returned. If you use the DNS verification method, you must complete the verification on the management platform of the domain name. If you use the file verification method, you must complete the verification on the DNS server.
 * The certificate authority (CA) reviews your certificate application only after you complete the verification of the domain name ownership. After the CA approves your certificate application, the CA issues the certificate. If a certificate is issued, you can call this operation to obtain the CA certificate and private key of the certificate.
 *
 * @param request DescribeCertificateStateRequest
 * @return DescribeCertificateStateResponse
 */
DescribeCertificateStateResponse Client::describeCertificateState(const DescribeCertificateStateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCertificateStateWithOptions(request, runtime);
}

/**
 * @summary Queries the number of third-party cloud resources on which you deployed certificates by using a multi-cloud deployment task.
 *
 * @param request DescribeCloudResourceStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCloudResourceStatusResponse
 */
DescribeCloudResourceStatusResponse Client::describeCloudResourceStatusWithOptions(const DescribeCloudResourceStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSecretId()) {
    query["SecretId"] = request.secretId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCloudResourceStatus"},
    {"version" , "2020-04-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCloudResourceStatusResponse>();
}

/**
 * @summary Queries the number of third-party cloud resources on which you deployed certificates by using a multi-cloud deployment task.
 *
 * @param request DescribeCloudResourceStatusRequest
 * @return DescribeCloudResourceStatusResponse
 */
DescribeCloudResourceStatusResponse Client::describeCloudResourceStatus(const DescribeCloudResourceStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCloudResourceStatusWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a deployment task. You can call the CreateDeploymentJob operation to create a deployment task and obtain the ID of the task.
 *
 * @param request DescribeDeploymentJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDeploymentJobResponse
 */
DescribeDeploymentJobResponse Client::describeDeploymentJobWithOptions(const DescribeDeploymentJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDeploymentJob"},
    {"version" , "2020-04-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDeploymentJobResponse>();
}

/**
 * @summary Queries the details of a deployment task. You can call the CreateDeploymentJob operation to create a deployment task and obtain the ID of the task.
 *
 * @param request DescribeDeploymentJobRequest
 * @return DescribeDeploymentJobResponse
 */
DescribeDeploymentJobResponse Client::describeDeploymentJob(const DescribeDeploymentJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDeploymentJobWithOptions(request, runtime);
}

/**
 * @summary Queries the number of worker tasks in a deployment task.
 *
 * @param request DescribeDeploymentJobStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeDeploymentJobStatusResponse
 */
DescribeDeploymentJobStatusResponse Client::describeDeploymentJobStatusWithOptions(const DescribeDeploymentJobStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeDeploymentJobStatus"},
    {"version" , "2020-04-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeDeploymentJobStatusResponse>();
}

/**
 * @summary Queries the number of worker tasks in a deployment task.
 *
 * @param request DescribeDeploymentJobStatusRequest
 * @return DescribeDeploymentJobStatusResponse
 */
DescribeDeploymentJobStatusResponse Client::describeDeploymentJobStatus(const DescribeDeploymentJobStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeDeploymentJobStatusWithOptions(request, runtime);
}

/**
 * @summary Queries the quota for domain validated (DV) certificates that you purchase and the quota usage.
 *
 * @param request DescribePackageStateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePackageStateResponse
 */
DescribePackageStateResponse Client::describePackageStateWithOptions(const DescribePackageStateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasProductCode()) {
    query["ProductCode"] = request.productCode();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePackageState"},
    {"version" , "2020-04-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePackageStateResponse>();
}

/**
 * @summary Queries the quota for domain validated (DV) certificates that you purchase and the quota usage.
 *
 * @param request DescribePackageStateRequest
 * @return DescribePackageStateResponse
 */
DescribePackageStateResponse Client::describePackageState(const DescribePackageStateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePackageStateWithOptions(request, runtime);
}

/**
 * @summary Encrypts a certificate in a certificate repository.
 *
 * @description You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request EncryptRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return EncryptResponse
 */
EncryptResponse Client::encryptWithOptions(const EncryptRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlgorithm()) {
    query["Algorithm"] = request.algorithm();
  }

  if (!!request.hasCertIdentifier()) {
    query["CertIdentifier"] = request.certIdentifier();
  }

  if (!!request.hasCustomIdentifier()) {
    query["CustomIdentifier"] = request.customIdentifier();
  }

  if (!!request.hasMessageType()) {
    query["MessageType"] = request.messageType();
  }

  if (!!request.hasPlaintext()) {
    query["Plaintext"] = request.plaintext();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "Encrypt"},
    {"version" , "2020-04-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<EncryptResponse>();
}

/**
 * @summary Encrypts a certificate in a certificate repository.
 *
 * @description You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request EncryptRequest
 * @return EncryptResponse
 */
EncryptResponse Client::encrypt(const EncryptRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return encryptWithOptions(request, runtime);
}

/**
 * @summary Queries the quota for certificate repositories.
 *
 * @description You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request GetCertWarehouseQuotaRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCertWarehouseQuotaResponse
 */
GetCertWarehouseQuotaResponse Client::getCertWarehouseQuotaWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "GetCertWarehouseQuota"},
    {"version" , "2020-04-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCertWarehouseQuotaResponse>();
}

/**
 * @summary Queries the quota for certificate repositories.
 *
 * @description You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @return GetCertWarehouseQuotaResponse
 */
GetCertWarehouseQuotaResponse Client::getCertWarehouseQuota() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCertWarehouseQuotaWithOptions(runtime);
}

/**
 * @summary Obtains the content of a certificate signing request (CSR) file.
 *
 * @param request GetCsrDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCsrDetailResponse
 */
GetCsrDetailResponse Client::getCsrDetailWithOptions(const GetCsrDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCsrId()) {
    query["CsrId"] = request.csrId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetCsrDetail"},
    {"version" , "2020-04-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCsrDetailResponse>();
}

/**
 * @summary Obtains the content of a certificate signing request (CSR) file.
 *
 * @param request GetCsrDetailRequest
 * @return GetCsrDetailResponse
 */
GetCsrDetailResponse Client::getCsrDetail(const GetCsrDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCsrDetailWithOptions(request, runtime);
}

/**
 * @summary Queries the details of a certificate.
 *
 * @description You can call this operation up to 100 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request GetUserCertificateDetailRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetUserCertificateDetailResponse
 */
GetUserCertificateDetailResponse Client::getUserCertificateDetailWithOptions(const GetUserCertificateDetailRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCertFilter()) {
    query["CertFilter"] = request.certFilter();
  }

  if (!!request.hasCertId()) {
    query["CertId"] = request.certId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetUserCertificateDetail"},
    {"version" , "2020-04-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetUserCertificateDetailResponse>();
}

/**
 * @summary Queries the details of a certificate.
 *
 * @description You can call this operation up to 100 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request GetUserCertificateDetailRequest
 * @return GetUserCertificateDetailResponse
 */
GetUserCertificateDetailResponse Client::getUserCertificateDetail(const GetUserCertificateDetailRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getUserCertificateDetailWithOptions(request, runtime);
}

/**
 * @summary Queries the certificates in a certificate repository.
 *
 * @description You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request ListCertRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCertResponse
 */
ListCertResponse Client::listCertWithOptions(const ListCertRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCertType()) {
    query["CertType"] = request.certType();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasKeyWord()) {
    query["KeyWord"] = request.keyWord();
  }

  if (!!request.hasShowSize()) {
    query["ShowSize"] = request.showSize();
  }

  if (!!request.hasSourceType()) {
    query["SourceType"] = request.sourceType();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  if (!!request.hasWarehouseId()) {
    query["WarehouseId"] = request.warehouseId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListCert"},
    {"version" , "2020-04-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCertResponse>();
}

/**
 * @summary Queries the certificates in a certificate repository.
 *
 * @description You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request ListCertRequest
 * @return ListCertResponse
 */
ListCertResponse Client::listCert(const ListCertRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCertWithOptions(request, runtime);
}

/**
 * @summary Queries certificate repositories.
 *
 * @description You can call the ListCertWarehouse operation to query certificate repositories.
 * ### Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request ListCertWarehouseRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCertWarehouseResponse
 */
ListCertWarehouseResponse Client::listCertWarehouseWithOptions(const ListCertWarehouseRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasShowSize()) {
    query["ShowSize"] = request.showSize();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListCertWarehouse"},
    {"version" , "2020-04-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCertWarehouseResponse>();
}

/**
 * @summary Queries certificate repositories.
 *
 * @description You can call the ListCertWarehouse operation to query certificate repositories.
 * ### Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request ListCertWarehouseRequest
 * @return ListCertWarehouseResponse
 */
ListCertWarehouseResponse Client::listCertWarehouse(const ListCertWarehouseRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCertWarehouseWithOptions(request, runtime);
}

/**
 * @summary Queries a list of AccessKey pairs for multi-cloud deployment.
 *
 * @param request ListCloudAccessRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCloudAccessResponse
 */
ListCloudAccessResponse Client::listCloudAccessWithOptions(const ListCloudAccessRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCloudName()) {
    query["CloudName"] = request.cloudName();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasSecretId()) {
    query["SecretId"] = request.secretId();
  }

  if (!!request.hasShowSize()) {
    query["ShowSize"] = request.showSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListCloudAccess"},
    {"version" , "2020-04-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCloudAccessResponse>();
}

/**
 * @summary Queries a list of AccessKey pairs for multi-cloud deployment.
 *
 * @param request ListCloudAccessRequest
 * @return ListCloudAccessResponse
 */
ListCloudAccessResponse Client::listCloudAccess(const ListCloudAccessRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCloudAccessWithOptions(request, runtime);
}

/**
 * @summary Queries the certificate resources of a cloud service provider and cloud services.
 *
 * @param tmpReq ListCloudResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCloudResourcesResponse
 */
ListCloudResourcesResponse Client::listCloudResourcesWithOptions(const ListCloudResourcesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  ListCloudResourcesShrinkRequest request = ListCloudResourcesShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasCertIds()) {
    request.setCertIdsShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.certIds(), "CertIds", "json"));
  }

  json query = {};
  if (!!request.hasCertIdsShrink()) {
    query["CertIds"] = request.certIdsShrink();
  }

  if (!!request.hasCloudName()) {
    query["CloudName"] = request.cloudName();
  }

  if (!!request.hasCloudProduct()) {
    query["CloudProduct"] = request.cloudProduct();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasKeyword()) {
    query["Keyword"] = request.keyword();
  }

  if (!!request.hasSecretId()) {
    query["SecretId"] = request.secretId();
  }

  if (!!request.hasShowSize()) {
    query["ShowSize"] = request.showSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListCloudResources"},
    {"version" , "2020-04-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCloudResourcesResponse>();
}

/**
 * @summary Queries the certificate resources of a cloud service provider and cloud services.
 *
 * @param request ListCloudResourcesRequest
 * @return ListCloudResourcesResponse
 */
ListCloudResourcesResponse Client::listCloudResources(const ListCloudResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCloudResourcesWithOptions(request, runtime);
}

/**
 * @summary Queries a list of contacts.
 *
 * @param request ListContactRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListContactResponse
 */
ListContactResponse Client::listContactWithOptions(const ListContactRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasKeyword()) {
    query["Keyword"] = request.keyword();
  }

  if (!!request.hasShowSize()) {
    query["ShowSize"] = request.showSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListContact"},
    {"version" , "2020-04-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListContactResponse>();
}

/**
 * @summary Queries a list of contacts.
 *
 * @param request ListContactRequest
 * @return ListContactResponse
 */
ListContactResponse Client::listContact(const ListContactRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listContactWithOptions(request, runtime);
}

/**
 * @summary Queries certificate signing requests (CSRs).
 *
 * @param request ListCsrRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCsrResponse
 */
ListCsrResponse Client::listCsrWithOptions(const ListCsrRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlgorithm()) {
    query["Algorithm"] = request.algorithm();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasKeyWord()) {
    query["KeyWord"] = request.keyWord();
  }

  if (!!request.hasShowSize()) {
    query["ShowSize"] = request.showSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListCsr"},
    {"version" , "2020-04-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCsrResponse>();
}

/**
 * @summary Queries certificate signing requests (CSRs).
 *
 * @param request ListCsrRequest
 * @return ListCsrResponse
 */
ListCsrResponse Client::listCsr(const ListCsrRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCsrWithOptions(request, runtime);
}

/**
 * @summary Queries a list of deployment tasks that are created.
 *
 * @param request ListDeploymentJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDeploymentJobResponse
 */
ListDeploymentJobResponse Client::listDeploymentJobWithOptions(const ListDeploymentJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasJobType()) {
    query["JobType"] = request.jobType();
  }

  if (!!request.hasShowSize()) {
    query["ShowSize"] = request.showSize();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDeploymentJob"},
    {"version" , "2020-04-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDeploymentJobResponse>();
}

/**
 * @summary Queries a list of deployment tasks that are created.
 *
 * @param request ListDeploymentJobRequest
 * @return ListDeploymentJobResponse
 */
ListDeploymentJobResponse Client::listDeploymentJob(const ListDeploymentJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDeploymentJobWithOptions(request, runtime);
}

/**
 * @summary Queries the basic information about a deployment task. After you create a deployment task, you can call this operation to obtain the basic information about the deployment task, including the instance ID, type, and name of the certificate.
 *
 * @param request ListDeploymentJobCertRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDeploymentJobCertResponse
 */
ListDeploymentJobCertResponse Client::listDeploymentJobCertWithOptions(const ListDeploymentJobCertRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDeploymentJobCert"},
    {"version" , "2020-04-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDeploymentJobCertResponse>();
}

/**
 * @summary Queries the basic information about a deployment task. After you create a deployment task, you can call this operation to obtain the basic information about the deployment task, including the instance ID, type, and name of the certificate.
 *
 * @param request ListDeploymentJobCertRequest
 * @return ListDeploymentJobCertResponse
 */
ListDeploymentJobCertResponse Client::listDeploymentJobCert(const ListDeploymentJobCertRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDeploymentJobCertWithOptions(request, runtime);
}

/**
 * @summary Queries the cloud resources of cloud services in a deployment task.
 *
 * @param request ListDeploymentJobResourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListDeploymentJobResourceResponse
 */
ListDeploymentJobResourceResponse Client::listDeploymentJobResourceWithOptions(const ListDeploymentJobResourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListDeploymentJobResource"},
    {"version" , "2020-04-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListDeploymentJobResourceResponse>();
}

/**
 * @summary Queries the cloud resources of cloud services in a deployment task.
 *
 * @param request ListDeploymentJobResourceRequest
 * @return ListDeploymentJobResourceResponse
 */
ListDeploymentJobResourceResponse Client::listDeploymentJobResource(const ListDeploymentJobResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listDeploymentJobResourceWithOptions(request, runtime);
}

/**
 * @summary Queries the certificates or certificate orders of users.
 *
 * @description You can call the ListUserCertificateOrder operation to query the certificates or certificate orders of users. If you set OrderType to CERT or UPLOAD, certificates are returned. If you set OrderType to CPACK or BUY, certificate orders are returned.
 * ## Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request ListUserCertificateOrderRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListUserCertificateOrderResponse
 */
ListUserCertificateOrderResponse Client::listUserCertificateOrderWithOptions(const ListUserCertificateOrderRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasKeyword()) {
    query["Keyword"] = request.keyword();
  }

  if (!!request.hasOrderType()) {
    query["OrderType"] = request.orderType();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasShowSize()) {
    query["ShowSize"] = request.showSize();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListUserCertificateOrder"},
    {"version" , "2020-04-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListUserCertificateOrderResponse>();
}

/**
 * @summary Queries the certificates or certificate orders of users.
 *
 * @description You can call the ListUserCertificateOrder operation to query the certificates or certificate orders of users. If you set OrderType to CERT or UPLOAD, certificates are returned. If you set OrderType to CPACK or BUY, certificate orders are returned.
 * ## Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request ListUserCertificateOrderRequest
 * @return ListUserCertificateOrderResponse
 */
ListUserCertificateOrderResponse Client::listUserCertificateOrder(const ListUserCertificateOrderRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listUserCertificateOrderWithOptions(request, runtime);
}

/**
 * @summary Queries the details about the worker tasks of a deployment task. Alibaba Cloud allows you to deploy multiple certificates at a time. Therefore, a deployment task may include multiple worker tasks in multiple cloud services. A worker task refers to a task that deploys a certificate to a cloud resource in a cloud service.
 *
 * @param request ListWorkerResourceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListWorkerResourceResponse
 */
ListWorkerResourceResponse Client::listWorkerResourceWithOptions(const ListWorkerResourceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCloudProduct()) {
    query["CloudProduct"] = request.cloudProduct();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  if (!!request.hasShowSize()) {
    query["ShowSize"] = request.showSize();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListWorkerResource"},
    {"version" , "2020-04-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListWorkerResourceResponse>();
}

/**
 * @summary Queries the details about the worker tasks of a deployment task. Alibaba Cloud allows you to deploy multiple certificates at a time. Therefore, a deployment task may include multiple worker tasks in multiple cloud services. A worker task refers to a task that deploys a certificate to a cloud resource in a cloud service.
 *
 * @param request ListWorkerResourceRequest
 * @return ListWorkerResourceResponse
 */
ListWorkerResourceResponse Client::listWorkerResource(const ListWorkerResourceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listWorkerResourceWithOptions(request, runtime);
}

/**
 * @summary Changes the resource group to which a certificate or certificate order belongs.
 *
 * @param request MoveResourceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return MoveResourceGroupResponse
 */
MoveResourceGroupResponse Client::moveResourceGroupWithOptions(const MoveResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.resourceType();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "MoveResourceGroup"},
    {"version" , "2020-04-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<MoveResourceGroupResponse>();
}

/**
 * @summary Changes the resource group to which a certificate or certificate order belongs.
 *
 * @param request MoveResourceGroupRequest
 * @return MoveResourceGroupResponse
 */
MoveResourceGroupResponse Client::moveResourceGroup(const MoveResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return moveResourceGroupWithOptions(request, runtime);
}

/**
 * @summary Submits a renewal application for an issued certificate.
 *
 * @description You can call the RenewCertificateOrderForPackageRequest operation to submit a renewal application for a certificate only when the order of the certificate is in the expiring state. After the renewal is complete, a new certificate order whose status is pending application is generated. You must submit a certificate application for the new certificate order and install the new certificate after the new certificate is issued.
 * >  You can call the [DescribeCertificateState](https://help.aliyun.com/document_detail/164111.html) operation to query the status of a certificate application order. If the value of the **Type** response parameter is **certificate**, the certificate is issued.
 *
 * @param request RenewCertificateOrderForPackageRequestRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return RenewCertificateOrderForPackageRequestResponse
 */
RenewCertificateOrderForPackageRequestResponse Client::renewCertificateOrderForPackageRequestWithOptions(const RenewCertificateOrderForPackageRequestRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCsr()) {
    query["Csr"] = request.csr();
  }

  if (!!request.hasOrderId()) {
    query["OrderId"] = request.orderId();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.tags();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "RenewCertificateOrderForPackageRequest"},
    {"version" , "2020-04-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<RenewCertificateOrderForPackageRequestResponse>();
}

/**
 * @summary Submits a renewal application for an issued certificate.
 *
 * @description You can call the RenewCertificateOrderForPackageRequest operation to submit a renewal application for a certificate only when the order of the certificate is in the expiring state. After the renewal is complete, a new certificate order whose status is pending application is generated. You must submit a certificate application for the new certificate order and install the new certificate after the new certificate is issued.
 * >  You can call the [DescribeCertificateState](https://help.aliyun.com/document_detail/164111.html) operation to query the status of a certificate application order. If the value of the **Type** response parameter is **certificate**, the certificate is issued.
 *
 * @param request RenewCertificateOrderForPackageRequestRequest
 * @return RenewCertificateOrderForPackageRequestResponse
 */
RenewCertificateOrderForPackageRequestResponse Client::renewCertificateOrderForPackageRequest(const RenewCertificateOrderForPackageRequestRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return renewCertificateOrderForPackageRequestWithOptions(request, runtime);
}

/**
 * @summary Signs a private certificate in a certificate application repository.
 *
 * @description You can call the Sign operation to sign a private certificate in a certificate application repository.
 * ### Limits
 * You can call this operation up to 1,000 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request SignRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return SignResponse
 */
SignResponse Client::signWithOptions(const SignRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCertIdentifier()) {
    query["CertIdentifier"] = request.certIdentifier();
  }

  if (!!request.hasCustomIdentifier()) {
    query["CustomIdentifier"] = request.customIdentifier();
  }

  if (!!request.hasMessage()) {
    query["Message"] = request.message();
  }

  if (!!request.hasMessageType()) {
    query["MessageType"] = request.messageType();
  }

  if (!!request.hasSigningAlgorithm()) {
    query["SigningAlgorithm"] = request.signingAlgorithm();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "Sign"},
    {"version" , "2020-04-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<SignResponse>();
}

/**
 * @summary Signs a private certificate in a certificate application repository.
 *
 * @description You can call the Sign operation to sign a private certificate in a certificate application repository.
 * ### Limits
 * You can call this operation up to 1,000 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request SignRequest
 * @return SignResponse
 */
SignResponse Client::sign(const SignRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return signWithOptions(request, runtime);
}

/**
 * @summary Updates the private key of a certificate signing request (CSR).
 *
 * @param request UpdateCsrRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateCsrResponse
 */
UpdateCsrResponse Client::updateCsrWithOptions(const UpdateCsrRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCsrId()) {
    query["CsrId"] = request.csrId();
  }

  if (!!request.hasKey()) {
    query["Key"] = request.key();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateCsr"},
    {"version" , "2020-04-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateCsrResponse>();
}

/**
 * @summary Updates the private key of a certificate signing request (CSR).
 *
 * @param request UpdateCsrRequest
 * @return UpdateCsrResponse
 */
UpdateCsrResponse Client::updateCsr(const UpdateCsrRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateCsrWithOptions(request, runtime);
}

/**
 * @summary Updates a deployment task.
 *
 * @param request UpdateDeploymentJobRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDeploymentJobResponse
 */
UpdateDeploymentJobResponse Client::updateDeploymentJobWithOptions(const UpdateDeploymentJobRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCertIds()) {
    query["CertIds"] = request.certIds();
  }

  if (!!request.hasContactIds()) {
    query["ContactIds"] = request.contactIds();
  }

  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasResourceIds()) {
    query["ResourceIds"] = request.resourceIds();
  }

  if (!!request.hasScheduleTime()) {
    query["ScheduleTime"] = request.scheduleTime();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateDeploymentJob"},
    {"version" , "2020-04-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDeploymentJobResponse>();
}

/**
 * @summary Updates a deployment task.
 *
 * @param request UpdateDeploymentJobRequest
 * @return UpdateDeploymentJobResponse
 */
UpdateDeploymentJobResponse Client::updateDeploymentJob(const UpdateDeploymentJobRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDeploymentJobWithOptions(request, runtime);
}

/**
 * @summary Updates the status of a deployment task.
 *
 * @param request UpdateDeploymentJobStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateDeploymentJobStatusResponse
 */
UpdateDeploymentJobStatusResponse Client::updateDeploymentJobStatusWithOptions(const UpdateDeploymentJobStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateDeploymentJobStatus"},
    {"version" , "2020-04-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateDeploymentJobStatusResponse>();
}

/**
 * @summary Updates the status of a deployment task.
 *
 * @param request UpdateDeploymentJobStatusRequest
 * @return UpdateDeploymentJobStatusResponse
 */
UpdateDeploymentJobStatusResponse Client::updateDeploymentJobStatus(const UpdateDeploymentJobStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateDeploymentJobStatusWithOptions(request, runtime);
}

/**
 * @summary Rolls back or executes a worker task in a deployment task.
 *
 * @param request UpdateWorkerResourceStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateWorkerResourceStatusResponse
 */
UpdateWorkerResourceStatusResponse Client::updateWorkerResourceStatusWithOptions(const UpdateWorkerResourceStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasJobId()) {
    query["JobId"] = request.jobId();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  if (!!request.hasWorkerId()) {
    query["WorkerId"] = request.workerId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateWorkerResourceStatus"},
    {"version" , "2020-04-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateWorkerResourceStatusResponse>();
}

/**
 * @summary Rolls back or executes a worker task in a deployment task.
 *
 * @param request UpdateWorkerResourceStatusRequest
 * @return UpdateWorkerResourceStatusResponse
 */
UpdateWorkerResourceStatusResponse Client::updateWorkerResourceStatus(const UpdateWorkerResourceStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateWorkerResourceStatusWithOptions(request, runtime);
}

/**
 * @summary Uploads a certificate signing request (CSR) file
 *
 * @param request UploadCsrRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UploadCsrResponse
 */
UploadCsrResponse Client::uploadCsrWithOptions(const UploadCsrRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCsr()) {
    query["Csr"] = request.csr();
  }

  if (!!request.hasKey()) {
    query["Key"] = request.key();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UploadCsr"},
    {"version" , "2020-04-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UploadCsrResponse>();
}

/**
 * @summary Uploads a certificate signing request (CSR) file
 *
 * @param request UploadCsrRequest
 * @return UploadCsrResponse
 */
UploadCsrResponse Client::uploadCsr(const UploadCsrRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return uploadCsrWithOptions(request, runtime);
}

/**
 * @summary Uploads a certificate.
 *
 * @description You can call this operation up to 100 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request UploadUserCertificateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UploadUserCertificateResponse
 */
UploadUserCertificateResponse Client::uploadUserCertificateWithOptions(const UploadUserCertificateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCert()) {
    query["Cert"] = request.cert();
  }

  if (!!request.hasEncryptCert()) {
    query["EncryptCert"] = request.encryptCert();
  }

  if (!!request.hasEncryptPrivateKey()) {
    query["EncryptPrivateKey"] = request.encryptPrivateKey();
  }

  if (!!request.hasKey()) {
    query["Key"] = request.key();
  }

  if (!!request.hasName()) {
    query["Name"] = request.name();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSignCert()) {
    query["SignCert"] = request.signCert();
  }

  if (!!request.hasSignPrivateKey()) {
    query["SignPrivateKey"] = request.signPrivateKey();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.tags();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UploadUserCertificate"},
    {"version" , "2020-04-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UploadUserCertificateResponse>();
}

/**
 * @summary Uploads a certificate.
 *
 * @description You can call this operation up to 100 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request UploadUserCertificateRequest
 * @return UploadUserCertificateResponse
 */
UploadUserCertificateResponse Client::uploadUserCertificate(const UploadUserCertificateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return uploadUserCertificateWithOptions(request, runtime);
}

/**
 * @summary Verifies the signature of a private certificate in a certificate application repository.
 *
 * @description You can call the Verify operation to verify the signature of a private certificate in a certificate application repository.
 * ### Limits
 * You can call this operation up to 1,000 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request VerifyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return VerifyResponse
 */
VerifyResponse Client::verifyWithOptions(const VerifyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCertIdentifier()) {
    query["CertIdentifier"] = request.certIdentifier();
  }

  if (!!request.hasCustomIdentifier()) {
    query["CustomIdentifier"] = request.customIdentifier();
  }

  if (!!request.hasMessage()) {
    query["Message"] = request.message();
  }

  if (!!request.hasMessageType()) {
    query["MessageType"] = request.messageType();
  }

  if (!!request.hasSignatureValue()) {
    query["SignatureValue"] = request.signatureValue();
  }

  if (!!request.hasSigningAlgorithm()) {
    query["SigningAlgorithm"] = request.signingAlgorithm();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "Verify"},
    {"version" , "2020-04-07"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<VerifyResponse>();
}

/**
 * @summary Verifies the signature of a private certificate in a certificate application repository.
 *
 * @description You can call the Verify operation to verify the signature of a private certificate in a certificate application repository.
 * ### Limits
 * You can call this operation up to 1,000 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request VerifyRequest
 * @return VerifyResponse
 */
VerifyResponse Client::verify(const VerifyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return verifyWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Cas20200407