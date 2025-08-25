// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEVIDEOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GENERATEVIDEOREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GenerateVideoRequestFileList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Videoenhan20200320
{
namespace Models
{
  class GenerateVideoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateVideoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(DurationAdaption, durationAdaption_);
      DARABONBA_PTR_TO_JSON(FileList, fileList_);
      DARABONBA_PTR_TO_JSON(Height, height_);
      DARABONBA_PTR_TO_JSON(Mute, mute_);
      DARABONBA_PTR_TO_JSON(PuzzleEffect, puzzleEffect_);
      DARABONBA_PTR_TO_JSON(Scene, scene_);
      DARABONBA_PTR_TO_JSON(SmartEffect, smartEffect_);
      DARABONBA_PTR_TO_JSON(Style, style_);
      DARABONBA_PTR_TO_JSON(TransitionStyle, transitionStyle_);
      DARABONBA_PTR_TO_JSON(Width, width_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateVideoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(DurationAdaption, durationAdaption_);
      DARABONBA_PTR_FROM_JSON(FileList, fileList_);
      DARABONBA_PTR_FROM_JSON(Height, height_);
      DARABONBA_PTR_FROM_JSON(Mute, mute_);
      DARABONBA_PTR_FROM_JSON(PuzzleEffect, puzzleEffect_);
      DARABONBA_PTR_FROM_JSON(Scene, scene_);
      DARABONBA_PTR_FROM_JSON(SmartEffect, smartEffect_);
      DARABONBA_PTR_FROM_JSON(Style, style_);
      DARABONBA_PTR_FROM_JSON(TransitionStyle, transitionStyle_);
      DARABONBA_PTR_FROM_JSON(Width, width_);
    };
    GenerateVideoRequest() = default ;
    GenerateVideoRequest(const GenerateVideoRequest &) = default ;
    GenerateVideoRequest(GenerateVideoRequest &&) = default ;
    GenerateVideoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateVideoRequest() = default ;
    GenerateVideoRequest& operator=(const GenerateVideoRequest &) = default ;
    GenerateVideoRequest& operator=(GenerateVideoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->duration_ != nullptr
        && this->durationAdaption_ != nullptr && this->fileList_ != nullptr && this->height_ != nullptr && this->mute_ != nullptr && this->puzzleEffect_ != nullptr
        && this->scene_ != nullptr && this->smartEffect_ != nullptr && this->style_ != nullptr && this->transitionStyle_ != nullptr && this->width_ != nullptr; };
    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline float duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0.0) };
    inline GenerateVideoRequest& setDuration(float duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // durationAdaption Field Functions 
    bool hasDurationAdaption() const { return this->durationAdaption_ != nullptr;};
    void deleteDurationAdaption() { this->durationAdaption_ = nullptr;};
    inline bool durationAdaption() const { DARABONBA_PTR_GET_DEFAULT(durationAdaption_, false) };
    inline GenerateVideoRequest& setDurationAdaption(bool durationAdaption) { DARABONBA_PTR_SET_VALUE(durationAdaption_, durationAdaption) };


    // fileList Field Functions 
    bool hasFileList() const { return this->fileList_ != nullptr;};
    void deleteFileList() { this->fileList_ = nullptr;};
    inline const vector<GenerateVideoRequestFileList> & fileList() const { DARABONBA_PTR_GET_CONST(fileList_, vector<GenerateVideoRequestFileList>) };
    inline vector<GenerateVideoRequestFileList> fileList() { DARABONBA_PTR_GET(fileList_, vector<GenerateVideoRequestFileList>) };
    inline GenerateVideoRequest& setFileList(const vector<GenerateVideoRequestFileList> & fileList) { DARABONBA_PTR_SET_VALUE(fileList_, fileList) };
    inline GenerateVideoRequest& setFileList(vector<GenerateVideoRequestFileList> && fileList) { DARABONBA_PTR_SET_RVALUE(fileList_, fileList) };


    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline int32_t height() const { DARABONBA_PTR_GET_DEFAULT(height_, 0) };
    inline GenerateVideoRequest& setHeight(int32_t height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // mute Field Functions 
    bool hasMute() const { return this->mute_ != nullptr;};
    void deleteMute() { this->mute_ = nullptr;};
    inline bool mute() const { DARABONBA_PTR_GET_DEFAULT(mute_, false) };
    inline GenerateVideoRequest& setMute(bool mute) { DARABONBA_PTR_SET_VALUE(mute_, mute) };


    // puzzleEffect Field Functions 
    bool hasPuzzleEffect() const { return this->puzzleEffect_ != nullptr;};
    void deletePuzzleEffect() { this->puzzleEffect_ = nullptr;};
    inline bool puzzleEffect() const { DARABONBA_PTR_GET_DEFAULT(puzzleEffect_, false) };
    inline GenerateVideoRequest& setPuzzleEffect(bool puzzleEffect) { DARABONBA_PTR_SET_VALUE(puzzleEffect_, puzzleEffect) };


    // scene Field Functions 
    bool hasScene() const { return this->scene_ != nullptr;};
    void deleteScene() { this->scene_ = nullptr;};
    inline string scene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
    inline GenerateVideoRequest& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


    // smartEffect Field Functions 
    bool hasSmartEffect() const { return this->smartEffect_ != nullptr;};
    void deleteSmartEffect() { this->smartEffect_ = nullptr;};
    inline bool smartEffect() const { DARABONBA_PTR_GET_DEFAULT(smartEffect_, false) };
    inline GenerateVideoRequest& setSmartEffect(bool smartEffect) { DARABONBA_PTR_SET_VALUE(smartEffect_, smartEffect) };


    // style Field Functions 
    bool hasStyle() const { return this->style_ != nullptr;};
    void deleteStyle() { this->style_ = nullptr;};
    inline string style() const { DARABONBA_PTR_GET_DEFAULT(style_, "") };
    inline GenerateVideoRequest& setStyle(string style) { DARABONBA_PTR_SET_VALUE(style_, style) };


    // transitionStyle Field Functions 
    bool hasTransitionStyle() const { return this->transitionStyle_ != nullptr;};
    void deleteTransitionStyle() { this->transitionStyle_ = nullptr;};
    inline string transitionStyle() const { DARABONBA_PTR_GET_DEFAULT(transitionStyle_, "") };
    inline GenerateVideoRequest& setTransitionStyle(string transitionStyle) { DARABONBA_PTR_SET_VALUE(transitionStyle_, transitionStyle) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline int32_t width() const { DARABONBA_PTR_GET_DEFAULT(width_, 0) };
    inline GenerateVideoRequest& setWidth(int32_t width) { DARABONBA_PTR_SET_VALUE(width_, width) };


  protected:
    std::shared_ptr<float> duration_ = nullptr;
    std::shared_ptr<bool> durationAdaption_ = nullptr;
    // 1
    // 
    // This parameter is required.
    std::shared_ptr<vector<GenerateVideoRequestFileList>> fileList_ = nullptr;
    std::shared_ptr<int32_t> height_ = nullptr;
    std::shared_ptr<bool> mute_ = nullptr;
    std::shared_ptr<bool> puzzleEffect_ = nullptr;
    std::shared_ptr<string> scene_ = nullptr;
    std::shared_ptr<bool> smartEffect_ = nullptr;
    std::shared_ptr<string> style_ = nullptr;
    std::shared_ptr<string> transitionStyle_ = nullptr;
    std::shared_ptr<int32_t> width_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Videoenhan20200320
#endif
