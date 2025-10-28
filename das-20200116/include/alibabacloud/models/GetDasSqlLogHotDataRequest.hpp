// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDASSQLLOGHOTDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDASSQLLOGHOTDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetDasSQLLogHotDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDasSQLLogHotDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountName, accountName_);
      DARABONBA_PTR_TO_JSON(ChildDBInstanceIDs, childDBInstanceIDs_);
      DARABONBA_PTR_TO_JSON(DBName, DBName_);
      DARABONBA_PTR_TO_JSON(End, end_);
      DARABONBA_PTR_TO_JSON(Fail, fail_);
      DARABONBA_PTR_TO_JSON(HostAddress, hostAddress_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(LogicalOperator, logicalOperator_);
      DARABONBA_PTR_TO_JSON(MaxLatancy, maxLatancy_);
      DARABONBA_PTR_TO_JSON(MaxRecordsPerPage, maxRecordsPerPage_);
      DARABONBA_PTR_TO_JSON(MaxRows, maxRows_);
      DARABONBA_PTR_TO_JSON(MaxScanRows, maxScanRows_);
      DARABONBA_PTR_TO_JSON(MaxSpillCnt, maxSpillCnt_);
      DARABONBA_PTR_TO_JSON(MinLatancy, minLatancy_);
      DARABONBA_PTR_TO_JSON(MinRows, minRows_);
      DARABONBA_PTR_TO_JSON(MinScanRows, minScanRows_);
      DARABONBA_PTR_TO_JSON(MinSpillCnt, minSpillCnt_);
      DARABONBA_PTR_TO_JSON(PageNumbers, pageNumbers_);
      DARABONBA_PTR_TO_JSON(QueryKeyword, queryKeyword_);
      DARABONBA_PTR_TO_JSON(Role, role_);
      DARABONBA_PTR_TO_JSON(SortKey, sortKey_);
      DARABONBA_PTR_TO_JSON(SortMethod, sortMethod_);
      DARABONBA_PTR_TO_JSON(SqlType, sqlType_);
      DARABONBA_PTR_TO_JSON(Start, start_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(ThreadID, threadID_);
      DARABONBA_PTR_TO_JSON(TraceId, traceId_);
      DARABONBA_PTR_TO_JSON(TransactionId, transactionId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDasSQLLogHotDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
      DARABONBA_PTR_FROM_JSON(ChildDBInstanceIDs, childDBInstanceIDs_);
      DARABONBA_PTR_FROM_JSON(DBName, DBName_);
      DARABONBA_PTR_FROM_JSON(End, end_);
      DARABONBA_PTR_FROM_JSON(Fail, fail_);
      DARABONBA_PTR_FROM_JSON(HostAddress, hostAddress_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(LogicalOperator, logicalOperator_);
      DARABONBA_PTR_FROM_JSON(MaxLatancy, maxLatancy_);
      DARABONBA_PTR_FROM_JSON(MaxRecordsPerPage, maxRecordsPerPage_);
      DARABONBA_PTR_FROM_JSON(MaxRows, maxRows_);
      DARABONBA_PTR_FROM_JSON(MaxScanRows, maxScanRows_);
      DARABONBA_PTR_FROM_JSON(MaxSpillCnt, maxSpillCnt_);
      DARABONBA_PTR_FROM_JSON(MinLatancy, minLatancy_);
      DARABONBA_PTR_FROM_JSON(MinRows, minRows_);
      DARABONBA_PTR_FROM_JSON(MinScanRows, minScanRows_);
      DARABONBA_PTR_FROM_JSON(MinSpillCnt, minSpillCnt_);
      DARABONBA_PTR_FROM_JSON(PageNumbers, pageNumbers_);
      DARABONBA_PTR_FROM_JSON(QueryKeyword, queryKeyword_);
      DARABONBA_PTR_FROM_JSON(Role, role_);
      DARABONBA_PTR_FROM_JSON(SortKey, sortKey_);
      DARABONBA_PTR_FROM_JSON(SortMethod, sortMethod_);
      DARABONBA_PTR_FROM_JSON(SqlType, sqlType_);
      DARABONBA_PTR_FROM_JSON(Start, start_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(ThreadID, threadID_);
      DARABONBA_PTR_FROM_JSON(TraceId, traceId_);
      DARABONBA_PTR_FROM_JSON(TransactionId, transactionId_);
    };
    GetDasSQLLogHotDataRequest() = default ;
    GetDasSQLLogHotDataRequest(const GetDasSQLLogHotDataRequest &) = default ;
    GetDasSQLLogHotDataRequest(GetDasSQLLogHotDataRequest &&) = default ;
    GetDasSQLLogHotDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDasSQLLogHotDataRequest() = default ;
    GetDasSQLLogHotDataRequest& operator=(const GetDasSQLLogHotDataRequest &) = default ;
    GetDasSQLLogHotDataRequest& operator=(GetDasSQLLogHotDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountName_ == nullptr
        && return this->childDBInstanceIDs_ == nullptr && return this->DBName_ == nullptr && return this->end_ == nullptr && return this->fail_ == nullptr && return this->hostAddress_ == nullptr
        && return this->instanceId_ == nullptr && return this->logicalOperator_ == nullptr && return this->maxLatancy_ == nullptr && return this->maxRecordsPerPage_ == nullptr && return this->maxRows_ == nullptr
        && return this->maxScanRows_ == nullptr && return this->maxSpillCnt_ == nullptr && return this->minLatancy_ == nullptr && return this->minRows_ == nullptr && return this->minScanRows_ == nullptr
        && return this->minSpillCnt_ == nullptr && return this->pageNumbers_ == nullptr && return this->queryKeyword_ == nullptr && return this->role_ == nullptr && return this->sortKey_ == nullptr
        && return this->sortMethod_ == nullptr && return this->sqlType_ == nullptr && return this->start_ == nullptr && return this->state_ == nullptr && return this->threadID_ == nullptr
        && return this->traceId_ == nullptr && return this->transactionId_ == nullptr; };
    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string accountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline GetDasSQLLogHotDataRequest& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // childDBInstanceIDs Field Functions 
    bool hasChildDBInstanceIDs() const { return this->childDBInstanceIDs_ != nullptr;};
    void deleteChildDBInstanceIDs() { this->childDBInstanceIDs_ = nullptr;};
    inline string childDBInstanceIDs() const { DARABONBA_PTR_GET_DEFAULT(childDBInstanceIDs_, "") };
    inline GetDasSQLLogHotDataRequest& setChildDBInstanceIDs(string childDBInstanceIDs) { DARABONBA_PTR_SET_VALUE(childDBInstanceIDs_, childDBInstanceIDs) };


    // DBName Field Functions 
    bool hasDBName() const { return this->DBName_ != nullptr;};
    void deleteDBName() { this->DBName_ = nullptr;};
    inline string DBName() const { DARABONBA_PTR_GET_DEFAULT(DBName_, "") };
    inline GetDasSQLLogHotDataRequest& setDBName(string DBName) { DARABONBA_PTR_SET_VALUE(DBName_, DBName) };


    // end Field Functions 
    bool hasEnd() const { return this->end_ != nullptr;};
    void deleteEnd() { this->end_ = nullptr;};
    inline int64_t end() const { DARABONBA_PTR_GET_DEFAULT(end_, 0L) };
    inline GetDasSQLLogHotDataRequest& setEnd(int64_t end) { DARABONBA_PTR_SET_VALUE(end_, end) };


    // fail Field Functions 
    bool hasFail() const { return this->fail_ != nullptr;};
    void deleteFail() { this->fail_ = nullptr;};
    inline string fail() const { DARABONBA_PTR_GET_DEFAULT(fail_, "") };
    inline GetDasSQLLogHotDataRequest& setFail(string fail) { DARABONBA_PTR_SET_VALUE(fail_, fail) };


    // hostAddress Field Functions 
    bool hasHostAddress() const { return this->hostAddress_ != nullptr;};
    void deleteHostAddress() { this->hostAddress_ = nullptr;};
    inline string hostAddress() const { DARABONBA_PTR_GET_DEFAULT(hostAddress_, "") };
    inline GetDasSQLLogHotDataRequest& setHostAddress(string hostAddress) { DARABONBA_PTR_SET_VALUE(hostAddress_, hostAddress) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetDasSQLLogHotDataRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // logicalOperator Field Functions 
    bool hasLogicalOperator() const { return this->logicalOperator_ != nullptr;};
    void deleteLogicalOperator() { this->logicalOperator_ = nullptr;};
    inline string logicalOperator() const { DARABONBA_PTR_GET_DEFAULT(logicalOperator_, "") };
    inline GetDasSQLLogHotDataRequest& setLogicalOperator(string logicalOperator) { DARABONBA_PTR_SET_VALUE(logicalOperator_, logicalOperator) };


    // maxLatancy Field Functions 
    bool hasMaxLatancy() const { return this->maxLatancy_ != nullptr;};
    void deleteMaxLatancy() { this->maxLatancy_ = nullptr;};
    inline int64_t maxLatancy() const { DARABONBA_PTR_GET_DEFAULT(maxLatancy_, 0L) };
    inline GetDasSQLLogHotDataRequest& setMaxLatancy(int64_t maxLatancy) { DARABONBA_PTR_SET_VALUE(maxLatancy_, maxLatancy) };


    // maxRecordsPerPage Field Functions 
    bool hasMaxRecordsPerPage() const { return this->maxRecordsPerPage_ != nullptr;};
    void deleteMaxRecordsPerPage() { this->maxRecordsPerPage_ = nullptr;};
    inline int64_t maxRecordsPerPage() const { DARABONBA_PTR_GET_DEFAULT(maxRecordsPerPage_, 0L) };
    inline GetDasSQLLogHotDataRequest& setMaxRecordsPerPage(int64_t maxRecordsPerPage) { DARABONBA_PTR_SET_VALUE(maxRecordsPerPage_, maxRecordsPerPage) };


    // maxRows Field Functions 
    bool hasMaxRows() const { return this->maxRows_ != nullptr;};
    void deleteMaxRows() { this->maxRows_ = nullptr;};
    inline int64_t maxRows() const { DARABONBA_PTR_GET_DEFAULT(maxRows_, 0L) };
    inline GetDasSQLLogHotDataRequest& setMaxRows(int64_t maxRows) { DARABONBA_PTR_SET_VALUE(maxRows_, maxRows) };


    // maxScanRows Field Functions 
    bool hasMaxScanRows() const { return this->maxScanRows_ != nullptr;};
    void deleteMaxScanRows() { this->maxScanRows_ = nullptr;};
    inline int64_t maxScanRows() const { DARABONBA_PTR_GET_DEFAULT(maxScanRows_, 0L) };
    inline GetDasSQLLogHotDataRequest& setMaxScanRows(int64_t maxScanRows) { DARABONBA_PTR_SET_VALUE(maxScanRows_, maxScanRows) };


    // maxSpillCnt Field Functions 
    bool hasMaxSpillCnt() const { return this->maxSpillCnt_ != nullptr;};
    void deleteMaxSpillCnt() { this->maxSpillCnt_ = nullptr;};
    inline int64_t maxSpillCnt() const { DARABONBA_PTR_GET_DEFAULT(maxSpillCnt_, 0L) };
    inline GetDasSQLLogHotDataRequest& setMaxSpillCnt(int64_t maxSpillCnt) { DARABONBA_PTR_SET_VALUE(maxSpillCnt_, maxSpillCnt) };


    // minLatancy Field Functions 
    bool hasMinLatancy() const { return this->minLatancy_ != nullptr;};
    void deleteMinLatancy() { this->minLatancy_ = nullptr;};
    inline int64_t minLatancy() const { DARABONBA_PTR_GET_DEFAULT(minLatancy_, 0L) };
    inline GetDasSQLLogHotDataRequest& setMinLatancy(int64_t minLatancy) { DARABONBA_PTR_SET_VALUE(minLatancy_, minLatancy) };


    // minRows Field Functions 
    bool hasMinRows() const { return this->minRows_ != nullptr;};
    void deleteMinRows() { this->minRows_ = nullptr;};
    inline int64_t minRows() const { DARABONBA_PTR_GET_DEFAULT(minRows_, 0L) };
    inline GetDasSQLLogHotDataRequest& setMinRows(int64_t minRows) { DARABONBA_PTR_SET_VALUE(minRows_, minRows) };


    // minScanRows Field Functions 
    bool hasMinScanRows() const { return this->minScanRows_ != nullptr;};
    void deleteMinScanRows() { this->minScanRows_ = nullptr;};
    inline int64_t minScanRows() const { DARABONBA_PTR_GET_DEFAULT(minScanRows_, 0L) };
    inline GetDasSQLLogHotDataRequest& setMinScanRows(int64_t minScanRows) { DARABONBA_PTR_SET_VALUE(minScanRows_, minScanRows) };


    // minSpillCnt Field Functions 
    bool hasMinSpillCnt() const { return this->minSpillCnt_ != nullptr;};
    void deleteMinSpillCnt() { this->minSpillCnt_ = nullptr;};
    inline int64_t minSpillCnt() const { DARABONBA_PTR_GET_DEFAULT(minSpillCnt_, 0L) };
    inline GetDasSQLLogHotDataRequest& setMinSpillCnt(int64_t minSpillCnt) { DARABONBA_PTR_SET_VALUE(minSpillCnt_, minSpillCnt) };


    // pageNumbers Field Functions 
    bool hasPageNumbers() const { return this->pageNumbers_ != nullptr;};
    void deletePageNumbers() { this->pageNumbers_ = nullptr;};
    inline int64_t pageNumbers() const { DARABONBA_PTR_GET_DEFAULT(pageNumbers_, 0L) };
    inline GetDasSQLLogHotDataRequest& setPageNumbers(int64_t pageNumbers) { DARABONBA_PTR_SET_VALUE(pageNumbers_, pageNumbers) };


    // queryKeyword Field Functions 
    bool hasQueryKeyword() const { return this->queryKeyword_ != nullptr;};
    void deleteQueryKeyword() { this->queryKeyword_ = nullptr;};
    inline string queryKeyword() const { DARABONBA_PTR_GET_DEFAULT(queryKeyword_, "") };
    inline GetDasSQLLogHotDataRequest& setQueryKeyword(string queryKeyword) { DARABONBA_PTR_SET_VALUE(queryKeyword_, queryKeyword) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string role() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline GetDasSQLLogHotDataRequest& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    // sortKey Field Functions 
    bool hasSortKey() const { return this->sortKey_ != nullptr;};
    void deleteSortKey() { this->sortKey_ = nullptr;};
    inline string sortKey() const { DARABONBA_PTR_GET_DEFAULT(sortKey_, "") };
    inline GetDasSQLLogHotDataRequest& setSortKey(string sortKey) { DARABONBA_PTR_SET_VALUE(sortKey_, sortKey) };


    // sortMethod Field Functions 
    bool hasSortMethod() const { return this->sortMethod_ != nullptr;};
    void deleteSortMethod() { this->sortMethod_ = nullptr;};
    inline string sortMethod() const { DARABONBA_PTR_GET_DEFAULT(sortMethod_, "") };
    inline GetDasSQLLogHotDataRequest& setSortMethod(string sortMethod) { DARABONBA_PTR_SET_VALUE(sortMethod_, sortMethod) };


    // sqlType Field Functions 
    bool hasSqlType() const { return this->sqlType_ != nullptr;};
    void deleteSqlType() { this->sqlType_ = nullptr;};
    inline string sqlType() const { DARABONBA_PTR_GET_DEFAULT(sqlType_, "") };
    inline GetDasSQLLogHotDataRequest& setSqlType(string sqlType) { DARABONBA_PTR_SET_VALUE(sqlType_, sqlType) };


    // start Field Functions 
    bool hasStart() const { return this->start_ != nullptr;};
    void deleteStart() { this->start_ = nullptr;};
    inline int64_t start() const { DARABONBA_PTR_GET_DEFAULT(start_, 0L) };
    inline GetDasSQLLogHotDataRequest& setStart(int64_t start) { DARABONBA_PTR_SET_VALUE(start_, start) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline GetDasSQLLogHotDataRequest& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // threadID Field Functions 
    bool hasThreadID() const { return this->threadID_ != nullptr;};
    void deleteThreadID() { this->threadID_ = nullptr;};
    inline string threadID() const { DARABONBA_PTR_GET_DEFAULT(threadID_, "") };
    inline GetDasSQLLogHotDataRequest& setThreadID(string threadID) { DARABONBA_PTR_SET_VALUE(threadID_, threadID) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string traceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline GetDasSQLLogHotDataRequest& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


    // transactionId Field Functions 
    bool hasTransactionId() const { return this->transactionId_ != nullptr;};
    void deleteTransactionId() { this->transactionId_ = nullptr;};
    inline string transactionId() const { DARABONBA_PTR_GET_DEFAULT(transactionId_, "") };
    inline GetDasSQLLogHotDataRequest& setTransactionId(string transactionId) { DARABONBA_PTR_SET_VALUE(transactionId_, transactionId) };


  protected:
    // The account of the database.
    // 
    // >  You can specify multiple database accounts that are separated by spaces. Example: `user1 user2 user3`.
    std::shared_ptr<string> accountName_ = nullptr;
    // The node ID.
    // 
    // >  This parameter must be specified if the database instance is a PolarDB for MySQL cluster.
    std::shared_ptr<string> childDBInstanceIDs_ = nullptr;
    // The name of the database.
    // 
    // >  You can specify multiple database names that are separated by spaces. Example: `DB1 DB2 DB3`.
    std::shared_ptr<string> DBName_ = nullptr;
    // The end of the time range to query. Set this parameter to a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    // 
    // >  The end time must be later than the start time. The interval between the start time and the end time cannot exceed 24 hours.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> end_ = nullptr;
    // The error code of SQL execution. You can call the [GetAsyncErrorRequestStatByCode](https://help.aliyun.com/document_detail/409804.html) operation to query MySQL error codes in SQL Explorer data.
    std::shared_ptr<string> fail_ = nullptr;
    // The IP address of the client.
    // 
    // >  You can specify multiple IP addresses that are separated by spaces. Example: `IP1 IP2 IP3`.
    std::shared_ptr<string> hostAddress_ = nullptr;
    // The ID of the database instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The logical relationship among multiple keywords.
    // 
    // *   **or**
    // *   **and**
    std::shared_ptr<string> logicalOperator_ = nullptr;
    // The maximum execution duration. Unit: microseconds. You can specify this parameter to query the SQL statements whose execution duration is smaller than the value of this parameter.
    std::shared_ptr<int64_t> maxLatancy_ = nullptr;
    // The maximum number of entries per page. Valid values: 5 to 100.
    std::shared_ptr<int64_t> maxRecordsPerPage_ = nullptr;
    // The reserved parameter. This parameter is not supported.
    std::shared_ptr<int64_t> maxRows_ = nullptr;
    // The maximum number of scanned rows. You can specify this parameter to query the SQL statements that scan a smaller number of rows than the value of this parameter.
    std::shared_ptr<int64_t> maxScanRows_ = nullptr;
    // The reserved parameter. This parameter is not supported.
    std::shared_ptr<int64_t> maxSpillCnt_ = nullptr;
    // The minimum execution duration. Unit: microseconds. You can specify this parameter to query the SQL statements whose execution duration is greater than or equal to the value of this parameter.
    std::shared_ptr<int64_t> minLatancy_ = nullptr;
    // The reserved parameter. This parameter is not supported.
    std::shared_ptr<int64_t> minRows_ = nullptr;
    // The minimum number of scanned rows. You can specify this parameter to query the SQL statements that scan a larger or an equal number of rows than the value of this parameter.
    std::shared_ptr<int64_t> minScanRows_ = nullptr;
    // The reserved parameter. This parameter is not supported.
    std::shared_ptr<int64_t> minSpillCnt_ = nullptr;
    // The page number. Pages start from page 1. Default value: 1.
    std::shared_ptr<int64_t> pageNumbers_ = nullptr;
    // The keyword that is used for the query.
    // 
    // >  Fuzzy search is not supported. You can query data by using multiple keywords. Separate keywords with spaces.
    std::shared_ptr<string> queryKeyword_ = nullptr;
    // The reserved parameter. This parameter is not supported.
    std::shared_ptr<string> role_ = nullptr;
    // The basis on which you want to sort the query results.
    // 
    // *   **SCAN_ROWS**: the number of scanned rows.
    // *   **UPDATE_ROWS**: the number of updated rows.
    // *   **CONSUME**: the time consumed.
    // *   **ORIGIN_TIME**: the execution duration.
    std::shared_ptr<string> sortKey_ = nullptr;
    // The order in which you want to sort the query results.
    // 
    // *   **ase**: ascending order.
    // *   **desc**: descending order.
    std::shared_ptr<string> sortMethod_ = nullptr;
    // The type of the SQL statement. Valid values:
    // 
    // *   **SELECT**
    // *   **UPDATE**
    // *   **DELETE**
    std::shared_ptr<string> sqlType_ = nullptr;
    // The beginning of the time range to query. Specify a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    // 
    // >  The beginning of the time range to query must be later than the time when DAS Enterprise Edition is enabled, and can be up to seven days earlier than the current time.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> start_ = nullptr;
    // The execution results. You can specify **0** to query the SQL statements that are successfully executed. You can also specify an error code to query the corresponding SQL statements that fail to be executed.
    std::shared_ptr<string> state_ = nullptr;
    // The thread ID.
    // 
    // >  You can specify multiple thread IDs that are separated by spaces. Example: `Thread ID1 Thread ID2 Thread ID3`.
    std::shared_ptr<string> threadID_ = nullptr;
    // The reserved parameter. This parameter is not supported.
    std::shared_ptr<string> traceId_ = nullptr;
    // The transaction ID.
    std::shared_ptr<string> transactionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
