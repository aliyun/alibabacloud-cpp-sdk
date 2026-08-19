// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCALLDETAILRECORDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCALLDETAILRECORDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20251111
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
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetCallDetailRecordResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Params, params_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
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
        DARABONBA_PTR_TO_JSON(AccessChannelId, accessChannelId_);
        DARABONBA_PTR_TO_JSON(AccessChannelType, accessChannelType_);
        DARABONBA_PTR_TO_JSON(Callee, callee_);
        DARABONBA_PTR_TO_JSON(Caller, caller_);
        DARABONBA_PTR_TO_JSON(CaseId, caseId_);
        DARABONBA_PTR_TO_JSON(DispositionCode, dispositionCode_);
        DARABONBA_PTR_TO_JSON(DispositionReason, dispositionReason_);
        DARABONBA_PTR_TO_JSON(DraftVersion, draftVersion_);
        DARABONBA_PTR_TO_JSON(Duration, duration_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(Labels, labels_);
        DARABONBA_PTR_TO_JSON(ReleaseInitiator, releaseInitiator_);
        DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(TalkTime, talkTime_);
        DARABONBA_PTR_TO_JSON(TalkTurns, talkTurns_);
        DARABONBA_PTR_TO_JSON(TaskCompleted, taskCompleted_);
        DARABONBA_PTR_TO_JSON(Transcripts, transcripts_);
        DARABONBA_PTR_TO_JSON(TransferTarget, transferTarget_);
        DARABONBA_PTR_TO_JSON(TransferType, transferType_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AccessChannelId, accessChannelId_);
        DARABONBA_PTR_FROM_JSON(AccessChannelType, accessChannelType_);
        DARABONBA_PTR_FROM_JSON(Callee, callee_);
        DARABONBA_PTR_FROM_JSON(Caller, caller_);
        DARABONBA_PTR_FROM_JSON(CaseId, caseId_);
        DARABONBA_PTR_FROM_JSON(DispositionCode, dispositionCode_);
        DARABONBA_PTR_FROM_JSON(DispositionReason, dispositionReason_);
        DARABONBA_PTR_FROM_JSON(DraftVersion, draftVersion_);
        DARABONBA_PTR_FROM_JSON(Duration, duration_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(Labels, labels_);
        DARABONBA_PTR_FROM_JSON(ReleaseInitiator, releaseInitiator_);
        DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(TalkTime, talkTime_);
        DARABONBA_PTR_FROM_JSON(TalkTurns, talkTurns_);
        DARABONBA_PTR_FROM_JSON(TaskCompleted, taskCompleted_);
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
          DARABONBA_PTR_TO_JSON(InputTokens, inputTokens_);
          DARABONBA_PTR_TO_JSON(Interrupted, interrupted_);
          DARABONBA_PTR_TO_JSON(Legacy, legacy_);
          DARABONBA_PTR_TO_JSON(Model, model_);
          DARABONBA_PTR_TO_JSON(OutputTokens, outputTokens_);
          DARABONBA_PTR_TO_JSON(PlayedWords, playedWords_);
          DARABONBA_PTR_TO_JSON(Role, role_);
          DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
          DARABONBA_PTR_TO_JSON(StreamId, streamId_);
          DARABONBA_PTR_TO_JSON(TotalTokens, totalTokens_);
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
          DARABONBA_PTR_FROM_JSON(InputTokens, inputTokens_);
          DARABONBA_PTR_FROM_JSON(Interrupted, interrupted_);
          DARABONBA_PTR_FROM_JSON(Legacy, legacy_);
          DARABONBA_PTR_FROM_JSON(Model, model_);
          DARABONBA_PTR_FROM_JSON(OutputTokens, outputTokens_);
          DARABONBA_PTR_FROM_JSON(PlayedWords, playedWords_);
          DARABONBA_PTR_FROM_JSON(Role, role_);
          DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
          DARABONBA_PTR_FROM_JSON(StreamId, streamId_);
          DARABONBA_PTR_FROM_JSON(TotalTokens, totalTokens_);
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
        && this->extras_ == nullptr && this->inputTokens_ == nullptr && this->interrupted_ == nullptr && this->legacy_ == nullptr && this->model_ == nullptr
        && this->outputTokens_ == nullptr && this->playedWords_ == nullptr && this->role_ == nullptr && this->sessionId_ == nullptr && this->streamId_ == nullptr
        && this->totalTokens_ == nullptr && this->utterance_ == nullptr && this->vendorParams_ == nullptr; };
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
        inline int64_t getEventTime() const { DARABONBA_PTR_GET_DEFAULT(eventTime_, 0L) };
        inline Transcripts& setEventTime(int64_t eventTime) { DARABONBA_PTR_SET_VALUE(eventTime_, eventTime) };


        // extras Field Functions 
        bool hasExtras() const { return this->extras_ != nullptr;};
        void deleteExtras() { this->extras_ = nullptr;};
        inline string getExtras() const { DARABONBA_PTR_GET_DEFAULT(extras_, "") };
        inline Transcripts& setExtras(string extras) { DARABONBA_PTR_SET_VALUE(extras_, extras) };


        // inputTokens Field Functions 
        bool hasInputTokens() const { return this->inputTokens_ != nullptr;};
        void deleteInputTokens() { this->inputTokens_ = nullptr;};
        inline int32_t getInputTokens() const { DARABONBA_PTR_GET_DEFAULT(inputTokens_, 0) };
        inline Transcripts& setInputTokens(int32_t inputTokens) { DARABONBA_PTR_SET_VALUE(inputTokens_, inputTokens) };


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


        // model Field Functions 
        bool hasModel() const { return this->model_ != nullptr;};
        void deleteModel() { this->model_ = nullptr;};
        inline string getModel() const { DARABONBA_PTR_GET_DEFAULT(model_, "") };
        inline Transcripts& setModel(string model) { DARABONBA_PTR_SET_VALUE(model_, model) };


        // outputTokens Field Functions 
        bool hasOutputTokens() const { return this->outputTokens_ != nullptr;};
        void deleteOutputTokens() { this->outputTokens_ = nullptr;};
        inline int32_t getOutputTokens() const { DARABONBA_PTR_GET_DEFAULT(outputTokens_, 0) };
        inline Transcripts& setOutputTokens(int32_t outputTokens) { DARABONBA_PTR_SET_VALUE(outputTokens_, outputTokens) };


        // playedWords Field Functions 
        bool hasPlayedWords() const { return this->playedWords_ != nullptr;};
        void deletePlayedWords() { this->playedWords_ = nullptr;};
        inline string getPlayedWords() const { DARABONBA_PTR_GET_DEFAULT(playedWords_, "") };
        inline Transcripts& setPlayedWords(string playedWords) { DARABONBA_PTR_SET_VALUE(playedWords_, playedWords) };


        // role Field Functions 
        bool hasRole() const { return this->role_ != nullptr;};
        void deleteRole() { this->role_ = nullptr;};
        inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
        inline Transcripts& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


        // sessionId Field Functions 
        bool hasSessionId() const { return this->sessionId_ != nullptr;};
        void deleteSessionId() { this->sessionId_ = nullptr;};
        inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
        inline Transcripts& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


        // streamId Field Functions 
        bool hasStreamId() const { return this->streamId_ != nullptr;};
        void deleteStreamId() { this->streamId_ = nullptr;};
        inline string getStreamId() const { DARABONBA_PTR_GET_DEFAULT(streamId_, "") };
        inline Transcripts& setStreamId(string streamId) { DARABONBA_PTR_SET_VALUE(streamId_, streamId) };


        // totalTokens Field Functions 
        bool hasTotalTokens() const { return this->totalTokens_ != nullptr;};
        void deleteTotalTokens() { this->totalTokens_ = nullptr;};
        inline int32_t getTotalTokens() const { DARABONBA_PTR_GET_DEFAULT(totalTokens_, 0) };
        inline Transcripts& setTotalTokens(int32_t totalTokens) { DARABONBA_PTR_SET_VALUE(totalTokens_, totalTokens) };


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
        // The assistant answer.
        shared_ptr<string> answer_ {};
        // Indicates whether the transcript is a backchannel response.
        shared_ptr<bool> backchannels_ {};
        // The begin time.
        shared_ptr<int64_t> beginTime_ {};
        // The list of control parameters.
        shared_ptr<string> controlParamsList_ {};
        // The end time of the call.
        shared_ptr<int64_t> endTime_ {};
        // The event time.
        shared_ptr<int64_t> eventTime_ {};
        // The extended information.
        shared_ptr<string> extras_ {};
        // The number of input tokens.
        shared_ptr<int32_t> inputTokens_ {};
        // Indicates whether the response was interrupted.
        shared_ptr<bool> interrupted_ {};
        // Indicates whether the transcript is from the legacy version.
        shared_ptr<bool> legacy_ {};
        // The model.
        shared_ptr<string> model_ {};
        // The number of output tokens.
        shared_ptr<int32_t> outputTokens_ {};
        // The played text.
        shared_ptr<string> playedWords_ {};
        // The role.
        shared_ptr<string> role_ {};
        // The call session ID.
        shared_ptr<string> sessionId_ {};
        // The stream ID.
        shared_ptr<string> streamId_ {};
        // The total number of tokens.
        shared_ptr<int32_t> totalTokens_ {};
        // The user utterance.
        shared_ptr<string> utterance_ {};
        // The vendor parameters.
        shared_ptr<string> vendorParams_ {};
      };

      class Labels : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Labels& obj) { 
          DARABONBA_PTR_TO_JSON(CandidateValues, candidateValues_);
          DARABONBA_PTR_TO_JSON(Collected, collected_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(MatchedValue, matchedValue_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(System, system_);
        };
        friend void from_json(const Darabonba::Json& j, Labels& obj) { 
          DARABONBA_PTR_FROM_JSON(CandidateValues, candidateValues_);
          DARABONBA_PTR_FROM_JSON(Collected, collected_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(MatchedValue, matchedValue_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(System, system_);
        };
        Labels() = default ;
        Labels(const Labels &) = default ;
        Labels(Labels &&) = default ;
        Labels(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Labels() = default ;
        Labels& operator=(const Labels &) = default ;
        Labels& operator=(Labels &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->candidateValues_ == nullptr
        && this->collected_ == nullptr && this->description_ == nullptr && this->matchedValue_ == nullptr && this->name_ == nullptr && this->system_ == nullptr; };
        // candidateValues Field Functions 
        bool hasCandidateValues() const { return this->candidateValues_ != nullptr;};
        void deleteCandidateValues() { this->candidateValues_ = nullptr;};
        inline const vector<string> & getCandidateValues() const { DARABONBA_PTR_GET_CONST(candidateValues_, vector<string>) };
        inline vector<string> getCandidateValues() { DARABONBA_PTR_GET(candidateValues_, vector<string>) };
        inline Labels& setCandidateValues(const vector<string> & candidateValues) { DARABONBA_PTR_SET_VALUE(candidateValues_, candidateValues) };
        inline Labels& setCandidateValues(vector<string> && candidateValues) { DARABONBA_PTR_SET_RVALUE(candidateValues_, candidateValues) };


        // collected Field Functions 
        bool hasCollected() const { return this->collected_ != nullptr;};
        void deleteCollected() { this->collected_ = nullptr;};
        inline bool getCollected() const { DARABONBA_PTR_GET_DEFAULT(collected_, false) };
        inline Labels& setCollected(bool collected) { DARABONBA_PTR_SET_VALUE(collected_, collected) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Labels& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // matchedValue Field Functions 
        bool hasMatchedValue() const { return this->matchedValue_ != nullptr;};
        void deleteMatchedValue() { this->matchedValue_ = nullptr;};
        inline string getMatchedValue() const { DARABONBA_PTR_GET_DEFAULT(matchedValue_, "") };
        inline Labels& setMatchedValue(string matchedValue) { DARABONBA_PTR_SET_VALUE(matchedValue_, matchedValue) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Labels& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // system Field Functions 
        bool hasSystem() const { return this->system_ != nullptr;};
        void deleteSystem() { this->system_ = nullptr;};
        inline bool getSystem() const { DARABONBA_PTR_GET_DEFAULT(system_, false) };
        inline Labels& setSystem(bool system) { DARABONBA_PTR_SET_VALUE(system_, system) };


      protected:
        // The set of preset values for the label.
        shared_ptr<vector<string>> candidateValues_ {};
        // Indicates whether the label has been collected.
        shared_ptr<bool> collected_ {};
        // The label description.
        shared_ptr<string> description_ {};
        // The matched value.
        shared_ptr<string> matchedValue_ {};
        // The label name.
        shared_ptr<string> name_ {};
        // Indicates whether the label is a system label.
        shared_ptr<bool> system_ {};
      };

      virtual bool empty() const override { return this->accessChannelId_ == nullptr
        && this->accessChannelType_ == nullptr && this->callee_ == nullptr && this->caller_ == nullptr && this->caseId_ == nullptr && this->dispositionCode_ == nullptr
        && this->dispositionReason_ == nullptr && this->draftVersion_ == nullptr && this->duration_ == nullptr && this->endTime_ == nullptr && this->labels_ == nullptr
        && this->releaseInitiator_ == nullptr && this->sessionId_ == nullptr && this->startTime_ == nullptr && this->talkTime_ == nullptr && this->talkTurns_ == nullptr
        && this->taskCompleted_ == nullptr && this->transcripts_ == nullptr && this->transferTarget_ == nullptr && this->transferType_ == nullptr; };
      // accessChannelId Field Functions 
      bool hasAccessChannelId() const { return this->accessChannelId_ != nullptr;};
      void deleteAccessChannelId() { this->accessChannelId_ = nullptr;};
      inline string getAccessChannelId() const { DARABONBA_PTR_GET_DEFAULT(accessChannelId_, "") };
      inline Data& setAccessChannelId(string accessChannelId) { DARABONBA_PTR_SET_VALUE(accessChannelId_, accessChannelId) };


      // accessChannelType Field Functions 
      bool hasAccessChannelType() const { return this->accessChannelType_ != nullptr;};
      void deleteAccessChannelType() { this->accessChannelType_ = nullptr;};
      inline string getAccessChannelType() const { DARABONBA_PTR_GET_DEFAULT(accessChannelType_, "") };
      inline Data& setAccessChannelType(string accessChannelType) { DARABONBA_PTR_SET_VALUE(accessChannelType_, accessChannelType) };


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


      // caseId Field Functions 
      bool hasCaseId() const { return this->caseId_ != nullptr;};
      void deleteCaseId() { this->caseId_ = nullptr;};
      inline string getCaseId() const { DARABONBA_PTR_GET_DEFAULT(caseId_, "") };
      inline Data& setCaseId(string caseId) { DARABONBA_PTR_SET_VALUE(caseId_, caseId) };


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


      // draftVersion Field Functions 
      bool hasDraftVersion() const { return this->draftVersion_ != nullptr;};
      void deleteDraftVersion() { this->draftVersion_ = nullptr;};
      inline bool getDraftVersion() const { DARABONBA_PTR_GET_DEFAULT(draftVersion_, false) };
      inline Data& setDraftVersion(bool draftVersion) { DARABONBA_PTR_SET_VALUE(draftVersion_, draftVersion) };


      // duration Field Functions 
      bool hasDuration() const { return this->duration_ != nullptr;};
      void deleteDuration() { this->duration_ = nullptr;};
      inline int64_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
      inline Data& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
      inline Data& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // labels Field Functions 
      bool hasLabels() const { return this->labels_ != nullptr;};
      void deleteLabels() { this->labels_ = nullptr;};
      inline const vector<Data::Labels> & getLabels() const { DARABONBA_PTR_GET_CONST(labels_, vector<Data::Labels>) };
      inline vector<Data::Labels> getLabels() { DARABONBA_PTR_GET(labels_, vector<Data::Labels>) };
      inline Data& setLabels(const vector<Data::Labels> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
      inline Data& setLabels(vector<Data::Labels> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


      // releaseInitiator Field Functions 
      bool hasReleaseInitiator() const { return this->releaseInitiator_ != nullptr;};
      void deleteReleaseInitiator() { this->releaseInitiator_ = nullptr;};
      inline string getReleaseInitiator() const { DARABONBA_PTR_GET_DEFAULT(releaseInitiator_, "") };
      inline Data& setReleaseInitiator(string releaseInitiator) { DARABONBA_PTR_SET_VALUE(releaseInitiator_, releaseInitiator) };


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
      inline int64_t getTalkTime() const { DARABONBA_PTR_GET_DEFAULT(talkTime_, 0L) };
      inline Data& setTalkTime(int64_t talkTime) { DARABONBA_PTR_SET_VALUE(talkTime_, talkTime) };


      // talkTurns Field Functions 
      bool hasTalkTurns() const { return this->talkTurns_ != nullptr;};
      void deleteTalkTurns() { this->talkTurns_ = nullptr;};
      inline int64_t getTalkTurns() const { DARABONBA_PTR_GET_DEFAULT(talkTurns_, 0L) };
      inline Data& setTalkTurns(int64_t talkTurns) { DARABONBA_PTR_SET_VALUE(talkTurns_, talkTurns) };


      // taskCompleted Field Functions 
      bool hasTaskCompleted() const { return this->taskCompleted_ != nullptr;};
      void deleteTaskCompleted() { this->taskCompleted_ = nullptr;};
      inline bool getTaskCompleted() const { DARABONBA_PTR_GET_DEFAULT(taskCompleted_, false) };
      inline Data& setTaskCompleted(bool taskCompleted) { DARABONBA_PTR_SET_VALUE(taskCompleted_, taskCompleted) };


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
      // The access channel ID.
      shared_ptr<string> accessChannelId_ {};
      // The access channel type.
      shared_ptr<string> accessChannelType_ {};
      // The callee number.
      shared_ptr<string> callee_ {};
      // The caller number.
      shared_ptr<string> caller_ {};
      // The case ID.
      shared_ptr<string> caseId_ {};
      // The disposition code.
      shared_ptr<string> dispositionCode_ {};
      // The disposition reason.
      shared_ptr<string> dispositionReason_ {};
      // Indicates whether this is a draft version.
      shared_ptr<bool> draftVersion_ {};
      // The total duration.
      shared_ptr<int64_t> duration_ {};
      // The end time of the call.
      shared_ptr<int64_t> endTime_ {};
      // The list of labels.
      shared_ptr<vector<Data::Labels>> labels_ {};
      // The party that initiated the hang-up.
      shared_ptr<string> releaseInitiator_ {};
      // The call session ID.
      shared_ptr<string> sessionId_ {};
      // The start time of the call.
      shared_ptr<int64_t> startTime_ {};
      // The talk time.
      shared_ptr<int64_t> talkTime_ {};
      // The number of conversation turns.
      shared_ptr<int64_t> talkTurns_ {};
      // Indicates whether the task was completed.
      shared_ptr<bool> taskCompleted_ {};
      // The conversation transcripts.
      shared_ptr<vector<Data::Transcripts>> transcripts_ {};
      // The transfer target.
      shared_ptr<string> transferTarget_ {};
      // The transfer type.
      shared_ptr<string> transferType_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->params_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr; };
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


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetCallDetailRecordResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code.
    shared_ptr<string> code_ {};
    // The call detail data.
    shared_ptr<GetCallDetailRecordResponseBody::Data> data_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The error message.
    shared_ptr<string> message_ {};
    // The pass-through parameters.
    shared_ptr<vector<string>> params_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20251111
#endif
