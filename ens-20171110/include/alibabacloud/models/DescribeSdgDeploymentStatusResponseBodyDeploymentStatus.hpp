// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESDGDEPLOYMENTSTATUSRESPONSEBODYDEPLOYMENTSTATUS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESDGDEPLOYMENTSTATUSRESPONSEBODYDEPLOYMENTSTATUS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeSDGDeploymentStatusResponseBodyDeploymentStatus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSDGDeploymentStatusResponseBodyDeploymentStatus& obj) { 
      DARABONBA_PTR_TO_JSON(BlockRwSplitSize, blockRwSplitSize_);
      DARABONBA_PTR_TO_JSON(CacheSize, cacheSize_);
      DARABONBA_PTR_TO_JSON(DiskAccessProtocol, diskAccessProtocol_);
      DARABONBA_PTR_TO_JSON(DiskType, diskType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(MountType, mountType_);
      DARABONBA_PTR_TO_JSON(Phase, phase_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSDGDeploymentStatusResponseBodyDeploymentStatus& obj) { 
      DARABONBA_PTR_FROM_JSON(BlockRwSplitSize, blockRwSplitSize_);
      DARABONBA_PTR_FROM_JSON(CacheSize, cacheSize_);
      DARABONBA_PTR_FROM_JSON(DiskAccessProtocol, diskAccessProtocol_);
      DARABONBA_PTR_FROM_JSON(DiskType, diskType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(MountType, mountType_);
      DARABONBA_PTR_FROM_JSON(Phase, phase_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    DescribeSDGDeploymentStatusResponseBodyDeploymentStatus() = default ;
    DescribeSDGDeploymentStatusResponseBodyDeploymentStatus(const DescribeSDGDeploymentStatusResponseBodyDeploymentStatus &) = default ;
    DescribeSDGDeploymentStatusResponseBodyDeploymentStatus(DescribeSDGDeploymentStatusResponseBodyDeploymentStatus &&) = default ;
    DescribeSDGDeploymentStatusResponseBodyDeploymentStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSDGDeploymentStatusResponseBodyDeploymentStatus() = default ;
    DescribeSDGDeploymentStatusResponseBodyDeploymentStatus& operator=(const DescribeSDGDeploymentStatusResponseBodyDeploymentStatus &) = default ;
    DescribeSDGDeploymentStatusResponseBodyDeploymentStatus& operator=(DescribeSDGDeploymentStatusResponseBodyDeploymentStatus &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->blockRwSplitSize_ == nullptr
        && return this->cacheSize_ == nullptr && return this->diskAccessProtocol_ == nullptr && return this->diskType_ == nullptr && return this->instanceId_ == nullptr && return this->mountType_ == nullptr
        && return this->phase_ == nullptr && return this->regionId_ == nullptr && return this->status_ == nullptr && return this->updateTime_ == nullptr; };
    // blockRwSplitSize Field Functions 
    bool hasBlockRwSplitSize() const { return this->blockRwSplitSize_ != nullptr;};
    void deleteBlockRwSplitSize() { this->blockRwSplitSize_ = nullptr;};
    inline int32_t blockRwSplitSize() const { DARABONBA_PTR_GET_DEFAULT(blockRwSplitSize_, 0) };
    inline DescribeSDGDeploymentStatusResponseBodyDeploymentStatus& setBlockRwSplitSize(int32_t blockRwSplitSize) { DARABONBA_PTR_SET_VALUE(blockRwSplitSize_, blockRwSplitSize) };


    // cacheSize Field Functions 
    bool hasCacheSize() const { return this->cacheSize_ != nullptr;};
    void deleteCacheSize() { this->cacheSize_ = nullptr;};
    inline int32_t cacheSize() const { DARABONBA_PTR_GET_DEFAULT(cacheSize_, 0) };
    inline DescribeSDGDeploymentStatusResponseBodyDeploymentStatus& setCacheSize(int32_t cacheSize) { DARABONBA_PTR_SET_VALUE(cacheSize_, cacheSize) };


    // diskAccessProtocol Field Functions 
    bool hasDiskAccessProtocol() const { return this->diskAccessProtocol_ != nullptr;};
    void deleteDiskAccessProtocol() { this->diskAccessProtocol_ = nullptr;};
    inline string diskAccessProtocol() const { DARABONBA_PTR_GET_DEFAULT(diskAccessProtocol_, "") };
    inline DescribeSDGDeploymentStatusResponseBodyDeploymentStatus& setDiskAccessProtocol(string diskAccessProtocol) { DARABONBA_PTR_SET_VALUE(diskAccessProtocol_, diskAccessProtocol) };


    // diskType Field Functions 
    bool hasDiskType() const { return this->diskType_ != nullptr;};
    void deleteDiskType() { this->diskType_ = nullptr;};
    inline string diskType() const { DARABONBA_PTR_GET_DEFAULT(diskType_, "") };
    inline DescribeSDGDeploymentStatusResponseBodyDeploymentStatus& setDiskType(string diskType) { DARABONBA_PTR_SET_VALUE(diskType_, diskType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeSDGDeploymentStatusResponseBodyDeploymentStatus& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // mountType Field Functions 
    bool hasMountType() const { return this->mountType_ != nullptr;};
    void deleteMountType() { this->mountType_ = nullptr;};
    inline string mountType() const { DARABONBA_PTR_GET_DEFAULT(mountType_, "") };
    inline DescribeSDGDeploymentStatusResponseBodyDeploymentStatus& setMountType(string mountType) { DARABONBA_PTR_SET_VALUE(mountType_, mountType) };


    // phase Field Functions 
    bool hasPhase() const { return this->phase_ != nullptr;};
    void deletePhase() { this->phase_ = nullptr;};
    inline string phase() const { DARABONBA_PTR_GET_DEFAULT(phase_, "") };
    inline DescribeSDGDeploymentStatusResponseBodyDeploymentStatus& setPhase(string phase) { DARABONBA_PTR_SET_VALUE(phase_, phase) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeSDGDeploymentStatusResponseBodyDeploymentStatus& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeSDGDeploymentStatusResponseBodyDeploymentStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline DescribeSDGDeploymentStatusResponseBodyDeploymentStatus& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    std::shared_ptr<int32_t> blockRwSplitSize_ = nullptr;
    std::shared_ptr<int32_t> cacheSize_ = nullptr;
    std::shared_ptr<string> diskAccessProtocol_ = nullptr;
    std::shared_ptr<string> diskType_ = nullptr;
    // The ID of the AIC instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The deployment type.
    // 
    // Valid values:
    // 
    // *   overlay: read/write splitting.
    // *   common: common deployment.
    std::shared_ptr<string> mountType_ = nullptr;
    // The deployment phase of the SDG.
    std::shared_ptr<string> phase_ = nullptr;
    // The ID of the edge node.
    std::shared_ptr<string> regionId_ = nullptr;
    // The deployment status of the SDG.
    // 
    // Valid values:
    // 
    // *   sdg_deploying
    // *   success
    // *   failed
    std::shared_ptr<string> status_ = nullptr;
    // The time when the status was last updated.
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
