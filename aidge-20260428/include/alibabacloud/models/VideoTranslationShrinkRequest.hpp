// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VIDEOTRANSLATIONSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_VIDEOTRANSLATIONSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aidge20260428
{
namespace Models
{
  class VideoTranslationShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VideoTranslationShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Capabilities, capabilitiesShrink_);
      DARABONBA_PTR_TO_JSON(EnableQualityCheck, enableQualityCheck_);
      DARABONBA_PTR_TO_JSON(EraseOnly, eraseOnly_);
      DARABONBA_PTR_TO_JSON(RemoveLogo, removeLogo_);
      DARABONBA_PTR_TO_JSON(SourceLanguage, sourceLanguage_);
      DARABONBA_PTR_TO_JSON(SubtitleMode, subtitleMode_);
      DARABONBA_PTR_TO_JSON(TargetLanguage, targetLanguage_);
      DARABONBA_PTR_TO_JSON(VideoUrl, videoUrl_);
    };
    friend void from_json(const Darabonba::Json& j, VideoTranslationShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Capabilities, capabilitiesShrink_);
      DARABONBA_PTR_FROM_JSON(EnableQualityCheck, enableQualityCheck_);
      DARABONBA_PTR_FROM_JSON(EraseOnly, eraseOnly_);
      DARABONBA_PTR_FROM_JSON(RemoveLogo, removeLogo_);
      DARABONBA_PTR_FROM_JSON(SourceLanguage, sourceLanguage_);
      DARABONBA_PTR_FROM_JSON(SubtitleMode, subtitleMode_);
      DARABONBA_PTR_FROM_JSON(TargetLanguage, targetLanguage_);
      DARABONBA_PTR_FROM_JSON(VideoUrl, videoUrl_);
    };
    VideoTranslationShrinkRequest() = default ;
    VideoTranslationShrinkRequest(const VideoTranslationShrinkRequest &) = default ;
    VideoTranslationShrinkRequest(VideoTranslationShrinkRequest &&) = default ;
    VideoTranslationShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VideoTranslationShrinkRequest() = default ;
    VideoTranslationShrinkRequest& operator=(const VideoTranslationShrinkRequest &) = default ;
    VideoTranslationShrinkRequest& operator=(VideoTranslationShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->capabilitiesShrink_ == nullptr
        && this->enableQualityCheck_ == nullptr && this->eraseOnly_ == nullptr && this->removeLogo_ == nullptr && this->sourceLanguage_ == nullptr && this->subtitleMode_ == nullptr
        && this->targetLanguage_ == nullptr && this->videoUrl_ == nullptr; };
    // capabilitiesShrink Field Functions 
    bool hasCapabilitiesShrink() const { return this->capabilitiesShrink_ != nullptr;};
    void deleteCapabilitiesShrink() { this->capabilitiesShrink_ = nullptr;};
    inline string getCapabilitiesShrink() const { DARABONBA_PTR_GET_DEFAULT(capabilitiesShrink_, "") };
    inline VideoTranslationShrinkRequest& setCapabilitiesShrink(string capabilitiesShrink) { DARABONBA_PTR_SET_VALUE(capabilitiesShrink_, capabilitiesShrink) };


    // enableQualityCheck Field Functions 
    bool hasEnableQualityCheck() const { return this->enableQualityCheck_ != nullptr;};
    void deleteEnableQualityCheck() { this->enableQualityCheck_ = nullptr;};
    inline bool getEnableQualityCheck() const { DARABONBA_PTR_GET_DEFAULT(enableQualityCheck_, false) };
    inline VideoTranslationShrinkRequest& setEnableQualityCheck(bool enableQualityCheck) { DARABONBA_PTR_SET_VALUE(enableQualityCheck_, enableQualityCheck) };


    // eraseOnly Field Functions 
    bool hasEraseOnly() const { return this->eraseOnly_ != nullptr;};
    void deleteEraseOnly() { this->eraseOnly_ = nullptr;};
    inline bool getEraseOnly() const { DARABONBA_PTR_GET_DEFAULT(eraseOnly_, false) };
    inline VideoTranslationShrinkRequest& setEraseOnly(bool eraseOnly) { DARABONBA_PTR_SET_VALUE(eraseOnly_, eraseOnly) };


    // removeLogo Field Functions 
    bool hasRemoveLogo() const { return this->removeLogo_ != nullptr;};
    void deleteRemoveLogo() { this->removeLogo_ = nullptr;};
    inline bool getRemoveLogo() const { DARABONBA_PTR_GET_DEFAULT(removeLogo_, false) };
    inline VideoTranslationShrinkRequest& setRemoveLogo(bool removeLogo) { DARABONBA_PTR_SET_VALUE(removeLogo_, removeLogo) };


    // sourceLanguage Field Functions 
    bool hasSourceLanguage() const { return this->sourceLanguage_ != nullptr;};
    void deleteSourceLanguage() { this->sourceLanguage_ = nullptr;};
    inline string getSourceLanguage() const { DARABONBA_PTR_GET_DEFAULT(sourceLanguage_, "") };
    inline VideoTranslationShrinkRequest& setSourceLanguage(string sourceLanguage) { DARABONBA_PTR_SET_VALUE(sourceLanguage_, sourceLanguage) };


    // subtitleMode Field Functions 
    bool hasSubtitleMode() const { return this->subtitleMode_ != nullptr;};
    void deleteSubtitleMode() { this->subtitleMode_ = nullptr;};
    inline string getSubtitleMode() const { DARABONBA_PTR_GET_DEFAULT(subtitleMode_, "") };
    inline VideoTranslationShrinkRequest& setSubtitleMode(string subtitleMode) { DARABONBA_PTR_SET_VALUE(subtitleMode_, subtitleMode) };


    // targetLanguage Field Functions 
    bool hasTargetLanguage() const { return this->targetLanguage_ != nullptr;};
    void deleteTargetLanguage() { this->targetLanguage_ = nullptr;};
    inline string getTargetLanguage() const { DARABONBA_PTR_GET_DEFAULT(targetLanguage_, "") };
    inline VideoTranslationShrinkRequest& setTargetLanguage(string targetLanguage) { DARABONBA_PTR_SET_VALUE(targetLanguage_, targetLanguage) };


    // videoUrl Field Functions 
    bool hasVideoUrl() const { return this->videoUrl_ != nullptr;};
    void deleteVideoUrl() { this->videoUrl_ = nullptr;};
    inline string getVideoUrl() const { DARABONBA_PTR_GET_DEFAULT(videoUrl_, "") };
    inline VideoTranslationShrinkRequest& setVideoUrl(string videoUrl) { DARABONBA_PTR_SET_VALUE(videoUrl_, videoUrl) };


  protected:
    // The list of translation features. Valid values: speech and visual. You can select both. At least one feature is required. Duplicate values are not accepted.
    // 
    // This parameter is required.
    shared_ptr<string> capabilitiesShrink_ {};
    // Specifies whether to enable quality inspection for on-screen text processing. Effective only when visual is included and this parameter is explicitly set to true. If only speech is selected, this parameter is ignored, no quality inspection is performed, no quality inspection fields are returned, and no error is reported due to this parameter. Enabling quality inspection may increase the processing time. Do not enable it unless necessary. Default value: false.
    shared_ptr<bool> enableQualityCheck_ {};
    // Applicable only when visual is included. Specifies whether to erase on-screen text without translation. Valid values: true: erases on-screen text without translation. false: translates on-screen text. Default value: false.
    shared_ptr<bool> eraseOnly_ {};
    // Applicable only when visual is included. Specifies whether to erase brand logos. Valid values: true: erases brand logos. false: retains brand logos. Default value: false. This parameter is independent of EraseOnly.
    shared_ptr<bool> removeLogo_ {};
    // The original language of the video (source language). For supported languages, see Language support.
    shared_ptr<string> sourceLanguage_ {};
    // Applicable only when speech is included. Valid values: erase: erases the original subtitles only. replace: replaces the original subtitles with translated subtitles, which means erasing the original subtitles and adding subtitles synchronized with the translated speech. If not specified, the original subtitles are not processed, which means neither erasing the original subtitles nor adding new subtitles.
    shared_ptr<string> subtitleMode_ {};
    // Required when speech is included. Optional when only visual is included and EraseOnly is set to true. If specified in this case, it is ignored. Required in other cases.
    shared_ptr<string> targetLanguage_ {};
    // The video URL. Supported formats: MP4 and MOV. Maximum size: 200 MB.
    // 
    // This parameter is required.
    shared_ptr<string> videoUrl_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aidge20260428
#endif
