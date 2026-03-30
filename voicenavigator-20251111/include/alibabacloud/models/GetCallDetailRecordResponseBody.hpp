// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCALLDETAILRECORDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCALLDETAILRECORDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VoiceNavigator20251111
{
namespace Models
{
  class GetCallDetailRecordResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCallDetailRecordResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Params, params_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetCallDetailRecordResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Params, params_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetCallDetailRecordResponseBody() = default ;
    GetCallDetailRecordResponseBody(const GetCallDetailRecordResponseBody &) = default ;
    GetCallDetailRecordResponseBody(GetCallDetailRecordResponseBody &&) = default ;
    GetCallDetailRecordResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCallDetailRecordResponseBody() = default ;
    GetCallDetailRecordResponseBody& operator=(const GetCallDetailRecordResponseBody &) = default ;
    GetCallDetailRecordResponseBody& operator=(GetCallDetailRecordResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Callee, callee_);
        DARABONBA_PTR_TO_JSON(Caller, caller_);
        DARABONBA_PTR_TO_JSON(DispositionCode, dispositionCode_);
        DARABONBA_PTR_TO_JSON(DispositionReason, dispositionReason_);
        DARABONBA_PTR_TO_JSON(Duration, duration_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(IssueResolved, issueResolved_);
        DARABONBA_PTR_TO_JSON(ReleaseInitiator, releaseInitiator_);
        DARABONBA_PTR_TO_JSON(ResolutionEvidence, resolutionEvidence_);
        DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(TalkTime, talkTime_);
        DARABONBA_PTR_TO_JSON(TalkTurns, talkTurns_);
        DARABONBA_PTR_TO_JSON(Transcripts, transcripts_);
        DARABONBA_PTR_TO_JSON(TransferTarget, transferTarget_);
        DARABONBA_PTR_TO_JSON(TransferType, transferType_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Callee, callee_);
        DARABONBA_PTR_FROM_JSON(Caller, caller_);
        DARABONBA_PTR_FROM_JSON(DispositionCode, dispositionCode_);
        DARABONBA_PTR_FROM_JSON(DispositionReason, dispositionReason_);
        DARABONBA_PTR_FROM_JSON(Duration, duration_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(IssueResolved, issueResolved_);
        DARABONBA_PTR_FROM_JSON(ReleaseInitiator, releaseInitiator_);
        DARABONBA_PTR_FROM_JSON(ResolutionEvidence, resolutionEvidence_);
        DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(TalkTime, talkTime_);
        DARABONBA_PTR_FROM_JSON(TalkTurns, talkTurns_);
        DARABONBA_PTR_FROM_JSON(Transcripts, transcripts_);
        DARABONBA_PTR_FROM_JSON(TransferTarget, transferTarget_);
        DARABONBA_PTR_FROM_JSON(TransferType, transferType_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Transcripts : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Transcripts& obj) { 
          DARABONBA_PTR_TO_JSON(Answer, answer_);
          DARABONBA_PTR_TO_JSON(Backchannels, backchannels_);
          DARABONBA_PTR_TO_JSON(BeginTime, beginTime_);
          DARABONBA_PTR_TO_JSON(ControlParamsList, controlParamsList_);
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(EventTime, eventTime_);
          DARABONBA_PTR_TO_JSON(Extras, extras_);
          DARABONBA_PTR_TO_JSON(Interrupted, interrupted_);
          DARABONBA_PTR_TO_JSON(Legacy, legacy_);
          DARABONBA_PTR_TO_JSON(PlayedWords, playedWords_);
          DARABONBA_PTR_TO_JSON(Role, role_);
          DARABONBA_PTR_TO_JSON(StreamEnd, streamEnd_);
          DARABONBA_PTR_TO_JSON(StreamId, streamId_);
          DARABONBA_PTR_TO_JSON(Utterance, utterance_);
          DARABONBA_PTR_TO_JSON(VendorParams, vendorParams_);
        };
        friend void from_json(const Darabonba::Json& j, Transcripts& obj) { 
          DARABONBA_PTR_FROM_JSON(Answer, answer_);
          DARABONBA_PTR_FROM_JSON(Backchannels, backchannels_);
          DARABONBA_PTR_FROM_JSON(BeginTime, beginTime_);
          DARABONBA_PTR_FROM_JSON(ControlParamsList, controlParamsList_);
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(EventTime, eventTime_);
          DARABONBA_PTR_FROM_JSON(Extras, extras_);
          DARABONBA_PTR_FROM_JSON(Interrupted, interrupted_);
          DARABONBA_PTR_FROM_JSON(Legacy, legacy_);
          DARABONBA_PTR_FROM_JSON(PlayedWords, playedWords_);
          DARABONBA_PTR_FROM_JSON(Role, role_);
          DARABONBA_PTR_FROM_JSON(StreamEnd, streamEnd_);
          DARABONBA_PTR_FROM_JSON(StreamId, streamId_);
          DARABONBA_PTR_FROM_JSON(Utterance, utterance_);
          DARABONBA_PTR_FROM_JSON(VendorParams, vendorParams_);
        };
        Transcripts() = default ;
        Transcripts(const Transcripts &) = default ;
        Transcripts(Transcripts &&) = default ;
        Transcripts(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Transcripts() = default ;
        Transcripts& operator=(const Transcripts &) = default ;
        Transcripts& operator=(Transcripts &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->answer_ == nullptr
        && this->backchannels_ == nullptr && this->beginTime_ == nullptr && this->controlParamsList_ == nullptr && this->endTime_ == nullptr && this->eventTime_ == nullptr
        && this->extras_ == nullptr && this->interrupted_ == nullptr && this->legacy_ == nullptr && this->playedWords_ == nullptr && this->role_ == nullptr
        && this->streamEnd_ == nullptr && this->streamId_ == nullptr && this->utterance_ == nullptr && this->vendorParams_ == nullptr; };
        // answer Field Functions 
        bool hasAnswer() const { return this->answer_ != nullptr;};
        void deleteAnswer() { this->answer_ = nullptr;};
        inline string getAnswer() const { DARABONBA_PTR_GET_DEFAULT(answer_, "") };
        inline Transcripts& setAnswer(string answer) { DARABONBA_PTR_SET_VALUE(answer_, answer) };


        // backchannels Field Functions 
        bool hasBackchannels() const { return this->backchannels_ != nullptr;};
        void deleteBackchannels() { this->backchannels_ = nullptr;};
        inline bool getBackchannels() const { DARABONBA_PTR_GET_DEFAULT(backchannels_, false) };
        inline Transcripts& setBackchannels(bool backchannels) { DARABONBA_PTR_SET_VALUE(backchannels_, backchannels) };


        // beginTime Field Functions 
        bool hasBeginTime() const { return this->beginTime_ != nullptr;};
        void deleteBeginTime() { this->beginTime_ = nullptr;};
        inline int64_t getBeginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, 0L) };
        inline Transcripts& setBeginTime(int64_t beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


        // controlParamsList Field Functions 
        bool hasControlParamsList() const { return this->controlParamsList_ != nullptr;};
        void deleteControlParamsList() { this->controlParamsList_ = nullptr;};
        inline string getControlParamsList() const { DARABONBA_PTR_GET_DEFAULT(controlParamsList_, "") };
        inline Transcripts& setControlParamsList(string controlParamsList) { DARABONBA_PTR_SET_VALUE(controlParamsList_, controlParamsList) };


        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
        inline Transcripts& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // eventTime Field Functions 
        bool hasEventTime() const { return this->eventTime_ != nullptr;};
        void deleteEventTime() { this->eventTime_ = nullptr;};
        inline string getEventTime() const { DARABONBA_PTR_GET_DEFAULT(eventTime_, "") };
        inline Transcripts& setEventTime(string eventTime) { DARABONBA_PTR_SET_VALUE(eventTime_, eventTime) };


        // extras Field Functions 
        bool hasExtras() const { return this->extras_ != nullptr;};
        void deleteExtras() { this->extras_ = nullptr;};
        inline string getExtras() const { DARABONBA_PTR_GET_DEFAULT(extras_, "") };
        inline Transcripts& setExtras(string extras) { DARABONBA_PTR_SET_VALUE(extras_, extras) };


        // interrupted Field Functions 
        bool hasInterrupted() const { return this->interrupted_ != nullptr;};
        void deleteInterrupted() { this->interrupted_ = nullptr;};
        inline bool getInterrupted() const { DARABONBA_PTR_GET_DEFAULT(interrupted_, false) };
        inline Transcripts& setInterrupted(bool interrupted) { DARABONBA_PTR_SET_VALUE(interrupted_, interrupted) };


        // legacy Field Functions 
        bool hasLegacy() const { return this->legacy_ != nullptr;};
        void deleteLegacy() { this->legacy_ = nullptr;};
        inline bool getLegacy() const { DARABONBA_PTR_GET_DEFAULT(legacy_, false) };
        inline Transcripts& setLegacy(bool legacy) { DARABONBA_PTR_SET_VALUE(legacy_, legacy) };


        // playedWords Field Functions 
        bool hasPlayedWords() const { return this->playedWords_ != nullptr;};
        void deletePlayedWords() { this->playedWords_ = nullptr;};
        inline int32_t getPlayedWords() const { DARABONBA_PTR_GET_DEFAULT(playedWords_, 0) };
        inline Transcripts& setPlayedWords(int32_t playedWords) { DARABONBA_PTR_SET_VALUE(playedWords_, playedWords) };


        // role Field Functions 
        bool hasRole() const { return this->role_ != nullptr;};
        void deleteRole() { this->role_ = nullptr;};
        inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
        inline Transcripts& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


        // streamEnd Field Functions 
        bool hasStreamEnd() const { return this->streamEnd_ != nullptr;};
        void deleteStreamEnd() { this->streamEnd_ = nullptr;};
        inline bool getStreamEnd() const { DARABONBA_PTR_GET_DEFAULT(streamEnd_, false) };
        inline Transcripts& setStreamEnd(bool streamEnd) { DARABONBA_PTR_SET_VALUE(streamEnd_, streamEnd) };


        // streamId Field Functions 
        bool hasStreamId() const { return this->streamId_ != nullptr;};
        void deleteStreamId() { this->streamId_ = nullptr;};
        inline string getStreamId() const { DARABONBA_PTR_GET_DEFAULT(streamId_, "") };
        inline Transcripts& setStreamId(string streamId) { DARABONBA_PTR_SET_VALUE(streamId_, streamId) };


        // utterance Field Functions 
        bool hasUtterance() const { return this->utterance_ != nullptr;};
        void deleteUtterance() { this->utterance_ = nullptr;};
        inline string getUtterance() const { DARABONBA_PTR_GET_DEFAULT(utterance_, "") };
        inline Transcripts& setUtterance(string utterance) { DARABONBA_PTR_SET_VALUE(utterance_, utterance) };


        // vendorParams Field Functions 
        bool hasVendorParams() const { return this->vendorParams_ != nullptr;};
        void deleteVendorParams() { this->vendorParams_ = nullptr;};
        inline string getVendorParams() const { DARABONBA_PTR_GET_DEFAULT(vendorParams_, "") };
        inline Transcripts& setVendorParams(string vendorParams) { DARABONBA_PTR_SET_VALUE(vendorParams_, vendorParams) };


      protected:
        shared_ptr<string> answer_ {};
        shared_ptr<bool> backchannels_ {};
        shared_ptr<int64_t> beginTime_ {};
        shared_ptr<string> controlParamsList_ {};
        shared_ptr<int64_t> endTime_ {};
        shared_ptr<string> eventTime_ {};
        shared_ptr<string> extras_ {};
        shared_ptr<bool> interrupted_ {};
        shared_ptr<bool> legacy_ {};
        shared_ptr<int32_t> playedWords_ {};
        shared_ptr<string> role_ {};
        shared_ptr<bool> streamEnd_ {};
        shared_ptr<string> streamId_ {};
        shared_ptr<string> utterance_ {};
        shared_ptr<string> vendorParams_ {};
      };

      virtual bool empty() const override { return this->callee_ == nullptr
        && this->caller_ == nullptr && this->dispositionCode_ == nullptr && this->dispositionReason_ == nullptr && this->duration_ == nullptr && this->endTime_ == nullptr
        && this->issueResolved_ == nullptr && this->releaseInitiator_ == nullptr && this->resolutionEvidence_ == nullptr && this->sessionId_ == nullptr && this->startTime_ == nullptr
        && this->talkTime_ == nullptr && this->talkTurns_ == nullptr && this->transcripts_ == nullptr && this->transferTarget_ == nullptr && this->transferType_ == nullptr; };
      // callee Field Functions 
      bool hasCallee() const { return this->callee_ != nullptr;};
      void deleteCallee() { this->callee_ = nullptr;};
      inline string getCallee() const { DARABONBA_PTR_GET_DEFAULT(callee_, "") };
      inline Data& setCallee(string callee) { DARABONBA_PTR_SET_VALUE(callee_, callee) };


      // caller Field Functions 
      bool hasCaller() const { return this->caller_ != nullptr;};
      void deleteCaller() { this->caller_ = nullptr;};
      inline string getCaller() const { DARABONBA_PTR_GET_DEFAULT(caller_, "") };
      inline Data& setCaller(string caller) { DARABONBA_PTR_SET_VALUE(caller_, caller) };


      // dispositionCode Field Functions 
      bool hasDispositionCode() const { return this->dispositionCode_ != nullptr;};
      void deleteDispositionCode() { this->dispositionCode_ = nullptr;};
      inline string getDispositionCode() const { DARABONBA_PTR_GET_DEFAULT(dispositionCode_, "") };
      inline Data& setDispositionCode(string dispositionCode) { DARABONBA_PTR_SET_VALUE(dispositionCode_, dispositionCode) };


      // dispositionReason Field Functions 
      bool hasDispositionReason() const { return this->dispositionReason_ != nullptr;};
      void deleteDispositionReason() { this->dispositionReason_ = nullptr;};
      inline string getDispositionReason() const { DARABONBA_PTR_GET_DEFAULT(dispositionReason_, "") };
      inline Data& setDispositionReason(string dispositionReason) { DARABONBA_PTR_SET_VALUE(dispositionReason_, dispositionReason) };


      // duration Field Functions 
      bool hasDuration() const { return this->duration_ != nullptr;};
      void deleteDuration() { this->duration_ = nullptr;};
      inline int32_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
      inline Data& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
      inline Data& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // issueResolved Field Functions 
      bool hasIssueResolved() const { return this->issueResolved_ != nullptr;};
      void deleteIssueResolved() { this->issueResolved_ = nullptr;};
      inline bool getIssueResolved() const { DARABONBA_PTR_GET_DEFAULT(issueResolved_, false) };
      inline Data& setIssueResolved(bool issueResolved) { DARABONBA_PTR_SET_VALUE(issueResolved_, issueResolved) };


      // releaseInitiator Field Functions 
      bool hasReleaseInitiator() const { return this->releaseInitiator_ != nullptr;};
      void deleteReleaseInitiator() { this->releaseInitiator_ = nullptr;};
      inline string getReleaseInitiator() const { DARABONBA_PTR_GET_DEFAULT(releaseInitiator_, "") };
      inline Data& setReleaseInitiator(string releaseInitiator) { DARABONBA_PTR_SET_VALUE(releaseInitiator_, releaseInitiator) };


      // resolutionEvidence Field Functions 
      bool hasResolutionEvidence() const { return this->resolutionEvidence_ != nullptr;};
      void deleteResolutionEvidence() { this->resolutionEvidence_ = nullptr;};
      inline string getResolutionEvidence() const { DARABONBA_PTR_GET_DEFAULT(resolutionEvidence_, "") };
      inline Data& setResolutionEvidence(string resolutionEvidence) { DARABONBA_PTR_SET_VALUE(resolutionEvidence_, resolutionEvidence) };


      // sessionId Field Functions 
      bool hasSessionId() const { return this->sessionId_ != nullptr;};
      void deleteSessionId() { this->sessionId_ = nullptr;};
      inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
      inline Data& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
      inline Data& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // talkTime Field Functions 
      bool hasTalkTime() const { return this->talkTime_ != nullptr;};
      void deleteTalkTime() { this->talkTime_ = nullptr;};
      inline int32_t getTalkTime() const { DARABONBA_PTR_GET_DEFAULT(talkTime_, 0) };
      inline Data& setTalkTime(int32_t talkTime) { DARABONBA_PTR_SET_VALUE(talkTime_, talkTime) };


      // talkTurns Field Functions 
      bool hasTalkTurns() const { return this->talkTurns_ != nullptr;};
      void deleteTalkTurns() { this->talkTurns_ = nullptr;};
      inline int32_t getTalkTurns() const { DARABONBA_PTR_GET_DEFAULT(talkTurns_, 0) };
      inline Data& setTalkTurns(int32_t talkTurns) { DARABONBA_PTR_SET_VALUE(talkTurns_, talkTurns) };


      // transcripts Field Functions 
      bool hasTranscripts() const { return this->transcripts_ != nullptr;};
      void deleteTranscripts() { this->transcripts_ = nullptr;};
      inline const vector<Data::Transcripts> & getTranscripts() const { DARABONBA_PTR_GET_CONST(transcripts_, vector<Data::Transcripts>) };
      inline vector<Data::Transcripts> getTranscripts() { DARABONBA_PTR_GET(transcripts_, vector<Data::Transcripts>) };
      inline Data& setTranscripts(const vector<Data::Transcripts> & transcripts) { DARABONBA_PTR_SET_VALUE(transcripts_, transcripts) };
      inline Data& setTranscripts(vector<Data::Transcripts> && transcripts) { DARABONBA_PTR_SET_RVALUE(transcripts_, transcripts) };


      // transferTarget Field Functions 
      bool hasTransferTarget() const { return this->transferTarget_ != nullptr;};
      void deleteTransferTarget() { this->transferTarget_ = nullptr;};
      inline string getTransferTarget() const { DARABONBA_PTR_GET_DEFAULT(transferTarget_, "") };
      inline Data& setTransferTarget(string transferTarget) { DARABONBA_PTR_SET_VALUE(transferTarget_, transferTarget) };


      // transferType Field Functions 
      bool hasTransferType() const { return this->transferType_ != nullptr;};
      void deleteTransferType() { this->transferType_ = nullptr;};
      inline string getTransferType() const { DARABONBA_PTR_GET_DEFAULT(transferType_, "") };
      inline Data& setTransferType(string transferType) { DARABONBA_PTR_SET_VALUE(transferType_, transferType) };


    protected:
      shared_ptr<string> callee_ {};
      shared_ptr<string> caller_ {};
      shared_ptr<string> dispositionCode_ {};
      shared_ptr<string> dispositionReason_ {};
      shared_ptr<int32_t> duration_ {};
      shared_ptr<int64_t> endTime_ {};
      shared_ptr<bool> issueResolved_ {};
      shared_ptr<string> releaseInitiator_ {};
      shared_ptr<string> resolutionEvidence_ {};
      shared_ptr<string> sessionId_ {};
      shared_ptr<int64_t> startTime_ {};
      shared_ptr<int32_t> talkTime_ {};
      shared_ptr<int32_t> talkTurns_ {};
      shared_ptr<vector<Data::Transcripts>> transcripts_ {};
      shared_ptr<string> transferTarget_ {};
      shared_ptr<string> transferType_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->params_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetCallDetailRecordResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetCallDetailRecordResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetCallDetailRecordResponseBody::Data) };
    inline GetCallDetailRecordResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetCallDetailRecordResponseBody::Data) };
    inline GetCallDetailRecordResponseBody& setData(const GetCallDetailRecordResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetCallDetailRecordResponseBody& setData(GetCallDetailRecordResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetCallDetailRecordResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetCallDetailRecordResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline const vector<string> & getParams() const { DARABONBA_PTR_GET_CONST(params_, vector<string>) };
    inline vector<string> getParams() { DARABONBA_PTR_GET(params_, vector<string>) };
    inline GetCallDetailRecordResponseBody& setParams(const vector<string> & params) { DARABONBA_PTR_SET_VALUE(params_, params) };
    inline GetCallDetailRecordResponseBody& setParams(vector<string> && params) { DARABONBA_PTR_SET_RVALUE(params_, params) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCallDetailRecordResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetCallDetailRecordResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<vector<string>> params_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VoiceNavigator20251111
#endif
