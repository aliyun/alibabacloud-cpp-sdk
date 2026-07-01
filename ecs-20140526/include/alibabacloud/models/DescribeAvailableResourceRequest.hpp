// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAVAILABLERESOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAVAILABLERESOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeAvailableResourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAvailableResourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Cores, cores_);
      DARABONBA_PTR_TO_JSON(DataDiskCategory, dataDiskCategory_);
      DARABONBA_PTR_TO_JSON(DedicatedHostId, dedicatedHostId_);
      DARABONBA_PTR_TO_JSON(DestinationResource, destinationResource_);
      DARABONBA_PTR_TO_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(IoOptimized, ioOptimized_);
      DARABONBA_PTR_TO_JSON(Memory, memory_);
      DARABONBA_PTR_TO_JSON(NetworkCategory, networkCategory_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(Scope, scope_);
      DARABONBA_PTR_TO_JSON(SpotDuration, spotDuration_);
      DARABONBA_PTR_TO_JSON(SpotStrategy, spotStrategy_);
      DARABONBA_PTR_TO_JSON(SystemDiskCategory, systemDiskCategory_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAvailableResourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Cores, cores_);
      DARABONBA_PTR_FROM_JSON(DataDiskCategory, dataDiskCategory_);
      DARABONBA_PTR_FROM_JSON(DedicatedHostId, dedicatedHostId_);
      DARABONBA_PTR_FROM_JSON(DestinationResource, destinationResource_);
      DARABONBA_PTR_FROM_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(IoOptimized, ioOptimized_);
      DARABONBA_PTR_FROM_JSON(Memory, memory_);
      DARABONBA_PTR_FROM_JSON(NetworkCategory, networkCategory_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(Scope, scope_);
      DARABONBA_PTR_FROM_JSON(SpotDuration, spotDuration_);
      DARABONBA_PTR_FROM_JSON(SpotStrategy, spotStrategy_);
      DARABONBA_PTR_FROM_JSON(SystemDiskCategory, systemDiskCategory_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeAvailableResourceRequest() = default ;
    DescribeAvailableResourceRequest(const DescribeAvailableResourceRequest &) = default ;
    DescribeAvailableResourceRequest(DescribeAvailableResourceRequest &&) = default ;
    DescribeAvailableResourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAvailableResourceRequest() = default ;
    DescribeAvailableResourceRequest& operator=(const DescribeAvailableResourceRequest &) = default ;
    DescribeAvailableResourceRequest& operator=(DescribeAvailableResourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cores_ == nullptr
        && this->dataDiskCategory_ == nullptr && this->dedicatedHostId_ == nullptr && this->destinationResource_ == nullptr && this->instanceChargeType_ == nullptr && this->instanceType_ == nullptr
        && this->ioOptimized_ == nullptr && this->memory_ == nullptr && this->networkCategory_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr
        && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->resourceType_ == nullptr && this->scope_ == nullptr
        && this->spotDuration_ == nullptr && this->spotStrategy_ == nullptr && this->systemDiskCategory_ == nullptr && this->zoneId_ == nullptr; };
    // cores Field Functions 
    bool hasCores() const { return this->cores_ != nullptr;};
    void deleteCores() { this->cores_ = nullptr;};
    inline int32_t getCores() const { DARABONBA_PTR_GET_DEFAULT(cores_, 0) };
    inline DescribeAvailableResourceRequest& setCores(int32_t cores) { DARABONBA_PTR_SET_VALUE(cores_, cores) };


    // dataDiskCategory Field Functions 
    bool hasDataDiskCategory() const { return this->dataDiskCategory_ != nullptr;};
    void deleteDataDiskCategory() { this->dataDiskCategory_ = nullptr;};
    inline string getDataDiskCategory() const { DARABONBA_PTR_GET_DEFAULT(dataDiskCategory_, "") };
    inline DescribeAvailableResourceRequest& setDataDiskCategory(string dataDiskCategory) { DARABONBA_PTR_SET_VALUE(dataDiskCategory_, dataDiskCategory) };


    // dedicatedHostId Field Functions 
    bool hasDedicatedHostId() const { return this->dedicatedHostId_ != nullptr;};
    void deleteDedicatedHostId() { this->dedicatedHostId_ = nullptr;};
    inline string getDedicatedHostId() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostId_, "") };
    inline DescribeAvailableResourceRequest& setDedicatedHostId(string dedicatedHostId) { DARABONBA_PTR_SET_VALUE(dedicatedHostId_, dedicatedHostId) };


    // destinationResource Field Functions 
    bool hasDestinationResource() const { return this->destinationResource_ != nullptr;};
    void deleteDestinationResource() { this->destinationResource_ = nullptr;};
    inline string getDestinationResource() const { DARABONBA_PTR_GET_DEFAULT(destinationResource_, "") };
    inline DescribeAvailableResourceRequest& setDestinationResource(string destinationResource) { DARABONBA_PTR_SET_VALUE(destinationResource_, destinationResource) };


    // instanceChargeType Field Functions 
    bool hasInstanceChargeType() const { return this->instanceChargeType_ != nullptr;};
    void deleteInstanceChargeType() { this->instanceChargeType_ = nullptr;};
    inline string getInstanceChargeType() const { DARABONBA_PTR_GET_DEFAULT(instanceChargeType_, "") };
    inline DescribeAvailableResourceRequest& setInstanceChargeType(string instanceChargeType) { DARABONBA_PTR_SET_VALUE(instanceChargeType_, instanceChargeType) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline DescribeAvailableResourceRequest& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // ioOptimized Field Functions 
    bool hasIoOptimized() const { return this->ioOptimized_ != nullptr;};
    void deleteIoOptimized() { this->ioOptimized_ = nullptr;};
    inline string getIoOptimized() const { DARABONBA_PTR_GET_DEFAULT(ioOptimized_, "") };
    inline DescribeAvailableResourceRequest& setIoOptimized(string ioOptimized) { DARABONBA_PTR_SET_VALUE(ioOptimized_, ioOptimized) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline float getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0.0) };
    inline DescribeAvailableResourceRequest& setMemory(float memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // networkCategory Field Functions 
    bool hasNetworkCategory() const { return this->networkCategory_ != nullptr;};
    void deleteNetworkCategory() { this->networkCategory_ = nullptr;};
    inline string getNetworkCategory() const { DARABONBA_PTR_GET_DEFAULT(networkCategory_, "") };
    inline DescribeAvailableResourceRequest& setNetworkCategory(string networkCategory) { DARABONBA_PTR_SET_VALUE(networkCategory_, networkCategory) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline DescribeAvailableResourceRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeAvailableResourceRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeAvailableResourceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DescribeAvailableResourceRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribeAvailableResourceRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline DescribeAvailableResourceRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline string getScope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
    inline DescribeAvailableResourceRequest& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


    // spotDuration Field Functions 
    bool hasSpotDuration() const { return this->spotDuration_ != nullptr;};
    void deleteSpotDuration() { this->spotDuration_ = nullptr;};
    inline int32_t getSpotDuration() const { DARABONBA_PTR_GET_DEFAULT(spotDuration_, 0) };
    inline DescribeAvailableResourceRequest& setSpotDuration(int32_t spotDuration) { DARABONBA_PTR_SET_VALUE(spotDuration_, spotDuration) };


    // spotStrategy Field Functions 
    bool hasSpotStrategy() const { return this->spotStrategy_ != nullptr;};
    void deleteSpotStrategy() { this->spotStrategy_ = nullptr;};
    inline string getSpotStrategy() const { DARABONBA_PTR_GET_DEFAULT(spotStrategy_, "") };
    inline DescribeAvailableResourceRequest& setSpotStrategy(string spotStrategy) { DARABONBA_PTR_SET_VALUE(spotStrategy_, spotStrategy) };


    // systemDiskCategory Field Functions 
    bool hasSystemDiskCategory() const { return this->systemDiskCategory_ != nullptr;};
    void deleteSystemDiskCategory() { this->systemDiskCategory_ = nullptr;};
    inline string getSystemDiskCategory() const { DARABONBA_PTR_GET_DEFAULT(systemDiskCategory_, "") };
    inline DescribeAvailableResourceRequest& setSystemDiskCategory(string systemDiskCategory) { DARABONBA_PTR_SET_VALUE(systemDiskCategory_, systemDiskCategory) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeAvailableResourceRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The number of vCPU cores of the instance type. For valid values, see [Instance family](https://help.aliyun.com/document_detail/25378.html).
    // 
    // This parameter takes effect only when DestinationResource is set to InstanceType.
    shared_ptr<int32_t> cores_ {};
    // The category of the data disk. Valid values: 
    //          
    // - cloud: basic disk.
    // - cloud_efficiency: ultra disk.
    // - cloud_ssd: standard SSD.
    // - ephemeral_ssd: local SSD.
    // - cloud_essd: enterprise SSD (ESSD).
    // - cloud_auto: ESSD AutoPL disk.
    // <props="china">
    // - cloud_essd_entry: ESSD Entry disk.
    shared_ptr<string> dataDiskCategory_ {};
    // The ID of the dedicated host.
    shared_ptr<string> dedicatedHostId_ {};
    // The type of resource to query. Valid values: 
    //          
    // - Zone: zone.
    // - IoOptimized: I/O optimized.
    // - InstanceType: instance type.
    // - Network: network type.
    // - ddh: dedicated host.
    // - SystemDisk: system disk.
    // - DataDisk: data disk.
    // 
    // > When DestinationResource is set to `SystemDisk`, you must specify InstanceType because system disks are restricted by instance types.
    // 
    // For more information about how to set the DestinationResource parameter, see the **operation description** section of this topic.
    // 
    // This parameter is required.
    shared_ptr<string> destinationResource_ {};
    // The billing method of the resource. For more information, see [Billing overview](https://help.aliyun.com/document_detail/25398.html). Valid values: 
    //        
    // - PrePaid: subscription.  
    // - PostPaid: pay-as-you-go.
    // 
    // Default value: PostPaid.
    shared_ptr<string> instanceChargeType_ {};
    // The instance type. For more information, see [Instance family](https://help.aliyun.com/document_detail/25378.html). You can also invoke [DescribeInstanceTypes](https://help.aliyun.com/document_detail/25620.html) to query the most recent instance type list.
    // 
    // For more information about how to set the InstanceType parameter, see the **operation description** section at the beginning of this topic.
    shared_ptr<string> instanceType_ {};
    // Specifies whether the instance is an I/O optimized instance. Valid values:
    // 
    // - none: non-I/O optimized instance.
    // - optimized: I/O optimized instance.
    // 
    // Default value: optimized.
    shared_ptr<string> ioOptimized_ {};
    // The memory size of the instance type. Unit: GiB. For valid values, see [Instance family](https://help.aliyun.com/document_detail/25378.html).
    // 
    // This parameter takes effect only when DestinationResource is set to InstanceType.
    shared_ptr<float> memory_ {};
    // The network type. Valid values: 
    //         
    // - vpc: virtual private cloud (VPC).
    // - classic: classic network. The classic network is deprecated. For more information, see [Deprecation notice](https://help.aliyun.com/document_detail/2833134.html).
    shared_ptr<string> networkCategory_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The ID of the destination region. You can call [DescribeRegions](https://help.aliyun.com/document_detail/25609.html) to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The type of the resource. Valid values:
    // 
    // - instance: ECS instance.
    // - disk: cloud disk.
    // - reservedinstance: reserved instance.
    // - ddh: dedicated host.
    shared_ptr<string> resourceType_ {};
    // The scope of the reserved instance. Valid values:
    //          
    // - Region: regional.
    // - Zone: zonal.
    shared_ptr<string> scope_ {};
    // The protection period of the spot instance. Unit: hours. Default value: 1. Valid values:
    // - 1: After a spot instance is created, Alibaba Cloud ensures that the instance is not automatically released within 1 hour. After 1 hour, the system compares the bid price with the market price and checks the inventory to determine whether to retain automatic release the instance.
    // - 0: After a spot instance is created, Alibaba Cloud does not ensure that the instance runs for 1 hour. The system compares the bid price with the market price and checks the inventory to determine whether to retain automatic release the instance.
    // 
    // Alibaba Cloud sends an ECS system event notification 5 minutes before the instance is released. Spot instances are billed by second. Select an appropriate protection period based on the expected task execution duration.
    // 
    // > This parameter takes effect only when `InstanceChargeType` is set to `PostPaid` and `SpotStrategy` is set to `SpotWithPriceLimit` or `SpotAsPriceGo`.
    shared_ptr<int32_t> spotDuration_ {};
    // The bidding policy for pay-as-you-go instances. Valid values: 
    //          
    // - NoSpot: a regular pay-as-you-go instance.
    // - SpotWithPriceLimit: a spot instance with a maximum price limit.
    // - SpotAsPriceGo: a spot instance priced at the market price with the pay-as-you-go price as the upper limit.
    // 
    // Default value: NoSpot.
    // 
    // This parameter takes effect only when InstanceChargeType is set to `PostPaid`.
    shared_ptr<string> spotStrategy_ {};
    // The category of the system disk. Valid values: 
    //          
    // - cloud: basic disk.
    // - cloud_efficiency: ultra disk.
    // - cloud_ssd: standard SSD.
    // - ephemeral_ssd: local SSD.
    // - cloud_essd: enterprise SSD (ESSD).
    // - cloud_auto: ESSD AutoPL disk.
    // <props="china">
    // - cloud_essd_entry: ESSD Entry disk.
    // 
    // 
    // Default value description:
    // 
    // - If InstanceType is set to a retired instance type, the default value is `cloud`.
    // - In other cases, the default value is `cloud_efficiency`.<props="china">After January 30, 2026, for instance types that support only cloud_essd, the default value is changed from cloud_efficiency to cloud_essd PL0. For more information, see [Change notice](https://www.aliyun.com/notice/117844).
    // 
    // > When ResourceType is set to instance and DestinationResource is set to DataDisk, the SystemDiskCategory parameter is required. If you do not specify this parameter, the default value takes effect.
    shared_ptr<string> systemDiskCategory_ {};
    // The zone ID.
    // 
    // Default value: null. The operation returns resources that match the query conditions across all zones in the specified region (RegionId).
    shared_ptr<string> zoneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
