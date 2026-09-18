// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_PAIDLC20201203_HPP_
#define ALIBABACLOUD_PAIDLC20201203_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/PaiDlc20201203Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/PaiDlc20201203.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiDlc20201203
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Creates a job and runs it in a cluster. You can specify information such as the data source configuration, code source configuration, startup command, and compute resource configuration for each node of the job.
       *
       * @description Before using this operation, make sure that you fully understand the billing methods and [pricing](https://help.aliyun.com/document_detail/171758.html) of PAI-DLC.
       * >Notice: The total length of CreateJob operation parameters (including system-generated parameters) cannot exceed 65,536 bytes.
       *
       * @param request CreateJobRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateJobResponse
       */
      Models::CreateJobResponse createJobWithOptions(const Models::CreateJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a job and runs it in a cluster. You can specify information such as the data source configuration, code source configuration, startup command, and compute resource configuration for each node of the job.
       *
       * @description Before using this operation, make sure that you fully understand the billing methods and [pricing](https://help.aliyun.com/document_detail/171758.html) of PAI-DLC.
       * >Notice: The total length of CreateJob operation parameters (including system-generated parameters) cannot exceed 65,536 bytes.
       *
       * @param request CreateJobRequest
       * @return CreateJobResponse
       */
      Models::CreateJobResponse createJob(const Models::CreateJobRequest &request);

      /**
       * @summary Creates a task template.
       *
       * @param request CreateJobTemplateRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateJobTemplateResponse
       */
      Models::CreateJobTemplateResponse createJobTemplateWithOptions(const Models::CreateJobTemplateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a task template.
       *
       * @param request CreateJobTemplateRequest
       * @return CreateJobTemplateResponse
       */
      Models::CreateJobTemplateResponse createJobTemplate(const Models::CreateJobTemplateRequest &request);

      /**
       * @summary Creates a RayHistoryServer.
       *
       * @description Make sure you understand the billing methods and [pricing](https://help.aliyun.com/document_detail/171758.html) of PAI-DLC before using this operation.
       * >Notice: The total length of the CreateJob operation parameters (including system-generated parameters) cannot exceed 65536 bytes.
       *
       * @param request CreateRayHistoryServerRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateRayHistoryServerResponse
       */
      Models::CreateRayHistoryServerResponse createRayHistoryServerWithOptions(const Models::CreateRayHistoryServerRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a RayHistoryServer.
       *
       * @description Make sure you understand the billing methods and [pricing](https://help.aliyun.com/document_detail/171758.html) of PAI-DLC before using this operation.
       * >Notice: The total length of the CreateJob operation parameters (including system-generated parameters) cannot exceed 65536 bytes.
       *
       * @param request CreateRayHistoryServerRequest
       * @return CreateRayHistoryServerResponse
       */
      Models::CreateRayHistoryServerResponse createRayHistoryServer(const Models::CreateRayHistoryServerRequest &request);

      /**
       * @summary Sends a signal to the pods of a specified job and retrieves the signal ID.
       *
       * @description ## Operation description
       * - This API operation sends a specific signal to one or more pods of a specified job.
       * - After the signal is sent, the API immediately returns a `SignalId`. The actual signal delivery is processed by a background worker.
       * - You can query the signal status by calling the `GetSignal` or `ListSignals` operation.
       *
       * @param request CreateSignalRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateSignalResponse
       */
      Models::CreateSignalResponse createSignalWithOptions(const string &JobId, const Models::CreateSignalRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sends a signal to the pods of a specified job and retrieves the signal ID.
       *
       * @description ## Operation description
       * - This API operation sends a specific signal to one or more pods of a specified job.
       * - After the signal is sent, the API immediately returns a `SignalId`. The actual signal delivery is processed by a background worker.
       * - You can query the signal status by calling the `GetSignal` or `ListSignals` operation.
       *
       * @param request CreateSignalRequest
       * @return CreateSignalResponse
       */
      Models::CreateSignalResponse createSignal(const string &JobId, const Models::CreateSignalRequest &request);

      /**
       * @summary Creates a TensorBoard instance. You can create a TensorBoard instance from a job or by specifying a datasource config.
       *
       * @param request CreateTensorboardRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTensorboardResponse
       */
      Models::CreateTensorboardResponse createTensorboardWithOptions(const Models::CreateTensorboardRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a TensorBoard instance. You can create a TensorBoard instance from a job or by specifying a datasource config.
       *
       * @param request CreateTensorboardRequest
       * @return CreateTensorboardResponse
       */
      Models::CreateTensorboardResponse createTensorboard(const Models::CreateTensorboardRequest &request);

      /**
       * @summary Deletes a job that has completed or been stopped.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteJobResponse
       */
      Models::DeleteJobResponse deleteJobWithOptions(const string &JobId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a job that has completed or been stopped.
       *
       * @return DeleteJobResponse
       */
      Models::DeleteJobResponse deleteJob(const string &JobId);

      /**
       * @summary Deletes an unused task template. If the template is already in use by a node, it cannot be deleted.
       *
       * @param request DeleteJobTemplateRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteJobTemplateResponse
       */
      Models::DeleteJobTemplateResponse deleteJobTemplateWithOptions(const string &TemplateId, const Models::DeleteJobTemplateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an unused task template. If the template is already in use by a node, it cannot be deleted.
       *
       * @param request DeleteJobTemplateRequest
       * @return DeleteJobTemplateResponse
       */
      Models::DeleteJobTemplateResponse deleteJobTemplate(const string &TemplateId, const Models::DeleteJobTemplateRequest &request);

      /**
       * @summary Deletes a Ray History Server.
       *
       * @description Before calling this API, ensure you understand the billing methods and [Pricing](https://help.aliyun.com/document_detail/171758.html) of PAI-DLC.
       *
       * @param request DeleteRayHistoryServerRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteRayHistoryServerResponse
       */
      Models::DeleteRayHistoryServerResponse deleteRayHistoryServerWithOptions(const string &RayHistoryServerId, const Models::DeleteRayHistoryServerRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a Ray History Server.
       *
       * @description Before calling this API, ensure you understand the billing methods and [Pricing](https://help.aliyun.com/document_detail/171758.html) of PAI-DLC.
       *
       * @param request DeleteRayHistoryServerRequest
       * @return DeleteRayHistoryServerResponse
       */
      Models::DeleteRayHistoryServerResponse deleteRayHistoryServer(const string &RayHistoryServerId, const Models::DeleteRayHistoryServerRequest &request);

      /**
       * @summary Deletes a stopped Tensorboard.
       *
       * @param request DeleteTensorboardRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTensorboardResponse
       */
      Models::DeleteTensorboardResponse deleteTensorboardWithOptions(const string &TensorboardId, const Models::DeleteTensorboardRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a stopped Tensorboard.
       *
       * @param request DeleteTensorboardRequest
       * @return DeleteTensorboardResponse
       */
      Models::DeleteTensorboardResponse deleteTensorboard(const string &TensorboardId, const Models::DeleteTensorboardRequest &request);

      /**
       * @summary Retrieves the dashboard URL of a DLC job, if available.
       *
       * @description Before using this operation, make sure that you fully understand the billing of PAI-DLC and its [pricing](https://help.aliyun.com/document_detail/171758.html).
       *
       * @param request GetDashboardRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDashboardResponse
       */
      Models::GetDashboardResponse getDashboardWithOptions(const string &jobId, const Models::GetDashboardRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the dashboard URL of a DLC job, if available.
       *
       * @description Before using this operation, make sure that you fully understand the billing of PAI-DLC and its [pricing](https://help.aliyun.com/document_detail/171758.html).
       *
       * @param request GetDashboardRequest
       * @return GetDashboardResponse
       */
      Models::GetDashboardResponse getDashboard(const string &jobId, const Models::GetDashboardRequest &request);

      /**
       * @summary Retrieves the detailed configuration and runtime information of a node.
       *
       * @param request GetJobRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetJobResponse
       */
      Models::GetJobResponse getJobWithOptions(const string &JobId, const Models::GetJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the detailed configuration and runtime information of a node.
       *
       * @param request GetJobRequest
       * @return GetJobResponse
       */
      Models::GetJobResponse getJob(const string &JobId, const Models::GetJobRequest &request);

      /**
       * @summary Retrieves system events for a job.
       *
       * @param request GetJobEventsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetJobEventsResponse
       */
      Models::GetJobEventsResponse getJobEventsWithOptions(const string &JobId, const Models::GetJobEventsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves system events for a job.
       *
       * @param request GetJobEventsRequest
       * @return GetJobEventsResponse
       */
      Models::GetJobEventsResponse getJobEvents(const string &JobId, const Models::GetJobEventsRequest &request);

      /**
       * @summary Retrieves monitoring data for a node, including CPU, GPU, and memory usage, as well as network and disk read/write rates.
       * ⚠️ Note: All node types except pay-as-you-go (postpaid) nodes based on general computing resources are integrated with CloudMonitor. Use CloudMonitor API operations for monitoring calls. Features already covered by the new API operations will no longer undergo maintenance in the original API operations. For more information, see [Training Monitoring and Alerts](https://www.alibabacloud.com/help/zh/pai/user-guide/training-monitoring-and-alerting).
       *
       * @param request GetJobMetricsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetJobMetricsResponse
       */
      Models::GetJobMetricsResponse getJobMetricsWithOptions(const string &JobId, const Models::GetJobMetricsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves monitoring data for a node, including CPU, GPU, and memory usage, as well as network and disk read/write rates.
       * ⚠️ Note: All node types except pay-as-you-go (postpaid) nodes based on general computing resources are integrated with CloudMonitor. Use CloudMonitor API operations for monitoring calls. Features already covered by the new API operations will no longer undergo maintenance in the original API operations. For more information, see [Training Monitoring and Alerts](https://www.alibabacloud.com/help/zh/pai/user-guide/training-monitoring-and-alerting).
       *
       * @param request GetJobMetricsRequest
       * @return GetJobMetricsResponse
       */
      Models::GetJobMetricsResponse getJobMetrics(const string &JobId, const Models::GetJobMetricsRequest &request);

      /**
       * @summary Retrieves the computing power health check result for a specific run of a DLC job.
       *
       * @param request GetJobSanityCheckResultRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetJobSanityCheckResultResponse
       */
      Models::GetJobSanityCheckResultResponse getJobSanityCheckResultWithOptions(const string &JobId, const Models::GetJobSanityCheckResultRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the computing power health check result for a specific run of a DLC job.
       *
       * @param request GetJobSanityCheckResultRequest
       * @return GetJobSanityCheckResultResponse
       */
      Models::GetJobSanityCheckResultResponse getJobSanityCheckResult(const string &JobId, const Models::GetJobSanityCheckResultRequest &request);

      /**
       * @summary Retrieves the details of a task template.
       *
       * @param request GetJobTemplateRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetJobTemplateResponse
       */
      Models::GetJobTemplateResponse getJobTemplateWithOptions(const string &TemplateId, const Models::GetJobTemplateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a task template.
       *
       * @param request GetJobTemplateRequest
       * @return GetJobTemplateResponse
       */
      Models::GetJobTemplateResponse getJobTemplate(const string &TemplateId, const Models::GetJobTemplateRequest &request);

      /**
       * @summary Retrieves metrics data.
       *
       * @description ## Operation description
       * - This operation queries monitoring metrics for a specific job (JobId) or dimension (Dimensions) under a specified namespace (Namespace).
       * - Custom query time ranges are supported. By default, data from the last hour is returned.
       * - You can select different time intervals (Period) to retrieve data points at a finer or coarser granularity.
       * - To retrieve large amounts of data with paging, use the `NextToken` parameter for paging operations.
       * - `MetricName` is required and specifies the name of the monitoring metric to query.
       * - For advanced features or specific types of monitoring metrics, refer to the relevant documentation for more information.
       *
       * @param request GetMetricsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMetricsResponse
       */
      Models::GetMetricsResponse getMetricsWithOptions(const Models::GetMetricsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves metrics data.
       *
       * @description ## Operation description
       * - This operation queries monitoring metrics for a specific job (JobId) or dimension (Dimensions) under a specified namespace (Namespace).
       * - Custom query time ranges are supported. By default, data from the last hour is returned.
       * - You can select different time intervals (Period) to retrieve data points at a finer or coarser granularity.
       * - To retrieve large amounts of data with paging, use the `NextToken` parameter for paging operations.
       * - `MetricName` is required and specifies the name of the monitoring metric to query.
       * - For advanced features or specific types of monitoring metrics, refer to the relevant documentation for more information.
       *
       * @param request GetMetricsRequest
       * @return GetMetricsResponse
       */
      Models::GetMetricsResponse getMetrics(const Models::GetMetricsRequest &request);

      /**
       * @summary Retrieves system events for a specific node in a job to locate and troubleshoot issues.
       *
       * @param request GetPodEventsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPodEventsResponse
       */
      Models::GetPodEventsResponse getPodEventsWithOptions(const string &JobId, const string &PodId, const Models::GetPodEventsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves system events for a specific node in a job to locate and troubleshoot issues.
       *
       * @param request GetPodEventsRequest
       * @return GetPodEventsResponse
       */
      Models::GetPodEventsResponse getPodEvents(const string &JobId, const string &PodId, const Models::GetPodEventsRequest &request);

      /**
       * @summary Retrieves or downloads the log of a specific node in a job. The log is collected from stdout and stderr of the system and user scripts.
       *
       * @param request GetPodLogsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPodLogsResponse
       */
      Models::GetPodLogsResponse getPodLogsWithOptions(const string &JobId, const string &PodId, const Models::GetPodLogsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves or downloads the log of a specific node in a job. The log is collected from stdout and stderr of the system and user scripts.
       *
       * @param request GetPodLogsRequest
       * @return GetPodLogsResponse
       */
      Models::GetPodLogsResponse getPodLogs(const string &JobId, const string &PodId, const Models::GetPodLogsRequest &request);

      /**
       * @summary Retrieves the Ray Dashboard URL.
       *
       * @description Before you use this operation, make sure that you fully understand the billing of PAI-DLC and its [pricing](https://help.aliyun.com/document_detail/171758.html).
       *
       * @param request GetRayDashboardRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRayDashboardResponse
       */
      Models::GetRayDashboardResponse getRayDashboardWithOptions(const string &jobId, const Models::GetRayDashboardRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the Ray Dashboard URL.
       *
       * @description Before you use this operation, make sure that you fully understand the billing of PAI-DLC and its [pricing](https://help.aliyun.com/document_detail/171758.html).
       *
       * @param request GetRayDashboardRequest
       * @return GetRayDashboardResponse
       */
      Models::GetRayDashboardResponse getRayDashboard(const string &jobId, const Models::GetRayDashboardRequest &request);

      /**
       * @summary Queries a RayHistoryServer.
       *
       * @description Before you use this operation, make sure that you are familiar with the billing of PAI-DLC and have read the [pricing](https://help.aliyun.com/document_detail/171758.html).
       * >Notice: The total length of the CreateJob operation parameters, including system-generated parameters, cannot exceed 65,536 bytes.
       *
       * @param request GetRayHistoryServerRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRayHistoryServerResponse
       */
      Models::GetRayHistoryServerResponse getRayHistoryServerWithOptions(const string &RayHistoryServerId, const Models::GetRayHistoryServerRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a RayHistoryServer.
       *
       * @description Before you use this operation, make sure that you are familiar with the billing of PAI-DLC and have read the [pricing](https://help.aliyun.com/document_detail/171758.html).
       * >Notice: The total length of the CreateJob operation parameters, including system-generated parameters, cannot exceed 65,536 bytes.
       *
       * @param request GetRayHistoryServerRequest
       * @return GetRayHistoryServerResponse
       */
      Models::GetRayHistoryServerResponse getRayHistoryServer(const string &RayHistoryServerId, const Models::GetRayHistoryServerRequest &request);

      /**
       * @summary Queries the details of a specific signal in a specified job.
       *
       * @description ## Operation description
       * You can call this operation to retrieve the details of a signal that corresponds to a specified `JobId` and `SignalId`, including the signal status and delivery scope. Note that the response no longer contains the raw result structure for each pod. Instead, the `Status`, `Reason`, and `Message` fields describe the overall signal processing result.
       *
       * @param request GetSignalRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetSignalResponse
       */
      Models::GetSignalResponse getSignalWithOptions(const string &JobId, const string &SignalId, const Models::GetSignalRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a specific signal in a specified job.
       *
       * @description ## Operation description
       * You can call this operation to retrieve the details of a signal that corresponds to a specified `JobId` and `SignalId`, including the signal status and delivery scope. Note that the response no longer contains the raw result structure for each pod. Instead, the `Status`, `Reason`, and `Message` fields describe the overall signal processing result.
       *
       * @param request GetSignalRequest
       * @return GetSignalResponse
       */
      Models::GetSignalResponse getSignal(const string &JobId, const string &SignalId, const Models::GetSignalRequest &request);

      /**
       * @summary Retrieves the details of a Tensorboard.
       *
       * @param request GetTensorboardRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTensorboardResponse
       */
      Models::GetTensorboardResponse getTensorboardWithOptions(const string &TensorboardId, const Models::GetTensorboardRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a Tensorboard.
       *
       * @param request GetTensorboardRequest
       * @return GetTensorboardResponse
       */
      Models::GetTensorboardResponse getTensorboard(const string &TensorboardId, const Models::GetTensorboardRequest &request);

      /**
       * @summary Retrieves the sharing link for a TensorBoard task. The link contains a digital token. You can use the sharing link to access the shared TensorBoard task.
       *
       * @param request GetTensorboardSharedUrlRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTensorboardSharedUrlResponse
       */
      Models::GetTensorboardSharedUrlResponse getTensorboardSharedUrlWithOptions(const string &TensorboardId, const Models::GetTensorboardSharedUrlRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the sharing link for a TensorBoard task. The link contains a digital token. You can use the sharing link to access the shared TensorBoard task.
       *
       * @param request GetTensorboardSharedUrlRequest
       * @return GetTensorboardSharedUrlResponse
       */
      Models::GetTensorboardSharedUrlResponse getTensorboardSharedUrl(const string &TensorboardId, const Models::GetTensorboardSharedUrlRequest &request);

      /**
       * @summary Retrieves a sharing token for a DLC job, which is used to view information about the shared task.
       *
       * @param request GetTokenRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTokenResponse
       */
      Models::GetTokenResponse getTokenWithOptions(const Models::GetTokenRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a sharing token for a DLC job, which is used to view information about the shared task.
       *
       * @param request GetTokenRequest
       * @return GetTokenResponse
       */
      Models::GetTokenResponse getToken(const Models::GetTokenRequest &request);

      /**
       * @summary Provides the method and steps to obtain an HTTP link for accessing a container.
       *
       * @param request GetWebTerminalRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetWebTerminalResponse
       */
      Models::GetWebTerminalResponse getWebTerminalWithOptions(const string &JobId, const string &PodId, const Models::GetWebTerminalRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Provides the method and steps to obtain an HTTP link for accessing a container.
       *
       * @param request GetWebTerminalRequest
       * @return GetWebTerminalResponse
       */
      Models::GetWebTerminalResponse getWebTerminal(const string &JobId, const string &PodId, const Models::GetWebTerminalRequest &request);

      /**
       * @summary Queries the list of currently supported machine resource configurations.
       *
       * @param request ListEcsSpecsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListEcsSpecsResponse
       */
      Models::ListEcsSpecsResponse listEcsSpecsWithOptions(const Models::ListEcsSpecsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of currently supported machine resource configurations.
       *
       * @param request ListEcsSpecsRequest
       * @return ListEcsSpecsResponse
       */
      Models::ListEcsSpecsResponse listEcsSpecs(const Models::ListEcsSpecsRequest &request);

      /**
       * @summary Retrieves all computing power health check results for a specific DLC job.
       *
       * @param request ListJobSanityCheckResultsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListJobSanityCheckResultsResponse
       */
      Models::ListJobSanityCheckResultsResponse listJobSanityCheckResultsWithOptions(const string &JobId, const Models::ListJobSanityCheckResultsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves all computing power health check results for a specific DLC job.
       *
       * @param request ListJobSanityCheckResultsRequest
       * @return ListJobSanityCheckResultsResponse
       */
      Models::ListJobSanityCheckResultsResponse listJobSanityCheckResults(const string &JobId, const Models::ListJobSanityCheckResultsRequest &request);

      /**
       * @summary Lists task templates by workspace with support for pagination and sorting. You can filter results by creator, TemplateId, or TemplateName.
       *
       * @param request ListJobTemplatesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListJobTemplatesResponse
       */
      Models::ListJobTemplatesResponse listJobTemplatesWithOptions(const Models::ListJobTemplatesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists task templates by workspace with support for pagination and sorting. You can filter results by creator, TemplateId, or TemplateName.
       *
       * @param request ListJobTemplatesRequest
       * @return ListJobTemplatesResponse
       */
      Models::ListJobTemplatesResponse listJobTemplates(const Models::ListJobTemplatesRequest &request);

      /**
       * @summary Retrieves a list of jobs with support for pagination, sorting, and conditional filtering.
       *
       * @param tmpReq ListJobsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListJobsResponse
       */
      Models::ListJobsResponse listJobsWithOptions(const Models::ListJobsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of jobs with support for pagination, sorting, and conditional filtering.
       *
       * @param request ListJobsRequest
       * @return ListJobsResponse
       */
      Models::ListJobsResponse listJobs(const Models::ListJobsRequest &request);

      /**
       * @summary Lists RayHistoryServer resources.
       *
       * @description Before using this operation, make sure you understand the billing methods and [pricing](https://help.aliyun.com/document_detail/171758.html) of PAI-DLC.
       * >Notice: The total length of parameters for the CreateJob operation (including system-generated parameters) cannot exceed 65536 bytes.
       *
       * @param request ListRayHistoryServersRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListRayHistoryServersResponse
       */
      Models::ListRayHistoryServersResponse listRayHistoryServersWithOptions(const Models::ListRayHistoryServersRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Lists RayHistoryServer resources.
       *
       * @description Before using this operation, make sure you understand the billing methods and [pricing](https://help.aliyun.com/document_detail/171758.html) of PAI-DLC.
       * >Notice: The total length of parameters for the CreateJob operation (including system-generated parameters) cannot exceed 65536 bytes.
       *
       * @param request ListRayHistoryServersRequest
       * @return ListRayHistoryServersResponse
       */
      Models::ListRayHistoryServersResponse listRayHistoryServers(const Models::ListRayHistoryServersRequest &request);

      /**
       * @summary Queries all signal records of a specified job.
       *
       * @description ## Operation description
       * You can call this operation to retrieve the details of all signal records for a specific job, including the signal ID, status, and creation time. You can use query parameters to further filter or sort the results.
       *
       * @param request ListSignalsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListSignalsResponse
       */
      Models::ListSignalsResponse listSignalsWithOptions(const string &JobId, const Models::ListSignalsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all signal records of a specified job.
       *
       * @description ## Operation description
       * You can call this operation to retrieve the details of all signal records for a specific job, including the signal ID, status, and creation time. You can use query parameters to further filter or sort the results.
       *
       * @param request ListSignalsRequest
       * @return ListSignalsResponse
       */
      Models::ListSignalsResponse listSignals(const string &JobId, const Models::ListSignalsRequest &request);

      /**
       * @summary Queries a list of created Tensorboard instances.
       *
       * @param request ListTensorboardsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTensorboardsResponse
       */
      Models::ListTensorboardsResponse listTensorboardsWithOptions(const Models::ListTensorboardsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of created Tensorboard instances.
       *
       * @param request ListTensorboardsRequest
       * @return ListTensorboardsResponse
       */
      Models::ListTensorboardsResponse listTensorboards(const Models::ListTensorboardsRequest &request);

      /**
       * @summary Sets the default version of a job template.
       *
       * @param request SetJobTemplateDefaultVersionRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return SetJobTemplateDefaultVersionResponse
       */
      Models::SetJobTemplateDefaultVersionResponse setJobTemplateDefaultVersionWithOptions(const string &TemplateId, const Models::SetJobTemplateDefaultVersionRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Sets the default version of a job template.
       *
       * @param request SetJobTemplateDefaultVersionRequest
       * @return SetJobTemplateDefaultVersionResponse
       */
      Models::SetJobTemplateDefaultVersionResponse setJobTemplateDefaultVersion(const string &TemplateId, const Models::SetJobTemplateDefaultVersionRequest &request);

      /**
       * @summary Starts a Ray History Server.
       *
       * @description Before using this operation, make sure that you fully understand the billing method and [pricing](https://help.aliyun.com/document_detail/171758.html) of PAI-DLC.
       * >Notice: The total length of the CreateJob operation parameters, including system-generated parameters, cannot exceed 65,536 bytes.
       *
       * @param request StartRayHistoryServerRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartRayHistoryServerResponse
       */
      Models::StartRayHistoryServerResponse startRayHistoryServerWithOptions(const string &RayHistoryServerId, const Models::StartRayHistoryServerRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts a Ray History Server.
       *
       * @description Before using this operation, make sure that you fully understand the billing method and [pricing](https://help.aliyun.com/document_detail/171758.html) of PAI-DLC.
       * >Notice: The total length of the CreateJob operation parameters, including system-generated parameters, cannot exceed 65,536 bytes.
       *
       * @param request StartRayHistoryServerRequest
       * @return StartRayHistoryServerResponse
       */
      Models::StartRayHistoryServerResponse startRayHistoryServer(const string &RayHistoryServerId, const Models::StartRayHistoryServerRequest &request);

      /**
       * @summary Starts a Tensorboard.
       *
       * @param request StartTensorboardRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartTensorboardResponse
       */
      Models::StartTensorboardResponse startTensorboardWithOptions(const string &TensorboardId, const Models::StartTensorboardRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts a Tensorboard.
       *
       * @param request StartTensorboardRequest
       * @return StartTensorboardResponse
       */
      Models::StartTensorboardResponse startTensorboard(const string &TensorboardId, const Models::StartTensorboardRequest &request);

      /**
       * @summary Stops a running job.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopJobResponse
       */
      Models::StopJobResponse stopJobWithOptions(const string &JobId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops a running job.
       *
       * @return StopJobResponse
       */
      Models::StopJobResponse stopJob(const string &JobId);

      /**
       * @summary Stops a Ray History Server.
       *
       * @description Before calling this operation, ensure you understand the billing methods and [pricing](https://help.aliyun.com/document_detail/171758.html) for PAI-DLC.>Notice: The total length of the parameters for the CreateJob interface, including system-generated parameters, cannot exceed 65,536 bytes.
       *
       * @param request StopRayHistoryServerRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopRayHistoryServerResponse
       */
      Models::StopRayHistoryServerResponse stopRayHistoryServerWithOptions(const string &RayHistoryServerId, const Models::StopRayHistoryServerRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops a Ray History Server.
       *
       * @description Before calling this operation, ensure you understand the billing methods and [pricing](https://help.aliyun.com/document_detail/171758.html) for PAI-DLC.>Notice: The total length of the parameters for the CreateJob interface, including system-generated parameters, cannot exceed 65,536 bytes.
       *
       * @param request StopRayHistoryServerRequest
       * @return StopRayHistoryServerResponse
       */
      Models::StopRayHistoryServerResponse stopRayHistoryServer(const string &RayHistoryServerId, const Models::StopRayHistoryServerRequest &request);

      /**
       * @summary Stops a TensorBoard.
       *
       * @param request StopTensorboardRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopTensorboardResponse
       */
      Models::StopTensorboardResponse stopTensorboardWithOptions(const string &TensorboardId, const Models::StopTensorboardRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops a TensorBoard.
       *
       * @param request StopTensorboardRequest
       * @return StopTensorboardResponse
       */
      Models::StopTensorboardResponse stopTensorboard(const string &TensorboardId, const Models::StopTensorboardRequest &request);

      /**
       * @summary Creates and attaches tags to specified resources.
       *
       * @description Before attaching tags, Alibaba Cloud checks the number of existing tags on the resource. If the limit is exceeded, an error message is returned.
       *
       * @param request TagResourcesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates and attaches tags to specified resources.
       *
       * @description Before attaching tags, Alibaba Cloud checks the number of existing tags on the resource. If the limit is exceeded, an error message is returned.
       *
       * @param request TagResourcesRequest
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

      /**
       * @summary Unbinds tags from a specified list of resources.
       *
       * @param tmpReq UntagResourcesRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResourcesWithOptions(const Models::UntagResourcesRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unbinds tags from a specified list of resources.
       *
       * @param request UntagResourcesRequest
       * @return UntagResourcesResponse
       */
      Models::UntagResourcesResponse untagResources(const Models::UntagResourcesRequest &request);

      /**
       * @summary Updates the configuration of a job, such as modifying the priority of a queued job.
       *
       * @param request UpdateJobRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateJobResponse
       */
      Models::UpdateJobResponse updateJobWithOptions(const string &JobId, const Models::UpdateJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the configuration of a job, such as modifying the priority of a queued job.
       *
       * @param request UpdateJobRequest
       * @return UpdateJobResponse
       */
      Models::UpdateJobResponse updateJob(const string &JobId, const Models::UpdateJobRequest &request);

      /**
       * @summary Updates a task template.
       *
       * @param request UpdateJobTemplateRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateJobTemplateResponse
       */
      Models::UpdateJobTemplateResponse updateJobTemplateWithOptions(const string &TemplateId, const Models::UpdateJobTemplateRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a task template.
       *
       * @param request UpdateJobTemplateRequest
       * @return UpdateJobTemplateResponse
       */
      Models::UpdateJobTemplateResponse updateJobTemplate(const string &TemplateId, const Models::UpdateJobTemplateRequest &request);

      /**
       * @summary Update a Tensorboard.
       *
       * @param request UpdateTensorboardRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTensorboardResponse
       */
      Models::UpdateTensorboardResponse updateTensorboardWithOptions(const string &TensorboardId, const Models::UpdateTensorboardRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update a Tensorboard.
       *
       * @param request UpdateTensorboardRequest
       * @return UpdateTensorboardResponse
       */
      Models::UpdateTensorboardResponse updateTensorboard(const string &TensorboardId, const Models::UpdateTensorboardRequest &request);
  };
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
