// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECASTERSCENEAUDIOREQUESTAUDIOLAYER_HPP_
#define ALIBABACLOUD_MODELS_UPDATECASTERSCENEAUDIOREQUESTAUDIOLAYER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class UpdateCasterSceneAudioRequestAudioLayer : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCasterSceneAudioRequestAudioLayer& obj) { 
      DARABONBA_PTR_TO_JSON(Filter, filter_);
      DARABONBA_PTR_TO_JSON(FixedDelayDuration, fixedDelayDuration_);
      DARABONBA_PTR_TO_JSON(ValidChannel, validChannel_);
      DARABONBA_PTR_TO_JSON(VolumeRate, volumeRate_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCasterSceneAudioRequestAudioLayer& obj) { 
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
      DARABONBA_PTR_FROM_JSON(FixedDelayDuration, fixedDelayDuration_);
      DARABONBA_PTR_FROM_JSON(ValidChannel, validChannel_);
      DARABONBA_PTR_FROM_JSON(VolumeRate, volumeRate_);
    };
    UpdateCasterSceneAudioRequestAudioLayer() = default ;
    UpdateCasterSceneAudioRequestAudioLayer(const UpdateCasterSceneAudioRequestAudioLayer &) = default ;
    UpdateCasterSceneAudioRequestAudioLayer(UpdateCasterSceneAudioRequestAudioLayer &&) = default ;
    UpdateCasterSceneAudioRequestAudioLayer(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCasterSceneAudioRequestAudioLayer() = default ;
    UpdateCasterSceneAudioRequestAudioLayer& operator=(const UpdateCasterSceneAudioRequestAudioLayer &) = default ;
    UpdateCasterSceneAudioRequestAudioLayer& operator=(UpdateCasterSceneAudioRequestAudioLayer &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->filter_ == nullptr
        && return this->fixedDelayDuration_ == nullptr && return this->validChannel_ == nullptr && return this->volumeRate_ == nullptr; };
    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline string filter() const { DARABONBA_PTR_GET_DEFAULT(filter_, "") };
    inline UpdateCasterSceneAudioRequestAudioLayer& setFilter(string filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };


    // fixedDelayDuration Field Functions 
    bool hasFixedDelayDuration() const { return this->fixedDelayDuration_ != nullptr;};
    void deleteFixedDelayDuration() { this->fixedDelayDuration_ = nullptr;};
    inline int32_t fixedDelayDuration() const { DARABONBA_PTR_GET_DEFAULT(fixedDelayDuration_, 0) };
    inline UpdateCasterSceneAudioRequestAudioLayer& setFixedDelayDuration(int32_t fixedDelayDuration) { DARABONBA_PTR_SET_VALUE(fixedDelayDuration_, fixedDelayDuration) };


    // validChannel Field Functions 
    bool hasValidChannel() const { return this->validChannel_ != nullptr;};
    void deleteValidChannel() { this->validChannel_ = nullptr;};
    inline string validChannel() const { DARABONBA_PTR_GET_DEFAULT(validChannel_, "") };
    inline UpdateCasterSceneAudioRequestAudioLayer& setValidChannel(string validChannel) { DARABONBA_PTR_SET_VALUE(validChannel_, validChannel) };


    // volumeRate Field Functions 
    bool hasVolumeRate() const { return this->volumeRate_ != nullptr;};
    void deleteVolumeRate() { this->volumeRate_ = nullptr;};
    inline float volumeRate() const { DARABONBA_PTR_GET_DEFAULT(volumeRate_, 0.0) };
    inline UpdateCasterSceneAudioRequestAudioLayer& setVolumeRate(float volumeRate) { DARABONBA_PTR_SET_VALUE(volumeRate_, volumeRate) };


  protected:
    // Specifies whether to enable the features provided by the audio 3A algorithms. This parameter consists of the following fields:
    // 
    // *   **enableAgc**: specifies whether to enable automatic gain control (AGC). This field is optional. Valid values: 0 and 1. **0** is the default value, which specifies that AGC is disabled. **1** specifies that AGC is enabled.
    // *   **enableAns**: specifies whether to enable active noise suppression (ANS). This field is optional. Valid values: 0 and 1. **0** is the default value, which specifies that ANS is disabled. **1** specifies that ANS is enabled.
    // *   **ansMode**: specifies the mode for ANS. This field is optional and takes effect only if you set **enableAns** to **1**. Valid values: 0 and 1. **0** is the default value, which specifies the speech noise reduction mode. **1** specifies the music noise reduction mode.
    // 
    // >  To ensure a better noise reduction effect, we recommend that you set ansMode to 1.
    // 
    // *   **enableBeautify**: specifies whether to enable voice change. This field is optional. Valid values: 0 and 1. **0** is the default value, which specifies that voice change is disabled. **1** specifies that voice change is enabled.
    // *   **voiceBeautifyMode**: specifies the mode for voice change. This field is optional and takes effect only if you set **enableBeautify** to **1**. Valid values: 0 and 1. **0** is the default value, which specifies the magnetic male voice mode. **1** specifies the fresh female voice mode.
    std::shared_ptr<string> filter_ = nullptr;
    // The fixed delay of the audio layer. This parameter is used to synchronize the audio with subtitles.
    // 
    // Unit: milliseconds. Valid values: **0 to 5000**. Default value: **0**.
    std::shared_ptr<int32_t> fixedDelayDuration_ = nullptr;
    // The sound channels that are used for volume input in the audio layer. Valid values:
    // 
    // *   **leftChannel**: the left channel
    // *   **rightChannel**: the right channel
    // *   **all** (default): both the left and right channels
    std::shared_ptr<string> validChannel_ = nullptr;
    // The multiple of the original volume at which the audio layer plays audio. Valid values: **0 to 10.0**. Default value: **1.0**.
    // 
    // *   **1.0**: specifies that the audio layer plays audio at the original volume.
    // *   A value smaller than **1**: specifies that the audio layer plays audio at a volume that is less than the original volume.
    // *   A value greater than **1**: specifies that the audio layer plays audio at a volume that is more than the original volume.
    std::shared_ptr<float> volumeRate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
