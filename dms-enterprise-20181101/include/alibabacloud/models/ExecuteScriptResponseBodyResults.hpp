// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECUTESCRIPTRESPONSEBODYRESULTS_HPP_
#define ALIBABACLOUD_MODELS_EXECUTESCRIPTRESPONSEBODYRESULTS_HPP_
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
  class ExecuteScriptResponseBodyResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecuteScriptResponseBodyResults& obj) { 
      DARABONBA_PTR_TO_JSON(ColumnNames, columnNames_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RowCount, rowCount_);
      DARABONBA_PTR_TO_JSON(Rows, rows_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ExecuteScriptResponseBodyResults& obj) { 
      DARABONBA_PTR_FROM_JSON(ColumnNames, columnNames_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RowCount, rowCount_);
      DARABONBA_PTR_FROM_JSON(Rows, rows_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ExecuteScriptResponseBodyResults() = default ;
    ExecuteScriptResponseBodyResults(const ExecuteScriptResponseBodyResults &) = default ;
    ExecuteScriptResponseBodyResults(ExecuteScriptResponseBodyResults &&) = default ;
    ExecuteScriptResponseBodyResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecuteScriptResponseBodyResults() = default ;
    ExecuteScriptResponseBodyResults& operator=(const ExecuteScriptResponseBodyResults &) = default ;
    ExecuteScriptResponseBodyResults& operator=(ExecuteScriptResponseBodyResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->columnNames_ != nullptr
        && this->message_ != nullptr && this->rowCount_ != nullptr && this->rows_ != nullptr && this->success_ != nullptr; };
    // columnNames Field Functions 
    bool hasColumnNames() const { return this->columnNames_ != nullptr;};
    void deleteColumnNames() { this->columnNames_ = nullptr;};
    inline const vector<string> & columnNames() const { DARABONBA_PTR_GET_CONST(columnNames_, vector<string>) };
    inline vector<string> columnNames() { DARABONBA_PTR_GET(columnNames_, vector<string>) };
    inline ExecuteScriptResponseBodyResults& setColumnNames(const vector<string> & columnNames) { DARABONBA_PTR_SET_VALUE(columnNames_, columnNames) };
    inline ExecuteScriptResponseBodyResults& setColumnNames(vector<string> && columnNames) { DARABONBA_PTR_SET_RVALUE(columnNames_, columnNames) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ExecuteScriptResponseBodyResults& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // rowCount Field Functions 
    bool hasRowCount() const { return this->rowCount_ != nullptr;};
    void deleteRowCount() { this->rowCount_ = nullptr;};
    inline int64_t rowCount() const { DARABONBA_PTR_GET_DEFAULT(rowCount_, 0L) };
    inline ExecuteScriptResponseBodyResults& setRowCount(int64_t rowCount) { DARABONBA_PTR_SET_VALUE(rowCount_, rowCount) };


    // rows Field Functions 
    bool hasRows() const { return this->rows_ != nullptr;};
    void deleteRows() { this->rows_ = nullptr;};
    inline const vector<Darabonba::Json> & rows() const { DARABONBA_PTR_GET_CONST(rows_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> rows() { DARABONBA_PTR_GET(rows_, vector<Darabonba::Json>) };
    inline ExecuteScriptResponseBodyResults& setRows(const vector<Darabonba::Json> & rows) { DARABONBA_PTR_SET_VALUE(rows_, rows) };
    inline ExecuteScriptResponseBodyResults& setRows(vector<Darabonba::Json> && rows) { DARABONBA_PTR_SET_RVALUE(rows_, rows) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ExecuteScriptResponseBodyResults& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The fields that are queried after the SQL statement is executed.
    std::shared_ptr<vector<string>> columnNames_ = nullptr;
    // The error message that is returned if the SQL statement fails to be executed. For example, an error message is returned because the SQL statement is invalid.
    std::shared_ptr<string> message_ = nullptr;
    // The total number of entries that are returned.
    std::shared_ptr<int64_t> rowCount_ = nullptr;
    // The rows that are queried after the SQL statement is executed.
    std::shared_ptr<vector<Darabonba::Json>> rows_ = nullptr;
    // Indicates whether the SQL statement is executed.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
