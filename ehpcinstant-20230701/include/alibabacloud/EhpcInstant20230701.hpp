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
       * @summary Add a custom image.
       *
       * @param tmpReq AddImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddImageResponse
       */
      Models::AddImageResponse addImageWithOptions(const Models::AddImageRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Add a custom image.
       *
       * @param request AddImageRequest
       * @return AddImageResponse
       */
      Models::AddImageResponse addImage(const Models::AddImageRequest &request);

      /**
       * @summary Create a E-HPC execution plan.
       *
       * @description **Make sure that you fully understand E-HPC Instnat billing methods and [prices](https://help.aliyun.com/zh/e-hpc/e-hpc-instant/product-overview/billing-overview?spm=a2c4g.11186623.help-menu-57664.d_0_2_0.5fdd28422y6UvO).
       *
       * @param tmpReq CreateActionPlanRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateActionPlanResponse
       */
      Models::CreateActionPlanResponse createActionPlanWithOptions(const Models::CreateActionPlanRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create a E-HPC execution plan.
       *
       * @description **Make sure that you fully understand E-HPC Instnat billing methods and [prices](https://help.aliyun.com/zh/e-hpc/e-hpc-instant/product-overview/billing-overview?spm=a2c4g.11186623.help-menu-57664.d_0_2_0.5fdd28422y6UvO).
       *
       * @param request CreateActionPlanRequest
       * @return CreateActionPlanResponse
       */
      Models::CreateActionPlanResponse createActionPlan(const Models::CreateActionPlanRequest &request);

      /**
       * @summary Create a E-HPC Instant job.
       *
       * @param tmpReq CreateJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateJobResponse
       */
      Models::CreateJobResponse createJobWithOptions(const Models::CreateJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Create a E-HPC Instant job.
       *
       * @param request CreateJobRequest
       * @return CreateJobResponse
       */
      Models::CreateJobResponse createJob(const Models::CreateJobRequest &request);

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
       * @summary Deletes one or more job records that are in the final state from a specified cluster.
       *
       * @param tmpReq DeleteJobRecordsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteJobRecordsResponse
       */
      Models::DeleteJobRecordsResponse deleteJobRecordsWithOptions(const Models::DeleteJobRecordsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes one or more job records that are in the final state from a specified cluster.
       *
       * @param request DeleteJobRecordsRequest
       * @return DeleteJobRecordsResponse
       */
      Models::DeleteJobRecordsResponse deleteJobRecords(const Models::DeleteJobRecordsRequest &request);

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
       * @summary You can execute this statement to delete a resource pool.
       *
       * @param request DeletePoolRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePoolResponse
       */
      Models::DeletePoolResponse deletePoolWithOptions(const Models::DeletePoolRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can execute this statement to delete a resource pool.
       *
       * @param request DeletePoolRequest
       * @return DeletePoolResponse
       */
      Models::DeletePoolResponse deletePool(const Models::DeletePoolRequest &request);

      /**
       * @summary You can query the monitoring time series dataset of a job by specifying the job array index and query metric parameters.
       *
       * @param tmpReq DescribeJobMetricDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeJobMetricDataResponse
       */
      Models::DescribeJobMetricDataResponse describeJobMetricDataWithOptions(const Models::DescribeJobMetricDataRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary You can query the monitoring time series dataset of a job by specifying the job array index and query metric parameters.
       *
       * @param request DescribeJobMetricDataRequest
       * @return DescribeJobMetricDataResponse
       */
      Models::DescribeJobMetricDataResponse describeJobMetricData(const Models::DescribeJobMetricDataRequest &request);

      /**
       * @summary Queries all instant monitoring metrics in the job array list by specifying a specific job array index list.
       *
       * @param tmpReq DescribeJobMetricLastRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeJobMetricLastResponse
       */
      Models::DescribeJobMetricLastResponse describeJobMetricLastWithOptions(const Models::DescribeJobMetricLastRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries all instant monitoring metrics in the job array list by specifying a specific job array index list.
       *
       * @param request DescribeJobMetricLastRequest
       * @return DescribeJobMetricLastResponse
       */
      Models::DescribeJobMetricLastResponse describeJobMetricLast(const Models::DescribeJobMetricLastRequest &request);

      /**
       * @summary Querying Execution Plan Details
       *
       * @param request GetActionPlanRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetActionPlanResponse
       */
      Models::GetActionPlanResponse getActionPlanWithOptions(const Models::GetActionPlanRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Querying Execution Plan Details
       *
       * @param request GetActionPlanRequest
       * @return GetActionPlanResponse
       */
      Models::GetActionPlanResponse getActionPlan(const Models::GetActionPlanRequest &request);

      /**
       * @summary Obtains the application version list.
       *
       * @param request GetAppVersionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAppVersionsResponse
       */
      Models::GetAppVersionsResponse getAppVersionsWithOptions(const Models::GetAppVersionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the application version list.
       *
       * @param request GetAppVersionsRequest
       * @return GetAppVersionsResponse
       */
      Models::GetAppVersionsResponse getAppVersions(const Models::GetAppVersionsRequest &request);

      /**
       * @summary Obtains the information about an image.
       *
       * @param tmpReq GetImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetImageResponse
       */
      Models::GetImageResponse getImageWithOptions(const Models::GetImageRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the information about an image.
       *
       * @param request GetImageRequest
       * @return GetImageResponse
       */
      Models::GetImageResponse getImage(const Models::GetImageRequest &request);

      /**
       * @summary Obtains the details of an execution job.
       *
       * @param request GetJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetJobResponse
       */
      Models::GetJobResponse getJobWithOptions(const Models::GetJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the details of an execution job.
       *
       * @param request GetJobRequest
       * @return GetJobResponse
       */
      Models::GetJobResponse getJob(const Models::GetJobRequest &request);

      /**
       * @summary Obtains the details of a resource pool.
       *
       * @param request GetPoolRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPoolResponse
       */
      Models::GetPoolResponse getPoolWithOptions(const Models::GetPoolRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Obtains the details of a resource pool.
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
       * @summary Querying Global Executor Information
       *
       * @param tmpReq ListExecutorsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListExecutorsResponse
       */
      Models::ListExecutorsResponse listExecutorsWithOptions(const Models::ListExecutorsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Querying Global Executor Information
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
       * @summary Queries job executor information.
       *
       * @description Queries job executor information.
       *
       * @param request ListJobExecutorsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListJobExecutorsResponse
       */
      Models::ListJobExecutorsResponse listJobExecutorsWithOptions(const Models::ListJobExecutorsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries job executor information.
       *
       * @description Queries job executor information.
       *
       * @param request ListJobExecutorsRequest
       * @return ListJobExecutorsResponse
       */
      Models::ListJobExecutorsResponse listJobExecutors(const Models::ListJobExecutorsRequest &request);

      /**
       * @summary Queries the jobs in a cluster.
       *
       * @param tmpReq ListJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListJobsResponse
       */
      Models::ListJobsResponse listJobsWithOptions(const Models::ListJobsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the jobs in a cluster.
       *
       * @param request ListJobsRequest
       * @return ListJobsResponse
       */
      Models::ListJobsResponse listJobs(const Models::ListJobsRequest &request);

      /**
       * @summary Queries the resource pool list.
       *
       * @param tmpReq ListPoolsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPoolsResponse
       */
      Models::ListPoolsResponse listPoolsWithOptions(const Models::ListPoolsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the resource pool list.
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
       * @summary Remove a custom image
       *
       * @param request RemoveImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveImageResponse
       */
      Models::RemoveImageResponse removeImageWithOptions(const Models::RemoveImageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Remove a custom image
       *
       * @param request RemoveImageRequest
       * @return RemoveImageResponse
       */
      Models::RemoveImageResponse removeImage(const Models::RemoveImageRequest &request);

      /**
       * @summary Application cross-region synchronization
       *
       * @param tmpReq SynchronizeAppRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SynchronizeAppResponse
       */
      Models::SynchronizeAppResponse synchronizeAppWithOptions(const Models::SynchronizeAppRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Application cross-region synchronization
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
       * @summary Unbind tags from Instant resource list. If the tag is not bound to other resources, the tag is automatically deleted.
       *
       * @param request UnTagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnTagResourcesResponse
       */
      Models::UnTagResourcesResponse unTagResourcesWithOptions(const Models::UnTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Unbind tags from Instant resource list. If the tag is not bound to other resources, the tag is automatically deleted.
       *
       * @param request UnTagResourcesRequest
       * @return UnTagResourcesResponse
       */
      Models::UnTagResourcesResponse unTagResources(const Models::UnTagResourcesRequest &request);

      /**
       * @summary Adjust the resource scale of the execution plan or modify the execution status
       *
       * @param request UpdateActionPlanRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateActionPlanResponse
       */
      Models::UpdateActionPlanResponse updateActionPlanWithOptions(const Models::UpdateActionPlanRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Adjust the resource scale of the execution plan or modify the execution status
       *
       * @param request UpdateActionPlanRequest
       * @return UpdateActionPlanResponse
       */
      Models::UpdateActionPlanResponse updateActionPlan(const Models::UpdateActionPlanRequest &request);

      /**
       * @summary Update the resource pool configuration.
       *
       * @param tmpReq UpdatePoolRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePoolResponse
       */
      Models::UpdatePoolResponse updatePoolWithOptions(const Models::UpdatePoolRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Update the resource pool configuration.
       *
       * @param request UpdatePoolRequest
       * @return UpdatePoolResponse
       */
      Models::UpdatePoolResponse updatePool(const Models::UpdatePoolRequest &request);
  };
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
