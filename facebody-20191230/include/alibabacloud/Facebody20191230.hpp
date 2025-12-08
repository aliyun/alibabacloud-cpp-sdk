// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_FACEBODY20191230_HPP_
#define ALIBABACLOUD_FACEBODY20191230_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/Facebody20191230Model.hpp>
#include <alibabacloud/Openapi.hpp>
#include <alibabacloud/Utils.hpp>
#include <darabonba/Runtime.hpp>
#include <map>
#include <alibabacloud/Facebody20191230.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Facebody20191230
{
  class Client : public AlibabaCloud::OpenApi::Client {
    public:

      Client(AlibabaCloud::OpenApi::Utils::Models::Config &config);

      Darabonba::Json _postOSSObject(const string &bucketName, const Darabonba::Json &form, const Darabonba::RuntimeOptions &runtime);
      string getEndpoint(const string &productId, const string &regionId, const string &endpointRule, const string &network, const string &suffix, const map<string, string> &endpointMap, const string &endpoint);

      /**
       * @param request AddFaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddFaceResponse
       */
      Models::AddFaceResponse addFaceWithOptions(const Models::AddFaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request AddFaceRequest
       * @return AddFaceResponse
       */
      Models::AddFaceResponse addFace(const Models::AddFaceRequest &request);

      Models::AddFaceResponse addFaceAdvance(const Models::AddFaceAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request AddFaceEntityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddFaceEntityResponse
       */
      Models::AddFaceEntityResponse addFaceEntityWithOptions(const Models::AddFaceEntityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request AddFaceEntityRequest
       * @return AddFaceEntityResponse
       */
      Models::AddFaceEntityResponse addFaceEntity(const Models::AddFaceEntityRequest &request);

      /**
       * @summary 图像人脸融合模板增加
       *
       * @param request AddFaceImageTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return AddFaceImageTemplateResponse
       */
      Models::AddFaceImageTemplateResponse addFaceImageTemplateWithOptions(const Models::AddFaceImageTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 图像人脸融合模板增加
       *
       * @param request AddFaceImageTemplateRequest
       * @return AddFaceImageTemplateResponse
       */
      Models::AddFaceImageTemplateResponse addFaceImageTemplate(const Models::AddFaceImageTemplateRequest &request);

      Models::AddFaceImageTemplateResponse addFaceImageTemplateAdvance(const Models::AddFaceImageTemplateAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量添加人脸数据
       *
       * @param tmpReq BatchAddFacesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BatchAddFacesResponse
       */
      Models::BatchAddFacesResponse batchAddFacesWithOptions(const Models::BatchAddFacesRequest &tmpReq, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 批量添加人脸数据
       *
       * @param request BatchAddFacesRequest
       * @return BatchAddFacesResponse
       */
      Models::BatchAddFacesResponse batchAddFaces(const Models::BatchAddFacesRequest &request);

      Models::BatchAddFacesResponse batchAddFacesAdvance(const Models::BatchAddFacesAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request BlurFaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BlurFaceResponse
       */
      Models::BlurFaceResponse blurFaceWithOptions(const Models::BlurFaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request BlurFaceRequest
       * @return BlurFaceResponse
       */
      Models::BlurFaceResponse blurFace(const Models::BlurFaceRequest &request);

      Models::BlurFaceResponse blurFaceAdvance(const Models::BlurFaceAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request BodyPostureRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return BodyPostureResponse
       */
      Models::BodyPostureResponse bodyPostureWithOptions(const Models::BodyPostureRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request BodyPostureRequest
       * @return BodyPostureResponse
       */
      Models::BodyPostureResponse bodyPosture(const Models::BodyPostureRequest &request);

      Models::BodyPostureResponse bodyPostureAdvance(const Models::BodyPostureAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 人脸比对(1:1)
       *
       * @param request CompareFaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CompareFaceResponse
       */
      Models::CompareFaceResponse compareFaceWithOptions(const Models::CompareFaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 人脸比对(1:1)
       *
       * @param request CompareFaceRequest
       * @return CompareFaceResponse
       */
      Models::CompareFaceResponse compareFace(const Models::CompareFaceRequest &request);

      Models::CompareFaceResponse compareFaceAdvance(const Models::CompareFaceAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 口罩人脸比对1:1
       *
       * @param request CompareFaceWithMaskRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CompareFaceWithMaskResponse
       */
      Models::CompareFaceWithMaskResponse compareFaceWithMaskWithOptions(const Models::CompareFaceWithMaskRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 口罩人脸比对1:1
       *
       * @param request CompareFaceWithMaskRequest
       * @return CompareFaceWithMaskResponse
       */
      Models::CompareFaceWithMaskResponse compareFaceWithMask(const Models::CompareFaceWithMaskRequest &request);

      Models::CompareFaceWithMaskResponse compareFaceWithMaskAdvance(const Models::CompareFaceWithMaskAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreateFaceDbRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return CreateFaceDbResponse
       */
      Models::CreateFaceDbResponse createFaceDbWithOptions(const Models::CreateFaceDbRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request CreateFaceDbRequest
       * @return CreateFaceDbResponse
       */
      Models::CreateFaceDbResponse createFaceDb(const Models::CreateFaceDbRequest &request);

      /**
       * @summary 换脸鉴别
       *
       * @param request DeepfakeFaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeepfakeFaceResponse
       */
      Models::DeepfakeFaceResponse deepfakeFaceWithOptions(const Models::DeepfakeFaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 换脸鉴别
       *
       * @param request DeepfakeFaceRequest
       * @return DeepfakeFaceResponse
       */
      Models::DeepfakeFaceResponse deepfakeFace(const Models::DeepfakeFaceRequest &request);

      Models::DeepfakeFaceResponse deepfakeFaceAdvance(const Models::DeepfakeFaceAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteFaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteFaceResponse
       */
      Models::DeleteFaceResponse deleteFaceWithOptions(const Models::DeleteFaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteFaceRequest
       * @return DeleteFaceResponse
       */
      Models::DeleteFaceResponse deleteFace(const Models::DeleteFaceRequest &request);

      /**
       * @param request DeleteFaceDbRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteFaceDbResponse
       */
      Models::DeleteFaceDbResponse deleteFaceDbWithOptions(const Models::DeleteFaceDbRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteFaceDbRequest
       * @return DeleteFaceDbResponse
       */
      Models::DeleteFaceDbResponse deleteFaceDb(const Models::DeleteFaceDbRequest &request);

      /**
       * @param request DeleteFaceEntityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteFaceEntityResponse
       */
      Models::DeleteFaceEntityResponse deleteFaceEntityWithOptions(const Models::DeleteFaceEntityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DeleteFaceEntityRequest
       * @return DeleteFaceEntityResponse
       */
      Models::DeleteFaceEntityResponse deleteFaceEntity(const Models::DeleteFaceEntityRequest &request);

      /**
       * @summary 图像人脸融合模板删除
       *
       * @param request DeleteFaceImageTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DeleteFaceImageTemplateResponse
       */
      Models::DeleteFaceImageTemplateResponse deleteFaceImageTemplateWithOptions(const Models::DeleteFaceImageTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 图像人脸融合模板删除
       *
       * @param request DeleteFaceImageTemplateRequest
       * @return DeleteFaceImageTemplateResponse
       */
      Models::DeleteFaceImageTemplateResponse deleteFaceImageTemplate(const Models::DeleteFaceImageTemplateRequest &request);

      /**
       * @param request DetectBodyCountRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetectBodyCountResponse
       */
      Models::DetectBodyCountResponse detectBodyCountWithOptions(const Models::DetectBodyCountRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DetectBodyCountRequest
       * @return DetectBodyCountResponse
       */
      Models::DetectBodyCountResponse detectBodyCount(const Models::DetectBodyCountRequest &request);

      Models::DetectBodyCountResponse detectBodyCountAdvance(const Models::DetectBodyCountAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DetectCelebrityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetectCelebrityResponse
       */
      Models::DetectCelebrityResponse detectCelebrityWithOptions(const Models::DetectCelebrityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DetectCelebrityRequest
       * @return DetectCelebrityResponse
       */
      Models::DetectCelebrityResponse detectCelebrity(const Models::DetectCelebrityRequest &request);

      Models::DetectCelebrityResponse detectCelebrityAdvance(const Models::DetectCelebrityAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DetectFaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetectFaceResponse
       */
      Models::DetectFaceResponse detectFaceWithOptions(const Models::DetectFaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DetectFaceRequest
       * @return DetectFaceResponse
       */
      Models::DetectFaceResponse detectFace(const Models::DetectFaceRequest &request);

      Models::DetectFaceResponse detectFaceAdvance(const Models::DetectFaceAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 红外人脸活体检测
       *
       * @param request DetectInfraredLivingFaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetectInfraredLivingFaceResponse
       */
      Models::DetectInfraredLivingFaceResponse detectInfraredLivingFaceWithOptions(const Models::DetectInfraredLivingFaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 红外人脸活体检测
       *
       * @param request DetectInfraredLivingFaceRequest
       * @return DetectInfraredLivingFaceResponse
       */
      Models::DetectInfraredLivingFaceResponse detectInfraredLivingFace(const Models::DetectInfraredLivingFaceRequest &request);

      Models::DetectInfraredLivingFaceResponse detectInfraredLivingFaceAdvance(const Models::DetectInfraredLivingFaceAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 人脸活体检测(DetectLivingFace)
       *
       * @param request DetectLivingFaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetectLivingFaceResponse
       */
      Models::DetectLivingFaceResponse detectLivingFaceWithOptions(const Models::DetectLivingFaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 人脸活体检测(DetectLivingFace)
       *
       * @param request DetectLivingFaceRequest
       * @return DetectLivingFaceResponse
       */
      Models::DetectLivingFaceResponse detectLivingFace(const Models::DetectLivingFaceRequest &request);

      Models::DetectLivingFaceResponse detectLivingFaceAdvance(const Models::DetectLivingFaceAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DetectPedestrianRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetectPedestrianResponse
       */
      Models::DetectPedestrianResponse detectPedestrianWithOptions(const Models::DetectPedestrianRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DetectPedestrianRequest
       * @return DetectPedestrianResponse
       */
      Models::DetectPedestrianResponse detectPedestrian(const Models::DetectPedestrianRequest &request);

      Models::DetectPedestrianResponse detectPedestrianAdvance(const Models::DetectPedestrianAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DetectVideoLivingFaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return DetectVideoLivingFaceResponse
       */
      Models::DetectVideoLivingFaceResponse detectVideoLivingFaceWithOptions(const Models::DetectVideoLivingFaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request DetectVideoLivingFaceRequest
       * @return DetectVideoLivingFaceResponse
       */
      Models::DetectVideoLivingFaceResponse detectVideoLivingFace(const Models::DetectVideoLivingFaceRequest &request);

      Models::DetectVideoLivingFaceResponse detectVideoLivingFaceAdvance(const Models::DetectVideoLivingFaceAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request EnhanceFaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return EnhanceFaceResponse
       */
      Models::EnhanceFaceResponse enhanceFaceWithOptions(const Models::EnhanceFaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request EnhanceFaceRequest
       * @return EnhanceFaceResponse
       */
      Models::EnhanceFaceResponse enhanceFace(const Models::EnhanceFaceRequest &request);

      Models::EnhanceFaceResponse enhanceFaceAdvance(const Models::EnhanceFaceAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 指纹提取
       *
       * @param request ExtractFingerPrintRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ExtractFingerPrintResponse
       */
      Models::ExtractFingerPrintResponse extractFingerPrintWithOptions(const Models::ExtractFingerPrintRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 指纹提取
       *
       * @param request ExtractFingerPrintRequest
       * @return ExtractFingerPrintResponse
       */
      Models::ExtractFingerPrintResponse extractFingerPrint(const Models::ExtractFingerPrintRequest &request);

      Models::ExtractFingerPrintResponse extractFingerPrintAdvance(const Models::ExtractFingerPrintAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request FaceBeautyRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return FaceBeautyResponse
       */
      Models::FaceBeautyResponse faceBeautyWithOptions(const Models::FaceBeautyRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request FaceBeautyRequest
       * @return FaceBeautyResponse
       */
      Models::FaceBeautyResponse faceBeauty(const Models::FaceBeautyRequest &request);

      Models::FaceBeautyResponse faceBeautyAdvance(const Models::FaceBeautyAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GenRealPersonVerificationTokenRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenRealPersonVerificationTokenResponse
       */
      Models::GenRealPersonVerificationTokenResponse genRealPersonVerificationTokenWithOptions(const Models::GenRealPersonVerificationTokenRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GenRealPersonVerificationTokenRequest
       * @return GenRealPersonVerificationTokenResponse
       */
      Models::GenRealPersonVerificationTokenResponse genRealPersonVerificationToken(const Models::GenRealPersonVerificationTokenRequest &request);

      /**
       * @param request GenerateHumanAnimeStyleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateHumanAnimeStyleResponse
       */
      Models::GenerateHumanAnimeStyleResponse generateHumanAnimeStyleWithOptions(const Models::GenerateHumanAnimeStyleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GenerateHumanAnimeStyleRequest
       * @return GenerateHumanAnimeStyleResponse
       */
      Models::GenerateHumanAnimeStyleResponse generateHumanAnimeStyle(const Models::GenerateHumanAnimeStyleRequest &request);

      Models::GenerateHumanAnimeStyleResponse generateHumanAnimeStyleAdvance(const Models::GenerateHumanAnimeStyleAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 人像素描风格化
       *
       * @param request GenerateHumanSketchStyleRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GenerateHumanSketchStyleResponse
       */
      Models::GenerateHumanSketchStyleResponse generateHumanSketchStyleWithOptions(const Models::GenerateHumanSketchStyleRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 人像素描风格化
       *
       * @param request GenerateHumanSketchStyleRequest
       * @return GenerateHumanSketchStyleResponse
       */
      Models::GenerateHumanSketchStyleResponse generateHumanSketchStyle(const Models::GenerateHumanSketchStyleRequest &request);

      Models::GenerateHumanSketchStyleResponse generateHumanSketchStyleAdvance(const Models::GenerateHumanSketchStyleAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetFaceEntityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetFaceEntityResponse
       */
      Models::GetFaceEntityResponse getFaceEntityWithOptions(const Models::GetFaceEntityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetFaceEntityRequest
       * @return GetFaceEntityResponse
       */
      Models::GetFaceEntityResponse getFaceEntity(const Models::GetFaceEntityRequest &request);

      /**
       * @param request GetRealPersonVerificationResultRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return GetRealPersonVerificationResultResponse
       */
      Models::GetRealPersonVerificationResultResponse getRealPersonVerificationResultWithOptions(const Models::GetRealPersonVerificationResultRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request GetRealPersonVerificationResultRequest
       * @return GetRealPersonVerificationResultResponse
       */
      Models::GetRealPersonVerificationResultResponse getRealPersonVerificationResult(const Models::GetRealPersonVerificationResultRequest &request);

      /**
       * @summary 智能瘦脸
       *
       * @param request LiquifyFaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return LiquifyFaceResponse
       */
      Models::LiquifyFaceResponse liquifyFaceWithOptions(const Models::LiquifyFaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 智能瘦脸
       *
       * @param request LiquifyFaceRequest
       * @return LiquifyFaceResponse
       */
      Models::LiquifyFaceResponse liquifyFace(const Models::LiquifyFaceRequest &request);

      Models::LiquifyFaceResponse liquifyFaceAdvance(const Models::LiquifyFaceAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListFaceDbsRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListFaceDbsResponse
       */
      Models::ListFaceDbsResponse listFaceDbsWithOptions(const Models::ListFaceDbsRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListFaceDbsRequest
       * @return ListFaceDbsResponse
       */
      Models::ListFaceDbsResponse listFaceDbs(const Models::ListFaceDbsRequest &request);

      /**
       * @param request ListFaceEntitiesRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return ListFaceEntitiesResponse
       */
      Models::ListFaceEntitiesResponse listFaceEntitiesWithOptions(const Models::ListFaceEntitiesRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request ListFaceEntitiesRequest
       * @return ListFaceEntitiesResponse
       */
      Models::ListFaceEntitiesResponse listFaceEntities(const Models::ListFaceEntitiesRequest &request);

      /**
       * @summary 图像人脸融合
       *
       * @param request MergeImageFaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MergeImageFaceResponse
       */
      Models::MergeImageFaceResponse mergeImageFaceWithOptions(const Models::MergeImageFaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 图像人脸融合
       *
       * @param request MergeImageFaceRequest
       * @return MergeImageFaceResponse
       */
      Models::MergeImageFaceResponse mergeImageFace(const Models::MergeImageFaceRequest &request);

      Models::MergeImageFaceResponse mergeImageFaceAdvance(const Models::MergeImageFaceAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 线上监考
       *
       * @param request MonitorExaminationRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return MonitorExaminationResponse
       */
      Models::MonitorExaminationResponse monitorExaminationWithOptions(const Models::MonitorExaminationRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 线上监考
       *
       * @param request MonitorExaminationRequest
       * @return MonitorExaminationResponse
       */
      Models::MonitorExaminationResponse monitorExamination(const Models::MonitorExaminationRequest &request);

      Models::MonitorExaminationResponse monitorExaminationAdvance(const Models::MonitorExaminationAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request PedestrianDetectAttributeRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return PedestrianDetectAttributeResponse
       */
      Models::PedestrianDetectAttributeResponse pedestrianDetectAttributeWithOptions(const Models::PedestrianDetectAttributeRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request PedestrianDetectAttributeRequest
       * @return PedestrianDetectAttributeResponse
       */
      Models::PedestrianDetectAttributeResponse pedestrianDetectAttribute(const Models::PedestrianDetectAttributeRequest &request);

      Models::PedestrianDetectAttributeResponse pedestrianDetectAttributeAdvance(const Models::PedestrianDetectAttributeAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 图像人脸融合模板查询
       *
       * @param request QueryFaceImageTemplateRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return QueryFaceImageTemplateResponse
       */
      Models::QueryFaceImageTemplateResponse queryFaceImageTemplateWithOptions(const Models::QueryFaceImageTemplateRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 图像人脸融合模板查询
       *
       * @param request QueryFaceImageTemplateRequest
       * @return QueryFaceImageTemplateResponse
       */
      Models::QueryFaceImageTemplateResponse queryFaceImageTemplate(const Models::QueryFaceImageTemplateRequest &request);

      /**
       * @summary 动作行为识别(RecognizeAction)
       *
       * @param request RecognizeActionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RecognizeActionResponse
       */
      Models::RecognizeActionResponse recognizeActionWithOptions(const Models::RecognizeActionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 动作行为识别(RecognizeAction)
       *
       * @param request RecognizeActionRequest
       * @return RecognizeActionResponse
       */
      Models::RecognizeActionResponse recognizeAction(const Models::RecognizeActionRequest &request);

      Models::RecognizeActionResponse recognizeActionAdvance(const Models::RecognizeActionAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request RecognizeExpressionRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RecognizeExpressionResponse
       */
      Models::RecognizeExpressionResponse recognizeExpressionWithOptions(const Models::RecognizeExpressionRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request RecognizeExpressionRequest
       * @return RecognizeExpressionResponse
       */
      Models::RecognizeExpressionResponse recognizeExpression(const Models::RecognizeExpressionRequest &request);

      Models::RecognizeExpressionResponse recognizeExpressionAdvance(const Models::RecognizeExpressionAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request RecognizeFaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RecognizeFaceResponse
       */
      Models::RecognizeFaceResponse recognizeFaceWithOptions(const Models::RecognizeFaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request RecognizeFaceRequest
       * @return RecognizeFaceResponse
       */
      Models::RecognizeFaceResponse recognizeFace(const Models::RecognizeFaceRequest &request);

      Models::RecognizeFaceResponse recognizeFaceAdvance(const Models::RecognizeFaceAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 公众人脸识别(RecognizePublicFace)
       *
       * @param request RecognizePublicFaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RecognizePublicFaceResponse
       */
      Models::RecognizePublicFaceResponse recognizePublicFaceWithOptions(const Models::RecognizePublicFaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 公众人脸识别(RecognizePublicFace)
       *
       * @param request RecognizePublicFaceRequest
       * @return RecognizePublicFaceResponse
       */
      Models::RecognizePublicFaceResponse recognizePublicFace(const Models::RecognizePublicFaceRequest &request);

      Models::RecognizePublicFaceResponse recognizePublicFaceAdvance(const Models::RecognizePublicFaceAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 美肤
       *
       * @param request RetouchSkinRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return RetouchSkinResponse
       */
      Models::RetouchSkinResponse retouchSkinWithOptions(const Models::RetouchSkinRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary 美肤
       *
       * @param request RetouchSkinRequest
       * @return RetouchSkinResponse
       */
      Models::RetouchSkinResponse retouchSkin(const Models::RetouchSkinRequest &request);

      Models::RetouchSkinResponse retouchSkinAdvance(const Models::RetouchSkinAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary summary
       *
       * @param request SearchFaceRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return SearchFaceResponse
       */
      Models::SearchFaceResponse searchFaceWithOptions(const Models::SearchFaceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @summary summary
       *
       * @param request SearchFaceRequest
       * @return SearchFaceResponse
       */
      Models::SearchFaceResponse searchFace(const Models::SearchFaceRequest &request);

      Models::SearchFaceResponse searchFaceAdvance(const Models::SearchFaceAdvanceRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request UpdateFaceEntityRequest
       * @param runtime runtime options for this request RuntimeOptions
       * @return UpdateFaceEntityResponse
       */
      Models::UpdateFaceEntityResponse updateFaceEntityWithOptions(const Models::UpdateFaceEntityRequest &request, const Darabonba::RuntimeOptions &runtime);

      /**
       * @param request UpdateFaceEntityRequest
       * @return UpdateFaceEntityResponse
       */
      Models::UpdateFaceEntityResponse updateFaceEntity(const Models::UpdateFaceEntityRequest &request);
  };
} // namespace AlibabaCloud
} // namespace Facebody20191230
#endif
