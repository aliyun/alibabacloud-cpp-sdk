// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_REALTIMESPEECHTRANSLATION_MODELS_INPUTAUDIOBUFFERCLEARED_HPP_
#define ALIBABACLOUD_REALTIMESPEECHTRANSLATION_MODELS_INPUTAUDIOBUFFERCLEARED_HPP_
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
  class InputAudioBufferCleared : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InputAudioBufferCleared& obj) { 
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(event_id, eventId_);
      DARABONBA_PTR_TO_JSON(session_id, sessionId_);
      DARABONBA_PTR_TO_JSON(caused_by, causedBy_);
    };
    friend void from_json(const Darabonba::Json& j, InputAudioBufferCleared& obj) { 
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(event_id, eventId_);
      DARABONBA_PTR_FROM_JSON(session_id, sessionId_);
      DARABONBA_PTR_FROM_JSON(caused_by, causedBy_);
    };
    InputAudioBufferCleared() = default ;
    InputAudioBufferCleared(const InputAudioBufferCleared &) = default ;
    InputAudioBufferCleared(InputAudioBufferCleared &&) = default ;
    InputAudioBufferCleared(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InputAudioBufferCleared() = default ;
    InputAudioBufferCleared& operator=(const InputAudioBufferCleared &) = default ;
    InputAudioBufferCleared& operator=(InputAudioBufferCleared &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->type_ == nullptr
        && this->eventId_ == nullptr && this->sessionId_ == nullptr && this->causedBy_ == nullptr; };
    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline InputAudioBufferCleared& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline string getEventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
    inline InputAudioBufferCleared& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline InputAudioBufferCleared& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // causedBy Field Functions 
    bool hasCausedBy() const { return this->causedBy_ != nullptr;};
    void deleteCausedBy() { this->causedBy_ = nullptr;};
    inline string getCausedBy() const { DARABONBA_PTR_GET_DEFAULT(causedBy_, "") };
    inline InputAudioBufferCleared& setCausedBy(string causedBy) { DARABONBA_PTR_SET_VALUE(causedBy_, causedBy) };


  protected:
    shared_ptr<string> type_ {};
    shared_ptr<string> eventId_ {};
    shared_ptr<string> sessionId_ {};
    shared_ptr<string> causedBy_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aidge20260428
} // namespace RealtimeSpeechTranslation
#endif
