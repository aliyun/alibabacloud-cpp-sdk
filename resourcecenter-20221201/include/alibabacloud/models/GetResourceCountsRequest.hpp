// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCECOUNTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCECOUNTSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetResourceCountsRequestFilter.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceCenter20221201
{
namespace Models
{
  class GetResourceCountsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourceCountsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Filter, filter_);
      DARABONBA_PTR_TO_JSON(GroupByKey, groupByKey_);
      DARABONBA_PTR_TO_JSON(IncludeDeletedResources, includeDeletedResources_);
      DARABONBA_PTR_TO_JSON(SearchExpression, searchExpression_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourceCountsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
      DARABONBA_PTR_FROM_JSON(GroupByKey, groupByKey_);
      DARABONBA_PTR_FROM_JSON(IncludeDeletedResources, includeDeletedResources_);
      DARABONBA_PTR_FROM_JSON(SearchExpression, searchExpression_);
    };
    GetResourceCountsRequest() = default ;
    GetResourceCountsRequest(const GetResourceCountsRequest &) = default ;
    GetResourceCountsRequest(GetResourceCountsRequest &&) = default ;
    GetResourceCountsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourceCountsRequest() = default ;
    GetResourceCountsRequest& operator=(const GetResourceCountsRequest &) = default ;
    GetResourceCountsRequest& operator=(GetResourceCountsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->filter_ == nullptr
        && return this->groupByKey_ == nullptr && return this->includeDeletedResources_ == nullptr && return this->searchExpression_ == nullptr; };
    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline const vector<GetResourceCountsRequestFilter> & filter() const { DARABONBA_PTR_GET_CONST(filter_, vector<GetResourceCountsRequestFilter>) };
    inline vector<GetResourceCountsRequestFilter> filter() { DARABONBA_PTR_GET(filter_, vector<GetResourceCountsRequestFilter>) };
    inline GetResourceCountsRequest& setFilter(const vector<GetResourceCountsRequestFilter> & filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };
    inline GetResourceCountsRequest& setFilter(vector<GetResourceCountsRequestFilter> && filter) { DARABONBA_PTR_SET_RVALUE(filter_, filter) };


    // groupByKey Field Functions 
    bool hasGroupByKey() const { return this->groupByKey_ != nullptr;};
    void deleteGroupByKey() { this->groupByKey_ = nullptr;};
    inline string groupByKey() const { DARABONBA_PTR_GET_DEFAULT(groupByKey_, "") };
    inline GetResourceCountsRequest& setGroupByKey(string groupByKey) { DARABONBA_PTR_SET_VALUE(groupByKey_, groupByKey) };


    // includeDeletedResources Field Functions 
    bool hasIncludeDeletedResources() const { return this->includeDeletedResources_ != nullptr;};
    void deleteIncludeDeletedResources() { this->includeDeletedResources_ = nullptr;};
    inline bool includeDeletedResources() const { DARABONBA_PTR_GET_DEFAULT(includeDeletedResources_, false) };
    inline GetResourceCountsRequest& setIncludeDeletedResources(bool includeDeletedResources) { DARABONBA_PTR_SET_VALUE(includeDeletedResources_, includeDeletedResources) };


    // searchExpression Field Functions 
    bool hasSearchExpression() const { return this->searchExpression_ != nullptr;};
    void deleteSearchExpression() { this->searchExpression_ = nullptr;};
    inline string searchExpression() const { DARABONBA_PTR_GET_DEFAULT(searchExpression_, "") };
    inline GetResourceCountsRequest& setSearchExpression(string searchExpression) { DARABONBA_PTR_SET_VALUE(searchExpression_, searchExpression) };


  protected:
    // The filter conditions.
    std::shared_ptr<vector<GetResourceCountsRequestFilter>> filter_ = nullptr;
    // The dimension by which resources are queried. Valid values:
    // 
    // *   ResourceType
    // *   Region
    // *   ResourceGroupId
    // *   TagKey
    // *   TagValue
    std::shared_ptr<string> groupByKey_ = nullptr;
    std::shared_ptr<bool> includeDeletedResources_ = nullptr;
    std::shared_ptr<string> searchExpression_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceCenter20221201
#endif
