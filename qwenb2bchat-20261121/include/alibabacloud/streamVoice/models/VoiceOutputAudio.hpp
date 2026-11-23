// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_STREAMVOICE_MODELS_VOICEOUTPUTAUDIO_HPP_
#define ALIBABACLOUD_STREAMVOICE_MODELS_VOICEOUTPUTAUDIO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QwenB2BChat20261121
{
namespace StreamVoice
{
namespace Models
{
  class VoiceOutputAudio : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VoiceOutputAudio& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, VoiceOutputAudio& obj) { 
      (void)j; (void)obj; 
    };
    VoiceOutputAudio() = default ;
    VoiceOutputAudio(const VoiceOutputAudio &) = default ;
    VoiceOutputAudio(VoiceOutputAudio &&) = default ;
    VoiceOutputAudio(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VoiceOutputAudio() = default ;
    VoiceOutputAudio& operator=(const VoiceOutputAudio &) = default ;
    VoiceOutputAudio& operator=(VoiceOutputAudio &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return true; };
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QwenB2BChat20261121
} // namespace StreamVoice
#endif
