// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITYIKESTORYBOARDJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITYIKESTORYBOARDJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitYikeStoryboardJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitYikeStoryboardJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AspectRatio, aspectRatio_);
      DARABONBA_PTR_TO_JSON(FileURL, fileURL_);
      DARABONBA_PTR_TO_JSON(ModelParams, modelParams_);
      DARABONBA_PTR_TO_JSON(NarrationVoiceId, narrationVoiceId_);
      DARABONBA_PTR_TO_JSON(Resolution, resolution_);
      DARABONBA_PTR_TO_JSON(ShotPromptMode, shotPromptMode_);
      DARABONBA_PTR_TO_JSON(ShotSplitMode, shotSplitMode_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(StyleId, styleId_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
      DARABONBA_PTR_TO_JSON(VideoModel, videoModel_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitYikeStoryboardJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AspectRatio, aspectRatio_);
      DARABONBA_PTR_FROM_JSON(FileURL, fileURL_);
      DARABONBA_PTR_FROM_JSON(ModelParams, modelParams_);
      DARABONBA_PTR_FROM_JSON(NarrationVoiceId, narrationVoiceId_);
      DARABONBA_PTR_FROM_JSON(Resolution, resolution_);
      DARABONBA_PTR_FROM_JSON(ShotPromptMode, shotPromptMode_);
      DARABONBA_PTR_FROM_JSON(ShotSplitMode, shotSplitMode_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(StyleId, styleId_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
      DARABONBA_PTR_FROM_JSON(VideoModel, videoModel_);
    };
    SubmitYikeStoryboardJobRequest() = default ;
    SubmitYikeStoryboardJobRequest(const SubmitYikeStoryboardJobRequest &) = default ;
    SubmitYikeStoryboardJobRequest(SubmitYikeStoryboardJobRequest &&) = default ;
    SubmitYikeStoryboardJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitYikeStoryboardJobRequest() = default ;
    SubmitYikeStoryboardJobRequest& operator=(const SubmitYikeStoryboardJobRequest &) = default ;
    SubmitYikeStoryboardJobRequest& operator=(SubmitYikeStoryboardJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aspectRatio_ == nullptr
        && this->fileURL_ == nullptr && this->modelParams_ == nullptr && this->narrationVoiceId_ == nullptr && this->resolution_ == nullptr && this->shotPromptMode_ == nullptr
        && this->shotSplitMode_ == nullptr && this->sourceType_ == nullptr && this->styleId_ == nullptr && this->title_ == nullptr && this->userData_ == nullptr
        && this->videoModel_ == nullptr; };
    // aspectRatio Field Functions 
    bool hasAspectRatio() const { return this->aspectRatio_ != nullptr;};
    void deleteAspectRatio() { this->aspectRatio_ = nullptr;};
    inline string getAspectRatio() const { DARABONBA_PTR_GET_DEFAULT(aspectRatio_, "") };
    inline SubmitYikeStoryboardJobRequest& setAspectRatio(string aspectRatio) { DARABONBA_PTR_SET_VALUE(aspectRatio_, aspectRatio) };


    // fileURL Field Functions 
    bool hasFileURL() const { return this->fileURL_ != nullptr;};
    void deleteFileURL() { this->fileURL_ = nullptr;};
    inline string getFileURL() const { DARABONBA_PTR_GET_DEFAULT(fileURL_, "") };
    inline SubmitYikeStoryboardJobRequest& setFileURL(string fileURL) { DARABONBA_PTR_SET_VALUE(fileURL_, fileURL) };


    // modelParams Field Functions 
    bool hasModelParams() const { return this->modelParams_ != nullptr;};
    void deleteModelParams() { this->modelParams_ = nullptr;};
    inline string getModelParams() const { DARABONBA_PTR_GET_DEFAULT(modelParams_, "") };
    inline SubmitYikeStoryboardJobRequest& setModelParams(string modelParams) { DARABONBA_PTR_SET_VALUE(modelParams_, modelParams) };


    // narrationVoiceId Field Functions 
    bool hasNarrationVoiceId() const { return this->narrationVoiceId_ != nullptr;};
    void deleteNarrationVoiceId() { this->narrationVoiceId_ = nullptr;};
    inline string getNarrationVoiceId() const { DARABONBA_PTR_GET_DEFAULT(narrationVoiceId_, "") };
    inline SubmitYikeStoryboardJobRequest& setNarrationVoiceId(string narrationVoiceId) { DARABONBA_PTR_SET_VALUE(narrationVoiceId_, narrationVoiceId) };


    // resolution Field Functions 
    bool hasResolution() const { return this->resolution_ != nullptr;};
    void deleteResolution() { this->resolution_ = nullptr;};
    inline string getResolution() const { DARABONBA_PTR_GET_DEFAULT(resolution_, "") };
    inline SubmitYikeStoryboardJobRequest& setResolution(string resolution) { DARABONBA_PTR_SET_VALUE(resolution_, resolution) };


    // shotPromptMode Field Functions 
    bool hasShotPromptMode() const { return this->shotPromptMode_ != nullptr;};
    void deleteShotPromptMode() { this->shotPromptMode_ = nullptr;};
    inline string getShotPromptMode() const { DARABONBA_PTR_GET_DEFAULT(shotPromptMode_, "") };
    inline SubmitYikeStoryboardJobRequest& setShotPromptMode(string shotPromptMode) { DARABONBA_PTR_SET_VALUE(shotPromptMode_, shotPromptMode) };


    // shotSplitMode Field Functions 
    bool hasShotSplitMode() const { return this->shotSplitMode_ != nullptr;};
    void deleteShotSplitMode() { this->shotSplitMode_ = nullptr;};
    inline string getShotSplitMode() const { DARABONBA_PTR_GET_DEFAULT(shotSplitMode_, "") };
    inline SubmitYikeStoryboardJobRequest& setShotSplitMode(string shotSplitMode) { DARABONBA_PTR_SET_VALUE(shotSplitMode_, shotSplitMode) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline SubmitYikeStoryboardJobRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // styleId Field Functions 
    bool hasStyleId() const { return this->styleId_ != nullptr;};
    void deleteStyleId() { this->styleId_ = nullptr;};
    inline string getStyleId() const { DARABONBA_PTR_GET_DEFAULT(styleId_, "") };
    inline SubmitYikeStoryboardJobRequest& setStyleId(string styleId) { DARABONBA_PTR_SET_VALUE(styleId_, styleId) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline SubmitYikeStoryboardJobRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline SubmitYikeStoryboardJobRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


    // videoModel Field Functions 
    bool hasVideoModel() const { return this->videoModel_ != nullptr;};
    void deleteVideoModel() { this->videoModel_ = nullptr;};
    inline string getVideoModel() const { DARABONBA_PTR_GET_DEFAULT(videoModel_, "") };
    inline SubmitYikeStoryboardJobRequest& setVideoModel(string videoModel) { DARABONBA_PTR_SET_VALUE(videoModel_, videoModel) };


  protected:
    shared_ptr<string> aspectRatio_ {};
    shared_ptr<string> fileURL_ {};
    shared_ptr<string> modelParams_ {};
    shared_ptr<string> narrationVoiceId_ {};
    shared_ptr<string> resolution_ {};
    shared_ptr<string> shotPromptMode_ {};
    shared_ptr<string> shotSplitMode_ {};
    shared_ptr<string> sourceType_ {};
    shared_ptr<string> styleId_ {};
    shared_ptr<string> title_ {};
    shared_ptr<string> userData_ {};
    shared_ptr<string> videoModel_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
