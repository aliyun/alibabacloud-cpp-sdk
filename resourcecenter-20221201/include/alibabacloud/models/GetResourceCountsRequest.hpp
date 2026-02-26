// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCECOUNTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCECOUNTSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class Filter : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Filter& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(MatchType, matchType_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Filter& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(MatchType, matchType_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Filter() = default ;
      Filter(const Filter &) = default ;
      Filter(Filter &&) = default ;
      Filter(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Filter() = default ;
      Filter& operator=(const Filter &) = default ;
      Filter& operator=(Filter &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->matchType_ == nullptr && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Filter& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // matchType Field Functions 
      bool hasMatchType() const { return this->matchType_ != nullptr;};
      void deleteMatchType() { this->matchType_ = nullptr;};
      inline string getMatchType() const { DARABONBA_PTR_GET_DEFAULT(matchType_, "") };
      inline Filter& setMatchType(string matchType) { DARABONBA_PTR_SET_VALUE(matchType_, matchType) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline const vector<string> & getValue() const { DARABONBA_PTR_GET_CONST(value_, vector<string>) };
      inline vector<string> getValue() { DARABONBA_PTR_GET(value_, vector<string>) };
      inline Filter& setValue(const vector<string> & value) { DARABONBA_PTR_SET_VALUE(value_, value) };
      inline Filter& setValue(vector<string> && value) { DARABONBA_PTR_SET_RVALUE(value_, value) };


    protected:
      // The key of the filter condition. For information about valid values, see the "`Supported filter parameters`" section below.
      shared_ptr<string> key_ {};
      // The matching method.
      // 
      // Set this parameter to `Equals`, which means an equal match.
      shared_ptr<string> matchType_ {};
      // The values of the filter condition.
      shared_ptr<vector<string>> value_ {};
    };

    virtual bool empty() const override { return this->filter_ == nullptr
        && this->groupByKey_ == nullptr && this->includeDeletedResources_ == nullptr && this->searchExpression_ == nullptr; };
    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline const vector<GetResourceCountsRequest::Filter> & getFilter() const { DARABONBA_PTR_GET_CONST(filter_, vector<GetResourceCountsRequest::Filter>) };
    inline vector<GetResourceCountsRequest::Filter> getFilter() { DARABONBA_PTR_GET(filter_, vector<GetResourceCountsRequest::Filter>) };
    inline GetResourceCountsRequest& setFilter(const vector<GetResourceCountsRequest::Filter> & filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };
    inline GetResourceCountsRequest& setFilter(vector<GetResourceCountsRequest::Filter> && filter) { DARABONBA_PTR_SET_RVALUE(filter_, filter) };


    // groupByKey Field Functions 
    bool hasGroupByKey() const { return this->groupByKey_ != nullptr;};
    void deleteGroupByKey() { this->groupByKey_ = nullptr;};
    inline string getGroupByKey() const { DARABONBA_PTR_GET_DEFAULT(groupByKey_, "") };
    inline GetResourceCountsRequest& setGroupByKey(string groupByKey) { DARABONBA_PTR_SET_VALUE(groupByKey_, groupByKey) };


    // includeDeletedResources Field Functions 
    bool hasIncludeDeletedResources() const { return this->includeDeletedResources_ != nullptr;};
    void deleteIncludeDeletedResources() { this->includeDeletedResources_ = nullptr;};
    inline bool getIncludeDeletedResources() const { DARABONBA_PTR_GET_DEFAULT(includeDeletedResources_, false) };
    inline GetResourceCountsRequest& setIncludeDeletedResources(bool includeDeletedResources) { DARABONBA_PTR_SET_VALUE(includeDeletedResources_, includeDeletedResources) };


    // searchExpression Field Functions 
    bool hasSearchExpression() const { return this->searchExpression_ != nullptr;};
    void deleteSearchExpression() { this->searchExpression_ = nullptr;};
    inline string getSearchExpression() const { DARABONBA_PTR_GET_DEFAULT(searchExpression_, "") };
    inline GetResourceCountsRequest& setSearchExpression(string searchExpression) { DARABONBA_PTR_SET_VALUE(searchExpression_, searchExpression) };


  protected:
    // The filter conditions.
    shared_ptr<vector<GetResourceCountsRequest::Filter>> filter_ {};
    // The dimension by which the queried resources are grouped. Valid values:
    // 
    // - ResourceType: The resource type.
    // 
    // - RegionId: The region.
    // 
    // - ResourceGroupId: The resource group ID.
    shared_ptr<string> groupByKey_ {};
    // Specifies whether to include deleted resources. Valid values:
    // 
    // - true
    // 
    // - false
    shared_ptr<bool> includeDeletedResources_ {};
    // The search keyword. Resource Center filters the search results based on relevance.
    shared_ptr<string> searchExpression_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceCenter20221201
#endif
