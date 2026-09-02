// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEDICATEDHOSTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEDICATEDHOSTSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeDedicatedHostsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDedicatedHostsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DedicatedHostClusterId, dedicatedHostClusterId_);
      DARABONBA_PTR_TO_JSON(DedicatedHostIds, dedicatedHostIds_);
      DARABONBA_PTR_TO_JSON(DedicatedHostName, dedicatedHostName_);
      DARABONBA_PTR_TO_JSON(DedicatedHostType, dedicatedHostType_);
      DARABONBA_PTR_TO_JSON(LockReason, lockReason_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(QueryInventory, queryInventory_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SocketDetails, socketDetails_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDedicatedHostsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DedicatedHostClusterId, dedicatedHostClusterId_);
      DARABONBA_PTR_FROM_JSON(DedicatedHostIds, dedicatedHostIds_);
      DARABONBA_PTR_FROM_JSON(DedicatedHostName, dedicatedHostName_);
      DARABONBA_PTR_FROM_JSON(DedicatedHostType, dedicatedHostType_);
      DARABONBA_PTR_FROM_JSON(LockReason, lockReason_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(QueryInventory, queryInventory_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SocketDetails, socketDetails_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeDedicatedHostsRequest() = default ;
    DescribeDedicatedHostsRequest(const DescribeDedicatedHostsRequest &) = default ;
    DescribeDedicatedHostsRequest(DescribeDedicatedHostsRequest &&) = default ;
    DescribeDedicatedHostsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDedicatedHostsRequest() = default ;
    DescribeDedicatedHostsRequest& operator=(const DescribeDedicatedHostsRequest &) = default ;
    DescribeDedicatedHostsRequest& operator=(DescribeDedicatedHostsRequest &&) = default ;
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
      // The tag key of the dedicated host. If you specify this parameter, the value cannot be an empty string. The tag key can be up to 128 characters in length and cannot start with `aliyun` or `acs:`. It cannot contain `http://` or `https://`.
      shared_ptr<string> key_ {};
      // The tag value of the dedicated host. If you specify this parameter, the value can be an empty string. The tag value can be up to 128 characters in length and cannot contain `http://` or `https://`.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->dedicatedHostClusterId_ == nullptr
        && this->dedicatedHostIds_ == nullptr && this->dedicatedHostName_ == nullptr && this->dedicatedHostType_ == nullptr && this->lockReason_ == nullptr && this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr
        && this->queryInventory_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr
        && this->socketDetails_ == nullptr && this->status_ == nullptr && this->tag_ == nullptr && this->zoneId_ == nullptr; };
    // dedicatedHostClusterId Field Functions 
    bool hasDedicatedHostClusterId() const { return this->dedicatedHostClusterId_ != nullptr;};
    void deleteDedicatedHostClusterId() { this->dedicatedHostClusterId_ = nullptr;};
    inline string getDedicatedHostClusterId() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostClusterId_, "") };
    inline DescribeDedicatedHostsRequest& setDedicatedHostClusterId(string dedicatedHostClusterId) { DARABONBA_PTR_SET_VALUE(dedicatedHostClusterId_, dedicatedHostClusterId) };


    // dedicatedHostIds Field Functions 
    bool hasDedicatedHostIds() const { return this->dedicatedHostIds_ != nullptr;};
    void deleteDedicatedHostIds() { this->dedicatedHostIds_ = nullptr;};
    inline string getDedicatedHostIds() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostIds_, "") };
    inline DescribeDedicatedHostsRequest& setDedicatedHostIds(string dedicatedHostIds) { DARABONBA_PTR_SET_VALUE(dedicatedHostIds_, dedicatedHostIds) };


    // dedicatedHostName Field Functions 
    bool hasDedicatedHostName() const { return this->dedicatedHostName_ != nullptr;};
    void deleteDedicatedHostName() { this->dedicatedHostName_ = nullptr;};
    inline string getDedicatedHostName() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostName_, "") };
    inline DescribeDedicatedHostsRequest& setDedicatedHostName(string dedicatedHostName) { DARABONBA_PTR_SET_VALUE(dedicatedHostName_, dedicatedHostName) };


    // dedicatedHostType Field Functions 
    bool hasDedicatedHostType() const { return this->dedicatedHostType_ != nullptr;};
    void deleteDedicatedHostType() { this->dedicatedHostType_ = nullptr;};
    inline string getDedicatedHostType() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostType_, "") };
    inline DescribeDedicatedHostsRequest& setDedicatedHostType(string dedicatedHostType) { DARABONBA_PTR_SET_VALUE(dedicatedHostType_, dedicatedHostType) };


    // lockReason Field Functions 
    bool hasLockReason() const { return this->lockReason_ != nullptr;};
    void deleteLockReason() { this->lockReason_ = nullptr;};
    inline string getLockReason() const { DARABONBA_PTR_GET_DEFAULT(lockReason_, "") };
    inline DescribeDedicatedHostsRequest& setLockReason(string lockReason) { DARABONBA_PTR_SET_VALUE(lockReason_, lockReason) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeDedicatedHostsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeDedicatedHostsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline DescribeDedicatedHostsRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeDedicatedHostsRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeDedicatedHostsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeDedicatedHostsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // queryInventory Field Functions 
    bool hasQueryInventory() const { return this->queryInventory_ != nullptr;};
    void deleteQueryInventory() { this->queryInventory_ = nullptr;};
    inline bool getQueryInventory() const { DARABONBA_PTR_GET_DEFAULT(queryInventory_, false) };
    inline DescribeDedicatedHostsRequest& setQueryInventory(bool queryInventory) { DARABONBA_PTR_SET_VALUE(queryInventory_, queryInventory) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeDedicatedHostsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeDedicatedHostsRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DescribeDedicatedHostsRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribeDedicatedHostsRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // socketDetails Field Functions 
    bool hasSocketDetails() const { return this->socketDetails_ != nullptr;};
    void deleteSocketDetails() { this->socketDetails_ = nullptr;};
    inline string getSocketDetails() const { DARABONBA_PTR_GET_DEFAULT(socketDetails_, "") };
    inline DescribeDedicatedHostsRequest& setSocketDetails(string socketDetails) { DARABONBA_PTR_SET_VALUE(socketDetails_, socketDetails) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeDedicatedHostsRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<DescribeDedicatedHostsRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<DescribeDedicatedHostsRequest::Tag>) };
    inline vector<DescribeDedicatedHostsRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<DescribeDedicatedHostsRequest::Tag>) };
    inline DescribeDedicatedHostsRequest& setTag(const vector<DescribeDedicatedHostsRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeDedicatedHostsRequest& setTag(vector<DescribeDedicatedHostsRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeDedicatedHostsRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The ID of the dedicated host cluster.
    shared_ptr<string> dedicatedHostClusterId_ {};
    // The list of dedicated host IDs. You can specify up to 100 IDs, separated by commas (,).
    shared_ptr<string> dedicatedHostIds_ {};
    // The name of the dedicated host.
    shared_ptr<string> dedicatedHostName_ {};
    // The type of the dedicated host. You can call [DescribeDedicatedHostTypes](https://help.aliyun.com/document_detail/134240.html) to query the most recent list of dedicated host types.
    shared_ptr<string> dedicatedHostType_ {};
    // The reason why the dedicated host is locked. Valid values:
    // - financial: The dedicated host is locked due to an overdue payment.
    // - security: The dedicated host is locked for security reasons.
    shared_ptr<string> lockReason_ {};
    // The maximum number of entries per page for a paged query. If you set this parameter, the MaxResults and NextToken parameters are used together for paging.
    // 
    // Maximum value: 100.
    // 
    // Default value: 10.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token. Set this parameter to the NextToken value returned in the previous call. You do not need to set this parameter for the first request.
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // > This parameter will be offline soon. Use NextToken and MaxResults to perform paged query operations for paging.
    shared_ptr<int32_t> pageNumber_ {};
    // > This parameter will be offline soon. Use NextToken and MaxResults to perform paged query operations for paging.
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<bool> queryInventory_ {};
    // The region ID of the dedicated host. You can call [DescribeRegions](https://help.aliyun.com/document_detail/25609.html) to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The ID of the resource group to which the dedicated host belongs. When you use this parameter to filter resources, the resource count cannot exceed 1000.
    // 
    // > Filtering by the default resource group is not supported.
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // Specifies whether to display socket-level capacity information. You can use socket-level capacity information to view remaining resources (vCPUs, memory usage, remaining capacity, and total capacity) to determine whether an ECS instance of a specific instance type can be created. Valid values:
    // 
    // - true: Displays socket-level capacity information. Only specific dedicated host types support displaying socket-level resource information. For more information, see [View and export DDH information](https://help.aliyun.com/document_detail/68989.html).
    // - false: Does not display socket-level capacity information.
    // 
    // >Notice: 
    // 
    // Each dedicated host typically has two CPUs, numbered Socket 0 and Socket 1. On a dedicated host, ECS instances are not created across sockets to ensure maximum performance. An ECS instance is created based on a single socket only.
    // 
    // - If the remaining computing resources of one socket are greater than or equal to the ECS instance type to be created, the ECS instance is created.
    // - If the remaining computing resources of each socket are less than the ECS instance type to be created, the ECS instance fails to be created, even if the combined remaining resources of both sockets exceed the ECS instance type requirements.
    // </notice>
    shared_ptr<string> socketDetails_ {};
    // The usage status of the dedicated host. Valid values:
    // 
    // - Available: The dedicated host is running as expected.
    // 
    // - UnderAssessment: The physical machine has potential risks. The physical machine is available but may cause issues for ECS instances on the dedicated host.
    // 
    // - PermanentFailure: The dedicated host has a permanent failure and is unavailable.
    // 
    // - TempUnavailable: The dedicated host is temporarily unavailable.
    // 
    // - Redeploying: The dedicated host is being restored.
    // 
    // Default value: Available.
    shared_ptr<string> status_ {};
    // The tags. You can specify up to 20 tags.
    shared_ptr<vector<DescribeDedicatedHostsRequest::Tag>> tag_ {};
    // The zone ID. You can call [DescribeZones](https://help.aliyun.com/document_detail/25610.html) to query the most recent zone list.
    shared_ptr<string> zoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
