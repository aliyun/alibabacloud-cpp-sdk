// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCASTERLAYOUTREQUESTAUDIOLAYER_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCASTERLAYOUTREQUESTAUDIOLAYER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class ModifyCasterLayoutRequestAudioLayer : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyCasterLayoutRequestAudioLayer& obj) { 
      DARABONBA_PTR_TO_JSON(FixedDelayDuration, fixedDelayDuration_);
      DARABONBA_PTR_TO_JSON(ValidChannel, validChannel_);
      DARABONBA_PTR_TO_JSON(VolumeRate, volumeRate_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyCasterLayoutRequestAudioLayer& obj) { 
      DARABONBA_PTR_FROM_JSON(FixedDelayDuration, fixedDelayDuration_);
      DARABONBA_PTR_FROM_JSON(ValidChannel, validChannel_);
      DARABONBA_PTR_FROM_JSON(VolumeRate, volumeRate_);
    };
    ModifyCasterLayoutRequestAudioLayer() = default ;
    ModifyCasterLayoutRequestAudioLayer(const ModifyCasterLayoutRequestAudioLayer &) = default ;
    ModifyCasterLayoutRequestAudioLayer(ModifyCasterLayoutRequestAudioLayer &&) = default ;
    ModifyCasterLayoutRequestAudioLayer(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyCasterLayoutRequestAudioLayer() = default ;
    ModifyCasterLayoutRequestAudioLayer& operator=(const ModifyCasterLayoutRequestAudioLayer &) = default ;
    ModifyCasterLayoutRequestAudioLayer& operator=(ModifyCasterLayoutRequestAudioLayer &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fixedDelayDuration_ != nullptr
        && this->validChannel_ != nullptr && this->volumeRate_ != nullptr; };
    // fixedDelayDuration Field Functions 
    bool hasFixedDelayDuration() const { return this->fixedDelayDuration_ != nullptr;};
    void deleteFixedDelayDuration() { this->fixedDelayDuration_ = nullptr;};
    inline int32_t fixedDelayDuration() const { DARABONBA_PTR_GET_DEFAULT(fixedDelayDuration_, 0) };
    inline ModifyCasterLayoutRequestAudioLayer& setFixedDelayDuration(int32_t fixedDelayDuration) { DARABONBA_PTR_SET_VALUE(fixedDelayDuration_, fixedDelayDuration) };


    // validChannel Field Functions 
    bool hasValidChannel() const { return this->validChannel_ != nullptr;};
    void deleteValidChannel() { this->validChannel_ = nullptr;};
    inline string validChannel() const { DARABONBA_PTR_GET_DEFAULT(validChannel_, "") };
    inline ModifyCasterLayoutRequestAudioLayer& setValidChannel(string validChannel) { DARABONBA_PTR_SET_VALUE(validChannel_, validChannel) };


    // volumeRate Field Functions 
    bool hasVolumeRate() const { return this->volumeRate_ != nullptr;};
    void deleteVolumeRate() { this->volumeRate_ = nullptr;};
    inline float volumeRate() const { DARABONBA_PTR_GET_DEFAULT(volumeRate_, 0.0) };
    inline ModifyCasterLayoutRequestAudioLayer& setVolumeRate(float volumeRate) { DARABONBA_PTR_SET_VALUE(volumeRate_, volumeRate) };


  protected:
    // The fixed delay of the audio layer. This parameter is used to synchronize the audio with subtitles. Unit: milliseconds. Default value: **0**. Valid values: **0 to 5000**.
    std::shared_ptr<int32_t> fixedDelayDuration_ = nullptr;
    // The sound channels that are used for volume input in the audio layer. Valid values:
    // 
    // *   **leftChannel**: the left channel
    // *   **rightChannel**: the right channel
    // *   **all** (default): both the left and right channels
    std::shared_ptr<string> validChannel_ = nullptr;
    // The normalized value of the height of the audio layer. The width of the audio layer is proportionally scaled based on this parameter.
    // 
    // The default value is **0**, which indicates that the audio layer is not scaled.
    std::shared_ptr<float> volumeRate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
