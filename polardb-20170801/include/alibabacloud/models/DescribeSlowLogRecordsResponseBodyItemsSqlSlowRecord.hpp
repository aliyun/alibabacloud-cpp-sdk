// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESLOWLOGRECORDSRESPONSEBODYITEMSSQLSLOWRECORD_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESLOWLOGRECORDSRESPONSEBODYITEMSSQLSLOWRECORD_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeSlowLogRecordsResponseBodyItemsSQLSlowRecord : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSlowLogRecordsResponseBodyItemsSQLSlowRecord& obj) { 
      DARABONBA_PTR_TO_JSON(DBName, DBName_);
      DARABONBA_PTR_TO_JSON(DBNodeId, DBNodeId_);
      DARABONBA_PTR_TO_JSON(ExecutionStartTime, executionStartTime_);
      DARABONBA_PTR_TO_JSON(HostAddress, hostAddress_);
      DARABONBA_PTR_TO_JSON(LockTimes, lockTimes_);
      DARABONBA_PTR_TO_JSON(ParseRowCounts, parseRowCounts_);
      DARABONBA_PTR_TO_JSON(QueryTimeMS, queryTimeMS_);
      DARABONBA_PTR_TO_JSON(QueryTimes, queryTimes_);
      DARABONBA_PTR_TO_JSON(ReturnRowCounts, returnRowCounts_);
      DARABONBA_PTR_TO_JSON(SQLHash, SQLHash_);
      DARABONBA_PTR_TO_JSON(SQLText, SQLText_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSlowLogRecordsResponseBodyItemsSQLSlowRecord& obj) { 
      DARABONBA_PTR_FROM_JSON(DBName, DBName_);
      DARABONBA_PTR_FROM_JSON(DBNodeId, DBNodeId_);
      DARABONBA_PTR_FROM_JSON(ExecutionStartTime, executionStartTime_);
      DARABONBA_PTR_FROM_JSON(HostAddress, hostAddress_);
      DARABONBA_PTR_FROM_JSON(LockTimes, lockTimes_);
      DARABONBA_PTR_FROM_JSON(ParseRowCounts, parseRowCounts_);
      DARABONBA_PTR_FROM_JSON(QueryTimeMS, queryTimeMS_);
      DARABONBA_PTR_FROM_JSON(QueryTimes, queryTimes_);
      DARABONBA_PTR_FROM_JSON(ReturnRowCounts, returnRowCounts_);
      DARABONBA_PTR_FROM_JSON(SQLHash, SQLHash_);
      DARABONBA_PTR_FROM_JSON(SQLText, SQLText_);
    };
    DescribeSlowLogRecordsResponseBodyItemsSQLSlowRecord() = default ;
    DescribeSlowLogRecordsResponseBodyItemsSQLSlowRecord(const DescribeSlowLogRecordsResponseBodyItemsSQLSlowRecord &) = default ;
    DescribeSlowLogRecordsResponseBodyItemsSQLSlowRecord(DescribeSlowLogRecordsResponseBodyItemsSQLSlowRecord &&) = default ;
    DescribeSlowLogRecordsResponseBodyItemsSQLSlowRecord(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSlowLogRecordsResponseBodyItemsSQLSlowRecord() = default ;
    DescribeSlowLogRecordsResponseBodyItemsSQLSlowRecord& operator=(const DescribeSlowLogRecordsResponseBodyItemsSQLSlowRecord &) = default ;
    DescribeSlowLogRecordsResponseBodyItemsSQLSlowRecord& operator=(DescribeSlowLogRecordsResponseBodyItemsSQLSlowRecord &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBName_ == nullptr
        && return this->DBNodeId_ == nullptr && return this->executionStartTime_ == nullptr && return this->hostAddress_ == nullptr && return this->lockTimes_ == nullptr && return this->parseRowCounts_ == nullptr
        && return this->queryTimeMS_ == nullptr && return this->queryTimes_ == nullptr && return this->returnRowCounts_ == nullptr && return this->SQLHash_ == nullptr && return this->SQLText_ == nullptr; };
    // DBName Field Functions 
    bool hasDBName() const { return this->DBName_ != nullptr;};
    void deleteDBName() { this->DBName_ = nullptr;};
    inline string DBName() const { DARABONBA_PTR_GET_DEFAULT(DBName_, "") };
    inline DescribeSlowLogRecordsResponseBodyItemsSQLSlowRecord& setDBName(string DBName) { DARABONBA_PTR_SET_VALUE(DBName_, DBName) };


    // DBNodeId Field Functions 
    bool hasDBNodeId() const { return this->DBNodeId_ != nullptr;};
    void deleteDBNodeId() { this->DBNodeId_ = nullptr;};
    inline string DBNodeId() const { DARABONBA_PTR_GET_DEFAULT(DBNodeId_, "") };
    inline DescribeSlowLogRecordsResponseBodyItemsSQLSlowRecord& setDBNodeId(string DBNodeId) { DARABONBA_PTR_SET_VALUE(DBNodeId_, DBNodeId) };


    // executionStartTime Field Functions 
    bool hasExecutionStartTime() const { return this->executionStartTime_ != nullptr;};
    void deleteExecutionStartTime() { this->executionStartTime_ = nullptr;};
    inline string executionStartTime() const { DARABONBA_PTR_GET_DEFAULT(executionStartTime_, "") };
    inline DescribeSlowLogRecordsResponseBodyItemsSQLSlowRecord& setExecutionStartTime(string executionStartTime) { DARABONBA_PTR_SET_VALUE(executionStartTime_, executionStartTime) };


    // hostAddress Field Functions 
    bool hasHostAddress() const { return this->hostAddress_ != nullptr;};
    void deleteHostAddress() { this->hostAddress_ = nullptr;};
    inline string hostAddress() const { DARABONBA_PTR_GET_DEFAULT(hostAddress_, "") };
    inline DescribeSlowLogRecordsResponseBodyItemsSQLSlowRecord& setHostAddress(string hostAddress) { DARABONBA_PTR_SET_VALUE(hostAddress_, hostAddress) };


    // lockTimes Field Functions 
    bool hasLockTimes() const { return this->lockTimes_ != nullptr;};
    void deleteLockTimes() { this->lockTimes_ = nullptr;};
    inline int64_t lockTimes() const { DARABONBA_PTR_GET_DEFAULT(lockTimes_, 0L) };
    inline DescribeSlowLogRecordsResponseBodyItemsSQLSlowRecord& setLockTimes(int64_t lockTimes) { DARABONBA_PTR_SET_VALUE(lockTimes_, lockTimes) };


    // parseRowCounts Field Functions 
    bool hasParseRowCounts() const { return this->parseRowCounts_ != nullptr;};
    void deleteParseRowCounts() { this->parseRowCounts_ = nullptr;};
    inline int64_t parseRowCounts() const { DARABONBA_PTR_GET_DEFAULT(parseRowCounts_, 0L) };
    inline DescribeSlowLogRecordsResponseBodyItemsSQLSlowRecord& setParseRowCounts(int64_t parseRowCounts) { DARABONBA_PTR_SET_VALUE(parseRowCounts_, parseRowCounts) };


    // queryTimeMS Field Functions 
    bool hasQueryTimeMS() const { return this->queryTimeMS_ != nullptr;};
    void deleteQueryTimeMS() { this->queryTimeMS_ = nullptr;};
    inline int64_t queryTimeMS() const { DARABONBA_PTR_GET_DEFAULT(queryTimeMS_, 0L) };
    inline DescribeSlowLogRecordsResponseBodyItemsSQLSlowRecord& setQueryTimeMS(int64_t queryTimeMS) { DARABONBA_PTR_SET_VALUE(queryTimeMS_, queryTimeMS) };


    // queryTimes Field Functions 
    bool hasQueryTimes() const { return this->queryTimes_ != nullptr;};
    void deleteQueryTimes() { this->queryTimes_ = nullptr;};
    inline int64_t queryTimes() const { DARABONBA_PTR_GET_DEFAULT(queryTimes_, 0L) };
    inline DescribeSlowLogRecordsResponseBodyItemsSQLSlowRecord& setQueryTimes(int64_t queryTimes) { DARABONBA_PTR_SET_VALUE(queryTimes_, queryTimes) };


    // returnRowCounts Field Functions 
    bool hasReturnRowCounts() const { return this->returnRowCounts_ != nullptr;};
    void deleteReturnRowCounts() { this->returnRowCounts_ = nullptr;};
    inline int64_t returnRowCounts() const { DARABONBA_PTR_GET_DEFAULT(returnRowCounts_, 0L) };
    inline DescribeSlowLogRecordsResponseBodyItemsSQLSlowRecord& setReturnRowCounts(int64_t returnRowCounts) { DARABONBA_PTR_SET_VALUE(returnRowCounts_, returnRowCounts) };


    // SQLHash Field Functions 
    bool hasSQLHash() const { return this->SQLHash_ != nullptr;};
    void deleteSQLHash() { this->SQLHash_ = nullptr;};
    inline string SQLHash() const { DARABONBA_PTR_GET_DEFAULT(SQLHash_, "") };
    inline DescribeSlowLogRecordsResponseBodyItemsSQLSlowRecord& setSQLHash(string SQLHash) { DARABONBA_PTR_SET_VALUE(SQLHash_, SQLHash) };


    // SQLText Field Functions 
    bool hasSQLText() const { return this->SQLText_ != nullptr;};
    void deleteSQLText() { this->SQLText_ = nullptr;};
    inline string SQLText() const { DARABONBA_PTR_GET_DEFAULT(SQLText_, "") };
    inline DescribeSlowLogRecordsResponseBodyItemsSQLSlowRecord& setSQLText(string SQLText) { DARABONBA_PTR_SET_VALUE(SQLText_, SQLText) };


  protected:
    // Database name.
    std::shared_ptr<string> DBName_ = nullptr;
    // Node ID.
    std::shared_ptr<string> DBNodeId_ = nullptr;
    // Time when the SQL starts execution. The format is `YYYY-MM-DDThh:mmZ` (UTC time).
    std::shared_ptr<string> executionStartTime_ = nullptr;
    // Client address connecting to the database.
    std::shared_ptr<string> hostAddress_ = nullptr;
    // SQL lock duration in seconds.
    std::shared_ptr<int64_t> lockTimes_ = nullptr;
    // Number of rows parsed.
    std::shared_ptr<int64_t> parseRowCounts_ = nullptr;
    // Query time. Unit: milliseconds.
    std::shared_ptr<int64_t> queryTimeMS_ = nullptr;
    // SQL execution duration, in seconds.
    std::shared_ptr<int64_t> queryTimes_ = nullptr;
    // Number of rows returned.
    std::shared_ptr<int64_t> returnRowCounts_ = nullptr;
    // Unique identifier for the SQL statement in slow log statistics.
    std::shared_ptr<string> SQLHash_ = nullptr;
    // Query statement.
    std::shared_ptr<string> SQLText_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
