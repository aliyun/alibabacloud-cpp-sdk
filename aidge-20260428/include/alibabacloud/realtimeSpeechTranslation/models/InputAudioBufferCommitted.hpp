// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_REALTIMESPEECHTRANSLATION_MODELS_INPUTAUDIOBUFFERCOMMITTED_HPP_
#define ALIBABACLOUD_REALTIMESPEECHTRANSLATION_MODELS_INPUTAUDIOBUFFERCOMMITTED_HPP_
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
  class InputAudioBufferCommitted : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InputAudioBufferCommitted& obj) { 
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(event_id, eventId_);
      DARABONBA_PTR_TO_JSON(session_id, sessionId_);
      DARABONBA_PTR_TO_JSON(segment_id, segmentId_);
      DARABONBA_PTR_TO_JSON(caused_by, causedBy_);
      DARABONBA_PTR_TO_JSON(audio_duration_ms, audioDurationMs_);
      DARABONBA_PTR_TO_JSON(item_id, itemId_);
      DARABONBA_PTR_TO_JSON(previous_item_id, previousItemId_);
    };
    friend void from_json(const Darabonba::Json& j, InputAudioBufferCommitted& obj) { 
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(event_id, eventId_);
      DARABONBA_PTR_FROM_JSON(session_id, sessionId_);
      DARABONBA_PTR_FROM_JSON(segment_id, segmentId_);
      DARABONBA_PTR_FROM_JSON(caused_by, causedBy_);
      DARABONBA_PTR_FROM_JSON(audio_duration_ms, audioDurationMs_);
      DARABONBA_PTR_FROM_JSON(item_id, itemId_);
      DARABONBA_PTR_FROM_JSON(previous_item_id, previousItemId_);
    };
    InputAudioBufferCommitted() = default ;
    InputAudioBufferCommitted(const InputAudioBufferCommitted &) = default ;
    InputAudioBufferCommitted(InputAudioBufferCommitted &&) = default ;
    InputAudioBufferCommitted(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InputAudioBufferCommitted() = default ;
    InputAudioBufferCommitted& operator=(const InputAudioBufferCommitted &) = default ;
    InputAudioBufferCommitted& operator=(InputAudioBufferCommitted &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->type_ == nullptr
        && this->eventId_ == nullptr && this->sessionId_ == nullptr && this->segmentId_ == nullptr && this->causedBy_ == nullptr && this->audioDurationMs_ == nullptr
        && this->itemId_ == nullptr && this->previousItemId_ == nullptr; };
    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline InputAudioBufferCommitted& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline string getEventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
    inline InputAudioBufferCommitted& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline InputAudioBufferCommitted& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // segmentId Field Functions 
    bool hasSegmentId() const { return this->segmentId_ != nullptr;};
    void deleteSegmentId() { this->segmentId_ = nullptr;};
    inline string getSegmentId() const { DARABONBA_PTR_GET_DEFAULT(segmentId_, "") };
    inline InputAudioBufferCommitted& setSegmentId(string segmentId) { DARABONBA_PTR_SET_VALUE(segmentId_, segmentId) };


    // causedBy Field Functions 
    bool hasCausedBy() const { return this->causedBy_ != nullptr;};
    void deleteCausedBy() { this->causedBy_ = nullptr;};
    inline string getCausedBy() const { DARABONBA_PTR_GET_DEFAULT(causedBy_, "") };
    inline InputAudioBufferCommitted& setCausedBy(string causedBy) { DARABONBA_PTR_SET_VALUE(causedBy_, causedBy) };


    // audioDurationMs Field Functions 
    bool hasAudioDurationMs() const { return this->audioDurationMs_ != nullptr;};
    void deleteAudioDurationMs() { this->audioDurationMs_ = nullptr;};
    inline int64_t getAudioDurationMs() const { DARABONBA_PTR_GET_DEFAULT(audioDurationMs_, 0L) };
    inline InputAudioBufferCommitted& setAudioDurationMs(int64_t audioDurationMs) { DARABONBA_PTR_SET_VALUE(audioDurationMs_, audioDurationMs) };


    // itemId Field Functions 
    bool hasItemId() const { return this->itemId_ != nullptr;};
    void deleteItemId() { this->itemId_ = nullptr;};
    inline string getItemId() const { DARABONBA_PTR_GET_DEFAULT(itemId_, "") };
    inline InputAudioBufferCommitted& setItemId(string itemId) { DARABONBA_PTR_SET_VALUE(itemId_, itemId) };


    // previousItemId Field Functions 
    bool hasPreviousItemId() const { return this->previousItemId_ != nullptr;};
    void deletePreviousItemId() { this->previousItemId_ = nullptr;};
    inline string getPreviousItemId() const { DARABONBA_PTR_GET_DEFAULT(previousItemId_, "") };
    inline InputAudioBufferCommitted& setPreviousItemId(string previousItemId) { DARABONBA_PTR_SET_VALUE(previousItemId_, previousItemId) };


  protected:
    shared_ptr<string> type_ {};
    shared_ptr<string> eventId_ {};
    shared_ptr<string> sessionId_ {};
    shared_ptr<string> segmentId_ {};
    shared_ptr<string> causedBy_ {};
    shared_ptr<int64_t> audioDurationMs_ {};
    shared_ptr<string> itemId_ {};
    shared_ptr<string> previousItemId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aidge20260428
} // namespace RealtimeSpeechTranslation
#endif
