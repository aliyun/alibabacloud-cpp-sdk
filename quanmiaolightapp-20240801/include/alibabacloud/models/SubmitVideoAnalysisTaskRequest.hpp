// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITVIDEOANALYSISTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITVIDEOANALYSISTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SubmitVideoAnalysisTaskRequestFrameSampleMethod.hpp>
#include <alibabacloud/models/SubmitVideoAnalysisTaskRequestTextProcessTasks.hpp>
#include <alibabacloud/models/SubmitVideoAnalysisTaskRequestVideoCaptionInfo.hpp>
#include <alibabacloud/models/SubmitVideoAnalysisTaskRequestVideoRoles.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class SubmitVideoAnalysisTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitVideoAnalysisTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(autoRoleRecognitionVideoUrl, autoRoleRecognitionVideoUrl_);
      DARABONBA_PTR_TO_JSON(deduplicationId, deduplicationId_);
      DARABONBA_PTR_TO_JSON(excludeGenerateOptions, excludeGenerateOptions_);
      DARABONBA_PTR_TO_JSON(faceIdentitySimilarityMinScore, faceIdentitySimilarityMinScore_);
      DARABONBA_PTR_TO_JSON(frameSampleMethod, frameSampleMethod_);
      DARABONBA_PTR_TO_JSON(generateOptions, generateOptions_);
      DARABONBA_PTR_TO_JSON(language, language_);
      DARABONBA_PTR_TO_JSON(modelCustomPromptTemplate, modelCustomPromptTemplate_);
      DARABONBA_PTR_TO_JSON(modelCustomPromptTemplateId, modelCustomPromptTemplateId_);
      DARABONBA_PTR_TO_JSON(modelId, modelId_);
      DARABONBA_PTR_TO_JSON(snapshotInterval, snapshotInterval_);
      DARABONBA_PTR_TO_JSON(splitInterval, splitInterval_);
      DARABONBA_PTR_TO_JSON(textProcessTasks, textProcessTasks_);
      DARABONBA_PTR_TO_JSON(videoCaptionInfo, videoCaptionInfo_);
      DARABONBA_PTR_TO_JSON(videoExtraInfo, videoExtraInfo_);
      DARABONBA_PTR_TO_JSON(videoModelCustomPromptTemplate, videoModelCustomPromptTemplate_);
      DARABONBA_PTR_TO_JSON(videoModelId, videoModelId_);
      DARABONBA_PTR_TO_JSON(videoRoles, videoRoles_);
      DARABONBA_PTR_TO_JSON(videoShotFaceIdentityCount, videoShotFaceIdentityCount_);
      DARABONBA_PTR_TO_JSON(videoUrl, videoUrl_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitVideoAnalysisTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(autoRoleRecognitionVideoUrl, autoRoleRecognitionVideoUrl_);
      DARABONBA_PTR_FROM_JSON(deduplicationId, deduplicationId_);
      DARABONBA_PTR_FROM_JSON(excludeGenerateOptions, excludeGenerateOptions_);
      DARABONBA_PTR_FROM_JSON(faceIdentitySimilarityMinScore, faceIdentitySimilarityMinScore_);
      DARABONBA_PTR_FROM_JSON(frameSampleMethod, frameSampleMethod_);
      DARABONBA_PTR_FROM_JSON(generateOptions, generateOptions_);
      DARABONBA_PTR_FROM_JSON(language, language_);
      DARABONBA_PTR_FROM_JSON(modelCustomPromptTemplate, modelCustomPromptTemplate_);
      DARABONBA_PTR_FROM_JSON(modelCustomPromptTemplateId, modelCustomPromptTemplateId_);
      DARABONBA_PTR_FROM_JSON(modelId, modelId_);
      DARABONBA_PTR_FROM_JSON(snapshotInterval, snapshotInterval_);
      DARABONBA_PTR_FROM_JSON(splitInterval, splitInterval_);
      DARABONBA_PTR_FROM_JSON(textProcessTasks, textProcessTasks_);
      DARABONBA_PTR_FROM_JSON(videoCaptionInfo, videoCaptionInfo_);
      DARABONBA_PTR_FROM_JSON(videoExtraInfo, videoExtraInfo_);
      DARABONBA_PTR_FROM_JSON(videoModelCustomPromptTemplate, videoModelCustomPromptTemplate_);
      DARABONBA_PTR_FROM_JSON(videoModelId, videoModelId_);
      DARABONBA_PTR_FROM_JSON(videoRoles, videoRoles_);
      DARABONBA_PTR_FROM_JSON(videoShotFaceIdentityCount, videoShotFaceIdentityCount_);
      DARABONBA_PTR_FROM_JSON(videoUrl, videoUrl_);
    };
    SubmitVideoAnalysisTaskRequest() = default ;
    SubmitVideoAnalysisTaskRequest(const SubmitVideoAnalysisTaskRequest &) = default ;
    SubmitVideoAnalysisTaskRequest(SubmitVideoAnalysisTaskRequest &&) = default ;
    SubmitVideoAnalysisTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitVideoAnalysisTaskRequest() = default ;
    SubmitVideoAnalysisTaskRequest& operator=(const SubmitVideoAnalysisTaskRequest &) = default ;
    SubmitVideoAnalysisTaskRequest& operator=(SubmitVideoAnalysisTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoRoleRecognitionVideoUrl_ != nullptr
        && this->deduplicationId_ != nullptr && this->excludeGenerateOptions_ != nullptr && this->faceIdentitySimilarityMinScore_ != nullptr && this->frameSampleMethod_ != nullptr && this->generateOptions_ != nullptr
        && this->language_ != nullptr && this->modelCustomPromptTemplate_ != nullptr && this->modelCustomPromptTemplateId_ != nullptr && this->modelId_ != nullptr && this->snapshotInterval_ != nullptr
        && this->splitInterval_ != nullptr && this->textProcessTasks_ != nullptr && this->videoCaptionInfo_ != nullptr && this->videoExtraInfo_ != nullptr && this->videoModelCustomPromptTemplate_ != nullptr
        && this->videoModelId_ != nullptr && this->videoRoles_ != nullptr && this->videoShotFaceIdentityCount_ != nullptr && this->videoUrl_ != nullptr; };
    // autoRoleRecognitionVideoUrl Field Functions 
    bool hasAutoRoleRecognitionVideoUrl() const { return this->autoRoleRecognitionVideoUrl_ != nullptr;};
    void deleteAutoRoleRecognitionVideoUrl() { this->autoRoleRecognitionVideoUrl_ = nullptr;};
    inline string autoRoleRecognitionVideoUrl() const { DARABONBA_PTR_GET_DEFAULT(autoRoleRecognitionVideoUrl_, "") };
    inline SubmitVideoAnalysisTaskRequest& setAutoRoleRecognitionVideoUrl(string autoRoleRecognitionVideoUrl) { DARABONBA_PTR_SET_VALUE(autoRoleRecognitionVideoUrl_, autoRoleRecognitionVideoUrl) };


    // deduplicationId Field Functions 
    bool hasDeduplicationId() const { return this->deduplicationId_ != nullptr;};
    void deleteDeduplicationId() { this->deduplicationId_ = nullptr;};
    inline string deduplicationId() const { DARABONBA_PTR_GET_DEFAULT(deduplicationId_, "") };
    inline SubmitVideoAnalysisTaskRequest& setDeduplicationId(string deduplicationId) { DARABONBA_PTR_SET_VALUE(deduplicationId_, deduplicationId) };


    // excludeGenerateOptions Field Functions 
    bool hasExcludeGenerateOptions() const { return this->excludeGenerateOptions_ != nullptr;};
    void deleteExcludeGenerateOptions() { this->excludeGenerateOptions_ = nullptr;};
    inline const vector<string> & excludeGenerateOptions() const { DARABONBA_PTR_GET_CONST(excludeGenerateOptions_, vector<string>) };
    inline vector<string> excludeGenerateOptions() { DARABONBA_PTR_GET(excludeGenerateOptions_, vector<string>) };
    inline SubmitVideoAnalysisTaskRequest& setExcludeGenerateOptions(const vector<string> & excludeGenerateOptions) { DARABONBA_PTR_SET_VALUE(excludeGenerateOptions_, excludeGenerateOptions) };
    inline SubmitVideoAnalysisTaskRequest& setExcludeGenerateOptions(vector<string> && excludeGenerateOptions) { DARABONBA_PTR_SET_RVALUE(excludeGenerateOptions_, excludeGenerateOptions) };


    // faceIdentitySimilarityMinScore Field Functions 
    bool hasFaceIdentitySimilarityMinScore() const { return this->faceIdentitySimilarityMinScore_ != nullptr;};
    void deleteFaceIdentitySimilarityMinScore() { this->faceIdentitySimilarityMinScore_ = nullptr;};
    inline float faceIdentitySimilarityMinScore() const { DARABONBA_PTR_GET_DEFAULT(faceIdentitySimilarityMinScore_, 0.0) };
    inline SubmitVideoAnalysisTaskRequest& setFaceIdentitySimilarityMinScore(float faceIdentitySimilarityMinScore) { DARABONBA_PTR_SET_VALUE(faceIdentitySimilarityMinScore_, faceIdentitySimilarityMinScore) };


    // frameSampleMethod Field Functions 
    bool hasFrameSampleMethod() const { return this->frameSampleMethod_ != nullptr;};
    void deleteFrameSampleMethod() { this->frameSampleMethod_ = nullptr;};
    inline const SubmitVideoAnalysisTaskRequestFrameSampleMethod & frameSampleMethod() const { DARABONBA_PTR_GET_CONST(frameSampleMethod_, SubmitVideoAnalysisTaskRequestFrameSampleMethod) };
    inline SubmitVideoAnalysisTaskRequestFrameSampleMethod frameSampleMethod() { DARABONBA_PTR_GET(frameSampleMethod_, SubmitVideoAnalysisTaskRequestFrameSampleMethod) };
    inline SubmitVideoAnalysisTaskRequest& setFrameSampleMethod(const SubmitVideoAnalysisTaskRequestFrameSampleMethod & frameSampleMethod) { DARABONBA_PTR_SET_VALUE(frameSampleMethod_, frameSampleMethod) };
    inline SubmitVideoAnalysisTaskRequest& setFrameSampleMethod(SubmitVideoAnalysisTaskRequestFrameSampleMethod && frameSampleMethod) { DARABONBA_PTR_SET_RVALUE(frameSampleMethod_, frameSampleMethod) };


    // generateOptions Field Functions 
    bool hasGenerateOptions() const { return this->generateOptions_ != nullptr;};
    void deleteGenerateOptions() { this->generateOptions_ = nullptr;};
    inline const vector<string> & generateOptions() const { DARABONBA_PTR_GET_CONST(generateOptions_, vector<string>) };
    inline vector<string> generateOptions() { DARABONBA_PTR_GET(generateOptions_, vector<string>) };
    inline SubmitVideoAnalysisTaskRequest& setGenerateOptions(const vector<string> & generateOptions) { DARABONBA_PTR_SET_VALUE(generateOptions_, generateOptions) };
    inline SubmitVideoAnalysisTaskRequest& setGenerateOptions(vector<string> && generateOptions) { DARABONBA_PTR_SET_RVALUE(generateOptions_, generateOptions) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string language() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline SubmitVideoAnalysisTaskRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // modelCustomPromptTemplate Field Functions 
    bool hasModelCustomPromptTemplate() const { return this->modelCustomPromptTemplate_ != nullptr;};
    void deleteModelCustomPromptTemplate() { this->modelCustomPromptTemplate_ = nullptr;};
    inline string modelCustomPromptTemplate() const { DARABONBA_PTR_GET_DEFAULT(modelCustomPromptTemplate_, "") };
    inline SubmitVideoAnalysisTaskRequest& setModelCustomPromptTemplate(string modelCustomPromptTemplate) { DARABONBA_PTR_SET_VALUE(modelCustomPromptTemplate_, modelCustomPromptTemplate) };


    // modelCustomPromptTemplateId Field Functions 
    bool hasModelCustomPromptTemplateId() const { return this->modelCustomPromptTemplateId_ != nullptr;};
    void deleteModelCustomPromptTemplateId() { this->modelCustomPromptTemplateId_ = nullptr;};
    inline string modelCustomPromptTemplateId() const { DARABONBA_PTR_GET_DEFAULT(modelCustomPromptTemplateId_, "") };
    inline SubmitVideoAnalysisTaskRequest& setModelCustomPromptTemplateId(string modelCustomPromptTemplateId) { DARABONBA_PTR_SET_VALUE(modelCustomPromptTemplateId_, modelCustomPromptTemplateId) };


    // modelId Field Functions 
    bool hasModelId() const { return this->modelId_ != nullptr;};
    void deleteModelId() { this->modelId_ = nullptr;};
    inline string modelId() const { DARABONBA_PTR_GET_DEFAULT(modelId_, "") };
    inline SubmitVideoAnalysisTaskRequest& setModelId(string modelId) { DARABONBA_PTR_SET_VALUE(modelId_, modelId) };


    // snapshotInterval Field Functions 
    bool hasSnapshotInterval() const { return this->snapshotInterval_ != nullptr;};
    void deleteSnapshotInterval() { this->snapshotInterval_ = nullptr;};
    inline double snapshotInterval() const { DARABONBA_PTR_GET_DEFAULT(snapshotInterval_, 0.0) };
    inline SubmitVideoAnalysisTaskRequest& setSnapshotInterval(double snapshotInterval) { DARABONBA_PTR_SET_VALUE(snapshotInterval_, snapshotInterval) };


    // splitInterval Field Functions 
    bool hasSplitInterval() const { return this->splitInterval_ != nullptr;};
    void deleteSplitInterval() { this->splitInterval_ = nullptr;};
    inline int32_t splitInterval() const { DARABONBA_PTR_GET_DEFAULT(splitInterval_, 0) };
    inline SubmitVideoAnalysisTaskRequest& setSplitInterval(int32_t splitInterval) { DARABONBA_PTR_SET_VALUE(splitInterval_, splitInterval) };


    // textProcessTasks Field Functions 
    bool hasTextProcessTasks() const { return this->textProcessTasks_ != nullptr;};
    void deleteTextProcessTasks() { this->textProcessTasks_ = nullptr;};
    inline const vector<SubmitVideoAnalysisTaskRequestTextProcessTasks> & textProcessTasks() const { DARABONBA_PTR_GET_CONST(textProcessTasks_, vector<SubmitVideoAnalysisTaskRequestTextProcessTasks>) };
    inline vector<SubmitVideoAnalysisTaskRequestTextProcessTasks> textProcessTasks() { DARABONBA_PTR_GET(textProcessTasks_, vector<SubmitVideoAnalysisTaskRequestTextProcessTasks>) };
    inline SubmitVideoAnalysisTaskRequest& setTextProcessTasks(const vector<SubmitVideoAnalysisTaskRequestTextProcessTasks> & textProcessTasks) { DARABONBA_PTR_SET_VALUE(textProcessTasks_, textProcessTasks) };
    inline SubmitVideoAnalysisTaskRequest& setTextProcessTasks(vector<SubmitVideoAnalysisTaskRequestTextProcessTasks> && textProcessTasks) { DARABONBA_PTR_SET_RVALUE(textProcessTasks_, textProcessTasks) };


    // videoCaptionInfo Field Functions 
    bool hasVideoCaptionInfo() const { return this->videoCaptionInfo_ != nullptr;};
    void deleteVideoCaptionInfo() { this->videoCaptionInfo_ = nullptr;};
    inline const SubmitVideoAnalysisTaskRequestVideoCaptionInfo & videoCaptionInfo() const { DARABONBA_PTR_GET_CONST(videoCaptionInfo_, SubmitVideoAnalysisTaskRequestVideoCaptionInfo) };
    inline SubmitVideoAnalysisTaskRequestVideoCaptionInfo videoCaptionInfo() { DARABONBA_PTR_GET(videoCaptionInfo_, SubmitVideoAnalysisTaskRequestVideoCaptionInfo) };
    inline SubmitVideoAnalysisTaskRequest& setVideoCaptionInfo(const SubmitVideoAnalysisTaskRequestVideoCaptionInfo & videoCaptionInfo) { DARABONBA_PTR_SET_VALUE(videoCaptionInfo_, videoCaptionInfo) };
    inline SubmitVideoAnalysisTaskRequest& setVideoCaptionInfo(SubmitVideoAnalysisTaskRequestVideoCaptionInfo && videoCaptionInfo) { DARABONBA_PTR_SET_RVALUE(videoCaptionInfo_, videoCaptionInfo) };


    // videoExtraInfo Field Functions 
    bool hasVideoExtraInfo() const { return this->videoExtraInfo_ != nullptr;};
    void deleteVideoExtraInfo() { this->videoExtraInfo_ = nullptr;};
    inline string videoExtraInfo() const { DARABONBA_PTR_GET_DEFAULT(videoExtraInfo_, "") };
    inline SubmitVideoAnalysisTaskRequest& setVideoExtraInfo(string videoExtraInfo) { DARABONBA_PTR_SET_VALUE(videoExtraInfo_, videoExtraInfo) };


    // videoModelCustomPromptTemplate Field Functions 
    bool hasVideoModelCustomPromptTemplate() const { return this->videoModelCustomPromptTemplate_ != nullptr;};
    void deleteVideoModelCustomPromptTemplate() { this->videoModelCustomPromptTemplate_ = nullptr;};
    inline string videoModelCustomPromptTemplate() const { DARABONBA_PTR_GET_DEFAULT(videoModelCustomPromptTemplate_, "") };
    inline SubmitVideoAnalysisTaskRequest& setVideoModelCustomPromptTemplate(string videoModelCustomPromptTemplate) { DARABONBA_PTR_SET_VALUE(videoModelCustomPromptTemplate_, videoModelCustomPromptTemplate) };


    // videoModelId Field Functions 
    bool hasVideoModelId() const { return this->videoModelId_ != nullptr;};
    void deleteVideoModelId() { this->videoModelId_ = nullptr;};
    inline string videoModelId() const { DARABONBA_PTR_GET_DEFAULT(videoModelId_, "") };
    inline SubmitVideoAnalysisTaskRequest& setVideoModelId(string videoModelId) { DARABONBA_PTR_SET_VALUE(videoModelId_, videoModelId) };


    // videoRoles Field Functions 
    bool hasVideoRoles() const { return this->videoRoles_ != nullptr;};
    void deleteVideoRoles() { this->videoRoles_ = nullptr;};
    inline const vector<SubmitVideoAnalysisTaskRequestVideoRoles> & videoRoles() const { DARABONBA_PTR_GET_CONST(videoRoles_, vector<SubmitVideoAnalysisTaskRequestVideoRoles>) };
    inline vector<SubmitVideoAnalysisTaskRequestVideoRoles> videoRoles() { DARABONBA_PTR_GET(videoRoles_, vector<SubmitVideoAnalysisTaskRequestVideoRoles>) };
    inline SubmitVideoAnalysisTaskRequest& setVideoRoles(const vector<SubmitVideoAnalysisTaskRequestVideoRoles> & videoRoles) { DARABONBA_PTR_SET_VALUE(videoRoles_, videoRoles) };
    inline SubmitVideoAnalysisTaskRequest& setVideoRoles(vector<SubmitVideoAnalysisTaskRequestVideoRoles> && videoRoles) { DARABONBA_PTR_SET_RVALUE(videoRoles_, videoRoles) };


    // videoShotFaceIdentityCount Field Functions 
    bool hasVideoShotFaceIdentityCount() const { return this->videoShotFaceIdentityCount_ != nullptr;};
    void deleteVideoShotFaceIdentityCount() { this->videoShotFaceIdentityCount_ = nullptr;};
    inline int32_t videoShotFaceIdentityCount() const { DARABONBA_PTR_GET_DEFAULT(videoShotFaceIdentityCount_, 0) };
    inline SubmitVideoAnalysisTaskRequest& setVideoShotFaceIdentityCount(int32_t videoShotFaceIdentityCount) { DARABONBA_PTR_SET_VALUE(videoShotFaceIdentityCount_, videoShotFaceIdentityCount) };


    // videoUrl Field Functions 
    bool hasVideoUrl() const { return this->videoUrl_ != nullptr;};
    void deleteVideoUrl() { this->videoUrl_ = nullptr;};
    inline string videoUrl() const { DARABONBA_PTR_GET_DEFAULT(videoUrl_, "") };
    inline SubmitVideoAnalysisTaskRequest& setVideoUrl(string videoUrl) { DARABONBA_PTR_SET_VALUE(videoUrl_, videoUrl) };


  protected:
    std::shared_ptr<string> autoRoleRecognitionVideoUrl_ = nullptr;
    std::shared_ptr<string> deduplicationId_ = nullptr;
    std::shared_ptr<vector<string>> excludeGenerateOptions_ = nullptr;
    std::shared_ptr<float> faceIdentitySimilarityMinScore_ = nullptr;
    std::shared_ptr<SubmitVideoAnalysisTaskRequestFrameSampleMethod> frameSampleMethod_ = nullptr;
    std::shared_ptr<vector<string>> generateOptions_ = nullptr;
    std::shared_ptr<string> language_ = nullptr;
    std::shared_ptr<string> modelCustomPromptTemplate_ = nullptr;
    std::shared_ptr<string> modelCustomPromptTemplateId_ = nullptr;
    std::shared_ptr<string> modelId_ = nullptr;
    std::shared_ptr<double> snapshotInterval_ = nullptr;
    std::shared_ptr<int32_t> splitInterval_ = nullptr;
    std::shared_ptr<vector<SubmitVideoAnalysisTaskRequestTextProcessTasks>> textProcessTasks_ = nullptr;
    std::shared_ptr<SubmitVideoAnalysisTaskRequestVideoCaptionInfo> videoCaptionInfo_ = nullptr;
    std::shared_ptr<string> videoExtraInfo_ = nullptr;
    std::shared_ptr<string> videoModelCustomPromptTemplate_ = nullptr;
    std::shared_ptr<string> videoModelId_ = nullptr;
    std::shared_ptr<vector<SubmitVideoAnalysisTaskRequestVideoRoles>> videoRoles_ = nullptr;
    std::shared_ptr<int32_t> videoShotFaceIdentityCount_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> videoUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
