// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHCREATETABLESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BATCHCREATETABLESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/TableError.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class BatchCreateTablesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchCreateTablesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TableErrors, tableErrors_);
    };
    friend void from_json(const Darabonba::Json& j, BatchCreateTablesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TableErrors, tableErrors_);
    };
    BatchCreateTablesResponseBody() = default ;
    BatchCreateTablesResponseBody(const BatchCreateTablesResponseBody &) = default ;
    BatchCreateTablesResponseBody(BatchCreateTablesResponseBody &&) = default ;
    BatchCreateTablesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchCreateTablesResponseBody() = default ;
    BatchCreateTablesResponseBody& operator=(const BatchCreateTablesResponseBody &) = default ;
    BatchCreateTablesResponseBody& operator=(BatchCreateTablesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->message_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr && return this->tableErrors_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline BatchCreateTablesResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline BatchCreateTablesResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BatchCreateTablesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline BatchCreateTablesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // tableErrors Field Functions 
    bool hasTableErrors() const { return this->tableErrors_ != nullptr;};
    void deleteTableErrors() { this->tableErrors_ = nullptr;};
    inline const vector<TableError> & tableErrors() const { DARABONBA_PTR_GET_CONST(tableErrors_, vector<TableError>) };
    inline vector<TableError> tableErrors() { DARABONBA_PTR_GET(tableErrors_, vector<TableError>) };
    inline BatchCreateTablesResponseBody& setTableErrors(const vector<TableError> & tableErrors) { DARABONBA_PTR_SET_VALUE(tableErrors_, tableErrors) };
    inline BatchCreateTablesResponseBody& setTableErrors(vector<TableError> && tableErrors) { DARABONBA_PTR_SET_RVALUE(tableErrors_, tableErrors) };


  protected:
    // The response code.
    std::shared_ptr<string> code_ = nullptr;
    // The response message.
    std::shared_ptr<string> message_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> success_ = nullptr;
    // The list of errors occurred when you created the data table.
    std::shared_ptr<vector<TableError>> tableErrors_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
