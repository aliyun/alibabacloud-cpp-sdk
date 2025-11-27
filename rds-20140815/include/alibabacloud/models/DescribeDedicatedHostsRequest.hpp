// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEDICATEDHOSTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEDICATEDHOSTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeDedicatedHostsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDedicatedHostsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AllocationStatus, allocationStatus_);
      DARABONBA_PTR_TO_JSON(DedicatedHostGroupId, dedicatedHostGroupId_);
      DARABONBA_PTR_TO_JSON(DedicatedHostId, dedicatedHostId_);
      DARABONBA_PTR_TO_JSON(HostStatus, hostStatus_);
      DARABONBA_PTR_TO_JSON(HostType, hostType_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDedicatedHostsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AllocationStatus, allocationStatus_);
      DARABONBA_PTR_FROM_JSON(DedicatedHostGroupId, dedicatedHostGroupId_);
      DARABONBA_PTR_FROM_JSON(DedicatedHostId, dedicatedHostId_);
      DARABONBA_PTR_FROM_JSON(HostStatus, hostStatus_);
      DARABONBA_PTR_FROM_JSON(HostType, hostType_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
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
    virtual bool empty() const override { return this->allocationStatus_ == nullptr
        && return this->dedicatedHostGroupId_ == nullptr && return this->dedicatedHostId_ == nullptr && return this->hostStatus_ == nullptr && return this->hostType_ == nullptr && return this->orderId_ == nullptr
        && return this->ownerId_ == nullptr && return this->regionId_ == nullptr && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr && return this->zoneId_ == nullptr; };
    // allocationStatus Field Functions 
    bool hasAllocationStatus() const { return this->allocationStatus_ != nullptr;};
    void deleteAllocationStatus() { this->allocationStatus_ = nullptr;};
    inline string allocationStatus() const { DARABONBA_PTR_GET_DEFAULT(allocationStatus_, "") };
    inline DescribeDedicatedHostsRequest& setAllocationStatus(string allocationStatus) { DARABONBA_PTR_SET_VALUE(allocationStatus_, allocationStatus) };


    // dedicatedHostGroupId Field Functions 
    bool hasDedicatedHostGroupId() const { return this->dedicatedHostGroupId_ != nullptr;};
    void deleteDedicatedHostGroupId() { this->dedicatedHostGroupId_ = nullptr;};
    inline string dedicatedHostGroupId() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostGroupId_, "") };
    inline DescribeDedicatedHostsRequest& setDedicatedHostGroupId(string dedicatedHostGroupId) { DARABONBA_PTR_SET_VALUE(dedicatedHostGroupId_, dedicatedHostGroupId) };


    // dedicatedHostId Field Functions 
    bool hasDedicatedHostId() const { return this->dedicatedHostId_ != nullptr;};
    void deleteDedicatedHostId() { this->dedicatedHostId_ = nullptr;};
    inline string dedicatedHostId() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostId_, "") };
    inline DescribeDedicatedHostsRequest& setDedicatedHostId(string dedicatedHostId) { DARABONBA_PTR_SET_VALUE(dedicatedHostId_, dedicatedHostId) };


    // hostStatus Field Functions 
    bool hasHostStatus() const { return this->hostStatus_ != nullptr;};
    void deleteHostStatus() { this->hostStatus_ = nullptr;};
    inline string hostStatus() const { DARABONBA_PTR_GET_DEFAULT(hostStatus_, "") };
    inline DescribeDedicatedHostsRequest& setHostStatus(string hostStatus) { DARABONBA_PTR_SET_VALUE(hostStatus_, hostStatus) };


    // hostType Field Functions 
    bool hasHostType() const { return this->hostType_ != nullptr;};
    void deleteHostType() { this->hostType_ = nullptr;};
    inline string hostType() const { DARABONBA_PTR_GET_DEFAULT(hostType_, "") };
    inline DescribeDedicatedHostsRequest& setHostType(string hostType) { DARABONBA_PTR_SET_VALUE(hostType_, hostType) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline int64_t orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
    inline DescribeDedicatedHostsRequest& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeDedicatedHostsRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeDedicatedHostsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


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


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeDedicatedHostsRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // Specifies whether instances can be deployed on the host. Valid values:
    // 
    // *   **0**: Instances cannot be deployed on the host.
    // *   **1**: Instances can be deployed on the host.
    std::shared_ptr<string> allocationStatus_ = nullptr;
    // The dedicated cluster ID. You can call the DescribeDedicatedHostGroups operation to query the dedicated cluster ID.
    std::shared_ptr<string> dedicatedHostGroupId_ = nullptr;
    // The ID of the host in the dedicated cluster.
    std::shared_ptr<string> dedicatedHostId_ = nullptr;
    // The status of the host. Valid values:
    // 
    // *   **0**: creating
    // *   **1**: running
    // *   **2**: faulty
    // *   **3**: being replaced
    // *   **4**: deprecated
    // *   **5**: deleting
    // *   **6**: restarting
    std::shared_ptr<string> hostStatus_ = nullptr;
    // The storage type of the host. Valid values:
    // 
    // *   **dhg_cloud_ssd**: enhanced SSD (ESSD)
    // *   **dhg_local_ssd**: local SSD
    std::shared_ptr<string> hostType_ = nullptr;
    // The order ID.
    std::shared_ptr<int64_t> orderId_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The region ID. You can call the DescribeRegions operation to query the most recent region list.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The zone ID.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
