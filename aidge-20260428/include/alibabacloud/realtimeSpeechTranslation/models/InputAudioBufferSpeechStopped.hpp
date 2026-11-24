// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_REALTIMESPEECHTRANSLATION_MODELS_INPUTAUDIOBUFFERSPEECHSTOPPED_HPP_
#define ALIBABACLOUD_REALTIMESPEECHTRANSLATION_MODELS_INPUTAUDIOBUFFERSPEECHSTOPPED_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aidge20260428
{
namespace RealtimeSpeechTranslation
{
namespace Models
{
  class InputAudioBufferSpeechStopped : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InputAudioBufferSpeechStopped& obj) { 
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(event_id, eventId_);
      DARABONBA_PTR_TO_JSON(audio_end_ms, audioEndMs_);
      DARABONBA_PTR_TO_JSON(item_id, itemId_);
    };
    friend void from_json(const Darabonba::Json& j, InputAudioBufferSpeechStopped& obj) { 
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(event_id, eventId_);
      DARABONBA_PTR_FROM_JSON(audio_end_ms, audioEndMs_);
      DARABONBA_PTR_FROM_JSON(item_id, itemId_);
    };
    InputAudioBufferSpeechStopped() = default ;
    InputAudioBufferSpeechStopped(const InputAudioBufferSpeechStopped &) = default ;
    InputAudioBufferSpeechStopped(InputAudioBufferSpeechStopped &&) = default ;
    InputAudioBufferSpeechStopped(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InputAudioBufferSpeechStopped() = default ;
    InputAudioBufferSpeechStopped& operator=(const InputAudioBufferSpeechStopped &) = default ;
    InputAudioBufferSpeechStopped& operator=(InputAudioBufferSpeechStopped &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->type_ == nullptr
        && this->eventId_ == nullptr && this->audioEndMs_ == nullptr && this->itemId_ == nullptr; };
    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline InputAudioBufferSpeechStopped& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline string getEventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
    inline InputAudioBufferSpeechStopped& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


    // audioEndMs Field Functions 
    bool hasAudioEndMs() const { return this->audioEndMs_ != nullptr;};
    void deleteAudioEndMs() { this->audioEndMs_ = nullptr;};
    inline int64_t getAudioEndMs() const { DARABONBA_PTR_GET_DEFAULT(audioEndMs_, 0L) };
    inline InputAudioBufferSpeechStopped& setAudioEndMs(int64_t audioEndMs) { DARABONBA_PTR_SET_VALUE(audioEndMs_, audioEndMs) };


    // itemId Field Functions 
    bool hasItemId() const { return this->itemId_ != nullptr;};
    void deleteItemId() { this->itemId_ = nullptr;};
    inline string getItemId() const { DARABONBA_PTR_GET_DEFAULT(itemId_, "") };
    inline InputAudioBufferSpeechStopped& setItemId(string itemId) { DARABONBA_PTR_SET_VALUE(itemId_, itemId) };


  protected:
    shared_ptr<string> type_ {};
    shared_ptr<string> eventId_ {};
    shared_ptr<int64_t> audioEndMs_ {};
    shared_ptr<string> itemId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aidge20260428
} // namespace RealtimeSpeechTranslation
#endif
