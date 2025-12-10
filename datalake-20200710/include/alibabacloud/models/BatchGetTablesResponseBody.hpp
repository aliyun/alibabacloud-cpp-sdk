// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHGETTABLESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BATCHGETTABLESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/TableError.hpp>
#include <alibabacloud/models/Table.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class BatchGetTablesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchGetTablesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TableErrors, tableErrors_);
      DARABONBA_PTR_TO_JSON(Tables, tables_);
    };
    friend void from_json(const Darabonba::Json& j, BatchGetTablesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TableErrors, tableErrors_);
      DARABONBA_PTR_FROM_JSON(Tables, tables_);
    };
    BatchGetTablesResponseBody() = default ;
    BatchGetTablesResponseBody(const BatchGetTablesResponseBody &) = default ;
    BatchGetTablesResponseBody(BatchGetTablesResponseBody &&) = default ;
    BatchGetTablesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchGetTablesResponseBody() = default ;
    BatchGetTablesResponseBody& operator=(const BatchGetTablesResponseBody &) = default ;
    BatchGetTablesResponseBody& operator=(BatchGetTablesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->message_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr && return this->tableErrors_ == nullptr && return this->tables_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline BatchGetTablesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline BatchGetTablesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BatchGetTablesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline BatchGetTablesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // tableErrors Field Functions 
    bool hasTableErrors() const { return this->tableErrors_ != nullptr;};
    void deleteTableErrors() { this->tableErrors_ = nullptr;};
    inline const vector<TableError> & tableErrors() const { DARABONBA_PTR_GET_CONST(tableErrors_, vector<TableError>) };
    inline vector<TableError> tableErrors() { DARABONBA_PTR_GET(tableErrors_, vector<TableError>) };
    inline BatchGetTablesResponseBody& setTableErrors(const vector<TableError> & tableErrors) { DARABONBA_PTR_SET_VALUE(tableErrors_, tableErrors) };
    inline BatchGetTablesResponseBody& setTableErrors(vector<TableError> && tableErrors) { DARABONBA_PTR_SET_RVALUE(tableErrors_, tableErrors) };


    // tables Field Functions 
    bool hasTables() const { return this->tables_ != nullptr;};
    void deleteTables() { this->tables_ = nullptr;};
    inline const vector<Table> & tables() const { DARABONBA_PTR_GET_CONST(tables_, vector<Table>) };
    inline vector<Table> tables() { DARABONBA_PTR_GET(tables_, vector<Table>) };
    inline BatchGetTablesResponseBody& setTables(const vector<Table> & tables) { DARABONBA_PTR_SET_VALUE(tables_, tables) };
    inline BatchGetTablesResponseBody& setTables(vector<Table> && tables) { DARABONBA_PTR_SET_RVALUE(tables_, tables) };


  protected:
    // The response code.
    std::shared_ptr<string> code_ = nullptr;
    // The response message.
    std::shared_ptr<string> message_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request is successful. Valid values: true and false
    std::shared_ptr<bool> success_ = nullptr;
    // The returned errors.
    std::shared_ptr<vector<TableError>> tableErrors_ = nullptr;
    // The returned data tables.
    std::shared_ptr<vector<Table>> tables_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
