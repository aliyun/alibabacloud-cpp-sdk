// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYPRIMARYOBJECTDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYPRIMARYOBJECTDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class QueryPrimaryObjectDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryPrimaryObjectDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(items, items_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(page, page_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, QueryPrimaryObjectDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(items, items_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(page, page_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    QueryPrimaryObjectDataResponseBody() = default ;
    QueryPrimaryObjectDataResponseBody(const QueryPrimaryObjectDataResponseBody &) = default ;
    QueryPrimaryObjectDataResponseBody(QueryPrimaryObjectDataResponseBody &&) = default ;
    QueryPrimaryObjectDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryPrimaryObjectDataResponseBody() = default ;
    QueryPrimaryObjectDataResponseBody& operator=(const QueryPrimaryObjectDataResponseBody &) = default ;
    QueryPrimaryObjectDataResponseBody& operator=(QueryPrimaryObjectDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->items_ == nullptr && this->message_ == nullptr && this->page_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr
        && this->total_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryPrimaryObjectDataResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<map<string, string>> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<map<string, string>>) };
    inline vector<map<string, string>> getItems() { DARABONBA_PTR_GET(items_, vector<map<string, string>>) };
    inline QueryPrimaryObjectDataResponseBody& setItems(const vector<map<string, string>> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline QueryPrimaryObjectDataResponseBody& setItems(vector<map<string, string>> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryPrimaryObjectDataResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int64_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0L) };
    inline QueryPrimaryObjectDataResponseBody& setPage(int64_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline QueryPrimaryObjectDataResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryPrimaryObjectDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline QueryPrimaryObjectDataResponseBody& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The business status code. A value of 200 indicates success. A failure returns a backend error code (ERR.* / InvalidParameter.*).
    shared_ptr<string> code_ {};
    // The incremental information list.
    shared_ptr<vector<map<string, string>>> items_ {};
    // The error description. This value is empty when the request succeeds.
    shared_ptr<string> message_ {};
    // The current page number.
    shared_ptr<int64_t> page_ {};
    // The number of entries per page.
    shared_ptr<int64_t> pageSize_ {};
    // The request trace ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries.
    shared_ptr<int64_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
