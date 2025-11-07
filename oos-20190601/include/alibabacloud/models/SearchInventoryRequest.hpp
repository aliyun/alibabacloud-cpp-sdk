// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHINVENTORYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SEARCHINVENTORYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SearchInventoryRequestFilter.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class SearchInventoryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchInventoryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Aggregator, aggregator_);
      DARABONBA_PTR_TO_JSON(Filter, filter_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, SearchInventoryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Aggregator, aggregator_);
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    SearchInventoryRequest() = default ;
    SearchInventoryRequest(const SearchInventoryRequest &) = default ;
    SearchInventoryRequest(SearchInventoryRequest &&) = default ;
    SearchInventoryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchInventoryRequest() = default ;
    SearchInventoryRequest& operator=(const SearchInventoryRequest &) = default ;
    SearchInventoryRequest& operator=(SearchInventoryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aggregator_ == nullptr
        && return this->filter_ == nullptr && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr && return this->regionId_ == nullptr; };
    // aggregator Field Functions 
    bool hasAggregator() const { return this->aggregator_ != nullptr;};
    void deleteAggregator() { this->aggregator_ = nullptr;};
    inline const vector<string> & aggregator() const { DARABONBA_PTR_GET_CONST(aggregator_, vector<string>) };
    inline vector<string> aggregator() { DARABONBA_PTR_GET(aggregator_, vector<string>) };
    inline SearchInventoryRequest& setAggregator(const vector<string> & aggregator) { DARABONBA_PTR_SET_VALUE(aggregator_, aggregator) };
    inline SearchInventoryRequest& setAggregator(vector<string> && aggregator) { DARABONBA_PTR_SET_RVALUE(aggregator_, aggregator) };


    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline const vector<SearchInventoryRequestFilter> & filter() const { DARABONBA_PTR_GET_CONST(filter_, vector<SearchInventoryRequestFilter>) };
    inline vector<SearchInventoryRequestFilter> filter() { DARABONBA_PTR_GET(filter_, vector<SearchInventoryRequestFilter>) };
    inline SearchInventoryRequest& setFilter(const vector<SearchInventoryRequestFilter> & filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };
    inline SearchInventoryRequest& setFilter(vector<SearchInventoryRequestFilter> && filter) { DARABONBA_PTR_SET_RVALUE(filter_, filter) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline SearchInventoryRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline SearchInventoryRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline SearchInventoryRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The information about aggregators. You can use one or more aggregators to query the aggregate information of an instance. Valid values:
    // 
    // *   ACS:Application.Name
    // *   ACS:Application.Version
    std::shared_ptr<vector<string>> aggregator_ = nullptr;
    // The filter rules for the component.
    std::shared_ptr<vector<SearchInventoryRequestFilter>> filter_ = nullptr;
    // The number of entries per page. Valid values: 1 to 100. Default value: 50.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The token that is used to retrieve the next page of results.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The ID of the region.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
