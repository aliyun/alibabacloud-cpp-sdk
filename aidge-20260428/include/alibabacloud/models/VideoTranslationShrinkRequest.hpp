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
      DARABONBA_PTR_TO_JSON(SourceLanguage, sourceLanguage_);
      DARABONBA_PTR_TO_JSON(TargetLanguage, targetLanguage_);
      DARABONBA_PTR_TO_JSON(VideoUrl, videoUrl_);
    };
    friend void from_json(const Darabonba::Json& j, VideoTranslationShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Capabilities, capabilitiesShrink_);
      DARABONBA_PTR_FROM_JSON(SourceLanguage, sourceLanguage_);
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
        && this->sourceLanguage_ == nullptr && this->targetLanguage_ == nullptr && this->videoUrl_ == nullptr; };
    // capabilitiesShrink Field Functions 
    bool hasCapabilitiesShrink() const { return this->capabilitiesShrink_ != nullptr;};
    void deleteCapabilitiesShrink() { this->capabilitiesShrink_ = nullptr;};
    inline string getCapabilitiesShrink() const { DARABONBA_PTR_GET_DEFAULT(capabilitiesShrink_, "") };
    inline VideoTranslationShrinkRequest& setCapabilitiesShrink(string capabilitiesShrink) { DARABONBA_PTR_SET_VALUE(capabilitiesShrink_, capabilitiesShrink) };


    // sourceLanguage Field Functions 
    bool hasSourceLanguage() const { return this->sourceLanguage_ != nullptr;};
    void deleteSourceLanguage() { this->sourceLanguage_ = nullptr;};
    inline string getSourceLanguage() const { DARABONBA_PTR_GET_DEFAULT(sourceLanguage_, "") };
    inline VideoTranslationShrinkRequest& setSourceLanguage(string sourceLanguage) { DARABONBA_PTR_SET_VALUE(sourceLanguage_, sourceLanguage) };


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
    // This parameter is required.
    shared_ptr<string> capabilitiesShrink_ {};
    shared_ptr<string> sourceLanguage_ {};
    // This parameter is required.
    shared_ptr<string> targetLanguage_ {};
    // This parameter is required.
    shared_ptr<string> videoUrl_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aidge20260428
#endif
