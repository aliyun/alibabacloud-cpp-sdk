// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCALLDETAILRECORDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCALLDETAILRECORDSRESPONSEBODY_HPP_
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
  class ListCallDetailRecordsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCallDetailRecordsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Params, params_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListCallDetailRecordsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Params, params_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListCallDetailRecordsResponseBody() = default ;
    ListCallDetailRecordsResponseBody(const ListCallDetailRecordsResponseBody &) = default ;
    ListCallDetailRecordsResponseBody(ListCallDetailRecordsResponseBody &&) = default ;
    ListCallDetailRecordsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCallDetailRecordsResponseBody() = default ;
    ListCallDetailRecordsResponseBody& operator=(const ListCallDetailRecordsResponseBody &) = default ;
    ListCallDetailRecordsResponseBody& operator=(ListCallDetailRecordsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CallDetailRecords, callDetailRecords_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CallDetailRecords, callDetailRecords_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
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
      class CallDetailRecords : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CallDetailRecords& obj) { 
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
          DARABONBA_PTR_TO_JSON(TransferTarget, transferTarget_);
          DARABONBA_PTR_TO_JSON(TransferType, transferType_);
        };
        friend void from_json(const Darabonba::Json& j, CallDetailRecords& obj) { 
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
          DARABONBA_PTR_FROM_JSON(TransferTarget, transferTarget_);
          DARABONBA_PTR_FROM_JSON(TransferType, transferType_);
        };
        CallDetailRecords() = default ;
        CallDetailRecords(const CallDetailRecords &) = default ;
        CallDetailRecords(CallDetailRecords &&) = default ;
        CallDetailRecords(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CallDetailRecords() = default ;
        CallDetailRecords& operator=(const CallDetailRecords &) = default ;
        CallDetailRecords& operator=(CallDetailRecords &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->callee_ == nullptr
        && this->caller_ == nullptr && this->dispositionCode_ == nullptr && this->dispositionReason_ == nullptr && this->duration_ == nullptr && this->endTime_ == nullptr
        && this->issueResolved_ == nullptr && this->releaseInitiator_ == nullptr && this->resolutionEvidence_ == nullptr && this->sessionId_ == nullptr && this->startTime_ == nullptr
        && this->talkTime_ == nullptr && this->talkTurns_ == nullptr && this->transferTarget_ == nullptr && this->transferType_ == nullptr; };
        // callee Field Functions 
        bool hasCallee() const { return this->callee_ != nullptr;};
        void deleteCallee() { this->callee_ = nullptr;};
        inline string getCallee() const { DARABONBA_PTR_GET_DEFAULT(callee_, "") };
        inline CallDetailRecords& setCallee(string callee) { DARABONBA_PTR_SET_VALUE(callee_, callee) };


        // caller Field Functions 
        bool hasCaller() const { return this->caller_ != nullptr;};
        void deleteCaller() { this->caller_ = nullptr;};
        inline string getCaller() const { DARABONBA_PTR_GET_DEFAULT(caller_, "") };
        inline CallDetailRecords& setCaller(string caller) { DARABONBA_PTR_SET_VALUE(caller_, caller) };


        // dispositionCode Field Functions 
        bool hasDispositionCode() const { return this->dispositionCode_ != nullptr;};
        void deleteDispositionCode() { this->dispositionCode_ = nullptr;};
        inline string getDispositionCode() const { DARABONBA_PTR_GET_DEFAULT(dispositionCode_, "") };
        inline CallDetailRecords& setDispositionCode(string dispositionCode) { DARABONBA_PTR_SET_VALUE(dispositionCode_, dispositionCode) };


        // dispositionReason Field Functions 
        bool hasDispositionReason() const { return this->dispositionReason_ != nullptr;};
        void deleteDispositionReason() { this->dispositionReason_ = nullptr;};
        inline string getDispositionReason() const { DARABONBA_PTR_GET_DEFAULT(dispositionReason_, "") };
        inline CallDetailRecords& setDispositionReason(string dispositionReason) { DARABONBA_PTR_SET_VALUE(dispositionReason_, dispositionReason) };


        // duration Field Functions 
        bool hasDuration() const { return this->duration_ != nullptr;};
        void deleteDuration() { this->duration_ = nullptr;};
        inline int32_t getDuration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
        inline CallDetailRecords& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
        inline CallDetailRecords& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // issueResolved Field Functions 
        bool hasIssueResolved() const { return this->issueResolved_ != nullptr;};
        void deleteIssueResolved() { this->issueResolved_ = nullptr;};
        inline bool getIssueResolved() const { DARABONBA_PTR_GET_DEFAULT(issueResolved_, false) };
        inline CallDetailRecords& setIssueResolved(bool issueResolved) { DARABONBA_PTR_SET_VALUE(issueResolved_, issueResolved) };


        // releaseInitiator Field Functions 
        bool hasReleaseInitiator() const { return this->releaseInitiator_ != nullptr;};
        void deleteReleaseInitiator() { this->releaseInitiator_ = nullptr;};
        inline string getReleaseInitiator() const { DARABONBA_PTR_GET_DEFAULT(releaseInitiator_, "") };
        inline CallDetailRecords& setReleaseInitiator(string releaseInitiator) { DARABONBA_PTR_SET_VALUE(releaseInitiator_, releaseInitiator) };


        // resolutionEvidence Field Functions 
        bool hasResolutionEvidence() const { return this->resolutionEvidence_ != nullptr;};
        void deleteResolutionEvidence() { this->resolutionEvidence_ = nullptr;};
        inline string getResolutionEvidence() const { DARABONBA_PTR_GET_DEFAULT(resolutionEvidence_, "") };
        inline CallDetailRecords& setResolutionEvidence(string resolutionEvidence) { DARABONBA_PTR_SET_VALUE(resolutionEvidence_, resolutionEvidence) };


        // sessionId Field Functions 
        bool hasSessionId() const { return this->sessionId_ != nullptr;};
        void deleteSessionId() { this->sessionId_ = nullptr;};
        inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
        inline CallDetailRecords& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
        inline CallDetailRecords& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        // talkTime Field Functions 
        bool hasTalkTime() const { return this->talkTime_ != nullptr;};
        void deleteTalkTime() { this->talkTime_ = nullptr;};
        inline int32_t getTalkTime() const { DARABONBA_PTR_GET_DEFAULT(talkTime_, 0) };
        inline CallDetailRecords& setTalkTime(int32_t talkTime) { DARABONBA_PTR_SET_VALUE(talkTime_, talkTime) };


        // talkTurns Field Functions 
        bool hasTalkTurns() const { return this->talkTurns_ != nullptr;};
        void deleteTalkTurns() { this->talkTurns_ = nullptr;};
        inline int32_t getTalkTurns() const { DARABONBA_PTR_GET_DEFAULT(talkTurns_, 0) };
        inline CallDetailRecords& setTalkTurns(int32_t talkTurns) { DARABONBA_PTR_SET_VALUE(talkTurns_, talkTurns) };


        // transferTarget Field Functions 
        bool hasTransferTarget() const { return this->transferTarget_ != nullptr;};
        void deleteTransferTarget() { this->transferTarget_ = nullptr;};
        inline string getTransferTarget() const { DARABONBA_PTR_GET_DEFAULT(transferTarget_, "") };
        inline CallDetailRecords& setTransferTarget(string transferTarget) { DARABONBA_PTR_SET_VALUE(transferTarget_, transferTarget) };


        // transferType Field Functions 
        bool hasTransferType() const { return this->transferType_ != nullptr;};
        void deleteTransferType() { this->transferType_ = nullptr;};
        inline string getTransferType() const { DARABONBA_PTR_GET_DEFAULT(transferType_, "") };
        inline CallDetailRecords& setTransferType(string transferType) { DARABONBA_PTR_SET_VALUE(transferType_, transferType) };


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
        shared_ptr<string> transferTarget_ {};
        shared_ptr<string> transferType_ {};
      };

      virtual bool empty() const override { return this->callDetailRecords_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // callDetailRecords Field Functions 
      bool hasCallDetailRecords() const { return this->callDetailRecords_ != nullptr;};
      void deleteCallDetailRecords() { this->callDetailRecords_ = nullptr;};
      inline const vector<Data::CallDetailRecords> & getCallDetailRecords() const { DARABONBA_PTR_GET_CONST(callDetailRecords_, vector<Data::CallDetailRecords>) };
      inline vector<Data::CallDetailRecords> getCallDetailRecords() { DARABONBA_PTR_GET(callDetailRecords_, vector<Data::CallDetailRecords>) };
      inline Data& setCallDetailRecords(const vector<Data::CallDetailRecords> & callDetailRecords) { DARABONBA_PTR_SET_VALUE(callDetailRecords_, callDetailRecords) };
      inline Data& setCallDetailRecords(vector<Data::CallDetailRecords> && callDetailRecords) { DARABONBA_PTR_SET_RVALUE(callDetailRecords_, callDetailRecords) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline Data& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline Data& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      shared_ptr<vector<Data::CallDetailRecords>> callDetailRecords_ {};
      shared_ptr<int32_t> pageNumber_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->params_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListCallDetailRecordsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListCallDetailRecordsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListCallDetailRecordsResponseBody::Data) };
    inline ListCallDetailRecordsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListCallDetailRecordsResponseBody::Data) };
    inline ListCallDetailRecordsResponseBody& setData(const ListCallDetailRecordsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListCallDetailRecordsResponseBody& setData(ListCallDetailRecordsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListCallDetailRecordsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListCallDetailRecordsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline const vector<string> & getParams() const { DARABONBA_PTR_GET_CONST(params_, vector<string>) };
    inline vector<string> getParams() { DARABONBA_PTR_GET(params_, vector<string>) };
    inline ListCallDetailRecordsResponseBody& setParams(const vector<string> & params) { DARABONBA_PTR_SET_VALUE(params_, params) };
    inline ListCallDetailRecordsResponseBody& setParams(vector<string> && params) { DARABONBA_PTR_SET_RVALUE(params_, params) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCallDetailRecordsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<ListCallDetailRecordsResponseBody::Data> data_ {};
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
