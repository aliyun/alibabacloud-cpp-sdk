// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTABLEVERSIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTABLEVERSIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/TableVersion.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class GetTableVersionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTableVersionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TableVersion, tableVersion_);
    };
    friend void from_json(const Darabonba::Json& j, GetTableVersionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TableVersion, tableVersion_);
    };
    GetTableVersionResponseBody() = default ;
    GetTableVersionResponseBody(const GetTableVersionResponseBody &) = default ;
    GetTableVersionResponseBody(GetTableVersionResponseBody &&) = default ;
    GetTableVersionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTableVersionResponseBody() = default ;
    GetTableVersionResponseBody& operator=(const GetTableVersionResponseBody &) = default ;
    GetTableVersionResponseBody& operator=(GetTableVersionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->message_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr && return this->tableVersion_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetTableVersionResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetTableVersionResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTableVersionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetTableVersionResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // tableVersion Field Functions 
    bool hasTableVersion() const { return this->tableVersion_ != nullptr;};
    void deleteTableVersion() { this->tableVersion_ = nullptr;};
    inline const TableVersion & tableVersion() const { DARABONBA_PTR_GET_CONST(tableVersion_, TableVersion) };
    inline TableVersion tableVersion() { DARABONBA_PTR_GET(tableVersion_, TableVersion) };
    inline GetTableVersionResponseBody& setTableVersion(const TableVersion & tableVersion) { DARABONBA_PTR_SET_VALUE(tableVersion_, tableVersion) };
    inline GetTableVersionResponseBody& setTableVersion(TableVersion && tableVersion) { DARABONBA_PTR_SET_RVALUE(tableVersion_, tableVersion) };


  protected:
    // The response code.
    std::shared_ptr<string> code_ = nullptr;
    // The response message.
    std::shared_ptr<string> message_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful. Valid values: Valid values:
    // 
    // *   true: The request was successful.
    // *   false
    std::shared_ptr<bool> success_ = nullptr;
    // The information about the data table of the specified version.
    std::shared_ptr<TableVersion> tableVersion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
