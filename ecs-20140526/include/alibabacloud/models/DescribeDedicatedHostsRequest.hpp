// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEDICATEDHOSTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEDICATEDHOSTSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDedicatedHostsRequestTag.hpp>
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
    virtual bool empty() const override { return this->dedicatedHostClusterId_ == nullptr
        && return this->dedicatedHostIds_ == nullptr && return this->dedicatedHostName_ == nullptr && return this->dedicatedHostType_ == nullptr && return this->lockReason_ == nullptr && return this->maxResults_ == nullptr
        && return this->nextToken_ == nullptr && return this->ownerAccount_ == nullptr && return this->ownerId_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr
        && return this->queryInventory_ == nullptr && return this->regionId_ == nullptr && return this->resourceGroupId_ == nullptr && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr
        && return this->socketDetails_ == nullptr && return this->status_ == nullptr && return this->tag_ == nullptr && return this->zoneId_ == nullptr; };
    // dedicatedHostClusterId Field Functions 
    bool hasDedicatedHostClusterId() const { return this->dedicatedHostClusterId_ != nullptr;};
    void deleteDedicatedHostClusterId() { this->dedicatedHostClusterId_ = nullptr;};
    inline string dedicatedHostClusterId() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostClusterId_, "") };
    inline DescribeDedicatedHostsRequest& setDedicatedHostClusterId(string dedicatedHostClusterId) { DARABONBA_PTR_SET_VALUE(dedicatedHostClusterId_, dedicatedHostClusterId) };


    // dedicatedHostIds Field Functions 
    bool hasDedicatedHostIds() const { return this->dedicatedHostIds_ != nullptr;};
    void deleteDedicatedHostIds() { this->dedicatedHostIds_ = nullptr;};
    inline string dedicatedHostIds() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostIds_, "") };
    inline DescribeDedicatedHostsRequest& setDedicatedHostIds(string dedicatedHostIds) { DARABONBA_PTR_SET_VALUE(dedicatedHostIds_, dedicatedHostIds) };


    // dedicatedHostName Field Functions 
    bool hasDedicatedHostName() const { return this->dedicatedHostName_ != nullptr;};
    void deleteDedicatedHostName() { this->dedicatedHostName_ = nullptr;};
    inline string dedicatedHostName() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostName_, "") };
    inline DescribeDedicatedHostsRequest& setDedicatedHostName(string dedicatedHostName) { DARABONBA_PTR_SET_VALUE(dedicatedHostName_, dedicatedHostName) };


    // dedicatedHostType Field Functions 
    bool hasDedicatedHostType() const { return this->dedicatedHostType_ != nullptr;};
    void deleteDedicatedHostType() { this->dedicatedHostType_ = nullptr;};
    inline string dedicatedHostType() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostType_, "") };
    inline DescribeDedicatedHostsRequest& setDedicatedHostType(string dedicatedHostType) { DARABONBA_PTR_SET_VALUE(dedicatedHostType_, dedicatedHostType) };


    // lockReason Field Functions 
    bool hasLockReason() const { return this->lockReason_ != nullptr;};
    void deleteLockReason() { this->lockReason_ = nullptr;};
    inline string lockReason() const { DARABONBA_PTR_GET_DEFAULT(lockReason_, "") };
    inline DescribeDedicatedHostsRequest& setLockReason(string lockReason) { DARABONBA_PTR_SET_VALUE(lockReason_, lockReason) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeDedicatedHostsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeDedicatedHostsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline DescribeDedicatedHostsRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeDedicatedHostsRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeDedicatedHostsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeDedicatedHostsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // queryInventory Field Functions 
    bool hasQueryInventory() const { return this->queryInventory_ != nullptr;};
    void deleteQueryInventory() { this->queryInventory_ = nullptr;};
    inline bool queryInventory() const { DARABONBA_PTR_GET_DEFAULT(queryInventory_, false) };
    inline DescribeDedicatedHostsRequest& setQueryInventory(bool queryInventory) { DARABONBA_PTR_SET_VALUE(queryInventory_, queryInventory) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeDedicatedHostsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeDedicatedHostsRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DescribeDedicatedHostsRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribeDedicatedHostsRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // socketDetails Field Functions 
    bool hasSocketDetails() const { return this->socketDetails_ != nullptr;};
    void deleteSocketDetails() { this->socketDetails_ = nullptr;};
    inline string socketDetails() const { DARABONBA_PTR_GET_DEFAULT(socketDetails_, "") };
    inline DescribeDedicatedHostsRequest& setSocketDetails(string socketDetails) { DARABONBA_PTR_SET_VALUE(socketDetails_, socketDetails) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeDedicatedHostsRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<DescribeDedicatedHostsRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<DescribeDedicatedHostsRequestTag>) };
    inline vector<DescribeDedicatedHostsRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<DescribeDedicatedHostsRequestTag>) };
    inline DescribeDedicatedHostsRequest& setTag(const vector<DescribeDedicatedHostsRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeDedicatedHostsRequest& setTag(vector<DescribeDedicatedHostsRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeDedicatedHostsRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The ID of the dedicated host cluster.
    std::shared_ptr<string> dedicatedHostClusterId_ = nullptr;
    // The list of DDH IDs. You can specify up to 100 deployment set IDs in each request. Separate the deployment set IDs with commas (,).
    std::shared_ptr<string> dedicatedHostIds_ = nullptr;
    // The name of the dedicated host.
    std::shared_ptr<string> dedicatedHostName_ = nullptr;
    // The type of the DDH. You can call the [DescribeDedicatedHostTypes](https://help.aliyun.com/document_detail/134240.html) operation to query the most recent list of DDH types.
    std::shared_ptr<string> dedicatedHostType_ = nullptr;
    // The reason why the dedicated host is locked. Valid values:
    // 
    // *   financial: The dedicated host is locked due to overdue payments.
    // *   security: The dedicated host is locked due to security reasons.
    std::shared_ptr<string> lockReason_ = nullptr;
    // The maximum number of entries per page. If you specify this parameter, both MaxResults and NextToken are used for a paged query.
    // 
    // Valid values: 1 to 100.
    // 
    // Default value: 10.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The pagination token that is used in the next request to retrieve a new page of results. You do not need to specify this parameter for the first request. You must specify the token that is obtained from the previous query as the value of NextToken.
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // >  This parameter will be removed in the future. You can use NextToken and MaxResults for a paged query.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // >  This parameter will be removed in the future. You can use NextToken and MaxResults for a paged query.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<bool> queryInventory_ = nullptr;
    // The region ID of the dedicated host. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/25609.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group to which the dedicated host belongs. When this parameter is specified to query resources, up to 1,000 resources that belong to the specified resource group can be displayed in the response.
    // 
    // > Resources in the default resource group are displayed in the response regardless of how this parameter is set.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // Specifies whether to display socket information. You can view the remaining resources (vCPUs, memory usage, remaining resources, and total resources) based on the capacity information of the socket dimension. Then you can determine whether ECS instances of the corresponding specifications can be created. Valid values:
    // 
    // *   true Only some DDHs support the information about resources in the socket dimension. For more information, see [View and export information about DDHs](https://help.aliyun.com/document_detail/68989.html).
    // *   false
    // 
    // >  Each DDH generally has two CPUs, and each CPU corresponds to Socket 0 and Socket 1. To maximize the performance of an ECS instance on a DDH, ECS instances are not created across sockets.
    // 
    // *   If one socket has available computing resources for creating the ECS instance, creation succeeds.
    // 
    // *   If not, creation fails even if the combined available resources of both sockets are sufficient. Although the remaining resources of the two sockets on the DDH are larger than the ECS instance type, the ECS instance cannot be created.
    std::shared_ptr<string> socketDetails_ = nullptr;
    // The service state of the dedicated host. Valid values:
    // 
    // *   Available: The dedicated host is running normally.
    // *   UnderAssessment: The dedicated host is available but has potential risks that may cause the ECS instances on the dedicated host to fail.
    // *   PermanentFailure: The dedicated host encounters permanent failures and is unavailable.
    // *   TempUnavailable: The dedicated host is temporarily unavailable.
    // *   Redeploying: The dedicated host is being restored.
    // 
    // Default value: Available.
    std::shared_ptr<string> status_ = nullptr;
    // The list of tags. The list length ranges from 0 to 20.
    std::shared_ptr<vector<DescribeDedicatedHostsRequestTag>> tag_ = nullptr;
    // The zone ID of the dedicated host. You can call the [DescribeZones](https://help.aliyun.com/document_detail/25610.html) operation to query the most recent zone list.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
