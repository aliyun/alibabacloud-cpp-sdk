// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRANSITROUTERROUTETABLEPROPAGATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTRANSITROUTERROUTETABLEPROPAGATIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListTransitRouterRouteTablePropagationsResponseBodyTransitRouterPropagations.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class ListTransitRouterRouteTablePropagationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTransitRouterRouteTablePropagationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(TransitRouterPropagations, transitRouterPropagations_);
    };
    friend void from_json(const Darabonba::Json& j, ListTransitRouterRouteTablePropagationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(TransitRouterPropagations, transitRouterPropagations_);
    };
    ListTransitRouterRouteTablePropagationsResponseBody() = default ;
    ListTransitRouterRouteTablePropagationsResponseBody(const ListTransitRouterRouteTablePropagationsResponseBody &) = default ;
    ListTransitRouterRouteTablePropagationsResponseBody(ListTransitRouterRouteTablePropagationsResponseBody &&) = default ;
    ListTransitRouterRouteTablePropagationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTransitRouterRouteTablePropagationsResponseBody() = default ;
    ListTransitRouterRouteTablePropagationsResponseBody& operator=(const ListTransitRouterRouteTablePropagationsResponseBody &) = default ;
    ListTransitRouterRouteTablePropagationsResponseBody& operator=(ListTransitRouterRouteTablePropagationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->maxResults_ != nullptr
        && this->nextToken_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr && this->transitRouterPropagations_ != nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListTransitRouterRouteTablePropagationsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListTransitRouterRouteTablePropagationsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTransitRouterRouteTablePropagationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListTransitRouterRouteTablePropagationsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // transitRouterPropagations Field Functions 
    bool hasTransitRouterPropagations() const { return this->transitRouterPropagations_ != nullptr;};
    void deleteTransitRouterPropagations() { this->transitRouterPropagations_ = nullptr;};
    inline const vector<ListTransitRouterRouteTablePropagationsResponseBodyTransitRouterPropagations> & transitRouterPropagations() const { DARABONBA_PTR_GET_CONST(transitRouterPropagations_, vector<ListTransitRouterRouteTablePropagationsResponseBodyTransitRouterPropagations>) };
    inline vector<ListTransitRouterRouteTablePropagationsResponseBodyTransitRouterPropagations> transitRouterPropagations() { DARABONBA_PTR_GET(transitRouterPropagations_, vector<ListTransitRouterRouteTablePropagationsResponseBodyTransitRouterPropagations>) };
    inline ListTransitRouterRouteTablePropagationsResponseBody& setTransitRouterPropagations(const vector<ListTransitRouterRouteTablePropagationsResponseBodyTransitRouterPropagations> & transitRouterPropagations) { DARABONBA_PTR_SET_VALUE(transitRouterPropagations_, transitRouterPropagations) };
    inline ListTransitRouterRouteTablePropagationsResponseBody& setTransitRouterPropagations(vector<ListTransitRouterRouteTablePropagationsResponseBodyTransitRouterPropagations> && transitRouterPropagations) { DARABONBA_PTR_SET_RVALUE(transitRouterPropagations_, transitRouterPropagations) };


  protected:
    // The number of entries returned per page.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The token that determines the start point of the query.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
    // A list of route learning correlations.
    std::shared_ptr<vector<ListTransitRouterRouteTablePropagationsResponseBodyTransitRouterPropagations>> transitRouterPropagations_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
