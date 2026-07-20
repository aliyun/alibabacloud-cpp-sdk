// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VIDEOTRANSLATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_VIDEOTRANSLATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aidge20260428
{
namespace Models
{
  class VideoTranslationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VideoTranslationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Capabilities, capabilities_);
      DARABONBA_PTR_TO_JSON(SourceLanguage, sourceLanguage_);
      DARABONBA_PTR_TO_JSON(TargetLanguage, targetLanguage_);
      DARABONBA_PTR_TO_JSON(VideoUrl, videoUrl_);
    };
    friend void from_json(const Darabonba::Json& j, VideoTranslationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Capabilities, capabilities_);
      DARABONBA_PTR_FROM_JSON(SourceLanguage, sourceLanguage_);
      DARABONBA_PTR_FROM_JSON(TargetLanguage, targetLanguage_);
      DARABONBA_PTR_FROM_JSON(VideoUrl, videoUrl_);
    };
    VideoTranslationRequest() = default ;
    VideoTranslationRequest(const VideoTranslationRequest &) = default ;
    VideoTranslationRequest(VideoTranslationRequest &&) = default ;
    VideoTranslationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VideoTranslationRequest() = default ;
    VideoTranslationRequest& operator=(const VideoTranslationRequest &) = default ;
    VideoTranslationRequest& operator=(VideoTranslationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->capabilities_ == nullptr
        && this->sourceLanguage_ == nullptr && this->targetLanguage_ == nullptr && this->videoUrl_ == nullptr; };
    // capabilities Field Functions 
    bool hasCapabilities() const { return this->capabilities_ != nullptr;};
    void deleteCapabilities() { this->capabilities_ = nullptr;};
    inline const vector<string> & getCapabilities() const { DARABONBA_PTR_GET_CONST(capabilities_, vector<string>) };
    inline vector<string> getCapabilities() { DARABONBA_PTR_GET(capabilities_, vector<string>) };
    inline VideoTranslationRequest& setCapabilities(const vector<string> & capabilities) { DARABONBA_PTR_SET_VALUE(capabilities_, capabilities) };
    inline VideoTranslationRequest& setCapabilities(vector<string> && capabilities) { DARABONBA_PTR_SET_RVALUE(capabilities_, capabilities) };


    // sourceLanguage Field Functions 
    bool hasSourceLanguage() const { return this->sourceLanguage_ != nullptr;};
    void deleteSourceLanguage() { this->sourceLanguage_ = nullptr;};
    inline string getSourceLanguage() const { DARABONBA_PTR_GET_DEFAULT(sourceLanguage_, "") };
    inline VideoTranslationRequest& setSourceLanguage(string sourceLanguage) { DARABONBA_PTR_SET_VALUE(sourceLanguage_, sourceLanguage) };


    // targetLanguage Field Functions 
    bool hasTargetLanguage() const { return this->targetLanguage_ != nullptr;};
    void deleteTargetLanguage() { this->targetLanguage_ = nullptr;};
    inline string getTargetLanguage() const { DARABONBA_PTR_GET_DEFAULT(targetLanguage_, "") };
    inline VideoTranslationRequest& setTargetLanguage(string targetLanguage) { DARABONBA_PTR_SET_VALUE(targetLanguage_, targetLanguage) };


    // videoUrl Field Functions 
    bool hasVideoUrl() const { return this->videoUrl_ != nullptr;};
    void deleteVideoUrl() { this->videoUrl_ = nullptr;};
    inline string getVideoUrl() const { DARABONBA_PTR_GET_DEFAULT(videoUrl_, "") };
    inline VideoTranslationRequest& setVideoUrl(string videoUrl) { DARABONBA_PTR_SET_VALUE(videoUrl_, videoUrl) };


  protected:
    // This parameter is required.
    shared_ptr<vector<string>> capabilities_ {};
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
