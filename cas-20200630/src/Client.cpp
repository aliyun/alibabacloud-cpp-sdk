#include <darabonba/Core.hpp>
#include <alibabacloud/Cas20200630.hpp>
#include <alibabacloud/Utils.hpp>
#include <alibabacloud/Openapi.hpp>
#include <map>
#include <darabonba/Runtime.hpp>
using namespace std;
using namespace Darabonba;
using json = nlohmann::json;
using namespace AlibabaCloud::OpenApi;
using namespace AlibabaCloud::Cas20200630::Models;
using OpenApiClient = AlibabaCloud::OpenApi::Client;
using namespace AlibabaCloud::OpenApi::Utils::Models;
namespace AlibabaCloud
{
namespace Cas20200630
{

AlibabaCloud::Cas20200630::Client::Client(Config &config): OpenApiClient(config){
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
 * @summary 分配证书使用数量
 *
 * @param request AssignCertificateCountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AssignCertificateCountResponse
 */
AssignCertificateCountResponse Client::assignCertificateCountWithOptions(const AssignCertificateCountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCertTotalCount()) {
    query["CertTotalCount"] = request.certTotalCount();
  }

  if (!!request.hasId()) {
    query["Id"] = request.id();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "AssignCertificateCount"},
    {"version" , "2020-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<AssignCertificateCountResponse>();
}

/**
 * @summary 分配证书使用数量
 *
 * @param request AssignCertificateCountRequest
 * @return AssignCertificateCountResponse
 */
AssignCertificateCountResponse Client::assignCertificateCount(const AssignCertificateCountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return assignCertificateCountWithOptions(request, runtime);
}

/**
 * @summary Issues a client certificate by using a system-generated certificate signing request (CSR) file.
 *
 * @description Before you call this operation, make sure that you have created a root certificate authority (CA) certificate by calling the [CreateRootCACertificate](~~CreateRootCACertificate~~) operation and an intermediate CA certificate by calling the [CreateSubCACertificate](~~CreateRootCACertificate~~) operation. Only intermediate CA certificates can issue client certificates.
 * ## QPS limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request CreateClientCertificateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateClientCertificateResponse
 */
CreateClientCertificateResponse Client::createClientCertificateWithOptions(const CreateClientCertificateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAfterTime()) {
    query["AfterTime"] = request.afterTime();
  }

  if (!!request.hasAlgorithm()) {
    query["Algorithm"] = request.algorithm();
  }

  if (!!request.hasBeforeTime()) {
    query["BeforeTime"] = request.beforeTime();
  }

  if (!!request.hasCommonName()) {
    query["CommonName"] = request.commonName();
  }

  if (!!request.hasCountry()) {
    query["Country"] = request.country();
  }

  if (!!request.hasDays()) {
    query["Days"] = request.days();
  }

  if (!!request.hasEnableCrl()) {
    query["EnableCrl"] = request.enableCrl();
  }

  if (!!request.hasImmediately()) {
    query["Immediately"] = request.immediately();
  }

  if (!!request.hasLocality()) {
    query["Locality"] = request.locality();
  }

  if (!!request.hasMonths()) {
    query["Months"] = request.months();
  }

  if (!!request.hasOrganization()) {
    query["Organization"] = request.organization();
  }

  if (!!request.hasOrganizationUnit()) {
    query["OrganizationUnit"] = request.organizationUnit();
  }

  if (!!request.hasParentIdentifier()) {
    query["ParentIdentifier"] = request.parentIdentifier();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSanType()) {
    query["SanType"] = request.sanType();
  }

  if (!!request.hasSanValue()) {
    query["SanValue"] = request.sanValue();
  }

  if (!!request.hasState()) {
    query["State"] = request.state();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.tags();
  }

  if (!!request.hasYears()) {
    query["Years"] = request.years();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateClientCertificate"},
    {"version" , "2020-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateClientCertificateResponse>();
}

/**
 * @summary Issues a client certificate by using a system-generated certificate signing request (CSR) file.
 *
 * @description Before you call this operation, make sure that you have created a root certificate authority (CA) certificate by calling the [CreateRootCACertificate](~~CreateRootCACertificate~~) operation and an intermediate CA certificate by calling the [CreateSubCACertificate](~~CreateRootCACertificate~~) operation. Only intermediate CA certificates can issue client certificates.
 * ## QPS limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request CreateClientCertificateRequest
 * @return CreateClientCertificateResponse
 */
CreateClientCertificateResponse Client::createClientCertificate(const CreateClientCertificateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createClientCertificateWithOptions(request, runtime);
}

/**
 * @summary Issues a client certificate by using a custom certificate signing request (CSR) file.
 *
 * @description Before you call this operation, make sure that you have created a root certificate authority (CA) certificate by calling the [CreateRootCACertificate](https://help.aliyun.com/document_detail/328093.html) operation and an intermediate CA certificate by calling the [CreateSubCACertificate](https://help.aliyun.com/document_detail/328094.html) operation. Only intermediate CA certificates can be used to issue client certificates.
 * ## Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request CreateClientCertificateWithCsrRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateClientCertificateWithCsrResponse
 */
CreateClientCertificateWithCsrResponse Client::createClientCertificateWithCsrWithOptions(const CreateClientCertificateWithCsrRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAfterTime()) {
    query["AfterTime"] = request.afterTime();
  }

  if (!!request.hasAlgorithm()) {
    query["Algorithm"] = request.algorithm();
  }

  if (!!request.hasBeforeTime()) {
    query["BeforeTime"] = request.beforeTime();
  }

  if (!!request.hasCommonName()) {
    query["CommonName"] = request.commonName();
  }

  if (!!request.hasCountry()) {
    query["Country"] = request.country();
  }

  if (!!request.hasCsr()) {
    query["Csr"] = request.csr();
  }

  if (!!request.hasDays()) {
    query["Days"] = request.days();
  }

  if (!!request.hasEnableCrl()) {
    query["EnableCrl"] = request.enableCrl();
  }

  if (!!request.hasImmediately()) {
    query["Immediately"] = request.immediately();
  }

  if (!!request.hasLocality()) {
    query["Locality"] = request.locality();
  }

  if (!!request.hasMonths()) {
    query["Months"] = request.months();
  }

  if (!!request.hasOrganization()) {
    query["Organization"] = request.organization();
  }

  if (!!request.hasOrganizationUnit()) {
    query["OrganizationUnit"] = request.organizationUnit();
  }

  if (!!request.hasParentIdentifier()) {
    query["ParentIdentifier"] = request.parentIdentifier();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasSanType()) {
    query["SanType"] = request.sanType();
  }

  if (!!request.hasSanValue()) {
    query["SanValue"] = request.sanValue();
  }

  if (!!request.hasState()) {
    query["State"] = request.state();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.tags();
  }

  if (!!request.hasYears()) {
    query["Years"] = request.years();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateClientCertificateWithCsr"},
    {"version" , "2020-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateClientCertificateWithCsrResponse>();
}

/**
 * @summary Issues a client certificate by using a custom certificate signing request (CSR) file.
 *
 * @description Before you call this operation, make sure that you have created a root certificate authority (CA) certificate by calling the [CreateRootCACertificate](https://help.aliyun.com/document_detail/328093.html) operation and an intermediate CA certificate by calling the [CreateSubCACertificate](https://help.aliyun.com/document_detail/328094.html) operation. Only intermediate CA certificates can be used to issue client certificates.
 * ## Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request CreateClientCertificateWithCsrRequest
 * @return CreateClientCertificateWithCsrResponse
 */
CreateClientCertificateWithCsrResponse Client::createClientCertificateWithCsr(const CreateClientCertificateWithCsrRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createClientCertificateWithCsrWithOptions(request, runtime);
}

/**
 * @summary Issues a certificate based on the specified key usage, extended key usage, and name and alias of the entity that uses the certificate.
 *
 * @description By default, the name of the entity is obtained from the certificate signing request (CSR) of the certificate that you want to issue. If you specify a different name for the entity, the name of the entity in the CSR becomes invalid. The specified name is used to issue the certificate.
 * You must specify the key usage and extended key usage based on the certificate type. The following list describes common certificate types:
 * *   Server certificate
 * Key usage: digitalSignature or keyEncipherment
 * Extended key usage: serverAuth
 * *   Client certificate
 * Key usage: digitalSignature or keyEncipherment
 * Extended key usage: clientAuth
 * *   Mutual Transport Layer Security (TLS) authentication certificate
 * Key usage: digitalSignature or keyEncipherment
 * Extended key usage: serverAuth or clientAuth
 * *   Email certificate
 * Key usage: digitalSignature or contentCommitment
 * Extended key usage: emailProtection
 * Note: Compliant certificate authorities (CAs) are managed by third-party authorities. This operation is not supported for compliant CAs.
 *
 * @param request CreateCustomCertificateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCustomCertificateResponse
 */
CreateCustomCertificateResponse Client::createCustomCertificateWithOptions(const CreateCustomCertificateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiPassthrough()) {
    query["ApiPassthrough"] = request.apiPassthrough();
  }

  if (!!request.hasCsr()) {
    query["Csr"] = request.csr();
  }

  if (!!request.hasEnableCrl()) {
    query["EnableCrl"] = request.enableCrl();
  }

  if (!!request.hasImmediately()) {
    query["Immediately"] = request.immediately();
  }

  if (!!request.hasParentIdentifier()) {
    query["ParentIdentifier"] = request.parentIdentifier();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.tags();
  }

  if (!!request.hasValidity()) {
    query["Validity"] = request.validity();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateCustomCertificate"},
    {"version" , "2020-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateCustomCertificateResponse>();
}

/**
 * @summary Issues a certificate based on the specified key usage, extended key usage, and name and alias of the entity that uses the certificate.
 *
 * @description By default, the name of the entity is obtained from the certificate signing request (CSR) of the certificate that you want to issue. If you specify a different name for the entity, the name of the entity in the CSR becomes invalid. The specified name is used to issue the certificate.
 * You must specify the key usage and extended key usage based on the certificate type. The following list describes common certificate types:
 * *   Server certificate
 * Key usage: digitalSignature or keyEncipherment
 * Extended key usage: serverAuth
 * *   Client certificate
 * Key usage: digitalSignature or keyEncipherment
 * Extended key usage: clientAuth
 * *   Mutual Transport Layer Security (TLS) authentication certificate
 * Key usage: digitalSignature or keyEncipherment
 * Extended key usage: serverAuth or clientAuth
 * *   Email certificate
 * Key usage: digitalSignature or contentCommitment
 * Extended key usage: emailProtection
 * Note: Compliant certificate authorities (CAs) are managed by third-party authorities. This operation is not supported for compliant CAs.
 *
 * @param request CreateCustomCertificateRequest
 * @return CreateCustomCertificateResponse
 */
CreateCustomCertificateResponse Client::createCustomCertificate(const CreateCustomCertificateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCustomCertificateWithOptions(request, runtime);
}

/**
 * @summary 创建外部子CA证书
 *
 * @param tmpReq CreateExternalCACertificateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateExternalCACertificateResponse
 */
CreateExternalCACertificateResponse Client::createExternalCACertificateWithOptions(const CreateExternalCACertificateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime) {
  tmpReq.validate();
  CreateExternalCACertificateShrinkRequest request = CreateExternalCACertificateShrinkRequest();
  Utils::Utils::convert(tmpReq, request);
  if (!!tmpReq.hasApiPassthrough()) {
    request.setApiPassthroughShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.apiPassthrough(), "ApiPassthrough", "json"));
  }

  json query = {};
  if (!!request.hasApiPassthroughShrink()) {
    query["ApiPassthrough"] = request.apiPassthroughShrink();
  }

  if (!!request.hasCsr()) {
    query["Csr"] = request.csr();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.tags();
  }

  if (!!request.hasValidity()) {
    query["Validity"] = request.validity();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateExternalCACertificate"},
    {"version" , "2020-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateExternalCACertificateResponse>();
}

/**
 * @summary 创建外部子CA证书
 *
 * @param request CreateExternalCACertificateRequest
 * @return CreateExternalCACertificateResponse
 */
CreateExternalCACertificateResponse Client::createExternalCACertificate(const CreateExternalCACertificateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createExternalCACertificateWithOptions(request, runtime);
}

/**
 * @summary Revokes a client certificate or a server certificate.
 *
 * @description After a client certificate or a server certificate is revoked, the client or the server on which the certificate is installed cannot establish HTTPS connections with other devices.
 * After a client certificate or a server certificate is revoked, you can call the [DeleteClientCertificate](https://help.aliyun.com/document_detail/330880.html) operation to permanently delete the certificate.
 * ## Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request CreateRevokeClientCertificateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRevokeClientCertificateResponse
 */
CreateRevokeClientCertificateResponse Client::createRevokeClientCertificateWithOptions(const CreateRevokeClientCertificateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIdentifier()) {
    query["Identifier"] = request.identifier();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateRevokeClientCertificate"},
    {"version" , "2020-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateRevokeClientCertificateResponse>();
}

/**
 * @summary Revokes a client certificate or a server certificate.
 *
 * @description After a client certificate or a server certificate is revoked, the client or the server on which the certificate is installed cannot establish HTTPS connections with other devices.
 * After a client certificate or a server certificate is revoked, you can call the [DeleteClientCertificate](https://help.aliyun.com/document_detail/330880.html) operation to permanently delete the certificate.
 * ## Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request CreateRevokeClientCertificateRequest
 * @return CreateRevokeClientCertificateResponse
 */
CreateRevokeClientCertificateResponse Client::createRevokeClientCertificate(const CreateRevokeClientCertificateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createRevokeClientCertificateWithOptions(request, runtime);
}

/**
 * @summary Creates a root certificate authority (CA) certificate.
 *
 * @description You can call the CreateRootCACertificate operation to create a self-signed root CA certificate. A root CA certificate is the trust anchor in a chain of trust for private certificates that are used within an enterprise. You must create a root CA certificate before you can use the root CA certificate to issue intermediate CA certificates. Then, you can use the intermediate CA certificates to issue client certificates and server certificates.
 * Before you call this operation, make sure that you have purchased a private root CA instance by using the [Certificate Management Service console](https://yundun.console.aliyun.com/?p=cas#/pca/rootlist). For more information, see [Create a private CA](https://help.aliyun.com/document_detail/208553.html).
 * ## Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request CreateRootCACertificateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRootCACertificateResponse
 */
CreateRootCACertificateResponse Client::createRootCACertificateWithOptions(const CreateRootCACertificateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlgorithm()) {
    query["Algorithm"] = request.algorithm();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasCommonName()) {
    query["CommonName"] = request.commonName();
  }

  if (!!request.hasCountryCode()) {
    query["CountryCode"] = request.countryCode();
  }

  if (!!request.hasLocality()) {
    query["Locality"] = request.locality();
  }

  if (!!request.hasOrganization()) {
    query["Organization"] = request.organization();
  }

  if (!!request.hasOrganizationUnit()) {
    query["OrganizationUnit"] = request.organizationUnit();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasState()) {
    query["State"] = request.state();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.tags();
  }

  if (!!request.hasYears()) {
    query["Years"] = request.years();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateRootCACertificate"},
    {"version" , "2020-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateRootCACertificateResponse>();
}

/**
 * @summary Creates a root certificate authority (CA) certificate.
 *
 * @description You can call the CreateRootCACertificate operation to create a self-signed root CA certificate. A root CA certificate is the trust anchor in a chain of trust for private certificates that are used within an enterprise. You must create a root CA certificate before you can use the root CA certificate to issue intermediate CA certificates. Then, you can use the intermediate CA certificates to issue client certificates and server certificates.
 * Before you call this operation, make sure that you have purchased a private root CA instance by using the [Certificate Management Service console](https://yundun.console.aliyun.com/?p=cas#/pca/rootlist). For more information, see [Create a private CA](https://help.aliyun.com/document_detail/208553.html).
 * ## Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request CreateRootCACertificateRequest
 * @return CreateRootCACertificateResponse
 */
CreateRootCACertificateResponse Client::createRootCACertificate(const CreateRootCACertificateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createRootCACertificateWithOptions(request, runtime);
}

/**
 * @summary Issues a server certificate by using a system-generated certificate signing request (CSR) file.
 *
 * @description Before you call this operation, make sure that you have created a root certificate authority (CA) certificate by calling the [CreateRootCACertificate](https://help.aliyun.com/document_detail/328093.html) operation and an intermediate CA certificate by calling the [CreateSubCACertificate](https://help.aliyun.com/document_detail/328094.html) operation. Only intermediate CA certificates can be used to issue server certificates.
 * ## Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request CreateServerCertificateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateServerCertificateResponse
 */
CreateServerCertificateResponse Client::createServerCertificateWithOptions(const CreateServerCertificateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAfterTime()) {
    query["AfterTime"] = request.afterTime();
  }

  if (!!request.hasAlgorithm()) {
    query["Algorithm"] = request.algorithm();
  }

  if (!!request.hasBeforeTime()) {
    query["BeforeTime"] = request.beforeTime();
  }

  if (!!request.hasCommonName()) {
    query["CommonName"] = request.commonName();
  }

  if (!!request.hasCountry()) {
    query["Country"] = request.country();
  }

  if (!!request.hasDays()) {
    query["Days"] = request.days();
  }

  if (!!request.hasDomain()) {
    query["Domain"] = request.domain();
  }

  if (!!request.hasEnableCrl()) {
    query["EnableCrl"] = request.enableCrl();
  }

  if (!!request.hasImmediately()) {
    query["Immediately"] = request.immediately();
  }

  if (!!request.hasLocality()) {
    query["Locality"] = request.locality();
  }

  if (!!request.hasMonths()) {
    query["Months"] = request.months();
  }

  if (!!request.hasOrganization()) {
    query["Organization"] = request.organization();
  }

  if (!!request.hasOrganizationUnit()) {
    query["OrganizationUnit"] = request.organizationUnit();
  }

  if (!!request.hasParentIdentifier()) {
    query["ParentIdentifier"] = request.parentIdentifier();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasState()) {
    query["State"] = request.state();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.tags();
  }

  if (!!request.hasYears()) {
    query["Years"] = request.years();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateServerCertificate"},
    {"version" , "2020-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateServerCertificateResponse>();
}

/**
 * @summary Issues a server certificate by using a system-generated certificate signing request (CSR) file.
 *
 * @description Before you call this operation, make sure that you have created a root certificate authority (CA) certificate by calling the [CreateRootCACertificate](https://help.aliyun.com/document_detail/328093.html) operation and an intermediate CA certificate by calling the [CreateSubCACertificate](https://help.aliyun.com/document_detail/328094.html) operation. Only intermediate CA certificates can be used to issue server certificates.
 * ## Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request CreateServerCertificateRequest
 * @return CreateServerCertificateResponse
 */
CreateServerCertificateResponse Client::createServerCertificate(const CreateServerCertificateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createServerCertificateWithOptions(request, runtime);
}

/**
 * @summary Issues a server certificate by using a custom certificate signing request (CSR) file.
 *
 * @description ## Usage notes
 * Before you call this operation, make sure that you have created a root certificate authority (CA) certificate by calling the [CreateRootCACertificate](https://help.aliyun.com/document_detail/328093.html) operation and an intermediate CA certificate by calling the [CreateSubCACertificate](https://help.aliyun.com/document_detail/328094.html) operation. Only intermediate CA certificates can be used to issue server certificates.
 *
 * @param request CreateServerCertificateWithCsrRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateServerCertificateWithCsrResponse
 */
CreateServerCertificateWithCsrResponse Client::createServerCertificateWithCsrWithOptions(const CreateServerCertificateWithCsrRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAfterTime()) {
    query["AfterTime"] = request.afterTime();
  }

  if (!!request.hasAlgorithm()) {
    query["Algorithm"] = request.algorithm();
  }

  if (!!request.hasBeforeTime()) {
    query["BeforeTime"] = request.beforeTime();
  }

  if (!!request.hasCommonName()) {
    query["CommonName"] = request.commonName();
  }

  if (!!request.hasCountry()) {
    query["Country"] = request.country();
  }

  if (!!request.hasCsr()) {
    query["Csr"] = request.csr();
  }

  if (!!request.hasDays()) {
    query["Days"] = request.days();
  }

  if (!!request.hasDomain()) {
    query["Domain"] = request.domain();
  }

  if (!!request.hasEnableCrl()) {
    query["EnableCrl"] = request.enableCrl();
  }

  if (!!request.hasImmediately()) {
    query["Immediately"] = request.immediately();
  }

  if (!!request.hasLocality()) {
    query["Locality"] = request.locality();
  }

  if (!!request.hasMonths()) {
    query["Months"] = request.months();
  }

  if (!!request.hasOrganization()) {
    query["Organization"] = request.organization();
  }

  if (!!request.hasOrganizationUnit()) {
    query["OrganizationUnit"] = request.organizationUnit();
  }

  if (!!request.hasParentIdentifier()) {
    query["ParentIdentifier"] = request.parentIdentifier();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasState()) {
    query["State"] = request.state();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.tags();
  }

  if (!!request.hasYears()) {
    query["Years"] = request.years();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "CreateServerCertificateWithCsr"},
    {"version" , "2020-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateServerCertificateWithCsrResponse>();
}

/**
 * @summary Issues a server certificate by using a custom certificate signing request (CSR) file.
 *
 * @description ## Usage notes
 * Before you call this operation, make sure that you have created a root certificate authority (CA) certificate by calling the [CreateRootCACertificate](https://help.aliyun.com/document_detail/328093.html) operation and an intermediate CA certificate by calling the [CreateSubCACertificate](https://help.aliyun.com/document_detail/328094.html) operation. Only intermediate CA certificates can be used to issue server certificates.
 *
 * @param request CreateServerCertificateWithCsrRequest
 * @return CreateServerCertificateWithCsrResponse
 */
CreateServerCertificateWithCsrResponse Client::createServerCertificateWithCsr(const CreateServerCertificateWithCsrRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createServerCertificateWithCsrWithOptions(request, runtime);
}

/**
 * @summary Creates an intermediate certificate authority (CA) certificate.
 *
 * @description You can call this operation to issue an intermediate certificate authority (CA) certificate by using an existing root CA certificate. Intermediate CA certificates can be used to issue client certificates and server certificates.
 * Before you call this operation, make sure that you have issued a root CA certificate by calling the [CreateRootCACertificate] operation.
 * ## Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request CreateSubCACertificateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSubCACertificateResponse
 */
CreateSubCACertificateResponse Client::createSubCACertificateWithOptions(const CreateSubCACertificateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlgorithm()) {
    query["Algorithm"] = request.algorithm();
  }

  if (!!request.hasCommonName()) {
    query["CommonName"] = request.commonName();
  }

  if (!!request.hasCountryCode()) {
    query["CountryCode"] = request.countryCode();
  }

  if (!!request.hasCrlDay()) {
    query["CrlDay"] = request.crlDay();
  }

  if (!!request.hasEnableCrl()) {
    query["EnableCrl"] = request.enableCrl();
  }

  if (!!request.hasExtendedKeyUsages()) {
    query["ExtendedKeyUsages"] = request.extendedKeyUsages();
  }

  if (!!request.hasLocality()) {
    query["Locality"] = request.locality();
  }

  if (!!request.hasOrganization()) {
    query["Organization"] = request.organization();
  }

  if (!!request.hasOrganizationUnit()) {
    query["OrganizationUnit"] = request.organizationUnit();
  }

  if (!!request.hasParentIdentifier()) {
    query["ParentIdentifier"] = request.parentIdentifier();
  }

  if (!!request.hasPathLenConstraint()) {
    query["PathLenConstraint"] = request.pathLenConstraint();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasState()) {
    query["State"] = request.state();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.tags();
  }

  if (!!request.hasYears()) {
    query["Years"] = request.years();
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.clientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "CreateSubCACertificate"},
    {"version" , "2020-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<CreateSubCACertificateResponse>();
}

/**
 * @summary Creates an intermediate certificate authority (CA) certificate.
 *
 * @description You can call this operation to issue an intermediate certificate authority (CA) certificate by using an existing root CA certificate. Intermediate CA certificates can be used to issue client certificates and server certificates.
 * Before you call this operation, make sure that you have issued a root CA certificate by calling the [CreateRootCACertificate] operation.
 * ## Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request CreateSubCACertificateRequest
 * @return CreateSubCACertificateResponse
 */
CreateSubCACertificateResponse Client::createSubCACertificate(const CreateSubCACertificateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSubCACertificateWithOptions(request, runtime);
}

/**
 * @summary Deletes a client certificate or a server certificate that is revoked.
 *
 * @description Before you call this operation, you must call the [CreateRevokeClientCertificate](https://help.aliyun.com/document_detail/330876.html) operation to revoke a client certificate or a server certificate.
 * ## Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DeleteClientCertificateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteClientCertificateResponse
 */
DeleteClientCertificateResponse Client::deleteClientCertificateWithOptions(const DeleteClientCertificateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIdentifier()) {
    query["Identifier"] = request.identifier();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DeleteClientCertificate"},
    {"version" , "2020-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DeleteClientCertificateResponse>();
}

/**
 * @summary Deletes a client certificate or a server certificate that is revoked.
 *
 * @description Before you call this operation, you must call the [CreateRevokeClientCertificate](https://help.aliyun.com/document_detail/330876.html) operation to revoke a client certificate or a server certificate.
 * ## Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DeleteClientCertificateRequest
 * @return DeleteClientCertificateResponse
 */
DeleteClientCertificateResponse Client::deleteClientCertificate(const DeleteClientCertificateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteClientCertificateWithOptions(request, runtime);
}

/**
 * @summary Queries the details about a root certificate authority (CA) certificate or an intermediate CA certificate.
 *
 * @description You can call the DescribeCACertificate operation to query the details about a root CA certificate or an intermediate CA certificate by using the unique identifier of the root CA certificate or intermediate CA certificate. The details include the serial number, user information, and content of a CA certificate.
 * Before you call this operation, make sure that you have created a root CA by calling the [CreateRootCACertificate] operation or an intermediate CA certificate by calling the [CreateSubCACertificate] operation.
 * ## Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeCACertificateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCACertificateResponse
 */
DescribeCACertificateResponse Client::describeCACertificateWithOptions(const DescribeCACertificateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIdentifier()) {
    query["Identifier"] = request.identifier();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCACertificate"},
    {"version" , "2020-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCACertificateResponse>();
}

/**
 * @summary Queries the details about a root certificate authority (CA) certificate or an intermediate CA certificate.
 *
 * @description You can call the DescribeCACertificate operation to query the details about a root CA certificate or an intermediate CA certificate by using the unique identifier of the root CA certificate or intermediate CA certificate. The details include the serial number, user information, and content of a CA certificate.
 * Before you call this operation, make sure that you have created a root CA by calling the [CreateRootCACertificate] operation or an intermediate CA certificate by calling the [CreateSubCACertificate] operation.
 * ## Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeCACertificateRequest
 * @return DescribeCACertificateResponse
 */
DescribeCACertificateResponse Client::describeCACertificate(const DescribeCACertificateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCACertificateWithOptions(request, runtime);
}

/**
 * @summary Queries the number of certificate authority (CA) certificates that you create.
 *
 * @description You can call the DescribeCACertificateCount operation to query the number of created CA certificates, which includes root CA certificates and intermediate CA certificates.
 * ## Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeCACertificateCountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCACertificateCountResponse
 */
DescribeCACertificateCountResponse Client::describeCACertificateCountWithOptions(const Darabonba::RuntimeOptions &runtime) {
  OpenApiRequest req = OpenApiRequest();
  Params params = Params(json({
    {"action" , "DescribeCACertificateCount"},
    {"version" , "2020-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCACertificateCountResponse>();
}

/**
 * @summary Queries the number of certificate authority (CA) certificates that you create.
 *
 * @description You can call the DescribeCACertificateCount operation to query the number of created CA certificates, which includes root CA certificates and intermediate CA certificates.
 * ## Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @return DescribeCACertificateCountResponse
 */
DescribeCACertificateCountResponse Client::describeCACertificateCount() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCACertificateCountWithOptions(runtime);
}

/**
 * @summary Queries the details about all root certificate authority (CA) certificates and intermediate CA certificates.
 *
 * @description You can call the DescribeCACertificateList operation to perform a paged query of the details about all CA certificates that you create. The details include the unique identifier, serial number, user information, and content of each root CA certificate or intermediate CA certificate.
 * ## Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeCACertificateListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCACertificateListResponse
 */
DescribeCACertificateListResponse Client::describeCACertificateListWithOptions(const DescribeCACertificateListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCaStatus()) {
    query["CaStatus"] = request.caStatus();
  }

  if (!!request.hasCertType()) {
    query["CertType"] = request.certType();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasIdentifier()) {
    query["Identifier"] = request.identifier();
  }

  if (!!request.hasIssuerType()) {
    query["IssuerType"] = request.issuerType();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasShowSize()) {
    query["ShowSize"] = request.showSize();
  }

  if (!!request.hasValidStatus()) {
    query["ValidStatus"] = request.validStatus();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCACertificateList"},
    {"version" , "2020-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCACertificateListResponse>();
}

/**
 * @summary Queries the details about all root certificate authority (CA) certificates and intermediate CA certificates.
 *
 * @description You can call the DescribeCACertificateList operation to perform a paged query of the details about all CA certificates that you create. The details include the unique identifier, serial number, user information, and content of each root CA certificate or intermediate CA certificate.
 * ## Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeCACertificateListRequest
 * @return DescribeCACertificateListResponse
 */
DescribeCACertificateListResponse Client::describeCACertificateList(const DescribeCACertificateListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCACertificateListWithOptions(request, runtime);
}

/**
 * @summary Queries the encrypted private key of a client certificate or a server certificate.
 *
 * @description ## Usage notes
 * You can call the DescribeCertificatePrivateKey operation to obtain the encrypted private key of a client certificate or a server certificate. The certificate is issued based on a system-generated certificate signing request (CSR). Before you call this operation, make sure that you have issued a client certificate or a server certificate by calling the following operation:
 * *   [CreateClientCertificate](https://help.aliyun.com/document_detail/330873.html)
 * *   [CreateServerCertificate](https://help.aliyun.com/document_detail/330877.html)
 * To ensure the security of private key transmission, the DescribeCertificatePrivateKey operation encrypts the private key by using the private key password that you specify and returns the encrypted private key. The private key password is a string that is used to encrypt the private key. After you obtain the encrypted private key of the certificate, you can use the following methods to decrypt the private key:
 * *   If the encryption algorithm of the certificate is RSA, you must run the `openssl rsa -in <Encrypted private key file> -passin pass:<Private key password> -out <Decrypted private key file>` command in the computer on which [OpenSSL](https://www.openssl.org/source/) or [BabaSSL](https://github.com/BabaSSL/BabaSSL) is installed.
 * *   If the encryption algorithm of the certificate is ECC, you must run the `openssl ec -in <Encrypted private key file> -passin pass:<Private key password> -out <Decrypted private key file>` command in the computer on which [OpenSSL](https://www.openssl.org/source/) or [BabaSSL](https://github.com/BabaSSL/BabaSSL) is installed.
 * *   If the encryption algorithm of the certificate is SM2, you must run the `openssl ec -in <Encrypted private key file> -passin pass:<Private key password> -out <Decrypted private key file>` command in the computer on which [BabaSSL](https://github.com/BabaSSL/BabaSSL) is installed.
 * >  You can call the [DescribeClientCertificate] operation to query the encryption algorithm type of a client certificate or a server certificate.
 * ## Limits
 * You can call this operation up to 100 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeCertificatePrivateKeyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCertificatePrivateKeyResponse
 */
DescribeCertificatePrivateKeyResponse Client::describeCertificatePrivateKeyWithOptions(const DescribeCertificatePrivateKeyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEncryptedCode()) {
    query["EncryptedCode"] = request.encryptedCode();
  }

  if (!!request.hasIdentifier()) {
    query["Identifier"] = request.identifier();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeCertificatePrivateKey"},
    {"version" , "2020-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeCertificatePrivateKeyResponse>();
}

/**
 * @summary Queries the encrypted private key of a client certificate or a server certificate.
 *
 * @description ## Usage notes
 * You can call the DescribeCertificatePrivateKey operation to obtain the encrypted private key of a client certificate or a server certificate. The certificate is issued based on a system-generated certificate signing request (CSR). Before you call this operation, make sure that you have issued a client certificate or a server certificate by calling the following operation:
 * *   [CreateClientCertificate](https://help.aliyun.com/document_detail/330873.html)
 * *   [CreateServerCertificate](https://help.aliyun.com/document_detail/330877.html)
 * To ensure the security of private key transmission, the DescribeCertificatePrivateKey operation encrypts the private key by using the private key password that you specify and returns the encrypted private key. The private key password is a string that is used to encrypt the private key. After you obtain the encrypted private key of the certificate, you can use the following methods to decrypt the private key:
 * *   If the encryption algorithm of the certificate is RSA, you must run the `openssl rsa -in <Encrypted private key file> -passin pass:<Private key password> -out <Decrypted private key file>` command in the computer on which [OpenSSL](https://www.openssl.org/source/) or [BabaSSL](https://github.com/BabaSSL/BabaSSL) is installed.
 * *   If the encryption algorithm of the certificate is ECC, you must run the `openssl ec -in <Encrypted private key file> -passin pass:<Private key password> -out <Decrypted private key file>` command in the computer on which [OpenSSL](https://www.openssl.org/source/) or [BabaSSL](https://github.com/BabaSSL/BabaSSL) is installed.
 * *   If the encryption algorithm of the certificate is SM2, you must run the `openssl ec -in <Encrypted private key file> -passin pass:<Private key password> -out <Decrypted private key file>` command in the computer on which [BabaSSL](https://github.com/BabaSSL/BabaSSL) is installed.
 * >  You can call the [DescribeClientCertificate] operation to query the encryption algorithm type of a client certificate or a server certificate.
 * ## Limits
 * You can call this operation up to 100 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeCertificatePrivateKeyRequest
 * @return DescribeCertificatePrivateKeyResponse
 */
DescribeCertificatePrivateKeyResponse Client::describeCertificatePrivateKey(const DescribeCertificatePrivateKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCertificatePrivateKeyWithOptions(request, runtime);
}

/**
 * @summary Queries the details about a client certificate or a server certificate by using the unique identifier of the certificate.
 *
 * @description You can call the DescribeClientCertificate operation to query the details about a client certificate or a server certificate by using the unique identifier of the certificate. The details include the serial number, user information, content, and status of each certificate.
 * Before you call this operation, make sure that you have created a client certificate or a server certificate.
 * For more information about how to call an operation to create a client certificate, see the following topics:
 * *   [CreateClientCertificate](https://help.aliyun.com/document_detail/330873.html)
 * *   [CreateClientCertificateWithCsr](https://help.aliyun.com/document_detail/330875.html)
 * For more information about how to call an operation to create a server certificate, see the following topics:
 * *   [CreateServerCertificate](https://help.aliyun.com/document_detail/330877.html)
 * *   [CreateServerCertificateWithCsr](https://help.aliyun.com/document_detail/330878.html)
 * ## Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeClientCertificateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeClientCertificateResponse
 */
DescribeClientCertificateResponse Client::describeClientCertificateWithOptions(const DescribeClientCertificateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIdentifier()) {
    query["Identifier"] = request.identifier();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeClientCertificate"},
    {"version" , "2020-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeClientCertificateResponse>();
}

/**
 * @summary Queries the details about a client certificate or a server certificate by using the unique identifier of the certificate.
 *
 * @description You can call the DescribeClientCertificate operation to query the details about a client certificate or a server certificate by using the unique identifier of the certificate. The details include the serial number, user information, content, and status of each certificate.
 * Before you call this operation, make sure that you have created a client certificate or a server certificate.
 * For more information about how to call an operation to create a client certificate, see the following topics:
 * *   [CreateClientCertificate](https://help.aliyun.com/document_detail/330873.html)
 * *   [CreateClientCertificateWithCsr](https://help.aliyun.com/document_detail/330875.html)
 * For more information about how to call an operation to create a server certificate, see the following topics:
 * *   [CreateServerCertificate](https://help.aliyun.com/document_detail/330877.html)
 * *   [CreateServerCertificateWithCsr](https://help.aliyun.com/document_detail/330878.html)
 * ## Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeClientCertificateRequest
 * @return DescribeClientCertificateResponse
 */
DescribeClientCertificateResponse Client::describeClientCertificate(const DescribeClientCertificateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeClientCertificateWithOptions(request, runtime);
}

/**
 * @summary Queries the status information about client certificates and server certificates by using the unique identifiers of the certificates.
 *
 * @description You can call the DescribeClientCertificateStatus operation to query the status information about multiple client certificates or server certificates at a time by using the unique identifiers of the certificates. For example, you can check whether a certificate is revoked.
 * ## Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeClientCertificateStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeClientCertificateStatusResponse
 */
DescribeClientCertificateStatusResponse Client::describeClientCertificateStatusWithOptions(const DescribeClientCertificateStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIdentifier()) {
    query["Identifier"] = request.identifier();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeClientCertificateStatus"},
    {"version" , "2020-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeClientCertificateStatusResponse>();
}

/**
 * @summary Queries the status information about client certificates and server certificates by using the unique identifiers of the certificates.
 *
 * @description You can call the DescribeClientCertificateStatus operation to query the status information about multiple client certificates or server certificates at a time by using the unique identifiers of the certificates. For example, you can check whether a certificate is revoked.
 * ## Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request DescribeClientCertificateStatusRequest
 * @return DescribeClientCertificateStatusResponse
 */
DescribeClientCertificateStatusResponse Client::describeClientCertificateStatus(const DescribeClientCertificateStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeClientCertificateStatusWithOptions(request, runtime);
}

/**
 * @summary Queries the status information about a private root certificate authority (CA) instance or a private intermediate CA instance that you purchase by using the Certificate Management Service console.
 *
 * @description ## Usage notes
 * You can call the GetCAInstanceStatus operation to query the status information of a private CA instance by using the ID of the instance. The instance is purchased by using the SSL Certificates Service console. The status information includes the status of the private CA instance, the number of certificates that can be issued by using the private CA instance, and the number of issued certificates.
 * Before you call this operation, make sure that you have purchased a private CA by using the [SSL Certificates Service console](https://yundun.console.aliyun.com/?p=cas#/pca/rootlist). For more information, see [Create a private CA](https://help.aliyun.com/document_detail/208553.html).
 *
 * @param request GetCAInstanceStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCAInstanceStatusResponse
 */
GetCAInstanceStatusResponse Client::getCAInstanceStatusWithOptions(const GetCAInstanceStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIdentifier()) {
    query["Identifier"] = request.identifier();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.instanceId();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetCAInstanceStatus"},
    {"version" , "2020-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCAInstanceStatusResponse>();
}

/**
 * @summary Queries the status information about a private root certificate authority (CA) instance or a private intermediate CA instance that you purchase by using the Certificate Management Service console.
 *
 * @description ## Usage notes
 * You can call the GetCAInstanceStatus operation to query the status information of a private CA instance by using the ID of the instance. The instance is purchased by using the SSL Certificates Service console. The status information includes the status of the private CA instance, the number of certificates that can be issued by using the private CA instance, and the number of issued certificates.
 * Before you call this operation, make sure that you have purchased a private CA by using the [SSL Certificates Service console](https://yundun.console.aliyun.com/?p=cas#/pca/rootlist). For more information, see [Create a private CA](https://help.aliyun.com/document_detail/208553.html).
 *
 * @param request GetCAInstanceStatusRequest
 * @return GetCAInstanceStatusResponse
 */
GetCAInstanceStatusResponse Client::getCAInstanceStatus(const GetCAInstanceStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCAInstanceStatusWithOptions(request, runtime);
}

/**
 * @summary 查询终端实例
 *
 * @param request ListAllEndEntityInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAllEndEntityInstanceResponse
 */
ListAllEndEntityInstanceResponse Client::listAllEndEntityInstanceWithOptions(const ListAllEndEntityInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasParentId()) {
    query["ParentId"] = request.parentId();
  }

  if (!!request.hasRecursiveChildren()) {
    query["RecursiveChildren"] = request.recursiveChildren();
  }

  if (!!request.hasShowSize()) {
    query["ShowSize"] = request.showSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListAllEndEntityInstance"},
    {"version" , "2020-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListAllEndEntityInstanceResponse>();
}

/**
 * @summary 查询终端实例
 *
 * @param request ListAllEndEntityInstanceRequest
 * @return ListAllEndEntityInstanceResponse
 */
ListAllEndEntityInstanceResponse Client::listAllEndEntityInstance(const ListAllEndEntityInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAllEndEntityInstanceWithOptions(request, runtime);
}

/**
 * @summary 获取证书列表
 *
 * @param request ListCertRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCertResponse
 */
ListCertResponse Client::listCertWithOptions(const ListCertRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAfterDate()) {
    query["AfterDate"] = request.afterDate();
  }

  if (!!request.hasBeforeDate()) {
    query["BeforeDate"] = request.beforeDate();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasInstanceUuid()) {
    query["InstanceUuid"] = request.instanceUuid();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasShowSize()) {
    query["ShowSize"] = request.showSize();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  if (!!request.hasType()) {
    query["Type"] = request.type();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListCert"},
    {"version" , "2020-06-30"},
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
 * @summary 获取证书列表
 *
 * @param request ListCertRequest
 * @return ListCertResponse
 */
ListCertResponse Client::listCert(const ListCertRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCertWithOptions(request, runtime);
}

/**
 * @summary Queries the details about all client certificates and server certificates.
 *
 * @description You can call the ListClientCertificate operation to perform a paged query of the details about all client certificates and server certificates that you create. The details include the unique identifier, serial number, user information, content, and status of each certificate.
 * ## Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request ListClientCertificateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListClientCertificateResponse
 */
ListClientCertificateResponse Client::listClientCertificateWithOptions(const ListClientCertificateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasIdentifier()) {
    query["Identifier"] = request.identifier();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasShowSize()) {
    query["ShowSize"] = request.showSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListClientCertificate"},
    {"version" , "2020-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListClientCertificateResponse>();
}

/**
 * @summary Queries the details about all client certificates and server certificates.
 *
 * @description You can call the ListClientCertificate operation to perform a paged query of the details about all client certificates and server certificates that you create. The details include the unique identifier, serial number, user information, content, and status of each certificate.
 * ## Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request ListClientCertificateRequest
 * @return ListClientCertificateResponse
 */
ListClientCertificateResponse Client::listClientCertificate(const ListClientCertificateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listClientCertificateWithOptions(request, runtime);
}

/**
 * @summary 查询私有CA机构证书
 *
 * @param request ListPcaCaCertificateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPcaCaCertificateResponse
 */
ListPcaCaCertificateResponse Client::listPcaCaCertificateWithOptions(const ListPcaCaCertificateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListPcaCaCertificate"},
    {"version" , "2020-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListPcaCaCertificateResponse>();
}

/**
 * @summary 查询私有CA机构证书
 *
 * @param request ListPcaCaCertificateRequest
 * @return ListPcaCaCertificateResponse
 */
ListPcaCaCertificateResponse Client::listPcaCaCertificate(const ListPcaCaCertificateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPcaCaCertificateWithOptions(request, runtime);
}

/**
 * @summary Queries the details about all client certificates and server certificates that are revoked.
 *
 * @description You can call the ListRevokeCertificate operation to perform a paged query of the details about all revoked client certificates and server certificates. The details include the unique identifier, serial number, and revocation date of each certificate.
 * ## Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request ListRevokeCertificateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRevokeCertificateResponse
 */
ListRevokeCertificateResponse Client::listRevokeCertificateWithOptions(const ListRevokeCertificateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.currentPage();
  }

  if (!!request.hasShowSize()) {
    query["ShowSize"] = request.showSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListRevokeCertificate"},
    {"version" , "2020-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListRevokeCertificateResponse>();
}

/**
 * @summary Queries the details about all client certificates and server certificates that are revoked.
 *
 * @description You can call the ListRevokeCertificate operation to perform a paged query of the details about all revoked client certificates and server certificates. The details include the unique identifier, serial number, and revocation date of each certificate.
 * ## Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request ListRevokeCertificateRequest
 * @return ListRevokeCertificateResponse
 */
ListRevokeCertificateResponse Client::listRevokeCertificate(const ListRevokeCertificateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRevokeCertificateWithOptions(request, runtime);
}

/**
 * @summary 获取资源对应的标签
 *
 * @param request ListTagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResourcesWithOptions(const ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.maxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.nextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
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
    {"version" , "2020-06-30"},
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
 * @summary 获取资源对应的标签
 *
 * @param request ListTagResourcesRequest
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResources(const ListTagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagResourcesWithOptions(request, runtime);
}

/**
 * @summary 变更资源的资源组
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
    {"version" , "2020-06-30"},
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
 * @summary 变更资源的资源组
 *
 * @param request MoveResourceGroupRequest
 * @return MoveResourceGroupResponse
 */
MoveResourceGroupResponse Client::moveResourceGroup(const MoveResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return moveResourceGroupWithOptions(request, runtime);
}

/**
 * @summary 新增资源标签
 *
 * @param request TagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResourcesWithOptions(const TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
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
    {"version" , "2020-06-30"},
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
 * @summary 新增资源标签
 *
 * @param request TagResourcesRequest
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResources(const TagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return tagResourcesWithOptions(request, runtime);
}

/**
 * @summary 移除标签
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

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.regionId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.resourceId();
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
    {"version" , "2020-06-30"},
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
 * @summary 移除标签
 *
 * @param request UntagResourcesRequest
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResources(const UntagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return untagResourcesWithOptions(request, runtime);
}

/**
 * @summary Changes the status of a root certificate authority (CA) certificate or an intermediate CA certificate from ISSUE to REVOKE.
 *
 * @description After a CA certificate is created, the CA certificate is in the ISSUE state by default. You can call the UpdateCACertificateStatus operation to change the status of a CA certificate from ISSUE to REVOKE. If a CA certificate is in the ISSUE state, the CA certificate can be used to issue certificates. If a CA certificate is in the REVOKE state, the CA certificate cannot be used to issue certificates, and the certificates that are issued from the CA certificate become invalid.
 * Before you call this operation, make sure that you have created a root CA by calling the [CreateRootCACertificate] operation or an intermediate CA certificate by calling the [CreateSubCACertificate] operation.
 * ## Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request UpdateCACertificateStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateCACertificateStatusResponse
 */
UpdateCACertificateStatusResponse Client::updateCACertificateStatusWithOptions(const UpdateCACertificateStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.clientToken();
  }

  if (!!request.hasIdentifier()) {
    query["Identifier"] = request.identifier();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.status();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UpdateCACertificateStatus"},
    {"version" , "2020-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdateCACertificateStatusResponse>();
}

/**
 * @summary Changes the status of a root certificate authority (CA) certificate or an intermediate CA certificate from ISSUE to REVOKE.
 *
 * @description After a CA certificate is created, the CA certificate is in the ISSUE state by default. You can call the UpdateCACertificateStatus operation to change the status of a CA certificate from ISSUE to REVOKE. If a CA certificate is in the ISSUE state, the CA certificate can be used to issue certificates. If a CA certificate is in the REVOKE state, the CA certificate cannot be used to issue certificates, and the certificates that are issued from the CA certificate become invalid.
 * Before you call this operation, make sure that you have created a root CA by calling the [CreateRootCACertificate] operation or an intermediate CA certificate by calling the [CreateSubCACertificate] operation.
 * ## Limits
 * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
 *
 * @param request UpdateCACertificateStatusRequest
 * @return UpdateCACertificateStatusResponse
 */
UpdateCACertificateStatusResponse Client::updateCACertificateStatus(const UpdateCACertificateStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateCACertificateStatusWithOptions(request, runtime);
}

/**
 * @summary 更新证书属性
 *
 * @param request UpdatePcaCertificateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdatePcaCertificateResponse
 */
UpdatePcaCertificateResponse Client::updatePcaCertificateWithOptions(const UpdatePcaCertificateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAliasName()) {
    query["AliasName"] = request.aliasName();
  }

  if (!!request.hasIdentifier()) {
    query["Identifier"] = request.identifier();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.resourceGroupId();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.tags();
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.clientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
  Params params = Params(json({
    {"action" , "UpdatePcaCertificate"},
    {"version" , "2020-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UpdatePcaCertificateResponse>();
}

/**
 * @summary 更新证书属性
 *
 * @param request UpdatePcaCertificateRequest
 * @return UpdatePcaCertificateResponse
 */
UpdatePcaCertificateResponse Client::updatePcaCertificate(const UpdatePcaCertificateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updatePcaCertificateWithOptions(request, runtime);
}

/**
 * @summary 上传pca证书到SSL上传证书
 *
 * @param request UploadPcaCertToCasRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UploadPcaCertToCasResponse
 */
UploadPcaCertToCasResponse Client::uploadPcaCertToCasWithOptions(const UploadPcaCertToCasRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIds()) {
    query["Ids"] = request.ids();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "UploadPcaCertToCas"},
    {"version" , "2020-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<UploadPcaCertToCasResponse>();
}

/**
 * @summary 上传pca证书到SSL上传证书
 *
 * @param request UploadPcaCertToCasRequest
 * @return UploadPcaCertToCasResponse
 */
UploadPcaCertToCasResponse Client::uploadPcaCertToCas(const UploadPcaCertToCasRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return uploadPcaCertToCasWithOptions(request, runtime);
}
} // namespace AlibabaCloud
} // namespace Cas20200630