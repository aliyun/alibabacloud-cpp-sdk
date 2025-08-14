// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRANSITROUTERCIDRALLOCATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTRANSITROUTERCIDRALLOCATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListTransitRouterCidrAllocationResponseBodyTransitRouterCidrAllocations.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class ListTransitRouterCidrAllocationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTransitRouterCidrAllocationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(TransitRouterCidrAllocations, transitRouterCidrAllocations_);
    };
    friend void from_json(const Darabonba::Json& j, ListTransitRouterCidrAllocationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(TransitRouterCidrAllocations, transitRouterCidrAllocations_);
    };
    ListTransitRouterCidrAllocationResponseBody() = default ;
    ListTransitRouterCidrAllocationResponseBody(const ListTransitRouterCidrAllocationResponseBody &) = default ;
    ListTransitRouterCidrAllocationResponseBody(ListTransitRouterCidrAllocationResponseBody &&) = default ;
    ListTransitRouterCidrAllocationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTransitRouterCidrAllocationResponseBody() = default ;
    ListTransitRouterCidrAllocationResponseBody& operator=(const ListTransitRouterCidrAllocationResponseBody &) = default ;
    ListTransitRouterCidrAllocationResponseBody& operator=(ListTransitRouterCidrAllocationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->maxResults_ != nullptr
        && this->nextToken_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr && this->transitRouterCidrAllocations_ != nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListTransitRouterCidrAllocationResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListTransitRouterCidrAllocationResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTransitRouterCidrAllocationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListTransitRouterCidrAllocationResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // transitRouterCidrAllocations Field Functions 
    bool hasTransitRouterCidrAllocations() const { return this->transitRouterCidrAllocations_ != nullptr;};
    void deleteTransitRouterCidrAllocations() { this->transitRouterCidrAllocations_ = nullptr;};
    inline const vector<ListTransitRouterCidrAllocationResponseBodyTransitRouterCidrAllocations> & transitRouterCidrAllocations() const { DARABONBA_PTR_GET_CONST(transitRouterCidrAllocations_, vector<ListTransitRouterCidrAllocationResponseBodyTransitRouterCidrAllocations>) };
    inline vector<ListTransitRouterCidrAllocationResponseBodyTransitRouterCidrAllocations> transitRouterCidrAllocations() { DARABONBA_PTR_GET(transitRouterCidrAllocations_, vector<ListTransitRouterCidrAllocationResponseBodyTransitRouterCidrAllocations>) };
    inline ListTransitRouterCidrAllocationResponseBody& setTransitRouterCidrAllocations(const vector<ListTransitRouterCidrAllocationResponseBodyTransitRouterCidrAllocations> & transitRouterCidrAllocations) { DARABONBA_PTR_SET_VALUE(transitRouterCidrAllocations_, transitRouterCidrAllocations) };
    inline ListTransitRouterCidrAllocationResponseBody& setTransitRouterCidrAllocations(vector<ListTransitRouterCidrAllocationResponseBodyTransitRouterCidrAllocations> && transitRouterCidrAllocations) { DARABONBA_PTR_SET_RVALUE(transitRouterCidrAllocations_, transitRouterCidrAllocations) };


  protected:
    // The number of entries returned per page.
    // 
    // *   If no value is specified for **MaxResults**, query results are returned in one batch. The value of **MaxResults** indicates the total number of entries.
    // *   If a value is specified for **MaxResults**, query results are returned in batches. The value of **MaxResults** in the response indicates the number of entries in the current batch.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The token that determines the start point of the next query. Valid values:
    // 
    // *   If **NextToken** was not returned, it indicates that no additional results exist.
    // *   If **NextToken** was returned in the previous query, specify the value to obtain the next set of results.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
    // The information about the CIDR blocks that have IP addresses allocated to network instances.
    std::shared_ptr<vector<ListTransitRouterCidrAllocationResponseBodyTransitRouterCidrAllocations>> transitRouterCidrAllocations_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
