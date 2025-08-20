// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTABLERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTABLERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/TableModel.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class GetTableResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTableResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(Table, table_);
    };
    friend void from_json(const Darabonba::Json& j, GetTableResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(Table, table_);
    };
    GetTableResponseBody() = default ;
    GetTableResponseBody(const GetTableResponseBody &) = default ;
    GetTableResponseBody(GetTableResponseBody &&) = default ;
    GetTableResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTableResponseBody() = default ;
    GetTableResponseBody& operator=(const GetTableResponseBody &) = default ;
    GetTableResponseBody& operator=(GetTableResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->message_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr && this->table_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int64_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0L) };
    inline GetTableResponseBody& setCode(int64_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetTableResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTableResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetTableResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // table Field Functions 
    bool hasTable() const { return this->table_ != nullptr;};
    void deleteTable() { this->table_ = nullptr;};
    inline const TableModel & table() const { DARABONBA_PTR_GET_CONST(table_, TableModel) };
    inline TableModel table() { DARABONBA_PTR_GET(table_, TableModel) };
    inline GetTableResponseBody& setTable(const TableModel & table) { DARABONBA_PTR_SET_VALUE(table_, table) };
    inline GetTableResponseBody& setTable(TableModel && table) { DARABONBA_PTR_SET_RVALUE(table_, table) };


  protected:
    // The error code returned.
    std::shared_ptr<int64_t> code_ = nullptr;
    // The error message returned.
    std::shared_ptr<string> message_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the query succeeded.
    std::shared_ptr<bool> success_ = nullptr;
    // The information about the table.
    std::shared_ptr<TableModel> table_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
