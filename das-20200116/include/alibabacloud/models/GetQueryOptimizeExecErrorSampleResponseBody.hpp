// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETQUERYOPTIMIZEEXECERRORSAMPLERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETQUERYOPTIMIZEEXECERRORSAMPLERESPONSEBODY_HPP_
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
  class GetQueryOptimizeExecErrorSampleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetQueryOptimizeExecErrorSampleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetQueryOptimizeExecErrorSampleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetQueryOptimizeExecErrorSampleResponseBody() = default ;
    GetQueryOptimizeExecErrorSampleResponseBody(const GetQueryOptimizeExecErrorSampleResponseBody &) = default ;
    GetQueryOptimizeExecErrorSampleResponseBody(GetQueryOptimizeExecErrorSampleResponseBody &&) = default ;
    GetQueryOptimizeExecErrorSampleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetQueryOptimizeExecErrorSampleResponseBody() = default ;
    GetQueryOptimizeExecErrorSampleResponseBody& operator=(const GetQueryOptimizeExecErrorSampleResponseBody &) = default ;
    GetQueryOptimizeExecErrorSampleResponseBody& operator=(GetQueryOptimizeExecErrorSampleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Extra, extra_);
        DARABONBA_PTR_TO_JSON(List, list_);
        DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(Total, total_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Extra, extra_);
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
          DARABONBA_PTR_TO_JSON(Dbname, dbname_);
          DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
          DARABONBA_PTR_TO_JSON(OrigHost, origHost_);
          DARABONBA_PTR_TO_JSON(SqlId, sqlId_);
          DARABONBA_PTR_TO_JSON(SqlText, sqlText_);
          DARABONBA_PTR_TO_JSON(Timestamp, timestamp_);
          DARABONBA_PTR_TO_JSON(User, user_);
        };
        friend void from_json(const Darabonba::Json& j, List& obj) { 
          DARABONBA_PTR_FROM_JSON(Dbname, dbname_);
          DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
          DARABONBA_PTR_FROM_JSON(OrigHost, origHost_);
          DARABONBA_PTR_FROM_JSON(SqlId, sqlId_);
          DARABONBA_PTR_FROM_JSON(SqlText, sqlText_);
          DARABONBA_PTR_FROM_JSON(Timestamp, timestamp_);
          DARABONBA_PTR_FROM_JSON(User, user_);
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
        virtual bool empty() const override { return this->dbname_ == nullptr
        && this->errorCode_ == nullptr && this->origHost_ == nullptr && this->sqlId_ == nullptr && this->sqlText_ == nullptr && this->timestamp_ == nullptr
        && this->user_ == nullptr; };
        // dbname Field Functions 
        bool hasDbname() const { return this->dbname_ != nullptr;};
        void deleteDbname() { this->dbname_ = nullptr;};
        inline string getDbname() const { DARABONBA_PTR_GET_DEFAULT(dbname_, "") };
        inline List& setDbname(string dbname) { DARABONBA_PTR_SET_VALUE(dbname_, dbname) };


        // errorCode Field Functions 
        bool hasErrorCode() const { return this->errorCode_ != nullptr;};
        void deleteErrorCode() { this->errorCode_ = nullptr;};
        inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
        inline List& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


        // origHost Field Functions 
        bool hasOrigHost() const { return this->origHost_ != nullptr;};
        void deleteOrigHost() { this->origHost_ = nullptr;};
        inline string getOrigHost() const { DARABONBA_PTR_GET_DEFAULT(origHost_, "") };
        inline List& setOrigHost(string origHost) { DARABONBA_PTR_SET_VALUE(origHost_, origHost) };


        // sqlId Field Functions 
        bool hasSqlId() const { return this->sqlId_ != nullptr;};
        void deleteSqlId() { this->sqlId_ = nullptr;};
        inline string getSqlId() const { DARABONBA_PTR_GET_DEFAULT(sqlId_, "") };
        inline List& setSqlId(string sqlId) { DARABONBA_PTR_SET_VALUE(sqlId_, sqlId) };


        // sqlText Field Functions 
        bool hasSqlText() const { return this->sqlText_ != nullptr;};
        void deleteSqlText() { this->sqlText_ = nullptr;};
        inline string getSqlText() const { DARABONBA_PTR_GET_DEFAULT(sqlText_, "") };
        inline List& setSqlText(string sqlText) { DARABONBA_PTR_SET_VALUE(sqlText_, sqlText) };


        // timestamp Field Functions 
        bool hasTimestamp() const { return this->timestamp_ != nullptr;};
        void deleteTimestamp() { this->timestamp_ = nullptr;};
        inline int64_t getTimestamp() const { DARABONBA_PTR_GET_DEFAULT(timestamp_, 0L) };
        inline List& setTimestamp(int64_t timestamp) { DARABONBA_PTR_SET_VALUE(timestamp_, timestamp) };


        // user Field Functions 
        bool hasUser() const { return this->user_ != nullptr;};
        void deleteUser() { this->user_ = nullptr;};
        inline string getUser() const { DARABONBA_PTR_GET_DEFAULT(user_, "") };
        inline List& setUser(string user) { DARABONBA_PTR_SET_VALUE(user_, user) };


      protected:
        // The name of the database.
        shared_ptr<string> dbname_ {};
        // The error code returned.
        shared_ptr<string> errorCode_ {};
        // The IP address of the client that executes the SQL statement.
        shared_ptr<string> origHost_ {};
        // The SQL template ID.
        shared_ptr<string> sqlId_ {};
        // The content of the SQL statement that failed to be executed.
        shared_ptr<string> sqlText_ {};
        // The point in time when the failed SQL statement was executed. The value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
        shared_ptr<int64_t> timestamp_ {};
        // The username of the client that executes the SQL statement.
        shared_ptr<string> user_ {};
      };

      virtual bool empty() const override { return this->extra_ == nullptr
        && this->list_ == nullptr && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->total_ == nullptr; };
      // extra Field Functions 
      bool hasExtra() const { return this->extra_ != nullptr;};
      void deleteExtra() { this->extra_ = nullptr;};
      inline string getExtra() const { DARABONBA_PTR_GET_DEFAULT(extra_, "") };
      inline Data& setExtra(string extra) { DARABONBA_PTR_SET_VALUE(extra_, extra) };


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
      inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
      inline Data& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline Data& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
      inline Data& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      // A reserved parameter.
      shared_ptr<string> extra_ {};
      // The queried data.
      shared_ptr<vector<Data::List>> list_ {};
      // A reserved parameter.
      shared_ptr<int32_t> pageNo_ {};
      // A reserved parameter.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int64_t> total_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetQueryOptimizeExecErrorSampleResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetQueryOptimizeExecErrorSampleResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetQueryOptimizeExecErrorSampleResponseBody::Data) };
    inline GetQueryOptimizeExecErrorSampleResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetQueryOptimizeExecErrorSampleResponseBody::Data) };
    inline GetQueryOptimizeExecErrorSampleResponseBody& setData(const GetQueryOptimizeExecErrorSampleResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetQueryOptimizeExecErrorSampleResponseBody& setData(GetQueryOptimizeExecErrorSampleResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetQueryOptimizeExecErrorSampleResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetQueryOptimizeExecErrorSampleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline GetQueryOptimizeExecErrorSampleResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code returned.
    shared_ptr<string> code_ {};
    // The detailed information.
    shared_ptr<GetQueryOptimizeExecErrorSampleResponseBody::Data> data_ {};
    // The returned message.
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
