// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_REALTIMESPEECHTRANSLATION_MODELS_INPUTAUDIOBUFFERSPEECHSTARTED_HPP_
#define ALIBABACLOUD_REALTIMESPEECHTRANSLATION_MODELS_INPUTAUDIOBUFFERSPEECHSTARTED_HPP_
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
  class InputAudioBufferSpeechStarted : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InputAudioBufferSpeechStarted& obj) { 
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(event_id, eventId_);
      DARABONBA_PTR_TO_JSON(audio_start_ms, audioStartMs_);
      DARABONBA_PTR_TO_JSON(item_id, itemId_);
    };
    friend void from_json(const Darabonba::Json& j, InputAudioBufferSpeechStarted& obj) { 
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(event_id, eventId_);
      DARABONBA_PTR_FROM_JSON(audio_start_ms, audioStartMs_);
      DARABONBA_PTR_FROM_JSON(item_id, itemId_);
    };
    InputAudioBufferSpeechStarted() = default ;
    InputAudioBufferSpeechStarted(const InputAudioBufferSpeechStarted &) = default ;
    InputAudioBufferSpeechStarted(InputAudioBufferSpeechStarted &&) = default ;
    InputAudioBufferSpeechStarted(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InputAudioBufferSpeechStarted() = default ;
    InputAudioBufferSpeechStarted& operator=(const InputAudioBufferSpeechStarted &) = default ;
    InputAudioBufferSpeechStarted& operator=(InputAudioBufferSpeechStarted &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->type_ == nullptr
        && this->eventId_ == nullptr && this->audioStartMs_ == nullptr && this->itemId_ == nullptr; };
    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline InputAudioBufferSpeechStarted& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline string getEventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
    inline InputAudioBufferSpeechStarted& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


    // audioStartMs Field Functions 
    bool hasAudioStartMs() const { return this->audioStartMs_ != nullptr;};
    void deleteAudioStartMs() { this->audioStartMs_ = nullptr;};
    inline int64_t getAudioStartMs() const { DARABONBA_PTR_GET_DEFAULT(audioStartMs_, 0L) };
    inline InputAudioBufferSpeechStarted& setAudioStartMs(int64_t audioStartMs) { DARABONBA_PTR_SET_VALUE(audioStartMs_, audioStartMs) };


    // itemId Field Functions 
    bool hasItemId() const { return this->itemId_ != nullptr;};
    void deleteItemId() { this->itemId_ = nullptr;};
    inline string getItemId() const { DARABONBA_PTR_GET_DEFAULT(itemId_, "") };
    inline InputAudioBufferSpeechStarted& setItemId(string itemId) { DARABONBA_PTR_SET_VALUE(itemId_, itemId) };


  protected:
    shared_ptr<string> type_ {};
    shared_ptr<string> eventId_ {};
    shared_ptr<int64_t> audioStartMs_ {};
    shared_ptr<string> itemId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aidge20260428
} // namespace RealtimeSpeechTranslation
#endif
