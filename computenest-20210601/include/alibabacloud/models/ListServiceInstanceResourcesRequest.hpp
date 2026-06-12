// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVICEINSTANCERESOURCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVICEINSTANCERESOURCESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNest20210601
{
namespace Models
{
  class ListServiceInstanceResourcesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServiceInstanceResourcesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Filters, filters_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ServiceInstanceId, serviceInstanceId_);
      DARABONBA_PTR_TO_JSON(ServiceInstanceResourceType, serviceInstanceResourceType_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, ListServiceInstanceResourcesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Filters, filters_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ServiceInstanceId, serviceInstanceId_);
      DARABONBA_PTR_FROM_JSON(ServiceInstanceResourceType, serviceInstanceResourceType_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    ListServiceInstanceResourcesRequest() = default ;
    ListServiceInstanceResourcesRequest(const ListServiceInstanceResourcesRequest &) = default ;
    ListServiceInstanceResourcesRequest(ListServiceInstanceResourcesRequest &&) = default ;
    ListServiceInstanceResourcesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServiceInstanceResourcesRequest() = default ;
    ListServiceInstanceResourcesRequest& operator=(const ListServiceInstanceResourcesRequest &) = default ;
    ListServiceInstanceResourcesRequest& operator=(ListServiceInstanceResourcesRequest &&) = default ;
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
      // The key of the resource tag.
      shared_ptr<string> key_ {};
      // The value of the resource tag.
      shared_ptr<string> value_ {};
    };

    class Filters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Filters& obj) { 
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Values, values_);
      };
      friend void from_json(const Darabonba::Json& j, Filters& obj) { 
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Values, values_);
      };
      Filters() = default ;
      Filters(const Filters &) = default ;
      Filters(Filters &&) = default ;
      Filters(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Filters() = default ;
      Filters& operator=(const Filters &) = default ;
      Filters& operator=(Filters &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->name_ == nullptr
        && this->values_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Filters& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // values Field Functions 
      bool hasValues() const { return this->values_ != nullptr;};
      void deleteValues() { this->values_ = nullptr;};
      inline const vector<string> & getValues() const { DARABONBA_PTR_GET_CONST(values_, vector<string>) };
      inline vector<string> getValues() { DARABONBA_PTR_GET(values_, vector<string>) };
      inline Filters& setValues(const vector<string> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
      inline Filters& setValues(vector<string> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


    protected:
      // The name of the filter. Valid values:
      // 
      // - ExpireTimeStart
      // 
      // - ExpireTimeEnd
      // 
      // - PayType
      // 
      // - ResourceARN
      shared_ptr<string> name_ {};
      // The filter condition values.
      shared_ptr<vector<string>> values_ {};
    };

    virtual bool empty() const override { return this->filters_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->regionId_ == nullptr && this->serviceInstanceId_ == nullptr && this->serviceInstanceResourceType_ == nullptr
        && this->tag_ == nullptr; };
    // filters Field Functions 
    bool hasFilters() const { return this->filters_ != nullptr;};
    void deleteFilters() { this->filters_ = nullptr;};
    inline const vector<ListServiceInstanceResourcesRequest::Filters> & getFilters() const { DARABONBA_PTR_GET_CONST(filters_, vector<ListServiceInstanceResourcesRequest::Filters>) };
    inline vector<ListServiceInstanceResourcesRequest::Filters> getFilters() { DARABONBA_PTR_GET(filters_, vector<ListServiceInstanceResourcesRequest::Filters>) };
    inline ListServiceInstanceResourcesRequest& setFilters(const vector<ListServiceInstanceResourcesRequest::Filters> & filters) { DARABONBA_PTR_SET_VALUE(filters_, filters) };
    inline ListServiceInstanceResourcesRequest& setFilters(vector<ListServiceInstanceResourcesRequest::Filters> && filters) { DARABONBA_PTR_SET_RVALUE(filters_, filters) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListServiceInstanceResourcesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListServiceInstanceResourcesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListServiceInstanceResourcesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // serviceInstanceId Field Functions 
    bool hasServiceInstanceId() const { return this->serviceInstanceId_ != nullptr;};
    void deleteServiceInstanceId() { this->serviceInstanceId_ = nullptr;};
    inline string getServiceInstanceId() const { DARABONBA_PTR_GET_DEFAULT(serviceInstanceId_, "") };
    inline ListServiceInstanceResourcesRequest& setServiceInstanceId(string serviceInstanceId) { DARABONBA_PTR_SET_VALUE(serviceInstanceId_, serviceInstanceId) };


    // serviceInstanceResourceType Field Functions 
    bool hasServiceInstanceResourceType() const { return this->serviceInstanceResourceType_ != nullptr;};
    void deleteServiceInstanceResourceType() { this->serviceInstanceResourceType_ = nullptr;};
    inline string getServiceInstanceResourceType() const { DARABONBA_PTR_GET_DEFAULT(serviceInstanceResourceType_, "") };
    inline ListServiceInstanceResourcesRequest& setServiceInstanceResourceType(string serviceInstanceResourceType) { DARABONBA_PTR_SET_VALUE(serviceInstanceResourceType_, serviceInstanceResourceType) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<ListServiceInstanceResourcesRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<ListServiceInstanceResourcesRequest::Tag>) };
    inline vector<ListServiceInstanceResourcesRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<ListServiceInstanceResourcesRequest::Tag>) };
    inline ListServiceInstanceResourcesRequest& setTag(const vector<ListServiceInstanceResourcesRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline ListServiceInstanceResourcesRequest& setTag(vector<ListServiceInstanceResourcesRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The filter conditions. Valid values:
    // 
    // - ExpireTimeStart: The start of the time range to query the expiration time of subscription resources.
    //   >Notice: This parameter applies only to service instances in private deployments.
    // 
    // - ExpireTimeEnd: The end of the time range to query the expiration time of subscription resources.
    //   >Notice: This parameter applies only to service instances in private deployments.
    // 
    // - PayType: The billing method.>Notice:  This parameter applies only to service instances in private deployments.
    //   Valid values:
    // 
    //   - Subscription: subscription.
    // 
    //   - PayAsYouGo: pay-as-you-go.
    // 
    // - ResourceARN: The Alibaba Cloud Resource Name (ARN) of the resource.
    // 
    // resource name (ARN).
    shared_ptr<vector<ListServiceInstanceResourcesRequest::Filters>> filters_ {};
    // The number of entries to return on each page. Maximum value: 100. Default value: 20.
    shared_ptr<int32_t> maxResults_ {};
    // The token that is used to retrieve the next page of results. Set this to the NextToken value from a previous API call.
    shared_ptr<string> nextToken_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
    // The ID of the service instance.
    // 
    // This parameter is required.
    shared_ptr<string> serviceInstanceId_ {};
    // The resource type of the service instance. Valid values:
    // 
    // - AliyunResource: an Alibaba Cloud resource.
    // 
    // - ContainerResource: a container group (pod) resource.
    shared_ptr<string> serviceInstanceResourceType_ {};
    // The resource tags.
    shared_ptr<vector<ListServiceInstanceResourcesRequest::Tag>> tag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNest20210601
#endif
