// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_DCDN20180115_HPP_
#define ALIBABACLOUD_DCDN20180115_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Dcdn20180115Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Dcdn20180115.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);

      Darabonba::Json _postOSSObject(const string &bucketName, const Darabonba::Json &form);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Adds a domain name to accelerate. You can specify only one domain name in each request.
       *
       * @description > *   Dynamic Content Delivery Network (DCDN) is activated.
       * > *   Internet content provider (ICP) filing is complete for the accelerated domain name.
       * > *   If the content of the origin server is not stored on Alibaba Cloud, the content must be reviewed. After you submit the request, the review is complete by the end of the following business day.
       * > *   You can call this operation up to 30 times per second per account.
       *
       * @param request AddDcdnDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddDcdnDomainResponse
       */
      Models::AddDcdnDomainResponse addDcdnDomainWithOptions(const Models::AddDcdnDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a domain name to accelerate. You can specify only one domain name in each request.
       *
       * @description > *   Dynamic Content Delivery Network (DCDN) is activated.
       * > *   Internet content provider (ICP) filing is complete for the accelerated domain name.
       * > *   If the content of the origin server is not stored on Alibaba Cloud, the content must be reviewed. After you submit the request, the review is complete by the end of the following business day.
       * > *   You can call this operation up to 30 times per second per account.
       *
       * @param request AddDcdnDomainRequest
       * @return AddDcdnDomainResponse
       */
      Models::AddDcdnDomainResponse addDcdnDomain(const Models::AddDcdnDomainRequest &request);

      /**
       * @summary Adds a domain name to IPA. You can specify only one domain name in each request.
       *
       * @description > 
       * *   Make sure that the IPA service is activated before you add a domain name to accelerate.
       * *   Make sure that the Internet content provider (ICP) filling is complete for the domain name to accelerate.
       * *   If the content on the origin server is not stored on Alibaba Cloud, the content must be reviewed. The review is complete by the end of the next business day after you submit the request.
       * *   You can call this operation up to 10 times per second per user.
       *
       * @param request AddDcdnIpaDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddDcdnIpaDomainResponse
       */
      Models::AddDcdnIpaDomainResponse addDcdnIpaDomainWithOptions(const Models::AddDcdnIpaDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a domain name to IPA. You can specify only one domain name in each request.
       *
       * @description > 
       * *   Make sure that the IPA service is activated before you add a domain name to accelerate.
       * *   Make sure that the Internet content provider (ICP) filling is complete for the domain name to accelerate.
       * *   If the content on the origin server is not stored on Alibaba Cloud, the content must be reviewed. The review is complete by the end of the next business day after you submit the request.
       * *   You can call this operation up to 10 times per second per user.
       *
       * @param request AddDcdnIpaDomainRequest
       * @return AddDcdnIpaDomainResponse
       */
      Models::AddDcdnIpaDomainResponse addDcdnIpaDomain(const Models::AddDcdnIpaDomainRequest &request);

      /**
       * @summary Adds one or more domain names to DCDN at a time.
       *
       * @description **Prerequisites**:
       * *   The [DCDN service is activated](https://help.aliyun.com/document_detail/64926.html).
       * *   Internet content provider (ICP) filing is complete for the accelerated domain names.
       * > *   If the content of the origin server is not stored on Alibaba Cloud, the content must be reviewed. After you submit the request, the review is complete by the end of the following business day.
       * >*   You can specify up to 50 domain names in each request.
       * >*   You can call this operation up to 30 times per second per account.
       *
       * @param request BatchAddDcdnDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchAddDcdnDomainResponse
       */
      Models::BatchAddDcdnDomainResponse batchAddDcdnDomainWithOptions(const Models::BatchAddDcdnDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds one or more domain names to DCDN at a time.
       *
       * @description **Prerequisites**:
       * *   The [DCDN service is activated](https://help.aliyun.com/document_detail/64926.html).
       * *   Internet content provider (ICP) filing is complete for the accelerated domain names.
       * > *   If the content of the origin server is not stored on Alibaba Cloud, the content must be reviewed. After you submit the request, the review is complete by the end of the following business day.
       * >*   You can specify up to 50 domain names in each request.
       * >*   You can call this operation up to 30 times per second per account.
       *
       * @param request BatchAddDcdnDomainRequest
       * @return BatchAddDcdnDomainResponse
       */
      Models::BatchAddDcdnDomainResponse batchAddDcdnDomain(const Models::BatchAddDcdnDomainRequest &request);

      /**
       * @summary Creates Web Application Firewall (WAF) protection rules.
       *
       * @description >  You can call this operation up to 20 times per second per account.
       *
       * @param request BatchCreateDcdnWafRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchCreateDcdnWafRulesResponse
       */
      Models::BatchCreateDcdnWafRulesResponse batchCreateDcdnWafRulesWithOptions(const Models::BatchCreateDcdnWafRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates Web Application Firewall (WAF) protection rules.
       *
       * @description >  You can call this operation up to 20 times per second per account.
       *
       * @param request BatchCreateDcdnWafRulesRequest
       * @return BatchCreateDcdnWafRulesResponse
       */
      Models::BatchCreateDcdnWafRulesResponse batchCreateDcdnWafRules(const Models::BatchCreateDcdnWafRulesRequest &request);

      /**
       * @summary Deletes configurations of multiple accelerated domain names at a time.
       *
       * @description > - You can specify up to 50 domain names in each request.
       * > - You can call this operation up to 30 times per second per account.
       *
       * @param request BatchDeleteDcdnDomainConfigsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchDeleteDcdnDomainConfigsResponse
       */
      Models::BatchDeleteDcdnDomainConfigsResponse batchDeleteDcdnDomainConfigsWithOptions(const Models::BatchDeleteDcdnDomainConfigsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes configurations of multiple accelerated domain names at a time.
       *
       * @description > - You can specify up to 50 domain names in each request.
       * > - You can call this operation up to 30 times per second per account.
       *
       * @param request BatchDeleteDcdnDomainConfigsRequest
       * @return BatchDeleteDcdnDomainConfigsResponse
       */
      Models::BatchDeleteDcdnDomainConfigsResponse batchDeleteDcdnDomainConfigs(const Models::BatchDeleteDcdnDomainConfigsRequest &request);

      /**
       * @summary 批量删除kv数据，支持最大2M的请求体
       *
       * @param tmpReq BatchDeleteDcdnKvRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchDeleteDcdnKvResponse
       */
      Models::BatchDeleteDcdnKvResponse batchDeleteDcdnKvWithOptions(const Models::BatchDeleteDcdnKvRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量删除kv数据，支持最大2M的请求体
       *
       * @param request BatchDeleteDcdnKvRequest
       * @return BatchDeleteDcdnKvResponse
       */
      Models::BatchDeleteDcdnKvResponse batchDeleteDcdnKv(const Models::BatchDeleteDcdnKvRequest &request);

      /**
       * @summary 批量删除kv数据，支持最大100M的请求体
       *
       * @param request BatchDeleteDcdnKvWithHighCapacityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchDeleteDcdnKvWithHighCapacityResponse
       */
      Models::BatchDeleteDcdnKvWithHighCapacityResponse batchDeleteDcdnKvWithHighCapacityWithOptions(const Models::BatchDeleteDcdnKvWithHighCapacityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量删除kv数据，支持最大100M的请求体
       *
       * @param request BatchDeleteDcdnKvWithHighCapacityRequest
       * @return BatchDeleteDcdnKvWithHighCapacityResponse
       */
      Models::BatchDeleteDcdnKvWithHighCapacityResponse batchDeleteDcdnKvWithHighCapacity(const Models::BatchDeleteDcdnKvWithHighCapacityRequest &request);

      Models::BatchDeleteDcdnKvWithHighCapacityResponse batchDeleteDcdnKvWithHighCapacityAdvance(const Models::BatchDeleteDcdnKvWithHighCapacityAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes multiple Web Application Firewall (WAF) protection rules at a time.
       *
       * @description *   You can call this operation up to 20 times per second per account.
       * *   Alibaba Cloud Dynamic Content Delivery Network (DCDN) supports POST requests.
       *
       * @param request BatchDeleteDcdnWafRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchDeleteDcdnWafRulesResponse
       */
      Models::BatchDeleteDcdnWafRulesResponse batchDeleteDcdnWafRulesWithOptions(const Models::BatchDeleteDcdnWafRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes multiple Web Application Firewall (WAF) protection rules at a time.
       *
       * @description *   You can call this operation up to 20 times per second per account.
       * *   Alibaba Cloud Dynamic Content Delivery Network (DCDN) supports POST requests.
       *
       * @param request BatchDeleteDcdnWafRulesRequest
       * @return BatchDeleteDcdnWafRulesResponse
       */
      Models::BatchDeleteDcdnWafRulesResponse batchDeleteDcdnWafRules(const Models::BatchDeleteDcdnWafRulesRequest &request);

      /**
       * @summary Modifies multiple Web Application Firewall (WAF) protection rules. Only Bot management rules can be modified.
       *
       * @description You can call this operation up to 20 times per second per account.
       *
       * @param request BatchModifyDcdnWafRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchModifyDcdnWafRulesResponse
       */
      Models::BatchModifyDcdnWafRulesResponse batchModifyDcdnWafRulesWithOptions(const Models::BatchModifyDcdnWafRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies multiple Web Application Firewall (WAF) protection rules. Only Bot management rules can be modified.
       *
       * @description You can call this operation up to 20 times per second per account.
       *
       * @param request BatchModifyDcdnWafRulesRequest
       * @return BatchModifyDcdnWafRulesResponse
       */
      Models::BatchModifyDcdnWafRulesResponse batchModifyDcdnWafRules(const Models::BatchModifyDcdnWafRulesRequest &request);

      /**
       * @summary Configures multiple key-value (KV) pairs for a namespace.
       *
       * @param tmpReq BatchPutDcdnKvRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchPutDcdnKvResponse
       */
      Models::BatchPutDcdnKvResponse batchPutDcdnKvWithOptions(const Models::BatchPutDcdnKvRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures multiple key-value (KV) pairs for a namespace.
       *
       * @param request BatchPutDcdnKvRequest
       * @return BatchPutDcdnKvResponse
       */
      Models::BatchPutDcdnKvResponse batchPutDcdnKv(const Models::BatchPutDcdnKvRequest &request);

      /**
       * @summary 批量写入kv数据，支持最大100M的请求体
       *
       * @param request BatchPutDcdnKvWithHighCapacityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchPutDcdnKvWithHighCapacityResponse
       */
      Models::BatchPutDcdnKvWithHighCapacityResponse batchPutDcdnKvWithHighCapacityWithOptions(const Models::BatchPutDcdnKvWithHighCapacityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量写入kv数据，支持最大100M的请求体
       *
       * @param request BatchPutDcdnKvWithHighCapacityRequest
       * @return BatchPutDcdnKvWithHighCapacityResponse
       */
      Models::BatchPutDcdnKvWithHighCapacityResponse batchPutDcdnKvWithHighCapacity(const Models::BatchPutDcdnKvWithHighCapacityRequest &request);

      Models::BatchPutDcdnKvWithHighCapacityResponse batchPutDcdnKvWithHighCapacityAdvance(const Models::BatchPutDcdnKvWithHighCapacityAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures features for one or more domain names.
       *
       * @description *   You can specify up to 50 domain names in each request.
       * *   You can call this operation up to 30 times per second per account.
       *
       * @param request BatchSetDcdnDomainConfigsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchSetDcdnDomainConfigsResponse
       */
      Models::BatchSetDcdnDomainConfigsResponse batchSetDcdnDomainConfigsWithOptions(const Models::BatchSetDcdnDomainConfigsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures features for one or more domain names.
       *
       * @description *   You can specify up to 50 domain names in each request.
       * *   You can call this operation up to 30 times per second per account.
       *
       * @param request BatchSetDcdnDomainConfigsRequest
       * @return BatchSetDcdnDomainConfigsResponse
       */
      Models::BatchSetDcdnDomainConfigsResponse batchSetDcdnDomainConfigs(const Models::BatchSetDcdnDomainConfigsRequest &request);

      /**
       * @summary Configures multiple domain names to be accelerated by IP Application Accelerator (IPA).
       *
       * @description > You can call this operation up to 20 times per second per account.
       *
       * @param request BatchSetDcdnIpaDomainConfigsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchSetDcdnIpaDomainConfigsResponse
       */
      Models::BatchSetDcdnIpaDomainConfigsResponse batchSetDcdnIpaDomainConfigsWithOptions(const Models::BatchSetDcdnIpaDomainConfigsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures multiple domain names to be accelerated by IP Application Accelerator (IPA).
       *
       * @description > You can call this operation up to 20 times per second per account.
       *
       * @param request BatchSetDcdnIpaDomainConfigsRequest
       * @return BatchSetDcdnIpaDomainConfigsResponse
       */
      Models::BatchSetDcdnIpaDomainConfigsResponse batchSetDcdnIpaDomainConfigs(const Models::BatchSetDcdnIpaDomainConfigsRequest &request);

      /**
       * @summary Sets the protection status of multiple domain names at a time.
       *
       * @description #
       * *   You can call this operation up to 20 times per second.
       * *   Alibaba Cloud Dynamic Content Delivery Network (DCDN) supports POST requests.
       *
       * @param request BatchSetDcdnWafDomainConfigsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchSetDcdnWafDomainConfigsResponse
       */
      Models::BatchSetDcdnWafDomainConfigsResponse batchSetDcdnWafDomainConfigsWithOptions(const Models::BatchSetDcdnWafDomainConfigsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets the protection status of multiple domain names at a time.
       *
       * @description #
       * *   You can call this operation up to 20 times per second.
       * *   Alibaba Cloud Dynamic Content Delivery Network (DCDN) supports POST requests.
       *
       * @param request BatchSetDcdnWafDomainConfigsRequest
       * @return BatchSetDcdnWafDomainConfigsResponse
       */
      Models::BatchSetDcdnWafDomainConfigsResponse batchSetDcdnWafDomainConfigs(const Models::BatchSetDcdnWafDomainConfigsRequest &request);

      /**
       * @summary Enables one or more accelerated domain names. After the accelerated domain names are enabled, the value of the DomainStatus parameter for the domain names changes to Online.
       *
       * @description > 
       * *   If an accelerated domain name is in an invalid state or your account has an overdue payment, the accelerated domain name cannot be enabled.
       * *   You can specify up to 50 domain names in each request.
       * *   You can call this operation up to 30 times per second per account.
       *
       * @param request BatchStartDcdnDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchStartDcdnDomainResponse
       */
      Models::BatchStartDcdnDomainResponse batchStartDcdnDomainWithOptions(const Models::BatchStartDcdnDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables one or more accelerated domain names. After the accelerated domain names are enabled, the value of the DomainStatus parameter for the domain names changes to Online.
       *
       * @description > 
       * *   If an accelerated domain name is in an invalid state or your account has an overdue payment, the accelerated domain name cannot be enabled.
       * *   You can specify up to 50 domain names in each request.
       * *   You can call this operation up to 30 times per second per account.
       *
       * @param request BatchStartDcdnDomainRequest
       * @return BatchStartDcdnDomainResponse
       */
      Models::BatchStartDcdnDomainResponse batchStartDcdnDomain(const Models::BatchStartDcdnDomainRequest &request);

      /**
       * @summary Disables one or more accelerated domain names. After an accelerated domain name is disabled, the value of the DomainStatus parameter for the domain name changes to Offline.
       *
       * @description > *   After an accelerated domain name is disabled, Dynamic Content Delivery Network (DCDN) retains the domain name information. The system automatically reroutes all requests that are destined for the accelerated domain name to the origin.
       * >*   You can specify up to 50 domain names in each request.
       * >*   You can call this operation up to 30 times per second per account.
       *
       * @param request BatchStopDcdnDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchStopDcdnDomainResponse
       */
      Models::BatchStopDcdnDomainResponse batchStopDcdnDomainWithOptions(const Models::BatchStopDcdnDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables one or more accelerated domain names. After an accelerated domain name is disabled, the value of the DomainStatus parameter for the domain name changes to Offline.
       *
       * @description > *   After an accelerated domain name is disabled, Dynamic Content Delivery Network (DCDN) retains the domain name information. The system automatically reroutes all requests that are destined for the accelerated domain name to the origin.
       * >*   You can specify up to 50 domain names in each request.
       * >*   You can call this operation up to 30 times per second per account.
       *
       * @param request BatchStopDcdnDomainRequest
       * @return BatchStopDcdnDomainResponse
       */
      Models::BatchStopDcdnDomainResponse batchStopDcdnDomain(const Models::BatchStopDcdnDomainRequest &request);

      /**
       * @summary Checks whether a real-time log delivery project exists.
       *
       * @description > You can call this operation up to 100 times per second per account.
       *
       * @param request CheckDcdnProjectExistRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckDcdnProjectExistResponse
       */
      Models::CheckDcdnProjectExistResponse checkDcdnProjectExistWithOptions(const Models::CheckDcdnProjectExistRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks whether a real-time log delivery project exists.
       *
       * @description > You can call this operation up to 100 times per second per account.
       *
       * @param request CheckDcdnProjectExistRequest
       * @return CheckDcdnProjectExistResponse
       */
      Models::CheckDcdnProjectExistResponse checkDcdnProjectExist(const Models::CheckDcdnProjectExistRequest &request);

      /**
       * @summary Generates an official code version from unstable JavaScript code that is in the staging
       *                   environment. The version can be used in the canary release or production environment.
       *
       * @description >  The call frequency of the API is no more than 100 queries per second.
       *
       * @param request CommitStagingRoutineCodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CommitStagingRoutineCodeResponse
       */
      Models::CommitStagingRoutineCodeResponse commitStagingRoutineCodeWithOptions(const Models::CommitStagingRoutineCodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Generates an official code version from unstable JavaScript code that is in the staging
       *                   environment. The version can be used in the canary release or production environment.
       *
       * @description >  The call frequency of the API is no more than 100 queries per second.
       *
       * @param request CommitStagingRoutineCodeRequest
       * @return CommitStagingRoutineCodeResponse
       */
      Models::CommitStagingRoutineCodeResponse commitStagingRoutineCode(const Models::CommitStagingRoutineCodeRequest &request);

      /**
       * @summary Creates a certificate signing request (CSR) file.
       *
       * @param request CreateDcdnCertificateSigningRequestRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDcdnCertificateSigningRequestResponse
       */
      Models::CreateDcdnCertificateSigningRequestResponse createDcdnCertificateSigningRequestWithOptions(const Models::CreateDcdnCertificateSigningRequestRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a certificate signing request (CSR) file.
       *
       * @param request CreateDcdnCertificateSigningRequestRequest
       * @return CreateDcdnCertificateSigningRequestResponse
       */
      Models::CreateDcdnCertificateSigningRequestResponse createDcdnCertificateSigningRequest(const Models::CreateDcdnCertificateSigningRequestRequest &request);

      /**
       * @summary Creates a tracking task. After you create a tracking task, the system periodically sends operations reports to you by email.
       *
       * @description **
       * **You can call this operation up to three times per second.
       *
       * @param request CreateDcdnDeliverTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDcdnDeliverTaskResponse
       */
      Models::CreateDcdnDeliverTaskResponse createDcdnDeliverTaskWithOptions(const Models::CreateDcdnDeliverTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a tracking task. After you create a tracking task, the system periodically sends operations reports to you by email.
       *
       * @description **
       * **You can call this operation up to three times per second.
       *
       * @param request CreateDcdnDeliverTaskRequest
       * @return CreateDcdnDeliverTaskResponse
       */
      Models::CreateDcdnDeliverTaskResponse createDcdnDeliverTask(const Models::CreateDcdnDeliverTaskRequest &request);

      /**
       * @summary Creates a real-time log delivery project.
       *
       * @description > You can call this operation up to 100 times per second per account.
       *
       * @param request CreateDcdnSLSRealTimeLogDeliveryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDcdnSLSRealTimeLogDeliveryResponse
       */
      Models::CreateDcdnSLSRealTimeLogDeliveryResponse createDcdnSLSRealTimeLogDeliveryWithOptions(const Models::CreateDcdnSLSRealTimeLogDeliveryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a real-time log delivery project.
       *
       * @description > You can call this operation up to 100 times per second per account.
       *
       * @param request CreateDcdnSLSRealTimeLogDeliveryRequest
       * @return CreateDcdnSLSRealTimeLogDeliveryResponse
       */
      Models::CreateDcdnSLSRealTimeLogDeliveryResponse createDcdnSLSRealTimeLogDelivery(const Models::CreateDcdnSLSRealTimeLogDeliveryRequest &request);

      /**
       * @summary Creates a custom operations report.
       *
       * @description > *   This operation allows you to create a custom operations report for a specific domain name. You can view the statistics about the domain name in the report.
       * > *   You can call this operation up to three times per second per account.
       *
       * @param request CreateDcdnSubTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDcdnSubTaskResponse
       */
      Models::CreateDcdnSubTaskResponse createDcdnSubTaskWithOptions(const Models::CreateDcdnSubTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a custom operations report.
       *
       * @description > *   This operation allows you to create a custom operations report for a specific domain name. You can view the statistics about the domain name in the report.
       * > *   You can call this operation up to three times per second per account.
       *
       * @param request CreateDcdnSubTaskRequest
       * @return CreateDcdnSubTaskResponse
       */
      Models::CreateDcdnSubTaskResponse createDcdnSubTask(const Models::CreateDcdnSubTaskRequest &request);

      /**
       * @summary Create a custom WAF rule group.
       *
       * @param request CreateDcdnWafGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDcdnWafGroupResponse
       */
      Models::CreateDcdnWafGroupResponse createDcdnWafGroupWithOptions(const Models::CreateDcdnWafGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create a custom WAF rule group.
       *
       * @param request CreateDcdnWafGroupRequest
       * @return CreateDcdnWafGroupResponse
       */
      Models::CreateDcdnWafGroupResponse createDcdnWafGroup(const Models::CreateDcdnWafGroupRequest &request);

      /**
       * @summary Creates a Web Application Firewall (WAF) protection policy.
       *
       * @description *   You can call this operation up to 20 times per second per user.
       * *   Alibaba Cloud Dynamic Route for CDN (DCDN) supports POST requests.
       *
       * @param request CreateDcdnWafPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateDcdnWafPolicyResponse
       */
      Models::CreateDcdnWafPolicyResponse createDcdnWafPolicyWithOptions(const Models::CreateDcdnWafPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a Web Application Firewall (WAF) protection policy.
       *
       * @description *   You can call this operation up to 20 times per second per user.
       * *   Alibaba Cloud Dynamic Route for CDN (DCDN) supports POST requests.
       *
       * @param request CreateDcdnWafPolicyRequest
       * @return CreateDcdnWafPolicyResponse
       */
      Models::CreateDcdnWafPolicyResponse createDcdnWafPolicy(const Models::CreateDcdnWafPolicyRequest &request);

      /**
       * @summary Creates a routine.
       *
       * @description > *   The parameters must comply with the rules of EnvConf. The description of a routine cannot exceed 50 characters in length.
       * >*   You can only specify the production and staging environments when you call this operation.
       * >*   You can call this operation up to 100 times per second per account.
       *
       * @param tmpReq CreateRoutineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRoutineResponse
       */
      Models::CreateRoutineResponse createRoutineWithOptions(const Models::CreateRoutineRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a routine.
       *
       * @description > *   The parameters must comply with the rules of EnvConf. The description of a routine cannot exceed 50 characters in length.
       * >*   You can only specify the production and staging environments when you call this operation.
       * >*   You can call this operation up to 100 times per second per account.
       *
       * @param request CreateRoutineRequest
       * @return CreateRoutineResponse
       */
      Models::CreateRoutineResponse createRoutine(const Models::CreateRoutineRequest &request);

      /**
       * @summary Creates a service-linked role (SLR) and a Log Service project.
       *
       * @description >  You can call this operation up to 100 times per second per account.
       *
       * @param request CreateSlrAndSlsProjectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSlrAndSlsProjectResponse
       */
      Models::CreateSlrAndSlsProjectResponse createSlrAndSlsProjectWithOptions(const Models::CreateSlrAndSlsProjectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a service-linked role (SLR) and a Log Service project.
       *
       * @description >  You can call this operation up to 100 times per second per account.
       *
       * @param request CreateSlrAndSlsProjectRequest
       * @return CreateSlrAndSlsProjectResponse
       */
      Models::CreateSlrAndSlsProjectResponse createSlrAndSlsProject(const Models::CreateSlrAndSlsProjectRequest &request);

      /**
       * @summary A客户定制实时日志删除接口
       *
       * @param request DeleteCustomDomainSampleRateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCustomDomainSampleRateResponse
       */
      Models::DeleteCustomDomainSampleRateResponse deleteCustomDomainSampleRateWithOptions(const Models::DeleteCustomDomainSampleRateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary A客户定制实时日志删除接口
       *
       * @param request DeleteCustomDomainSampleRateRequest
       * @return DeleteCustomDomainSampleRateResponse
       */
      Models::DeleteCustomDomainSampleRateResponse deleteCustomDomainSampleRate(const Models::DeleteCustomDomainSampleRateRequest &request);

      /**
       * @summary Deletes tracking tasks by task ID.
       *
       * @description >  The maximum number of times that each user can call this operation per second is 3.
       *
       * @param request DeleteDcdnDeliverTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDcdnDeliverTaskResponse
       */
      Models::DeleteDcdnDeliverTaskResponse deleteDcdnDeliverTaskWithOptions(const Models::DeleteDcdnDeliverTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes tracking tasks by task ID.
       *
       * @description >  The maximum number of times that each user can call this operation per second is 3.
       *
       * @param request DeleteDcdnDeliverTaskRequest
       * @return DeleteDcdnDeliverTaskResponse
       */
      Models::DeleteDcdnDeliverTaskResponse deleteDcdnDeliverTask(const Models::DeleteDcdnDeliverTaskRequest &request);

      /**
       * @summary Deletes a specified accelerated domain name.
       *
       * @description > *   Before you delete your domain name, you need to request the Domain Name System (DNS) provider to restore the A record of the domain name. Otherwise, the domain name may become inaccessible after you delete it.
       * > *   If you call the **DeleteDcdnDomain** operation, all the information about the accelerated domain name is deleted. If you want to disable an accelerated domain name, call the [StopDcdnDomain](https://help.aliyun.com/document_detail/130622.html) operation.
       * > *   You can call this operation up to 10 times per second per account.
       *
       * @param request DeleteDcdnDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDcdnDomainResponse
       */
      Models::DeleteDcdnDomainResponse deleteDcdnDomainWithOptions(const Models::DeleteDcdnDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified accelerated domain name.
       *
       * @description > *   Before you delete your domain name, you need to request the Domain Name System (DNS) provider to restore the A record of the domain name. Otherwise, the domain name may become inaccessible after you delete it.
       * > *   If you call the **DeleteDcdnDomain** operation, all the information about the accelerated domain name is deleted. If you want to disable an accelerated domain name, call the [StopDcdnDomain](https://help.aliyun.com/document_detail/130622.html) operation.
       * > *   You can call this operation up to 10 times per second per account.
       *
       * @param request DeleteDcdnDomainRequest
       * @return DeleteDcdnDomainResponse
       */
      Models::DeleteDcdnDomainResponse deleteDcdnDomain(const Models::DeleteDcdnDomainRequest &request);

      /**
       * @summary Deletes an accelerated domain name from IP Application Accelerator (IPA).
       *
       * @description > 
       * *   Before you delete your domain name, we recommend that you request the Domain Name System (DNS) provider to restore the A record of the domain name. Otherwise, the domain name may become inaccessible after you delete it.
       * *   This operation deletes all records of the specified accelerated domain name. If you want to temporarily disable an accelerated domain name, call the **StopDcdnIpaDomain** operation.****
       * *   You can call this operation up to 10 times per second per account.
       *
       * @param request DeleteDcdnIpaDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDcdnIpaDomainResponse
       */
      Models::DeleteDcdnIpaDomainResponse deleteDcdnIpaDomainWithOptions(const Models::DeleteDcdnIpaDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an accelerated domain name from IP Application Accelerator (IPA).
       *
       * @description > 
       * *   Before you delete your domain name, we recommend that you request the Domain Name System (DNS) provider to restore the A record of the domain name. Otherwise, the domain name may become inaccessible after you delete it.
       * *   This operation deletes all records of the specified accelerated domain name. If you want to temporarily disable an accelerated domain name, call the **StopDcdnIpaDomain** operation.****
       * *   You can call this operation up to 10 times per second per account.
       *
       * @param request DeleteDcdnIpaDomainRequest
       * @return DeleteDcdnIpaDomainResponse
       */
      Models::DeleteDcdnIpaDomainResponse deleteDcdnIpaDomain(const Models::DeleteDcdnIpaDomainRequest &request);

      /**
       * @summary Deletes specific configurations of an accelerated domain name from IP Application Accelerator (IPA).
       *
       * @description > You can call this operation up to 10 times per second per account.
       *
       * @param request DeleteDcdnIpaSpecificConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDcdnIpaSpecificConfigResponse
       */
      Models::DeleteDcdnIpaSpecificConfigResponse deleteDcdnIpaSpecificConfigWithOptions(const Models::DeleteDcdnIpaSpecificConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes specific configurations of an accelerated domain name from IP Application Accelerator (IPA).
       *
       * @description > You can call this operation up to 10 times per second per account.
       *
       * @param request DeleteDcdnIpaSpecificConfigRequest
       * @return DeleteDcdnIpaSpecificConfigResponse
       */
      Models::DeleteDcdnIpaSpecificConfigResponse deleteDcdnIpaSpecificConfig(const Models::DeleteDcdnIpaSpecificConfigRequest &request);

      /**
       * @summary Deletes the key-value pairs in a namespace that you specify when you call the PutDcdnKvNamespace operation. EdgeKV provides a global key-value database for Dynamic Route for CDN (DCDN) points of presence (POPs).
       *
       * @param request DeleteDcdnKvRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDcdnKvResponse
       */
      Models::DeleteDcdnKvResponse deleteDcdnKvWithOptions(const Models::DeleteDcdnKvRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the key-value pairs in a namespace that you specify when you call the PutDcdnKvNamespace operation. EdgeKV provides a global key-value database for Dynamic Route for CDN (DCDN) points of presence (POPs).
       *
       * @param request DeleteDcdnKvRequest
       * @return DeleteDcdnKvResponse
       */
      Models::DeleteDcdnKvResponse deleteDcdnKv(const Models::DeleteDcdnKvRequest &request);

      /**
       * @summary Deletes a namespace that belongs to your account.
       *
       * @param request DeleteDcdnKvNamespaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDcdnKvNamespaceResponse
       */
      Models::DeleteDcdnKvNamespaceResponse deleteDcdnKvNamespaceWithOptions(const Models::DeleteDcdnKvNamespaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a namespace that belongs to your account.
       *
       * @param request DeleteDcdnKvNamespaceRequest
       * @return DeleteDcdnKvNamespaceResponse
       */
      Models::DeleteDcdnKvNamespaceResponse deleteDcdnKvNamespace(const Models::DeleteDcdnKvNamespaceRequest &request);

      /**
       * @summary The ID of the request.
       *
       * @description >  You can call this operation up to 100 times per second per account.
       *
       * @param request DeleteDcdnRealTimeLogProjectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDcdnRealTimeLogProjectResponse
       */
      Models::DeleteDcdnRealTimeLogProjectResponse deleteDcdnRealTimeLogProjectWithOptions(const Models::DeleteDcdnRealTimeLogProjectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The ID of the request.
       *
       * @description >  You can call this operation up to 100 times per second per account.
       *
       * @param request DeleteDcdnRealTimeLogProjectRequest
       * @return DeleteDcdnRealTimeLogProjectResponse
       */
      Models::DeleteDcdnRealTimeLogProjectResponse deleteDcdnRealTimeLogProject(const Models::DeleteDcdnRealTimeLogProjectRequest &request);

      /**
       * @summary Deletes configurations of a domain name.
       *
       * @description > You can call this operation up to 30 times per second per account.
       *
       * @param request DeleteDcdnSpecificConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDcdnSpecificConfigResponse
       */
      Models::DeleteDcdnSpecificConfigResponse deleteDcdnSpecificConfigWithOptions(const Models::DeleteDcdnSpecificConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes configurations of a domain name.
       *
       * @description > You can call this operation up to 30 times per second per account.
       *
       * @param request DeleteDcdnSpecificConfigRequest
       * @return DeleteDcdnSpecificConfigResponse
       */
      Models::DeleteDcdnSpecificConfigResponse deleteDcdnSpecificConfig(const Models::DeleteDcdnSpecificConfigRequest &request);

      /**
       * @summary Deletes the configurations of an accelerated domain name in the canary release environment.
       *
       * @description > You can call this operation up to 20 times per second per account.
       *
       * @param request DeleteDcdnSpecificStagingConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDcdnSpecificStagingConfigResponse
       */
      Models::DeleteDcdnSpecificStagingConfigResponse deleteDcdnSpecificStagingConfigWithOptions(const Models::DeleteDcdnSpecificStagingConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the configurations of an accelerated domain name in the canary release environment.
       *
       * @description > You can call this operation up to 20 times per second per account.
       *
       * @param request DeleteDcdnSpecificStagingConfigRequest
       * @return DeleteDcdnSpecificStagingConfigResponse
       */
      Models::DeleteDcdnSpecificStagingConfigResponse deleteDcdnSpecificStagingConfig(const Models::DeleteDcdnSpecificStagingConfigRequest &request);

      /**
       * @summary Deletes all custom operations reports.
       *
       * @description > You can call this operation up to 3 times per second per account.
       *
       * @param request DeleteDcdnSubTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDcdnSubTaskResponse
       */
      Models::DeleteDcdnSubTaskResponse deleteDcdnSubTaskWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes all custom operations reports.
       *
       * @description > You can call this operation up to 3 times per second per account.
       *
       * @return DeleteDcdnSubTaskResponse
       */
      Models::DeleteDcdnSubTaskResponse deleteDcdnSubTask();

      /**
       * @summary Deletes feature configurations by user.
       *
       * @param request DeleteDcdnUserConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDcdnUserConfigResponse
       */
      Models::DeleteDcdnUserConfigResponse deleteDcdnUserConfigWithOptions(const Models::DeleteDcdnUserConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes feature configurations by user.
       *
       * @param request DeleteDcdnUserConfigRequest
       * @return DeleteDcdnUserConfigResponse
       */
      Models::DeleteDcdnUserConfigResponse deleteDcdnUserConfig(const Models::DeleteDcdnUserConfigRequest &request);

      /**
       * @summary Deletes a custom WAF rule group.
       *
       * @param request DeleteDcdnWafGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDcdnWafGroupResponse
       */
      Models::DeleteDcdnWafGroupResponse deleteDcdnWafGroupWithOptions(const Models::DeleteDcdnWafGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a custom WAF rule group.
       *
       * @param request DeleteDcdnWafGroupRequest
       * @return DeleteDcdnWafGroupResponse
       */
      Models::DeleteDcdnWafGroupResponse deleteDcdnWafGroup(const Models::DeleteDcdnWafGroupRequest &request);

      /**
       * @summary Deletes a protection policy.
       *
       * @description *   You can call this operation up to 20 times per second per account.
       * *   Alibaba Cloud Dynamic Content Delivery Network (DCDN) supports POST requests.
       *
       * @param request DeleteDcdnWafPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteDcdnWafPolicyResponse
       */
      Models::DeleteDcdnWafPolicyResponse deleteDcdnWafPolicyWithOptions(const Models::DeleteDcdnWafPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a protection policy.
       *
       * @description *   You can call this operation up to 20 times per second per account.
       * *   Alibaba Cloud Dynamic Content Delivery Network (DCDN) supports POST requests.
       *
       * @param request DeleteDcdnWafPolicyRequest
       * @return DeleteDcdnWafPolicyResponse
       */
      Models::DeleteDcdnWafPolicyResponse deleteDcdnWafPolicy(const Models::DeleteDcdnWafPolicyRequest &request);

      /**
       * @summary Deletes a routine.
       *
       * @description > You can call this operation up to 100 times per second per account.
       *
       * @param request DeleteRoutineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRoutineResponse
       */
      Models::DeleteRoutineResponse deleteRoutineWithOptions(const Models::DeleteRoutineRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a routine.
       *
       * @description > You can call this operation up to 100 times per second per account.
       *
       * @param request DeleteRoutineRequest
       * @return DeleteRoutineResponse
       */
      Models::DeleteRoutineResponse deleteRoutine(const Models::DeleteRoutineRequest &request);

      /**
       * @summary Deletes the code of the specified version from a routine.
       *
       * @description > You can call this operation up to 100 times per second per account.
       *
       * @param request DeleteRoutineCodeRevisionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRoutineCodeRevisionResponse
       */
      Models::DeleteRoutineCodeRevisionResponse deleteRoutineCodeRevisionWithOptions(const Models::DeleteRoutineCodeRevisionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the code of the specified version from a routine.
       *
       * @description > You can call this operation up to 100 times per second per account.
       *
       * @param request DeleteRoutineCodeRevisionRequest
       * @return DeleteRoutineCodeRevisionResponse
       */
      Models::DeleteRoutineCodeRevisionResponse deleteRoutineCodeRevision(const Models::DeleteRoutineCodeRevisionRequest &request);

      /**
       * @summary Deletes canary release environments from a routine.
       *
       * @description > 
       * *   This operation deletes only custom preset canary release environments. You cannot delete production or staging environments.
       * *   You can call this operation up to 100 times per second per account.
       *
       * @param tmpReq DeleteRoutineConfEnvsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRoutineConfEnvsResponse
       */
      Models::DeleteRoutineConfEnvsResponse deleteRoutineConfEnvsWithOptions(const Models::DeleteRoutineConfEnvsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes canary release environments from a routine.
       *
       * @description > 
       * *   This operation deletes only custom preset canary release environments. You cannot delete production or staging environments.
       * *   You can call this operation up to 100 times per second per account.
       *
       * @param request DeleteRoutineConfEnvsRequest
       * @return DeleteRoutineConfEnvsResponse
       */
      Models::DeleteRoutineConfEnvsResponse deleteRoutineConfEnvs(const Models::DeleteRoutineConfEnvsRequest &request);

      /**
       * @summary A客户定制查询域名采样率
       *
       * @param request DescribeCustomDomainSampleRateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCustomDomainSampleRateResponse
       */
      Models::DescribeCustomDomainSampleRateResponse describeCustomDomainSampleRateWithOptions(const Models::DescribeCustomDomainSampleRateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary A客户定制查询域名采样率
       *
       * @param request DescribeCustomDomainSampleRateRequest
       * @return DescribeCustomDomainSampleRateResponse
       */
      Models::DescribeCustomDomainSampleRateResponse describeCustomDomainSampleRate(const Models::DescribeCustomDomainSampleRateRequest &request);

      /**
       * @summary Queries precise access control rules.
       *
       * @description > You can call this operation up to three times per second per account.
       *
       * @param request DescribeDcdnAclFieldsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnAclFieldsResponse
       */
      Models::DescribeDcdnAclFieldsResponse describeDcdnAclFieldsWithOptions(const Models::DescribeDcdnAclFieldsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries precise access control rules.
       *
       * @description > You can call this operation up to three times per second per account.
       *
       * @param request DescribeDcdnAclFieldsRequest
       * @return DescribeDcdnAclFieldsResponse
       */
      Models::DescribeDcdnAclFieldsResponse describeDcdnAclFields(const Models::DescribeDcdnAclFieldsRequest &request);

      /**
       * @summary Queries bandwidth data for Border Gateway Protocol (BGP) accelerated domain names. Data is collected every 5 minutes.
       *
       * @description *   If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last 24 hours. If you set both the StartTime and EndTime parameters, the request returns the data collected within the specified time range. You must set both parameters or leave both of them empty.
       * *   If you specify multiple Internet service providers (ISPs), the data for the ISPs is aggregated.
       * *   You can query data in the last 90 days.
       * *   The maximum time range from the start time to the end time is 31 days. The start time is specified by the StartTime parameter and the end time is specified by the EndTime parameter.
       * *   If the time range from the start time to the end time is 72 hours or shorter, you can specify the interval as 5 minutes. If the time range is longer than 72 hours, you must specify the interval as 1 hour.
       * *   You can call this operation up to five times per second per account.
       *
       * @param request DescribeDcdnBgpBpsDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnBgpBpsDataResponse
       */
      Models::DescribeDcdnBgpBpsDataResponse describeDcdnBgpBpsDataWithOptions(const Models::DescribeDcdnBgpBpsDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries bandwidth data for Border Gateway Protocol (BGP) accelerated domain names. Data is collected every 5 minutes.
       *
       * @description *   If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last 24 hours. If you set both the StartTime and EndTime parameters, the request returns the data collected within the specified time range. You must set both parameters or leave both of them empty.
       * *   If you specify multiple Internet service providers (ISPs), the data for the ISPs is aggregated.
       * *   You can query data in the last 90 days.
       * *   The maximum time range from the start time to the end time is 31 days. The start time is specified by the StartTime parameter and the end time is specified by the EndTime parameter.
       * *   If the time range from the start time to the end time is 72 hours or shorter, you can specify the interval as 5 minutes. If the time range is longer than 72 hours, you must specify the interval as 1 hour.
       * *   You can call this operation up to five times per second per account.
       *
       * @param request DescribeDcdnBgpBpsDataRequest
       * @return DescribeDcdnBgpBpsDataResponse
       */
      Models::DescribeDcdnBgpBpsDataResponse describeDcdnBgpBpsData(const Models::DescribeDcdnBgpBpsDataRequest &request);

      /**
       * @summary Queries traffic data for BGP accelerated domain names. Data is collected every 5 minutes.
       *
       * @description *   If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last 24 hours. If you set both these parameters, the request returns the data collected within the specified time range. You must set both parameters or leave both parameters empty.
       * *   If you specify multiple Internet service providers (ISPs), the data for the ISPs is aggregated.
       * *   You can query data in the last 90 days.
       * *   The maximum time range that you can specify is 31 days. StartTime specifies the start time and EndTime specifies the end time of the time range.
       * *   If the time range from the start time to the end time is 72 hours or shorter, you can specify the interval as 5 minutes. If the time range is longer than 72 hours, you must specify the interval as 1 hour.
       * *   You can call this operation up to five times per second per account.
       *
       * @param request DescribeDcdnBgpTrafficDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnBgpTrafficDataResponse
       */
      Models::DescribeDcdnBgpTrafficDataResponse describeDcdnBgpTrafficDataWithOptions(const Models::DescribeDcdnBgpTrafficDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries traffic data for BGP accelerated domain names. Data is collected every 5 minutes.
       *
       * @description *   If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last 24 hours. If you set both these parameters, the request returns the data collected within the specified time range. You must set both parameters or leave both parameters empty.
       * *   If you specify multiple Internet service providers (ISPs), the data for the ISPs is aggregated.
       * *   You can query data in the last 90 days.
       * *   The maximum time range that you can specify is 31 days. StartTime specifies the start time and EndTime specifies the end time of the time range.
       * *   If the time range from the start time to the end time is 72 hours or shorter, you can specify the interval as 5 minutes. If the time range is longer than 72 hours, you must specify the interval as 1 hour.
       * *   You can call this operation up to five times per second per account.
       *
       * @param request DescribeDcdnBgpTrafficDataRequest
       * @return DescribeDcdnBgpTrafficDataResponse
       */
      Models::DescribeDcdnBgpTrafficDataResponse describeDcdnBgpTrafficData(const Models::DescribeDcdnBgpTrafficDataRequest &request);

      /**
       * @summary Queries countries and regions that can be added to the blacklist.
       *
       * @description > You can call this operation up to 50 times per second per account.
       *
       * @param request DescribeDcdnBlockedRegionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnBlockedRegionsResponse
       */
      Models::DescribeDcdnBlockedRegionsResponse describeDcdnBlockedRegionsWithOptions(const Models::DescribeDcdnBlockedRegionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries countries and regions that can be added to the blacklist.
       *
       * @description > You can call this operation up to 50 times per second per account.
       *
       * @param request DescribeDcdnBlockedRegionsRequest
       * @return DescribeDcdnBlockedRegionsResponse
       */
      Models::DescribeDcdnBlockedRegionsResponse describeDcdnBlockedRegions(const Models::DescribeDcdnBlockedRegionsRequest &request);

      /**
       * @summary Queries details about a certificate.
       *
       * @description > You can call this operation up to 30 times per second per account.
       *
       * @param request DescribeDcdnCertificateDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnCertificateDetailResponse
       */
      Models::DescribeDcdnCertificateDetailResponse describeDcdnCertificateDetailWithOptions(const Models::DescribeDcdnCertificateDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries details about a certificate.
       *
       * @description > You can call this operation up to 30 times per second per account.
       *
       * @param request DescribeDcdnCertificateDetailRequest
       * @return DescribeDcdnCertificateDetailResponse
       */
      Models::DescribeDcdnCertificateDetailResponse describeDcdnCertificateDetail(const Models::DescribeDcdnCertificateDetailRequest &request);

      /**
       * @deprecated OpenAPI DescribeDcdnCertificateList is deprecated, please use dcdn::2018-01-15::DescribeDcdnSSLCertificateList instead.
       *
       * @summary Queries the certificates of one or more accelerated domain names.
       *
       * @description > You can call this operation up to 30 times per second per account.
       *
       * @param request DescribeDcdnCertificateListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnCertificateListResponse
       */
      Models::DescribeDcdnCertificateListResponse describeDcdnCertificateListWithOptions(const Models::DescribeDcdnCertificateListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DescribeDcdnCertificateList is deprecated, please use dcdn::2018-01-15::DescribeDcdnSSLCertificateList instead.
       *
       * @summary Queries the certificates of one or more accelerated domain names.
       *
       * @description > You can call this operation up to 30 times per second per account.
       *
       * @param request DescribeDcdnCertificateListRequest
       * @return DescribeDcdnCertificateListResponse
       */
      Models::DescribeDcdnCertificateListResponse describeDcdnCertificateList(const Models::DescribeDcdnCertificateListRequest &request);

      /**
       * @summary Queries the status of DCDN DDoS mitigation.
       *
       * @param request DescribeDcdnDdosServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnDdosServiceResponse
       */
      Models::DescribeDcdnDdosServiceResponse describeDcdnDdosServiceWithOptions(const Models::DescribeDcdnDdosServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of DCDN DDoS mitigation.
       *
       * @param request DescribeDcdnDdosServiceRequest
       * @return DescribeDcdnDdosServiceResponse
       */
      Models::DescribeDcdnDdosServiceResponse describeDcdnDdosService(const Models::DescribeDcdnDdosServiceRequest &request);

      /**
       * @summary Queries the specifications of DCDN DDoS versions.
       *
       * @param request DescribeDcdnDdosSpecInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnDdosSpecInfoResponse
       */
      Models::DescribeDcdnDdosSpecInfoResponse describeDcdnDdosSpecInfoWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the specifications of DCDN DDoS versions.
       *
       * @return DescribeDcdnDdosSpecInfoResponse
       */
      Models::DescribeDcdnDdosSpecInfoResponse describeDcdnDdosSpecInfo();

      /**
       * @summary Queries the domain names that are deleted from your Alibaba Cloud account.
       *
       * @description > You can call this operation up to 10 times per second per account.
       *
       * @param request DescribeDcdnDeletedDomainsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnDeletedDomainsResponse
       */
      Models::DescribeDcdnDeletedDomainsResponse describeDcdnDeletedDomainsWithOptions(const Models::DescribeDcdnDeletedDomainsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the domain names that are deleted from your Alibaba Cloud account.
       *
       * @description > You can call this operation up to 10 times per second per account.
       *
       * @param request DescribeDcdnDeletedDomainsRequest
       * @return DescribeDcdnDeletedDomainsResponse
       */
      Models::DescribeDcdnDeletedDomainsResponse describeDcdnDeletedDomains(const Models::DescribeDcdnDeletedDomainsRequest &request);

      /**
       * @summary Queries all tracking tasks of operations reports.
       *
       * @description >You can call this operation up to three times per second.
       *
       * @param request DescribeDcdnDeliverListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnDeliverListResponse
       */
      Models::DescribeDcdnDeliverListResponse describeDcdnDeliverListWithOptions(const Models::DescribeDcdnDeliverListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all tracking tasks of operations reports.
       *
       * @description >You can call this operation up to three times per second.
       *
       * @param request DescribeDcdnDeliverListRequest
       * @return DescribeDcdnDeliverListResponse
       */
      Models::DescribeDcdnDeliverListResponse describeDcdnDeliverList(const Models::DescribeDcdnDeliverListRequest &request);

      /**
       * @summary Queries the monitoring data of network bandwidth for one or more accelerated domain names. You can query data in the last 90 days.
       *
       * @description * You can call this operation up to 100 times per second per account.
       * * If you do not set the **StartTime** or **EndTime** parameter, the request returns the data collected in the last 24 hours. If you set both the **StartTime** and **EndTime** parameters, the request returns the data collected within the specified time range.
       * **Time granularity**
       * The time granularity supported by the Interval parameter, the maximum time period within which historical data is available, and the data delay vary with the maximum time range per query, as described in the following table.
       * |Time granularity|Maximum time range per query|Historical data available|Data delay|
       * |---|---|---|---|
       * |5 minutes|3 days|93 days|15 minutes|
       * |1 hour|31 days|186 days|4 hours|
       * |1 day|366 days|366 days|04:00 on the next day|
       *
       * @param request DescribeDcdnDomainBpsDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnDomainBpsDataResponse
       */
      Models::DescribeDcdnDomainBpsDataResponse describeDcdnDomainBpsDataWithOptions(const Models::DescribeDcdnDomainBpsDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the monitoring data of network bandwidth for one or more accelerated domain names. You can query data in the last 90 days.
       *
       * @description * You can call this operation up to 100 times per second per account.
       * * If you do not set the **StartTime** or **EndTime** parameter, the request returns the data collected in the last 24 hours. If you set both the **StartTime** and **EndTime** parameters, the request returns the data collected within the specified time range.
       * **Time granularity**
       * The time granularity supported by the Interval parameter, the maximum time period within which historical data is available, and the data delay vary with the maximum time range per query, as described in the following table.
       * |Time granularity|Maximum time range per query|Historical data available|Data delay|
       * |---|---|---|---|
       * |5 minutes|3 days|93 days|15 minutes|
       * |1 hour|31 days|186 days|4 hours|
       * |1 day|366 days|366 days|04:00 on the next day|
       *
       * @param request DescribeDcdnDomainBpsDataRequest
       * @return DescribeDcdnDomainBpsDataResponse
       */
      Models::DescribeDcdnDomainBpsDataResponse describeDcdnDomainBpsData(const Models::DescribeDcdnDomainBpsDataRequest &request);

      /**
       * @summary Queries bandwidth data of accelerated domain names.
       *
       * @description * You can call this operation up to 20 times per second per account.
       * * If you do not set **StartTime** or **EndTime**, the request returns the data collected in the last 24 hours. If you set both **StartTime** and **EndTime**, the request returns the data collected within the specified time range.
       * **Time granularity**
       * The time granularity supported by the Interval parameter, the maximum time period within which historical data is available, and the data delay vary with the time range to query, as described in the following table.
       * |Time granularity|Maximum time range per query|Historical data available|Data delay|
       * |---|---|---|---|
       * |5 minutes|3 days|93 days|15 minutes|
       * |1 hour|31 days|186 days|4 hours|
       * |1 day|366 days|366 days|04:00 on the next day|
       *
       * @param request DescribeDcdnDomainBpsDataByLayerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnDomainBpsDataByLayerResponse
       */
      Models::DescribeDcdnDomainBpsDataByLayerResponse describeDcdnDomainBpsDataByLayerWithOptions(const Models::DescribeDcdnDomainBpsDataByLayerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries bandwidth data of accelerated domain names.
       *
       * @description * You can call this operation up to 20 times per second per account.
       * * If you do not set **StartTime** or **EndTime**, the request returns the data collected in the last 24 hours. If you set both **StartTime** and **EndTime**, the request returns the data collected within the specified time range.
       * **Time granularity**
       * The time granularity supported by the Interval parameter, the maximum time period within which historical data is available, and the data delay vary with the time range to query, as described in the following table.
       * |Time granularity|Maximum time range per query|Historical data available|Data delay|
       * |---|---|---|---|
       * |5 minutes|3 days|93 days|15 minutes|
       * |1 hour|31 days|186 days|4 hours|
       * |1 day|366 days|366 days|04:00 on the next day|
       *
       * @param request DescribeDcdnDomainBpsDataByLayerRequest
       * @return DescribeDcdnDomainBpsDataByLayerResponse
       */
      Models::DescribeDcdnDomainBpsDataByLayerResponse describeDcdnDomainBpsDataByLayer(const Models::DescribeDcdnDomainBpsDataByLayerRequest &request);

      /**
       * @summary Queries accelerated domain names by SSL certificate.
       *
       * @description > You can call this operation up to 100 times per second per account.
       *
       * @param request DescribeDcdnDomainByCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnDomainByCertificateResponse
       */
      Models::DescribeDcdnDomainByCertificateResponse describeDcdnDomainByCertificateWithOptions(const Models::DescribeDcdnDomainByCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries accelerated domain names by SSL certificate.
       *
       * @description > You can call this operation up to 100 times per second per account.
       *
       * @param request DescribeDcdnDomainByCertificateRequest
       * @return DescribeDcdnDomainByCertificateResponse
       */
      Models::DescribeDcdnDomainByCertificateResponse describeDcdnDomainByCertificate(const Models::DescribeDcdnDomainByCertificateRequest &request);

      /**
       * @summary Queries logs of rate limiting.
       *
       * @description > 
       * *   If you do not configure the StartTime or EndTime parameter, data collected over the last 24 hours is queried. If you configure both the StartTime and EndTime parameters, data collected within the specified time range is queried.
       * *   You can query data collected over the last 30 days.
       * *   You can call the RefreshObjectCaches operation up to 50 times per second per account.
       *
       * @param request DescribeDcdnDomainCcActivityLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnDomainCcActivityLogResponse
       */
      Models::DescribeDcdnDomainCcActivityLogResponse describeDcdnDomainCcActivityLogWithOptions(const Models::DescribeDcdnDomainCcActivityLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries logs of rate limiting.
       *
       * @description > 
       * *   If you do not configure the StartTime or EndTime parameter, data collected over the last 24 hours is queried. If you configure both the StartTime and EndTime parameters, data collected within the specified time range is queried.
       * *   You can query data collected over the last 30 days.
       * *   You can call the RefreshObjectCaches operation up to 50 times per second per account.
       *
       * @param request DescribeDcdnDomainCcActivityLogRequest
       * @return DescribeDcdnDomainCcActivityLogResponse
       */
      Models::DescribeDcdnDomainCcActivityLogResponse describeDcdnDomainCcActivityLog(const Models::DescribeDcdnDomainCcActivityLogRequest &request);

      /**
       * @summary Queries the certificate information about an accelerated domain name.
       *
       * @description > You can call this operation up to 100 times per second per account.
       *
       * @param request DescribeDcdnDomainCertificateInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnDomainCertificateInfoResponse
       */
      Models::DescribeDcdnDomainCertificateInfoResponse describeDcdnDomainCertificateInfoWithOptions(const Models::DescribeDcdnDomainCertificateInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the certificate information about an accelerated domain name.
       *
       * @description > You can call this operation up to 100 times per second per account.
       *
       * @param request DescribeDcdnDomainCertificateInfoRequest
       * @return DescribeDcdnDomainCertificateInfoResponse
       */
      Models::DescribeDcdnDomainCertificateInfoResponse describeDcdnDomainCertificateInfo(const Models::DescribeDcdnDomainCertificateInfoRequest &request);

      /**
       * @summary Checks whether CNAME records are configured for one or more accelerated domain names.
       *
       * @description > You can call this operation up to 80 times per second per account.
       *
       * @param request DescribeDcdnDomainCnameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnDomainCnameResponse
       */
      Models::DescribeDcdnDomainCnameResponse describeDcdnDomainCnameWithOptions(const Models::DescribeDcdnDomainCnameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks whether CNAME records are configured for one or more accelerated domain names.
       *
       * @description > You can call this operation up to 80 times per second per account.
       *
       * @param request DescribeDcdnDomainCnameRequest
       * @return DescribeDcdnDomainCnameResponse
       */
      Models::DescribeDcdnDomainCnameResponse describeDcdnDomainCname(const Models::DescribeDcdnDomainCnameRequest &request);

      /**
       * @summary Queries the configurations of an accelerated domain name.
       *
       * @description > *   You can query the configurations of one or more features in a request.
       * > *   You can call this operation up to 30 times per second per account.
       *
       * @param request DescribeDcdnDomainConfigsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnDomainConfigsResponse
       */
      Models::DescribeDcdnDomainConfigsResponse describeDcdnDomainConfigsWithOptions(const Models::DescribeDcdnDomainConfigsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configurations of an accelerated domain name.
       *
       * @description > *   You can query the configurations of one or more features in a request.
       * > *   You can call this operation up to 30 times per second per account.
       *
       * @param request DescribeDcdnDomainConfigsRequest
       * @return DescribeDcdnDomainConfigsResponse
       */
      Models::DescribeDcdnDomainConfigsResponse describeDcdnDomainConfigs(const Models::DescribeDcdnDomainConfigsRequest &request);

      /**
       * @summary Queries the basic configuration information about an accelerated domain name.
       *
       * @description > You can call this operation up to 30 times per second per account.
       *
       * @param request DescribeDcdnDomainDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnDomainDetailResponse
       */
      Models::DescribeDcdnDomainDetailResponse describeDcdnDomainDetailWithOptions(const Models::DescribeDcdnDomainDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the basic configuration information about an accelerated domain name.
       *
       * @description > You can call this operation up to 30 times per second per account.
       *
       * @param request DescribeDcdnDomainDetailRequest
       * @return DescribeDcdnDomainDetailResponse
       */
      Models::DescribeDcdnDomainDetailResponse describeDcdnDomainDetail(const Models::DescribeDcdnDomainDetailRequest &request);

      /**
       * @summary Queries the request hit ratios of one or more accelerated domain names. You can query data collected within the last 90 days.
       *
       * @description #
       * *   You can call this operation up to 100 times per second per account.
       * *   If you do not set the **StartTime** or **EndTime** parameter, the request returns the data collected in the last 24 hours. If you set both the **StartTime** and **EndTime** parameters, the request returns the data collected within the specified time range.
       * **Time granularity** The time granularity supported by the Interval parameter, the maximum time period within which historical data is available, and the data delay vary with the maximum time range per query, as described in the following table. |Time granularity |Maximum time range per query |Historical data available |Data delay | -------------- | -------------- | ------ |5 minutes |3 days |93 days |15 minutes |1 hour |31 days |186 days |4 hours |1 day |366 days |366 days |04:00 on the next day
       *
       * @param request DescribeDcdnDomainHitRateDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnDomainHitRateDataResponse
       */
      Models::DescribeDcdnDomainHitRateDataResponse describeDcdnDomainHitRateDataWithOptions(const Models::DescribeDcdnDomainHitRateDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the request hit ratios of one or more accelerated domain names. You can query data collected within the last 90 days.
       *
       * @description #
       * *   You can call this operation up to 100 times per second per account.
       * *   If you do not set the **StartTime** or **EndTime** parameter, the request returns the data collected in the last 24 hours. If you set both the **StartTime** and **EndTime** parameters, the request returns the data collected within the specified time range.
       * **Time granularity** The time granularity supported by the Interval parameter, the maximum time period within which historical data is available, and the data delay vary with the maximum time range per query, as described in the following table. |Time granularity |Maximum time range per query |Historical data available |Data delay | -------------- | -------------- | ------ |5 minutes |3 days |93 days |15 minutes |1 hour |31 days |186 days |4 hours |1 day |366 days |366 days |04:00 on the next day
       *
       * @param request DescribeDcdnDomainHitRateDataRequest
       * @return DescribeDcdnDomainHitRateDataResponse
       */
      Models::DescribeDcdnDomainHitRateDataResponse describeDcdnDomainHitRateData(const Models::DescribeDcdnDomainHitRateDataRequest &request);

      /**
       * @summary Queries the total number and proportions of HTTP status codes returned from one or more accelerated domain names. Data is collected every 5 minutes. You can query data in the last 90 days.
       *
       * @description * If you do not set the **StartTime** or **EndTime** parameter, the request returns the data collected in the last 24 hours. If you set both the **StartTime** and **EndTime** parameters, the request returns the data collected within the specified time range.
       * * You can call this operation up to 100 times per second per account.
       * **Time granularity**
       * The time granularity supported by the Interval parameter, the maximum time period within which historical data is available, and the data delay vary with the maximum time range per query, as described in the following table.
       * |Time granularity|Maximum time range per query|Historical data available|Data delay|
       * |---|---|---|---|
       * |5 minutes|3 days|93 days|15 minutes|
       * |1 hour|31 days|186 days|4 hours|
       * |1 day|366 days|366 days|04:00 on the next day|
       *
       * @param request DescribeDcdnDomainHttpCodeDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnDomainHttpCodeDataResponse
       */
      Models::DescribeDcdnDomainHttpCodeDataResponse describeDcdnDomainHttpCodeDataWithOptions(const Models::DescribeDcdnDomainHttpCodeDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the total number and proportions of HTTP status codes returned from one or more accelerated domain names. Data is collected every 5 minutes. You can query data in the last 90 days.
       *
       * @description * If you do not set the **StartTime** or **EndTime** parameter, the request returns the data collected in the last 24 hours. If you set both the **StartTime** and **EndTime** parameters, the request returns the data collected within the specified time range.
       * * You can call this operation up to 100 times per second per account.
       * **Time granularity**
       * The time granularity supported by the Interval parameter, the maximum time period within which historical data is available, and the data delay vary with the maximum time range per query, as described in the following table.
       * |Time granularity|Maximum time range per query|Historical data available|Data delay|
       * |---|---|---|---|
       * |5 minutes|3 days|93 days|15 minutes|
       * |1 hour|31 days|186 days|4 hours|
       * |1 day|366 days|366 days|04:00 on the next day|
       *
       * @param request DescribeDcdnDomainHttpCodeDataRequest
       * @return DescribeDcdnDomainHttpCodeDataResponse
       */
      Models::DescribeDcdnDomainHttpCodeDataResponse describeDcdnDomainHttpCodeData(const Models::DescribeDcdnDomainHttpCodeDataRequest &request);

      /**
       * @summary Queries the distribution of HTTP status codes by protocol.
       *
       * @description * You can call this operation up to 20 times per second per account.
       * * You cannot query the distribution of HTTP status codes by IP protocol.
       * * If you do not specify the **StartTime** or **EndTime** parameter, the data that is collected within the last 24 hours is collected. If you specify both the **StartTime** and **EndTime** parameters, the data that is collected within the time range that you specify is collected.
       * **Time granularity**
       * The time granularity supported by the Interval parameter, the maximum time period within which historical data is available, and the data delay vary with the maximum time range per query, as described in the following table.
       * |Time granularity|Maximum time range per query|Historical data available|Data delay|
       * |---|---|---|---|
       * |5 minutes|3 days|93 days|15 minutes|
       * |1 hour|31 days|186 days|4 hours|
       * |1 day|366 days|366 days|04:00 on the next day|
       *
       * @param request DescribeDcdnDomainHttpCodeDataByLayerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnDomainHttpCodeDataByLayerResponse
       */
      Models::DescribeDcdnDomainHttpCodeDataByLayerResponse describeDcdnDomainHttpCodeDataByLayerWithOptions(const Models::DescribeDcdnDomainHttpCodeDataByLayerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the distribution of HTTP status codes by protocol.
       *
       * @description * You can call this operation up to 20 times per second per account.
       * * You cannot query the distribution of HTTP status codes by IP protocol.
       * * If you do not specify the **StartTime** or **EndTime** parameter, the data that is collected within the last 24 hours is collected. If you specify both the **StartTime** and **EndTime** parameters, the data that is collected within the time range that you specify is collected.
       * **Time granularity**
       * The time granularity supported by the Interval parameter, the maximum time period within which historical data is available, and the data delay vary with the maximum time range per query, as described in the following table.
       * |Time granularity|Maximum time range per query|Historical data available|Data delay|
       * |---|---|---|---|
       * |5 minutes|3 days|93 days|15 minutes|
       * |1 hour|31 days|186 days|4 hours|
       * |1 day|366 days|366 days|04:00 on the next day|
       *
       * @param request DescribeDcdnDomainHttpCodeDataByLayerRequest
       * @return DescribeDcdnDomainHttpCodeDataByLayerResponse
       */
      Models::DescribeDcdnDomainHttpCodeDataByLayerResponse describeDcdnDomainHttpCodeDataByLayer(const Models::DescribeDcdnDomainHttpCodeDataByLayerRequest &request);

      /**
       * @summary Queries bandwidth of accelerated domain names for which Layer 4 acceleration is enabled. You can query the data that is collected over the last 90 days.
       *
       * @description > 
       * *   The bandwidth is measured in bit/s.
       * *   If you do not set the **StartTime** or **EndTime** parameter, the request returns the data collected in the last 24 hours. If you set both the **StartTime** and **EndTime** parameters, the request returns the data collected within the specified time range.
       * *   You can call this operation up to 100 times per second per account.
       *
       * @param request DescribeDcdnDomainIpaBpsDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnDomainIpaBpsDataResponse
       */
      Models::DescribeDcdnDomainIpaBpsDataResponse describeDcdnDomainIpaBpsDataWithOptions(const Models::DescribeDcdnDomainIpaBpsDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries bandwidth of accelerated domain names for which Layer 4 acceleration is enabled. You can query the data that is collected over the last 90 days.
       *
       * @description > 
       * *   The bandwidth is measured in bit/s.
       * *   If you do not set the **StartTime** or **EndTime** parameter, the request returns the data collected in the last 24 hours. If you set both the **StartTime** and **EndTime** parameters, the request returns the data collected within the specified time range.
       * *   You can call this operation up to 100 times per second per account.
       *
       * @param request DescribeDcdnDomainIpaBpsDataRequest
       * @return DescribeDcdnDomainIpaBpsDataResponse
       */
      Models::DescribeDcdnDomainIpaBpsDataResponse describeDcdnDomainIpaBpsData(const Models::DescribeDcdnDomainIpaBpsDataRequest &request);

      /**
       * @summary Queries the number of IPA user connections.
       *
       * @description *   You can call this operation up to 10 times per second per user.
       * *   If you do not set the **StartTime** or **EndTime** parameter, the request returns the data collected in the last 24 hours. If you set both the **StartTime** and **EndTime** parameters, the request returns the data collected within the specified time range.
       * *   The minimum time granularity at which the data is queried is 5 minutes. The maximum time range for a single query is 31 days. The period within which historical data is available is 366 days. The data latency is no more than 10 minutes.
       *
       * @param request DescribeDcdnDomainIpaConnDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnDomainIpaConnDataResponse
       */
      Models::DescribeDcdnDomainIpaConnDataResponse describeDcdnDomainIpaConnDataWithOptions(const Models::DescribeDcdnDomainIpaConnDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of IPA user connections.
       *
       * @description *   You can call this operation up to 10 times per second per user.
       * *   If you do not set the **StartTime** or **EndTime** parameter, the request returns the data collected in the last 24 hours. If you set both the **StartTime** and **EndTime** parameters, the request returns the data collected within the specified time range.
       * *   The minimum time granularity at which the data is queried is 5 minutes. The maximum time range for a single query is 31 days. The period within which historical data is available is 366 days. The data latency is no more than 10 minutes.
       *
       * @param request DescribeDcdnDomainIpaConnDataRequest
       * @return DescribeDcdnDomainIpaConnDataResponse
       */
      Models::DescribeDcdnDomainIpaConnDataResponse describeDcdnDomainIpaConnData(const Models::DescribeDcdnDomainIpaConnDataRequest &request);

      /**
       * @summary Queries traffic of one or more accelerated domain names for which Layer 4 acceleration is enabled. You can query the data that is collected over the last 90 days.
       *
       * @description > 
       * *   If you do not set the **StartTime** or **EndTime** parameter, the request returns the data collected in the last 24 hours. If you set both the **StartTime** and **EndTime** parameters, the request returns the data collected within the specified time range.
       * *   Unit: bytes.
       * *   You can call this operation up to 100 times per second per account.
       *
       * @param request DescribeDcdnDomainIpaTrafficDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnDomainIpaTrafficDataResponse
       */
      Models::DescribeDcdnDomainIpaTrafficDataResponse describeDcdnDomainIpaTrafficDataWithOptions(const Models::DescribeDcdnDomainIpaTrafficDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries traffic of one or more accelerated domain names for which Layer 4 acceleration is enabled. You can query the data that is collected over the last 90 days.
       *
       * @description > 
       * *   If you do not set the **StartTime** or **EndTime** parameter, the request returns the data collected in the last 24 hours. If you set both the **StartTime** and **EndTime** parameters, the request returns the data collected within the specified time range.
       * *   Unit: bytes.
       * *   You can call this operation up to 100 times per second per account.
       *
       * @param request DescribeDcdnDomainIpaTrafficDataRequest
       * @return DescribeDcdnDomainIpaTrafficDataResponse
       */
      Models::DescribeDcdnDomainIpaTrafficDataResponse describeDcdnDomainIpaTrafficData(const Models::DescribeDcdnDomainIpaTrafficDataRequest &request);

      /**
       * @summary Queries the proportions of data usage of different Internet service providers (ISPs). You can query data within the last 90 days.
       *
       * @description > 
       * *   You can call this operation up to 100 times per second per account.
       * *   If **StartTime** is set but **EndTime** is not set, the data within the hour that starts from **StartTime** is queried.
       * *   If **EndTime** is set but **StartTime** is not set, the data within the last hour that precedes **EndTime** is queried.
       * *   You can query data of a domain name or all domain names that belong to your account.
       * *   You can view data that is collected over the last seven days. The interval at which data is queried is based on the time range specified by **StartTime** and **EndTime**.
       *     *   **If the time range is shorter than or equal to one hour**, data is queried every minute.
       *     *   **If the time range is longer than 1 hour but shorter than or equal to three days**, data is queried every five minutes.
       *     *   **If the time range is longer than three days but shorter than or equal to seven days**, data is queried every hour.
       *
       * @param request DescribeDcdnDomainIspDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnDomainIspDataResponse
       */
      Models::DescribeDcdnDomainIspDataResponse describeDcdnDomainIspDataWithOptions(const Models::DescribeDcdnDomainIspDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the proportions of data usage of different Internet service providers (ISPs). You can query data within the last 90 days.
       *
       * @description > 
       * *   You can call this operation up to 100 times per second per account.
       * *   If **StartTime** is set but **EndTime** is not set, the data within the hour that starts from **StartTime** is queried.
       * *   If **EndTime** is set but **StartTime** is not set, the data within the last hour that precedes **EndTime** is queried.
       * *   You can query data of a domain name or all domain names that belong to your account.
       * *   You can view data that is collected over the last seven days. The interval at which data is queried is based on the time range specified by **StartTime** and **EndTime**.
       *     *   **If the time range is shorter than or equal to one hour**, data is queried every minute.
       *     *   **If the time range is longer than 1 hour but shorter than or equal to three days**, data is queried every five minutes.
       *     *   **If the time range is longer than three days but shorter than or equal to seven days**, data is queried every hour.
       *
       * @param request DescribeDcdnDomainIspDataRequest
       * @return DescribeDcdnDomainIspDataResponse
       */
      Models::DescribeDcdnDomainIspDataResponse describeDcdnDomainIspData(const Models::DescribeDcdnDomainIspDataRequest &request);

      /**
       * @summary Queries the address where you can download the log data of a domain name.
       *
       * @description > 
       * *   If you do not set the **StartTime** or **EndTime** parameter, the request returns the data collected in the last 24 hours. If you set both these parameters, the request returns the data collected within the specified time range.********
       * *   You can call this operation up to 100 times per second per account.
       *
       * @param request DescribeDcdnDomainLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnDomainLogResponse
       */
      Models::DescribeDcdnDomainLogResponse describeDcdnDomainLogWithOptions(const Models::DescribeDcdnDomainLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the address where you can download the log data of a domain name.
       *
       * @description > 
       * *   If you do not set the **StartTime** or **EndTime** parameter, the request returns the data collected in the last 24 hours. If you set both these parameters, the request returns the data collected within the specified time range.********
       * *   You can call this operation up to 100 times per second per account.
       *
       * @param request DescribeDcdnDomainLogRequest
       * @return DescribeDcdnDomainLogResponse
       */
      Models::DescribeDcdnDomainLogResponse describeDcdnDomainLog(const Models::DescribeDcdnDomainLogRequest &request);

      /**
       * @param request DescribeDcdnDomainLogExTtlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnDomainLogExTtlResponse
       */
      Models::DescribeDcdnDomainLogExTtlResponse describeDcdnDomainLogExTtlWithOptions(const Models::DescribeDcdnDomainLogExTtlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DescribeDcdnDomainLogExTtlRequest
       * @return DescribeDcdnDomainLogExTtlResponse
       */
      Models::DescribeDcdnDomainLogExTtlResponse describeDcdnDomainLogExTtl(const Models::DescribeDcdnDomainLogExTtlRequest &request);

      /**
       * @summary Queries the billable items of accelerated domain names. The data is collected at least every 5 minutes. The billable items do not include non-request items.
       *
       * @description *   If you do not set the StartTime or EndTime parameter, data within the last 10 minutes is queried. You can set both the StartTime and EndTime parameters to specify a time range.
       * *   You can specify one or more accelerated domain names. Separate domain names with commas (,).
       * *   You can query data within the last 90 days.
       * *   The time range cannot exceed 1 hour.
       *
       * @param request DescribeDcdnDomainMultiUsageDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnDomainMultiUsageDataResponse
       */
      Models::DescribeDcdnDomainMultiUsageDataResponse describeDcdnDomainMultiUsageDataWithOptions(const Models::DescribeDcdnDomainMultiUsageDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the billable items of accelerated domain names. The data is collected at least every 5 minutes. The billable items do not include non-request items.
       *
       * @description *   If you do not set the StartTime or EndTime parameter, data within the last 10 minutes is queried. You can set both the StartTime and EndTime parameters to specify a time range.
       * *   You can specify one or more accelerated domain names. Separate domain names with commas (,).
       * *   You can query data within the last 90 days.
       * *   The time range cannot exceed 1 hour.
       *
       * @param request DescribeDcdnDomainMultiUsageDataRequest
       * @return DescribeDcdnDomainMultiUsageDataResponse
       */
      Models::DescribeDcdnDomainMultiUsageDataResponse describeDcdnDomainMultiUsageData(const Models::DescribeDcdnDomainMultiUsageDataRequest &request);

      /**
       * @summary Queries the origin bandwidth data for one or more accelerated domain names. You can query data in the last 90 days.
       *
       * @description * You can call this operation up to 100 times per second per account.
       * * If you do not set the **StartTime** or **EndTime** parameter, the request returns the data collected in the last 24 hours. If you set both the **StartTime** and **EndTime** parameters, the request returns the data collected within the specified time range.
       * **Time granularity**
       * The time granularity supported by the Interval parameter, the maximum time period within which historical data is available, and the data delay vary with the maximum time range per query, as described in the following table.
       * |Time granularity|Maximum time range per query|Historical data available|Data delay|
       * |---|---|---|---|
       * |5 minutes|3 days|93 days|15 minutes|
       * |1 hour|31 days|186 days|4 hours|
       * |1 day|366 days|366 days|04:00 on the next day|
       *
       * @param request DescribeDcdnDomainOriginBpsDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnDomainOriginBpsDataResponse
       */
      Models::DescribeDcdnDomainOriginBpsDataResponse describeDcdnDomainOriginBpsDataWithOptions(const Models::DescribeDcdnDomainOriginBpsDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the origin bandwidth data for one or more accelerated domain names. You can query data in the last 90 days.
       *
       * @description * You can call this operation up to 100 times per second per account.
       * * If you do not set the **StartTime** or **EndTime** parameter, the request returns the data collected in the last 24 hours. If you set both the **StartTime** and **EndTime** parameters, the request returns the data collected within the specified time range.
       * **Time granularity**
       * The time granularity supported by the Interval parameter, the maximum time period within which historical data is available, and the data delay vary with the maximum time range per query, as described in the following table.
       * |Time granularity|Maximum time range per query|Historical data available|Data delay|
       * |---|---|---|---|
       * |5 minutes|3 days|93 days|15 minutes|
       * |1 hour|31 days|186 days|4 hours|
       * |1 day|366 days|366 days|04:00 on the next day|
       *
       * @param request DescribeDcdnDomainOriginBpsDataRequest
       * @return DescribeDcdnDomainOriginBpsDataResponse
       */
      Models::DescribeDcdnDomainOriginBpsDataResponse describeDcdnDomainOriginBpsData(const Models::DescribeDcdnDomainOriginBpsDataRequest &request);

      /**
       * @summary Queries the back-to-origin traffic of one or more accelerated domain names.
       *
       * @description - You can call this operation up to 100 times per second per account.
       * - If you do not set the **StartTime** or **EndTime** parameters, the request returns the data collected in the last 24 hours. If you set both the **StartTime** and **EndTime** parameters, the request returns the data collected within the specified time range.
       * **Time granularity**
       * The time granularity supported by the Interval parameter varies with the maximum time range per query. The following table describes the time period within which historical data is available and the data delay. 
       * | Time granularity | Maximum time range per query | Historical data available | Data delay |
       * | ---------------- | ---------------------------- | ------------------------- | ---------- |
       * | 5 minutes | 3 days | 93 days | 15 minutes |
       * | 1 hour | 31 days | 186 days | 4 hours |
       * | 1 day | 366 days | 366 days | 04:00 on the next day |
       *
       * @param request DescribeDcdnDomainOriginTrafficDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnDomainOriginTrafficDataResponse
       */
      Models::DescribeDcdnDomainOriginTrafficDataResponse describeDcdnDomainOriginTrafficDataWithOptions(const Models::DescribeDcdnDomainOriginTrafficDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the back-to-origin traffic of one or more accelerated domain names.
       *
       * @description - You can call this operation up to 100 times per second per account.
       * - If you do not set the **StartTime** or **EndTime** parameters, the request returns the data collected in the last 24 hours. If you set both the **StartTime** and **EndTime** parameters, the request returns the data collected within the specified time range.
       * **Time granularity**
       * The time granularity supported by the Interval parameter varies with the maximum time range per query. The following table describes the time period within which historical data is available and the data delay. 
       * | Time granularity | Maximum time range per query | Historical data available | Data delay |
       * | ---------------- | ---------------------------- | ------------------------- | ---------- |
       * | 5 minutes | 3 days | 93 days | 15 minutes |
       * | 1 hour | 31 days | 186 days | 4 hours |
       * | 1 day | 366 days | 366 days | 04:00 on the next day |
       *
       * @param request DescribeDcdnDomainOriginTrafficDataRequest
       * @return DescribeDcdnDomainOriginTrafficDataResponse
       */
      Models::DescribeDcdnDomainOriginTrafficDataResponse describeDcdnDomainOriginTrafficData(const Models::DescribeDcdnDomainOriginTrafficDataRequest &request);

      /**
       * @summary Queries the protocol type of IP Application Accelerator (IPA).
       *
       * @description > You can call this operation up to 10 times per second per account.
       *
       * @param request DescribeDcdnDomainPropertyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnDomainPropertyResponse
       */
      Models::DescribeDcdnDomainPropertyResponse describeDcdnDomainPropertyWithOptions(const Models::DescribeDcdnDomainPropertyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the protocol type of IP Application Accelerator (IPA).
       *
       * @description > You can call this operation up to 10 times per second per account.
       *
       * @param request DescribeDcdnDomainPropertyRequest
       * @return DescribeDcdnDomainPropertyResponse
       */
      Models::DescribeDcdnDomainPropertyResponse describeDcdnDomainProperty(const Models::DescribeDcdnDomainPropertyRequest &request);

      /**
       * @summary Queries page view (PV) data of an accelerated domain name. Data can be collected at minimum intervals of one hour.
       *
       * @param request DescribeDcdnDomainPvDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnDomainPvDataResponse
       */
      Models::DescribeDcdnDomainPvDataResponse describeDcdnDomainPvDataWithOptions(const Models::DescribeDcdnDomainPvDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries page view (PV) data of an accelerated domain name. Data can be collected at minimum intervals of one hour.
       *
       * @param request DescribeDcdnDomainPvDataRequest
       * @return DescribeDcdnDomainPvDataResponse
       */
      Models::DescribeDcdnDomainPvDataResponse describeDcdnDomainPvData(const Models::DescribeDcdnDomainPvDataRequest &request);

      /**
       * @summary Queries the number of requests to an accelerated domain name per second. You can query data in the last 90 days.
       *
       * @description * You can call this operation up to 100 times per second per account.
       * * If you do not set the **StartTime** or **EndTime** parameter, the request returns the data collected in the last 24 hours. If you set both the **StartTime** and **EndTime** parameters, the request returns the data collected within the specified time range.
       * **Time granularity**
       * The time granularity supported by the Interval parameter, the maximum time period within which historical data is available, and the data delay vary with the maximum time range per query, as described in the following table.
       * |Time granularity|Maximum time range per query|Historical data available|Data delay|
       * |---|---|---|---|
       * |5 minutes|3 days|93 days|15 minutes|
       * |1 hour|31 days|186 days|4 hours|
       * |1 day|366 days|366 days|04:00 on the next day|
       *
       * @param request DescribeDcdnDomainQpsDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnDomainQpsDataResponse
       */
      Models::DescribeDcdnDomainQpsDataResponse describeDcdnDomainQpsDataWithOptions(const Models::DescribeDcdnDomainQpsDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of requests to an accelerated domain name per second. You can query data in the last 90 days.
       *
       * @description * You can call this operation up to 100 times per second per account.
       * * If you do not set the **StartTime** or **EndTime** parameter, the request returns the data collected in the last 24 hours. If you set both the **StartTime** and **EndTime** parameters, the request returns the data collected within the specified time range.
       * **Time granularity**
       * The time granularity supported by the Interval parameter, the maximum time period within which historical data is available, and the data delay vary with the maximum time range per query, as described in the following table.
       * |Time granularity|Maximum time range per query|Historical data available|Data delay|
       * |---|---|---|---|
       * |5 minutes|3 days|93 days|15 minutes|
       * |1 hour|31 days|186 days|4 hours|
       * |1 day|366 days|366 days|04:00 on the next day|
       *
       * @param request DescribeDcdnDomainQpsDataRequest
       * @return DescribeDcdnDomainQpsDataResponse
       */
      Models::DescribeDcdnDomainQpsDataResponse describeDcdnDomainQpsData(const Models::DescribeDcdnDomainQpsDataRequest &request);

      /**
       * @summary The number of queries per second in the Chinese mainland.
       *
       * @description * You can call this operation up to 20 times per second per account.
       * * If you do not set the **StartTime** or **EndTime** parameter, the request returns the data collected in the last 24 hours. If you set both the **StartTime** and **EndTime** parameters, the request returns the data collected within the specified time range.
       * **Time granularity**
       * The time granularity supported by the Interval parameter, the maximum time period within which historical data is available, and the data delay vary with the time range to query, as described in the following table.
       * |Time granularity|Maximum time range per query|Historical data available|Data delay|
       * |---|---|---|---|
       * |5 minutes|3 days|93 days|15 minutes|
       * |1 hour|31 days|186 days|4 hours|
       * |1 day|366 days|366 days|04:00 on the next day|
       *
       * @param request DescribeDcdnDomainQpsDataByLayerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnDomainQpsDataByLayerResponse
       */
      Models::DescribeDcdnDomainQpsDataByLayerResponse describeDcdnDomainQpsDataByLayerWithOptions(const Models::DescribeDcdnDomainQpsDataByLayerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The number of queries per second in the Chinese mainland.
       *
       * @description * You can call this operation up to 20 times per second per account.
       * * If you do not set the **StartTime** or **EndTime** parameter, the request returns the data collected in the last 24 hours. If you set both the **StartTime** and **EndTime** parameters, the request returns the data collected within the specified time range.
       * **Time granularity**
       * The time granularity supported by the Interval parameter, the maximum time period within which historical data is available, and the data delay vary with the time range to query, as described in the following table.
       * |Time granularity|Maximum time range per query|Historical data available|Data delay|
       * |---|---|---|---|
       * |5 minutes|3 days|93 days|15 minutes|
       * |1 hour|31 days|186 days|4 hours|
       * |1 day|366 days|366 days|04:00 on the next day|
       *
       * @param request DescribeDcdnDomainQpsDataByLayerRequest
       * @return DescribeDcdnDomainQpsDataByLayerResponse
       */
      Models::DescribeDcdnDomainQpsDataByLayerResponse describeDcdnDomainQpsDataByLayer(const Models::DescribeDcdnDomainQpsDataByLayerRequest &request);

      /**
       * @summary Queries the real-time network bandwidth of a domain name.
       *
       * @description * You can call this operation up to 10 times per second per account.
       * * If you do not specify **StartTime** or **EndTime**, the request returns the data collected in the last hour by default. If you specify both parameters, the request returns the data collected within the specified time range.
       * **Time granularity**
       * The time granularity varies with the time range specified by the StartTime and EndTime parameters. The following table describes the time period within which historical data is available and the data delay.
       * |Time granularity|Maximum time range per query|Historical data available|Data delay|
       * |---|---|---|---|
       * |1 minute|1 hour|7 days|5 minutes|
       * |5 minutes|3 days|93 days|15 minutes|
       * |1 hour|31 days|186 days|3 to 4 hours|
       *
       * @param request DescribeDcdnDomainRealTimeBpsDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnDomainRealTimeBpsDataResponse
       */
      Models::DescribeDcdnDomainRealTimeBpsDataResponse describeDcdnDomainRealTimeBpsDataWithOptions(const Models::DescribeDcdnDomainRealTimeBpsDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the real-time network bandwidth of a domain name.
       *
       * @description * You can call this operation up to 10 times per second per account.
       * * If you do not specify **StartTime** or **EndTime**, the request returns the data collected in the last hour by default. If you specify both parameters, the request returns the data collected within the specified time range.
       * **Time granularity**
       * The time granularity varies with the time range specified by the StartTime and EndTime parameters. The following table describes the time period within which historical data is available and the data delay.
       * |Time granularity|Maximum time range per query|Historical data available|Data delay|
       * |---|---|---|---|
       * |1 minute|1 hour|7 days|5 minutes|
       * |5 minutes|3 days|93 days|15 minutes|
       * |1 hour|31 days|186 days|3 to 4 hours|
       *
       * @param request DescribeDcdnDomainRealTimeBpsDataRequest
       * @return DescribeDcdnDomainRealTimeBpsDataResponse
       */
      Models::DescribeDcdnDomainRealTimeBpsDataResponse describeDcdnDomainRealTimeBpsData(const Models::DescribeDcdnDomainRealTimeBpsDataRequest &request);

      /**
       * @summary Queries byte hit ratios at a time granularity of 1 minute.
       *
       * @description * You can call this operation up to 10 times per second per account.
       * * The network traffic destined for different domain names may be redirected to the same origin server. Therefore, the byte hit ratios may be inaccurate. The accuracy of query results is based on the actual configurations.
       * * If you do not set the **StartTime** or **EndTime** parameter, the request returns the data collected in the last hour. If you set both the **StartTime** and **EndTime** parameters, the request returns the data collected within the specified time range.
       * **Time granularity**
       * The time granularity varies with the time range specified by the StartTime and EndTime parameters. The following table describes the time period within which historical data is available and the data delay.
       * | Time granularity | Maximum time range per query | Historical data available | Data delay |
       * |----|------|-----|--------|
       * | 1 minute | 1 hour | 7 days | 5 minutes |
       * | 5 minutes | 3 days | 93 days | 15 minutes |
       * | 1 hour | 31 days | 186 days | 4 hours |
       *
       * @param request DescribeDcdnDomainRealTimeByteHitRateDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnDomainRealTimeByteHitRateDataResponse
       */
      Models::DescribeDcdnDomainRealTimeByteHitRateDataResponse describeDcdnDomainRealTimeByteHitRateDataWithOptions(const Models::DescribeDcdnDomainRealTimeByteHitRateDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries byte hit ratios at a time granularity of 1 minute.
       *
       * @description * You can call this operation up to 10 times per second per account.
       * * The network traffic destined for different domain names may be redirected to the same origin server. Therefore, the byte hit ratios may be inaccurate. The accuracy of query results is based on the actual configurations.
       * * If you do not set the **StartTime** or **EndTime** parameter, the request returns the data collected in the last hour. If you set both the **StartTime** and **EndTime** parameters, the request returns the data collected within the specified time range.
       * **Time granularity**
       * The time granularity varies with the time range specified by the StartTime and EndTime parameters. The following table describes the time period within which historical data is available and the data delay.
       * | Time granularity | Maximum time range per query | Historical data available | Data delay |
       * |----|------|-----|--------|
       * | 1 minute | 1 hour | 7 days | 5 minutes |
       * | 5 minutes | 3 days | 93 days | 15 minutes |
       * | 1 hour | 31 days | 186 days | 4 hours |
       *
       * @param request DescribeDcdnDomainRealTimeByteHitRateDataRequest
       * @return DescribeDcdnDomainRealTimeByteHitRateDataResponse
       */
      Models::DescribeDcdnDomainRealTimeByteHitRateDataResponse describeDcdnDomainRealTimeByteHitRateData(const Models::DescribeDcdnDomainRealTimeByteHitRateDataRequest &request);

      /**
       * @summary Queries traffic usage through each Internet service provider (ISP) and the number of visits in each region. The resolution of the data is one minute. The maximum time range to query for this operation is 10 minutes.
       *
       * @description > 
       * > - You can call this operation up to 10 times per second per account.
       * > - This operation is available only to users whose daily peak bandwidth value is higher than 1 Gbit/s. If you meet this requirement, you can [submit a ticket](https://smartservice.console.aliyun.com/service/create-ticket-intl) to apply for permissions to use this operation.
       *
       * @param request DescribeDcdnDomainRealTimeDetailDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnDomainRealTimeDetailDataResponse
       */
      Models::DescribeDcdnDomainRealTimeDetailDataResponse describeDcdnDomainRealTimeDetailDataWithOptions(const Models::DescribeDcdnDomainRealTimeDetailDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries traffic usage through each Internet service provider (ISP) and the number of visits in each region. The resolution of the data is one minute. The maximum time range to query for this operation is 10 minutes.
       *
       * @description > 
       * > - You can call this operation up to 10 times per second per account.
       * > - This operation is available only to users whose daily peak bandwidth value is higher than 1 Gbit/s. If you meet this requirement, you can [submit a ticket](https://smartservice.console.aliyun.com/service/create-ticket-intl) to apply for permissions to use this operation.
       *
       * @param request DescribeDcdnDomainRealTimeDetailDataRequest
       * @return DescribeDcdnDomainRealTimeDetailDataResponse
       */
      Models::DescribeDcdnDomainRealTimeDetailDataResponse describeDcdnDomainRealTimeDetailData(const Models::DescribeDcdnDomainRealTimeDetailDataRequest &request);

      /**
       * @summary Queries the total number and proportions of HTTP status codes returned from one or more accelerated domain names.
       *
       * @description * You can call this operation up to 10 times per second per account.
       * * If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last hour. If you set both the StartTime and EndTime parameters, the request returns the data collected within the specified time range.
       * **Time granularity**
       * The time granularity varies with the time range specified by the StartTime and EndTime parameters. The following table describes the time period within which historical data is available and the data delay.
       * |Time granularity|Maximum time range per query|Historical data available|Data delay|
       * |---|---|---|---|
       * |1 minute|1 hour|7 days|5 minutes|
       * |5 minutes|3 days|93 days|15 minutes|
       * |1 hour|31 days|186 days|4 hours|
       *
       * @param request DescribeDcdnDomainRealTimeHttpCodeDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnDomainRealTimeHttpCodeDataResponse
       */
      Models::DescribeDcdnDomainRealTimeHttpCodeDataResponse describeDcdnDomainRealTimeHttpCodeDataWithOptions(const Models::DescribeDcdnDomainRealTimeHttpCodeDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the total number and proportions of HTTP status codes returned from one or more accelerated domain names.
       *
       * @description * You can call this operation up to 10 times per second per account.
       * * If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last hour. If you set both the StartTime and EndTime parameters, the request returns the data collected within the specified time range.
       * **Time granularity**
       * The time granularity varies with the time range specified by the StartTime and EndTime parameters. The following table describes the time period within which historical data is available and the data delay.
       * |Time granularity|Maximum time range per query|Historical data available|Data delay|
       * |---|---|---|---|
       * |1 minute|1 hour|7 days|5 minutes|
       * |5 minutes|3 days|93 days|15 minutes|
       * |1 hour|31 days|186 days|4 hours|
       *
       * @param request DescribeDcdnDomainRealTimeHttpCodeDataRequest
       * @return DescribeDcdnDomainRealTimeHttpCodeDataResponse
       */
      Models::DescribeDcdnDomainRealTimeHttpCodeDataResponse describeDcdnDomainRealTimeHttpCodeData(const Models::DescribeDcdnDomainRealTimeHttpCodeDataRequest &request);

      /**
       * @summary The number of QPS for one or more accelerated domain names is queried. Data is collected every minute.
       *
       * @description * You can call this operation up to 10 times per second per account.
       * * If you do not specify the StartTime or EndTime parameter, the request returns the data collected in the last hour. If you specify both the StartTime and EndTime parameters, the request returns the data collected within the specified time range.
       * **Time granularity**
       * The time granularity varies with the time range specified by the StartTime and EndTime parameters. The following table describes the time period within which historical data is available and the data delay.
       * |Time granularity|Maximum time range per query|Historical data available|Data delay|
       * |---|---|---|---|
       * |1 minute|1 hour|7 days|5 minutes|
       * |5 minutes|3 days|93 days|15 minutes|
       * |1 hour|31 days|186 days|4 hours|
       *
       * @param request DescribeDcdnDomainRealTimeQpsDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnDomainRealTimeQpsDataResponse
       */
      Models::DescribeDcdnDomainRealTimeQpsDataResponse describeDcdnDomainRealTimeQpsDataWithOptions(const Models::DescribeDcdnDomainRealTimeQpsDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The number of QPS for one or more accelerated domain names is queried. Data is collected every minute.
       *
       * @description * You can call this operation up to 10 times per second per account.
       * * If you do not specify the StartTime or EndTime parameter, the request returns the data collected in the last hour. If you specify both the StartTime and EndTime parameters, the request returns the data collected within the specified time range.
       * **Time granularity**
       * The time granularity varies with the time range specified by the StartTime and EndTime parameters. The following table describes the time period within which historical data is available and the data delay.
       * |Time granularity|Maximum time range per query|Historical data available|Data delay|
       * |---|---|---|---|
       * |1 minute|1 hour|7 days|5 minutes|
       * |5 minutes|3 days|93 days|15 minutes|
       * |1 hour|31 days|186 days|4 hours|
       *
       * @param request DescribeDcdnDomainRealTimeQpsDataRequest
       * @return DescribeDcdnDomainRealTimeQpsDataResponse
       */
      Models::DescribeDcdnDomainRealTimeQpsDataResponse describeDcdnDomainRealTimeQpsData(const Models::DescribeDcdnDomainRealTimeQpsDataRequest &request);

      /**
       * @summary Queries the request hit rates with a time granularity of 1 minute.
       *
       * @description * You can call this operation up to 10 times per second per user.
       * * The network traffic destined for different domain names may be redirected to the same origin server. Therefore, the byte hit ratios may be inaccurate. The accuracy of query results is based on the actual configurations.
       * * If you do not set the **StartTime** or **EndTime** parameter, the request returns the data collected in the last hour. If you set both the **StartTime** and **EndTime** parameters, the request returns the data collected within the specified time range.
       * **Time granularity** The time granularity varies with the time range specified by the StartTime and EndTime parameters. The following table describes the time period within which historical data is available and the data delay.
       * |Time granularity|Maximum time range per query|Historical data available|Data delay|
       * |---|---|---|---|
       * |1 minute|1 hour|7 days|5 minutes|
       * |5 minutes|3 days|93 days|15 minutes|
       * |1 hour|31 days|186 days|4 hours|
       *
       * @param request DescribeDcdnDomainRealTimeReqHitRateDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnDomainRealTimeReqHitRateDataResponse
       */
      Models::DescribeDcdnDomainRealTimeReqHitRateDataResponse describeDcdnDomainRealTimeReqHitRateDataWithOptions(const Models::DescribeDcdnDomainRealTimeReqHitRateDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the request hit rates with a time granularity of 1 minute.
       *
       * @description * You can call this operation up to 10 times per second per user.
       * * The network traffic destined for different domain names may be redirected to the same origin server. Therefore, the byte hit ratios may be inaccurate. The accuracy of query results is based on the actual configurations.
       * * If you do not set the **StartTime** or **EndTime** parameter, the request returns the data collected in the last hour. If you set both the **StartTime** and **EndTime** parameters, the request returns the data collected within the specified time range.
       * **Time granularity** The time granularity varies with the time range specified by the StartTime and EndTime parameters. The following table describes the time period within which historical data is available and the data delay.
       * |Time granularity|Maximum time range per query|Historical data available|Data delay|
       * |---|---|---|---|
       * |1 minute|1 hour|7 days|5 minutes|
       * |5 minutes|3 days|93 days|15 minutes|
       * |1 hour|31 days|186 days|4 hours|
       *
       * @param request DescribeDcdnDomainRealTimeReqHitRateDataRequest
       * @return DescribeDcdnDomainRealTimeReqHitRateDataResponse
       */
      Models::DescribeDcdnDomainRealTimeReqHitRateDataResponse describeDcdnDomainRealTimeReqHitRateData(const Models::DescribeDcdnDomainRealTimeReqHitRateDataRequest &request);

      /**
       * @summary Queries the bandwidth data of back-to-origin requests. Data is collected every minute. You can query data collected in the last 7 days.
       *
       * @description *   You can call this operation up to 10 times per second per account.
       * *   If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last hour. If you set both the parameters, the request returns the data collected within the specified time range.
       * **Time granularity**
       * The time granularity varies with the time range specified by the StartTime and EndTime parameters. The following table describes the time period within which historical data is available and the data delay.
       * | Time granularity | Maximum time range per query | Historical data available | Data delay | 
       * |-----|-----|-----|--------| 
       * | 1 minute | 1 hour | 7 days | 5 minutes | 
       * | 5 minutes | 3 days | 93 days | 15 minutes | | 1 hour | 31 days | 186 days | 4 hours |
       *
       * @param request DescribeDcdnDomainRealTimeSrcBpsDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnDomainRealTimeSrcBpsDataResponse
       */
      Models::DescribeDcdnDomainRealTimeSrcBpsDataResponse describeDcdnDomainRealTimeSrcBpsDataWithOptions(const Models::DescribeDcdnDomainRealTimeSrcBpsDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the bandwidth data of back-to-origin requests. Data is collected every minute. You can query data collected in the last 7 days.
       *
       * @description *   You can call this operation up to 10 times per second per account.
       * *   If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last hour. If you set both the parameters, the request returns the data collected within the specified time range.
       * **Time granularity**
       * The time granularity varies with the time range specified by the StartTime and EndTime parameters. The following table describes the time period within which historical data is available and the data delay.
       * | Time granularity | Maximum time range per query | Historical data available | Data delay | 
       * |-----|-----|-----|--------| 
       * | 1 minute | 1 hour | 7 days | 5 minutes | 
       * | 5 minutes | 3 days | 93 days | 15 minutes | | 1 hour | 31 days | 186 days | 4 hours |
       *
       * @param request DescribeDcdnDomainRealTimeSrcBpsDataRequest
       * @return DescribeDcdnDomainRealTimeSrcBpsDataResponse
       */
      Models::DescribeDcdnDomainRealTimeSrcBpsDataResponse describeDcdnDomainRealTimeSrcBpsData(const Models::DescribeDcdnDomainRealTimeSrcBpsDataRequest &request);

      /**
       * @summary Queries the proportions of HTTP status codes based on back-to-origin statistics with a time granularity of one minute.
       *
       * @description * You can call this operation up to 10 times per second per account.
       * * If you do not specify the StartTime or EndTime parameter, the request returns the data collected in the last hour. If you specify both the StartTime and EndTime parameters, the request returns the data collected within the specified time range.
       * **Time granularity**
       * The time granularity varies with the time range specified by the StartTime and EndTime parameters. The following table describes the time period within which historical data is available and the data delay.
       * |Time granularity|Maximum time range per query|Historical data available|Data delay|
       * |---|---|---|---|
       * |1 minute|1 hour|7 days|5 minutes|
       * |5 minutes|3 days|93 days|15 minutes|
       * |1 hour|31 days|186 days|4 hours|
       *
       * @param request DescribeDcdnDomainRealTimeSrcHttpCodeDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnDomainRealTimeSrcHttpCodeDataResponse
       */
      Models::DescribeDcdnDomainRealTimeSrcHttpCodeDataResponse describeDcdnDomainRealTimeSrcHttpCodeDataWithOptions(const Models::DescribeDcdnDomainRealTimeSrcHttpCodeDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the proportions of HTTP status codes based on back-to-origin statistics with a time granularity of one minute.
       *
       * @description * You can call this operation up to 10 times per second per account.
       * * If you do not specify the StartTime or EndTime parameter, the request returns the data collected in the last hour. If you specify both the StartTime and EndTime parameters, the request returns the data collected within the specified time range.
       * **Time granularity**
       * The time granularity varies with the time range specified by the StartTime and EndTime parameters. The following table describes the time period within which historical data is available and the data delay.
       * |Time granularity|Maximum time range per query|Historical data available|Data delay|
       * |---|---|---|---|
       * |1 minute|1 hour|7 days|5 minutes|
       * |5 minutes|3 days|93 days|15 minutes|
       * |1 hour|31 days|186 days|4 hours|
       *
       * @param request DescribeDcdnDomainRealTimeSrcHttpCodeDataRequest
       * @return DescribeDcdnDomainRealTimeSrcHttpCodeDataResponse
       */
      Models::DescribeDcdnDomainRealTimeSrcHttpCodeDataResponse describeDcdnDomainRealTimeSrcHttpCodeData(const Models::DescribeDcdnDomainRealTimeSrcHttpCodeDataRequest &request);

      /**
       * @summary Queries the origin traffic monitoring data for an accelerated domain name. Data is collected every minute. You can query data in the last 90 days.
       *
       * @description If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last hour. If you set both the StartTime and EndTime parameters, the request returns the data collected within the specified time range.
       * **Time granularity**
       * The time granularity varies with the time range specified by the StartTime and EndTime parameters. The following table describes the time period within which historical data is available and the data delay.
       * |Time granularity|Maximum time range per query|Historical data available|Data delay|
       * |---|---|---|---|
       * |1 minute|1 hour|7 days|5 minutes|
       * |5 minutes|3 days|93 days|15 minutes|
       * |1 hour|31 days|186 days|4 hours|
       *
       * @param request DescribeDcdnDomainRealTimeSrcTrafficDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnDomainRealTimeSrcTrafficDataResponse
       */
      Models::DescribeDcdnDomainRealTimeSrcTrafficDataResponse describeDcdnDomainRealTimeSrcTrafficDataWithOptions(const Models::DescribeDcdnDomainRealTimeSrcTrafficDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the origin traffic monitoring data for an accelerated domain name. Data is collected every minute. You can query data in the last 90 days.
       *
       * @description If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last hour. If you set both the StartTime and EndTime parameters, the request returns the data collected within the specified time range.
       * **Time granularity**
       * The time granularity varies with the time range specified by the StartTime and EndTime parameters. The following table describes the time period within which historical data is available and the data delay.
       * |Time granularity|Maximum time range per query|Historical data available|Data delay|
       * |---|---|---|---|
       * |1 minute|1 hour|7 days|5 minutes|
       * |5 minutes|3 days|93 days|15 minutes|
       * |1 hour|31 days|186 days|4 hours|
       *
       * @param request DescribeDcdnDomainRealTimeSrcTrafficDataRequest
       * @return DescribeDcdnDomainRealTimeSrcTrafficDataResponse
       */
      Models::DescribeDcdnDomainRealTimeSrcTrafficDataResponse describeDcdnDomainRealTimeSrcTrafficData(const Models::DescribeDcdnDomainRealTimeSrcTrafficDataRequest &request);

      /**
       * @summary Queries the traffic monitoring data of an accelerated domain name. Data is collected every minute.
       *
       * @description You can call this operation up to 50 times per second per user.
       * **Time granularity**
       * The time granularity varies with the time range specified by the StartTime and EndTime parameters. The following table describes the time period within which historical data is available and the data delay.
       * |Time granularity|Maximum time range per query|Historical data available|Data delay|
       * |---|---|---|---|
       * |1 minute|1 hour|7 days|5 minutes|
       * |5 minutes|3 days|93 days|15 minutes|
       * |1 hour|31 days|186 days|4 hours|
       *
       * @param request DescribeDcdnDomainRealTimeTrafficDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnDomainRealTimeTrafficDataResponse
       */
      Models::DescribeDcdnDomainRealTimeTrafficDataResponse describeDcdnDomainRealTimeTrafficDataWithOptions(const Models::DescribeDcdnDomainRealTimeTrafficDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the traffic monitoring data of an accelerated domain name. Data is collected every minute.
       *
       * @description You can call this operation up to 50 times per second per user.
       * **Time granularity**
       * The time granularity varies with the time range specified by the StartTime and EndTime parameters. The following table describes the time period within which historical data is available and the data delay.
       * |Time granularity|Maximum time range per query|Historical data available|Data delay|
       * |---|---|---|---|
       * |1 minute|1 hour|7 days|5 minutes|
       * |5 minutes|3 days|93 days|15 minutes|
       * |1 hour|31 days|186 days|4 hours|
       *
       * @param request DescribeDcdnDomainRealTimeTrafficDataRequest
       * @return DescribeDcdnDomainRealTimeTrafficDataResponse
       */
      Models::DescribeDcdnDomainRealTimeTrafficDataResponse describeDcdnDomainRealTimeTrafficData(const Models::DescribeDcdnDomainRealTimeTrafficDataRequest &request);

      /**
       * @summary Queries regional distribution of users. Data is collected every day. You can query data within the last 90 days.
       *
       * @description > 
       * *   If you do not specify the StartTime and EndTime parameters, the data within the last 24 hours is queried. If you specify the StartTime and EndTime parameters, the data within the specified time range is queried.
       * *   You can call this operation up to 100 times per second per account.
       *
       * @param request DescribeDcdnDomainRegionDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnDomainRegionDataResponse
       */
      Models::DescribeDcdnDomainRegionDataResponse describeDcdnDomainRegionDataWithOptions(const Models::DescribeDcdnDomainRegionDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries regional distribution of users. Data is collected every day. You can query data within the last 90 days.
       *
       * @description > 
       * *   If you do not specify the StartTime and EndTime parameters, the data within the last 24 hours is queried. If you specify the StartTime and EndTime parameters, the data within the specified time range is queried.
       * *   You can call this operation up to 100 times per second per account.
       *
       * @param request DescribeDcdnDomainRegionDataRequest
       * @return DescribeDcdnDomainRegionDataResponse
       */
      Models::DescribeDcdnDomainRegionDataResponse describeDcdnDomainRegionData(const Models::DescribeDcdnDomainRegionDataRequest &request);

      /**
       * @summary Queries the environment configuration in the canary release environment.
       *
       * @description > You can call this operation up to 30 times per second per account.
       *
       * @param request DescribeDcdnDomainStagingConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnDomainStagingConfigResponse
       */
      Models::DescribeDcdnDomainStagingConfigResponse describeDcdnDomainStagingConfigWithOptions(const Models::DescribeDcdnDomainStagingConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the environment configuration in the canary release environment.
       *
       * @description > You can call this operation up to 30 times per second per account.
       *
       * @param request DescribeDcdnDomainStagingConfigRequest
       * @return DescribeDcdnDomainStagingConfigResponse
       */
      Models::DescribeDcdnDomainStagingConfigResponse describeDcdnDomainStagingConfig(const Models::DescribeDcdnDomainStagingConfigRequest &request);

      /**
       * @summary Queries and sorts frequently requested web pages on a specified day. You can query data collected within the last 90 days.
       *
       * @description *   If you do not set the StartTime parameter, the data on the previous day is queried.
       * *   You can specify only one domain name.
       *
       * @param request DescribeDcdnDomainTopReferVisitRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnDomainTopReferVisitResponse
       */
      Models::DescribeDcdnDomainTopReferVisitResponse describeDcdnDomainTopReferVisitWithOptions(const Models::DescribeDcdnDomainTopReferVisitRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries and sorts frequently requested web pages on a specified day. You can query data collected within the last 90 days.
       *
       * @description *   If you do not set the StartTime parameter, the data on the previous day is queried.
       * *   You can specify only one domain name.
       *
       * @param request DescribeDcdnDomainTopReferVisitRequest
       * @return DescribeDcdnDomainTopReferVisitResponse
       */
      Models::DescribeDcdnDomainTopReferVisitResponse describeDcdnDomainTopReferVisit(const Models::DescribeDcdnDomainTopReferVisitRequest &request);

      /**
       * @summary Queries frequently requested URLs on a day.
       *
       * @description > You can query data in the last seven days.
       *
       * @param request DescribeDcdnDomainTopUrlVisitRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnDomainTopUrlVisitResponse
       */
      Models::DescribeDcdnDomainTopUrlVisitResponse describeDcdnDomainTopUrlVisitWithOptions(const Models::DescribeDcdnDomainTopUrlVisitRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries frequently requested URLs on a day.
       *
       * @description > You can query data in the last seven days.
       *
       * @param request DescribeDcdnDomainTopUrlVisitRequest
       * @return DescribeDcdnDomainTopUrlVisitResponse
       */
      Models::DescribeDcdnDomainTopUrlVisitResponse describeDcdnDomainTopUrlVisit(const Models::DescribeDcdnDomainTopUrlVisitRequest &request);

      /**
       * @summary Queries the network traffic of accelerated domain names. You can query data collected in the last 90 days.
       *
       * @description * If you do not set the **StartTime** or **EndTime** parameter, the request returns the data collected in the last 24 hours. If you set both the **StartTime** and **EndTime** parameters, the request returns the data collected within the specified time range.
       * * You can call this operation up to 100 times per second per account.
       * **Time granularity**
       * The time granularity supported by the Interval parameter, the maximum time period within which historical data is available, and the data delay vary with the maximum time range per query, as described in the following table.
       * |Time granularity|Maximum time range per query|Historical data available|Data delay|
       * |---|---|---|---|
       * |5 minutes|3 days|93 days|15 minutes|
       * |1 hour|31 days|186 days|4 hours|
       * |1 day|366 days|366 days|04:00 on the next day|
       *
       * @param request DescribeDcdnDomainTrafficDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnDomainTrafficDataResponse
       */
      Models::DescribeDcdnDomainTrafficDataResponse describeDcdnDomainTrafficDataWithOptions(const Models::DescribeDcdnDomainTrafficDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the network traffic of accelerated domain names. You can query data collected in the last 90 days.
       *
       * @description * If you do not set the **StartTime** or **EndTime** parameter, the request returns the data collected in the last 24 hours. If you set both the **StartTime** and **EndTime** parameters, the request returns the data collected within the specified time range.
       * * You can call this operation up to 100 times per second per account.
       * **Time granularity**
       * The time granularity supported by the Interval parameter, the maximum time period within which historical data is available, and the data delay vary with the maximum time range per query, as described in the following table.
       * |Time granularity|Maximum time range per query|Historical data available|Data delay|
       * |---|---|---|---|
       * |5 minutes|3 days|93 days|15 minutes|
       * |1 hour|31 days|186 days|4 hours|
       * |1 day|366 days|366 days|04:00 on the next day|
       *
       * @param request DescribeDcdnDomainTrafficDataRequest
       * @return DescribeDcdnDomainTrafficDataResponse
       */
      Models::DescribeDcdnDomainTrafficDataResponse describeDcdnDomainTrafficData(const Models::DescribeDcdnDomainTrafficDataRequest &request);

      /**
       * @summary Queries resource usage about domain names in a billable region.
       *
       * @description * You can call this operation up to 10 times per second per account.
       * * Usage data includes traffic (measured in bytes), bandwidth values (measured in bit/s), and the number of requests.
       * **Time granularity**
       * The time granularity supported by the Interval parameter, the maximum time period within which historical data is available, and the data delay vary with the maximum time range per query, as described in the following table.
       * |Time granularity|Maximum time range per query|Historical data available|Data delay|
       * |---|---|---|---|
       * |5 minutes|3 days|93 days|15 minutes|
       * |1 hour|31 days|186 days|4 hours|
       * |1 day|366 days|366 days|04:00 on the next day|
       *
       * @param request DescribeDcdnDomainUsageDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnDomainUsageDataResponse
       */
      Models::DescribeDcdnDomainUsageDataResponse describeDcdnDomainUsageDataWithOptions(const Models::DescribeDcdnDomainUsageDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries resource usage about domain names in a billable region.
       *
       * @description * You can call this operation up to 10 times per second per account.
       * * Usage data includes traffic (measured in bytes), bandwidth values (measured in bit/s), and the number of requests.
       * **Time granularity**
       * The time granularity supported by the Interval parameter, the maximum time period within which historical data is available, and the data delay vary with the maximum time range per query, as described in the following table.
       * |Time granularity|Maximum time range per query|Historical data available|Data delay|
       * |---|---|---|---|
       * |5 minutes|3 days|93 days|15 minutes|
       * |1 hour|31 days|186 days|4 hours|
       * |1 day|366 days|366 days|04:00 on the next day|
       *
       * @param request DescribeDcdnDomainUsageDataRequest
       * @return DescribeDcdnDomainUsageDataResponse
       */
      Models::DescribeDcdnDomainUsageDataResponse describeDcdnDomainUsageData(const Models::DescribeDcdnDomainUsageDataRequest &request);

      /**
       * @summary Queries the number of unique visitors (UVs) to an accelerated domain name. Data is collected every hour. You can query data within the last 90 days.
       *
       * @description *   If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last 24 hours. If you set both these parameters, the request returns the data collected within the specified time range.
       * *   You can specify only one accelerated domain name or all the accelerated domain names that belong to your Alibaba Cloud account.
       *
       * @param request DescribeDcdnDomainUvDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnDomainUvDataResponse
       */
      Models::DescribeDcdnDomainUvDataResponse describeDcdnDomainUvDataWithOptions(const Models::DescribeDcdnDomainUvDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of unique visitors (UVs) to an accelerated domain name. Data is collected every hour. You can query data within the last 90 days.
       *
       * @description *   If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last 24 hours. If you set both these parameters, the request returns the data collected within the specified time range.
       * *   You can specify only one accelerated domain name or all the accelerated domain names that belong to your Alibaba Cloud account.
       *
       * @param request DescribeDcdnDomainUvDataRequest
       * @return DescribeDcdnDomainUvDataResponse
       */
      Models::DescribeDcdnDomainUvDataResponse describeDcdnDomainUvData(const Models::DescribeDcdnDomainUvDataRequest &request);

      /**
       * @summary Queries bandwidth of one or more accelerated domain names for which WebSocket is enabled. You can query the data that is collected over the last 90 days.
       *
       * @description * You can call this operation up to 100 times per second per account.
       * * If you do not set the **StartTime** or **EndTime** parameter, the request returns the data collected in the last 24 hours. If you set both the **StartTime** and **EndTime** parameters, the request returns the data collected within the specified time range.
       * **Time granularity**
       * The time granularity supported by the Interval parameter, the maximum time period within which historical data is available, and the data delay vary with the maximum time range per query, as described in the following table.
       * |Time granularity|Maximum time range per query|Historical data available|Data delay|
       * |---|---|---|---|
       * |5 minutes|3 days|93 days|15 minutes|
       * |1 hour|31 days|186 days|4 hours|
       * |1 day|366 days|366 days|04:00 on the next day|
       *
       * @param request DescribeDcdnDomainWebsocketBpsDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnDomainWebsocketBpsDataResponse
       */
      Models::DescribeDcdnDomainWebsocketBpsDataResponse describeDcdnDomainWebsocketBpsDataWithOptions(const Models::DescribeDcdnDomainWebsocketBpsDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries bandwidth of one or more accelerated domain names for which WebSocket is enabled. You can query the data that is collected over the last 90 days.
       *
       * @description * You can call this operation up to 100 times per second per account.
       * * If you do not set the **StartTime** or **EndTime** parameter, the request returns the data collected in the last 24 hours. If you set both the **StartTime** and **EndTime** parameters, the request returns the data collected within the specified time range.
       * **Time granularity**
       * The time granularity supported by the Interval parameter, the maximum time period within which historical data is available, and the data delay vary with the maximum time range per query, as described in the following table.
       * |Time granularity|Maximum time range per query|Historical data available|Data delay|
       * |---|---|---|---|
       * |5 minutes|3 days|93 days|15 minutes|
       * |1 hour|31 days|186 days|4 hours|
       * |1 day|366 days|366 days|04:00 on the next day|
       *
       * @param request DescribeDcdnDomainWebsocketBpsDataRequest
       * @return DescribeDcdnDomainWebsocketBpsDataResponse
       */
      Models::DescribeDcdnDomainWebsocketBpsDataResponse describeDcdnDomainWebsocketBpsData(const Models::DescribeDcdnDomainWebsocketBpsDataRequest &request);

      /**
       * @summary The total number and proportions of HTTP status codes returned from one or more accelerated domain names for which WebSocket is enabled are queried. Data can be collected at minimum intervals of 5 minutes.
       *
       * @description You can call this operation up to 100 times per second per account.
       * **Time granularity**
       * The time granularity supported by the Interval parameter, the maximum time period within which historical data is available, and the data delay vary with the time range to query, as described in the following table.
       * |Time granularity|Maximum time range per query|Historical data available|Data delay|
       * |---|---|---|---|
       * |5 minutes|3 days|93 days|15 minutes|
       * |1 hour|31 days|186 days|4 hours|
       * |1 day|366 days|366 days|04:00 on the next day|
       *
       * @param request DescribeDcdnDomainWebsocketHttpCodeDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnDomainWebsocketHttpCodeDataResponse
       */
      Models::DescribeDcdnDomainWebsocketHttpCodeDataResponse describeDcdnDomainWebsocketHttpCodeDataWithOptions(const Models::DescribeDcdnDomainWebsocketHttpCodeDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The total number and proportions of HTTP status codes returned from one or more accelerated domain names for which WebSocket is enabled are queried. Data can be collected at minimum intervals of 5 minutes.
       *
       * @description You can call this operation up to 100 times per second per account.
       * **Time granularity**
       * The time granularity supported by the Interval parameter, the maximum time period within which historical data is available, and the data delay vary with the time range to query, as described in the following table.
       * |Time granularity|Maximum time range per query|Historical data available|Data delay|
       * |---|---|---|---|
       * |5 minutes|3 days|93 days|15 minutes|
       * |1 hour|31 days|186 days|4 hours|
       * |1 day|366 days|366 days|04:00 on the next day|
       *
       * @param request DescribeDcdnDomainWebsocketHttpCodeDataRequest
       * @return DescribeDcdnDomainWebsocketHttpCodeDataResponse
       */
      Models::DescribeDcdnDomainWebsocketHttpCodeDataResponse describeDcdnDomainWebsocketHttpCodeData(const Models::DescribeDcdnDomainWebsocketHttpCodeDataRequest &request);

      /**
       * @summary Queries the traffic monitoring data for an accelerated domain name with WebSocket enabled. You can query data in the last 90 days.
       *
       * @description * You can call this operation up to 100 times per second per account.
       * * If you do not set the **StartTime** or **EndTime** parameter, the request returns the data collected in the last 24 hours. If you set both the **StartTime** and **EndTime** parameters, the request returns the data collected within the specified time range.
       * **Time granularity**
       * The time granularity supported by the Interval parameter, the maximum time period within which historical data is available, and the data delay vary with the maximum time range per query, as described in the following table.
       * |Time granularity|Maximum time range per query|Historical data available|Data delay|
       * |---|---|---|---|
       * |5 minutes|3 days|93 days|15 minutes|
       * |1 hour|31 days|186 days|4 hours|
       * |1 day|366 days|366 days|04:00 on the next day|
       *
       * @param request DescribeDcdnDomainWebsocketTrafficDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnDomainWebsocketTrafficDataResponse
       */
      Models::DescribeDcdnDomainWebsocketTrafficDataResponse describeDcdnDomainWebsocketTrafficDataWithOptions(const Models::DescribeDcdnDomainWebsocketTrafficDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the traffic monitoring data for an accelerated domain name with WebSocket enabled. You can query data in the last 90 days.
       *
       * @description * You can call this operation up to 100 times per second per account.
       * * If you do not set the **StartTime** or **EndTime** parameter, the request returns the data collected in the last 24 hours. If you set both the **StartTime** and **EndTime** parameters, the request returns the data collected within the specified time range.
       * **Time granularity**
       * The time granularity supported by the Interval parameter, the maximum time period within which historical data is available, and the data delay vary with the maximum time range per query, as described in the following table.
       * |Time granularity|Maximum time range per query|Historical data available|Data delay|
       * |---|---|---|---|
       * |5 minutes|3 days|93 days|15 minutes|
       * |1 hour|31 days|186 days|4 hours|
       * |1 day|366 days|366 days|04:00 on the next day|
       *
       * @param request DescribeDcdnDomainWebsocketTrafficDataRequest
       * @return DescribeDcdnDomainWebsocketTrafficDataResponse
       */
      Models::DescribeDcdnDomainWebsocketTrafficDataResponse describeDcdnDomainWebsocketTrafficData(const Models::DescribeDcdnDomainWebsocketTrafficDataRequest &request);

      /**
       * @summary Queries DCDN-accelerated domain names by origin server.
       *
       * @param request DescribeDcdnDomainsBySourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnDomainsBySourceResponse
       */
      Models::DescribeDcdnDomainsBySourceResponse describeDcdnDomainsBySourceWithOptions(const Models::DescribeDcdnDomainsBySourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries DCDN-accelerated domain names by origin server.
       *
       * @param request DescribeDcdnDomainsBySourceRequest
       * @return DescribeDcdnDomainsBySourceResponse
       */
      Models::DescribeDcdnDomainsBySourceResponse describeDcdnDomainsBySource(const Models::DescribeDcdnDomainsBySourceRequest &request);

      /**
       * @summary Queries the number of times that a routine is executed within a specified period of time.
       *
       * @description *   You can call this operation up to 10 times per second per account.
       * *   The minimum time granularity for a query is 1 hour. The maximum time span for a query is 24 hours. The time period within which historical data is available for a query is 366 days.
       *
       * @param request DescribeDcdnErUsageDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnErUsageDataResponse
       */
      Models::DescribeDcdnErUsageDataResponse describeDcdnErUsageDataWithOptions(const Models::DescribeDcdnErUsageDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of times that a routine is executed within a specified period of time.
       *
       * @description *   You can call this operation up to 10 times per second per account.
       * *   The minimum time granularity for a query is 1 hour. The maximum time span for a query is 24 hours. The time period within which historical data is available for a query is 366 days.
       *
       * @param request DescribeDcdnErUsageDataRequest
       * @return DescribeDcdnErUsageDataResponse
       */
      Models::DescribeDcdnErUsageDataResponse describeDcdnErUsageData(const Models::DescribeDcdnErUsageDataRequest &request);

      /**
       * @summary Queries the configurations of blocked IP addresses.
       *
       * @description > *   If you specify IP addresses or CIDR blocks, IP addresses that are effective and the corresponding expiration time are returned. If you do not specify IP addresses or CIDR blocks, all effective IP addresses and the corresponding expiration time are returned.
       * > *   The results are written to OSS and returned as OSS URLs. The content in OSS objects is in the format of `IP address-Corresponding expiration time`. The expiration time is in the YYYY-MM-DD hh:mm:ss format.
       * > *   You can share OSS URLs with others. The shared URLs are valid for three days.
       *
       * @param request DescribeDcdnFullDomainsBlockIPConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnFullDomainsBlockIPConfigResponse
       */
      Models::DescribeDcdnFullDomainsBlockIPConfigResponse describeDcdnFullDomainsBlockIPConfigWithOptions(const Models::DescribeDcdnFullDomainsBlockIPConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configurations of blocked IP addresses.
       *
       * @description > *   If you specify IP addresses or CIDR blocks, IP addresses that are effective and the corresponding expiration time are returned. If you do not specify IP addresses or CIDR blocks, all effective IP addresses and the corresponding expiration time are returned.
       * > *   The results are written to OSS and returned as OSS URLs. The content in OSS objects is in the format of `IP address-Corresponding expiration time`. The expiration time is in the YYYY-MM-DD hh:mm:ss format.
       * > *   You can share OSS URLs with others. The shared URLs are valid for three days.
       *
       * @param request DescribeDcdnFullDomainsBlockIPConfigRequest
       * @return DescribeDcdnFullDomainsBlockIPConfigResponse
       */
      Models::DescribeDcdnFullDomainsBlockIPConfigResponse describeDcdnFullDomainsBlockIPConfig(const Models::DescribeDcdnFullDomainsBlockIPConfigRequest &request);

      /**
       * @summary 查询用户海量封禁历史
       *
       * @description *   For a specified IP addresses and time range, the time when the IP address was delivered to the edge and the corresponding result are returned.
       * *   If a specified IP address or CIDR block has multiple blocking records in a specified time range, the records are sorted by delivery time in descending order.
       * *   The maximum time range to query is 90 days.
       * *   If no blocking record exists or delivery fails for the given IP address and time range, the delivery time is empty.
       *
       * @param request DescribeDcdnFullDomainsBlockIPHistoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnFullDomainsBlockIPHistoryResponse
       */
      Models::DescribeDcdnFullDomainsBlockIPHistoryResponse describeDcdnFullDomainsBlockIPHistoryWithOptions(const Models::DescribeDcdnFullDomainsBlockIPHistoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询用户海量封禁历史
       *
       * @description *   For a specified IP addresses and time range, the time when the IP address was delivered to the edge and the corresponding result are returned.
       * *   If a specified IP address or CIDR block has multiple blocking records in a specified time range, the records are sorted by delivery time in descending order.
       * *   The maximum time range to query is 90 days.
       * *   If no blocking record exists or delivery fails for the given IP address and time range, the delivery time is empty.
       *
       * @param request DescribeDcdnFullDomainsBlockIPHistoryRequest
       * @return DescribeDcdnFullDomainsBlockIPHistoryResponse
       */
      Models::DescribeDcdnFullDomainsBlockIPHistoryResponse describeDcdnFullDomainsBlockIPHistory(const Models::DescribeDcdnFullDomainsBlockIPHistoryRequest &request);

      /**
       * @summary Queries information about all certificates that belong to your account.
       *
       * @description > You can call this operation up to 100 times per second per account.
       *
       * @param request DescribeDcdnHttpsDomainListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnHttpsDomainListResponse
       */
      Models::DescribeDcdnHttpsDomainListResponse describeDcdnHttpsDomainListWithOptions(const Models::DescribeDcdnHttpsDomainListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about all certificates that belong to your account.
       *
       * @description > You can call this operation up to 100 times per second per account.
       *
       * @param request DescribeDcdnHttpsDomainListRequest
       * @return DescribeDcdnHttpsDomainListResponse
       */
      Models::DescribeDcdnHttpsDomainListResponse describeDcdnHttpsDomainList(const Models::DescribeDcdnHttpsDomainListRequest &request);

      /**
       * @summary Queries whether an IP address belongs to a POP.
       *
       * @description > You can call this operation up to 50 times per second per account.
       *
       * @param request DescribeDcdnIpInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnIpInfoResponse
       */
      Models::DescribeDcdnIpInfoResponse describeDcdnIpInfoWithOptions(const Models::DescribeDcdnIpInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries whether an IP address belongs to a POP.
       *
       * @description > You can call this operation up to 50 times per second per account.
       *
       * @param request DescribeDcdnIpInfoRequest
       * @return DescribeDcdnIpInfoResponse
       */
      Models::DescribeDcdnIpInfoResponse describeDcdnIpInfo(const Models::DescribeDcdnIpInfoRequest &request);

      /**
       * @summary Queries the back-to-origin CIDR blocks of IPA-accelerated domain names. If you want to call this API operation, you must submit a ticket to apply for the required permissions.
       *
       * @description >  This operation can be called globally up to 50 times per second. This operation can be called up to 10 times per second per account.
       *
       * @param request DescribeDcdnIpaDomainCidrRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnIpaDomainCidrResponse
       */
      Models::DescribeDcdnIpaDomainCidrResponse describeDcdnIpaDomainCidrWithOptions(const Models::DescribeDcdnIpaDomainCidrRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the back-to-origin CIDR blocks of IPA-accelerated domain names. If you want to call this API operation, you must submit a ticket to apply for the required permissions.
       *
       * @description >  This operation can be called globally up to 50 times per second. This operation can be called up to 10 times per second per account.
       *
       * @param request DescribeDcdnIpaDomainCidrRequest
       * @return DescribeDcdnIpaDomainCidrResponse
       */
      Models::DescribeDcdnIpaDomainCidrResponse describeDcdnIpaDomainCidr(const Models::DescribeDcdnIpaDomainCidrRequest &request);

      /**
       * @summary Queries the configurations of an accelerated domain name. You can query the configurations of one or more features in each request.
       *
       * @description > You can call this operation up to 20 times per second per account.
       *
       * @param request DescribeDcdnIpaDomainConfigsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnIpaDomainConfigsResponse
       */
      Models::DescribeDcdnIpaDomainConfigsResponse describeDcdnIpaDomainConfigsWithOptions(const Models::DescribeDcdnIpaDomainConfigsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configurations of an accelerated domain name. You can query the configurations of one or more features in each request.
       *
       * @description > You can call this operation up to 20 times per second per account.
       *
       * @param request DescribeDcdnIpaDomainConfigsRequest
       * @return DescribeDcdnIpaDomainConfigsResponse
       */
      Models::DescribeDcdnIpaDomainConfigsResponse describeDcdnIpaDomainConfigs(const Models::DescribeDcdnIpaDomainConfigsRequest &request);

      /**
       * @summary Queries the basic configuration information about an accelerated domain name.
       *
       * @description > You can call this operation up to 30 times per second per account.
       *
       * @param request DescribeDcdnIpaDomainDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnIpaDomainDetailResponse
       */
      Models::DescribeDcdnIpaDomainDetailResponse describeDcdnIpaDomainDetailWithOptions(const Models::DescribeDcdnIpaDomainDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the basic configuration information about an accelerated domain name.
       *
       * @description > You can call this operation up to 30 times per second per account.
       *
       * @param request DescribeDcdnIpaDomainDetailRequest
       * @return DescribeDcdnIpaDomainDetailResponse
       */
      Models::DescribeDcdnIpaDomainDetailResponse describeDcdnIpaDomainDetail(const Models::DescribeDcdnIpaDomainDetailRequest &request);

      /**
       * @summary Queries the status of IPA. The information includes the time when the service was activated, the current service status, the current billing method, and the billing method of the next cycle.
       *
       * @description **
       * **The maximum number of times that each user can call this operation per second is 20.
       *
       * @param request DescribeDcdnIpaServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnIpaServiceResponse
       */
      Models::DescribeDcdnIpaServiceResponse describeDcdnIpaServiceWithOptions(const Models::DescribeDcdnIpaServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of IPA. The information includes the time when the service was activated, the current service status, the current billing method, and the billing method of the next cycle.
       *
       * @description **
       * **The maximum number of times that each user can call this operation per second is 20.
       *
       * @param request DescribeDcdnIpaServiceRequest
       * @return DescribeDcdnIpaServiceResponse
       */
      Models::DescribeDcdnIpaServiceResponse describeDcdnIpaService(const Models::DescribeDcdnIpaServiceRequest &request);

      /**
       * @summary Queries information about all domain names that are accelerated by IP Application Accelerator (IPA) in your account. Fuzzy search and filtering by domain status are supported.
       *
       * @description > You can call this operation up to 30 times per second per account.
       *
       * @param request DescribeDcdnIpaUserDomainsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnIpaUserDomainsResponse
       */
      Models::DescribeDcdnIpaUserDomainsResponse describeDcdnIpaUserDomainsWithOptions(const Models::DescribeDcdnIpaUserDomainsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about all domain names that are accelerated by IP Application Accelerator (IPA) in your account. Fuzzy search and filtering by domain status are supported.
       *
       * @description > You can call this operation up to 30 times per second per account.
       *
       * @param request DescribeDcdnIpaUserDomainsRequest
       * @return DescribeDcdnIpaUserDomainsResponse
       */
      Models::DescribeDcdnIpaUserDomainsResponse describeDcdnIpaUserDomains(const Models::DescribeDcdnIpaUserDomainsRequest &request);

      /**
       * @summary Queries the information about the key-value pairs that belong to your account.
       *
       * @param request DescribeDcdnKvAccountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnKvAccountResponse
       */
      Models::DescribeDcdnKvAccountResponse describeDcdnKvAccountWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about the key-value pairs that belong to your account.
       *
       * @return DescribeDcdnKvAccountResponse
       */
      Models::DescribeDcdnKvAccountResponse describeDcdnKvAccount();

      /**
       * @summary Queries the KV status of an account.
       *
       * @param request DescribeDcdnKvAccountStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnKvAccountStatusResponse
       */
      Models::DescribeDcdnKvAccountStatusResponse describeDcdnKvAccountStatusWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the KV status of an account.
       *
       * @return DescribeDcdnKvAccountStatusResponse
       */
      Models::DescribeDcdnKvAccountStatusResponse describeDcdnKvAccountStatus();

      /**
       * @summary Queries the information about a namespace.
       *
       * @param request DescribeDcdnKvNamespaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnKvNamespaceResponse
       */
      Models::DescribeDcdnKvNamespaceResponse describeDcdnKvNamespaceWithOptions(const Models::DescribeDcdnKvNamespaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a namespace.
       *
       * @param request DescribeDcdnKvNamespaceRequest
       * @return DescribeDcdnKvNamespaceResponse
       */
      Models::DescribeDcdnKvNamespaceResponse describeDcdnKvNamespace(const Models::DescribeDcdnKvNamespaceRequest &request);

      /**
       * @summary Queries CIDR blocks of Dynamic Content Delivery Network (DCDN) points of presence (POPs).
       *
       * @description > *   To use this operation, [submit a ticket](https://workorder-intl.console.aliyun.com/?spm=5176.2020520001.aliyun_topbar.18.dbd44bd3e4f845#/ticket/createIndex).
       * > *   You can call this operation up to 100 times per second per account.
       *
       * @param request DescribeDcdnL2IpsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnL2IpsResponse
       */
      Models::DescribeDcdnL2IpsResponse describeDcdnL2IpsWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries CIDR blocks of Dynamic Content Delivery Network (DCDN) points of presence (POPs).
       *
       * @description > *   To use this operation, [submit a ticket](https://workorder-intl.console.aliyun.com/?spm=5176.2020520001.aliyun_topbar.18.dbd44bd3e4f845#/ticket/createIndex).
       * > *   You can call this operation up to 100 times per second per account.
       *
       * @return DescribeDcdnL2IpsResponse
       */
      Models::DescribeDcdnL2IpsResponse describeDcdnL2Ips();

      /**
       * @summary Queries the origin CIDR blocks by domain name. The CIDR blocks include IPv4 and IPv6 CIDR blocks.
       *
       * @param request DescribeDcdnL2VipsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnL2VipsResponse
       */
      Models::DescribeDcdnL2VipsResponse describeDcdnL2VipsWithOptions(const Models::DescribeDcdnL2VipsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the origin CIDR blocks by domain name. The CIDR blocks include IPv4 and IPv6 CIDR blocks.
       *
       * @param request DescribeDcdnL2VipsRequest
       * @return DescribeDcdnL2VipsResponse
       */
      Models::DescribeDcdnL2VipsResponse describeDcdnL2Vips(const Models::DescribeDcdnL2VipsRequest &request);

      /**
       * @summary Queries the status of the origin server for a DCDN-accelerated domain name.
       *
       * @param request DescribeDcdnOriginSiteHealthStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnOriginSiteHealthStatusResponse
       */
      Models::DescribeDcdnOriginSiteHealthStatusResponse describeDcdnOriginSiteHealthStatusWithOptions(const Models::DescribeDcdnOriginSiteHealthStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of the origin server for a DCDN-accelerated domain name.
       *
       * @param request DescribeDcdnOriginSiteHealthStatusRequest
       * @return DescribeDcdnOriginSiteHealthStatusResponse
       */
      Models::DescribeDcdnOriginSiteHealthStatusResponse describeDcdnOriginSiteHealthStatus(const Models::DescribeDcdnOriginSiteHealthStatusRequest &request);

      /**
       * @summary Queries the fields in real-time log entries.
       *
       * @description >  You can call this API operation up to 100 times per second per account.
       *
       * @param request DescribeDcdnRealTimeDeliveryFieldRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnRealTimeDeliveryFieldResponse
       */
      Models::DescribeDcdnRealTimeDeliveryFieldResponse describeDcdnRealTimeDeliveryFieldWithOptions(const Models::DescribeDcdnRealTimeDeliveryFieldRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the fields in real-time log entries.
       *
       * @description >  You can call this API operation up to 100 times per second per account.
       *
       * @param request DescribeDcdnRealTimeDeliveryFieldRequest
       * @return DescribeDcdnRealTimeDeliveryFieldResponse
       */
      Models::DescribeDcdnRealTimeDeliveryFieldResponse describeDcdnRealTimeDeliveryField(const Models::DescribeDcdnRealTimeDeliveryFieldRequest &request);

      /**
       * @summary Queries the maximum number and the remaining number of URLs and directories that can be refreshed or the maximum number and the remaining number of URLs that can be prefetched per day.
       *
       * @description > 
       * *   You can call the **RefreshDcdnObjectCaches** operation to refresh content and call the **PreloadDcdnObjectCaches** operation to prefetch content.
       * *   You can call this operation up to 20 times per second per account.
       *
       * @param request DescribeDcdnRefreshQuotaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnRefreshQuotaResponse
       */
      Models::DescribeDcdnRefreshQuotaResponse describeDcdnRefreshQuotaWithOptions(const Models::DescribeDcdnRefreshQuotaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the maximum number and the remaining number of URLs and directories that can be refreshed or the maximum number and the remaining number of URLs that can be prefetched per day.
       *
       * @description > 
       * *   You can call the **RefreshDcdnObjectCaches** operation to refresh content and call the **PreloadDcdnObjectCaches** operation to prefetch content.
       * *   You can call this operation up to 20 times per second per account.
       *
       * @param request DescribeDcdnRefreshQuotaRequest
       * @return DescribeDcdnRefreshQuotaResponse
       */
      Models::DescribeDcdnRefreshQuotaResponse describeDcdnRefreshQuota(const Models::DescribeDcdnRefreshQuotaRequest &request);

      /**
       * @summary Queries the status of refresh or prefetch tasks by task ID.
       *
       * @description > 
       * *   You can query data within the last three days.
       * *   You can call this operation up to 30 times per second per account.
       *
       * @param request DescribeDcdnRefreshTaskByIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnRefreshTaskByIdResponse
       */
      Models::DescribeDcdnRefreshTaskByIdResponse describeDcdnRefreshTaskByIdWithOptions(const Models::DescribeDcdnRefreshTaskByIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of refresh or prefetch tasks by task ID.
       *
       * @description > 
       * *   You can query data within the last three days.
       * *   You can call this operation up to 30 times per second per account.
       *
       * @param request DescribeDcdnRefreshTaskByIdRequest
       * @return DescribeDcdnRefreshTaskByIdResponse
       */
      Models::DescribeDcdnRefreshTaskByIdResponse describeDcdnRefreshTaskById(const Models::DescribeDcdnRefreshTaskByIdRequest &request);

      /**
       * @summary Queries the refresh or prefetch tasks. You can query the tasks in the last three days.
       *
       * @description *   You can query the refresh or prefetch tasks by ID or URL.
       * *   You can set both **TaskId** and **ObjectPath** in a request. If you do not set **TaskId** or **ObjectPath**, the data in the last 3 days on the first page is returned. By default, a maximum of 20 entries can be displayed on each page.
       * *   If you specify **DomainName** or **Status**, you must also specify **ObjectType**.
       * *   You can call this operation up to 10 times per second per account.
       *
       * @param request DescribeDcdnRefreshTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnRefreshTasksResponse
       */
      Models::DescribeDcdnRefreshTasksResponse describeDcdnRefreshTasksWithOptions(const Models::DescribeDcdnRefreshTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the refresh or prefetch tasks. You can query the tasks in the last three days.
       *
       * @description *   You can query the refresh or prefetch tasks by ID or URL.
       * *   You can set both **TaskId** and **ObjectPath** in a request. If you do not set **TaskId** or **ObjectPath**, the data in the last 3 days on the first page is returned. By default, a maximum of 20 entries can be displayed on each page.
       * *   If you specify **DomainName** or **Status**, you must also specify **ObjectType**.
       * *   You can call this operation up to 10 times per second per account.
       *
       * @param request DescribeDcdnRefreshTasksRequest
       * @return DescribeDcdnRefreshTasksResponse
       */
      Models::DescribeDcdnRefreshTasksResponse describeDcdnRefreshTasks(const Models::DescribeDcdnRefreshTasksRequest &request);

      /**
       * @summary Queries the list of Internet service providers (ISPs) and regions.
       *
       * @description >  You can call this operation up to 30 times per second per account.
       *
       * @param request DescribeDcdnRegionAndIspRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnRegionAndIspResponse
       */
      Models::DescribeDcdnRegionAndIspResponse describeDcdnRegionAndIspWithOptions(const Models::DescribeDcdnRegionAndIspRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of Internet service providers (ISPs) and regions.
       *
       * @description >  You can call this operation up to 30 times per second per account.
       *
       * @param request DescribeDcdnRegionAndIspRequest
       * @return DescribeDcdnRegionAndIspResponse
       */
      Models::DescribeDcdnRegionAndIspResponse describeDcdnRegionAndIsp(const Models::DescribeDcdnRegionAndIspRequest &request);

      /**
       * @summary Queries the content of an operations report.
       *
       * @description > You can call this operation up to three times per second per account.
       *
       * @param request DescribeDcdnReportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnReportResponse
       */
      Models::DescribeDcdnReportResponse describeDcdnReportWithOptions(const Models::DescribeDcdnReportRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the content of an operations report.
       *
       * @description > You can call this operation up to three times per second per account.
       *
       * @param request DescribeDcdnReportRequest
       * @return DescribeDcdnReportResponse
       */
      Models::DescribeDcdnReportResponse describeDcdnReport(const Models::DescribeDcdnReportRequest &request);

      /**
       * @summary Queries custom operations reports.
       *
       * @description > * This operation queries the metadata of all operations reports. The statistics in the reports are not returned.
       * > * You can call this operation up to three times per second per account.
       *
       * @param request DescribeDcdnReportListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnReportListResponse
       */
      Models::DescribeDcdnReportListResponse describeDcdnReportListWithOptions(const Models::DescribeDcdnReportListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries custom operations reports.
       *
       * @description > * This operation queries the metadata of all operations reports. The statistics in the reports are not returned.
       * > * You can call this operation up to three times per second per account.
       *
       * @param request DescribeDcdnReportListRequest
       * @return DescribeDcdnReportListResponse
       */
      Models::DescribeDcdnReportListResponse describeDcdnReportList(const Models::DescribeDcdnReportListRequest &request);

      /**
       * @summary Queries supported types of real-time logs.
       *
       * @param request DescribeDcdnSLSRealTimeLogTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnSLSRealTimeLogTypeResponse
       */
      Models::DescribeDcdnSLSRealTimeLogTypeResponse describeDcdnSLSRealTimeLogTypeWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries supported types of real-time logs.
       *
       * @return DescribeDcdnSLSRealTimeLogTypeResponse
       */
      Models::DescribeDcdnSLSRealTimeLogTypeResponse describeDcdnSLSRealTimeLogType();

      /**
       * @summary Queries a real-time log delivery project.
       *
       * @description > You can call this operation up to 100 times per second per account.
       *
       * @param request DescribeDcdnSLSRealtimeLogDeliveryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnSLSRealtimeLogDeliveryResponse
       */
      Models::DescribeDcdnSLSRealtimeLogDeliveryResponse describeDcdnSLSRealtimeLogDeliveryWithOptions(const Models::DescribeDcdnSLSRealtimeLogDeliveryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a real-time log delivery project.
       *
       * @description > You can call this operation up to 100 times per second per account.
       *
       * @param request DescribeDcdnSLSRealtimeLogDeliveryRequest
       * @return DescribeDcdnSLSRealtimeLogDeliveryResponse
       */
      Models::DescribeDcdnSLSRealtimeLogDeliveryResponse describeDcdnSLSRealtimeLogDelivery(const Models::DescribeDcdnSLSRealtimeLogDeliveryRequest &request);

      /**
       * @summary Queries the details about a ShangMi (SM) certificate.
       *
       * @description > You can call this operation up to 30 times per second per account.
       *
       * @param request DescribeDcdnSMCertificateDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnSMCertificateDetailResponse
       */
      Models::DescribeDcdnSMCertificateDetailResponse describeDcdnSMCertificateDetailWithOptions(const Models::DescribeDcdnSMCertificateDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details about a ShangMi (SM) certificate.
       *
       * @description > You can call this operation up to 30 times per second per account.
       *
       * @param request DescribeDcdnSMCertificateDetailRequest
       * @return DescribeDcdnSMCertificateDetailResponse
       */
      Models::DescribeDcdnSMCertificateDetailResponse describeDcdnSMCertificateDetail(const Models::DescribeDcdnSMCertificateDetailRequest &request);

      /**
       * @summary Queries the ShangMi (SM) certificates of an accelerated domain name.
       *
       * @description >  You can call this operation up to 30 times per second per account.
       *
       * @param request DescribeDcdnSMCertificateListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnSMCertificateListResponse
       */
      Models::DescribeDcdnSMCertificateListResponse describeDcdnSMCertificateListWithOptions(const Models::DescribeDcdnSMCertificateListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the ShangMi (SM) certificates of an accelerated domain name.
       *
       * @description >  You can call this operation up to 30 times per second per account.
       *
       * @param request DescribeDcdnSMCertificateListRequest
       * @return DescribeDcdnSMCertificateListResponse
       */
      Models::DescribeDcdnSMCertificateListResponse describeDcdnSMCertificateList(const Models::DescribeDcdnSMCertificateListRequest &request);

      /**
       * @summary Queries the certificates of accelerated domain names.
       *
       * @param request DescribeDcdnSSLCertificateListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnSSLCertificateListResponse
       */
      Models::DescribeDcdnSSLCertificateListResponse describeDcdnSSLCertificateListWithOptions(const Models::DescribeDcdnSSLCertificateListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the certificates of accelerated domain names.
       *
       * @param request DescribeDcdnSSLCertificateListRequest
       * @return DescribeDcdnSSLCertificateListResponse
       */
      Models::DescribeDcdnSSLCertificateListResponse describeDcdnSSLCertificateList(const Models::DescribeDcdnSSLCertificateListRequest &request);

      /**
       * @summary Creates an edge security drop-down list in the Dynamic Content Delivery Network (DCDN) console.
       *
       * @description > You can call this operation up to 50 times per second per account.
       *
       * @param request DescribeDcdnSecFuncInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnSecFuncInfoResponse
       */
      Models::DescribeDcdnSecFuncInfoResponse describeDcdnSecFuncInfoWithOptions(const Models::DescribeDcdnSecFuncInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an edge security drop-down list in the Dynamic Content Delivery Network (DCDN) console.
       *
       * @description > You can call this operation up to 50 times per second per account.
       *
       * @param request DescribeDcdnSecFuncInfoRequest
       * @return DescribeDcdnSecFuncInfoResponse
       */
      Models::DescribeDcdnSecFuncInfoResponse describeDcdnSecFuncInfo(const Models::DescribeDcdnSecFuncInfoRequest &request);

      /**
       * @summary Queries the version of secure Dynamic Route for CDN (DCDN) and the security rules.
       *
       * @description > You can call this operation up to 50 times per second per account.
       *
       * @param request DescribeDcdnSecSpecInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnSecSpecInfoResponse
       */
      Models::DescribeDcdnSecSpecInfoResponse describeDcdnSecSpecInfoWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the version of secure Dynamic Route for CDN (DCDN) and the security rules.
       *
       * @description > You can call this operation up to 50 times per second per account.
       *
       * @return DescribeDcdnSecSpecInfoResponse
       */
      Models::DescribeDcdnSecSpecInfoResponse describeDcdnSecSpecInfo();

      /**
       * @summary Queries information about the Dynamic Content Delivery Network (DCDN) service. The information includes the time when the service was activated, the current service status, the current billing method, and the billing method of the next cycle.
       *
       * @description > You can call this operation up to 30 times per second per account.
       *
       * @param request DescribeDcdnServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnServiceResponse
       */
      Models::DescribeDcdnServiceResponse describeDcdnServiceWithOptions(const Models::DescribeDcdnServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about the Dynamic Content Delivery Network (DCDN) service. The information includes the time when the service was activated, the current service status, the current billing method, and the billing method of the next cycle.
       *
       * @description > You can call this operation up to 30 times per second per account.
       *
       * @param request DescribeDcdnServiceRequest
       * @return DescribeDcdnServiceResponse
       */
      Models::DescribeDcdnServiceResponse describeDcdnService(const Models::DescribeDcdnServiceRequest &request);

      /**
       * @summary Queries valid virtual IP addresses (VIPs) in the staging environment.
       *
       * @description > You can call this operation up to 30 times per second per account.
       *
       * @param request DescribeDcdnStagingIpRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnStagingIpResponse
       */
      Models::DescribeDcdnStagingIpResponse describeDcdnStagingIpWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries valid virtual IP addresses (VIPs) in the staging environment.
       *
       * @description > You can call this operation up to 30 times per second per account.
       *
       * @return DescribeDcdnStagingIpResponse
       */
      Models::DescribeDcdnStagingIpResponse describeDcdnStagingIp();

      /**
       * @summary Queries custom operations reports.
       *
       * @description > *   By default, this operation queries all custom operations reports. However, only one operations report can be displayed. Therefore, only one operations report is returned.
       * > *   You can call this API operation up to three times per second per account.
       *
       * @param request DescribeDcdnSubListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnSubListResponse
       */
      Models::DescribeDcdnSubListResponse describeDcdnSubListWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries custom operations reports.
       *
       * @description > *   By default, this operation queries all custom operations reports. However, only one operations report can be displayed. Therefore, only one operations report is returned.
       * > *   You can call this API operation up to three times per second per account.
       *
       * @return DescribeDcdnSubListResponse
       */
      Models::DescribeDcdnSubListResponse describeDcdnSubList();

      /**
       * @summary Queries the tags of one or more resources.
       *
       * @description > You can call this operation up to 10 times per second per account.
       *
       * @param request DescribeDcdnTagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnTagResourcesResponse
       */
      Models::DescribeDcdnTagResourcesResponse describeDcdnTagResourcesWithOptions(const Models::DescribeDcdnTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the tags of one or more resources.
       *
       * @description > You can call this operation up to 10 times per second per account.
       *
       * @param request DescribeDcdnTagResourcesRequest
       * @return DescribeDcdnTagResourcesResponse
       */
      Models::DescribeDcdnTagResourcesResponse describeDcdnTagResources(const Models::DescribeDcdnTagResourcesRequest &request);

      /**
       * @summary Queries domain names ranked by network traffic. You can query data within the last 90 days.
       *
       * @description If you do not specify the StartTime and EndTime parameters, the data within the current month is queried. If you specify the StartTime and EndTime parameters, the data within the specified time range is queried.
       *
       * @param request DescribeDcdnTopDomainsByFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnTopDomainsByFlowResponse
       */
      Models::DescribeDcdnTopDomainsByFlowResponse describeDcdnTopDomainsByFlowWithOptions(const Models::DescribeDcdnTopDomainsByFlowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries domain names ranked by network traffic. You can query data within the last 90 days.
       *
       * @description If you do not specify the StartTime and EndTime parameters, the data within the current month is queried. If you specify the StartTime and EndTime parameters, the data within the specified time range is queried.
       *
       * @param request DescribeDcdnTopDomainsByFlowRequest
       * @return DescribeDcdnTopDomainsByFlowResponse
       */
      Models::DescribeDcdnTopDomainsByFlowResponse describeDcdnTopDomainsByFlow(const Models::DescribeDcdnTopDomainsByFlowRequest &request);

      /**
       * @summary Queries the billing records of an Alibaba Cloud account. The maximum time range that you can specify is one month.
       *
       * @description > You can call this operation up to 100 times per second per account.
       *
       * @param request DescribeDcdnUserBillHistoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnUserBillHistoryResponse
       */
      Models::DescribeDcdnUserBillHistoryResponse describeDcdnUserBillHistoryWithOptions(const Models::DescribeDcdnUserBillHistoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the billing records of an Alibaba Cloud account. The maximum time range that you can specify is one month.
       *
       * @description > You can call this operation up to 100 times per second per account.
       *
       * @param request DescribeDcdnUserBillHistoryRequest
       * @return DescribeDcdnUserBillHistoryResponse
       */
      Models::DescribeDcdnUserBillHistoryResponse describeDcdnUserBillHistory(const Models::DescribeDcdnUserBillHistoryRequest &request);

      /**
       * @summary Queries the metering method that is used in Dynamic Content Delivery Network (DCDN).
       *
       * @param request DescribeDcdnUserBillTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnUserBillTypeResponse
       */
      Models::DescribeDcdnUserBillTypeResponse describeDcdnUserBillTypeWithOptions(const Models::DescribeDcdnUserBillTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the metering method that is used in Dynamic Content Delivery Network (DCDN).
       *
       * @param request DescribeDcdnUserBillTypeRequest
       * @return DescribeDcdnUserBillTypeResponse
       */
      Models::DescribeDcdnUserBillTypeResponse describeDcdnUserBillType(const Models::DescribeDcdnUserBillTypeRequest &request);

      /**
       * @summary Queries the number of domain names whose SSL certificates are about to expire or have already expired.
       *
       * @description You can call this operation up to 100 times per second per account.
       *
       * @param request DescribeDcdnUserCertificateExpireCountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnUserCertificateExpireCountResponse
       */
      Models::DescribeDcdnUserCertificateExpireCountResponse describeDcdnUserCertificateExpireCountWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of domain names whose SSL certificates are about to expire or have already expired.
       *
       * @description You can call this operation up to 100 times per second per account.
       *
       * @return DescribeDcdnUserCertificateExpireCountResponse
       */
      Models::DescribeDcdnUserCertificateExpireCountResponse describeDcdnUserCertificateExpireCount();

      /**
       * @summary Queries the configurations of security features.
       *
       * @description You can call this operation up to 30 times per second per account.
       *
       * @param request DescribeDcdnUserConfigsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnUserConfigsResponse
       */
      Models::DescribeDcdnUserConfigsResponse describeDcdnUserConfigsWithOptions(const Models::DescribeDcdnUserConfigsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configurations of security features.
       *
       * @description You can call this operation up to 30 times per second per account.
       *
       * @param request DescribeDcdnUserConfigsRequest
       * @return DescribeDcdnUserConfigsResponse
       */
      Models::DescribeDcdnUserConfigsResponse describeDcdnUserConfigs(const Models::DescribeDcdnUserConfigsRequest &request);

      /**
       * @summary Queries the accelerated domain names that belong to your Alibaba Cloud account. You can filter domains by name or by status. Fuzzy match is supported when you filter domains by name.
       *
       * @description > You can call this operation up to 80 times per second per account.
       *
       * @param request DescribeDcdnUserDomainsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnUserDomainsResponse
       */
      Models::DescribeDcdnUserDomainsResponse describeDcdnUserDomainsWithOptions(const Models::DescribeDcdnUserDomainsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the accelerated domain names that belong to your Alibaba Cloud account. You can filter domains by name or by status. Fuzzy match is supported when you filter domains by name.
       *
       * @description > You can call this operation up to 80 times per second per account.
       *
       * @param request DescribeDcdnUserDomainsRequest
       * @return DescribeDcdnUserDomainsResponse
       */
      Models::DescribeDcdnUserDomainsResponse describeDcdnUserDomains(const Models::DescribeDcdnUserDomainsRequest &request);

      /**
       * @summary Queries all accelerated domain names with specified features configured that belong to your Alibaba Cloud account based on the FuncId parameter.
       *
       * @description > You can call this operation up to 100 times per second per account.
       *
       * @param request DescribeDcdnUserDomainsByFuncRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnUserDomainsByFuncResponse
       */
      Models::DescribeDcdnUserDomainsByFuncResponse describeDcdnUserDomainsByFuncWithOptions(const Models::DescribeDcdnUserDomainsByFuncRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all accelerated domain names with specified features configured that belong to your Alibaba Cloud account based on the FuncId parameter.
       *
       * @description > You can call this operation up to 100 times per second per account.
       *
       * @param request DescribeDcdnUserDomainsByFuncRequest
       * @return DescribeDcdnUserDomainsByFuncResponse
       */
      Models::DescribeDcdnUserDomainsByFuncResponse describeDcdnUserDomainsByFunc(const Models::DescribeDcdnUserDomainsByFuncRequest &request);

      /**
       * @summary Queries the resource quotas and the used resources.
       *
       * @description >  The maximum number of times that each user can call this operation per second is 30.
       *
       * @param request DescribeDcdnUserQuotaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnUserQuotaResponse
       */
      Models::DescribeDcdnUserQuotaResponse describeDcdnUserQuotaWithOptions(const Models::DescribeDcdnUserQuotaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the resource quotas and the used resources.
       *
       * @description >  The maximum number of times that each user can call this operation per second is 30.
       *
       * @param request DescribeDcdnUserQuotaRequest
       * @return DescribeDcdnUserQuotaResponse
       */
      Models::DescribeDcdnUserQuotaResponse describeDcdnUserQuota(const Models::DescribeDcdnUserQuotaRequest &request);

      /**
       * @summary Queries the fields that are selected.
       *
       * @description > You can call this operation up to 100 times per second per account.
       *
       * @param request DescribeDcdnUserRealTimeDeliveryFieldRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnUserRealTimeDeliveryFieldResponse
       */
      Models::DescribeDcdnUserRealTimeDeliveryFieldResponse describeDcdnUserRealTimeDeliveryFieldWithOptions(const Models::DescribeDcdnUserRealTimeDeliveryFieldRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the fields that are selected.
       *
       * @description > You can call this operation up to 100 times per second per account.
       *
       * @param request DescribeDcdnUserRealTimeDeliveryFieldRequest
       * @return DescribeDcdnUserRealTimeDeliveryFieldResponse
       */
      Models::DescribeDcdnUserRealTimeDeliveryFieldResponse describeDcdnUserRealTimeDeliveryField(const Models::DescribeDcdnUserRealTimeDeliveryFieldRequest &request);

      /**
       * @summary Queries information about the resource plans in your Alibaba Cloud account.
       *
       * @description The maximum number of times that each user can call this operation per second is 30.
       *
       * @param request DescribeDcdnUserResourcePackageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnUserResourcePackageResponse
       */
      Models::DescribeDcdnUserResourcePackageResponse describeDcdnUserResourcePackageWithOptions(const Models::DescribeDcdnUserResourcePackageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about the resource plans in your Alibaba Cloud account.
       *
       * @description The maximum number of times that each user can call this operation per second is 30.
       *
       * @param request DescribeDcdnUserResourcePackageRequest
       * @return DescribeDcdnUserResourcePackageResponse
       */
      Models::DescribeDcdnUserResourcePackageResponse describeDcdnUserResourcePackage(const Models::DescribeDcdnUserResourcePackageRequest &request);

      /**
       * @summary Queries the number of packets blocked by a specified security feature.
       *
       * @description > You can call this operation up to 50 times per second per account.
       *
       * @param request DescribeDcdnUserSecDropRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnUserSecDropResponse
       */
      Models::DescribeDcdnUserSecDropResponse describeDcdnUserSecDropWithOptions(const Models::DescribeDcdnUserSecDropRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of packets blocked by a specified security feature.
       *
       * @description > You can call this operation up to 50 times per second per account.
       *
       * @param request DescribeDcdnUserSecDropRequest
       * @return DescribeDcdnUserSecDropResponse
       */
      Models::DescribeDcdnUserSecDropResponse describeDcdnUserSecDrop(const Models::DescribeDcdnUserSecDropRequest &request);

      /**
       * @summary Queries the number of packets that are blocked by security features at the application layer in a specific time range.
       *
       * @description > You can call this operation up to 50 times per second per account.
       *
       * @param request DescribeDcdnUserSecDropByMinuteRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnUserSecDropByMinuteResponse
       */
      Models::DescribeDcdnUserSecDropByMinuteResponse describeDcdnUserSecDropByMinuteWithOptions(const Models::DescribeDcdnUserSecDropByMinuteRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of packets that are blocked by security features at the application layer in a specific time range.
       *
       * @description > You can call this operation up to 50 times per second per account.
       *
       * @param request DescribeDcdnUserSecDropByMinuteRequest
       * @return DescribeDcdnUserSecDropByMinuteResponse
       */
      Models::DescribeDcdnUserSecDropByMinuteResponse describeDcdnUserSecDropByMinute(const Models::DescribeDcdnUserSecDropByMinuteRequest &request);

      /**
       * @summary Queries user tags.
       *
       * @description > You can call this operation up to 100 times per second per account.
       *
       * @param request DescribeDcdnUserTagsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnUserTagsResponse
       */
      Models::DescribeDcdnUserTagsResponse describeDcdnUserTagsWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries user tags.
       *
       * @description > You can call this operation up to 100 times per second per account.
       *
       * @return DescribeDcdnUserTagsResponse
       */
      Models::DescribeDcdnUserTagsResponse describeDcdnUserTags();

      /**
       * @summary Queries virtual IP addresses of the POPs by domain name.
       *
       * @description >  You can call this operation up to 30 times per second per account.
       *
       * @param request DescribeDcdnUserVipsByDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnUserVipsByDomainResponse
       */
      Models::DescribeDcdnUserVipsByDomainResponse describeDcdnUserVipsByDomainWithOptions(const Models::DescribeDcdnUserVipsByDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries virtual IP addresses of the POPs by domain name.
       *
       * @description >  You can call this operation up to 30 times per second per account.
       *
       * @param request DescribeDcdnUserVipsByDomainRequest
       * @return DescribeDcdnUserVipsByDomainResponse
       */
      Models::DescribeDcdnUserVipsByDomainResponse describeDcdnUserVipsByDomain(const Models::DescribeDcdnUserVipsByDomainRequest &request);

      /**
       * @summary Queries the ownership verification content of a domain name.
       *
       * @description > You can call this operation up to 100 times per second per account.
       *
       * @param request DescribeDcdnVerifyContentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnVerifyContentResponse
       */
      Models::DescribeDcdnVerifyContentResponse describeDcdnVerifyContentWithOptions(const Models::DescribeDcdnVerifyContentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the ownership verification content of a domain name.
       *
       * @description > You can call this operation up to 100 times per second per account.
       *
       * @param request DescribeDcdnVerifyContentRequest
       * @return DescribeDcdnVerifyContentResponse
       */
      Models::DescribeDcdnVerifyContentResponse describeDcdnVerifyContent(const Models::DescribeDcdnVerifyContentRequest &request);

      /**
       * @summary Queries the SDK authentication key for the Alibaba Cloud account. You can also use the SDK authentication key to send SDK initialization requests. The key must be included in the integration code.
       *
       * @param request DescribeDcdnWafBotAppKeyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnWafBotAppKeyResponse
       */
      Models::DescribeDcdnWafBotAppKeyResponse describeDcdnWafBotAppKeyWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the SDK authentication key for the Alibaba Cloud account. You can also use the SDK authentication key to send SDK initialization requests. The key must be included in the integration code.
       *
       * @return DescribeDcdnWafBotAppKeyResponse
       */
      Models::DescribeDcdnWafBotAppKeyResponse describeDcdnWafBotAppKey();

      /**
       * @summary Queries the default configurations of a WAF rule.
       *
       * @param request DescribeDcdnWafDefaultRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnWafDefaultRulesResponse
       */
      Models::DescribeDcdnWafDefaultRulesResponse describeDcdnWafDefaultRulesWithOptions(const Models::DescribeDcdnWafDefaultRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the default configurations of a WAF rule.
       *
       * @param request DescribeDcdnWafDefaultRulesRequest
       * @return DescribeDcdnWafDefaultRulesResponse
       */
      Models::DescribeDcdnWafDefaultRulesResponse describeDcdnWafDefaultRules(const Models::DescribeDcdnWafDefaultRulesRequest &request);

      /**
       * @summary Queries domain names that have Web Application Firewall (WAF) enabled and the relevant information, including the status of the access control list (ACL), protection against HTTP flood attacks, domain name, and WAF.
       *
       * @description > You can call this operation up to 50 times per second per account.
       *
       * @param request DescribeDcdnWafDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnWafDomainResponse
       */
      Models::DescribeDcdnWafDomainResponse describeDcdnWafDomainWithOptions(const Models::DescribeDcdnWafDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries domain names that have Web Application Firewall (WAF) enabled and the relevant information, including the status of the access control list (ACL), protection against HTTP flood attacks, domain name, and WAF.
       *
       * @description > You can call this operation up to 50 times per second per account.
       *
       * @param request DescribeDcdnWafDomainRequest
       * @return DescribeDcdnWafDomainResponse
       */
      Models::DescribeDcdnWafDomainResponse describeDcdnWafDomain(const Models::DescribeDcdnWafDomainRequest &request);

      /**
       * @summary Queries the information about the protection policy of a domain name.
       *
       * @description You can call this operation up to 20 times per second per account.
       *
       * @param request DescribeDcdnWafDomainDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnWafDomainDetailResponse
       */
      Models::DescribeDcdnWafDomainDetailResponse describeDcdnWafDomainDetailWithOptions(const Models::DescribeDcdnWafDomainDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about the protection policy of a domain name.
       *
       * @description You can call this operation up to 20 times per second per account.
       *
       * @param request DescribeDcdnWafDomainDetailRequest
       * @return DescribeDcdnWafDomainDetailResponse
       */
      Models::DescribeDcdnWafDomainDetailResponse describeDcdnWafDomainDetail(const Models::DescribeDcdnWafDomainDetailRequest &request);

      /**
       * @summary Queries the accelerated domain names that are protected by Web Application Firewall (WAF). Fuzzy search is supported.
       *
       * @description You can call this operation up to 20 times per second per account.
       *
       * @param request DescribeDcdnWafDomainsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnWafDomainsResponse
       */
      Models::DescribeDcdnWafDomainsResponse describeDcdnWafDomainsWithOptions(const Models::DescribeDcdnWafDomainsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the accelerated domain names that are protected by Web Application Firewall (WAF). Fuzzy search is supported.
       *
       * @description You can call this operation up to 20 times per second per account.
       *
       * @param request DescribeDcdnWafDomainsRequest
       * @return DescribeDcdnWafDomainsResponse
       */
      Models::DescribeDcdnWafDomainsResponse describeDcdnWafDomains(const Models::DescribeDcdnWafDomainsRequest &request);

      /**
       * @summary Queries the information about match conditions in a custom protection rule, such as the match fields, logical characters, and match content.
       *
       * @description You can call this operation up to 20 times per second per account.
       *
       * @param request DescribeDcdnWafFilterInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnWafFilterInfoResponse
       */
      Models::DescribeDcdnWafFilterInfoResponse describeDcdnWafFilterInfoWithOptions(const Models::DescribeDcdnWafFilterInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about match conditions in a custom protection rule, such as the match fields, logical characters, and match content.
       *
       * @description You can call this operation up to 20 times per second per account.
       *
       * @param request DescribeDcdnWafFilterInfoRequest
       * @return DescribeDcdnWafFilterInfoResponse
       */
      Models::DescribeDcdnWafFilterInfoResponse describeDcdnWafFilterInfo(const Models::DescribeDcdnWafFilterInfoRequest &request);

      /**
       * @summary Queries the countries and regions that can be added to the blacklist of Web Application Firewall (WAF).
       *
       * @description > You can call this operation up to 20 times per second per account.
       *
       * @param request DescribeDcdnWafGeoInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnWafGeoInfoResponse
       */
      Models::DescribeDcdnWafGeoInfoResponse describeDcdnWafGeoInfoWithOptions(const Models::DescribeDcdnWafGeoInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the countries and regions that can be added to the blacklist of Web Application Firewall (WAF).
       *
       * @description > You can call this operation up to 20 times per second per account.
       *
       * @param request DescribeDcdnWafGeoInfoRequest
       * @return DescribeDcdnWafGeoInfoResponse
       */
      Models::DescribeDcdnWafGeoInfoResponse describeDcdnWafGeoInfo(const Models::DescribeDcdnWafGeoInfoRequest &request);

      /**
       * @summary Queries the details of a custom WAF rule group by page.
       *
       * @param request DescribeDcdnWafGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnWafGroupResponse
       */
      Models::DescribeDcdnWafGroupResponse describeDcdnWafGroupWithOptions(const Models::DescribeDcdnWafGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a custom WAF rule group by page.
       *
       * @param request DescribeDcdnWafGroupRequest
       * @return DescribeDcdnWafGroupResponse
       */
      Models::DescribeDcdnWafGroupResponse describeDcdnWafGroup(const Models::DescribeDcdnWafGroupRequest &request);

      /**
       * @summary Queries custom Web Application Firewall (WAF) rule groups.
       *
       * @param request DescribeDcdnWafGroupsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnWafGroupsResponse
       */
      Models::DescribeDcdnWafGroupsResponse describeDcdnWafGroupsWithOptions(const Models::DescribeDcdnWafGroupsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries custom Web Application Firewall (WAF) rule groups.
       *
       * @param request DescribeDcdnWafGroupsRequest
       * @return DescribeDcdnWafGroupsResponse
       */
      Models::DescribeDcdnWafGroupsResponse describeDcdnWafGroups(const Models::DescribeDcdnWafGroupsRequest &request);

      /**
       * @summary Queries the address from which you can download the Web Application Firewall (WAF) logs of a domain name.
       *
       * @description > 
       * *   If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last 24 hours. If you set both these parameters, the request returns the data collected within the specified time range.
       * *   The log data is collected every hour.
       * *   You can call this operation up to 100 times per second per account.
       *
       * @param request DescribeDcdnWafLogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnWafLogsResponse
       */
      Models::DescribeDcdnWafLogsResponse describeDcdnWafLogsWithOptions(const Models::DescribeDcdnWafLogsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the address from which you can download the Web Application Firewall (WAF) logs of a domain name.
       *
       * @description > 
       * *   If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last 24 hours. If you set both these parameters, the request returns the data collected within the specified time range.
       * *   The log data is collected every hour.
       * *   You can call this operation up to 100 times per second per account.
       *
       * @param request DescribeDcdnWafLogsRequest
       * @return DescribeDcdnWafLogsResponse
       */
      Models::DescribeDcdnWafLogsResponse describeDcdnWafLogs(const Models::DescribeDcdnWafLogsRequest &request);

      /**
       * @summary Queries the details of the Web Application Firewall (WAF) protection policies that you configured.
       *
       * @description You can call this operation up to 20 times per second per account.
       *
       * @param request DescribeDcdnWafPoliciesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnWafPoliciesResponse
       */
      Models::DescribeDcdnWafPoliciesResponse describeDcdnWafPoliciesWithOptions(const Models::DescribeDcdnWafPoliciesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of the Web Application Firewall (WAF) protection policies that you configured.
       *
       * @description You can call this operation up to 20 times per second per account.
       *
       * @param request DescribeDcdnWafPoliciesRequest
       * @return DescribeDcdnWafPoliciesResponse
       */
      Models::DescribeDcdnWafPoliciesResponse describeDcdnWafPolicies(const Models::DescribeDcdnWafPoliciesRequest &request);

      /**
       * @summary Queries the details of a protection policy.
       *
       * @description > You can call this operation up to 20 times per second per account.
       *
       * @param request DescribeDcdnWafPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnWafPolicyResponse
       */
      Models::DescribeDcdnWafPolicyResponse describeDcdnWafPolicyWithOptions(const Models::DescribeDcdnWafPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a protection policy.
       *
       * @description > You can call this operation up to 20 times per second per account.
       *
       * @param request DescribeDcdnWafPolicyRequest
       * @return DescribeDcdnWafPolicyResponse
       */
      Models::DescribeDcdnWafPolicyResponse describeDcdnWafPolicy(const Models::DescribeDcdnWafPolicyRequest &request);

      /**
       * @summary Queries the accelerated domain names that are protected by a specified Web Application Firewall (WAF) protection policy.
       *
       * @description You can call this operation up to 20 times per second per user.
       *
       * @param request DescribeDcdnWafPolicyDomainsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnWafPolicyDomainsResponse
       */
      Models::DescribeDcdnWafPolicyDomainsResponse describeDcdnWafPolicyDomainsWithOptions(const Models::DescribeDcdnWafPolicyDomainsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the accelerated domain names that are protected by a specified Web Application Firewall (WAF) protection policy.
       *
       * @description You can call this operation up to 20 times per second per user.
       *
       * @param request DescribeDcdnWafPolicyDomainsRequest
       * @return DescribeDcdnWafPolicyDomainsResponse
       */
      Models::DescribeDcdnWafPolicyDomainsResponse describeDcdnWafPolicyDomains(const Models::DescribeDcdnWafPolicyDomainsRequest &request);

      /**
       * @summary Queries the domain names that can be bound to a custom protection policy.
       *
       * @description You can call this operation up to 20 times per second per account.
       *
       * @param request DescribeDcdnWafPolicyValidDomainsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnWafPolicyValidDomainsResponse
       */
      Models::DescribeDcdnWafPolicyValidDomainsResponse describeDcdnWafPolicyValidDomainsWithOptions(const Models::DescribeDcdnWafPolicyValidDomainsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the domain names that can be bound to a custom protection policy.
       *
       * @description You can call this operation up to 20 times per second per account.
       *
       * @param request DescribeDcdnWafPolicyValidDomainsRequest
       * @return DescribeDcdnWafPolicyValidDomainsResponse
       */
      Models::DescribeDcdnWafPolicyValidDomainsResponse describeDcdnWafPolicyValidDomains(const Models::DescribeDcdnWafPolicyValidDomainsRequest &request);

      /**
       * @summary Queries the details of a specified protection rule.
       *
       * @description #
       * You can call this operation up to 20 times per second per account.
       *
       * @param request DescribeDcdnWafRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnWafRuleResponse
       */
      Models::DescribeDcdnWafRuleResponse describeDcdnWafRuleWithOptions(const Models::DescribeDcdnWafRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a specified protection rule.
       *
       * @description #
       * You can call this operation up to 20 times per second per account.
       *
       * @param request DescribeDcdnWafRuleRequest
       * @return DescribeDcdnWafRuleResponse
       */
      Models::DescribeDcdnWafRuleResponse describeDcdnWafRule(const Models::DescribeDcdnWafRuleRequest &request);

      /**
       * @summary Queries the details of the protection rules that you configured.
       *
       * @description You can call this operation up to 20 times per second per account.
       *
       * @param request DescribeDcdnWafRulesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnWafRulesResponse
       */
      Models::DescribeDcdnWafRulesResponse describeDcdnWafRulesWithOptions(const Models::DescribeDcdnWafRulesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of the protection rules that you configured.
       *
       * @description You can call this operation up to 20 times per second per account.
       *
       * @param request DescribeDcdnWafRulesRequest
       * @return DescribeDcdnWafRulesResponse
       */
      Models::DescribeDcdnWafRulesResponse describeDcdnWafRules(const Models::DescribeDcdnWafRulesRequest &request);

      /**
       * @summary Queries the information about the type of the protection policy that you use.
       *
       * @description You can call this operation up to 20 times per second per user.
       *
       * @param request DescribeDcdnWafScenesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnWafScenesResponse
       */
      Models::DescribeDcdnWafScenesResponse describeDcdnWafScenesWithOptions(const Models::DescribeDcdnWafScenesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about the type of the protection policy that you use.
       *
       * @description You can call this operation up to 20 times per second per user.
       *
       * @param request DescribeDcdnWafScenesRequest
       * @return DescribeDcdnWafScenesResponse
       */
      Models::DescribeDcdnWafScenesResponse describeDcdnWafScenes(const Models::DescribeDcdnWafScenesRequest &request);

      /**
       * @summary Queries the information about Dynamic Content Delivery Network (DCDN) Web Application Firewall WAF), including the time when WAF is enabled, edition of WAF, current status of WAF, metering method for requests, and metering method for rules.
       *
       * @description # Usage notes
       * You can call this operation up to 20 times per second per account.
       *
       * @param request DescribeDcdnWafServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnWafServiceResponse
       */
      Models::DescribeDcdnWafServiceResponse describeDcdnWafServiceWithOptions(const Models::DescribeDcdnWafServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about Dynamic Content Delivery Network (DCDN) Web Application Firewall WAF), including the time when WAF is enabled, edition of WAF, current status of WAF, metering method for requests, and metering method for rules.
       *
       * @description # Usage notes
       * You can call this operation up to 20 times per second per account.
       *
       * @param request DescribeDcdnWafServiceRequest
       * @return DescribeDcdnWafServiceResponse
       */
      Models::DescribeDcdnWafServiceResponse describeDcdnWafService(const Models::DescribeDcdnWafServiceRequest &request);

      /**
       * @summary Queries the version of Web Application Firewall (WAF) used in Dynamic Content Delivery Network (DCDN).
       *
       * @description You can call this operation up to 20 times per second per account.
       *
       * @param request DescribeDcdnWafSpecInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnWafSpecInfoResponse
       */
      Models::DescribeDcdnWafSpecInfoResponse describeDcdnWafSpecInfoWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the version of Web Application Firewall (WAF) used in Dynamic Content Delivery Network (DCDN).
       *
       * @description You can call this operation up to 20 times per second per account.
       *
       * @return DescribeDcdnWafSpecInfoResponse
       */
      Models::DescribeDcdnWafSpecInfoResponse describeDcdnWafSpecInfo();

      /**
       * @summary The number of used SeCUs.
       *
       * @description *   You can call this operation up to 10 times per second per account.
       * *   The minimum time granularity for a query is 5 minutes. The maximum time span for a query is 31 days. The time period within which historical data is available for a query is 90 days.
       *
       * @param request DescribeDcdnWafUsageDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnWafUsageDataResponse
       */
      Models::DescribeDcdnWafUsageDataResponse describeDcdnWafUsageDataWithOptions(const Models::DescribeDcdnWafUsageDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The number of used SeCUs.
       *
       * @description *   You can call this operation up to 10 times per second per account.
       * *   The minimum time granularity for a query is 5 minutes. The maximum time span for a query is 31 days. The time period within which historical data is available for a query is 90 days.
       *
       * @param request DescribeDcdnWafUsageDataRequest
       * @return DescribeDcdnWafUsageDataResponse
       */
      Models::DescribeDcdnWafUsageDataResponse describeDcdnWafUsageData(const Models::DescribeDcdnWafUsageDataRequest &request);

      /**
       * @summary Queries the information about Dynamic Content Delivery Network (DCDN), such as the service activation time, the expiration time, and the current status.
       *
       * @description > You can call this operation up to 20 times per second per account.
       *
       * @param request DescribeDcdnsecServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDcdnsecServiceResponse
       */
      Models::DescribeDcdnsecServiceResponse describeDcdnsecServiceWithOptions(const Models::DescribeDcdnsecServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about Dynamic Content Delivery Network (DCDN), such as the service activation time, the expiration time, and the current status.
       *
       * @description > You can call this operation up to 20 times per second per account.
       *
       * @param request DescribeDcdnsecServiceRequest
       * @return DescribeDcdnsecServiceResponse
       */
      Models::DescribeDcdnsecServiceResponse describeDcdnsecService(const Models::DescribeDcdnsecServiceRequest &request);

      /**
       * @summary Queries attack events.
       *
       * @param request DescribeDdosAllEventListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDdosAllEventListResponse
       */
      Models::DescribeDdosAllEventListResponse describeDdosAllEventListWithOptions(const Models::DescribeDdosAllEventListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries attack events.
       *
       * @param request DescribeDdosAllEventListRequest
       * @return DescribeDdosAllEventListResponse
       */
      Models::DescribeDdosAllEventListResponse describeDdosAllEventList(const Models::DescribeDdosAllEventListRequest &request);

      /**
       * @summary Queries the encrypted RoutineUid of a routine.
       *
       * @param request DescribeEncryptRoutineUidRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEncryptRoutineUidResponse
       */
      Models::DescribeEncryptRoutineUidResponse describeEncryptRoutineUidWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the encrypted RoutineUid of a routine.
       *
       * @return DescribeEncryptRoutineUidResponse
       */
      Models::DescribeEncryptRoutineUidResponse describeEncryptRoutineUid();

      /**
       * @summary Queries the highlighted data of attack details. You can query the reasons for which requests are blocked based on TraceIDs in logs of requests that are blocked by Basic Web Protection. The highlighted data matches the content blocked by the basic web protection module.
       *
       * @param request DescribeHighlightInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeHighlightInfoResponse
       */
      Models::DescribeHighlightInfoResponse describeHighlightInfoWithOptions(const Models::DescribeHighlightInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the highlighted data of attack details. You can query the reasons for which requests are blocked based on TraceIDs in logs of requests that are blocked by Basic Web Protection. The highlighted data matches the content blocked by the basic web protection module.
       *
       * @param request DescribeHighlightInfoRequest
       * @return DescribeHighlightInfoResponse
       */
      Models::DescribeHighlightInfoResponse describeHighlightInfo(const Models::DescribeHighlightInfoRequest &request);

      /**
       * @summary kv存储实时Qps监控数据
       *
       * @param request DescribeKvRealTimeQpsDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeKvRealTimeQpsDataResponse
       */
      Models::DescribeKvRealTimeQpsDataResponse describeKvRealTimeQpsDataWithOptions(const Models::DescribeKvRealTimeQpsDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary kv存储实时Qps监控数据
       *
       * @param request DescribeKvRealTimeQpsDataRequest
       * @return DescribeKvRealTimeQpsDataResponse
       */
      Models::DescribeKvRealTimeQpsDataResponse describeKvRealTimeQpsData(const Models::DescribeKvRealTimeQpsDataRequest &request);

      /**
       * @summary Queries the usage data of KV storage.
       *
       * @description **Note*** You can call this operation up to 5 times per second per account.
       * * The usage data indicates the number of requests.
       * **Time granularity:** This operation supports only the time granularity of 1 hour.
       * |Time granularity|Time range to query|Historical data available|Data latency|
       * |---|---|---|---|
       * |1 hour|31 days|90 days|3 to 4 hours|
       *
       * @param request DescribeKvUsageDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeKvUsageDataResponse
       */
      Models::DescribeKvUsageDataResponse describeKvUsageDataWithOptions(const Models::DescribeKvUsageDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the usage data of KV storage.
       *
       * @description **Note*** You can call this operation up to 5 times per second per account.
       * * The usage data indicates the number of requests.
       * **Time granularity:** This operation supports only the time granularity of 1 hour.
       * |Time granularity|Time range to query|Historical data available|Data latency|
       * |---|---|---|---|
       * |1 hour|31 days|90 days|3 to 4 hours|
       *
       * @param request DescribeKvUsageDataRequest
       * @return DescribeKvUsageDataResponse
       */
      Models::DescribeKvUsageDataResponse describeKvUsageData(const Models::DescribeKvUsageDataRequest &request);

      /**
       * @summary Queries the feature configurations of an accelerated domain name in the resource directory.
       *
       * @param request DescribeRDDomainConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRDDomainConfigResponse
       */
      Models::DescribeRDDomainConfigResponse describeRDDomainConfigWithOptions(const Models::DescribeRDDomainConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the feature configurations of an accelerated domain name in the resource directory.
       *
       * @param request DescribeRDDomainConfigRequest
       * @return DescribeRDDomainConfigResponse
       */
      Models::DescribeRDDomainConfigResponse describeRDDomainConfig(const Models::DescribeRDDomainConfigRequest &request);

      /**
       * @summary Queries all domain names of Alibaba Cloud CDN and Dynamic Content Delivery Network (DCDN) in a Resource Directory (RD).
       *
       * @description A domain name can be in one of the following states:
       * *   online
       * *   offline
       * *   configuring
       * *   configure_failed
       * *   checking
       * *   check_failed
       *
       * @param request DescribeRDDomainsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRDDomainsResponse
       */
      Models::DescribeRDDomainsResponse describeRDDomainsWithOptions(const Models::DescribeRDDomainsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all domain names of Alibaba Cloud CDN and Dynamic Content Delivery Network (DCDN) in a Resource Directory (RD).
       *
       * @description A domain name can be in one of the following states:
       * *   online
       * *   offline
       * *   configuring
       * *   configure_failed
       * *   checking
       * *   check_failed
       *
       * @param request DescribeRDDomainsRequest
       * @return DescribeRDDomainsResponse
       */
      Models::DescribeRDDomainsResponse describeRDDomains(const Models::DescribeRDDomainsRequest &request);

      /**
       * @summary Queries the metadata of a specified routine. The metadata includes the routine configuration, configuration version, and code version.
       *
       * @description > You can call this operation up to 100 times per second per account.
       *
       * @param request DescribeRoutineRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRoutineResponse
       */
      Models::DescribeRoutineResponse describeRoutineWithOptions(const Models::DescribeRoutineRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the metadata of a specified routine. The metadata includes the routine configuration, configuration version, and code version.
       *
       * @description > You can call this operation up to 100 times per second per account.
       *
       * @param request DescribeRoutineRequest
       * @return DescribeRoutineResponse
       */
      Models::DescribeRoutineResponse describeRoutine(const Models::DescribeRoutineRequest &request);

      /**
       * @summary Queries the canary release environments that are supported by a routine.
       *
       * @description > You can call this operation up to 100 times per second per account.
       *
       * @param request DescribeRoutineCanaryEnvsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRoutineCanaryEnvsResponse
       */
      Models::DescribeRoutineCanaryEnvsResponse describeRoutineCanaryEnvsWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the canary release environments that are supported by a routine.
       *
       * @description > You can call this operation up to 100 times per second per account.
       *
       * @return DescribeRoutineCanaryEnvsResponse
       */
      Models::DescribeRoutineCanaryEnvsResponse describeRoutineCanaryEnvs();

      /**
       * @summary Queries the JavaScript code version of a routine.
       *
       * @description > You can call this operation up to 100 times per second per account.
       *
       * @param request DescribeRoutineCodeRevisionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRoutineCodeRevisionResponse
       */
      Models::DescribeRoutineCodeRevisionResponse describeRoutineCodeRevisionWithOptions(const Models::DescribeRoutineCodeRevisionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the JavaScript code version of a routine.
       *
       * @description > You can call this operation up to 100 times per second per account.
       *
       * @param request DescribeRoutineCodeRevisionRequest
       * @return DescribeRoutineCodeRevisionResponse
       */
      Models::DescribeRoutineCodeRevisionResponse describeRoutineCodeRevision(const Models::DescribeRoutineCodeRevisionRequest &request);

      /**
       * @summary Queries the list of domain names that are associated with a routine.
       *
       * @param request DescribeRoutineRelatedDomainsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRoutineRelatedDomainsResponse
       */
      Models::DescribeRoutineRelatedDomainsResponse describeRoutineRelatedDomainsWithOptions(const Models::DescribeRoutineRelatedDomainsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of domain names that are associated with a routine.
       *
       * @param request DescribeRoutineRelatedDomainsRequest
       * @return DescribeRoutineRelatedDomainsResponse
       */
      Models::DescribeRoutineRelatedDomainsResponse describeRoutineRelatedDomains(const Models::DescribeRoutineRelatedDomainsRequest &request);

      /**
       * @summary Queries the supported specifications for routines. The private preview supports the following CPU time slice specifications: 5 ms, 50 ms, and 100 ms.
       *
       * @description > You can call this operation up to 100 times per second per account.
       *
       * @param request DescribeRoutineSpecRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRoutineSpecResponse
       */
      Models::DescribeRoutineSpecResponse describeRoutineSpecWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the supported specifications for routines. The private preview supports the following CPU time slice specifications: 5 ms, 50 ms, and 100 ms.
       *
       * @description > You can call this operation up to 100 times per second per account.
       *
       * @return DescribeRoutineSpecResponse
       */
      Models::DescribeRoutineSpecResponse describeRoutineSpec();

      /**
       * @summary Queries the subdomains and routines that belong to your Alibaba Cloud account.
       *
       * @description > You can call this operation up to 100 times per second per account.
       *
       * @param request DescribeRoutineUserInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRoutineUserInfoResponse
       */
      Models::DescribeRoutineUserInfoResponse describeRoutineUserInfoWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the subdomains and routines that belong to your Alibaba Cloud account.
       *
       * @description > You can call this operation up to 100 times per second per account.
       *
       * @return DescribeRoutineUserInfoResponse
       */
      Models::DescribeRoutineUserInfoResponse describeRoutineUserInfo();

      /**
       * @summary Whether IPA is enabled and whether you have overdue payments for your IPA are queried.
       *
       * @description **
       * **The maximum number of times that each user can call this operation per second is 20.
       *
       * @param request DescribeUserDcdnIpaStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUserDcdnIpaStatusResponse
       */
      Models::DescribeUserDcdnIpaStatusResponse describeUserDcdnIpaStatusWithOptions(const Models::DescribeUserDcdnIpaStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Whether IPA is enabled and whether you have overdue payments for your IPA are queried.
       *
       * @description **
       * **The maximum number of times that each user can call this operation per second is 20.
       *
       * @param request DescribeUserDcdnIpaStatusRequest
       * @return DescribeUserDcdnIpaStatusResponse
       */
      Models::DescribeUserDcdnIpaStatusResponse describeUserDcdnIpaStatus(const Models::DescribeUserDcdnIpaStatusRequest &request);

      /**
       * @summary Queries whether DCDN is activated and whether your account has overdue payments.
       *
       * @description > You can call this operation up to 30 times per second per account.
       *
       * @param request DescribeUserDcdnStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUserDcdnStatusResponse
       */
      Models::DescribeUserDcdnStatusResponse describeUserDcdnStatusWithOptions(const Models::DescribeUserDcdnStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries whether DCDN is activated and whether your account has overdue payments.
       *
       * @description > You can call this operation up to 30 times per second per account.
       *
       * @param request DescribeUserDcdnStatusRequest
       * @return DescribeUserDcdnStatusResponse
       */
      Models::DescribeUserDcdnStatusResponse describeUserDcdnStatus(const Models::DescribeUserDcdnStatusRequest &request);

      /**
       * @summary Queries whether EdgeRoutine (ER) is activated or has an overdue payment.
       *
       * @description > You can call this operation up to 30 times per second per account.
       *
       * @param request DescribeUserErStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUserErStatusResponse
       */
      Models::DescribeUserErStatusResponse describeUserErStatusWithOptions(const Models::DescribeUserErStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries whether EdgeRoutine (ER) is activated or has an overdue payment.
       *
       * @description > You can call this operation up to 30 times per second per account.
       *
       * @param request DescribeUserErStatusRequest
       * @return DescribeUserErStatusResponse
       */
      Models::DescribeUserErStatusResponse describeUserErStatus(const Models::DescribeUserErStatusRequest &request);

      /**
       * @summary Queries whether Log Service is activated and whether you have overdue payments for your Log Service.
       *
       * @description > You can call this operation up to 20 times per second per account.
       *
       * @param request DescribeUserLogserviceStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUserLogserviceStatusResponse
       */
      Models::DescribeUserLogserviceStatusResponse describeUserLogserviceStatusWithOptions(const Models::DescribeUserLogserviceStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries whether Log Service is activated and whether you have overdue payments for your Log Service.
       *
       * @description > You can call this operation up to 20 times per second per account.
       *
       * @param request DescribeUserLogserviceStatusRequest
       * @return DescribeUserLogserviceStatusResponse
       */
      Models::DescribeUserLogserviceStatusResponse describeUserLogserviceStatus(const Models::DescribeUserLogserviceStatusRequest &request);

      /**
       * @summary Modifies the configurations of a routine.
       *
       * @description > 
       * *   This operation modifies only the specified configurations. Other configurations remain unchanged.
       * *   If you want to delete a setting, delete the parameter value.
       * *   This operation can add canary release environments. Make sure that the environment names comply with the naming rules. Otherwise, you will fail to add the environments.
       * *   Dynamic Route for CDN (DCDN) provides 35 canary release environments. Among these environments, 34 are deployed in China and 1 is deployed outside China. The canary release environments are:
       *     *   Outside China: presetCanaryOverseas.
       *     *   In China: The 34 canary release environments are named in the format of presetCanaryXX. For example, presetCanaryBeijing represents the canary release environment in Beijing. A canary release environment is in each of the following regions: Anhui, Beijing, Chongqing, Fujian, Gansu, Guangdong, Guangxi, Guizhou, Hainan, Hebei, Heilongjiang, Henan, Hong Kong, Hubei, Hunan, Jiangsu, Jiangxi, Jilin, Liaoning, Macao, Neimenggu, Ningxia, Qinghai, Shaanxi, Shandong, Shanghai, Shanxi, Sichuan, Taiwan, Tianjin, Xinjiang, Xizang, Yunan, and Zhejiang.
       * *   You can call this operation up to 100 times per second per account.
       *
       * @param tmpReq EditRoutineConfRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EditRoutineConfResponse
       */
      Models::EditRoutineConfResponse editRoutineConfWithOptions(const Models::EditRoutineConfRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configurations of a routine.
       *
       * @description > 
       * *   This operation modifies only the specified configurations. Other configurations remain unchanged.
       * *   If you want to delete a setting, delete the parameter value.
       * *   This operation can add canary release environments. Make sure that the environment names comply with the naming rules. Otherwise, you will fail to add the environments.
       * *   Dynamic Route for CDN (DCDN) provides 35 canary release environments. Among these environments, 34 are deployed in China and 1 is deployed outside China. The canary release environments are:
       *     *   Outside China: presetCanaryOverseas.
       *     *   In China: The 34 canary release environments are named in the format of presetCanaryXX. For example, presetCanaryBeijing represents the canary release environment in Beijing. A canary release environment is in each of the following regions: Anhui, Beijing, Chongqing, Fujian, Gansu, Guangdong, Guangxi, Guizhou, Hainan, Hebei, Heilongjiang, Henan, Hong Kong, Hubei, Hunan, Jiangsu, Jiangxi, Jilin, Liaoning, Macao, Neimenggu, Ningxia, Qinghai, Shaanxi, Shandong, Shanghai, Shanxi, Sichuan, Taiwan, Tianjin, Xinjiang, Xizang, Yunan, and Zhejiang.
       * *   You can call this operation up to 100 times per second per account.
       *
       * @param request EditRoutineConfRequest
       * @return EditRoutineConfResponse
       */
      Models::EditRoutineConfResponse editRoutineConf(const Models::EditRoutineConfRequest &request);

      /**
       * @summary Queries the value of a key in a key-value pair.
       *
       * @param request GetDcdnKvRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDcdnKvResponse
       */
      Models::GetDcdnKvResponse getDcdnKvWithOptions(const Models::GetDcdnKvRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the value of a key in a key-value pair.
       *
       * @param request GetDcdnKvRequest
       * @return GetDcdnKvResponse
       */
      Models::GetDcdnKvResponse getDcdnKv(const Models::GetDcdnKvRequest &request);

      /**
       * @summary 查询KV对的值以及TTL信息
       *
       * @param request GetDcdnKvDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDcdnKvDetailResponse
       */
      Models::GetDcdnKvDetailResponse getDcdnKvDetailWithOptions(const Models::GetDcdnKvDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询KV对的值以及TTL信息
       *
       * @param request GetDcdnKvDetailRequest
       * @return GetDcdnKvDetailResponse
       */
      Models::GetDcdnKvDetailResponse getDcdnKvDetail(const Models::GetDcdnKvDetailRequest &request);

      /**
       * @summary Queries the KV status by key value.
       *
       * @param request GetDcdnKvStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDcdnKvStatusResponse
       */
      Models::GetDcdnKvStatusResponse getDcdnKvStatusWithOptions(const Models::GetDcdnKvStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the KV status by key value.
       *
       * @param request GetDcdnKvStatusRequest
       * @return GetDcdnKvStatusResponse
       */
      Models::GetDcdnKvStatusResponse getDcdnKvStatus(const Models::GetDcdnKvStatusRequest &request);

      /**
       * @summary Traverses the values of keys in a namespace.
       *
       * @param request ListDcdnKvRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDcdnKvResponse
       */
      Models::ListDcdnKvResponse listDcdnKvWithOptions(const Models::ListDcdnKvRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Traverses the values of keys in a namespace.
       *
       * @param request ListDcdnKvRequest
       * @return ListDcdnKvResponse
       */
      Models::ListDcdnKvResponse listDcdnKv(const Models::ListDcdnKvRequest &request);

      /**
       * @summary Queries information about a real-time log delivery project.
       *
       * @description > You can call this operation up to 100 times per second per account.
       *
       * @param request ListDcdnRealTimeDeliveryProjectRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDcdnRealTimeDeliveryProjectResponse
       */
      Models::ListDcdnRealTimeDeliveryProjectResponse listDcdnRealTimeDeliveryProjectWithOptions(const Models::ListDcdnRealTimeDeliveryProjectRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about a real-time log delivery project.
       *
       * @description > You can call this operation up to 100 times per second per account.
       *
       * @param request ListDcdnRealTimeDeliveryProjectRequest
       * @return ListDcdnRealTimeDeliveryProjectResponse
       */
      Models::ListDcdnRealTimeDeliveryProjectResponse listDcdnRealTimeDeliveryProject(const Models::ListDcdnRealTimeDeliveryProjectRequest &request);

      /**
       * @summary A客户定制新增修改域名采样率接口
       *
       * @param request ModifyCustomDomainSampleRateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyCustomDomainSampleRateResponse
       */
      Models::ModifyCustomDomainSampleRateResponse modifyCustomDomainSampleRateWithOptions(const Models::ModifyCustomDomainSampleRateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary A客户定制新增修改域名采样率接口
       *
       * @param request ModifyCustomDomainSampleRateRequest
       * @return ModifyCustomDomainSampleRateResponse
       */
      Models::ModifyCustomDomainSampleRateResponse modifyCustomDomainSampleRate(const Models::ModifyCustomDomainSampleRateRequest &request);

      /**
       * @summary Changes the acceleration region.
       *
       * @description > You can call this operation up to 100 times per second per account.
       *
       * @param request ModifyDCdnDomainSchdmByPropertyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDCdnDomainSchdmByPropertyResponse
       */
      Models::ModifyDCdnDomainSchdmByPropertyResponse modifyDCdnDomainSchdmByPropertyWithOptions(const Models::ModifyDCdnDomainSchdmByPropertyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the acceleration region.
       *
       * @description > You can call this operation up to 100 times per second per account.
       *
       * @param request ModifyDCdnDomainSchdmByPropertyRequest
       * @return ModifyDCdnDomainSchdmByPropertyResponse
       */
      Models::ModifyDCdnDomainSchdmByPropertyResponse modifyDCdnDomainSchdmByProperty(const Models::ModifyDCdnDomainSchdmByPropertyRequest &request);

      /**
       * @summary Modifies a custom Web Application Firewall (WAF) rule group.
       *
       * @param request ModifyDcdnWafGroupRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDcdnWafGroupResponse
       */
      Models::ModifyDcdnWafGroupResponse modifyDcdnWafGroupWithOptions(const Models::ModifyDcdnWafGroupRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a custom Web Application Firewall (WAF) rule group.
       *
       * @param request ModifyDcdnWafGroupRequest
       * @return ModifyDcdnWafGroupResponse
       */
      Models::ModifyDcdnWafGroupResponse modifyDcdnWafGroup(const Models::ModifyDcdnWafGroupRequest &request);

      /**
       * @summary Changes the name or the status of a protection policy.
       *
       * @description *   You can call this operation up to 20 times per second per account.
       * *   Alibaba Cloud Dynamic Content Delivery Network (DCDN) supports POST requests.
       *
       * @param request ModifyDcdnWafPolicyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDcdnWafPolicyResponse
       */
      Models::ModifyDcdnWafPolicyResponse modifyDcdnWafPolicyWithOptions(const Models::ModifyDcdnWafPolicyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the name or the status of a protection policy.
       *
       * @description *   You can call this operation up to 20 times per second per account.
       * *   Alibaba Cloud Dynamic Content Delivery Network (DCDN) supports POST requests.
       *
       * @param request ModifyDcdnWafPolicyRequest
       * @return ModifyDcdnWafPolicyResponse
       */
      Models::ModifyDcdnWafPolicyResponse modifyDcdnWafPolicy(const Models::ModifyDcdnWafPolicyRequest &request);

      /**
       * @summary Changes the accelerated domain names that are bound to a protection policy.
       *
       * @description # Usage notes
       * *   You can call this operation up to 20 times per second per account.
       * *   Alibaba Cloud Dynamic Route for CDN (DCDN) supports POST requests.
       *
       * @param request ModifyDcdnWafPolicyDomainsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDcdnWafPolicyDomainsResponse
       */
      Models::ModifyDcdnWafPolicyDomainsResponse modifyDcdnWafPolicyDomainsWithOptions(const Models::ModifyDcdnWafPolicyDomainsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the accelerated domain names that are bound to a protection policy.
       *
       * @description # Usage notes
       * *   You can call this operation up to 20 times per second per account.
       * *   Alibaba Cloud Dynamic Route for CDN (DCDN) supports POST requests.
       *
       * @param request ModifyDcdnWafPolicyDomainsRequest
       * @return ModifyDcdnWafPolicyDomainsResponse
       */
      Models::ModifyDcdnWafPolicyDomainsResponse modifyDcdnWafPolicyDomains(const Models::ModifyDcdnWafPolicyDomainsRequest &request);

      /**
       * @summary Changes the name, status, or configurations of a protection rule.
       *
       * @description *   You can call this operation up to 20 times per second per account.
       * *   Alibaba Cloud Dynamic Content Delivery Network (DCDN) supports POST requests.
       * *   You must configure at least one of the **RuleStatus**, **RuleName** and **RuleConfig** parameters.
       *
       * @param request ModifyDcdnWafRuleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyDcdnWafRuleResponse
       */
      Models::ModifyDcdnWafRuleResponse modifyDcdnWafRuleWithOptions(const Models::ModifyDcdnWafRuleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the name, status, or configurations of a protection rule.
       *
       * @description *   You can call this operation up to 20 times per second per account.
       * *   Alibaba Cloud Dynamic Content Delivery Network (DCDN) supports POST requests.
       * *   You must configure at least one of the **RuleStatus**, **RuleName** and **RuleConfig** parameters.
       *
       * @param request ModifyDcdnWafRuleRequest
       * @return ModifyDcdnWafRuleResponse
       */
      Models::ModifyDcdnWafRuleResponse modifyDcdnWafRule(const Models::ModifyDcdnWafRuleRequest &request);

      /**
       * @summary Activates Dynamic Route for CDN (DCDN).
       *
       * @description > 
       * *   DCDN can be activated only once per Alibaba Cloud account. The Alibaba Cloud account must pass real-name verification.
       * *   You can call this operation up to five times per second per user.
       *
       * @param request OpenDcdnServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OpenDcdnServiceResponse
       */
      Models::OpenDcdnServiceResponse openDcdnServiceWithOptions(const Models::OpenDcdnServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Activates Dynamic Route for CDN (DCDN).
       *
       * @description > 
       * *   DCDN can be activated only once per Alibaba Cloud account. The Alibaba Cloud account must pass real-name verification.
       * *   You can call this operation up to five times per second per user.
       *
       * @param request OpenDcdnServiceRequest
       * @return OpenDcdnServiceResponse
       */
      Models::OpenDcdnServiceResponse openDcdnService(const Models::OpenDcdnServiceRequest &request);

      /**
       * @summary Prefetches content from origin servers to points of presence (POPs). This reduces workloads on origin servers because users can hit cache upon their first visits.
       *
       * @description *   You can call the [RefreshDcdnObjectCaches](https://help.aliyun.com/document_detail/130620.html) operation to refresh content and call the [PreloadDcdnObjectCaches](https://help.aliyun.com/document_detail/130636.html) operation to prefetch content.
       * *   Dynamic Content Delivery Network (DCDN) supports POST requests in which parameters are sent as a form.
       * *   By default, each Alibaba Cloud account can submit up to 1,000 URLs per day. If the daily peak bandwidth value of your workloads exceeds 200 Mbit/s, you can [submit a ticket](https://account.alibabacloud.com/login/login.htm?oauth_callback=https%3A//ticket-intl.console.aliyun.com/%23/ticket/createIndex) to increase your daily quota. Alibaba Cloud reviews your application and then increases the quota accordingly.
       * *   You can specify up to 100 URLs to prefetch.
       * *   The prefetch queue of each Alibaba Cloud account can contain up to 100,000 URLs. DCDN executes prefetch tasks based on the time at which you submit the URLs.
       * *   You can call this operation up to 15 times per second per account.
       * ## Description
       * *   After a refresh task is submitted and completed, the POPs immediately start to retrieve resources from the origin server. Therefore, a large number of refresh tasks cause a large number of concurrent download tasks. This increases the number of requests that are redirected to the origin server. The back-to-origin routing process consumes more bandwidth resources and the origin server may be overwhelmed.
       * *   The time required for a prefetch task to complete is proportional to the size of the prefetched file. In actual practice, most prefetch tasks require 5 to 30 minutes to complete. A task with a smaller average file size requires less time.
       * *   To allow RAM users to perform this operation, you need to first grant them the required permissions. For more information, see [Authorize a RAM user to prefetch and refresh resources](https://help.aliyun.com/document_detail/445051.html).
       *
       * @param request PreloadDcdnObjectCachesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PreloadDcdnObjectCachesResponse
       */
      Models::PreloadDcdnObjectCachesResponse preloadDcdnObjectCachesWithOptions(const Models::PreloadDcdnObjectCachesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Prefetches content from origin servers to points of presence (POPs). This reduces workloads on origin servers because users can hit cache upon their first visits.
       *
       * @description *   You can call the [RefreshDcdnObjectCaches](https://help.aliyun.com/document_detail/130620.html) operation to refresh content and call the [PreloadDcdnObjectCaches](https://help.aliyun.com/document_detail/130636.html) operation to prefetch content.
       * *   Dynamic Content Delivery Network (DCDN) supports POST requests in which parameters are sent as a form.
       * *   By default, each Alibaba Cloud account can submit up to 1,000 URLs per day. If the daily peak bandwidth value of your workloads exceeds 200 Mbit/s, you can [submit a ticket](https://account.alibabacloud.com/login/login.htm?oauth_callback=https%3A//ticket-intl.console.aliyun.com/%23/ticket/createIndex) to increase your daily quota. Alibaba Cloud reviews your application and then increases the quota accordingly.
       * *   You can specify up to 100 URLs to prefetch.
       * *   The prefetch queue of each Alibaba Cloud account can contain up to 100,000 URLs. DCDN executes prefetch tasks based on the time at which you submit the URLs.
       * *   You can call this operation up to 15 times per second per account.
       * ## Description
       * *   After a refresh task is submitted and completed, the POPs immediately start to retrieve resources from the origin server. Therefore, a large number of refresh tasks cause a large number of concurrent download tasks. This increases the number of requests that are redirected to the origin server. The back-to-origin routing process consumes more bandwidth resources and the origin server may be overwhelmed.
       * *   The time required for a prefetch task to complete is proportional to the size of the prefetched file. In actual practice, most prefetch tasks require 5 to 30 minutes to complete. A task with a smaller average file size requires less time.
       * *   To allow RAM users to perform this operation, you need to first grant them the required permissions. For more information, see [Authorize a RAM user to prefetch and refresh resources](https://help.aliyun.com/document_detail/445051.html).
       *
       * @param request PreloadDcdnObjectCachesRequest
       * @return PreloadDcdnObjectCachesResponse
       */
      Models::PreloadDcdnObjectCachesResponse preloadDcdnObjectCaches(const Models::PreloadDcdnObjectCachesRequest &request);

      /**
       * @summary Publishes the configurations of an accelerated domain name from the staging environment to the production environment.
       *
       * @description > You can call this operation up to 30 times per second per account.
       *
       * @param request PublishDcdnStagingConfigToProductionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PublishDcdnStagingConfigToProductionResponse
       */
      Models::PublishDcdnStagingConfigToProductionResponse publishDcdnStagingConfigToProductionWithOptions(const Models::PublishDcdnStagingConfigToProductionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Publishes the configurations of an accelerated domain name from the staging environment to the production environment.
       *
       * @description > You can call this operation up to 30 times per second per account.
       *
       * @param request PublishDcdnStagingConfigToProductionRequest
       * @return PublishDcdnStagingConfigToProductionResponse
       */
      Models::PublishDcdnStagingConfigToProductionResponse publishDcdnStagingConfigToProduction(const Models::PublishDcdnStagingConfigToProductionRequest &request);

      /**
       * @summary Publishes a specified version of routine code to an environment.
       *
       * @description > You can call this operation up to 100 times per second per account.
       *
       * @param tmpReq PublishRoutineCodeRevisionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PublishRoutineCodeRevisionResponse
       */
      Models::PublishRoutineCodeRevisionResponse publishRoutineCodeRevisionWithOptions(const Models::PublishRoutineCodeRevisionRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Publishes a specified version of routine code to an environment.
       *
       * @description > You can call this operation up to 100 times per second per account.
       *
       * @param request PublishRoutineCodeRevisionRequest
       * @return PublishRoutineCodeRevisionResponse
       */
      Models::PublishRoutineCodeRevisionResponse publishRoutineCodeRevision(const Models::PublishRoutineCodeRevisionRequest &request);

      /**
       * @summary Sets key-value pairs in a namespace.
       *
       * @param request PutDcdnKvRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PutDcdnKvResponse
       */
      Models::PutDcdnKvResponse putDcdnKvWithOptions(const Models::PutDcdnKvRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets key-value pairs in a namespace.
       *
       * @param request PutDcdnKvRequest
       * @return PutDcdnKvResponse
       */
      Models::PutDcdnKvResponse putDcdnKv(const Models::PutDcdnKvRequest &request);

      /**
       * @summary Adds namespaces to your account.
       *
       * @param request PutDcdnKvNamespaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PutDcdnKvNamespaceResponse
       */
      Models::PutDcdnKvNamespaceResponse putDcdnKvNamespaceWithOptions(const Models::PutDcdnKvNamespaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds namespaces to your account.
       *
       * @param request PutDcdnKvNamespaceRequest
       * @return PutDcdnKvNamespaceResponse
       */
      Models::PutDcdnKvNamespaceResponse putDcdnKvNamespace(const Models::PutDcdnKvNamespaceRequest &request);

      /**
       * @summary 设置Namespace的key-value对，支持最大25M的请求体
       *
       * @param request PutDcdnKvWithHighCapacityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PutDcdnKvWithHighCapacityResponse
       */
      Models::PutDcdnKvWithHighCapacityResponse putDcdnKvWithHighCapacityWithOptions(const Models::PutDcdnKvWithHighCapacityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 设置Namespace的key-value对，支持最大25M的请求体
       *
       * @param request PutDcdnKvWithHighCapacityRequest
       * @return PutDcdnKvWithHighCapacityResponse
       */
      Models::PutDcdnKvWithHighCapacityResponse putDcdnKvWithHighCapacity(const Models::PutDcdnKvWithHighCapacityRequest &request);

      /**
       * @summary 指定缓存tag刷新节点上的文件内容
       *
       * @param request RefreshDcdnObjectCacheByCacheTagRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RefreshDcdnObjectCacheByCacheTagResponse
       */
      Models::RefreshDcdnObjectCacheByCacheTagResponse refreshDcdnObjectCacheByCacheTagWithOptions(const Models::RefreshDcdnObjectCacheByCacheTagRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 指定缓存tag刷新节点上的文件内容
       *
       * @param request RefreshDcdnObjectCacheByCacheTagRequest
       * @return RefreshDcdnObjectCacheByCacheTagResponse
       */
      Models::RefreshDcdnObjectCacheByCacheTagResponse refreshDcdnObjectCacheByCacheTag(const Models::RefreshDcdnObjectCacheByCacheTagRequest &request);

      /**
       * @summary Refreshes specified objects on points of presence (POPs). The objects can be included in the content of files or URLs. You can refresh multiple URLs in each request.
       *
       * @description *   Dynamic Content Delivery Network (DCDN) supports POST requests in which parameters are sent as a form.
       * *   You can call the [RefreshDcdnObjectCaches](https://help.aliyun.com/document_detail/130620.html) operation to purge content and call the [PreloadDcdnObjectCaches](https://help.aliyun.com/document_detail/130636.html) operation to prefetch content.
       * *   By default, each Alibaba Cloud account can purge content from a maximum of 10,000 URLs and 100 directories including subdirectories per day. If the daily peak bandwidth of your Alibaba Cloud account exceeds 200 Mbit/s, [submit a ticket](https://account.alibabacloud.com/login/login.htm?oauth_callback=https%3A//ticket-intl.console.aliyun.com/%23/ticket/createIndex) to request a quota increase. Alibaba Cloud determines whether to approve your application based on your workloads.
       * *   You can specify up to 1,000 URLs or 100 directories that you want to purge in each request.
       * *   You can specify up to 1,000 URLs that you want to purge per minute for each domain name.
       * *   You can call this operation up to 30 times per second per account.
       * #### [](#)Precautions
       * *   After a purge task is completed, your resources that are cached on points of presence (POPs) are removed. When a POP receives a request for your resources, the request is redirected to the origin server to retrieve the resources. Then, the resources are returned to the client and cached on POPs. If you frequently run purge tasks, more requests are redirected to the origin server for resources. This results in high bandwidth costs and more loads on the origin server.
       * *   A purge task takes effect 5 to 6 minutes after being submitted. If the resource you want to purge has a TTL of less than 5 minutes, you wait for it to expire instead of manually running a purge task.
       * *   To allow RAM users to perform this operation, you need to first grant them the required permissions. For more information, see [Authorize a RAM user to prefetch and refresh resources](https://help.aliyun.com/document_detail/445051.html).
       *
       * @param request RefreshDcdnObjectCachesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RefreshDcdnObjectCachesResponse
       */
      Models::RefreshDcdnObjectCachesResponse refreshDcdnObjectCachesWithOptions(const Models::RefreshDcdnObjectCachesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Refreshes specified objects on points of presence (POPs). The objects can be included in the content of files or URLs. You can refresh multiple URLs in each request.
       *
       * @description *   Dynamic Content Delivery Network (DCDN) supports POST requests in which parameters are sent as a form.
       * *   You can call the [RefreshDcdnObjectCaches](https://help.aliyun.com/document_detail/130620.html) operation to purge content and call the [PreloadDcdnObjectCaches](https://help.aliyun.com/document_detail/130636.html) operation to prefetch content.
       * *   By default, each Alibaba Cloud account can purge content from a maximum of 10,000 URLs and 100 directories including subdirectories per day. If the daily peak bandwidth of your Alibaba Cloud account exceeds 200 Mbit/s, [submit a ticket](https://account.alibabacloud.com/login/login.htm?oauth_callback=https%3A//ticket-intl.console.aliyun.com/%23/ticket/createIndex) to request a quota increase. Alibaba Cloud determines whether to approve your application based on your workloads.
       * *   You can specify up to 1,000 URLs or 100 directories that you want to purge in each request.
       * *   You can specify up to 1,000 URLs that you want to purge per minute for each domain name.
       * *   You can call this operation up to 30 times per second per account.
       * #### [](#)Precautions
       * *   After a purge task is completed, your resources that are cached on points of presence (POPs) are removed. When a POP receives a request for your resources, the request is redirected to the origin server to retrieve the resources. Then, the resources are returned to the client and cached on POPs. If you frequently run purge tasks, more requests are redirected to the origin server for resources. This results in high bandwidth costs and more loads on the origin server.
       * *   A purge task takes effect 5 to 6 minutes after being submitted. If the resource you want to purge has a TTL of less than 5 minutes, you wait for it to expire instead of manually running a purge task.
       * *   To allow RAM users to perform this operation, you need to first grant them the required permissions. For more information, see [Authorize a RAM user to prefetch and refresh resources](https://help.aliyun.com/document_detail/445051.html).
       *
       * @param request RefreshDcdnObjectCachesRequest
       * @return RefreshDcdnObjectCachesResponse
       */
      Models::RefreshDcdnObjectCachesResponse refreshDcdnObjectCaches(const Models::RefreshDcdnObjectCachesRequest &request);

      /**
       * @summary Refreshes the cache that is written by calling the cache operation of EdgeRoutine. You can refresh multiple URLs in each request.
       *
       * @description > *   Dynamic Content Delivery Network (DCDN) supports POST requests in which parameters are sent as a form.
       * > *   Related operation: [RefreshDcdnObjectCaches](https://help.aliyun.com/document_detail/130620.html).
       * > *   By default, each Alibaba Cloud account can purge content from a maxim> um of 10,000 URLs and 100 directories including subdirectories per day.
       * > *   You can specify up to 1,000 URLs or 100 directories that you want to purge in each request.
       * > *   You can specify up to 1,000 URLs that you want to purge per minute for each domain name.
       * > *   You can call this operation up to 30 times per second per account.
       *
       * @param request RefreshErObjectCachesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RefreshErObjectCachesResponse
       */
      Models::RefreshErObjectCachesResponse refreshErObjectCachesWithOptions(const Models::RefreshErObjectCachesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Refreshes the cache that is written by calling the cache operation of EdgeRoutine. You can refresh multiple URLs in each request.
       *
       * @description > *   Dynamic Content Delivery Network (DCDN) supports POST requests in which parameters are sent as a form.
       * > *   Related operation: [RefreshDcdnObjectCaches](https://help.aliyun.com/document_detail/130620.html).
       * > *   By default, each Alibaba Cloud account can purge content from a maxim> um of 10,000 URLs and 100 directories including subdirectories per day.
       * > *   You can specify up to 1,000 URLs or 100 directories that you want to purge in each request.
       * > *   You can specify up to 1,000 URLs that you want to purge per minute for each domain name.
       * > *   You can call this operation up to 30 times per second per account.
       *
       * @param request RefreshErObjectCachesRequest
       * @return RefreshErObjectCachesResponse
       */
      Models::RefreshErObjectCachesResponse refreshErObjectCaches(const Models::RefreshErObjectCachesRequest &request);

      /**
       * @summary Rolls back the configurations of an accelerated domain name from the staging environment to the production environment.
       *
       * @description > You can call this operation up to 30 times per second per account.
       *
       * @param request RollbackDcdnStagingConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RollbackDcdnStagingConfigResponse
       */
      Models::RollbackDcdnStagingConfigResponse rollbackDcdnStagingConfigWithOptions(const Models::RollbackDcdnStagingConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Rolls back the configurations of an accelerated domain name from the staging environment to the production environment.
       *
       * @description > You can call this operation up to 30 times per second per account.
       *
       * @param request RollbackDcdnStagingConfigRequest
       * @return RollbackDcdnStagingConfigResponse
       */
      Models::RollbackDcdnStagingConfigResponse rollbackDcdnStagingConfig(const Models::RollbackDcdnStagingConfigRequest &request);

      /**
       * @summary Configures an SSL certificate for a specified domain name.
       *
       * @param request SetDcdnDomainCSRCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetDcdnDomainCSRCertificateResponse
       */
      Models::SetDcdnDomainCSRCertificateResponse setDcdnDomainCSRCertificateWithOptions(const Models::SetDcdnDomainCSRCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures an SSL certificate for a specified domain name.
       *
       * @param request SetDcdnDomainCSRCertificateRequest
       * @return SetDcdnDomainCSRCertificateResponse
       */
      Models::SetDcdnDomainCSRCertificateResponse setDcdnDomainCSRCertificate(const Models::SetDcdnDomainCSRCertificateRequest &request);

      /**
       * @summary Enables or disables the ShangMi (SM) certificate for a domain name.
       *
       * @description > You can call this operation up to 30 times per second per account.
       *
       * @param request SetDcdnDomainSMCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetDcdnDomainSMCertificateResponse
       */
      Models::SetDcdnDomainSMCertificateResponse setDcdnDomainSMCertificateWithOptions(const Models::SetDcdnDomainSMCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables or disables the ShangMi (SM) certificate for a domain name.
       *
       * @description > You can call this operation up to 30 times per second per account.
       *
       * @param request SetDcdnDomainSMCertificateRequest
       * @return SetDcdnDomainSMCertificateResponse
       */
      Models::SetDcdnDomainSMCertificateResponse setDcdnDomainSMCertificate(const Models::SetDcdnDomainSMCertificateRequest &request);

      /**
       * @summary Enables or disables the SSL certificate for a domain name and updates certificate details.
       *
       * @param request SetDcdnDomainSSLCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetDcdnDomainSSLCertificateResponse
       */
      Models::SetDcdnDomainSSLCertificateResponse setDcdnDomainSSLCertificateWithOptions(const Models::SetDcdnDomainSSLCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables or disables the SSL certificate for a domain name and updates certificate details.
       *
       * @param request SetDcdnDomainSSLCertificateRequest
       * @return SetDcdnDomainSSLCertificateResponse
       */
      Models::SetDcdnDomainSSLCertificateResponse setDcdnDomainSSLCertificate(const Models::SetDcdnDomainSSLCertificateRequest &request);

      /**
       * @summary Sets or modifies the domain name configuration in the canary release environment.
       *
       * @description > You can call this operation up to 30 times per second per account.
       *
       * @param request SetDcdnDomainStagingConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetDcdnDomainStagingConfigResponse
       */
      Models::SetDcdnDomainStagingConfigResponse setDcdnDomainStagingConfigWithOptions(const Models::SetDcdnDomainStagingConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets or modifies the domain name configuration in the canary release environment.
       *
       * @description > You can call this operation up to 30 times per second per account.
       *
       * @param request SetDcdnDomainStagingConfigRequest
       * @return SetDcdnDomainStagingConfigResponse
       */
      Models::SetDcdnDomainStagingConfigResponse setDcdnDomainStagingConfig(const Models::SetDcdnDomainStagingConfigRequest &request);

      /**
       * @summary Blocks or unblocks IP addresses or CIDR blocks.
       *
       * @description >  You can call this operation to block or unblock a large number of IP addresses or CIDR blocks. You can block or unblock up to 1,000 IP addresses or CIDR blocks in a request.
       *
       * @param request SetDcdnFullDomainsBlockIPRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetDcdnFullDomainsBlockIPResponse
       */
      Models::SetDcdnFullDomainsBlockIPResponse setDcdnFullDomainsBlockIPWithOptions(const Models::SetDcdnFullDomainsBlockIPRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Blocks or unblocks IP addresses or CIDR blocks.
       *
       * @description >  You can call this operation to block or unblock a large number of IP addresses or CIDR blocks. You can block or unblock up to 1,000 IP addresses or CIDR blocks in a request.
       *
       * @param request SetDcdnFullDomainsBlockIPRequest
       * @return SetDcdnFullDomainsBlockIPResponse
       */
      Models::SetDcdnFullDomainsBlockIPResponse setDcdnFullDomainsBlockIP(const Models::SetDcdnFullDomainsBlockIPRequest &request);

      /**
       * @summary Configures features for a user.
       *
       * @description > You can call this operation up to 30 times per second per account.
       *
       * @param request SetDcdnUserConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetDcdnUserConfigResponse
       */
      Models::SetDcdnUserConfigResponse setDcdnUserConfigWithOptions(const Models::SetDcdnUserConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures features for a user.
       *
       * @description > You can call this operation up to 30 times per second per account.
       *
       * @param request SetDcdnUserConfigRequest
       * @return SetDcdnUserConfigResponse
       */
      Models::SetDcdnUserConfigResponse setDcdnUserConfig(const Models::SetDcdnUserConfigRequest &request);

      /**
       * @summary Configures a subdomain for a routine.
       *
       * @description > 
       * *   Each subdomain is globally unique. Resource Access Management (RAM) users cannot create duplicate subdomains.
       * *   You can call this operation up to 100 times per second per account.
       *
       * @param tmpReq SetRoutineSubdomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetRoutineSubdomainResponse
       */
      Models::SetRoutineSubdomainResponse setRoutineSubdomainWithOptions(const Models::SetRoutineSubdomainRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures a subdomain for a routine.
       *
       * @description > 
       * *   Each subdomain is globally unique. Resource Access Management (RAM) users cannot create duplicate subdomains.
       * *   You can call this operation up to 100 times per second per account.
       *
       * @param request SetRoutineSubdomainRequest
       * @return SetRoutineSubdomainResponse
       */
      Models::SetRoutineSubdomainResponse setRoutineSubdomain(const Models::SetRoutineSubdomainRequest &request);

      /**
       * @summary Enables a specified disabled accelerated domain. After the accelerated domain is enabled, the value of the DomainStatus parameter changes to Online for the domain.
       *
       * @description > 
       * *   If an accelerated domain name is in invalid state or your account has an overdue payment, the accelerated domain name cannot be enabled.
       * *   You can call this operation up to 30 times per second per account.
       *
       * @param request StartDcdnDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartDcdnDomainResponse
       */
      Models::StartDcdnDomainResponse startDcdnDomainWithOptions(const Models::StartDcdnDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables a specified disabled accelerated domain. After the accelerated domain is enabled, the value of the DomainStatus parameter changes to Online for the domain.
       *
       * @description > 
       * *   If an accelerated domain name is in invalid state or your account has an overdue payment, the accelerated domain name cannot be enabled.
       * *   You can call this operation up to 30 times per second per account.
       *
       * @param request StartDcdnDomainRequest
       * @return StartDcdnDomainResponse
       */
      Models::StartDcdnDomainResponse startDcdnDomain(const Models::StartDcdnDomainRequest &request);

      /**
       * @summary Enables one or more accelerated domain names. After the accelerated domain names are enabled, the value of the DomainStatus parameter for the domain names changes to Online.
       *
       * @description *   If an accelerated domain name is in invalid state or your account has an overdue payment, the accelerated domain name cannot be enabled.
       * *   You can call this operation up to 20 times per second per account.
       *
       * @param request StartDcdnIpaDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartDcdnIpaDomainResponse
       */
      Models::StartDcdnIpaDomainResponse startDcdnIpaDomainWithOptions(const Models::StartDcdnIpaDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables one or more accelerated domain names. After the accelerated domain names are enabled, the value of the DomainStatus parameter for the domain names changes to Online.
       *
       * @description *   If an accelerated domain name is in invalid state or your account has an overdue payment, the accelerated domain name cannot be enabled.
       * *   You can call this operation up to 20 times per second per account.
       *
       * @param request StartDcdnIpaDomainRequest
       * @return StartDcdnIpaDomainResponse
       */
      Models::StartDcdnIpaDomainResponse startDcdnIpaDomain(const Models::StartDcdnIpaDomainRequest &request);

      /**
       * @summary Disables a specified accelerated domain. After the accelerated domain is disabled,
       *                   the value of the DomainStatus parameter changes to Offline for the domain.
       *
       * @description > 
       * *   After an accelerated domain is disabled, Dynamic Content Delivery Network (DCDN) retains its information and routes all the requests that are destined for the accelerated domain to the origin server.
       * *   You can call this operation up to 30 times per second per account.
       *
       * @param request StopDcdnDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopDcdnDomainResponse
       */
      Models::StopDcdnDomainResponse stopDcdnDomainWithOptions(const Models::StopDcdnDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables a specified accelerated domain. After the accelerated domain is disabled,
       *                   the value of the DomainStatus parameter changes to Offline for the domain.
       *
       * @description > 
       * *   After an accelerated domain is disabled, Dynamic Content Delivery Network (DCDN) retains its information and routes all the requests that are destined for the accelerated domain to the origin server.
       * *   You can call this operation up to 30 times per second per account.
       *
       * @param request StopDcdnDomainRequest
       * @return StopDcdnDomainResponse
       */
      Models::StopDcdnDomainResponse stopDcdnDomain(const Models::StopDcdnDomainRequest &request);

      /**
       * @summary Disables an accelerated domain name. After an accelerated domain name is disabled, the value of the DomainStatus parameter for the domain name changes to Offline.
       *
       * @description > 
       * *   If you disable an accelerated domain, the configurations of the accelerated domain are still retained. The system automatically forwards all the requests that are destined for this domain to the origin.
       * *   You can call this operation up to 20 times per second per account.
       *
       * @param request StopDcdnIpaDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopDcdnIpaDomainResponse
       */
      Models::StopDcdnIpaDomainResponse stopDcdnIpaDomainWithOptions(const Models::StopDcdnIpaDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables an accelerated domain name. After an accelerated domain name is disabled, the value of the DomainStatus parameter for the domain name changes to Offline.
       *
       * @description > 
       * *   If you disable an accelerated domain, the configurations of the accelerated domain are still retained. The system automatically forwards all the requests that are destined for this domain to the origin.
       * *   You can call this operation up to 20 times per second per account.
       *
       * @param request StopDcdnIpaDomainRequest
       * @return StopDcdnIpaDomainResponse
       */
      Models::StopDcdnIpaDomainResponse stopDcdnIpaDomain(const Models::StopDcdnIpaDomainRequest &request);

      /**
       * @summary Adds one or more tags to a resource.
       *
       * @description > You can call this operation up to 100 times per second per account.
       *
       * @param request TagDcdnResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagDcdnResourcesResponse
       */
      Models::TagDcdnResourcesResponse tagDcdnResourcesWithOptions(const Models::TagDcdnResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds one or more tags to a resource.
       *
       * @description > You can call this operation up to 100 times per second per account.
       *
       * @param request TagDcdnResourcesRequest
       * @return TagDcdnResourcesResponse
       */
      Models::TagDcdnResourcesResponse tagDcdnResources(const Models::TagDcdnResourcesRequest &request);

      /**
       * @summary Removes one or more tags from a resource.
       *
       * @description > You can call this operation up to 100 times per second per account.
       *
       * @param request UntagDcdnResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UntagDcdnResourcesResponse
       */
      Models::UntagDcdnResourcesResponse untagDcdnResourcesWithOptions(const Models::UntagDcdnResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes one or more tags from a resource.
       *
       * @description > You can call this operation up to 100 times per second per account.
       *
       * @param request UntagDcdnResourcesRequest
       * @return UntagDcdnResourcesResponse
       */
      Models::UntagDcdnResourcesResponse untagDcdnResources(const Models::UntagDcdnResourcesRequest &request);

      /**
       * @summary Updates a tracking task by task ID.
       *
       * @description > You can call this operation up to three times per second per account.
       *
       * @param request UpdateDcdnDeliverTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDcdnDeliverTaskResponse
       */
      Models::UpdateDcdnDeliverTaskResponse updateDcdnDeliverTaskWithOptions(const Models::UpdateDcdnDeliverTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a tracking task by task ID.
       *
       * @description > You can call this operation up to three times per second per account.
       *
       * @param request UpdateDcdnDeliverTaskRequest
       * @return UpdateDcdnDeliverTaskResponse
       */
      Models::UpdateDcdnDeliverTaskResponse updateDcdnDeliverTask(const Models::UpdateDcdnDeliverTaskRequest &request);

      /**
       * @summary Modifies an accelerated domain name.
       *
       * @description > You can call this operation up to 30 times per second per account.
       *
       * @param request UpdateDcdnDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDcdnDomainResponse
       */
      Models::UpdateDcdnDomainResponse updateDcdnDomainWithOptions(const Models::UpdateDcdnDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies an accelerated domain name.
       *
       * @description > You can call this operation up to 30 times per second per account.
       *
       * @param request UpdateDcdnDomainRequest
       * @return UpdateDcdnDomainResponse
       */
      Models::UpdateDcdnDomainResponse updateDcdnDomain(const Models::UpdateDcdnDomainRequest &request);

      /**
       * @summary Modifies a domain name that is accelerated by IP Application Accelerator (IPA).
       *
       * @description >  You can call this operation up to 20 times per second per account.
       *
       * @param request UpdateDcdnIpaDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDcdnIpaDomainResponse
       */
      Models::UpdateDcdnIpaDomainResponse updateDcdnIpaDomainWithOptions(const Models::UpdateDcdnIpaDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies a domain name that is accelerated by IP Application Accelerator (IPA).
       *
       * @description >  You can call this operation up to 20 times per second per account.
       *
       * @param request UpdateDcdnIpaDomainRequest
       * @return UpdateDcdnIpaDomainResponse
       */
      Models::UpdateDcdnIpaDomainResponse updateDcdnIpaDomain(const Models::UpdateDcdnIpaDomainRequest &request);

      /**
       * @summary Updates a real-time log delivery project.
       *
       * @description > You can call this operation up to 100 times per second per account.
       *
       * @param request UpdateDcdnSLSRealtimeLogDeliveryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDcdnSLSRealtimeLogDeliveryResponse
       */
      Models::UpdateDcdnSLSRealtimeLogDeliveryResponse updateDcdnSLSRealtimeLogDeliveryWithOptions(const Models::UpdateDcdnSLSRealtimeLogDeliveryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a real-time log delivery project.
       *
       * @description > You can call this operation up to 100 times per second per account.
       *
       * @param request UpdateDcdnSLSRealtimeLogDeliveryRequest
       * @return UpdateDcdnSLSRealtimeLogDeliveryResponse
       */
      Models::UpdateDcdnSLSRealtimeLogDeliveryResponse updateDcdnSLSRealtimeLogDelivery(const Models::UpdateDcdnSLSRealtimeLogDeliveryRequest &request);

      /**
       * @summary Updates one or more operations reports.
       *
       * @description > You can call this operation up to three times per second per account.
       *
       * @param request UpdateDcdnSubTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDcdnSubTaskResponse
       */
      Models::UpdateDcdnSubTaskResponse updateDcdnSubTaskWithOptions(const Models::UpdateDcdnSubTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates one or more operations reports.
       *
       * @description > You can call this operation up to three times per second per account.
       *
       * @param request UpdateDcdnSubTaskRequest
       * @return UpdateDcdnSubTaskResponse
       */
      Models::UpdateDcdnSubTaskResponse updateDcdnSubTask(const Models::UpdateDcdnSubTaskRequest &request);

      /**
       * @summary Updates the fields in real-time log entries.
       *
       * @description > You can call this operation up to 100 times per second per account.
       *
       * @param request UpdateDcdnUserRealTimeDeliveryFieldRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateDcdnUserRealTimeDeliveryFieldResponse
       */
      Models::UpdateDcdnUserRealTimeDeliveryFieldResponse updateDcdnUserRealTimeDeliveryFieldWithOptions(const Models::UpdateDcdnUserRealTimeDeliveryFieldRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the fields in real-time log entries.
       *
       * @description > You can call this operation up to 100 times per second per account.
       *
       * @param request UpdateDcdnUserRealTimeDeliveryFieldRequest
       * @return UpdateDcdnUserRealTimeDeliveryFieldResponse
       */
      Models::UpdateDcdnUserRealTimeDeliveryFieldResponse updateDcdnUserRealTimeDeliveryField(const Models::UpdateDcdnUserRealTimeDeliveryFieldRequest &request);

      /**
       * @summary Uploads code to EdgeRoutine (ER).
       *
       * @description > 
       * *   Each time you submit code, a version of the code is generated. You can manage and publish code by version.
       * *   Each routine can retain at most 10 versions. If the upper limit is reached, you must call the DeleteRoutineCodeRevision operation to manually delete versions that are no longer needed before new versions can be saved.
       * *   You can call this operation up to 100 times per second per account.
       *
       * @param request UploadRoutineCodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UploadRoutineCodeResponse
       */
      Models::UploadRoutineCodeResponse uploadRoutineCodeWithOptions(const Models::UploadRoutineCodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Uploads code to EdgeRoutine (ER).
       *
       * @description > 
       * *   Each time you submit code, a version of the code is generated. You can manage and publish code by version.
       * *   Each routine can retain at most 10 versions. If the upper limit is reached, you must call the DeleteRoutineCodeRevision operation to manually delete versions that are no longer needed before new versions can be saved.
       * *   You can call this operation up to 100 times per second per account.
       *
       * @param request UploadRoutineCodeRequest
       * @return UploadRoutineCodeResponse
       */
      Models::UploadRoutineCodeResponse uploadRoutineCode(const Models::UploadRoutineCodeRequest &request);

      /**
       * @summary Uploads code to a routine for testing.
       *
       * @description > 
       * *   Each time you upload code to a routine, a version is generated. The number of versions is counted by CodeRev. The uploaded code is used only for testing.
       * *   The code is automatically published to a staging environment.
       * *   Each routine can retain at most 10 versions. If the upper limit is reached, you need to call the DeleteRoutineCodeRevision operation to manually delete versions that are no longer needed before new versions can be saved.
       * *   You can call this operation up to 100 times per second per account.
       *
       * @param request UploadStagingRoutineCodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UploadStagingRoutineCodeResponse
       */
      Models::UploadStagingRoutineCodeResponse uploadStagingRoutineCodeWithOptions(const Models::UploadStagingRoutineCodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Uploads code to a routine for testing.
       *
       * @description > 
       * *   Each time you upload code to a routine, a version is generated. The number of versions is counted by CodeRev. The uploaded code is used only for testing.
       * *   The code is automatically published to a staging environment.
       * *   Each routine can retain at most 10 versions. If the upper limit is reached, you need to call the DeleteRoutineCodeRevision operation to manually delete versions that are no longer needed before new versions can be saved.
       * *   You can call this operation up to 100 times per second per account.
       *
       * @param request UploadStagingRoutineCodeRequest
       * @return UploadStagingRoutineCodeResponse
       */
      Models::UploadStagingRoutineCodeResponse uploadStagingRoutineCode(const Models::UploadStagingRoutineCodeRequest &request);

      /**
       * @summary Verifies the ownership of a domain name.
       *
       * @description > You can call this operation up to 100 times per second per account.
       *
       * @param request VerifyDcdnDomainOwnerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return VerifyDcdnDomainOwnerResponse
       */
      Models::VerifyDcdnDomainOwnerResponse verifyDcdnDomainOwnerWithOptions(const Models::VerifyDcdnDomainOwnerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Verifies the ownership of a domain name.
       *
       * @description > You can call this operation up to 100 times per second per account.
       *
       * @param request VerifyDcdnDomainOwnerRequest
       * @return VerifyDcdnDomainOwnerResponse
       */
      Models::VerifyDcdnDomainOwnerResponse verifyDcdnDomainOwner(const Models::VerifyDcdnDomainOwnerRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
