// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDISCOVEREDRESOURCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDISCOVEREDRESOURCESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class ListDiscoveredResourcesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDiscoveredResourcesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndUpdateTimestamp, endUpdateTimestamp_);
      DARABONBA_PTR_TO_JSON(ExcludeResourceTypes, excludeResourceTypes_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Regions, regions_);
      DARABONBA_PTR_TO_JSON(ResourceDeleted, resourceDeleted_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceName, resourceName_);
      DARABONBA_PTR_TO_JSON(ResourceTypes, resourceTypes_);
      DARABONBA_PTR_TO_JSON(StartUpdateTimestamp, startUpdateTimestamp_);
    };
    friend void from_json(const Darabonba::Json& j, ListDiscoveredResourcesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndUpdateTimestamp, endUpdateTimestamp_);
      DARABONBA_PTR_FROM_JSON(ExcludeResourceTypes, excludeResourceTypes_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Regions, regions_);
      DARABONBA_PTR_FROM_JSON(ResourceDeleted, resourceDeleted_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceName, resourceName_);
      DARABONBA_PTR_FROM_JSON(ResourceTypes, resourceTypes_);
      DARABONBA_PTR_FROM_JSON(StartUpdateTimestamp, startUpdateTimestamp_);
    };
    ListDiscoveredResourcesRequest() = default ;
    ListDiscoveredResourcesRequest(const ListDiscoveredResourcesRequest &) = default ;
    ListDiscoveredResourcesRequest(ListDiscoveredResourcesRequest &&) = default ;
    ListDiscoveredResourcesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDiscoveredResourcesRequest() = default ;
    ListDiscoveredResourcesRequest& operator=(const ListDiscoveredResourcesRequest &) = default ;
    ListDiscoveredResourcesRequest& operator=(ListDiscoveredResourcesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endUpdateTimestamp_ == nullptr
        && this->excludeResourceTypes_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->regions_ == nullptr && this->resourceDeleted_ == nullptr
        && this->resourceId_ == nullptr && this->resourceName_ == nullptr && this->resourceTypes_ == nullptr && this->startUpdateTimestamp_ == nullptr; };
    // endUpdateTimestamp Field Functions 
    bool hasEndUpdateTimestamp() const { return this->endUpdateTimestamp_ != nullptr;};
    void deleteEndUpdateTimestamp() { this->endUpdateTimestamp_ = nullptr;};
    inline int64_t getEndUpdateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(endUpdateTimestamp_, 0L) };
    inline ListDiscoveredResourcesRequest& setEndUpdateTimestamp(int64_t endUpdateTimestamp) { DARABONBA_PTR_SET_VALUE(endUpdateTimestamp_, endUpdateTimestamp) };


    // excludeResourceTypes Field Functions 
    bool hasExcludeResourceTypes() const { return this->excludeResourceTypes_ != nullptr;};
    void deleteExcludeResourceTypes() { this->excludeResourceTypes_ = nullptr;};
    inline string getExcludeResourceTypes() const { DARABONBA_PTR_GET_DEFAULT(excludeResourceTypes_, "") };
    inline ListDiscoveredResourcesRequest& setExcludeResourceTypes(string excludeResourceTypes) { DARABONBA_PTR_SET_VALUE(excludeResourceTypes_, excludeResourceTypes) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListDiscoveredResourcesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListDiscoveredResourcesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // regions Field Functions 
    bool hasRegions() const { return this->regions_ != nullptr;};
    void deleteRegions() { this->regions_ = nullptr;};
    inline string getRegions() const { DARABONBA_PTR_GET_DEFAULT(regions_, "") };
    inline ListDiscoveredResourcesRequest& setRegions(string regions) { DARABONBA_PTR_SET_VALUE(regions_, regions) };


    // resourceDeleted Field Functions 
    bool hasResourceDeleted() const { return this->resourceDeleted_ != nullptr;};
    void deleteResourceDeleted() { this->resourceDeleted_ = nullptr;};
    inline int32_t getResourceDeleted() const { DARABONBA_PTR_GET_DEFAULT(resourceDeleted_, 0) };
    inline ListDiscoveredResourcesRequest& setResourceDeleted(int32_t resourceDeleted) { DARABONBA_PTR_SET_VALUE(resourceDeleted_, resourceDeleted) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline ListDiscoveredResourcesRequest& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceName Field Functions 
    bool hasResourceName() const { return this->resourceName_ != nullptr;};
    void deleteResourceName() { this->resourceName_ = nullptr;};
    inline string getResourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
    inline ListDiscoveredResourcesRequest& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


    // resourceTypes Field Functions 
    bool hasResourceTypes() const { return this->resourceTypes_ != nullptr;};
    void deleteResourceTypes() { this->resourceTypes_ = nullptr;};
    inline string getResourceTypes() const { DARABONBA_PTR_GET_DEFAULT(resourceTypes_, "") };
    inline ListDiscoveredResourcesRequest& setResourceTypes(string resourceTypes) { DARABONBA_PTR_SET_VALUE(resourceTypes_, resourceTypes) };


    // startUpdateTimestamp Field Functions 
    bool hasStartUpdateTimestamp() const { return this->startUpdateTimestamp_ != nullptr;};
    void deleteStartUpdateTimestamp() { this->startUpdateTimestamp_ = nullptr;};
    inline int64_t getStartUpdateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(startUpdateTimestamp_, 0L) };
    inline ListDiscoveredResourcesRequest& setStartUpdateTimestamp(int64_t startUpdateTimestamp) { DARABONBA_PTR_SET_VALUE(startUpdateTimestamp_, startUpdateTimestamp) };


  protected:
    // The end of the time range to query resources, specified as a UNIX timestamp in milliseconds. Note:
    // 
    // - The value cannot be earlier than StartUpdateTimestamp.
    // 
    // - The time interval between StartUpdateTimestamp and EndUpdateTimestamp cannot exceed 30 days.
    // 
    // - Specify both StartUpdateTimestamp and EndUpdateTimestamp, or leave both blank.
    shared_ptr<int64_t> endUpdateTimestamp_ {};
    // The resource types to exclude. Separate multiple resource types with commas (,). This parameter takes precedence over the ResourceTypes parameter.
    shared_ptr<string> excludeResourceTypes_ {};
    // The maximum number of entries to return on each page. Valid values: 1 to 100.
    // 
    // This parameter is required.
    shared_ptr<int32_t> maxResults_ {};
    // A pagination token. If the response is truncated, use this token in a subsequent request to retrieve the next page of results.
    shared_ptr<string> nextToken_ {};
    // The ID of the region where the resource resides. Separate multiple region IDs with commas (,).
    shared_ptr<string> regions_ {};
    // The status of the resource. Valid values:
    // 
    // - 0: The resource is deleted. If you delete a resource in the corresponding Alibaba Cloud service, Cloud Config displays the resource as **Deleted**.
    // 
    // - 1 (Default): The resource is active. If a resource is managed, Cloud Config displays the resource as **Active**.
    shared_ptr<int32_t> resourceDeleted_ {};
    // The resource ID.
    shared_ptr<string> resourceId_ {};
    // The resource name.
    shared_ptr<string> resourceName_ {};
    // The resource type. Separate multiple resource types with commas (,).
    shared_ptr<string> resourceTypes_ {};
    // The start of the time range to query resources, specified as a UNIX timestamp in milliseconds. Note:
    // 
    // - The value cannot be later than EndUpdateTimestamp.
    // 
    // - The time interval between StartUpdateTimestamp and EndUpdateTimestamp cannot exceed 30 days.
    // 
    // - Specify both StartUpdateTimestamp and EndUpdateTimestamp, or leave both blank.
    shared_ptr<int64_t> startUpdateTimestamp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
