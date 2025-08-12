// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDCASTERLAYOUTREQUESTAUDIOLAYER_HPP_
#define ALIBABACLOUD_MODELS_ADDCASTERLAYOUTREQUESTAUDIOLAYER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class AddCasterLayoutRequestAudioLayer : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddCasterLayoutRequestAudioLayer& obj) { 
      DARABONBA_PTR_TO_JSON(FixedDelayDuration, fixedDelayDuration_);
      DARABONBA_PTR_TO_JSON(ValidChannel, validChannel_);
      DARABONBA_PTR_TO_JSON(VolumeRate, volumeRate_);
    };
    friend void from_json(const Darabonba::Json& j, AddCasterLayoutRequestAudioLayer& obj) { 
      DARABONBA_PTR_FROM_JSON(FixedDelayDuration, fixedDelayDuration_);
      DARABONBA_PTR_FROM_JSON(ValidChannel, validChannel_);
      DARABONBA_PTR_FROM_JSON(VolumeRate, volumeRate_);
    };
    AddCasterLayoutRequestAudioLayer() = default ;
    AddCasterLayoutRequestAudioLayer(const AddCasterLayoutRequestAudioLayer &) = default ;
    AddCasterLayoutRequestAudioLayer(AddCasterLayoutRequestAudioLayer &&) = default ;
    AddCasterLayoutRequestAudioLayer(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddCasterLayoutRequestAudioLayer() = default ;
    AddCasterLayoutRequestAudioLayer& operator=(const AddCasterLayoutRequestAudioLayer &) = default ;
    AddCasterLayoutRequestAudioLayer& operator=(AddCasterLayoutRequestAudioLayer &&) = default ;
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
    inline AddCasterLayoutRequestAudioLayer& setFixedDelayDuration(int32_t fixedDelayDuration) { DARABONBA_PTR_SET_VALUE(fixedDelayDuration_, fixedDelayDuration) };


    // validChannel Field Functions 
    bool hasValidChannel() const { return this->validChannel_ != nullptr;};
    void deleteValidChannel() { this->validChannel_ = nullptr;};
    inline string validChannel() const { DARABONBA_PTR_GET_DEFAULT(validChannel_, "") };
    inline AddCasterLayoutRequestAudioLayer& setValidChannel(string validChannel) { DARABONBA_PTR_SET_VALUE(validChannel_, validChannel) };


    // volumeRate Field Functions 
    bool hasVolumeRate() const { return this->volumeRate_ != nullptr;};
    void deleteVolumeRate() { this->volumeRate_ = nullptr;};
    inline float volumeRate() const { DARABONBA_PTR_GET_DEFAULT(volumeRate_, 0.0) };
    inline AddCasterLayoutRequestAudioLayer& setVolumeRate(float volumeRate) { DARABONBA_PTR_SET_VALUE(volumeRate_, volumeRate) };


  protected:
    // The fixed delay of audio layer N. You can use this parameter to synchronize the audio with subtitles. Unit: milliseconds. Valid values: **0 to 5000**. Default value: **0**.
    std::shared_ptr<int32_t> fixedDelayDuration_ = nullptr;
    // The valid voice channels of audio layer N. Valid values:
    // 
    // *   **leftChannel**: the left channel.
    // *   **rightChannel**: the right channel.
    // *   **all**: both the left and right channels. This is the default value.
    std::shared_ptr<string> validChannel_ = nullptr;
    // The multiples of the original volume at which audio layer N plays audio streams. Valid values: **0 to 10.0**.
    // 
    // *   The default value **1.0** indicates that audio layer N plays audio streams at the original volume.
    // *   A value smaller than **1.0** indicates that audio layer N plays audio streams at a lower volume than the original one.
    // *   A value greater than **1.0** indicates that audio layer N plays audio streams at a higher volume than the original one.
    std::shared_ptr<float> volumeRate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
