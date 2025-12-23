// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTIPAMPOOLSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTIPAMPOOLSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListIpamPoolsResponseBodyIpamPools.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VpcIpam20230228
{
namespace Models
{
  class ListIpamPoolsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIpamPoolsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(IpamPools, ipamPools_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListIpamPoolsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(IpamPools, ipamPools_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListIpamPoolsResponseBody() = default ;
    ListIpamPoolsResponseBody(const ListIpamPoolsResponseBody &) = default ;
    ListIpamPoolsResponseBody(ListIpamPoolsResponseBody &&) = default ;
    ListIpamPoolsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIpamPoolsResponseBody() = default ;
    ListIpamPoolsResponseBody& operator=(const ListIpamPoolsResponseBody &) = default ;
    ListIpamPoolsResponseBody& operator=(ListIpamPoolsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->count_ == nullptr
        && return this->ipamPools_ == nullptr && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline ListIpamPoolsResponseBody& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // ipamPools Field Functions 
    bool hasIpamPools() const { return this->ipamPools_ != nullptr;};
    void deleteIpamPools() { this->ipamPools_ = nullptr;};
    inline const vector<ListIpamPoolsResponseBodyIpamPools> & ipamPools() const { DARABONBA_PTR_GET_CONST(ipamPools_, vector<ListIpamPoolsResponseBodyIpamPools>) };
    inline vector<ListIpamPoolsResponseBodyIpamPools> ipamPools() { DARABONBA_PTR_GET(ipamPools_, vector<ListIpamPoolsResponseBodyIpamPools>) };
    inline ListIpamPoolsResponseBody& setIpamPools(const vector<ListIpamPoolsResponseBodyIpamPools> & ipamPools) { DARABONBA_PTR_SET_VALUE(ipamPools_, ipamPools) };
    inline ListIpamPoolsResponseBody& setIpamPools(vector<ListIpamPoolsResponseBodyIpamPools> && ipamPools) { DARABONBA_PTR_SET_RVALUE(ipamPools_, ipamPools) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline ListIpamPoolsResponseBody& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListIpamPoolsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListIpamPoolsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListIpamPoolsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The number of entries returned.
    std::shared_ptr<int64_t> count_ = nullptr;
    // The IPAM pools.
    std::shared_ptr<vector<ListIpamPoolsResponseBodyIpamPools>> ipamPools_ = nullptr;
    // The number of entries per page. Valid values: 1 to 100. Default value: 10.
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
