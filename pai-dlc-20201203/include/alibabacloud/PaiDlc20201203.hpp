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
       * @summary Creates a job that runs in a cluster. You can configure the data source, code source, startup command, and computing resources of each node on which a job runs.
       *
       * @description Before you call this operation, make sure that you understand the billing methods and [pricing](https://help.aliyun.com/document_detail/171758.html) of Deep Learning Containers (DLC) of Platform for AI (PAI).
       *
       * @param request CreateJobRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateJobResponse
       */
      Models::CreateJobResponse createJobWithOptions(const Models::CreateJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a job that runs in a cluster. You can configure the data source, code source, startup command, and computing resources of each node on which a job runs.
       *
       * @description Before you call this operation, make sure that you understand the billing methods and [pricing](https://help.aliyun.com/document_detail/171758.html) of Deep Learning Containers (DLC) of Platform for AI (PAI).
       *
       * @param request CreateJobRequest
       * @return CreateJobResponse
       */
      Models::CreateJobResponse createJob(const Models::CreateJobRequest &request);

      /**
       * @summary Creates a TensorBoard by using a job or specifying a data source configuration.
       *
       * @param request CreateTensorboardRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateTensorboardResponse
       */
      Models::CreateTensorboardResponse createTensorboardWithOptions(const Models::CreateTensorboardRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a TensorBoard by using a job or specifying a data source configuration.
       *
       * @param request CreateTensorboardRequest
       * @return CreateTensorboardResponse
       */
      Models::CreateTensorboardResponse createTensorboard(const Models::CreateTensorboardRequest &request);

      /**
       * @summary Deletes a completed or stopped job.
       *
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteJobResponse
       */
      Models::DeleteJobResponse deleteJobWithOptions(const string &JobId, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a completed or stopped job.
       *
       * @return DeleteJobResponse
       */
      Models::DeleteJobResponse deleteJob(const string &JobId);

      /**
       * @summary Deletes a stopped TensorBoard.
       *
       * @param request DeleteTensorboardRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteTensorboardResponse
       */
      Models::DeleteTensorboardResponse deleteTensorboardWithOptions(const string &TensorboardId, const Models::DeleteTensorboardRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a stopped TensorBoard.
       *
       * @param request DeleteTensorboardRequest
       * @return DeleteTensorboardResponse
       */
      Models::DeleteTensorboardResponse deleteTensorboard(const string &TensorboardId, const Models::DeleteTensorboardRequest &request);

      /**
       * @summary Gets the DLC task\\"s Dashboard URL, if one exists.
       *
       * @description Before you call this operation, make sure that you understand the billing methods and [pricing](https://help.aliyun.com/document_detail/171758.html) of Deep Learning Containers (DLC) of Platform for AI (PAI).
       *
       * @param request GetDashboardRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetDashboardResponse
       */
      Models::GetDashboardResponse getDashboardWithOptions(const string &jobId, const Models::GetDashboardRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Gets the DLC task\\"s Dashboard URL, if one exists.
       *
       * @description Before you call this operation, make sure that you understand the billing methods and [pricing](https://help.aliyun.com/document_detail/171758.html) of Deep Learning Containers (DLC) of Platform for AI (PAI).
       *
       * @param request GetDashboardRequest
       * @return GetDashboardResponse
       */
      Models::GetDashboardResponse getDashboard(const string &jobId, const Models::GetDashboardRequest &request);

      /**
       * @summary Obtains the configuration and runtime information of a job.
       *
       * @param request GetJobRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetJobResponse
       */
      Models::GetJobResponse getJobWithOptions(const string &JobId, const Models::GetJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the configuration and runtime information of a job.
       *
       * @param request GetJobRequest
       * @return GetJobResponse
       */
      Models::GetJobResponse getJob(const string &JobId, const Models::GetJobRequest &request);

      /**
       * @summary Obtains the system events of a job.
       *
       * @param request GetJobEventsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetJobEventsResponse
       */
      Models::GetJobEventsResponse getJobEventsWithOptions(const string &JobId, const Models::GetJobEventsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the system events of a job.
       *
       * @param request GetJobEventsRequest
       * @return GetJobEventsResponse
       */
      Models::GetJobEventsResponse getJobEvents(const string &JobId, const Models::GetJobEventsRequest &request);

      /**
       * @summary Obtains the monitoring data of a job, including the CPU, GPU, and memory utilization, network, and disk read/write rate.
       *
       * @param request GetJobMetricsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetJobMetricsResponse
       */
      Models::GetJobMetricsResponse getJobMetricsWithOptions(const string &JobId, const Models::GetJobMetricsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the monitoring data of a job, including the CPU, GPU, and memory utilization, network, and disk read/write rate.
       *
       * @param request GetJobMetricsRequest
       * @return GetJobMetricsResponse
       */
      Models::GetJobMetricsResponse getJobMetrics(const string &JobId, const Models::GetJobMetricsRequest &request);

      /**
       * @summary Obtains specified job sanity check result in a Deep Learning Containers (DLC) job.
       *
       * @param request GetJobSanityCheckResultRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetJobSanityCheckResultResponse
       */
      Models::GetJobSanityCheckResultResponse getJobSanityCheckResultWithOptions(const string &JobId, const Models::GetJobSanityCheckResultRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains specified job sanity check result in a Deep Learning Containers (DLC) job.
       *
       * @param request GetJobSanityCheckResultRequest
       * @return GetJobSanityCheckResultResponse
       */
      Models::GetJobSanityCheckResultResponse getJobSanityCheckResult(const string &JobId, const Models::GetJobSanityCheckResultRequest &request);

      /**
       * @summary Obtains the system events of a specific node in a job to locate and troubleshoot issues.
       *
       * @param request GetPodEventsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPodEventsResponse
       */
      Models::GetPodEventsResponse getPodEventsWithOptions(const string &JobId, const string &PodId, const Models::GetPodEventsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the system events of a specific node in a job to locate and troubleshoot issues.
       *
       * @param request GetPodEventsRequest
       * @return GetPodEventsResponse
       */
      Models::GetPodEventsResponse getPodEvents(const string &JobId, const string &PodId, const Models::GetPodEventsRequest &request);

      /**
       * @summary Obtains or downloads the logs of a node for a task. The logs are from the stdout and stderr of the system and user scripts.
       *
       * @param request GetPodLogsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPodLogsResponse
       */
      Models::GetPodLogsResponse getPodLogsWithOptions(const string &JobId, const string &PodId, const Models::GetPodLogsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains or downloads the logs of a node for a task. The logs are from the stdout and stderr of the system and user scripts.
       *
       * @param request GetPodLogsRequest
       * @return GetPodLogsResponse
       */
      Models::GetPodLogsResponse getPodLogs(const string &JobId, const string &PodId, const Models::GetPodLogsRequest &request);

      /**
       * @summary Obtains a Ray Dashboard URL.
       *
       * @description Before you call this operation, make sure that you understand the billing methods and [pricing](https://help.aliyun.com/document_detail/171758.html) of Deep Learning Containers (DLC) of Platform for AI (PAI).
       *
       * @param request GetRayDashboardRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRayDashboardResponse
       */
      Models::GetRayDashboardResponse getRayDashboardWithOptions(const string &jobId, const Models::GetRayDashboardRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains a Ray Dashboard URL.
       *
       * @description Before you call this operation, make sure that you understand the billing methods and [pricing](https://help.aliyun.com/document_detail/171758.html) of Deep Learning Containers (DLC) of Platform for AI (PAI).
       *
       * @param request GetRayDashboardRequest
       * @return GetRayDashboardResponse
       */
      Models::GetRayDashboardResponse getRayDashboard(const string &jobId, const Models::GetRayDashboardRequest &request);

      /**
       * @summary Queries the information of a TensorBoard instance.
       *
       * @param request GetTensorboardRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTensorboardResponse
       */
      Models::GetTensorboardResponse getTensorboardWithOptions(const string &TensorboardId, const Models::GetTensorboardRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the information of a TensorBoard instance.
       *
       * @param request GetTensorboardRequest
       * @return GetTensorboardResponse
       */
      Models::GetTensorboardResponse getTensorboard(const string &TensorboardId, const Models::GetTensorboardRequest &request);

      /**
       * @summary Obtains the shareable link of a TensorBoard task. The link contains digital tokens. You can use a shareable link to access a TensorBoard task.
       *
       * @param request GetTensorboardSharedUrlRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTensorboardSharedUrlResponse
       */
      Models::GetTensorboardSharedUrlResponse getTensorboardSharedUrlWithOptions(const string &TensorboardId, const Models::GetTensorboardSharedUrlRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the shareable link of a TensorBoard task. The link contains digital tokens. You can use a shareable link to access a TensorBoard task.
       *
       * @param request GetTensorboardSharedUrlRequest
       * @return GetTensorboardSharedUrlResponse
       */
      Models::GetTensorboardSharedUrlResponse getTensorboardSharedUrl(const string &TensorboardId, const Models::GetTensorboardSharedUrlRequest &request);

      /**
       * @summary Obtains the sharing token of a DLC job. This token is used to view the information about the shared job.
       *
       * @param request GetTokenRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetTokenResponse
       */
      Models::GetTokenResponse getTokenWithOptions(const Models::GetTokenRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the sharing token of a DLC job. This token is used to view the information about the shared job.
       *
       * @param request GetTokenRequest
       * @return GetTokenResponse
       */
      Models::GetTokenResponse getToken(const Models::GetTokenRequest &request);

      /**
       * @summary Provides methods and steps to obtain a HTTP link for accessing a container.
       *
       * @param request GetWebTerminalRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetWebTerminalResponse
       */
      Models::GetWebTerminalResponse getWebTerminalWithOptions(const string &JobId, const string &PodId, const Models::GetWebTerminalRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Provides methods and steps to obtain a HTTP link for accessing a container.
       *
       * @param request GetWebTerminalRequest
       * @return GetWebTerminalResponse
       */
      Models::GetWebTerminalResponse getWebTerminal(const string &JobId, const string &PodId, const Models::GetWebTerminalRequest &request);

      /**
       * @summary Queries the list of supported instance types.
       *
       * @param request ListEcsSpecsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListEcsSpecsResponse
       */
      Models::ListEcsSpecsResponse listEcsSpecsWithOptions(const Models::ListEcsSpecsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of supported instance types.
       *
       * @param request ListEcsSpecsRequest
       * @return ListEcsSpecsResponse
       */
      Models::ListEcsSpecsResponse listEcsSpecs(const Models::ListEcsSpecsRequest &request);

      /**
       * @summary Obtains the results of all sanity checks for a DLC job.
       *
       * @param request ListJobSanityCheckResultsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListJobSanityCheckResultsResponse
       */
      Models::ListJobSanityCheckResultsResponse listJobSanityCheckResultsWithOptions(const string &JobId, const Models::ListJobSanityCheckResultsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the results of all sanity checks for a DLC job.
       *
       * @param request ListJobSanityCheckResultsRequest
       * @return ListJobSanityCheckResultsResponse
       */
      Models::ListJobSanityCheckResultsResponse listJobSanityCheckResults(const string &JobId, const Models::ListJobSanityCheckResultsRequest &request);

      /**
       * @summary Queries a list of jobs and supports pagination, sorting, and filtering by conditions.
       *
       * @param tmpReq ListJobsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListJobsResponse
       */
      Models::ListJobsResponse listJobsWithOptions(const Models::ListJobsRequest &tmpReq, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of jobs and supports pagination, sorting, and filtering by conditions.
       *
       * @param request ListJobsRequest
       * @return ListJobsResponse
       */
      Models::ListJobsResponse listJobs(const Models::ListJobsRequest &request);

      /**
       * @summary Queries a list of TensorBoard instances.
       *
       * @param request ListTensorboardsRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTensorboardsResponse
       */
      Models::ListTensorboardsResponse listTensorboardsWithOptions(const Models::ListTensorboardsRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of TensorBoard instances.
       *
       * @param request ListTensorboardsRequest
       * @return ListTensorboardsResponse
       */
      Models::ListTensorboardsResponse listTensorboards(const Models::ListTensorboardsRequest &request);

      /**
       * @summary Starts a TensorBoard instance.
       *
       * @param request StartTensorboardRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return StartTensorboardResponse
       */
      Models::StartTensorboardResponse startTensorboardWithOptions(const string &TensorboardId, const Models::StartTensorboardRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Starts a TensorBoard instance.
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
       * @summary Stops a TensorBoard instance.
       *
       * @param request StopTensorboardRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return StopTensorboardResponse
       */
      Models::StopTensorboardResponse stopTensorboardWithOptions(const string &TensorboardId, const Models::StopTensorboardRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Stops a TensorBoard instance.
       *
       * @param request StopTensorboardRequest
       * @return StopTensorboardResponse
       */
      Models::StopTensorboardResponse stopTensorboard(const string &TensorboardId, const Models::StopTensorboardRequest &request);

      /**
       * @summary Updates the configuration information of a job. For example, you can modify the priority of a job in a queue.
       *
       * @param request UpdateJobRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateJobResponse
       */
      Models::UpdateJobResponse updateJobWithOptions(const string &JobId, const Models::UpdateJobRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the configuration information of a job. For example, you can modify the priority of a job in a queue.
       *
       * @param request UpdateJobRequest
       * @return UpdateJobResponse
       */
      Models::UpdateJobResponse updateJob(const string &JobId, const Models::UpdateJobRequest &request);

      /**
       * @summary Updates a TensorBoard instance.
       *
       * @param request UpdateTensorboardRequest
       * @param headers map
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateTensorboardResponse
       */
      Models::UpdateTensorboardResponse updateTensorboardWithOptions(const string &TensorboardId, const Models::UpdateTensorboardRequest &request, const map<string, string> &headers, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a TensorBoard instance.
       *
       * @param request UpdateTensorboardRequest
       * @return UpdateTensorboardResponse
       */
      Models::UpdateTensorboardResponse updateTensorboard(const string &TensorboardId, const Models::UpdateTensorboardRequest &request);
  };
} // namespace AlibabaCloud
} // namespace PaiDlc20201203
#endif
