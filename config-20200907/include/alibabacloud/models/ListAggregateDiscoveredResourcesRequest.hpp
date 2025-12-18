// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAGGREGATEDISCOVEREDRESOURCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAGGREGATEDISCOVEREDRESOURCESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class ListAggregateDiscoveredResourcesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAggregateDiscoveredResourcesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AggregatorId, aggregatorId_);
      DARABONBA_PTR_TO_JSON(EndUpdateTimestamp, endUpdateTimestamp_);
      DARABONBA_PTR_TO_JSON(ExcludeResourceTypes, excludeResourceTypes_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Regions, regions_);
      DARABONBA_PTR_TO_JSON(ResourceAccountId, resourceAccountId_);
      DARABONBA_PTR_TO_JSON(ResourceDeleted, resourceDeleted_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceName, resourceName_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(ResourceTypes, resourceTypes_);
      DARABONBA_PTR_TO_JSON(StartUpdateTimestamp, startUpdateTimestamp_);
    };
    friend void from_json(const Darabonba::Json& j, ListAggregateDiscoveredResourcesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AggregatorId, aggregatorId_);
      DARABONBA_PTR_FROM_JSON(EndUpdateTimestamp, endUpdateTimestamp_);
      DARABONBA_PTR_FROM_JSON(ExcludeResourceTypes, excludeResourceTypes_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Regions, regions_);
      DARABONBA_PTR_FROM_JSON(ResourceAccountId, resourceAccountId_);
      DARABONBA_PTR_FROM_JSON(ResourceDeleted, resourceDeleted_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceName, resourceName_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(ResourceTypes, resourceTypes_);
      DARABONBA_PTR_FROM_JSON(StartUpdateTimestamp, startUpdateTimestamp_);
    };
    ListAggregateDiscoveredResourcesRequest() = default ;
    ListAggregateDiscoveredResourcesRequest(const ListAggregateDiscoveredResourcesRequest &) = default ;
    ListAggregateDiscoveredResourcesRequest(ListAggregateDiscoveredResourcesRequest &&) = default ;
    ListAggregateDiscoveredResourcesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAggregateDiscoveredResourcesRequest() = default ;
    ListAggregateDiscoveredResourcesRequest& operator=(const ListAggregateDiscoveredResourcesRequest &) = default ;
    ListAggregateDiscoveredResourcesRequest& operator=(ListAggregateDiscoveredResourcesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aggregatorId_ == nullptr
        && return this->endUpdateTimestamp_ == nullptr && return this->excludeResourceTypes_ == nullptr && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr && return this->regions_ == nullptr
        && return this->resourceAccountId_ == nullptr && return this->resourceDeleted_ == nullptr && return this->resourceId_ == nullptr && return this->resourceName_ == nullptr && return this->resourceOwnerId_ == nullptr
        && return this->resourceTypes_ == nullptr && return this->startUpdateTimestamp_ == nullptr; };
    // aggregatorId Field Functions 
    bool hasAggregatorId() const { return this->aggregatorId_ != nullptr;};
    void deleteAggregatorId() { this->aggregatorId_ = nullptr;};
    inline string aggregatorId() const { DARABONBA_PTR_GET_DEFAULT(aggregatorId_, "") };
    inline ListAggregateDiscoveredResourcesRequest& setAggregatorId(string aggregatorId) { DARABONBA_PTR_SET_VALUE(aggregatorId_, aggregatorId) };


    // endUpdateTimestamp Field Functions 
    bool hasEndUpdateTimestamp() const { return this->endUpdateTimestamp_ != nullptr;};
    void deleteEndUpdateTimestamp() { this->endUpdateTimestamp_ = nullptr;};
    inline int64_t endUpdateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(endUpdateTimestamp_, 0L) };
    inline ListAggregateDiscoveredResourcesRequest& setEndUpdateTimestamp(int64_t endUpdateTimestamp) { DARABONBA_PTR_SET_VALUE(endUpdateTimestamp_, endUpdateTimestamp) };


    // excludeResourceTypes Field Functions 
    bool hasExcludeResourceTypes() const { return this->excludeResourceTypes_ != nullptr;};
    void deleteExcludeResourceTypes() { this->excludeResourceTypes_ = nullptr;};
    inline string excludeResourceTypes() const { DARABONBA_PTR_GET_DEFAULT(excludeResourceTypes_, "") };
    inline ListAggregateDiscoveredResourcesRequest& setExcludeResourceTypes(string excludeResourceTypes) { DARABONBA_PTR_SET_VALUE(excludeResourceTypes_, excludeResourceTypes) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListAggregateDiscoveredResourcesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAggregateDiscoveredResourcesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // regions Field Functions 
    bool hasRegions() const { return this->regions_ != nullptr;};
    void deleteRegions() { this->regions_ = nullptr;};
    inline string regions() const { DARABONBA_PTR_GET_DEFAULT(regions_, "") };
    inline ListAggregateDiscoveredResourcesRequest& setRegions(string regions) { DARABONBA_PTR_SET_VALUE(regions_, regions) };


    // resourceAccountId Field Functions 
    bool hasResourceAccountId() const { return this->resourceAccountId_ != nullptr;};
    void deleteResourceAccountId() { this->resourceAccountId_ = nullptr;};
    inline int64_t resourceAccountId() const { DARABONBA_PTR_GET_DEFAULT(resourceAccountId_, 0L) };
    inline ListAggregateDiscoveredResourcesRequest& setResourceAccountId(int64_t resourceAccountId) { DARABONBA_PTR_SET_VALUE(resourceAccountId_, resourceAccountId) };


    // resourceDeleted Field Functions 
    bool hasResourceDeleted() const { return this->resourceDeleted_ != nullptr;};
    void deleteResourceDeleted() { this->resourceDeleted_ = nullptr;};
    inline int32_t resourceDeleted() const { DARABONBA_PTR_GET_DEFAULT(resourceDeleted_, 0) };
    inline ListAggregateDiscoveredResourcesRequest& setResourceDeleted(int32_t resourceDeleted) { DARABONBA_PTR_SET_VALUE(resourceDeleted_, resourceDeleted) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline ListAggregateDiscoveredResourcesRequest& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceName Field Functions 
    bool hasResourceName() const { return this->resourceName_ != nullptr;};
    void deleteResourceName() { this->resourceName_ = nullptr;};
    inline string resourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
    inline ListAggregateDiscoveredResourcesRequest& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ListAggregateDiscoveredResourcesRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // resourceTypes Field Functions 
    bool hasResourceTypes() const { return this->resourceTypes_ != nullptr;};
    void deleteResourceTypes() { this->resourceTypes_ = nullptr;};
    inline string resourceTypes() const { DARABONBA_PTR_GET_DEFAULT(resourceTypes_, "") };
    inline ListAggregateDiscoveredResourcesRequest& setResourceTypes(string resourceTypes) { DARABONBA_PTR_SET_VALUE(resourceTypes_, resourceTypes) };


    // startUpdateTimestamp Field Functions 
    bool hasStartUpdateTimestamp() const { return this->startUpdateTimestamp_ != nullptr;};
    void deleteStartUpdateTimestamp() { this->startUpdateTimestamp_ = nullptr;};
    inline int64_t startUpdateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(startUpdateTimestamp_, 0L) };
    inline ListAggregateDiscoveredResourcesRequest& setStartUpdateTimestamp(int64_t startUpdateTimestamp) { DARABONBA_PTR_SET_VALUE(startUpdateTimestamp_, startUpdateTimestamp) };


  protected:
    // The ID of the account group.
    // 
    // For more information about how to obtain the ID of the account group, see [ListAggregators](https://help.aliyun.com/document_detail/255797.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> aggregatorId_ = nullptr;
    // The end time of the time range for querying resources. The value is a timestamp in the UTC format. When you specify this parameter, take note of the following limits:
    // 
    // *   The value must be a timestamp in milliseconds.
    // *   The value cannot be less than the value of the StartUpdateTimestamp parameter. The interval between the value and the value of the StartUpdateTimestamp parameter must be less than or equal to 30 days.
    // *   The StartUpdateTimestamp and EndUpdateTimestamp parameters must be specified at the same time or left empty at the same time.
    std::shared_ptr<int64_t> endUpdateTimestamp_ = nullptr;
    // The types of resources that are excluded. Separate multiple values with commas (,). If this parameter conflicts with the ResourceTypes parameter, this parameter prevails.
    std::shared_ptr<string> excludeResourceTypes_ = nullptr;
    // The maximum number of entries to return for a single request. Valid values: 1 to 100.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The `token` that you want to use to initiate the current request. If the response of the previous request is truncated, you can use this token to initiate another request and obtain the remaining entries.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The ID of the region in which the resource resides. Separate multiple region IDs with commas (,).
    std::shared_ptr<string> regions_ = nullptr;
    // The ID of the Alibaba Cloud account to which the specified resource belongs in the account group.
    std::shared_ptr<int64_t> resourceAccountId_ = nullptr;
    // The status of the resource. Valid values:
    // 
    // *   0: The resource is deleted. If a resource is deleted from the desired cloud service, **Deleted** is displayed in the resource list in the Cloud Config console.
    // *   1 (default): The resource is retained. If a resource is managed as expected, **Active** is displayed in the resource list in the Cloud Config console.
    std::shared_ptr<int32_t> resourceDeleted_ = nullptr;
    // The resource ID.
    std::shared_ptr<string> resourceId_ = nullptr;
    std::shared_ptr<string> resourceName_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The type of the resource. Separate multiple resource types with commas (,).
    std::shared_ptr<string> resourceTypes_ = nullptr;
    // The start time of the time range for querying resources. The value is a timestamp in the Coordinated Universal Time (UTC) format. When you specify this parameter, take note of the following limits:
    // 
    // *   The value must be a timestamp in milliseconds.
    // *   The value cannot be greater than the value of the EndUpdateTimestamp parameter. The interval between the value and the value of the EndUpdateTimestamp parameter must be less than or equal to 30 days.
    // *   The StartUpdateTimestamp and EndUpdateTimestamp parameters must be specified at the same time or left empty at the same time.
    std::shared_ptr<int64_t> startUpdateTimestamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
