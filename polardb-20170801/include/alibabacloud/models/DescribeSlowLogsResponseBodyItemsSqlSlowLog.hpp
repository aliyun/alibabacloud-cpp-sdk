// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESLOWLOGSRESPONSEBODYITEMSSQLSLOWLOG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESLOWLOGSRESPONSEBODYITEMSSQLSLOWLOG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeSlowLogsResponseBodyItemsSQLSlowLog : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSlowLogsResponseBodyItemsSQLSlowLog& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DBName, DBName_);
      DARABONBA_PTR_TO_JSON(DBNodeId, DBNodeId_);
      DARABONBA_PTR_TO_JSON(MaxExecutionTime, maxExecutionTime_);
      DARABONBA_PTR_TO_JSON(MaxLockTime, maxLockTime_);
      DARABONBA_PTR_TO_JSON(ParseMaxRowCount, parseMaxRowCount_);
      DARABONBA_PTR_TO_JSON(ParseTotalRowCounts, parseTotalRowCounts_);
      DARABONBA_PTR_TO_JSON(ReturnMaxRowCount, returnMaxRowCount_);
      DARABONBA_PTR_TO_JSON(ReturnTotalRowCounts, returnTotalRowCounts_);
      DARABONBA_PTR_TO_JSON(SQLHASH, SQLHASH_);
      DARABONBA_PTR_TO_JSON(SQLText, SQLText_);
      DARABONBA_PTR_TO_JSON(TotalExecutionCounts, totalExecutionCounts_);
      DARABONBA_PTR_TO_JSON(TotalExecutionTimes, totalExecutionTimes_);
      DARABONBA_PTR_TO_JSON(TotalLockTimes, totalLockTimes_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSlowLogsResponseBodyItemsSQLSlowLog& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DBName, DBName_);
      DARABONBA_PTR_FROM_JSON(DBNodeId, DBNodeId_);
      DARABONBA_PTR_FROM_JSON(MaxExecutionTime, maxExecutionTime_);
      DARABONBA_PTR_FROM_JSON(MaxLockTime, maxLockTime_);
      DARABONBA_PTR_FROM_JSON(ParseMaxRowCount, parseMaxRowCount_);
      DARABONBA_PTR_FROM_JSON(ParseTotalRowCounts, parseTotalRowCounts_);
      DARABONBA_PTR_FROM_JSON(ReturnMaxRowCount, returnMaxRowCount_);
      DARABONBA_PTR_FROM_JSON(ReturnTotalRowCounts, returnTotalRowCounts_);
      DARABONBA_PTR_FROM_JSON(SQLHASH, SQLHASH_);
      DARABONBA_PTR_FROM_JSON(SQLText, SQLText_);
      DARABONBA_PTR_FROM_JSON(TotalExecutionCounts, totalExecutionCounts_);
      DARABONBA_PTR_FROM_JSON(TotalExecutionTimes, totalExecutionTimes_);
      DARABONBA_PTR_FROM_JSON(TotalLockTimes, totalLockTimes_);
    };
    DescribeSlowLogsResponseBodyItemsSQLSlowLog() = default ;
    DescribeSlowLogsResponseBodyItemsSQLSlowLog(const DescribeSlowLogsResponseBodyItemsSQLSlowLog &) = default ;
    DescribeSlowLogsResponseBodyItemsSQLSlowLog(DescribeSlowLogsResponseBodyItemsSQLSlowLog &&) = default ;
    DescribeSlowLogsResponseBodyItemsSQLSlowLog(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSlowLogsResponseBodyItemsSQLSlowLog() = default ;
    DescribeSlowLogsResponseBodyItemsSQLSlowLog& operator=(const DescribeSlowLogsResponseBodyItemsSQLSlowLog &) = default ;
    DescribeSlowLogsResponseBodyItemsSQLSlowLog& operator=(DescribeSlowLogsResponseBodyItemsSQLSlowLog &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->DBName_ == nullptr && return this->DBNodeId_ == nullptr && return this->maxExecutionTime_ == nullptr && return this->maxLockTime_ == nullptr && return this->parseMaxRowCount_ == nullptr
        && return this->parseTotalRowCounts_ == nullptr && return this->returnMaxRowCount_ == nullptr && return this->returnTotalRowCounts_ == nullptr && return this->SQLHASH_ == nullptr && return this->SQLText_ == nullptr
        && return this->totalExecutionCounts_ == nullptr && return this->totalExecutionTimes_ == nullptr && return this->totalLockTimes_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeSlowLogsResponseBodyItemsSQLSlowLog& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // DBName Field Functions 
    bool hasDBName() const { return this->DBName_ != nullptr;};
    void deleteDBName() { this->DBName_ = nullptr;};
    inline string DBName() const { DARABONBA_PTR_GET_DEFAULT(DBName_, "") };
    inline DescribeSlowLogsResponseBodyItemsSQLSlowLog& setDBName(string DBName) { DARABONBA_PTR_SET_VALUE(DBName_, DBName) };


    // DBNodeId Field Functions 
    bool hasDBNodeId() const { return this->DBNodeId_ != nullptr;};
    void deleteDBNodeId() { this->DBNodeId_ = nullptr;};
    inline string DBNodeId() const { DARABONBA_PTR_GET_DEFAULT(DBNodeId_, "") };
    inline DescribeSlowLogsResponseBodyItemsSQLSlowLog& setDBNodeId(string DBNodeId) { DARABONBA_PTR_SET_VALUE(DBNodeId_, DBNodeId) };


    // maxExecutionTime Field Functions 
    bool hasMaxExecutionTime() const { return this->maxExecutionTime_ != nullptr;};
    void deleteMaxExecutionTime() { this->maxExecutionTime_ = nullptr;};
    inline int64_t maxExecutionTime() const { DARABONBA_PTR_GET_DEFAULT(maxExecutionTime_, 0L) };
    inline DescribeSlowLogsResponseBodyItemsSQLSlowLog& setMaxExecutionTime(int64_t maxExecutionTime) { DARABONBA_PTR_SET_VALUE(maxExecutionTime_, maxExecutionTime) };


    // maxLockTime Field Functions 
    bool hasMaxLockTime() const { return this->maxLockTime_ != nullptr;};
    void deleteMaxLockTime() { this->maxLockTime_ = nullptr;};
    inline int64_t maxLockTime() const { DARABONBA_PTR_GET_DEFAULT(maxLockTime_, 0L) };
    inline DescribeSlowLogsResponseBodyItemsSQLSlowLog& setMaxLockTime(int64_t maxLockTime) { DARABONBA_PTR_SET_VALUE(maxLockTime_, maxLockTime) };


    // parseMaxRowCount Field Functions 
    bool hasParseMaxRowCount() const { return this->parseMaxRowCount_ != nullptr;};
    void deleteParseMaxRowCount() { this->parseMaxRowCount_ = nullptr;};
    inline int64_t parseMaxRowCount() const { DARABONBA_PTR_GET_DEFAULT(parseMaxRowCount_, 0L) };
    inline DescribeSlowLogsResponseBodyItemsSQLSlowLog& setParseMaxRowCount(int64_t parseMaxRowCount) { DARABONBA_PTR_SET_VALUE(parseMaxRowCount_, parseMaxRowCount) };


    // parseTotalRowCounts Field Functions 
    bool hasParseTotalRowCounts() const { return this->parseTotalRowCounts_ != nullptr;};
    void deleteParseTotalRowCounts() { this->parseTotalRowCounts_ = nullptr;};
    inline int64_t parseTotalRowCounts() const { DARABONBA_PTR_GET_DEFAULT(parseTotalRowCounts_, 0L) };
    inline DescribeSlowLogsResponseBodyItemsSQLSlowLog& setParseTotalRowCounts(int64_t parseTotalRowCounts) { DARABONBA_PTR_SET_VALUE(parseTotalRowCounts_, parseTotalRowCounts) };


    // returnMaxRowCount Field Functions 
    bool hasReturnMaxRowCount() const { return this->returnMaxRowCount_ != nullptr;};
    void deleteReturnMaxRowCount() { this->returnMaxRowCount_ = nullptr;};
    inline int64_t returnMaxRowCount() const { DARABONBA_PTR_GET_DEFAULT(returnMaxRowCount_, 0L) };
    inline DescribeSlowLogsResponseBodyItemsSQLSlowLog& setReturnMaxRowCount(int64_t returnMaxRowCount) { DARABONBA_PTR_SET_VALUE(returnMaxRowCount_, returnMaxRowCount) };


    // returnTotalRowCounts Field Functions 
    bool hasReturnTotalRowCounts() const { return this->returnTotalRowCounts_ != nullptr;};
    void deleteReturnTotalRowCounts() { this->returnTotalRowCounts_ = nullptr;};
    inline int64_t returnTotalRowCounts() const { DARABONBA_PTR_GET_DEFAULT(returnTotalRowCounts_, 0L) };
    inline DescribeSlowLogsResponseBodyItemsSQLSlowLog& setReturnTotalRowCounts(int64_t returnTotalRowCounts) { DARABONBA_PTR_SET_VALUE(returnTotalRowCounts_, returnTotalRowCounts) };


    // SQLHASH Field Functions 
    bool hasSQLHASH() const { return this->SQLHASH_ != nullptr;};
    void deleteSQLHASH() { this->SQLHASH_ = nullptr;};
    inline string SQLHASH() const { DARABONBA_PTR_GET_DEFAULT(SQLHASH_, "") };
    inline DescribeSlowLogsResponseBodyItemsSQLSlowLog& setSQLHASH(string SQLHASH) { DARABONBA_PTR_SET_VALUE(SQLHASH_, SQLHASH) };


    // SQLText Field Functions 
    bool hasSQLText() const { return this->SQLText_ != nullptr;};
    void deleteSQLText() { this->SQLText_ = nullptr;};
    inline string SQLText() const { DARABONBA_PTR_GET_DEFAULT(SQLText_, "") };
    inline DescribeSlowLogsResponseBodyItemsSQLSlowLog& setSQLText(string SQLText) { DARABONBA_PTR_SET_VALUE(SQLText_, SQLText) };


    // totalExecutionCounts Field Functions 
    bool hasTotalExecutionCounts() const { return this->totalExecutionCounts_ != nullptr;};
    void deleteTotalExecutionCounts() { this->totalExecutionCounts_ = nullptr;};
    inline int64_t totalExecutionCounts() const { DARABONBA_PTR_GET_DEFAULT(totalExecutionCounts_, 0L) };
    inline DescribeSlowLogsResponseBodyItemsSQLSlowLog& setTotalExecutionCounts(int64_t totalExecutionCounts) { DARABONBA_PTR_SET_VALUE(totalExecutionCounts_, totalExecutionCounts) };


    // totalExecutionTimes Field Functions 
    bool hasTotalExecutionTimes() const { return this->totalExecutionTimes_ != nullptr;};
    void deleteTotalExecutionTimes() { this->totalExecutionTimes_ = nullptr;};
    inline int64_t totalExecutionTimes() const { DARABONBA_PTR_GET_DEFAULT(totalExecutionTimes_, 0L) };
    inline DescribeSlowLogsResponseBodyItemsSQLSlowLog& setTotalExecutionTimes(int64_t totalExecutionTimes) { DARABONBA_PTR_SET_VALUE(totalExecutionTimes_, totalExecutionTimes) };


    // totalLockTimes Field Functions 
    bool hasTotalLockTimes() const { return this->totalLockTimes_ != nullptr;};
    void deleteTotalLockTimes() { this->totalLockTimes_ = nullptr;};
    inline int64_t totalLockTimes() const { DARABONBA_PTR_GET_DEFAULT(totalLockTimes_, 0L) };
    inline DescribeSlowLogsResponseBodyItemsSQLSlowLog& setTotalLockTimes(int64_t totalLockTimes) { DARABONBA_PTR_SET_VALUE(totalLockTimes_, totalLockTimes) };


  protected:
    // The date when the data was generated.
    std::shared_ptr<string> createTime_ = nullptr;
    // The name of the database.
    std::shared_ptr<string> DBName_ = nullptr;
    // The ID of the node.
    std::shared_ptr<string> DBNodeId_ = nullptr;
    // The longest execution duration of a specific SQL statement in the query. Unit: seconds.
    std::shared_ptr<int64_t> maxExecutionTime_ = nullptr;
    // The longest lock duration that was caused by a specific SQL statement in the query. Unit: seconds.
    std::shared_ptr<int64_t> maxLockTime_ = nullptr;
    // The largest number of rows that were parsed by a specific SQL statement in the query.
    std::shared_ptr<int64_t> parseMaxRowCount_ = nullptr;
    // The total number of rows that were parsed by all SQL statements in the query.
    std::shared_ptr<int64_t> parseTotalRowCounts_ = nullptr;
    // The largest number of rows that were returned by a specific SQL statement in the query.
    std::shared_ptr<int64_t> returnMaxRowCount_ = nullptr;
    // The total number of rows that were returned by all SQL statements in the query.
    std::shared_ptr<int64_t> returnTotalRowCounts_ = nullptr;
    // The unique ID of the SQL statement. The ID is used to obtain the slow query logs of the SQL statement.
    std::shared_ptr<string> SQLHASH_ = nullptr;
    // The SQL statement that is executed in the query.
    std::shared_ptr<string> SQLText_ = nullptr;
    // The total number of executions of the SQL statements.
    std::shared_ptr<int64_t> totalExecutionCounts_ = nullptr;
    // The total duration that was caused by all SQL statements in the query. Unit: seconds.
    std::shared_ptr<int64_t> totalExecutionTimes_ = nullptr;
    // The total lock duration that was caused by all SQL statements in the query. Unit: seconds.
    std::shared_ptr<int64_t> totalLockTimes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
