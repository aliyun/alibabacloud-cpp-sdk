// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHACROSSCATALOGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SEARCHACROSSCATALOGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SearchAcrossCatalogResponseBodyCatalogResult.hpp>
#include <alibabacloud/models/SearchAcrossCatalogResponseBodyDatabaseResult.hpp>
#include <alibabacloud/models/SearchAcrossCatalogResponseBodyTableResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class SearchAcrossCatalogResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchAcrossCatalogResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CatalogResult, catalogResult_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(DatabaseResult, databaseResult_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TableResult, tableResult_);
    };
    friend void from_json(const Darabonba::Json& j, SearchAcrossCatalogResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CatalogResult, catalogResult_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(DatabaseResult, databaseResult_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TableResult, tableResult_);
    };
    SearchAcrossCatalogResponseBody() = default ;
    SearchAcrossCatalogResponseBody(const SearchAcrossCatalogResponseBody &) = default ;
    SearchAcrossCatalogResponseBody(SearchAcrossCatalogResponseBody &&) = default ;
    SearchAcrossCatalogResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchAcrossCatalogResponseBody() = default ;
    SearchAcrossCatalogResponseBody& operator=(const SearchAcrossCatalogResponseBody &) = default ;
    SearchAcrossCatalogResponseBody& operator=(SearchAcrossCatalogResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->catalogResult_ == nullptr
        && return this->code_ == nullptr && return this->databaseResult_ == nullptr && return this->message_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr
        && return this->tableResult_ == nullptr; };
    // catalogResult Field Functions 
    bool hasCatalogResult() const { return this->catalogResult_ != nullptr;};
    void deleteCatalogResult() { this->catalogResult_ = nullptr;};
    inline const SearchAcrossCatalogResponseBodyCatalogResult & catalogResult() const { DARABONBA_PTR_GET_CONST(catalogResult_, SearchAcrossCatalogResponseBodyCatalogResult) };
    inline SearchAcrossCatalogResponseBodyCatalogResult catalogResult() { DARABONBA_PTR_GET(catalogResult_, SearchAcrossCatalogResponseBodyCatalogResult) };
    inline SearchAcrossCatalogResponseBody& setCatalogResult(const SearchAcrossCatalogResponseBodyCatalogResult & catalogResult) { DARABONBA_PTR_SET_VALUE(catalogResult_, catalogResult) };
    inline SearchAcrossCatalogResponseBody& setCatalogResult(SearchAcrossCatalogResponseBodyCatalogResult && catalogResult) { DARABONBA_PTR_SET_RVALUE(catalogResult_, catalogResult) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline SearchAcrossCatalogResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // databaseResult Field Functions 
    bool hasDatabaseResult() const { return this->databaseResult_ != nullptr;};
    void deleteDatabaseResult() { this->databaseResult_ = nullptr;};
    inline const SearchAcrossCatalogResponseBodyDatabaseResult & databaseResult() const { DARABONBA_PTR_GET_CONST(databaseResult_, SearchAcrossCatalogResponseBodyDatabaseResult) };
    inline SearchAcrossCatalogResponseBodyDatabaseResult databaseResult() { DARABONBA_PTR_GET(databaseResult_, SearchAcrossCatalogResponseBodyDatabaseResult) };
    inline SearchAcrossCatalogResponseBody& setDatabaseResult(const SearchAcrossCatalogResponseBodyDatabaseResult & databaseResult) { DARABONBA_PTR_SET_VALUE(databaseResult_, databaseResult) };
    inline SearchAcrossCatalogResponseBody& setDatabaseResult(SearchAcrossCatalogResponseBodyDatabaseResult && databaseResult) { DARABONBA_PTR_SET_RVALUE(databaseResult_, databaseResult) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline SearchAcrossCatalogResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SearchAcrossCatalogResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline SearchAcrossCatalogResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // tableResult Field Functions 
    bool hasTableResult() const { return this->tableResult_ != nullptr;};
    void deleteTableResult() { this->tableResult_ = nullptr;};
    inline const SearchAcrossCatalogResponseBodyTableResult & tableResult() const { DARABONBA_PTR_GET_CONST(tableResult_, SearchAcrossCatalogResponseBodyTableResult) };
    inline SearchAcrossCatalogResponseBodyTableResult tableResult() { DARABONBA_PTR_GET(tableResult_, SearchAcrossCatalogResponseBodyTableResult) };
    inline SearchAcrossCatalogResponseBody& setTableResult(const SearchAcrossCatalogResponseBodyTableResult & tableResult) { DARABONBA_PTR_SET_VALUE(tableResult_, tableResult) };
    inline SearchAcrossCatalogResponseBody& setTableResult(SearchAcrossCatalogResponseBodyTableResult && tableResult) { DARABONBA_PTR_SET_RVALUE(tableResult_, tableResult) };


  protected:
    // The returned catalog information.
    std::shared_ptr<SearchAcrossCatalogResponseBodyCatalogResult> catalogResult_ = nullptr;
    // The response code.
    std::shared_ptr<string> code_ = nullptr;
    // The returned database information.
    std::shared_ptr<SearchAcrossCatalogResponseBodyDatabaseResult> databaseResult_ = nullptr;
    // Response
    std::shared_ptr<string> message_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the information about the service was queried.
    std::shared_ptr<bool> success_ = nullptr;
    // The returned table information.
    std::shared_ptr<SearchAcrossCatalogResponseBodyTableResult> tableResult_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
