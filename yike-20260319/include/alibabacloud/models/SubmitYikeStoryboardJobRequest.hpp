// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITYIKESTORYBOARDJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITYIKESTORYBOARDJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Yike20260319
{
namespace Models
{
  class SubmitYikeStoryboardJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitYikeStoryboardJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AspectRatio, aspectRatio_);
      DARABONBA_PTR_TO_JSON(ExecMode, execMode_);
      DARABONBA_PTR_TO_JSON(FileURL, fileURL_);
      DARABONBA_PTR_TO_JSON(KeepOriginDialogue, keepOriginDialogue_);
      DARABONBA_PTR_TO_JSON(ModelParams, modelParams_);
      DARABONBA_PTR_TO_JSON(NarrationVoiceId, narrationVoiceId_);
      DARABONBA_PTR_TO_JSON(NeedCaption, needCaption_);
      DARABONBA_PTR_TO_JSON(Resolution, resolution_);
      DARABONBA_PTR_TO_JSON(ShotPromptLang, shotPromptLang_);
      DARABONBA_PTR_TO_JSON(ShotPromptMode, shotPromptMode_);
      DARABONBA_PTR_TO_JSON(ShotSplitMode, shotSplitMode_);
      DARABONBA_PTR_TO_JSON(SkipFailureShot, skipFailureShot_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(StyleId, styleId_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
      DARABONBA_PTR_TO_JSON(VideoModel, videoModel_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitYikeStoryboardJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AspectRatio, aspectRatio_);
      DARABONBA_PTR_FROM_JSON(ExecMode, execMode_);
      DARABONBA_PTR_FROM_JSON(FileURL, fileURL_);
      DARABONBA_PTR_FROM_JSON(KeepOriginDialogue, keepOriginDialogue_);
      DARABONBA_PTR_FROM_JSON(ModelParams, modelParams_);
      DARABONBA_PTR_FROM_JSON(NarrationVoiceId, narrationVoiceId_);
      DARABONBA_PTR_FROM_JSON(NeedCaption, needCaption_);
      DARABONBA_PTR_FROM_JSON(Resolution, resolution_);
      DARABONBA_PTR_FROM_JSON(ShotPromptLang, shotPromptLang_);
      DARABONBA_PTR_FROM_JSON(ShotPromptMode, shotPromptMode_);
      DARABONBA_PTR_FROM_JSON(ShotSplitMode, shotSplitMode_);
      DARABONBA_PTR_FROM_JSON(SkipFailureShot, skipFailureShot_);
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
        && this->execMode_ == nullptr && this->fileURL_ == nullptr && this->keepOriginDialogue_ == nullptr && this->modelParams_ == nullptr && this->narrationVoiceId_ == nullptr
        && this->needCaption_ == nullptr && this->resolution_ == nullptr && this->shotPromptLang_ == nullptr && this->shotPromptMode_ == nullptr && this->shotSplitMode_ == nullptr
        && this->skipFailureShot_ == nullptr && this->sourceType_ == nullptr && this->styleId_ == nullptr && this->title_ == nullptr && this->userData_ == nullptr
        && this->videoModel_ == nullptr; };
    // aspectRatio Field Functions 
    bool hasAspectRatio() const { return this->aspectRatio_ != nullptr;};
    void deleteAspectRatio() { this->aspectRatio_ = nullptr;};
    inline string getAspectRatio() const { DARABONBA_PTR_GET_DEFAULT(aspectRatio_, "") };
    inline SubmitYikeStoryboardJobRequest& setAspectRatio(string aspectRatio) { DARABONBA_PTR_SET_VALUE(aspectRatio_, aspectRatio) };


    // execMode Field Functions 
    bool hasExecMode() const { return this->execMode_ != nullptr;};
    void deleteExecMode() { this->execMode_ = nullptr;};
    inline string getExecMode() const { DARABONBA_PTR_GET_DEFAULT(execMode_, "") };
    inline SubmitYikeStoryboardJobRequest& setExecMode(string execMode) { DARABONBA_PTR_SET_VALUE(execMode_, execMode) };


    // fileURL Field Functions 
    bool hasFileURL() const { return this->fileURL_ != nullptr;};
    void deleteFileURL() { this->fileURL_ = nullptr;};
    inline string getFileURL() const { DARABONBA_PTR_GET_DEFAULT(fileURL_, "") };
    inline SubmitYikeStoryboardJobRequest& setFileURL(string fileURL) { DARABONBA_PTR_SET_VALUE(fileURL_, fileURL) };


    // keepOriginDialogue Field Functions 
    bool hasKeepOriginDialogue() const { return this->keepOriginDialogue_ != nullptr;};
    void deleteKeepOriginDialogue() { this->keepOriginDialogue_ = nullptr;};
    inline bool getKeepOriginDialogue() const { DARABONBA_PTR_GET_DEFAULT(keepOriginDialogue_, false) };
    inline SubmitYikeStoryboardJobRequest& setKeepOriginDialogue(bool keepOriginDialogue) { DARABONBA_PTR_SET_VALUE(keepOriginDialogue_, keepOriginDialogue) };


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


    // needCaption Field Functions 
    bool hasNeedCaption() const { return this->needCaption_ != nullptr;};
    void deleteNeedCaption() { this->needCaption_ = nullptr;};
    inline bool getNeedCaption() const { DARABONBA_PTR_GET_DEFAULT(needCaption_, false) };
    inline SubmitYikeStoryboardJobRequest& setNeedCaption(bool needCaption) { DARABONBA_PTR_SET_VALUE(needCaption_, needCaption) };


    // resolution Field Functions 
    bool hasResolution() const { return this->resolution_ != nullptr;};
    void deleteResolution() { this->resolution_ = nullptr;};
    inline string getResolution() const { DARABONBA_PTR_GET_DEFAULT(resolution_, "") };
    inline SubmitYikeStoryboardJobRequest& setResolution(string resolution) { DARABONBA_PTR_SET_VALUE(resolution_, resolution) };


    // shotPromptLang Field Functions 
    bool hasShotPromptLang() const { return this->shotPromptLang_ != nullptr;};
    void deleteShotPromptLang() { this->shotPromptLang_ = nullptr;};
    inline string getShotPromptLang() const { DARABONBA_PTR_GET_DEFAULT(shotPromptLang_, "") };
    inline SubmitYikeStoryboardJobRequest& setShotPromptLang(string shotPromptLang) { DARABONBA_PTR_SET_VALUE(shotPromptLang_, shotPromptLang) };


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


    // skipFailureShot Field Functions 
    bool hasSkipFailureShot() const { return this->skipFailureShot_ != nullptr;};
    void deleteSkipFailureShot() { this->skipFailureShot_ = nullptr;};
    inline bool getSkipFailureShot() const { DARABONBA_PTR_GET_DEFAULT(skipFailureShot_, false) };
    inline SubmitYikeStoryboardJobRequest& setSkipFailureShot(bool skipFailureShot) { DARABONBA_PTR_SET_VALUE(skipFailureShot_, skipFailureShot) };


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
    // The aspect ratio of the output video. Valid values:
    // - 16:9
    // - 9:16
    // - 4:3
    // - 3:4
    shared_ptr<string> aspectRatio_ {};
    // The execution mode for storyboard generation. Valid values:
    // - FullPipeline: full pipeline generation, which includes storyboard generation and shot video generation.
    // - StoryboardOnly: generates only the storyboard.
    shared_ptr<string> execMode_ {};
    // The OSS URL of the file. The URL must point to a file with a .txt or .doc extension.
    shared_ptr<string> fileURL_ {};
    // Specifies whether to retain the original dialogue during final video composition. Default value: True.
    shared_ptr<bool> keepOriginDialogue_ {};
    // The model parameters in JSON format.
    // 
    //  "AudioEnable": false disables audio.
    shared_ptr<string> modelParams_ {};
    // The narration voice ID. Valid values:
    // - sys_GracefulPoisedWoman: mature graceful female
    // - sys_ElderlyWistfulWoman: wistful elderly female
    // - sys_SweetBrightGirl: sweet bright girl
    // - sys_YoungGracefulWoman: gentle graceful female
    // - sys_MaturePoisedWoman: poised mature female
    // - sys_MatureWiseWoman: elegant wise female
    // - sys_CalmDeepMale: calm deep male
    // - sys_SereneIntellect: serene intellectual male
    // - sys_MajesticBaritone: majestic baritone male
    // - sys_GravellySoulful: gravelly soulful male
    // - sys_ClassicYoungMan: classic narration male
    // - sys_WiseYoungMan: wise narration male
    // - sys_ClassicYoungWoman: classic narration female
    // - sys_IntellectualYoungWoman: intellectual narration female
    // - sys_GentleYoungMan: gentle narration male
    // - sys_thoughtfulBoy: thoughtful boy
    // - sys_RichBassMale: rich bass male
    // - sys_ClassicMiddleAgedWoman: classic middle-aged narration female
    shared_ptr<string> narrationVoiceId_ {};
    shared_ptr<bool> needCaption_ {};
    // The resolution of the output video. Valid values:
    // - 720P
    // - 1080P
    // - 2K
    // - 4K
    shared_ptr<string> resolution_ {};
    shared_ptr<string> shotPromptLang_ {};
    // The storyboard shot generation mode. Valid values:
    // - multi: multi-reference video generation
    // - default: image-to-video generation
    shared_ptr<string> shotPromptMode_ {};
    // The shot split mode. Valid values:
    // - firstPersonNarration: narration commentary mode
    shared_ptr<string> shotSplitMode_ {};
    // Specifies whether to skip failed shots. Default value: True.
    shared_ptr<bool> skipFailureShot_ {};
    // The type of the material source. Valid values:
    // - Novel: novel
    shared_ptr<string> sourceType_ {};
    // The storyboard style ID. Valid values:
    // - RealisticPhotographyPro: realistic photography Pro
    // - RealisticGuzhuangPro: realistic ancient costume Pro
    // - RealisticXianxiaPro: realistic Xianxia Pro
    // - RealisticWesternPro: Western realistic Pro
    // - RealisticPhotography: realistic photography
    // - RealisticGuzhuang: realistic ancient costume
    // - RealisticXianxia: realistic Xianxia
    // - RealisticWasteland: realistic wasteland
    // - RealisticEra: realistic vintage
    // - GuofengAnime: 2D Chinese-style anime
    // - GuofengAnime3D: 3D Chinese-style anime
    // - AncientRomanceAnime: anime ancient romance
    // - PostApocalypticAnime: anime post-apocalyptic
    // - Cartoon3D: 3D cartoon
    // - Photorealistic3D: photorealistic 3D rendering
    // - SciFiRealism: sci-fi realism
    // - Chibi3D: 3D chibi
    // - ShojoManga: Japanese manga
    // - NewPeriodAnime: new era Japanese anime
    // - FairyTale2D: 2D fairy tale
    // - Wasteland2D: 2D wasteland
    // - InkWuxia: ink wash Wuxia
    // - ShadiaoMeme: panda head meme style
    // - Chibi2D: 2D chibi
    // - Ghibli: Ghibli
    // - SciFiComic: cyberpunk
    // - AmericanSuperhero: American superhero
    shared_ptr<string> styleId_ {};
    // The task title. If not specified, a default title is automatically generated based on the date. The title cannot exceed 128 bytes in length and must be UTF-8 encoded.
    shared_ptr<string> title_ {};
    // The custom settings in JSON format. Fields include:
    // - NotifyAddress: the callback URL for task completion. MNS callbacks and HTTP callbacks are supported.
    shared_ptr<string> userData_ {};
    // The video model. Valid values:
    // - wan2.6-r2v-flash
    shared_ptr<string> videoModel_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Yike20260319
#endif
