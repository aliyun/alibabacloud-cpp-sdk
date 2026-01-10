// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECUTESCRIPTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_EXECUTESCRIPTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ExecuteScriptResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecuteScriptResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Results, results_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ExecuteScriptResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Results, results_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ExecuteScriptResponseBody() = default ;
    ExecuteScriptResponseBody(const ExecuteScriptResponseBody &) = default ;
    ExecuteScriptResponseBody(ExecuteScriptResponseBody &&) = default ;
    ExecuteScriptResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecuteScriptResponseBody() = default ;
    ExecuteScriptResponseBody& operator=(const ExecuteScriptResponseBody &) = default ;
    ExecuteScriptResponseBody& operator=(ExecuteScriptResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Results : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Results& obj) { 
        DARABONBA_PTR_TO_JSON(ColumnNames, columnNames_);
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(RowCount, rowCount_);
        DARABONBA_PTR_TO_JSON(Rows, rows_);
        DARABONBA_PTR_TO_JSON(Success, success_);
      };
      friend void from_json(const Darabonba::Json& j, Results& obj) { 
        DARABONBA_PTR_FROM_JSON(ColumnNames, columnNames_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(RowCount, rowCount_);
        DARABONBA_PTR_FROM_JSON(Rows, rows_);
        DARABONBA_PTR_FROM_JSON(Success, success_);
      };
      Results() = default ;
      Results(const Results &) = default ;
      Results(Results &&) = default ;
      Results(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Results() = default ;
      Results& operator=(const Results &) = default ;
      Results& operator=(Results &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->columnNames_ == nullptr
        && this->message_ == nullptr && this->rowCount_ == nullptr && this->rows_ == nullptr && this->success_ == nullptr; };
      // columnNames Field Functions 
      bool hasColumnNames() const { return this->columnNames_ != nullptr;};
      void deleteColumnNames() { this->columnNames_ = nullptr;};
      inline const vector<string> & getColumnNames() const { DARABONBA_PTR_GET_CONST(columnNames_, vector<string>) };
      inline vector<string> getColumnNames() { DARABONBA_PTR_GET(columnNames_, vector<string>) };
      inline Results& setColumnNames(const vector<string> & columnNames) { DARABONBA_PTR_SET_VALUE(columnNames_, columnNames) };
      inline Results& setColumnNames(vector<string> && columnNames) { DARABONBA_PTR_SET_RVALUE(columnNames_, columnNames) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline Results& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // rowCount Field Functions 
      bool hasRowCount() const { return this->rowCount_ != nullptr;};
      void deleteRowCount() { this->rowCount_ = nullptr;};
      inline int64_t getRowCount() const { DARABONBA_PTR_GET_DEFAULT(rowCount_, 0L) };
      inline Results& setRowCount(int64_t rowCount) { DARABONBA_PTR_SET_VALUE(rowCount_, rowCount) };


      // rows Field Functions 
      bool hasRows() const { return this->rows_ != nullptr;};
      void deleteRows() { this->rows_ = nullptr;};
      inline const vector<Darabonba::Json> & getRows() const { DARABONBA_PTR_GET_CONST(rows_, vector<Darabonba::Json>) };
      inline vector<Darabonba::Json> getRows() { DARABONBA_PTR_GET(rows_, vector<Darabonba::Json>) };
      inline Results& setRows(const vector<Darabonba::Json> & rows) { DARABONBA_PTR_SET_VALUE(rows_, rows) };
      inline Results& setRows(vector<Darabonba::Json> && rows) { DARABONBA_PTR_SET_RVALUE(rows_, rows) };


      // success Field Functions 
      bool hasSuccess() const { return this->success_ != nullptr;};
      void deleteSuccess() { this->success_ = nullptr;};
      inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
      inline Results& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    protected:
      // The fields that are queried after the SQL statement is executed.
      shared_ptr<vector<string>> columnNames_ {};
      // The error message that is returned if the SQL statement fails to be executed. For example, an error message is returned because the SQL statement is invalid.
      shared_ptr<string> message_ {};
      // The total number of entries that are returned.
      shared_ptr<int64_t> rowCount_ {};
      // The rows that are queried after the SQL statement is executed.
      shared_ptr<vector<Darabonba::Json>> rows_ {};
      // Indicates whether the SQL statement is executed.
      shared_ptr<bool> success_ {};
    };

    virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->results_ == nullptr && this->success_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ExecuteScriptResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ExecuteScriptResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ExecuteScriptResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // results Field Functions 
    bool hasResults() const { return this->results_ != nullptr;};
    void deleteResults() { this->results_ = nullptr;};
    inline const vector<ExecuteScriptResponseBody::Results> & getResults() const { DARABONBA_PTR_GET_CONST(results_, vector<ExecuteScriptResponseBody::Results>) };
    inline vector<ExecuteScriptResponseBody::Results> getResults() { DARABONBA_PTR_GET(results_, vector<ExecuteScriptResponseBody::Results>) };
    inline ExecuteScriptResponseBody& setResults(const vector<ExecuteScriptResponseBody::Results> & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
    inline ExecuteScriptResponseBody& setResults(vector<ExecuteScriptResponseBody::Results> && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ExecuteScriptResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code.
    shared_ptr<string> errorCode_ {};
    // The error message about the gateway.
    shared_ptr<string> errorMessage_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The results of the SQL statements that are executed, in the format of an array. Each entry in the array indicates the result of an SQL statement.
    shared_ptr<vector<ExecuteScriptResponseBody::Results>> results_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
