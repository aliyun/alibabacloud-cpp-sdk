// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMEDIALIVECHANNELSRESPONSEBODYCHANNELSAUDIOSETTINGSAUDIOCODECSETTING_HPP_
#define ALIBABACLOUD_MODELS_LISTMEDIALIVECHANNELSRESPONSEBODYCHANNELSAUDIOSETTINGSAUDIOCODECSETTING_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListMediaLiveChannelsResponseBodyChannelsAudioSettingsAudioCodecSetting : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMediaLiveChannelsResponseBodyChannelsAudioSettingsAudioCodecSetting& obj) { 
      DARABONBA_PTR_TO_JSON(Bitrate, bitrate_);
      DARABONBA_PTR_TO_JSON(Profile, profile_);
      DARABONBA_PTR_TO_JSON(SampleRate, sampleRate_);
    };
    friend void from_json(const Darabonba::Json& j, ListMediaLiveChannelsResponseBodyChannelsAudioSettingsAudioCodecSetting& obj) { 
      DARABONBA_PTR_FROM_JSON(Bitrate, bitrate_);
      DARABONBA_PTR_FROM_JSON(Profile, profile_);
      DARABONBA_PTR_FROM_JSON(SampleRate, sampleRate_);
    };
    ListMediaLiveChannelsResponseBodyChannelsAudioSettingsAudioCodecSetting() = default ;
    ListMediaLiveChannelsResponseBodyChannelsAudioSettingsAudioCodecSetting(const ListMediaLiveChannelsResponseBodyChannelsAudioSettingsAudioCodecSetting &) = default ;
    ListMediaLiveChannelsResponseBodyChannelsAudioSettingsAudioCodecSetting(ListMediaLiveChannelsResponseBodyChannelsAudioSettingsAudioCodecSetting &&) = default ;
    ListMediaLiveChannelsResponseBodyChannelsAudioSettingsAudioCodecSetting(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMediaLiveChannelsResponseBodyChannelsAudioSettingsAudioCodecSetting() = default ;
    ListMediaLiveChannelsResponseBodyChannelsAudioSettingsAudioCodecSetting& operator=(const ListMediaLiveChannelsResponseBodyChannelsAudioSettingsAudioCodecSetting &) = default ;
    ListMediaLiveChannelsResponseBodyChannelsAudioSettingsAudioCodecSetting& operator=(ListMediaLiveChannelsResponseBodyChannelsAudioSettingsAudioCodecSetting &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bitrate_ != nullptr
        && this->profile_ != nullptr && this->sampleRate_ != nullptr; };
    // bitrate Field Functions 
    bool hasBitrate() const { return this->bitrate_ != nullptr;};
    void deleteBitrate() { this->bitrate_ = nullptr;};
    inline int32_t bitrate() const { DARABONBA_PTR_GET_DEFAULT(bitrate_, 0) };
    inline ListMediaLiveChannelsResponseBodyChannelsAudioSettingsAudioCodecSetting& setBitrate(int32_t bitrate) { DARABONBA_PTR_SET_VALUE(bitrate_, bitrate) };


    // profile Field Functions 
    bool hasProfile() const { return this->profile_ != nullptr;};
    void deleteProfile() { this->profile_ = nullptr;};
    inline string profile() const { DARABONBA_PTR_GET_DEFAULT(profile_, "") };
    inline ListMediaLiveChannelsResponseBodyChannelsAudioSettingsAudioCodecSetting& setProfile(string profile) { DARABONBA_PTR_SET_VALUE(profile_, profile) };


    // sampleRate Field Functions 
    bool hasSampleRate() const { return this->sampleRate_ != nullptr;};
    void deleteSampleRate() { this->sampleRate_ = nullptr;};
    inline int32_t sampleRate() const { DARABONBA_PTR_GET_DEFAULT(sampleRate_, 0) };
    inline ListMediaLiveChannelsResponseBodyChannelsAudioSettingsAudioCodecSetting& setSampleRate(int32_t sampleRate) { DARABONBA_PTR_SET_VALUE(sampleRate_, sampleRate) };


  protected:
    // The audio bitrate. Unit: bit/s.
    std::shared_ptr<int32_t> bitrate_ = nullptr;
    // The audio codec profile.
    std::shared_ptr<string> profile_ = nullptr;
    // The audio sample rate. Unit: Hz.
    std::shared_ptr<int32_t> sampleRate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
