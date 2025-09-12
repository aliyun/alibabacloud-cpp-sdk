// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETASKREQUESTPARAMETERSTRANSCODING_HPP_
#define ALIBABACLOUD_MODELS_CREATETASKREQUESTPARAMETERSTRANSCODING_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Tingwu20230930
{
namespace Models
{
  class CreateTaskRequestParametersTranscoding : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTaskRequestParametersTranscoding& obj) { 
      DARABONBA_PTR_TO_JSON(SpectrumEnabled, spectrumEnabled_);
      DARABONBA_PTR_TO_JSON(TargetAudioFormat, targetAudioFormat_);
      DARABONBA_PTR_TO_JSON(TargetVideoFormat, targetVideoFormat_);
      DARABONBA_PTR_TO_JSON(VideoThumbnailEnabled, videoThumbnailEnabled_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTaskRequestParametersTranscoding& obj) { 
      DARABONBA_PTR_FROM_JSON(SpectrumEnabled, spectrumEnabled_);
      DARABONBA_PTR_FROM_JSON(TargetAudioFormat, targetAudioFormat_);
      DARABONBA_PTR_FROM_JSON(TargetVideoFormat, targetVideoFormat_);
      DARABONBA_PTR_FROM_JSON(VideoThumbnailEnabled, videoThumbnailEnabled_);
    };
    CreateTaskRequestParametersTranscoding() = default ;
    CreateTaskRequestParametersTranscoding(const CreateTaskRequestParametersTranscoding &) = default ;
    CreateTaskRequestParametersTranscoding(CreateTaskRequestParametersTranscoding &&) = default ;
    CreateTaskRequestParametersTranscoding(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTaskRequestParametersTranscoding() = default ;
    CreateTaskRequestParametersTranscoding& operator=(const CreateTaskRequestParametersTranscoding &) = default ;
    CreateTaskRequestParametersTranscoding& operator=(CreateTaskRequestParametersTranscoding &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->spectrumEnabled_ != nullptr
        && this->targetAudioFormat_ != nullptr && this->targetVideoFormat_ != nullptr && this->videoThumbnailEnabled_ != nullptr; };
    // spectrumEnabled Field Functions 
    bool hasSpectrumEnabled() const { return this->spectrumEnabled_ != nullptr;};
    void deleteSpectrumEnabled() { this->spectrumEnabled_ = nullptr;};
    inline bool spectrumEnabled() const { DARABONBA_PTR_GET_DEFAULT(spectrumEnabled_, false) };
    inline CreateTaskRequestParametersTranscoding& setSpectrumEnabled(bool spectrumEnabled) { DARABONBA_PTR_SET_VALUE(spectrumEnabled_, spectrumEnabled) };


    // targetAudioFormat Field Functions 
    bool hasTargetAudioFormat() const { return this->targetAudioFormat_ != nullptr;};
    void deleteTargetAudioFormat() { this->targetAudioFormat_ = nullptr;};
    inline string targetAudioFormat() const { DARABONBA_PTR_GET_DEFAULT(targetAudioFormat_, "") };
    inline CreateTaskRequestParametersTranscoding& setTargetAudioFormat(string targetAudioFormat) { DARABONBA_PTR_SET_VALUE(targetAudioFormat_, targetAudioFormat) };


    // targetVideoFormat Field Functions 
    bool hasTargetVideoFormat() const { return this->targetVideoFormat_ != nullptr;};
    void deleteTargetVideoFormat() { this->targetVideoFormat_ = nullptr;};
    inline string targetVideoFormat() const { DARABONBA_PTR_GET_DEFAULT(targetVideoFormat_, "") };
    inline CreateTaskRequestParametersTranscoding& setTargetVideoFormat(string targetVideoFormat) { DARABONBA_PTR_SET_VALUE(targetVideoFormat_, targetVideoFormat) };


    // videoThumbnailEnabled Field Functions 
    bool hasVideoThumbnailEnabled() const { return this->videoThumbnailEnabled_ != nullptr;};
    void deleteVideoThumbnailEnabled() { this->videoThumbnailEnabled_ = nullptr;};
    inline bool videoThumbnailEnabled() const { DARABONBA_PTR_GET_DEFAULT(videoThumbnailEnabled_, false) };
    inline CreateTaskRequestParametersTranscoding& setVideoThumbnailEnabled(bool videoThumbnailEnabled) { DARABONBA_PTR_SET_VALUE(videoThumbnailEnabled_, videoThumbnailEnabled) };


  protected:
    std::shared_ptr<bool> spectrumEnabled_ = nullptr;
    std::shared_ptr<string> targetAudioFormat_ = nullptr;
    std::shared_ptr<string> targetVideoFormat_ = nullptr;
    std::shared_ptr<bool> videoThumbnailEnabled_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Tingwu20230930
#endif
