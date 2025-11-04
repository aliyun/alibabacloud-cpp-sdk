// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLIVETRANSCODETEMPLATERESPONSEBODYTEMPLATECONTENTTEMPLATECONFIGAUDIOPARAMS_HPP_
#define ALIBABACLOUD_MODELS_GETLIVETRANSCODETEMPLATERESPONSEBODYTEMPLATECONTENTTEMPLATECONFIGAUDIOPARAMS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetLiveTranscodeTemplateResponseBodyTemplateContentTemplateConfigAudioParams : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLiveTranscodeTemplateResponseBodyTemplateContentTemplateConfigAudioParams& obj) { 
      DARABONBA_PTR_TO_JSON(Bitrate, bitrate_);
      DARABONBA_PTR_TO_JSON(Channels, channels_);
      DARABONBA_PTR_TO_JSON(Codec, codec_);
      DARABONBA_PTR_TO_JSON(Profile, profile_);
      DARABONBA_PTR_TO_JSON(Samplerate, samplerate_);
    };
    friend void from_json(const Darabonba::Json& j, GetLiveTranscodeTemplateResponseBodyTemplateContentTemplateConfigAudioParams& obj) { 
      DARABONBA_PTR_FROM_JSON(Bitrate, bitrate_);
      DARABONBA_PTR_FROM_JSON(Channels, channels_);
      DARABONBA_PTR_FROM_JSON(Codec, codec_);
      DARABONBA_PTR_FROM_JSON(Profile, profile_);
      DARABONBA_PTR_FROM_JSON(Samplerate, samplerate_);
    };
    GetLiveTranscodeTemplateResponseBodyTemplateContentTemplateConfigAudioParams() = default ;
    GetLiveTranscodeTemplateResponseBodyTemplateContentTemplateConfigAudioParams(const GetLiveTranscodeTemplateResponseBodyTemplateContentTemplateConfigAudioParams &) = default ;
    GetLiveTranscodeTemplateResponseBodyTemplateContentTemplateConfigAudioParams(GetLiveTranscodeTemplateResponseBodyTemplateContentTemplateConfigAudioParams &&) = default ;
    GetLiveTranscodeTemplateResponseBodyTemplateContentTemplateConfigAudioParams(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLiveTranscodeTemplateResponseBodyTemplateContentTemplateConfigAudioParams() = default ;
    GetLiveTranscodeTemplateResponseBodyTemplateContentTemplateConfigAudioParams& operator=(const GetLiveTranscodeTemplateResponseBodyTemplateContentTemplateConfigAudioParams &) = default ;
    GetLiveTranscodeTemplateResponseBodyTemplateContentTemplateConfigAudioParams& operator=(GetLiveTranscodeTemplateResponseBodyTemplateContentTemplateConfigAudioParams &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bitrate_ == nullptr
        && return this->channels_ == nullptr && return this->codec_ == nullptr && return this->profile_ == nullptr && return this->samplerate_ == nullptr; };
    // bitrate Field Functions 
    bool hasBitrate() const { return this->bitrate_ != nullptr;};
    void deleteBitrate() { this->bitrate_ = nullptr;};
    inline string bitrate() const { DARABONBA_PTR_GET_DEFAULT(bitrate_, "") };
    inline GetLiveTranscodeTemplateResponseBodyTemplateContentTemplateConfigAudioParams& setBitrate(string bitrate) { DARABONBA_PTR_SET_VALUE(bitrate_, bitrate) };


    // channels Field Functions 
    bool hasChannels() const { return this->channels_ != nullptr;};
    void deleteChannels() { this->channels_ = nullptr;};
    inline string channels() const { DARABONBA_PTR_GET_DEFAULT(channels_, "") };
    inline GetLiveTranscodeTemplateResponseBodyTemplateContentTemplateConfigAudioParams& setChannels(string channels) { DARABONBA_PTR_SET_VALUE(channels_, channels) };


    // codec Field Functions 
    bool hasCodec() const { return this->codec_ != nullptr;};
    void deleteCodec() { this->codec_ = nullptr;};
    inline string codec() const { DARABONBA_PTR_GET_DEFAULT(codec_, "") };
    inline GetLiveTranscodeTemplateResponseBodyTemplateContentTemplateConfigAudioParams& setCodec(string codec) { DARABONBA_PTR_SET_VALUE(codec_, codec) };


    // profile Field Functions 
    bool hasProfile() const { return this->profile_ != nullptr;};
    void deleteProfile() { this->profile_ = nullptr;};
    inline string profile() const { DARABONBA_PTR_GET_DEFAULT(profile_, "") };
    inline GetLiveTranscodeTemplateResponseBodyTemplateContentTemplateConfigAudioParams& setProfile(string profile) { DARABONBA_PTR_SET_VALUE(profile_, profile) };


    // samplerate Field Functions 
    bool hasSamplerate() const { return this->samplerate_ != nullptr;};
    void deleteSamplerate() { this->samplerate_ = nullptr;};
    inline string samplerate() const { DARABONBA_PTR_GET_DEFAULT(samplerate_, "") };
    inline GetLiveTranscodeTemplateResponseBodyTemplateContentTemplateConfigAudioParams& setSamplerate(string samplerate) { DARABONBA_PTR_SET_VALUE(samplerate_, samplerate) };


  protected:
    // The bitrate of the output audio.
    std::shared_ptr<string> bitrate_ = nullptr;
    // The number of sound channels.
    std::shared_ptr<string> channels_ = nullptr;
    // The audio codec.
    std::shared_ptr<string> codec_ = nullptr;
    // The audio codec profile.
    std::shared_ptr<string> profile_ = nullptr;
    // The audio sampling rate.
    std::shared_ptr<string> samplerate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
