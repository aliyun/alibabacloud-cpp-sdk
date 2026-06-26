// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STATEMENTRESULT_HPP_
#define ALIBABACLOUD_MODELS_STATEMENTRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DlfNext20250310
{
namespace Models
{
  class StatementResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StatementResult& obj) { 
      DARABONBA_PTR_TO_JSON(downloadUrl, downloadUrl_);
      DARABONBA_PTR_TO_JSON(error, error_);
      DARABONBA_PTR_TO_JSON(errorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(executionTime, executionTime_);
      DARABONBA_PTR_TO_JSON(index, index_);
      DARABONBA_PTR_TO_JSON(rowCount, rowCount_);
      DARABONBA_PTR_TO_JSON(schema, schema_);
      DARABONBA_PTR_TO_JSON(sql, sql_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, StatementResult& obj) { 
      DARABONBA_PTR_FROM_JSON(downloadUrl, downloadUrl_);
      DARABONBA_PTR_FROM_JSON(error, error_);
      DARABONBA_PTR_FROM_JSON(errorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(executionTime, executionTime_);
      DARABONBA_PTR_FROM_JSON(index, index_);
      DARABONBA_PTR_FROM_JSON(rowCount, rowCount_);
      DARABONBA_PTR_FROM_JSON(schema, schema_);
      DARABONBA_PTR_FROM_JSON(sql, sql_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    StatementResult() = default ;
    StatementResult(const StatementResult &) = default ;
    StatementResult(StatementResult &&) = default ;
    StatementResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StatementResult() = default ;
    StatementResult& operator=(const StatementResult &) = default ;
    StatementResult& operator=(StatementResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Schema : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Schema& obj) { 
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Schema& obj) { 
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(type, type_);
      };
      Schema() = default ;
      Schema(const Schema &) = default ;
      Schema(Schema &&) = default ;
      Schema(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Schema() = default ;
      Schema& operator=(const Schema &) = default ;
      Schema& operator=(Schema &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->name_ == nullptr
        && this->type_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Schema& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Schema& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The name of the column.
      shared_ptr<string> name_ {};
      // The data type of the column.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->downloadUrl_ == nullptr
        && this->error_ == nullptr && this->errorCode_ == nullptr && this->executionTime_ == nullptr && this->index_ == nullptr && this->rowCount_ == nullptr
        && this->schema_ == nullptr && this->sql_ == nullptr && this->status_ == nullptr; };
    // downloadUrl Field Functions 
    bool hasDownloadUrl() const { return this->downloadUrl_ != nullptr;};
    void deleteDownloadUrl() { this->downloadUrl_ = nullptr;};
    inline string getDownloadUrl() const { DARABONBA_PTR_GET_DEFAULT(downloadUrl_, "") };
    inline StatementResult& setDownloadUrl(string downloadUrl) { DARABONBA_PTR_SET_VALUE(downloadUrl_, downloadUrl) };


    // error Field Functions 
    bool hasError() const { return this->error_ != nullptr;};
    void deleteError() { this->error_ = nullptr;};
    inline string getError() const { DARABONBA_PTR_GET_DEFAULT(error_, "") };
    inline StatementResult& setError(string error) { DARABONBA_PTR_SET_VALUE(error_, error) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline StatementResult& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // executionTime Field Functions 
    bool hasExecutionTime() const { return this->executionTime_ != nullptr;};
    void deleteExecutionTime() { this->executionTime_ = nullptr;};
    inline int64_t getExecutionTime() const { DARABONBA_PTR_GET_DEFAULT(executionTime_, 0L) };
    inline StatementResult& setExecutionTime(int64_t executionTime) { DARABONBA_PTR_SET_VALUE(executionTime_, executionTime) };


    // index Field Functions 
    bool hasIndex() const { return this->index_ != nullptr;};
    void deleteIndex() { this->index_ = nullptr;};
    inline int32_t getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, 0) };
    inline StatementResult& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


    // rowCount Field Functions 
    bool hasRowCount() const { return this->rowCount_ != nullptr;};
    void deleteRowCount() { this->rowCount_ = nullptr;};
    inline int32_t getRowCount() const { DARABONBA_PTR_GET_DEFAULT(rowCount_, 0) };
    inline StatementResult& setRowCount(int32_t rowCount) { DARABONBA_PTR_SET_VALUE(rowCount_, rowCount) };


    // schema Field Functions 
    bool hasSchema() const { return this->schema_ != nullptr;};
    void deleteSchema() { this->schema_ = nullptr;};
    inline const vector<StatementResult::Schema> & getSchema() const { DARABONBA_PTR_GET_CONST(schema_, vector<StatementResult::Schema>) };
    inline vector<StatementResult::Schema> getSchema() { DARABONBA_PTR_GET(schema_, vector<StatementResult::Schema>) };
    inline StatementResult& setSchema(const vector<StatementResult::Schema> & schema) { DARABONBA_PTR_SET_VALUE(schema_, schema) };
    inline StatementResult& setSchema(vector<StatementResult::Schema> && schema) { DARABONBA_PTR_SET_RVALUE(schema_, schema) };


    // sql Field Functions 
    bool hasSql() const { return this->sql_ != nullptr;};
    void deleteSql() { this->sql_ = nullptr;};
    inline string getSql() const { DARABONBA_PTR_GET_DEFAULT(sql_, "") };
    inline StatementResult& setSql(string sql) { DARABONBA_PTR_SET_VALUE(sql_, sql) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline StatementResult& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // A temporary URL to download the result set, provided only when the result set is too large to return directly.
    shared_ptr<string> downloadUrl_ {};
    // The error message, present only if the execution fails.
    shared_ptr<string> error_ {};
    // The error code, present only if the execution fails.
    shared_ptr<string> errorCode_ {};
    // The statement\\"s total execution time, in milliseconds.
    shared_ptr<int64_t> executionTime_ {};
    // The zero-based index of the SQL statement in a batch execution.
    shared_ptr<int32_t> index_ {};
    // The number of rows affected or returned by the statement.
    shared_ptr<int32_t> rowCount_ {};
    // An array of objects describing the result set\\"s schema. Each object defines a column.
    shared_ptr<vector<StatementResult::Schema>> schema_ {};
    // The original SQL statement.
    shared_ptr<string> sql_ {};
    // The statement\\"s execution status. Possible values are `RUNNING`, `FINISHED`, `CANCELED`, or `FAILED`.
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DlfNext20250310
#endif
