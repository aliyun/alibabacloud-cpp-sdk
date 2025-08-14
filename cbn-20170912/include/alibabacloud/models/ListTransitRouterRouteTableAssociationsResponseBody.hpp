// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRANSITROUTERROUTETABLEASSOCIATIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTRANSITROUTERROUTETABLEASSOCIATIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListTransitRouterRouteTableAssociationsResponseBodyTransitRouterAssociations.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class ListTransitRouterRouteTableAssociationsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTransitRouterRouteTableAssociationsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(TransitRouterAssociations, transitRouterAssociations_);
    };
    friend void from_json(const Darabonba::Json& j, ListTransitRouterRouteTableAssociationsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(TransitRouterAssociations, transitRouterAssociations_);
    };
    ListTransitRouterRouteTableAssociationsResponseBody() = default ;
    ListTransitRouterRouteTableAssociationsResponseBody(const ListTransitRouterRouteTableAssociationsResponseBody &) = default ;
    ListTransitRouterRouteTableAssociationsResponseBody(ListTransitRouterRouteTableAssociationsResponseBody &&) = default ;
    ListTransitRouterRouteTableAssociationsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTransitRouterRouteTableAssociationsResponseBody() = default ;
    ListTransitRouterRouteTableAssociationsResponseBody& operator=(const ListTransitRouterRouteTableAssociationsResponseBody &) = default ;
    ListTransitRouterRouteTableAssociationsResponseBody& operator=(ListTransitRouterRouteTableAssociationsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->maxResults_ != nullptr
        && this->nextToken_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr && this->transitRouterAssociations_ != nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListTransitRouterRouteTableAssociationsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListTransitRouterRouteTableAssociationsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTransitRouterRouteTableAssociationsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListTransitRouterRouteTableAssociationsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // transitRouterAssociations Field Functions 
    bool hasTransitRouterAssociations() const { return this->transitRouterAssociations_ != nullptr;};
    void deleteTransitRouterAssociations() { this->transitRouterAssociations_ = nullptr;};
    inline const vector<ListTransitRouterRouteTableAssociationsResponseBodyTransitRouterAssociations> & transitRouterAssociations() const { DARABONBA_PTR_GET_CONST(transitRouterAssociations_, vector<ListTransitRouterRouteTableAssociationsResponseBodyTransitRouterAssociations>) };
    inline vector<ListTransitRouterRouteTableAssociationsResponseBodyTransitRouterAssociations> transitRouterAssociations() { DARABONBA_PTR_GET(transitRouterAssociations_, vector<ListTransitRouterRouteTableAssociationsResponseBodyTransitRouterAssociations>) };
    inline ListTransitRouterRouteTableAssociationsResponseBody& setTransitRouterAssociations(const vector<ListTransitRouterRouteTableAssociationsResponseBodyTransitRouterAssociations> & transitRouterAssociations) { DARABONBA_PTR_SET_VALUE(transitRouterAssociations_, transitRouterAssociations) };
    inline ListTransitRouterRouteTableAssociationsResponseBody& setTransitRouterAssociations(vector<ListTransitRouterRouteTableAssociationsResponseBodyTransitRouterAssociations> && transitRouterAssociations) { DARABONBA_PTR_SET_RVALUE(transitRouterAssociations_, transitRouterAssociations) };


  protected:
    // The number of entries returned per page.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The token that determines the start point of the query. Valid values:
    // 
    // *   If **NextToken** was not returned, it indicates that no additional results exist.
    // *   If **NextToken** was returned in the previous query, specify the value to obtain the next set of results.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
    // A list of associated forwarding correlations.
    std::shared_ptr<vector<ListTransitRouterRouteTableAssociationsResponseBodyTransitRouterAssociations>> transitRouterAssociations_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
