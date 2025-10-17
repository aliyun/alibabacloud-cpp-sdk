// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESPOTADVICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESPOTADVICEREQUEST_HPP_
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
  class DescribeSpotAdviceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSpotAdviceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Cores, cores_);
      DARABONBA_PTR_TO_JSON(GpuAmount, gpuAmount_);
      DARABONBA_PTR_TO_JSON(GpuSpec, gpuSpec_);
      DARABONBA_PTR_TO_JSON(InstanceFamilyLevel, instanceFamilyLevel_);
      DARABONBA_PTR_TO_JSON(InstanceTypeFamily, instanceTypeFamily_);
      DARABONBA_PTR_TO_JSON(InstanceTypes, instanceTypes_);
      DARABONBA_PTR_TO_JSON(Memory, memory_);
      DARABONBA_PTR_TO_JSON(MinCores, minCores_);
      DARABONBA_PTR_TO_JSON(MinMemory, minMemory_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSpotAdviceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Cores, cores_);
      DARABONBA_PTR_FROM_JSON(GpuAmount, gpuAmount_);
      DARABONBA_PTR_FROM_JSON(GpuSpec, gpuSpec_);
      DARABONBA_PTR_FROM_JSON(InstanceFamilyLevel, instanceFamilyLevel_);
      DARABONBA_PTR_FROM_JSON(InstanceTypeFamily, instanceTypeFamily_);
      DARABONBA_PTR_FROM_JSON(InstanceTypes, instanceTypes_);
      DARABONBA_PTR_FROM_JSON(Memory, memory_);
      DARABONBA_PTR_FROM_JSON(MinCores, minCores_);
      DARABONBA_PTR_FROM_JSON(MinMemory, minMemory_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeSpotAdviceRequest() = default ;
    DescribeSpotAdviceRequest(const DescribeSpotAdviceRequest &) = default ;
    DescribeSpotAdviceRequest(DescribeSpotAdviceRequest &&) = default ;
    DescribeSpotAdviceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSpotAdviceRequest() = default ;
    DescribeSpotAdviceRequest& operator=(const DescribeSpotAdviceRequest &) = default ;
    DescribeSpotAdviceRequest& operator=(DescribeSpotAdviceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cores_ == nullptr
        && return this->gpuAmount_ == nullptr && return this->gpuSpec_ == nullptr && return this->instanceFamilyLevel_ == nullptr && return this->instanceTypeFamily_ == nullptr && return this->instanceTypes_ == nullptr
        && return this->memory_ == nullptr && return this->minCores_ == nullptr && return this->minMemory_ == nullptr && return this->ownerAccount_ == nullptr && return this->ownerId_ == nullptr
        && return this->regionId_ == nullptr && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr && return this->zoneId_ == nullptr; };
    // cores Field Functions 
    bool hasCores() const { return this->cores_ != nullptr;};
    void deleteCores() { this->cores_ = nullptr;};
    inline int32_t cores() const { DARABONBA_PTR_GET_DEFAULT(cores_, 0) };
    inline DescribeSpotAdviceRequest& setCores(int32_t cores) { DARABONBA_PTR_SET_VALUE(cores_, cores) };


    // gpuAmount Field Functions 
    bool hasGpuAmount() const { return this->gpuAmount_ != nullptr;};
    void deleteGpuAmount() { this->gpuAmount_ = nullptr;};
    inline int32_t gpuAmount() const { DARABONBA_PTR_GET_DEFAULT(gpuAmount_, 0) };
    inline DescribeSpotAdviceRequest& setGpuAmount(int32_t gpuAmount) { DARABONBA_PTR_SET_VALUE(gpuAmount_, gpuAmount) };


    // gpuSpec Field Functions 
    bool hasGpuSpec() const { return this->gpuSpec_ != nullptr;};
    void deleteGpuSpec() { this->gpuSpec_ = nullptr;};
    inline string gpuSpec() const { DARABONBA_PTR_GET_DEFAULT(gpuSpec_, "") };
    inline DescribeSpotAdviceRequest& setGpuSpec(string gpuSpec) { DARABONBA_PTR_SET_VALUE(gpuSpec_, gpuSpec) };


    // instanceFamilyLevel Field Functions 
    bool hasInstanceFamilyLevel() const { return this->instanceFamilyLevel_ != nullptr;};
    void deleteInstanceFamilyLevel() { this->instanceFamilyLevel_ = nullptr;};
    inline string instanceFamilyLevel() const { DARABONBA_PTR_GET_DEFAULT(instanceFamilyLevel_, "") };
    inline DescribeSpotAdviceRequest& setInstanceFamilyLevel(string instanceFamilyLevel) { DARABONBA_PTR_SET_VALUE(instanceFamilyLevel_, instanceFamilyLevel) };


    // instanceTypeFamily Field Functions 
    bool hasInstanceTypeFamily() const { return this->instanceTypeFamily_ != nullptr;};
    void deleteInstanceTypeFamily() { this->instanceTypeFamily_ = nullptr;};
    inline string instanceTypeFamily() const { DARABONBA_PTR_GET_DEFAULT(instanceTypeFamily_, "") };
    inline DescribeSpotAdviceRequest& setInstanceTypeFamily(string instanceTypeFamily) { DARABONBA_PTR_SET_VALUE(instanceTypeFamily_, instanceTypeFamily) };


    // instanceTypes Field Functions 
    bool hasInstanceTypes() const { return this->instanceTypes_ != nullptr;};
    void deleteInstanceTypes() { this->instanceTypes_ = nullptr;};
    inline const vector<string> & instanceTypes() const { DARABONBA_PTR_GET_CONST(instanceTypes_, vector<string>) };
    inline vector<string> instanceTypes() { DARABONBA_PTR_GET(instanceTypes_, vector<string>) };
    inline DescribeSpotAdviceRequest& setInstanceTypes(const vector<string> & instanceTypes) { DARABONBA_PTR_SET_VALUE(instanceTypes_, instanceTypes) };
    inline DescribeSpotAdviceRequest& setInstanceTypes(vector<string> && instanceTypes) { DARABONBA_PTR_SET_RVALUE(instanceTypes_, instanceTypes) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline float memory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0.0) };
    inline DescribeSpotAdviceRequest& setMemory(float memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // minCores Field Functions 
    bool hasMinCores() const { return this->minCores_ != nullptr;};
    void deleteMinCores() { this->minCores_ = nullptr;};
    inline int32_t minCores() const { DARABONBA_PTR_GET_DEFAULT(minCores_, 0) };
    inline DescribeSpotAdviceRequest& setMinCores(int32_t minCores) { DARABONBA_PTR_SET_VALUE(minCores_, minCores) };


    // minMemory Field Functions 
    bool hasMinMemory() const { return this->minMemory_ != nullptr;};
    void deleteMinMemory() { this->minMemory_ = nullptr;};
    inline float minMemory() const { DARABONBA_PTR_GET_DEFAULT(minMemory_, 0.0) };
    inline DescribeSpotAdviceRequest& setMinMemory(float minMemory) { DARABONBA_PTR_SET_VALUE(minMemory_, minMemory) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline DescribeSpotAdviceRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeSpotAdviceRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeSpotAdviceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DescribeSpotAdviceRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribeSpotAdviceRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeSpotAdviceRequest& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The number of vCPUs of the instance type. For more information, see [Instance families](https://help.aliyun.com/document_detail/25378.html).
    std::shared_ptr<int32_t> cores_ = nullptr;
    // The number of GPUs that a GPU-accelerated instance has. For information about the valid values, see [GPU-accelerated compute optimized instance types](https://help.aliyun.com/document_detail/108496.html).
    std::shared_ptr<int32_t> gpuAmount_ = nullptr;
    // The GPU type. Valid values:
    // 
    // *   NVIDIA P4
    // *   NVIDIA T4
    // *   NVIDIA P100
    // *   NVIDIA V100
    // 
    // This parameter is left empty by default, which indicates that all GPU types are queried. For more information, see [GPU-accelerated compute-optimized and vGPU-accelerated instance families](https://help.aliyun.com/document_detail/108496.html).
    std::shared_ptr<string> gpuSpec_ = nullptr;
    // The level of the instance family. Valid values:
    // 
    // *   EntryLevel.
    // *   EnterpriseLevel.
    // *   CreditEntryLevel. For more information, see [Overview of burstable instances](https://help.aliyun.com/document_detail/59977.html).
    // 
    // This parameter is left empty by default, which indicates that instance families at all levels are queried.
    std::shared_ptr<string> instanceFamilyLevel_ = nullptr;
    // The instance family. For more information, see [Instance families](https://help.aliyun.com/document_detail/25378.html).
    std::shared_ptr<string> instanceTypeFamily_ = nullptr;
    // The instance types. You can specify up to 10 instance types.
    std::shared_ptr<vector<string>> instanceTypes_ = nullptr;
    // The memory size of the instance type. Unit: GiB. For more information, see [Instance families](https://help.aliyun.com/document_detail/25378.html).
    std::shared_ptr<float> memory_ = nullptr;
    // The minimum number of vCPUs of the instance type. For more information, see [Instance families](https://help.aliyun.com/document_detail/25378.html).
    std::shared_ptr<int32_t> minCores_ = nullptr;
    // The minimum memory size of the instance type. For more information, see [Instance families](https://help.aliyun.com/document_detail/25378.html).
    std::shared_ptr<float> minMemory_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The region ID. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/25609.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The zone ID.
    // 
    // This parameter is left empty by default, which indicates that all zones in the specified region are queried.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
