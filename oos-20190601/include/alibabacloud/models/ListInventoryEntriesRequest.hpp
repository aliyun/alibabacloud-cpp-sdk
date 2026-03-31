// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINVENTORYENTRIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTINVENTORYENTRIESREQUEST_HPP_
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
  class ListInventoryEntriesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInventoryEntriesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Filter, filter_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TypeName, typeName_);
    };
    friend void from_json(const Darabonba::Json& j, ListInventoryEntriesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TypeName, typeName_);
    };
    ListInventoryEntriesRequest() = default ;
    ListInventoryEntriesRequest(const ListInventoryEntriesRequest &) = default ;
    ListInventoryEntriesRequest(ListInventoryEntriesRequest &&) = default ;
    ListInventoryEntriesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInventoryEntriesRequest() = default ;
    ListInventoryEntriesRequest& operator=(const ListInventoryEntriesRequest &) = default ;
    ListInventoryEntriesRequest& operator=(ListInventoryEntriesRequest &&) = default ;
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
      // The name of the component property. Valid values of N: 1 to 5.
      shared_ptr<string> name_ {};
      // The comparison operator that is used to filter property values. Valid values of N: 1 to 5. Valid values:
      // 
      // *   Equal
      // *   NotEqual
      // *   BeginWith
      // *   LessThan
      // *   GreaterThan
      shared_ptr<string> operator_ {};
      // The values of properties. Valid values of the first N: 1 to 5. Valid values of the second N: 1 to 20.
      shared_ptr<vector<string>> value_ {};
    };

    virtual bool empty() const override { return this->filter_ == nullptr
        && this->instanceId_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->regionId_ == nullptr && this->typeName_ == nullptr; };
    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline const vector<ListInventoryEntriesRequest::Filter> & getFilter() const { DARABONBA_PTR_GET_CONST(filter_, vector<ListInventoryEntriesRequest::Filter>) };
    inline vector<ListInventoryEntriesRequest::Filter> getFilter() { DARABONBA_PTR_GET(filter_, vector<ListInventoryEntriesRequest::Filter>) };
    inline ListInventoryEntriesRequest& setFilter(const vector<ListInventoryEntriesRequest::Filter> & filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };
    inline ListInventoryEntriesRequest& setFilter(vector<ListInventoryEntriesRequest::Filter> && filter) { DARABONBA_PTR_SET_RVALUE(filter_, filter) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListInventoryEntriesRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListInventoryEntriesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListInventoryEntriesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListInventoryEntriesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // typeName Field Functions 
    bool hasTypeName() const { return this->typeName_ != nullptr;};
    void deleteTypeName() { this->typeName_ = nullptr;};
    inline string getTypeName() const { DARABONBA_PTR_GET_DEFAULT(typeName_, "") };
    inline ListInventoryEntriesRequest& setTypeName(string typeName) { DARABONBA_PTR_SET_VALUE(typeName_, typeName) };


  protected:
    // The filter rules for the component.
    shared_ptr<vector<ListInventoryEntriesRequest::Filter>> filter_ {};
    // The ID of the instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The number of entries per page. Valid values: 1 to 100. Default value: 50.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token that is used in the next request to retrieve a new page of results. You do not need to specify this parameter for the first request.
    shared_ptr<string> nextToken_ {};
    // The ID of the region in which the instance resides.
    shared_ptr<string> regionId_ {};
    // The name of the component. Valid values:
    // 
    // *   ACS:InstanceInformation
    // *   ACS:Application
    // *   ACS:File
    // *   ACS:Network
    // *   ACS:WindowsRole
    // *   ACS:Service
    // *   ACS:WindowsRegistry
    // *   ACS:WindowsUpdate
    // 
    // This parameter is required.
    shared_ptr<string> typeName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
