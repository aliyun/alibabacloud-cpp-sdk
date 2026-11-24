// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_REALTIMESPEECHTRANSLATION_MODELS_TRANSCRIPTIONDONE_HPP_
#define ALIBABACLOUD_REALTIMESPEECHTRANSLATION_MODELS_TRANSCRIPTIONDONE_HPP_
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
  class TranscriptionDone : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TranscriptionDone& obj) { 
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(event_id, eventId_);
      DARABONBA_PTR_TO_JSON(session_id, sessionId_);
      DARABONBA_PTR_TO_JSON(transcription_id, transcriptionId_);
      DARABONBA_PTR_TO_JSON(revision, revision_);
      DARABONBA_PTR_TO_JSON(text, text_);
      DARABONBA_PTR_TO_JSON(start_ms, startMs_);
      DARABONBA_PTR_TO_JSON(end_ms, endMs_);
      DARABONBA_PTR_TO_JSON(error, error_);
    };
    friend void from_json(const Darabonba::Json& j, TranscriptionDone& obj) { 
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(event_id, eventId_);
      DARABONBA_PTR_FROM_JSON(session_id, sessionId_);
      DARABONBA_PTR_FROM_JSON(transcription_id, transcriptionId_);
      DARABONBA_PTR_FROM_JSON(revision, revision_);
      DARABONBA_PTR_FROM_JSON(text, text_);
      DARABONBA_PTR_FROM_JSON(start_ms, startMs_);
      DARABONBA_PTR_FROM_JSON(end_ms, endMs_);
      DARABONBA_PTR_FROM_JSON(error, error_);
    };
    TranscriptionDone() = default ;
    TranscriptionDone(const TranscriptionDone &) = default ;
    TranscriptionDone(TranscriptionDone &&) = default ;
    TranscriptionDone(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TranscriptionDone() = default ;
    TranscriptionDone& operator=(const TranscriptionDone &) = default ;
    TranscriptionDone& operator=(TranscriptionDone &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Error : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Error& obj) { 
        DARABONBA_PTR_TO_JSON(code, code_);
      };
      friend void from_json(const Darabonba::Json& j, Error& obj) { 
        DARABONBA_PTR_FROM_JSON(code, code_);
      };
      Error() = default ;
      Error(const Error &) = default ;
      Error(Error &&) = default ;
      Error(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Error() = default ;
      Error& operator=(const Error &) = default ;
      Error& operator=(Error &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->code_ == nullptr; };
      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline Error& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    protected:
      shared_ptr<string> code_ {};
    };

    virtual bool empty() const override { return this->type_ == nullptr
        && this->eventId_ == nullptr && this->sessionId_ == nullptr && this->transcriptionId_ == nullptr && this->revision_ == nullptr && this->text_ == nullptr
        && this->startMs_ == nullptr && this->endMs_ == nullptr && this->error_ == nullptr; };
    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline TranscriptionDone& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline string getEventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
    inline TranscriptionDone& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline TranscriptionDone& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // transcriptionId Field Functions 
    bool hasTranscriptionId() const { return this->transcriptionId_ != nullptr;};
    void deleteTranscriptionId() { this->transcriptionId_ = nullptr;};
    inline string getTranscriptionId() const { DARABONBA_PTR_GET_DEFAULT(transcriptionId_, "") };
    inline TranscriptionDone& setTranscriptionId(string transcriptionId) { DARABONBA_PTR_SET_VALUE(transcriptionId_, transcriptionId) };


    // revision Field Functions 
    bool hasRevision() const { return this->revision_ != nullptr;};
    void deleteRevision() { this->revision_ = nullptr;};
    inline int64_t getRevision() const { DARABONBA_PTR_GET_DEFAULT(revision_, 0L) };
    inline TranscriptionDone& setRevision(int64_t revision) { DARABONBA_PTR_SET_VALUE(revision_, revision) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline TranscriptionDone& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


    // startMs Field Functions 
    bool hasStartMs() const { return this->startMs_ != nullptr;};
    void deleteStartMs() { this->startMs_ = nullptr;};
    inline int64_t getStartMs() const { DARABONBA_PTR_GET_DEFAULT(startMs_, 0L) };
    inline TranscriptionDone& setStartMs(int64_t startMs) { DARABONBA_PTR_SET_VALUE(startMs_, startMs) };


    // endMs Field Functions 
    bool hasEndMs() const { return this->endMs_ != nullptr;};
    void deleteEndMs() { this->endMs_ = nullptr;};
    inline int64_t getEndMs() const { DARABONBA_PTR_GET_DEFAULT(endMs_, 0L) };
    inline TranscriptionDone& setEndMs(int64_t endMs) { DARABONBA_PTR_SET_VALUE(endMs_, endMs) };


    // error Field Functions 
    bool hasError() const { return this->error_ != nullptr;};
    void deleteError() { this->error_ = nullptr;};
    inline const TranscriptionDone::Error & getError() const { DARABONBA_PTR_GET_CONST(error_, TranscriptionDone::Error) };
    inline TranscriptionDone::Error getError() { DARABONBA_PTR_GET(error_, TranscriptionDone::Error) };
    inline TranscriptionDone& setError(const TranscriptionDone::Error & error) { DARABONBA_PTR_SET_VALUE(error_, error) };
    inline TranscriptionDone& setError(TranscriptionDone::Error && error) { DARABONBA_PTR_SET_RVALUE(error_, error) };


  protected:
    shared_ptr<string> type_ {};
    shared_ptr<string> eventId_ {};
    shared_ptr<string> sessionId_ {};
    // 与该原文的 TranscriptionTextDelta 共享标识，不关联翻译 segment_id。
    shared_ptr<string> transcriptionId_ {};
    // 同一 transcription_id 内单调递增，完成后不再更新。
    shared_ptr<int64_t> revision_ {};
    // 最终原文，可以为空；转写失败时保留已收到的 text 与 stash 合并结果，并附带 error。
    shared_ptr<string> text_ {};
    // 仅已知原文起始边界时返回。
    shared_ptr<int64_t> startMs_ {};
    // 仅已知原文结束边界时返回。
    shared_ptr<int64_t> endMs_ {};
    // 仅原文转写失败时返回；正常完成时省略。
    shared_ptr<TranscriptionDone::Error> error_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aidge20260428
} // namespace RealtimeSpeechTranslation
#endif
