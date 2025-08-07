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
       * @summary 添加托管侧用户自定义镜像
       *
       * @param tmpReq AddImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddImageResponse
       */
      Models::AddImageResponse addImageWithOptions(const Models::AddImageRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 添加托管侧用户自定义镜像
       *
       * @param request AddImageRequest
       * @return AddImageResponse
       */
      Models::AddImageResponse addImage(const Models::AddImageRequest &request);

      /**
       * @summary 提交任务
       *
       * @param tmpReq CreateJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateJobResponse
       */
      Models::CreateJobResponse createJobWithOptions(const Models::CreateJobRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 提交任务
       *
       * @param request CreateJobRequest
       * @return CreateJobResponse
       */
      Models::CreateJobResponse createJob(const Models::CreateJobRequest &request);

      /**
       * @summary 创建资源池
       *
       * @param tmpReq CreatePoolRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreatePoolResponse
       */
      Models::CreatePoolResponse createPoolWithOptions(const Models::CreatePoolRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建资源池
       *
       * @param request CreatePoolRequest
       * @return CreatePoolResponse
       */
      Models::CreatePoolResponse createPool(const Models::CreatePoolRequest &request);

      /**
       * @summary 删除作业
       *
       * @param tmpReq DeleteJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteJobsResponse
       */
      Models::DeleteJobsResponse deleteJobsWithOptions(const Models::DeleteJobsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除作业
       *
       * @param request DeleteJobsRequest
       * @return DeleteJobsResponse
       */
      Models::DeleteJobsResponse deleteJobs(const Models::DeleteJobsRequest &request);

      /**
       * @summary 删除资源池
       *
       * @param request DeletePoolRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeletePoolResponse
       */
      Models::DeletePoolResponse deletePoolWithOptions(const Models::DeletePoolRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除资源池
       *
       * @param request DeletePoolRequest
       * @return DeletePoolResponse
       */
      Models::DeletePoolResponse deletePool(const Models::DeletePoolRequest &request);

      /**
       * @summary 查询作业性能数据
       *
       * @param tmpReq DescribeJobMetricDataRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeJobMetricDataResponse
       */
      Models::DescribeJobMetricDataResponse describeJobMetricDataWithOptions(const Models::DescribeJobMetricDataRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询作业性能数据
       *
       * @param request DescribeJobMetricDataRequest
       * @return DescribeJobMetricDataResponse
       */
      Models::DescribeJobMetricDataResponse describeJobMetricData(const Models::DescribeJobMetricDataRequest &request);

      /**
       * @summary 查询作业即时监控项
       *
       * @param tmpReq DescribeJobMetricLastRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DescribeJobMetricLastResponse
       */
      Models::DescribeJobMetricLastResponse describeJobMetricLastWithOptions(const Models::DescribeJobMetricLastRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询作业即时监控项
       *
       * @param request DescribeJobMetricLastRequest
       * @return DescribeJobMetricLastResponse
       */
      Models::DescribeJobMetricLastResponse describeJobMetricLast(const Models::DescribeJobMetricLastRequest &request);

      /**
       * @summary 查看应用版本列表
       *
       * @param request GetAppVersionsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAppVersionsResponse
       */
      Models::GetAppVersionsResponse getAppVersionsWithOptions(const Models::GetAppVersionsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查看应用版本列表
       *
       * @param request GetAppVersionsRequest
       * @return GetAppVersionsResponse
       */
      Models::GetAppVersionsResponse getAppVersions(const Models::GetAppVersionsRequest &request);

      /**
       * @summary 查询托管侧镜像详情。
       *
       * @param tmpReq GetImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetImageResponse
       */
      Models::GetImageResponse getImageWithOptions(const Models::GetImageRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询托管侧镜像详情。
       *
       * @param request GetImageRequest
       * @return GetImageResponse
       */
      Models::GetImageResponse getImage(const Models::GetImageRequest &request);

      /**
       * @summary 查询作业详情
       *
       * @param request GetJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetJobResponse
       */
      Models::GetJobResponse getJobWithOptions(const Models::GetJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询作业详情
       *
       * @param request GetJobRequest
       * @return GetJobResponse
       */
      Models::GetJobResponse getJob(const Models::GetJobRequest &request);

      /**
       * @summary 查询队列详细信息
       *
       * @param request GetPoolRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetPoolResponse
       */
      Models::GetPoolResponse getPoolWithOptions(const Models::GetPoolRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询队列详细信息
       *
       * @param request GetPoolRequest
       * @return GetPoolResponse
       */
      Models::GetPoolResponse getPool(const Models::GetPoolRequest &request);

      /**
       * @summary 查询全局Executor信息
       *
       * @param tmpReq ListExecutorsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListExecutorsResponse
       */
      Models::ListExecutorsResponse listExecutorsWithOptions(const Models::ListExecutorsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询全局Executor信息
       *
       * @param request ListExecutorsRequest
       * @return ListExecutorsResponse
       */
      Models::ListExecutorsResponse listExecutors(const Models::ListExecutorsRequest &request);

      /**
       * @summary 查看托管侧镜像列表
       *
       * @param tmpReq ListImagesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListImagesResponse
       */
      Models::ListImagesResponse listImagesWithOptions(const Models::ListImagesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查看托管侧镜像列表
       *
       * @param request ListImagesRequest
       * @return ListImagesResponse
       */
      Models::ListImagesResponse listImages(const Models::ListImagesRequest &request);

      /**
       * @summary 查询作业Executor信息
       *
       * @param request ListJobExecutorsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListJobExecutorsResponse
       */
      Models::ListJobExecutorsResponse listJobExecutorsWithOptions(const Models::ListJobExecutorsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询作业Executor信息
       *
       * @param request ListJobExecutorsRequest
       * @return ListJobExecutorsResponse
       */
      Models::ListJobExecutorsResponse listJobExecutors(const Models::ListJobExecutorsRequest &request);

      /**
       * @summary 查询作业列表
       *
       * @param tmpReq ListJobsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListJobsResponse
       */
      Models::ListJobsResponse listJobsWithOptions(const Models::ListJobsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询作业列表
       *
       * @param request ListJobsRequest
       * @return ListJobsResponse
       */
      Models::ListJobsResponse listJobs(const Models::ListJobsRequest &request);

      /**
       * @summary 查询资源池列表
       *
       * @param tmpReq ListPoolsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListPoolsResponse
       */
      Models::ListPoolsResponse listPoolsWithOptions(const Models::ListPoolsRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询资源池列表
       *
       * @param request ListPoolsRequest
       * @return ListPoolsResponse
       */
      Models::ListPoolsResponse listPools(const Models::ListPoolsRequest &request);

      /**
       * @summary 查询一个或多个资源已经绑定的标签列表
       *
       * @param request ListTagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResourcesWithOptions(const Models::ListTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询一个或多个资源已经绑定的标签列表
       *
       * @param request ListTagResourcesRequest
       * @return ListTagResourcesResponse
       */
      Models::ListTagResourcesResponse listTagResources(const Models::ListTagResourcesRequest &request);

      /**
       * @summary 移除托管侧镜像信息。
       *
       * @param request RemoveImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveImageResponse
       */
      Models::RemoveImageResponse removeImageWithOptions(const Models::RemoveImageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 移除托管侧镜像信息。
       *
       * @param request RemoveImageRequest
       * @return RemoveImageResponse
       */
      Models::RemoveImageResponse removeImage(const Models::RemoveImageRequest &request);

      /**
       * @summary 为指定的资源列表统一创建并绑定标签
       *
       * @param request TagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResourcesWithOptions(const Models::TagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 为指定的资源列表统一创建并绑定标签
       *
       * @param request TagResourcesRequest
       * @return TagResourcesResponse
       */
      Models::TagResourcesResponse tagResources(const Models::TagResourcesRequest &request);

      /**
       * @summary 为指定的ECS资源列表统一解绑标签
       *
       * @param request UnTagResourcesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UnTagResourcesResponse
       */
      Models::UnTagResourcesResponse unTagResourcesWithOptions(const Models::UnTagResourcesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 为指定的ECS资源列表统一解绑标签
       *
       * @param request UnTagResourcesRequest
       * @return UnTagResourcesResponse
       */
      Models::UnTagResourcesResponse unTagResources(const Models::UnTagResourcesRequest &request);

      /**
       * @summary 更新资源池
       *
       * @param tmpReq UpdatePoolRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdatePoolResponse
       */
      Models::UpdatePoolResponse updatePoolWithOptions(const Models::UpdatePoolRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新资源池
       *
       * @param request UpdatePoolRequest
       * @return UpdatePoolResponse
       */
      Models::UpdatePoolResponse updatePool(const Models::UpdatePoolRequest &request);
  };
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
