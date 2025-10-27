// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELOADTASKSRECORDSRESPONSEBODYLOADTASKSRECORDS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELOADTASKSRECORDSRESPONSEBODYLOADTASKSRECORDS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20190315
{
namespace Models
{
  class DescribeLoadTasksRecordsResponseBodyLoadTasksRecords : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLoadTasksRecordsResponseBodyLoadTasksRecords& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DBName, DBName_);
      DARABONBA_PTR_TO_JSON(JobName, jobName_);
      DARABONBA_PTR_TO_JSON(ProcessID, processID_);
      DARABONBA_PTR_TO_JSON(ProcessRows, processRows_);
      DARABONBA_PTR_TO_JSON(Sql, sql_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLoadTasksRecordsResponseBodyLoadTasksRecords& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DBName, DBName_);
      DARABONBA_PTR_FROM_JSON(JobName, jobName_);
      DARABONBA_PTR_FROM_JSON(ProcessID, processID_);
      DARABONBA_PTR_FROM_JSON(ProcessRows, processRows_);
      DARABONBA_PTR_FROM_JSON(Sql, sql_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    DescribeLoadTasksRecordsResponseBodyLoadTasksRecords() = default ;
    DescribeLoadTasksRecordsResponseBodyLoadTasksRecords(const DescribeLoadTasksRecordsResponseBodyLoadTasksRecords &) = default ;
    DescribeLoadTasksRecordsResponseBodyLoadTasksRecords(DescribeLoadTasksRecordsResponseBodyLoadTasksRecords &&) = default ;
    DescribeLoadTasksRecordsResponseBodyLoadTasksRecords(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLoadTasksRecordsResponseBodyLoadTasksRecords() = default ;
    DescribeLoadTasksRecordsResponseBodyLoadTasksRecords& operator=(const DescribeLoadTasksRecordsResponseBodyLoadTasksRecords &) = default ;
    DescribeLoadTasksRecordsResponseBodyLoadTasksRecords& operator=(DescribeLoadTasksRecordsResponseBodyLoadTasksRecords &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->DBName_ == nullptr && return this->jobName_ == nullptr && return this->processID_ == nullptr && return this->processRows_ == nullptr && return this->sql_ == nullptr
        && return this->state_ == nullptr && return this->updateTime_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeLoadTasksRecordsResponseBodyLoadTasksRecords& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // DBName Field Functions 
    bool hasDBName() const { return this->DBName_ != nullptr;};
    void deleteDBName() { this->DBName_ = nullptr;};
    inline string DBName() const { DARABONBA_PTR_GET_DEFAULT(DBName_, "") };
    inline DescribeLoadTasksRecordsResponseBodyLoadTasksRecords& setDBName(string DBName) { DARABONBA_PTR_SET_VALUE(DBName_, DBName) };


    // jobName Field Functions 
    bool hasJobName() const { return this->jobName_ != nullptr;};
    void deleteJobName() { this->jobName_ = nullptr;};
    inline string jobName() const { DARABONBA_PTR_GET_DEFAULT(jobName_, "") };
    inline DescribeLoadTasksRecordsResponseBodyLoadTasksRecords& setJobName(string jobName) { DARABONBA_PTR_SET_VALUE(jobName_, jobName) };


    // processID Field Functions 
    bool hasProcessID() const { return this->processID_ != nullptr;};
    void deleteProcessID() { this->processID_ = nullptr;};
    inline string processID() const { DARABONBA_PTR_GET_DEFAULT(processID_, "") };
    inline DescribeLoadTasksRecordsResponseBodyLoadTasksRecords& setProcessID(string processID) { DARABONBA_PTR_SET_VALUE(processID_, processID) };


    // processRows Field Functions 
    bool hasProcessRows() const { return this->processRows_ != nullptr;};
    void deleteProcessRows() { this->processRows_ = nullptr;};
    inline int64_t processRows() const { DARABONBA_PTR_GET_DEFAULT(processRows_, 0L) };
    inline DescribeLoadTasksRecordsResponseBodyLoadTasksRecords& setProcessRows(int64_t processRows) { DARABONBA_PTR_SET_VALUE(processRows_, processRows) };


    // sql Field Functions 
    bool hasSql() const { return this->sql_ != nullptr;};
    void deleteSql() { this->sql_ = nullptr;};
    inline string sql() const { DARABONBA_PTR_GET_DEFAULT(sql_, "") };
    inline DescribeLoadTasksRecordsResponseBodyLoadTasksRecords& setSql(string sql) { DARABONBA_PTR_SET_VALUE(sql_, sql) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline DescribeLoadTasksRecordsResponseBodyLoadTasksRecords& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline DescribeLoadTasksRecordsResponseBodyLoadTasksRecords& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The start time of the task. The time is accurate to milliseconds. The time follows the ISO 8601 standard in the *yyyy-MM-ddTHH:mm:ss.SSSZ* format. The time is displayed in UTC.
    std::shared_ptr<string> createTime_ = nullptr;
    // The name of the database that is involved in the import or export task.
    std::shared_ptr<string> DBName_ = nullptr;
    // The task ID.
    std::shared_ptr<string> jobName_ = nullptr;
    // The process ID.
    std::shared_ptr<string> processID_ = nullptr;
    // The number of rows that are processed in the asynchronous import or export task.
    std::shared_ptr<int64_t> processRows_ = nullptr;
    // The SQL statement that is used in the asynchronous import or export task.
    std::shared_ptr<string> sql_ = nullptr;
    // The state of the task.
    std::shared_ptr<string> state_ = nullptr;
    // The time when the task state was updated. The time is accurate to milliseconds. The time follows the ISO 8601 standard in the *yyyy-MM-ddTHH:mm:ss.SSSZ* format. The time is displayed in UTC.
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
