// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_REALTIMESPEECHTRANSLATION_MODELS_LANGUAGEDETECTED_HPP_
#define ALIBABACLOUD_REALTIMESPEECHTRANSLATION_MODELS_LANGUAGEDETECTED_HPP_
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
  class LanguageDetected : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LanguageDetected& obj) { 
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(event_id, eventId_);
      DARABONBA_PTR_TO_JSON(session_id, sessionId_);
      DARABONBA_PTR_TO_JSON(segment_id, segmentId_);
      DARABONBA_PTR_TO_JSON(direction, direction_);
      DARABONBA_PTR_TO_JSON(source_language, sourceLanguage_);
      DARABONBA_PTR_TO_JSON(target_language, targetLanguage_);
    };
    friend void from_json(const Darabonba::Json& j, LanguageDetected& obj) { 
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(event_id, eventId_);
      DARABONBA_PTR_FROM_JSON(session_id, sessionId_);
      DARABONBA_PTR_FROM_JSON(segment_id, segmentId_);
      DARABONBA_PTR_FROM_JSON(direction, direction_);
      DARABONBA_PTR_FROM_JSON(source_language, sourceLanguage_);
      DARABONBA_PTR_FROM_JSON(target_language, targetLanguage_);
    };
    LanguageDetected() = default ;
    LanguageDetected(const LanguageDetected &) = default ;
    LanguageDetected(LanguageDetected &&) = default ;
    LanguageDetected(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LanguageDetected() = default ;
    LanguageDetected& operator=(const LanguageDetected &) = default ;
    LanguageDetected& operator=(LanguageDetected &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->type_ == nullptr
        && this->eventId_ == nullptr && this->sessionId_ == nullptr && this->segmentId_ == nullptr && this->direction_ == nullptr && this->sourceLanguage_ == nullptr
        && this->targetLanguage_ == nullptr; };
    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline LanguageDetected& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline string getEventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
    inline LanguageDetected& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline LanguageDetected& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // segmentId Field Functions 
    bool hasSegmentId() const { return this->segmentId_ != nullptr;};
    void deleteSegmentId() { this->segmentId_ = nullptr;};
    inline string getSegmentId() const { DARABONBA_PTR_GET_DEFAULT(segmentId_, "") };
    inline LanguageDetected& setSegmentId(string segmentId) { DARABONBA_PTR_SET_VALUE(segmentId_, segmentId) };


    // direction Field Functions 
    bool hasDirection() const { return this->direction_ != nullptr;};
    void deleteDirection() { this->direction_ = nullptr;};
    inline string getDirection() const { DARABONBA_PTR_GET_DEFAULT(direction_, "") };
    inline LanguageDetected& setDirection(string direction) { DARABONBA_PTR_SET_VALUE(direction_, direction) };


    // sourceLanguage Field Functions 
    bool hasSourceLanguage() const { return this->sourceLanguage_ != nullptr;};
    void deleteSourceLanguage() { this->sourceLanguage_ = nullptr;};
    inline string getSourceLanguage() const { DARABONBA_PTR_GET_DEFAULT(sourceLanguage_, "") };
    inline LanguageDetected& setSourceLanguage(string sourceLanguage) { DARABONBA_PTR_SET_VALUE(sourceLanguage_, sourceLanguage) };


    // targetLanguage Field Functions 
    bool hasTargetLanguage() const { return this->targetLanguage_ != nullptr;};
    void deleteTargetLanguage() { this->targetLanguage_ = nullptr;};
    inline string getTargetLanguage() const { DARABONBA_PTR_GET_DEFAULT(targetLanguage_, "") };
    inline LanguageDetected& setTargetLanguage(string targetLanguage) { DARABONBA_PTR_SET_VALUE(targetLanguage_, targetLanguage) };


  protected:
    shared_ptr<string> type_ {};
    shared_ptr<string> eventId_ {};
    shared_ptr<string> sessionId_ {};
    shared_ptr<string> segmentId_ {};
    shared_ptr<string> direction_ {};
    shared_ptr<string> sourceLanguage_ {};
    shared_ptr<string> targetLanguage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aidge20260428
} // namespace RealtimeSpeechTranslation
#endif
