// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETEMPLATESRESPONSEBODYDATAREGIONCONFIGLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETEMPLATESRESPONSEBODYDATAREGIONCONFIGLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeTemplatesResponseBodyDataRegionConfigList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTemplatesResponseBodyDataRegionConfigList& obj) { 
      DARABONBA_PTR_TO_JSON(CpuCount, cpuCount_);
      DARABONBA_PTR_TO_JSON(GpuSpec, gpuSpec_);
      DARABONBA_PTR_TO_JSON(MemorySize, memorySize_);
      DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceInstanceType, resourceInstanceType_);
      DARABONBA_PTR_TO_JSON(SnapshotPolicyId, snapshotPolicyId_);
      DARABONBA_PTR_TO_JSON(SubnetId, subnetId_);
      DARABONBA_PTR_TO_JSON(VolumeEncryptionEnable, volumeEncryptionEnable_);
      DARABONBA_PTR_TO_JSON(VolumeEncryptionKey, volumeEncryptionKey_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTemplatesResponseBodyDataRegionConfigList& obj) { 
      DARABONBA_PTR_FROM_JSON(CpuCount, cpuCount_);
      DARABONBA_PTR_FROM_JSON(GpuSpec, gpuSpec_);
      DARABONBA_PTR_FROM_JSON(MemorySize, memorySize_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceInstanceType, resourceInstanceType_);
      DARABONBA_PTR_FROM_JSON(SnapshotPolicyId, snapshotPolicyId_);
      DARABONBA_PTR_FROM_JSON(SubnetId, subnetId_);
      DARABONBA_PTR_FROM_JSON(VolumeEncryptionEnable, volumeEncryptionEnable_);
      DARABONBA_PTR_FROM_JSON(VolumeEncryptionKey, volumeEncryptionKey_);
    };
    DescribeTemplatesResponseBodyDataRegionConfigList() = default ;
    DescribeTemplatesResponseBodyDataRegionConfigList(const DescribeTemplatesResponseBodyDataRegionConfigList &) = default ;
    DescribeTemplatesResponseBodyDataRegionConfigList(DescribeTemplatesResponseBodyDataRegionConfigList &&) = default ;
    DescribeTemplatesResponseBodyDataRegionConfigList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTemplatesResponseBodyDataRegionConfigList() = default ;
    DescribeTemplatesResponseBodyDataRegionConfigList& operator=(const DescribeTemplatesResponseBodyDataRegionConfigList &) = default ;
    DescribeTemplatesResponseBodyDataRegionConfigList& operator=(DescribeTemplatesResponseBodyDataRegionConfigList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cpuCount_ == nullptr
        && return this->gpuSpec_ == nullptr && return this->memorySize_ == nullptr && return this->officeSiteId_ == nullptr && return this->regionId_ == nullptr && return this->resourceInstanceType_ == nullptr
        && return this->snapshotPolicyId_ == nullptr && return this->subnetId_ == nullptr && return this->volumeEncryptionEnable_ == nullptr && return this->volumeEncryptionKey_ == nullptr; };
    // cpuCount Field Functions 
    bool hasCpuCount() const { return this->cpuCount_ != nullptr;};
    void deleteCpuCount() { this->cpuCount_ = nullptr;};
    inline int32_t cpuCount() const { DARABONBA_PTR_GET_DEFAULT(cpuCount_, 0) };
    inline DescribeTemplatesResponseBodyDataRegionConfigList& setCpuCount(int32_t cpuCount) { DARABONBA_PTR_SET_VALUE(cpuCount_, cpuCount) };


    // gpuSpec Field Functions 
    bool hasGpuSpec() const { return this->gpuSpec_ != nullptr;};
    void deleteGpuSpec() { this->gpuSpec_ = nullptr;};
    inline string gpuSpec() const { DARABONBA_PTR_GET_DEFAULT(gpuSpec_, "") };
    inline DescribeTemplatesResponseBodyDataRegionConfigList& setGpuSpec(string gpuSpec) { DARABONBA_PTR_SET_VALUE(gpuSpec_, gpuSpec) };


    // memorySize Field Functions 
    bool hasMemorySize() const { return this->memorySize_ != nullptr;};
    void deleteMemorySize() { this->memorySize_ = nullptr;};
    inline int64_t memorySize() const { DARABONBA_PTR_GET_DEFAULT(memorySize_, 0L) };
    inline DescribeTemplatesResponseBodyDataRegionConfigList& setMemorySize(int64_t memorySize) { DARABONBA_PTR_SET_VALUE(memorySize_, memorySize) };


    // officeSiteId Field Functions 
    bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
    void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
    inline string officeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
    inline DescribeTemplatesResponseBodyDataRegionConfigList& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeTemplatesResponseBodyDataRegionConfigList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceInstanceType Field Functions 
    bool hasResourceInstanceType() const { return this->resourceInstanceType_ != nullptr;};
    void deleteResourceInstanceType() { this->resourceInstanceType_ = nullptr;};
    inline string resourceInstanceType() const { DARABONBA_PTR_GET_DEFAULT(resourceInstanceType_, "") };
    inline DescribeTemplatesResponseBodyDataRegionConfigList& setResourceInstanceType(string resourceInstanceType) { DARABONBA_PTR_SET_VALUE(resourceInstanceType_, resourceInstanceType) };


    // snapshotPolicyId Field Functions 
    bool hasSnapshotPolicyId() const { return this->snapshotPolicyId_ != nullptr;};
    void deleteSnapshotPolicyId() { this->snapshotPolicyId_ = nullptr;};
    inline string snapshotPolicyId() const { DARABONBA_PTR_GET_DEFAULT(snapshotPolicyId_, "") };
    inline DescribeTemplatesResponseBodyDataRegionConfigList& setSnapshotPolicyId(string snapshotPolicyId) { DARABONBA_PTR_SET_VALUE(snapshotPolicyId_, snapshotPolicyId) };


    // subnetId Field Functions 
    bool hasSubnetId() const { return this->subnetId_ != nullptr;};
    void deleteSubnetId() { this->subnetId_ = nullptr;};
    inline string subnetId() const { DARABONBA_PTR_GET_DEFAULT(subnetId_, "") };
    inline DescribeTemplatesResponseBodyDataRegionConfigList& setSubnetId(string subnetId) { DARABONBA_PTR_SET_VALUE(subnetId_, subnetId) };


    // volumeEncryptionEnable Field Functions 
    bool hasVolumeEncryptionEnable() const { return this->volumeEncryptionEnable_ != nullptr;};
    void deleteVolumeEncryptionEnable() { this->volumeEncryptionEnable_ = nullptr;};
    inline bool volumeEncryptionEnable() const { DARABONBA_PTR_GET_DEFAULT(volumeEncryptionEnable_, false) };
    inline DescribeTemplatesResponseBodyDataRegionConfigList& setVolumeEncryptionEnable(bool volumeEncryptionEnable) { DARABONBA_PTR_SET_VALUE(volumeEncryptionEnable_, volumeEncryptionEnable) };


    // volumeEncryptionKey Field Functions 
    bool hasVolumeEncryptionKey() const { return this->volumeEncryptionKey_ != nullptr;};
    void deleteVolumeEncryptionKey() { this->volumeEncryptionKey_ = nullptr;};
    inline string volumeEncryptionKey() const { DARABONBA_PTR_GET_DEFAULT(volumeEncryptionKey_, "") };
    inline DescribeTemplatesResponseBodyDataRegionConfigList& setVolumeEncryptionKey(string volumeEncryptionKey) { DARABONBA_PTR_SET_VALUE(volumeEncryptionKey_, volumeEncryptionKey) };


  protected:
    // The number of vCPUs.
    std::shared_ptr<int32_t> cpuCount_ = nullptr;
    // The GPU memory information. This parameter is supported only by Graphics cloud computer types.
    std::shared_ptr<string> gpuSpec_ = nullptr;
    // The memory size. Unit: MiB.
    std::shared_ptr<int64_t> memorySize_ = nullptr;
    // The office network ID.
    std::shared_ptr<string> officeSiteId_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the cloud computer type.
    std::shared_ptr<string> resourceInstanceType_ = nullptr;
    // The snapshot policy ID.
    std::shared_ptr<string> snapshotPolicyId_ = nullptr;
    // The subnet ID.
    std::shared_ptr<string> subnetId_ = nullptr;
    // Indicates whether disk encryption is enabled.
    std::shared_ptr<bool> volumeEncryptionEnable_ = nullptr;
    // The ID of the Key Management Service (KMS) key that is used to encrypt the disk.
    std::shared_ptr<string> volumeEncryptionKey_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
