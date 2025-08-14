// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRANSITROUTERROUTEENTRIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTRANSITROUTERROUTEENTRIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListTransitRouterRouteEntriesResponseBodyTransitRouterRouteEntries.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class ListTransitRouterRouteEntriesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTransitRouterRouteEntriesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(TransitRouterRouteEntries, transitRouterRouteEntries_);
    };
    friend void from_json(const Darabonba::Json& j, ListTransitRouterRouteEntriesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(TransitRouterRouteEntries, transitRouterRouteEntries_);
    };
    ListTransitRouterRouteEntriesResponseBody() = default ;
    ListTransitRouterRouteEntriesResponseBody(const ListTransitRouterRouteEntriesResponseBody &) = default ;
    ListTransitRouterRouteEntriesResponseBody(ListTransitRouterRouteEntriesResponseBody &&) = default ;
    ListTransitRouterRouteEntriesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTransitRouterRouteEntriesResponseBody() = default ;
    ListTransitRouterRouteEntriesResponseBody& operator=(const ListTransitRouterRouteEntriesResponseBody &) = default ;
    ListTransitRouterRouteEntriesResponseBody& operator=(ListTransitRouterRouteEntriesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->maxResults_ != nullptr
        && this->nextToken_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr && this->transitRouterRouteEntries_ != nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListTransitRouterRouteEntriesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListTransitRouterRouteEntriesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTransitRouterRouteEntriesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListTransitRouterRouteEntriesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // transitRouterRouteEntries Field Functions 
    bool hasTransitRouterRouteEntries() const { return this->transitRouterRouteEntries_ != nullptr;};
    void deleteTransitRouterRouteEntries() { this->transitRouterRouteEntries_ = nullptr;};
    inline const vector<ListTransitRouterRouteEntriesResponseBodyTransitRouterRouteEntries> & transitRouterRouteEntries() const { DARABONBA_PTR_GET_CONST(transitRouterRouteEntries_, vector<ListTransitRouterRouteEntriesResponseBodyTransitRouterRouteEntries>) };
    inline vector<ListTransitRouterRouteEntriesResponseBodyTransitRouterRouteEntries> transitRouterRouteEntries() { DARABONBA_PTR_GET(transitRouterRouteEntries_, vector<ListTransitRouterRouteEntriesResponseBodyTransitRouterRouteEntries>) };
    inline ListTransitRouterRouteEntriesResponseBody& setTransitRouterRouteEntries(const vector<ListTransitRouterRouteEntriesResponseBodyTransitRouterRouteEntries> & transitRouterRouteEntries) { DARABONBA_PTR_SET_VALUE(transitRouterRouteEntries_, transitRouterRouteEntries) };
    inline ListTransitRouterRouteEntriesResponseBody& setTransitRouterRouteEntries(vector<ListTransitRouterRouteEntriesResponseBodyTransitRouterRouteEntries> && transitRouterRouteEntries) { DARABONBA_PTR_SET_RVALUE(transitRouterRouteEntries_, transitRouterRouteEntries) };


  protected:
    // The number of entries per page.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // A pagination token. It can be used in the next request to retrieve a new page of results. Valid values:
    // 
    // *   If **NextToken** is empty, no next page exists.
    // *   If a value is returned for **NextToken**, the value is the token that determines the start point of the next query.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
    // A list of route entries.
    std::shared_ptr<vector<ListTransitRouterRouteEntriesResponseBodyTransitRouterRouteEntries>> transitRouterRouteEntries_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
