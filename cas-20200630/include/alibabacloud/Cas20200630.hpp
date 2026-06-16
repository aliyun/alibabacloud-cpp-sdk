// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_CAS20200630_HPP_
#define ALIBABACLOUD_CAS20200630_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Cas20200630Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Cas20200630.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200630
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

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
      Models::AssignCertificateCountResponse assignCertificateCountWithOptions(const Models::AssignCertificateCountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Assigns the certificate quota to a subordinate certificate authority (CA) instance.
       *
       * @description ## QPS limit
       * This API operation is limited to 10 queries per second (QPS) per user. If you exceed this limit, the system throttles your API calls, which can affect your business. Plan your calls accordingly.
       *
       * @param request AssignCertificateCountRequest
       * @return AssignCertificateCountResponse
       */
      Models::AssignCertificateCountResponse assignCertificateCount(const Models::AssignCertificateCountRequest &request);

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
      Models::CreateClientCertificateResponse createClientCertificateWithOptions(const Models::CreateClientCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::CreateClientCertificateResponse createClientCertificate(const Models::CreateClientCertificateRequest &request);

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
      Models::CreateClientCertificateWithCsrResponse createClientCertificateWithCsrWithOptions(const Models::CreateClientCertificateWithCsrRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::CreateClientCertificateWithCsrResponse createClientCertificateWithCsr(const Models::CreateClientCertificateWithCsrRequest &request);

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
      Models::CreateCustomCertificateResponse createCustomCertificateWithOptions(const Models::CreateCustomCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::CreateCustomCertificateResponse createCustomCertificate(const Models::CreateCustomCertificateRequest &request);

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
      Models::CreateExternalCACertificateResponse createExternalCACertificateWithOptions(const Models::CreateExternalCACertificateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

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
      Models::CreateExternalCACertificateResponse createExternalCACertificate(const Models::CreateExternalCACertificateRequest &request);

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
      Models::CreateRevokeClientCertificateResponse createRevokeClientCertificateWithOptions(const Models::CreateRevokeClientCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::CreateRevokeClientCertificateResponse createRevokeClientCertificate(const Models::CreateRevokeClientCertificateRequest &request);

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
      Models::CreateRootCACertificateResponse createRootCACertificateWithOptions(const Models::CreateRootCACertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::CreateRootCACertificateResponse createRootCACertificate(const Models::CreateRootCACertificateRequest &request);

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
      Models::CreateServerCertificateResponse createServerCertificateWithOptions(const Models::CreateServerCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::CreateServerCertificateResponse createServerCertificate(const Models::CreateServerCertificateRequest &request);

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
      Models::CreateServerCertificateWithCsrResponse createServerCertificateWithCsrWithOptions(const Models::CreateServerCertificateWithCsrRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::CreateServerCertificateWithCsrResponse createServerCertificateWithCsr(const Models::CreateServerCertificateWithCsrRequest &request);

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
      Models::CreateSubCACertificateResponse createSubCACertificateWithOptions(const Models::CreateSubCACertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::CreateSubCACertificateResponse createSubCACertificate(const Models::CreateSubCACertificateRequest &request);

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
      Models::DeleteClientCertificateResponse deleteClientCertificateWithOptions(const Models::DeleteClientCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DeleteClientCertificateResponse deleteClientCertificate(const Models::DeleteClientCertificateRequest &request);

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
      Models::DescribeCACertificateResponse describeCACertificateWithOptions(const Models::DescribeCACertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DescribeCACertificateResponse describeCACertificate(const Models::DescribeCACertificateRequest &request);

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
      Models::DescribeCACertificateCountResponse describeCACertificateCountWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of certificate authority (CA) certificates that you created.
       *
       * @description This operation queries the number of CA certificates that you have created, including root CA certificates and subordinate CA certificates.
       * ## QPS limit
       * Each user is limited to 10 queries per second (QPS) for this API operation. If you exceed the limit, your API calls are throttled. This may affect your business. Plan your calls accordingly.
       *
       * @return DescribeCACertificateCountResponse
       */
      Models::DescribeCACertificateCountResponse describeCACertificateCount();

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
      Models::DescribeCACertificateListResponse describeCACertificateListWithOptions(const Models::DescribeCACertificateListRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DescribeCACertificateListResponse describeCACertificateList(const Models::DescribeCACertificateListRequest &request);

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
      Models::DescribeCertificatePrivateKeyResponse describeCertificatePrivateKeyWithOptions(const Models::DescribeCertificatePrivateKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DescribeCertificatePrivateKeyResponse describeCertificatePrivateKey(const Models::DescribeCertificatePrivateKeyRequest &request);

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
      Models::DescribeClientCertificateResponse describeClientCertificateWithOptions(const Models::DescribeClientCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DescribeClientCertificateResponse describeClientCertificate(const Models::DescribeClientCertificateRequest &request);

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
      Models::DescribeClientCertificateForSerialNumberResponse describeClientCertificateForSerialNumberWithOptions(const Models::DescribeClientCertificateForSerialNumberRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DescribeClientCertificateForSerialNumberResponse describeClientCertificateForSerialNumber(const Models::DescribeClientCertificateForSerialNumberRequest &request);

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
      Models::DescribeClientCertificateStatusResponse describeClientCertificateStatusWithOptions(const Models::DescribeClientCertificateStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DescribeClientCertificateStatusResponse describeClientCertificateStatus(const Models::DescribeClientCertificateStatusRequest &request);

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
      Models::DescribeClientCertificateStatusForSerialNumberResponse describeClientCertificateStatusForSerialNumberWithOptions(const Models::DescribeClientCertificateStatusForSerialNumberRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DescribeClientCertificateStatusForSerialNumberResponse describeClientCertificateStatusForSerialNumber(const Models::DescribeClientCertificateStatusForSerialNumberRequest &request);

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
      Models::DescribePcaAndExternalCACertificateListResponse describePcaAndExternalCACertificateListWithOptions(const Models::DescribePcaAndExternalCACertificateListRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DescribePcaAndExternalCACertificateListResponse describePcaAndExternalCACertificateList(const Models::DescribePcaAndExternalCACertificateListRequest &request);

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
      Models::GetCAInstanceStatusResponse getCAInstanceStatusWithOptions(const Models::GetCAInstanceStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::GetCAInstanceStatusResponse getCAInstanceStatus(const Models::GetCAInstanceStatusRequest &request);

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
      Models::GetCaInstanceCrlAddressResponse getCaInstanceCrlAddressWithOptions(const Models::GetCaInstanceCrlAddressRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::GetCaInstanceCrlAddressResponse getCaInstanceCrlAddress(const Models::GetCaInstanceCrlAddressRequest &request);

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
      Models::ListAllEndEntityInstanceResponse listAllEndEntityInstanceWithOptions(const Models::ListAllEndEntityInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::ListAllEndEntityInstanceResponse listAllEndEntityInstance(const Models::ListAllEndEntityInstanceRequest &request);

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
      Models::ListCACertificateLogResponse listCACertificateLogWithOptions(const Models::ListCACertificateLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the operation logs of a certificate authority (CA) certificate, such as issuance and revocation events.
       *
       * @description You can use this API to query the operation logs for a Certificate Authority (CA) certificate. These logs record operations, such as certificate creation and status changes, for both root and subordinate CA certificates.
       * This API is limited to 10 queries per second (QPS) per user. API calls that exceed this limit are throttled. This can impact your business. Ensure that you call the API within this limit.
       *
       * @param request ListCACertificateLogRequest
       * @return ListCACertificateLogResponse
       */
      Models::ListCACertificateLogResponse listCACertificateLog(const Models::ListCACertificateLogRequest &request);

      /**
       * @summary Retrieves a list of certificates.
       *
       * @description The QPS limit for this API is 10 per user. If you exceed this limit, your API calls will be throttled. To avoid impacting your business, please plan your calls accordingly.
       *
       * @param request ListCertRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCertResponse
       */
      Models::ListCertResponse listCertWithOptions(const Models::ListCertRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of certificates.
       *
       * @description The QPS limit for this API is 10 per user. If you exceed this limit, your API calls will be throttled. To avoid impacting your business, please plan your calls accordingly.
       *
       * @param request ListCertRequest
       * @return ListCertResponse
       */
      Models::ListCertResponse listCert(const Models::ListCertRequest &request);

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
      Models::ListClientCertificateResponse listClientCertificateWithOptions(const Models::ListClientCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::ListClientCertificateResponse listClientCertificate(const Models::ListClientCertificateRequest &request);

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
      Models::ListPcaCaCertificateResponse listPcaCaCertificateWithOptions(const Models::ListPcaCaCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists private certificate authority (CA) certificates.
       *
       * @description This operation lists CA certificates, including root and subordinate CA certificates.
       * This operation has a limit of 10 queries per second (QPS) for each user. If you exceed the limit, API calls are throttled, which may affect your business. Call this operation at a reasonable rate.
       *
       * @param request ListPcaCaCertificateRequest
       * @return ListPcaCaCertificateResponse
       */
      Models::ListPcaCaCertificateResponse listPcaCaCertificate(const Models::ListPcaCaCertificateRequest &request);

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
      Models::ListRevokeCertificateResponse listRevokeCertificateWithOptions(const Models::ListRevokeCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::ListRevokeCertificateResponse listRevokeCertificate(const Models::ListRevokeCertificateRequest &request);

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
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::ListTagResourcesResponse listTagResources(const Models::ListTagResourcesRequest &request);

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
      Models::MoveResourceGroupResponse moveResourceGroupWithOptions(const Models::MoveResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::MoveResourceGroupResponse moveResourceGroup(const Models::MoveResourceGroupRequest &request);

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
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

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
      Models::UntagResourcesResponse untagResourcesWithOptions(const Models::UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::UntagResourcesResponse untagResources(const Models::UntagResourcesRequest &request);

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
      Models::UpdateCACertificateStatusResponse updateCACertificateStatusWithOptions(const Models::UpdateCACertificateStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::UpdateCACertificateStatusResponse updateCACertificateStatus(const Models::UpdateCACertificateStatusRequest &request);

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
      Models::UpdatePcaCertificateResponse updatePcaCertificateWithOptions(const Models::UpdatePcaCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::UpdatePcaCertificateResponse updatePcaCertificate(const Models::UpdatePcaCertificateRequest &request);

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
      Models::UploadPcaCertToCasResponse uploadPcaCertToCasWithOptions(const Models::UploadPcaCertToCasRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::UploadPcaCertToCasResponse uploadPcaCertToCas(const Models::UploadPcaCertToCasRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Cas20200630
#endif
