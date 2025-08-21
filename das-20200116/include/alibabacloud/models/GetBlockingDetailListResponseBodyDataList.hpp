// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBLOCKINGDETAILLISTRESPONSEBODYDATALIST_HPP_
#define ALIBABACLOUD_MODELS_GETBLOCKINGDETAILLISTRESPONSEBODYDATALIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class GetBlockingDetailListResponseBodyDataList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBlockingDetailListResponseBodyDataList& obj) { 
      DARABONBA_PTR_TO_JSON(BatchId, batchId_);
      DARABONBA_PTR_TO_JSON(ClientAppName, clientAppName_);
      DARABONBA_PTR_TO_JSON(CurrentCollectionTime, currentCollectionTime_);
      DARABONBA_PTR_TO_JSON(DataBase, dataBase_);
      DARABONBA_PTR_TO_JSON(HostName, hostName_);
      DARABONBA_PTR_TO_JSON(LoginId, loginId_);
      DARABONBA_PTR_TO_JSON(QueryHash, queryHash_);
      DARABONBA_PTR_TO_JSON(Spid, spid_);
      DARABONBA_PTR_TO_JSON(SqlText, sqlText_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(WaitTimeMs, waitTimeMs_);
      DARABONBA_PTR_TO_JSON(WaitType, waitType_);
    };
    friend void from_json(const Darabonba::Json& j, GetBlockingDetailListResponseBodyDataList& obj) { 
      DARABONBA_PTR_FROM_JSON(BatchId, batchId_);
      DARABONBA_PTR_FROM_JSON(ClientAppName, clientAppName_);
      DARABONBA_PTR_FROM_JSON(CurrentCollectionTime, currentCollectionTime_);
      DARABONBA_PTR_FROM_JSON(DataBase, dataBase_);
      DARABONBA_PTR_FROM_JSON(HostName, hostName_);
      DARABONBA_PTR_FROM_JSON(LoginId, loginId_);
      DARABONBA_PTR_FROM_JSON(QueryHash, queryHash_);
      DARABONBA_PTR_FROM_JSON(Spid, spid_);
      DARABONBA_PTR_FROM_JSON(SqlText, sqlText_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(WaitTimeMs, waitTimeMs_);
      DARABONBA_PTR_FROM_JSON(WaitType, waitType_);
    };
    GetBlockingDetailListResponseBodyDataList() = default ;
    GetBlockingDetailListResponseBodyDataList(const GetBlockingDetailListResponseBodyDataList &) = default ;
    GetBlockingDetailListResponseBodyDataList(GetBlockingDetailListResponseBodyDataList &&) = default ;
    GetBlockingDetailListResponseBodyDataList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBlockingDetailListResponseBodyDataList() = default ;
    GetBlockingDetailListResponseBodyDataList& operator=(const GetBlockingDetailListResponseBodyDataList &) = default ;
    GetBlockingDetailListResponseBodyDataList& operator=(GetBlockingDetailListResponseBodyDataList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->batchId_ != nullptr
        && this->clientAppName_ != nullptr && this->currentCollectionTime_ != nullptr && this->dataBase_ != nullptr && this->hostName_ != nullptr && this->loginId_ != nullptr
        && this->queryHash_ != nullptr && this->spid_ != nullptr && this->sqlText_ != nullptr && this->startTime_ != nullptr && this->waitTimeMs_ != nullptr
        && this->waitType_ != nullptr; };
    // batchId Field Functions 
    bool hasBatchId() const { return this->batchId_ != nullptr;};
    void deleteBatchId() { this->batchId_ = nullptr;};
    inline int64_t batchId() const { DARABONBA_PTR_GET_DEFAULT(batchId_, 0L) };
    inline GetBlockingDetailListResponseBodyDataList& setBatchId(int64_t batchId) { DARABONBA_PTR_SET_VALUE(batchId_, batchId) };


    // clientAppName Field Functions 
    bool hasClientAppName() const { return this->clientAppName_ != nullptr;};
    void deleteClientAppName() { this->clientAppName_ = nullptr;};
    inline string clientAppName() const { DARABONBA_PTR_GET_DEFAULT(clientAppName_, "") };
    inline GetBlockingDetailListResponseBodyDataList& setClientAppName(string clientAppName) { DARABONBA_PTR_SET_VALUE(clientAppName_, clientAppName) };


    // currentCollectionTime Field Functions 
    bool hasCurrentCollectionTime() const { return this->currentCollectionTime_ != nullptr;};
    void deleteCurrentCollectionTime() { this->currentCollectionTime_ = nullptr;};
    inline int64_t currentCollectionTime() const { DARABONBA_PTR_GET_DEFAULT(currentCollectionTime_, 0L) };
    inline GetBlockingDetailListResponseBodyDataList& setCurrentCollectionTime(int64_t currentCollectionTime) { DARABONBA_PTR_SET_VALUE(currentCollectionTime_, currentCollectionTime) };


    // dataBase Field Functions 
    bool hasDataBase() const { return this->dataBase_ != nullptr;};
    void deleteDataBase() { this->dataBase_ = nullptr;};
    inline string dataBase() const { DARABONBA_PTR_GET_DEFAULT(dataBase_, "") };
    inline GetBlockingDetailListResponseBodyDataList& setDataBase(string dataBase) { DARABONBA_PTR_SET_VALUE(dataBase_, dataBase) };


    // hostName Field Functions 
    bool hasHostName() const { return this->hostName_ != nullptr;};
    void deleteHostName() { this->hostName_ = nullptr;};
    inline string hostName() const { DARABONBA_PTR_GET_DEFAULT(hostName_, "") };
    inline GetBlockingDetailListResponseBodyDataList& setHostName(string hostName) { DARABONBA_PTR_SET_VALUE(hostName_, hostName) };


    // loginId Field Functions 
    bool hasLoginId() const { return this->loginId_ != nullptr;};
    void deleteLoginId() { this->loginId_ = nullptr;};
    inline string loginId() const { DARABONBA_PTR_GET_DEFAULT(loginId_, "") };
    inline GetBlockingDetailListResponseBodyDataList& setLoginId(string loginId) { DARABONBA_PTR_SET_VALUE(loginId_, loginId) };


    // queryHash Field Functions 
    bool hasQueryHash() const { return this->queryHash_ != nullptr;};
    void deleteQueryHash() { this->queryHash_ = nullptr;};
    inline string queryHash() const { DARABONBA_PTR_GET_DEFAULT(queryHash_, "") };
    inline GetBlockingDetailListResponseBodyDataList& setQueryHash(string queryHash) { DARABONBA_PTR_SET_VALUE(queryHash_, queryHash) };


    // spid Field Functions 
    bool hasSpid() const { return this->spid_ != nullptr;};
    void deleteSpid() { this->spid_ = nullptr;};
    inline string spid() const { DARABONBA_PTR_GET_DEFAULT(spid_, "") };
    inline GetBlockingDetailListResponseBodyDataList& setSpid(string spid) { DARABONBA_PTR_SET_VALUE(spid_, spid) };


    // sqlText Field Functions 
    bool hasSqlText() const { return this->sqlText_ != nullptr;};
    void deleteSqlText() { this->sqlText_ = nullptr;};
    inline string sqlText() const { DARABONBA_PTR_GET_DEFAULT(sqlText_, "") };
    inline GetBlockingDetailListResponseBodyDataList& setSqlText(string sqlText) { DARABONBA_PTR_SET_VALUE(sqlText_, sqlText) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline GetBlockingDetailListResponseBodyDataList& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // waitTimeMs Field Functions 
    bool hasWaitTimeMs() const { return this->waitTimeMs_ != nullptr;};
    void deleteWaitTimeMs() { this->waitTimeMs_ = nullptr;};
    inline int64_t waitTimeMs() const { DARABONBA_PTR_GET_DEFAULT(waitTimeMs_, 0L) };
    inline GetBlockingDetailListResponseBodyDataList& setWaitTimeMs(int64_t waitTimeMs) { DARABONBA_PTR_SET_VALUE(waitTimeMs_, waitTimeMs) };


    // waitType Field Functions 
    bool hasWaitType() const { return this->waitType_ != nullptr;};
    void deleteWaitType() { this->waitType_ = nullptr;};
    inline string waitType() const { DARABONBA_PTR_GET_DEFAULT(waitType_, "") };
    inline GetBlockingDetailListResponseBodyDataList& setWaitType(string waitType) { DARABONBA_PTR_SET_VALUE(waitType_, waitType) };


  protected:
    // The batch ID.
    std::shared_ptr<int64_t> batchId_ = nullptr;
    // The client name.
    std::shared_ptr<string> clientAppName_ = nullptr;
    // The time when the blocking data was collected. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> currentCollectionTime_ = nullptr;
    // The name of the database.
    std::shared_ptr<string> dataBase_ = nullptr;
    // The client hostname.
    std::shared_ptr<string> hostName_ = nullptr;
    // The username that is used for the logon.
    std::shared_ptr<string> loginId_ = nullptr;
    // The hash value of the SQL statement.
    std::shared_ptr<string> queryHash_ = nullptr;
    // The session ID.
    std::shared_ptr<string> spid_ = nullptr;
    // The SQL statement.
    std::shared_ptr<string> sqlText_ = nullptr;
    // The time when the execution started. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<string> startTime_ = nullptr;
    // The duration of the blocking. Unit: milliseconds.
    std::shared_ptr<int64_t> waitTimeMs_ = nullptr;
    // The wait type. For more information about wait types, see [sys.dm_os_wait_stats (Transact-SQL)](https://learn.microsoft.com/en-us/sql/relational-databases/system-dynamic-management-views/sys-dm-os-wait-stats-transact-sql?view=sql-server-ver15).
    std::shared_ptr<string> waitType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
