// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECASTERSCENEAUDIORESPONSEBODYAUDIOLAYERSAUDIOLAYER_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECASTERSCENEAUDIORESPONSEBODYAUDIOLAYERSAUDIOLAYER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeCasterSceneAudioResponseBodyAudioLayersAudioLayer : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCasterSceneAudioResponseBodyAudioLayersAudioLayer& obj) { 
      DARABONBA_PTR_TO_JSON(FixedDelayDuration, fixedDelayDuration_);
      DARABONBA_PTR_TO_JSON(ValidChannel, validChannel_);
      DARABONBA_PTR_TO_JSON(VolumeRate, volumeRate_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCasterSceneAudioResponseBodyAudioLayersAudioLayer& obj) { 
      DARABONBA_PTR_FROM_JSON(FixedDelayDuration, fixedDelayDuration_);
      DARABONBA_PTR_FROM_JSON(ValidChannel, validChannel_);
      DARABONBA_PTR_FROM_JSON(VolumeRate, volumeRate_);
    };
    DescribeCasterSceneAudioResponseBodyAudioLayersAudioLayer() = default ;
    DescribeCasterSceneAudioResponseBodyAudioLayersAudioLayer(const DescribeCasterSceneAudioResponseBodyAudioLayersAudioLayer &) = default ;
    DescribeCasterSceneAudioResponseBodyAudioLayersAudioLayer(DescribeCasterSceneAudioResponseBodyAudioLayersAudioLayer &&) = default ;
    DescribeCasterSceneAudioResponseBodyAudioLayersAudioLayer(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCasterSceneAudioResponseBodyAudioLayersAudioLayer() = default ;
    DescribeCasterSceneAudioResponseBodyAudioLayersAudioLayer& operator=(const DescribeCasterSceneAudioResponseBodyAudioLayersAudioLayer &) = default ;
    DescribeCasterSceneAudioResponseBodyAudioLayersAudioLayer& operator=(DescribeCasterSceneAudioResponseBodyAudioLayersAudioLayer &&) = default ;
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
    inline DescribeCasterSceneAudioResponseBodyAudioLayersAudioLayer& setFixedDelayDuration(int32_t fixedDelayDuration) { DARABONBA_PTR_SET_VALUE(fixedDelayDuration_, fixedDelayDuration) };


    // validChannel Field Functions 
    bool hasValidChannel() const { return this->validChannel_ != nullptr;};
    void deleteValidChannel() { this->validChannel_ = nullptr;};
    inline string validChannel() const { DARABONBA_PTR_GET_DEFAULT(validChannel_, "") };
    inline DescribeCasterSceneAudioResponseBodyAudioLayersAudioLayer& setValidChannel(string validChannel) { DARABONBA_PTR_SET_VALUE(validChannel_, validChannel) };


    // volumeRate Field Functions 
    bool hasVolumeRate() const { return this->volumeRate_ != nullptr;};
    void deleteVolumeRate() { this->volumeRate_ = nullptr;};
    inline float volumeRate() const { DARABONBA_PTR_GET_DEFAULT(volumeRate_, 0.0) };
    inline DescribeCasterSceneAudioResponseBodyAudioLayersAudioLayer& setVolumeRate(float volumeRate) { DARABONBA_PTR_SET_VALUE(volumeRate_, volumeRate) };


  protected:
    // The fixed delay of the audio layer. Unit: milliseconds.
    std::shared_ptr<int32_t> fixedDelayDuration_ = nullptr;
    // The sound channel type of the audio layer. Valid values:
    // 
    // *   **left**: the left channel
    // *   **right**: the right channel
    // *   **all** (default): both the left and right channels
    std::shared_ptr<string> validChannel_ = nullptr;
    // The volume of the audio layer.
    std::shared_ptr<float> volumeRate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
