// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_VIDEOENHAN20200320_HPP_
#define ALIBABACLOUD_VIDEOENHAN20200320_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Videoenhan20200320Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Videoenhan20200320.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Videoenhan20200320
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);

      Darabonba::Json _postOSSObject(const string &bucketName, const Darabonba::Json &form);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @param request AbstractEcommerceVideoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AbstractEcommerceVideoResponse
       */
      Models::AbstractEcommerceVideoResponse abstractEcommerceVideoWithOptions(const Models::AbstractEcommerceVideoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request AbstractEcommerceVideoRequest
       * @return AbstractEcommerceVideoResponse
       */
      Models::AbstractEcommerceVideoResponse abstractEcommerceVideo(const Models::AbstractEcommerceVideoRequest &request);

      Models::AbstractEcommerceVideoResponse abstractEcommerceVideoAdvance(const Models::AbstractEcommerceVideoAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request AbstractFilmVideoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AbstractFilmVideoResponse
       */
      Models::AbstractFilmVideoResponse abstractFilmVideoWithOptions(const Models::AbstractFilmVideoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request AbstractFilmVideoRequest
       * @return AbstractFilmVideoResponse
       */
      Models::AbstractFilmVideoResponse abstractFilmVideo(const Models::AbstractFilmVideoRequest &request);

      Models::AbstractFilmVideoResponse abstractFilmVideoAdvance(const Models::AbstractFilmVideoAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 视频人脸融合模板增加
       *
       * @param request AddFaceVideoTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddFaceVideoTemplateResponse
       */
      Models::AddFaceVideoTemplateResponse addFaceVideoTemplateWithOptions(const Models::AddFaceVideoTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 视频人脸融合模板增加
       *
       * @param request AddFaceVideoTemplateRequest
       * @return AddFaceVideoTemplateResponse
       */
      Models::AddFaceVideoTemplateResponse addFaceVideoTemplate(const Models::AddFaceVideoTemplateRequest &request);

      Models::AddFaceVideoTemplateResponse addFaceVideoTemplateAdvance(const Models::AddFaceVideoTemplateAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request AdjustVideoColorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AdjustVideoColorResponse
       */
      Models::AdjustVideoColorResponse adjustVideoColorWithOptions(const Models::AdjustVideoColorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request AdjustVideoColorRequest
       * @return AdjustVideoColorResponse
       */
      Models::AdjustVideoColorResponse adjustVideoColor(const Models::AdjustVideoColorRequest &request);

      Models::AdjustVideoColorResponse adjustVideoColorAdvance(const Models::AdjustVideoColorAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ChangeVideoSizeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeVideoSizeResponse
       */
      Models::ChangeVideoSizeResponse changeVideoSizeWithOptions(const Models::ChangeVideoSizeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ChangeVideoSizeRequest
       * @return ChangeVideoSizeResponse
       */
      Models::ChangeVideoSizeResponse changeVideoSize(const Models::ChangeVideoSizeRequest &request);

      Models::ChangeVideoSizeResponse changeVideoSizeAdvance(const Models::ChangeVideoSizeAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ConvertHdrVideoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ConvertHdrVideoResponse
       */
      Models::ConvertHdrVideoResponse convertHdrVideoWithOptions(const Models::ConvertHdrVideoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ConvertHdrVideoRequest
       * @return ConvertHdrVideoResponse
       */
      Models::ConvertHdrVideoResponse convertHdrVideo(const Models::ConvertHdrVideoRequest &request);

      Models::ConvertHdrVideoResponse convertHdrVideoAdvance(const Models::ConvertHdrVideoAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 视频人脸融合模板删除
       *
       * @param request DeleteFaceVideoTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteFaceVideoTemplateResponse
       */
      Models::DeleteFaceVideoTemplateResponse deleteFaceVideoTemplateWithOptions(const Models::DeleteFaceVideoTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 视频人脸融合模板删除
       *
       * @param request DeleteFaceVideoTemplateRequest
       * @return DeleteFaceVideoTemplateResponse
       */
      Models::DeleteFaceVideoTemplateResponse deleteFaceVideoTemplate(const Models::DeleteFaceVideoTemplateRequest &request);

      /**
       * @summary 视频人像增强
       *
       * @param request EnhancePortraitVideoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnhancePortraitVideoResponse
       */
      Models::EnhancePortraitVideoResponse enhancePortraitVideoWithOptions(const Models::EnhancePortraitVideoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 视频人像增强
       *
       * @param request EnhancePortraitVideoRequest
       * @return EnhancePortraitVideoResponse
       */
      Models::EnhancePortraitVideoResponse enhancePortraitVideo(const Models::EnhancePortraitVideoRequest &request);

      Models::EnhancePortraitVideoResponse enhancePortraitVideoAdvance(const Models::EnhancePortraitVideoAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request EnhanceVideoQualityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnhanceVideoQualityResponse
       */
      Models::EnhanceVideoQualityResponse enhanceVideoQualityWithOptions(const Models::EnhanceVideoQualityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request EnhanceVideoQualityRequest
       * @return EnhanceVideoQualityResponse
       */
      Models::EnhanceVideoQualityResponse enhanceVideoQuality(const Models::EnhanceVideoQualityRequest &request);

      Models::EnhanceVideoQualityResponse enhanceVideoQualityAdvance(const Models::EnhanceVideoQualityAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request EraseVideoLogoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EraseVideoLogoResponse
       */
      Models::EraseVideoLogoResponse eraseVideoLogoWithOptions(const Models::EraseVideoLogoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request EraseVideoLogoRequest
       * @return EraseVideoLogoResponse
       */
      Models::EraseVideoLogoResponse eraseVideoLogo(const Models::EraseVideoLogoRequest &request);

      Models::EraseVideoLogoResponse eraseVideoLogoAdvance(const Models::EraseVideoLogoAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request EraseVideoSubtitlesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EraseVideoSubtitlesResponse
       */
      Models::EraseVideoSubtitlesResponse eraseVideoSubtitlesWithOptions(const Models::EraseVideoSubtitlesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request EraseVideoSubtitlesRequest
       * @return EraseVideoSubtitlesResponse
       */
      Models::EraseVideoSubtitlesResponse eraseVideoSubtitles(const Models::EraseVideoSubtitlesRequest &request);

      Models::EraseVideoSubtitlesResponse eraseVideoSubtitlesAdvance(const Models::EraseVideoSubtitlesAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 视频人像卡通化
       *
       * @param request GenerateHumanAnimeStyleVideoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateHumanAnimeStyleVideoResponse
       */
      Models::GenerateHumanAnimeStyleVideoResponse generateHumanAnimeStyleVideoWithOptions(const Models::GenerateHumanAnimeStyleVideoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 视频人像卡通化
       *
       * @param request GenerateHumanAnimeStyleVideoRequest
       * @return GenerateHumanAnimeStyleVideoResponse
       */
      Models::GenerateHumanAnimeStyleVideoResponse generateHumanAnimeStyleVideo(const Models::GenerateHumanAnimeStyleVideoRequest &request);

      Models::GenerateHumanAnimeStyleVideoResponse generateHumanAnimeStyleVideoAdvance(const Models::GenerateHumanAnimeStyleVideoAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GenerateVideoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateVideoResponse
       */
      Models::GenerateVideoResponse generateVideoWithOptions(const Models::GenerateVideoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GenerateVideoRequest
       * @return GenerateVideoResponse
       */
      Models::GenerateVideoResponse generateVideo(const Models::GenerateVideoRequest &request);

      Models::GenerateVideoResponse generateVideoAdvance(const Models::GenerateVideoAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetAsyncJobResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetAsyncJobResultResponse
       */
      Models::GetAsyncJobResultResponse getAsyncJobResultWithOptions(const Models::GetAsyncJobResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetAsyncJobResultRequest
       * @return GetAsyncJobResultResponse
       */
      Models::GetAsyncJobResultResponse getAsyncJobResult(const Models::GetAsyncJobResultRequest &request);

      /**
       * @param request InterpolateVideoFrameRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return InterpolateVideoFrameResponse
       */
      Models::InterpolateVideoFrameResponse interpolateVideoFrameWithOptions(const Models::InterpolateVideoFrameRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request InterpolateVideoFrameRequest
       * @return InterpolateVideoFrameResponse
       */
      Models::InterpolateVideoFrameResponse interpolateVideoFrame(const Models::InterpolateVideoFrameRequest &request);

      Models::InterpolateVideoFrameResponse interpolateVideoFrameAdvance(const Models::InterpolateVideoFrameAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request MergeVideoFaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MergeVideoFaceResponse
       */
      Models::MergeVideoFaceResponse mergeVideoFaceWithOptions(const Models::MergeVideoFaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request MergeVideoFaceRequest
       * @return MergeVideoFaceResponse
       */
      Models::MergeVideoFaceResponse mergeVideoFace(const Models::MergeVideoFaceRequest &request);

      Models::MergeVideoFaceResponse mergeVideoFaceAdvance(const Models::MergeVideoFaceAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 视频模板融合换脸
       *
       * @param request MergeVideoModelFaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MergeVideoModelFaceResponse
       */
      Models::MergeVideoModelFaceResponse mergeVideoModelFaceWithOptions(const Models::MergeVideoModelFaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 视频模板融合换脸
       *
       * @param request MergeVideoModelFaceRequest
       * @return MergeVideoModelFaceResponse
       */
      Models::MergeVideoModelFaceResponse mergeVideoModelFace(const Models::MergeVideoModelFaceRequest &request);

      Models::MergeVideoModelFaceResponse mergeVideoModelFaceAdvance(const Models::MergeVideoModelFaceAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 视频人脸融合模板查询
       *
       * @param request QueryFaceVideoTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryFaceVideoTemplateResponse
       */
      Models::QueryFaceVideoTemplateResponse queryFaceVideoTemplateWithOptions(const Models::QueryFaceVideoTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 视频人脸融合模板查询
       *
       * @param request QueryFaceVideoTemplateRequest
       * @return QueryFaceVideoTemplateResponse
       */
      Models::QueryFaceVideoTemplateResponse queryFaceVideoTemplate(const Models::QueryFaceVideoTemplateRequest &request);

      /**
       * @summary 视频降噪
       *
       * @param request ReduceVideoNoiseRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ReduceVideoNoiseResponse
       */
      Models::ReduceVideoNoiseResponse reduceVideoNoiseWithOptions(const Models::ReduceVideoNoiseRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 视频降噪
       *
       * @param request ReduceVideoNoiseRequest
       * @return ReduceVideoNoiseResponse
       */
      Models::ReduceVideoNoiseResponse reduceVideoNoise(const Models::ReduceVideoNoiseRequest &request);

      Models::ReduceVideoNoiseResponse reduceVideoNoiseAdvance(const Models::ReduceVideoNoiseAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SuperResolveVideoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SuperResolveVideoResponse
       */
      Models::SuperResolveVideoResponse superResolveVideoWithOptions(const Models::SuperResolveVideoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request SuperResolveVideoRequest
       * @return SuperResolveVideoResponse
       */
      Models::SuperResolveVideoResponse superResolveVideo(const Models::SuperResolveVideoRequest &request);

      Models::SuperResolveVideoResponse superResolveVideoAdvance(const Models::SuperResolveVideoAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ToneSdrVideoRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ToneSdrVideoResponse
       */
      Models::ToneSdrVideoResponse toneSdrVideoWithOptions(const Models::ToneSdrVideoRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ToneSdrVideoRequest
       * @return ToneSdrVideoResponse
       */
      Models::ToneSdrVideoResponse toneSdrVideo(const Models::ToneSdrVideoRequest &request);

      Models::ToneSdrVideoResponse toneSdrVideoAdvance(const Models::ToneSdrVideoAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);
  };
} // namespace AlibabaCloud
} // namespace Videoenhan20200320
#endif
