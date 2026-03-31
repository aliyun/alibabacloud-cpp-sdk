// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGGREGATERESOURCECONFIGURATIONTIMELINEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAGGREGATERESOURCECONFIGURATIONTIMELINEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetAggregateResourceConfigurationTimelineRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAggregateResourceConfigurationTimelineRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AggregatorId, aggregatorId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(ResourceAccountId, resourceAccountId_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetAggregateResourceConfigurationTimelineRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AggregatorId, aggregatorId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(ResourceAccountId, resourceAccountId_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    GetAggregateResourceConfigurationTimelineRequest() = default ;
    GetAggregateResourceConfigurationTimelineRequest(const GetAggregateResourceConfigurationTimelineRequest &) = default ;
    GetAggregateResourceConfigurationTimelineRequest(GetAggregateResourceConfigurationTimelineRequest &&) = default ;
    GetAggregateResourceConfigurationTimelineRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAggregateResourceConfigurationTimelineRequest() = default ;
    GetAggregateResourceConfigurationTimelineRequest& operator=(const GetAggregateResourceConfigurationTimelineRequest &) = default ;
    GetAggregateResourceConfigurationTimelineRequest& operator=(GetAggregateResourceConfigurationTimelineRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aggregatorId_ == nullptr
        && this->endTime_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->region_ == nullptr && this->resourceAccountId_ == nullptr
        && this->resourceId_ == nullptr && this->resourceOwnerId_ == nullptr && this->resourceType_ == nullptr && this->startTime_ == nullptr; };
    // aggregatorId Field Functions 
    bool hasAggregatorId() const { return this->aggregatorId_ != nullptr;};
    void deleteAggregatorId() { this->aggregatorId_ = nullptr;};
    inline string getAggregatorId() const { DARABONBA_PTR_GET_DEFAULT(aggregatorId_, "") };
    inline GetAggregateResourceConfigurationTimelineRequest& setAggregatorId(string aggregatorId) { DARABONBA_PTR_SET_VALUE(aggregatorId_, aggregatorId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline GetAggregateResourceConfigurationTimelineRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline GetAggregateResourceConfigurationTimelineRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline GetAggregateResourceConfigurationTimelineRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline GetAggregateResourceConfigurationTimelineRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // resourceAccountId Field Functions 
    bool hasResourceAccountId() const { return this->resourceAccountId_ != nullptr;};
    void deleteResourceAccountId() { this->resourceAccountId_ = nullptr;};
    inline int64_t getResourceAccountId() const { DARABONBA_PTR_GET_DEFAULT(resourceAccountId_, 0L) };
    inline GetAggregateResourceConfigurationTimelineRequest& setResourceAccountId(int64_t resourceAccountId) { DARABONBA_PTR_SET_VALUE(resourceAccountId_, resourceAccountId) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline GetAggregateResourceConfigurationTimelineRequest& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline GetAggregateResourceConfigurationTimelineRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline GetAggregateResourceConfigurationTimelineRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline GetAggregateResourceConfigurationTimelineRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The ID of the account group.
    // 
    // For more information about how to obtain the ID of an account group, see [ListAggregators](https://help.aliyun.com/document_detail/255797.html).
    // 
    // This parameter is required.
    shared_ptr<string> aggregatorId_ {};
    // The end of the time range to query. The default value indicates the time when the GetAggregateResourceConfigurationTimeline operation is called. Unit: milliseconds.
    shared_ptr<int64_t> endTime_ {};
    // The maximum number of entries to return for a single request. Valid values: 1 to 100.
    shared_ptr<int32_t> maxResults_ {};
    // The `token` that is used to initiate the next request if the response of the current request is truncated. You can use the token to initiate another request and obtain the remaining records.
    shared_ptr<string> nextToken_ {};
    // The ID of the region in which the resource resides.
    // 
    // For more information about how to obtain the ID of a region, see [ListAggregateDiscoveredResources](https://help.aliyun.com/document_detail/265983.html).
    // 
    // This parameter is required.
    shared_ptr<string> region_ {};
    // Required. The ID of the Alibaba Cloud account to which the specified resource belongs in the account group.
    shared_ptr<int64_t> resourceAccountId_ {};
    // The resource ID.
    // 
    // For more information about how to query the ID of a resource, see [ListAggregateDiscoveredResources](https://help.aliyun.com/document_detail/265983.html).
    // 
    // This parameter is required.
    shared_ptr<string> resourceId_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The type of the resource.
    // 
    // For more information about how to obtain the type of a resource, see [ListAggregateDiscoveredResources](https://help.aliyun.com/document_detail/265983.html).
    // 
    // This parameter is required.
    shared_ptr<string> resourceType_ {};
    // The beginning of the time range to query. By default, Cloud Config retrieves the configuration changes in the last 30 days for the specified resource. Unit: milliseconds.
    shared_ptr<int64_t> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
