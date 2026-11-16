// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCUSTOMDOMAINSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCUSTOMDOMAINSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CustomDomainResp.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sandbox20260820
{
namespace Models
{
  class ListCustomDomainsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCustomDomainsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(customDomains, customDomains_);
      DARABONBA_PTR_TO_JSON(hasMore, hasMore_);
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(nextOffset, nextOffset_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListCustomDomainsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(customDomains, customDomains_);
      DARABONBA_PTR_FROM_JSON(hasMore, hasMore_);
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(nextOffset, nextOffset_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    ListCustomDomainsResponseBody() = default ;
    ListCustomDomainsResponseBody(const ListCustomDomainsResponseBody &) = default ;
    ListCustomDomainsResponseBody(ListCustomDomainsResponseBody &&) = default ;
    ListCustomDomainsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCustomDomainsResponseBody() = default ;
    ListCustomDomainsResponseBody& operator=(const ListCustomDomainsResponseBody &) = default ;
    ListCustomDomainsResponseBody& operator=(ListCustomDomainsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->customDomains_ == nullptr && this->hasMore_ == nullptr && this->maxResults_ == nullptr && this->message_ == nullptr && this->nextOffset_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->total_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListCustomDomainsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // customDomains Field Functions 
    bool hasCustomDomains() const { return this->customDomains_ != nullptr;};
    void deleteCustomDomains() { this->customDomains_ = nullptr;};
    inline const vector<CustomDomainResp> & getCustomDomains() const { DARABONBA_PTR_GET_CONST(customDomains_, vector<CustomDomainResp>) };
    inline vector<CustomDomainResp> getCustomDomains() { DARABONBA_PTR_GET(customDomains_, vector<CustomDomainResp>) };
    inline ListCustomDomainsResponseBody& setCustomDomains(const vector<CustomDomainResp> & customDomains) { DARABONBA_PTR_SET_VALUE(customDomains_, customDomains) };
    inline ListCustomDomainsResponseBody& setCustomDomains(vector<CustomDomainResp> && customDomains) { DARABONBA_PTR_SET_RVALUE(customDomains_, customDomains) };


    // hasMore Field Functions 
    bool hasHasMore() const { return this->hasMore_ != nullptr;};
    void deleteHasMore() { this->hasMore_ = nullptr;};
    inline bool getHasMore() const { DARABONBA_PTR_GET_DEFAULT(hasMore_, false) };
    inline ListCustomDomainsResponseBody& setHasMore(bool hasMore) { DARABONBA_PTR_SET_VALUE(hasMore_, hasMore) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListCustomDomainsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListCustomDomainsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nextOffset Field Functions 
    bool hasNextOffset() const { return this->nextOffset_ != nullptr;};
    void deleteNextOffset() { this->nextOffset_ = nullptr;};
    inline int32_t getNextOffset() const { DARABONBA_PTR_GET_DEFAULT(nextOffset_, 0) };
    inline ListCustomDomainsResponseBody& setNextOffset(int32_t nextOffset) { DARABONBA_PTR_SET_VALUE(nextOffset_, nextOffset) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListCustomDomainsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCustomDomainsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline ListCustomDomainsResponseBody& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    // The response code. A value of 200 indicates success.
    shared_ptr<string> code_ {};
    // The custom domain names.
    shared_ptr<vector<CustomDomainResp>> customDomains_ {};
    // Indicates whether there is a next page.
    shared_ptr<bool> hasMore_ {};
    // The maximum number of records to return per page.
    shared_ptr<int32_t> maxResults_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // The offset for the next page.
    shared_ptr<int32_t> nextOffset_ {};
    // The pagination token for the next page. This value is empty when no more results are available.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of records.
    shared_ptr<int64_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sandbox20260820
#endif
