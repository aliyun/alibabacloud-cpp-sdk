// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITTEXTTO3DAVATARVIDEOTASKREQUESTAUDIOINFO_HPP_
#define ALIBABACLOUD_MODELS_SUBMITTEXTTO3DAVATARVIDEOTASKREQUESTAUDIOINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Avatar20220130
{
namespace Models
{
  class SubmitTextTo3DAvatarVideoTaskRequestAudioInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitTextTo3DAvatarVideoTaskRequestAudioInfo& obj) { 
      DARABONBA_PTR_TO_JSON(PitchRate, pitchRate_);
      DARABONBA_PTR_TO_JSON(SampleRate, sampleRate_);
      DARABONBA_PTR_TO_JSON(SpeechRate, speechRate_);
      DARABONBA_PTR_TO_JSON(Voice, voice_);
      DARABONBA_PTR_TO_JSON(Volume, volume_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitTextTo3DAvatarVideoTaskRequestAudioInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(PitchRate, pitchRate_);
      DARABONBA_PTR_FROM_JSON(SampleRate, sampleRate_);
      DARABONBA_PTR_FROM_JSON(SpeechRate, speechRate_);
      DARABONBA_PTR_FROM_JSON(Voice, voice_);
      DARABONBA_PTR_FROM_JSON(Volume, volume_);
    };
    SubmitTextTo3DAvatarVideoTaskRequestAudioInfo() = default ;
    SubmitTextTo3DAvatarVideoTaskRequestAudioInfo(const SubmitTextTo3DAvatarVideoTaskRequestAudioInfo &) = default ;
    SubmitTextTo3DAvatarVideoTaskRequestAudioInfo(SubmitTextTo3DAvatarVideoTaskRequestAudioInfo &&) = default ;
    SubmitTextTo3DAvatarVideoTaskRequestAudioInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitTextTo3DAvatarVideoTaskRequestAudioInfo() = default ;
    SubmitTextTo3DAvatarVideoTaskRequestAudioInfo& operator=(const SubmitTextTo3DAvatarVideoTaskRequestAudioInfo &) = default ;
    SubmitTextTo3DAvatarVideoTaskRequestAudioInfo& operator=(SubmitTextTo3DAvatarVideoTaskRequestAudioInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pitchRate_ != nullptr
        && this->sampleRate_ != nullptr && this->speechRate_ != nullptr && this->voice_ != nullptr && this->volume_ != nullptr; };
    // pitchRate Field Functions 
    bool hasPitchRate() const { return this->pitchRate_ != nullptr;};
    void deletePitchRate() { this->pitchRate_ = nullptr;};
    inline int32_t pitchRate() const { DARABONBA_PTR_GET_DEFAULT(pitchRate_, 0) };
    inline SubmitTextTo3DAvatarVideoTaskRequestAudioInfo& setPitchRate(int32_t pitchRate) { DARABONBA_PTR_SET_VALUE(pitchRate_, pitchRate) };


    // sampleRate Field Functions 
    bool hasSampleRate() const { return this->sampleRate_ != nullptr;};
    void deleteSampleRate() { this->sampleRate_ = nullptr;};
    inline int32_t sampleRate() const { DARABONBA_PTR_GET_DEFAULT(sampleRate_, 0) };
    inline SubmitTextTo3DAvatarVideoTaskRequestAudioInfo& setSampleRate(int32_t sampleRate) { DARABONBA_PTR_SET_VALUE(sampleRate_, sampleRate) };


    // speechRate Field Functions 
    bool hasSpeechRate() const { return this->speechRate_ != nullptr;};
    void deleteSpeechRate() { this->speechRate_ = nullptr;};
    inline int32_t speechRate() const { DARABONBA_PTR_GET_DEFAULT(speechRate_, 0) };
    inline SubmitTextTo3DAvatarVideoTaskRequestAudioInfo& setSpeechRate(int32_t speechRate) { DARABONBA_PTR_SET_VALUE(speechRate_, speechRate) };


    // voice Field Functions 
    bool hasVoice() const { return this->voice_ != nullptr;};
    void deleteVoice() { this->voice_ = nullptr;};
    inline string voice() const { DARABONBA_PTR_GET_DEFAULT(voice_, "") };
    inline SubmitTextTo3DAvatarVideoTaskRequestAudioInfo& setVoice(string voice) { DARABONBA_PTR_SET_VALUE(voice_, voice) };


    // volume Field Functions 
    bool hasVolume() const { return this->volume_ != nullptr;};
    void deleteVolume() { this->volume_ = nullptr;};
    inline int32_t volume() const { DARABONBA_PTR_GET_DEFAULT(volume_, 0) };
    inline SubmitTextTo3DAvatarVideoTaskRequestAudioInfo& setVolume(int32_t volume) { DARABONBA_PTR_SET_VALUE(volume_, volume) };


  protected:
    std::shared_ptr<int32_t> pitchRate_ = nullptr;
    std::shared_ptr<int32_t> sampleRate_ = nullptr;
    std::shared_ptr<int32_t> speechRate_ = nullptr;
    std::shared_ptr<string> voice_ = nullptr;
    std::shared_ptr<int32_t> volume_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Avatar20220130
#endif
