// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_YIKE20260707_HPP_
#define ALIBABACLOUD_YIKE20260707_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Yike20260707Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Yike20260707.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Yike20260707
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @summary 批量获取媒资信息
       *
       * @description ## 请求说明
       * 该API用于查询媒资内容理解作业。
       *
       * @param request BatchGetMediasRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchGetMediasResponse
       */
      Models::BatchGetMediasResponse batchGetMediasWithOptions(const Models::BatchGetMediasRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量获取媒资信息
       *
       * @description ## 请求说明
       * 该API用于查询媒资内容理解作业。
       *
       * @param request BatchGetMediasRequest
       * @return BatchGetMediasResponse
       */
      Models::BatchGetMediasResponse batchGetMedias(const Models::BatchGetMediasRequest &request);

      /**
       * @summary 创建分类
       *
       * @description 分类最多支持三级分类，每级分类最多支持创建 100 个子分类。
       *
       * @param request CreateAssetCategoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAssetCategoryResponse
       */
      Models::CreateAssetCategoryResponse createAssetCategoryWithOptions(const Models::CreateAssetCategoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 创建分类
       *
       * @description 分类最多支持三级分类，每级分类最多支持创建 100 个子分类。
       *
       * @param request CreateAssetCategoryRequest
       * @return CreateAssetCategoryResponse
       */
      Models::CreateAssetCategoryResponse createAssetCategory(const Models::CreateAssetCategoryRequest &request);

      /**
       * @summary 删除分类
       *
       * @description 此接口会同时删除其子分类（包括二级分类和三级分类），请慎重操作。
       *
       * @param request DeleteAssetCategoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAssetCategoryResponse
       */
      Models::DeleteAssetCategoryResponse deleteAssetCategoryWithOptions(const Models::DeleteAssetCategoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除分类
       *
       * @description 此接口会同时删除其子分类（包括二级分类和三级分类），请慎重操作。
       *
       * @param request DeleteAssetCategoryRequest
       * @return DeleteAssetCategoryResponse
       */
      Models::DeleteAssetCategoryResponse deleteAssetCategory(const Models::DeleteAssetCategoryRequest &request);

      /**
       * @summary 删除媒资信息
       *
       * @param request DeleteMediasRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMediasResponse
       */
      Models::DeleteMediasResponse deleteMediasWithOptions(const Models::DeleteMediasRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 删除媒资信息
       *
       * @param request DeleteMediasRequest
       * @return DeleteMediasResponse
       */
      Models::DeleteMediasResponse deleteMedias(const Models::DeleteMediasRequest &request);

      /**
       * @summary 查询分类
       *
       * @param request GetAssetCategoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAssetCategoryResponse
       */
      Models::GetAssetCategoryResponse getAssetCategoryWithOptions(const Models::GetAssetCategoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询分类
       *
       * @param request GetAssetCategoryRequest
       * @return GetAssetCategoryResponse
       */
      Models::GetAssetCategoryResponse getAssetCategory(const Models::GetAssetCategoryRequest &request);

      /**
       * @summary 查询图片生成任务
       *
       * @param request GetImageGenerationJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetImageGenerationJobResponse
       */
      Models::GetImageGenerationJobResponse getImageGenerationJobWithOptions(const Models::GetImageGenerationJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询图片生成任务
       *
       * @param request GetImageGenerationJobRequest
       * @return GetImageGenerationJobResponse
       */
      Models::GetImageGenerationJobResponse getImageGenerationJob(const Models::GetImageGenerationJobRequest &request);

      /**
       * @summary 查询媒资
       *
       * @description ## 请求说明
       * 该API用于查询媒资内容理解作业。
       *
       * @param request GetMediaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMediaResponse
       */
      Models::GetMediaResponse getMediaWithOptions(const Models::GetMediaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询媒资
       *
       * @description ## 请求说明
       * 该API用于查询媒资内容理解作业。
       *
       * @param request GetMediaRequest
       * @return GetMediaResponse
       */
      Models::GetMediaResponse getMedia(const Models::GetMediaRequest &request);

      /**
       * @summary 查询媒资内容理解作业
       *
       * @param request GetMediaComprehensionJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMediaComprehensionJobResponse
       */
      Models::GetMediaComprehensionJobResponse getMediaComprehensionJobWithOptions(const Models::GetMediaComprehensionJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询媒资内容理解作业
       *
       * @param request GetMediaComprehensionJobRequest
       * @return GetMediaComprehensionJobResponse
       */
      Models::GetMediaComprehensionJobResponse getMediaComprehensionJob(const Models::GetMediaComprehensionJobRequest &request);

      /**
       * @summary 查询视频生成任务
       *
       * @param request GetVideoGenerationJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetVideoGenerationJobResponse
       */
      Models::GetVideoGenerationJobResponse getVideoGenerationJobWithOptions(const Models::GetVideoGenerationJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 查询视频生成任务
       *
       * @param request GetVideoGenerationJobRequest
       * @return GetVideoGenerationJobResponse
       */
      Models::GetVideoGenerationJobResponse getVideoGenerationJob(const Models::GetVideoGenerationJobRequest &request);

      /**
       * @summary 导入媒资
       *
       * @description ## 请求说明
       * 该API用于查询媒资内容理解作业。
       *
       * @param request ImportMediaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ImportMediaResponse
       */
      Models::ImportMediaResponse importMediaWithOptions(const Models::ImportMediaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 导入媒资
       *
       * @description ## 请求说明
       * 该API用于查询媒资内容理解作业。
       *
       * @param request ImportMediaRequest
       * @return ImportMediaResponse
       */
      Models::ImportMediaResponse importMedia(const Models::ImportMediaRequest &request);

      /**
       * @summary 列出分类
       *
       * @param request ListAssetCategoriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAssetCategoriesResponse
       */
      Models::ListAssetCategoriesResponse listAssetCategoriesWithOptions(const Models::ListAssetCategoriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 列出分类
       *
       * @param request ListAssetCategoriesRequest
       * @return ListAssetCategoriesResponse
       */
      Models::ListAssetCategoriesResponse listAssetCategories(const Models::ListAssetCategoriesRequest &request);

      /**
       * @summary 搜索媒资
       *
       * @param request SearchMediaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchMediaResponse
       */
      Models::SearchMediaResponse searchMediaWithOptions(const Models::SearchMediaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 搜索媒资
       *
       * @param request SearchMediaRequest
       * @return SearchMediaResponse
       */
      Models::SearchMediaResponse searchMedia(const Models::SearchMediaRequest &request);

      /**
       * @summary 提交图像生成接口
       *
       * @param request SubmitImageGenerationJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitImageGenerationJobResponse
       */
      Models::SubmitImageGenerationJobResponse submitImageGenerationJobWithOptions(const Models::SubmitImageGenerationJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 提交图像生成接口
       *
       * @param request SubmitImageGenerationJobRequest
       * @return SubmitImageGenerationJobResponse
       */
      Models::SubmitImageGenerationJobResponse submitImageGenerationJob(const Models::SubmitImageGenerationJobRequest &request);

      /**
       * @summary 提交媒资内容理解作业
       *
       * @param request SubmitMediaComprehensionJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitMediaComprehensionJobResponse
       */
      Models::SubmitMediaComprehensionJobResponse submitMediaComprehensionJobWithOptions(const Models::SubmitMediaComprehensionJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 提交媒资内容理解作业
       *
       * @param request SubmitMediaComprehensionJobRequest
       * @return SubmitMediaComprehensionJobResponse
       */
      Models::SubmitMediaComprehensionJobResponse submitMediaComprehensionJob(const Models::SubmitMediaComprehensionJobRequest &request);

      /**
       * @summary 提交视频生成接口
       *
       * @param request SubmitVideoGenerationJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitVideoGenerationJobResponse
       */
      Models::SubmitVideoGenerationJobResponse submitVideoGenerationJobWithOptions(const Models::SubmitVideoGenerationJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 提交视频生成接口
       *
       * @param request SubmitVideoGenerationJobRequest
       * @return SubmitVideoGenerationJobResponse
       */
      Models::SubmitVideoGenerationJobResponse submitVideoGenerationJob(const Models::SubmitVideoGenerationJobRequest &request);

      /**
       * @summary 更新媒资分类
       *
       * @description 创建媒资分类后，可调用本接口通过分类 ID 来定位并更新媒资分类的名称。
       *
       * @param request UpdateAssetCategoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAssetCategoryResponse
       */
      Models::UpdateAssetCategoryResponse updateAssetCategoryWithOptions(const Models::UpdateAssetCategoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 更新媒资分类
       *
       * @description 创建媒资分类后，可调用本接口通过分类 ID 来定位并更新媒资分类的名称。
       *
       * @param request UpdateAssetCategoryRequest
       * @return UpdateAssetCategoryResponse
       */
      Models::UpdateAssetCategoryResponse updateAssetCategory(const Models::UpdateAssetCategoryRequest &request);

      /**
       * @summary UpdateMedia
       *
       * @description ## 请求说明
       * 该API用于查询媒资内容理解作业。
       *
       * @param request UpdateMediaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateMediaResponse
       */
      Models::UpdateMediaResponse updateMediaWithOptions(const Models::UpdateMediaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary UpdateMedia
       *
       * @description ## 请求说明
       * 该API用于查询媒资内容理解作业。
       *
       * @param request UpdateMediaRequest
       * @return UpdateMediaResponse
       */
      Models::UpdateMediaResponse updateMedia(const Models::UpdateMediaRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Yike20260707
#endif
