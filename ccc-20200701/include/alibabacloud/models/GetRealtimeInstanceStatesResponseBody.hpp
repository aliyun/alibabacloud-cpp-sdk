// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREALTIMEINSTANCESTATESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETREALTIMEINSTANCESTATESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class GetRealtimeInstanceStatesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRealtimeInstanceStatesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetRealtimeInstanceStatesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetRealtimeInstanceStatesResponseBody() = default ;
    GetRealtimeInstanceStatesResponseBody(const GetRealtimeInstanceStatesResponseBody &) = default ;
    GetRealtimeInstanceStatesResponseBody(GetRealtimeInstanceStatesResponseBody &&) = default ;
    GetRealtimeInstanceStatesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRealtimeInstanceStatesResponseBody() = default ;
    GetRealtimeInstanceStatesResponseBody& operator=(const GetRealtimeInstanceStatesResponseBody &) = default ;
    GetRealtimeInstanceStatesResponseBody& operator=(GetRealtimeInstanceStatesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(BreakCodeDetailList, breakCodeDetailList_);
        DARABONBA_PTR_TO_JSON(BreakingAgents, breakingAgents_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(InteractiveCalls, interactiveCalls_);
        DARABONBA_PTR_TO_JSON(LoggedInAgents, loggedInAgents_);
        DARABONBA_PTR_TO_JSON(LongestWaitingTime, longestWaitingTime_);
        DARABONBA_PTR_TO_JSON(ReadyAgents, readyAgents_);
        DARABONBA_PTR_TO_JSON(TalkingAgents, talkingAgents_);
        DARABONBA_PTR_TO_JSON(TotalAgents, totalAgents_);
        DARABONBA_PTR_TO_JSON(WaitingCalls, waitingCalls_);
        DARABONBA_PTR_TO_JSON(WorkingAgents, workingAgents_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(BreakCodeDetailList, breakCodeDetailList_);
        DARABONBA_PTR_FROM_JSON(BreakingAgents, breakingAgents_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(InteractiveCalls, interactiveCalls_);
        DARABONBA_PTR_FROM_JSON(LoggedInAgents, loggedInAgents_);
        DARABONBA_PTR_FROM_JSON(LongestWaitingTime, longestWaitingTime_);
        DARABONBA_PTR_FROM_JSON(ReadyAgents, readyAgents_);
        DARABONBA_PTR_FROM_JSON(TalkingAgents, talkingAgents_);
        DARABONBA_PTR_FROM_JSON(TotalAgents, totalAgents_);
        DARABONBA_PTR_FROM_JSON(WaitingCalls, waitingCalls_);
        DARABONBA_PTR_FROM_JSON(WorkingAgents, workingAgents_);
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
      class BreakCodeDetailList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BreakCodeDetailList& obj) { 
          DARABONBA_PTR_TO_JSON(BreakCode, breakCode_);
          DARABONBA_PTR_TO_JSON(Count, count_);
        };
        friend void from_json(const Darabonba::Json& j, BreakCodeDetailList& obj) { 
          DARABONBA_PTR_FROM_JSON(BreakCode, breakCode_);
          DARABONBA_PTR_FROM_JSON(Count, count_);
        };
        BreakCodeDetailList() = default ;
        BreakCodeDetailList(const BreakCodeDetailList &) = default ;
        BreakCodeDetailList(BreakCodeDetailList &&) = default ;
        BreakCodeDetailList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~BreakCodeDetailList() = default ;
        BreakCodeDetailList& operator=(const BreakCodeDetailList &) = default ;
        BreakCodeDetailList& operator=(BreakCodeDetailList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->breakCode_ == nullptr
        && this->count_ == nullptr; };
        // breakCode Field Functions 
        bool hasBreakCode() const { return this->breakCode_ != nullptr;};
        void deleteBreakCode() { this->breakCode_ = nullptr;};
        inline string getBreakCode() const { DARABONBA_PTR_GET_DEFAULT(breakCode_, "") };
        inline BreakCodeDetailList& setBreakCode(string breakCode) { DARABONBA_PTR_SET_VALUE(breakCode_, breakCode) };


        // count Field Functions 
        bool hasCount() const { return this->count_ != nullptr;};
        void deleteCount() { this->count_ = nullptr;};
        inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
        inline BreakCodeDetailList& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      protected:
        shared_ptr<string> breakCode_ {};
        shared_ptr<int64_t> count_ {};
      };

      virtual bool empty() const override { return this->breakCodeDetailList_ == nullptr
        && this->breakingAgents_ == nullptr && this->instanceId_ == nullptr && this->interactiveCalls_ == nullptr && this->loggedInAgents_ == nullptr && this->longestWaitingTime_ == nullptr
        && this->readyAgents_ == nullptr && this->talkingAgents_ == nullptr && this->totalAgents_ == nullptr && this->waitingCalls_ == nullptr && this->workingAgents_ == nullptr; };
      // breakCodeDetailList Field Functions 
      bool hasBreakCodeDetailList() const { return this->breakCodeDetailList_ != nullptr;};
      void deleteBreakCodeDetailList() { this->breakCodeDetailList_ = nullptr;};
      inline const vector<Data::BreakCodeDetailList> & getBreakCodeDetailList() const { DARABONBA_PTR_GET_CONST(breakCodeDetailList_, vector<Data::BreakCodeDetailList>) };
      inline vector<Data::BreakCodeDetailList> getBreakCodeDetailList() { DARABONBA_PTR_GET(breakCodeDetailList_, vector<Data::BreakCodeDetailList>) };
      inline Data& setBreakCodeDetailList(const vector<Data::BreakCodeDetailList> & breakCodeDetailList) { DARABONBA_PTR_SET_VALUE(breakCodeDetailList_, breakCodeDetailList) };
      inline Data& setBreakCodeDetailList(vector<Data::BreakCodeDetailList> && breakCodeDetailList) { DARABONBA_PTR_SET_RVALUE(breakCodeDetailList_, breakCodeDetailList) };


      // breakingAgents Field Functions 
      bool hasBreakingAgents() const { return this->breakingAgents_ != nullptr;};
      void deleteBreakingAgents() { this->breakingAgents_ = nullptr;};
      inline int64_t getBreakingAgents() const { DARABONBA_PTR_GET_DEFAULT(breakingAgents_, 0L) };
      inline Data& setBreakingAgents(int64_t breakingAgents) { DARABONBA_PTR_SET_VALUE(breakingAgents_, breakingAgents) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Data& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // interactiveCalls Field Functions 
      bool hasInteractiveCalls() const { return this->interactiveCalls_ != nullptr;};
      void deleteInteractiveCalls() { this->interactiveCalls_ = nullptr;};
      inline int64_t getInteractiveCalls() const { DARABONBA_PTR_GET_DEFAULT(interactiveCalls_, 0L) };
      inline Data& setInteractiveCalls(int64_t interactiveCalls) { DARABONBA_PTR_SET_VALUE(interactiveCalls_, interactiveCalls) };


      // loggedInAgents Field Functions 
      bool hasLoggedInAgents() const { return this->loggedInAgents_ != nullptr;};
      void deleteLoggedInAgents() { this->loggedInAgents_ = nullptr;};
      inline int64_t getLoggedInAgents() const { DARABONBA_PTR_GET_DEFAULT(loggedInAgents_, 0L) };
      inline Data& setLoggedInAgents(int64_t loggedInAgents) { DARABONBA_PTR_SET_VALUE(loggedInAgents_, loggedInAgents) };


      // longestWaitingTime Field Functions 
      bool hasLongestWaitingTime() const { return this->longestWaitingTime_ != nullptr;};
      void deleteLongestWaitingTime() { this->longestWaitingTime_ = nullptr;};
      inline int64_t getLongestWaitingTime() const { DARABONBA_PTR_GET_DEFAULT(longestWaitingTime_, 0L) };
      inline Data& setLongestWaitingTime(int64_t longestWaitingTime) { DARABONBA_PTR_SET_VALUE(longestWaitingTime_, longestWaitingTime) };


      // readyAgents Field Functions 
      bool hasReadyAgents() const { return this->readyAgents_ != nullptr;};
      void deleteReadyAgents() { this->readyAgents_ = nullptr;};
      inline int64_t getReadyAgents() const { DARABONBA_PTR_GET_DEFAULT(readyAgents_, 0L) };
      inline Data& setReadyAgents(int64_t readyAgents) { DARABONBA_PTR_SET_VALUE(readyAgents_, readyAgents) };


      // talkingAgents Field Functions 
      bool hasTalkingAgents() const { return this->talkingAgents_ != nullptr;};
      void deleteTalkingAgents() { this->talkingAgents_ = nullptr;};
      inline int64_t getTalkingAgents() const { DARABONBA_PTR_GET_DEFAULT(talkingAgents_, 0L) };
      inline Data& setTalkingAgents(int64_t talkingAgents) { DARABONBA_PTR_SET_VALUE(talkingAgents_, talkingAgents) };


      // totalAgents Field Functions 
      bool hasTotalAgents() const { return this->totalAgents_ != nullptr;};
      void deleteTotalAgents() { this->totalAgents_ = nullptr;};
      inline int64_t getTotalAgents() const { DARABONBA_PTR_GET_DEFAULT(totalAgents_, 0L) };
      inline Data& setTotalAgents(int64_t totalAgents) { DARABONBA_PTR_SET_VALUE(totalAgents_, totalAgents) };


      // waitingCalls Field Functions 
      bool hasWaitingCalls() const { return this->waitingCalls_ != nullptr;};
      void deleteWaitingCalls() { this->waitingCalls_ = nullptr;};
      inline int64_t getWaitingCalls() const { DARABONBA_PTR_GET_DEFAULT(waitingCalls_, 0L) };
      inline Data& setWaitingCalls(int64_t waitingCalls) { DARABONBA_PTR_SET_VALUE(waitingCalls_, waitingCalls) };


      // workingAgents Field Functions 
      bool hasWorkingAgents() const { return this->workingAgents_ != nullptr;};
      void deleteWorkingAgents() { this->workingAgents_ = nullptr;};
      inline int64_t getWorkingAgents() const { DARABONBA_PTR_GET_DEFAULT(workingAgents_, 0L) };
      inline Data& setWorkingAgents(int64_t workingAgents) { DARABONBA_PTR_SET_VALUE(workingAgents_, workingAgents) };


    protected:
      shared_ptr<vector<Data::BreakCodeDetailList>> breakCodeDetailList_ {};
      shared_ptr<int64_t> breakingAgents_ {};
      shared_ptr<string> instanceId_ {};
      shared_ptr<int64_t> interactiveCalls_ {};
      shared_ptr<int64_t> loggedInAgents_ {};
      shared_ptr<int64_t> longestWaitingTime_ {};
      shared_ptr<int64_t> readyAgents_ {};
      shared_ptr<int64_t> talkingAgents_ {};
      shared_ptr<int64_t> totalAgents_ {};
      shared_ptr<int64_t> waitingCalls_ {};
      shared_ptr<int64_t> workingAgents_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetRealtimeInstanceStatesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetRealtimeInstanceStatesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetRealtimeInstanceStatesResponseBody::Data) };
    inline GetRealtimeInstanceStatesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetRealtimeInstanceStatesResponseBody::Data) };
    inline GetRealtimeInstanceStatesResponseBody& setData(const GetRealtimeInstanceStatesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetRealtimeInstanceStatesResponseBody& setData(GetRealtimeInstanceStatesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetRealtimeInstanceStatesResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetRealtimeInstanceStatesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRealtimeInstanceStatesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetRealtimeInstanceStatesResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
