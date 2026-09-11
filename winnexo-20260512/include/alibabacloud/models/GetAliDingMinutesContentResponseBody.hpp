// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETALIDINGMINUTESCONTENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETALIDINGMINUTESCONTENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class GetAliDingMinutesContentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAliDingMinutesContentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(minutesId, minutesId_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(summary, summary_);
      DARABONBA_PTR_TO_JSON(title, title_);
      DARABONBA_PTR_TO_JSON(todoContent, todoContent_);
      DARABONBA_PTR_TO_JSON(transcription, transcription_);
    };
    friend void from_json(const Darabonba::Json& j, GetAliDingMinutesContentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(minutesId, minutesId_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(summary, summary_);
      DARABONBA_PTR_FROM_JSON(title, title_);
      DARABONBA_PTR_FROM_JSON(todoContent, todoContent_);
      DARABONBA_PTR_FROM_JSON(transcription, transcription_);
    };
    GetAliDingMinutesContentResponseBody() = default ;
    GetAliDingMinutesContentResponseBody(const GetAliDingMinutesContentResponseBody &) = default ;
    GetAliDingMinutesContentResponseBody(GetAliDingMinutesContentResponseBody &&) = default ;
    GetAliDingMinutesContentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAliDingMinutesContentResponseBody() = default ;
    GetAliDingMinutesContentResponseBody& operator=(const GetAliDingMinutesContentResponseBody &) = default ;
    GetAliDingMinutesContentResponseBody& operator=(GetAliDingMinutesContentResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Transcription : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Transcription& obj) { 
        DARABONBA_PTR_TO_JSON(content, content_);
        DARABONBA_PTR_TO_JSON(speaker, speaker_);
        DARABONBA_PTR_TO_JSON(speakerAvatar, speakerAvatar_);
        DARABONBA_PTR_TO_JSON(timeEnd, timeEnd_);
        DARABONBA_PTR_TO_JSON(timeStart, timeStart_);
      };
      friend void from_json(const Darabonba::Json& j, Transcription& obj) { 
        DARABONBA_PTR_FROM_JSON(content, content_);
        DARABONBA_PTR_FROM_JSON(speaker, speaker_);
        DARABONBA_PTR_FROM_JSON(speakerAvatar, speakerAvatar_);
        DARABONBA_PTR_FROM_JSON(timeEnd, timeEnd_);
        DARABONBA_PTR_FROM_JSON(timeStart, timeStart_);
      };
      Transcription() = default ;
      Transcription(const Transcription &) = default ;
      Transcription(Transcription &&) = default ;
      Transcription(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Transcription() = default ;
      Transcription& operator=(const Transcription &) = default ;
      Transcription& operator=(Transcription &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->content_ == nullptr
        && this->speaker_ == nullptr && this->speakerAvatar_ == nullptr && this->timeEnd_ == nullptr && this->timeStart_ == nullptr; };
      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline string getContent() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
      inline Transcription& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


      // speaker Field Functions 
      bool hasSpeaker() const { return this->speaker_ != nullptr;};
      void deleteSpeaker() { this->speaker_ = nullptr;};
      inline string getSpeaker() const { DARABONBA_PTR_GET_DEFAULT(speaker_, "") };
      inline Transcription& setSpeaker(string speaker) { DARABONBA_PTR_SET_VALUE(speaker_, speaker) };


      // speakerAvatar Field Functions 
      bool hasSpeakerAvatar() const { return this->speakerAvatar_ != nullptr;};
      void deleteSpeakerAvatar() { this->speakerAvatar_ = nullptr;};
      inline string getSpeakerAvatar() const { DARABONBA_PTR_GET_DEFAULT(speakerAvatar_, "") };
      inline Transcription& setSpeakerAvatar(string speakerAvatar) { DARABONBA_PTR_SET_VALUE(speakerAvatar_, speakerAvatar) };


      // timeEnd Field Functions 
      bool hasTimeEnd() const { return this->timeEnd_ != nullptr;};
      void deleteTimeEnd() { this->timeEnd_ = nullptr;};
      inline int64_t getTimeEnd() const { DARABONBA_PTR_GET_DEFAULT(timeEnd_, 0L) };
      inline Transcription& setTimeEnd(int64_t timeEnd) { DARABONBA_PTR_SET_VALUE(timeEnd_, timeEnd) };


      // timeStart Field Functions 
      bool hasTimeStart() const { return this->timeStart_ != nullptr;};
      void deleteTimeStart() { this->timeStart_ = nullptr;};
      inline int64_t getTimeStart() const { DARABONBA_PTR_GET_DEFAULT(timeStart_, 0L) };
      inline Transcription& setTimeStart(int64_t timeStart) { DARABONBA_PTR_SET_VALUE(timeStart_, timeStart) };


    protected:
      // The returned content.
      shared_ptr<string> content_ {};
      // The speaker.
      shared_ptr<string> speaker_ {};
      // The avatar of the speaker. An empty string is returned if no avatar is available.
      shared_ptr<string> speakerAvatar_ {};
      // The end time of the segment.
      shared_ptr<int64_t> timeEnd_ {};
      // The start time of the segment.
      shared_ptr<int64_t> timeStart_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->minutesId_ == nullptr && this->requestId_ == nullptr && this->summary_ == nullptr && this->title_ == nullptr
        && this->todoContent_ == nullptr && this->transcription_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetAliDingMinutesContentResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetAliDingMinutesContentResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // minutesId Field Functions 
    bool hasMinutesId() const { return this->minutesId_ != nullptr;};
    void deleteMinutesId() { this->minutesId_ = nullptr;};
    inline string getMinutesId() const { DARABONBA_PTR_GET_DEFAULT(minutesId_, "") };
    inline GetAliDingMinutesContentResponseBody& setMinutesId(string minutesId) { DARABONBA_PTR_SET_VALUE(minutesId_, minutesId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAliDingMinutesContentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // summary Field Functions 
    bool hasSummary() const { return this->summary_ != nullptr;};
    void deleteSummary() { this->summary_ = nullptr;};
    inline string getSummary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
    inline GetAliDingMinutesContentResponseBody& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline GetAliDingMinutesContentResponseBody& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // todoContent Field Functions 
    bool hasTodoContent() const { return this->todoContent_ != nullptr;};
    void deleteTodoContent() { this->todoContent_ = nullptr;};
    inline string getTodoContent() const { DARABONBA_PTR_GET_DEFAULT(todoContent_, "") };
    inline GetAliDingMinutesContentResponseBody& setTodoContent(string todoContent) { DARABONBA_PTR_SET_VALUE(todoContent_, todoContent) };


    // transcription Field Functions 
    bool hasTranscription() const { return this->transcription_ != nullptr;};
    void deleteTranscription() { this->transcription_ = nullptr;};
    inline const vector<GetAliDingMinutesContentResponseBody::Transcription> & getTranscription() const { DARABONBA_PTR_GET_CONST(transcription_, vector<GetAliDingMinutesContentResponseBody::Transcription>) };
    inline vector<GetAliDingMinutesContentResponseBody::Transcription> getTranscription() { DARABONBA_PTR_GET(transcription_, vector<GetAliDingMinutesContentResponseBody::Transcription>) };
    inline GetAliDingMinutesContentResponseBody& setTranscription(const vector<GetAliDingMinutesContentResponseBody::Transcription> & transcription) { DARABONBA_PTR_SET_VALUE(transcription_, transcription) };
    inline GetAliDingMinutesContentResponseBody& setTranscription(vector<GetAliDingMinutesContentResponseBody::Transcription> && transcription) { DARABONBA_PTR_SET_RVALUE(transcription_, transcription) };


  protected:
    // The status code.
    shared_ptr<string> code_ {};
    // The description of the status code.
    shared_ptr<string> message_ {};
    // The DingTalk minutes ID.
    shared_ptr<string> minutesId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The intelligent meeting summary content.
    shared_ptr<string> summary_ {};
    // The new session title.
    shared_ptr<string> title_ {};
    // The to-do item details.
    shared_ptr<string> todoContent_ {};
    // The speech-type execution parameters.
    shared_ptr<vector<GetAliDingMinutesContentResponseBody::Transcription>> transcription_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
