// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRAFFICMIRRORFILTERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTRAFFICMIRRORFILTERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListTrafficMirrorFiltersResponseBodyTrafficMirrorFilters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ListTrafficMirrorFiltersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTrafficMirrorFiltersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(TrafficMirrorFilters, trafficMirrorFilters_);
    };
    friend void from_json(const Darabonba::Json& j, ListTrafficMirrorFiltersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(TrafficMirrorFilters, trafficMirrorFilters_);
    };
    ListTrafficMirrorFiltersResponseBody() = default ;
    ListTrafficMirrorFiltersResponseBody(const ListTrafficMirrorFiltersResponseBody &) = default ;
    ListTrafficMirrorFiltersResponseBody(ListTrafficMirrorFiltersResponseBody &&) = default ;
    ListTrafficMirrorFiltersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTrafficMirrorFiltersResponseBody() = default ;
    ListTrafficMirrorFiltersResponseBody& operator=(const ListTrafficMirrorFiltersResponseBody &) = default ;
    ListTrafficMirrorFiltersResponseBody& operator=(ListTrafficMirrorFiltersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->count_ != nullptr
        && this->maxResults_ != nullptr && this->nextToken_ != nullptr && this->requestId_ != nullptr && this->totalCount_ != nullptr && this->trafficMirrorFilters_ != nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline ListTrafficMirrorFiltersResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListTrafficMirrorFiltersResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListTrafficMirrorFiltersResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTrafficMirrorFiltersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline ListTrafficMirrorFiltersResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // trafficMirrorFilters Field Functions 
    bool hasTrafficMirrorFilters() const { return this->trafficMirrorFilters_ != nullptr;};
    void deleteTrafficMirrorFilters() { this->trafficMirrorFilters_ = nullptr;};
    inline const vector<ListTrafficMirrorFiltersResponseBodyTrafficMirrorFilters> & trafficMirrorFilters() const { DARABONBA_PTR_GET_CONST(trafficMirrorFilters_, vector<ListTrafficMirrorFiltersResponseBodyTrafficMirrorFilters>) };
    inline vector<ListTrafficMirrorFiltersResponseBodyTrafficMirrorFilters> trafficMirrorFilters() { DARABONBA_PTR_GET(trafficMirrorFilters_, vector<ListTrafficMirrorFiltersResponseBodyTrafficMirrorFilters>) };
    inline ListTrafficMirrorFiltersResponseBody& setTrafficMirrorFilters(const vector<ListTrafficMirrorFiltersResponseBodyTrafficMirrorFilters> & trafficMirrorFilters) { DARABONBA_PTR_SET_VALUE(trafficMirrorFilters_, trafficMirrorFilters) };
    inline ListTrafficMirrorFiltersResponseBody& setTrafficMirrorFilters(vector<ListTrafficMirrorFiltersResponseBodyTrafficMirrorFilters> && trafficMirrorFilters) { DARABONBA_PTR_SET_RVALUE(trafficMirrorFilters_, trafficMirrorFilters) };


  protected:
    // The number of entries returned.
    std::shared_ptr<int32_t> count_ = nullptr;
    // The maximum number of entries returned.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // A pagination token. It can be used in the next request to retrieve a new page of results. Valid values:
    // 
    // *   If **NextToken** is empty, no next page exists.
    // *   If a value is returned for **NextToken**, the value is the token that is used for the next query.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The number of entries returned.
    std::shared_ptr<string> totalCount_ = nullptr;
    // The information about the filters.
    std::shared_ptr<vector<ListTrafficMirrorFiltersResponseBodyTrafficMirrorFilters>> trafficMirrorFilters_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
