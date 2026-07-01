// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERECOMMENDINSTANCETYPEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERECOMMENDINSTANCETYPEREQUEST_HPP_
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
  class DescribeRecommendInstanceTypeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRecommendInstanceTypeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Cores, cores_);
      DARABONBA_PTR_TO_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_TO_JSON(InstanceFamilyLevel, instanceFamilyLevel_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(InstanceTypeFamily, instanceTypeFamily_);
      DARABONBA_PTR_TO_JSON(IoOptimized, ioOptimized_);
      DARABONBA_PTR_TO_JSON(MaxPrice, maxPrice_);
      DARABONBA_PTR_TO_JSON(Memory, memory_);
      DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PriorityStrategy, priorityStrategy_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Scene, scene_);
      DARABONBA_PTR_TO_JSON(SpotStrategy, spotStrategy_);
      DARABONBA_PTR_TO_JSON(SystemDiskCategory, systemDiskCategory_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      DARABONBA_PTR_TO_JSON(ZoneMatchMode, zoneMatchMode_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRecommendInstanceTypeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Cores, cores_);
      DARABONBA_PTR_FROM_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_FROM_JSON(InstanceFamilyLevel, instanceFamilyLevel_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(InstanceTypeFamily, instanceTypeFamily_);
      DARABONBA_PTR_FROM_JSON(IoOptimized, ioOptimized_);
      DARABONBA_PTR_FROM_JSON(MaxPrice, maxPrice_);
      DARABONBA_PTR_FROM_JSON(Memory, memory_);
      DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PriorityStrategy, priorityStrategy_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Scene, scene_);
      DARABONBA_PTR_FROM_JSON(SpotStrategy, spotStrategy_);
      DARABONBA_PTR_FROM_JSON(SystemDiskCategory, systemDiskCategory_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
      DARABONBA_PTR_FROM_JSON(ZoneMatchMode, zoneMatchMode_);
    };
    DescribeRecommendInstanceTypeRequest() = default ;
    DescribeRecommendInstanceTypeRequest(const DescribeRecommendInstanceTypeRequest &) = default ;
    DescribeRecommendInstanceTypeRequest(DescribeRecommendInstanceTypeRequest &&) = default ;
    DescribeRecommendInstanceTypeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRecommendInstanceTypeRequest() = default ;
    DescribeRecommendInstanceTypeRequest& operator=(const DescribeRecommendInstanceTypeRequest &) = default ;
    DescribeRecommendInstanceTypeRequest& operator=(DescribeRecommendInstanceTypeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cores_ == nullptr
        && this->instanceChargeType_ == nullptr && this->instanceFamilyLevel_ == nullptr && this->instanceType_ == nullptr && this->instanceTypeFamily_ == nullptr && this->ioOptimized_ == nullptr
        && this->maxPrice_ == nullptr && this->memory_ == nullptr && this->networkType_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr
        && this->priorityStrategy_ == nullptr && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->scene_ == nullptr
        && this->spotStrategy_ == nullptr && this->systemDiskCategory_ == nullptr && this->zoneId_ == nullptr && this->zoneMatchMode_ == nullptr; };
    // cores Field Functions 
    bool hasCores() const { return this->cores_ != nullptr;};
    void deleteCores() { this->cores_ = nullptr;};
    inline int32_t getCores() const { DARABONBA_PTR_GET_DEFAULT(cores_, 0) };
    inline DescribeRecommendInstanceTypeRequest& setCores(int32_t cores) { DARABONBA_PTR_SET_VALUE(cores_, cores) };


    // instanceChargeType Field Functions 
    bool hasInstanceChargeType() const { return this->instanceChargeType_ != nullptr;};
    void deleteInstanceChargeType() { this->instanceChargeType_ = nullptr;};
    inline string getInstanceChargeType() const { DARABONBA_PTR_GET_DEFAULT(instanceChargeType_, "") };
    inline DescribeRecommendInstanceTypeRequest& setInstanceChargeType(string instanceChargeType) { DARABONBA_PTR_SET_VALUE(instanceChargeType_, instanceChargeType) };


    // instanceFamilyLevel Field Functions 
    bool hasInstanceFamilyLevel() const { return this->instanceFamilyLevel_ != nullptr;};
    void deleteInstanceFamilyLevel() { this->instanceFamilyLevel_ = nullptr;};
    inline string getInstanceFamilyLevel() const { DARABONBA_PTR_GET_DEFAULT(instanceFamilyLevel_, "") };
    inline DescribeRecommendInstanceTypeRequest& setInstanceFamilyLevel(string instanceFamilyLevel) { DARABONBA_PTR_SET_VALUE(instanceFamilyLevel_, instanceFamilyLevel) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string getInstanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline DescribeRecommendInstanceTypeRequest& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // instanceTypeFamily Field Functions 
    bool hasInstanceTypeFamily() const { return this->instanceTypeFamily_ != nullptr;};
    void deleteInstanceTypeFamily() { this->instanceTypeFamily_ = nullptr;};
    inline const vector<string> & getInstanceTypeFamily() const { DARABONBA_PTR_GET_CONST(instanceTypeFamily_, vector<string>) };
    inline vector<string> getInstanceTypeFamily() { DARABONBA_PTR_GET(instanceTypeFamily_, vector<string>) };
    inline DescribeRecommendInstanceTypeRequest& setInstanceTypeFamily(const vector<string> & instanceTypeFamily) { DARABONBA_PTR_SET_VALUE(instanceTypeFamily_, instanceTypeFamily) };
    inline DescribeRecommendInstanceTypeRequest& setInstanceTypeFamily(vector<string> && instanceTypeFamily) { DARABONBA_PTR_SET_RVALUE(instanceTypeFamily_, instanceTypeFamily) };


    // ioOptimized Field Functions 
    bool hasIoOptimized() const { return this->ioOptimized_ != nullptr;};
    void deleteIoOptimized() { this->ioOptimized_ = nullptr;};
    inline string getIoOptimized() const { DARABONBA_PTR_GET_DEFAULT(ioOptimized_, "") };
    inline DescribeRecommendInstanceTypeRequest& setIoOptimized(string ioOptimized) { DARABONBA_PTR_SET_VALUE(ioOptimized_, ioOptimized) };


    // maxPrice Field Functions 
    bool hasMaxPrice() const { return this->maxPrice_ != nullptr;};
    void deleteMaxPrice() { this->maxPrice_ = nullptr;};
    inline float getMaxPrice() const { DARABONBA_PTR_GET_DEFAULT(maxPrice_, 0.0) };
    inline DescribeRecommendInstanceTypeRequest& setMaxPrice(float maxPrice) { DARABONBA_PTR_SET_VALUE(maxPrice_, maxPrice) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline float getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0.0) };
    inline DescribeRecommendInstanceTypeRequest& setMemory(float memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // networkType Field Functions 
    bool hasNetworkType() const { return this->networkType_ != nullptr;};
    void deleteNetworkType() { this->networkType_ = nullptr;};
    inline string getNetworkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
    inline DescribeRecommendInstanceTypeRequest& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline DescribeRecommendInstanceTypeRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeRecommendInstanceTypeRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // priorityStrategy Field Functions 
    bool hasPriorityStrategy() const { return this->priorityStrategy_ != nullptr;};
    void deletePriorityStrategy() { this->priorityStrategy_ = nullptr;};
    inline string getPriorityStrategy() const { DARABONBA_PTR_GET_DEFAULT(priorityStrategy_, "") };
    inline DescribeRecommendInstanceTypeRequest& setPriorityStrategy(string priorityStrategy) { DARABONBA_PTR_SET_VALUE(priorityStrategy_, priorityStrategy) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeRecommendInstanceTypeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DescribeRecommendInstanceTypeRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribeRecommendInstanceTypeRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // scene Field Functions 
    bool hasScene() const { return this->scene_ != nullptr;};
    void deleteScene() { this->scene_ = nullptr;};
    inline string getScene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
    inline DescribeRecommendInstanceTypeRequest& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


    // spotStrategy Field Functions 
    bool hasSpotStrategy() const { return this->spotStrategy_ != nullptr;};
    void deleteSpotStrategy() { this->spotStrategy_ = nullptr;};
    inline string getSpotStrategy() const { DARABONBA_PTR_GET_DEFAULT(spotStrategy_, "") };
    inline DescribeRecommendInstanceTypeRequest& setSpotStrategy(string spotStrategy) { DARABONBA_PTR_SET_VALUE(spotStrategy_, spotStrategy) };


    // systemDiskCategory Field Functions 
    bool hasSystemDiskCategory() const { return this->systemDiskCategory_ != nullptr;};
    void deleteSystemDiskCategory() { this->systemDiskCategory_ = nullptr;};
    inline string getSystemDiskCategory() const { DARABONBA_PTR_GET_DEFAULT(systemDiskCategory_, "") };
    inline DescribeRecommendInstanceTypeRequest& setSystemDiskCategory(string systemDiskCategory) { DARABONBA_PTR_SET_VALUE(systemDiskCategory_, systemDiskCategory) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeRecommendInstanceTypeRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    // zoneMatchMode Field Functions 
    bool hasZoneMatchMode() const { return this->zoneMatchMode_ != nullptr;};
    void deleteZoneMatchMode() { this->zoneMatchMode_ = nullptr;};
    inline string getZoneMatchMode() const { DARABONBA_PTR_GET_DEFAULT(zoneMatchMode_, "") };
    inline DescribeRecommendInstanceTypeRequest& setZoneMatchMode(string zoneMatchMode) { DARABONBA_PTR_SET_VALUE(zoneMatchMode_, zoneMatchMode) };


  protected:
    // The number of vCPUs of the ECS instance.
    // 
    // >If you specify both the Cores and Memory parameters, the system matches all instance types that meet the specified vCPU and memory requirements.
    shared_ptr<int32_t> cores_ {};
    // The billing method of the ECS instance. For details, see [Billing overview](https://help.aliyun.com/document_detail/25398.html). Valid values:
    // 
    // - PrePaid: subscription.
    // - PostPaid: pay-as-you-go.
    // 
    // Default value: PostPaid.
    shared_ptr<string> instanceChargeType_ {};
    // The level of the instance family. Valid values:
    // 
    // - EntryLevel: entry level.
    // - EnterpriseLevel: enterprise level.
    // - CreditEntryLevel: credit-based entry level. For details, see [Burstable instances](https://help.aliyun.com/document_detail/59977.html).
    shared_ptr<string> instanceFamilyLevel_ {};
    // The specified instance type. For details, see [Instance families](https://help.aliyun.com/document_detail/25378.html). You can also call the [DescribeInstanceTypes](https://help.aliyun.com/document_detail/25620.html) operation to query the most recent instance type list.
    // 
    // > If you specify InstanceType, you cannot specify Cores or Memory.
    shared_ptr<string> instanceType_ {};
    // The collection of alternative instance families from which alternative instance types are selected. You can set up to 10 instance families in this parameter.
    shared_ptr<vector<string>> instanceTypeFamily_ {};
    // Specifies whether the instance is I/O optimized. If the instance type supports only non-I/O optimized instances, you cannot set the IoOptimized parameter. Valid values:
    // 
    // - optimized: I/O optimized.
    // - none: non-I/O optimized.
    // 
    // Default value: optimized.
    // 
    // If you specify a retired instance type, the default value is none.
    shared_ptr<string> ioOptimized_ {};
    // The maximum acceptable hourly price for pay-as-you-go or spot instances.
    // 
    // >To set the maximum hourly price for a spot instance, set SpotStrategy to SpotWithPriceLimit.
    shared_ptr<float> maxPrice_ {};
    // The memory size of the ECS instance. Unit: GiB.
    // 
    // >If you specify both the Cores and Memory parameters, the system matches all instance types that meet the specified vCPU and memory requirements.
    shared_ptr<float> memory_ {};
    // The network type of the ECS instance. Valid values:
    // 
    // - vpc: virtual private cloud (VPC).
    // - classic: classic network. The classic network is no longer available. For more information, see [Retirement notice](https://help.aliyun.com/document_detail/2833134.html).
    // 
    // Default value: vpc.
    // 
    // This parameter is required.
    shared_ptr<string> networkType_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The priority recommendation strategy. Valid values:
    // 
    // - InventoryFirst: inventory first.
    // - PriceFirst: price first. Instance types are sorted by the hourly vCPU unit price in ascending order.
    // - NewProductFirst: newest product first.
    // 
    // Default value: InventoryFirst.
    shared_ptr<string> priorityStrategy_ {};
    // The region ID. You can call [DescribeRegions](https://help.aliyun.com/document_detail/25609.html) to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The scenario in which instance types are recommended. Valid values:
    // 
    // - UPGRADE: upgrade or downgrade an instance type.
    // - CREATE: create an instance.
    // 
    // Default value: CREATE.
    shared_ptr<string> scene_ {};
    // The bidding policy for the spot instance. Valid values:
    // 
    // - NoSpot: a pay-as-you-go instance.
    // - SpotWithPriceLimit: a spot instance with a maximum hourly price.
    // - SpotAsPriceGo: a spot instance for which the system automatically bids at up to the pay-as-you-go price.
    // 
    // > When you use SpotStrategy, set InstanceChargeType to PostPaid.
    // 
    // Default value: NoSpot.
    shared_ptr<string> spotStrategy_ {};
    // The category of the system disk. Valid values:
    // 
    // - cloud_efficiency: ultra disk.
    // - cloud_ssd: standard SSD.
    // - cloud_essd: enterprise SSD (ESSD).
    // - cloud: basic disk.
    // 
    // Default value for non-I/O optimized instances: cloud.
    // 
    // Default value for I/O optimized instances: cloud_efficiency.
    shared_ptr<string> systemDiskCategory_ {};
    // The zone ID. You can call [DescribeZones](https://help.aliyun.com/document_detail/25610.html) to query the most recent zone list.
    // 
    // Set ZoneMatchMode to Include (default value) to preferentially recommend instance types in the zone specified by ZoneId and also list instance types in other zones within the same region.
    shared_ptr<string> zoneId_ {};
    // Specifies whether to recommend only instance types in the zone specified by ZoneId. Valid values:
    // 
    // - Strict: recommends only instance types in the zone specified by ZoneId.
    // 
    // - Include: recommends instance types in other zones within the same region.
    // 
    // 
    // When ZoneId is specified, the default value of this parameter is Strict, which indicates that only instance types in the zone specified by ZoneId are recommended.
    shared_ptr<string> zoneMatchMode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
