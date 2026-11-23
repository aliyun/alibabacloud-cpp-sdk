// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_STREAMVOICE_MODELS_VOICEINPUTAUDIO_HPP_
#define ALIBABACLOUD_STREAMVOICE_MODELS_VOICEINPUTAUDIO_HPP_
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
  class VoiceInputAudio : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VoiceInputAudio& obj) { 
      (void)j; (void)obj; 
    };
    friend void from_json(const Darabonba::Json& j, VoiceInputAudio& obj) { 
      (void)j; (void)obj; 
    };
    VoiceInputAudio() = default ;
    VoiceInputAudio(const VoiceInputAudio &) = default ;
    VoiceInputAudio(VoiceInputAudio &&) = default ;
    VoiceInputAudio(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VoiceInputAudio() = default ;
    VoiceInputAudio& operator=(const VoiceInputAudio &) = default ;
    VoiceInputAudio& operator=(VoiceInputAudio &&) = default ;
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
