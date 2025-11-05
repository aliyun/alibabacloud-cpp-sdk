// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_CDN20180510_HPP_
#define ALIBABACLOUD_CDN20180510_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Cdn20180510Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Cdn20180510.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Adds a domain name to accelerate.
       *
       * @description *   You must activate Alibaba Cloud CDN before you can add a domain name to it. For more information, see [Activate Alibaba Cloud CDN](https://help.aliyun.com/document_detail/27272.html).
       * *   The domain name that you want to add has a valid Internet Content Provider (ICP) number.
       * *   You can add only one domain name to Alibaba Cloud CDN in each call. Each Alibaba Cloud account can add a maximum of 50 domain names to Alibaba Cloud CDN.
       * *   If the content of the origin server is not stored on Alibaba Cloud, the content must be reviewed. The review will be completed by the end of the next business day after you submit the application.
       * *   You can call this operation up to 30 times per second per account.
       *
       * @param request AddCdnDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddCdnDomainResponse
       */
      Models::AddCdnDomainResponse addCdnDomainWithOptions(const Models::AddCdnDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a domain name to accelerate.
       *
       * @description *   You must activate Alibaba Cloud CDN before you can add a domain name to it. For more information, see [Activate Alibaba Cloud CDN](https://help.aliyun.com/document_detail/27272.html).
       * *   The domain name that you want to add has a valid Internet Content Provider (ICP) number.
       * *   You can add only one domain name to Alibaba Cloud CDN in each call. Each Alibaba Cloud account can add a maximum of 50 domain names to Alibaba Cloud CDN.
       * *   If the content of the origin server is not stored on Alibaba Cloud, the content must be reviewed. The review will be completed by the end of the next business day after you submit the application.
       * *   You can call this operation up to 30 times per second per account.
       *
       * @param request AddCdnDomainRequest
       * @return AddCdnDomainResponse
       */
      Models::AddCdnDomainResponse addCdnDomain(const Models::AddCdnDomainRequest &request);

      /**
       * @summary Adds a Function Compute trigger.
       *
       * @param request AddFCTriggerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddFCTriggerResponse
       */
      Models::AddFCTriggerResponse addFCTriggerWithOptions(const Models::AddFCTriggerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a Function Compute trigger.
       *
       * @param request AddFCTriggerRequest
       * @return AddFCTriggerResponse
       */
      Models::AddFCTriggerResponse addFCTrigger(const Models::AddFCTriggerRequest &request);

      /**
       * @summary Adds one or more domain names to Alibaba Cloud CDN. You can add a maximum of 50 domain names at a time.
       *
       * @description *   You must activate Alibaba Cloud CDN before you can add a domain name to it. For more information, see [Activate Alibaba Cloud CDN](https://help.aliyun.com/document_detail/27272.html).
       * *   If the acceleration region is Chinese Mainland Only or Global, you must apply for an ICP filing for the domain name.
       * *   You can specify multiple domain names and separate them with commas (,). You can specify at most 50 domain names in each call.
       * *   For more information, see [Add a domain name](https://help.aliyun.com/document_detail/122181.html).
       * *   You can call this operation up to 30 times per second per account.
       *
       * @param request BatchAddCdnDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchAddCdnDomainResponse
       */
      Models::BatchAddCdnDomainResponse batchAddCdnDomainWithOptions(const Models::BatchAddCdnDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds one or more domain names to Alibaba Cloud CDN. You can add a maximum of 50 domain names at a time.
       *
       * @description *   You must activate Alibaba Cloud CDN before you can add a domain name to it. For more information, see [Activate Alibaba Cloud CDN](https://help.aliyun.com/document_detail/27272.html).
       * *   If the acceleration region is Chinese Mainland Only or Global, you must apply for an ICP filing for the domain name.
       * *   You can specify multiple domain names and separate them with commas (,). You can specify at most 50 domain names in each call.
       * *   For more information, see [Add a domain name](https://help.aliyun.com/document_detail/122181.html).
       * *   You can call this operation up to 30 times per second per account.
       *
       * @param request BatchAddCdnDomainRequest
       * @return BatchAddCdnDomainResponse
       */
      Models::BatchAddCdnDomainResponse batchAddCdnDomain(const Models::BatchAddCdnDomainRequest &request);

      /**
       * @summary Deletes configurations of multiple accelerated domain names at a time.
       *
       * @description *   You can specify up to 50 domain names in each request.
       * *   You can call this operation up to 30 times per second per account.
       *
       * @param request BatchDeleteCdnDomainConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchDeleteCdnDomainConfigResponse
       */
      Models::BatchDeleteCdnDomainConfigResponse batchDeleteCdnDomainConfigWithOptions(const Models::BatchDeleteCdnDomainConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes configurations of multiple accelerated domain names at a time.
       *
       * @description *   You can specify up to 50 domain names in each request.
       * *   You can call this operation up to 30 times per second per account.
       *
       * @param request BatchDeleteCdnDomainConfigRequest
       * @return BatchDeleteCdnDomainConfigResponse
       */
      Models::BatchDeleteCdnDomainConfigResponse batchDeleteCdnDomainConfig(const Models::BatchDeleteCdnDomainConfigRequest &request);

      /**
       * @summary Queries whether one or more IP addresses are assigned to Alibaba Cloud CDN.
       *
       * @description >The maximum number of times that each user can call this operation per second is 20.
       *
       * @param request BatchDescribeCdnIpInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchDescribeCdnIpInfoResponse
       */
      Models::BatchDescribeCdnIpInfoResponse batchDescribeCdnIpInfoWithOptions(const Models::BatchDescribeCdnIpInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries whether one or more IP addresses are assigned to Alibaba Cloud CDN.
       *
       * @description >The maximum number of times that each user can call this operation per second is 20.
       *
       * @param request BatchDescribeCdnIpInfoRequest
       * @return BatchDescribeCdnIpInfoResponse
       */
      Models::BatchDescribeCdnIpInfoResponse batchDescribeCdnIpInfo(const Models::BatchDescribeCdnIpInfoRequest &request);

      /**
       * @summary Configures multiple accelerated domain names at a time.
       *
       * @description *   You can call this operation up to 30 times per second per account.
       * *   You can specify multiple domain names and must separate them with commas (,). You can specify up to 50 domain names in each call.
       * *   If the BatchSetCdnDomainConfig operation is successful, a unique configuration ID (ConfigId) is generated. You can use configuration IDs to update or delete configurations. For more information, see [Usage notes on ConfigId](https://help.aliyun.com/document_detail/388994.html).
       *
       * @param request BatchSetCdnDomainConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchSetCdnDomainConfigResponse
       */
      Models::BatchSetCdnDomainConfigResponse batchSetCdnDomainConfigWithOptions(const Models::BatchSetCdnDomainConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures multiple accelerated domain names at a time.
       *
       * @description *   You can call this operation up to 30 times per second per account.
       * *   You can specify multiple domain names and must separate them with commas (,). You can specify up to 50 domain names in each call.
       * *   If the BatchSetCdnDomainConfig operation is successful, a unique configuration ID (ConfigId) is generated. You can use configuration IDs to update or delete configurations. For more information, see [Usage notes on ConfigId](https://help.aliyun.com/document_detail/388994.html).
       *
       * @param request BatchSetCdnDomainConfigRequest
       * @return BatchSetCdnDomainConfigResponse
       */
      Models::BatchSetCdnDomainConfigResponse batchSetCdnDomainConfig(const Models::BatchSetCdnDomainConfigRequest &request);

      /**
       * @summary 批量配置多个域名的灰度动态功能
       *
       * @param request BatchSetGrayDomainFunctionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchSetGrayDomainFunctionResponse
       */
      Models::BatchSetGrayDomainFunctionResponse batchSetGrayDomainFunctionWithOptions(const Models::BatchSetGrayDomainFunctionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量配置多个域名的灰度动态功能
       *
       * @param request BatchSetGrayDomainFunctionRequest
       * @return BatchSetGrayDomainFunctionResponse
       */
      Models::BatchSetGrayDomainFunctionResponse batchSetGrayDomainFunction(const Models::BatchSetGrayDomainFunctionRequest &request);

      /**
       * @summary Enables one or more domain names at a time. After a domain name is enabled, the value of the DomainStatus parameter is changed to Online.
       *
       * @description *   If a domain name specified in the request is in an invalid state or your account has an overdue payment, the domain name cannot be enabled.
       * *   You can call this operation up to 30 times per second per account.
       * *   You can specify up to 50 domain names in each request.
       *
       * @param request BatchStartCdnDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchStartCdnDomainResponse
       */
      Models::BatchStartCdnDomainResponse batchStartCdnDomainWithOptions(const Models::BatchStartCdnDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables one or more domain names at a time. After a domain name is enabled, the value of the DomainStatus parameter is changed to Online.
       *
       * @description *   If a domain name specified in the request is in an invalid state or your account has an overdue payment, the domain name cannot be enabled.
       * *   You can call this operation up to 30 times per second per account.
       * *   You can specify up to 50 domain names in each request.
       *
       * @param request BatchStartCdnDomainRequest
       * @return BatchStartCdnDomainResponse
       */
      Models::BatchStartCdnDomainResponse batchStartCdnDomain(const Models::BatchStartCdnDomainRequest &request);

      /**
       * @summary Disables one or more accelerated domain names at a time. After an accelerated domain name is disabled, the value of the DomainStatus parameter is changed to Offline.
       *
       * @description *   After an accelerated domain name is disabled, Alibaba Cloud CDN retains its information and reroutes all the requests that are destined for the accelerated domain name to the origin.
       * *   If you need to temporarily disable CDN acceleration for a domain name, we recommend that you call the StopDomain operation.
       * *   You can call this operation up to 30 times per second per account.
       * *   You can specify up to 50 domain names in each request.
       *
       * @param request BatchStopCdnDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchStopCdnDomainResponse
       */
      Models::BatchStopCdnDomainResponse batchStopCdnDomainWithOptions(const Models::BatchStopCdnDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables one or more accelerated domain names at a time. After an accelerated domain name is disabled, the value of the DomainStatus parameter is changed to Offline.
       *
       * @description *   After an accelerated domain name is disabled, Alibaba Cloud CDN retains its information and reroutes all the requests that are destined for the accelerated domain name to the origin.
       * *   If you need to temporarily disable CDN acceleration for a domain name, we recommend that you call the StopDomain operation.
       * *   You can call this operation up to 30 times per second per account.
       * *   You can specify up to 50 domain names in each request.
       *
       * @param request BatchStopCdnDomainRequest
       * @return BatchStopCdnDomainResponse
       */
      Models::BatchStopCdnDomainResponse batchStopCdnDomain(const Models::BatchStopCdnDomainRequest &request);

      /**
       * @summary Updates the configurations of multiple accelerated domain names at a time.
       *
       * @description *   You can call this operation up to 30 times per second per account.
       * *   You can specify up to 50 domain names in each request. Separate multiple domain names with commas (,).
       *
       * @param request BatchUpdateCdnDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchUpdateCdnDomainResponse
       */
      Models::BatchUpdateCdnDomainResponse batchUpdateCdnDomainWithOptions(const Models::BatchUpdateCdnDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the configurations of multiple accelerated domain names at a time.
       *
       * @description *   You can call this operation up to 30 times per second per account.
       * *   You can specify up to 50 domain names in each request. Separate multiple domain names with commas (,).
       *
       * @param request BatchUpdateCdnDomainRequest
       * @return BatchUpdateCdnDomainResponse
       */
      Models::BatchUpdateCdnDomainResponse batchUpdateCdnDomain(const Models::BatchUpdateCdnDomainRequest &request);

      /**
       * @summary Checks whether a domain name exists.
       *
       * @param request CheckCdnDomainExistRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckCdnDomainExistResponse
       */
      Models::CheckCdnDomainExistResponse checkCdnDomainExistWithOptions(const Models::CheckCdnDomainExistRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks whether a domain name exists.
       *
       * @param request CheckCdnDomainExistRequest
       * @return CheckCdnDomainExistResponse
       */
      Models::CheckCdnDomainExistResponse checkCdnDomainExist(const Models::CheckCdnDomainExistRequest &request);

      /**
       * @summary Checks whether an ICP filing is obtained for the domain name.
       *
       * @param request CheckCdnDomainICPRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CheckCdnDomainICPResponse
       */
      Models::CheckCdnDomainICPResponse checkCdnDomainICPWithOptions(const Models::CheckCdnDomainICPRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks whether an ICP filing is obtained for the domain name.
       *
       * @param request CheckCdnDomainICPRequest
       * @return CheckCdnDomainICPResponse
       */
      Models::CheckCdnDomainICPResponse checkCdnDomainICP(const Models::CheckCdnDomainICPRequest &request);

      /**
       * @summary Creates a certificate signing request (CSR).
       *
       * @description > You can call this operation up to 100 times per second per account.
       *
       * @param request CreateCdnCertificateSigningRequestRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCdnCertificateSigningRequestResponse
       */
      Models::CreateCdnCertificateSigningRequestResponse createCdnCertificateSigningRequestWithOptions(const Models::CreateCdnCertificateSigningRequestRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a certificate signing request (CSR).
       *
       * @description > You can call this operation up to 100 times per second per account.
       *
       * @param request CreateCdnCertificateSigningRequestRequest
       * @return CreateCdnCertificateSigningRequestResponse
       */
      Models::CreateCdnCertificateSigningRequestResponse createCdnCertificateSigningRequest(const Models::CreateCdnCertificateSigningRequestRequest &request);

      /**
       * @summary Creates a tracking task. After you create a tracking task, the system sends operations reports to you by email on a regular basis.
       *
       * @description > You can call this operation up to three times per second per account.
       *
       * @param request CreateCdnDeliverTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCdnDeliverTaskResponse
       */
      Models::CreateCdnDeliverTaskResponse createCdnDeliverTaskWithOptions(const Models::CreateCdnDeliverTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a tracking task. After you create a tracking task, the system sends operations reports to you by email on a regular basis.
       *
       * @description > You can call this operation up to three times per second per account.
       *
       * @param request CreateCdnDeliverTaskRequest
       * @return CreateCdnDeliverTaskResponse
       */
      Models::CreateCdnDeliverTaskResponse createCdnDeliverTask(const Models::CreateCdnDeliverTaskRequest &request);

      /**
       * @summary Creates a custom operations report.
       *
       * @description *   This operation allows you to create a custom operations report for a specific domain name. You can view the statistics about the domain name in the report.
       * *   You can call this operation up to three times per second per account.
       *
       * @param request CreateCdnSubTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateCdnSubTaskResponse
       */
      Models::CreateCdnSubTaskResponse createCdnSubTaskWithOptions(const Models::CreateCdnSubTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a custom operations report.
       *
       * @description *   This operation allows you to create a custom operations report for a specific domain name. You can view the statistics about the domain name in the report.
       * *   You can call this operation up to three times per second per account.
       *
       * @param request CreateCdnSubTaskRequest
       * @return CreateCdnSubTaskResponse
       */
      Models::CreateCdnSubTaskResponse createCdnSubTask(const Models::CreateCdnSubTaskRequest &request);

      /**
       * @summary Enables real-time log delivery for specific accelerated domain names.
       *
       * @description >  You can call this API operation up to 100 times per second per account.
       *
       * @param request CreateRealTimeLogDeliveryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRealTimeLogDeliveryResponse
       */
      Models::CreateRealTimeLogDeliveryResponse createRealTimeLogDeliveryWithOptions(const Models::CreateRealTimeLogDeliveryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables real-time log delivery for specific accelerated domain names.
       *
       * @description >  You can call this API operation up to 100 times per second per account.
       *
       * @param request CreateRealTimeLogDeliveryRequest
       * @return CreateRealTimeLogDeliveryResponse
       */
      Models::CreateRealTimeLogDeliveryResponse createRealTimeLogDelivery(const Models::CreateRealTimeLogDeliveryRequest &request);

      /**
       * @summary Creates a task to export resource usage details to an Excel file.
       *
       * @description *   You can create a task to query data in the last year. The maximum time range that can be queried is one month.
       * *   You can call this operation up to 100 times per second per account.
       *
       * @param request CreateUsageDetailDataExportTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateUsageDetailDataExportTaskResponse
       */
      Models::CreateUsageDetailDataExportTaskResponse createUsageDetailDataExportTaskWithOptions(const Models::CreateUsageDetailDataExportTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a task to export resource usage details to an Excel file.
       *
       * @description *   You can create a task to query data in the last year. The maximum time range that can be queried is one month.
       * *   You can call this operation up to 100 times per second per account.
       *
       * @param request CreateUsageDetailDataExportTaskRequest
       * @return CreateUsageDetailDataExportTaskResponse
       */
      Models::CreateUsageDetailDataExportTaskResponse createUsageDetailDataExportTask(const Models::CreateUsageDetailDataExportTaskRequest &request);

      /**
       * @summary Creates a task to export your resource usage history to a PDF file.
       *
       * @description *   You can create a task to query data in the last year. The maximum time range that can be queried is one month.
       * *   You can call this operation up to 100 times per second per account.
       *
       * @param request CreateUserUsageDataExportTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateUserUsageDataExportTaskResponse
       */
      Models::CreateUserUsageDataExportTaskResponse createUserUsageDataExportTaskWithOptions(const Models::CreateUserUsageDataExportTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a task to export your resource usage history to a PDF file.
       *
       * @description *   You can create a task to query data in the last year. The maximum time range that can be queried is one month.
       * *   You can call this operation up to 100 times per second per account.
       *
       * @param request CreateUserUsageDataExportTaskRequest
       * @return CreateUserUsageDataExportTaskResponse
       */
      Models::CreateUserUsageDataExportTaskResponse createUserUsageDataExportTask(const Models::CreateUserUsageDataExportTaskRequest &request);

      /**
       * @summary Deletes tracking tasks by task ID.
       *
       * @description > You can call this operation up to three times per second per account.
       *
       * @param request DeleteCdnDeliverTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCdnDeliverTaskResponse
       */
      Models::DeleteCdnDeliverTaskResponse deleteCdnDeliverTaskWithOptions(const Models::DeleteCdnDeliverTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes tracking tasks by task ID.
       *
       * @description > You can call this operation up to three times per second per account.
       *
       * @param request DeleteCdnDeliverTaskRequest
       * @return DeleteCdnDeliverTaskResponse
       */
      Models::DeleteCdnDeliverTaskResponse deleteCdnDeliverTask(const Models::DeleteCdnDeliverTaskRequest &request);

      /**
       * @summary Removes an accelerated domain name from Alibaba Cloud CDN.
       *
       * @description *   We recommend that you add an A record for the domain name in the system of your DNS service provider before you remove the domain name from Alibaba Cloud CDN. Otherwise, the domain name may become inaccessible. Proceed with caution.
       * *   After you successfully call the DeleteCdnDomain operation, all records of the removed domain name are deleted. If you need to only disable the domain name, we recommend that you call the StopCdnDomain operation.
       * *   You can call this operation up to 10 times per second per account.
       *
       * @param request DeleteCdnDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCdnDomainResponse
       */
      Models::DeleteCdnDomainResponse deleteCdnDomainWithOptions(const Models::DeleteCdnDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes an accelerated domain name from Alibaba Cloud CDN.
       *
       * @description *   We recommend that you add an A record for the domain name in the system of your DNS service provider before you remove the domain name from Alibaba Cloud CDN. Otherwise, the domain name may become inaccessible. Proceed with caution.
       * *   After you successfully call the DeleteCdnDomain operation, all records of the removed domain name are deleted. If you need to only disable the domain name, we recommend that you call the StopCdnDomain operation.
       * *   You can call this operation up to 10 times per second per account.
       *
       * @param request DeleteCdnDomainRequest
       * @return DeleteCdnDomainResponse
       */
      Models::DeleteCdnDomainResponse deleteCdnDomain(const Models::DeleteCdnDomainRequest &request);

      /**
       * @summary The ID of the request.
       *
       * @description >  You can call this API operation up to three times per second per account.
       *
       * @param request DeleteCdnSubTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteCdnSubTaskResponse
       */
      Models::DeleteCdnSubTaskResponse deleteCdnSubTaskWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The ID of the request.
       *
       * @description >  You can call this API operation up to three times per second per account.
       *
       * @return DeleteCdnSubTaskResponse
       */
      Models::DeleteCdnSubTaskResponse deleteCdnSubTask();

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
       * @summary Deletes a specified Function Compute trigger.
       *
       * @param request DeleteFCTriggerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteFCTriggerResponse
       */
      Models::DeleteFCTriggerResponse deleteFCTriggerWithOptions(const Models::DeleteFCTriggerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified Function Compute trigger.
       *
       * @param request DeleteFCTriggerRequest
       * @return DeleteFCTriggerResponse
       */
      Models::DeleteFCTriggerResponse deleteFCTrigger(const Models::DeleteFCTriggerRequest &request);

      /**
       * @summary Deletes the Logstore that is used by a specified configuration record of real-time log delivery.
       *
       * @description > You can call this operation up to 100 times per second per account.
       *
       * @param request DeleteRealTimeLogLogstoreRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRealTimeLogLogstoreResponse
       */
      Models::DeleteRealTimeLogLogstoreResponse deleteRealTimeLogLogstoreWithOptions(const Models::DeleteRealTimeLogLogstoreRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the Logstore that is used by a specified configuration record of real-time log delivery.
       *
       * @description > You can call this operation up to 100 times per second per account.
       *
       * @param request DeleteRealTimeLogLogstoreRequest
       * @return DeleteRealTimeLogLogstoreResponse
       */
      Models::DeleteRealTimeLogLogstoreResponse deleteRealTimeLogLogstore(const Models::DeleteRealTimeLogLogstoreRequest &request);

      /**
       * @summary Deletes the configurations of real-time log delivery for specific accelerated domain names.
       *
       * @description > You can call this operation up to 100 times per second per account.
       *
       * @param request DeleteRealtimeLogDeliveryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRealtimeLogDeliveryResponse
       */
      Models::DeleteRealtimeLogDeliveryResponse deleteRealtimeLogDeliveryWithOptions(const Models::DeleteRealtimeLogDeliveryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes the configurations of real-time log delivery for specific accelerated domain names.
       *
       * @description > You can call this operation up to 100 times per second per account.
       *
       * @param request DeleteRealtimeLogDeliveryRequest
       * @return DeleteRealtimeLogDeliveryResponse
       */
      Models::DeleteRealtimeLogDeliveryResponse deleteRealtimeLogDelivery(const Models::DeleteRealtimeLogDeliveryRequest &request);

      /**
       * @summary Deletes specified configurations of an accelerated domain name.
       *
       * @description > You can call this operation up to 30 times per second per account.
       *
       * @param request DeleteSpecificConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSpecificConfigResponse
       */
      Models::DeleteSpecificConfigResponse deleteSpecificConfigWithOptions(const Models::DeleteSpecificConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes specified configurations of an accelerated domain name.
       *
       * @description > You can call this operation up to 30 times per second per account.
       *
       * @param request DeleteSpecificConfigRequest
       * @return DeleteSpecificConfigResponse
       */
      Models::DeleteSpecificConfigResponse deleteSpecificConfig(const Models::DeleteSpecificConfigRequest &request);

      /**
       * @summary Deletes a specified configuration of the staging environment.
       *
       * @description > You can call this operation up to 20 times per second per account.
       *
       * @param request DeleteSpecificStagingConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteSpecificStagingConfigResponse
       */
      Models::DeleteSpecificStagingConfigResponse deleteSpecificStagingConfigWithOptions(const Models::DeleteSpecificStagingConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a specified configuration of the staging environment.
       *
       * @description > You can call this operation up to 20 times per second per account.
       *
       * @param request DeleteSpecificStagingConfigRequest
       * @return DeleteSpecificStagingConfigResponse
       */
      Models::DeleteSpecificStagingConfigResponse deleteSpecificStagingConfig(const Models::DeleteSpecificStagingConfigRequest &request);

      /**
       * @summary Deletes a task that was used to export usage details.
       *
       * @description > You can call this operation up to 100 times per second per account.
       *
       * @param request DeleteUsageDetailDataExportTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteUsageDetailDataExportTaskResponse
       */
      Models::DeleteUsageDetailDataExportTaskResponse deleteUsageDetailDataExportTaskWithOptions(const Models::DeleteUsageDetailDataExportTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a task that was used to export usage details.
       *
       * @description > You can call this operation up to 100 times per second per account.
       *
       * @param request DeleteUsageDetailDataExportTaskRequest
       * @return DeleteUsageDetailDataExportTaskResponse
       */
      Models::DeleteUsageDetailDataExportTaskResponse deleteUsageDetailDataExportTask(const Models::DeleteUsageDetailDataExportTaskRequest &request);

      /**
       * @summary Deletes a task that was used to export usage history.
       *
       * @description > You can call this operation up to 100 times per second per account.
       *
       * @param request DeleteUserUsageDataExportTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteUserUsageDataExportTaskResponse
       */
      Models::DeleteUserUsageDataExportTaskResponse deleteUserUsageDataExportTaskWithOptions(const Models::DeleteUserUsageDataExportTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a task that was used to export usage history.
       *
       * @description > You can call this operation up to 100 times per second per account.
       *
       * @param request DeleteUserUsageDataExportTaskRequest
       * @return DeleteUserUsageDataExportTaskResponse
       */
      Models::DeleteUserUsageDataExportTaskResponse deleteUserUsageDataExportTask(const Models::DeleteUserUsageDataExportTaskRequest &request);

      /**
       * @summary Queries countries and regions that can be added to the blacklist.
       *
       * @description > You can call this operation up to 50 times per second per account.
       *
       * @param request DescribeBlockedRegionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeBlockedRegionsResponse
       */
      Models::DescribeBlockedRegionsResponse describeBlockedRegionsWithOptions(const Models::DescribeBlockedRegionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries countries and regions that can be added to the blacklist.
       *
       * @description > You can call this operation up to 50 times per second per account.
       *
       * @param request DescribeBlockedRegionsRequest
       * @return DescribeBlockedRegionsResponse
       */
      Models::DescribeBlockedRegionsResponse describeBlockedRegions(const Models::DescribeBlockedRegionsRequest &request);

      /**
       * @summary Queries the detailed information about an SSL certificate.
       *
       * @description > You can call this operation up to 20 times per second per account.
       *
       * @param request DescribeCdnCertificateDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCdnCertificateDetailResponse
       */
      Models::DescribeCdnCertificateDetailResponse describeCdnCertificateDetailWithOptions(const Models::DescribeCdnCertificateDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the detailed information about an SSL certificate.
       *
       * @description > You can call this operation up to 20 times per second per account.
       *
       * @param request DescribeCdnCertificateDetailRequest
       * @return DescribeCdnCertificateDetailResponse
       */
      Models::DescribeCdnCertificateDetailResponse describeCdnCertificateDetail(const Models::DescribeCdnCertificateDetailRequest &request);

      /**
       * @summary Queries certificate details by certificate ID.
       *
       * @param request DescribeCdnCertificateDetailByIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCdnCertificateDetailByIdResponse
       */
      Models::DescribeCdnCertificateDetailByIdResponse describeCdnCertificateDetailByIdWithOptions(const Models::DescribeCdnCertificateDetailByIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries certificate details by certificate ID.
       *
       * @param request DescribeCdnCertificateDetailByIdRequest
       * @return DescribeCdnCertificateDetailByIdResponse
       */
      Models::DescribeCdnCertificateDetailByIdResponse describeCdnCertificateDetailById(const Models::DescribeCdnCertificateDetailByIdRequest &request);

      /**
       * @deprecated OpenAPI DescribeCdnCertificateList is deprecated, please use Cdn::2018-05-10::DescribeCdnSSLCertificateList instead.
       *
       * @summary Queries the certificates of accelerated domain names.
       *
       * @description > You can call this operation up to 30 times per second per account.
       *
       * @param request DescribeCdnCertificateListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCdnCertificateListResponse
       */
      Models::DescribeCdnCertificateListResponse describeCdnCertificateListWithOptions(const Models::DescribeCdnCertificateListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @deprecated OpenAPI DescribeCdnCertificateList is deprecated, please use Cdn::2018-05-10::DescribeCdnSSLCertificateList instead.
       *
       * @summary Queries the certificates of accelerated domain names.
       *
       * @description > You can call this operation up to 30 times per second per account.
       *
       * @param request DescribeCdnCertificateListRequest
       * @return DescribeCdnCertificateListResponse
       */
      Models::DescribeCdnCertificateListResponse describeCdnCertificateList(const Models::DescribeCdnCertificateListRequest &request);

      /**
       * @summary Queries the Internet service provider (ISP), region, and country that are required for advanced conditions.
       *
       * @param request DescribeCdnConditionIPBInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCdnConditionIPBInfoResponse
       */
      Models::DescribeCdnConditionIPBInfoResponse describeCdnConditionIPBInfoWithOptions(const Models::DescribeCdnConditionIPBInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the Internet service provider (ISP), region, and country that are required for advanced conditions.
       *
       * @param request DescribeCdnConditionIPBInfoRequest
       * @return DescribeCdnConditionIPBInfoResponse
       */
      Models::DescribeCdnConditionIPBInfoResponse describeCdnConditionIPBInfo(const Models::DescribeCdnConditionIPBInfoRequest &request);

      /**
       * @summary Queries the domain names that are deleted from your account.
       *
       * @description > You can call this operation up to 10 times per second per account.
       *
       * @param request DescribeCdnDeletedDomainsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCdnDeletedDomainsResponse
       */
      Models::DescribeCdnDeletedDomainsResponse describeCdnDeletedDomainsWithOptions(const Models::DescribeCdnDeletedDomainsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the domain names that are deleted from your account.
       *
       * @description > You can call this operation up to 10 times per second per account.
       *
       * @param request DescribeCdnDeletedDomainsRequest
       * @return DescribeCdnDeletedDomainsResponse
       */
      Models::DescribeCdnDeletedDomainsResponse describeCdnDeletedDomains(const Models::DescribeCdnDeletedDomainsRequest &request);

      /**
       * @summary Queries one or more tracking tasks of operations reports.
       *
       * @description > You can call this operation up to 3 times per second per account.
       *
       * @param request DescribeCdnDeliverListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCdnDeliverListResponse
       */
      Models::DescribeCdnDeliverListResponse describeCdnDeliverListWithOptions(const Models::DescribeCdnDeliverListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries one or more tracking tasks of operations reports.
       *
       * @description > You can call this operation up to 3 times per second per account.
       *
       * @param request DescribeCdnDeliverListRequest
       * @return DescribeCdnDeliverListResponse
       */
      Models::DescribeCdnDeliverListResponse describeCdnDeliverList(const Models::DescribeCdnDeliverListRequest &request);

      /**
       * @summary 天翼定制化小时日志下载接口
       *
       * @param request DescribeCdnDomainAtoaLogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCdnDomainAtoaLogsResponse
       */
      Models::DescribeCdnDomainAtoaLogsResponse describeCdnDomainAtoaLogsWithOptions(const Models::DescribeCdnDomainAtoaLogsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 天翼定制化小时日志下载接口
       *
       * @param request DescribeCdnDomainAtoaLogsRequest
       * @return DescribeCdnDomainAtoaLogsResponse
       */
      Models::DescribeCdnDomainAtoaLogsResponse describeCdnDomainAtoaLogs(const Models::DescribeCdnDomainAtoaLogsRequest &request);

      /**
       * @summary Queries accelerated domain names by SSL certificate.
       *
       * @description >  You can call this operation up to 100 times per second per account.
       *
       * @param request DescribeCdnDomainByCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCdnDomainByCertificateResponse
       */
      Models::DescribeCdnDomainByCertificateResponse describeCdnDomainByCertificateWithOptions(const Models::DescribeCdnDomainByCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries accelerated domain names by SSL certificate.
       *
       * @description >  You can call this operation up to 100 times per second per account.
       *
       * @param request DescribeCdnDomainByCertificateRequest
       * @return DescribeCdnDomainByCertificateResponse
       */
      Models::DescribeCdnDomainByCertificateResponse describeCdnDomainByCertificate(const Models::DescribeCdnDomainByCertificateRequest &request);

      /**
       * @summary Queries the configurations of an accelerated domain name. You can query the configurations of one or more features at the same time.
       *
       * @description > You can call this operation up to 100 times per second per account.
       *
       * @param request DescribeCdnDomainConfigsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCdnDomainConfigsResponse
       */
      Models::DescribeCdnDomainConfigsResponse describeCdnDomainConfigsWithOptions(const Models::DescribeCdnDomainConfigsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configurations of an accelerated domain name. You can query the configurations of one or more features at the same time.
       *
       * @description > You can call this operation up to 100 times per second per account.
       *
       * @param request DescribeCdnDomainConfigsRequest
       * @return DescribeCdnDomainConfigsResponse
       */
      Models::DescribeCdnDomainConfigsResponse describeCdnDomainConfigs(const Models::DescribeCdnDomainConfigsRequest &request);

      /**
       * @summary Queries the basic information about an accelerated domain name.
       *
       * @description > You can call this operation up to 30 times per second per account.
       *
       * @param request DescribeCdnDomainDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCdnDomainDetailResponse
       */
      Models::DescribeCdnDomainDetailResponse describeCdnDomainDetailWithOptions(const Models::DescribeCdnDomainDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the basic information about an accelerated domain name.
       *
       * @description > You can call this operation up to 30 times per second per account.
       *
       * @param request DescribeCdnDomainDetailRequest
       * @return DescribeCdnDomainDetailResponse
       */
      Models::DescribeCdnDomainDetailResponse describeCdnDomainDetail(const Models::DescribeCdnDomainDetailRequest &request);

      /**
       * @summary Queries the address where you can download the log data of a specific domain name.
       *
       * @description *   If you do not set **StartTime** or **EndTime**, the request returns the data collected in the last 24 hours. If you set both **StartTime** and **EndTime**, the request returns the data collected within the specified time range.
       * *   The log data is collected every hour.
       * *   You can call this operation up to 100 times per second per account.
       * *   You can query only logs in the last month. The start time and the current time cannot exceed 31 days.
       *
       * @param request DescribeCdnDomainLogsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCdnDomainLogsResponse
       */
      Models::DescribeCdnDomainLogsResponse describeCdnDomainLogsWithOptions(const Models::DescribeCdnDomainLogsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the address where you can download the log data of a specific domain name.
       *
       * @description *   If you do not set **StartTime** or **EndTime**, the request returns the data collected in the last 24 hours. If you set both **StartTime** and **EndTime**, the request returns the data collected within the specified time range.
       * *   The log data is collected every hour.
       * *   You can call this operation up to 100 times per second per account.
       * *   You can query only logs in the last month. The start time and the current time cannot exceed 31 days.
       *
       * @param request DescribeCdnDomainLogsRequest
       * @return DescribeCdnDomainLogsResponse
       */
      Models::DescribeCdnDomainLogsResponse describeCdnDomainLogs(const Models::DescribeCdnDomainLogsRequest &request);

      /**
       * @summary 查询离线日志下载地址
       *
       * @param request DescribeCdnDomainLogsExTtlRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCdnDomainLogsExTtlResponse
       */
      Models::DescribeCdnDomainLogsExTtlResponse describeCdnDomainLogsExTtlWithOptions(const Models::DescribeCdnDomainLogsExTtlRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询离线日志下载地址
       *
       * @param request DescribeCdnDomainLogsExTtlRequest
       * @return DescribeCdnDomainLogsExTtlResponse
       */
      Models::DescribeCdnDomainLogsExTtlResponse describeCdnDomainLogsExTtl(const Models::DescribeCdnDomainLogsExTtlRequest &request);

      /**
       * @summary Queries the configurations of features in the staging environment.
       *
       * @description > You can call this operation up to 30 times per second per account.
       *
       * @param request DescribeCdnDomainStagingConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCdnDomainStagingConfigResponse
       */
      Models::DescribeCdnDomainStagingConfigResponse describeCdnDomainStagingConfigWithOptions(const Models::DescribeCdnDomainStagingConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the configurations of features in the staging environment.
       *
       * @description > You can call this operation up to 30 times per second per account.
       *
       * @param request DescribeCdnDomainStagingConfigRequest
       * @return DescribeCdnDomainStagingConfigResponse
       */
      Models::DescribeCdnDomainStagingConfigResponse describeCdnDomainStagingConfig(const Models::DescribeCdnDomainStagingConfigRequest &request);

      /**
       * @summary You can call the DescribeCdnFullDomainsBlockIPConfig operation to query the configurations of full blocking.
       *
       * @description > 
       * *   To use this operation,[submit a ticket](https://workorder-intl.console.aliyun.com/?spm=5176.2020520001.aliyun_topbar.18.dbd44bd3e4f845#/ticket/createIndex).
       * *   If you specify IP addresses or CIDR blocks, IP addresses that are effective and the corresponding expiration time are returned. If you do not specify IP addresses or CIDR blocks, all effective IP addresses and the corresponding expiration time are returned.
       * *   The results are written to OSS and returned as OSS URLs. The content in OSS objects is in the format of IP address-Corresponding expiration time. The expiration time is in the YYYY-MM-DD hh:mm:ss format.
       * *   You can share OSS URLs with others. The shared URLs are valid for three days.
       *
       * @param request DescribeCdnFullDomainsBlockIPConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCdnFullDomainsBlockIPConfigResponse
       */
      Models::DescribeCdnFullDomainsBlockIPConfigResponse describeCdnFullDomainsBlockIPConfigWithOptions(const Models::DescribeCdnFullDomainsBlockIPConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call the DescribeCdnFullDomainsBlockIPConfig operation to query the configurations of full blocking.
       *
       * @description > 
       * *   To use this operation,[submit a ticket](https://workorder-intl.console.aliyun.com/?spm=5176.2020520001.aliyun_topbar.18.dbd44bd3e4f845#/ticket/createIndex).
       * *   If you specify IP addresses or CIDR blocks, IP addresses that are effective and the corresponding expiration time are returned. If you do not specify IP addresses or CIDR blocks, all effective IP addresses and the corresponding expiration time are returned.
       * *   The results are written to OSS and returned as OSS URLs. The content in OSS objects is in the format of IP address-Corresponding expiration time. The expiration time is in the YYYY-MM-DD hh:mm:ss format.
       * *   You can share OSS URLs with others. The shared URLs are valid for three days.
       *
       * @param request DescribeCdnFullDomainsBlockIPConfigRequest
       * @return DescribeCdnFullDomainsBlockIPConfigResponse
       */
      Models::DescribeCdnFullDomainsBlockIPConfigResponse describeCdnFullDomainsBlockIPConfig(const Models::DescribeCdnFullDomainsBlockIPConfigRequest &request);

      /**
       * @summary Queries the blocking history.
       *
       * @description > 
       * *   To use this operation, [submit a ticket](https://workorder-intl.console.aliyun.com/?spm=5176.2020520001.aliyun_topbar.18.dbd44bd3e4f845#/ticket/createIndex).
       * *   For a specified IP addresses and time range, the time when the IP address was delivered to the edge and the corresponding result are returned.
       * *   If a specified IP address or CIDR block has multiple blocking records in a specified time range, the records are sorted by delivery time in descending order.
       * *   The maximum time range to query is 90 days.
       * *   If no blocking record exists or delivery fails for the given IP address and time range, the delivery time is empty.
       *
       * @param request DescribeCdnFullDomainsBlockIPHistoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCdnFullDomainsBlockIPHistoryResponse
       */
      Models::DescribeCdnFullDomainsBlockIPHistoryResponse describeCdnFullDomainsBlockIPHistoryWithOptions(const Models::DescribeCdnFullDomainsBlockIPHistoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the blocking history.
       *
       * @description > 
       * *   To use this operation, [submit a ticket](https://workorder-intl.console.aliyun.com/?spm=5176.2020520001.aliyun_topbar.18.dbd44bd3e4f845#/ticket/createIndex).
       * *   For a specified IP addresses and time range, the time when the IP address was delivered to the edge and the corresponding result are returned.
       * *   If a specified IP address or CIDR block has multiple blocking records in a specified time range, the records are sorted by delivery time in descending order.
       * *   The maximum time range to query is 90 days.
       * *   If no blocking record exists or delivery fails for the given IP address and time range, the delivery time is empty.
       *
       * @param request DescribeCdnFullDomainsBlockIPHistoryRequest
       * @return DescribeCdnFullDomainsBlockIPHistoryResponse
       */
      Models::DescribeCdnFullDomainsBlockIPHistoryResponse describeCdnFullDomainsBlockIPHistory(const Models::DescribeCdnFullDomainsBlockIPHistoryRequest &request);

      /**
       * @summary Queries the information about SSL certificates that belong to your Alibaba Cloud account.
       *
       * @description > You can call this operation up to 100 times per second per account.
       *
       * @param request DescribeCdnHttpsDomainListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCdnHttpsDomainListResponse
       */
      Models::DescribeCdnHttpsDomainListResponse describeCdnHttpsDomainListWithOptions(const Models::DescribeCdnHttpsDomainListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about SSL certificates that belong to your Alibaba Cloud account.
       *
       * @description > You can call this operation up to 100 times per second per account.
       *
       * @param request DescribeCdnHttpsDomainListRequest
       * @return DescribeCdnHttpsDomainListResponse
       */
      Models::DescribeCdnHttpsDomainListResponse describeCdnHttpsDomainList(const Models::DescribeCdnHttpsDomainListRequest &request);

      /**
       * @summary Queries the code of a commodity by account UID.
       *
       * @param request DescribeCdnOrderCommodityCodeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCdnOrderCommodityCodeResponse
       */
      Models::DescribeCdnOrderCommodityCodeResponse describeCdnOrderCommodityCodeWithOptions(const Models::DescribeCdnOrderCommodityCodeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the code of a commodity by account UID.
       *
       * @param request DescribeCdnOrderCommodityCodeRequest
       * @return DescribeCdnOrderCommodityCodeResponse
       */
      Models::DescribeCdnOrderCommodityCodeResponse describeCdnOrderCommodityCode(const Models::DescribeCdnOrderCommodityCodeRequest &request);

      /**
       * @summary Queries Internet service providers (ISPs) and regions that are supported by Alibaba Cloud CDN.
       *
       * @description *   The lists of ISPs and regions that are supported by Alibaba Cloud CDN are updated and published on the Alibaba Cloud International site.
       * *   You can call this operation up to 30 times per second per account.
       *
       * @param request DescribeCdnRegionAndIspRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCdnRegionAndIspResponse
       */
      Models::DescribeCdnRegionAndIspResponse describeCdnRegionAndIspWithOptions(const Models::DescribeCdnRegionAndIspRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries Internet service providers (ISPs) and regions that are supported by Alibaba Cloud CDN.
       *
       * @description *   The lists of ISPs and regions that are supported by Alibaba Cloud CDN are updated and published on the Alibaba Cloud International site.
       * *   You can call this operation up to 30 times per second per account.
       *
       * @param request DescribeCdnRegionAndIspRequest
       * @return DescribeCdnRegionAndIspResponse
       */
      Models::DescribeCdnRegionAndIspResponse describeCdnRegionAndIsp(const Models::DescribeCdnRegionAndIspRequest &request);

      /**
       * @summary Queries the content of an operations report.
       *
       * @description > You can call this operation up to three times per second per account.
       *
       * @param request DescribeCdnReportRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCdnReportResponse
       */
      Models::DescribeCdnReportResponse describeCdnReportWithOptions(const Models::DescribeCdnReportRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the content of an operations report.
       *
       * @description > You can call this operation up to three times per second per account.
       *
       * @param request DescribeCdnReportRequest
       * @return DescribeCdnReportResponse
       */
      Models::DescribeCdnReportResponse describeCdnReport(const Models::DescribeCdnReportRequest &request);

      /**
       * @summary Queries operations reports.
       *
       * @description *   This operation queries the metadata of all operations reports. The statistics in the reports are not returned.
       * *   You can call this operation up to three times per second per account.
       *
       * @param request DescribeCdnReportListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCdnReportListResponse
       */
      Models::DescribeCdnReportListResponse describeCdnReportListWithOptions(const Models::DescribeCdnReportListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries operations reports.
       *
       * @description *   This operation queries the metadata of all operations reports. The statistics in the reports are not returned.
       * *   You can call this operation up to three times per second per account.
       *
       * @param request DescribeCdnReportListRequest
       * @return DescribeCdnReportListResponse
       */
      Models::DescribeCdnReportListResponse describeCdnReportList(const Models::DescribeCdnReportListRequest &request);

      /**
       * @summary Queries the details about a ShangMi (SM) certificate.
       *
       * @description > You can call this operation up to 20 times per second per account.
       *
       * @param request DescribeCdnSMCertificateDetailRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCdnSMCertificateDetailResponse
       */
      Models::DescribeCdnSMCertificateDetailResponse describeCdnSMCertificateDetailWithOptions(const Models::DescribeCdnSMCertificateDetailRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details about a ShangMi (SM) certificate.
       *
       * @description > You can call this operation up to 20 times per second per account.
       *
       * @param request DescribeCdnSMCertificateDetailRequest
       * @return DescribeCdnSMCertificateDetailResponse
       */
      Models::DescribeCdnSMCertificateDetailResponse describeCdnSMCertificateDetail(const Models::DescribeCdnSMCertificateDetailRequest &request);

      /**
       * @summary Queries the ShangMi (SM) certificates of an accelerated domain name.
       *
       * @description > You can call this operation up to 30 times per second per account.
       *
       * @param request DescribeCdnSMCertificateListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCdnSMCertificateListResponse
       */
      Models::DescribeCdnSMCertificateListResponse describeCdnSMCertificateListWithOptions(const Models::DescribeCdnSMCertificateListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the ShangMi (SM) certificates of an accelerated domain name.
       *
       * @description > You can call this operation up to 30 times per second per account.
       *
       * @param request DescribeCdnSMCertificateListRequest
       * @return DescribeCdnSMCertificateListResponse
       */
      Models::DescribeCdnSMCertificateListResponse describeCdnSMCertificateList(const Models::DescribeCdnSMCertificateListRequest &request);

      /**
       * @summary Queries the certificate list by domain name.
       *
       * @param request DescribeCdnSSLCertificateListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCdnSSLCertificateListResponse
       */
      Models::DescribeCdnSSLCertificateListResponse describeCdnSSLCertificateListWithOptions(const Models::DescribeCdnSSLCertificateListRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the certificate list by domain name.
       *
       * @param request DescribeCdnSSLCertificateListRequest
       * @return DescribeCdnSSLCertificateListResponse
       */
      Models::DescribeCdnSSLCertificateListResponse describeCdnSSLCertificateList(const Models::DescribeCdnSSLCertificateListRequest &request);

      /**
       * @summary Queries information about security features of Alibaba Cloud CDN.
       *
       * @param request DescribeCdnSecFuncInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCdnSecFuncInfoResponse
       */
      Models::DescribeCdnSecFuncInfoResponse describeCdnSecFuncInfoWithOptions(const Models::DescribeCdnSecFuncInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about security features of Alibaba Cloud CDN.
       *
       * @param request DescribeCdnSecFuncInfoRequest
       * @return DescribeCdnSecFuncInfoResponse
       */
      Models::DescribeCdnSecFuncInfoResponse describeCdnSecFuncInfo(const Models::DescribeCdnSecFuncInfoRequest &request);

      /**
       * @summary Queries the status of your Alibaba Cloud CDN service. The information includes the service activation time, the current service status, the current metering method, and the metering method for the next cycle.
       *
       * @description > You can call this operation up to 30 times per second per account.
       *
       * @param request DescribeCdnServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCdnServiceResponse
       */
      Models::DescribeCdnServiceResponse describeCdnServiceWithOptions(const Models::DescribeCdnServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of your Alibaba Cloud CDN service. The information includes the service activation time, the current service status, the current metering method, and the metering method for the next cycle.
       *
       * @description > You can call this operation up to 30 times per second per account.
       *
       * @param request DescribeCdnServiceRequest
       * @return DescribeCdnServiceResponse
       */
      Models::DescribeCdnServiceResponse describeCdnService(const Models::DescribeCdnServiceRequest &request);

      /**
       * @summary Queries the tracking tasks that you have created.
       *
       * @description *   By default, this operation queries all custom operations reports. However, only one operations report can be displayed. Therefore, only one operations report is returned.
       * *   You can call this operation up to three times per second per account.
       *
       * @param request DescribeCdnSubListRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCdnSubListResponse
       */
      Models::DescribeCdnSubListResponse describeCdnSubListWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the tracking tasks that you have created.
       *
       * @description *   By default, this operation queries all custom operations reports. However, only one operations report can be displayed. Therefore, only one operations report is returned.
       * *   You can call this operation up to three times per second per account.
       *
       * @return DescribeCdnSubListResponse
       */
      Models::DescribeCdnSubListResponse describeCdnSubList();

      /**
       * @summary Queries the types of domain names.
       *
       * @param request DescribeCdnTypesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCdnTypesResponse
       */
      Models::DescribeCdnTypesResponse describeCdnTypesWithOptions(const Models::DescribeCdnTypesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the types of domain names.
       *
       * @param request DescribeCdnTypesRequest
       * @return DescribeCdnTypesResponse
       */
      Models::DescribeCdnTypesResponse describeCdnTypes(const Models::DescribeCdnTypesRequest &request);

      /**
       * @summary Queries the billing history under your Alibaba Cloud account.
       *
       * @description *   You can query billing history up to the last one month.
       * *   You can call this operation up to 100 times per second per account.
       *
       * @param request DescribeCdnUserBillHistoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCdnUserBillHistoryResponse
       */
      Models::DescribeCdnUserBillHistoryResponse describeCdnUserBillHistoryWithOptions(const Models::DescribeCdnUserBillHistoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the billing history under your Alibaba Cloud account.
       *
       * @description *   You can query billing history up to the last one month.
       * *   You can call this operation up to 100 times per second per account.
       *
       * @param request DescribeCdnUserBillHistoryRequest
       * @return DescribeCdnUserBillHistoryResponse
       */
      Models::DescribeCdnUserBillHistoryResponse describeCdnUserBillHistory(const Models::DescribeCdnUserBillHistoryRequest &request);

      /**
       * @summary Estimates resource usage of the current month.
       *
       * @description You can call this operation to estimate resource usage of the current month based on the metering method that is specified on the first day of the current month. You can call this operation to estimate resource usage only of the current month within your Alibaba Cloud account. The time range used for the estimation starts at 00:00 on the first day of the current month and ends 2 hours earlier than the current time.
       * *   Pay by monthly 95th percentile: The top 5% values between the start time and end time are excluded. The estimated value is the highest value among the remaining values.
       * *   Pay by average daily peak bandwidth per month: Estimated value = Sum of daily peak bandwidth values/Number of days. The current day is excluded.
       * *   Pay by 4th peak bandwidth per month: The estimated value is the 4th peak bandwidth value between the start time and end time. If the time range is less than four days, the estimated value is 0.
       * *   Pay by average daily 95th percentile bandwidth per month: Estimated value = Sum of daily 95th percentile bandwidth values/Number of days. The current day is excluded.
       * *   Pay by 95th percentile bandwidth with 50% off from 00:00 to 08:00: The top 5% values between the start time and end time are excluded. The estimated value is the highest value among the remaining values.
       * > You can call this operation only once per second per account.
       *
       * @param request DescribeCdnUserBillPredictionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCdnUserBillPredictionResponse
       */
      Models::DescribeCdnUserBillPredictionResponse describeCdnUserBillPredictionWithOptions(const Models::DescribeCdnUserBillPredictionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Estimates resource usage of the current month.
       *
       * @description You can call this operation to estimate resource usage of the current month based on the metering method that is specified on the first day of the current month. You can call this operation to estimate resource usage only of the current month within your Alibaba Cloud account. The time range used for the estimation starts at 00:00 on the first day of the current month and ends 2 hours earlier than the current time.
       * *   Pay by monthly 95th percentile: The top 5% values between the start time and end time are excluded. The estimated value is the highest value among the remaining values.
       * *   Pay by average daily peak bandwidth per month: Estimated value = Sum of daily peak bandwidth values/Number of days. The current day is excluded.
       * *   Pay by 4th peak bandwidth per month: The estimated value is the 4th peak bandwidth value between the start time and end time. If the time range is less than four days, the estimated value is 0.
       * *   Pay by average daily 95th percentile bandwidth per month: Estimated value = Sum of daily 95th percentile bandwidth values/Number of days. The current day is excluded.
       * *   Pay by 95th percentile bandwidth with 50% off from 00:00 to 08:00: The top 5% values between the start time and end time are excluded. The estimated value is the highest value among the remaining values.
       * > You can call this operation only once per second per account.
       *
       * @param request DescribeCdnUserBillPredictionRequest
       * @return DescribeCdnUserBillPredictionResponse
       */
      Models::DescribeCdnUserBillPredictionResponse describeCdnUserBillPrediction(const Models::DescribeCdnUserBillPredictionRequest &request);

      /**
       * @summary Queries information about the metering methods of an account. The maximum time range to query is one month.
       *
       * @description *   You can call this operation up to 100 times per second per account.
       *
       * @param request DescribeCdnUserBillTypeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCdnUserBillTypeResponse
       */
      Models::DescribeCdnUserBillTypeResponse describeCdnUserBillTypeWithOptions(const Models::DescribeCdnUserBillTypeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries information about the metering methods of an account. The maximum time range to query is one month.
       *
       * @description *   You can call this operation up to 100 times per second per account.
       *
       * @param request DescribeCdnUserBillTypeRequest
       * @return DescribeCdnUserBillTypeResponse
       */
      Models::DescribeCdnUserBillTypeResponse describeCdnUserBillType(const Models::DescribeCdnUserBillTypeRequest &request);

      /**
       * @summary Queries configurations of security features.
       *
       * @description > You can call this operation up to 30 times per second per account.
       *
       * @param request DescribeCdnUserConfigsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCdnUserConfigsResponse
       */
      Models::DescribeCdnUserConfigsResponse describeCdnUserConfigsWithOptions(const Models::DescribeCdnUserConfigsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries configurations of security features.
       *
       * @description > You can call this operation up to 30 times per second per account.
       *
       * @param request DescribeCdnUserConfigsRequest
       * @return DescribeCdnUserConfigsResponse
       */
      Models::DescribeCdnUserConfigsResponse describeCdnUserConfigs(const Models::DescribeCdnUserConfigsRequest &request);

      /**
       * @summary Queries accelerated domain names that have specified features configured and the status of the domain names.
       *
       * @description >  The maximum number of times that each user can call this operation per second is 100.
       *
       * @param request DescribeCdnUserDomainsByFuncRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCdnUserDomainsByFuncResponse
       */
      Models::DescribeCdnUserDomainsByFuncResponse describeCdnUserDomainsByFuncWithOptions(const Models::DescribeCdnUserDomainsByFuncRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries accelerated domain names that have specified features configured and the status of the domain names.
       *
       * @description >  The maximum number of times that each user can call this operation per second is 100.
       *
       * @param request DescribeCdnUserDomainsByFuncRequest
       * @return DescribeCdnUserDomainsByFuncResponse
       */
      Models::DescribeCdnUserDomainsByFuncResponse describeCdnUserDomainsByFunc(const Models::DescribeCdnUserDomainsByFuncRequest &request);

      /**
       * @summary Queries the quotas and usage of Alibaba Cloud CDN resources.
       *
       * @description > You can call this operation up to 30 times per second per account.
       *
       * @param request DescribeCdnUserQuotaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCdnUserQuotaResponse
       */
      Models::DescribeCdnUserQuotaResponse describeCdnUserQuotaWithOptions(const Models::DescribeCdnUserQuotaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the quotas and usage of Alibaba Cloud CDN resources.
       *
       * @description > You can call this operation up to 30 times per second per account.
       *
       * @param request DescribeCdnUserQuotaRequest
       * @return DescribeCdnUserQuotaResponse
       */
      Models::DescribeCdnUserQuotaResponse describeCdnUserQuota(const Models::DescribeCdnUserQuotaRequest &request);

      /**
       * @summary Queries the resource plans that you have purchased for Alibaba Cloud CDN.
       *
       * @description > You can call this operation up to 30 times per second per account.
       *
       * @param request DescribeCdnUserResourcePackageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCdnUserResourcePackageResponse
       */
      Models::DescribeCdnUserResourcePackageResponse describeCdnUserResourcePackageWithOptions(const Models::DescribeCdnUserResourcePackageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the resource plans that you have purchased for Alibaba Cloud CDN.
       *
       * @description > You can call this operation up to 30 times per second per account.
       *
       * @param request DescribeCdnUserResourcePackageRequest
       * @return DescribeCdnUserResourcePackageResponse
       */
      Models::DescribeCdnUserResourcePackageResponse describeCdnUserResourcePackage(const Models::DescribeCdnUserResourcePackageRequest &request);

      /**
       * @summary Queries domain names that use Web Application Firewall (WAF).
       *
       * @description > You can call this operation up to 150 times per second per account.
       *
       * @param request DescribeCdnWafDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCdnWafDomainResponse
       */
      Models::DescribeCdnWafDomainResponse describeCdnWafDomainWithOptions(const Models::DescribeCdnWafDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries domain names that use Web Application Firewall (WAF).
       *
       * @description > You can call this operation up to 150 times per second per account.
       *
       * @param request DescribeCdnWafDomainRequest
       * @return DescribeCdnWafDomainResponse
       */
      Models::DescribeCdnWafDomainResponse describeCdnWafDomain(const Models::DescribeCdnWafDomainRequest &request);

      /**
       * @summary Queries the information about a specific certificate by certificate ID.
       *
       * @description *   You can call this operation up to 100 times per second per account.
       * *   If a certificate is associated with a domain name but the certificate is not enabled, the result of this operation shows that the certificate does not exist.
       *
       * @param request DescribeCertificateInfoByIDRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCertificateInfoByIDResponse
       */
      Models::DescribeCertificateInfoByIDResponse describeCertificateInfoByIDWithOptions(const Models::DescribeCertificateInfoByIDRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about a specific certificate by certificate ID.
       *
       * @description *   You can call this operation up to 100 times per second per account.
       * *   If a certificate is associated with a domain name but the certificate is not enabled, the result of this operation shows that the certificate does not exist.
       *
       * @param request DescribeCertificateInfoByIDRequest
       * @return DescribeCertificateInfoByIDResponse
       */
      Models::DescribeCertificateInfoByIDResponse describeCertificateInfoByID(const Models::DescribeCertificateInfoByIDRequest &request);

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
       * @summary Queries the details about a custom logging configuration.
       *
       * @description > You can call this operation up to 100 times per second per account.
       *
       * @param request DescribeCustomLogConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeCustomLogConfigResponse
       */
      Models::DescribeCustomLogConfigResponse describeCustomLogConfigWithOptions(const Models::DescribeCustomLogConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details about a custom logging configuration.
       *
       * @description > You can call this operation up to 100 times per second per account.
       *
       * @param request DescribeCustomLogConfigRequest
       * @return DescribeCustomLogConfigResponse
       */
      Models::DescribeCustomLogConfigResponse describeCustomLogConfig(const Models::DescribeCustomLogConfigRequest &request);

      /**
       * @summary Queries the average response time of one or more accelerated domain names. You can query data collected within the last 90 days.
       *
       * @description The statistical analysis feature of Alibaba Cloud CDN is no longer available. The API operations related to the statistical analysis feature are no longer maintained. We recommend that you do not use the API operations because data may be missing or inaccurate. You can use the [operations report](https://help.aliyun.com/document_detail/279577.html) feature to for data analysis.
       * > *   If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last 24 hours. If you set both these parameters, the request returns the data collected within the specified time range.
       * >*   You can call this operation up to 100 times per second per account.
       * >*   You can specify up to 500 domain names in each request. Separate multiple domain names with commas (,).
       *
       * @param request DescribeDomainAverageResponseTimeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainAverageResponseTimeResponse
       */
      Models::DescribeDomainAverageResponseTimeResponse describeDomainAverageResponseTimeWithOptions(const Models::DescribeDomainAverageResponseTimeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the average response time of one or more accelerated domain names. You can query data collected within the last 90 days.
       *
       * @description The statistical analysis feature of Alibaba Cloud CDN is no longer available. The API operations related to the statistical analysis feature are no longer maintained. We recommend that you do not use the API operations because data may be missing or inaccurate. You can use the [operations report](https://help.aliyun.com/document_detail/279577.html) feature to for data analysis.
       * > *   If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last 24 hours. If you set both these parameters, the request returns the data collected within the specified time range.
       * >*   You can call this operation up to 100 times per second per account.
       * >*   You can specify up to 500 domain names in each request. Separate multiple domain names with commas (,).
       *
       * @param request DescribeDomainAverageResponseTimeRequest
       * @return DescribeDomainAverageResponseTimeResponse
       */
      Models::DescribeDomainAverageResponseTimeResponse describeDomainAverageResponseTime(const Models::DescribeDomainAverageResponseTimeRequest &request);

      /**
       * @summary Queries bandwidth monitoring data for one or more accelerated domain names.
       *
       * @description * You can call this operation up to 150 times per second per account.
       * * If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last 24 hours. If you set both these parameters, the request returns the data collected within the specified time range.
       * **Time granularity**
       * The time granularity supported by the Interval parameter, the maximum time period within which historical data is available, and the data delay vary with the maximum time range per query, as described in the following table.
       * |Time granularity|Maximum time range per query|Historical data available|Data delay|
       * |---|---|---|---|
       * |5 minutes|3 days|93 days|15 minutes|
       * |1 hour|31 days|186 days|4 hours|
       * |1 day|366 days|366 days|04:00 on the next day|
       *
       * @param request DescribeDomainBpsDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainBpsDataResponse
       */
      Models::DescribeDomainBpsDataResponse describeDomainBpsDataWithOptions(const Models::DescribeDomainBpsDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries bandwidth monitoring data for one or more accelerated domain names.
       *
       * @description * You can call this operation up to 150 times per second per account.
       * * If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last 24 hours. If you set both these parameters, the request returns the data collected within the specified time range.
       * **Time granularity**
       * The time granularity supported by the Interval parameter, the maximum time period within which historical data is available, and the data delay vary with the maximum time range per query, as described in the following table.
       * |Time granularity|Maximum time range per query|Historical data available|Data delay|
       * |---|---|---|---|
       * |5 minutes|3 days|93 days|15 minutes|
       * |1 hour|31 days|186 days|4 hours|
       * |1 day|366 days|366 days|04:00 on the next day|
       *
       * @param request DescribeDomainBpsDataRequest
       * @return DescribeDomainBpsDataResponse
       */
      Models::DescribeDomainBpsDataResponse describeDomainBpsData(const Models::DescribeDomainBpsDataRequest &request);

      /**
       * @summary Queries bandwidth data by protocol.
       *
       * @description * You can call this operation up to 20 times per second per account.
       * * If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last 24 hours. If you set both these parameters, the request returns the data collected within the specified time range.
       * **Time granularity**
       * The time granularity supported by the Interval parameter, the maximum time period within which historical data is available, and the data delay vary with the maximum time range per query, as described in the following table.
       * |Time granularity|Maximum time range per query|Historical data available|Data delay|
       * |---|---|---|---|
       * |5 minutes|3 days|93 days|15 minutes|
       * |1 hour|31 days|186 days|4 hours|
       * |1 day|366 days|366 days|04:00 on the next day|
       *
       * @param request DescribeDomainBpsDataByLayerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainBpsDataByLayerResponse
       */
      Models::DescribeDomainBpsDataByLayerResponse describeDomainBpsDataByLayerWithOptions(const Models::DescribeDomainBpsDataByLayerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries bandwidth data by protocol.
       *
       * @description * You can call this operation up to 20 times per second per account.
       * * If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last 24 hours. If you set both these parameters, the request returns the data collected within the specified time range.
       * **Time granularity**
       * The time granularity supported by the Interval parameter, the maximum time period within which historical data is available, and the data delay vary with the maximum time range per query, as described in the following table.
       * |Time granularity|Maximum time range per query|Historical data available|Data delay|
       * |---|---|---|---|
       * |5 minutes|3 days|93 days|15 minutes|
       * |1 hour|31 days|186 days|4 hours|
       * |1 day|366 days|366 days|04:00 on the next day|
       *
       * @param request DescribeDomainBpsDataByLayerRequest
       * @return DescribeDomainBpsDataByLayerResponse
       */
      Models::DescribeDomainBpsDataByLayerResponse describeDomainBpsDataByLayer(const Models::DescribeDomainBpsDataByLayerRequest &request);

      /**
       * @summary Queries the bandwidth data at a specified time for an accelerated domain.
       *
       * @description *   The bandwidth is measured in bit/s.
       * *   You can specify only one accelerated domain name in each request.
       * *   The data is collected every 5 minutes.
       * *   You can call this operation up to 20 times per second per account.
       *
       * @param request DescribeDomainBpsDataByTimeStampRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainBpsDataByTimeStampResponse
       */
      Models::DescribeDomainBpsDataByTimeStampResponse describeDomainBpsDataByTimeStampWithOptions(const Models::DescribeDomainBpsDataByTimeStampRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the bandwidth data at a specified time for an accelerated domain.
       *
       * @description *   The bandwidth is measured in bit/s.
       * *   You can specify only one accelerated domain name in each request.
       * *   The data is collected every 5 minutes.
       * *   You can call this operation up to 20 times per second per account.
       *
       * @param request DescribeDomainBpsDataByTimeStampRequest
       * @return DescribeDomainBpsDataByTimeStampResponse
       */
      Models::DescribeDomainBpsDataByTimeStampResponse describeDomainBpsDataByTimeStamp(const Models::DescribeDomainBpsDataByTimeStampRequest &request);

      /**
       * @summary Queries log entries of rate limiting.
       *
       * @description *   If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last 24 hours. If you set both the StartTime and EndTime parameters, the request returns the data collected within the specified time range. You must set both parameters or leave both parameters empty.
       * *   You can specify up to 20 domain names in reach request. If you specify multiple domain names, separate them with commas (,).
       * *   You can query data collected over the last 30 days.
       * *   You can call this operation up to 50 times per second per account.
       *
       * @param request DescribeDomainCcActivityLogRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainCcActivityLogResponse
       */
      Models::DescribeDomainCcActivityLogResponse describeDomainCcActivityLogWithOptions(const Models::DescribeDomainCcActivityLogRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries log entries of rate limiting.
       *
       * @description *   If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last 24 hours. If you set both the StartTime and EndTime parameters, the request returns the data collected within the specified time range. You must set both parameters or leave both parameters empty.
       * *   You can specify up to 20 domain names in reach request. If you specify multiple domain names, separate them with commas (,).
       * *   You can query data collected over the last 30 days.
       * *   You can call this operation up to 50 times per second per account.
       *
       * @param request DescribeDomainCcActivityLogRequest
       * @return DescribeDomainCcActivityLogResponse
       */
      Models::DescribeDomainCcActivityLogResponse describeDomainCcActivityLog(const Models::DescribeDomainCcActivityLogRequest &request);

      /**
       * @summary Queries the certificate information of an accelerated domain name.
       *
       * @description > You can call this operation up to 100 times per second per account.
       *
       * @param request DescribeDomainCertificateInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainCertificateInfoResponse
       */
      Models::DescribeDomainCertificateInfoResponse describeDomainCertificateInfoWithOptions(const Models::DescribeDomainCertificateInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the certificate information of an accelerated domain name.
       *
       * @description > You can call this operation up to 100 times per second per account.
       *
       * @param request DescribeDomainCertificateInfoRequest
       * @return DescribeDomainCertificateInfoResponse
       */
      Models::DescribeDomainCertificateInfoResponse describeDomainCertificateInfo(const Models::DescribeDomainCertificateInfoRequest &request);

      /**
       * @summary Detects the CNAME for an accelerated domain name. You can check the resolution result to determine whether the CNAME is configured.
       *
       * @param request DescribeDomainCnameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainCnameResponse
       */
      Models::DescribeDomainCnameResponse describeDomainCnameWithOptions(const Models::DescribeDomainCnameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Detects the CNAME for an accelerated domain name. You can check the resolution result to determine whether the CNAME is configured.
       *
       * @param request DescribeDomainCnameRequest
       * @return DescribeDomainCnameResponse
       */
      Models::DescribeDomainCnameResponse describeDomainCname(const Models::DescribeDomainCnameRequest &request);

      /**
       * @summary Queries the custom log configuration of an accelerated domain name.
       *
       * @description > You can call this operation up to 100 times per second per account.
       *
       * @param request DescribeDomainCustomLogConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainCustomLogConfigResponse
       */
      Models::DescribeDomainCustomLogConfigResponse describeDomainCustomLogConfigWithOptions(const Models::DescribeDomainCustomLogConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the custom log configuration of an accelerated domain name.
       *
       * @description > You can call this operation up to 100 times per second per account.
       *
       * @param request DescribeDomainCustomLogConfigRequest
       * @return DescribeDomainCustomLogConfigResponse
       */
      Models::DescribeDomainCustomLogConfigResponse describeDomainCustomLogConfig(const Models::DescribeDomainCustomLogConfigRequest &request);

      /**
       * @summary The domain name that you want to query. You can specify multiple domain names and separate them with commas (,). You can specify at most 30 domain names in each call.
       *
       * @description You can call this operation up to 20 times per second per account.
       *
       * @param request DescribeDomainDetailDataByLayerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainDetailDataByLayerResponse
       */
      Models::DescribeDomainDetailDataByLayerResponse describeDomainDetailDataByLayerWithOptions(const Models::DescribeDomainDetailDataByLayerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary The domain name that you want to query. You can specify multiple domain names and separate them with commas (,). You can specify at most 30 domain names in each call.
       *
       * @description You can call this operation up to 20 times per second per account.
       *
       * @param request DescribeDomainDetailDataByLayerRequest
       * @return DescribeDomainDetailDataByLayerResponse
       */
      Models::DescribeDomainDetailDataByLayerResponse describeDomainDetailDataByLayer(const Models::DescribeDomainDetailDataByLayerRequest &request);

      /**
       * @summary Queries byte hit ratios that are measured in percentage.
       *
       * @description * You can call this operation up to 100 times per second per account.
       * * If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last 24 hours. If you set both these parameters, the request returns the data collected within the specified time range.
       * **Time granularity**
       * The time granularity supported by the Interval parameter, the maximum time period within which historical data is available, and the data delay vary with the maximum time range per query, as described in the following table.
       * |Time granularity|Maximum time range per query|Historical data available|Data delay|
       * |---|---|---|---|
       * |5 minutes|3 days|93 days|15 minutes|
       * |1 hour|31 days|186 days|4 hours|
       * |1 day|366 days|366 days|04:00 on the next day|
       *
       * @param request DescribeDomainHitRateDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainHitRateDataResponse
       */
      Models::DescribeDomainHitRateDataResponse describeDomainHitRateDataWithOptions(const Models::DescribeDomainHitRateDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries byte hit ratios that are measured in percentage.
       *
       * @description * You can call this operation up to 100 times per second per account.
       * * If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last 24 hours. If you set both these parameters, the request returns the data collected within the specified time range.
       * **Time granularity**
       * The time granularity supported by the Interval parameter, the maximum time period within which historical data is available, and the data delay vary with the maximum time range per query, as described in the following table.
       * |Time granularity|Maximum time range per query|Historical data available|Data delay|
       * |---|---|---|---|
       * |5 minutes|3 days|93 days|15 minutes|
       * |1 hour|31 days|186 days|4 hours|
       * |1 day|366 days|366 days|04:00 on the next day|
       *
       * @param request DescribeDomainHitRateDataRequest
       * @return DescribeDomainHitRateDataResponse
       */
      Models::DescribeDomainHitRateDataResponse describeDomainHitRateData(const Models::DescribeDomainHitRateDataRequest &request);

      /**
       * @summary Queries the total number and proportions of HTTP status codes returned from an accelerated domain name. The data is collected every 5 minutes.
       *
       * @description * You can call this operation up to 100 times per second per account.
       * * If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last 24 hours. If you set both these parameters, the request returns the data collected within the specified time range.
       * **Time granularity**
       * The time granularity supported by the Interval parameter, the maximum time period within which historical data is available, and the data delay vary with the maximum time range per query, as described in the following table.
       * |Time granularity|Maximum time range per query|Historical data available|Data delay|
       * |---|---|---|---|
       * |5 minutes|3 days|93 days|15 minutes|
       * |1 hour|31 days|186 days|4 hours|
       * |1 day|366 days|366 days|04:00 on the next day|
       *
       * @param request DescribeDomainHttpCodeDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainHttpCodeDataResponse
       */
      Models::DescribeDomainHttpCodeDataResponse describeDomainHttpCodeDataWithOptions(const Models::DescribeDomainHttpCodeDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the total number and proportions of HTTP status codes returned from an accelerated domain name. The data is collected every 5 minutes.
       *
       * @description * You can call this operation up to 100 times per second per account.
       * * If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last 24 hours. If you set both these parameters, the request returns the data collected within the specified time range.
       * **Time granularity**
       * The time granularity supported by the Interval parameter, the maximum time period within which historical data is available, and the data delay vary with the maximum time range per query, as described in the following table.
       * |Time granularity|Maximum time range per query|Historical data available|Data delay|
       * |---|---|---|---|
       * |5 minutes|3 days|93 days|15 minutes|
       * |1 hour|31 days|186 days|4 hours|
       * |1 day|366 days|366 days|04:00 on the next day|
       *
       * @param request DescribeDomainHttpCodeDataRequest
       * @return DescribeDomainHttpCodeDataResponse
       */
      Models::DescribeDomainHttpCodeDataResponse describeDomainHttpCodeData(const Models::DescribeDomainHttpCodeDataRequest &request);

      /**
       * @summary Queries HTTP status codes by protocol.
       *
       * @description * You can call this operation up to 20 times per second per account.
       * * If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last 24 hours. If you set both these parameters, the request returns the data collected within the specified time range.
       * ### Time granularity
       * The time granularity supported by the Interval parameter, the maximum time period within which historical data is available, and the data delay vary with the maximum time range per query, as described in the following table.
       * |Time granularity|Maximum time range per query|Historical data available|Data delay|
       * |---|---|---|---|
       * |5 minutes|3 days|93 days|15 minutes|
       * |1 hour|31 days|186 days|4 hours|
       * |1 day|366 days|366 days|04:00 on the next day|
       *
       * @param request DescribeDomainHttpCodeDataByLayerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainHttpCodeDataByLayerResponse
       */
      Models::DescribeDomainHttpCodeDataByLayerResponse describeDomainHttpCodeDataByLayerWithOptions(const Models::DescribeDomainHttpCodeDataByLayerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries HTTP status codes by protocol.
       *
       * @description * You can call this operation up to 20 times per second per account.
       * * If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last 24 hours. If you set both these parameters, the request returns the data collected within the specified time range.
       * ### Time granularity
       * The time granularity supported by the Interval parameter, the maximum time period within which historical data is available, and the data delay vary with the maximum time range per query, as described in the following table.
       * |Time granularity|Maximum time range per query|Historical data available|Data delay|
       * |---|---|---|---|
       * |5 minutes|3 days|93 days|15 minutes|
       * |1 hour|31 days|186 days|4 hours|
       * |1 day|366 days|366 days|04:00 on the next day|
       *
       * @param request DescribeDomainHttpCodeDataByLayerRequest
       * @return DescribeDomainHttpCodeDataByLayerResponse
       */
      Models::DescribeDomainHttpCodeDataByLayerResponse describeDomainHttpCodeDataByLayer(const Models::DescribeDomainHttpCodeDataByLayerRequest &request);

      /**
       * @summary Queries the proportions of data usage of different Internet service providers (ISPs). Data is collected every day. You can query data collected in the last 90 days.
       *
       * @description The statistical analysis feature of Alibaba Cloud CDN is no longer available. The API operations related to the statistical analysis feature are no longer maintained. We recommend that you do not use the API operations because data may be missing or inaccurate. You can use the [operations report](https://help.aliyun.com/document_detail/279577.html) feature for data analysis.
       * > *   If you do not set StartTime or EndTime, the request returns the data collected in the last 24 hours. If you set both StartTime and EndTime, the request returns the data collected within the specified time range.
       * >*   This operation queries proportions of data usage of different ISPs for only a specific accelerated domain name, or for all accelerated domain names in your Alibaba Cloud account.
       * >*   You can call this operation up to 100 times per second per account.
       *
       * @param request DescribeDomainISPDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainISPDataResponse
       */
      Models::DescribeDomainISPDataResponse describeDomainISPDataWithOptions(const Models::DescribeDomainISPDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the proportions of data usage of different Internet service providers (ISPs). Data is collected every day. You can query data collected in the last 90 days.
       *
       * @description The statistical analysis feature of Alibaba Cloud CDN is no longer available. The API operations related to the statistical analysis feature are no longer maintained. We recommend that you do not use the API operations because data may be missing or inaccurate. You can use the [operations report](https://help.aliyun.com/document_detail/279577.html) feature for data analysis.
       * > *   If you do not set StartTime or EndTime, the request returns the data collected in the last 24 hours. If you set both StartTime and EndTime, the request returns the data collected within the specified time range.
       * >*   This operation queries proportions of data usage of different ISPs for only a specific accelerated domain name, or for all accelerated domain names in your Alibaba Cloud account.
       * >*   You can call this operation up to 100 times per second per account.
       *
       * @param request DescribeDomainISPDataRequest
       * @return DescribeDomainISPDataResponse
       */
      Models::DescribeDomainISPDataResponse describeDomainISPData(const Models::DescribeDomainISPDataRequest &request);

      /**
       * @summary Queries the 95th percentile bandwidth data of a domain name.
       *
       * @description **You can use one of the following methods to query data:**
       * *   If you specify the StartTime and EndTime parameters and the time range that is specified by these parameters is less than or equal to 24 hours, the 95th percentile bandwidth data on the day of the start time is returned. If the time range that is specified by these parameters is more than 24 hours, the 95th percentile bandwidth data in the month of the start time is returned.
       * *   If you specify the TimePoint and Cycle parameters, the 95th percentile bandwidth data of the cycle is returned.
       * *   If you specify the StartTime, EndTime, and Cycle parameters, the 95th percentile bandwidth data of the cycle is returned.
       * If you do not use one of the methods, the 95th percentile bandwidth data of the previous 24 hours is returned by default.
       * * Maximum time range to query: 90 days 
       * * Minimum data granularity to query: 1 day 
       * * Historical data available: 90 days
       * - You can call this operation up to 100 times per second per account.
       * - The unit of the bandwidth data returned is bit/s.
       *
       * @param request DescribeDomainMax95BpsDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainMax95BpsDataResponse
       */
      Models::DescribeDomainMax95BpsDataResponse describeDomainMax95BpsDataWithOptions(const Models::DescribeDomainMax95BpsDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the 95th percentile bandwidth data of a domain name.
       *
       * @description **You can use one of the following methods to query data:**
       * *   If you specify the StartTime and EndTime parameters and the time range that is specified by these parameters is less than or equal to 24 hours, the 95th percentile bandwidth data on the day of the start time is returned. If the time range that is specified by these parameters is more than 24 hours, the 95th percentile bandwidth data in the month of the start time is returned.
       * *   If you specify the TimePoint and Cycle parameters, the 95th percentile bandwidth data of the cycle is returned.
       * *   If you specify the StartTime, EndTime, and Cycle parameters, the 95th percentile bandwidth data of the cycle is returned.
       * If you do not use one of the methods, the 95th percentile bandwidth data of the previous 24 hours is returned by default.
       * * Maximum time range to query: 90 days 
       * * Minimum data granularity to query: 1 day 
       * * Historical data available: 90 days
       * - You can call this operation up to 100 times per second per account.
       * - The unit of the bandwidth data returned is bit/s.
       *
       * @param request DescribeDomainMax95BpsDataRequest
       * @return DescribeDomainMax95BpsDataResponse
       */
      Models::DescribeDomainMax95BpsDataResponse describeDomainMax95BpsData(const Models::DescribeDomainMax95BpsDataRequest &request);

      /**
       * @summary Queries the traffic data and the number of requests for multiple accelerated domain names at a time.
       *
       * @description *   If you do not set StartTime or EndTime, data collected within the last 10 minutes is queried.
       * *   The maximum interval between StartTime and EndTime is 1 hour.
       * *   You can query data within the last 90 days.
       * *   You can query the traffic data and the number of requests for accelerated domain names that are deleted.
       * *   You can call this operation up to 50 times per second per account.
       *
       * @param request DescribeDomainMultiUsageDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainMultiUsageDataResponse
       */
      Models::DescribeDomainMultiUsageDataResponse describeDomainMultiUsageDataWithOptions(const Models::DescribeDomainMultiUsageDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the traffic data and the number of requests for multiple accelerated domain names at a time.
       *
       * @description *   If you do not set StartTime or EndTime, data collected within the last 10 minutes is queried.
       * *   The maximum interval between StartTime and EndTime is 1 hour.
       * *   You can query data within the last 90 days.
       * *   You can query the traffic data and the number of requests for accelerated domain names that are deleted.
       * *   You can call this operation up to 50 times per second per account.
       *
       * @param request DescribeDomainMultiUsageDataRequest
       * @return DescribeDomainMultiUsageDataResponse
       */
      Models::DescribeDomainMultiUsageDataResponse describeDomainMultiUsageData(const Models::DescribeDomainMultiUsageDataRequest &request);

      /**
       * @summary Queries monitoring data including the amount of network traffic and the number of visits by directory.
       *
       * @description *   This operation is available only to users that are on the whitelist. If the daily peak bandwidth value of your workloads reaches 10 Gbit/s, you can [submit a ticket](https://workorder-intl.console.aliyun.com/?spm=5176.2020520001.aliyun_topbar.18.dbd44bd3e4f845#/ticket/createIndex) to apply to be included in the whitelist.
       * *   You can call this API operation up to 6,000 times per second per account.
       * *   Data collection by directory is available only to specified domain names within your Alibaba Cloud account. It cannot be enabled for all domain names within your Alibaba Cloud account.
       * *   The average size of the files that belong to the domain name must be larger than 1 MB.
       * *   The number of directories specified for a single domain name cannot exceed 100. If the number of directories exceeds 100, the data accuracy reduces.
       * *   If you do not set StartTime or EndTime, data collected within the last 24 hours is queried. If you set both StartTime and EndTime, data within the specified time range is queried.
       * *   You can query data collected within the last 30 days.
       *
       * @param request DescribeDomainPathDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainPathDataResponse
       */
      Models::DescribeDomainPathDataResponse describeDomainPathDataWithOptions(const Models::DescribeDomainPathDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries monitoring data including the amount of network traffic and the number of visits by directory.
       *
       * @description *   This operation is available only to users that are on the whitelist. If the daily peak bandwidth value of your workloads reaches 10 Gbit/s, you can [submit a ticket](https://workorder-intl.console.aliyun.com/?spm=5176.2020520001.aliyun_topbar.18.dbd44bd3e4f845#/ticket/createIndex) to apply to be included in the whitelist.
       * *   You can call this API operation up to 6,000 times per second per account.
       * *   Data collection by directory is available only to specified domain names within your Alibaba Cloud account. It cannot be enabled for all domain names within your Alibaba Cloud account.
       * *   The average size of the files that belong to the domain name must be larger than 1 MB.
       * *   The number of directories specified for a single domain name cannot exceed 100. If the number of directories exceeds 100, the data accuracy reduces.
       * *   If you do not set StartTime or EndTime, data collected within the last 24 hours is queried. If you set both StartTime and EndTime, data within the specified time range is queried.
       * *   You can query data collected within the last 30 days.
       *
       * @param request DescribeDomainPathDataRequest
       * @return DescribeDomainPathDataResponse
       */
      Models::DescribeDomainPathDataResponse describeDomainPathData(const Models::DescribeDomainPathDataRequest &request);

      /**
       * @summary Queries the page view (PV) data of an accelerated domain name. The data is collected at an interval of 1 hour. You can query data in the last 90 days.
       *
       * @description The statistical analysis feature of Alibaba Cloud CDN is no longer available. The API operations related to the statistical analysis feature are no longer maintained. We recommend that you do not use the API operations because data may be missing or inaccurate. You can use the [operations report](https://help.aliyun.com/document_detail/279577.html) feature to for data analysis.
       * > *   If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last 24 hours. If you set both these parameters, the request returns the data collected within the specified time range.
       * >*   You can call this operation up to 50 times per second per account.
       *
       * @param request DescribeDomainPvDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainPvDataResponse
       */
      Models::DescribeDomainPvDataResponse describeDomainPvDataWithOptions(const Models::DescribeDomainPvDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the page view (PV) data of an accelerated domain name. The data is collected at an interval of 1 hour. You can query data in the last 90 days.
       *
       * @description The statistical analysis feature of Alibaba Cloud CDN is no longer available. The API operations related to the statistical analysis feature are no longer maintained. We recommend that you do not use the API operations because data may be missing or inaccurate. You can use the [operations report](https://help.aliyun.com/document_detail/279577.html) feature to for data analysis.
       * > *   If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last 24 hours. If you set both these parameters, the request returns the data collected within the specified time range.
       * >*   You can call this operation up to 50 times per second per account.
       *
       * @param request DescribeDomainPvDataRequest
       * @return DescribeDomainPvDataResponse
       */
      Models::DescribeDomainPvDataResponse describeDomainPvData(const Models::DescribeDomainPvDataRequest &request);

      /**
       * @summary Queries the number of queries per second (QPS) for an accelerated domain name. The data is collected every 5 minutes. You can query data collected within the last 90 days.
       *
       * @description * You can call this operation up to 100 times per second per account.
       * * If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last 24 hours. If you set both these parameters, the request returns the data collected within the specified time range.
       * **Time granularity**
       * The time granularity supported by the Interval parameter, the maximum time period within which historical data is available, and the data delay vary with the maximum time range per query, as described in the following table.
       * |Time granularity|Maximum time range per query|Historical data available|Data delay|
       * |---|---|---|---|
       * |5 minutes|3 days|93 days|15 minutes|
       * |1 hour|31 days|186 days|4 hours|
       * |1 day|366 days|366 days|04:00 on the next day|
       *
       * @param request DescribeDomainQpsDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainQpsDataResponse
       */
      Models::DescribeDomainQpsDataResponse describeDomainQpsDataWithOptions(const Models::DescribeDomainQpsDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of queries per second (QPS) for an accelerated domain name. The data is collected every 5 minutes. You can query data collected within the last 90 days.
       *
       * @description * You can call this operation up to 100 times per second per account.
       * * If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last 24 hours. If you set both these parameters, the request returns the data collected within the specified time range.
       * **Time granularity**
       * The time granularity supported by the Interval parameter, the maximum time period within which historical data is available, and the data delay vary with the maximum time range per query, as described in the following table.
       * |Time granularity|Maximum time range per query|Historical data available|Data delay|
       * |---|---|---|---|
       * |5 minutes|3 days|93 days|15 minutes|
       * |1 hour|31 days|186 days|4 hours|
       * |1 day|366 days|366 days|04:00 on the next day|
       *
       * @param request DescribeDomainQpsDataRequest
       * @return DescribeDomainQpsDataResponse
       */
      Models::DescribeDomainQpsDataResponse describeDomainQpsData(const Models::DescribeDomainQpsDataRequest &request);

      /**
       * @summary Queries the number of queries per second (QPS) at a specific layer for one or more accelerated domain names. You can query data collected within the last 90 days.
       *
       * @description * You can call this operation up to 20 times per second per user.
       * * If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last 24 hours. If you set both these parameters, the request returns the data collected within the specified time range.
       * **Time granularity**
       * The time granularity supported by the Interval parameter varies with the maximum time range per query. The following table describes the time period within which historical data is available and the data delay.
       * |Time granularity|Maximum time range per query|Historical data available|Data delay|
       * |---|---|---|---|
       * |5 minutes|3 days|93 days|15 minutes|
       * |1 hour|31 days|186 days|4 hours|
       * |1 day|366 days|366 days|04:00 on the next day|
       *
       * @param request DescribeDomainQpsDataByLayerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainQpsDataByLayerResponse
       */
      Models::DescribeDomainQpsDataByLayerResponse describeDomainQpsDataByLayerWithOptions(const Models::DescribeDomainQpsDataByLayerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of queries per second (QPS) at a specific layer for one or more accelerated domain names. You can query data collected within the last 90 days.
       *
       * @description * You can call this operation up to 20 times per second per user.
       * * If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last 24 hours. If you set both these parameters, the request returns the data collected within the specified time range.
       * **Time granularity**
       * The time granularity supported by the Interval parameter varies with the maximum time range per query. The following table describes the time period within which historical data is available and the data delay.
       * |Time granularity|Maximum time range per query|Historical data available|Data delay|
       * |---|---|---|---|
       * |5 minutes|3 days|93 days|15 minutes|
       * |1 hour|31 days|186 days|4 hours|
       * |1 day|366 days|366 days|04:00 on the next day|
       *
       * @param request DescribeDomainQpsDataByLayerRequest
       * @return DescribeDomainQpsDataByLayerResponse
       */
      Models::DescribeDomainQpsDataByLayerResponse describeDomainQpsDataByLayer(const Models::DescribeDomainQpsDataByLayerRequest &request);

      /**
       * @summary Queries the bandwidth data about one or more accelerated domain names.
       *
       * @description * You can call this operation up to 100 times per second per account.
       * * If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last hour. If you set both these parameters, the request returns the data collected within the specified time range.
       * **Time granularity** The time granularity varies with the time range specified by the StartTime and EndTime parameters. The following table describes the time period within which historical data is available and the data delay.
       * |Time granularity|Maximum time range per query|Historical data available|Data delay|
       * |---|---|---|---|
       * |1 minute|1 hour|7 days|5 minutes|
       * |5 minutes|3 days|93 days|15 minutes|
       * |1 hour|31 days|186 days|4 hours|
       *
       * @param request DescribeDomainRealTimeBpsDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainRealTimeBpsDataResponse
       */
      Models::DescribeDomainRealTimeBpsDataResponse describeDomainRealTimeBpsDataWithOptions(const Models::DescribeDomainRealTimeBpsDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the bandwidth data about one or more accelerated domain names.
       *
       * @description * You can call this operation up to 100 times per second per account.
       * * If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last hour. If you set both these parameters, the request returns the data collected within the specified time range.
       * **Time granularity** The time granularity varies with the time range specified by the StartTime and EndTime parameters. The following table describes the time period within which historical data is available and the data delay.
       * |Time granularity|Maximum time range per query|Historical data available|Data delay|
       * |---|---|---|---|
       * |1 minute|1 hour|7 days|5 minutes|
       * |5 minutes|3 days|93 days|15 minutes|
       * |1 hour|31 days|186 days|4 hours|
       *
       * @param request DescribeDomainRealTimeBpsDataRequest
       * @return DescribeDomainRealTimeBpsDataResponse
       */
      Models::DescribeDomainRealTimeBpsDataResponse describeDomainRealTimeBpsData(const Models::DescribeDomainRealTimeBpsDataRequest &request);

      /**
       * @summary Queries the byte hit ratios of accelerated domain names.
       *
       * @description * You can call this operation up to 10 times per second per account.
       * * If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last hour. If you set both the StartTime and EndTime parameters, the request returns the data collected within the specified time range.
       * * The network traffic destined for different domain names may be redirected to the same origin server. Therefore, the byte hit ratios may be inaccurate. The accuracy of query results is based on the actual configurations.
       * **Time granularity**
       * The time granularity varies with the time range specified by the StartTime and EndTime parameters. The following table describes the time period within which historical data is available and the data delay.
       * |Time granularity|Maximum time range per query|Historical data available|Data delay|
       * |---|---|---|---|
       * |1 minute|1 hour|7 days|5 minutes|
       * |5 minutes|3 days|93 days|15 minutes|
       * |1 hour|31 days|186 days|4 hours|
       *
       * @param request DescribeDomainRealTimeByteHitRateDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainRealTimeByteHitRateDataResponse
       */
      Models::DescribeDomainRealTimeByteHitRateDataResponse describeDomainRealTimeByteHitRateDataWithOptions(const Models::DescribeDomainRealTimeByteHitRateDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the byte hit ratios of accelerated domain names.
       *
       * @description * You can call this operation up to 10 times per second per account.
       * * If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last hour. If you set both the StartTime and EndTime parameters, the request returns the data collected within the specified time range.
       * * The network traffic destined for different domain names may be redirected to the same origin server. Therefore, the byte hit ratios may be inaccurate. The accuracy of query results is based on the actual configurations.
       * **Time granularity**
       * The time granularity varies with the time range specified by the StartTime and EndTime parameters. The following table describes the time period within which historical data is available and the data delay.
       * |Time granularity|Maximum time range per query|Historical data available|Data delay|
       * |---|---|---|---|
       * |1 minute|1 hour|7 days|5 minutes|
       * |5 minutes|3 days|93 days|15 minutes|
       * |1 hour|31 days|186 days|4 hours|
       *
       * @param request DescribeDomainRealTimeByteHitRateDataRequest
       * @return DescribeDomainRealTimeByteHitRateDataResponse
       */
      Models::DescribeDomainRealTimeByteHitRateDataResponse describeDomainRealTimeByteHitRateData(const Models::DescribeDomainRealTimeByteHitRateDataRequest &request);

      /**
       * @summary Queries the real-time monitoring data for a domain name.
       *
       * @description *   You can query data in the last seven days. Data is collected every minute.
       * *   You can call this operation up to 10 times per second per account.
       *
       * @param request DescribeDomainRealTimeDetailDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainRealTimeDetailDataResponse
       */
      Models::DescribeDomainRealTimeDetailDataResponse describeDomainRealTimeDetailDataWithOptions(const Models::DescribeDomainRealTimeDetailDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the real-time monitoring data for a domain name.
       *
       * @description *   You can query data in the last seven days. Data is collected every minute.
       * *   You can call this operation up to 10 times per second per account.
       *
       * @param request DescribeDomainRealTimeDetailDataRequest
       * @return DescribeDomainRealTimeDetailDataResponse
       */
      Models::DescribeDomainRealTimeDetailDataResponse describeDomainRealTimeDetailData(const Models::DescribeDomainRealTimeDetailDataRequest &request);

      /**
       * @summary Queries the total number and proportions of HTTP status codes returned from an accelerated domain name.
       *
       * @description * You can call this operation up to 10 times per second per account.
       * * If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last hour. If you set both these parameters, the request returns the data collected within the specified time range.
       * **Time granularity**
       * The time granularity varies with the time range specified by the StartTime and EndTime parameters. The following table describes the time period within which historical data is available and the data delay.
       * |Time granularity|Maximum time range per query|Historical data available|Data delay|
       * |---|---|---|---|
       * |1 minute|1 hour|7 days|5 minutes|
       * |5 minutes|3 days|93 days|15 minutes|
       * |1 hour|31 days|186 days|4 hours|
       *
       * @param request DescribeDomainRealTimeHttpCodeDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainRealTimeHttpCodeDataResponse
       */
      Models::DescribeDomainRealTimeHttpCodeDataResponse describeDomainRealTimeHttpCodeDataWithOptions(const Models::DescribeDomainRealTimeHttpCodeDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the total number and proportions of HTTP status codes returned from an accelerated domain name.
       *
       * @description * You can call this operation up to 10 times per second per account.
       * * If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last hour. If you set both these parameters, the request returns the data collected within the specified time range.
       * **Time granularity**
       * The time granularity varies with the time range specified by the StartTime and EndTime parameters. The following table describes the time period within which historical data is available and the data delay.
       * |Time granularity|Maximum time range per query|Historical data available|Data delay|
       * |---|---|---|---|
       * |1 minute|1 hour|7 days|5 minutes|
       * |5 minutes|3 days|93 days|15 minutes|
       * |1 hour|31 days|186 days|4 hours|
       *
       * @param request DescribeDomainRealTimeHttpCodeDataRequest
       * @return DescribeDomainRealTimeHttpCodeDataResponse
       */
      Models::DescribeDomainRealTimeHttpCodeDataResponse describeDomainRealTimeHttpCodeData(const Models::DescribeDomainRealTimeHttpCodeDataRequest &request);

      /**
       * @summary Queries the number of queries per second for one or more accelerated domain names.
       *
       * @description * You can call this operation up to 10 times per second per account.
       * * If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last hour. If you set both these parameters, the request returns the data collected within the specified time range.
       * **Time granularity**
       * The time granularity varies with the time range specified by the StartTime and EndTime parameters. The following table describes the time period within which historical data is available and the data delay.
       * |Time granularity|Maximum time range per query|Historical data available|Data delay|
       * |---|---|---|---|
       * |1 minute|1 hour|7 days|5 minutes|
       * |5 minutes|3 days|93 days|15 minutes|
       * |1 hour|31 days|186 days|4 hours|
       *
       * @param request DescribeDomainRealTimeQpsDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainRealTimeQpsDataResponse
       */
      Models::DescribeDomainRealTimeQpsDataResponse describeDomainRealTimeQpsDataWithOptions(const Models::DescribeDomainRealTimeQpsDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of queries per second for one or more accelerated domain names.
       *
       * @description * You can call this operation up to 10 times per second per account.
       * * If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last hour. If you set both these parameters, the request returns the data collected within the specified time range.
       * **Time granularity**
       * The time granularity varies with the time range specified by the StartTime and EndTime parameters. The following table describes the time period within which historical data is available and the data delay.
       * |Time granularity|Maximum time range per query|Historical data available|Data delay|
       * |---|---|---|---|
       * |1 minute|1 hour|7 days|5 minutes|
       * |5 minutes|3 days|93 days|15 minutes|
       * |1 hour|31 days|186 days|4 hours|
       *
       * @param request DescribeDomainRealTimeQpsDataRequest
       * @return DescribeDomainRealTimeQpsDataResponse
       */
      Models::DescribeDomainRealTimeQpsDataResponse describeDomainRealTimeQpsData(const Models::DescribeDomainRealTimeQpsDataRequest &request);

      /**
       * @summary Queries the request hit ratios for one or more accelerated domain names.
       *
       * @description * You can call this operation up to 10 times per second per account.
       * * If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last hour. If you set both the StartTime and EndTime parameters, the request returns the data collected within the specified time range.
       * * By default, requests in the Go programming language use the POST request method. You must manually change the request method to GET by declaring: request.Method="GET".
       * * The network traffic destined for different domain names may be redirected to the same origin server. Therefore, the request hit ratios may be inaccurate. The accuracy of query results is based on the actual configurations.
       * **Time granularity**
       * The time granularity varies with the time range specified by the StartTime and EndTime parameters. The following table describes the time period within which historical data is available and the data delay.
       * |Time granularity|Maximum time range per query|Historical data available|Data delay|
       * |---|---|---|---|
       * |1 minute|1 hour|7 days|5 minutes|
       * |5 minutes|3 days|93 days|15 minutes|
       * |1 hour|31 days|186 days|4 hours|
       *
       * @param request DescribeDomainRealTimeReqHitRateDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainRealTimeReqHitRateDataResponse
       */
      Models::DescribeDomainRealTimeReqHitRateDataResponse describeDomainRealTimeReqHitRateDataWithOptions(const Models::DescribeDomainRealTimeReqHitRateDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the request hit ratios for one or more accelerated domain names.
       *
       * @description * You can call this operation up to 10 times per second per account.
       * * If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last hour. If you set both the StartTime and EndTime parameters, the request returns the data collected within the specified time range.
       * * By default, requests in the Go programming language use the POST request method. You must manually change the request method to GET by declaring: request.Method="GET".
       * * The network traffic destined for different domain names may be redirected to the same origin server. Therefore, the request hit ratios may be inaccurate. The accuracy of query results is based on the actual configurations.
       * **Time granularity**
       * The time granularity varies with the time range specified by the StartTime and EndTime parameters. The following table describes the time period within which historical data is available and the data delay.
       * |Time granularity|Maximum time range per query|Historical data available|Data delay|
       * |---|---|---|---|
       * |1 minute|1 hour|7 days|5 minutes|
       * |5 minutes|3 days|93 days|15 minutes|
       * |1 hour|31 days|186 days|4 hours|
       *
       * @param request DescribeDomainRealTimeReqHitRateDataRequest
       * @return DescribeDomainRealTimeReqHitRateDataResponse
       */
      Models::DescribeDomainRealTimeReqHitRateDataResponse describeDomainRealTimeReqHitRateData(const Models::DescribeDomainRealTimeReqHitRateDataRequest &request);

      /**
       * @summary Queries origin bandwidth data for accelerated domain names.
       *
       * @description * You can call this operation up to 10 times per second per account.
       * * If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last hour. If you set both these parameters, the request returns the data collected within the specified time range.
       * **Time granularity**
       * The time granularity varies with the time range specified by the StartTime and EndTime parameters. The following table describes the time period within which historical data is available and the data delay.
       * |Time granularity|Maximum time range per query|Historical data available|Data delay|
       * |---|---|---|---|
       * |1 minute|1 hour|7 days|5 minutes|
       * |5 minutes|3 days|93 days|15 minutes|
       * |1 hour|31 days|186 days|4 hours|
       *
       * @param request DescribeDomainRealTimeSrcBpsDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainRealTimeSrcBpsDataResponse
       */
      Models::DescribeDomainRealTimeSrcBpsDataResponse describeDomainRealTimeSrcBpsDataWithOptions(const Models::DescribeDomainRealTimeSrcBpsDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries origin bandwidth data for accelerated domain names.
       *
       * @description * You can call this operation up to 10 times per second per account.
       * * If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last hour. If you set both these parameters, the request returns the data collected within the specified time range.
       * **Time granularity**
       * The time granularity varies with the time range specified by the StartTime and EndTime parameters. The following table describes the time period within which historical data is available and the data delay.
       * |Time granularity|Maximum time range per query|Historical data available|Data delay|
       * |---|---|---|---|
       * |1 minute|1 hour|7 days|5 minutes|
       * |5 minutes|3 days|93 days|15 minutes|
       * |1 hour|31 days|186 days|4 hours|
       *
       * @param request DescribeDomainRealTimeSrcBpsDataRequest
       * @return DescribeDomainRealTimeSrcBpsDataResponse
       */
      Models::DescribeDomainRealTimeSrcBpsDataResponse describeDomainRealTimeSrcBpsData(const Models::DescribeDomainRealTimeSrcBpsDataRequest &request);

      /**
       * @summary Queries the total number and proportions of HTTP status codes returned during back-to-origin routing.
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
       * @param request DescribeDomainRealTimeSrcHttpCodeDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainRealTimeSrcHttpCodeDataResponse
       */
      Models::DescribeDomainRealTimeSrcHttpCodeDataResponse describeDomainRealTimeSrcHttpCodeDataWithOptions(const Models::DescribeDomainRealTimeSrcHttpCodeDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the total number and proportions of HTTP status codes returned during back-to-origin routing.
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
       * @param request DescribeDomainRealTimeSrcHttpCodeDataRequest
       * @return DescribeDomainRealTimeSrcHttpCodeDataResponse
       */
      Models::DescribeDomainRealTimeSrcHttpCodeDataResponse describeDomainRealTimeSrcHttpCodeData(const Models::DescribeDomainRealTimeSrcHttpCodeDataRequest &request);

      /**
       * @summary Queries the monitoring data of back-to-origin traffic for one or more specified accelerated domains. The data is collected every minute.
       *
       * @description * You can call this operation up to 10 times per second per account.
       * * If you do not specify the StartTime or EndTime parameter, the request returns the data collected in the last hour by default. If you specify both the StartTime and EndTime parameters, the request returns the data collected within the specified time range.
       * **Time granularity**
       * The time granularity varies with the time range specified by the StartTime and EndTime parameters. The following table describes the time period within which historical data is available and the data delay.
       * |Time granularity|Maximum time range per query|Historical data available|Data delay|
       * |---|---|---|---|
       * |1 minute|1 hour|7 days|5 minutes|
       * |5 minutes|3 days|93 days|15 minutes|
       * |1 hour|31 days|186 days|4 hours|
       *
       * @param request DescribeDomainRealTimeSrcTrafficDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainRealTimeSrcTrafficDataResponse
       */
      Models::DescribeDomainRealTimeSrcTrafficDataResponse describeDomainRealTimeSrcTrafficDataWithOptions(const Models::DescribeDomainRealTimeSrcTrafficDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the monitoring data of back-to-origin traffic for one or more specified accelerated domains. The data is collected every minute.
       *
       * @description * You can call this operation up to 10 times per second per account.
       * * If you do not specify the StartTime or EndTime parameter, the request returns the data collected in the last hour by default. If you specify both the StartTime and EndTime parameters, the request returns the data collected within the specified time range.
       * **Time granularity**
       * The time granularity varies with the time range specified by the StartTime and EndTime parameters. The following table describes the time period within which historical data is available and the data delay.
       * |Time granularity|Maximum time range per query|Historical data available|Data delay|
       * |---|---|---|---|
       * |1 minute|1 hour|7 days|5 minutes|
       * |5 minutes|3 days|93 days|15 minutes|
       * |1 hour|31 days|186 days|4 hours|
       *
       * @param request DescribeDomainRealTimeSrcTrafficDataRequest
       * @return DescribeDomainRealTimeSrcTrafficDataResponse
       */
      Models::DescribeDomainRealTimeSrcTrafficDataResponse describeDomainRealTimeSrcTrafficData(const Models::DescribeDomainRealTimeSrcTrafficDataRequest &request);

      /**
       * @summary Queries the monitoring data of network traffic for one or more accelerated domain names.
       *
       * @description * You can call this operation up to 50 times per second per account.
       * * If you do not specify the StartTime or EndTime parameter, the request returns the data collected in the last hour. If you specify both the StartTime and EndTime parameters, the request returns the data collected within the specified time range.
       * **Time granularity**
       * The time granularity varies with the time range specified by the StartTime and EndTime parameters. The following table describes the time period within which historical data is available and the data delay.
       * |Time granularity|Maximum time range per query|Historical data available|Data delay|
       * |---|---|---|---|
       * |1 minute|1 hour|7 days|5 minutes|
       * |5 minutes|3 days|93 days|15 minutes|
       * |1 hour|31 days|186 days|4 hours|
       *
       * @param request DescribeDomainRealTimeTrafficDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainRealTimeTrafficDataResponse
       */
      Models::DescribeDomainRealTimeTrafficDataResponse describeDomainRealTimeTrafficDataWithOptions(const Models::DescribeDomainRealTimeTrafficDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the monitoring data of network traffic for one or more accelerated domain names.
       *
       * @description * You can call this operation up to 50 times per second per account.
       * * If you do not specify the StartTime or EndTime parameter, the request returns the data collected in the last hour. If you specify both the StartTime and EndTime parameters, the request returns the data collected within the specified time range.
       * **Time granularity**
       * The time granularity varies with the time range specified by the StartTime and EndTime parameters. The following table describes the time period within which historical data is available and the data delay.
       * |Time granularity|Maximum time range per query|Historical data available|Data delay|
       * |---|---|---|---|
       * |1 minute|1 hour|7 days|5 minutes|
       * |5 minutes|3 days|93 days|15 minutes|
       * |1 hour|31 days|186 days|4 hours|
       *
       * @param request DescribeDomainRealTimeTrafficDataRequest
       * @return DescribeDomainRealTimeTrafficDataResponse
       */
      Models::DescribeDomainRealTimeTrafficDataResponse describeDomainRealTimeTrafficData(const Models::DescribeDomainRealTimeTrafficDataRequest &request);

      /**
       * @summary Queries the real-time log delivery information about an accelerated domain name.
       *
       * @description > You can call this operation up to 100 times per second per account.
       *
       * @param request DescribeDomainRealtimeLogDeliveryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainRealtimeLogDeliveryResponse
       */
      Models::DescribeDomainRealtimeLogDeliveryResponse describeDomainRealtimeLogDeliveryWithOptions(const Models::DescribeDomainRealtimeLogDeliveryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the real-time log delivery information about an accelerated domain name.
       *
       * @description > You can call this operation up to 100 times per second per account.
       *
       * @param request DescribeDomainRealtimeLogDeliveryRequest
       * @return DescribeDomainRealtimeLogDeliveryResponse
       */
      Models::DescribeDomainRealtimeLogDeliveryResponse describeDomainRealtimeLogDelivery(const Models::DescribeDomainRealtimeLogDeliveryRequest &request);

      /**
       * @summary Queries the geographic distribution of users for a domain name. The data is collected at an interval of one day. You can query the data in the last 90 days.
       *
       * @description The statistical analysis feature of Alibaba Cloud CDN is no longer available. The API operations related to the statistical analysis feature are no longer maintained. We recommend that you not use this operation because data may be missing or inaccurate. You can use the [operations report](https://help.aliyun.com/document_detail/279577.html) feature for data analysis.
       * > *   If you do not specify the **StartTime** or **EndTime** parameter, data collected within the last **24** hours is queried. If you specify both the **StartTime** and **EndTime** parameters, data collected within the specified time range is queried.
       * >*   There is delay in data collection. If you want to query data collected within the last day, we recommend that you query the data on the next day.
       * >*   You can call this operation up to 100 times per second per account.
       *
       * @param request DescribeDomainRegionDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainRegionDataResponse
       */
      Models::DescribeDomainRegionDataResponse describeDomainRegionDataWithOptions(const Models::DescribeDomainRegionDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the geographic distribution of users for a domain name. The data is collected at an interval of one day. You can query the data in the last 90 days.
       *
       * @description The statistical analysis feature of Alibaba Cloud CDN is no longer available. The API operations related to the statistical analysis feature are no longer maintained. We recommend that you not use this operation because data may be missing or inaccurate. You can use the [operations report](https://help.aliyun.com/document_detail/279577.html) feature for data analysis.
       * > *   If you do not specify the **StartTime** or **EndTime** parameter, data collected within the last **24** hours is queried. If you specify both the **StartTime** and **EndTime** parameters, data collected within the specified time range is queried.
       * >*   There is delay in data collection. If you want to query data collected within the last day, we recommend that you query the data on the next day.
       * >*   You can call this operation up to 100 times per second per account.
       *
       * @param request DescribeDomainRegionDataRequest
       * @return DescribeDomainRegionDataResponse
       */
      Models::DescribeDomainRegionDataResponse describeDomainRegionData(const Models::DescribeDomainRegionDataRequest &request);

      /**
       * @summary Queries the request hit ratio in percentage.
       *
       * @description * You can call this operation up to 100 times per second per account.
       * * If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last 24 hours. If you set both these parameters, the request returns the data collected within the specified time range.
       * **Time granularity**
       * The time granularity supported by the Interval parameter, the maximum time period within which historical data is available, and the data delay vary with the maximum time range per query, as described in the following table.
       * |Time granularity|Maximum time range per query|Historical data available|Data delay|
       * |---|---|---|---|
       * |5 minutes|3 days|93 days|15 minutes|
       * |1 hour|31 days|186 days|4 hours|
       * |1 day|366 days|366 days|04:00 on the next day|
       *
       * @param request DescribeDomainReqHitRateDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainReqHitRateDataResponse
       */
      Models::DescribeDomainReqHitRateDataResponse describeDomainReqHitRateDataWithOptions(const Models::DescribeDomainReqHitRateDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the request hit ratio in percentage.
       *
       * @description * You can call this operation up to 100 times per second per account.
       * * If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last 24 hours. If you set both these parameters, the request returns the data collected within the specified time range.
       * **Time granularity**
       * The time granularity supported by the Interval parameter, the maximum time period within which historical data is available, and the data delay vary with the maximum time range per query, as described in the following table.
       * |Time granularity|Maximum time range per query|Historical data available|Data delay|
       * |---|---|---|---|
       * |5 minutes|3 days|93 days|15 minutes|
       * |1 hour|31 days|186 days|4 hours|
       * |1 day|366 days|366 days|04:00 on the next day|
       *
       * @param request DescribeDomainReqHitRateDataRequest
       * @return DescribeDomainReqHitRateDataResponse
       */
      Models::DescribeDomainReqHitRateDataResponse describeDomainReqHitRateData(const Models::DescribeDomainReqHitRateDataRequest &request);

      /**
       * @summary Queries bandwidth monitoring data of requests that are redirected to origin servers for one or more accelerated domain names.
       *
       * @description * You can call this operation up to 100 times per second per account.
       * * If you do not specify the StartTime or EndTime parameter, the request returns the data collected in the last 24 hours. If you specify both the StartTime and EndTime parameters, the request returns the data collected within the specified time range.
       * **Time granularity**
       * The time granularity supported by the Interval parameter, the maximum time period within which historical data is available, and the data delay vary with the time range to query, as described in the following table.
       * |Time granularity|Maximum time range per query|Historical data available|Data delay|
       * |---|---|---|---|
       * |5 minutes|3 days|93 days|15 minutes|
       * |1 hour|31 days|186 days|4 hours|
       * |1 day|366 days|366 days|04:00 on the next day|
       *
       * @param request DescribeDomainSrcBpsDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainSrcBpsDataResponse
       */
      Models::DescribeDomainSrcBpsDataResponse describeDomainSrcBpsDataWithOptions(const Models::DescribeDomainSrcBpsDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries bandwidth monitoring data of requests that are redirected to origin servers for one or more accelerated domain names.
       *
       * @description * You can call this operation up to 100 times per second per account.
       * * If you do not specify the StartTime or EndTime parameter, the request returns the data collected in the last 24 hours. If you specify both the StartTime and EndTime parameters, the request returns the data collected within the specified time range.
       * **Time granularity**
       * The time granularity supported by the Interval parameter, the maximum time period within which historical data is available, and the data delay vary with the time range to query, as described in the following table.
       * |Time granularity|Maximum time range per query|Historical data available|Data delay|
       * |---|---|---|---|
       * |5 minutes|3 days|93 days|15 minutes|
       * |1 hour|31 days|186 days|4 hours|
       * |1 day|366 days|366 days|04:00 on the next day|
       *
       * @param request DescribeDomainSrcBpsDataRequest
       * @return DescribeDomainSrcBpsDataResponse
       */
      Models::DescribeDomainSrcBpsDataResponse describeDomainSrcBpsData(const Models::DescribeDomainSrcBpsDataRequest &request);

      /**
       * @summary Queries the proportions of HTTP status codes that are returned during back-to-origin routing.
       *
       * @description * You can call this operation up to 100 times per second per account.
       * * If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last 24 hours. If you set both these parameters, the request returns the data collected within the specified time range.
       * **Time granularity**
       * The time granularity supported by the Interval parameter varies with the maximum time range per query. The following table describes the time period within which historical data is available and the data delay.
       * |Time granularity|Maximum time range per query|Historical data available|Data delay|
       * |---|---|---|---|
       * |5 minutes|3 days|93 days|15 minutes|
       * |1 hour|31 days|186 days|4 hours|
       * |1 day|366 days|366 days|04:00 on the next day|
       *
       * @param request DescribeDomainSrcHttpCodeDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainSrcHttpCodeDataResponse
       */
      Models::DescribeDomainSrcHttpCodeDataResponse describeDomainSrcHttpCodeDataWithOptions(const Models::DescribeDomainSrcHttpCodeDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the proportions of HTTP status codes that are returned during back-to-origin routing.
       *
       * @description * You can call this operation up to 100 times per second per account.
       * * If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last 24 hours. If you set both these parameters, the request returns the data collected within the specified time range.
       * **Time granularity**
       * The time granularity supported by the Interval parameter varies with the maximum time range per query. The following table describes the time period within which historical data is available and the data delay.
       * |Time granularity|Maximum time range per query|Historical data available|Data delay|
       * |---|---|---|---|
       * |5 minutes|3 days|93 days|15 minutes|
       * |1 hour|31 days|186 days|4 hours|
       * |1 day|366 days|366 days|04:00 on the next day|
       *
       * @param request DescribeDomainSrcHttpCodeDataRequest
       * @return DescribeDomainSrcHttpCodeDataResponse
       */
      Models::DescribeDomainSrcHttpCodeDataResponse describeDomainSrcHttpCodeData(const Models::DescribeDomainSrcHttpCodeDataRequest &request);

      /**
       * @summary Queries the number of queries per second (QPS) that are sent to the origin server. You can query data collected in the last 90 days.
       *
       * @description * You can call this operation up to 100 times per second per account.
       * * If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last 24 hours. If you set both these parameters, the request returns the data collected within the specified time range.
       * ### Time granularity
       * The time granularity supported by the Interval parameter, the maximum time period within which historical data is available, and the data delay vary with the maximum time range per query, as described in the following table.
       * |Time granularity|Maximum time range per query|Historical data available|Data delay|
       * |---|---|---|---|
       * |5 minutes|3 days|93 days|15 minutes|
       * |1 hour|31 days|186 days|4 hours|
       * |1 day|366 days|366 days|04:00 on the next day|
       *
       * @param request DescribeDomainSrcQpsDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainSrcQpsDataResponse
       */
      Models::DescribeDomainSrcQpsDataResponse describeDomainSrcQpsDataWithOptions(const Models::DescribeDomainSrcQpsDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of queries per second (QPS) that are sent to the origin server. You can query data collected in the last 90 days.
       *
       * @description * You can call this operation up to 100 times per second per account.
       * * If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last 24 hours. If you set both these parameters, the request returns the data collected within the specified time range.
       * ### Time granularity
       * The time granularity supported by the Interval parameter, the maximum time period within which historical data is available, and the data delay vary with the maximum time range per query, as described in the following table.
       * |Time granularity|Maximum time range per query|Historical data available|Data delay|
       * |---|---|---|---|
       * |5 minutes|3 days|93 days|15 minutes|
       * |1 hour|31 days|186 days|4 hours|
       * |1 day|366 days|366 days|04:00 on the next day|
       *
       * @param request DescribeDomainSrcQpsDataRequest
       * @return DescribeDomainSrcQpsDataResponse
       */
      Models::DescribeDomainSrcQpsDataResponse describeDomainSrcQpsData(const Models::DescribeDomainSrcQpsDataRequest &request);

      /**
       * @summary Queries frequently requested origin URLs of one or more accelerated domain names.
       *
       * @description The statistical analysis feature of Alibaba Cloud CDN is no longer available. The API operations related to the statistical analysis feature are no longer maintained. We recommend that you do not use the API operations because data may be missing or inaccurate. You can use the [operations report](https://help.aliyun.com/document_detail/279577.html) feature for data analysis.
       * > *   The data is collected at an interval of 5 minutes.
       * >*   You can call this operation up to 10 times per second per account.
       *
       * @param request DescribeDomainSrcTopUrlVisitRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainSrcTopUrlVisitResponse
       */
      Models::DescribeDomainSrcTopUrlVisitResponse describeDomainSrcTopUrlVisitWithOptions(const Models::DescribeDomainSrcTopUrlVisitRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries frequently requested origin URLs of one or more accelerated domain names.
       *
       * @description The statistical analysis feature of Alibaba Cloud CDN is no longer available. The API operations related to the statistical analysis feature are no longer maintained. We recommend that you do not use the API operations because data may be missing or inaccurate. You can use the [operations report](https://help.aliyun.com/document_detail/279577.html) feature for data analysis.
       * > *   The data is collected at an interval of 5 minutes.
       * >*   You can call this operation up to 10 times per second per account.
       *
       * @param request DescribeDomainSrcTopUrlVisitRequest
       * @return DescribeDomainSrcTopUrlVisitResponse
       */
      Models::DescribeDomainSrcTopUrlVisitResponse describeDomainSrcTopUrlVisit(const Models::DescribeDomainSrcTopUrlVisitRequest &request);

      /**
       * @summary Queries origin traffic for one or more specified accelerated domain names.
       *
       * @description * You can call this operation up to 100 times per second per account.
       * * If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last 24 hours. If you set both these parameters, the request returns the data collected within the specified time range.
       * **Time granularity**
       * The time granularity supported by the Interval parameter, the maximum time period within which historical data is available, and the data delay vary with the maximum time range per query, as described in the following table.
       * |Time granularity|Maximum time range per query|Historical data available|Data delay|
       * |---|---|---|---|
       * |5 minutes|3 days|93 days|15 minutes|
       * |1 hour|31 days|186 days|4 hours|
       * |1 day|366 days|366 days|04:00 on the next day|
       *
       * @param request DescribeDomainSrcTrafficDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainSrcTrafficDataResponse
       */
      Models::DescribeDomainSrcTrafficDataResponse describeDomainSrcTrafficDataWithOptions(const Models::DescribeDomainSrcTrafficDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries origin traffic for one or more specified accelerated domain names.
       *
       * @description * You can call this operation up to 100 times per second per account.
       * * If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last 24 hours. If you set both these parameters, the request returns the data collected within the specified time range.
       * **Time granularity**
       * The time granularity supported by the Interval parameter, the maximum time period within which historical data is available, and the data delay vary with the maximum time range per query, as described in the following table.
       * |Time granularity|Maximum time range per query|Historical data available|Data delay|
       * |---|---|---|---|
       * |5 minutes|3 days|93 days|15 minutes|
       * |1 hour|31 days|186 days|4 hours|
       * |1 day|366 days|366 days|04:00 on the next day|
       *
       * @param request DescribeDomainSrcTrafficDataRequest
       * @return DescribeDomainSrcTrafficDataResponse
       */
      Models::DescribeDomainSrcTrafficDataResponse describeDomainSrcTrafficData(const Models::DescribeDomainSrcTrafficDataRequest &request);

      /**
       * @summary Queries client IP addresses that are ranked by the number of requests or the amount of network traffic within a specific time range for one or more accelerated domain names. You can query data collected within the last 90 days.
       *
       * @description The statistical analysis feature of Alibaba Cloud CDN is no longer available. The API operations related to the statistical analysis feature are no longer maintained. We recommend that you do not use the API operations because data may be missing or inaccurate. You can use the [operations report](https://help.aliyun.com/document_detail/279577.html) feature to for data analysis.
       * > *   If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last 24 hours. If you set both these parameters, the request returns the data collected within the specified time range.
       * >*   Data is collected every hour.
       * >*   You can call this operation up to 10 times per second per account.
       *
       * @param request DescribeDomainTopClientIpVisitRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainTopClientIpVisitResponse
       */
      Models::DescribeDomainTopClientIpVisitResponse describeDomainTopClientIpVisitWithOptions(const Models::DescribeDomainTopClientIpVisitRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries client IP addresses that are ranked by the number of requests or the amount of network traffic within a specific time range for one or more accelerated domain names. You can query data collected within the last 90 days.
       *
       * @description The statistical analysis feature of Alibaba Cloud CDN is no longer available. The API operations related to the statistical analysis feature are no longer maintained. We recommend that you do not use the API operations because data may be missing or inaccurate. You can use the [operations report](https://help.aliyun.com/document_detail/279577.html) feature to for data analysis.
       * > *   If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last 24 hours. If you set both these parameters, the request returns the data collected within the specified time range.
       * >*   Data is collected every hour.
       * >*   You can call this operation up to 10 times per second per account.
       *
       * @param request DescribeDomainTopClientIpVisitRequest
       * @return DescribeDomainTopClientIpVisitResponse
       */
      Models::DescribeDomainTopClientIpVisitResponse describeDomainTopClientIpVisit(const Models::DescribeDomainTopClientIpVisitRequest &request);

      /**
       * @summary Queries frequently requested web pages of one or more accelerated domain names on a specified day and sorts the web pages. You can query data collected within the last 90 days.
       *
       * @description The statistical analysis feature of Alibaba Cloud CDN is no longer available. The API operations related to the statistical analysis feature are no longer maintained. We recommend that you do not use the API operations because data may be missing or inaccurate. You can use the [operations report](https://help.aliyun.com/document_detail/279577.html) feature or [ship real-time logs in Log Service](https://help.aliyun.com/document_detail/440145.html) to analyze data.
       * > 
       * *   If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last 24 hours. If you set both these parameters, the request returns the data collected within the specified time range.
       * *   Data is collected at an interval of five minutes.
       * *   You can call this operation up to 10 times per second per account.
       *
       * @param request DescribeDomainTopReferVisitRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainTopReferVisitResponse
       */
      Models::DescribeDomainTopReferVisitResponse describeDomainTopReferVisitWithOptions(const Models::DescribeDomainTopReferVisitRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries frequently requested web pages of one or more accelerated domain names on a specified day and sorts the web pages. You can query data collected within the last 90 days.
       *
       * @description The statistical analysis feature of Alibaba Cloud CDN is no longer available. The API operations related to the statistical analysis feature are no longer maintained. We recommend that you do not use the API operations because data may be missing or inaccurate. You can use the [operations report](https://help.aliyun.com/document_detail/279577.html) feature or [ship real-time logs in Log Service](https://help.aliyun.com/document_detail/440145.html) to analyze data.
       * > 
       * *   If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last 24 hours. If you set both these parameters, the request returns the data collected within the specified time range.
       * *   Data is collected at an interval of five minutes.
       * *   You can call this operation up to 10 times per second per account.
       *
       * @param request DescribeDomainTopReferVisitRequest
       * @return DescribeDomainTopReferVisitResponse
       */
      Models::DescribeDomainTopReferVisitResponse describeDomainTopReferVisit(const Models::DescribeDomainTopReferVisitRequest &request);

      /**
       * @summary Queries top 100 frequently requested URLs of an accelerated domain name within a specified time range.
       *
       * @description The statistical analysis feature of Alibaba Cloud CDN is no longer available. The API operations related to the statistical analysis feature are no longer maintained. We recommend that you do not use the API operations because data may be missing or inaccurate. You can use the [operations report](https://help.aliyun.com/document_detail/279577.html) feature for data analysis.
       * > *   If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last 24 hours. If you set both these parameters, the request returns the data collected within the specified time range.
       * >*   You can query data collected in the last 90 days.
       * >*   You can specify only one domain name in each call.
       * >*   You can call this operation up to 10 times per second per account.
       *
       * @param request DescribeDomainTopUrlVisitRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainTopUrlVisitResponse
       */
      Models::DescribeDomainTopUrlVisitResponse describeDomainTopUrlVisitWithOptions(const Models::DescribeDomainTopUrlVisitRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries top 100 frequently requested URLs of an accelerated domain name within a specified time range.
       *
       * @description The statistical analysis feature of Alibaba Cloud CDN is no longer available. The API operations related to the statistical analysis feature are no longer maintained. We recommend that you do not use the API operations because data may be missing or inaccurate. You can use the [operations report](https://help.aliyun.com/document_detail/279577.html) feature for data analysis.
       * > *   If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last 24 hours. If you set both these parameters, the request returns the data collected within the specified time range.
       * >*   You can query data collected in the last 90 days.
       * >*   You can specify only one domain name in each call.
       * >*   You can call this operation up to 10 times per second per account.
       *
       * @param request DescribeDomainTopUrlVisitRequest
       * @return DescribeDomainTopUrlVisitResponse
       */
      Models::DescribeDomainTopUrlVisitResponse describeDomainTopUrlVisit(const Models::DescribeDomainTopUrlVisitRequest &request);

      /**
       * @summary Queries network traffic for one or more accelerated domain names. You can query data that is collected in the last 90 days.
       *
       * @description * You can call this operation up to 100 times per second per account.
       * * If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last 24 hours. If you set both these parameters, the request returns the data collected within the specified time range.
       * **Time granularity**
       * The time granularity supported by the Interval parameter, the maximum time period within which historical data is available, and the data delay vary with the maximum time range per query, as described in the following table.
       * |Time granularity|Maximum time range per query|Historical data available|Data delay|
       * |---|---|---|---|
       * |5 minutes|3 days|93 days|15 minutes|
       * |1 hour|31 days|186 days|4 hours|
       * |1 day|366 days|366|04:00 on the next day|
       *
       * @param request DescribeDomainTrafficDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainTrafficDataResponse
       */
      Models::DescribeDomainTrafficDataResponse describeDomainTrafficDataWithOptions(const Models::DescribeDomainTrafficDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries network traffic for one or more accelerated domain names. You can query data that is collected in the last 90 days.
       *
       * @description * You can call this operation up to 100 times per second per account.
       * * If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last 24 hours. If you set both these parameters, the request returns the data collected within the specified time range.
       * **Time granularity**
       * The time granularity supported by the Interval parameter, the maximum time period within which historical data is available, and the data delay vary with the maximum time range per query, as described in the following table.
       * |Time granularity|Maximum time range per query|Historical data available|Data delay|
       * |---|---|---|---|
       * |5 minutes|3 days|93 days|15 minutes|
       * |1 hour|31 days|186 days|4 hours|
       * |1 day|366 days|366|04:00 on the next day|
       *
       * @param request DescribeDomainTrafficDataRequest
       * @return DescribeDomainTrafficDataResponse
       */
      Models::DescribeDomainTrafficDataResponse describeDomainTrafficData(const Models::DescribeDomainTrafficDataRequest &request);

      /**
       * @summary Queries the resource usage data of specific domain names in a specified billable region.
       *
       * @description * You can call this operation up to 10 times per second per account.
       * * The time granularity supported by the Interval parameter, the maximum time period within which historical data is available, and the data delay vary with the maximum time range per query, as described in the following table.
       * |Time granularity|Maximum time range per query|Historical data available|Data delay|
       * |---|---|---|---|
       * |5 minutes|3 days|93 days|15 minutes|
       * |1 hour|31 days|186 days|4 hours|
       * |1 day|90 days|366 days|04:00 on the next day|
       *
       * @param request DescribeDomainUsageDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainUsageDataResponse
       */
      Models::DescribeDomainUsageDataResponse describeDomainUsageDataWithOptions(const Models::DescribeDomainUsageDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the resource usage data of specific domain names in a specified billable region.
       *
       * @description * You can call this operation up to 10 times per second per account.
       * * The time granularity supported by the Interval parameter, the maximum time period within which historical data is available, and the data delay vary with the maximum time range per query, as described in the following table.
       * |Time granularity|Maximum time range per query|Historical data available|Data delay|
       * |---|---|---|---|
       * |5 minutes|3 days|93 days|15 minutes|
       * |1 hour|31 days|186 days|4 hours|
       * |1 day|90 days|366 days|04:00 on the next day|
       *
       * @param request DescribeDomainUsageDataRequest
       * @return DescribeDomainUsageDataResponse
       */
      Models::DescribeDomainUsageDataResponse describeDomainUsageData(const Models::DescribeDomainUsageDataRequest &request);

      /**
       * @summary Queries the unique visitor (UV) data of an accelerated domain name. Data is collected every hour. You can query data collected in the last 90 days.
       *
       * @description The statistical analysis feature of Alibaba Cloud CDN is no longer available. The API operations related to the statistical analysis feature are no longer maintained. We recommend that you do not use the API operations because data may be missing or inaccurate. You can use the [operations report](https://help.aliyun.com/document_detail/279577.html) feature for data analysis.
       * > 
       * *   If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last 24 hours. If you set both these parameters, the request returns the data collected within the specified time range.
       * *   You can specify only one accelerated domain name or all accelerated domain names in your Alibaba Cloud account.
       * *   You can call this operation up to 100 times per second per account.
       *
       * @param request DescribeDomainUvDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainUvDataResponse
       */
      Models::DescribeDomainUvDataResponse describeDomainUvDataWithOptions(const Models::DescribeDomainUvDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the unique visitor (UV) data of an accelerated domain name. Data is collected every hour. You can query data collected in the last 90 days.
       *
       * @description The statistical analysis feature of Alibaba Cloud CDN is no longer available. The API operations related to the statistical analysis feature are no longer maintained. We recommend that you do not use the API operations because data may be missing or inaccurate. You can use the [operations report](https://help.aliyun.com/document_detail/279577.html) feature for data analysis.
       * > 
       * *   If you do not set the StartTime or EndTime parameter, the request returns the data collected in the last 24 hours. If you set both these parameters, the request returns the data collected within the specified time range.
       * *   You can specify only one accelerated domain name or all accelerated domain names in your Alibaba Cloud account.
       * *   You can call this operation up to 100 times per second per account.
       *
       * @param request DescribeDomainUvDataRequest
       * @return DescribeDomainUvDataResponse
       */
      Models::DescribeDomainUvDataResponse describeDomainUvData(const Models::DescribeDomainUvDataRequest &request);

      /**
       * @summary Queries the verification content of a domain name, including the host record and record value.
       *
       * @description You can call this operation to query the verification content of an accelerated domain name based on whether the global resource plan is enabled.
       *
       * @param request DescribeDomainVerifyDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainVerifyDataResponse
       */
      Models::DescribeDomainVerifyDataResponse describeDomainVerifyDataWithOptions(const Models::DescribeDomainVerifyDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the verification content of a domain name, including the host record and record value.
       *
       * @description You can call this operation to query the verification content of an accelerated domain name based on whether the global resource plan is enabled.
       *
       * @param request DescribeDomainVerifyDataRequest
       * @return DescribeDomainVerifyDataResponse
       */
      Models::DescribeDomainVerifyDataResponse describeDomainVerifyData(const Models::DescribeDomainVerifyDataRequest &request);

      /**
       * @summary Queries accelerated domain names by origin server.
       *
       * @description > You can call this operation up to 30 times per second per account.
       *
       * @param request DescribeDomainsBySourceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainsBySourceResponse
       */
      Models::DescribeDomainsBySourceResponse describeDomainsBySourceWithOptions(const Models::DescribeDomainsBySourceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries accelerated domain names by origin server.
       *
       * @description > You can call this operation up to 30 times per second per account.
       *
       * @param request DescribeDomainsBySourceRequest
       * @return DescribeDomainsBySourceResponse
       */
      Models::DescribeDomainsBySourceResponse describeDomainsBySource(const Models::DescribeDomainsBySourceRequest &request);

      /**
       * @summary Queries the monitoring data of an accelerated domain name. Data is collected every day. You can query data collected within the last 90 days.
       *
       * @description *   You can call this operation up to 10 times per second per account.
       * *   If you do not set StartTime or EndTime, data within the last 24 hours is queried. If you set both StartTime and EndTime, data within the specified time range is queried.
       * *   You can query the monitoring data of a specific accelerated domain name or all accelerated domain names that belong to your Alibaba Cloud account.
       *
       * @param request DescribeDomainsUsageByDayRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeDomainsUsageByDayResponse
       */
      Models::DescribeDomainsUsageByDayResponse describeDomainsUsageByDayWithOptions(const Models::DescribeDomainsUsageByDayRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the monitoring data of an accelerated domain name. Data is collected every day. You can query data collected within the last 90 days.
       *
       * @description *   You can call this operation up to 10 times per second per account.
       * *   If you do not set StartTime or EndTime, data within the last 24 hours is queried. If you set both StartTime and EndTime, data within the specified time range is queried.
       * *   You can query the monitoring data of a specific accelerated domain name or all accelerated domain names that belong to your Alibaba Cloud account.
       *
       * @param request DescribeDomainsUsageByDayRequest
       * @return DescribeDomainsUsageByDayResponse
       */
      Models::DescribeDomainsUsageByDayResponse describeDomainsUsageByDay(const Models::DescribeDomainsUsageByDayRequest &request);

      /**
       * @summary Queries the execution errors of a script in EdgeScript (ES).
       *
       * @description *   You can call this operation up to 30 times per second per account.
       *
       * @param request DescribeEsExceptionDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEsExceptionDataResponse
       */
      Models::DescribeEsExceptionDataResponse describeEsExceptionDataWithOptions(const Models::DescribeEsExceptionDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the execution errors of a script in EdgeScript (ES).
       *
       * @description *   You can call this operation up to 30 times per second per account.
       *
       * @param request DescribeEsExceptionDataRequest
       * @return DescribeEsExceptionDataResponse
       */
      Models::DescribeEsExceptionDataResponse describeEsExceptionData(const Models::DescribeEsExceptionDataRequest &request);

      /**
       * @summary Queries the execution status of scripts in EdgeScript (ES).
       *
       * @description *   You can call this operation up to 30 times per second per account.
       *
       * @param request DescribeEsExecuteDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeEsExecuteDataResponse
       */
      Models::DescribeEsExecuteDataResponse describeEsExecuteDataWithOptions(const Models::DescribeEsExecuteDataRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the execution status of scripts in EdgeScript (ES).
       *
       * @description *   You can call this operation up to 30 times per second per account.
       *
       * @param request DescribeEsExecuteDataRequest
       * @return DescribeEsExecuteDataResponse
       */
      Models::DescribeEsExecuteDataResponse describeEsExecuteData(const Models::DescribeEsExecuteDataRequest &request);

      /**
       * @summary Queries a specified Function Compute trigger.
       *
       * @param request DescribeFCTriggerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeFCTriggerResponse
       */
      Models::DescribeFCTriggerResponse describeFCTriggerWithOptions(const Models::DescribeFCTriggerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a specified Function Compute trigger.
       *
       * @param request DescribeFCTriggerRequest
       * @return DescribeFCTriggerResponse
       */
      Models::DescribeFCTriggerResponse describeFCTrigger(const Models::DescribeFCTriggerRequest &request);

      /**
       * @summary Checks whether a specified IP address is the IP address of a CDN point of presence (POP).
       *
       * @param request DescribeIpInfoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeIpInfoResponse
       */
      Models::DescribeIpInfoResponse describeIpInfoWithOptions(const Models::DescribeIpInfoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Checks whether a specified IP address is the IP address of a CDN point of presence (POP).
       *
       * @param request DescribeIpInfoRequest
       * @return DescribeIpInfoResponse
       */
      Models::DescribeIpInfoResponse describeIpInfo(const Models::DescribeIpInfoRequest &request);

      /**
       * @summary Queries the status of IP addresses of points of presence (POPs). The status of an IP address of a POP indicates whether content delivery acceleration is supported by the POP.
       *
       * @description > You can call this operation up to 50 times per second per account.
       *
       * @param request DescribeIpStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeIpStatusResponse
       */
      Models::DescribeIpStatusResponse describeIpStatusWithOptions(const Models::DescribeIpStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of IP addresses of points of presence (POPs). The status of an IP address of a POP indicates whether content delivery acceleration is supported by the POP.
       *
       * @description > You can call this operation up to 50 times per second per account.
       *
       * @param request DescribeIpStatusRequest
       * @return DescribeIpStatusResponse
       */
      Models::DescribeIpStatusResponse describeIpStatus(const Models::DescribeIpStatusRequest &request);

      /**
       * @summary Queries the virtual IP addresses (VIPs) of L2 CDN points of presence (POPs) for a specific domain name.
       *
       * @description *   This operation is available only to users whose daily peak bandwidth value is higher than 1 Gbit/s. If you meet this requirement, you can [submit a ticket](https://workorder-intl.console.aliyun.com/?spm=5176.2020520001.aliyun_topbar.18.dbd44bd3e4f845#/ticket/createIndex) to apply for permissions to use this operation.
       * *   You can call this operation up to 40 times per second per account.
       *
       * @param request DescribeL2VipsByDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeL2VipsByDomainResponse
       */
      Models::DescribeL2VipsByDomainResponse describeL2VipsByDomainWithOptions(const Models::DescribeL2VipsByDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the virtual IP addresses (VIPs) of L2 CDN points of presence (POPs) for a specific domain name.
       *
       * @description *   This operation is available only to users whose daily peak bandwidth value is higher than 1 Gbit/s. If you meet this requirement, you can [submit a ticket](https://workorder-intl.console.aliyun.com/?spm=5176.2020520001.aliyun_topbar.18.dbd44bd3e4f845#/ticket/createIndex) to apply for permissions to use this operation.
       * *   You can call this operation up to 40 times per second per account.
       *
       * @param request DescribeL2VipsByDomainRequest
       * @return DescribeL2VipsByDomainResponse
       */
      Models::DescribeL2VipsByDomainResponse describeL2VipsByDomain(const Models::DescribeL2VipsByDomainRequest &request);

      /**
       * @summary Queries the prefetch details of a task, including the prefetch progress of all resources in the task. Only users who are included in the whitelist can use this operation. You can contact your business manager to apply for the whitelist.
       *
       * @description *   You can query data within the last 3 days.
       * *   You can call this operation up to 30 times per second per account.
       *
       * @param request DescribePreloadDetailByIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribePreloadDetailByIdResponse
       */
      Models::DescribePreloadDetailByIdResponse describePreloadDetailByIdWithOptions(const Models::DescribePreloadDetailByIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the prefetch details of a task, including the prefetch progress of all resources in the task. Only users who are included in the whitelist can use this operation. You can contact your business manager to apply for the whitelist.
       *
       * @description *   You can query data within the last 3 days.
       * *   You can call this operation up to 30 times per second per account.
       *
       * @param request DescribePreloadDetailByIdRequest
       * @return DescribePreloadDetailByIdResponse
       */
      Models::DescribePreloadDetailByIdResponse describePreloadDetailById(const Models::DescribePreloadDetailByIdRequest &request);

      /**
       * @summary Queries the bandwidth values by Internet service provider (ISP) and region.
       *
       * @description *   The data is collected every 5 minutes.
       * *   You can call this operation up to 20 times per second per account.
       *
       * @param request DescribeRangeDataByLocateAndIspServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRangeDataByLocateAndIspServiceResponse
       */
      Models::DescribeRangeDataByLocateAndIspServiceResponse describeRangeDataByLocateAndIspServiceWithOptions(const Models::DescribeRangeDataByLocateAndIspServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the bandwidth values by Internet service provider (ISP) and region.
       *
       * @description *   The data is collected every 5 minutes.
       * *   You can call this operation up to 20 times per second per account.
       *
       * @param request DescribeRangeDataByLocateAndIspServiceRequest
       * @return DescribeRangeDataByLocateAndIspServiceResponse
       */
      Models::DescribeRangeDataByLocateAndIspServiceResponse describeRangeDataByLocateAndIspService(const Models::DescribeRangeDataByLocateAndIspServiceRequest &request);

      /**
       * @summary Queries the number of real-time log deliveries.
       *
       * @description > You can call this operation up to 100 times per second per account.
       *
       * @param request DescribeRealtimeDeliveryAccRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRealtimeDeliveryAccResponse
       */
      Models::DescribeRealtimeDeliveryAccResponse describeRealtimeDeliveryAccWithOptions(const Models::DescribeRealtimeDeliveryAccRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of real-time log deliveries.
       *
       * @description > You can call this operation up to 100 times per second per account.
       *
       * @param request DescribeRealtimeDeliveryAccRequest
       * @return DescribeRealtimeDeliveryAccResponse
       */
      Models::DescribeRealtimeDeliveryAccResponse describeRealtimeDeliveryAcc(const Models::DescribeRealtimeDeliveryAccRequest &request);

      /**
       * @summary DescribeRefreshQuota
       *
       * @description Queries the maximum and remaining numbers of URLs and directories that can be refreshed, the maximum and remaining numbers of times that you can prefetch content, and the maximum and remaining numbers of URLs and directories that can be blocked on the current day.
       *
       * @param request DescribeRefreshQuotaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRefreshQuotaResponse
       */
      Models::DescribeRefreshQuotaResponse describeRefreshQuotaWithOptions(const Models::DescribeRefreshQuotaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary DescribeRefreshQuota
       *
       * @description Queries the maximum and remaining numbers of URLs and directories that can be refreshed, the maximum and remaining numbers of times that you can prefetch content, and the maximum and remaining numbers of URLs and directories that can be blocked on the current day.
       *
       * @param request DescribeRefreshQuotaRequest
       * @return DescribeRefreshQuotaResponse
       */
      Models::DescribeRefreshQuotaResponse describeRefreshQuota(const Models::DescribeRefreshQuotaRequest &request);

      /**
       * @summary Queries the statuses of refresh or prefetch tasks by task ID.
       *
       * @description *   You can query data in the last three days.
       * *   You can call this operation up to 30 times per second per account.
       *
       * @param request DescribeRefreshTaskByIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRefreshTaskByIdResponse
       */
      Models::DescribeRefreshTaskByIdResponse describeRefreshTaskByIdWithOptions(const Models::DescribeRefreshTaskByIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the statuses of refresh or prefetch tasks by task ID.
       *
       * @description *   You can query data in the last three days.
       * *   You can call this operation up to 30 times per second per account.
       *
       * @param request DescribeRefreshTaskByIdRequest
       * @return DescribeRefreshTaskByIdResponse
       */
      Models::DescribeRefreshTaskByIdResponse describeRefreshTaskById(const Models::DescribeRefreshTaskByIdRequest &request);

      /**
       * @summary Queries the status of refresh or prefetch tasks that belong to an accelerated domain name.
       *
       * @description *   You can query the status of tasks by task ID or URL.
       * *   You can set both the **TaskId** and **ObjectPath** parameters. If you do not set the **TaskId** or **ObjectPath** parameter, data entries on the first page (20 entries) collected in the last 3 days are returned.
       * *   You can query data collected in the last 3 days.
       * *   If auto CDN cache update is enabled in the Object Storage Service (OSS) console, you cannot call the DescribeRefreshTasks operation to query automatic refresh tasks in OSS.
       * *   You can call this operation up to 10 times per second per account. If you want to query tasks at a higher frequency, call the [DescribeRefreshTaskById](https://help.aliyun.com/document_detail/187709.html) operation. This operation allows you to query tasks by task ID.
       *
       * @param request DescribeRefreshTasksRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeRefreshTasksResponse
       */
      Models::DescribeRefreshTasksResponse describeRefreshTasksWithOptions(const Models::DescribeRefreshTasksRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of refresh or prefetch tasks that belong to an accelerated domain name.
       *
       * @description *   You can query the status of tasks by task ID or URL.
       * *   You can set both the **TaskId** and **ObjectPath** parameters. If you do not set the **TaskId** or **ObjectPath** parameter, data entries on the first page (20 entries) collected in the last 3 days are returned.
       * *   You can query data collected in the last 3 days.
       * *   If auto CDN cache update is enabled in the Object Storage Service (OSS) console, you cannot call the DescribeRefreshTasks operation to query automatic refresh tasks in OSS.
       * *   You can call this operation up to 10 times per second per account. If you want to query tasks at a higher frequency, call the [DescribeRefreshTaskById](https://help.aliyun.com/document_detail/187709.html) operation. This operation allows you to query tasks by task ID.
       *
       * @param request DescribeRefreshTasksRequest
       * @return DescribeRefreshTasksResponse
       */
      Models::DescribeRefreshTasksResponse describeRefreshTasks(const Models::DescribeRefreshTasksRequest &request);

      /**
       * @summary Queries node IP addresses in the staging environment.
       *
       * @description >The maximum number of times that each user can call this operation per second is 30.
       *
       * @param request DescribeStagingIpRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeStagingIpResponse
       */
      Models::DescribeStagingIpResponse describeStagingIpWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries node IP addresses in the staging environment.
       *
       * @description >The maximum number of times that each user can call this operation per second is 30.
       *
       * @return DescribeStagingIpResponse
       */
      Models::DescribeStagingIpResponse describeStagingIp();

      /**
       * @summary Queries tags that are added to specified resources.
       *
       * @description >  The maximum number of times that each user can call this operation per second is 10.
       *
       * @param request DescribeTagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTagResourcesResponse
       */
      Models::DescribeTagResourcesResponse describeTagResourcesWithOptions(const Models::DescribeTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries tags that are added to specified resources.
       *
       * @description >  The maximum number of times that each user can call this operation per second is 10.
       *
       * @param request DescribeTagResourcesRequest
       * @return DescribeTagResourcesResponse
       */
      Models::DescribeTagResourcesResponse describeTagResources(const Models::DescribeTagResourcesRequest &request);

      /**
       * @summary Queries the top N domain names ranked by network traffic. You can query data collected in the last 30 days.
       *
       * @description The statistical analysis feature of Alibaba Cloud CDN is no longer available. The API operations related to the statistical analysis feature are no longer maintained. We recommend that you do not use the API operations because data may be missing or inaccurate. You can use the [operations report](https://help.aliyun.com/document_detail/279577.html) feature for data analysis.
       * > *   If you do not set the **StartTime** or **EndTime** parameter, the request returns the data collected in the current month. If you set both these parameters, the request returns the data collected within the specified time range.
       * >*   You can call this operation up to 100 times per second per account.
       *
       * @param request DescribeTopDomainsByFlowRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeTopDomainsByFlowResponse
       */
      Models::DescribeTopDomainsByFlowResponse describeTopDomainsByFlowWithOptions(const Models::DescribeTopDomainsByFlowRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the top N domain names ranked by network traffic. You can query data collected in the last 30 days.
       *
       * @description The statistical analysis feature of Alibaba Cloud CDN is no longer available. The API operations related to the statistical analysis feature are no longer maintained. We recommend that you do not use the API operations because data may be missing or inaccurate. You can use the [operations report](https://help.aliyun.com/document_detail/279577.html) feature for data analysis.
       * > *   If you do not set the **StartTime** or **EndTime** parameter, the request returns the data collected in the current month. If you set both these parameters, the request returns the data collected within the specified time range.
       * >*   You can call this operation up to 100 times per second per account.
       *
       * @param request DescribeTopDomainsByFlowRequest
       * @return DescribeTopDomainsByFlowResponse
       */
      Models::DescribeTopDomainsByFlowResponse describeTopDomainsByFlow(const Models::DescribeTopDomainsByFlowRequest &request);

      /**
       * @summary Queries the status of a user.
       *
       * @param request DescribeUserCdnStatusRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUserCdnStatusResponse
       */
      Models::DescribeUserCdnStatusResponse describeUserCdnStatusWithOptions(const Models::DescribeUserCdnStatusRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status of a user.
       *
       * @param request DescribeUserCdnStatusRequest
       * @return DescribeUserCdnStatusResponse
       */
      Models::DescribeUserCdnStatusResponse describeUserCdnStatus(const Models::DescribeUserCdnStatusRequest &request);

      /**
       * @summary Queries the number of domain names whose SSL certificates are about to expire or have already expired.
       *
       * @description > You can call this operation up to 100 times per second per account.
       *
       * @param request DescribeUserCertificateExpireCountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUserCertificateExpireCountResponse
       */
      Models::DescribeUserCertificateExpireCountResponse describeUserCertificateExpireCountWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the number of domain names whose SSL certificates are about to expire or have already expired.
       *
       * @description > You can call this operation up to 100 times per second per account.
       *
       * @return DescribeUserCertificateExpireCountResponse
       */
      Models::DescribeUserCertificateExpireCountResponse describeUserCertificateExpireCount();

      /**
       * @summary Queries configurations of security features.
       *
       * @param request DescribeUserConfigsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUserConfigsResponse
       */
      Models::DescribeUserConfigsResponse describeUserConfigsWithOptions(const Models::DescribeUserConfigsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries configurations of security features.
       *
       * @param request DescribeUserConfigsRequest
       * @return DescribeUserConfigsResponse
       */
      Models::DescribeUserConfigsResponse describeUserConfigs(const Models::DescribeUserConfigsRequest &request);

      /**
       * @summary Queries all accelerated domain names in your Alibaba Cloud account and the status of the accelerated domain names. You can filter domain names by name or status. Fuzzy match is supported.
       *
       * @description *   You can call this operation up to 100 times per second per account.
       * *   You can specify up to 50 domain names in each request. Separate multiple domain names with commas (,).
       *
       * @param request DescribeUserDomainsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUserDomainsResponse
       */
      Models::DescribeUserDomainsResponse describeUserDomainsWithOptions(const Models::DescribeUserDomainsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all accelerated domain names in your Alibaba Cloud account and the status of the accelerated domain names. You can filter domain names by name or status. Fuzzy match is supported.
       *
       * @description *   You can call this operation up to 100 times per second per account.
       * *   You can specify up to 50 domain names in each request. Separate multiple domain names with commas (,).
       *
       * @param request DescribeUserDomainsRequest
       * @return DescribeUserDomainsResponse
       */
      Models::DescribeUserDomainsResponse describeUserDomains(const Models::DescribeUserDomainsRequest &request);

      /**
       * @summary Queries user tags.
       *
       * @description > You can call this operation up to 100 times per second per account.
       *
       * @param request DescribeUserTagsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUserTagsResponse
       */
      Models::DescribeUserTagsResponse describeUserTagsWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries user tags.
       *
       * @description > You can call this operation up to 100 times per second per account.
       *
       * @return DescribeUserTagsResponse
       */
      Models::DescribeUserTagsResponse describeUserTags();

      /**
       * @summary Queries usage export tasks that were created in the last three months.
       *
       * @description > You can call this operation up to 100 times per second per account.
       *
       * @param request DescribeUserUsageDataExportTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUserUsageDataExportTaskResponse
       */
      Models::DescribeUserUsageDataExportTaskResponse describeUserUsageDataExportTaskWithOptions(const Models::DescribeUserUsageDataExportTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries usage export tasks that were created in the last three months.
       *
       * @description > You can call this operation up to 100 times per second per account.
       *
       * @param request DescribeUserUsageDataExportTaskRequest
       * @return DescribeUserUsageDataExportTaskResponse
       */
      Models::DescribeUserUsageDataExportTaskResponse describeUserUsageDataExportTask(const Models::DescribeUserUsageDataExportTaskRequest &request);

      /**
       * @summary Queries tasks that were used to export resource usage details of one or more accelerated domain names that belong to your Alibaba Cloud account. Resource usage information is collected every five minutes.
       *
       * @description *   This operation has been available since July 20, 2018. You can query information about resource usage collected within the last three months.
       * *   You can call this operation up to 100 times per second per account.
       *
       * @param request DescribeUserUsageDetailDataExportTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUserUsageDetailDataExportTaskResponse
       */
      Models::DescribeUserUsageDetailDataExportTaskResponse describeUserUsageDetailDataExportTaskWithOptions(const Models::DescribeUserUsageDetailDataExportTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries tasks that were used to export resource usage details of one or more accelerated domain names that belong to your Alibaba Cloud account. Resource usage information is collected every five minutes.
       *
       * @description *   This operation has been available since July 20, 2018. You can query information about resource usage collected within the last three months.
       * *   You can call this operation up to 100 times per second per account.
       *
       * @param request DescribeUserUsageDetailDataExportTaskRequest
       * @return DescribeUserUsageDetailDataExportTaskResponse
       */
      Models::DescribeUserUsageDetailDataExportTaskResponse describeUserUsageDetailDataExportTask(const Models::DescribeUserUsageDetailDataExportTaskRequest &request);

      /**
       * @summary Queries virtual IP addresses (VIPs) of CDN points of presence (POPs) by domain name.
       *
       * @description > You can call this operation up to 30 times per second per account.
       *
       * @param request DescribeUserVipsByDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeUserVipsByDomainResponse
       */
      Models::DescribeUserVipsByDomainResponse describeUserVipsByDomainWithOptions(const Models::DescribeUserVipsByDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries virtual IP addresses (VIPs) of CDN points of presence (POPs) by domain name.
       *
       * @description > You can call this operation up to 30 times per second per account.
       *
       * @param request DescribeUserVipsByDomainRequest
       * @return DescribeUserVipsByDomainResponse
       */
      Models::DescribeUserVipsByDomainResponse describeUserVipsByDomain(const Models::DescribeUserVipsByDomainRequest &request);

      /**
       * @summary Queries the ownership verification content of an accelerated domain name.
       *
       * @param request DescribeVerifyContentRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeVerifyContentResponse
       */
      Models::DescribeVerifyContentResponse describeVerifyContentWithOptions(const Models::DescribeVerifyContentRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the ownership verification content of an accelerated domain name.
       *
       * @param request DescribeVerifyContentRequest
       * @return DescribeVerifyContentResponse
       */
      Models::DescribeVerifyContentResponse describeVerifyContent(const Models::DescribeVerifyContentRequest &request);

      /**
       * @summary Disables real-time log delivery for specific accelerated domain names.
       *
       * @description > You can call this operation up to 100 times per second per account.
       *
       * @param request DisableRealtimeLogDeliveryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DisableRealtimeLogDeliveryResponse
       */
      Models::DisableRealtimeLogDeliveryResponse disableRealtimeLogDeliveryWithOptions(const Models::DisableRealtimeLogDeliveryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables real-time log delivery for specific accelerated domain names.
       *
       * @description > You can call this operation up to 100 times per second per account.
       *
       * @param request DisableRealtimeLogDeliveryRequest
       * @return DisableRealtimeLogDeliveryResponse
       */
      Models::DisableRealtimeLogDeliveryResponse disableRealtimeLogDelivery(const Models::DisableRealtimeLogDeliveryRequest &request);

      /**
       * @summary Enables real-time log delivery for an accelerated domain name.
       *
       * @description > You can call this operation up to 100 times per second per account.
       *
       * @param request EnableRealtimeLogDeliveryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnableRealtimeLogDeliveryResponse
       */
      Models::EnableRealtimeLogDeliveryResponse enableRealtimeLogDeliveryWithOptions(const Models::EnableRealtimeLogDeliveryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables real-time log delivery for an accelerated domain name.
       *
       * @description > You can call this operation up to 100 times per second per account.
       *
       * @param request EnableRealtimeLogDeliveryRequest
       * @return EnableRealtimeLogDeliveryResponse
       */
      Models::EnableRealtimeLogDeliveryResponse enableRealtimeLogDelivery(const Models::EnableRealtimeLogDeliveryRequest &request);

      /**
       * @summary 按域名、functionName查询灰度配置信息，返回的信息中包含当前的灰度状态、灰度进度
       *
       * @param request GetGrayDomainFunctionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetGrayDomainFunctionResponse
       */
      Models::GetGrayDomainFunctionResponse getGrayDomainFunctionWithOptions(const Models::GetGrayDomainFunctionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 按域名、functionName查询灰度配置信息，返回的信息中包含当前的灰度状态、灰度进度
       *
       * @param request GetGrayDomainFunctionRequest
       * @return GetGrayDomainFunctionResponse
       */
      Models::GetGrayDomainFunctionResponse getGrayDomainFunction(const Models::GetGrayDomainFunctionRequest &request);

      /**
       * @summary Queries domain names by log configuration ID.
       *
       * @description > You can call this operation up to 100 times per second per account.
       *
       * @param request ListDomainsByLogConfigIdRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListDomainsByLogConfigIdResponse
       */
      Models::ListDomainsByLogConfigIdResponse listDomainsByLogConfigIdWithOptions(const Models::ListDomainsByLogConfigIdRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries domain names by log configuration ID.
       *
       * @description > You can call this operation up to 100 times per second per account.
       *
       * @param request ListDomainsByLogConfigIdRequest
       * @return ListDomainsByLogConfigIdResponse
       */
      Models::ListDomainsByLogConfigIdResponse listDomainsByLogConfigId(const Models::ListDomainsByLogConfigIdRequest &request);

      /**
       * @summary Queries the Function Compute trigger that is set for an Alibaba Cloud CDN event.
       *
       * @description > You can call this operation up to 100 times per second per account.
       *
       * @param request ListFCTriggerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListFCTriggerResponse
       */
      Models::ListFCTriggerResponse listFCTriggerWithOptions(const Models::ListFCTriggerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the Function Compute trigger that is set for an Alibaba Cloud CDN event.
       *
       * @description > You can call this operation up to 100 times per second per account.
       *
       * @param request ListFCTriggerRequest
       * @return ListFCTriggerResponse
       */
      Models::ListFCTriggerResponse listFCTrigger(const Models::ListFCTriggerRequest &request);

      /**
       * @summary Queries all real-time log delivery tasks within your Alibaba Cloud account.
       *
       * @param request ListRealtimeLogDeliveryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRealtimeLogDeliveryResponse
       */
      Models::ListRealtimeLogDeliveryResponse listRealtimeLogDeliveryWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all real-time log delivery tasks within your Alibaba Cloud account.
       *
       * @return ListRealtimeLogDeliveryResponse
       */
      Models::ListRealtimeLogDeliveryResponse listRealtimeLogDelivery();

      /**
       * @summary Queries all domain names that are associated with a specific real-time log delivery configuration record.
       *
       * @description > You can call this operation up to 100 times per second per account.
       *
       * @param request ListRealtimeLogDeliveryDomainsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRealtimeLogDeliveryDomainsResponse
       */
      Models::ListRealtimeLogDeliveryDomainsResponse listRealtimeLogDeliveryDomainsWithOptions(const Models::ListRealtimeLogDeliveryDomainsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all domain names that are associated with a specific real-time log delivery configuration record.
       *
       * @description > You can call this operation up to 100 times per second per account.
       *
       * @param request ListRealtimeLogDeliveryDomainsRequest
       * @return ListRealtimeLogDeliveryDomainsResponse
       */
      Models::ListRealtimeLogDeliveryDomainsResponse listRealtimeLogDeliveryDomains(const Models::ListRealtimeLogDeliveryDomainsRequest &request);

      /**
       * @summary Queries the information about the real-time log delivery feature in a specified region.
       *
       * @description > You can call this operation up to 100 times per second per account.
       *
       * @param request ListRealtimeLogDeliveryInfosRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRealtimeLogDeliveryInfosResponse
       */
      Models::ListRealtimeLogDeliveryInfosResponse listRealtimeLogDeliveryInfosWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information about the real-time log delivery feature in a specified region.
       *
       * @description > You can call this operation up to 100 times per second per account.
       *
       * @return ListRealtimeLogDeliveryInfosResponse
       */
      Models::ListRealtimeLogDeliveryInfosResponse listRealtimeLogDeliveryInfos();

      /**
       * @summary Queries the tags that are attached to a resource.
       *
       * @param request ListTagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the tags that are attached to a resource.
       *
       * @param request ListTagResourcesRequest
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResources(const Models::ListTagResourcesRequest &request);

      /**
       * @summary Queries all custom log configurations in your account.
       *
       * @description > You can call this operation up to 100 times per second per account.
       *
       * @param request ListUserCustomLogConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListUserCustomLogConfigResponse
       */
      Models::ListUserCustomLogConfigResponse listUserCustomLogConfigWithOptions(const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all custom log configurations in your account.
       *
       * @description > You can call this operation up to 100 times per second per account.
       *
       * @return ListUserCustomLogConfigResponse
       */
      Models::ListUserCustomLogConfigResponse listUserCustomLogConfig();

      /**
       * @summary Modifies the configuration of an accelerated domain name.
       *
       * @description > You can call this operation up to 30 times per second per account.
       *
       * @param request ModifyCdnDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyCdnDomainResponse
       */
      Models::ModifyCdnDomainResponse modifyCdnDomainWithOptions(const Models::ModifyCdnDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configuration of an accelerated domain name.
       *
       * @description > You can call this operation up to 30 times per second per account.
       *
       * @param request ModifyCdnDomainRequest
       * @return ModifyCdnDomainResponse
       */
      Models::ModifyCdnDomainResponse modifyCdnDomain(const Models::ModifyCdnDomainRequest &request);

      /**
       * @summary Transfer domain names from an Alibaba Cloud account to the current account.
       *
       * @description This operation is used in the following scenario:
       * *   You have multiple Alibaba Cloud accounts and want to transfer domain names from Account A to Account B.
       * *   You are prompted that a domain name has been added when you add the domain name to Alibaba Cloud CDN. You do not know which account does the domain name belong to, and you want to transfer the domain name to your current account.
       *
       * @param request ModifyCdnDomainOwnerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyCdnDomainOwnerResponse
       */
      Models::ModifyCdnDomainOwnerResponse modifyCdnDomainOwnerWithOptions(const Models::ModifyCdnDomainOwnerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Transfer domain names from an Alibaba Cloud account to the current account.
       *
       * @description This operation is used in the following scenario:
       * *   You have multiple Alibaba Cloud accounts and want to transfer domain names from Account A to Account B.
       * *   You are prompted that a domain name has been added when you add the domain name to Alibaba Cloud CDN. You do not know which account does the domain name belong to, and you want to transfer the domain name to your current account.
       *
       * @param request ModifyCdnDomainOwnerRequest
       * @return ModifyCdnDomainOwnerResponse
       */
      Models::ModifyCdnDomainOwnerResponse modifyCdnDomainOwner(const Models::ModifyCdnDomainOwnerRequest &request);

      /**
       * @summary Changes the acceleration region for an accelerated domain name.
       *
       * @description > You can call this operation up to 100 times per second per account.
       *
       * @param request ModifyCdnDomainSchdmByPropertyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyCdnDomainSchdmByPropertyResponse
       */
      Models::ModifyCdnDomainSchdmByPropertyResponse modifyCdnDomainSchdmByPropertyWithOptions(const Models::ModifyCdnDomainSchdmByPropertyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the acceleration region for an accelerated domain name.
       *
       * @description > You can call this operation up to 100 times per second per account.
       *
       * @param request ModifyCdnDomainSchdmByPropertyRequest
       * @return ModifyCdnDomainSchdmByPropertyResponse
       */
      Models::ModifyCdnDomainSchdmByPropertyResponse modifyCdnDomainSchdmByProperty(const Models::ModifyCdnDomainSchdmByPropertyRequest &request);

      /**
       * @summary Changes the metering method of Alibaba Cloud CDN.
       *
       * @param request ModifyCdnServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyCdnServiceResponse
       */
      Models::ModifyCdnServiceResponse modifyCdnServiceWithOptions(const Models::ModifyCdnServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Changes the metering method of Alibaba Cloud CDN.
       *
       * @param request ModifyCdnServiceRequest
       * @return ModifyCdnServiceResponse
       */
      Models::ModifyCdnServiceResponse modifyCdnService(const Models::ModifyCdnServiceRequest &request);

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
       * @summary Modifies the configurations of real-time log delivery for a specific domain name. Each domain name supports only one Logstore.
       *
       * @description > You can call this operation up to 100 times per second per account.
       *
       * @param request ModifyRealtimeLogDeliveryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ModifyRealtimeLogDeliveryResponse
       */
      Models::ModifyRealtimeLogDeliveryResponse modifyRealtimeLogDeliveryWithOptions(const Models::ModifyRealtimeLogDeliveryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the configurations of real-time log delivery for a specific domain name. Each domain name supports only one Logstore.
       *
       * @description > You can call this operation up to 100 times per second per account.
       *
       * @param request ModifyRealtimeLogDeliveryRequest
       * @return ModifyRealtimeLogDeliveryResponse
       */
      Models::ModifyRealtimeLogDeliveryResponse modifyRealtimeLogDelivery(const Models::ModifyRealtimeLogDeliveryRequest &request);

      /**
       * @summary Activates Alibaba Cloud CDN. You must activate Alibaba Cloud CDN before you can manage domain names in Alibaba Cloud CDN.
       *
       * @description *   Alibaba Cloud CDN can be activated only once per Alibaba Cloud account. The Alibaba Cloud account must complete real-name verification to activate Alibaba Cloud CDN.
       * *   You can call this operation up to five times per second per user.
       *
       * @param request OpenCdnServiceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return OpenCdnServiceResponse
       */
      Models::OpenCdnServiceResponse openCdnServiceWithOptions(const Models::OpenCdnServiceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Activates Alibaba Cloud CDN. You must activate Alibaba Cloud CDN before you can manage domain names in Alibaba Cloud CDN.
       *
       * @description *   Alibaba Cloud CDN can be activated only once per Alibaba Cloud account. The Alibaba Cloud account must complete real-name verification to activate Alibaba Cloud CDN.
       * *   You can call this operation up to five times per second per user.
       *
       * @param request OpenCdnServiceRequest
       * @return OpenCdnServiceResponse
       */
      Models::OpenCdnServiceResponse openCdnService(const Models::OpenCdnServiceRequest &request);

      /**
       * @summary 发布灰度配置到线上，支持多种模式，如全网发布、指定方式(灰度发布)，回滚
       *
       * @param request PublishGrayDomainConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PublishGrayDomainConfigResponse
       */
      Models::PublishGrayDomainConfigResponse publishGrayDomainConfigWithOptions(const Models::PublishGrayDomainConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 发布灰度配置到线上，支持多种模式，如全网发布、指定方式(灰度发布)，回滚
       *
       * @param request PublishGrayDomainConfigRequest
       * @return PublishGrayDomainConfigResponse
       */
      Models::PublishGrayDomainConfigResponse publishGrayDomainConfig(const Models::PublishGrayDomainConfigRequest &request);

      /**
       * @summary Publishes the configurations of the staging environment to the production environment.
       *
       * @description > You can call this operation up to 30 times per second per account.
       *
       * @param request PublishStagingConfigToProductionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PublishStagingConfigToProductionResponse
       */
      Models::PublishStagingConfigToProductionResponse publishStagingConfigToProductionWithOptions(const Models::PublishStagingConfigToProductionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Publishes the configurations of the staging environment to the production environment.
       *
       * @description > You can call this operation up to 30 times per second per account.
       *
       * @param request PublishStagingConfigToProductionRequest
       * @return PublishStagingConfigToProductionResponse
       */
      Models::PublishStagingConfigToProductionResponse publishStagingConfigToProduction(const Models::PublishStagingConfigToProductionRequest &request);

      /**
       * @summary Prefetches content from origin servers to points of presence (POPs). This reduces loads on origin servers because users can directly hit cache upon their first visits.
       *
       * @description *   Alibaba Cloud CDN supports POST requests in which parameters are sent as a form.
       * *   You can call the [RefreshObjectCaches](https://help.aliyun.com/document_detail/91164.html) operation to refresh content and call the [PushObjectCache](https://help.aliyun.com/document_detail/91161.html) operation to prefetch content.
       * *   By default, each Alibaba Cloud account can submit up to 1,000 URLs per day. If the daily peak bandwidth value of your workloads exceeds 200 Mbit/s, you can [submit a ticket](https://account.alibabacloud.com/login/login.htm?oauth_callback=https%3A//ticket-intl.console.aliyun.com/%23/ticket/createIndex) to increase your daily quota. Alibaba Cloud reviews your application and then increases the quota accordingly.
       * *   You can specify at most 100 URLs in each prefetch request.
       * *   For each Alibaba Cloud account, the prefetch queue can contain up to 50,000 URLs. Content is prefetched based on the time when the URLs are submitted. The URL that is submitted the earliest has the highest priority. If the number of URLs in the queue reaches 50,000, you cannot submit more URLs until the number drops below 50,000.
       * *   You can call this operation up to 50 times per second per account.
       * *   For more information about how to automate refresh or prefetch tasks, see [Run scripts to refresh and prefetch content](https://help.aliyun.com/document_detail/151829.html).
       * ## Precautions
       * *   After a prefetch task is submitted and completed, the POPs immediately start to retrieve resources from the origin server. Therefore, a large number of refresh tasks cause a large number of concurrent download tasks. This increases the number of requests that are redirected to the origin server. The back-to-origin routing process consumes more bandwidth resources and the origin server may be overwhelmed.
       * *   The time required for a prefetch task to complete is proportional to the size of the prefetched file. In actual practice, most prefetch tasks require 5 to 30 minutes to complete. A task with a smaller average file size requires less time.
       * *   To allow RAM users to perform this operation, you must first grant them the required permissions. For more information, see [Authorize a RAM user to prefetch and refresh resources](https://help.aliyun.com/document_detail/260300.html).
       *
       * @param request PushObjectCacheRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PushObjectCacheResponse
       */
      Models::PushObjectCacheResponse pushObjectCacheWithOptions(const Models::PushObjectCacheRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Prefetches content from origin servers to points of presence (POPs). This reduces loads on origin servers because users can directly hit cache upon their first visits.
       *
       * @description *   Alibaba Cloud CDN supports POST requests in which parameters are sent as a form.
       * *   You can call the [RefreshObjectCaches](https://help.aliyun.com/document_detail/91164.html) operation to refresh content and call the [PushObjectCache](https://help.aliyun.com/document_detail/91161.html) operation to prefetch content.
       * *   By default, each Alibaba Cloud account can submit up to 1,000 URLs per day. If the daily peak bandwidth value of your workloads exceeds 200 Mbit/s, you can [submit a ticket](https://account.alibabacloud.com/login/login.htm?oauth_callback=https%3A//ticket-intl.console.aliyun.com/%23/ticket/createIndex) to increase your daily quota. Alibaba Cloud reviews your application and then increases the quota accordingly.
       * *   You can specify at most 100 URLs in each prefetch request.
       * *   For each Alibaba Cloud account, the prefetch queue can contain up to 50,000 URLs. Content is prefetched based on the time when the URLs are submitted. The URL that is submitted the earliest has the highest priority. If the number of URLs in the queue reaches 50,000, you cannot submit more URLs until the number drops below 50,000.
       * *   You can call this operation up to 50 times per second per account.
       * *   For more information about how to automate refresh or prefetch tasks, see [Run scripts to refresh and prefetch content](https://help.aliyun.com/document_detail/151829.html).
       * ## Precautions
       * *   After a prefetch task is submitted and completed, the POPs immediately start to retrieve resources from the origin server. Therefore, a large number of refresh tasks cause a large number of concurrent download tasks. This increases the number of requests that are redirected to the origin server. The back-to-origin routing process consumes more bandwidth resources and the origin server may be overwhelmed.
       * *   The time required for a prefetch task to complete is proportional to the size of the prefetched file. In actual practice, most prefetch tasks require 5 to 30 minutes to complete. A task with a smaller average file size requires less time.
       * *   To allow RAM users to perform this operation, you must first grant them the required permissions. For more information, see [Authorize a RAM user to prefetch and refresh resources](https://help.aliyun.com/document_detail/260300.html).
       *
       * @param request PushObjectCacheRequest
       * @return PushObjectCacheResponse
       */
      Models::PushObjectCacheResponse pushObjectCache(const Models::PushObjectCacheRequest &request);

      /**
       * @summary Refreshes the cache based on cache tags that you configured.
       *
       * @param request RefreshObjectCacheByCacheTagRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RefreshObjectCacheByCacheTagResponse
       */
      Models::RefreshObjectCacheByCacheTagResponse refreshObjectCacheByCacheTagWithOptions(const Models::RefreshObjectCacheByCacheTagRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Refreshes the cache based on cache tags that you configured.
       *
       * @param request RefreshObjectCacheByCacheTagRequest
       * @return RefreshObjectCacheByCacheTagResponse
       */
      Models::RefreshObjectCacheByCacheTagResponse refreshObjectCacheByCacheTag(const Models::RefreshObjectCacheByCacheTagRequest &request);

      /**
       * @summary Refreshes files on Alibaba Cloud CDN points of presence (POPs). After files are refreshed, the original file content immediately becomes invalid. If clients request the original file content, Alibaba Cloud CDN forwards the requests to the origin server. Then, Alibaba Cloud CDN caches the latest content to the POPs and returns the content to the clients. Alibaba Cloud CDN allows you to refresh content from multiple URLs at the same time.
       *
       * @description *   Alibaba Cloud CDN supports POST requests in which parameters are sent as a form.
       * *   You can call the [RefreshObjectCaches](https://help.aliyun.com/document_detail/91164.html) operation to refresh content and call the [PushObjectCache](https://help.aliyun.com/document_detail/91161.html) operation to prefetch content.
       * *   You can call the RefreshObjectCaches operation up to 50 times per second per account.
       * *   For more information about how to automatically refresh or prefetch tasks, see [Run scripts to refresh and prefetch content](https://help.aliyun.com/document_detail/151829.html).
       * ## Precautions
       * *   After a refresh task is submitted and completed, specific resources are removed from POPs. When a POP receives a request for the removed resources, the POP forwards the request to the origin server to retrieve the resources. The retrieved resources are returned to the client and cached on the POP. Multiple refresh tasks may cause a large number of resources to be removed from the POPs. This increases the number of requests that are forwarded to the origin server. The back-to-origin routing process consumes more bandwidth resources and the origin server may be overwhelmed.
       * *   A refresh task takes effect 5 to 6 minutes after being submitted. This means that if the resource you want to refresh has a TTL of less than five minutes, you wait for it to expire instead of manually running a refresh task.
       * *   If you want to use RAM users to refresh or prefetch resources, you must obtain the required permissions. For more information, see [Authorize a RAM user to prefetch and refresh resources](https://help.aliyun.com/document_detail/260300.html).
       * ### Refresh quota
       * *   By default, each Alibaba Cloud account can refresh content from up to 10,000 URLs and 100 directories per day. The directories include subdirectories. If the daily peak bandwidth value exceeds 200 Mbit/s, you can [submit a ticket](https://account.alibabacloud.com/login/login.htm?oauth_callback=https%3A//ticket-intl.console.aliyun.com/%23/ticket/createIndex) to request a quota increase. Alibaba Cloud CDN evaluates your application based on your workloads.
       * *   By default, each Alibaba Cloud account can submit up to 20 refresh rules that contain regular expressions per day. If the daily peak bandwidth of your Alibaba Cloud account exceeds 10 Gbit/s, you can [submit a ticket](https://workorder-intl.console.aliyun.com/#/ticket/createIndex) to request a quota increase.
       * *   You can specify up to 1,000 URL refresh rules, 100 directory refresh rules, or 1 refresh rule that contains regular expressions in each call.
       * *   You can refresh up to 1,000 URLs per minute for each domain name.
       *
       * @param request RefreshObjectCachesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RefreshObjectCachesResponse
       */
      Models::RefreshObjectCachesResponse refreshObjectCachesWithOptions(const Models::RefreshObjectCachesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Refreshes files on Alibaba Cloud CDN points of presence (POPs). After files are refreshed, the original file content immediately becomes invalid. If clients request the original file content, Alibaba Cloud CDN forwards the requests to the origin server. Then, Alibaba Cloud CDN caches the latest content to the POPs and returns the content to the clients. Alibaba Cloud CDN allows you to refresh content from multiple URLs at the same time.
       *
       * @description *   Alibaba Cloud CDN supports POST requests in which parameters are sent as a form.
       * *   You can call the [RefreshObjectCaches](https://help.aliyun.com/document_detail/91164.html) operation to refresh content and call the [PushObjectCache](https://help.aliyun.com/document_detail/91161.html) operation to prefetch content.
       * *   You can call the RefreshObjectCaches operation up to 50 times per second per account.
       * *   For more information about how to automatically refresh or prefetch tasks, see [Run scripts to refresh and prefetch content](https://help.aliyun.com/document_detail/151829.html).
       * ## Precautions
       * *   After a refresh task is submitted and completed, specific resources are removed from POPs. When a POP receives a request for the removed resources, the POP forwards the request to the origin server to retrieve the resources. The retrieved resources are returned to the client and cached on the POP. Multiple refresh tasks may cause a large number of resources to be removed from the POPs. This increases the number of requests that are forwarded to the origin server. The back-to-origin routing process consumes more bandwidth resources and the origin server may be overwhelmed.
       * *   A refresh task takes effect 5 to 6 minutes after being submitted. This means that if the resource you want to refresh has a TTL of less than five minutes, you wait for it to expire instead of manually running a refresh task.
       * *   If you want to use RAM users to refresh or prefetch resources, you must obtain the required permissions. For more information, see [Authorize a RAM user to prefetch and refresh resources](https://help.aliyun.com/document_detail/260300.html).
       * ### Refresh quota
       * *   By default, each Alibaba Cloud account can refresh content from up to 10,000 URLs and 100 directories per day. The directories include subdirectories. If the daily peak bandwidth value exceeds 200 Mbit/s, you can [submit a ticket](https://account.alibabacloud.com/login/login.htm?oauth_callback=https%3A//ticket-intl.console.aliyun.com/%23/ticket/createIndex) to request a quota increase. Alibaba Cloud CDN evaluates your application based on your workloads.
       * *   By default, each Alibaba Cloud account can submit up to 20 refresh rules that contain regular expressions per day. If the daily peak bandwidth of your Alibaba Cloud account exceeds 10 Gbit/s, you can [submit a ticket](https://workorder-intl.console.aliyun.com/#/ticket/createIndex) to request a quota increase.
       * *   You can specify up to 1,000 URL refresh rules, 100 directory refresh rules, or 1 refresh rule that contains regular expressions in each call.
       * *   You can refresh up to 1,000 URLs per minute for each domain name.
       *
       * @param request RefreshObjectCachesRequest
       * @return RefreshObjectCachesResponse
       */
      Models::RefreshObjectCachesResponse refreshObjectCaches(const Models::RefreshObjectCachesRequest &request);

      /**
       * @summary Rolls back configurations in the staging environment. After you call this operation, all configurations in the staging environment are cleared.
       *
       * @description > You can call this operation up to 30 times per second per account.
       *
       * @param request RollbackStagingConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RollbackStagingConfigResponse
       */
      Models::RollbackStagingConfigResponse rollbackStagingConfigWithOptions(const Models::RollbackStagingConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Rolls back configurations in the staging environment. After you call this operation, all configurations in the staging environment are cleared.
       *
       * @description > You can call this operation up to 30 times per second per account.
       *
       * @param request RollbackStagingConfigRequest
       * @return RollbackStagingConfigResponse
       */
      Models::RollbackStagingConfigResponse rollbackStagingConfig(const Models::RollbackStagingConfigRequest &request);

      /**
       * @summary You can call this operation to configure an SSL certificate for a specific domain name.
       *
       * @description > You can call this operation up to 100 times per second per account.
       *
       * @param request SetCdnDomainCSRCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetCdnDomainCSRCertificateResponse
       */
      Models::SetCdnDomainCSRCertificateResponse setCdnDomainCSRCertificateWithOptions(const Models::SetCdnDomainCSRCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can call this operation to configure an SSL certificate for a specific domain name.
       *
       * @description > You can call this operation up to 100 times per second per account.
       *
       * @param request SetCdnDomainCSRCertificateRequest
       * @return SetCdnDomainCSRCertificateResponse
       */
      Models::SetCdnDomainCSRCertificateResponse setCdnDomainCSRCertificate(const Models::SetCdnDomainCSRCertificateRequest &request);

      /**
       * @summary Enables or disables a ShangMi (SM) certificate for a domain name.
       *
       * @description > You can call this operation up to 30 times per second per account.
       *
       * @param request SetCdnDomainSMCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetCdnDomainSMCertificateResponse
       */
      Models::SetCdnDomainSMCertificateResponse setCdnDomainSMCertificateWithOptions(const Models::SetCdnDomainSMCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables or disables a ShangMi (SM) certificate for a domain name.
       *
       * @description > You can call this operation up to 30 times per second per account.
       *
       * @param request SetCdnDomainSMCertificateRequest
       * @return SetCdnDomainSMCertificateResponse
       */
      Models::SetCdnDomainSMCertificateResponse setCdnDomainSMCertificate(const Models::SetCdnDomainSMCertificateRequest &request);

      /**
       * @summary Enables or disables the certificate for a domain name and updates the certificate information.
       *
       * @description *   You can call this operation up to 30 times per second per account.
       * *   Method: POST.
       *
       * @param request SetCdnDomainSSLCertificateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetCdnDomainSSLCertificateResponse
       */
      Models::SetCdnDomainSSLCertificateResponse setCdnDomainSSLCertificateWithOptions(const Models::SetCdnDomainSSLCertificateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables or disables the certificate for a domain name and updates the certificate information.
       *
       * @description *   You can call this operation up to 30 times per second per account.
       * *   Method: POST.
       *
       * @param request SetCdnDomainSSLCertificateRequest
       * @return SetCdnDomainSSLCertificateResponse
       */
      Models::SetCdnDomainSSLCertificateResponse setCdnDomainSSLCertificate(const Models::SetCdnDomainSSLCertificateRequest &request);

      /**
       * @summary Configures a domain name to be accelerated in the staging environment.
       *
       * @description >  You can call this operation up to 30 times per second per account.
       *
       * @param request SetCdnDomainStagingConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetCdnDomainStagingConfigResponse
       */
      Models::SetCdnDomainStagingConfigResponse setCdnDomainStagingConfigWithOptions(const Models::SetCdnDomainStagingConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures a domain name to be accelerated in the staging environment.
       *
       * @description >  You can call this operation up to 30 times per second per account.
       *
       * @param request SetCdnDomainStagingConfigRequest
       * @return SetCdnDomainStagingConfigResponse
       */
      Models::SetCdnDomainStagingConfigResponse setCdnDomainStagingConfig(const Models::SetCdnDomainStagingConfigRequest &request);

      /**
       * @summary Blocks or unblocks IP addresses from accessing domain names.
       *
       * @description > 
       * *   To use this operation, [submit a ticket](https://workorder-intl.console.aliyun.com/?spm=5176.2020520001.aliyun_topbar.18.dbd44bd3e4f845#/ticket/createIndex).
       * *   This operation is suitable for blocking or unblocking a maximum of 1,000 IP addresses or CIDR blocks at a time.
       *
       * @param request SetCdnFullDomainsBlockIPRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetCdnFullDomainsBlockIPResponse
       */
      Models::SetCdnFullDomainsBlockIPResponse setCdnFullDomainsBlockIPWithOptions(const Models::SetCdnFullDomainsBlockIPRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Blocks or unblocks IP addresses from accessing domain names.
       *
       * @description > 
       * *   To use this operation, [submit a ticket](https://workorder-intl.console.aliyun.com/?spm=5176.2020520001.aliyun_topbar.18.dbd44bd3e4f845#/ticket/createIndex).
       * *   This operation is suitable for blocking or unblocking a maximum of 1,000 IP addresses or CIDR blocks at a time.
       *
       * @param request SetCdnFullDomainsBlockIPRequest
       * @return SetCdnFullDomainsBlockIPResponse
       */
      Models::SetCdnFullDomainsBlockIPResponse setCdnFullDomainsBlockIP(const Models::SetCdnFullDomainsBlockIPRequest &request);

      /**
       * @summary Sets a custom origin header.
       *
       * @param request SetReqHeaderConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetReqHeaderConfigResponse
       */
      Models::SetReqHeaderConfigResponse setReqHeaderConfigWithOptions(const Models::SetReqHeaderConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets a custom origin header.
       *
       * @param request SetReqHeaderConfigRequest
       * @return SetReqHeaderConfigResponse
       */
      Models::SetReqHeaderConfigResponse setReqHeaderConfig(const Models::SetReqHeaderConfigRequest &request);

      /**
       * @summary Configures the virtual waiting room feature for an accelerated domain name. This operation is available only for accelerated domain names of the Dynamic CDN workload type.
       *
       * @description > You can call this operation up to 30 times per second per account.
       *
       * @param request SetWaitingRoomConfigRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetWaitingRoomConfigResponse
       */
      Models::SetWaitingRoomConfigResponse setWaitingRoomConfigWithOptions(const Models::SetWaitingRoomConfigRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Configures the virtual waiting room feature for an accelerated domain name. This operation is available only for accelerated domain names of the Dynamic CDN workload type.
       *
       * @description > You can call this operation up to 30 times per second per account.
       *
       * @param request SetWaitingRoomConfigRequest
       * @return SetWaitingRoomConfigResponse
       */
      Models::SetWaitingRoomConfigResponse setWaitingRoomConfig(const Models::SetWaitingRoomConfigRequest &request);

      /**
       * @summary Enables a disabled domain name. After the domain name is enabled, the value of the DomainStatus parameter is changed to Online.
       *
       * @description *   If the domain name is in an invalid state or you have an overdue payment in your account, the domain name cannot be enabled.
       * *   You can call this operation up to 100 times per second per account.
       *
       * @param request StartCdnDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartCdnDomainResponse
       */
      Models::StartCdnDomainResponse startCdnDomainWithOptions(const Models::StartCdnDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Enables a disabled domain name. After the domain name is enabled, the value of the DomainStatus parameter is changed to Online.
       *
       * @description *   If the domain name is in an invalid state or you have an overdue payment in your account, the domain name cannot be enabled.
       * *   You can call this operation up to 100 times per second per account.
       *
       * @param request StartCdnDomainRequest
       * @return StartCdnDomainResponse
       */
      Models::StartCdnDomainResponse startCdnDomain(const Models::StartCdnDomainRequest &request);

      /**
       * @summary Disables an accelerated domain name. After the domain name is disabled, the value of the DomainStatus parameter is changed to Offline.
       *
       * @description *   After an accelerated domain is disabled, Alibaba Cloud CDN retains its information and routes all the requests that are destined for the accelerated domain to the origin server.
       * *   You can call this operation up to 40 times per second per account.
       *
       * @param request StopCdnDomainRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopCdnDomainResponse
       */
      Models::StopCdnDomainResponse stopCdnDomainWithOptions(const Models::StopCdnDomainRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Disables an accelerated domain name. After the domain name is disabled, the value of the DomainStatus parameter is changed to Offline.
       *
       * @description *   After an accelerated domain is disabled, Alibaba Cloud CDN retains its information and routes all the requests that are destined for the accelerated domain to the origin server.
       * *   You can call this operation up to 40 times per second per account.
       *
       * @param request StopCdnDomainRequest
       * @return StopCdnDomainResponse
       */
      Models::StopCdnDomainResponse stopCdnDomain(const Models::StopCdnDomainRequest &request);

      /**
       * @summary Adds one or more tags to specific resources.
       *
       * @description > You can call this operation up to 100 times per second per account.
       *
       * @param request TagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds one or more tags to specific resources.
       *
       * @description > You can call this operation up to 100 times per second per account.
       *
       * @param request TagResourcesRequest
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

      /**
       * @summary Removes tags from specified resources.
       *
       * @description > You can call this operation up to 100 times per second per account.
       *
       * @param request UntagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResourcesWithOptions(const Models::UntagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes tags from specified resources.
       *
       * @description > You can call this operation up to 100 times per second per account.
       *
       * @param request UntagResourcesRequest
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResources(const Models::UntagResourcesRequest &request);

      /**
       * @summary Updates a tracking task.
       *
       * @description > You can call this operation up to three times per second per account.
       *
       * @param request UpdateCdnDeliverTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCdnDeliverTaskResponse
       */
      Models::UpdateCdnDeliverTaskResponse updateCdnDeliverTaskWithOptions(const Models::UpdateCdnDeliverTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a tracking task.
       *
       * @description > You can call this operation up to three times per second per account.
       *
       * @param request UpdateCdnDeliverTaskRequest
       * @return UpdateCdnDeliverTaskResponse
       */
      Models::UpdateCdnDeliverTaskResponse updateCdnDeliverTask(const Models::UpdateCdnDeliverTaskRequest &request);

      /**
       * @summary Updates one or more operations reports.
       *
       * @description > You can call this operation up to three times per second per account.
       *
       * @param request UpdateCdnSubTaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateCdnSubTaskResponse
       */
      Models::UpdateCdnSubTaskResponse updateCdnSubTaskWithOptions(const Models::UpdateCdnSubTaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates one or more operations reports.
       *
       * @description > You can call this operation up to three times per second per account.
       *
       * @param request UpdateCdnSubTaskRequest
       * @return UpdateCdnSubTaskResponse
       */
      Models::UpdateCdnSubTaskResponse updateCdnSubTask(const Models::UpdateCdnSubTaskRequest &request);

      /**
       * @summary Updates a specified Function Compute trigger.
       *
       * @param request UpdateFCTriggerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateFCTriggerResponse
       */
      Models::UpdateFCTriggerResponse updateFCTriggerWithOptions(const Models::UpdateFCTriggerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a specified Function Compute trigger.
       *
       * @param request UpdateFCTriggerRequest
       * @return UpdateFCTriggerResponse
       */
      Models::UpdateFCTriggerResponse updateFCTrigger(const Models::UpdateFCTriggerRequest &request);

      /**
       * @summary Verifies the ownership of a specified domain name.
       *
       * @description > You can call this operation up to 100 times per second per account.
       *
       * @param request VerifyDomainOwnerRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return VerifyDomainOwnerResponse
       */
      Models::VerifyDomainOwnerResponse verifyDomainOwnerWithOptions(const Models::VerifyDomainOwnerRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Verifies the ownership of a specified domain name.
       *
       * @description > You can call this operation up to 100 times per second per account.
       *
       * @param request VerifyDomainOwnerRequest
       * @return VerifyDomainOwnerResponse
       */
      Models::VerifyDomainOwnerResponse verifyDomainOwner(const Models::VerifyDomainOwnerRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
