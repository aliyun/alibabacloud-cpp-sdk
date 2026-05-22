// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVICEINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVICEINSTANCESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class ListServiceInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServiceInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Filter, filter_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ShowDeleted, showDeleted_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, ListServiceInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ShowDeleted, showDeleted_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    ListServiceInstancesRequest() = default ;
    ListServiceInstancesRequest(const ListServiceInstancesRequest &) = default ;
    ListServiceInstancesRequest(ListServiceInstancesRequest &&) = default ;
    ListServiceInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServiceInstancesRequest() = default ;
    ListServiceInstancesRequest& operator=(const ListServiceInstancesRequest &) = default ;
    ListServiceInstancesRequest& operator=(ListServiceInstancesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tag : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tag& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tag& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tag() = default ;
      Tag(const Tag &) = default ;
      Tag(Tag &&) = default ;
      Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tag() = default ;
      Tag& operator=(const Tag &) = default ;
      Tag& operator=(Tag &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The tag key.
      shared_ptr<string> key_ {};
      // The tag value.
      shared_ptr<string> value_ {};
    };

    class Filter : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Filter& obj) { 
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Filter& obj) { 
        DARABONBA_PTR_FROM_JSON(Name, name_);
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
        && this->value_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Filter& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline const vector<string> & getValue() const { DARABONBA_PTR_GET_CONST(value_, vector<string>) };
      inline vector<string> getValue() { DARABONBA_PTR_GET(value_, vector<string>) };
      inline Filter& setValue(const vector<string> & value) { DARABONBA_PTR_SET_VALUE(value_, value) };
      inline Filter& setValue(vector<string> && value) { DARABONBA_PTR_SET_RVALUE(value_, value) };


    protected:
      // The parameter name of the filter. You can specify one or more filters. Valid values:
      // 
      // *   Name: The service name. If you want to perform a fuzzy match, specify the service name in the *xxx* format. For example, if the service name is My Service, you can set the filter value to *My* or *Service*.
      // *   ServiceInstanceId: The ID of the service instance.
      // *   ServiceId: The service ID.
      // *   UserId: The user ID.
      // *   Version: The service version.
      // *   Status: The status of the service instance.
      // *   DeployType: The deployment type of the service.
      // *   ServiceType: The service type.
      // *   OperationStartTimeBefore: The time before the hosted O\\&M starts.
      // *   OperationStartTimeAfter: The time after the hosted O\\&M starts.
      // *   OperationEndTimeBefore: The time before the hosted O\\&M ends.
      // *   OperationEndTimeAfter: The time after the hosted O\\&M ends.
      // *   OperatedServiceInstanceId: The ID of the hosted O\\&M instance that belongs to a private service.
      // *   OperationServiceInstanceId: The ID of the hosted O\\&M service instance that belongs to a hosted O\\&M service.
      // *   EnableInstanceOps: Whether the hosted O\\&M feature is enabled for service instances.
      shared_ptr<string> name_ {};
      // The parameter values of the filter.
      shared_ptr<vector<string>> value_ {};
    };

    virtual bool empty() const override { return this->filter_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->showDeleted_ == nullptr
        && this->tag_ == nullptr; };
    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline const vector<ListServiceInstancesRequest::Filter> & getFilter() const { DARABONBA_PTR_GET_CONST(filter_, vector<ListServiceInstancesRequest::Filter>) };
    inline vector<ListServiceInstancesRequest::Filter> getFilter() { DARABONBA_PTR_GET(filter_, vector<ListServiceInstancesRequest::Filter>) };
    inline ListServiceInstancesRequest& setFilter(const vector<ListServiceInstancesRequest::Filter> & filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };
    inline ListServiceInstancesRequest& setFilter(vector<ListServiceInstancesRequest::Filter> && filter) { DARABONBA_PTR_SET_RVALUE(filter_, filter) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListServiceInstancesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListServiceInstancesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListServiceInstancesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListServiceInstancesRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // showDeleted Field Functions 
    bool hasShowDeleted() const { return this->showDeleted_ != nullptr;};
    void deleteShowDeleted() { this->showDeleted_ = nullptr;};
    inline bool getShowDeleted() const { DARABONBA_PTR_GET_DEFAULT(showDeleted_, false) };
    inline ListServiceInstancesRequest& setShowDeleted(bool showDeleted) { DARABONBA_PTR_SET_VALUE(showDeleted_, showDeleted) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<ListServiceInstancesRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<ListServiceInstancesRequest::Tag>) };
    inline vector<ListServiceInstancesRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<ListServiceInstancesRequest::Tag>) };
    inline ListServiceInstancesRequest& setTag(const vector<ListServiceInstancesRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline ListServiceInstancesRequest& setTag(vector<ListServiceInstancesRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The filter.
    shared_ptr<vector<ListServiceInstancesRequest::Filter>> filter_ {};
    // The number of entries per page. Valid values: 1 to 100. Default value: 20.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token that is used in the next request to retrieve a new page of results. You do not need to specify this parameter for the first request. You must specify the token that is obtained from the previous query as the value of NextToken.
    shared_ptr<string> nextToken_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
    // The ID of the resource group.
    shared_ptr<string> resourceGroupId_ {};
    // Specifies whether to display the information that the service instance is deleted. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> showDeleted_ {};
    // The custom tags.
    shared_ptr<vector<ListServiceInstancesRequest::Tag>> tag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
