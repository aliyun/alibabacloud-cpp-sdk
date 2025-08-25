// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_IMAGEENHAN20190930_HPP_
#define ALIBABACLOUD_IMAGEENHAN20190930_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Imageenhan20190930Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <map>
#include <alibabacloud/Imageenhan20190930.hpp>
#include <darabonba/Runtime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imageenhan20190930
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);

      Darabonba::Json _postOSSObject(const string &bucketName, const Darabonba::Json &form);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @param request AssessCompositionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AssessCompositionResponse
       */
      Models::AssessCompositionResponse assessCompositionWithOptions(const Models::AssessCompositionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request AssessCompositionRequest
       * @return AssessCompositionResponse
       */
      Models::AssessCompositionResponse assessComposition(const Models::AssessCompositionRequest &request);

      Models::AssessCompositionResponse assessCompositionAdvance(const Models::AssessCompositionAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request AssessExposureRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AssessExposureResponse
       */
      Models::AssessExposureResponse assessExposureWithOptions(const Models::AssessExposureRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request AssessExposureRequest
       * @return AssessExposureResponse
       */
      Models::AssessExposureResponse assessExposure(const Models::AssessExposureRequest &request);

      Models::AssessExposureResponse assessExposureAdvance(const Models::AssessExposureAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request AssessSharpnessRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AssessSharpnessResponse
       */
      Models::AssessSharpnessResponse assessSharpnessWithOptions(const Models::AssessSharpnessRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request AssessSharpnessRequest
       * @return AssessSharpnessResponse
       */
      Models::AssessSharpnessResponse assessSharpness(const Models::AssessSharpnessRequest &request);

      Models::AssessSharpnessResponse assessSharpnessAdvance(const Models::AssessSharpnessAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ChangeImageSizeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ChangeImageSizeResponse
       */
      Models::ChangeImageSizeResponse changeImageSizeWithOptions(const Models::ChangeImageSizeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ChangeImageSizeRequest
       * @return ChangeImageSizeResponse
       */
      Models::ChangeImageSizeResponse changeImageSize(const Models::ChangeImageSizeRequest &request);

      Models::ChangeImageSizeResponse changeImageSizeAdvance(const Models::ChangeImageSizeAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ColorizeImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ColorizeImageResponse
       */
      Models::ColorizeImageResponse colorizeImageWithOptions(const Models::ColorizeImageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ColorizeImageRequest
       * @return ColorizeImageResponse
       */
      Models::ColorizeImageResponse colorizeImage(const Models::ColorizeImageRequest &request);

      Models::ColorizeImageResponse colorizeImageAdvance(const Models::ColorizeImageAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request EnhanceImageColorRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnhanceImageColorResponse
       */
      Models::EnhanceImageColorResponse enhanceImageColorWithOptions(const Models::EnhanceImageColorRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request EnhanceImageColorRequest
       * @return EnhanceImageColorResponse
       */
      Models::EnhanceImageColorResponse enhanceImageColor(const Models::EnhanceImageColorRequest &request);

      Models::EnhanceImageColorResponse enhanceImageColorAdvance(const Models::EnhanceImageColorAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ErasePersonRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ErasePersonResponse
       */
      Models::ErasePersonResponse erasePersonWithOptions(const Models::ErasePersonRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ErasePersonRequest
       * @return ErasePersonResponse
       */
      Models::ErasePersonResponse erasePerson(const Models::ErasePersonRequest &request);

      Models::ErasePersonResponse erasePersonAdvance(const Models::ErasePersonAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ExtendImageStyleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExtendImageStyleResponse
       */
      Models::ExtendImageStyleResponse extendImageStyleWithOptions(const Models::ExtendImageStyleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ExtendImageStyleRequest
       * @return ExtendImageStyleResponse
       */
      Models::ExtendImageStyleResponse extendImageStyle(const Models::ExtendImageStyleRequest &request);

      Models::ExtendImageStyleResponse extendImageStyleAdvance(const Models::ExtendImageStyleAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 生成式图像卡通化
       *
       * @param request GenerateCartoonizedImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateCartoonizedImageResponse
       */
      Models::GenerateCartoonizedImageResponse generateCartoonizedImageWithOptions(const Models::GenerateCartoonizedImageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 生成式图像卡通化
       *
       * @param request GenerateCartoonizedImageRequest
       * @return GenerateCartoonizedImageResponse
       */
      Models::GenerateCartoonizedImageResponse generateCartoonizedImage(const Models::GenerateCartoonizedImageRequest &request);

      Models::GenerateCartoonizedImageResponse generateCartoonizedImageAdvance(const Models::GenerateCartoonizedImageAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 图像微动
       *
       * @param request GenerateDynamicImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateDynamicImageResponse
       */
      Models::GenerateDynamicImageResponse generateDynamicImageWithOptions(const Models::GenerateDynamicImageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 图像微动
       *
       * @param request GenerateDynamicImageRequest
       * @return GenerateDynamicImageResponse
       */
      Models::GenerateDynamicImageResponse generateDynamicImage(const Models::GenerateDynamicImageRequest &request);

      Models::GenerateDynamicImageResponse generateDynamicImageAdvance(const Models::GenerateDynamicImageAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 文本到图像生成
       *
       * @param request GenerateImageWithTextRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateImageWithTextResponse
       */
      Models::GenerateImageWithTextResponse generateImageWithTextWithOptions(const Models::GenerateImageWithTextRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 文本到图像生成
       *
       * @param request GenerateImageWithTextRequest
       * @return GenerateImageWithTextResponse
       */
      Models::GenerateImageWithTextResponse generateImageWithText(const Models::GenerateImageWithTextRequest &request);

      /**
       * @summary 文本和参考图到图像生成
       *
       * @param request GenerateImageWithTextAndImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateImageWithTextAndImageResponse
       */
      Models::GenerateImageWithTextAndImageResponse generateImageWithTextAndImageWithOptions(const Models::GenerateImageWithTextAndImageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 文本和参考图到图像生成
       *
       * @param request GenerateImageWithTextAndImageRequest
       * @return GenerateImageWithTextAndImageResponse
       */
      Models::GenerateImageWithTextAndImageResponse generateImageWithTextAndImage(const Models::GenerateImageWithTextAndImageRequest &request);

      Models::GenerateImageWithTextAndImageResponse generateImageWithTextAndImageAdvance(const Models::GenerateImageWithTextAndImageAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 生成式图像超分
       *
       * @param request GenerateSuperResolutionImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateSuperResolutionImageResponse
       */
      Models::GenerateSuperResolutionImageResponse generateSuperResolutionImageWithOptions(const Models::GenerateSuperResolutionImageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 生成式图像超分
       *
       * @param request GenerateSuperResolutionImageRequest
       * @return GenerateSuperResolutionImageResponse
       */
      Models::GenerateSuperResolutionImageResponse generateSuperResolutionImage(const Models::GenerateSuperResolutionImageRequest &request);

      Models::GenerateSuperResolutionImageResponse generateSuperResolutionImageAdvance(const Models::GenerateSuperResolutionImageAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

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
       * @param request ImageBlindCharacterWatermarkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ImageBlindCharacterWatermarkResponse
       */
      Models::ImageBlindCharacterWatermarkResponse imageBlindCharacterWatermarkWithOptions(const Models::ImageBlindCharacterWatermarkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ImageBlindCharacterWatermarkRequest
       * @return ImageBlindCharacterWatermarkResponse
       */
      Models::ImageBlindCharacterWatermarkResponse imageBlindCharacterWatermark(const Models::ImageBlindCharacterWatermarkRequest &request);

      Models::ImageBlindCharacterWatermarkResponse imageBlindCharacterWatermarkAdvance(const Models::ImageBlindCharacterWatermarkAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ImageBlindPicWatermarkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ImageBlindPicWatermarkResponse
       */
      Models::ImageBlindPicWatermarkResponse imageBlindPicWatermarkWithOptions(const Models::ImageBlindPicWatermarkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ImageBlindPicWatermarkRequest
       * @return ImageBlindPicWatermarkResponse
       */
      Models::ImageBlindPicWatermarkResponse imageBlindPicWatermark(const Models::ImageBlindPicWatermarkRequest &request);

      Models::ImageBlindPicWatermarkResponse imageBlindPicWatermarkAdvance(const Models::ImageBlindPicWatermarkAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ImitatePhotoStyleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ImitatePhotoStyleResponse
       */
      Models::ImitatePhotoStyleResponse imitatePhotoStyleWithOptions(const Models::ImitatePhotoStyleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ImitatePhotoStyleRequest
       * @return ImitatePhotoStyleResponse
       */
      Models::ImitatePhotoStyleResponse imitatePhotoStyle(const Models::ImitatePhotoStyleRequest &request);

      Models::ImitatePhotoStyleResponse imitatePhotoStyleAdvance(const Models::ImitatePhotoStyleAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request IntelligentCompositionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return IntelligentCompositionResponse
       */
      Models::IntelligentCompositionResponse intelligentCompositionWithOptions(const Models::IntelligentCompositionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request IntelligentCompositionRequest
       * @return IntelligentCompositionResponse
       */
      Models::IntelligentCompositionResponse intelligentComposition(const Models::IntelligentCompositionRequest &request);

      Models::IntelligentCompositionResponse intelligentCompositionAdvance(const Models::IntelligentCompositionAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request MakeSuperResolutionImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MakeSuperResolutionImageResponse
       */
      Models::MakeSuperResolutionImageResponse makeSuperResolutionImageWithOptions(const Models::MakeSuperResolutionImageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request MakeSuperResolutionImageRequest
       * @return MakeSuperResolutionImageResponse
       */
      Models::MakeSuperResolutionImageResponse makeSuperResolutionImage(const Models::MakeSuperResolutionImageRequest &request);

      Models::MakeSuperResolutionImageResponse makeSuperResolutionImageAdvance(const Models::MakeSuperResolutionImageAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request RecolorHDImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RecolorHDImageResponse
       */
      Models::RecolorHDImageResponse recolorHDImageWithOptions(const Models::RecolorHDImageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request RecolorHDImageRequest
       * @return RecolorHDImageResponse
       */
      Models::RecolorHDImageResponse recolorHDImage(const Models::RecolorHDImageRequest &request);

      Models::RecolorHDImageResponse recolorHDImageAdvance(const Models::RecolorHDImageAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request RecolorImageRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RecolorImageResponse
       */
      Models::RecolorImageResponse recolorImageWithOptions(const Models::RecolorImageRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request RecolorImageRequest
       * @return RecolorImageResponse
       */
      Models::RecolorImageResponse recolorImage(const Models::RecolorImageRequest &request);

      Models::RecolorImageResponse recolorImageAdvance(const Models::RecolorImageAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request RemoveImageSubtitlesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveImageSubtitlesResponse
       */
      Models::RemoveImageSubtitlesResponse removeImageSubtitlesWithOptions(const Models::RemoveImageSubtitlesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request RemoveImageSubtitlesRequest
       * @return RemoveImageSubtitlesResponse
       */
      Models::RemoveImageSubtitlesResponse removeImageSubtitles(const Models::RemoveImageSubtitlesRequest &request);

      Models::RemoveImageSubtitlesResponse removeImageSubtitlesAdvance(const Models::RemoveImageSubtitlesAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request RemoveImageWatermarkRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RemoveImageWatermarkResponse
       */
      Models::RemoveImageWatermarkResponse removeImageWatermarkWithOptions(const Models::RemoveImageWatermarkRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request RemoveImageWatermarkRequest
       * @return RemoveImageWatermarkResponse
       */
      Models::RemoveImageWatermarkResponse removeImageWatermark(const Models::RemoveImageWatermarkRequest &request);

      Models::RemoveImageWatermarkResponse removeImageWatermarkAdvance(const Models::RemoveImageWatermarkAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);
  };
} // namespace AlibabaCloud
} // namespace Imageenhan20190930
#endif
