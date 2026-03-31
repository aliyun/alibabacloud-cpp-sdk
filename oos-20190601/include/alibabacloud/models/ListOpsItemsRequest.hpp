// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTOPSITEMSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTOPSITEMSREQUEST_HPP_
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
  class ListOpsItemsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOpsItemsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Filter, filter_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_ANY_TO_JSON(ResourceTags, resourceTags_);
      DARABONBA_ANY_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, ListOpsItemsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_ANY_FROM_JSON(ResourceTags, resourceTags_);
      DARABONBA_ANY_FROM_JSON(Tags, tags_);
    };
    ListOpsItemsRequest() = default ;
    ListOpsItemsRequest(const ListOpsItemsRequest &) = default ;
    ListOpsItemsRequest(ListOpsItemsRequest &&) = default ;
    ListOpsItemsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOpsItemsRequest() = default ;
    ListOpsItemsRequest& operator=(const ListOpsItemsRequest &) = default ;
    ListOpsItemsRequest& operator=(ListOpsItemsRequest &&) = default ;
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
      // The parameter name of the filter.
      shared_ptr<string> name_ {};
      // The comparison operator that is used to filter property values.
      shared_ptr<string> operator_ {};
      // The parameter values of the filter.
      shared_ptr<vector<string>> value_ {};
    };

    virtual bool empty() const override { return this->filter_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->regionId_ == nullptr && this->resourceTags_ == nullptr && this->tags_ == nullptr; };
    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline const vector<ListOpsItemsRequest::Filter> & getFilter() const { DARABONBA_PTR_GET_CONST(filter_, vector<ListOpsItemsRequest::Filter>) };
    inline vector<ListOpsItemsRequest::Filter> getFilter() { DARABONBA_PTR_GET(filter_, vector<ListOpsItemsRequest::Filter>) };
    inline ListOpsItemsRequest& setFilter(const vector<ListOpsItemsRequest::Filter> & filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };
    inline ListOpsItemsRequest& setFilter(vector<ListOpsItemsRequest::Filter> && filter) { DARABONBA_PTR_SET_RVALUE(filter_, filter) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListOpsItemsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListOpsItemsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListOpsItemsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceTags Field Functions 
    bool hasResourceTags() const { return this->resourceTags_ != nullptr;};
    void deleteResourceTags() { this->resourceTags_ = nullptr;};
    inline     const Darabonba::Json & getResourceTags() const { DARABONBA_GET(resourceTags_) };
    Darabonba::Json & getResourceTags() { DARABONBA_GET(resourceTags_) };
    inline ListOpsItemsRequest& setResourceTags(const Darabonba::Json & resourceTags) { DARABONBA_SET_VALUE(resourceTags_, resourceTags) };
    inline ListOpsItemsRequest& setResourceTags(Darabonba::Json && resourceTags) { DARABONBA_SET_RVALUE(resourceTags_, resourceTags) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline     const Darabonba::Json & getTags() const { DARABONBA_GET(tags_) };
    Darabonba::Json & getTags() { DARABONBA_GET(tags_) };
    inline ListOpsItemsRequest& setTags(const Darabonba::Json & tags) { DARABONBA_SET_VALUE(tags_, tags) };
    inline ListOpsItemsRequest& setTags(Darabonba::Json && tags) { DARABONBA_SET_RVALUE(tags_, tags) };


  protected:
    // The filter rules for the component.
    shared_ptr<vector<ListOpsItemsRequest::Filter>> filter_ {};
    // The number of entries to return on each page. Valid values: 10 to 100. Default value: 50.
    shared_ptr<int32_t> maxResults_ {};
    // The token that is used to retrieve the next page of results.
    shared_ptr<string> nextToken_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
    // The information about resource tags.
    Darabonba::Json resourceTags_ {};
    // The tags.
    Darabonba::Json tags_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
