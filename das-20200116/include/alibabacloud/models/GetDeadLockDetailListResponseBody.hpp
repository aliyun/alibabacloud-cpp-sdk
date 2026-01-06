// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDEADLOCKDETAILLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDEADLOCKDETAILLISTRESPONSEBODY_HPP_
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
  class GetDeadLockDetailListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDeadLockDetailListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetDeadLockDetailListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetDeadLockDetailListResponseBody() = default ;
    GetDeadLockDetailListResponseBody(const GetDeadLockDetailListResponseBody &) = default ;
    GetDeadLockDetailListResponseBody(GetDeadLockDetailListResponseBody &&) = default ;
    GetDeadLockDetailListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDeadLockDetailListResponseBody() = default ;
    GetDeadLockDetailListResponseBody& operator=(const GetDeadLockDetailListResponseBody &) = default ;
    GetDeadLockDetailListResponseBody& operator=(GetDeadLockDetailListResponseBody &&) = default ;
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
        friend void from_json(const Darabonba::Json& j, List& obj) { 
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
        class BlockProcessList : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const BlockProcessList& obj) { 
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
          friend void from_json(const Darabonba::Json& j, BlockProcessList& obj) { 
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
          BlockProcessList() = default ;
          BlockProcessList(const BlockProcessList &) = default ;
          BlockProcessList(BlockProcessList &&) = default ;
          BlockProcessList(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~BlockProcessList() = default ;
          BlockProcessList& operator=(const BlockProcessList &) = default ;
          BlockProcessList& operator=(BlockProcessList &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->clientApp_ == nullptr
        && this->databaseName_ == nullptr && this->hostName_ == nullptr && this->lastTranStarted_ == nullptr && this->lockMode_ == nullptr && this->logUsed_ == nullptr
        && this->loginName_ == nullptr && this->objectOwned_ == nullptr && this->objectRequested_ == nullptr && this->ownMode_ == nullptr && this->spid_ == nullptr
        && this->sqlText_ == nullptr && this->status_ == nullptr && this->victim_ == nullptr && this->waitMode_ == nullptr && this->waitResource_ == nullptr
        && this->waitResourceDescription_ == nullptr; };
          // clientApp Field Functions 
          bool hasClientApp() const { return this->clientApp_ != nullptr;};
          void deleteClientApp() { this->clientApp_ = nullptr;};
          inline string getClientApp() const { DARABONBA_PTR_GET_DEFAULT(clientApp_, "") };
          inline BlockProcessList& setClientApp(string clientApp) { DARABONBA_PTR_SET_VALUE(clientApp_, clientApp) };


          // databaseName Field Functions 
          bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
          void deleteDatabaseName() { this->databaseName_ = nullptr;};
          inline string getDatabaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
          inline BlockProcessList& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


          // hostName Field Functions 
          bool hasHostName() const { return this->hostName_ != nullptr;};
          void deleteHostName() { this->hostName_ = nullptr;};
          inline string getHostName() const { DARABONBA_PTR_GET_DEFAULT(hostName_, "") };
          inline BlockProcessList& setHostName(string hostName) { DARABONBA_PTR_SET_VALUE(hostName_, hostName) };


          // lastTranStarted Field Functions 
          bool hasLastTranStarted() const { return this->lastTranStarted_ != nullptr;};
          void deleteLastTranStarted() { this->lastTranStarted_ = nullptr;};
          inline int64_t getLastTranStarted() const { DARABONBA_PTR_GET_DEFAULT(lastTranStarted_, 0L) };
          inline BlockProcessList& setLastTranStarted(int64_t lastTranStarted) { DARABONBA_PTR_SET_VALUE(lastTranStarted_, lastTranStarted) };


          // lockMode Field Functions 
          bool hasLockMode() const { return this->lockMode_ != nullptr;};
          void deleteLockMode() { this->lockMode_ = nullptr;};
          inline string getLockMode() const { DARABONBA_PTR_GET_DEFAULT(lockMode_, "") };
          inline BlockProcessList& setLockMode(string lockMode) { DARABONBA_PTR_SET_VALUE(lockMode_, lockMode) };


          // logUsed Field Functions 
          bool hasLogUsed() const { return this->logUsed_ != nullptr;};
          void deleteLogUsed() { this->logUsed_ = nullptr;};
          inline int64_t getLogUsed() const { DARABONBA_PTR_GET_DEFAULT(logUsed_, 0L) };
          inline BlockProcessList& setLogUsed(int64_t logUsed) { DARABONBA_PTR_SET_VALUE(logUsed_, logUsed) };


          // loginName Field Functions 
          bool hasLoginName() const { return this->loginName_ != nullptr;};
          void deleteLoginName() { this->loginName_ = nullptr;};
          inline string getLoginName() const { DARABONBA_PTR_GET_DEFAULT(loginName_, "") };
          inline BlockProcessList& setLoginName(string loginName) { DARABONBA_PTR_SET_VALUE(loginName_, loginName) };


          // objectOwned Field Functions 
          bool hasObjectOwned() const { return this->objectOwned_ != nullptr;};
          void deleteObjectOwned() { this->objectOwned_ = nullptr;};
          inline string getObjectOwned() const { DARABONBA_PTR_GET_DEFAULT(objectOwned_, "") };
          inline BlockProcessList& setObjectOwned(string objectOwned) { DARABONBA_PTR_SET_VALUE(objectOwned_, objectOwned) };


          // objectRequested Field Functions 
          bool hasObjectRequested() const { return this->objectRequested_ != nullptr;};
          void deleteObjectRequested() { this->objectRequested_ = nullptr;};
          inline string getObjectRequested() const { DARABONBA_PTR_GET_DEFAULT(objectRequested_, "") };
          inline BlockProcessList& setObjectRequested(string objectRequested) { DARABONBA_PTR_SET_VALUE(objectRequested_, objectRequested) };


          // ownMode Field Functions 
          bool hasOwnMode() const { return this->ownMode_ != nullptr;};
          void deleteOwnMode() { this->ownMode_ = nullptr;};
          inline string getOwnMode() const { DARABONBA_PTR_GET_DEFAULT(ownMode_, "") };
          inline BlockProcessList& setOwnMode(string ownMode) { DARABONBA_PTR_SET_VALUE(ownMode_, ownMode) };


          // spid Field Functions 
          bool hasSpid() const { return this->spid_ != nullptr;};
          void deleteSpid() { this->spid_ = nullptr;};
          inline int64_t getSpid() const { DARABONBA_PTR_GET_DEFAULT(spid_, 0L) };
          inline BlockProcessList& setSpid(int64_t spid) { DARABONBA_PTR_SET_VALUE(spid_, spid) };


          // sqlText Field Functions 
          bool hasSqlText() const { return this->sqlText_ != nullptr;};
          void deleteSqlText() { this->sqlText_ = nullptr;};
          inline string getSqlText() const { DARABONBA_PTR_GET_DEFAULT(sqlText_, "") };
          inline BlockProcessList& setSqlText(string sqlText) { DARABONBA_PTR_SET_VALUE(sqlText_, sqlText) };


          // status Field Functions 
          bool hasStatus() const { return this->status_ != nullptr;};
          void deleteStatus() { this->status_ = nullptr;};
          inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
          inline BlockProcessList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


          // victim Field Functions 
          bool hasVictim() const { return this->victim_ != nullptr;};
          void deleteVictim() { this->victim_ = nullptr;};
          inline int64_t getVictim() const { DARABONBA_PTR_GET_DEFAULT(victim_, 0L) };
          inline BlockProcessList& setVictim(int64_t victim) { DARABONBA_PTR_SET_VALUE(victim_, victim) };


          // waitMode Field Functions 
          bool hasWaitMode() const { return this->waitMode_ != nullptr;};
          void deleteWaitMode() { this->waitMode_ = nullptr;};
          inline string getWaitMode() const { DARABONBA_PTR_GET_DEFAULT(waitMode_, "") };
          inline BlockProcessList& setWaitMode(string waitMode) { DARABONBA_PTR_SET_VALUE(waitMode_, waitMode) };


          // waitResource Field Functions 
          bool hasWaitResource() const { return this->waitResource_ != nullptr;};
          void deleteWaitResource() { this->waitResource_ = nullptr;};
          inline string getWaitResource() const { DARABONBA_PTR_GET_DEFAULT(waitResource_, "") };
          inline BlockProcessList& setWaitResource(string waitResource) { DARABONBA_PTR_SET_VALUE(waitResource_, waitResource) };


          // waitResourceDescription Field Functions 
          bool hasWaitResourceDescription() const { return this->waitResourceDescription_ != nullptr;};
          void deleteWaitResourceDescription() { this->waitResourceDescription_ = nullptr;};
          inline string getWaitResourceDescription() const { DARABONBA_PTR_GET_DEFAULT(waitResourceDescription_, "") };
          inline BlockProcessList& setWaitResourceDescription(string waitResourceDescription) { DARABONBA_PTR_SET_VALUE(waitResourceDescription_, waitResourceDescription) };


        protected:
          // The name of the client that initiates the transaction in the session.
          shared_ptr<string> clientApp_ {};
          // The name of the database.
          shared_ptr<string> databaseName_ {};
          // The hostname.
          shared_ptr<string> hostName_ {};
          // The time when the transaction was started. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
          shared_ptr<int64_t> lastTranStarted_ {};
          // The mode of the lock. For more information, see [Lock modes](https://help.aliyun.com/document_detail/2362804.html).
          shared_ptr<string> lockMode_ {};
          // The size of the logs generated in the session. Unit: bytes.
          shared_ptr<int64_t> logUsed_ {};
          // The logon name of the user.
          shared_ptr<string> loginName_ {};
          // The locked object.
          shared_ptr<string> objectOwned_ {};
          // The object that the transaction requested to lock.
          shared_ptr<string> objectRequested_ {};
          // The lock mode held by the session. For more information, see [Lock modes](https://help.aliyun.com/document_detail/2362804.html).
          shared_ptr<string> ownMode_ {};
          // The ID of the session in which the transaction is started.
          shared_ptr<int64_t> spid_ {};
          // The SQL statement.
          shared_ptr<string> sqlText_ {};
          // The status of the transaction.
          shared_ptr<string> status_ {};
          // Indicates whether the session is the victim of the deadlock. Valid values:
          // 
          // *   **0**: no.
          // *   **1**: yes.
          shared_ptr<int64_t> victim_ {};
          // The lock mode requested by the session. For more information, see [Lock modes](https://help.aliyun.com/document_detail/2362804.html).
          shared_ptr<string> waitMode_ {};
          // The resources requested by the transaction.
          shared_ptr<string> waitResource_ {};
          // The details of the resources requested by the transaction.
          shared_ptr<string> waitResourceDescription_ {};
        };

        virtual bool empty() const override { return this->batchId_ == nullptr
        && this->blockProcessList_ == nullptr && this->clientApp_ == nullptr && this->databaseName_ == nullptr && this->hostName_ == nullptr && this->lastTranStarted_ == nullptr
        && this->lockMode_ == nullptr && this->logUsed_ == nullptr && this->loginName_ == nullptr && this->objectOwned_ == nullptr && this->objectRequested_ == nullptr
        && this->ownMode_ == nullptr && this->spid_ == nullptr && this->sqlText_ == nullptr && this->status_ == nullptr && this->victim_ == nullptr
        && this->waitMode_ == nullptr && this->waitResource_ == nullptr && this->waitResourceDescription_ == nullptr; };
        // batchId Field Functions 
        bool hasBatchId() const { return this->batchId_ != nullptr;};
        void deleteBatchId() { this->batchId_ = nullptr;};
        inline int64_t getBatchId() const { DARABONBA_PTR_GET_DEFAULT(batchId_, 0L) };
        inline List& setBatchId(int64_t batchId) { DARABONBA_PTR_SET_VALUE(batchId_, batchId) };


        // blockProcessList Field Functions 
        bool hasBlockProcessList() const { return this->blockProcessList_ != nullptr;};
        void deleteBlockProcessList() { this->blockProcessList_ = nullptr;};
        inline const vector<List::BlockProcessList> & getBlockProcessList() const { DARABONBA_PTR_GET_CONST(blockProcessList_, vector<List::BlockProcessList>) };
        inline vector<List::BlockProcessList> getBlockProcessList() { DARABONBA_PTR_GET(blockProcessList_, vector<List::BlockProcessList>) };
        inline List& setBlockProcessList(const vector<List::BlockProcessList> & blockProcessList) { DARABONBA_PTR_SET_VALUE(blockProcessList_, blockProcessList) };
        inline List& setBlockProcessList(vector<List::BlockProcessList> && blockProcessList) { DARABONBA_PTR_SET_RVALUE(blockProcessList_, blockProcessList) };


        // clientApp Field Functions 
        bool hasClientApp() const { return this->clientApp_ != nullptr;};
        void deleteClientApp() { this->clientApp_ = nullptr;};
        inline string getClientApp() const { DARABONBA_PTR_GET_DEFAULT(clientApp_, "") };
        inline List& setClientApp(string clientApp) { DARABONBA_PTR_SET_VALUE(clientApp_, clientApp) };


        // databaseName Field Functions 
        bool hasDatabaseName() const { return this->databaseName_ != nullptr;};
        void deleteDatabaseName() { this->databaseName_ = nullptr;};
        inline string getDatabaseName() const { DARABONBA_PTR_GET_DEFAULT(databaseName_, "") };
        inline List& setDatabaseName(string databaseName) { DARABONBA_PTR_SET_VALUE(databaseName_, databaseName) };


        // hostName Field Functions 
        bool hasHostName() const { return this->hostName_ != nullptr;};
        void deleteHostName() { this->hostName_ = nullptr;};
        inline string getHostName() const { DARABONBA_PTR_GET_DEFAULT(hostName_, "") };
        inline List& setHostName(string hostName) { DARABONBA_PTR_SET_VALUE(hostName_, hostName) };


        // lastTranStarted Field Functions 
        bool hasLastTranStarted() const { return this->lastTranStarted_ != nullptr;};
        void deleteLastTranStarted() { this->lastTranStarted_ = nullptr;};
        inline int64_t getLastTranStarted() const { DARABONBA_PTR_GET_DEFAULT(lastTranStarted_, 0L) };
        inline List& setLastTranStarted(int64_t lastTranStarted) { DARABONBA_PTR_SET_VALUE(lastTranStarted_, lastTranStarted) };


        // lockMode Field Functions 
        bool hasLockMode() const { return this->lockMode_ != nullptr;};
        void deleteLockMode() { this->lockMode_ = nullptr;};
        inline string getLockMode() const { DARABONBA_PTR_GET_DEFAULT(lockMode_, "") };
        inline List& setLockMode(string lockMode) { DARABONBA_PTR_SET_VALUE(lockMode_, lockMode) };


        // logUsed Field Functions 
        bool hasLogUsed() const { return this->logUsed_ != nullptr;};
        void deleteLogUsed() { this->logUsed_ = nullptr;};
        inline int64_t getLogUsed() const { DARABONBA_PTR_GET_DEFAULT(logUsed_, 0L) };
        inline List& setLogUsed(int64_t logUsed) { DARABONBA_PTR_SET_VALUE(logUsed_, logUsed) };


        // loginName Field Functions 
        bool hasLoginName() const { return this->loginName_ != nullptr;};
        void deleteLoginName() { this->loginName_ = nullptr;};
        inline string getLoginName() const { DARABONBA_PTR_GET_DEFAULT(loginName_, "") };
        inline List& setLoginName(string loginName) { DARABONBA_PTR_SET_VALUE(loginName_, loginName) };


        // objectOwned Field Functions 
        bool hasObjectOwned() const { return this->objectOwned_ != nullptr;};
        void deleteObjectOwned() { this->objectOwned_ = nullptr;};
        inline string getObjectOwned() const { DARABONBA_PTR_GET_DEFAULT(objectOwned_, "") };
        inline List& setObjectOwned(string objectOwned) { DARABONBA_PTR_SET_VALUE(objectOwned_, objectOwned) };


        // objectRequested Field Functions 
        bool hasObjectRequested() const { return this->objectRequested_ != nullptr;};
        void deleteObjectRequested() { this->objectRequested_ = nullptr;};
        inline string getObjectRequested() const { DARABONBA_PTR_GET_DEFAULT(objectRequested_, "") };
        inline List& setObjectRequested(string objectRequested) { DARABONBA_PTR_SET_VALUE(objectRequested_, objectRequested) };


        // ownMode Field Functions 
        bool hasOwnMode() const { return this->ownMode_ != nullptr;};
        void deleteOwnMode() { this->ownMode_ = nullptr;};
        inline string getOwnMode() const { DARABONBA_PTR_GET_DEFAULT(ownMode_, "") };
        inline List& setOwnMode(string ownMode) { DARABONBA_PTR_SET_VALUE(ownMode_, ownMode) };


        // spid Field Functions 
        bool hasSpid() const { return this->spid_ != nullptr;};
        void deleteSpid() { this->spid_ = nullptr;};
        inline int64_t getSpid() const { DARABONBA_PTR_GET_DEFAULT(spid_, 0L) };
        inline List& setSpid(int64_t spid) { DARABONBA_PTR_SET_VALUE(spid_, spid) };


        // sqlText Field Functions 
        bool hasSqlText() const { return this->sqlText_ != nullptr;};
        void deleteSqlText() { this->sqlText_ = nullptr;};
        inline string getSqlText() const { DARABONBA_PTR_GET_DEFAULT(sqlText_, "") };
        inline List& setSqlText(string sqlText) { DARABONBA_PTR_SET_VALUE(sqlText_, sqlText) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline List& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // victim Field Functions 
        bool hasVictim() const { return this->victim_ != nullptr;};
        void deleteVictim() { this->victim_ = nullptr;};
        inline int64_t getVictim() const { DARABONBA_PTR_GET_DEFAULT(victim_, 0L) };
        inline List& setVictim(int64_t victim) { DARABONBA_PTR_SET_VALUE(victim_, victim) };


        // waitMode Field Functions 
        bool hasWaitMode() const { return this->waitMode_ != nullptr;};
        void deleteWaitMode() { this->waitMode_ = nullptr;};
        inline string getWaitMode() const { DARABONBA_PTR_GET_DEFAULT(waitMode_, "") };
        inline List& setWaitMode(string waitMode) { DARABONBA_PTR_SET_VALUE(waitMode_, waitMode) };


        // waitResource Field Functions 
        bool hasWaitResource() const { return this->waitResource_ != nullptr;};
        void deleteWaitResource() { this->waitResource_ = nullptr;};
        inline string getWaitResource() const { DARABONBA_PTR_GET_DEFAULT(waitResource_, "") };
        inline List& setWaitResource(string waitResource) { DARABONBA_PTR_SET_VALUE(waitResource_, waitResource) };


        // waitResourceDescription Field Functions 
        bool hasWaitResourceDescription() const { return this->waitResourceDescription_ != nullptr;};
        void deleteWaitResourceDescription() { this->waitResourceDescription_ = nullptr;};
        inline string getWaitResourceDescription() const { DARABONBA_PTR_GET_DEFAULT(waitResourceDescription_, "") };
        inline List& setWaitResourceDescription(string waitResourceDescription) { DARABONBA_PTR_SET_VALUE(waitResourceDescription_, waitResourceDescription) };


      protected:
        // The time when the data was collected. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
        shared_ptr<int64_t> batchId_ {};
        // The blocking details of the instance. The details are information about the session that caused the lock.
        shared_ptr<vector<List::BlockProcessList>> blockProcessList_ {};
        // The name of the client.
        shared_ptr<string> clientApp_ {};
        // The name of the database.
        shared_ptr<string> databaseName_ {};
        // The hostname.
        shared_ptr<string> hostName_ {};
        // The time when the transaction was started. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
        shared_ptr<int64_t> lastTranStarted_ {};
        // The mode of the lock. For more information, see [Lock modes](https://help.aliyun.com/document_detail/2362804.html).
        shared_ptr<string> lockMode_ {};
        // The size of the logs generated in the session. Unit: bytes.
        shared_ptr<int64_t> logUsed_ {};
        // The logon name of the user.
        shared_ptr<string> loginName_ {};
        // The locked object.
        shared_ptr<string> objectOwned_ {};
        // The object that the transaction requested to lock.
        shared_ptr<string> objectRequested_ {};
        // The lock mode held by the session. For more information, see [Lock modes](https://help.aliyun.com/document_detail/2362804.html).
        shared_ptr<string> ownMode_ {};
        // The ID of the session in which the transaction is started.
        shared_ptr<int64_t> spid_ {};
        // The SQL statement.
        shared_ptr<string> sqlText_ {};
        // The status of the transaction.
        shared_ptr<string> status_ {};
        // Indicates whether the session is the victim of the deadlock. Valid values:
        // 
        // *   **0**: no.
        // *   **1**: yes.
        shared_ptr<int64_t> victim_ {};
        // The lock mode requested by the session. For more information, see [Lock modes](https://help.aliyun.com/document_detail/2362804.html).
        shared_ptr<string> waitMode_ {};
        // The resources requested by the transaction.
        shared_ptr<string> waitResource_ {};
        // The details of the resources requested by the transaction.
        shared_ptr<string> waitResourceDescription_ {};
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
      // The total number of entries returned.
      shared_ptr<int64_t> total_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetDeadLockDetailListResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetDeadLockDetailListResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetDeadLockDetailListResponseBody::Data) };
    inline GetDeadLockDetailListResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetDeadLockDetailListResponseBody::Data) };
    inline GetDeadLockDetailListResponseBody& setData(const GetDeadLockDetailListResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetDeadLockDetailListResponseBody& setData(GetDeadLockDetailListResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetDeadLockDetailListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDeadLockDetailListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline GetDeadLockDetailListResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code returned.
    shared_ptr<string> code_ {};
    // The data returned.
    shared_ptr<GetDeadLockDetailListResponseBody::Data> data_ {};
    // The returned message.
    // 
    // >  If the request is successful, **Successful** is returned. Otherwise, an error message such as an error code is returned.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<string> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
