// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_EHPCINSTANT20230701_HPP_
#define ALIBABACLOUD_EHPCINSTANT20230701_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/EhpcInstant20230701Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/EhpcInstant20230701.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary Adds a custom image.
       *
       * @param tmpReq AddImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddImageResponse
       */
      Models::AddImageResponse addImageWithOptions(const Models::AddImageRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adds a custom image.
       *
       * @param request AddImageRequest
       * @return AddImageResponse
       */
      Models::AddImageResponse addImage(const Models::AddImageRequest &request);

      /**
       * @summary Creates an execution plan for Elastic High Performance Computing (E-HPC).
       *
       * @description **Make sure that you fully understand the billing methods and [pricing](https://www.alibabacloud.com/help/en/e-hpc/e-hpc-instant/product-overview/billing-overview) of E-HPC Instant before you call this operation.**
       *
       * @param tmpReq CreateActionPlanRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateActionPlanResponse
       */
      Models::CreateActionPlanResponse createActionPlanWithOptions(const Models::CreateActionPlanRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an execution plan for Elastic High Performance Computing (E-HPC).
       *
       * @description **Make sure that you fully understand the billing methods and [pricing](https://www.alibabacloud.com/help/en/e-hpc/e-hpc-instant/product-overview/billing-overview) of E-HPC Instant before you call this operation.**
       *
       * @param request CreateActionPlanRequest
       * @return CreateActionPlanResponse
       */
      Models::CreateActionPlanResponse createActionPlan(const Models::CreateActionPlanRequest &request);

      /**
       * @summary Creates an E-HPC Instant job.
       *
       * @param tmpReq CreateJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateJobResponse
       */
      Models::CreateJobResponse createJobWithOptions(const Models::CreateJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an E-HPC Instant job.
       *
       * @param request CreateJobRequest
       * @return CreateJobResponse
       */
      Models::CreateJobResponse createJob(const Models::CreateJobRequest &request);

      /**
       * @summary Creates a job template.
       *
       * @param tmpReq CreateJobTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateJobTemplateResponse
       */
      Models::CreateJobTemplateResponse createJobTemplateWithOptions(const Models::CreateJobTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a job template.
       *
       * @param request CreateJobTemplateRequest
       * @return CreateJobTemplateResponse
       */
      Models::CreateJobTemplateResponse createJobTemplate(const Models::CreateJobTemplateRequest &request);

      /**
       * @summary Creates a resource pool.
       *
       * @param tmpReq CreatePoolRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePoolResponse
       */
      Models::CreatePoolResponse createPoolWithOptions(const Models::CreatePoolRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a resource pool.
       *
       * @param request CreatePoolRequest
       * @return CreatePoolResponse
       */
      Models::CreatePoolResponse createPool(const Models::CreatePoolRequest &request);

      /**
       * @summary Delete an execution plan
       *
       * @description **Make sure that you fully understand E-HPC Instnat billing methods and [prices](https://help.aliyun.com/zh/e-hpc/e-hpc-instant/product-overview/billing-overview?spm=a2c4g.11186623.help-menu-57664.d_0_2_0.5fdd28422y6UvO).**
       * This operation stops all Instant jobs that are managed by ActionPlanId.
       *
       * @param request DeleteActionPlanRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteActionPlanResponse
       */
      Models::DeleteActionPlanResponse deleteActionPlanWithOptions(const Models::DeleteActionPlanRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Delete an execution plan
       *
       * @description **Make sure that you fully understand E-HPC Instnat billing methods and [prices](https://help.aliyun.com/zh/e-hpc/e-hpc-instant/product-overview/billing-overview?spm=a2c4g.11186623.help-menu-57664.d_0_2_0.5fdd28422y6UvO).**
       * This operation stops all Instant jobs that are managed by ActionPlanId.
       *
       * @param request DeleteActionPlanRequest
       * @return DeleteActionPlanResponse
       */
      Models::DeleteActionPlanResponse deleteActionPlan(const Models::DeleteActionPlanRequest &request);

      /**
       * @summary Deletes one or more job records in the desired state from a specified cluster.
       *
       * @param tmpReq DeleteJobRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteJobRecordsResponse
       */
      Models::DeleteJobRecordsResponse deleteJobRecordsWithOptions(const Models::DeleteJobRecordsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes one or more job records in the desired state from a specified cluster.
       *
       * @param request DeleteJobRecordsRequest
       * @return DeleteJobRecordsResponse
       */
      Models::DeleteJobRecordsResponse deleteJobRecords(const Models::DeleteJobRecordsRequest &request);

      /**
       * @summary Deletes a job template.
       *
       * @param request DeleteJobTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteJobTemplateResponse
       */
      Models::DeleteJobTemplateResponse deleteJobTemplateWithOptions(const Models::DeleteJobTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a job template.
       *
       * @param request DeleteJobTemplateRequest
       * @return DeleteJobTemplateResponse
       */
      Models::DeleteJobTemplateResponse deleteJobTemplate(const Models::DeleteJobTemplateRequest &request);

      /**
       * @summary Deletes one or more jobs from a specified cluster.
       *
       * @param tmpReq DeleteJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteJobsResponse
       */
      Models::DeleteJobsResponse deleteJobsWithOptions(const Models::DeleteJobsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes one or more jobs from a specified cluster.
       *
       * @param request DeleteJobsRequest
       * @return DeleteJobsResponse
       */
      Models::DeleteJobsResponse deleteJobs(const Models::DeleteJobsRequest &request);

      /**
       * @summary Deletes a resource pool.
       *
       * @param request DeletePoolRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePoolResponse
       */
      Models::DeletePoolResponse deletePoolWithOptions(const Models::DeletePoolRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a resource pool.
       *
       * @param request DeletePoolRequest
       * @return DeletePoolResponse
       */
      Models::DeletePoolResponse deletePool(const Models::DeletePoolRequest &request);

      /**
       * @summary Queries the monitoring time series dataset of a job by specifying the job array index and monitoring metric parameters.
       *
       * @param tmpReq DescribeJobMetricDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeJobMetricDataResponse
       */
      Models::DescribeJobMetricDataResponse describeJobMetricDataWithOptions(const Models::DescribeJobMetricDataRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the monitoring time series dataset of a job by specifying the job array index and monitoring metric parameters.
       *
       * @param request DescribeJobMetricDataRequest
       * @return DescribeJobMetricDataResponse
       */
      Models::DescribeJobMetricDataResponse describeJobMetricData(const Models::DescribeJobMetricDataRequest &request);

      /**
       * @summary Queries all real-time monitoring metrics for a job array by specifying a list of job array indexes.
       *
       * @param tmpReq DescribeJobMetricLastRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeJobMetricLastResponse
       */
      Models::DescribeJobMetricLastResponse describeJobMetricLastWithOptions(const Models::DescribeJobMetricLastRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all real-time monitoring metrics for a job array by specifying a list of job array indexes.
       *
       * @param request DescribeJobMetricLastRequest
       * @return DescribeJobMetricLastResponse
       */
      Models::DescribeJobMetricLastResponse describeJobMetricLast(const Models::DescribeJobMetricLastRequest &request);

      /**
       * @summary Queries job logs.
       *
       * @param request DescribeJobResultsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeJobResultsResponse
       */
      Models::DescribeJobResultsResponse describeJobResultsWithOptions(const Models::DescribeJobResultsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries job logs.
       *
       * @param request DescribeJobResultsRequest
       * @return DescribeJobResultsResponse
       */
      Models::DescribeJobResultsResponse describeJobResults(const Models::DescribeJobResultsRequest &request);

      /**
       * @summary Queries the details of an execution plan.
       *
       * @param request GetActionPlanRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetActionPlanResponse
       */
      Models::GetActionPlanResponse getActionPlanWithOptions(const Models::GetActionPlanRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of an execution plan.
       *
       * @param request GetActionPlanRequest
       * @return GetActionPlanResponse
       */
      Models::GetActionPlanResponse getActionPlan(const Models::GetActionPlanRequest &request);

      /**
       * @summary Retrieves a list of application versions.
       *
       * @param request GetAppVersionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAppVersionsResponse
       */
      Models::GetAppVersionsResponse getAppVersionsWithOptions(const Models::GetAppVersionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a list of application versions.
       *
       * @param request GetAppVersionsRequest
       * @return GetAppVersionsResponse
       */
      Models::GetAppVersionsResponse getAppVersions(const Models::GetAppVersionsRequest &request);

      /**
       * @summary Retrieves the details of an image.
       *
       * @param tmpReq GetImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetImageResponse
       */
      Models::GetImageResponse getImageWithOptions(const Models::GetImageRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of an image.
       *
       * @param request GetImageRequest
       * @return GetImageResponse
       */
      Models::GetImageResponse getImage(const Models::GetImageRequest &request);

      /**
       * @summary Retrieves the details of a job execution.
       *
       * @param request GetJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetJobResponse
       */
      Models::GetJobResponse getJobWithOptions(const Models::GetJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a job execution.
       *
       * @param request GetJobRequest
       * @return GetJobResponse
       */
      Models::GetJobResponse getJob(const Models::GetJobRequest &request);

      /**
       * @summary Retrieves the retention period of job records.
       *
       * @param request GetJobRecordDurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetJobRecordDurationResponse
       */
      Models::GetJobRecordDurationResponse getJobRecordDurationWithOptions(const Models::GetJobRecordDurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the retention period of job records.
       *
       * @param request GetJobRecordDurationRequest
       * @return GetJobRecordDurationResponse
       */
      Models::GetJobRecordDurationResponse getJobRecordDuration(const Models::GetJobRecordDurationRequest &request);

      /**
       * @summary Queries the details of a job template.
       *
       * @param request GetJobTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetJobTemplateResponse
       */
      Models::GetJobTemplateResponse getJobTemplateWithOptions(const Models::GetJobTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the details of a job template.
       *
       * @param request GetJobTemplateRequest
       * @return GetJobTemplateResponse
       */
      Models::GetJobTemplateResponse getJobTemplate(const Models::GetJobTemplateRequest &request);

      /**
       * @summary Retrieves the details of a resource pool.
       *
       * @param request GetPoolRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPoolResponse
       */
      Models::GetPoolResponse getPoolWithOptions(const Models::GetPoolRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the details of a resource pool.
       *
       * @param request GetPoolRequest
       * @return GetPoolResponse
       */
      Models::GetPoolResponse getPool(const Models::GetPoolRequest &request);

      /**
       * @summary Queries the execution status of an execution plan.
       *
       * @param request ListActionPlanActivitiesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListActionPlanActivitiesResponse
       */
      Models::ListActionPlanActivitiesResponse listActionPlanActivitiesWithOptions(const Models::ListActionPlanActivitiesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the execution status of an execution plan.
       *
       * @param request ListActionPlanActivitiesRequest
       * @return ListActionPlanActivitiesResponse
       */
      Models::ListActionPlanActivitiesResponse listActionPlanActivities(const Models::ListActionPlanActivitiesRequest &request);

      /**
       * @summary Queries the list of execution plans.
       *
       * @param tmpReq ListActionPlansRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListActionPlansResponse
       */
      Models::ListActionPlansResponse listActionPlansWithOptions(const Models::ListActionPlansRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of execution plans.
       *
       * @param request ListActionPlansRequest
       * @return ListActionPlansResponse
       */
      Models::ListActionPlansResponse listActionPlans(const Models::ListActionPlansRequest &request);

      /**
       * @summary Queries the runtime events of one or more executors.
       *
       * @description Queries the executor information of a job.
       *
       * @param tmpReq ListExecutorEventsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListExecutorEventsResponse
       */
      Models::ListExecutorEventsResponse listExecutorEventsWithOptions(const Models::ListExecutorEventsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the runtime events of one or more executors.
       *
       * @description Queries the executor information of a job.
       *
       * @param request ListExecutorEventsRequest
       * @return ListExecutorEventsResponse
       */
      Models::ListExecutorEventsResponse listExecutorEvents(const Models::ListExecutorEventsRequest &request);

      /**
       * @summary Queries global executor information.
       *
       * @param tmpReq ListExecutorsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListExecutorsResponse
       */
      Models::ListExecutorsResponse listExecutorsWithOptions(const Models::ListExecutorsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries global executor information.
       *
       * @param request ListExecutorsRequest
       * @return ListExecutorsResponse
       */
      Models::ListExecutorsResponse listExecutors(const Models::ListExecutorsRequest &request);

      /**
       * @summary Queries the image list.
       *
       * @param tmpReq ListImagesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListImagesResponse
       */
      Models::ListImagesResponse listImagesWithOptions(const Models::ListImagesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the image list.
       *
       * @param request ListImagesRequest
       * @return ListImagesResponse
       */
      Models::ListImagesResponse listImages(const Models::ListImagesRequest &request);

      /**
       * @summary Queries the executor information of a job.
       *
       * @description Queries the executor information of a job.
       *
       * @param request ListJobExecutorsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListJobExecutorsResponse
       */
      Models::ListJobExecutorsResponse listJobExecutorsWithOptions(const Models::ListJobExecutorsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the executor information of a job.
       *
       * @description Queries the executor information of a job.
       *
       * @param request ListJobExecutorsRequest
       * @return ListJobExecutorsResponse
       */
      Models::ListJobExecutorsResponse listJobExecutors(const Models::ListJobExecutorsRequest &request);

      /**
       * @summary Queries job templates.
       *
       * @param request ListJobTemplatesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListJobTemplatesResponse
       */
      Models::ListJobTemplatesResponse listJobTemplatesWithOptions(const Models::ListJobTemplatesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries job templates.
       *
       * @param request ListJobTemplatesRequest
       * @return ListJobTemplatesResponse
       */
      Models::ListJobTemplatesResponse listJobTemplates(const Models::ListJobTemplatesRequest &request);

      /**
       * @summary Queries a list of jobs.
       *
       * @param tmpReq ListJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListJobsResponse
       */
      Models::ListJobsResponse listJobsWithOptions(const Models::ListJobsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a list of jobs.
       *
       * @param request ListJobsRequest
       * @return ListJobsResponse
       */
      Models::ListJobsResponse listJobs(const Models::ListJobsRequest &request);

      /**
       * @summary Queries the list of resource pools.
       *
       * @param tmpReq ListPoolsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPoolsResponse
       */
      Models::ListPoolsResponse listPoolsWithOptions(const Models::ListPoolsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of resource pools.
       *
       * @param request ListPoolsRequest
       * @return ListPoolsResponse
       */
      Models::ListPoolsResponse listPools(const Models::ListPoolsRequest &request);

      /**
       * @summary Queries the tags that are bound to one or more Instant resources.
       *
       * @param request ListTagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the tags that are bound to one or more Instant resources.
       *
       * @param request ListTagResourcesRequest
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResources(const Models::ListTagResourcesRequest &request);

      /**
       * @summary Removes a custom image.
       *
       * @param request RemoveImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveImageResponse
       */
      Models::RemoveImageResponse removeImageWithOptions(const Models::RemoveImageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Removes a custom image.
       *
       * @param request RemoveImageRequest
       * @return RemoveImageResponse
       */
      Models::RemoveImageResponse removeImage(const Models::RemoveImageRequest &request);

      /**
       * @summary Synchronizes an application across regions.
       *
       * @param tmpReq SynchronizeAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SynchronizeAppResponse
       */
      Models::SynchronizeAppResponse synchronizeAppWithOptions(const Models::SynchronizeAppRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Synchronizes an application across regions.
       *
       * @param request SynchronizeAppRequest
       * @return SynchronizeAppResponse
       */
      Models::SynchronizeAppResponse synchronizeApp(const Models::SynchronizeAppRequest &request);

      /**
       * @summary Create and bind tags to Instant resource list
       *
       * @param request TagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create and bind tags to Instant resource list
       *
       * @param request TagResourcesRequest
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

      /**
       * @summary Unbinds tags from a list of Instant resources in a unified manner. After a tag is unbound, if it is not bound to any other resources, the tag is automatically deleted.
       *
       * @param request UnTagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnTagResourcesResponse
       */
      Models::UnTagResourcesResponse unTagResourcesWithOptions(const Models::UnTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unbinds tags from a list of Instant resources in a unified manner. After a tag is unbound, if it is not bound to any other resources, the tag is automatically deleted.
       *
       * @param request UnTagResourcesRequest
       * @return UnTagResourcesResponse
       */
      Models::UnTagResourcesResponse unTagResources(const Models::UnTagResourcesRequest &request);

      /**
       * @summary Modifies the resource scale or status of an execution plan.
       *
       * @param request UpdateActionPlanRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateActionPlanResponse
       */
      Models::UpdateActionPlanResponse updateActionPlanWithOptions(const Models::UpdateActionPlanRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Modifies the resource scale or status of an execution plan.
       *
       * @param request UpdateActionPlanRequest
       * @return UpdateActionPlanResponse
       */
      Models::UpdateActionPlanResponse updateActionPlan(const Models::UpdateActionPlanRequest &request);

      /**
       * @summary Updates the job retention period.
       *
       * @param request UpdateJobRecordDurationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateJobRecordDurationResponse
       */
      Models::UpdateJobRecordDurationResponse updateJobRecordDurationWithOptions(const Models::UpdateJobRecordDurationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the job retention period.
       *
       * @param request UpdateJobRecordDurationRequest
       * @return UpdateJobRecordDurationResponse
       */
      Models::UpdateJobRecordDurationResponse updateJobRecordDuration(const Models::UpdateJobRecordDurationRequest &request);

      /**
       * @summary Updates a job template.
       *
       * @param tmpReq UpdateJobTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateJobTemplateResponse
       */
      Models::UpdateJobTemplateResponse updateJobTemplateWithOptions(const Models::UpdateJobTemplateRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a job template.
       *
       * @param request UpdateJobTemplateRequest
       * @return UpdateJobTemplateResponse
       */
      Models::UpdateJobTemplateResponse updateJobTemplate(const Models::UpdateJobTemplateRequest &request);

      /**
       * @summary Updates the configuration of a resource pool.
       *
       * @param tmpReq UpdatePoolRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePoolResponse
       */
      Models::UpdatePoolResponse updatePoolWithOptions(const Models::UpdatePoolRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the configuration of a resource pool.
       *
       * @param request UpdatePoolRequest
       * @return UpdatePoolResponse
       */
      Models::UpdatePoolResponse updatePool(const Models::UpdatePoolRequest &request);
  };
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
