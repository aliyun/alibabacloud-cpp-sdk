// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOADTASKSRECORDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOADTASKSRECORDSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20190315
{
namespace Models
{
  class DescribeLoadTasksRecordsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLoadTasksRecordsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(LoadTasksRecords, loadTasksRecords_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLoadTasksRecordsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(LoadTasksRecords, loadTasksRecords_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeLoadTasksRecordsResponseBody() = default ;
    DescribeLoadTasksRecordsResponseBody(const DescribeLoadTasksRecordsResponseBody &) = default ;
    DescribeLoadTasksRecordsResponseBody(DescribeLoadTasksRecordsResponseBody &&) = default ;
    DescribeLoadTasksRecordsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLoadTasksRecordsResponseBody() = default ;
    DescribeLoadTasksRecordsResponseBody& operator=(const DescribeLoadTasksRecordsResponseBody &) = default ;
    DescribeLoadTasksRecordsResponseBody& operator=(DescribeLoadTasksRecordsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class LoadTasksRecords : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LoadTasksRecords& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(DBName, DBName_);
        DARABONBA_PTR_TO_JSON(JobName, jobName_);
        DARABONBA_PTR_TO_JSON(ProcessID, processID_);
        DARABONBA_PTR_TO_JSON(ProcessRows, processRows_);
        DARABONBA_PTR_TO_JSON(Sql, sql_);
        DARABONBA_PTR_TO_JSON(State, state_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, LoadTasksRecords& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(DBName, DBName_);
        DARABONBA_PTR_FROM_JSON(JobName, jobName_);
        DARABONBA_PTR_FROM_JSON(ProcessID, processID_);
        DARABONBA_PTR_FROM_JSON(ProcessRows, processRows_);
        DARABONBA_PTR_FROM_JSON(Sql, sql_);
        DARABONBA_PTR_FROM_JSON(State, state_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      LoadTasksRecords() = default ;
      LoadTasksRecords(const LoadTasksRecords &) = default ;
      LoadTasksRecords(LoadTasksRecords &&) = default ;
      LoadTasksRecords(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LoadTasksRecords() = default ;
      LoadTasksRecords& operator=(const LoadTasksRecords &) = default ;
      LoadTasksRecords& operator=(LoadTasksRecords &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->DBName_ == nullptr && this->jobName_ == nullptr && this->processID_ == nullptr && this->processRows_ == nullptr && this->sql_ == nullptr
        && this->state_ == nullptr && this->updateTime_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline LoadTasksRecords& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // DBName Field Functions 
      bool hasDBName() const { return this->DBName_ != nullptr;};
      void deleteDBName() { this->DBName_ = nullptr;};
      inline string getDBName() const { DARABONBA_PTR_GET_DEFAULT(DBName_, "") };
      inline LoadTasksRecords& setDBName(string DBName) { DARABONBA_PTR_SET_VALUE(DBName_, DBName) };


      // jobName Field Functions 
      bool hasJobName() const { return this->jobName_ != nullptr;};
      void deleteJobName() { this->jobName_ = nullptr;};
      inline string getJobName() const { DARABONBA_PTR_GET_DEFAULT(jobName_, "") };
      inline LoadTasksRecords& setJobName(string jobName) { DARABONBA_PTR_SET_VALUE(jobName_, jobName) };


      // processID Field Functions 
      bool hasProcessID() const { return this->processID_ != nullptr;};
      void deleteProcessID() { this->processID_ = nullptr;};
      inline string getProcessID() const { DARABONBA_PTR_GET_DEFAULT(processID_, "") };
      inline LoadTasksRecords& setProcessID(string processID) { DARABONBA_PTR_SET_VALUE(processID_, processID) };


      // processRows Field Functions 
      bool hasProcessRows() const { return this->processRows_ != nullptr;};
      void deleteProcessRows() { this->processRows_ = nullptr;};
      inline int64_t getProcessRows() const { DARABONBA_PTR_GET_DEFAULT(processRows_, 0L) };
      inline LoadTasksRecords& setProcessRows(int64_t processRows) { DARABONBA_PTR_SET_VALUE(processRows_, processRows) };


      // sql Field Functions 
      bool hasSql() const { return this->sql_ != nullptr;};
      void deleteSql() { this->sql_ = nullptr;};
      inline string getSql() const { DARABONBA_PTR_GET_DEFAULT(sql_, "") };
      inline LoadTasksRecords& setSql(string sql) { DARABONBA_PTR_SET_VALUE(sql_, sql) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline LoadTasksRecords& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline LoadTasksRecords& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      // The start time of the task. The time is accurate to milliseconds. The time follows the ISO 8601 standard in the *yyyy-MM-ddTHH:mm:ss.SSSZ* format. The time is displayed in UTC.
      shared_ptr<string> createTime_ {};
      // The name of the database that is involved in the import or export task.
      shared_ptr<string> DBName_ {};
      // The task ID.
      shared_ptr<string> jobName_ {};
      // The process ID.
      shared_ptr<string> processID_ {};
      // The number of rows that are processed in the asynchronous import or export task.
      shared_ptr<int64_t> processRows_ {};
      // The SQL statement that is used in the asynchronous import or export task.
      shared_ptr<string> sql_ {};
      // The state of the task.
      shared_ptr<string> state_ {};
      // The time when the task state was updated. The time is accurate to milliseconds. The time follows the ISO 8601 standard in the *yyyy-MM-ddTHH:mm:ss.SSSZ* format. The time is displayed in UTC.
      shared_ptr<string> updateTime_ {};
    };

    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && this->loadTasksRecords_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string getDBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DescribeLoadTasksRecordsResponseBody& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // loadTasksRecords Field Functions 
    bool hasLoadTasksRecords() const { return this->loadTasksRecords_ != nullptr;};
    void deleteLoadTasksRecords() { this->loadTasksRecords_ = nullptr;};
    inline const vector<DescribeLoadTasksRecordsResponseBody::LoadTasksRecords> & getLoadTasksRecords() const { DARABONBA_PTR_GET_CONST(loadTasksRecords_, vector<DescribeLoadTasksRecordsResponseBody::LoadTasksRecords>) };
    inline vector<DescribeLoadTasksRecordsResponseBody::LoadTasksRecords> getLoadTasksRecords() { DARABONBA_PTR_GET(loadTasksRecords_, vector<DescribeLoadTasksRecordsResponseBody::LoadTasksRecords>) };
    inline DescribeLoadTasksRecordsResponseBody& setLoadTasksRecords(const vector<DescribeLoadTasksRecordsResponseBody::LoadTasksRecords> & loadTasksRecords) { DARABONBA_PTR_SET_VALUE(loadTasksRecords_, loadTasksRecords) };
    inline DescribeLoadTasksRecordsResponseBody& setLoadTasksRecords(vector<DescribeLoadTasksRecordsResponseBody::LoadTasksRecords> && loadTasksRecords) { DARABONBA_PTR_SET_RVALUE(loadTasksRecords_, loadTasksRecords) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline DescribeLoadTasksRecordsResponseBody& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeLoadTasksRecordsResponseBody& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLoadTasksRecordsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline DescribeLoadTasksRecordsResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The cluster ID.
    shared_ptr<string> DBClusterId_ {};
    // The queried asynchronous import and export tasks.
    shared_ptr<vector<DescribeLoadTasksRecordsResponseBody::LoadTasksRecords>> loadTasksRecords_ {};
    // The page number.
    shared_ptr<string> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<string> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<string> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
