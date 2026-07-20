// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_CAS20200407_HPP_
#define ALIBABACLOUD_CAS20200407_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Cas20200407Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Cas20200407.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200407
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Adds an AccessKey for authorization.
       *
       * @description The single-user QPS limit for this API is 100 queries per second (QPS). Calls that exceed this limit are throttled, which can affect your business operations. Call this API at a reasonable rate to avoid throttling.
       *
       * @param request AddCloudAccessRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddCloudAccessResponse
       */
      Models::AddCloudAccessResponse addCloudAccessWithOptions(const Models::AddCloudAccessRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds an AccessKey for authorization.
       *
       * @description The single-user QPS limit for this API is 100 queries per second (QPS). Calls that exceed this limit are throttled, which can affect your business operations. Call this API at a reasonable rate to avoid throttling.
       *
       * @param request AddCloudAccessRequest
       * @return AddCloudAccessResponse
       */
      Models::AddCloudAccessResponse addCloudAccess(const Models::AddCloudAccessRequest &request);

      /**
       * @summary Applies for a certificate.
       *
       * @param request ApplyCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ApplyCertificateResponse
       */
      Models::ApplyCertificateResponse applyCertificateWithOptions(const Models::ApplyCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Applies for a certificate.
       *
       * @param request ApplyCertificateRequest
       * @return ApplyCertificateResponse
       */
      Models::ApplyCertificateResponse applyCertificate(const Models::ApplyCertificateRequest &request);

      /**
       * @summary Updates the notification status in batches
       *
       * @description After a CA certificate is created, it is in the normal issuance state by default. You can call this operation to change the status of a CA certificate from normal issuance to revoked. In the normal issuance state, the CA certificate can be used to issue certificates. In the revoked state, the CA certificate cannot be used to issue certificates, and the certificates that have been issued by the CA certificate also become invalid accordingly.
       * Before you call this operation, you must have called [CreateRootCACertificate](https://help.aliyun.com/document_detail/465962.html) to create a root CA certificate and called [CreateSubCACertificate](https://help.aliyun.com/document_detail/465959.html) to create a sub CA certificate.
       * ## QPS limit
       * The QPS limit per user for this operation is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation properly.
       *
       * @param request BatchUpdateNoticeStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchUpdateNoticeStatusResponse
       */
      Models::BatchUpdateNoticeStatusResponse batchUpdateNoticeStatusWithOptions(const Models::BatchUpdateNoticeStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the notification status in batches
       *
       * @description After a CA certificate is created, it is in the normal issuance state by default. You can call this operation to change the status of a CA certificate from normal issuance to revoked. In the normal issuance state, the CA certificate can be used to issue certificates. In the revoked state, the CA certificate cannot be used to issue certificates, and the certificates that have been issued by the CA certificate also become invalid accordingly.
       * Before you call this operation, you must have called [CreateRootCACertificate](https://help.aliyun.com/document_detail/465962.html) to create a root CA certificate and called [CreateSubCACertificate](https://help.aliyun.com/document_detail/465959.html) to create a sub CA certificate.
       * ## QPS limit
       * The QPS limit per user for this operation is 10 calls per second. If the limit is exceeded, API calls are throttled, which may affect your business. Call this operation properly.
       *
       * @param request BatchUpdateNoticeStatusRequest
       * @return BatchUpdateNoticeStatusResponse
       */
      Models::BatchUpdateNoticeStatusResponse batchUpdateNoticeStatus(const Models::BatchUpdateNoticeStatusRequest &request);

      /**
       * @summary Revokes an issued certificate or cancels a pending certificate order and restores the quota.
       *
       * @description This API has a limit of 10 queries per second (QPS) for each user. If you exceed this limit, API calls are throttled. This can affect your business. Call the API at a reasonable rate.
       *
       * @param request CancelCertificateForPackageRequestRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelCertificateForPackageRequestResponse
       */
      Models::CancelCertificateForPackageRequestResponse cancelCertificateForPackageRequestWithOptions(const Models::CancelCertificateForPackageRequestRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Revokes an issued certificate or cancels a pending certificate order and restores the quota.
       *
       * @description This API has a limit of 10 queries per second (QPS) for each user. If you exceed this limit, API calls are throttled. This can affect your business. Call the API at a reasonable rate.
       *
       * @param request CancelCertificateForPackageRequestRequest
       * @return CancelCertificateForPackageRequestResponse
       */
      Models::CancelCertificateForPackageRequestResponse cancelCertificateForPackageRequest(const Models::CancelCertificateForPackageRequestRequest &request);

      /**
       * @summary Cancels a certificate application order that is pending domain verification or under review.
       *
       * @description This API is limited to 100 queries per second (QPS) for each user. API calls that exceed this limit are throttled. Because this can impact your business, you should call this API at a reasonable rate.
       *
       * @param request CancelOrderRequestRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelOrderRequestResponse
       */
      Models::CancelOrderRequestResponse cancelOrderRequestWithOptions(const Models::CancelOrderRequestRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels a certificate application order that is pending domain verification or under review.
       *
       * @description This API is limited to 100 queries per second (QPS) for each user. API calls that exceed this limit are throttled. Because this can impact your business, you should call this API at a reasonable rate.
       *
       * @param request CancelOrderRequestRequest
       * @return CancelOrderRequestResponse
       */
      Models::CancelOrderRequestResponse cancelOrderRequest(const Models::CancelOrderRequestRequest &request);

      /**
       * @summary Revokes a certificate application.
       *
       * @param request CancelPendingCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelPendingCertificateResponse
       */
      Models::CancelPendingCertificateResponse cancelPendingCertificateWithOptions(const Models::CancelPendingCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Revokes a certificate application.
       *
       * @param request CancelPendingCertificateRequest
       * @return CancelPendingCertificateResponse
       */
      Models::CancelPendingCertificateResponse cancelPendingCertificate(const Models::CancelPendingCertificateRequest &request);

      /**
       * @summary Submits a certificate application by using a purchased certificate package quota.
       *
       * @description - Before you call this operation, make sure that you have purchased a certificate resource plan of the required specifications. For more information about how to purchase a certificate resource plan, see [Purchase a certificate resource plan](https://help.aliyun.com/document_detail/28542.html). You can call the [DescribePackageState](https://help.aliyun.com/document_detail/455800.html) operation to query the usage of a certificate resource plan of specified specifications, including the total number of certificate resource plans that you purchase, the number of certificate applications that you submit, and the number of certificates that are issued.
       * - After you call this operation to submit a certificate application and the certificate is issued, the certificate quota provided by the resource plan that you purchased is consumed. When you call this operation, you can use the **ProductCode** parameter to specify the specifications of the certificate that you want to apply for.
       * - After you call this operation to submit a certificate application, you also need to call the [DescribeCertificateState](https://help.aliyun.com/document_detail/455800.html) operation to obtain the information that is required for domain name ownership verification and manually complete the verification. Then, your certificate application is reviewed by the certificate authority (CA). If you use the Domain Name System (DNS) verification method, you must complete the verification on your DNS service provider system. If you use the file verification method, you must complete the verification on the DNS server.
       *
       * @param request CreateCertificateForPackageRequestRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCertificateForPackageRequestResponse
       */
      Models::CreateCertificateForPackageRequestResponse createCertificateForPackageRequestWithOptions(const Models::CreateCertificateForPackageRequestRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a certificate application by using a purchased certificate package quota.
       *
       * @description - Before you call this operation, make sure that you have purchased a certificate resource plan of the required specifications. For more information about how to purchase a certificate resource plan, see [Purchase a certificate resource plan](https://help.aliyun.com/document_detail/28542.html). You can call the [DescribePackageState](https://help.aliyun.com/document_detail/455800.html) operation to query the usage of a certificate resource plan of specified specifications, including the total number of certificate resource plans that you purchase, the number of certificate applications that you submit, and the number of certificates that are issued.
       * - After you call this operation to submit a certificate application and the certificate is issued, the certificate quota provided by the resource plan that you purchased is consumed. When you call this operation, you can use the **ProductCode** parameter to specify the specifications of the certificate that you want to apply for.
       * - After you call this operation to submit a certificate application, you also need to call the [DescribeCertificateState](https://help.aliyun.com/document_detail/455800.html) operation to obtain the information that is required for domain name ownership verification and manually complete the verification. Then, your certificate application is reviewed by the certificate authority (CA). If you use the Domain Name System (DNS) verification method, you must complete the verification on your DNS service provider system. If you use the file verification method, you must complete the verification on the DNS server.
       *
       * @param request CreateCertificateForPackageRequestRequest
       * @return CreateCertificateForPackageRequestResponse
       */
      Models::CreateCertificateForPackageRequestResponse createCertificateForPackageRequest(const Models::CreateCertificateForPackageRequestRequest &request);

      /**
       * @summary Purchases, applies for, and issues a domain validated (DV) certificate by using extended certificate services.
       *
       * @description - You can call this operation to apply for only DV certificates. If you want to apply for an organization validated (OV) or extended validation (EV) certificate, we recommend that you call the [CreateCertificateForPackageRequest](https://help.aliyun.com/document_detail/455296.html) operation. This operation allows you to apply for certificates of all specifications and specify the method to generate a certificate signing request (CSR) file.
       * - Before you call this operation, make sure that you have purchased a certificate resource plan of the required specifications. For more information about how to purchase a certificate resource plan, see [Purchase a certificate resource plan](https://help.aliyun.com/document_detail/28542.html). You can call the [DescribePackageState](https://help.aliyun.com/document_detail/455803.html) operation to query the usage of a certificate resource plan of specified specifications, including the total number of certificate resource plans that you purchase, the number of certificate applications that you submit, and the number of certificates that are issued.
       * - When you call this operation, you can use the **ProductCode** parameter to specify the specifications of the certificate.
       * - After you call this operation to submit a certificate application, Certificate Management Service automatically creates a CSR file for your application and consumes the certificate quota in the certificate resource plans of the specified specifications that you purchased. After you call this operation, you also need to call the [DescribeCertificateState](https://help.aliyun.com/document_detail/455800.html) operation to obtain the information that is required to complete domain name verification, and manually complete the verification. If you use the DNS verification method, you must complete the verification on the management platform of the domain name. If you use the file verification method, you must complete the verification on your DNS server. Then, the certificate authority (CA) will review your certificate application.
       *
       * @param request CreateCertificateRequestRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCertificateRequestResponse
       */
      Models::CreateCertificateRequestResponse createCertificateRequestWithOptions(const Models::CreateCertificateRequestRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Purchases, applies for, and issues a domain validated (DV) certificate by using extended certificate services.
       *
       * @description - You can call this operation to apply for only DV certificates. If you want to apply for an organization validated (OV) or extended validation (EV) certificate, we recommend that you call the [CreateCertificateForPackageRequest](https://help.aliyun.com/document_detail/455296.html) operation. This operation allows you to apply for certificates of all specifications and specify the method to generate a certificate signing request (CSR) file.
       * - Before you call this operation, make sure that you have purchased a certificate resource plan of the required specifications. For more information about how to purchase a certificate resource plan, see [Purchase a certificate resource plan](https://help.aliyun.com/document_detail/28542.html). You can call the [DescribePackageState](https://help.aliyun.com/document_detail/455803.html) operation to query the usage of a certificate resource plan of specified specifications, including the total number of certificate resource plans that you purchase, the number of certificate applications that you submit, and the number of certificates that are issued.
       * - When you call this operation, you can use the **ProductCode** parameter to specify the specifications of the certificate.
       * - After you call this operation to submit a certificate application, Certificate Management Service automatically creates a CSR file for your application and consumes the certificate quota in the certificate resource plans of the specified specifications that you purchased. After you call this operation, you also need to call the [DescribeCertificateState](https://help.aliyun.com/document_detail/455800.html) operation to obtain the information that is required to complete domain name verification, and manually complete the verification. If you use the DNS verification method, you must complete the verification on the management platform of the domain name. If you use the file verification method, you must complete the verification on your DNS server. Then, the certificate authority (CA) will review your certificate application.
       *
       * @param request CreateCertificateRequestRequest
       * @return CreateCertificateRequestResponse
       */
      Models::CreateCertificateRequestResponse createCertificateRequest(const Models::CreateCertificateRequestRequest &request);

      /**
       * @summary Purchases, applies for, and issues a domain validated (DV) certificate by using a custom certificate signing request (CSR) file.
       *
       * @description - You can use this operation to apply for only a domain validated (DV) certificate. You cannot use this operation to apply for an organization validated (OV) certificate. We recommend that you use the [CreateCertificateForPackageRequest](https://help.aliyun.com/document_detail/455296.html) operation to apply for a certificate. You can use the CreateCertificateForPackageRequest operation to apply for certificates of all types and specify the CSR generation method.
       * - Before you call this operation, make sure that you have purchased a certificate resource plan of the required specifications. For more information about how to purchase a certificate resource plan, see [Purchase a certificate resource plan](https://help.aliyun.com/document_detail/28542.html). You can call the [DescribePackageState](https://help.aliyun.com/document_detail/455803.html) operation to query the usage of a certificate resource plan of specified specifications, including the total number of certificate resource plans that you purchase, the number of certificate applications that you submit, and the number of certificates that are issued.
       * - When you call this operation, you can use the **ProductCode** parameter to specify the specifications of the certificate that you want to apply for.
       * - After you call this operation to submit a certificate application, the certificate quota of the required specifications that you purchased is consumed. After you call this operation, you must call the [DescribeCertificateState](https://help.aliyun.com/document_detail/455800.html) operation to obtain the information that is required for domain name ownership verification and manually complete the verification. Then, your certificate application is reviewed by the certificate authority (CA). If you use the Domain Name System (DNS) verification method, you must complete the verification on your DNS service provider system. If you use the file verification method, you must complete the verification on the DNS server.
       *
       * @param request CreateCertificateWithCsrRequestRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCertificateWithCsrRequestResponse
       */
      Models::CreateCertificateWithCsrRequestResponse createCertificateWithCsrRequestWithOptions(const Models::CreateCertificateWithCsrRequestRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Purchases, applies for, and issues a domain validated (DV) certificate by using a custom certificate signing request (CSR) file.
       *
       * @description - You can use this operation to apply for only a domain validated (DV) certificate. You cannot use this operation to apply for an organization validated (OV) certificate. We recommend that you use the [CreateCertificateForPackageRequest](https://help.aliyun.com/document_detail/455296.html) operation to apply for a certificate. You can use the CreateCertificateForPackageRequest operation to apply for certificates of all types and specify the CSR generation method.
       * - Before you call this operation, make sure that you have purchased a certificate resource plan of the required specifications. For more information about how to purchase a certificate resource plan, see [Purchase a certificate resource plan](https://help.aliyun.com/document_detail/28542.html). You can call the [DescribePackageState](https://help.aliyun.com/document_detail/455803.html) operation to query the usage of a certificate resource plan of specified specifications, including the total number of certificate resource plans that you purchase, the number of certificate applications that you submit, and the number of certificates that are issued.
       * - When you call this operation, you can use the **ProductCode** parameter to specify the specifications of the certificate that you want to apply for.
       * - After you call this operation to submit a certificate application, the certificate quota of the required specifications that you purchased is consumed. After you call this operation, you must call the [DescribeCertificateState](https://help.aliyun.com/document_detail/455800.html) operation to obtain the information that is required for domain name ownership verification and manually complete the verification. Then, your certificate application is reviewed by the certificate authority (CA). If you use the Domain Name System (DNS) verification method, you must complete the verification on your DNS service provider system. If you use the file verification method, you must complete the verification on the DNS server.
       *
       * @param request CreateCertificateWithCsrRequestRequest
       * @return CreateCertificateWithCsrRequestResponse
       */
      Models::CreateCertificateWithCsrRequestResponse createCertificateWithCsrRequest(const Models::CreateCertificateWithCsrRequestRequest &request);

      /**
       * @summary Creates a company.
       *
       * @param request CreateCompanyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCompanyResponse
       */
      Models::CreateCompanyResponse createCompanyWithOptions(const Models::CreateCompanyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a company.
       *
       * @param request CreateCompanyRequest
       * @return CreateCompanyResponse
       */
      Models::CreateCompanyResponse createCompany(const Models::CreateCompanyRequest &request);

      /**
       * @summary Creates a certificate application contact.
       *
       * @param request CreateContactRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateContactResponse
       */
      Models::CreateContactResponse createContactWithOptions(const Models::CreateContactRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a certificate application contact.
       *
       * @param request CreateContactRequest
       * @return CreateContactResponse
       */
      Models::CreateContactResponse createContact(const Models::CreateContactRequest &request);

      /**
       * @summary Creates a certificate signing request (CSR) that contains information about an SSL certificate to apply for, such as the domain names and the certificate holder. You must provide a CSR when you submit a certificate application to a certificate authority (CA).
       *
       * @param request CreateCsrRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCsrResponse
       */
      Models::CreateCsrResponse createCsrWithOptions(const Models::CreateCsrRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a certificate signing request (CSR) that contains information about an SSL certificate to apply for, such as the domain names and the certificate holder. You must provide a CSR when you submit a certificate application to a certificate authority (CA).
       *
       * @param request CreateCsrRequest
       * @return CreateCsrResponse
       */
      Models::CreateCsrResponse createCsr(const Models::CreateCsrRequest &request);

      /**
       * @summary Creates a certificate deployment task to deploy an SSL certificate to one or more Alibaba Cloud services immediately or at a scheduled time.
       *
       * @description After the task creation is completed, the task will be in the editing state. You need to call the UpdateDeploymentJobStatus interface to change the status to the pending state, otherwise the task will not be executed.
       *
       * @param request CreateDeploymentJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDeploymentJobResponse
       */
      Models::CreateDeploymentJobResponse createDeploymentJobWithOptions(const Models::CreateDeploymentJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a certificate deployment task to deploy an SSL certificate to one or more Alibaba Cloud services immediately or at a scheduled time.
       *
       * @description After the task creation is completed, the task will be in the editing state. You need to call the UpdateDeploymentJobStatus interface to change the status to the pending state, otherwise the task will not be executed.
       *
       * @param request CreateDeploymentJobRequest
       * @return CreateDeploymentJobResponse
       */
      Models::CreateDeploymentJobResponse createDeploymentJob(const Models::CreateDeploymentJobRequest &request);

      /**
       * @summary Issues a single client certificate from the general user certificate repository.
       *
       * @description This API is limited to 10 QPS per user. Exceeding this limit triggers throttling, which can affect your business. Call this API at a reasonable rate to avoid disruption.
       *
       * @param request CreateWHClientCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateWHClientCertificateResponse
       */
      Models::CreateWHClientCertificateResponse createWHClientCertificateWithOptions(const Models::CreateWHClientCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Issues a single client certificate from the general user certificate repository.
       *
       * @description This API is limited to 10 QPS per user. Exceeding this limit triggers throttling, which can affect your business. Call this API at a reasonable rate to avoid disruption.
       *
       * @param request CreateWHClientCertificateRequest
       * @return CreateWHClientCertificateResponse
       */
      Models::CreateWHClientCertificateResponse createWHClientCertificate(const Models::CreateWHClientCertificateRequest &request);

      /**
       * @summary Creates a certificate warehouse.
       *
       * @param request CreateWarehouseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateWarehouseResponse
       */
      Models::CreateWarehouseResponse createWarehouseWithOptions(const Models::CreateWarehouseRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a certificate warehouse.
       *
       * @param request CreateWarehouseRequest
       * @return CreateWarehouseResponse
       */
      Models::CreateWarehouseResponse createWarehouse(const Models::CreateWarehouseRequest &request);

      /**
       * @summary Decrypts data that was encrypted by using a certificate in a certificate application repository.
       *
       * @description The queries per second (QPS) limit for this API operation is 10 per user. If you exceed the limit, API calls are throttled, which may affect your business. Call this operation at a reasonable rate.
       *
       * @param request DecryptRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DecryptResponse
       */
      Models::DecryptResponse decryptWithOptions(const Models::DecryptRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Decrypts data that was encrypted by using a certificate in a certificate application repository.
       *
       * @description The queries per second (QPS) limit for this API operation is 10 per user. If you exceed the limit, API calls are throttled, which may affect your business. Call this operation at a reasonable rate.
       *
       * @param request DecryptRequest
       * @return DecryptResponse
       */
      Models::DecryptResponse decrypt(const Models::DecryptRequest &request);

      /**
       * @summary Deletes a failed domain validated (DV) certificate application order.
       *
       * @description You can call this operation to delete a certificate application order only in the following scenarios:
       * - The status of the order is **review failed**. You have called the [DescribeCertificateState](https://help.aliyun.com/document_detail/455800.html) operation to query the status of the certificate application order and the value of the **Type** parameter is **verify_fail**.
       * - The status of the order is **pending application**. You have called the [CancelOrderRequest](https://help.aliyun.com/document_detail/455299.html) operation to cancel a certificate application order whose status is pending review or being reviewed. The status of the certificate application order that is canceled in this case changes to **pending application**.
       *
       * @param request DeleteCertificateRequestRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCertificateRequestResponse
       */
      Models::DeleteCertificateRequestResponse deleteCertificateRequestWithOptions(const Models::DeleteCertificateRequestRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a failed domain validated (DV) certificate application order.
       *
       * @description You can call this operation to delete a certificate application order only in the following scenarios:
       * - The status of the order is **review failed**. You have called the [DescribeCertificateState](https://help.aliyun.com/document_detail/455800.html) operation to query the status of the certificate application order and the value of the **Type** parameter is **verify_fail**.
       * - The status of the order is **pending application**. You have called the [CancelOrderRequest](https://help.aliyun.com/document_detail/455299.html) operation to cancel a certificate application order whose status is pending review or being reviewed. The status of the certificate application order that is canceled in this case changes to **pending application**.
       *
       * @param request DeleteCertificateRequestRequest
       * @return DeleteCertificateRequestResponse
       */
      Models::DeleteCertificateRequestResponse deleteCertificateRequest(const Models::DeleteCertificateRequestRequest &request);

      /**
       * @summary Deletes an access key.
       *
       * @description This operation is limited to 100 queries per second (QPS) per user. API calls that exceed this limit are throttled, which can impact your business.
       *
       * @param request DeleteCloudAccessRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCloudAccessResponse
       */
      Models::DeleteCloudAccessResponse deleteCloudAccessWithOptions(const Models::DeleteCloudAccessRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an access key.
       *
       * @description This operation is limited to 100 queries per second (QPS) per user. API calls that exceed this limit are throttled, which can impact your business.
       *
       * @param request DeleteCloudAccessRequest
       * @return DeleteCloudAccessResponse
       */
      Models::DeleteCloudAccessResponse deleteCloudAccess(const Models::DeleteCloudAccessRequest &request);

      /**
       * @summary Deletes a company.
       *
       * @param request DeleteCompanyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCompanyResponse
       */
      Models::DeleteCompanyResponse deleteCompanyWithOptions(const Models::DeleteCompanyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a company.
       *
       * @param request DeleteCompanyRequest
       * @return DeleteCompanyResponse
       */
      Models::DeleteCompanyResponse deleteCompany(const Models::DeleteCompanyRequest &request);

      /**
       * @summary Deletes a contact.
       *
       * @param request DeleteContactRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteContactResponse
       */
      Models::DeleteContactResponse deleteContactWithOptions(const Models::DeleteContactRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a contact.
       *
       * @param request DeleteContactRequest
       * @return DeleteContactResponse
       */
      Models::DeleteContactResponse deleteContact(const Models::DeleteContactRequest &request);

      /**
       * @summary Deletes a certificate signing request (CSR).
       *
       * @param request DeleteCsrRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCsrResponse
       */
      Models::DeleteCsrResponse deleteCsrWithOptions(const Models::DeleteCsrRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a certificate signing request (CSR).
       *
       * @param request DeleteCsrRequest
       * @return DeleteCsrResponse
       */
      Models::DeleteCsrResponse deleteCsr(const Models::DeleteCsrRequest &request);

      /**
       * @summary Deletes a certificate deployment task.
       *
       * @param request DeleteDeploymentJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDeploymentJobResponse
       */
      Models::DeleteDeploymentJobResponse deleteDeploymentJobWithOptions(const Models::DeleteDeploymentJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a certificate deployment task.
       *
       * @param request DeleteDeploymentJobRequest
       * @return DeleteDeploymentJobResponse
       */
      Models::DeleteDeploymentJobResponse deleteDeploymentJob(const Models::DeleteDeploymentJobRequest &request);

      /**
       * @summary Deletes a Certificate Management Service instance.
       *
       * @param request DeleteInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteInstanceResponse
       */
      Models::DeleteInstanceResponse deleteInstanceWithOptions(const Models::DeleteInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a Certificate Management Service instance.
       *
       * @param request DeleteInstanceRequest
       * @return DeleteInstanceResponse
       */
      Models::DeleteInstanceResponse deleteInstance(const Models::DeleteInstanceRequest &request);

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
      Models::DeletePCACertResponse deletePCACertWithOptions(const Models::DeletePCACertRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DeletePCACertResponse deletePCACert(const Models::DeletePCACertRequest &request);

      /**
       * @summary Deletes an expired, revoked, or manually uploaded certificate from Certificate Management Service.
       *
       * @description This operation is limited to 100 queries per second (QPS) per user. API calls exceeding this limit are throttled, which can impact your business. We recommend calling this operation at a reasonable rate to avoid this.
       *
       * @param request DeleteUserCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteUserCertificateResponse
       */
      Models::DeleteUserCertificateResponse deleteUserCertificateWithOptions(const Models::DeleteUserCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an expired, revoked, or manually uploaded certificate from Certificate Management Service.
       *
       * @description This operation is limited to 100 queries per second (QPS) per user. API calls exceeding this limit are throttled, which can impact your business. We recommend calling this operation at a reasonable rate to avoid this.
       *
       * @param request DeleteUserCertificateRequest
       * @return DeleteUserCertificateResponse
       */
      Models::DeleteUserCertificateResponse deleteUserCertificate(const Models::DeleteUserCertificateRequest &request);

      /**
       * @summary Deletes a certificate warehouse.
       *
       * @description This operation deletes a certificate warehouse.
       * ### QPS limit
       * This operation has a QPS limit of 10 requests per second per user. Exceeding this limit causes subsequent API calls to be throttled, which can impact your services. To ensure service availability, call this operation at a reasonable rate.
       *
       * @param request DeleteWarehouseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteWarehouseResponse
       */
      Models::DeleteWarehouseResponse deleteWarehouseWithOptions(const Models::DeleteWarehouseRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a certificate warehouse.
       *
       * @description This operation deletes a certificate warehouse.
       * ### QPS limit
       * This operation has a QPS limit of 10 requests per second per user. Exceeding this limit causes subsequent API calls to be throttled, which can impact your services. To ensure service availability, call this operation at a reasonable rate.
       *
       * @param request DeleteWarehouseRequest
       * @return DeleteWarehouseResponse
       */
      Models::DeleteWarehouseResponse deleteWarehouse(const Models::DeleteWarehouseRequest &request);

      /**
       * @summary Deletes a worker task from a certificate deployment task.
       *
       * @param request DeleteWorkerResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteWorkerResourceResponse
       */
      Models::DeleteWorkerResourceResponse deleteWorkerResourceWithOptions(const Models::DeleteWorkerResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a worker task from a certificate deployment task.
       *
       * @param request DeleteWorkerResourceRequest
       * @return DeleteWorkerResourceResponse
       */
      Models::DeleteWorkerResourceResponse deleteWorkerResource(const Models::DeleteWorkerResourceRequest &request);

      /**
       * @summary Queries the status of a certificate application order, such as domain validation progress.
       *
       * @description If you have not completed domain ownership validation after submitting a certificate request, you can call this operation to obtain the information required to complete domain validation. Using the returned domain validation information, you can complete domain validation on the DNS management platform (DNS validation method) or on the domain server (file validation method).
       * Your certificate request will enter the CA center review stage only after you complete domain validation. After the CA center approves your certificate request, a certificate will be issued to you. If the certificate has been issued, you can call this operation to obtain the issued certificate file and private key content.
       * <props="china">
       * For the complete process of requesting a certificate using the resource plan API, see [Process of requesting a certificate using API operations](https://help.aliyun.com/document_detail/204741.html).
       *
       * @param request DescribeCertificateStateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCertificateStateResponse
       */
      Models::DescribeCertificateStateResponse describeCertificateStateWithOptions(const Models::DescribeCertificateStateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of a certificate application order, such as domain validation progress.
       *
       * @description If you have not completed domain ownership validation after submitting a certificate request, you can call this operation to obtain the information required to complete domain validation. Using the returned domain validation information, you can complete domain validation on the DNS management platform (DNS validation method) or on the domain server (file validation method).
       * Your certificate request will enter the CA center review stage only after you complete domain validation. After the CA center approves your certificate request, a certificate will be issued to you. If the certificate has been issued, you can call this operation to obtain the issued certificate file and private key content.
       * <props="china">
       * For the complete process of requesting a certificate using the resource plan API, see [Process of requesting a certificate using API operations](https://help.aliyun.com/document_detail/204741.html).
       *
       * @param request DescribeCertificateStateRequest
       * @return DescribeCertificateStateResponse
       */
      Models::DescribeCertificateStateResponse describeCertificateState(const Models::DescribeCertificateStateRequest &request);

      /**
       * @summary Queries the number of cloud resources on which certificates were deployed by using a multi-cloud deployment task.
       *
       * @param request DescribeCloudResourceStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCloudResourceStatusResponse
       */
      Models::DescribeCloudResourceStatusResponse describeCloudResourceStatusWithOptions(const Models::DescribeCloudResourceStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of cloud resources on which certificates were deployed by using a multi-cloud deployment task.
       *
       * @param request DescribeCloudResourceStatusRequest
       * @return DescribeCloudResourceStatusResponse
       */
      Models::DescribeCloudResourceStatusResponse describeCloudResourceStatus(const Models::DescribeCloudResourceStatusRequest &request);

      /**
       * @summary Retrieves information about a certificate deployment task, including the task status, target resources, and certificates.
       *
       * @param request DescribeDeploymentJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDeploymentJobResponse
       */
      Models::DescribeDeploymentJobResponse describeDeploymentJobWithOptions(const Models::DescribeDeploymentJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves information about a certificate deployment task, including the task status, target resources, and certificates.
       *
       * @param request DescribeDeploymentJobRequest
       * @return DescribeDeploymentJobResponse
       */
      Models::DescribeDeploymentJobResponse describeDeploymentJob(const Models::DescribeDeploymentJobRequest &request);

      /**
       * @summary Queries the execution status summary of a certificate deployment task, including the number of succeeded and failed workers.
       *
       * @param request DescribeDeploymentJobStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDeploymentJobStatusResponse
       */
      Models::DescribeDeploymentJobStatusResponse describeDeploymentJobStatusWithOptions(const Models::DescribeDeploymentJobStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the execution status summary of a certificate deployment task, including the number of succeeded and failed workers.
       *
       * @param request DescribeDeploymentJobStatusRequest
       * @return DescribeDeploymentJobStatusResponse
       */
      Models::DescribeDeploymentJobStatusResponse describeDeploymentJobStatus(const Models::DescribeDeploymentJobStatusRequest &request);

      /**
       * @summary Queries the quota and usage of domain validated (DV) certificate packages.
       *
       * @param request DescribePackageStateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePackageStateResponse
       */
      Models::DescribePackageStateResponse describePackageStateWithOptions(const Models::DescribePackageStateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the quota and usage of domain validated (DV) certificate packages.
       *
       * @param request DescribePackageStateRequest
       * @return DescribePackageStateResponse
       */
      Models::DescribePackageStateResponse describePackageState(const Models::DescribePackageStateRequest &request);

      /**
       * @summary Retrieves the details of a certificate stored in a certificate warehouse.
       *
       * @param request DescribeWarehouseCertRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeWarehouseCertResponse
       */
      Models::DescribeWarehouseCertResponse describeWarehouseCertWithOptions(const Models::DescribeWarehouseCertRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a certificate stored in a certificate warehouse.
       *
       * @param request DescribeWarehouseCertRequest
       * @return DescribeWarehouseCertResponse
       */
      Models::DescribeWarehouseCertResponse describeWarehouseCert(const Models::DescribeWarehouseCertRequest &request);

      /**
       * @summary Encrypts data by using a certificate in a certificate application repository.
       *
       * @description The queries per second (QPS) limit for a single user is 10. If you exceed this limit, API calls are throttled, which may affect your business. To prevent this, call this operation at a reasonable rate.
       *
       * @param request EncryptRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EncryptResponse
       */
      Models::EncryptResponse encryptWithOptions(const Models::EncryptRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Encrypts data by using a certificate in a certificate application repository.
       *
       * @description The queries per second (QPS) limit for a single user is 10. If you exceed this limit, API calls are throttled, which may affect your business. To prevent this, call this operation at a reasonable rate.
       *
       * @param request EncryptRequest
       * @return EncryptResponse
       */
      Models::EncryptResponse encrypt(const Models::EncryptRequest &request);

      /**
       * @summary Queries the number of assets.
       *
       * @description Queries the number of CA certificates (including root CA certificates and subordinate CA certificates) that you have created.
       * ## QPS limit
       * The China single-user QPS limit for this API is 10 calls per second. If this limit is exceeded, the API calls are throttled, which may affect your business. Call this API appropriately.
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAssetCountResponse
       */
      Models::GetAssetCountResponse getAssetCountWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of assets.
       *
       * @description Queries the number of CA certificates (including root CA certificates and subordinate CA certificates) that you have created.
       * ## QPS limit
       * The China single-user QPS limit for this API is 10 calls per second. If this limit is exceeded, the API calls are throttled, which may affect your business. Call this API appropriately.
       *
       * @return GetAssetCountResponse
       */
      Models::GetAssetCountResponse getAssetCount();

      /**
       * @summary Queries the remaining quota for certificate application repository operations.
       *
       * @description The queries per second (QPS) limit for this operation is 10 calls per second for each user. If you exceed the limit, your API calls are throttled. This may impact your business. Call this operation at a reasonable rate.
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCertWarehouseQuotaResponse
       */
      Models::GetCertWarehouseQuotaResponse getCertWarehouseQuotaWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the remaining quota for certificate application repository operations.
       *
       * @description The queries per second (QPS) limit for this operation is 10 calls per second for each user. If you exceed the limit, your API calls are throttled. This may impact your business. Call this operation at a reasonable rate.
       *
       * @return GetCertWarehouseQuotaResponse
       */
      Models::GetCertWarehouseQuotaResponse getCertWarehouseQuota();

      /**
       * @summary Retrieves certificate details, excluding the certificate body and private key.
       *
       * @param request GetCertificateDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCertificateDetailResponse
       */
      Models::GetCertificateDetailResponse getCertificateDetailWithOptions(const Models::GetCertificateDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves certificate details, excluding the certificate body and private key.
       *
       * @param request GetCertificateDetailRequest
       * @return GetCertificateDetailResponse
       */
      Models::GetCertificateDetailResponse getCertificateDetail(const Models::GetCertificateDetailRequest &request);

      /**
       * @summary Retrieves the details of a company.
       *
       * @param request GetCompanyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCompanyResponse
       */
      Models::GetCompanyResponse getCompanyWithOptions(const Models::GetCompanyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a company.
       *
       * @param request GetCompanyRequest
       * @return GetCompanyResponse
       */
      Models::GetCompanyResponse getCompany(const Models::GetCompanyRequest &request);

      /**
       * @summary Retrieves a contact.
       *
       * @param request GetContactRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetContactResponse
       */
      Models::GetContactResponse getContactWithOptions(const Models::GetContactRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a contact.
       *
       * @param request GetContactRequest
       * @return GetContactResponse
       */
      Models::GetContactResponse getContact(const Models::GetContactRequest &request);

      /**
       * @summary Queries the content of a certificate signing request (CSR).
       *
       * @param request GetCsrDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCsrDetailResponse
       */
      Models::GetCsrDetailResponse getCsrDetailWithOptions(const Models::GetCsrDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the content of a certificate signing request (CSR).
       *
       * @param request GetCsrDetailRequest
       * @return GetCsrDetailResponse
       */
      Models::GetCsrDetailResponse getCsrDetail(const Models::GetCsrDetailRequest &request);

      /**
       * @summary Queries the details of an instance.
       *
       * @param request GetInstanceDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInstanceDetailResponse
       */
      Models::GetInstanceDetailResponse getInstanceDetailWithOptions(const Models::GetInstanceDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an instance.
       *
       * @param request GetInstanceDetailRequest
       * @return GetInstanceDetailResponse
       */
      Models::GetInstanceDetailResponse getInstanceDetail(const Models::GetInstanceDetailRequest &request);

      /**
       * @summary Queries the summary statistics of Certificate Management Service instances, such as certificate counts by status.
       *
       * @param request GetInstanceSummaryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInstanceSummaryResponse
       */
      Models::GetInstanceSummaryResponse getInstanceSummaryWithOptions(const Models::GetInstanceSummaryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the summary statistics of Certificate Management Service instances, such as certificate counts by status.
       *
       * @param request GetInstanceSummaryRequest
       * @return GetInstanceSummaryResponse
       */
      Models::GetInstanceSummaryResponse getInstanceSummary(const Models::GetInstanceSummaryRequest &request);

      /**
       * @summary Retrieves the resources that match a certificate.
       *
       * @description 本接口用于通过私有 CA 实例的 ID，查询您通过 SSL 证书服务控制台购买的私有 CA 实例的状态信息，例如，CA 实例的状态、包含的证书数量、已签发的证书数量等。
       * 调用本接口前，您必须已经通过[数字证书管理服务控制台](https://yundun.console.aliyun.com/?p=cas#/pca/rootlist)购买了私有 CA。具体操作，请参见[购买私有 CA](https://help.aliyun.com/document_detail/208553.html)。
       * ## QPS 限制
       * 本接口的单用户 QPS 限制为 10 次/秒。超过限制，API 调用将会被限流，这可能影响您的业务，请合理调用。
       *
       * @param request GetMatchedResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMatchedResourcesResponse
       */
      Models::GetMatchedResourcesResponse getMatchedResourcesWithOptions(const Models::GetMatchedResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the resources that match a certificate.
       *
       * @description 本接口用于通过私有 CA 实例的 ID，查询您通过 SSL 证书服务控制台购买的私有 CA 实例的状态信息，例如，CA 实例的状态、包含的证书数量、已签发的证书数量等。
       * 调用本接口前，您必须已经通过[数字证书管理服务控制台](https://yundun.console.aliyun.com/?p=cas#/pca/rootlist)购买了私有 CA。具体操作，请参见[购买私有 CA](https://help.aliyun.com/document_detail/208553.html)。
       * ## QPS 限制
       * 本接口的单用户 QPS 限制为 10 次/秒。超过限制，API 调用将会被限流，这可能影响您的业务，请合理调用。
       *
       * @param request GetMatchedResourcesRequest
       * @return GetMatchedResourcesResponse
       */
      Models::GetMatchedResourcesResponse getMatchedResources(const Models::GetMatchedResourcesRequest &request);

      /**
       * @summary Queries the number of assets with certificate-related risks, such as expired or soon-to-expire certificates.
       *
       * @description This operation queries the number of created Certificate Authority (CA) certificates, including root and subordinate CA certificates.
       * ## QPS limits
       * The queries per second (QPS) limit for a single user is 10 calls per second. If you exceed this limit, API calls are rate-limited, which may affect your business. We recommend that you call this operation at a reasonable frequency.
       *
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRiskCountResponse
       */
      Models::GetRiskCountResponse getRiskCountWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of assets with certificate-related risks, such as expired or soon-to-expire certificates.
       *
       * @description This operation queries the number of created Certificate Authority (CA) certificates, including root and subordinate CA certificates.
       * ## QPS limits
       * The queries per second (QPS) limit for a single user is 10 calls per second. If you exceed this limit, API calls are rate-limited, which may affect your business. We recommend that you call this operation at a reasonable frequency.
       *
       * @return GetRiskCountResponse
       */
      Models::GetRiskCountResponse getRiskCount();

      /**
       * @summary Queries the processing result and status of a submitted certificate application.
       *
       * @param request GetTaskAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTaskAttributeResponse
       */
      Models::GetTaskAttributeResponse getTaskAttributeWithOptions(const Models::GetTaskAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the processing result and status of a submitted certificate application.
       *
       * @param request GetTaskAttributeRequest
       * @return GetTaskAttributeResponse
       */
      Models::GetTaskAttributeResponse getTaskAttribute(const Models::GetTaskAttributeRequest &request);

      /**
       * @summary Retrieves the details of a certificate, including basic information and public/private key content. You can use this operation to download the certificate content and private key.
       *
       * @description The China single-user queries per second (QPS) limit for this operation is 100. If this limit is exceeded, the API call is throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request GetUserCertificateDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUserCertificateDetailResponse
       */
      Models::GetUserCertificateDetailResponse getUserCertificateDetailWithOptions(const Models::GetUserCertificateDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a certificate, including basic information and public/private key content. You can use this operation to download the certificate content and private key.
       *
       * @description The China single-user queries per second (QPS) limit for this operation is 100. If this limit is exceeded, the API call is throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request GetUserCertificateDetailRequest
       * @return GetUserCertificateDetailResponse
       */
      Models::GetUserCertificateDetailResponse getUserCertificateDetail(const Models::GetUserCertificateDetailRequest &request);

      /**
       * @summary Queries the resource statistics list of cloud services.
       *
       * @description Queries the number of CA certificates (including root CA certificates and subordinate CA certificates) that you have created.
       * ## QPS limit
       * The China single-user QPS limit for this operation is 10 calls per second. If this limit is exceeded, the API calls are throttled, which may affect your business. Call this operation as needed.
       *
       * @param request ListAssetCountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAssetCountResponse
       */
      Models::ListAssetCountResponse listAssetCountWithOptions(const Models::ListAssetCountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the resource statistics list of cloud services.
       *
       * @description Queries the number of CA certificates (including root CA certificates and subordinate CA certificates) that you have created.
       * ## QPS limit
       * The China single-user QPS limit for this operation is 10 calls per second. If this limit is exceeded, the API calls are throttled, which may affect your business. Call this operation as needed.
       *
       * @param request ListAssetCountRequest
       * @return ListAssetCountResponse
       */
      Models::ListAssetCountResponse listAssetCount(const Models::ListAssetCountRequest &request);

      /**
       * @summary This API queries certificates in the certificate store.
       *
       * @description The single-user QPS limit for this API is 10. Calls exceeding this limit are throttled, which may impact your business. Plan your API calls accordingly.
       *
       * @param request ListCertRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCertResponse
       */
      Models::ListCertResponse listCertWithOptions(const Models::ListCertRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This API queries certificates in the certificate store.
       *
       * @description The single-user QPS limit for this API is 10. Calls exceeding this limit are throttled, which may impact your business. Plan your API calls accordingly.
       *
       * @param request ListCertRequest
       * @return ListCertResponse
       */
      Models::ListCertResponse listCert(const Models::ListCertRequest &request);

      /**
       * @summary Queries the certificate application repositories in your account.
       *
       * @description You can call the ListCertWarehouse operation to query certificate repositories.
       * ### Limits
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request ListCertWarehouseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCertWarehouseResponse
       */
      Models::ListCertWarehouseResponse listCertWarehouseWithOptions(const Models::ListCertWarehouseRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the certificate application repositories in your account.
       *
       * @description You can call the ListCertWarehouse operation to query certificate repositories.
       * ### Limits
       * You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request ListCertWarehouseRequest
       * @return ListCertWarehouseResponse
       */
      Models::ListCertWarehouseResponse listCertWarehouse(const Models::ListCertWarehouseRequest &request);

      /**
       * @summary Queries the certificates managed by Certificate Management Service.
       *
       * @param request ListCertificatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCertificatesResponse
       */
      Models::ListCertificatesResponse listCertificatesWithOptions(const Models::ListCertificatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the certificates managed by Certificate Management Service.
       *
       * @param request ListCertificatesRequest
       * @return ListCertificatesResponse
       */
      Models::ListCertificatesResponse listCertificates(const Models::ListCertificatesRequest &request);

      /**
       * @summary Queries the AccessKey pairs that are configured for multi-cloud certificate deployment.
       *
       * @param request ListCloudAccessRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCloudAccessResponse
       */
      Models::ListCloudAccessResponse listCloudAccessWithOptions(const Models::ListCloudAccessRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the AccessKey pairs that are configured for multi-cloud certificate deployment.
       *
       * @param request ListCloudAccessRequest
       * @return ListCloudAccessResponse
       */
      Models::ListCloudAccessResponse listCloudAccess(const Models::ListCloudAccessRequest &request);

      /**
       * @summary Queries the cloud resources on which certificates are deployed, such as Server Load Balancer (SLB) instances and CDN domains.
       *
       * @param tmpReq ListCloudResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCloudResourcesResponse
       */
      Models::ListCloudResourcesResponse listCloudResourcesWithOptions(const Models::ListCloudResourcesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the cloud resources on which certificates are deployed, such as Server Load Balancer (SLB) instances and CDN domains.
       *
       * @param request ListCloudResourcesRequest
       * @return ListCloudResourcesResponse
       */
      Models::ListCloudResourcesResponse listCloudResources(const Models::ListCloudResourcesRequest &request);

      /**
       * @summary Retrieves a list of companies.
       *
       * @param request ListCompaniesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCompaniesResponse
       */
      Models::ListCompaniesResponse listCompaniesWithOptions(const Models::ListCompaniesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of companies.
       *
       * @param request ListCompaniesRequest
       * @return ListCompaniesResponse
       */
      Models::ListCompaniesResponse listCompanies(const Models::ListCompaniesRequest &request);

      /**
       * @summary Retrieves a list of contacts.
       *
       * @param request ListContactRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListContactResponse
       */
      Models::ListContactResponse listContactWithOptions(const Models::ListContactRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of contacts.
       *
       * @param request ListContactRequest
       * @return ListContactResponse
       */
      Models::ListContactResponse listContact(const Models::ListContactRequest &request);

      /**
       * @summary Queries the certificate signing requests (CSRs) in your account.
       *
       * @param request ListCsrRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCsrResponse
       */
      Models::ListCsrResponse listCsrWithOptions(const Models::ListCsrRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the certificate signing requests (CSRs) in your account.
       *
       * @param request ListCsrRequest
       * @return ListCsrResponse
       */
      Models::ListCsrResponse listCsr(const Models::ListCsrRequest &request);

      /**
       * @summary Retrieves a list of deployment tasks after you create a deployment task.
       *
       * @param request ListDeploymentJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDeploymentJobResponse
       */
      Models::ListDeploymentJobResponse listDeploymentJobWithOptions(const Models::ListDeploymentJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of deployment tasks after you create a deployment task.
       *
       * @param request ListDeploymentJobRequest
       * @return ListDeploymentJobResponse
       */
      Models::ListDeploymentJobResponse listDeploymentJob(const Models::ListDeploymentJobRequest &request);

      /**
       * @summary Queries the certificates associated with a deployment task, such as the certificate instance ID, type, and name.
       *
       * @param request ListDeploymentJobCertRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDeploymentJobCertResponse
       */
      Models::ListDeploymentJobCertResponse listDeploymentJobCertWithOptions(const Models::ListDeploymentJobCertRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the certificates associated with a deployment task, such as the certificate instance ID, type, and name.
       *
       * @param request ListDeploymentJobCertRequest
       * @return ListDeploymentJobCertResponse
       */
      Models::ListDeploymentJobCertResponse listDeploymentJobCert(const Models::ListDeploymentJobCertRequest &request);

      /**
       * @summary Queries the cloud resources associated with a deployment task. An empty list indicates that the resources are invalid and must be re-associated.
       *
       * @param request ListDeploymentJobResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDeploymentJobResourceResponse
       */
      Models::ListDeploymentJobResourceResponse listDeploymentJobResourceWithOptions(const Models::ListDeploymentJobResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the cloud resources associated with a deployment task. An empty list indicates that the resources are invalid and must be re-associated.
       *
       * @param request ListDeploymentJobResourceRequest
       * @return ListDeploymentJobResourceResponse
       */
      Models::ListDeploymentJobResourceResponse listDeploymentJobResource(const Models::ListDeploymentJobResourceRequest &request);

      /**
       * @summary Retrieves a list of instances.
       *
       * @param request ListInstancesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInstancesResponse
       */
      Models::ListInstancesResponse listInstancesWithOptions(const Models::ListInstancesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of instances.
       *
       * @param request ListInstancesRequest
       * @return ListInstancesResponse
       */
      Models::ListInstancesResponse listInstances(const Models::ListInstancesRequest &request);

      /**
       * @summary Queries the list of user certificates or orders.
       *
       * @description This operation is used to query the list of user certificates or orders. If OrderType is set to CERT or UPLOAD, the certificate list is queried. If OrderType is set to CPACK or BUY, the order list is queried.
       * ## QPS limit
       * The single-user QPS limit for this operation is 10 calls per second. If this limit is exceeded, the API call is throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request ListUserCertificateOrderRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUserCertificateOrderResponse
       */
      Models::ListUserCertificateOrderResponse listUserCertificateOrderWithOptions(const Models::ListUserCertificateOrderRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of user certificates or orders.
       *
       * @description This operation is used to query the list of user certificates or orders. If OrderType is set to CERT or UPLOAD, the certificate list is queried. If OrderType is set to CPACK or BUY, the order list is queried.
       * ## QPS limit
       * The single-user QPS limit for this operation is 10 calls per second. If this limit is exceeded, the API call is throttled, which may affect your business. Call this operation appropriately.
       *
       * @param request ListUserCertificateOrderRequest
       * @return ListUserCertificateOrderResponse
       */
      Models::ListUserCertificateOrderResponse listUserCertificateOrder(const Models::ListUserCertificateOrderRequest &request);

      /**
       * @summary Lists warehouses.
       *
       * @description This operation lists your warehouses.
       * ### QPS limit
       * This operation has a per-user QPS limit of 10 requests per second. Calls exceeding this limit are throttled, which can affect your business.
       *
       * @param tmpReq ListWarehouseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListWarehouseResponse
       */
      Models::ListWarehouseResponse listWarehouseWithOptions(const Models::ListWarehouseRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists warehouses.
       *
       * @description This operation lists your warehouses.
       * ### QPS limit
       * This operation has a per-user QPS limit of 10 requests per second. Calls exceeding this limit are throttled, which can affect your business.
       *
       * @param request ListWarehouseRequest
       * @return ListWarehouseResponse
       */
      Models::ListWarehouseResponse listWarehouse(const Models::ListWarehouseRequest &request);

      /**
       * @summary Queries the worker tasks of a deployment task. Each worker task deploys a certificate to a specific cloud resource in a cloud service.
       *
       * @param request ListWorkerResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListWorkerResourceResponse
       */
      Models::ListWorkerResourceResponse listWorkerResourceWithOptions(const Models::ListWorkerResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the worker tasks of a deployment task. Each worker task deploys a certificate to a specific cloud resource in a cloud service.
       *
       * @param request ListWorkerResourceRequest
       * @return ListWorkerResourceResponse
       */
      Models::ListWorkerResourceResponse listWorkerResource(const Models::ListWorkerResourceRequest &request);

      /**
       * @summary Changes the resource group to which a certificate or certificate order belongs.
       *
       * @param request MoveResourceGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MoveResourceGroupResponse
       */
      Models::MoveResourceGroupResponse moveResourceGroupWithOptions(const Models::MoveResourceGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the resource group to which a certificate or certificate order belongs.
       *
       * @param request MoveResourceGroupRequest
       * @return MoveResourceGroupResponse
       */
      Models::MoveResourceGroupResponse moveResourceGroup(const Models::MoveResourceGroupRequest &request);

      /**
       * @summary Refunds an instance within 7 days.
       *
       * @param request RefundInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RefundInstanceResponse
       */
      Models::RefundInstanceResponse refundInstanceWithOptions(const Models::RefundInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Refunds an instance within 7 days.
       *
       * @param request RefundInstanceRequest
       * @return RefundInstanceResponse
       */
      Models::RefundInstanceResponse refundInstance(const Models::RefundInstanceRequest &request);

      /**
       * @summary Submits a renewal application for an issued SSL certificate.
       *
       * @description You can call the RenewCertificateOrderForPackageRequest operation to submit a renewal application for a certificate only when the order of the certificate is in the expiring state. After the renewal is complete, a new certificate order whose status is pending application is generated. You must submit a certificate application for the new certificate order and install the new certificate after the new certificate is issued.
       * > You can call the [DescribeCertificateState](https://help.aliyun.com/document_detail/164111.html) operation to query the status of a certificate application order. If the value of the **Type** response parameter is **certificate**, the certificate is issued.
       *
       * @param request RenewCertificateOrderForPackageRequestRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RenewCertificateOrderForPackageRequestResponse
       */
      Models::RenewCertificateOrderForPackageRequestResponse renewCertificateOrderForPackageRequestWithOptions(const Models::RenewCertificateOrderForPackageRequestRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a renewal application for an issued SSL certificate.
       *
       * @description You can call the RenewCertificateOrderForPackageRequest operation to submit a renewal application for a certificate only when the order of the certificate is in the expiring state. After the renewal is complete, a new certificate order whose status is pending application is generated. You must submit a certificate application for the new certificate order and install the new certificate after the new certificate is issued.
       * > You can call the [DescribeCertificateState](https://help.aliyun.com/document_detail/164111.html) operation to query the status of a certificate application order. If the value of the **Type** response parameter is **certificate**, the certificate is issued.
       *
       * @param request RenewCertificateOrderForPackageRequestRequest
       * @return RenewCertificateOrderForPackageRequestResponse
       */
      Models::RenewCertificateOrderForPackageRequestResponse renewCertificateOrderForPackageRequest(const Models::RenewCertificateOrderForPackageRequestRequest &request);

      /**
       * @summary Revokes a certificate.
       *
       * @param request RevokeCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RevokeCertificateResponse
       */
      Models::RevokeCertificateResponse revokeCertificateWithOptions(const Models::RevokeCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Revokes a certificate.
       *
       * @param request RevokeCertificateRequest
       * @return RevokeCertificateResponse
       */
      Models::RevokeCertificateResponse revokeCertificate(const Models::RevokeCertificateRequest &request);

      /**
       * @summary Revokes a client certificate from the certificate repository.
       *
       * @description The rate limit for this API is 10 queries per second (QPS) per user. If you exceed this limit, subsequent API calls will be throttled, which can disrupt your services. We recommend that you call this API at a reasonable rate.
       *
       * @param request RevokeWHClientCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RevokeWHClientCertificateResponse
       */
      Models::RevokeWHClientCertificateResponse revokeWHClientCertificateWithOptions(const Models::RevokeWHClientCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Revokes a client certificate from the certificate repository.
       *
       * @description The rate limit for this API is 10 queries per second (QPS) per user. If you exceed this limit, subsequent API calls will be throttled, which can disrupt your services. We recommend that you call this API at a reasonable rate.
       *
       * @param request RevokeWHClientCertificateRequest
       * @return RevokeWHClientCertificateResponse
       */
      Models::RevokeWHClientCertificateResponse revokeWHClientCertificate(const Models::RevokeWHClientCertificateRequest &request);

      /**
       * @summary This operation creates a digital signature with a PCA certificate from a certificate repository.
       *
       * @description This operation creates a digital signature with a PCA certificate from a certificate repository.
       * ### QPS limit
       * This operation supports up to 1,000 queries per second (QPS) for a single user. If you exceed this limit, the system throttles your API calls, which can impact your business. Plan your API calls accordingly.
       *
       * @param request SignRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SignResponse
       */
      Models::SignResponse signWithOptions(const Models::SignRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary This operation creates a digital signature with a PCA certificate from a certificate repository.
       *
       * @description This operation creates a digital signature with a PCA certificate from a certificate repository.
       * ### QPS limit
       * This operation supports up to 1,000 queries per second (QPS) for a single user. If you exceed this limit, the system throttles your API calls, which can impact your business. Plan your API calls accordingly.
       *
       * @param request SignRequest
       * @return SignResponse
       */
      Models::SignResponse sign(const Models::SignRequest &request);

      /**
       * @summary Updates company information.
       *
       * @param request UpdateCompanyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCompanyResponse
       */
      Models::UpdateCompanyResponse updateCompanyWithOptions(const Models::UpdateCompanyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates company information.
       *
       * @param request UpdateCompanyRequest
       * @return UpdateCompanyResponse
       */
      Models::UpdateCompanyResponse updateCompany(const Models::UpdateCompanyRequest &request);

      /**
       * @summary Updates a contact.
       *
       * @param request UpdateContactRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateContactResponse
       */
      Models::UpdateContactResponse updateContactWithOptions(const Models::UpdateContactRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a contact.
       *
       * @param request UpdateContactRequest
       * @return UpdateContactResponse
       */
      Models::UpdateContactResponse updateContact(const Models::UpdateContactRequest &request);

      /**
       * @summary Uploads the private key corresponding to a CSR if the private key was not provided when the local CSR was uploaded.
       *
       * @param request UpdateCsrRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCsrResponse
       */
      Models::UpdateCsrResponse updateCsrWithOptions(const Models::UpdateCsrRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Uploads the private key corresponding to a CSR if the private key was not provided when the local CSR was uploaded.
       *
       * @param request UpdateCsrRequest
       * @return UpdateCsrResponse
       */
      Models::UpdateCsrResponse updateCsr(const Models::UpdateCsrRequest &request);

      /**
       * @summary Updates the configuration of a certificate deployment task, such as the certificates or target resources.
       *
       * @param request UpdateDeploymentJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDeploymentJobResponse
       */
      Models::UpdateDeploymentJobResponse updateDeploymentJobWithOptions(const Models::UpdateDeploymentJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the configuration of a certificate deployment task, such as the certificates or target resources.
       *
       * @param request UpdateDeploymentJobRequest
       * @return UpdateDeploymentJobResponse
       */
      Models::UpdateDeploymentJobResponse updateDeploymentJob(const Models::UpdateDeploymentJobRequest &request);

      /**
       * @summary Updates the status of a certificate deployment task, such as changing from editing to pending execution.
       *
       * @param request UpdateDeploymentJobStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDeploymentJobStatusResponse
       */
      Models::UpdateDeploymentJobStatusResponse updateDeploymentJobStatusWithOptions(const Models::UpdateDeploymentJobStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the status of a certificate deployment task, such as changing from editing to pending execution.
       *
       * @param request UpdateDeploymentJobStatusRequest
       * @return UpdateDeploymentJobStatusResponse
       */
      Models::UpdateDeploymentJobStatusResponse updateDeploymentJobStatus(const Models::UpdateDeploymentJobStatusRequest &request);

      /**
       * @summary Updates the configuration of a Certificate Management Service instance.
       *
       * @param request UpdateInstanceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateInstanceResponse
       */
      Models::UpdateInstanceResponse updateInstanceWithOptions(const Models::UpdateInstanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the configuration of a Certificate Management Service instance.
       *
       * @param request UpdateInstanceRequest
       * @return UpdateInstanceResponse
       */
      Models::UpdateInstanceResponse updateInstance(const Models::UpdateInstanceRequest &request);

      /**
       * @summary Rolls back or re-executes a worker task in a certificate deployment task.
       *
       * @param request UpdateWorkerResourceStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateWorkerResourceStatusResponse
       */
      Models::UpdateWorkerResourceStatusResponse updateWorkerResourceStatusWithOptions(const Models::UpdateWorkerResourceStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Rolls back or re-executes a worker task in a certificate deployment task.
       *
       * @param request UpdateWorkerResourceStatusRequest
       * @return UpdateWorkerResourceStatusResponse
       */
      Models::UpdateWorkerResourceStatusResponse updateWorkerResourceStatus(const Models::UpdateWorkerResourceStatusRequest &request);

      /**
       * @summary Uploads an existing certificate signing request (CSR) to Certificate Management Service. After the upload, you can use the CSR to apply for certificates.
       *
       * @param request UploadCsrRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UploadCsrResponse
       */
      Models::UploadCsrResponse uploadCsrWithOptions(const Models::UploadCsrRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Uploads an existing certificate signing request (CSR) to Certificate Management Service. After the upload, you can use the CSR to apply for certificates.
       *
       * @param request UploadCsrRequest
       * @return UploadCsrResponse
       */
      Models::UploadCsrResponse uploadCsr(const Models::UploadCsrRequest &request);

      /**
       * @summary Uploads a PCA certificate to a certificate warehouse.
       *
       * @description Use this operation to upload a PCA certificate to a certificate warehouse.
       * ## QPS limit
       * The QPS limit for this operation is 10 requests per second per user. Exceeding this limit triggers throttling, which can affect your business.
       *
       * @param request UploadPCACertRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UploadPCACertResponse
       */
      Models::UploadPCACertResponse uploadPCACertWithOptions(const Models::UploadPCACertRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Uploads a PCA certificate to a certificate warehouse.
       *
       * @description Use this operation to upload a PCA certificate to a certificate warehouse.
       * ## QPS limit
       * The QPS limit for this operation is 10 requests per second per user. Exceeding this limit triggers throttling, which can affect your business.
       *
       * @param request UploadPCACertRequest
       * @return UploadPCACertResponse
       */
      Models::UploadPCACertResponse uploadPCACert(const Models::UploadPCACertRequest &request);

      /**
       * @summary Uploads a certificate and its private key to Certificate Management Service. Both SM and non-SM certificates are supported.
       *
       * @description The queries per second (QPS) limit for this operation is 100 for each user. If you exceed this limit, API calls are throttled. This may affect your business. Plan your calls accordingly.
       *
       * @param request UploadUserCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UploadUserCertificateResponse
       */
      Models::UploadUserCertificateResponse uploadUserCertificateWithOptions(const Models::UploadUserCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Uploads a certificate and its private key to Certificate Management Service. Both SM and non-SM certificates are supported.
       *
       * @description The queries per second (QPS) limit for this operation is 100 for each user. If you exceed this limit, API calls are throttled. This may affect your business. Plan your calls accordingly.
       *
       * @param request UploadUserCertificateRequest
       * @return UploadUserCertificateResponse
       */
      Models::UploadUserCertificateResponse uploadUserCertificate(const Models::UploadUserCertificateRequest &request);

      /**
       * @summary Verifies a data signature by using a private certificate in a certificate application repository.
       *
       * @description This API verifies the signatures of PCA certificates and SSL certificates in the certificate repository.
       * ### QPS limits
       * The queries per second (QPS) limit for this API is 1,000 for a single user. For your specific QPS limit, refer to the certificate repository. If you exceed this limit, API calls are throttled, which may affect your business. Plan your API calls accordingly.
       *
       * @param request VerifyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return VerifyResponse
       */
      Models::VerifyResponse verifyWithOptions(const Models::VerifyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Verifies a data signature by using a private certificate in a certificate application repository.
       *
       * @description This API verifies the signatures of PCA certificates and SSL certificates in the certificate repository.
       * ### QPS limits
       * The queries per second (QPS) limit for this API is 1,000 for a single user. For your specific QPS limit, refer to the certificate repository. If you exceed this limit, API calls are throttled, which may affect your business. Plan your API calls accordingly.
       *
       * @param request VerifyRequest
       * @return VerifyResponse
       */
      Models::VerifyResponse verify(const Models::VerifyRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif
