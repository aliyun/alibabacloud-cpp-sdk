// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESQLLOGTASKSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESQLLOGTASKSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class DescribeSqlLogTasksResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSqlLogTasksResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSqlLogTasksResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeSqlLogTasksResponseBody() = default ;
    DescribeSqlLogTasksResponseBody(const DescribeSqlLogTasksResponseBody &) = default ;
    DescribeSqlLogTasksResponseBody(DescribeSqlLogTasksResponseBody &&) = default ;
    DescribeSqlLogTasksResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSqlLogTasksResponseBody() = default ;
    DescribeSqlLogTasksResponseBody& operator=(const DescribeSqlLogTasksResponseBody &) = default ;
    DescribeSqlLogTasksResponseBody& operator=(DescribeSqlLogTasksResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(AnalysisTaskFinishTime, analysisTaskFinishTime_);
          DARABONBA_PTR_TO_JSON(AnalysisTaskStatus, analysisTaskStatus_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(End, end_);
          DARABONBA_PTR_TO_JSON(Expire, expire_);
          DARABONBA_PTR_TO_JSON(Filters, filters_);
          DARABONBA_PTR_TO_JSON(InnerResult, innerResult_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(LogCount, logCount_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Progress, progress_);
          DARABONBA_PTR_TO_JSON(Result, result_);
          DARABONBA_PTR_TO_JSON(ScanFileSize, scanFileSize_);
          DARABONBA_PTR_TO_JSON(Start, start_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(TaskId, taskId_);
          DARABONBA_PTR_TO_JSON(TaskType, taskType_);
        };
        friend void from_json(const Darabonba::Json& j, List& obj) { 
          DARABONBA_PTR_FROM_JSON(AnalysisTaskFinishTime, analysisTaskFinishTime_);
          DARABONBA_PTR_FROM_JSON(AnalysisTaskStatus, analysisTaskStatus_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(End, end_);
          DARABONBA_PTR_FROM_JSON(Expire, expire_);
          DARABONBA_PTR_FROM_JSON(Filters, filters_);
          DARABONBA_PTR_FROM_JSON(InnerResult, innerResult_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(LogCount, logCount_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Progress, progress_);
          DARABONBA_PTR_FROM_JSON(Result, result_);
          DARABONBA_PTR_FROM_JSON(ScanFileSize, scanFileSize_);
          DARABONBA_PTR_FROM_JSON(Start, start_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
          DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
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
        class Filters : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Filters& obj) { 
            DARABONBA_PTR_TO_JSON(Key, key_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, Filters& obj) { 
            DARABONBA_PTR_FROM_JSON(Key, key_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          Filters() = default ;
          Filters(const Filters &) = default ;
          Filters(Filters &&) = default ;
          Filters(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Filters() = default ;
          Filters& operator=(const Filters &) = default ;
          Filters& operator=(Filters &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
          // key Field Functions 
          bool hasKey() const { return this->key_ != nullptr;};
          void deleteKey() { this->key_ = nullptr;};
          inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
          inline Filters& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline Filters& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The name of the filter parameter.
          // 
          // >  For more information about the filter parameters, see the **Valid values of Key** section of this topic.
          shared_ptr<string> key_ {};
          // The value of the filter parameter.
          shared_ptr<string> value_ {};
        };

        virtual bool empty() const override { return this->analysisTaskFinishTime_ == nullptr
        && this->analysisTaskStatus_ == nullptr && this->createTime_ == nullptr && this->end_ == nullptr && this->expire_ == nullptr && this->filters_ == nullptr
        && this->innerResult_ == nullptr && this->instanceId_ == nullptr && this->logCount_ == nullptr && this->name_ == nullptr && this->progress_ == nullptr
        && this->result_ == nullptr && this->scanFileSize_ == nullptr && this->start_ == nullptr && this->status_ == nullptr && this->taskId_ == nullptr
        && this->taskType_ == nullptr; };
        // analysisTaskFinishTime Field Functions 
        bool hasAnalysisTaskFinishTime() const { return this->analysisTaskFinishTime_ != nullptr;};
        void deleteAnalysisTaskFinishTime() { this->analysisTaskFinishTime_ = nullptr;};
        inline int64_t getAnalysisTaskFinishTime() const { DARABONBA_PTR_GET_DEFAULT(analysisTaskFinishTime_, 0L) };
        inline List& setAnalysisTaskFinishTime(int64_t analysisTaskFinishTime) { DARABONBA_PTR_SET_VALUE(analysisTaskFinishTime_, analysisTaskFinishTime) };


        // analysisTaskStatus Field Functions 
        bool hasAnalysisTaskStatus() const { return this->analysisTaskStatus_ != nullptr;};
        void deleteAnalysisTaskStatus() { this->analysisTaskStatus_ = nullptr;};
        inline string getAnalysisTaskStatus() const { DARABONBA_PTR_GET_DEFAULT(analysisTaskStatus_, "") };
        inline List& setAnalysisTaskStatus(string analysisTaskStatus) { DARABONBA_PTR_SET_VALUE(analysisTaskStatus_, analysisTaskStatus) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline List& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // end Field Functions 
        bool hasEnd() const { return this->end_ != nullptr;};
        void deleteEnd() { this->end_ = nullptr;};
        inline int64_t getEnd() const { DARABONBA_PTR_GET_DEFAULT(end_, 0L) };
        inline List& setEnd(int64_t end) { DARABONBA_PTR_SET_VALUE(end_, end) };


        // expire Field Functions 
        bool hasExpire() const { return this->expire_ != nullptr;};
        void deleteExpire() { this->expire_ = nullptr;};
        inline bool getExpire() const { DARABONBA_PTR_GET_DEFAULT(expire_, false) };
        inline List& setExpire(bool expire) { DARABONBA_PTR_SET_VALUE(expire_, expire) };


        // filters Field Functions 
        bool hasFilters() const { return this->filters_ != nullptr;};
        void deleteFilters() { this->filters_ = nullptr;};
        inline const vector<List::Filters> & getFilters() const { DARABONBA_PTR_GET_CONST(filters_, vector<List::Filters>) };
        inline vector<List::Filters> getFilters() { DARABONBA_PTR_GET(filters_, vector<List::Filters>) };
        inline List& setFilters(const vector<List::Filters> & filters) { DARABONBA_PTR_SET_VALUE(filters_, filters) };
        inline List& setFilters(vector<List::Filters> && filters) { DARABONBA_PTR_SET_RVALUE(filters_, filters) };


        // innerResult Field Functions 
        bool hasInnerResult() const { return this->innerResult_ != nullptr;};
        void deleteInnerResult() { this->innerResult_ = nullptr;};
        inline string getInnerResult() const { DARABONBA_PTR_GET_DEFAULT(innerResult_, "") };
        inline List& setInnerResult(string innerResult) { DARABONBA_PTR_SET_VALUE(innerResult_, innerResult) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline List& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // logCount Field Functions 
        bool hasLogCount() const { return this->logCount_ != nullptr;};
        void deleteLogCount() { this->logCount_ = nullptr;};
        inline int64_t getLogCount() const { DARABONBA_PTR_GET_DEFAULT(logCount_, 0L) };
        inline List& setLogCount(int64_t logCount) { DARABONBA_PTR_SET_VALUE(logCount_, logCount) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline List& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // progress Field Functions 
        bool hasProgress() const { return this->progress_ != nullptr;};
        void deleteProgress() { this->progress_ = nullptr;};
        inline int32_t getProgress() const { DARABONBA_PTR_GET_DEFAULT(progress_, 0) };
        inline List& setProgress(int32_t progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


        // result Field Functions 
        bool hasResult() const { return this->result_ != nullptr;};
        void deleteResult() { this->result_ = nullptr;};
        inline string getResult() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
        inline List& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


        // scanFileSize Field Functions 
        bool hasScanFileSize() const { return this->scanFileSize_ != nullptr;};
        void deleteScanFileSize() { this->scanFileSize_ = nullptr;};
        inline int64_t getScanFileSize() const { DARABONBA_PTR_GET_DEFAULT(scanFileSize_, 0L) };
        inline List& setScanFileSize(int64_t scanFileSize) { DARABONBA_PTR_SET_VALUE(scanFileSize_, scanFileSize) };


        // start Field Functions 
        bool hasStart() const { return this->start_ != nullptr;};
        void deleteStart() { this->start_ = nullptr;};
        inline int64_t getStart() const { DARABONBA_PTR_GET_DEFAULT(start_, 0L) };
        inline List& setStart(int64_t start) { DARABONBA_PTR_SET_VALUE(start_, start) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline List& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // taskId Field Functions 
        bool hasTaskId() const { return this->taskId_ != nullptr;};
        void deleteTaskId() { this->taskId_ = nullptr;};
        inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
        inline List& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


        // taskType Field Functions 
        bool hasTaskType() const { return this->taskType_ != nullptr;};
        void deleteTaskType() { this->taskType_ = nullptr;};
        inline string getTaskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
        inline List& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


      protected:
        // The time when the analysis task was complete. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
        shared_ptr<int64_t> analysisTaskFinishTime_ {};
        // The state of the analysis task.
        // 
        // >  This parameter is a system parameter. You do not need to pay attention to the parameter.
        shared_ptr<string> analysisTaskStatus_ {};
        // The time when the task was created. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
        shared_ptr<int64_t> createTime_ {};
        // The time when the task ended. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
        shared_ptr<int64_t> end_ {};
        // Indicates whether the task expired. Valid values:
        // 
        // *   **true**
        // *   **false**
        shared_ptr<bool> expire_ {};
        // The filter parameters.
        shared_ptr<vector<List::Filters>> filters_ {};
        shared_ptr<string> innerResult_ {};
        // The ID of the database instance.
        shared_ptr<string> instanceId_ {};
        // The number of log records.
        shared_ptr<int64_t> logCount_ {};
        // The task name.
        shared_ptr<string> name_ {};
        // The task progress.
        shared_ptr<int32_t> progress_ {};
        // The URL that is returned if the value of TaskType is **Export**.
        shared_ptr<string> result_ {};
        // The number of files that are scanned.
        shared_ptr<int64_t> scanFileSize_ {};
        // The time when the task started. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
        shared_ptr<int64_t> start_ {};
        // The task state. Valid values:
        // 
        // *   **INIT**: The task is to be scheduled.
        // *   **RUNNING**: The task is running.
        // *   **FAILED**: The task failed.
        // *   **CANCELED**: The task is canceled.
        // *   **COMPLETED**: The task is complete.
        // 
        // >  If a task is in the **COMPLETED** state, you can view the results of the task.
        shared_ptr<string> status_ {};
        // The task ID.
        shared_ptr<string> taskId_ {};
        // The task type. Valid values:
        // 
        // *   **Export**
        // *   **Query**
        shared_ptr<string> taskType_ {};
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
      // The details of the data returned.
      shared_ptr<vector<Data::List>> list_ {};
      // The page number.
      shared_ptr<int64_t> pageNo_ {};
      // The number of entries per page.
      shared_ptr<int64_t> pageSize_ {};
      // The number of tasks.
      shared_ptr<int64_t> total_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeSqlLogTasksResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeSqlLogTasksResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, DescribeSqlLogTasksResponseBody::Data) };
    inline DescribeSqlLogTasksResponseBody::Data getData() { DARABONBA_PTR_GET(data_, DescribeSqlLogTasksResponseBody::Data) };
    inline DescribeSqlLogTasksResponseBody& setData(const DescribeSqlLogTasksResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeSqlLogTasksResponseBody& setData(DescribeSqlLogTasksResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeSqlLogTasksResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSqlLogTasksResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline DescribeSqlLogTasksResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The response code.
    shared_ptr<string> code_ {};
    // The data returned.
    shared_ptr<DescribeSqlLogTasksResponseBody::Data> data_ {};
    // The returned message.
    // 
    // >  If the request was successful, **Successful** is returned. If the request failed, an error message is returned.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<string> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
