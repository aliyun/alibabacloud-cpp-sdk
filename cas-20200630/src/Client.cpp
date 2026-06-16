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
 * @summary Assigns the certificate quota to a subordinate certificate authority (CA) instance.
 *
 * @description ## QPS limit
 * This API operation is limited to 10 queries per second (QPS) per user. If you exceed this limit, the system throttles your API calls, which can affect your business. Plan your calls accordingly.
 *
 * @param request AssignCertificateCountRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return AssignCertificateCountResponse
 */
AssignCertificateCountResponse Client::assignCertificateCountWithOptions(const AssignCertificateCountRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCertTotalCount()) {
    query["CertTotalCount"] = request.getCertTotalCount();
  }

  if (!!request.hasId()) {
    query["Id"] = request.getId();
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
 * @summary Assigns the certificate quota to a subordinate certificate authority (CA) instance.
 *
 * @description ## QPS limit
 * This API operation is limited to 10 queries per second (QPS) per user. If you exceed this limit, the system throttles your API calls, which can affect your business. Plan your calls accordingly.
 *
 * @param request AssignCertificateCountRequest
 * @return AssignCertificateCountResponse
 */
AssignCertificateCountResponse Client::assignCertificateCount(const AssignCertificateCountRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return assignCertificateCountWithOptions(request, runtime);
}

/**
 * @summary Issues a client certificate by using a system-generated certificate signing request (CSR). You must create a root CA certificate and a subordinate CA certificate before calling this operation.
 *
 * @description Before you call this operation, you must create a root CA certificate by calling [CreateRootCACertificate](https://help.aliyun.com/document_detail/465962.html) and a subordinate CA certificate by calling [CreateSubCACertificate](https://help.aliyun.com/document_detail/465959.html). Only subordinate CA certificates can issue client certificates.
 * ## QPS limit
 * The queries per second (QPS) limit for this operation is 10 calls per second per user. Calls that exceed this limit are throttled, which can impact your business. We recommend that you call this operation at a reasonable rate.
 *
 * @param request CreateClientCertificateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateClientCertificateResponse
 */
CreateClientCertificateResponse Client::createClientCertificateWithOptions(const CreateClientCertificateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAfterTime()) {
    query["AfterTime"] = request.getAfterTime();
  }

  if (!!request.hasAlgorithm()) {
    query["Algorithm"] = request.getAlgorithm();
  }

  if (!!request.hasAliasName()) {
    query["AliasName"] = request.getAliasName();
  }

  if (!!request.hasBeforeTime()) {
    query["BeforeTime"] = request.getBeforeTime();
  }

  if (!!request.hasCommonName()) {
    query["CommonName"] = request.getCommonName();
  }

  if (!!request.hasCountry()) {
    query["Country"] = request.getCountry();
  }

  if (!!request.hasCustomIdentifier()) {
    query["CustomIdentifier"] = request.getCustomIdentifier();
  }

  if (!!request.hasDays()) {
    query["Days"] = request.getDays();
  }

  if (!!request.hasEnableCrl()) {
    query["EnableCrl"] = request.getEnableCrl();
  }

  if (!!request.hasImmediately()) {
    query["Immediately"] = request.getImmediately();
  }

  if (!!request.hasLocality()) {
    query["Locality"] = request.getLocality();
  }

  if (!!request.hasMonths()) {
    query["Months"] = request.getMonths();
  }

  if (!!request.hasOrganization()) {
    query["Organization"] = request.getOrganization();
  }

  if (!!request.hasOrganizationUnit()) {
    query["OrganizationUnit"] = request.getOrganizationUnit();
  }

  if (!!request.hasParentIdentifier()) {
    query["ParentIdentifier"] = request.getParentIdentifier();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasSanType()) {
    query["SanType"] = request.getSanType();
  }

  if (!!request.hasSanValue()) {
    query["SanValue"] = request.getSanValue();
  }

  if (!!request.hasState()) {
    query["State"] = request.getState();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.getTags();
  }

  if (!!request.hasYears()) {
    query["Years"] = request.getYears();
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)},
    {"body" , Utils::Utils::parseToMap(body)}
  }));
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
 * @summary Issues a client certificate by using a system-generated certificate signing request (CSR). You must create a root CA certificate and a subordinate CA certificate before calling this operation.
 *
 * @description Before you call this operation, you must create a root CA certificate by calling [CreateRootCACertificate](https://help.aliyun.com/document_detail/465962.html) and a subordinate CA certificate by calling [CreateSubCACertificate](https://help.aliyun.com/document_detail/465959.html). Only subordinate CA certificates can issue client certificates.
 * ## QPS limit
 * The queries per second (QPS) limit for this operation is 10 calls per second per user. Calls that exceed this limit are throttled, which can impact your business. We recommend that you call this operation at a reasonable rate.
 *
 * @param request CreateClientCertificateRequest
 * @return CreateClientCertificateResponse
 */
CreateClientCertificateResponse Client::createClientCertificate(const CreateClientCertificateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createClientCertificateWithOptions(request, runtime);
}

/**
 * @summary Issues a client certificate by using a custom certificate signing request (CSR).
 *
 * @description Before you call this operation, you must create a root CA certificate by calling [CreateRootCACertificate](https://help.aliyun.com/document_detail/465962.html) and a subordinate CA certificate by calling [CreateSubCACertificate](https://help.aliyun.com/document_detail/465959.html). Only subordinate CA certificates can issue client certificates.
 * ## QPS limit
 * This operation is limited to 10 queries per second (QPS) per user. If you exceed this limit, the system throttles your API calls, which may affect your business. We recommend that you plan your calls to avoid being throttled.
 *
 * @param request CreateClientCertificateWithCsrRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateClientCertificateWithCsrResponse
 */
CreateClientCertificateWithCsrResponse Client::createClientCertificateWithCsrWithOptions(const CreateClientCertificateWithCsrRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAfterTime()) {
    query["AfterTime"] = request.getAfterTime();
  }

  if (!!request.hasAlgorithm()) {
    query["Algorithm"] = request.getAlgorithm();
  }

  if (!!request.hasBeforeTime()) {
    query["BeforeTime"] = request.getBeforeTime();
  }

  if (!!request.hasCommonName()) {
    query["CommonName"] = request.getCommonName();
  }

  if (!!request.hasCountry()) {
    query["Country"] = request.getCountry();
  }

  if (!!request.hasCsr()) {
    query["Csr"] = request.getCsr();
  }

  if (!!request.hasCustomIdentifier()) {
    query["CustomIdentifier"] = request.getCustomIdentifier();
  }

  if (!!request.hasDays()) {
    query["Days"] = request.getDays();
  }

  if (!!request.hasEnableCrl()) {
    query["EnableCrl"] = request.getEnableCrl();
  }

  if (!!request.hasImmediately()) {
    query["Immediately"] = request.getImmediately();
  }

  if (!!request.hasLocality()) {
    query["Locality"] = request.getLocality();
  }

  if (!!request.hasMonths()) {
    query["Months"] = request.getMonths();
  }

  if (!!request.hasOrganization()) {
    query["Organization"] = request.getOrganization();
  }

  if (!!request.hasOrganizationUnit()) {
    query["OrganizationUnit"] = request.getOrganizationUnit();
  }

  if (!!request.hasParentIdentifier()) {
    query["ParentIdentifier"] = request.getParentIdentifier();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasSanType()) {
    query["SanType"] = request.getSanType();
  }

  if (!!request.hasSanValue()) {
    query["SanValue"] = request.getSanValue();
  }

  if (!!request.hasState()) {
    query["State"] = request.getState();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.getTags();
  }

  if (!!request.hasYears()) {
    query["Years"] = request.getYears();
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
 * @summary Issues a client certificate by using a custom certificate signing request (CSR).
 *
 * @description Before you call this operation, you must create a root CA certificate by calling [CreateRootCACertificate](https://help.aliyun.com/document_detail/465962.html) and a subordinate CA certificate by calling [CreateSubCACertificate](https://help.aliyun.com/document_detail/465959.html). Only subordinate CA certificates can issue client certificates.
 * ## QPS limit
 * This operation is limited to 10 queries per second (QPS) per user. If you exceed this limit, the system throttles your API calls, which may affect your business. We recommend that you plan your calls to avoid being throttled.
 *
 * @param request CreateClientCertificateWithCsrRequest
 * @return CreateClientCertificateWithCsrResponse
 */
CreateClientCertificateWithCsrResponse Client::createClientCertificateWithCsr(const CreateClientCertificateWithCsrRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createClientCertificateWithCsrWithOptions(request, runtime);
}

/**
 * @summary Issues a custom digital certificate with specified subject, subject alternative names (SANs), key usage, and extended key usage attributes.
 *
 * @description By default, the certificate subject is retrieved from the Certificate Signing Request (CSR). If you specify a certificate subject, the subject from the CSR is ignored and the specified subject is used to issue the certificate.
 * You must specify the key usage or extended key usage based on your scenario. The following examples show common scenarios:
 * - Server-side authentication certificate
 * Key usage: digitalSignature, keyEncipherment
 * Extended key usage: serverAuth
 * - Client authentication certificate
 * Key usage: digitalSignature, keyEncipherment
 * Extended key usage: clientAuth
 * - mTLS mutual authentication certificate
 * Key usage: digitalSignature, keyEncipherment
 * Extended key usage: serverAuth, clientAuth
 * - Email signing certificate
 * Key usage: digitalSignature, contentCommitment
 * Extended key usage: emailProtection
 * Note: Compliance CAs are managed by third-party authorities and do not support this operation.
 *
 * @param request CreateCustomCertificateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateCustomCertificateResponse
 */
CreateCustomCertificateResponse Client::createCustomCertificateWithOptions(const CreateCustomCertificateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasApiPassthrough()) {
    query["ApiPassthrough"] = request.getApiPassthrough();
  }

  if (!!request.hasCsr()) {
    query["Csr"] = request.getCsr();
  }

  if (!!request.hasEnableCrl()) {
    query["EnableCrl"] = request.getEnableCrl();
  }

  if (!!request.hasImmediately()) {
    query["Immediately"] = request.getImmediately();
  }

  if (!!request.hasParentIdentifier()) {
    query["ParentIdentifier"] = request.getParentIdentifier();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.getTags();
  }

  if (!!request.hasValidity()) {
    query["Validity"] = request.getValidity();
  }

  if (!!request.hasCustomIdentifier()) {
    query["customIdentifier"] = request.getCustomIdentifier();
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
 * @summary Issues a custom digital certificate with specified subject, subject alternative names (SANs), key usage, and extended key usage attributes.
 *
 * @description By default, the certificate subject is retrieved from the Certificate Signing Request (CSR). If you specify a certificate subject, the subject from the CSR is ignored and the specified subject is used to issue the certificate.
 * You must specify the key usage or extended key usage based on your scenario. The following examples show common scenarios:
 * - Server-side authentication certificate
 * Key usage: digitalSignature, keyEncipherment
 * Extended key usage: serverAuth
 * - Client authentication certificate
 * Key usage: digitalSignature, keyEncipherment
 * Extended key usage: clientAuth
 * - mTLS mutual authentication certificate
 * Key usage: digitalSignature, keyEncipherment
 * Extended key usage: serverAuth, clientAuth
 * - Email signing certificate
 * Key usage: digitalSignature, contentCommitment
 * Extended key usage: emailProtection
 * Note: Compliance CAs are managed by third-party authorities and do not support this operation.
 *
 * @param request CreateCustomCertificateRequest
 * @return CreateCustomCertificateResponse
 */
CreateCustomCertificateResponse Client::createCustomCertificate(const CreateCustomCertificateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createCustomCertificateWithOptions(request, runtime);
}

/**
 * @summary Create and issue an external subordinate CA certificate using a CSR and API parameters.
 *
 * @description ## Request
 * - Creates an external subordinate CA certificate from a certificate signing request (CSR) and optional API pass-through parameters.
 * - The required `InstanceId` parameter specifies the instance ID of the external subordinate CA.
 * - The `Csr` parameter must contain a valid certificate signing request.
 * - The `Validity` parameter specifies the certificate\\"s validity period and accepts values in either relative or absolute time formats.
 * - The `ApiPassthrough` parameter lets you override information in the CSR, such as subject information, or add certificate extensions.
 * - Note: For end-entity CA certificates, set the `pathLenConstraint` parameter to 0.
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
    request.setApiPassthroughShrink(Utils::Utils::arrayToStringWithSpecifiedStyle(tmpReq.getApiPassthrough(), "ApiPassthrough", "json"));
  }

  json query = {};
  if (!!request.hasApiPassthroughShrink()) {
    query["ApiPassthrough"] = request.getApiPassthroughShrink();
  }

  if (!!request.hasCertMaxTime()) {
    query["CertMaxTime"] = request.getCertMaxTime();
  }

  if (!!request.hasCsr()) {
    query["Csr"] = request.getCsr();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.getTags();
  }

  if (!!request.hasValidity()) {
    query["Validity"] = request.getValidity();
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
 * @summary Create and issue an external subordinate CA certificate using a CSR and API parameters.
 *
 * @description ## Request
 * - Creates an external subordinate CA certificate from a certificate signing request (CSR) and optional API pass-through parameters.
 * - The required `InstanceId` parameter specifies the instance ID of the external subordinate CA.
 * - The `Csr` parameter must contain a valid certificate signing request.
 * - The `Validity` parameter specifies the certificate\\"s validity period and accepts values in either relative or absolute time formats.
 * - The `ApiPassthrough` parameter lets you override information in the CSR, such as subject information, or add certificate extensions.
 * - Note: For end-entity CA certificates, set the `pathLenConstraint` parameter to 0.
 *
 * @param request CreateExternalCACertificateRequest
 * @return CreateExternalCACertificateResponse
 */
CreateExternalCACertificateResponse Client::createExternalCACertificate(const CreateExternalCACertificateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createExternalCACertificateWithOptions(request, runtime);
}

/**
 * @summary Revokes a client certificate or a server certificate issued by a private certificate authority (CA).
 *
 * @description After a client or server certificate is revoked, the client or server where the certificate is installed cannot establish HTTPS connections with other devices.
 * After a client or server certificate is revoked, you can call [DeleteClientCertificate](https://help.aliyun.com/document_detail/465981.html) to permanently delete the certificate.
 * ## QPS limit
 * The limit on queries per second (QPS) for this operation is 10 per user. If you exceed this limit, API calls are throttled, which can affect your business. Plan your API calls accordingly.
 *
 * @param request CreateRevokeClientCertificateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRevokeClientCertificateResponse
 */
CreateRevokeClientCertificateResponse Client::createRevokeClientCertificateWithOptions(const CreateRevokeClientCertificateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIdentifier()) {
    query["Identifier"] = request.getIdentifier();
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
 * @summary Revokes a client certificate or a server certificate issued by a private certificate authority (CA).
 *
 * @description After a client or server certificate is revoked, the client or server where the certificate is installed cannot establish HTTPS connections with other devices.
 * After a client or server certificate is revoked, you can call [DeleteClientCertificate](https://help.aliyun.com/document_detail/465981.html) to permanently delete the certificate.
 * ## QPS limit
 * The limit on queries per second (QPS) for this operation is 10 per user. If you exceed this limit, API calls are throttled, which can affect your business. Plan your API calls accordingly.
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
 * @description This operation creates a self-signed root CA certificate. A root CA certificate is the starting point of a private trust chain within an enterprise. After you create a root CA certificate, you can use it to issue intermediate CA certificates. You can then use the intermediate CA certificates to issue client and server-side certificates.
 * Before calling this operation, purchase a private root CA in the [SSL Certificate Service console](https://yundun.console.aliyun.com/?p=cas#/pca/rootlist). Otherwise, the call fails. For more information, see [Purchase a private CA](https://help.aliyun.com/document_detail/208553.html).
 * ## QPS limit
 * The queries per second (QPS) limit for this operation is 10 calls per second per user. If you exceed the limit, API calls are throttled, which may affect your business. Call the API at a reasonable rate.
 *
 * @param request CreateRootCACertificateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateRootCACertificateResponse
 */
CreateRootCACertificateResponse Client::createRootCACertificateWithOptions(const CreateRootCACertificateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlgorithm()) {
    query["Algorithm"] = request.getAlgorithm();
  }

  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasCommonName()) {
    query["CommonName"] = request.getCommonName();
  }

  if (!!request.hasCountryCode()) {
    query["CountryCode"] = request.getCountryCode();
  }

  if (!!request.hasLocality()) {
    query["Locality"] = request.getLocality();
  }

  if (!!request.hasOrganization()) {
    query["Organization"] = request.getOrganization();
  }

  if (!!request.hasOrganizationUnit()) {
    query["OrganizationUnit"] = request.getOrganizationUnit();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasState()) {
    query["State"] = request.getState();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.getTags();
  }

  if (!!request.hasYears()) {
    query["Years"] = request.getYears();
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
 * @description This operation creates a self-signed root CA certificate. A root CA certificate is the starting point of a private trust chain within an enterprise. After you create a root CA certificate, you can use it to issue intermediate CA certificates. You can then use the intermediate CA certificates to issue client and server-side certificates.
 * Before calling this operation, purchase a private root CA in the [SSL Certificate Service console](https://yundun.console.aliyun.com/?p=cas#/pca/rootlist). Otherwise, the call fails. For more information, see [Purchase a private CA](https://help.aliyun.com/document_detail/208553.html).
 * ## QPS limit
 * The queries per second (QPS) limit for this operation is 10 calls per second per user. If you exceed the limit, API calls are throttled, which may affect your business. Call the API at a reasonable rate.
 *
 * @param request CreateRootCACertificateRequest
 * @return CreateRootCACertificateResponse
 */
CreateRootCACertificateResponse Client::createRootCACertificate(const CreateRootCACertificateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createRootCACertificateWithOptions(request, runtime);
}

/**
 * @summary Issues a server certificate by using a system-generated certificate signing request (CSR).
 *
 * @description Before you call this operation, you must call [CreateRootCACertificate](https://help.aliyun.com/document_detail/465962.html) to create a root certificate authority (CA) certificate and [CreateSubCACertificate](https://help.aliyun.com/document_detail/465975.html) to create a subordinate CA certificate. Only a subordinate CA certificate can issue a server certificate.
 * ## QPS limits
 * The queries per second (QPS) limit for this operation is 10 calls per second for each user. If you exceed this limit, the system throttles your API calls, which can affect your business. Plan your calls accordingly.
 *
 * @param request CreateServerCertificateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateServerCertificateResponse
 */
CreateServerCertificateResponse Client::createServerCertificateWithOptions(const CreateServerCertificateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAfterTime()) {
    query["AfterTime"] = request.getAfterTime();
  }

  if (!!request.hasAlgorithm()) {
    query["Algorithm"] = request.getAlgorithm();
  }

  if (!!request.hasBeforeTime()) {
    query["BeforeTime"] = request.getBeforeTime();
  }

  if (!!request.hasCommonName()) {
    query["CommonName"] = request.getCommonName();
  }

  if (!!request.hasCountry()) {
    query["Country"] = request.getCountry();
  }

  if (!!request.hasCustomIdentifier()) {
    query["CustomIdentifier"] = request.getCustomIdentifier();
  }

  if (!!request.hasDays()) {
    query["Days"] = request.getDays();
  }

  if (!!request.hasDomain()) {
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasEnableCrl()) {
    query["EnableCrl"] = request.getEnableCrl();
  }

  if (!!request.hasImmediately()) {
    query["Immediately"] = request.getImmediately();
  }

  if (!!request.hasLocality()) {
    query["Locality"] = request.getLocality();
  }

  if (!!request.hasMonths()) {
    query["Months"] = request.getMonths();
  }

  if (!!request.hasOrganization()) {
    query["Organization"] = request.getOrganization();
  }

  if (!!request.hasOrganizationUnit()) {
    query["OrganizationUnit"] = request.getOrganizationUnit();
  }

  if (!!request.hasParentIdentifier()) {
    query["ParentIdentifier"] = request.getParentIdentifier();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasState()) {
    query["State"] = request.getState();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.getTags();
  }

  if (!!request.hasYears()) {
    query["Years"] = request.getYears();
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
 * @summary Issues a server certificate by using a system-generated certificate signing request (CSR).
 *
 * @description Before you call this operation, you must call [CreateRootCACertificate](https://help.aliyun.com/document_detail/465962.html) to create a root certificate authority (CA) certificate and [CreateSubCACertificate](https://help.aliyun.com/document_detail/465975.html) to create a subordinate CA certificate. Only a subordinate CA certificate can issue a server certificate.
 * ## QPS limits
 * The queries per second (QPS) limit for this operation is 10 calls per second for each user. If you exceed this limit, the system throttles your API calls, which can affect your business. Plan your calls accordingly.
 *
 * @param request CreateServerCertificateRequest
 * @return CreateServerCertificateResponse
 */
CreateServerCertificateResponse Client::createServerCertificate(const CreateServerCertificateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createServerCertificateWithOptions(request, runtime);
}

/**
 * @summary Issues a server certificate by using a custom certificate signing request (CSR).
 *
 * @description Before you call this operation, you must call [CreateRootCACertificate](https://help.aliyun.com/document_detail/465962.html) to create a root CA certificate and [CreateSubCACertificate](https://help.aliyun.com/document_detail/465959.html) to create a subordinate CA certificate. Server-side certificates can be issued only by subordinate CA certificates.
 * ## Limits
 * This operation has a queries per second (QPS) limit of 10 requests per user. If you exceed this limit, rate limiting is triggered, which may affect your business. Call this operation only as needed.
 *
 * @param request CreateServerCertificateWithCsrRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateServerCertificateWithCsrResponse
 */
CreateServerCertificateWithCsrResponse Client::createServerCertificateWithCsrWithOptions(const CreateServerCertificateWithCsrRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAfterTime()) {
    query["AfterTime"] = request.getAfterTime();
  }

  if (!!request.hasAlgorithm()) {
    query["Algorithm"] = request.getAlgorithm();
  }

  if (!!request.hasBeforeTime()) {
    query["BeforeTime"] = request.getBeforeTime();
  }

  if (!!request.hasCommonName()) {
    query["CommonName"] = request.getCommonName();
  }

  if (!!request.hasCountry()) {
    query["Country"] = request.getCountry();
  }

  if (!!request.hasCsr()) {
    query["Csr"] = request.getCsr();
  }

  if (!!request.hasCustomIdentifier()) {
    query["CustomIdentifier"] = request.getCustomIdentifier();
  }

  if (!!request.hasDays()) {
    query["Days"] = request.getDays();
  }

  if (!!request.hasDomain()) {
    query["Domain"] = request.getDomain();
  }

  if (!!request.hasEnableCrl()) {
    query["EnableCrl"] = request.getEnableCrl();
  }

  if (!!request.hasImmediately()) {
    query["Immediately"] = request.getImmediately();
  }

  if (!!request.hasLocality()) {
    query["Locality"] = request.getLocality();
  }

  if (!!request.hasMonths()) {
    query["Months"] = request.getMonths();
  }

  if (!!request.hasOrganization()) {
    query["Organization"] = request.getOrganization();
  }

  if (!!request.hasOrganizationUnit()) {
    query["OrganizationUnit"] = request.getOrganizationUnit();
  }

  if (!!request.hasParentIdentifier()) {
    query["ParentIdentifier"] = request.getParentIdentifier();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasState()) {
    query["State"] = request.getState();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.getTags();
  }

  if (!!request.hasYears()) {
    query["Years"] = request.getYears();
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
 * @summary Issues a server certificate by using a custom certificate signing request (CSR).
 *
 * @description Before you call this operation, you must call [CreateRootCACertificate](https://help.aliyun.com/document_detail/465962.html) to create a root CA certificate and [CreateSubCACertificate](https://help.aliyun.com/document_detail/465959.html) to create a subordinate CA certificate. Server-side certificates can be issued only by subordinate CA certificates.
 * ## Limits
 * This operation has a queries per second (QPS) limit of 10 requests per user. If you exceed this limit, rate limiting is triggered, which may affect your business. Call this operation only as needed.
 *
 * @param request CreateServerCertificateWithCsrRequest
 * @return CreateServerCertificateWithCsrResponse
 */
CreateServerCertificateWithCsrResponse Client::createServerCertificateWithCsr(const CreateServerCertificateWithCsrRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createServerCertificateWithCsrWithOptions(request, runtime);
}

/**
 * @summary Creates a subordinate certificate authority (CA) certificate under an existing root CA.
 *
 * @description This operation issues an intermediate CA certificate from an existing root CA certificate. You can use the intermediate CA certificate to issue client and server certificates.
 * Before calling this operation, you must call the [CreateRootCACertificate](https://help.aliyun.com/document_detail/465962.html) operation to create a root CA certificate.
 * ## QPS limit
 * The queries per second (QPS) limit for this operation is 10 calls per user. Calls that exceed this limit are throttled. This may affect your business. Plan your calls accordingly.
 *
 * @param request CreateSubCACertificateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return CreateSubCACertificateResponse
 */
CreateSubCACertificateResponse Client::createSubCACertificateWithOptions(const CreateSubCACertificateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAlgorithm()) {
    query["Algorithm"] = request.getAlgorithm();
  }

  if (!!request.hasCertMaxTime()) {
    query["CertMaxTime"] = request.getCertMaxTime();
  }

  if (!!request.hasCommonName()) {
    query["CommonName"] = request.getCommonName();
  }

  if (!!request.hasCountryCode()) {
    query["CountryCode"] = request.getCountryCode();
  }

  if (!!request.hasCrlDay()) {
    query["CrlDay"] = request.getCrlDay();
  }

  if (!!request.hasEnableCrl()) {
    query["EnableCrl"] = request.getEnableCrl();
  }

  if (!!request.hasExtendedKeyUsages()) {
    query["ExtendedKeyUsages"] = request.getExtendedKeyUsages();
  }

  if (!!request.hasLocality()) {
    query["Locality"] = request.getLocality();
  }

  if (!!request.hasOrganization()) {
    query["Organization"] = request.getOrganization();
  }

  if (!!request.hasOrganizationUnit()) {
    query["OrganizationUnit"] = request.getOrganizationUnit();
  }

  if (!!request.hasParentIdentifier()) {
    query["ParentIdentifier"] = request.getParentIdentifier();
  }

  if (!!request.hasPathLenConstraint()) {
    query["PathLenConstraint"] = request.getPathLenConstraint();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasState()) {
    query["State"] = request.getState();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.getTags();
  }

  if (!!request.hasYears()) {
    query["Years"] = request.getYears();
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
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
 * @summary Creates a subordinate certificate authority (CA) certificate under an existing root CA.
 *
 * @description This operation issues an intermediate CA certificate from an existing root CA certificate. You can use the intermediate CA certificate to issue client and server certificates.
 * Before calling this operation, you must call the [CreateRootCACertificate](https://help.aliyun.com/document_detail/465962.html) operation to create a root CA certificate.
 * ## QPS limit
 * The queries per second (QPS) limit for this operation is 10 calls per user. Calls that exceed this limit are throttled. This may affect your business. Plan your calls accordingly.
 *
 * @param request CreateSubCACertificateRequest
 * @return CreateSubCACertificateResponse
 */
CreateSubCACertificateResponse Client::createSubCACertificate(const CreateSubCACertificateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return createSubCACertificateWithOptions(request, runtime);
}

/**
 * @summary Deletes a revoked client certificate or server certificate. Only revoked certificates can be deleted.
 *
 * @description Before you call this operation, you must call [CreateRevokeClientCertificate](https://help.aliyun.com/document_detail/465972.html) to revoke the client or server-side certificate.
 * ## QPS limit
 * This operation supports up to 10 queries per second (QPS) for each user. If you exceed the limit, API calls are throttled. This may affect your business. Plan your calls accordingly.
 *
 * @param request DeleteClientCertificateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DeleteClientCertificateResponse
 */
DeleteClientCertificateResponse Client::deleteClientCertificateWithOptions(const DeleteClientCertificateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIdentifier()) {
    query["Identifier"] = request.getIdentifier();
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
 * @summary Deletes a revoked client certificate or server certificate. Only revoked certificates can be deleted.
 *
 * @description Before you call this operation, you must call [CreateRevokeClientCertificate](https://help.aliyun.com/document_detail/465972.html) to revoke the client or server-side certificate.
 * ## QPS limit
 * This operation supports up to 10 queries per second (QPS) for each user. If you exceed the limit, API calls are throttled. This may affect your business. Plan your calls accordingly.
 *
 * @param request DeleteClientCertificateRequest
 * @return DeleteClientCertificateResponse
 */
DeleteClientCertificateResponse Client::deleteClientCertificate(const DeleteClientCertificateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return deleteClientCertificateWithOptions(request, runtime);
}

/**
 * @summary Retrieves information about a certificate authority (CA) certificate.
 *
 * @description You can call this operation to query the details of a root or subordinate CA certificate by its unique identifier. The details include the serial number, subject information, and certificate content.
 * Before you call this operation, you must create a root CA certificate by calling [CreateRootCACertificate](https://help.aliyun.com/document_detail/465962.html) and a subordinate CA certificate by calling [CreateSubCACertificate](https://help.aliyun.com/document_detail/465959.html).
 * ## QPS limit
 * The queries per second (QPS) limit for this operation is 10 calls per second for each user. If you exceed the limit, API calls are throttled, which can affect your business. Plan your calls accordingly.
 *
 * @param request DescribeCACertificateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCACertificateResponse
 */
DescribeCACertificateResponse Client::describeCACertificateWithOptions(const DescribeCACertificateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIdentifier()) {
    query["Identifier"] = request.getIdentifier();
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
 * @summary Retrieves information about a certificate authority (CA) certificate.
 *
 * @description You can call this operation to query the details of a root or subordinate CA certificate by its unique identifier. The details include the serial number, subject information, and certificate content.
 * Before you call this operation, you must create a root CA certificate by calling [CreateRootCACertificate](https://help.aliyun.com/document_detail/465962.html) and a subordinate CA certificate by calling [CreateSubCACertificate](https://help.aliyun.com/document_detail/465959.html).
 * ## QPS limit
 * The queries per second (QPS) limit for this operation is 10 calls per second for each user. If you exceed the limit, API calls are throttled, which can affect your business. Plan your calls accordingly.
 *
 * @param request DescribeCACertificateRequest
 * @return DescribeCACertificateResponse
 */
DescribeCACertificateResponse Client::describeCACertificate(const DescribeCACertificateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCACertificateWithOptions(request, runtime);
}

/**
 * @summary Queries the number of certificate authority (CA) certificates that you created.
 *
 * @description This operation queries the number of CA certificates that you have created, including root CA certificates and subordinate CA certificates.
 * ## QPS limit
 * Each user is limited to 10 queries per second (QPS) for this API operation. If you exceed the limit, your API calls are throttled. This may affect your business. Plan your calls accordingly.
 *
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
 * @summary Queries the number of certificate authority (CA) certificates that you created.
 *
 * @description This operation queries the number of CA certificates that you have created, including root CA certificates and subordinate CA certificates.
 * ## QPS limit
 * Each user is limited to 10 queries per second (QPS) for this API operation. If you exceed the limit, your API calls are throttled. This may affect your business. Plan your calls accordingly.
 *
 * @return DescribeCACertificateCountResponse
 */
DescribeCACertificateCountResponse Client::describeCACertificateCount() {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCACertificateCountWithOptions(runtime);
}

/**
 * @summary Queries all root and subordinate certificate authority (CA) certificates.
 *
 * @description You can call this operation to query the details of all your root and intermediate CA certificates by page. The details include the unique identifier, serial number, subject information, and content of each certificate.
 * ## QPS limit
 * The queries per second (QPS) limit for this operation is 10 for each user. If you exceed the limit, API calls are throttled. This may affect your business. We recommend that you call this operation a reasonable number of times.
 *
 * @param request DescribeCACertificateListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCACertificateListResponse
 */
DescribeCACertificateListResponse Client::describeCACertificateListWithOptions(const DescribeCACertificateListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCaStatus()) {
    query["CaStatus"] = request.getCaStatus();
  }

  if (!!request.hasCertType()) {
    query["CertType"] = request.getCertType();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasIdentifier()) {
    query["Identifier"] = request.getIdentifier();
  }

  if (!!request.hasIssuerType()) {
    query["IssuerType"] = request.getIssuerType();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasShowSize()) {
    query["ShowSize"] = request.getShowSize();
  }

  if (!!request.hasValidStatus()) {
    query["ValidStatus"] = request.getValidStatus();
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
 * @summary Queries all root and subordinate certificate authority (CA) certificates.
 *
 * @description You can call this operation to query the details of all your root and intermediate CA certificates by page. The details include the unique identifier, serial number, subject information, and content of each certificate.
 * ## QPS limit
 * The queries per second (QPS) limit for this operation is 10 for each user. If you exceed the limit, API calls are throttled. This may affect your business. We recommend that you call this operation a reasonable number of times.
 *
 * @param request DescribeCACertificateListRequest
 * @return DescribeCACertificateListResponse
 */
DescribeCACertificateListResponse Client::describeCACertificateList(const DescribeCACertificateListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCACertificateListWithOptions(request, runtime);
}

/**
 * @summary Queries the encrypted private key of a client certificate or server certificate.
 *
 * @description This API applies only to certificates that are issued from a system-generated Certificate Signing Request (CSR). You can use this API to retrieve the encrypted private key of a client certificate or a server-side certificate. Before you call this API, you must have issued a client or server-side certificate by calling one of the following APIs:
 * - [CreateClientCertificate](https://help.aliyun.com/document_detail/465967.html)
 * - [CreateServerCertificate](https://help.aliyun.com/document_detail/465975.html)
 * To keep the private key secure during transmission, this API uses a password that you set to encrypt the private key. The API then returns the encrypted private key. After you retrieve the encrypted private key, you can decrypt it using one of the following methods:
 * - If the certificate uses the RSA encryption algorithm, run the `openssl rsa -in <encrypted_private_key_file> -passin pass:<private_key_password> -out <decrypted_private_key_file>` command to decrypt the private key. You must run this command on a computer that has [OpenSSL](https://www.openssl.org/source/) or [BabaSSL](https://github.com/BabaSSL/BabaSSL) installed.
 * - If the certificate uses the ECC encryption algorithm, run the `openssl ec -in <encrypted_private_key_file> -passin pass:<private_key_password> -out <decrypted_private_key_file>` command to decrypt the private key. You must run this command on a computer that has [OpenSSL](https://www.openssl.org/source/) or [BabaSSL](https://github.com/BabaSSL/BabaSSL) installed.
 * - If the certificate uses the SM2 encryption algorithm, run the `openssl ec -in <encrypted_private_key_file> -passin pass:<private_key_password> -out <decrypted_private_key_file>` command to decrypt the private key. You must run this command on a computer that has [BabaSSL](https://github.com/BabaSSL/BabaSSL) installed.
 * > You can call [DescribeClientCertificate](https://help.aliyun.com/document_detail/465985.html) to query the encryption algorithm of the client or server-side certificate.
 * ## QPS limit
 * This API has a queries per second (QPS) limit of 10 for each user. If you exceed this limit, your API calls are throttled. Throttling can affect your business. Plan your calls accordingly.
 *
 * @param request DescribeCertificatePrivateKeyRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeCertificatePrivateKeyResponse
 */
DescribeCertificatePrivateKeyResponse Client::describeCertificatePrivateKeyWithOptions(const DescribeCertificatePrivateKeyRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasEncryptedCode()) {
    query["EncryptedCode"] = request.getEncryptedCode();
  }

  if (!!request.hasIdentifier()) {
    query["Identifier"] = request.getIdentifier();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
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
 * @summary Queries the encrypted private key of a client certificate or server certificate.
 *
 * @description This API applies only to certificates that are issued from a system-generated Certificate Signing Request (CSR). You can use this API to retrieve the encrypted private key of a client certificate or a server-side certificate. Before you call this API, you must have issued a client or server-side certificate by calling one of the following APIs:
 * - [CreateClientCertificate](https://help.aliyun.com/document_detail/465967.html)
 * - [CreateServerCertificate](https://help.aliyun.com/document_detail/465975.html)
 * To keep the private key secure during transmission, this API uses a password that you set to encrypt the private key. The API then returns the encrypted private key. After you retrieve the encrypted private key, you can decrypt it using one of the following methods:
 * - If the certificate uses the RSA encryption algorithm, run the `openssl rsa -in <encrypted_private_key_file> -passin pass:<private_key_password> -out <decrypted_private_key_file>` command to decrypt the private key. You must run this command on a computer that has [OpenSSL](https://www.openssl.org/source/) or [BabaSSL](https://github.com/BabaSSL/BabaSSL) installed.
 * - If the certificate uses the ECC encryption algorithm, run the `openssl ec -in <encrypted_private_key_file> -passin pass:<private_key_password> -out <decrypted_private_key_file>` command to decrypt the private key. You must run this command on a computer that has [OpenSSL](https://www.openssl.org/source/) or [BabaSSL](https://github.com/BabaSSL/BabaSSL) installed.
 * - If the certificate uses the SM2 encryption algorithm, run the `openssl ec -in <encrypted_private_key_file> -passin pass:<private_key_password> -out <decrypted_private_key_file>` command to decrypt the private key. You must run this command on a computer that has [BabaSSL](https://github.com/BabaSSL/BabaSSL) installed.
 * > You can call [DescribeClientCertificate](https://help.aliyun.com/document_detail/465985.html) to query the encryption algorithm of the client or server-side certificate.
 * ## QPS limit
 * This API has a queries per second (QPS) limit of 10 for each user. If you exceed this limit, your API calls are throttled. Throttling can affect your business. Plan your calls accordingly.
 *
 * @param request DescribeCertificatePrivateKeyRequest
 * @return DescribeCertificatePrivateKeyResponse
 */
DescribeCertificatePrivateKeyResponse Client::describeCertificatePrivateKey(const DescribeCertificatePrivateKeyRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeCertificatePrivateKeyWithOptions(request, runtime);
}

/**
 * @summary Retrieves a client certificate or server certificate by its unique identifier.
 *
 * @description You can call this operation to query the details of a client certificate or a server-side certificate by its unique identifier. The details include the serial number, subject, content, and status of the certificate.
 * Before you call this operation, you must create a client certificate or a server-side certificate.
 * To create a client certificate by calling an API, see the following topics:
 * - [CreateClientCertificate](https://help.aliyun.com/document_detail/465967.html)
 * - [CreateClientCertificateWithCsr](https://help.aliyun.com/document_detail/465970.html)
 * To create a server-side certificate by calling an API, see the following topics:
 * - [CreateServerCertificate](https://help.aliyun.com/document_detail/465975.html)
 * - [CreateServerCertificateWithCsr](https://help.aliyun.com/document_detail/465979.html)
 * ## Limits
 * The queries per second (QPS) limit for this API call is 10 per user. If you exceed this limit, throttling is triggered, which may affect your business. Plan your calls accordingly.
 *
 * @param request DescribeClientCertificateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeClientCertificateResponse
 */
DescribeClientCertificateResponse Client::describeClientCertificateWithOptions(const DescribeClientCertificateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIdentifier()) {
    query["Identifier"] = request.getIdentifier();
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
 * @summary Retrieves a client certificate or server certificate by its unique identifier.
 *
 * @description You can call this operation to query the details of a client certificate or a server-side certificate by its unique identifier. The details include the serial number, subject, content, and status of the certificate.
 * Before you call this operation, you must create a client certificate or a server-side certificate.
 * To create a client certificate by calling an API, see the following topics:
 * - [CreateClientCertificate](https://help.aliyun.com/document_detail/465967.html)
 * - [CreateClientCertificateWithCsr](https://help.aliyun.com/document_detail/465970.html)
 * To create a server-side certificate by calling an API, see the following topics:
 * - [CreateServerCertificate](https://help.aliyun.com/document_detail/465975.html)
 * - [CreateServerCertificateWithCsr](https://help.aliyun.com/document_detail/465979.html)
 * ## Limits
 * The queries per second (QPS) limit for this API call is 10 per user. If you exceed this limit, throttling is triggered, which may affect your business. Plan your calls accordingly.
 *
 * @param request DescribeClientCertificateRequest
 * @return DescribeClientCertificateResponse
 */
DescribeClientCertificateResponse Client::describeClientCertificate(const DescribeClientCertificateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeClientCertificateWithOptions(request, runtime);
}

/**
 * @deprecated OpenAPI DescribeClientCertificateForSerialNumber is deprecated, please use cas::2020-06-30::DescribeClientCertificate instead.
 *
 * @summary Retrieves the details of multiple client or server certificates by serial number.
 *
 * @description # Usage
 * Retrieves the details of multiple client or server certificates by serial number. The response includes each certificate\\"s serial number, subject information, content, and status.
 * Before calling this operation, ensure you have created a client certificate or a server certificate.
 * To create a client certificate, see:
 * - [CreateClientCertificate](https://help.aliyun.com/document_detail/330873.html)
 * - [CreateClientCertificateWithCsr](https://help.aliyun.com/document_detail/330875.html)
 * To create a server certificate, see:
 * - [CreateServerCertificate](https://help.aliyun.com/document_detail/330877.html)
 * - [CreateServerCertificateWithCsr](https://help.aliyun.com/document_detail/330878.html)
 * # QPS limit
 * The QPS limit for this operation is 10 calls per second per account. Exceeding this limit triggers throttling, which can impact your business. Plan your calls accordingly.
 *
 * @param request DescribeClientCertificateForSerialNumberRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeClientCertificateForSerialNumberResponse
 */
DescribeClientCertificateForSerialNumberResponse Client::describeClientCertificateForSerialNumberWithOptions(const DescribeClientCertificateForSerialNumberRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSerialNumber()) {
    query["SerialNumber"] = request.getSerialNumber();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeClientCertificateForSerialNumber"},
    {"version" , "2020-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeClientCertificateForSerialNumberResponse>();
}

/**
 * @deprecated OpenAPI DescribeClientCertificateForSerialNumber is deprecated, please use cas::2020-06-30::DescribeClientCertificate instead.
 *
 * @summary Retrieves the details of multiple client or server certificates by serial number.
 *
 * @description # Usage
 * Retrieves the details of multiple client or server certificates by serial number. The response includes each certificate\\"s serial number, subject information, content, and status.
 * Before calling this operation, ensure you have created a client certificate or a server certificate.
 * To create a client certificate, see:
 * - [CreateClientCertificate](https://help.aliyun.com/document_detail/330873.html)
 * - [CreateClientCertificateWithCsr](https://help.aliyun.com/document_detail/330875.html)
 * To create a server certificate, see:
 * - [CreateServerCertificate](https://help.aliyun.com/document_detail/330877.html)
 * - [CreateServerCertificateWithCsr](https://help.aliyun.com/document_detail/330878.html)
 * # QPS limit
 * The QPS limit for this operation is 10 calls per second per account. Exceeding this limit triggers throttling, which can impact your business. Plan your calls accordingly.
 *
 * @param request DescribeClientCertificateForSerialNumberRequest
 * @return DescribeClientCertificateForSerialNumberResponse
 */
DescribeClientCertificateForSerialNumberResponse Client::describeClientCertificateForSerialNumber(const DescribeClientCertificateForSerialNumberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeClientCertificateForSerialNumberWithOptions(request, runtime);
}

/**
 * @summary Queries the status of a client certificate or server certificate by its unique identifier.
 *
 * @description This operation queries the status of multiple client or server-side certificates in a batch using their unique identifiers. For example, you can check whether a certificate is revoked.
 * ## QPS limits
 * This operation is limited to 10 queries per second (QPS) for each user. API calls that exceed this limit are throttled, which may affect your business. We recommend that you call this operation at a reasonable rate.
 *
 * @param request DescribeClientCertificateStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeClientCertificateStatusResponse
 */
DescribeClientCertificateStatusResponse Client::describeClientCertificateStatusWithOptions(const DescribeClientCertificateStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIdentifier()) {
    query["Identifier"] = request.getIdentifier();
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
 * @summary Queries the status of a client certificate or server certificate by its unique identifier.
 *
 * @description This operation queries the status of multiple client or server-side certificates in a batch using their unique identifiers. For example, you can check whether a certificate is revoked.
 * ## QPS limits
 * This operation is limited to 10 queries per second (QPS) for each user. API calls that exceed this limit are throttled, which may affect your business. We recommend that you call this operation at a reasonable rate.
 *
 * @param request DescribeClientCertificateStatusRequest
 * @return DescribeClientCertificateStatusResponse
 */
DescribeClientCertificateStatusResponse Client::describeClientCertificateStatus(const DescribeClientCertificateStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeClientCertificateStatusWithOptions(request, runtime);
}

/**
 * @summary Queries the status of client and server-side certificates using their serial numbers.
 *
 * @description This operation queries the status of one or more client or server certificates by their serial numbers. For example, you can check whether a certificate is revoked.
 * ## QPS limit
 * You can make up to 10 API calls per second per account. Exceeding this limit triggers throttling, which can impact your business. Plan your calls accordingly.
 *
 * @param request DescribeClientCertificateStatusForSerialNumberRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribeClientCertificateStatusForSerialNumberResponse
 */
DescribeClientCertificateStatusForSerialNumberResponse Client::describeClientCertificateStatusForSerialNumberWithOptions(const DescribeClientCertificateStatusForSerialNumberRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasSerialNumber()) {
    query["SerialNumber"] = request.getSerialNumber();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribeClientCertificateStatusForSerialNumber"},
    {"version" , "2020-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribeClientCertificateStatusForSerialNumberResponse>();
}

/**
 * @summary Queries the status of client and server-side certificates using their serial numbers.
 *
 * @description This operation queries the status of one or more client or server certificates by their serial numbers. For example, you can check whether a certificate is revoked.
 * ## QPS limit
 * You can make up to 10 API calls per second per account. Exceeding this limit triggers throttling, which can impact your business. Plan your calls accordingly.
 *
 * @param request DescribeClientCertificateStatusForSerialNumberRequest
 * @return DescribeClientCertificateStatusForSerialNumberResponse
 */
DescribeClientCertificateStatusForSerialNumberResponse Client::describeClientCertificateStatusForSerialNumber(const DescribeClientCertificateStatusForSerialNumberRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describeClientCertificateStatusForSerialNumberWithOptions(request, runtime);
}

/**
 * @summary Returns all your certification authority (CA) certificates. These include certificates generated by Private CA and imported external certificates.
 *
 * @description This operation performs a paged query to retrieve the details of all your CA certificates, including root and subordinate CA certificates. These details include the unique identifier, serial number, subject information, and certificate content.
 * ## QPS limit
 * The queries per second (QPS) limit for a single user is 10. The system throttles API calls that exceed this limit, which may affect your business. To prevent throttling, call this operation within the stated limit.
 *
 * @param request DescribePcaAndExternalCACertificateListRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return DescribePcaAndExternalCACertificateListResponse
 */
DescribePcaAndExternalCACertificateListResponse Client::describePcaAndExternalCACertificateListWithOptions(const DescribePcaAndExternalCACertificateListRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasIdentifiers()) {
    query["Identifiers"] = request.getIdentifiers();
  }

  if (!!request.hasKeyWord()) {
    query["KeyWord"] = request.getKeyWord();
  }

  if (!!request.hasShowSize()) {
    query["ShowSize"] = request.getShowSize();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "DescribePcaAndExternalCACertificateList"},
    {"version" , "2020-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<DescribePcaAndExternalCACertificateListResponse>();
}

/**
 * @summary Returns all your certification authority (CA) certificates. These include certificates generated by Private CA and imported external certificates.
 *
 * @description This operation performs a paged query to retrieve the details of all your CA certificates, including root and subordinate CA certificates. These details include the unique identifier, serial number, subject information, and certificate content.
 * ## QPS limit
 * The queries per second (QPS) limit for a single user is 10. The system throttles API calls that exceed this limit, which may affect your business. To prevent throttling, call this operation within the stated limit.
 *
 * @param request DescribePcaAndExternalCACertificateListRequest
 * @return DescribePcaAndExternalCACertificateListResponse
 */
DescribePcaAndExternalCACertificateListResponse Client::describePcaAndExternalCACertificateList(const DescribePcaAndExternalCACertificateListRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return describePcaAndExternalCACertificateListWithOptions(request, runtime);
}

/**
 * @summary Queries the status of a private certificate authority (CA) instance, including the remaining certificate quota.
 *
 * @description Use this operation to query the status of a private CA instance by its ID. The status information includes the instance\\"s status, the total number of certificates it can issue, and the number of certificates already issued.
 * Before you call this operation, purchase a private CA in the [CAS console](https://yundun.console.aliyun.com/?p=cas#/pca/rootlist). For more information, see [Purchase a private CA](https://help.aliyun.com/document_detail/208553.html).
 * ## QPS limits
 * This operation has a queries per second (QPS) limit of 10 for each user. If you exceed this limit, API calls are throttled, which can affect your business. Call this operation at a reasonable rate.
 *
 * @param request GetCAInstanceStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCAInstanceStatusResponse
 */
GetCAInstanceStatusResponse Client::getCAInstanceStatusWithOptions(const GetCAInstanceStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIdentifier()) {
    query["Identifier"] = request.getIdentifier();
  }

  if (!!request.hasInstanceId()) {
    query["InstanceId"] = request.getInstanceId();
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
 * @summary Queries the status of a private certificate authority (CA) instance, including the remaining certificate quota.
 *
 * @description Use this operation to query the status of a private CA instance by its ID. The status information includes the instance\\"s status, the total number of certificates it can issue, and the number of certificates already issued.
 * Before you call this operation, purchase a private CA in the [CAS console](https://yundun.console.aliyun.com/?p=cas#/pca/rootlist). For more information, see [Purchase a private CA](https://help.aliyun.com/document_detail/208553.html).
 * ## QPS limits
 * This operation has a queries per second (QPS) limit of 10 for each user. If you exceed this limit, API calls are throttled, which can affect your business. Call this operation at a reasonable rate.
 *
 * @param request GetCAInstanceStatusRequest
 * @return GetCAInstanceStatusResponse
 */
GetCAInstanceStatusResponse Client::getCAInstanceStatus(const GetCAInstanceStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCAInstanceStatusWithOptions(request, runtime);
}

/**
 * @summary Obtain the CRL URL of a CA
 *
 * @description This API is used to query the status information of a private CA instance that you purchased through the SSL Certificates Service console by using the ID of the private CA instance. For example, the status of the CA instance, the number of certificates contained, the number of issued certificates, and so on.
 * Before calling this API, you must have purchased a private CA through the [Certificate Management Service console](https://yundun.console.aliyun.com/?p=cas#/pca/rootlist). For more information, see [Purchase a private CA](https://help.aliyun.com/document_detail/208553.html).
 * ## QPS Limit
 * The per-user QPS limit for this API is 10 calls per second. If the limit is exceeded, API calls will be throttled, which may affect your business. Please call the API appropriately.
 *
 * @param request GetCaInstanceCrlAddressRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return GetCaInstanceCrlAddressResponse
 */
GetCaInstanceCrlAddressResponse Client::getCaInstanceCrlAddressWithOptions(const GetCaInstanceCrlAddressRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCaIdentifier()) {
    query["CaIdentifier"] = request.getCaIdentifier();
  }

  if (!!request.hasUuid()) {
    query["Uuid"] = request.getUuid();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "GetCaInstanceCrlAddress"},
    {"version" , "2020-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<GetCaInstanceCrlAddressResponse>();
}

/**
 * @summary Obtain the CRL URL of a CA
 *
 * @description This API is used to query the status information of a private CA instance that you purchased through the SSL Certificates Service console by using the ID of the private CA instance. For example, the status of the CA instance, the number of certificates contained, the number of issued certificates, and so on.
 * Before calling this API, you must have purchased a private CA through the [Certificate Management Service console](https://yundun.console.aliyun.com/?p=cas#/pca/rootlist). For more information, see [Purchase a private CA](https://help.aliyun.com/document_detail/208553.html).
 * ## QPS Limit
 * The per-user QPS limit for this API is 10 calls per second. If the limit is exceeded, API calls will be throttled, which may affect your business. Please call the API appropriately.
 *
 * @param request GetCaInstanceCrlAddressRequest
 * @return GetCaInstanceCrlAddressResponse
 */
GetCaInstanceCrlAddressResponse Client::getCaInstanceCrlAddress(const GetCaInstanceCrlAddressRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return getCaInstanceCrlAddressWithOptions(request, runtime);
}

/**
 * @summary Queries the end-entity instances under a private certificate authority (CA).
 *
 * @description This operation queries the status of a private Certificate Authority (CA) instance by its ID. It returns details for a private CA instance that you purchased in the Certificate Management Service (CAS) console. These details include the instance status, the number of certificates it contains, and the number of issued certificates.
 * Before calling this operation, purchase a private CA from the [CAS console](https://yundun.console.aliyun.com/?p=cas#/pca/rootlist). For more information, see [Purchase a private CA](https://help.aliyun.com/document_detail/208553.html).
 * ## QPS limits
 * The queries per second (QPS) limit for this operation is 10 calls per second for each user. If you exceed the limit, API calls are throttled, which may affect your business. Plan your calls accordingly.
 *
 * @param request ListAllEndEntityInstanceRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListAllEndEntityInstanceResponse
 */
ListAllEndEntityInstanceResponse Client::listAllEndEntityInstanceWithOptions(const ListAllEndEntityInstanceRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasParentId()) {
    query["ParentId"] = request.getParentId();
  }

  if (!!request.hasRecursiveChildren()) {
    query["RecursiveChildren"] = request.getRecursiveChildren();
  }

  if (!!request.hasShowSize()) {
    query["ShowSize"] = request.getShowSize();
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
 * @summary Queries the end-entity instances under a private certificate authority (CA).
 *
 * @description This operation queries the status of a private Certificate Authority (CA) instance by its ID. It returns details for a private CA instance that you purchased in the Certificate Management Service (CAS) console. These details include the instance status, the number of certificates it contains, and the number of issued certificates.
 * Before calling this operation, purchase a private CA from the [CAS console](https://yundun.console.aliyun.com/?p=cas#/pca/rootlist). For more information, see [Purchase a private CA](https://help.aliyun.com/document_detail/208553.html).
 * ## QPS limits
 * The queries per second (QPS) limit for this operation is 10 calls per second for each user. If you exceed the limit, API calls are throttled, which may affect your business. Plan your calls accordingly.
 *
 * @param request ListAllEndEntityInstanceRequest
 * @return ListAllEndEntityInstanceResponse
 */
ListAllEndEntityInstanceResponse Client::listAllEndEntityInstance(const ListAllEndEntityInstanceRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listAllEndEntityInstanceWithOptions(request, runtime);
}

/**
 * @summary Queries the operation logs of a certificate authority (CA) certificate, such as issuance and revocation events.
 *
 * @description You can use this API to query the operation logs for a Certificate Authority (CA) certificate. These logs record operations, such as certificate creation and status changes, for both root and subordinate CA certificates.
 * This API is limited to 10 queries per second (QPS) per user. API calls that exceed this limit are throttled. This can impact your business. Ensure that you call the API within this limit.
 *
 * @param request ListCACertificateLogRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCACertificateLogResponse
 */
ListCACertificateLogResponse Client::listCACertificateLogWithOptions(const ListCACertificateLogRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIdentifier()) {
    query["Identifier"] = request.getIdentifier();
  }

  OpenApiRequest req = OpenApiRequest(json({
    {"query" , Utils::Utils::query(query)}
  }).get<map<string, map<string, string>>>());
  Params params = Params(json({
    {"action" , "ListCACertificateLog"},
    {"version" , "2020-06-30"},
    {"protocol" , "HTTPS"},
    {"pathname" , "/"},
    {"method" , "POST"},
    {"authType" , "AK"},
    {"style" , "RPC"},
    {"reqBodyType" , "formData"},
    {"bodyType" , "json"}
  }).get<map<string, string>>());
  return json(callApi(params, req, runtime)).get<ListCACertificateLogResponse>();
}

/**
 * @summary Queries the operation logs of a certificate authority (CA) certificate, such as issuance and revocation events.
 *
 * @description You can use this API to query the operation logs for a Certificate Authority (CA) certificate. These logs record operations, such as certificate creation and status changes, for both root and subordinate CA certificates.
 * This API is limited to 10 queries per second (QPS) per user. API calls that exceed this limit are throttled. This can impact your business. Ensure that you call the API within this limit.
 *
 * @param request ListCACertificateLogRequest
 * @return ListCACertificateLogResponse
 */
ListCACertificateLogResponse Client::listCACertificateLog(const ListCACertificateLogRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCACertificateLogWithOptions(request, runtime);
}

/**
 * @summary Retrieves a list of certificates.
 *
 * @description The QPS limit for this API is 10 per user. If you exceed this limit, your API calls will be throttled. To avoid impacting your business, please plan your calls accordingly.
 *
 * @param request ListCertRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListCertResponse
 */
ListCertResponse Client::listCertWithOptions(const ListCertRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAfterDate()) {
    query["AfterDate"] = request.getAfterDate();
  }

  if (!!request.hasBeforeDate()) {
    query["BeforeDate"] = request.getBeforeDate();
  }

  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasInstanceUuid()) {
    query["InstanceUuid"] = request.getInstanceUuid();
  }

  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasParentIdentifier()) {
    query["ParentIdentifier"] = request.getParentIdentifier();
  }

  if (!!request.hasShowSize()) {
    query["ShowSize"] = request.getShowSize();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
  }

  if (!!request.hasType()) {
    query["Type"] = request.getType();
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
 * @summary Retrieves a list of certificates.
 *
 * @description The QPS limit for this API is 10 per user. If you exceed this limit, your API calls will be throttled. To avoid impacting your business, please plan your calls accordingly.
 *
 * @param request ListCertRequest
 * @return ListCertResponse
 */
ListCertResponse Client::listCert(const ListCertRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listCertWithOptions(request, runtime);
}

/**
 * @summary Lists all client certificates and server certificates issued by a private certificate authority (CA).
 *
 * @description This API performs a paged query to retrieve the details of all client and server-side certificates that you have created. These details include the unique identifier, serial number, subject information, content, and status of each certificate.
 * ## QPS limit
 * The QPS limit for a single user is 10 calls per second. If you exceed this limit, your API calls are throttled, which may affect your business. Call this API at a reasonable rate.
 *
 * @param request ListClientCertificateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListClientCertificateResponse
 */
ListClientCertificateResponse Client::listClientCertificateWithOptions(const ListClientCertificateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasIdentifier()) {
    query["Identifier"] = request.getIdentifier();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasShowSize()) {
    query["ShowSize"] = request.getShowSize();
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
 * @summary Lists all client certificates and server certificates issued by a private certificate authority (CA).
 *
 * @description This API performs a paged query to retrieve the details of all client and server-side certificates that you have created. These details include the unique identifier, serial number, subject information, content, and status of each certificate.
 * ## QPS limit
 * The QPS limit for a single user is 10 calls per second. If you exceed this limit, your API calls are throttled, which may affect your business. Call this API at a reasonable rate.
 *
 * @param request ListClientCertificateRequest
 * @return ListClientCertificateResponse
 */
ListClientCertificateResponse Client::listClientCertificate(const ListClientCertificateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listClientCertificateWithOptions(request, runtime);
}

/**
 * @summary Lists private certificate authority (CA) certificates.
 *
 * @description This operation lists CA certificates, including root and subordinate CA certificates.
 * This operation has a limit of 10 queries per second (QPS) for each user. If you exceed the limit, API calls are throttled, which may affect your business. Call this operation at a reasonable rate.
 *
 * @param request ListPcaCaCertificateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListPcaCaCertificateResponse
 */
ListPcaCaCertificateResponse Client::listPcaCaCertificateWithOptions(const ListPcaCaCertificateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
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
 * @summary Lists private certificate authority (CA) certificates.
 *
 * @description This operation lists CA certificates, including root and subordinate CA certificates.
 * This operation has a limit of 10 queries per second (QPS) for each user. If you exceed the limit, API calls are throttled, which may affect your business. Call this operation at a reasonable rate.
 *
 * @param request ListPcaCaCertificateRequest
 * @return ListPcaCaCertificateResponse
 */
ListPcaCaCertificateResponse Client::listPcaCaCertificate(const ListPcaCaCertificateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listPcaCaCertificateWithOptions(request, runtime);
}

/**
 * @summary Queries all revoked client certificates and server certificates.
 *
 * @description Performs a paged query to retrieve the details of all revoked client and server-side certificates, such as the unique identifier, serial number, and revocation date.
 * ## QPS limit
 * The queries per second (QPS) limit for this API is 10 for each user. If you exceed this limit, API calls are throttled, which may affect your business. We recommend that you call this API at a reasonable rate.
 *
 * @param request ListRevokeCertificateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListRevokeCertificateResponse
 */
ListRevokeCertificateResponse Client::listRevokeCertificateWithOptions(const ListRevokeCertificateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasCurrentPage()) {
    query["CurrentPage"] = request.getCurrentPage();
  }

  if (!!request.hasShowSize()) {
    query["ShowSize"] = request.getShowSize();
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
 * @summary Queries all revoked client certificates and server certificates.
 *
 * @description Performs a paged query to retrieve the details of all revoked client and server-side certificates, such as the unique identifier, serial number, and revocation date.
 * ## QPS limit
 * The queries per second (QPS) limit for this API is 10 for each user. If you exceed this limit, API calls are throttled, which may affect your business. We recommend that you call this API at a reasonable rate.
 *
 * @param request ListRevokeCertificateRequest
 * @return ListRevokeCertificateResponse
 */
ListRevokeCertificateResponse Client::listRevokeCertificate(const ListRevokeCertificateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listRevokeCertificateWithOptions(request, runtime);
}

/**
 * @summary Queries the tags that are attached to Certificate Management Service resources.
 *
 * @description Before you call this operation, you must purchase a private CA in the [Certificate Management Service console](https://yundun.console.aliyun.com/?p=cas#/pca/rootlist). For more information, see [Purchase a private CA](https://help.aliyun.com/document_detail/208553.html).
 * You can call this operation up to 10 times per second per Alibaba Cloud account. If the number of calls per second exceeds this limit, throttling is triggered. This may affect your business. We recommend that you plan your calls accordingly.
 * ## QPS limit
 * You can call this operation up to 10 times per second for each Alibaba Cloud account. If the number of calls per second exceeds this limit, throttling is triggered, which may affect your business. We recommend that you plan your calls accordingly.
 *
 * @param request ListTagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResourcesWithOptions(const ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasMaxResults()) {
    query["MaxResults"] = request.getMaxResults();
  }

  if (!!request.hasNextToken()) {
    query["NextToken"] = request.getNextToken();
  }

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
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
 * @summary Queries the tags that are attached to Certificate Management Service resources.
 *
 * @description Before you call this operation, you must purchase a private CA in the [Certificate Management Service console](https://yundun.console.aliyun.com/?p=cas#/pca/rootlist). For more information, see [Purchase a private CA](https://help.aliyun.com/document_detail/208553.html).
 * You can call this operation up to 10 times per second per Alibaba Cloud account. If the number of calls per second exceeds this limit, throttling is triggered. This may affect your business. We recommend that you plan your calls accordingly.
 * ## QPS limit
 * You can call this operation up to 10 times per second for each Alibaba Cloud account. If the number of calls per second exceeds this limit, throttling is triggered, which may affect your business. We recommend that you plan your calls accordingly.
 *
 * @param request ListTagResourcesRequest
 * @return ListTagResourcesResponse
 */
ListTagResourcesResponse Client::listTagResources(const ListTagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return listTagResourcesWithOptions(request, runtime);
}

/**
 * @summary Moves a Certificate Management Service resource to a different resource group.
 *
 * @description This operation queries the status information of a private CA instance that you purchased in the Certificate Management Service (CAS) console. You can query by the private CA instance ID to retrieve information such as the status of the CA instance, the number of certificates it contains, and the number of issued certificates.
 * Before you call this operation, you must purchase a private CA in the [CAS console](https://yundun.console.aliyun.com/?p=cas#/pca/rootlist). For more information, see [Purchase a private CA](https://help.aliyun.com/document_detail/208553.html).
 * ## QPS limit
 * This operation is limited to 10 queries per second (QPS) for each user. If you exceed this limit, API calls are throttled, which can affect your business. Call this operation within the specified limit.
 *
 * @param request MoveResourceGroupRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return MoveResourceGroupResponse
 */
MoveResourceGroupResponse Client::moveResourceGroupWithOptions(const MoveResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
  }

  if (!!request.hasResourceType()) {
    query["ResourceType"] = request.getResourceType();
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
 * @summary Moves a Certificate Management Service resource to a different resource group.
 *
 * @description This operation queries the status information of a private CA instance that you purchased in the Certificate Management Service (CAS) console. You can query by the private CA instance ID to retrieve information such as the status of the CA instance, the number of certificates it contains, and the number of issued certificates.
 * Before you call this operation, you must purchase a private CA in the [CAS console](https://yundun.console.aliyun.com/?p=cas#/pca/rootlist). For more information, see [Purchase a private CA](https://help.aliyun.com/document_detail/208553.html).
 * ## QPS limit
 * This operation is limited to 10 queries per second (QPS) for each user. If you exceed this limit, API calls are throttled, which can affect your business. Call this operation within the specified limit.
 *
 * @param request MoveResourceGroupRequest
 * @return MoveResourceGroupResponse
 */
MoveResourceGroupResponse Client::moveResourceGroup(const MoveResourceGroupRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return moveResourceGroupWithOptions(request, runtime);
}

/**
 * @summary Attaches tags to one or more Certificate Management Service resources.
 *
 * @description This operation adds tags to one or more resources. You can add tags to private CA instances that you purchased in the Certificate Management Service (CAS) console.
 * Before calling this operation, purchase a private CA in the [CAS console](https://yundun.console.aliyun.com/?p=cas#/pca/rootlist). For more information, see [Purchase a private CA](https://help.aliyun.com/document_detail/208553.html).
 * ## QPS limit
 * This operation is limited to 10 queries per second (QPS) per user. If you exceed this limit, API calls are throttled, which may affect your business. We recommend that you call this operation at a reasonable rate.
 *
 * @param request TagResourcesRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResourcesWithOptions(const TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
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
 * @summary Attaches tags to one or more Certificate Management Service resources.
 *
 * @description This operation adds tags to one or more resources. You can add tags to private CA instances that you purchased in the Certificate Management Service (CAS) console.
 * Before calling this operation, purchase a private CA in the [CAS console](https://yundun.console.aliyun.com/?p=cas#/pca/rootlist). For more information, see [Purchase a private CA](https://help.aliyun.com/document_detail/208553.html).
 * ## QPS limit
 * This operation is limited to 10 queries per second (QPS) per user. If you exceed this limit, API calls are throttled, which may affect your business. We recommend that you call this operation at a reasonable rate.
 *
 * @param request TagResourcesRequest
 * @return TagResourcesResponse
 */
TagResourcesResponse Client::tagResources(const TagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return tagResourcesWithOptions(request, runtime);
}

/**
 * @summary Removes tags from one or more Certificate Management Service resources.
 *
 * @description This operation queries status information for a private Certificate Authority (CA) instance that you purchased in the Certificate Management Service (CAS) console. You can use the private CA instance ID to retrieve information such as the instance status, the number of certificates it contains, and the number of certificates issued.
 * Before you call this operation, you must purchase a private CA from the [CAS console](https://yundun.console.aliyun.com/?p=cas#/pca/rootlist). For more information, see [Purchase a private CA](https://help.aliyun.com/document_detail/208553.html).
 * ## QPS limit
 * The queries per second (QPS) limit for this operation is 10 calls per second per user. If you exceed this limit, API calls are throttled. This may affect your business. Plan your calls accordingly.
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

  if (!!request.hasRegionId()) {
    query["RegionId"] = request.getRegionId();
  }

  if (!!request.hasResourceId()) {
    query["ResourceId"] = request.getResourceId();
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
 * @summary Removes tags from one or more Certificate Management Service resources.
 *
 * @description This operation queries status information for a private Certificate Authority (CA) instance that you purchased in the Certificate Management Service (CAS) console. You can use the private CA instance ID to retrieve information such as the instance status, the number of certificates it contains, and the number of certificates issued.
 * Before you call this operation, you must purchase a private CA from the [CAS console](https://yundun.console.aliyun.com/?p=cas#/pca/rootlist). For more information, see [Purchase a private CA](https://help.aliyun.com/document_detail/208553.html).
 * ## QPS limit
 * The queries per second (QPS) limit for this operation is 10 calls per second per user. If you exceed this limit, API calls are throttled. This may affect your business. Plan your calls accordingly.
 *
 * @param request UntagResourcesRequest
 * @return UntagResourcesResponse
 */
UntagResourcesResponse Client::untagResources(const UntagResourcesRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return untagResourcesWithOptions(request, runtime);
}

/**
 * @summary Changes the status of a root or subordinate certificate authority (CA) certificate, such as revoking or disabling an active CA.
 *
 * @description When you create a CA certificate, its status is ISSUE by default. You can call this API operation to change the status of a CA certificate from ISSUE to REVOKE. A CA certificate in the ISSUE state can be used to issue certificates. A CA certificate in the REVOKE state cannot be used to issue certificates, and all certificates issued by this CA certificate become invalid.
 * Before you call this API operation, create a root CA certificate by calling [CreateRootCACertificate](https://help.aliyun.com/document_detail/465962.html) and an intermediate CA certificate by calling [CreateSubCACertificate](https://help.aliyun.com/document_detail/465959.html).
 * ## QPS limit
 * This operation is limited to 10 queries per second (QPS) for each user. If you exceed this limit, API calls are throttled. This may affect your business. Plan your calls accordingly.
 *
 * @param request UpdateCACertificateStatusRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdateCACertificateStatusResponse
 */
UpdateCACertificateStatusResponse Client::updateCACertificateStatusWithOptions(const UpdateCACertificateStatusRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasClientToken()) {
    query["ClientToken"] = request.getClientToken();
  }

  if (!!request.hasIdentifier()) {
    query["Identifier"] = request.getIdentifier();
  }

  if (!!request.hasStatus()) {
    query["Status"] = request.getStatus();
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
 * @summary Changes the status of a root or subordinate certificate authority (CA) certificate, such as revoking or disabling an active CA.
 *
 * @description When you create a CA certificate, its status is ISSUE by default. You can call this API operation to change the status of a CA certificate from ISSUE to REVOKE. A CA certificate in the ISSUE state can be used to issue certificates. A CA certificate in the REVOKE state cannot be used to issue certificates, and all certificates issued by this CA certificate become invalid.
 * Before you call this API operation, create a root CA certificate by calling [CreateRootCACertificate](https://help.aliyun.com/document_detail/465962.html) and an intermediate CA certificate by calling [CreateSubCACertificate](https://help.aliyun.com/document_detail/465959.html).
 * ## QPS limit
 * This operation is limited to 10 queries per second (QPS) for each user. If you exceed this limit, API calls are throttled. This may affect your business. Plan your calls accordingly.
 *
 * @param request UpdateCACertificateStatusRequest
 * @return UpdateCACertificateStatusResponse
 */
UpdateCACertificateStatusResponse Client::updateCACertificateStatus(const UpdateCACertificateStatusRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updateCACertificateStatusWithOptions(request, runtime);
}

/**
 * @summary Updates the properties of a private CA certificate, such as the export status.
 *
 * @description When a Certificate Authority (CA) certificate is created, its status is Normal by default. You can call this API operation to change the status of a CA certificate to Revoked. A CA certificate in the Normal status can be used to issue certificates. A revoked CA certificate cannot be used to issue certificates, and all certificates previously issued by it become invalid.
 * Before you call this API operation, you must create a root CA certificate by calling [CreateRootCACertificate](https://help.aliyun.com/document_detail/465962.html) and a subordinate CA certificate by calling [CreateSubCACertificate](https://help.aliyun.com/document_detail/465959.html).
 * ## QPS limits
 * This API operation is limited to 10 queries per second (QPS) per user. If you exceed this limit, API calls are throttled, which may affect your business. Call this API operation at a reasonable rate.
 *
 * @param request UpdatePcaCertificateRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UpdatePcaCertificateResponse
 */
UpdatePcaCertificateResponse Client::updatePcaCertificateWithOptions(const UpdatePcaCertificateRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasAliasName()) {
    query["AliasName"] = request.getAliasName();
  }

  if (!!request.hasIdentifier()) {
    query["Identifier"] = request.getIdentifier();
  }

  if (!!request.hasResourceGroupId()) {
    query["ResourceGroupId"] = request.getResourceGroupId();
  }

  if (!!request.hasTags()) {
    query["Tags"] = request.getTags();
  }

  json body = {};
  if (!!request.hasClientToken()) {
    body["ClientToken"] = request.getClientToken();
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
 * @summary Updates the properties of a private CA certificate, such as the export status.
 *
 * @description When a Certificate Authority (CA) certificate is created, its status is Normal by default. You can call this API operation to change the status of a CA certificate to Revoked. A CA certificate in the Normal status can be used to issue certificates. A revoked CA certificate cannot be used to issue certificates, and all certificates previously issued by it become invalid.
 * Before you call this API operation, you must create a root CA certificate by calling [CreateRootCACertificate](https://help.aliyun.com/document_detail/465962.html) and a subordinate CA certificate by calling [CreateSubCACertificate](https://help.aliyun.com/document_detail/465959.html).
 * ## QPS limits
 * This API operation is limited to 10 queries per second (QPS) per user. If you exceed this limit, API calls are throttled, which may affect your business. Call this API operation at a reasonable rate.
 *
 * @param request UpdatePcaCertificateRequest
 * @return UpdatePcaCertificateResponse
 */
UpdatePcaCertificateResponse Client::updatePcaCertificate(const UpdatePcaCertificateRequest &request) {
  Darabonba::RuntimeOptions runtime = RuntimeOptions();
  return updatePcaCertificateWithOptions(request, runtime);
}

/**
 * @summary Uploads a private CA certificate to Certificate Management Service for centralized management.
 *
 * @description This API operation uploads a PCA certificate to a certificate repository.
 * ## QPS limit
 * This operation has a queries per second (QPS) limit of 10 calls per second for each user. If you exceed the limit, your API calls are throttled. Throttling may affect your business. We recommend that you call this operation at a reasonable rate.
 *
 * @param request UploadPcaCertToCasRequest
 * @param runtime runtime options for this request RuntimeOptions
 * @return UploadPcaCertToCasResponse
 */
UploadPcaCertToCasResponse Client::uploadPcaCertToCasWithOptions(const UploadPcaCertToCasRequest &request, const Darabonba::RuntimeOptions &runtime) {
  request.validate();
  json query = {};
  if (!!request.hasIds()) {
    query["Ids"] = request.getIds();
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
 * @summary Uploads a private CA certificate to Certificate Management Service for centralized management.
 *
 * @description This API operation uploads a PCA certificate to a certificate repository.
 * ## QPS limit
 * This operation has a queries per second (QPS) limit of 10 calls per second for each user. If you exceed the limit, your API calls are throttled. Throttling may affect your business. We recommend that you call this operation at a reasonable rate.
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