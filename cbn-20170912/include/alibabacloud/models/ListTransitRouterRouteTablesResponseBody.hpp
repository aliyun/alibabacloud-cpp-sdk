// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRANSITROUTERROUTETABLESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTRANSITROUTERROUTETABLESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListTransitRouterRouteTablesResponseBodyTransitRouterRouteTables.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class ListTransitRouterRouteTablesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTransitRouterRouteTablesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(TransitRouterRouteTables, transitRouterRouteTables_);
    };
    friend void from_json(const Darabonba::Json& j, ListTransitRouterRouteTablesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(TransitRouterRouteTables, transitRouterRouteTables_);
    };
    ListTransitRouterRouteTablesResponseBody() = default ;
    ListTransitRouterRouteTablesResponseBody(const ListTransitRouterRouteTablesResponseBody &) = default ;
    ListTransitRouterRouteTablesResponseBody(ListTransitRouterRouteTablesResponseBody &&) = default ;
    ListTransitRouterRouteTablesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTransitRouterRouteTablesResponseBody() = default ;
    ListTransitRouterRouteTablesResponseBody& operator=(const ListTransitRouterRouteTablesResponseBody &) = default ;
    ListTransitRouterRouteTablesResponseBody& operator=(ListTransitRouterRouteTablesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->maxResults_ != nullptr
        && this->nextToken_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr && this->transitRouterRouteTables_ != nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListTransitRouterRouteTablesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListTransitRouterRouteTablesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTransitRouterRouteTablesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListTransitRouterRouteTablesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // transitRouterRouteTables Field Functions 
    bool hasTransitRouterRouteTables() const { return this->transitRouterRouteTables_ != nullptr;};
    void deleteTransitRouterRouteTables() { this->transitRouterRouteTables_ = nullptr;};
    inline const vector<ListTransitRouterRouteTablesResponseBodyTransitRouterRouteTables> & transitRouterRouteTables() const { DARABONBA_PTR_GET_CONST(transitRouterRouteTables_, vector<ListTransitRouterRouteTablesResponseBodyTransitRouterRouteTables>) };
    inline vector<ListTransitRouterRouteTablesResponseBodyTransitRouterRouteTables> transitRouterRouteTables() { DARABONBA_PTR_GET(transitRouterRouteTables_, vector<ListTransitRouterRouteTablesResponseBodyTransitRouterRouteTables>) };
    inline ListTransitRouterRouteTablesResponseBody& setTransitRouterRouteTables(const vector<ListTransitRouterRouteTablesResponseBodyTransitRouterRouteTables> & transitRouterRouteTables) { DARABONBA_PTR_SET_VALUE(transitRouterRouteTables_, transitRouterRouteTables) };
    inline ListTransitRouterRouteTablesResponseBody& setTransitRouterRouteTables(vector<ListTransitRouterRouteTablesResponseBodyTransitRouterRouteTables> && transitRouterRouteTables) { DARABONBA_PTR_SET_RVALUE(transitRouterRouteTables_, transitRouterRouteTables) };


  protected:
    // The number of entries returned per page.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The token that determines the start point of the next query. Valid values:
    // 
    // *   If **NextToken** was returned in the previous query, specify the value to obtain the next set of results.
    // *   If a value of **NextToken** is not returned, it indicates that no additional results exist.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
    // A list of route tables.
    std::shared_ptr<vector<ListTransitRouterRouteTablesResponseBodyTransitRouterRouteTables>> transitRouterRouteTables_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
