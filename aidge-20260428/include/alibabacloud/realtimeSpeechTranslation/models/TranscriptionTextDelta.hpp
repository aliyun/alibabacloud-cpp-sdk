// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_REALTIMESPEECHTRANSLATION_MODELS_TRANSCRIPTIONTEXTDELTA_HPP_
#define ALIBABACLOUD_REALTIMESPEECHTRANSLATION_MODELS_TRANSCRIPTIONTEXTDELTA_HPP_
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
  class TranscriptionTextDelta : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TranscriptionTextDelta& obj) { 
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(event_id, eventId_);
      DARABONBA_PTR_TO_JSON(session_id, sessionId_);
      DARABONBA_PTR_TO_JSON(text, text_);
      DARABONBA_PTR_TO_JSON(start_ms, startMs_);
      DARABONBA_PTR_TO_JSON(end_ms, endMs_);
      DARABONBA_PTR_TO_JSON(transcription_id, transcriptionId_);
      DARABONBA_PTR_TO_JSON(revision, revision_);
      DARABONBA_PTR_TO_JSON(stash, stash_);
    };
    friend void from_json(const Darabonba::Json& j, TranscriptionTextDelta& obj) { 
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(event_id, eventId_);
      DARABONBA_PTR_FROM_JSON(session_id, sessionId_);
      DARABONBA_PTR_FROM_JSON(text, text_);
      DARABONBA_PTR_FROM_JSON(start_ms, startMs_);
      DARABONBA_PTR_FROM_JSON(end_ms, endMs_);
      DARABONBA_PTR_FROM_JSON(transcription_id, transcriptionId_);
      DARABONBA_PTR_FROM_JSON(revision, revision_);
      DARABONBA_PTR_FROM_JSON(stash, stash_);
    };
    TranscriptionTextDelta() = default ;
    TranscriptionTextDelta(const TranscriptionTextDelta &) = default ;
    TranscriptionTextDelta(TranscriptionTextDelta &&) = default ;
    TranscriptionTextDelta(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TranscriptionTextDelta() = default ;
    TranscriptionTextDelta& operator=(const TranscriptionTextDelta &) = default ;
    TranscriptionTextDelta& operator=(TranscriptionTextDelta &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->type_ == nullptr
        && this->eventId_ == nullptr && this->sessionId_ == nullptr && this->text_ == nullptr && this->startMs_ == nullptr && this->endMs_ == nullptr
        && this->transcriptionId_ == nullptr && this->revision_ == nullptr && this->stash_ == nullptr; };
    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline TranscriptionTextDelta& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline string getEventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
    inline TranscriptionTextDelta& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline TranscriptionTextDelta& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline TranscriptionTextDelta& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


    // startMs Field Functions 
    bool hasStartMs() const { return this->startMs_ != nullptr;};
    void deleteStartMs() { this->startMs_ = nullptr;};
    inline int64_t getStartMs() const { DARABONBA_PTR_GET_DEFAULT(startMs_, 0L) };
    inline TranscriptionTextDelta& setStartMs(int64_t startMs) { DARABONBA_PTR_SET_VALUE(startMs_, startMs) };


    // endMs Field Functions 
    bool hasEndMs() const { return this->endMs_ != nullptr;};
    void deleteEndMs() { this->endMs_ = nullptr;};
    inline int64_t getEndMs() const { DARABONBA_PTR_GET_DEFAULT(endMs_, 0L) };
    inline TranscriptionTextDelta& setEndMs(int64_t endMs) { DARABONBA_PTR_SET_VALUE(endMs_, endMs) };


    // transcriptionId Field Functions 
    bool hasTranscriptionId() const { return this->transcriptionId_ != nullptr;};
    void deleteTranscriptionId() { this->transcriptionId_ = nullptr;};
    inline string getTranscriptionId() const { DARABONBA_PTR_GET_DEFAULT(transcriptionId_, "") };
    inline TranscriptionTextDelta& setTranscriptionId(string transcriptionId) { DARABONBA_PTR_SET_VALUE(transcriptionId_, transcriptionId) };


    // revision Field Functions 
    bool hasRevision() const { return this->revision_ != nullptr;};
    void deleteRevision() { this->revision_ = nullptr;};
    inline int64_t getRevision() const { DARABONBA_PTR_GET_DEFAULT(revision_, 0L) };
    inline TranscriptionTextDelta& setRevision(int64_t revision) { DARABONBA_PTR_SET_VALUE(revision_, revision) };


    // stash Field Functions 
    bool hasStash() const { return this->stash_ != nullptr;};
    void deleteStash() { this->stash_ = nullptr;};
    inline string getStash() const { DARABONBA_PTR_GET_DEFAULT(stash_, "") };
    inline TranscriptionTextDelta& setStash(string stash) { DARABONBA_PTR_SET_VALUE(stash_, stash) };


  protected:
    shared_ptr<string> type_ {};
    shared_ptr<string> eventId_ {};
    shared_ptr<string> sessionId_ {};
    // 可回改的累计全文，按最新 revision 覆盖，不作增量拼接。
    shared_ptr<string> text_ {};
    // 仅已知原文起始边界时返回。
    shared_ptr<int64_t> startMs_ {};
    // 仅已知原文结束边界时返回。
    shared_ptr<int64_t> endMs_ {};
    // 同一原文的快照与完成事件共享此标识，不关联翻译 segment_id。
    shared_ptr<string> transcriptionId_ {};
    // 同一 transcription_id 内单调递增；中间快照可能合并，版本号不保证连续。
    shared_ptr<int64_t> revision_ {};
    // 可被修正的暂存文本，可为空；仅 stash 变化也会产生新版本。
    shared_ptr<string> stash_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aidge20260428
} // namespace RealtimeSpeechTranslation
#endif
