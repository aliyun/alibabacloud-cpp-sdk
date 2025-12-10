// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SEARCHRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SearchResponseBodyDatabaseResult.hpp>
#include <alibabacloud/models/SearchResponseBodyTableResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class SearchResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(DatabaseResult, databaseResult_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TableResult, tableResult_);
    };
    friend void from_json(const Darabonba::Json& j, SearchResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(DatabaseResult, databaseResult_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TableResult, tableResult_);
    };
    SearchResponseBody() = default ;
    SearchResponseBody(const SearchResponseBody &) = default ;
    SearchResponseBody(SearchResponseBody &&) = default ;
    SearchResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchResponseBody() = default ;
    SearchResponseBody& operator=(const SearchResponseBody &) = default ;
    SearchResponseBody& operator=(SearchResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->databaseResult_ == nullptr && return this->message_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr && return this->tableResult_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline SearchResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // databaseResult Field Functions 
    bool hasDatabaseResult() const { return this->databaseResult_ != nullptr;};
    void deleteDatabaseResult() { this->databaseResult_ = nullptr;};
    inline const SearchResponseBodyDatabaseResult & databaseResult() const { DARABONBA_PTR_GET_CONST(databaseResult_, SearchResponseBodyDatabaseResult) };
    inline SearchResponseBodyDatabaseResult databaseResult() { DARABONBA_PTR_GET(databaseResult_, SearchResponseBodyDatabaseResult) };
    inline SearchResponseBody& setDatabaseResult(const SearchResponseBodyDatabaseResult & databaseResult) { DARABONBA_PTR_SET_VALUE(databaseResult_, databaseResult) };
    inline SearchResponseBody& setDatabaseResult(SearchResponseBodyDatabaseResult && databaseResult) { DARABONBA_PTR_SET_RVALUE(databaseResult_, databaseResult) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline SearchResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SearchResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline SearchResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // tableResult Field Functions 
    bool hasTableResult() const { return this->tableResult_ != nullptr;};
    void deleteTableResult() { this->tableResult_ = nullptr;};
    inline const SearchResponseBodyTableResult & tableResult() const { DARABONBA_PTR_GET_CONST(tableResult_, SearchResponseBodyTableResult) };
    inline SearchResponseBodyTableResult tableResult() { DARABONBA_PTR_GET(tableResult_, SearchResponseBodyTableResult) };
    inline SearchResponseBody& setTableResult(const SearchResponseBodyTableResult & tableResult) { DARABONBA_PTR_SET_VALUE(tableResult_, tableResult) };
    inline SearchResponseBody& setTableResult(SearchResponseBodyTableResult && tableResult) { DARABONBA_PTR_SET_RVALUE(tableResult_, tableResult) };


  protected:
    // The response code.
    std::shared_ptr<string> code_ = nullptr;
    // The returned database information.
    std::shared_ptr<SearchResponseBodyDatabaseResult> databaseResult_ = nullptr;
    // Response
    std::shared_ptr<string> message_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the information about the service was queried.
    std::shared_ptr<bool> success_ = nullptr;
    // The returned table information.
    std::shared_ptr<SearchResponseBodyTableResult> tableResult_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
