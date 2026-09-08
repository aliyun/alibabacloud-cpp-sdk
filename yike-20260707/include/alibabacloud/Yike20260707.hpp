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
       * @summary Retrieves information about multiple media assets in a batch.
       *
       * @description ## Request description.
       *
       * @param request BatchGetMediasRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchGetMediasResponse
       */
      Models::BatchGetMediasResponse batchGetMediasWithOptions(const Models::BatchGetMediasRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves information about multiple media assets in a batch.
       *
       * @description ## Request description.
       *
       * @param request BatchGetMediasRequest
       * @return BatchGetMediasResponse
       */
      Models::BatchGetMediasResponse batchGetMedias(const Models::BatchGetMediasRequest &request);

      /**
       * @summary Creates a media asset category.
       *
       * @description Categories support up to three levels, and each level supports up to 100 subcategories.
       *
       * @param request CreateAssetCategoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateAssetCategoryResponse
       */
      Models::CreateAssetCategoryResponse createAssetCategoryWithOptions(const Models::CreateAssetCategoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates a media asset category.
       *
       * @description Categories support up to three levels, and each level supports up to 100 subcategories.
       *
       * @param request CreateAssetCategoryRequest
       * @return CreateAssetCategoryResponse
       */
      Models::CreateAssetCategoryResponse createAssetCategory(const Models::CreateAssetCategoryRequest &request);

      /**
       * @summary Creates an infinite canvas.
       *
       * @description ## Operation description
       * This API operation is used to query media asset content understanding jobs.
       *
       * @param request CreateInfiniteCanvasRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateInfiniteCanvasResponse
       */
      Models::CreateInfiniteCanvasResponse createInfiniteCanvasWithOptions(const Models::CreateInfiniteCanvasRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Creates an infinite canvas.
       *
       * @description ## Operation description
       * This API operation is used to query media asset content understanding jobs.
       *
       * @param request CreateInfiniteCanvasRequest
       * @return CreateInfiniteCanvasResponse
       */
      Models::CreateInfiniteCanvasResponse createInfiniteCanvas(const Models::CreateInfiniteCanvasRequest &request);

      /**
       * @summary Deletes a media asset category.
       *
       * @description This operation also deletes all subcategories (including second-level and third-level categories). Proceed with caution.
       *
       * @param request DeleteAssetCategoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteAssetCategoryResponse
       */
      Models::DeleteAssetCategoryResponse deleteAssetCategoryWithOptions(const Models::DeleteAssetCategoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes a media asset category.
       *
       * @description This operation also deletes all subcategories (including second-level and third-level categories). Proceed with caution.
       *
       * @param request DeleteAssetCategoryRequest
       * @return DeleteAssetCategoryResponse
       */
      Models::DeleteAssetCategoryResponse deleteAssetCategory(const Models::DeleteAssetCategoryRequest &request);

      /**
       * @summary Deletes an infinite canvas.
       *
       * @description ## Operation description
       * This API operation is used to query media asset content understanding jobs.
       *
       * @param request DeleteInfiniteCanvasRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteInfiniteCanvasResponse
       */
      Models::DeleteInfiniteCanvasResponse deleteInfiniteCanvasWithOptions(const Models::DeleteInfiniteCanvasRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes an infinite canvas.
       *
       * @description ## Operation description
       * This API operation is used to query media asset content understanding jobs.
       *
       * @param request DeleteInfiniteCanvasRequest
       * @return DeleteInfiniteCanvasResponse
       */
      Models::DeleteInfiniteCanvasResponse deleteInfiniteCanvas(const Models::DeleteInfiniteCanvasRequest &request);

      /**
       * @summary Deletes media asset information.
       *
       * @param request DeleteMediasRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteMediasResponse
       */
      Models::DeleteMediasResponse deleteMediasWithOptions(const Models::DeleteMediasRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Deletes media asset information.
       *
       * @param request DeleteMediasRequest
       * @return DeleteMediasResponse
       */
      Models::DeleteMediasResponse deleteMedias(const Models::DeleteMediasRequest &request);

      /**
       * @summary Retrieves a login token for an enterprise account.
       *
       * @description >Notice:  The AI generation-related API operations in the 2026-03-19 API version will be deprecated soon. Upgrade to the 2026-07-07 API version.</notice>
       *
       * @param request GenerateYikeLoginTokenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateYikeLoginTokenResponse
       */
      Models::GenerateYikeLoginTokenResponse generateYikeLoginTokenWithOptions(const Models::GenerateYikeLoginTokenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a login token for an enterprise account.
       *
       * @description >Notice:  The AI generation-related API operations in the 2026-03-19 API version will be deprecated soon. Upgrade to the 2026-07-07 API version.</notice>
       *
       * @param request GenerateYikeLoginTokenRequest
       * @return GenerateYikeLoginTokenResponse
       */
      Models::GenerateYikeLoginTokenResponse generateYikeLoginToken(const Models::GenerateYikeLoginTokenRequest &request);

      /**
       * @summary Queries an agent asynchronous task.
       *
       * @param request GetAgentJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAgentJobResponse
       */
      Models::GetAgentJobResponse getAgentJobWithOptions(const Models::GetAgentJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries an agent asynchronous task.
       *
       * @param request GetAgentJobRequest
       * @return GetAgentJobResponse
       */
      Models::GetAgentJobResponse getAgentJob(const Models::GetAgentJobRequest &request);

      /**
       * @summary Retrieves the information of a specified category and the list of its subcategories (immediate child categories).
       *
       * @param request GetAssetCategoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAssetCategoryResponse
       */
      Models::GetAssetCategoryResponse getAssetCategoryWithOptions(const Models::GetAssetCategoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the information of a specified category and the list of its subcategories (immediate child categories).
       *
       * @param request GetAssetCategoryRequest
       * @return GetAssetCategoryResponse
       */
      Models::GetAssetCategoryResponse getAssetCategory(const Models::GetAssetCategoryRequest &request);

      /**
       * @summary Queries an image generation task.
       *
       * @param request GetImageGenerationJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetImageGenerationJobResponse
       */
      Models::GetImageGenerationJobResponse getImageGenerationJobWithOptions(const Models::GetImageGenerationJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries an image generation task.
       *
       * @param request GetImageGenerationJobRequest
       * @return GetImageGenerationJobResponse
       */
      Models::GetImageGenerationJobResponse getImageGenerationJob(const Models::GetImageGenerationJobRequest &request);

      /**
       * @summary Queries an infinite canvas.
       *
       * @description ## Description
       * This API is used to query a media asset content understanding job.
       *
       * @param request GetInfiniteCanvasRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetInfiniteCanvasResponse
       */
      Models::GetInfiniteCanvasResponse getInfiniteCanvasWithOptions(const Models::GetInfiniteCanvasRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries an infinite canvas.
       *
       * @description ## Description
       * This API is used to query a media asset content understanding job.
       *
       * @param request GetInfiniteCanvasRequest
       * @return GetInfiniteCanvasResponse
       */
      Models::GetInfiniteCanvasResponse getInfiniteCanvas(const Models::GetInfiniteCanvasRequest &request);

      /**
       * @summary Queries a media asset.
       *
       * @description ## Operation description
       * This API operation is used to query a media content analysis job.
       *
       * @param request GetMediaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMediaResponse
       */
      Models::GetMediaResponse getMediaWithOptions(const Models::GetMediaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a media asset.
       *
       * @description ## Operation description
       * This API operation is used to query a media content analysis job.
       *
       * @param request GetMediaRequest
       * @return GetMediaResponse
       */
      Models::GetMediaResponse getMedia(const Models::GetMediaRequest &request);

      /**
       * @summary Queries a media asset content understanding job.
       *
       * @description ## Description
       * This API is used to query a media asset content understanding job.
       *
       * @param request GetMediaComprehensionJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetMediaComprehensionJobResponse
       */
      Models::GetMediaComprehensionJobResponse getMediaComprehensionJobWithOptions(const Models::GetMediaComprehensionJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a media asset content understanding job.
       *
       * @description ## Description
       * This API is used to query a media asset content understanding job.
       *
       * @param request GetMediaComprehensionJobRequest
       * @return GetMediaComprehensionJobResponse
       */
      Models::GetMediaComprehensionJobResponse getMediaComprehensionJob(const Models::GetMediaComprehensionJobRequest &request);

      /**
       * @summary Queries a creative script generation task.
       *
       * @param request GetRemakeScriptJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRemakeScriptJobResponse
       */
      Models::GetRemakeScriptJobResponse getRemakeScriptJobWithOptions(const Models::GetRemakeScriptJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a creative script generation task.
       *
       * @param request GetRemakeScriptJobRequest
       * @return GetRemakeScriptJobResponse
       */
      Models::GetRemakeScriptJobResponse getRemakeScriptJob(const Models::GetRemakeScriptJobRequest &request);

      /**
       * @summary Queries the status, input parameters, and video result of a video text erasure task.
       *
       * @description Queries the status, input, parameters, and desired state result of a video text erasure task based on `JobId`.
       *
       * @param request GetVideoDetextJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetVideoDetextJobResponse
       */
      Models::GetVideoDetextJobResponse getVideoDetextJobWithOptions(const Models::GetVideoDetextJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status, input parameters, and video result of a video text erasure task.
       *
       * @description Queries the status, input, parameters, and desired state result of a video text erasure task based on `JobId`.
       *
       * @param request GetVideoDetextJobRequest
       * @return GetVideoDetextJobResponse
       */
      Models::GetVideoDetextJobResponse getVideoDetextJob(const Models::GetVideoDetextJobRequest &request);

      /**
       * @summary Queries a video generation task.
       *
       * @param request GetVideoGenerationJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetVideoGenerationJobResponse
       */
      Models::GetVideoGenerationJobResponse getVideoGenerationJobWithOptions(const Models::GetVideoGenerationJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries a video generation task.
       *
       * @param request GetVideoGenerationJobRequest
       * @return GetVideoGenerationJobResponse
       */
      Models::GetVideoGenerationJobResponse getVideoGenerationJob(const Models::GetVideoGenerationJobRequest &request);

      /**
       * @summary Submits a video rendering and composition task.
       *
       * @param request GetVideoRenderJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetVideoRenderJobResponse
       */
      Models::GetVideoRenderJobResponse getVideoRenderJobWithOptions(const Models::GetVideoRenderJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a video rendering and composition task.
       *
       * @param request GetVideoRenderJobRequest
       * @return GetVideoRenderJobResponse
       */
      Models::GetVideoRenderJobResponse getVideoRenderJob(const Models::GetVideoRenderJobRequest &request);

      /**
       * @summary Queries the status, input parameters, and multilingual outputs of a video translation job.
       *
       * @description Queries the status, input, parameters, and desired state results of a video translation job based on the `JobId`.
       *
       * @param request GetVideoTranslationJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetVideoTranslationJobResponse
       */
      Models::GetVideoTranslationJobResponse getVideoTranslationJobWithOptions(const Models::GetVideoTranslationJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the status, input parameters, and multilingual outputs of a video translation job.
       *
       * @description Queries the status, input, parameters, and desired state results of a video translation job based on the `JobId`.
       *
       * @param request GetVideoTranslationJobRequest
       * @return GetVideoTranslationJobResponse
       */
      Models::GetVideoTranslationJobResponse getVideoTranslationJob(const Models::GetVideoTranslationJobRequest &request);

      /**
       * @summary Retrieves the membership plan and credit information for a Yike primary account.
       *
       * @param request GetYikeAccountCreditRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetYikeAccountCreditResponse
       */
      Models::GetYikeAccountCreditResponse getYikeAccountCreditWithOptions(const Models::GetYikeAccountCreditRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves the membership plan and credit information for a Yike primary account.
       *
       * @param request GetYikeAccountCreditRequest
       * @return GetYikeAccountCreditResponse
       */
      Models::GetYikeAccountCreditResponse getYikeAccountCredit(const Models::GetYikeAccountCreditRequest &request);

      /**
       * @summary Queries the actual credit consumption of a task.
       *
       * @param request GetYikeJobCreditRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetYikeJobCreditResponse
       */
      Models::GetYikeJobCreditResponse getYikeJobCreditWithOptions(const Models::GetYikeJobCreditRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the actual credit consumption of a task.
       *
       * @param request GetYikeJobCreditRequest
       * @return GetYikeJobCreditResponse
       */
      Models::GetYikeJobCreditResponse getYikeJobCredit(const Models::GetYikeJobCreditRequest &request);

      /**
       * @summary Imports a media asset.
       *
       * @description ## Request description
       * This API is used to query media content analysis jobs.
       *
       * @param request ImportMediaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ImportMediaResponse
       */
      Models::ImportMediaResponse importMediaWithOptions(const Models::ImportMediaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Imports a media asset.
       *
       * @description ## Request description
       * This API is used to query media content analysis jobs.
       *
       * @param request ImportMediaRequest
       * @return ImportMediaResponse
       */
      Models::ImportMediaResponse importMedia(const Models::ImportMediaRequest &request);

      /**
       * @summary Retrieves a paged list of categories.
       *
       * @param request ListAssetCategoriesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListAssetCategoriesResponse
       */
      Models::ListAssetCategoriesResponse listAssetCategoriesWithOptions(const Models::ListAssetCategoriesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Retrieves a paged list of categories.
       *
       * @param request ListAssetCategoriesRequest
       * @return ListAssetCategoriesResponse
       */
      Models::ListAssetCategoriesResponse listAssetCategories(const Models::ListAssetCategoriesRequest &request);

      /**
       * @summary Queries the list of infinite canvases.
       *
       * @description ## Operation description
       * This API is used to query media asset content understanding jobs.
       *
       * @param request ListInfiniteCanvasesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListInfiniteCanvasesResponse
       */
      Models::ListInfiniteCanvasesResponse listInfiniteCanvasesWithOptions(const Models::ListInfiniteCanvasesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Queries the list of infinite canvases.
       *
       * @description ## Operation description
       * This API is used to query media asset content understanding jobs.
       *
       * @param request ListInfiniteCanvasesRequest
       * @return ListInfiniteCanvasesResponse
       */
      Models::ListInfiniteCanvasesResponse listInfiniteCanvases(const Models::ListInfiniteCanvasesRequest &request);

      /**
       * @summary Returns media asset information that matches the specified filter conditions.
       *
       * @param request SearchMediaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchMediaResponse
       */
      Models::SearchMediaResponse searchMediaWithOptions(const Models::SearchMediaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Returns media asset information that matches the specified filter conditions.
       *
       * @param request SearchMediaRequest
       * @return SearchMediaResponse
       */
      Models::SearchMediaResponse searchMedia(const Models::SearchMediaRequest &request);

      /**
       * @summary Submits an agent asynchronous node.
       *
       * @param request SubmitAgentJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitAgentJobResponse
       */
      Models::SubmitAgentJobResponse submitAgentJobWithOptions(const Models::SubmitAgentJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits an agent asynchronous node.
       *
       * @param request SubmitAgentJobRequest
       * @return SubmitAgentJobResponse
       */
      Models::SubmitAgentJobResponse submitAgentJob(const Models::SubmitAgentJobRequest &request);

      /**
       * @summary Submits an image generation task.
       *
       * @param request SubmitImageGenerationJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitImageGenerationJobResponse
       */
      Models::SubmitImageGenerationJobResponse submitImageGenerationJobWithOptions(const Models::SubmitImageGenerationJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits an image generation task.
       *
       * @param request SubmitImageGenerationJobRequest
       * @return SubmitImageGenerationJobResponse
       */
      Models::SubmitImageGenerationJobResponse submitImageGenerationJob(const Models::SubmitImageGenerationJobRequest &request);

      /**
       * @summary Submits a media asset content understanding job.
       *
       * @description ## Operation description
       * This API operation performs content understanding based on the provided media asset files (such as video URLs). You can pass custom parameters through the `UserData` field, which are returned as-is in the callback.
       *
       * @param request SubmitMediaComprehensionJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitMediaComprehensionJobResponse
       */
      Models::SubmitMediaComprehensionJobResponse submitMediaComprehensionJobWithOptions(const Models::SubmitMediaComprehensionJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a media asset content understanding job.
       *
       * @description ## Operation description
       * This API operation performs content understanding based on the provided media asset files (such as video URLs). You can pass custom parameters through the `UserData` field, which are returned as-is in the callback.
       *
       * @param request SubmitMediaComprehensionJobRequest
       * @return SubmitMediaComprehensionJobResponse
       */
      Models::SubmitMediaComprehensionJobResponse submitMediaComprehensionJob(const Models::SubmitMediaComprehensionJobRequest &request);

      /**
       * @summary Submits a creative script generation task.
       *
       * @description This API generates a new voiceover script based on content comprehension results and new product/model information by imitating the style of the original script. You can pass custom parameters through the UserData field, which are returned as-is in the callback.
       *
       * @param request SubmitRemakeScriptJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitRemakeScriptJobResponse
       */
      Models::SubmitRemakeScriptJobResponse submitRemakeScriptJobWithOptions(const Models::SubmitRemakeScriptJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a creative script generation task.
       *
       * @description This API generates a new voiceover script based on content comprehension results and new product/model information by imitating the style of the original script. You can pass custom parameters through the UserData field, which are returned as-is in the callback.
       *
       * @param request SubmitRemakeScriptJobRequest
       * @return SubmitRemakeScriptJobResponse
       */
      Models::SubmitRemakeScriptJobResponse submitRemakeScriptJob(const Models::SubmitRemakeScriptJobRequest &request);

      /**
       * @summary Submits an asynchronous video text erasure task that supports full-video erasure, time range-based erasure, and region-specific erasure.
       *
       * @description Submits an asynchronous video text erasure task. The input can be an accessible video URL or a Yike video media asset ID. You can configure the erasure time range and text regions.
       *
       * @param request SubmitVideoDetextJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitVideoDetextJobResponse
       */
      Models::SubmitVideoDetextJobResponse submitVideoDetextJobWithOptions(const Models::SubmitVideoDetextJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits an asynchronous video text erasure task that supports full-video erasure, time range-based erasure, and region-specific erasure.
       *
       * @description Submits an asynchronous video text erasure task. The input can be an accessible video URL or a Yike video media asset ID. You can configure the erasure time range and text regions.
       *
       * @param request SubmitVideoDetextJobRequest
       * @return SubmitVideoDetextJobResponse
       */
      Models::SubmitVideoDetextJobResponse submitVideoDetextJob(const Models::SubmitVideoDetextJobRequest &request);

      /**
       * @summary Submits a video generation task.
       *
       * @param request SubmitVideoGenerationJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitVideoGenerationJobResponse
       */
      Models::SubmitVideoGenerationJobResponse submitVideoGenerationJobWithOptions(const Models::SubmitVideoGenerationJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a video generation task.
       *
       * @param request SubmitVideoGenerationJobRequest
       * @return SubmitVideoGenerationJobResponse
       */
      Models::SubmitVideoGenerationJobResponse submitVideoGenerationJob(const Models::SubmitVideoGenerationJobRequest &request);

      /**
       * @summary Submits a video rendering and compositing task.
       *
       * @param request SubmitVideoRenderJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitVideoRenderJobResponse
       */
      Models::SubmitVideoRenderJobResponse submitVideoRenderJobWithOptions(const Models::SubmitVideoRenderJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits a video rendering and compositing task.
       *
       * @param request SubmitVideoRenderJobRequest
       * @return SubmitVideoRenderJobResponse
       */
      Models::SubmitVideoRenderJobResponse submitVideoRenderJob(const Models::SubmitVideoRenderJobRequest &request);

      /**
       * @summary Submits an asynchronous video translation task that supports subtitle translation, voice translation, main subtitle erasure, and on-screen text translation.
       *
       * @description Submits an asynchronous video translation task. The input supports a media URL or an Intelligent Media Management (IMM) media asset ID. Task parameters specify the source language, target language, and translation capabilities to enable.
       *
       * @param request SubmitVideoTranslationJobRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SubmitVideoTranslationJobResponse
       */
      Models::SubmitVideoTranslationJobResponse submitVideoTranslationJobWithOptions(const Models::SubmitVideoTranslationJobRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Submits an asynchronous video translation task that supports subtitle translation, voice translation, main subtitle erasure, and on-screen text translation.
       *
       * @description Submits an asynchronous video translation task. The input supports a media URL or an Intelligent Media Management (IMM) media asset ID. Task parameters specify the source language, target language, and translation capabilities to enable.
       *
       * @param request SubmitVideoTranslationJobRequest
       * @return SubmitVideoTranslationJobResponse
       */
      Models::SubmitVideoTranslationJobResponse submitVideoTranslationJob(const Models::SubmitVideoTranslationJobRequest &request);

      /**
       * @summary Updates a media asset category.
       *
       * @description After creating a media asset category, you can call this operation to locate and update the name of the category by category ID.
       *
       * @param request UpdateAssetCategoryRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateAssetCategoryResponse
       */
      Models::UpdateAssetCategoryResponse updateAssetCategoryWithOptions(const Models::UpdateAssetCategoryRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates a media asset category.
       *
       * @description After creating a media asset category, you can call this operation to locate and update the name of the category by category ID.
       *
       * @param request UpdateAssetCategoryRequest
       * @return UpdateAssetCategoryResponse
       */
      Models::UpdateAssetCategoryResponse updateAssetCategory(const Models::UpdateAssetCategoryRequest &request);

      /**
       * @summary Updates the information of an infinite canvas.
       *
       * @description ## Operation description
       * This API operation is used to query media asset content understanding jobs.
       *
       * @param request UpdateInfiniteCanvasRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateInfiniteCanvasResponse
       */
      Models::UpdateInfiniteCanvasResponse updateInfiniteCanvasWithOptions(const Models::UpdateInfiniteCanvasRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates the information of an infinite canvas.
       *
       * @description ## Operation description
       * This API operation is used to query media asset content understanding jobs.
       *
       * @param request UpdateInfiniteCanvasRequest
       * @return UpdateInfiniteCanvasResponse
       */
      Models::UpdateInfiniteCanvasResponse updateInfiniteCanvas(const Models::UpdateInfiniteCanvasRequest &request);

      /**
       * @summary Updates media asset information.
       *
       * @description ## Operation description
       * This API operation is used to query media content understanding jobs.
       *
       * @param request UpdateMediaRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateMediaResponse
       */
      Models::UpdateMediaResponse updateMediaWithOptions(const Models::UpdateMediaRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary Updates media asset information.
       *
       * @description ## Operation description
       * This API operation is used to query media content understanding jobs.
       *
       * @param request UpdateMediaRequest
       * @return UpdateMediaResponse
       */
      Models::UpdateMediaResponse updateMedia(const Models::UpdateMediaRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Yike20260707
#endif
