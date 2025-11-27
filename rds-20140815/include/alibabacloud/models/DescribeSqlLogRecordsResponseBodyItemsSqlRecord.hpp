// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESQLLOGRECORDSRESPONSEBODYITEMSSQLRECORD_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESQLLOGRECORDSRESPONSEBODYITEMSSQLRECORD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeSQLLogRecordsResponseBodyItemsSQLRecord : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSQLLogRecordsResponseBodyItemsSQLRecord& obj) { 
      DARABONBA_PTR_TO_JSON(AccountName, accountName_);
      DARABONBA_PTR_TO_JSON(DBName, DBName_);
      DARABONBA_PTR_TO_JSON(ExecuteTime, executeTime_);
      DARABONBA_PTR_TO_JSON(HostAddress, hostAddress_);
      DARABONBA_PTR_TO_JSON(ReturnRowCounts, returnRowCounts_);
      DARABONBA_PTR_TO_JSON(SQLText, SQLText_);
      DARABONBA_PTR_TO_JSON(ThreadID, threadID_);
      DARABONBA_PTR_TO_JSON(TotalExecutionTimes, totalExecutionTimes_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSQLLogRecordsResponseBodyItemsSQLRecord& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
      DARABONBA_PTR_FROM_JSON(DBName, DBName_);
      DARABONBA_PTR_FROM_JSON(ExecuteTime, executeTime_);
      DARABONBA_PTR_FROM_JSON(HostAddress, hostAddress_);
      DARABONBA_PTR_FROM_JSON(ReturnRowCounts, returnRowCounts_);
      DARABONBA_PTR_FROM_JSON(SQLText, SQLText_);
      DARABONBA_PTR_FROM_JSON(ThreadID, threadID_);
      DARABONBA_PTR_FROM_JSON(TotalExecutionTimes, totalExecutionTimes_);
    };
    DescribeSQLLogRecordsResponseBodyItemsSQLRecord() = default ;
    DescribeSQLLogRecordsResponseBodyItemsSQLRecord(const DescribeSQLLogRecordsResponseBodyItemsSQLRecord &) = default ;
    DescribeSQLLogRecordsResponseBodyItemsSQLRecord(DescribeSQLLogRecordsResponseBodyItemsSQLRecord &&) = default ;
    DescribeSQLLogRecordsResponseBodyItemsSQLRecord(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSQLLogRecordsResponseBodyItemsSQLRecord() = default ;
    DescribeSQLLogRecordsResponseBodyItemsSQLRecord& operator=(const DescribeSQLLogRecordsResponseBodyItemsSQLRecord &) = default ;
    DescribeSQLLogRecordsResponseBodyItemsSQLRecord& operator=(DescribeSQLLogRecordsResponseBodyItemsSQLRecord &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountName_ == nullptr
        && return this->DBName_ == nullptr && return this->executeTime_ == nullptr && return this->hostAddress_ == nullptr && return this->returnRowCounts_ == nullptr && return this->SQLText_ == nullptr
        && return this->threadID_ == nullptr && return this->totalExecutionTimes_ == nullptr; };
    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string accountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline DescribeSQLLogRecordsResponseBodyItemsSQLRecord& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // DBName Field Functions 
    bool hasDBName() const { return this->DBName_ != nullptr;};
    void deleteDBName() { this->DBName_ = nullptr;};
    inline string DBName() const { DARABONBA_PTR_GET_DEFAULT(DBName_, "") };
    inline DescribeSQLLogRecordsResponseBodyItemsSQLRecord& setDBName(string DBName) { DARABONBA_PTR_SET_VALUE(DBName_, DBName) };


    // executeTime Field Functions 
    bool hasExecuteTime() const { return this->executeTime_ != nullptr;};
    void deleteExecuteTime() { this->executeTime_ = nullptr;};
    inline string executeTime() const { DARABONBA_PTR_GET_DEFAULT(executeTime_, "") };
    inline DescribeSQLLogRecordsResponseBodyItemsSQLRecord& setExecuteTime(string executeTime) { DARABONBA_PTR_SET_VALUE(executeTime_, executeTime) };


    // hostAddress Field Functions 
    bool hasHostAddress() const { return this->hostAddress_ != nullptr;};
    void deleteHostAddress() { this->hostAddress_ = nullptr;};
    inline string hostAddress() const { DARABONBA_PTR_GET_DEFAULT(hostAddress_, "") };
    inline DescribeSQLLogRecordsResponseBodyItemsSQLRecord& setHostAddress(string hostAddress) { DARABONBA_PTR_SET_VALUE(hostAddress_, hostAddress) };


    // returnRowCounts Field Functions 
    bool hasReturnRowCounts() const { return this->returnRowCounts_ != nullptr;};
    void deleteReturnRowCounts() { this->returnRowCounts_ = nullptr;};
    inline int64_t returnRowCounts() const { DARABONBA_PTR_GET_DEFAULT(returnRowCounts_, 0L) };
    inline DescribeSQLLogRecordsResponseBodyItemsSQLRecord& setReturnRowCounts(int64_t returnRowCounts) { DARABONBA_PTR_SET_VALUE(returnRowCounts_, returnRowCounts) };


    // SQLText Field Functions 
    bool hasSQLText() const { return this->SQLText_ != nullptr;};
    void deleteSQLText() { this->SQLText_ = nullptr;};
    inline string SQLText() const { DARABONBA_PTR_GET_DEFAULT(SQLText_, "") };
    inline DescribeSQLLogRecordsResponseBodyItemsSQLRecord& setSQLText(string SQLText) { DARABONBA_PTR_SET_VALUE(SQLText_, SQLText) };


    // threadID Field Functions 
    bool hasThreadID() const { return this->threadID_ != nullptr;};
    void deleteThreadID() { this->threadID_ = nullptr;};
    inline string threadID() const { DARABONBA_PTR_GET_DEFAULT(threadID_, "") };
    inline DescribeSQLLogRecordsResponseBodyItemsSQLRecord& setThreadID(string threadID) { DARABONBA_PTR_SET_VALUE(threadID_, threadID) };


    // totalExecutionTimes Field Functions 
    bool hasTotalExecutionTimes() const { return this->totalExecutionTimes_ != nullptr;};
    void deleteTotalExecutionTimes() { this->totalExecutionTimes_ = nullptr;};
    inline int64_t totalExecutionTimes() const { DARABONBA_PTR_GET_DEFAULT(totalExecutionTimes_, 0L) };
    inline DescribeSQLLogRecordsResponseBodyItemsSQLRecord& setTotalExecutionTimes(int64_t totalExecutionTimes) { DARABONBA_PTR_SET_VALUE(totalExecutionTimes_, totalExecutionTimes) };


  protected:
    // The username of the account that is recorded in the SQL audit log entry.
    std::shared_ptr<string> accountName_ = nullptr;
    // The database name.
    std::shared_ptr<string> DBName_ = nullptr;
    // The time at which the SQL statement was executed. The time follows the ISO 8601 standard in the *yyyy-MM-dd*T*HH:mm:ss*Z format. The time is displayed in UTC.
    std::shared_ptr<string> executeTime_ = nullptr;
    // The IP address of the client that is connected to the instance.
    std::shared_ptr<string> hostAddress_ = nullptr;
    // The number of SQL audit log entries that are returned.
    std::shared_ptr<int64_t> returnRowCounts_ = nullptr;
    // The SQL statement.
    std::shared_ptr<string> SQLText_ = nullptr;
    // The thread ID.
    std::shared_ptr<string> threadID_ = nullptr;
    // The execution duration of the SQL statement. Unit: microseconds.
    std::shared_ptr<int64_t> totalExecutionTimes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
