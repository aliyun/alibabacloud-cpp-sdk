// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_REALTIMESPEECHTRANSLATION_MODELS_TRANSLATIONTEXTDELTA_HPP_
#define ALIBABACLOUD_REALTIMESPEECHTRANSLATION_MODELS_TRANSLATIONTEXTDELTA_HPP_
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
  class TranslationTextDelta : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TranslationTextDelta& obj) { 
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(event_id, eventId_);
      DARABONBA_PTR_TO_JSON(session_id, sessionId_);
      DARABONBA_PTR_TO_JSON(segment_id, segmentId_);
      DARABONBA_PTR_TO_JSON(direction, direction_);
      DARABONBA_PTR_TO_JSON(source_language, sourceLanguage_);
      DARABONBA_PTR_TO_JSON(target_language, targetLanguage_);
      DARABONBA_PTR_TO_JSON(text, text_);
      DARABONBA_PTR_TO_JSON(stash, stash_);
    };
    friend void from_json(const Darabonba::Json& j, TranslationTextDelta& obj) { 
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(event_id, eventId_);
      DARABONBA_PTR_FROM_JSON(session_id, sessionId_);
      DARABONBA_PTR_FROM_JSON(segment_id, segmentId_);
      DARABONBA_PTR_FROM_JSON(direction, direction_);
      DARABONBA_PTR_FROM_JSON(source_language, sourceLanguage_);
      DARABONBA_PTR_FROM_JSON(target_language, targetLanguage_);
      DARABONBA_PTR_FROM_JSON(text, text_);
      DARABONBA_PTR_FROM_JSON(stash, stash_);
    };
    TranslationTextDelta() = default ;
    TranslationTextDelta(const TranslationTextDelta &) = default ;
    TranslationTextDelta(TranslationTextDelta &&) = default ;
    TranslationTextDelta(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TranslationTextDelta() = default ;
    TranslationTextDelta& operator=(const TranslationTextDelta &) = default ;
    TranslationTextDelta& operator=(TranslationTextDelta &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->type_ == nullptr
        && this->eventId_ == nullptr && this->sessionId_ == nullptr && this->segmentId_ == nullptr && this->direction_ == nullptr && this->sourceLanguage_ == nullptr
        && this->targetLanguage_ == nullptr && this->text_ == nullptr && this->stash_ == nullptr; };
    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline TranslationTextDelta& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline string getEventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
    inline TranslationTextDelta& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline TranslationTextDelta& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // segmentId Field Functions 
    bool hasSegmentId() const { return this->segmentId_ != nullptr;};
    void deleteSegmentId() { this->segmentId_ = nullptr;};
    inline string getSegmentId() const { DARABONBA_PTR_GET_DEFAULT(segmentId_, "") };
    inline TranslationTextDelta& setSegmentId(string segmentId) { DARABONBA_PTR_SET_VALUE(segmentId_, segmentId) };


    // direction Field Functions 
    bool hasDirection() const { return this->direction_ != nullptr;};
    void deleteDirection() { this->direction_ = nullptr;};
    inline string getDirection() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
    inline TranslationTextDelta& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


    // sourceLanguage Field Functions 
    bool hasSourceLanguage() const { return this->sourceLanguage_ != nullptr;};
    void deleteSourceLanguage() { this->sourceLanguage_ = nullptr;};
    inline string getSourceLanguage() const { DARABONBA_PTR_GET_DEFAULT(sourceLanguage_, "") };
    inline TranslationTextDelta& setSourceLanguage(string sourceLanguage) { DARABONBA_PTR_SET_VALUE(sourceLanguage_, sourceLanguage) };


    // targetLanguage Field Functions 
    bool hasTargetLanguage() const { return this->targetLanguage_ != nullptr;};
    void deleteTargetLanguage() { this->targetLanguage_ = nullptr;};
    inline string getTargetLanguage() const { DARABONBA_PTR_GET_DEFAULT(targetLanguage_, "") };
    inline TranslationTextDelta& setTargetLanguage(string targetLanguage) { DARABONBA_PTR_SET_VALUE(targetLanguage_, targetLanguage) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline TranslationTextDelta& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


    // stash Field Functions 
    bool hasStash() const { return this->stash_ != nullptr;};
    void deleteStash() { this->stash_ = nullptr;};
    inline string getStash() const { DARABONBA_PTR_GET_DEFAULT(stash_, "") };
    inline TranslationTextDelta& setStash(string stash) { DARABONBA_PTR_SET_VALUE(stash_, stash) };


  protected:
    shared_ptr<string> type_ {};
    shared_ptr<string> eventId_ {};
    shared_ptr<string> sessionId_ {};
    shared_ptr<string> segmentId_ {};
    shared_ptr<string> direction_ {};
    shared_ptr<string> sourceLanguage_ {};
    shared_ptr<string> targetLanguage_ {};
    shared_ptr<string> text_ {};
    shared_ptr<string> stash_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aidge20260428
} // namespace RealtimeSpeechTranslation
#endif
