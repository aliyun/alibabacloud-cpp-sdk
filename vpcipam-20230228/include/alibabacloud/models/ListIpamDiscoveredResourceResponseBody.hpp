// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTIPAMDISCOVEREDRESOURCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTIPAMDISCOVEREDRESOURCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListIpamDiscoveredResourceResponseBodyIpamDiscoveredResources.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VpcIpam20230228
{
namespace Models
{
  class ListIpamDiscoveredResourceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIpamDiscoveredResourceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(IpamDiscoveredResources, ipamDiscoveredResources_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListIpamDiscoveredResourceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(IpamDiscoveredResources, ipamDiscoveredResources_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListIpamDiscoveredResourceResponseBody() = default ;
    ListIpamDiscoveredResourceResponseBody(const ListIpamDiscoveredResourceResponseBody &) = default ;
    ListIpamDiscoveredResourceResponseBody(ListIpamDiscoveredResourceResponseBody &&) = default ;
    ListIpamDiscoveredResourceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIpamDiscoveredResourceResponseBody() = default ;
    ListIpamDiscoveredResourceResponseBody& operator=(const ListIpamDiscoveredResourceResponseBody &) = default ;
    ListIpamDiscoveredResourceResponseBody& operator=(ListIpamDiscoveredResourceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->count_ == nullptr
        && return this->ipamDiscoveredResources_ == nullptr && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline ListIpamDiscoveredResourceResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // ipamDiscoveredResources Field Functions 
    bool hasIpamDiscoveredResources() const { return this->ipamDiscoveredResources_ != nullptr;};
    void deleteIpamDiscoveredResources() { this->ipamDiscoveredResources_ = nullptr;};
    inline const vector<ListIpamDiscoveredResourceResponseBodyIpamDiscoveredResources> & ipamDiscoveredResources() const { DARABONBA_PTR_GET_CONST(ipamDiscoveredResources_, vector<ListIpamDiscoveredResourceResponseBodyIpamDiscoveredResources>) };
    inline vector<ListIpamDiscoveredResourceResponseBodyIpamDiscoveredResources> ipamDiscoveredResources() { DARABONBA_PTR_GET(ipamDiscoveredResources_, vector<ListIpamDiscoveredResourceResponseBodyIpamDiscoveredResources>) };
    inline ListIpamDiscoveredResourceResponseBody& setIpamDiscoveredResources(const vector<ListIpamDiscoveredResourceResponseBodyIpamDiscoveredResources> & ipamDiscoveredResources) { DARABONBA_PTR_SET_VALUE(ipamDiscoveredResources_, ipamDiscoveredResources) };
    inline ListIpamDiscoveredResourceResponseBody& setIpamDiscoveredResources(vector<ListIpamDiscoveredResourceResponseBodyIpamDiscoveredResources> && ipamDiscoveredResources) { DARABONBA_PTR_SET_RVALUE(ipamDiscoveredResources_, ipamDiscoveredResources) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListIpamDiscoveredResourceResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListIpamDiscoveredResourceResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListIpamDiscoveredResourceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListIpamDiscoveredResourceResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The maximum number of entries on each page.
    std::shared_ptr<int32_t> count_ = nullptr;
    // The list of resources.
    std::shared_ptr<vector<ListIpamDiscoveredResourceResponseBodyIpamDiscoveredResources>> ipamDiscoveredResources_ = nullptr;
    // The maximum number of entries on each page. Valid values: 1 to 100. Default value: 10.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The pagination token that is used in the next request to retrieve a new page of results. Valid values:
    // 
    // *   If **NextToken** is empty, there is no next page.
    // *   If a value of **NextToken** is returned, it indicates the token that is used for the next query.
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
