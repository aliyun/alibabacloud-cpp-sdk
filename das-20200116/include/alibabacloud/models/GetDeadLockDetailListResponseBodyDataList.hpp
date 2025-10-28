// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDEADLOCKDETAILLISTRESPONSEBODYDATALIST_HPP_
#define ALIBABACLOUD_MODELS_GETDEADLOCKDETAILLISTRESPONSEBODYDATALIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetDeadLockDetailListResponseBodyDataListBlockProcessList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetDeadLockDetailListResponseBodyDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDeadLockDetailListResponseBodyDataList& obj) { 
      DARABONBA_PTR_TO_JSON(BatchId, batchId_);
      DARABONBA_PTR_TO_JSON(BlockProcessList, blockProcessList_);
      DARABONBA_PTR_TO_JSON(ClientApp, clientApp_);
      DARABONBA_PTR_TO_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_TO_JSON(HostName, hostName_);
      DARABONBA_PTR_TO_JSON(LastTranStarted, lastTranStarted_);
      DARABONBA_PTR_TO_JSON(LockMode, lockMode_);
      DARABONBA_PTR_TO_JSON(LogUsed, logUsed_);
      DARABONBA_PTR_TO_JSON(LoginName, loginName_);
      DARABONBA_PTR_TO_JSON(ObjectOwned, objectOwned_);
      DARABONBA_PTR_TO_JSON(ObjectRequested, objectRequested_);
      DARABONBA_PTR_TO_JSON(OwnMode, ownMode_);
      DARABONBA_PTR_TO_JSON(Spid, spid_);
      DARABONBA_PTR_TO_JSON(SqlText, sqlText_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Victim, victim_);
      DARABONBA_PTR_TO_JSON(WaitMode, waitMode_);
      DARABONBA_PTR_TO_JSON(WaitResource, waitResource_);
      DARABONBA_PTR_TO_JSON(WaitResourceDescription, waitResourceDescription_);
    };
    friend void from_json(const Darabonba::Json& j, GetDeadLockDetailListResponseBodyDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(BatchId, batchId_);
      DARABONBA_PTR_FROM_JSON(BlockProcessList, blockProcessList_);
      DARABONBA_PTR_FROM_JSON(ClientApp, clientApp_);
      DARABONBA_PTR_FROM_JSON(DatabaseName, databaseName_);
      DARABONBA_PTR_FROM_JSON(HostName, hostName_);
      DARABONBA_PTR_FROM_JSON(LastTranStarted, lastTranStarted_);
      DARABONBA_PTR_FROM_JSON(LockMode, lockMode_);
      DARABONBA_PTR_FROM_JSON(LogUsed, logUsed_);
      DARABONBA_PTR_FROM_JSON(LoginName, loginName_);
      DARABONBA_PTR_FROM_JSON(ObjectOwned, objectOwned_);
      DARABONBA_PTR_FROM_JSON(ObjectRequested, objectRequested_);
      DARABONBA_PTR_FROM_JSON(OwnMode, ownMode_);
      DARABONBA_PTR_FROM_JSON(Spid, spid_);
      DARABONBA_PTR_FROM_JSON(SqlText, sqlText_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Victim, victim_);
      DARABONBA_PTR_FROM_JSON(WaitMode, waitMode_);
      DARABONBA_PTR_FROM_JSON(WaitResource, waitResource_);
      DARABONBA_PTR_FROM_JSON(WaitResourceDescription, waitResourceDescription_);
    };
    GetDeadLockDetailListResponseBodyDataList() = default ;
    GetDeadLockDetailListResponseBodyDataList(const GetDeadLockDetailListResponseBodyDataList &) = default ;
    GetDeadLockDetailListResponseBodyDataList(GetDeadLockDetailListResponseBodyDataList &&) = default ;
    GetDeadLockDetailListResponseBodyDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDeadLockDetailListResponseBodyDataList() = default ;
    GetDeadLockDetailListResponseBodyDataList& operator=(const GetDeadLockDetailListResponseBodyDataList &) = default ;
    GetDeadLockDetailListResponseBodyDataList& operator=(GetDeadLockDetailListResponseBodyDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->batchId_ == nullptr
        && return this->blockProcessList_ == nullptr && return this->clientApp_ == nullptr && return this->databaseName_ == nullptr && return this->hostName_ == nullptr && return this->lastTranStarted_ == nullptr
        && return this->lockMode_ == nullptr && return this->logUsed_ == nullptr && return this->loginName_ == nullptr && return this->objectOwned_ == nullptr && return this->objectRequested_ == nullptr
        && return this->ownMode_ == nullptr && return this->spid_ == nullptr && return this->sqlText_ == nullptr && return this->status_ == nullptr && return this->victim_ == nullptr
        && return this->waitMode_ == nullptr && return this->waitResource_ == nullptr && return this->waitResourceDescription_ == nullptr; };
    // batchId Field Functions 
    bool hasBatchId() const { return this->batchId_ != nullptr;};
    void deleteBatchId() { this->batchId_ = nullptr;};
    inline int64_t batchId() const { DARABONBA_PTR_GET_DEFAULT(batchId_, 0L) };
    inline GetDeadLockDetailListResponseBodyDataList& setBatchId(int64_t batchId) { DARABONBA_PTR_SET_VALUE(batchId_, batchId) };


    // blockProcessList Field Functions 
    bool hasBlockProcessList() const { return this->blockProcessList_ != nullptr;};
    void deleteBlockProcessList() { this->blockProcessList_ = nullptr;};
    inline const vector<Models::GetDeadLockDetailListResponseBodyDataListBlockProcessList> & blockProcessList() const { DARABONBA_PTR_GET_CONST(blockProcessList_, vector<Models::GetDeadLockDetailListResponseBodyDataListBlockProcessList>) };
    inline vector<Models::GetDeadLockDetailListResponseBodyDataListBlockProcessList> blockProcessList() { DARABONBA_PTR_GET(blockProcessList_, vector<Models::GetDeadLockDetailListResponseBodyDataListBlockProcessList>) };
    inline GetDeadLockDetailListResponseBodyDataList& setBlockProcessList(const vector<Models::GetDeadLockDetailListResponseBodyDataListBlockProcessList> & blockProcessList) { DARABONBA_PTR_SET_VALUE(blockProcessList_, blockProcessList) };
    inline GetDeadLockDetailListResponseBodyDataList& setBlockProcessList(vector<Models::GetDeadLockDetailListResponseBodyDataListBlockProcessList> && blockProcessList) { DARABONBA_PTR_SET_RVALUE(blockProcessList_, blockProcessList) };


    // clientApp Field Functions 
    bool hasClientApp() const { return this->clientApp_ != nullptr;};
    void deleteClientApp() { this->clientApp_ = nullptr;};
    inline string clientApp() const { DARABONBA_PTR_GET_DEFAULT(clientApp_, "") };
    inline GetDeadLockDetailListResponseBodyDataList& setClientApp(string clientApp) { DARABONBA_PTR_SET_VALUE(clientApp_, clientApp) };


    // databaseName Field Functions 
    bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
    void deleteDatabaseName() { this->databaseName_ = nullptr;};
    inline string databaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
    inline GetDeadLockDetailListResponseBodyDataList& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


    // hostName Field Functions 
    bool hasHostName() const { return this->hostName_ != nullptr;};
    void deleteHostName() { this->hostName_ = nullptr;};
    inline string hostName() const { DARABONBA_PTR_GET_DEFAULT(hostName_, "") };
    inline GetDeadLockDetailListResponseBodyDataList& setHostName(string hostName) { DARABONBA_PTR_SET_VALUE(hostName_, hostName) };


    // lastTranStarted Field Functions 
    bool hasLastTranStarted() const { return this->lastTranStarted_ != nullptr;};
    void deleteLastTranStarted() { this->lastTranStarted_ = nullptr;};
    inline int64_t lastTranStarted() const { DARABONBA_PTR_GET_DEFAULT(lastTranStarted_, 0L) };
    inline GetDeadLockDetailListResponseBodyDataList& setLastTranStarted(int64_t lastTranStarted) { DARABONBA_PTR_SET_VALUE(lastTranStarted_, lastTranStarted) };


    // lockMode Field Functions 
    bool hasLockMode() const { return this->lockMode_ != nullptr;};
    void deleteLockMode() { this->lockMode_ = nullptr;};
    inline string lockMode() const { DARABONBA_PTR_GET_DEFAULT(lockMode_, "") };
    inline GetDeadLockDetailListResponseBodyDataList& setLockMode(string lockMode) { DARABONBA_PTR_SET_VALUE(lockMode_, lockMode) };


    // logUsed Field Functions 
    bool hasLogUsed() const { return this->logUsed_ != nullptr;};
    void deleteLogUsed() { this->logUsed_ = nullptr;};
    inline int64_t logUsed() const { DARABONBA_PTR_GET_DEFAULT(logUsed_, 0L) };
    inline GetDeadLockDetailListResponseBodyDataList& setLogUsed(int64_t logUsed) { DARABONBA_PTR_SET_VALUE(logUsed_, logUsed) };


    // loginName Field Functions 
    bool hasLoginName() const { return this->loginName_ != nullptr;};
    void deleteLoginName() { this->loginName_ = nullptr;};
    inline string loginName() const { DARABONBA_PTR_GET_DEFAULT(loginName_, "") };
    inline GetDeadLockDetailListResponseBodyDataList& setLoginName(string loginName) { DARABONBA_PTR_SET_VALUE(loginName_, loginName) };


    // objectOwned Field Functions 
    bool hasObjectOwned() const { return this->objectOwned_ != nullptr;};
    void deleteObjectOwned() { this->objectOwned_ = nullptr;};
    inline string objectOwned() const { DARABONBA_PTR_GET_DEFAULT(objectOwned_, "") };
    inline GetDeadLockDetailListResponseBodyDataList& setObjectOwned(string objectOwned) { DARABONBA_PTR_SET_VALUE(objectOwned_, objectOwned) };


    // objectRequested Field Functions 
    bool hasObjectRequested() const { return this->objectRequested_ != nullptr;};
    void deleteObjectRequested() { this->objectRequested_ = nullptr;};
    inline string objectRequested() const { DARABONBA_PTR_GET_DEFAULT(objectRequested_, "") };
    inline GetDeadLockDetailListResponseBodyDataList& setObjectRequested(string objectRequested) { DARABONBA_PTR_SET_VALUE(objectRequested_, objectRequested) };


    // ownMode Field Functions 
    bool hasOwnMode() const { return this->ownMode_ != nullptr;};
    void deleteOwnMode() { this->ownMode_ = nullptr;};
    inline string ownMode() const { DARABONBA_PTR_GET_DEFAULT(ownMode_, "") };
    inline GetDeadLockDetailListResponseBodyDataList& setOwnMode(string ownMode) { DARABONBA_PTR_SET_VALUE(ownMode_, ownMode) };


    // spid Field Functions 
    bool hasSpid() const { return this->spid_ != nullptr;};
    void deleteSpid() { this->spid_ = nullptr;};
    inline int64_t spid() const { DARABONBA_PTR_GET_DEFAULT(spid_, 0L) };
    inline GetDeadLockDetailListResponseBodyDataList& setSpid(int64_t spid) { DARABONBA_PTR_SET_VALUE(spid_, spid) };


    // sqlText Field Functions 
    bool hasSqlText() const { return this->sqlText_ != nullptr;};
    void deleteSqlText() { this->sqlText_ = nullptr;};
    inline string sqlText() const { DARABONBA_PTR_GET_DEFAULT(sqlText_, "") };
    inline GetDeadLockDetailListResponseBodyDataList& setSqlText(string sqlText) { DARABONBA_PTR_SET_VALUE(sqlText_, sqlText) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetDeadLockDetailListResponseBodyDataList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // victim Field Functions 
    bool hasVictim() const { return this->victim_ != nullptr;};
    void deleteVictim() { this->victim_ = nullptr;};
    inline int64_t victim() const { DARABONBA_PTR_GET_DEFAULT(victim_, 0L) };
    inline GetDeadLockDetailListResponseBodyDataList& setVictim(int64_t victim) { DARABONBA_PTR_SET_VALUE(victim_, victim) };


    // waitMode Field Functions 
    bool hasWaitMode() const { return this->waitMode_ != nullptr;};
    void deleteWaitMode() { this->waitMode_ = nullptr;};
    inline string waitMode() const { DARABONBA_PTR_GET_DEFAULT(waitMode_, "") };
    inline GetDeadLockDetailListResponseBodyDataList& setWaitMode(string waitMode) { DARABONBA_PTR_SET_VALUE(waitMode_, waitMode) };


    // waitResource Field Functions 
    bool hasWaitResource() const { return this->waitResource_ != nullptr;};
    void deleteWaitResource() { this->waitResource_ = nullptr;};
    inline string waitResource() const { DARABONBA_PTR_GET_DEFAULT(waitResource_, "") };
    inline GetDeadLockDetailListResponseBodyDataList& setWaitResource(string waitResource) { DARABONBA_PTR_SET_VALUE(waitResource_, waitResource) };


    // waitResourceDescription Field Functions 
    bool hasWaitResourceDescription() const { return this->waitResourceDescription_ != nullptr;};
    void deleteWaitResourceDescription() { this->waitResourceDescription_ = nullptr;};
    inline string waitResourceDescription() const { DARABONBA_PTR_GET_DEFAULT(waitResourceDescription_, "") };
    inline GetDeadLockDetailListResponseBodyDataList& setWaitResourceDescription(string waitResourceDescription) { DARABONBA_PTR_SET_VALUE(waitResourceDescription_, waitResourceDescription) };


  protected:
    // The time when the data was collected. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> batchId_ = nullptr;
    // The blocking details of the instance. The details are information about the session that caused the lock.
    std::shared_ptr<vector<Models::GetDeadLockDetailListResponseBodyDataListBlockProcessList>> blockProcessList_ = nullptr;
    // The name of the client.
    std::shared_ptr<string> clientApp_ = nullptr;
    // The name of the database.
    std::shared_ptr<string> databaseName_ = nullptr;
    // The hostname.
    std::shared_ptr<string> hostName_ = nullptr;
    // The time when the transaction was started. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> lastTranStarted_ = nullptr;
    // The mode of the lock. For more information, see [Lock modes](https://help.aliyun.com/document_detail/2362804.html).
    std::shared_ptr<string> lockMode_ = nullptr;
    // The size of the logs generated in the session. Unit: bytes.
    std::shared_ptr<int64_t> logUsed_ = nullptr;
    // The logon name of the user.
    std::shared_ptr<string> loginName_ = nullptr;
    // The locked object.
    std::shared_ptr<string> objectOwned_ = nullptr;
    // The object that the transaction requested to lock.
    std::shared_ptr<string> objectRequested_ = nullptr;
    // The lock mode held by the session. For more information, see [Lock modes](https://help.aliyun.com/document_detail/2362804.html).
    std::shared_ptr<string> ownMode_ = nullptr;
    // The ID of the session in which the transaction is started.
    std::shared_ptr<int64_t> spid_ = nullptr;
    // The SQL statement.
    std::shared_ptr<string> sqlText_ = nullptr;
    // The status of the transaction.
    std::shared_ptr<string> status_ = nullptr;
    // Indicates whether the session is the victim of the deadlock. Valid values:
    // 
    // *   **0**: no.
    // *   **1**: yes.
    std::shared_ptr<int64_t> victim_ = nullptr;
    // The lock mode requested by the session. For more information, see [Lock modes](https://help.aliyun.com/document_detail/2362804.html).
    std::shared_ptr<string> waitMode_ = nullptr;
    // The resources requested by the transaction.
    std::shared_ptr<string> waitResource_ = nullptr;
    // The details of the resources requested by the transaction.
    std::shared_ptr<string> waitResourceDescription_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
