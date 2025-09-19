// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTIPAMSCOPESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTIPAMSCOPESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListIpamScopesResponseBodyIpamScopes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VpcIpam20230228
{
namespace Models
{
  class ListIpamScopesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIpamScopesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(IpamScopes, ipamScopes_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListIpamScopesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(IpamScopes, ipamScopes_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListIpamScopesResponseBody() = default ;
    ListIpamScopesResponseBody(const ListIpamScopesResponseBody &) = default ;
    ListIpamScopesResponseBody(ListIpamScopesResponseBody &&) = default ;
    ListIpamScopesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIpamScopesResponseBody() = default ;
    ListIpamScopesResponseBody& operator=(const ListIpamScopesResponseBody &) = default ;
    ListIpamScopesResponseBody& operator=(ListIpamScopesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->count_ != nullptr
        && this->ipamScopes_ != nullptr && this->maxResults_ != nullptr && this->nextToken_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline ListIpamScopesResponseBody& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // ipamScopes Field Functions 
    bool hasIpamScopes() const { return this->ipamScopes_ != nullptr;};
    void deleteIpamScopes() { this->ipamScopes_ = nullptr;};
    inline const vector<ListIpamScopesResponseBodyIpamScopes> & ipamScopes() const { DARABONBA_PTR_GET_CONST(ipamScopes_, vector<ListIpamScopesResponseBodyIpamScopes>) };
    inline vector<ListIpamScopesResponseBodyIpamScopes> ipamScopes() { DARABONBA_PTR_GET(ipamScopes_, vector<ListIpamScopesResponseBodyIpamScopes>) };
    inline ListIpamScopesResponseBody& setIpamScopes(const vector<ListIpamScopesResponseBodyIpamScopes> & ipamScopes) { DARABONBA_PTR_SET_VALUE(ipamScopes_, ipamScopes) };
    inline ListIpamScopesResponseBody& setIpamScopes(vector<ListIpamScopesResponseBodyIpamScopes> && ipamScopes) { DARABONBA_PTR_SET_RVALUE(ipamScopes_, ipamScopes) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline ListIpamScopesResponseBody& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListIpamScopesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListIpamScopesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListIpamScopesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The number of entries returned.
    std::shared_ptr<int64_t> count_ = nullptr;
    // The IPAM scopes.
    std::shared_ptr<vector<ListIpamScopesResponseBodyIpamScopes>> ipamScopes_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int64_t> maxResults_ = nullptr;
    // The pagination token that is used in the next request to retrieve a new page of results. Valid values:
    // 
    // *   If **NextToken** is empty, no next page exists.
    // *   If a value of **NextToken** is returned, the value indicates the token that is used for the next query.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VpcIpam20230228
#endif
