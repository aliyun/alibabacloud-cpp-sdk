// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTEMPLATEGROUPCONSOLERESPONSEBODYTEMPLATEGROUPTEMPLATESTEMPLATEAUDIO_HPP_
#define ALIBABACLOUD_MODELS_GETTEMPLATEGROUPCONSOLERESPONSEBODYTEMPLATEGROUPTEMPLATESTEMPLATEAUDIO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateAudio : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateAudio& obj) { 
      DARABONBA_PTR_TO_JSON(Bitrate, bitrate_);
      DARABONBA_PTR_TO_JSON(Channels, channels_);
      DARABONBA_PTR_TO_JSON(Codec, codec_);
      DARABONBA_PTR_TO_JSON(Profile, profile_);
      DARABONBA_PTR_TO_JSON(Remove, remove_);
      DARABONBA_PTR_TO_JSON(Samplerate, samplerate_);
    };
    friend void from_json(const Darabonba::Json& j, GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateAudio& obj) { 
      DARABONBA_PTR_FROM_JSON(Bitrate, bitrate_);
      DARABONBA_PTR_FROM_JSON(Channels, channels_);
      DARABONBA_PTR_FROM_JSON(Codec, codec_);
      DARABONBA_PTR_FROM_JSON(Profile, profile_);
      DARABONBA_PTR_FROM_JSON(Remove, remove_);
      DARABONBA_PTR_FROM_JSON(Samplerate, samplerate_);
    };
    GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateAudio() = default ;
    GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateAudio(const GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateAudio &) = default ;
    GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateAudio(GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateAudio &&) = default ;
    GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateAudio(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateAudio() = default ;
    GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateAudio& operator=(const GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateAudio &) = default ;
    GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateAudio& operator=(GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateAudio &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bitrate_ != nullptr
        && this->channels_ != nullptr && this->codec_ != nullptr && this->profile_ != nullptr && this->remove_ != nullptr && this->samplerate_ != nullptr; };
    // bitrate Field Functions 
    bool hasBitrate() const { return this->bitrate_ != nullptr;};
    void deleteBitrate() { this->bitrate_ = nullptr;};
    inline string bitrate() const { DARABONBA_PTR_GET_DEFAULT(bitrate_, "") };
    inline GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateAudio& setBitrate(string bitrate) { DARABONBA_PTR_SET_VALUE(bitrate_, bitrate) };


    // channels Field Functions 
    bool hasChannels() const { return this->channels_ != nullptr;};
    void deleteChannels() { this->channels_ = nullptr;};
    inline string channels() const { DARABONBA_PTR_GET_DEFAULT(channels_, "") };
    inline GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateAudio& setChannels(string channels) { DARABONBA_PTR_SET_VALUE(channels_, channels) };


    // codec Field Functions 
    bool hasCodec() const { return this->codec_ != nullptr;};
    void deleteCodec() { this->codec_ = nullptr;};
    inline string codec() const { DARABONBA_PTR_GET_DEFAULT(codec_, "") };
    inline GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateAudio& setCodec(string codec) { DARABONBA_PTR_SET_VALUE(codec_, codec) };


    // profile Field Functions 
    bool hasProfile() const { return this->profile_ != nullptr;};
    void deleteProfile() { this->profile_ = nullptr;};
    inline string profile() const { DARABONBA_PTR_GET_DEFAULT(profile_, "") };
    inline GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateAudio& setProfile(string profile) { DARABONBA_PTR_SET_VALUE(profile_, profile) };


    // remove Field Functions 
    bool hasRemove() const { return this->remove_ != nullptr;};
    void deleteRemove() { this->remove_ = nullptr;};
    inline string remove() const { DARABONBA_PTR_GET_DEFAULT(remove_, "") };
    inline GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateAudio& setRemove(string remove) { DARABONBA_PTR_SET_VALUE(remove_, remove) };


    // samplerate Field Functions 
    bool hasSamplerate() const { return this->samplerate_ != nullptr;};
    void deleteSamplerate() { this->samplerate_ = nullptr;};
    inline string samplerate() const { DARABONBA_PTR_GET_DEFAULT(samplerate_, "") };
    inline GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateAudio& setSamplerate(string samplerate) { DARABONBA_PTR_SET_VALUE(samplerate_, samplerate) };


  protected:
    std::shared_ptr<string> bitrate_ = nullptr;
    std::shared_ptr<string> channels_ = nullptr;
    std::shared_ptr<string> codec_ = nullptr;
    std::shared_ptr<string> profile_ = nullptr;
    std::shared_ptr<string> remove_ = nullptr;
    std::shared_ptr<string> samplerate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
