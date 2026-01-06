// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETQUERYOPTIMIZEEXECERRORSTATSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETQUERYOPTIMIZEEXECERRORSTATSRESPONSEBODY_HPP_
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
  class GetQueryOptimizeExecErrorStatsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetQueryOptimizeExecErrorStatsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetQueryOptimizeExecErrorStatsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetQueryOptimizeExecErrorStatsResponseBody() = default ;
    GetQueryOptimizeExecErrorStatsResponseBody(const GetQueryOptimizeExecErrorStatsResponseBody &) = default ;
    GetQueryOptimizeExecErrorStatsResponseBody(GetQueryOptimizeExecErrorStatsResponseBody &&) = default ;
    GetQueryOptimizeExecErrorStatsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetQueryOptimizeExecErrorStatsResponseBody() = default ;
    GetQueryOptimizeExecErrorStatsResponseBody& operator=(const GetQueryOptimizeExecErrorStatsResponseBody &) = default ;
    GetQueryOptimizeExecErrorStatsResponseBody& operator=(GetQueryOptimizeExecErrorStatsResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(ErrorCount, errorCount_);
          DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
          DARABONBA_PTR_TO_JSON(SqlId, sqlId_);
          DARABONBA_PTR_TO_JSON(SqlText, sqlText_);
        };
        friend void from_json(const Darabonba::Json& j, List& obj) { 
          DARABONBA_PTR_FROM_JSON(Dbname, dbname_);
          DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
          DARABONBA_PTR_FROM_JSON(ErrorCount, errorCount_);
          DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
          DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
          DARABONBA_PTR_FROM_JSON(SqlId, sqlId_);
          DARABONBA_PTR_FROM_JSON(SqlText, sqlText_);
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
        && this->errorCode_ == nullptr && this->errorCount_ == nullptr && this->instanceId_ == nullptr && this->instanceName_ == nullptr && this->sqlId_ == nullptr
        && this->sqlText_ == nullptr; };
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


        // errorCount Field Functions 
        bool hasErrorCount() const { return this->errorCount_ != nullptr;};
        void deleteErrorCount() { this->errorCount_ = nullptr;};
        inline int64_t getErrorCount() const { DARABONBA_PTR_GET_DEFAULT(errorCount_, 0L) };
        inline List& setErrorCount(int64_t errorCount) { DARABONBA_PTR_SET_VALUE(errorCount_, errorCount) };


        // instanceId Field Functions 
        bool hasInstanceId() const { return this->instanceId_ != nullptr;};
        void deleteInstanceId() { this->instanceId_ = nullptr;};
        inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
        inline List& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


        // instanceName Field Functions 
        bool hasInstanceName() const { return this->instanceName_ != nullptr;};
        void deleteInstanceName() { this->instanceName_ = nullptr;};
        inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
        inline List& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


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


      protected:
        // The name of the database.
        shared_ptr<string> dbname_ {};
        // The error code returned if the request failed.
        shared_ptr<string> errorCode_ {};
        // The number of errors.
        shared_ptr<int64_t> errorCount_ {};
        // The instance ID.
        shared_ptr<string> instanceId_ {};
        // The alias of the database instance.
        shared_ptr<string> instanceName_ {};
        // The SQL template ID.
        shared_ptr<string> sqlId_ {};
        // The content of the SQL template.
        shared_ptr<string> sqlText_ {};
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
      // The reserved parameter.
      shared_ptr<string> extra_ {};
      // The information about the SQL templates that failed to execute.
      shared_ptr<vector<Data::List>> list_ {};
      // The page number.
      shared_ptr<int32_t> pageNo_ {};
      // The number of entries per page.
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
    inline GetQueryOptimizeExecErrorStatsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetQueryOptimizeExecErrorStatsResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetQueryOptimizeExecErrorStatsResponseBody::Data) };
    inline GetQueryOptimizeExecErrorStatsResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetQueryOptimizeExecErrorStatsResponseBody::Data) };
    inline GetQueryOptimizeExecErrorStatsResponseBody& setData(const GetQueryOptimizeExecErrorStatsResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetQueryOptimizeExecErrorStatsResponseBody& setData(GetQueryOptimizeExecErrorStatsResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetQueryOptimizeExecErrorStatsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetQueryOptimizeExecErrorStatsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline string getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, "") };
    inline GetQueryOptimizeExecErrorStatsResponseBody& setSuccess(string success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code returned.
    shared_ptr<string> code_ {};
    // The detailed information, including the error codes and the number of entries that are returned.
    shared_ptr<GetQueryOptimizeExecErrorStatsResponseBody::Data> data_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**: The request was successful.
    // *   **false**: The request failed.
    shared_ptr<string> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
