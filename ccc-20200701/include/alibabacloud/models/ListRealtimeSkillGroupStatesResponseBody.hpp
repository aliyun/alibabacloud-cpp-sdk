// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREALTIMESKILLGROUPSTATESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTREALTIMESKILLGROUPSTATESRESPONSEBODY_HPP_
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
  class ListRealtimeSkillGroupStatesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRealtimeSkillGroupStatesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListRealtimeSkillGroupStatesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListRealtimeSkillGroupStatesResponseBody() = default ;
    ListRealtimeSkillGroupStatesResponseBody(const ListRealtimeSkillGroupStatesResponseBody &) = default ;
    ListRealtimeSkillGroupStatesResponseBody(ListRealtimeSkillGroupStatesResponseBody &&) = default ;
    ListRealtimeSkillGroupStatesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRealtimeSkillGroupStatesResponseBody() = default ;
    ListRealtimeSkillGroupStatesResponseBody& operator=(const ListRealtimeSkillGroupStatesResponseBody &) = default ;
    ListRealtimeSkillGroupStatesResponseBody& operator=(ListRealtimeSkillGroupStatesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(List, list_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(List, list_);
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
      class List : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const List& obj) { 
          DARABONBA_PTR_TO_JSON(BreakCodeDetailList, breakCodeDetailList_);
          DARABONBA_PTR_TO_JSON(BreakingAgents, breakingAgents_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(LoggedInAgents, loggedInAgents_);
          DARABONBA_PTR_TO_JSON(LongestWaitingTime, longestWaitingTime_);
          DARABONBA_PTR_TO_JSON(OutboundScenarioReadyAgents, outboundScenarioReadyAgents_);
          DARABONBA_PTR_TO_JSON(ReadyAgents, readyAgents_);
          DARABONBA_PTR_TO_JSON(SkillGroupId, skillGroupId_);
          DARABONBA_PTR_TO_JSON(SkillGroupName, skillGroupName_);
          DARABONBA_PTR_TO_JSON(TalkingAgents, talkingAgents_);
          DARABONBA_PTR_TO_JSON(TotalAgents, totalAgents_);
          DARABONBA_PTR_TO_JSON(WaitingCalls, waitingCalls_);
          DARABONBA_PTR_TO_JSON(WorkingAgents, workingAgents_);
        };
        friend void from_json(const Darabonba::Json& j, List& obj) { 
          DARABONBA_PTR_FROM_JSON(BreakCodeDetailList, breakCodeDetailList_);
          DARABONBA_PTR_FROM_JSON(BreakingAgents, breakingAgents_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(LoggedInAgents, loggedInAgents_);
          DARABONBA_PTR_FROM_JSON(LongestWaitingTime, longestWaitingTime_);
          DARABONBA_PTR_FROM_JSON(OutboundScenarioReadyAgents, outboundScenarioReadyAgents_);
          DARABONBA_PTR_FROM_JSON(ReadyAgents, readyAgents_);
          DARABONBA_PTR_FROM_JSON(SkillGroupId, skillGroupId_);
          DARABONBA_PTR_FROM_JSON(SkillGroupName, skillGroupName_);
          DARABONBA_PTR_FROM_JSON(TalkingAgents, talkingAgents_);
          DARABONBA_PTR_FROM_JSON(TotalAgents, totalAgents_);
          DARABONBA_PTR_FROM_JSON(WaitingCalls, waitingCalls_);
          DARABONBA_PTR_FROM_JSON(WorkingAgents, workingAgents_);
        };
        List() = default ;
        List(const List &) = default ;
        List(List &&) = default ;
        List(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~List() = default ;
        List& operator=(const List &) = default ;
        List& operator=(List &&) = default ;
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
        && this->breakingAgents_ == nullptr && this->instanceId_ == nullptr && this->loggedInAgents_ == nullptr && this->longestWaitingTime_ == nullptr && this->outboundScenarioReadyAgents_ == nullptr
        && this->readyAgents_ == nullptr && this->skillGroupId_ == nullptr && this->skillGroupName_ == nullptr && this->talkingAgents_ == nullptr && this->totalAgents_ == nullptr
        && this->waitingCalls_ == nullptr && this->workingAgents_ == nullptr; };
        // breakCodeDetailList Field Functions 
        bool hasBreakCodeDetailList() const { return this->breakCodeDetailList_ != nullptr;};
        void deleteBreakCodeDetailList() { this->breakCodeDetailList_ = nullptr;};
        inline const vector<List::BreakCodeDetailList> & getBreakCodeDetailList() const { DARABONBA_PTR_GET_CONST(breakCodeDetailList_, vector<List::BreakCodeDetailList>) };
        inline vector<List::BreakCodeDetailList> getBreakCodeDetailList() { DARABONBA_PTR_GET(breakCodeDetailList_, vector<List::BreakCodeDetailList>) };
        inline List& setBreakCodeDetailList(const vector<List::BreakCodeDetailList> & breakCodeDetailList) { DARABONBA_PTR_SET_VALUE(breakCodeDetailList_, breakCodeDetailList) };
        inline List& setBreakCodeDetailList(vector<List::BreakCodeDetailList> && breakCodeDetailList) { DARABONBA_PTR_SET_RVALUE(breakCodeDetailList_, breakCodeDetailList) };


        // breakingAgents Field Functions 
        bool hasBreakingAgents() const { return this->breakingAgents_ != nullptr;};
        void deleteBreakingAgents() { this->breakingAgents_ = nullptr;};
        inline int64_t getBreakingAgents() const { DARABONBA_PTR_GET_DEFAULT(breakingAgents_, 0L) };
        inline List& setBreakingAgents(int64_t breakingAgents) { DARABONBA_PTR_SET_VALUE(breakingAgents_, breakingAgents) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline List& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // loggedInAgents Field Functions 
        bool hasLoggedInAgents() const { return this->loggedInAgents_ != nullptr;};
        void deleteLoggedInAgents() { this->loggedInAgents_ = nullptr;};
        inline int64_t getLoggedInAgents() const { DARABONBA_PTR_GET_DEFAULT(loggedInAgents_, 0L) };
        inline List& setLoggedInAgents(int64_t loggedInAgents) { DARABONBA_PTR_SET_VALUE(loggedInAgents_, loggedInAgents) };


        // longestWaitingTime Field Functions 
        bool hasLongestWaitingTime() const { return this->longestWaitingTime_ != nullptr;};
        void deleteLongestWaitingTime() { this->longestWaitingTime_ = nullptr;};
        inline int64_t getLongestWaitingTime() const { DARABONBA_PTR_GET_DEFAULT(longestWaitingTime_, 0L) };
        inline List& setLongestWaitingTime(int64_t longestWaitingTime) { DARABONBA_PTR_SET_VALUE(longestWaitingTime_, longestWaitingTime) };


        // outboundScenarioReadyAgents Field Functions 
        bool hasOutboundScenarioReadyAgents() const { return this->outboundScenarioReadyAgents_ != nullptr;};
        void deleteOutboundScenarioReadyAgents() { this->outboundScenarioReadyAgents_ = nullptr;};
        inline int64_t getOutboundScenarioReadyAgents() const { DARABONBA_PTR_GET_DEFAULT(outboundScenarioReadyAgents_, 0L) };
        inline List& setOutboundScenarioReadyAgents(int64_t outboundScenarioReadyAgents) { DARABONBA_PTR_SET_VALUE(outboundScenarioReadyAgents_, outboundScenarioReadyAgents) };


        // readyAgents Field Functions 
        bool hasReadyAgents() const { return this->readyAgents_ != nullptr;};
        void deleteReadyAgents() { this->readyAgents_ = nullptr;};
        inline int64_t getReadyAgents() const { DARABONBA_PTR_GET_DEFAULT(readyAgents_, 0L) };
        inline List& setReadyAgents(int64_t readyAgents) { DARABONBA_PTR_SET_VALUE(readyAgents_, readyAgents) };


        // skillGroupId Field Functions 
        bool hasSkillGroupId() const { return this->skillGroupId_ != nullptr;};
        void deleteSkillGroupId() { this->skillGroupId_ = nullptr;};
        inline string getSkillGroupId() const { DARABONBA_PTR_GET_DEFAULT(skillGroupId_, "") };
        inline List& setSkillGroupId(string skillGroupId) { DARABONBA_PTR_SET_VALUE(skillGroupId_, skillGroupId) };


        // skillGroupName Field Functions 
        bool hasSkillGroupName() const { return this->skillGroupName_ != nullptr;};
        void deleteSkillGroupName() { this->skillGroupName_ = nullptr;};
        inline string getSkillGroupName() const { DARABONBA_PTR_GET_DEFAULT(skillGroupName_, "") };
        inline List& setSkillGroupName(string skillGroupName) { DARABONBA_PTR_SET_VALUE(skillGroupName_, skillGroupName) };


        // talkingAgents Field Functions 
        bool hasTalkingAgents() const { return this->talkingAgents_ != nullptr;};
        void deleteTalkingAgents() { this->talkingAgents_ = nullptr;};
        inline int64_t getTalkingAgents() const { DARABONBA_PTR_GET_DEFAULT(talkingAgents_, 0L) };
        inline List& setTalkingAgents(int64_t talkingAgents) { DARABONBA_PTR_SET_VALUE(talkingAgents_, talkingAgents) };


        // totalAgents Field Functions 
        bool hasTotalAgents() const { return this->totalAgents_ != nullptr;};
        void deleteTotalAgents() { this->totalAgents_ = nullptr;};
        inline int64_t getTotalAgents() const { DARABONBA_PTR_GET_DEFAULT(totalAgents_, 0L) };
        inline List& setTotalAgents(int64_t totalAgents) { DARABONBA_PTR_SET_VALUE(totalAgents_, totalAgents) };


        // waitingCalls Field Functions 
        bool hasWaitingCalls() const { return this->waitingCalls_ != nullptr;};
        void deleteWaitingCalls() { this->waitingCalls_ = nullptr;};
        inline int64_t getWaitingCalls() const { DARABONBA_PTR_GET_DEFAULT(waitingCalls_, 0L) };
        inline List& setWaitingCalls(int64_t waitingCalls) { DARABONBA_PTR_SET_VALUE(waitingCalls_, waitingCalls) };


        // workingAgents Field Functions 
        bool hasWorkingAgents() const { return this->workingAgents_ != nullptr;};
        void deleteWorkingAgents() { this->workingAgents_ = nullptr;};
        inline int64_t getWorkingAgents() const { DARABONBA_PTR_GET_DEFAULT(workingAgents_, 0L) };
        inline List& setWorkingAgents(int64_t workingAgents) { DARABONBA_PTR_SET_VALUE(workingAgents_, workingAgents) };


      protected:
        shared_ptr<vector<List::BreakCodeDetailList>> breakCodeDetailList_ {};
        shared_ptr<int64_t> breakingAgents_ {};
        shared_ptr<string> instanceId_ {};
        shared_ptr<int64_t> loggedInAgents_ {};
        shared_ptr<int64_t> longestWaitingTime_ {};
        shared_ptr<int64_t> outboundScenarioReadyAgents_ {};
        shared_ptr<int64_t> readyAgents_ {};
        shared_ptr<string> skillGroupId_ {};
        shared_ptr<string> skillGroupName_ {};
        shared_ptr<int64_t> talkingAgents_ {};
        shared_ptr<int64_t> totalAgents_ {};
        shared_ptr<int64_t> waitingCalls_ {};
        shared_ptr<int64_t> workingAgents_ {};
      };

      virtual bool empty() const override { return this->list_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // list Field Functions 
      bool hasList() const { return this->list_ != nullptr;};
      void deleteList() { this->list_ = nullptr;};
      inline const vector<Data::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<Data::List>) };
      inline vector<Data::List> getList() { DARABONBA_PTR_GET(list_, vector<Data::List>) };
      inline Data& setList(const vector<Data::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
      inline Data& setList(vector<Data::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


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
      shared_ptr<vector<Data::List>> list_ {};
      shared_ptr<int32_t> pageNumber_ {};
      shared_ptr<int32_t> pageSize_ {};
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListRealtimeSkillGroupStatesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListRealtimeSkillGroupStatesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListRealtimeSkillGroupStatesResponseBody::Data) };
    inline ListRealtimeSkillGroupStatesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListRealtimeSkillGroupStatesResponseBody::Data) };
    inline ListRealtimeSkillGroupStatesResponseBody& setData(const ListRealtimeSkillGroupStatesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListRealtimeSkillGroupStatesResponseBody& setData(ListRealtimeSkillGroupStatesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline ListRealtimeSkillGroupStatesResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListRealtimeSkillGroupStatesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListRealtimeSkillGroupStatesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<ListRealtimeSkillGroupStatesResponseBody::Data> data_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
