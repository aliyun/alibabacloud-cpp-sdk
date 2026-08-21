// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCHATSESSIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCHATSESSIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class ListChatSessionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListChatSessionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(hasMore, hasMore_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(page, page_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(sessions, sessions_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListChatSessionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(hasMore, hasMore_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(page, page_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(sessions, sessions_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    ListChatSessionsResponseBody() = default ;
    ListChatSessionsResponseBody(const ListChatSessionsResponseBody &) = default ;
    ListChatSessionsResponseBody(ListChatSessionsResponseBody &&) = default ;
    ListChatSessionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListChatSessionsResponseBody() = default ;
    ListChatSessionsResponseBody& operator=(const ListChatSessionsResponseBody &) = default ;
    ListChatSessionsResponseBody& operator=(ListChatSessionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->hasMore_ == nullptr && this->message_ == nullptr && this->page_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr
        && this->sessions_ == nullptr && this->tenantId_ == nullptr && this->total_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListChatSessionsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // hasMore Field Functions 
    bool hasHasMore() const { return this->hasMore_ != nullptr;};
    void deleteHasMore() { this->hasMore_ = nullptr;};
    inline bool getHasMore() const { DARABONBA_PTR_GET_DEFAULT(hasMore_, false) };
    inline ListChatSessionsResponseBody& setHasMore(bool hasMore) { DARABONBA_PTR_SET_VALUE(hasMore_, hasMore) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListChatSessionsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int32_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
    inline ListChatSessionsResponseBody& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline ListChatSessionsResponseBody& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListChatSessionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sessions Field Functions 
    bool hasSessions() const { return this->sessions_ != nullptr;};
    void deleteSessions() { this->sessions_ = nullptr;};
    inline const vector<Darabonba::Json> & getSessions() const { DARABONBA_PTR_GET_CONST(sessions_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> getSessions() { DARABONBA_PTR_GET(sessions_, vector<Darabonba::Json>) };
    inline ListChatSessionsResponseBody& setSessions(const vector<Darabonba::Json> & sessions) { DARABONBA_PTR_SET_VALUE(sessions_, sessions) };
    inline ListChatSessionsResponseBody& setSessions(vector<Darabonba::Json> && sessions) { DARABONBA_PTR_SET_RVALUE(sessions_, sessions) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline ListChatSessionsResponseBody& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline ListChatSessionsResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The error code.
    shared_ptr<string> code_ {};
    // Indicates whether there is a next page.
    shared_ptr<bool> hasMore_ {};
    // The status code description.
    shared_ptr<string> message_ {};
    // The current page number.
    shared_ptr<int32_t> page_ {};
    // The number of entries per page. Default value: 10.
    shared_ptr<string> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The list of sessions.
    shared_ptr<vector<Darabonba::Json>> sessions_ {};
    // The effective tenant ID.
    shared_ptr<string> tenantId_ {};
    // The total number of records.
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
