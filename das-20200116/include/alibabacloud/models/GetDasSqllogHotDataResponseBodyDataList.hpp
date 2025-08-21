// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDASSQLLOGHOTDATARESPONSEBODYDATALIST_HPP_
#define ALIBABACLOUD_MODELS_GETDASSQLLOGHOTDATARESPONSEBODYDATALIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetDasSQLLogHotDataResponseBodyDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDasSQLLogHotDataResponseBodyDataList& obj) { 
      DARABONBA_PTR_TO_JSON(AccountName, accountName_);
      DARABONBA_PTR_TO_JSON(DBName, DBName_);
      DARABONBA_PTR_TO_JSON(ExecuteTime, executeTime_);
      DARABONBA_PTR_TO_JSON(Ext, ext_);
      DARABONBA_PTR_TO_JSON(HostAddress, hostAddress_);
      DARABONBA_PTR_TO_JSON(Latancy, latancy_);
      DARABONBA_PTR_TO_JSON(LockTime, lockTime_);
      DARABONBA_PTR_TO_JSON(LogicRead, logicRead_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(OriginTime, originTime_);
      DARABONBA_PTR_TO_JSON(PhysicAsyncRead, physicAsyncRead_);
      DARABONBA_PTR_TO_JSON(PhysicSyncRead, physicSyncRead_);
      DARABONBA_PTR_TO_JSON(ReturnRows, returnRows_);
      DARABONBA_PTR_TO_JSON(SQLText, SQLText_);
      DARABONBA_PTR_TO_JSON(ScanRows, scanRows_);
      DARABONBA_PTR_TO_JSON(SqlType, sqlType_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(ThreadID, threadID_);
      DARABONBA_PTR_TO_JSON(TransactionId, transactionId_);
      DARABONBA_PTR_TO_JSON(UpdateRows, updateRows_);
    };
    friend void from_json(const Darabonba::Json& j, GetDasSQLLogHotDataResponseBodyDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
      DARABONBA_PTR_FROM_JSON(DBName, DBName_);
      DARABONBA_PTR_FROM_JSON(ExecuteTime, executeTime_);
      DARABONBA_PTR_FROM_JSON(Ext, ext_);
      DARABONBA_PTR_FROM_JSON(HostAddress, hostAddress_);
      DARABONBA_PTR_FROM_JSON(Latancy, latancy_);
      DARABONBA_PTR_FROM_JSON(LockTime, lockTime_);
      DARABONBA_PTR_FROM_JSON(LogicRead, logicRead_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(OriginTime, originTime_);
      DARABONBA_PTR_FROM_JSON(PhysicAsyncRead, physicAsyncRead_);
      DARABONBA_PTR_FROM_JSON(PhysicSyncRead, physicSyncRead_);
      DARABONBA_PTR_FROM_JSON(ReturnRows, returnRows_);
      DARABONBA_PTR_FROM_JSON(SQLText, SQLText_);
      DARABONBA_PTR_FROM_JSON(ScanRows, scanRows_);
      DARABONBA_PTR_FROM_JSON(SqlType, sqlType_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(ThreadID, threadID_);
      DARABONBA_PTR_FROM_JSON(TransactionId, transactionId_);
      DARABONBA_PTR_FROM_JSON(UpdateRows, updateRows_);
    };
    GetDasSQLLogHotDataResponseBodyDataList() = default ;
    GetDasSQLLogHotDataResponseBodyDataList(const GetDasSQLLogHotDataResponseBodyDataList &) = default ;
    GetDasSQLLogHotDataResponseBodyDataList(GetDasSQLLogHotDataResponseBodyDataList &&) = default ;
    GetDasSQLLogHotDataResponseBodyDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDasSQLLogHotDataResponseBodyDataList() = default ;
    GetDasSQLLogHotDataResponseBodyDataList& operator=(const GetDasSQLLogHotDataResponseBodyDataList &) = default ;
    GetDasSQLLogHotDataResponseBodyDataList& operator=(GetDasSQLLogHotDataResponseBodyDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->accountName_ != nullptr
        && this->DBName_ != nullptr && this->executeTime_ != nullptr && this->ext_ != nullptr && this->hostAddress_ != nullptr && this->latancy_ != nullptr
        && this->lockTime_ != nullptr && this->logicRead_ != nullptr && this->nodeId_ != nullptr && this->originTime_ != nullptr && this->physicAsyncRead_ != nullptr
        && this->physicSyncRead_ != nullptr && this->returnRows_ != nullptr && this->SQLText_ != nullptr && this->scanRows_ != nullptr && this->sqlType_ != nullptr
        && this->state_ != nullptr && this->threadID_ != nullptr && this->transactionId_ != nullptr && this->updateRows_ != nullptr; };
    // accountName Field Functions 
    bool hasAccountName() const { return this->accountName_ != nullptr;};
    void deleteAccountName() { this->accountName_ = nullptr;};
    inline string accountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
    inline GetDasSQLLogHotDataResponseBodyDataList& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


    // DBName Field Functions 
    bool hasDBName() const { return this->DBName_ != nullptr;};
    void deleteDBName() { this->DBName_ = nullptr;};
    inline string DBName() const { DARABONBA_PTR_GET_DEFAULT(DBName_, "") };
    inline GetDasSQLLogHotDataResponseBodyDataList& setDBName(string DBName) { DARABONBA_PTR_SET_VALUE(DBName_, DBName) };


    // executeTime Field Functions 
    bool hasExecuteTime() const { return this->executeTime_ != nullptr;};
    void deleteExecuteTime() { this->executeTime_ = nullptr;};
    inline string executeTime() const { DARABONBA_PTR_GET_DEFAULT(executeTime_, "") };
    inline GetDasSQLLogHotDataResponseBodyDataList& setExecuteTime(string executeTime) { DARABONBA_PTR_SET_VALUE(executeTime_, executeTime) };


    // ext Field Functions 
    bool hasExt() const { return this->ext_ != nullptr;};
    void deleteExt() { this->ext_ = nullptr;};
    inline string ext() const { DARABONBA_PTR_GET_DEFAULT(ext_, "") };
    inline GetDasSQLLogHotDataResponseBodyDataList& setExt(string ext) { DARABONBA_PTR_SET_VALUE(ext_, ext) };


    // hostAddress Field Functions 
    bool hasHostAddress() const { return this->hostAddress_ != nullptr;};
    void deleteHostAddress() { this->hostAddress_ = nullptr;};
    inline string hostAddress() const { DARABONBA_PTR_GET_DEFAULT(hostAddress_, "") };
    inline GetDasSQLLogHotDataResponseBodyDataList& setHostAddress(string hostAddress) { DARABONBA_PTR_SET_VALUE(hostAddress_, hostAddress) };


    // latancy Field Functions 
    bool hasLatancy() const { return this->latancy_ != nullptr;};
    void deleteLatancy() { this->latancy_ = nullptr;};
    inline int64_t latancy() const { DARABONBA_PTR_GET_DEFAULT(latancy_, 0L) };
    inline GetDasSQLLogHotDataResponseBodyDataList& setLatancy(int64_t latancy) { DARABONBA_PTR_SET_VALUE(latancy_, latancy) };


    // lockTime Field Functions 
    bool hasLockTime() const { return this->lockTime_ != nullptr;};
    void deleteLockTime() { this->lockTime_ = nullptr;};
    inline int64_t lockTime() const { DARABONBA_PTR_GET_DEFAULT(lockTime_, 0L) };
    inline GetDasSQLLogHotDataResponseBodyDataList& setLockTime(int64_t lockTime) { DARABONBA_PTR_SET_VALUE(lockTime_, lockTime) };


    // logicRead Field Functions 
    bool hasLogicRead() const { return this->logicRead_ != nullptr;};
    void deleteLogicRead() { this->logicRead_ = nullptr;};
    inline int64_t logicRead() const { DARABONBA_PTR_GET_DEFAULT(logicRead_, 0L) };
    inline GetDasSQLLogHotDataResponseBodyDataList& setLogicRead(int64_t logicRead) { DARABONBA_PTR_SET_VALUE(logicRead_, logicRead) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline GetDasSQLLogHotDataResponseBodyDataList& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // originTime Field Functions 
    bool hasOriginTime() const { return this->originTime_ != nullptr;};
    void deleteOriginTime() { this->originTime_ = nullptr;};
    inline string originTime() const { DARABONBA_PTR_GET_DEFAULT(originTime_, "") };
    inline GetDasSQLLogHotDataResponseBodyDataList& setOriginTime(string originTime) { DARABONBA_PTR_SET_VALUE(originTime_, originTime) };


    // physicAsyncRead Field Functions 
    bool hasPhysicAsyncRead() const { return this->physicAsyncRead_ != nullptr;};
    void deletePhysicAsyncRead() { this->physicAsyncRead_ = nullptr;};
    inline int64_t physicAsyncRead() const { DARABONBA_PTR_GET_DEFAULT(physicAsyncRead_, 0L) };
    inline GetDasSQLLogHotDataResponseBodyDataList& setPhysicAsyncRead(int64_t physicAsyncRead) { DARABONBA_PTR_SET_VALUE(physicAsyncRead_, physicAsyncRead) };


    // physicSyncRead Field Functions 
    bool hasPhysicSyncRead() const { return this->physicSyncRead_ != nullptr;};
    void deletePhysicSyncRead() { this->physicSyncRead_ = nullptr;};
    inline int64_t physicSyncRead() const { DARABONBA_PTR_GET_DEFAULT(physicSyncRead_, 0L) };
    inline GetDasSQLLogHotDataResponseBodyDataList& setPhysicSyncRead(int64_t physicSyncRead) { DARABONBA_PTR_SET_VALUE(physicSyncRead_, physicSyncRead) };


    // returnRows Field Functions 
    bool hasReturnRows() const { return this->returnRows_ != nullptr;};
    void deleteReturnRows() { this->returnRows_ = nullptr;};
    inline int64_t returnRows() const { DARABONBA_PTR_GET_DEFAULT(returnRows_, 0L) };
    inline GetDasSQLLogHotDataResponseBodyDataList& setReturnRows(int64_t returnRows) { DARABONBA_PTR_SET_VALUE(returnRows_, returnRows) };


    // SQLText Field Functions 
    bool hasSQLText() const { return this->SQLText_ != nullptr;};
    void deleteSQLText() { this->SQLText_ = nullptr;};
    inline string SQLText() const { DARABONBA_PTR_GET_DEFAULT(SQLText_, "") };
    inline GetDasSQLLogHotDataResponseBodyDataList& setSQLText(string SQLText) { DARABONBA_PTR_SET_VALUE(SQLText_, SQLText) };


    // scanRows Field Functions 
    bool hasScanRows() const { return this->scanRows_ != nullptr;};
    void deleteScanRows() { this->scanRows_ = nullptr;};
    inline int64_t scanRows() const { DARABONBA_PTR_GET_DEFAULT(scanRows_, 0L) };
    inline GetDasSQLLogHotDataResponseBodyDataList& setScanRows(int64_t scanRows) { DARABONBA_PTR_SET_VALUE(scanRows_, scanRows) };


    // sqlType Field Functions 
    bool hasSqlType() const { return this->sqlType_ != nullptr;};
    void deleteSqlType() { this->sqlType_ = nullptr;};
    inline string sqlType() const { DARABONBA_PTR_GET_DEFAULT(sqlType_, "") };
    inline GetDasSQLLogHotDataResponseBodyDataList& setSqlType(string sqlType) { DARABONBA_PTR_SET_VALUE(sqlType_, sqlType) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline GetDasSQLLogHotDataResponseBodyDataList& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // threadID Field Functions 
    bool hasThreadID() const { return this->threadID_ != nullptr;};
    void deleteThreadID() { this->threadID_ = nullptr;};
    inline int64_t threadID() const { DARABONBA_PTR_GET_DEFAULT(threadID_, 0L) };
    inline GetDasSQLLogHotDataResponseBodyDataList& setThreadID(int64_t threadID) { DARABONBA_PTR_SET_VALUE(threadID_, threadID) };


    // transactionId Field Functions 
    bool hasTransactionId() const { return this->transactionId_ != nullptr;};
    void deleteTransactionId() { this->transactionId_ = nullptr;};
    inline string transactionId() const { DARABONBA_PTR_GET_DEFAULT(transactionId_, "") };
    inline GetDasSQLLogHotDataResponseBodyDataList& setTransactionId(string transactionId) { DARABONBA_PTR_SET_VALUE(transactionId_, transactionId) };


    // updateRows Field Functions 
    bool hasUpdateRows() const { return this->updateRows_ != nullptr;};
    void deleteUpdateRows() { this->updateRows_ = nullptr;};
    inline int64_t updateRows() const { DARABONBA_PTR_GET_DEFAULT(updateRows_, 0L) };
    inline GetDasSQLLogHotDataResponseBodyDataList& setUpdateRows(int64_t updateRows) { DARABONBA_PTR_SET_VALUE(updateRows_, updateRows) };


  protected:
    // The account of the database.
    std::shared_ptr<string> accountName_ = nullptr;
    // The name of the database.
    std::shared_ptr<string> DBName_ = nullptr;
    // The execution time. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> executeTime_ = nullptr;
    // The extended information. This parameter is a reserved parameter.
    std::shared_ptr<string> ext_ = nullptr;
    // The IP address of the client.
    std::shared_ptr<string> hostAddress_ = nullptr;
    // The execution duration. Unit: microseconds.
    std::shared_ptr<int64_t> latancy_ = nullptr;
    // The lock wait duration. Unit: microseconds.
    std::shared_ptr<int64_t> lockTime_ = nullptr;
    // The number of logical reads.
    std::shared_ptr<int64_t> logicRead_ = nullptr;
    std::shared_ptr<string> nodeId_ = nullptr;
    // The execution time. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> originTime_ = nullptr;
    // The number of physical asynchronous reads.
    std::shared_ptr<int64_t> physicAsyncRead_ = nullptr;
    // The number of physical synchronous reads.
    std::shared_ptr<int64_t> physicSyncRead_ = nullptr;
    // The number of rows returned.
    std::shared_ptr<int64_t> returnRows_ = nullptr;
    // The content of the SQL statement.
    std::shared_ptr<string> SQLText_ = nullptr;
    // The number of rows scanned by the SQL statement.
    std::shared_ptr<int64_t> scanRows_ = nullptr;
    // The type of the SQL statement. Valid values:
    // 
    // * **SELECT**
    // * **UPDATE**
    // * **DELETE**
    std::shared_ptr<string> sqlType_ = nullptr;
    // The execution result. If a **0** is returned, the SQL statement was successfully executed. If an error code is returned, the SQL statement failed to be executed.
    std::shared_ptr<string> state_ = nullptr;
    // The thread ID.
    std::shared_ptr<int64_t> threadID_ = nullptr;
    // The transaction ID.
    std::shared_ptr<string> transactionId_ = nullptr;
    // The number of updated rows.
    std::shared_ptr<int64_t> updateRows_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
