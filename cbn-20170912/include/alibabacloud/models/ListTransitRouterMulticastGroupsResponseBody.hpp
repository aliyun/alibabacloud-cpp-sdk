// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRANSITROUTERMULTICASTGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTRANSITROUTERMULTICASTGROUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListTransitRouterMulticastGroupsResponseBodyTransitRouterMulticastGroups.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class ListTransitRouterMulticastGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTransitRouterMulticastGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(TransitRouterMulticastGroups, transitRouterMulticastGroups_);
    };
    friend void from_json(const Darabonba::Json& j, ListTransitRouterMulticastGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(TransitRouterMulticastGroups, transitRouterMulticastGroups_);
    };
    ListTransitRouterMulticastGroupsResponseBody() = default ;
    ListTransitRouterMulticastGroupsResponseBody(const ListTransitRouterMulticastGroupsResponseBody &) = default ;
    ListTransitRouterMulticastGroupsResponseBody(ListTransitRouterMulticastGroupsResponseBody &&) = default ;
    ListTransitRouterMulticastGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTransitRouterMulticastGroupsResponseBody() = default ;
    ListTransitRouterMulticastGroupsResponseBody& operator=(const ListTransitRouterMulticastGroupsResponseBody &) = default ;
    ListTransitRouterMulticastGroupsResponseBody& operator=(ListTransitRouterMulticastGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->maxResults_ != nullptr
        && this->nextToken_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr && this->transitRouterMulticastGroups_ != nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListTransitRouterMulticastGroupsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListTransitRouterMulticastGroupsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTransitRouterMulticastGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListTransitRouterMulticastGroupsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // transitRouterMulticastGroups Field Functions 
    bool hasTransitRouterMulticastGroups() const { return this->transitRouterMulticastGroups_ != nullptr;};
    void deleteTransitRouterMulticastGroups() { this->transitRouterMulticastGroups_ = nullptr;};
    inline const vector<ListTransitRouterMulticastGroupsResponseBodyTransitRouterMulticastGroups> & transitRouterMulticastGroups() const { DARABONBA_PTR_GET_CONST(transitRouterMulticastGroups_, vector<ListTransitRouterMulticastGroupsResponseBodyTransitRouterMulticastGroups>) };
    inline vector<ListTransitRouterMulticastGroupsResponseBodyTransitRouterMulticastGroups> transitRouterMulticastGroups() { DARABONBA_PTR_GET(transitRouterMulticastGroups_, vector<ListTransitRouterMulticastGroupsResponseBodyTransitRouterMulticastGroups>) };
    inline ListTransitRouterMulticastGroupsResponseBody& setTransitRouterMulticastGroups(const vector<ListTransitRouterMulticastGroupsResponseBodyTransitRouterMulticastGroups> & transitRouterMulticastGroups) { DARABONBA_PTR_SET_VALUE(transitRouterMulticastGroups_, transitRouterMulticastGroups) };
    inline ListTransitRouterMulticastGroupsResponseBody& setTransitRouterMulticastGroups(vector<ListTransitRouterMulticastGroupsResponseBodyTransitRouterMulticastGroups> && transitRouterMulticastGroups) { DARABONBA_PTR_SET_RVALUE(transitRouterMulticastGroups_, transitRouterMulticastGroups) };


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
    // A list of multicast groups.
    std::shared_ptr<vector<ListTransitRouterMulticastGroupsResponseBodyTransitRouterMulticastGroups>> transitRouterMulticastGroups_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
