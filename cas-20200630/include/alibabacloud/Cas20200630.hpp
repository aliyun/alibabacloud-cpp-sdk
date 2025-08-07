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
      Models::CreateClientCertificateResponse createClientCertificateWithOptions(const Models::CreateClientCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::CreateClientCertificateResponse createClientCertificate(const Models::CreateClientCertificateRequest &request);

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
      Models::CreateClientCertificateWithCsrResponse createClientCertificateWithCsrWithOptions(const Models::CreateClientCertificateWithCsrRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::CreateClientCertificateWithCsrResponse createClientCertificateWithCsr(const Models::CreateClientCertificateWithCsrRequest &request);

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
      Models::CreateCustomCertificateResponse createCustomCertificateWithOptions(const Models::CreateCustomCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::CreateCustomCertificateResponse createCustomCertificate(const Models::CreateCustomCertificateRequest &request);

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
      Models::CreateRevokeClientCertificateResponse createRevokeClientCertificateWithOptions(const Models::CreateRevokeClientCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::CreateRevokeClientCertificateResponse createRevokeClientCertificate(const Models::CreateRevokeClientCertificateRequest &request);

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
      Models::CreateRootCACertificateResponse createRootCACertificateWithOptions(const Models::CreateRootCACertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::CreateRootCACertificateResponse createRootCACertificate(const Models::CreateRootCACertificateRequest &request);

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
      Models::CreateServerCertificateResponse createServerCertificateWithOptions(const Models::CreateServerCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::CreateServerCertificateResponse createServerCertificate(const Models::CreateServerCertificateRequest &request);

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
      Models::CreateServerCertificateWithCsrResponse createServerCertificateWithCsrWithOptions(const Models::CreateServerCertificateWithCsrRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Issues a server certificate by using a custom certificate signing request (CSR) file.
       *
       * @description ## Usage notes
       * Before you call this operation, make sure that you have created a root certificate authority (CA) certificate by calling the [CreateRootCACertificate](https://help.aliyun.com/document_detail/328093.html) operation and an intermediate CA certificate by calling the [CreateSubCACertificate](https://help.aliyun.com/document_detail/328094.html) operation. Only intermediate CA certificates can be used to issue server certificates.
       *
       * @param request CreateServerCertificateWithCsrRequest
       * @return CreateServerCertificateWithCsrResponse
       */
      Models::CreateServerCertificateWithCsrResponse createServerCertificateWithCsr(const Models::CreateServerCertificateWithCsrRequest &request);

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
      Models::CreateSubCACertificateResponse createSubCACertificateWithOptions(const Models::CreateSubCACertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::CreateSubCACertificateResponse createSubCACertificate(const Models::CreateSubCACertificateRequest &request);

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
      Models::DeleteClientCertificateResponse deleteClientCertificateWithOptions(const Models::DeleteClientCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DeleteClientCertificateResponse deleteClientCertificate(const Models::DeleteClientCertificateRequest &request);

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
      Models::DescribeCACertificateResponse describeCACertificateWithOptions(const Models::DescribeCACertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DescribeCACertificateResponse describeCACertificate(const Models::DescribeCACertificateRequest &request);

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
      Models::DescribeCACertificateCountResponse describeCACertificateCountWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of certificate authority (CA) certificates that you create.
       *
       * @description You can call the DescribeCACertificateCount operation to query the number of created CA certificates, which includes root CA certificates and intermediate CA certificates.
       * ## Limits
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @return DescribeCACertificateCountResponse
       */
      Models::DescribeCACertificateCountResponse describeCACertificateCount();

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
      Models::DescribeCACertificateListResponse describeCACertificateListWithOptions(const Models::DescribeCACertificateListRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DescribeCACertificateListResponse describeCACertificateList(const Models::DescribeCACertificateListRequest &request);

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
      Models::DescribeCertificatePrivateKeyResponse describeCertificatePrivateKeyWithOptions(const Models::DescribeCertificatePrivateKeyRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DescribeCertificatePrivateKeyResponse describeCertificatePrivateKey(const Models::DescribeCertificatePrivateKeyRequest &request);

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
      Models::DescribeClientCertificateResponse describeClientCertificateWithOptions(const Models::DescribeClientCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DescribeClientCertificateResponse describeClientCertificate(const Models::DescribeClientCertificateRequest &request);

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
      Models::DescribeClientCertificateStatusResponse describeClientCertificateStatusWithOptions(const Models::DescribeClientCertificateStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DescribeClientCertificateStatusResponse describeClientCertificateStatus(const Models::DescribeClientCertificateStatusRequest &request);

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
      Models::GetCAInstanceStatusResponse getCAInstanceStatusWithOptions(const Models::GetCAInstanceStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::GetCAInstanceStatusResponse getCAInstanceStatus(const Models::GetCAInstanceStatusRequest &request);

      /**
       * @summary 获取证书列表
       *
       * @param request ListCertRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCertResponse
       */
      Models::ListCertResponse listCertWithOptions(const Models::ListCertRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 获取证书列表
       *
       * @param request ListCertRequest
       * @return ListCertResponse
       */
      Models::ListCertResponse listCert(const Models::ListCertRequest &request);

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
      Models::ListClientCertificateResponse listClientCertificateWithOptions(const Models::ListClientCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::ListClientCertificateResponse listClientCertificate(const Models::ListClientCertificateRequest &request);

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
      Models::ListRevokeCertificateResponse listRevokeCertificateWithOptions(const Models::ListRevokeCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::ListRevokeCertificateResponse listRevokeCertificate(const Models::ListRevokeCertificateRequest &request);

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
      Models::UpdateCACertificateStatusResponse updateCACertificateStatusWithOptions(const Models::UpdateCACertificateStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::UpdateCACertificateStatusResponse updateCACertificateStatus(const Models::UpdateCACertificateStatusRequest &request);

      /**
       * @summary 上传pca证书到SSL上传证书
       *
       * @param request UploadPcaCertToCasRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UploadPcaCertToCasResponse
       */
      Models::UploadPcaCertToCasResponse uploadPcaCertToCasWithOptions(const Models::UploadPcaCertToCasRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 上传pca证书到SSL上传证书
       *
       * @param request UploadPcaCertToCasRequest
       * @return UploadPcaCertToCasResponse
       */
      Models::UploadPcaCertToCasResponse uploadPcaCertToCas(const Models::UploadPcaCertToCasRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Cas20200630
#endif
