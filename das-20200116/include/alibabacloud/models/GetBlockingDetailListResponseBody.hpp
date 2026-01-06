// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBLOCKINGDETAILLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETBLOCKINGDETAILLISTRESPONSEBODY_HPP_
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
  class GetBlockingDetailListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBlockingDetailListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetBlockingDetailListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetBlockingDetailListResponseBody() = default ;
    GetBlockingDetailListResponseBody(const GetBlockingDetailListResponseBody &) = default ;
    GetBlockingDetailListResponseBody(GetBlockingDetailListResponseBody &&) = default ;
    GetBlockingDetailListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBlockingDetailListResponseBody() = default ;
    GetBlockingDetailListResponseBody& operator=(const GetBlockingDetailListResponseBody &) = default ;
    GetBlockingDetailListResponseBody& operator=(GetBlockingDetailListResponseBody &&) = default ;
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
        friend void from_json(const Darabonba::Json& j, List& obj) { 
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
        virtual bool empty() const override { return this->batchId_ == nullptr
        && this->clientAppName_ == nullptr && this->currentCollectionTime_ == nullptr && this->dataBase_ == nullptr && this->hostName_ == nullptr && this->loginId_ == nullptr
        && this->queryHash_ == nullptr && this->spid_ == nullptr && this->sqlText_ == nullptr && this->startTime_ == nullptr && this->waitTimeMs_ == nullptr
        && this->waitType_ == nullptr; };
        // batchId Field Functions 
        bool hasBatchId() const { return this->batchId_ != nullptr;};
        void deleteBatchId() { this->batchId_ = nullptr;};
        inline int64_t getBatchId() const { DARABONBA_PTR_GET_DEFAULT(batchId_, 0L) };
        inline List& setBatchId(int64_t batchId) { DARABONBA_PTR_SET_VALUE(batchId_, batchId) };


        // clientAppName Field Functions 
        bool hasClientAppName() const { return this->clientAppName_ != nullptr;};
        void deleteClientAppName() { this->clientAppName_ = nullptr;};
        inline string getClientAppName() const { DARABONBA_PTR_GET_DEFAULT(clientAppName_, "") };
        inline List& setClientAppName(string clientAppName) { DARABONBA_PTR_SET_VALUE(clientAppName_, clientAppName) };


        // currentCollectionTime Field Functions 
        bool hasCurrentCollectionTime() const { return this->currentCollectionTime_ != nullptr;};
        void deleteCurrentCollectionTime() { this->currentCollectionTime_ = nullptr;};
        inline int64_t getCurrentCollectionTime() const { DARABONBA_PTR_GET_DEFAULT(currentCollectionTime_, 0L) };
        inline List& setCurrentCollectionTime(int64_t currentCollectionTime) { DARABONBA_PTR_SET_VALUE(currentCollectionTime_, currentCollectionTime) };


        // dataBase Field Functions 
        bool hasDataBase() const { return this->dataBase_ != nullptr;};
        void deleteDataBase() { this->dataBase_ = nullptr;};
        inline string getDataBase() const { DARABONBA_PTR_GET_DEFAULT(dataBase_, "") };
        inline List& setDataBase(string dataBase) { DARABONBA_PTR_SET_VALUE(dataBase_, dataBase) };


        // hostName Field Functions 
        bool hasHostName() const { return this->hostName_ != nullptr;};
        void deleteHostName() { this->hostName_ = nullptr;};
        inline string getHostName() const { DARABONBA_PTR_GET_DEFAULT(hostName_, "") };
        inline List& setHostName(string hostName) { DARABONBA_PTR_SET_VALUE(hostName_, hostName) };


        // loginId Field Functions 
        bool hasLoginId() const { return this->loginId_ != nullptr;};
        void deleteLoginId() { this->loginId_ = nullptr;};
        inline string getLoginId() const { DARABONBA_PTR_GET_DEFAULT(loginId_, "") };
        inline List& setLoginId(string loginId) { DARABONBA_PTR_SET_VALUE(loginId_, loginId) };


        // queryHash Field Functions 
        bool hasQueryHash() const { return this->queryHash_ != nullptr;};
        void deleteQueryHash() { this->queryHash_ = nullptr;};
        inline string getQueryHash() const { DARABONBA_PTR_GET_DEFAULT(queryHash_, "") };
        inline List& setQueryHash(string queryHash) { DARABONBA_PTR_SET_VALUE(queryHash_, queryHash) };


        // spid Field Functions 
        bool hasSpid() const { return this->spid_ != nullptr;};
        void deleteSpid() { this->spid_ = nullptr;};
        inline string getSpid() const { DARABONBA_PTR_GET_DEFAULT(spid_, "") };
        inline List& setSpid(string spid) { DARABONBA_PTR_SET_VALUE(spid_, spid) };


        // sqlText Field Functions 
        bool hasSqlText() const { return this->sqlText_ != nullptr;};
        void deleteSqlText() { this->sqlText_ = nullptr;};
        inline string getSqlText() const { DARABONBA_PTR_GET_DEFAULT(sqlText_, "") };
        inline List& setSqlText(string sqlText) { DARABONBA_PTR_SET_VALUE(sqlText_, sqlText) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
        inline List& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


        // waitTimeMs Field Functions 
        bool hasWaitTimeMs() const { return this->waitTimeMs_ != nullptr;};
        void deleteWaitTimeMs() { this->waitTimeMs_ = nullptr;};
        inline int64_t getWaitTimeMs() const { DARABONBA_PTR_GET_DEFAULT(waitTimeMs_, 0L) };
        inline List& setWaitTimeMs(int64_t waitTimeMs) { DARABONBA_PTR_SET_VALUE(waitTimeMs_, waitTimeMs) };


        // waitType Field Functions 
        bool hasWaitType() const { return this->waitType_ != nullptr;};
        void deleteWaitType() { this->waitType_ = nullptr;};
        inline string getWaitType() const { DARABONBA_PTR_GET_DEFAULT(waitType_, "") };
        inline List& setWaitType(string waitType) { DARABONBA_PTR_SET_VALUE(waitType_, waitType) };


      protected:
        // The batch ID.
        shared_ptr<int64_t> batchId_ {};
        // The client name.
        shared_ptr<string> clientAppName_ {};
        // The time when the blocking data was collected. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
        shared_ptr<int64_t> currentCollectionTime_ {};
        // The name of the database.
        shared_ptr<string> dataBase_ {};
        // The client hostname.
        shared_ptr<string> hostName_ {};
        // The username that is used for the logon.
        shared_ptr<string> loginId_ {};
        // The hash value of the SQL statement.
        shared_ptr<string> queryHash_ {};
        // The session ID.
        shared_ptr<string> spid_ {};
        // The SQL statement.
        shared_ptr<string> sqlText_ {};
        // The time when the execution started. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
        shared_ptr<string> startTime_ {};
        // The duration of the blocking. Unit: milliseconds.
        shared_ptr<int64_t> waitTimeMs_ {};
        // The wait type. For more information about wait types, see [sys.dm_os_wait_stats (Transact-SQL)](https://learn.microsoft.com/en-us/sql/relational-databases/system-dynamic-management-views/sys-dm-os-wait-stats-transact-sql?view=sql-server-ver15).
        shared_ptr<string> waitType_ {};
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
      // The page number of the page returned.
      shared_ptr<int64_t> pageNo_ {};
      // The number of entries returned on each page.
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
    inline GetBlockingDetailListResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetBlockingDetailListResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetBlockingDetailListResponseBody::Data) };
    inline GetBlockingDetailListResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetBlockingDetailListResponseBody::Data) };
    inline GetBlockingDetailListResponseBody& setData(const GetBlockingDetailListResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetBlockingDetailListResponseBody& setData(GetBlockingDetailListResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetBlockingDetailListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetBlockingDetailListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline GetBlockingDetailListResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code returned.
    shared_ptr<string> code_ {};
    // The returned data.
    shared_ptr<GetBlockingDetailListResponseBody::Data> data_ {};
    // The returned message.
    // 
    // >  If the request is successful, **Successful** is returned. Otherwise, an error message such as an error code is returned.
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
