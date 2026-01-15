// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDASSQLLOGHOTDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDASSQLLOGHOTDATARESPONSEBODY_HPP_
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
  class GetDasSQLLogHotDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDasSQLLogHotDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetDasSQLLogHotDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetDasSQLLogHotDataResponseBody() = default ;
    GetDasSQLLogHotDataResponseBody(const GetDasSQLLogHotDataResponseBody &) = default ;
    GetDasSQLLogHotDataResponseBody(GetDasSQLLogHotDataResponseBody &&) = default ;
    GetDasSQLLogHotDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDasSQLLogHotDataResponseBody() = default ;
    GetDasSQLLogHotDataResponseBody& operator=(const GetDasSQLLogHotDataResponseBody &) = default ;
    GetDasSQLLogHotDataResponseBody& operator=(GetDasSQLLogHotDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_ANY_TO_JSON(Extra, extra_);
        DARABONBA_PTR_TO_JSON(List, list_);
        DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_ANY_FROM_JSON(Extra, extra_);
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
        friend void from_json(const Darabonba::Json& j, List& obj) { 
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
        virtual bool empty() const override { return this->accountName_ == nullptr
        && this->DBName_ == nullptr && this->executeTime_ == nullptr && this->ext_ == nullptr && this->hostAddress_ == nullptr && this->latancy_ == nullptr
        && this->lockTime_ == nullptr && this->logicRead_ == nullptr && this->nodeId_ == nullptr && this->originTime_ == nullptr && this->physicAsyncRead_ == nullptr
        && this->physicSyncRead_ == nullptr && this->returnRows_ == nullptr && this->SQLText_ == nullptr && this->scanRows_ == nullptr && this->sqlType_ == nullptr
        && this->state_ == nullptr && this->threadID_ == nullptr && this->transactionId_ == nullptr && this->updateRows_ == nullptr; };
        // accountName Field Functions 
        bool hasAccountName() const { return this->accountName_ != nullptr;};
        void deleteAccountName() { this->accountName_ = nullptr;};
        inline string getAccountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
        inline List& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


        // DBName Field Functions 
        bool hasDBName() const { return this->DBName_ != nullptr;};
        void deleteDBName() { this->DBName_ = nullptr;};
        inline string getDBName() const { DARABONBA_PTR_GET_DEFAULT(DBName_, "") };
        inline List& setDBName(string DBName) { DARABONBA_PTR_SET_VALUE(DBName_, DBName) };


        // executeTime Field Functions 
        bool hasExecuteTime() const { return this->executeTime_ != nullptr;};
        void deleteExecuteTime() { this->executeTime_ = nullptr;};
        inline string getExecuteTime() const { DARABONBA_PTR_GET_DEFAULT(executeTime_, "") };
        inline List& setExecuteTime(string executeTime) { DARABONBA_PTR_SET_VALUE(executeTime_, executeTime) };


        // ext Field Functions 
        bool hasExt() const { return this->ext_ != nullptr;};
        void deleteExt() { this->ext_ = nullptr;};
        inline string getExt() const { DARABONBA_PTR_GET_DEFAULT(ext_, "") };
        inline List& setExt(string ext) { DARABONBA_PTR_SET_VALUE(ext_, ext) };


        // hostAddress Field Functions 
        bool hasHostAddress() const { return this->hostAddress_ != nullptr;};
        void deleteHostAddress() { this->hostAddress_ = nullptr;};
        inline string getHostAddress() const { DARABONBA_PTR_GET_DEFAULT(hostAddress_, "") };
        inline List& setHostAddress(string hostAddress) { DARABONBA_PTR_SET_VALUE(hostAddress_, hostAddress) };


        // latancy Field Functions 
        bool hasLatancy() const { return this->latancy_ != nullptr;};
        void deleteLatancy() { this->latancy_ = nullptr;};
        inline int64_t getLatancy() const { DARABONBA_PTR_GET_DEFAULT(latancy_, 0L) };
        inline List& setLatancy(int64_t latancy) { DARABONBA_PTR_SET_VALUE(latancy_, latancy) };


        // lockTime Field Functions 
        bool hasLockTime() const { return this->lockTime_ != nullptr;};
        void deleteLockTime() { this->lockTime_ = nullptr;};
        inline int64_t getLockTime() const { DARABONBA_PTR_GET_DEFAULT(lockTime_, 0L) };
        inline List& setLockTime(int64_t lockTime) { DARABONBA_PTR_SET_VALUE(lockTime_, lockTime) };


        // logicRead Field Functions 
        bool hasLogicRead() const { return this->logicRead_ != nullptr;};
        void deleteLogicRead() { this->logicRead_ = nullptr;};
        inline int64_t getLogicRead() const { DARABONBA_PTR_GET_DEFAULT(logicRead_, 0L) };
        inline List& setLogicRead(int64_t logicRead) { DARABONBA_PTR_SET_VALUE(logicRead_, logicRead) };


        // nodeId Field Functions 
        bool hasNodeId() const { return this->nodeId_ != nullptr;};
        void deleteNodeId() { this->nodeId_ = nullptr;};
        inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
        inline List& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


        // originTime Field Functions 
        bool hasOriginTime() const { return this->originTime_ != nullptr;};
        void deleteOriginTime() { this->originTime_ = nullptr;};
        inline string getOriginTime() const { DARABONBA_PTR_GET_DEFAULT(originTime_, "") };
        inline List& setOriginTime(string originTime) { DARABONBA_PTR_SET_VALUE(originTime_, originTime) };


        // physicAsyncRead Field Functions 
        bool hasPhysicAsyncRead() const { return this->physicAsyncRead_ != nullptr;};
        void deletePhysicAsyncRead() { this->physicAsyncRead_ = nullptr;};
        inline int64_t getPhysicAsyncRead() const { DARABONBA_PTR_GET_DEFAULT(physicAsyncRead_, 0L) };
        inline List& setPhysicAsyncRead(int64_t physicAsyncRead) { DARABONBA_PTR_SET_VALUE(physicAsyncRead_, physicAsyncRead) };


        // physicSyncRead Field Functions 
        bool hasPhysicSyncRead() const { return this->physicSyncRead_ != nullptr;};
        void deletePhysicSyncRead() { this->physicSyncRead_ = nullptr;};
        inline int64_t getPhysicSyncRead() const { DARABONBA_PTR_GET_DEFAULT(physicSyncRead_, 0L) };
        inline List& setPhysicSyncRead(int64_t physicSyncRead) { DARABONBA_PTR_SET_VALUE(physicSyncRead_, physicSyncRead) };


        // returnRows Field Functions 
        bool hasReturnRows() const { return this->returnRows_ != nullptr;};
        void deleteReturnRows() { this->returnRows_ = nullptr;};
        inline int64_t getReturnRows() const { DARABONBA_PTR_GET_DEFAULT(returnRows_, 0L) };
        inline List& setReturnRows(int64_t returnRows) { DARABONBA_PTR_SET_VALUE(returnRows_, returnRows) };


        // SQLText Field Functions 
        bool hasSQLText() const { return this->SQLText_ != nullptr;};
        void deleteSQLText() { this->SQLText_ = nullptr;};
        inline string getSQLText() const { DARABONBA_PTR_GET_DEFAULT(SQLText_, "") };
        inline List& setSQLText(string SQLText) { DARABONBA_PTR_SET_VALUE(SQLText_, SQLText) };


        // scanRows Field Functions 
        bool hasScanRows() const { return this->scanRows_ != nullptr;};
        void deleteScanRows() { this->scanRows_ = nullptr;};
        inline int64_t getScanRows() const { DARABONBA_PTR_GET_DEFAULT(scanRows_, 0L) };
        inline List& setScanRows(int64_t scanRows) { DARABONBA_PTR_SET_VALUE(scanRows_, scanRows) };


        // sqlType Field Functions 
        bool hasSqlType() const { return this->sqlType_ != nullptr;};
        void deleteSqlType() { this->sqlType_ = nullptr;};
        inline string getSqlType() const { DARABONBA_PTR_GET_DEFAULT(sqlType_, "") };
        inline List& setSqlType(string sqlType) { DARABONBA_PTR_SET_VALUE(sqlType_, sqlType) };


        // state Field Functions 
        bool hasState() const { return this->state_ != nullptr;};
        void deleteState() { this->state_ = nullptr;};
        inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
        inline List& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


        // threadID Field Functions 
        bool hasThreadID() const { return this->threadID_ != nullptr;};
        void deleteThreadID() { this->threadID_ = nullptr;};
        inline int64_t getThreadID() const { DARABONBA_PTR_GET_DEFAULT(threadID_, 0L) };
        inline List& setThreadID(int64_t threadID) { DARABONBA_PTR_SET_VALUE(threadID_, threadID) };


        // transactionId Field Functions 
        bool hasTransactionId() const { return this->transactionId_ != nullptr;};
        void deleteTransactionId() { this->transactionId_ = nullptr;};
        inline string getTransactionId() const { DARABONBA_PTR_GET_DEFAULT(transactionId_, "") };
        inline List& setTransactionId(string transactionId) { DARABONBA_PTR_SET_VALUE(transactionId_, transactionId) };


        // updateRows Field Functions 
        bool hasUpdateRows() const { return this->updateRows_ != nullptr;};
        void deleteUpdateRows() { this->updateRows_ = nullptr;};
        inline int64_t getUpdateRows() const { DARABONBA_PTR_GET_DEFAULT(updateRows_, 0L) };
        inline List& setUpdateRows(int64_t updateRows) { DARABONBA_PTR_SET_VALUE(updateRows_, updateRows) };


      protected:
        // The account of the database.
        shared_ptr<string> accountName_ {};
        // The name of the database.
        shared_ptr<string> DBName_ {};
        // The execution time. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
        shared_ptr<string> executeTime_ {};
        // The extended information. This parameter is a reserved parameter.
        shared_ptr<string> ext_ {};
        // The IP address of the client.
        shared_ptr<string> hostAddress_ {};
        // The execution duration. Unit: microseconds.
        shared_ptr<int64_t> latancy_ {};
        // The lock wait duration. Unit: microseconds.
        shared_ptr<int64_t> lockTime_ {};
        // The number of logical reads.
        shared_ptr<int64_t> logicRead_ {};
        shared_ptr<string> nodeId_ {};
        // The execution time. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
        shared_ptr<string> originTime_ {};
        // The number of physical asynchronous reads.
        shared_ptr<int64_t> physicAsyncRead_ {};
        // The number of physical synchronous reads.
        shared_ptr<int64_t> physicSyncRead_ {};
        // The number of rows returned.
        shared_ptr<int64_t> returnRows_ {};
        // The content of the SQL statement.
        shared_ptr<string> SQLText_ {};
        // The number of rows scanned by the SQL statement.
        shared_ptr<int64_t> scanRows_ {};
        // The type of the SQL statement. Valid values:
        // 
        // * **SELECT**
        // * **UPDATE**
        // * **DELETE**
        shared_ptr<string> sqlType_ {};
        // The execution result. If a **0** is returned, the SQL statement was successfully executed. If an error code is returned, the SQL statement failed to be executed.
        shared_ptr<string> state_ {};
        // The thread ID.
        shared_ptr<int64_t> threadID_ {};
        // The transaction ID.
        shared_ptr<string> transactionId_ {};
        // The number of updated rows.
        shared_ptr<int64_t> updateRows_ {};
      };

      virtual bool empty() const override { return this->extra_ == nullptr
        && this->list_ == nullptr && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->total_ == nullptr; };
      // extra Field Functions 
      bool hasExtra() const { return this->extra_ != nullptr;};
      void deleteExtra() { this->extra_ = nullptr;};
      inline       const Darabonba::Json & getExtra() const { DARABONBA_GET(extra_) };
      Darabonba::Json & getExtra() { DARABONBA_GET(extra_) };
      inline Data& setExtra(const Darabonba::Json & extra) { DARABONBA_SET_VALUE(extra_, extra) };
      inline Data& setExtra(Darabonba::Json && extra) { DARABONBA_SET_RVALUE(extra_, extra) };


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
      // The reserved parameter.
      Darabonba::Json extra_ {};
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
    inline GetDasSQLLogHotDataResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetDasSQLLogHotDataResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetDasSQLLogHotDataResponseBody::Data) };
    inline GetDasSQLLogHotDataResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetDasSQLLogHotDataResponseBody::Data) };
    inline GetDasSQLLogHotDataResponseBody& setData(const GetDasSQLLogHotDataResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetDasSQLLogHotDataResponseBody& setData(GetDasSQLLogHotDataResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetDasSQLLogHotDataResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDasSQLLogHotDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline GetDasSQLLogHotDataResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code returned.
    shared_ptr<string> code_ {};
    // The data returned.
    shared_ptr<GetDasSQLLogHotDataResponseBody::Data> data_ {};
    // The returned message.
    // 
    // > If the request was successful, **Successful** is returned. If the request failed, an error message such as an error code is returned.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<string> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
