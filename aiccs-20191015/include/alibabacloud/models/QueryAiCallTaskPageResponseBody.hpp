// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYAICALLTASKPAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYAICALLTASKPAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class QueryAiCallTaskPageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAiCallTaskPageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAiCallTaskPageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryAiCallTaskPageResponseBody() = default ;
    QueryAiCallTaskPageResponseBody(const QueryAiCallTaskPageResponseBody &) = default ;
    QueryAiCallTaskPageResponseBody(QueryAiCallTaskPageResponseBody &&) = default ;
    QueryAiCallTaskPageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAiCallTaskPageResponseBody() = default ;
    QueryAiCallTaskPageResponseBody& operator=(const QueryAiCallTaskPageResponseBody &) = default ;
    QueryAiCallTaskPageResponseBody& operator=(QueryAiCallTaskPageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(List, list_);
        DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(List, list_);
        DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(Total, total_);
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
          DARABONBA_PTR_TO_JSON(AgentId, agentId_);
          DARABONBA_PTR_TO_JSON(AgentName, agentName_);
          DARABONBA_PTR_TO_JSON(CallingCount, callingCount_);
          DARABONBA_PTR_TO_JSON(CompleteRate, completeRate_);
          DARABONBA_PTR_TO_JSON(ConcurrentCount, concurrentCount_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(DayCallCount, dayCallCount_);
          DARABONBA_PTR_TO_JSON(DayConnectRate, dayConnectRate_);
          DARABONBA_PTR_TO_JSON(DayImportCount, dayImportCount_);
          DARABONBA_PTR_TO_JSON(FailedCount, failedCount_);
          DARABONBA_PTR_TO_JSON(HistoryConnectRate, historyConnectRate_);
          DARABONBA_PTR_TO_JSON(RealStartTime, realStartTime_);
          DARABONBA_PTR_TO_JSON(StartFailedReason, startFailedReason_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(SucceedCount, succeedCount_);
          DARABONBA_PTR_TO_JSON(TaskId, taskId_);
          DARABONBA_PTR_TO_JSON(TaskName, taskName_);
          DARABONBA_PTR_TO_JSON(TotalCallCount, totalCallCount_);
          DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
        };
        friend void from_json(const Darabonba::Json& j, List& obj) { 
          DARABONBA_PTR_FROM_JSON(AgentId, agentId_);
          DARABONBA_PTR_FROM_JSON(AgentName, agentName_);
          DARABONBA_PTR_FROM_JSON(CallingCount, callingCount_);
          DARABONBA_PTR_FROM_JSON(CompleteRate, completeRate_);
          DARABONBA_PTR_FROM_JSON(ConcurrentCount, concurrentCount_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(DayCallCount, dayCallCount_);
          DARABONBA_PTR_FROM_JSON(DayConnectRate, dayConnectRate_);
          DARABONBA_PTR_FROM_JSON(DayImportCount, dayImportCount_);
          DARABONBA_PTR_FROM_JSON(FailedCount, failedCount_);
          DARABONBA_PTR_FROM_JSON(HistoryConnectRate, historyConnectRate_);
          DARABONBA_PTR_FROM_JSON(RealStartTime, realStartTime_);
          DARABONBA_PTR_FROM_JSON(StartFailedReason, startFailedReason_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(SucceedCount, succeedCount_);
          DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
          DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
          DARABONBA_PTR_FROM_JSON(TotalCallCount, totalCallCount_);
          DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
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
        virtual bool empty() const override { return this->agentId_ == nullptr
        && this->agentName_ == nullptr && this->callingCount_ == nullptr && this->completeRate_ == nullptr && this->concurrentCount_ == nullptr && this->createTime_ == nullptr
        && this->dayCallCount_ == nullptr && this->dayConnectRate_ == nullptr && this->dayImportCount_ == nullptr && this->failedCount_ == nullptr && this->historyConnectRate_ == nullptr
        && this->realStartTime_ == nullptr && this->startFailedReason_ == nullptr && this->startTime_ == nullptr && this->status_ == nullptr && this->succeedCount_ == nullptr
        && this->taskId_ == nullptr && this->taskName_ == nullptr && this->totalCallCount_ == nullptr && this->totalCount_ == nullptr; };
        // agentId Field Functions 
        bool hasAgentId() const { return this->agentId_ != nullptr;};
        void deleteAgentId() { this->agentId_ = nullptr;};
        inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
        inline List& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


        // agentName Field Functions 
        bool hasAgentName() const { return this->agentName_ != nullptr;};
        void deleteAgentName() { this->agentName_ = nullptr;};
        inline string getAgentName() const { DARABONBA_PTR_GET_DEFAULT(agentName_, "") };
        inline List& setAgentName(string agentName) { DARABONBA_PTR_SET_VALUE(agentName_, agentName) };


        // callingCount Field Functions 
        bool hasCallingCount() const { return this->callingCount_ != nullptr;};
        void deleteCallingCount() { this->callingCount_ = nullptr;};
        inline int64_t getCallingCount() const { DARABONBA_PTR_GET_DEFAULT(callingCount_, 0L) };
        inline List& setCallingCount(int64_t callingCount) { DARABONBA_PTR_SET_VALUE(callingCount_, callingCount) };


        // completeRate Field Functions 
        bool hasCompleteRate() const { return this->completeRate_ != nullptr;};
        void deleteCompleteRate() { this->completeRate_ = nullptr;};
        inline string getCompleteRate() const { DARABONBA_PTR_GET_DEFAULT(completeRate_, "") };
        inline List& setCompleteRate(string completeRate) { DARABONBA_PTR_SET_VALUE(completeRate_, completeRate) };


        // concurrentCount Field Functions 
        bool hasConcurrentCount() const { return this->concurrentCount_ != nullptr;};
        void deleteConcurrentCount() { this->concurrentCount_ = nullptr;};
        inline int64_t getConcurrentCount() const { DARABONBA_PTR_GET_DEFAULT(concurrentCount_, 0L) };
        inline List& setConcurrentCount(int64_t concurrentCount) { DARABONBA_PTR_SET_VALUE(concurrentCount_, concurrentCount) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline List& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // dayCallCount Field Functions 
        bool hasDayCallCount() const { return this->dayCallCount_ != nullptr;};
        void deleteDayCallCount() { this->dayCallCount_ = nullptr;};
        inline int64_t getDayCallCount() const { DARABONBA_PTR_GET_DEFAULT(dayCallCount_, 0L) };
        inline List& setDayCallCount(int64_t dayCallCount) { DARABONBA_PTR_SET_VALUE(dayCallCount_, dayCallCount) };


        // dayConnectRate Field Functions 
        bool hasDayConnectRate() const { return this->dayConnectRate_ != nullptr;};
        void deleteDayConnectRate() { this->dayConnectRate_ = nullptr;};
        inline string getDayConnectRate() const { DARABONBA_PTR_GET_DEFAULT(dayConnectRate_, "") };
        inline List& setDayConnectRate(string dayConnectRate) { DARABONBA_PTR_SET_VALUE(dayConnectRate_, dayConnectRate) };


        // dayImportCount Field Functions 
        bool hasDayImportCount() const { return this->dayImportCount_ != nullptr;};
        void deleteDayImportCount() { this->dayImportCount_ = nullptr;};
        inline int64_t getDayImportCount() const { DARABONBA_PTR_GET_DEFAULT(dayImportCount_, 0L) };
        inline List& setDayImportCount(int64_t dayImportCount) { DARABONBA_PTR_SET_VALUE(dayImportCount_, dayImportCount) };


        // failedCount Field Functions 
        bool hasFailedCount() const { return this->failedCount_ != nullptr;};
        void deleteFailedCount() { this->failedCount_ = nullptr;};
        inline int64_t getFailedCount() const { DARABONBA_PTR_GET_DEFAULT(failedCount_, 0L) };
        inline List& setFailedCount(int64_t failedCount) { DARABONBA_PTR_SET_VALUE(failedCount_, failedCount) };


        // historyConnectRate Field Functions 
        bool hasHistoryConnectRate() const { return this->historyConnectRate_ != nullptr;};
        void deleteHistoryConnectRate() { this->historyConnectRate_ = nullptr;};
        inline string getHistoryConnectRate() const { DARABONBA_PTR_GET_DEFAULT(historyConnectRate_, "") };
        inline List& setHistoryConnectRate(string historyConnectRate) { DARABONBA_PTR_SET_VALUE(historyConnectRate_, historyConnectRate) };


        // realStartTime Field Functions 
        bool hasRealStartTime() const { return this->realStartTime_ != nullptr;};
        void deleteRealStartTime() { this->realStartTime_ = nullptr;};
        inline int64_t getRealStartTime() const { DARABONBA_PTR_GET_DEFAULT(realStartTime_, 0L) };
        inline List& setRealStartTime(int64_t realStartTime) { DARABONBA_PTR_SET_VALUE(realStartTime_, realStartTime) };


        // startFailedReason Field Functions 
        bool hasStartFailedReason() const { return this->startFailedReason_ != nullptr;};
        void deleteStartFailedReason() { this->startFailedReason_ = nullptr;};
        inline string getStartFailedReason() const { DARABONBA_PTR_GET_DEFAULT(startFailedReason_, "") };
        inline List& setStartFailedReason(string startFailedReason) { DARABONBA_PTR_SET_VALUE(startFailedReason_, startFailedReason) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
        inline List& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline int64_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0L) };
        inline List& setStatus(int64_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // succeedCount Field Functions 
        bool hasSucceedCount() const { return this->succeedCount_ != nullptr;};
        void deleteSucceedCount() { this->succeedCount_ = nullptr;};
        inline int64_t getSucceedCount() const { DARABONBA_PTR_GET_DEFAULT(succeedCount_, 0L) };
        inline List& setSucceedCount(int64_t succeedCount) { DARABONBA_PTR_SET_VALUE(succeedCount_, succeedCount) };


        // taskId Field Functions 
        bool hasTaskId() const { return this->taskId_ != nullptr;};
        void deleteTaskId() { this->taskId_ = nullptr;};
        inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
        inline List& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


        // taskName Field Functions 
        bool hasTaskName() const { return this->taskName_ != nullptr;};
        void deleteTaskName() { this->taskName_ = nullptr;};
        inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
        inline List& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


        // totalCallCount Field Functions 
        bool hasTotalCallCount() const { return this->totalCallCount_ != nullptr;};
        void deleteTotalCallCount() { this->totalCallCount_ = nullptr;};
        inline int64_t getTotalCallCount() const { DARABONBA_PTR_GET_DEFAULT(totalCallCount_, 0L) };
        inline List& setTotalCallCount(int64_t totalCallCount) { DARABONBA_PTR_SET_VALUE(totalCallCount_, totalCallCount) };


        // totalCount Field Functions 
        bool hasTotalCount() const { return this->totalCount_ != nullptr;};
        void deleteTotalCount() { this->totalCount_ = nullptr;};
        inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
        inline List& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


      protected:
        shared_ptr<string> agentId_ {};
        shared_ptr<string> agentName_ {};
        shared_ptr<int64_t> callingCount_ {};
        shared_ptr<string> completeRate_ {};
        shared_ptr<int64_t> concurrentCount_ {};
        shared_ptr<int64_t> createTime_ {};
        shared_ptr<int64_t> dayCallCount_ {};
        shared_ptr<string> dayConnectRate_ {};
        shared_ptr<int64_t> dayImportCount_ {};
        shared_ptr<int64_t> failedCount_ {};
        shared_ptr<string> historyConnectRate_ {};
        shared_ptr<int64_t> realStartTime_ {};
        shared_ptr<string> startFailedReason_ {};
        shared_ptr<int64_t> startTime_ {};
        shared_ptr<int64_t> status_ {};
        shared_ptr<int64_t> succeedCount_ {};
        shared_ptr<string> taskId_ {};
        shared_ptr<string> taskName_ {};
        shared_ptr<int64_t> totalCallCount_ {};
        shared_ptr<int64_t> totalCount_ {};
      };

      virtual bool empty() const override { return this->list_ == nullptr
        && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->total_ == nullptr; };
      // list Field Functions 
      bool hasList() const { return this->list_ != nullptr;};
      void deleteList() { this->list_ = nullptr;};
      inline const vector<Data::List> & getList() const { DARABONBA_PTR_GET_CONST(list_, vector<Data::List>) };
      inline vector<Data::List> getList() { DARABONBA_PTR_GET(list_, vector<Data::List>) };
      inline Data& setList(const vector<Data::List> & list) { DARABONBA_PTR_SET_VALUE(list_, list) };
      inline Data& setList(vector<Data::List> && list) { DARABONBA_PTR_SET_RVALUE(list_, list) };


      // pageNo Field Functions 
      bool hasPageNo() const { return this->pageNo_ != nullptr;};
      void deletePageNo() { this->pageNo_ = nullptr;};
      inline int64_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0L) };
      inline Data& setPageNo(int64_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
      inline Data& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
      inline Data& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      shared_ptr<vector<Data::List>> list_ {};
      shared_ptr<int64_t> pageNo_ {};
      shared_ptr<int64_t> pageSize_ {};
      shared_ptr<int64_t> total_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline QueryAiCallTaskPageResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryAiCallTaskPageResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryAiCallTaskPageResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryAiCallTaskPageResponseBody::Data) };
    inline QueryAiCallTaskPageResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryAiCallTaskPageResponseBody::Data) };
    inline QueryAiCallTaskPageResponseBody& setData(const QueryAiCallTaskPageResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryAiCallTaskPageResponseBody& setData(QueryAiCallTaskPageResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryAiCallTaskPageResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryAiCallTaskPageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryAiCallTaskPageResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<string> code_ {};
    shared_ptr<QueryAiCallTaskPageResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
