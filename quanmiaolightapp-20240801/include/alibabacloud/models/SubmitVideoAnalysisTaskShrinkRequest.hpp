// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITVIDEOANALYSISTASKSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITVIDEOANALYSISTASKSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class SubmitVideoAnalysisTaskShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitVideoAnalysisTaskShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(autoRoleRecognitionVideoUrl, autoRoleRecognitionVideoUrl_);
      DARABONBA_PTR_TO_JSON(deduplicationId, deduplicationId_);
      DARABONBA_PTR_TO_JSON(excludeGenerateOptions, excludeGenerateOptionsShrink_);
      DARABONBA_PTR_TO_JSON(faceIdentitySimilarityMinScore, faceIdentitySimilarityMinScore_);
      DARABONBA_PTR_TO_JSON(frameSampleMethod, frameSampleMethodShrink_);
      DARABONBA_PTR_TO_JSON(generateOptions, generateOptionsShrink_);
      DARABONBA_PTR_TO_JSON(language, language_);
      DARABONBA_PTR_TO_JSON(modelCustomPromptTemplate, modelCustomPromptTemplate_);
      DARABONBA_PTR_TO_JSON(modelCustomPromptTemplateId, modelCustomPromptTemplateId_);
      DARABONBA_PTR_TO_JSON(modelId, modelId_);
      DARABONBA_PTR_TO_JSON(snapshotInterval, snapshotInterval_);
      DARABONBA_PTR_TO_JSON(splitInterval, splitInterval_);
      DARABONBA_PTR_TO_JSON(splitType, splitType_);
      DARABONBA_PTR_TO_JSON(textProcessTasks, textProcessTasksShrink_);
      DARABONBA_PTR_TO_JSON(videoCaptionInfo, videoCaptionInfoShrink_);
      DARABONBA_PTR_TO_JSON(videoExtraInfo, videoExtraInfo_);
      DARABONBA_PTR_TO_JSON(videoModelCustomPromptTemplate, videoModelCustomPromptTemplate_);
      DARABONBA_PTR_TO_JSON(videoModelId, videoModelId_);
      DARABONBA_PTR_TO_JSON(videoRoles, videoRolesShrink_);
      DARABONBA_PTR_TO_JSON(videoShotFaceIdentityCount, videoShotFaceIdentityCount_);
      DARABONBA_PTR_TO_JSON(videoUrl, videoUrl_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitVideoAnalysisTaskShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(autoRoleRecognitionVideoUrl, autoRoleRecognitionVideoUrl_);
      DARABONBA_PTR_FROM_JSON(deduplicationId, deduplicationId_);
      DARABONBA_PTR_FROM_JSON(excludeGenerateOptions, excludeGenerateOptionsShrink_);
      DARABONBA_PTR_FROM_JSON(faceIdentitySimilarityMinScore, faceIdentitySimilarityMinScore_);
      DARABONBA_PTR_FROM_JSON(frameSampleMethod, frameSampleMethodShrink_);
      DARABONBA_PTR_FROM_JSON(generateOptions, generateOptionsShrink_);
      DARABONBA_PTR_FROM_JSON(language, language_);
      DARABONBA_PTR_FROM_JSON(modelCustomPromptTemplate, modelCustomPromptTemplate_);
      DARABONBA_PTR_FROM_JSON(modelCustomPromptTemplateId, modelCustomPromptTemplateId_);
      DARABONBA_PTR_FROM_JSON(modelId, modelId_);
      DARABONBA_PTR_FROM_JSON(snapshotInterval, snapshotInterval_);
      DARABONBA_PTR_FROM_JSON(splitInterval, splitInterval_);
      DARABONBA_PTR_FROM_JSON(splitType, splitType_);
      DARABONBA_PTR_FROM_JSON(textProcessTasks, textProcessTasksShrink_);
      DARABONBA_PTR_FROM_JSON(videoCaptionInfo, videoCaptionInfoShrink_);
      DARABONBA_PTR_FROM_JSON(videoExtraInfo, videoExtraInfo_);
      DARABONBA_PTR_FROM_JSON(videoModelCustomPromptTemplate, videoModelCustomPromptTemplate_);
      DARABONBA_PTR_FROM_JSON(videoModelId, videoModelId_);
      DARABONBA_PTR_FROM_JSON(videoRoles, videoRolesShrink_);
      DARABONBA_PTR_FROM_JSON(videoShotFaceIdentityCount, videoShotFaceIdentityCount_);
      DARABONBA_PTR_FROM_JSON(videoUrl, videoUrl_);
    };
    SubmitVideoAnalysisTaskShrinkRequest() = default ;
    SubmitVideoAnalysisTaskShrinkRequest(const SubmitVideoAnalysisTaskShrinkRequest &) = default ;
    SubmitVideoAnalysisTaskShrinkRequest(SubmitVideoAnalysisTaskShrinkRequest &&) = default ;
    SubmitVideoAnalysisTaskShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitVideoAnalysisTaskShrinkRequest() = default ;
    SubmitVideoAnalysisTaskShrinkRequest& operator=(const SubmitVideoAnalysisTaskShrinkRequest &) = default ;
    SubmitVideoAnalysisTaskShrinkRequest& operator=(SubmitVideoAnalysisTaskShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoRoleRecognitionVideoUrl_ == nullptr
        && return this->deduplicationId_ == nullptr && return this->excludeGenerateOptionsShrink_ == nullptr && return this->faceIdentitySimilarityMinScore_ == nullptr && return this->frameSampleMethodShrink_ == nullptr && return this->generateOptionsShrink_ == nullptr
        && return this->language_ == nullptr && return this->modelCustomPromptTemplate_ == nullptr && return this->modelCustomPromptTemplateId_ == nullptr && return this->modelId_ == nullptr && return this->snapshotInterval_ == nullptr
        && return this->splitInterval_ == nullptr && return this->splitType_ == nullptr && return this->textProcessTasksShrink_ == nullptr && return this->videoCaptionInfoShrink_ == nullptr && return this->videoExtraInfo_ == nullptr
        && return this->videoModelCustomPromptTemplate_ == nullptr && return this->videoModelId_ == nullptr && return this->videoRolesShrink_ == nullptr && return this->videoShotFaceIdentityCount_ == nullptr && return this->videoUrl_ == nullptr; };
    // autoRoleRecognitionVideoUrl Field Functions 
    bool hasAutoRoleRecognitionVideoUrl() const { return this->autoRoleRecognitionVideoUrl_ != nullptr;};
    void deleteAutoRoleRecognitionVideoUrl() { this->autoRoleRecognitionVideoUrl_ = nullptr;};
    inline string autoRoleRecognitionVideoUrl() const { DARABONBA_PTR_GET_DEFAULT(autoRoleRecognitionVideoUrl_, "") };
    inline SubmitVideoAnalysisTaskShrinkRequest& setAutoRoleRecognitionVideoUrl(string autoRoleRecognitionVideoUrl) { DARABONBA_PTR_SET_VALUE(autoRoleRecognitionVideoUrl_, autoRoleRecognitionVideoUrl) };


    // deduplicationId Field Functions 
    bool hasDeduplicationId() const { return this->deduplicationId_ != nullptr;};
    void deleteDeduplicationId() { this->deduplicationId_ = nullptr;};
    inline string deduplicationId() const { DARABONBA_PTR_GET_DEFAULT(deduplicationId_, "") };
    inline SubmitVideoAnalysisTaskShrinkRequest& setDeduplicationId(string deduplicationId) { DARABONBA_PTR_SET_VALUE(deduplicationId_, deduplicationId) };


    // excludeGenerateOptionsShrink Field Functions 
    bool hasExcludeGenerateOptionsShrink() const { return this->excludeGenerateOptionsShrink_ != nullptr;};
    void deleteExcludeGenerateOptionsShrink() { this->excludeGenerateOptionsShrink_ = nullptr;};
    inline string excludeGenerateOptionsShrink() const { DARABONBA_PTR_GET_DEFAULT(excludeGenerateOptionsShrink_, "") };
    inline SubmitVideoAnalysisTaskShrinkRequest& setExcludeGenerateOptionsShrink(string excludeGenerateOptionsShrink) { DARABONBA_PTR_SET_VALUE(excludeGenerateOptionsShrink_, excludeGenerateOptionsShrink) };


    // faceIdentitySimilarityMinScore Field Functions 
    bool hasFaceIdentitySimilarityMinScore() const { return this->faceIdentitySimilarityMinScore_ != nullptr;};
    void deleteFaceIdentitySimilarityMinScore() { this->faceIdentitySimilarityMinScore_ = nullptr;};
    inline float faceIdentitySimilarityMinScore() const { DARABONBA_PTR_GET_DEFAULT(faceIdentitySimilarityMinScore_, 0.0) };
    inline SubmitVideoAnalysisTaskShrinkRequest& setFaceIdentitySimilarityMinScore(float faceIdentitySimilarityMinScore) { DARABONBA_PTR_SET_VALUE(faceIdentitySimilarityMinScore_, faceIdentitySimilarityMinScore) };


    // frameSampleMethodShrink Field Functions 
    bool hasFrameSampleMethodShrink() const { return this->frameSampleMethodShrink_ != nullptr;};
    void deleteFrameSampleMethodShrink() { this->frameSampleMethodShrink_ = nullptr;};
    inline string frameSampleMethodShrink() const { DARABONBA_PTR_GET_DEFAULT(frameSampleMethodShrink_, "") };
    inline SubmitVideoAnalysisTaskShrinkRequest& setFrameSampleMethodShrink(string frameSampleMethodShrink) { DARABONBA_PTR_SET_VALUE(frameSampleMethodShrink_, frameSampleMethodShrink) };


    // generateOptionsShrink Field Functions 
    bool hasGenerateOptionsShrink() const { return this->generateOptionsShrink_ != nullptr;};
    void deleteGenerateOptionsShrink() { this->generateOptionsShrink_ = nullptr;};
    inline string generateOptionsShrink() const { DARABONBA_PTR_GET_DEFAULT(generateOptionsShrink_, "") };
    inline SubmitVideoAnalysisTaskShrinkRequest& setGenerateOptionsShrink(string generateOptionsShrink) { DARABONBA_PTR_SET_VALUE(generateOptionsShrink_, generateOptionsShrink) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string language() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline SubmitVideoAnalysisTaskShrinkRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // modelCustomPromptTemplate Field Functions 
    bool hasModelCustomPromptTemplate() const { return this->modelCustomPromptTemplate_ != nullptr;};
    void deleteModelCustomPromptTemplate() { this->modelCustomPromptTemplate_ = nullptr;};
    inline string modelCustomPromptTemplate() const { DARABONBA_PTR_GET_DEFAULT(modelCustomPromptTemplate_, "") };
    inline SubmitVideoAnalysisTaskShrinkRequest& setModelCustomPromptTemplate(string modelCustomPromptTemplate) { DARABONBA_PTR_SET_VALUE(modelCustomPromptTemplate_, modelCustomPromptTemplate) };


    // modelCustomPromptTemplateId Field Functions 
    bool hasModelCustomPromptTemplateId() const { return this->modelCustomPromptTemplateId_ != nullptr;};
    void deleteModelCustomPromptTemplateId() { this->modelCustomPromptTemplateId_ = nullptr;};
    inline string modelCustomPromptTemplateId() const { DARABONBA_PTR_GET_DEFAULT(modelCustomPromptTemplateId_, "") };
    inline SubmitVideoAnalysisTaskShrinkRequest& setModelCustomPromptTemplateId(string modelCustomPromptTemplateId) { DARABONBA_PTR_SET_VALUE(modelCustomPromptTemplateId_, modelCustomPromptTemplateId) };


    // modelId Field Functions 
    bool hasModelId() const { return this->modelId_ != nullptr;};
    void deleteModelId() { this->modelId_ = nullptr;};
    inline string modelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, "") };
    inline SubmitVideoAnalysisTaskShrinkRequest& setModelId(string modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


    // snapshotInterval Field Functions 
    bool hasSnapshotInterval() const { return this->snapshotInterval_ != nullptr;};
    void deleteSnapshotInterval() { this->snapshotInterval_ = nullptr;};
    inline double snapshotInterval() const { DARABONBA_PTR_GET_DEFAULT(snapshotInterval_, 0.0) };
    inline SubmitVideoAnalysisTaskShrinkRequest& setSnapshotInterval(double snapshotInterval) { DARABONBA_PTR_SET_VALUE(snapshotInterval_, snapshotInterval) };


    // splitInterval Field Functions 
    bool hasSplitInterval() const { return this->splitInterval_ != nullptr;};
    void deleteSplitInterval() { this->splitInterval_ = nullptr;};
    inline int32_t splitInterval() const { DARABONBA_PTR_GET_DEFAULT(splitInterval_, 0) };
    inline SubmitVideoAnalysisTaskShrinkRequest& setSplitInterval(int32_t splitInterval) { DARABONBA_PTR_SET_VALUE(splitInterval_, splitInterval) };


    // splitType Field Functions 
    bool hasSplitType() const { return this->splitType_ != nullptr;};
    void deleteSplitType() { this->splitType_ = nullptr;};
    inline string splitType() const { DARABONBA_PTR_GET_DEFAULT(splitType_, "") };
    inline SubmitVideoAnalysisTaskShrinkRequest& setSplitType(string splitType) { DARABONBA_PTR_SET_VALUE(splitType_, splitType) };


    // textProcessTasksShrink Field Functions 
    bool hasTextProcessTasksShrink() const { return this->textProcessTasksShrink_ != nullptr;};
    void deleteTextProcessTasksShrink() { this->textProcessTasksShrink_ = nullptr;};
    inline string textProcessTasksShrink() const { DARABONBA_PTR_GET_DEFAULT(textProcessTasksShrink_, "") };
    inline SubmitVideoAnalysisTaskShrinkRequest& setTextProcessTasksShrink(string textProcessTasksShrink) { DARABONBA_PTR_SET_VALUE(textProcessTasksShrink_, textProcessTasksShrink) };


    // videoCaptionInfoShrink Field Functions 
    bool hasVideoCaptionInfoShrink() const { return this->videoCaptionInfoShrink_ != nullptr;};
    void deleteVideoCaptionInfoShrink() { this->videoCaptionInfoShrink_ = nullptr;};
    inline string videoCaptionInfoShrink() const { DARABONBA_PTR_GET_DEFAULT(videoCaptionInfoShrink_, "") };
    inline SubmitVideoAnalysisTaskShrinkRequest& setVideoCaptionInfoShrink(string videoCaptionInfoShrink) { DARABONBA_PTR_SET_VALUE(videoCaptionInfoShrink_, videoCaptionInfoShrink) };


    // videoExtraInfo Field Functions 
    bool hasVideoExtraInfo() const { return this->videoExtraInfo_ != nullptr;};
    void deleteVideoExtraInfo() { this->videoExtraInfo_ = nullptr;};
    inline string videoExtraInfo() const { DARABONBA_PTR_GET_DEFAULT(videoExtraInfo_, "") };
    inline SubmitVideoAnalysisTaskShrinkRequest& setVideoExtraInfo(string videoExtraInfo) { DARABONBA_PTR_SET_VALUE(videoExtraInfo_, videoExtraInfo) };


    // videoModelCustomPromptTemplate Field Functions 
    bool hasVideoModelCustomPromptTemplate() const { return this->videoModelCustomPromptTemplate_ != nullptr;};
    void deleteVideoModelCustomPromptTemplate() { this->videoModelCustomPromptTemplate_ = nullptr;};
    inline string videoModelCustomPromptTemplate() const { DARABONBA_PTR_GET_DEFAULT(videoModelCustomPromptTemplate_, "") };
    inline SubmitVideoAnalysisTaskShrinkRequest& setVideoModelCustomPromptTemplate(string videoModelCustomPromptTemplate) { DARABONBA_PTR_SET_VALUE(videoModelCustomPromptTemplate_, videoModelCustomPromptTemplate) };


    // videoModelId Field Functions 
    bool hasVideoModelId() const { return this->videoModelId_ != nullptr;};
    void deleteVideoModelId() { this->videoModelId_ = nullptr;};
    inline string videoModelId() const { DARABONBA_PTR_GET_DEFAULT(videoModelId_, "") };
    inline SubmitVideoAnalysisTaskShrinkRequest& setVideoModelId(string videoModelId) { DARABONBA_PTR_SET_VALUE(videoModelId_, videoModelId) };


    // videoRolesShrink Field Functions 
    bool hasVideoRolesShrink() const { return this->videoRolesShrink_ != nullptr;};
    void deleteVideoRolesShrink() { this->videoRolesShrink_ = nullptr;};
    inline string videoRolesShrink() const { DARABONBA_PTR_GET_DEFAULT(videoRolesShrink_, "") };
    inline SubmitVideoAnalysisTaskShrinkRequest& setVideoRolesShrink(string videoRolesShrink) { DARABONBA_PTR_SET_VALUE(videoRolesShrink_, videoRolesShrink) };


    // videoShotFaceIdentityCount Field Functions 
    bool hasVideoShotFaceIdentityCount() const { return this->videoShotFaceIdentityCount_ != nullptr;};
    void deleteVideoShotFaceIdentityCount() { this->videoShotFaceIdentityCount_ = nullptr;};
    inline int32_t videoShotFaceIdentityCount() const { DARABONBA_PTR_GET_DEFAULT(videoShotFaceIdentityCount_, 0) };
    inline SubmitVideoAnalysisTaskShrinkRequest& setVideoShotFaceIdentityCount(int32_t videoShotFaceIdentityCount) { DARABONBA_PTR_SET_VALUE(videoShotFaceIdentityCount_, videoShotFaceIdentityCount) };


    // videoUrl Field Functions 
    bool hasVideoUrl() const { return this->videoUrl_ != nullptr;};
    void deleteVideoUrl() { this->videoUrl_ = nullptr;};
    inline string videoUrl() const { DARABONBA_PTR_GET_DEFAULT(videoUrl_, "") };
    inline SubmitVideoAnalysisTaskShrinkRequest& setVideoUrl(string videoUrl) { DARABONBA_PTR_SET_VALUE(videoUrl_, videoUrl) };


  protected:
    std::shared_ptr<string> autoRoleRecognitionVideoUrl_ = nullptr;
    std::shared_ptr<string> deduplicationId_ = nullptr;
    std::shared_ptr<string> excludeGenerateOptionsShrink_ = nullptr;
    std::shared_ptr<float> faceIdentitySimilarityMinScore_ = nullptr;
    std::shared_ptr<string> frameSampleMethodShrink_ = nullptr;
    std::shared_ptr<string> generateOptionsShrink_ = nullptr;
    std::shared_ptr<string> language_ = nullptr;
    std::shared_ptr<string> modelCustomPromptTemplate_ = nullptr;
    std::shared_ptr<string> modelCustomPromptTemplateId_ = nullptr;
    std::shared_ptr<string> modelId_ = nullptr;
    std::shared_ptr<double> snapshotInterval_ = nullptr;
    std::shared_ptr<int32_t> splitInterval_ = nullptr;
    std::shared_ptr<string> splitType_ = nullptr;
    std::shared_ptr<string> textProcessTasksShrink_ = nullptr;
    std::shared_ptr<string> videoCaptionInfoShrink_ = nullptr;
    std::shared_ptr<string> videoExtraInfo_ = nullptr;
    std::shared_ptr<string> videoModelCustomPromptTemplate_ = nullptr;
    std::shared_ptr<string> videoModelId_ = nullptr;
    std::shared_ptr<string> videoRolesShrink_ = nullptr;
    std::shared_ptr<int32_t> videoShotFaceIdentityCount_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> videoUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
