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
       * @summary Revokes an issued certificate and cancels the application order of the certificate.
       *
       * @description You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request CancelCertificateForPackageRequestRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelCertificateForPackageRequestResponse
       */
      Models::CancelCertificateForPackageRequestResponse cancelCertificateForPackageRequestWithOptions(const Models::CancelCertificateForPackageRequestRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Revokes an issued certificate and cancels the application order of the certificate.
       *
       * @description You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request CancelCertificateForPackageRequestRequest
       * @return CancelCertificateForPackageRequestResponse
       */
      Models::CancelCertificateForPackageRequestResponse cancelCertificateForPackageRequest(const Models::CancelCertificateForPackageRequestRequest &request);

      /**
       * @summary Cancels a certificate application order that is in the pending validation or being reviewed state.
       *
       * @description You can call this operation up to 100 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request CancelOrderRequestRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CancelOrderRequestResponse
       */
      Models::CancelOrderRequestResponse cancelOrderRequestWithOptions(const Models::CancelOrderRequestRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Cancels a certificate application order that is in the pending validation or being reviewed state.
       *
       * @description You can call this operation up to 100 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request CancelOrderRequestRequest
       * @return CancelOrderRequestResponse
       */
      Models::CancelOrderRequestResponse cancelOrderRequest(const Models::CancelOrderRequestRequest &request);

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
      Models::CreateCertificateForPackageRequestResponse createCertificateForPackageRequestWithOptions(const Models::CreateCertificateForPackageRequestRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::CreateCertificateForPackageRequestResponse createCertificateForPackageRequest(const Models::CreateCertificateForPackageRequestRequest &request);

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
      Models::CreateCertificateRequestResponse createCertificateRequestWithOptions(const Models::CreateCertificateRequestRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::CreateCertificateRequestResponse createCertificateRequest(const Models::CreateCertificateRequestRequest &request);

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
      Models::CreateCertificateWithCsrRequestResponse createCertificateWithCsrRequestWithOptions(const Models::CreateCertificateWithCsrRequestRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::CreateCertificateWithCsrRequestResponse createCertificateWithCsrRequest(const Models::CreateCertificateWithCsrRequestRequest &request);

      /**
       * @summary Creates a certificate signing request (CSR). A CSR file contains the information about an SSL certificate that you want to apply for. The information includes the domain names that you want to bind to the certificate and the name and the geographical location of the certificate holder. When you submit a certificate application to a certificate authority (CA), you must provide a CSR. After the CA approves your certificate application, the CA uses the private key of the root CA to sign your CSR and generates a public key file. The public key file is the SSL certificate that the CA issues to you. The private key of the SSL certificate is generated when you create the CSR.
       *
       * @param request CreateCsrRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCsrResponse
       */
      Models::CreateCsrResponse createCsrWithOptions(const Models::CreateCsrRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a certificate signing request (CSR). A CSR file contains the information about an SSL certificate that you want to apply for. The information includes the domain names that you want to bind to the certificate and the name and the geographical location of the certificate holder. When you submit a certificate application to a certificate authority (CA), you must provide a CSR. After the CA approves your certificate application, the CA uses the private key of the root CA to sign your CSR and generates a public key file. The public key file is the SSL certificate that the CA issues to you. The private key of the SSL certificate is generated when you create the CSR.
       *
       * @param request CreateCsrRequest
       * @return CreateCsrResponse
       */
      Models::CreateCsrResponse createCsr(const Models::CreateCsrRequest &request);

      /**
       * @summary Creates a certificate deployment task. After an SSL certificate is issued, you can create a certificate deployment task to immediately deploy the certificate to an Alibaba Cloud service or deploy the certificate to the service at a specific point in time. Then, the certificate can implement trusted identity authentication and ensure the security of data transmission for your website hosted on the service.
       *
       * @description After the task creation is completed, the task will be in the editing state. You need to call the UpdateDeploymentJobStatus interface to change the status to the pending state, otherwise the task will not be executed.
       *
       * @param request CreateDeploymentJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDeploymentJobResponse
       */
      Models::CreateDeploymentJobResponse createDeploymentJobWithOptions(const Models::CreateDeploymentJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a certificate deployment task. After an SSL certificate is issued, you can create a certificate deployment task to immediately deploy the certificate to an Alibaba Cloud service or deploy the certificate to the service at a specific point in time. Then, the certificate can implement trusted identity authentication and ensure the security of data transmission for your website hosted on the service.
       *
       * @description After the task creation is completed, the task will be in the editing state. You need to call the UpdateDeploymentJobStatus interface to change the status to the pending state, otherwise the task will not be executed.
       *
       * @param request CreateDeploymentJobRequest
       * @return CreateDeploymentJobResponse
       */
      Models::CreateDeploymentJobResponse createDeploymentJob(const Models::CreateDeploymentJobRequest &request);

      /**
       * @summary Decrypts a certificate in a certificate repository.
       *
       * @description You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DecryptRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DecryptResponse
       */
      Models::DecryptResponse decryptWithOptions(const Models::DecryptRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Decrypts a certificate in a certificate repository.
       *
       * @description You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DecryptRequest
       * @return DecryptResponse
       */
      Models::DecryptResponse decrypt(const Models::DecryptRequest &request);

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
      Models::DeleteCertificateRequestResponse deleteCertificateRequestWithOptions(const Models::DeleteCertificateRequestRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::DeleteCertificateRequestResponse deleteCertificateRequest(const Models::DeleteCertificateRequestRequest &request);

      /**
       * @summary Deletes a certificate signing request (CSR) file.
       *
       * @param request DeleteCsrRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCsrResponse
       */
      Models::DeleteCsrResponse deleteCsrWithOptions(const Models::DeleteCsrRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a certificate signing request (CSR) file.
       *
       * @param request DeleteCsrRequest
       * @return DeleteCsrResponse
       */
      Models::DeleteCsrResponse deleteCsr(const Models::DeleteCsrRequest &request);

      /**
       * @summary Deletes a deployment task.
       *
       * @param request DeleteDeploymentJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDeploymentJobResponse
       */
      Models::DeleteDeploymentJobResponse deleteDeploymentJobWithOptions(const Models::DeleteDeploymentJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a deployment task.
       *
       * @param request DeleteDeploymentJobRequest
       * @return DeleteDeploymentJobResponse
       */
      Models::DeleteDeploymentJobResponse deleteDeploymentJob(const Models::DeleteDeploymentJobRequest &request);

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
       * @summary Deletes an expired or uploaded certificate.
       *
       * @description You can call this operation up to 100 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DeleteUserCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteUserCertificateResponse
       */
      Models::DeleteUserCertificateResponse deleteUserCertificateWithOptions(const Models::DeleteUserCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an expired or uploaded certificate.
       *
       * @description You can call this operation up to 100 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request DeleteUserCertificateRequest
       * @return DeleteUserCertificateResponse
       */
      Models::DeleteUserCertificateResponse deleteUserCertificate(const Models::DeleteUserCertificateRequest &request);

      /**
       * @summary Deletes the worker of a deployment task.
       *
       * @param request DeleteWorkerResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteWorkerResourceResponse
       */
      Models::DeleteWorkerResourceResponse deleteWorkerResourceWithOptions(const Models::DeleteWorkerResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the worker of a deployment task.
       *
       * @param request DeleteWorkerResourceRequest
       * @return DeleteWorkerResourceResponse
       */
      Models::DeleteWorkerResourceResponse deleteWorkerResource(const Models::DeleteWorkerResourceRequest &request);

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
      Models::DescribeCertificateStateResponse describeCertificateStateWithOptions(const Models::DescribeCertificateStateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of a specified certificate application order.
       *
       * @description If you do not complete the verification of the domain name ownership after you submit a certificate application, you can call this operation to obtain the information that is required to complete the verification. You can complete the verification of the domain name ownership based on the data returned. If you use the DNS verification method, you must complete the verification on the management platform of the domain name. If you use the file verification method, you must complete the verification on the DNS server.
       * The certificate authority (CA) reviews your certificate application only after you complete the verification of the domain name ownership. After the CA approves your certificate application, the CA issues the certificate. If a certificate is issued, you can call this operation to obtain the CA certificate and private key of the certificate.
       *
       * @param request DescribeCertificateStateRequest
       * @return DescribeCertificateStateResponse
       */
      Models::DescribeCertificateStateResponse describeCertificateState(const Models::DescribeCertificateStateRequest &request);

      /**
       * @summary Queries the number of third-party cloud resources on which you deployed certificates by using a multi-cloud deployment task.
       *
       * @param request DescribeCloudResourceStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCloudResourceStatusResponse
       */
      Models::DescribeCloudResourceStatusResponse describeCloudResourceStatusWithOptions(const Models::DescribeCloudResourceStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of third-party cloud resources on which you deployed certificates by using a multi-cloud deployment task.
       *
       * @param request DescribeCloudResourceStatusRequest
       * @return DescribeCloudResourceStatusResponse
       */
      Models::DescribeCloudResourceStatusResponse describeCloudResourceStatus(const Models::DescribeCloudResourceStatusRequest &request);

      /**
       * @summary Queries the details of a deployment task. You can call the CreateDeploymentJob operation to create a deployment task and obtain the ID of the task.
       *
       * @param request DescribeDeploymentJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDeploymentJobResponse
       */
      Models::DescribeDeploymentJobResponse describeDeploymentJobWithOptions(const Models::DescribeDeploymentJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a deployment task. You can call the CreateDeploymentJob operation to create a deployment task and obtain the ID of the task.
       *
       * @param request DescribeDeploymentJobRequest
       * @return DescribeDeploymentJobResponse
       */
      Models::DescribeDeploymentJobResponse describeDeploymentJob(const Models::DescribeDeploymentJobRequest &request);

      /**
       * @summary Queries the number of worker tasks in a deployment task.
       *
       * @param request DescribeDeploymentJobStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDeploymentJobStatusResponse
       */
      Models::DescribeDeploymentJobStatusResponse describeDeploymentJobStatusWithOptions(const Models::DescribeDeploymentJobStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of worker tasks in a deployment task.
       *
       * @param request DescribeDeploymentJobStatusRequest
       * @return DescribeDeploymentJobStatusResponse
       */
      Models::DescribeDeploymentJobStatusResponse describeDeploymentJobStatus(const Models::DescribeDeploymentJobStatusRequest &request);

      /**
       * @summary Queries the quota for domain validated (DV) certificates that you purchase and the quota usage.
       *
       * @param request DescribePackageStateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePackageStateResponse
       */
      Models::DescribePackageStateResponse describePackageStateWithOptions(const Models::DescribePackageStateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the quota for domain validated (DV) certificates that you purchase and the quota usage.
       *
       * @param request DescribePackageStateRequest
       * @return DescribePackageStateResponse
       */
      Models::DescribePackageStateResponse describePackageState(const Models::DescribePackageStateRequest &request);

      /**
       * @summary Encrypts a certificate in a certificate repository.
       *
       * @description You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request EncryptRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EncryptResponse
       */
      Models::EncryptResponse encryptWithOptions(const Models::EncryptRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Encrypts a certificate in a certificate repository.
       *
       * @description You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request EncryptRequest
       * @return EncryptResponse
       */
      Models::EncryptResponse encrypt(const Models::EncryptRequest &request);

      /**
       * @summary Queries the quota for certificate repositories.
       *
       * @description You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request GetCertWarehouseQuotaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCertWarehouseQuotaResponse
       */
      Models::GetCertWarehouseQuotaResponse getCertWarehouseQuotaWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the quota for certificate repositories.
       *
       * @description You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @return GetCertWarehouseQuotaResponse
       */
      Models::GetCertWarehouseQuotaResponse getCertWarehouseQuota();

      /**
       * @summary Obtains the content of a certificate signing request (CSR) file.
       *
       * @param request GetCsrDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetCsrDetailResponse
       */
      Models::GetCsrDetailResponse getCsrDetailWithOptions(const Models::GetCsrDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the content of a certificate signing request (CSR) file.
       *
       * @param request GetCsrDetailRequest
       * @return GetCsrDetailResponse
       */
      Models::GetCsrDetailResponse getCsrDetail(const Models::GetCsrDetailRequest &request);

      /**
       * @summary Queries the details of a certificate.
       *
       * @description You can call this operation up to 100 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request GetUserCertificateDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetUserCertificateDetailResponse
       */
      Models::GetUserCertificateDetailResponse getUserCertificateDetailWithOptions(const Models::GetUserCertificateDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a certificate.
       *
       * @description You can call this operation up to 100 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request GetUserCertificateDetailRequest
       * @return GetUserCertificateDetailResponse
       */
      Models::GetUserCertificateDetailResponse getUserCertificateDetail(const Models::GetUserCertificateDetailRequest &request);

      /**
       * @summary Queries the certificates in a certificate repository.
       *
       * @description You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request ListCertRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCertResponse
       */
      Models::ListCertResponse listCertWithOptions(const Models::ListCertRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the certificates in a certificate repository.
       *
       * @description You can call this operation up to 10 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request ListCertRequest
       * @return ListCertResponse
       */
      Models::ListCertResponse listCert(const Models::ListCertRequest &request);

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
      Models::ListCertWarehouseResponse listCertWarehouseWithOptions(const Models::ListCertWarehouseRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::ListCertWarehouseResponse listCertWarehouse(const Models::ListCertWarehouseRequest &request);

      /**
       * @summary Queries a list of AccessKey pairs for multi-cloud deployment.
       *
       * @param request ListCloudAccessRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCloudAccessResponse
       */
      Models::ListCloudAccessResponse listCloudAccessWithOptions(const Models::ListCloudAccessRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of AccessKey pairs for multi-cloud deployment.
       *
       * @param request ListCloudAccessRequest
       * @return ListCloudAccessResponse
       */
      Models::ListCloudAccessResponse listCloudAccess(const Models::ListCloudAccessRequest &request);

      /**
       * @summary Queries the certificate resources of a cloud service provider and cloud services.
       *
       * @param tmpReq ListCloudResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCloudResourcesResponse
       */
      Models::ListCloudResourcesResponse listCloudResourcesWithOptions(const Models::ListCloudResourcesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the certificate resources of a cloud service provider and cloud services.
       *
       * @param request ListCloudResourcesRequest
       * @return ListCloudResourcesResponse
       */
      Models::ListCloudResourcesResponse listCloudResources(const Models::ListCloudResourcesRequest &request);

      /**
       * @summary Queries a list of contacts.
       *
       * @param request ListContactRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListContactResponse
       */
      Models::ListContactResponse listContactWithOptions(const Models::ListContactRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of contacts.
       *
       * @param request ListContactRequest
       * @return ListContactResponse
       */
      Models::ListContactResponse listContact(const Models::ListContactRequest &request);

      /**
       * @summary Queries certificate signing requests (CSRs).
       *
       * @param request ListCsrRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListCsrResponse
       */
      Models::ListCsrResponse listCsrWithOptions(const Models::ListCsrRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries certificate signing requests (CSRs).
       *
       * @param request ListCsrRequest
       * @return ListCsrResponse
       */
      Models::ListCsrResponse listCsr(const Models::ListCsrRequest &request);

      /**
       * @summary Queries a list of deployment tasks that are created.
       *
       * @param request ListDeploymentJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDeploymentJobResponse
       */
      Models::ListDeploymentJobResponse listDeploymentJobWithOptions(const Models::ListDeploymentJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of deployment tasks that are created.
       *
       * @param request ListDeploymentJobRequest
       * @return ListDeploymentJobResponse
       */
      Models::ListDeploymentJobResponse listDeploymentJob(const Models::ListDeploymentJobRequest &request);

      /**
       * @summary Queries the basic information about a deployment task. After you create a deployment task, you can call this operation to obtain the basic information about the deployment task, including the instance ID, type, and name of the certificate.
       *
       * @param request ListDeploymentJobCertRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDeploymentJobCertResponse
       */
      Models::ListDeploymentJobCertResponse listDeploymentJobCertWithOptions(const Models::ListDeploymentJobCertRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the basic information about a deployment task. After you create a deployment task, you can call this operation to obtain the basic information about the deployment task, including the instance ID, type, and name of the certificate.
       *
       * @param request ListDeploymentJobCertRequest
       * @return ListDeploymentJobCertResponse
       */
      Models::ListDeploymentJobCertResponse listDeploymentJobCert(const Models::ListDeploymentJobCertRequest &request);

      /**
       * @summary Queries the cloud resources of cloud services in a deployment task.
       *
       * @param request ListDeploymentJobResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDeploymentJobResourceResponse
       */
      Models::ListDeploymentJobResourceResponse listDeploymentJobResourceWithOptions(const Models::ListDeploymentJobResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the cloud resources of cloud services in a deployment task.
       *
       * @param request ListDeploymentJobResourceRequest
       * @return ListDeploymentJobResourceResponse
       */
      Models::ListDeploymentJobResourceResponse listDeploymentJobResource(const Models::ListDeploymentJobResourceRequest &request);

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
      Models::ListUserCertificateOrderResponse listUserCertificateOrderWithOptions(const Models::ListUserCertificateOrderRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::ListUserCertificateOrderResponse listUserCertificateOrder(const Models::ListUserCertificateOrderRequest &request);

      /**
       * @summary Queries the details about the worker tasks of a deployment task. Alibaba Cloud allows you to deploy multiple certificates at a time. Therefore, a deployment task may include multiple worker tasks in multiple cloud services. A worker task refers to a task that deploys a certificate to a cloud resource in a cloud service.
       *
       * @param request ListWorkerResourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListWorkerResourceResponse
       */
      Models::ListWorkerResourceResponse listWorkerResourceWithOptions(const Models::ListWorkerResourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details about the worker tasks of a deployment task. Alibaba Cloud allows you to deploy multiple certificates at a time. Therefore, a deployment task may include multiple worker tasks in multiple cloud services. A worker task refers to a task that deploys a certificate to a cloud resource in a cloud service.
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
       * @summary Submits a renewal application for an issued certificate.
       *
       * @description You can call the RenewCertificateOrderForPackageRequest operation to submit a renewal application for a certificate only when the order of the certificate is in the expiring state. After the renewal is complete, a new certificate order whose status is pending application is generated. You must submit a certificate application for the new certificate order and install the new certificate after the new certificate is issued.
       * >  You can call the [DescribeCertificateState](https://help.aliyun.com/document_detail/164111.html) operation to query the status of a certificate application order. If the value of the **Type** response parameter is **certificate**, the certificate is issued.
       *
       * @param request RenewCertificateOrderForPackageRequestRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RenewCertificateOrderForPackageRequestResponse
       */
      Models::RenewCertificateOrderForPackageRequestResponse renewCertificateOrderForPackageRequestWithOptions(const Models::RenewCertificateOrderForPackageRequestRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a renewal application for an issued certificate.
       *
       * @description You can call the RenewCertificateOrderForPackageRequest operation to submit a renewal application for a certificate only when the order of the certificate is in the expiring state. After the renewal is complete, a new certificate order whose status is pending application is generated. You must submit a certificate application for the new certificate order and install the new certificate after the new certificate is issued.
       * >  You can call the [DescribeCertificateState](https://help.aliyun.com/document_detail/164111.html) operation to query the status of a certificate application order. If the value of the **Type** response parameter is **certificate**, the certificate is issued.
       *
       * @param request RenewCertificateOrderForPackageRequestRequest
       * @return RenewCertificateOrderForPackageRequestResponse
       */
      Models::RenewCertificateOrderForPackageRequestResponse renewCertificateOrderForPackageRequest(const Models::RenewCertificateOrderForPackageRequestRequest &request);

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
      Models::SignResponse signWithOptions(const Models::SignRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::SignResponse sign(const Models::SignRequest &request);

      /**
       * @summary Updates the private key of a certificate signing request (CSR).
       *
       * @param request UpdateCsrRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCsrResponse
       */
      Models::UpdateCsrResponse updateCsrWithOptions(const Models::UpdateCsrRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the private key of a certificate signing request (CSR).
       *
       * @param request UpdateCsrRequest
       * @return UpdateCsrResponse
       */
      Models::UpdateCsrResponse updateCsr(const Models::UpdateCsrRequest &request);

      /**
       * @summary Updates a deployment task.
       *
       * @param request UpdateDeploymentJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDeploymentJobResponse
       */
      Models::UpdateDeploymentJobResponse updateDeploymentJobWithOptions(const Models::UpdateDeploymentJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a deployment task.
       *
       * @param request UpdateDeploymentJobRequest
       * @return UpdateDeploymentJobResponse
       */
      Models::UpdateDeploymentJobResponse updateDeploymentJob(const Models::UpdateDeploymentJobRequest &request);

      /**
       * @summary Updates the status of a deployment task.
       *
       * @param request UpdateDeploymentJobStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDeploymentJobStatusResponse
       */
      Models::UpdateDeploymentJobStatusResponse updateDeploymentJobStatusWithOptions(const Models::UpdateDeploymentJobStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the status of a deployment task.
       *
       * @param request UpdateDeploymentJobStatusRequest
       * @return UpdateDeploymentJobStatusResponse
       */
      Models::UpdateDeploymentJobStatusResponse updateDeploymentJobStatus(const Models::UpdateDeploymentJobStatusRequest &request);

      /**
       * @summary Rolls back or executes a worker task in a deployment task.
       *
       * @param request UpdateWorkerResourceStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateWorkerResourceStatusResponse
       */
      Models::UpdateWorkerResourceStatusResponse updateWorkerResourceStatusWithOptions(const Models::UpdateWorkerResourceStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Rolls back or executes a worker task in a deployment task.
       *
       * @param request UpdateWorkerResourceStatusRequest
       * @return UpdateWorkerResourceStatusResponse
       */
      Models::UpdateWorkerResourceStatusResponse updateWorkerResourceStatus(const Models::UpdateWorkerResourceStatusRequest &request);

      /**
       * @summary Uploads a certificate signing request (CSR) file
       *
       * @param request UploadCsrRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UploadCsrResponse
       */
      Models::UploadCsrResponse uploadCsrWithOptions(const Models::UploadCsrRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Uploads a certificate signing request (CSR) file
       *
       * @param request UploadCsrRequest
       * @return UploadCsrResponse
       */
      Models::UploadCsrResponse uploadCsr(const Models::UploadCsrRequest &request);

      /**
       * @summary Uploads a certificate.
       *
       * @description You can call this operation up to 100 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request UploadUserCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UploadUserCertificateResponse
       */
      Models::UploadUserCertificateResponse uploadUserCertificateWithOptions(const Models::UploadUserCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Uploads a certificate.
       *
       * @description You can call this operation up to 100 times per second per account. If the number of the calls per second exceeds the limit, throttling is triggered. As a result, your business may be affected. We recommend that you take note of the limit when you call this operation.
       *
       * @param request UploadUserCertificateRequest
       * @return UploadUserCertificateResponse
       */
      Models::UploadUserCertificateResponse uploadUserCertificate(const Models::UploadUserCertificateRequest &request);

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
      Models::VerifyResponse verifyWithOptions(const Models::VerifyRequest &request, const Darabonba::RuntimeOptions &runtime);

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
      Models::VerifyResponse verify(const Models::VerifyRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif
