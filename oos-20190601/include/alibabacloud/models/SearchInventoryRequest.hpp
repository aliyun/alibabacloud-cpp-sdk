// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHINVENTORYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SEARCHINVENTORYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class Filter : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Filter& obj) { 
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Operator, operator_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Filter& obj) { 
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Operator, operator_);
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
      virtual bool empty() const override { return this->name_ == nullptr
        && this->operator_ == nullptr && this->value_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Filter& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // operator Field Functions 
      bool hasOperator() const { return this->operator_ != nullptr;};
      void deleteOperator() { this->operator_ = nullptr;};
      inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
      inline Filter& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline const vector<string> & getValue() const { DARABONBA_PTR_GET_CONST(value_, vector<string>) };
      inline vector<string> getValue() { DARABONBA_PTR_GET(value_, vector<string>) };
      inline Filter& setValue(const vector<string> & value) { DARABONBA_PTR_SET_VALUE(value_, value) };
      inline Filter& setValue(vector<string> && value) { DARABONBA_PTR_SET_RVALUE(value_, value) };


    protected:
      // The name of the component property. Valid values of N: 1 to 5. Different components have different property names. You can call the [GetInventorySchema](https://api.aliyun.com/#/?product=oos\\&version=2019-06-01\\&api=GetInventorySchema) operation to query the property names of different components. For example, the ACS:InstanceInformation component has the InstanceId property. Therefore, you can set this parameter to ACS:InstanceInformation.InstanceId.
      shared_ptr<string> name_ {};
      // The comparison operator that is used to filter property values. Valid values of N: 1 to 5. Valid values:
      // 
      // *   Equal
      // *   NotEqual
      // *   BeginWith
      // *   LessThan
      // *   GreaterThan
      shared_ptr<string> operator_ {};
      // The property values to query.
      shared_ptr<vector<string>> value_ {};
    };

    virtual bool empty() const override { return this->aggregator_ == nullptr
        && this->filter_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->regionId_ == nullptr; };
    // aggregator Field Functions 
    bool hasAggregator() const { return this->aggregator_ != nullptr;};
    void deleteAggregator() { this->aggregator_ = nullptr;};
    inline const vector<string> & getAggregator() const { DARABONBA_PTR_GET_CONST(aggregator_, vector<string>) };
    inline vector<string> getAggregator() { DARABONBA_PTR_GET(aggregator_, vector<string>) };
    inline SearchInventoryRequest& setAggregator(const vector<string> & aggregator) { DARABONBA_PTR_SET_VALUE(aggregator_, aggregator) };
    inline SearchInventoryRequest& setAggregator(vector<string> && aggregator) { DARABONBA_PTR_SET_RVALUE(aggregator_, aggregator) };


    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline const vector<SearchInventoryRequest::Filter> & getFilter() const { DARABONBA_PTR_GET_CONST(filter_, vector<SearchInventoryRequest::Filter>) };
    inline vector<SearchInventoryRequest::Filter> getFilter() { DARABONBA_PTR_GET(filter_, vector<SearchInventoryRequest::Filter>) };
    inline SearchInventoryRequest& setFilter(const vector<SearchInventoryRequest::Filter> & filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };
    inline SearchInventoryRequest& setFilter(vector<SearchInventoryRequest::Filter> && filter) { DARABONBA_PTR_SET_RVALUE(filter_, filter) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline SearchInventoryRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline SearchInventoryRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline SearchInventoryRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The information about aggregators. You can use one or more aggregators to query the aggregate information of an instance. Valid values:
    // 
    // *   ACS:Application.Name
    // *   ACS:Application.Version
    shared_ptr<vector<string>> aggregator_ {};
    // The filter rules for the component.
    shared_ptr<vector<SearchInventoryRequest::Filter>> filter_ {};
    // The number of entries per page. Valid values: 1 to 100. Default value: 50.
    shared_ptr<int32_t> maxResults_ {};
    // The token that is used to retrieve the next page of results.
    shared_ptr<string> nextToken_ {};
    // The ID of the region.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
