// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCESDGSTATUSRESPONSEBODYDEPLOYMENTSTATUS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCESDGSTATUSRESPONSEBODYDEPLOYMENTSTATUS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeInstanceSDGStatusResponseBodyDeploymentStatus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceSDGStatusResponseBodyDeploymentStatus& obj) { 
      DARABONBA_PTR_TO_JSON(BlockRwSplitSize, blockRwSplitSize_);
      DARABONBA_PTR_TO_JSON(CacheSize, cacheSize_);
      DARABONBA_PTR_TO_JSON(DiskAccessProtocol, diskAccessProtocol_);
      DARABONBA_PTR_TO_JSON(DiskType, diskType_);
      DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(MountType, mountType_);
      DARABONBA_PTR_TO_JSON(Phase, phase_);
      DARABONBA_PTR_TO_JSON(SDGId, SDGId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceSDGStatusResponseBodyDeploymentStatus& obj) { 
      DARABONBA_PTR_FROM_JSON(BlockRwSplitSize, blockRwSplitSize_);
      DARABONBA_PTR_FROM_JSON(CacheSize, cacheSize_);
      DARABONBA_PTR_FROM_JSON(DiskAccessProtocol, diskAccessProtocol_);
      DARABONBA_PTR_FROM_JSON(DiskType, diskType_);
      DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(MountType, mountType_);
      DARABONBA_PTR_FROM_JSON(Phase, phase_);
      DARABONBA_PTR_FROM_JSON(SDGId, SDGId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    DescribeInstanceSDGStatusResponseBodyDeploymentStatus() = default ;
    DescribeInstanceSDGStatusResponseBodyDeploymentStatus(const DescribeInstanceSDGStatusResponseBodyDeploymentStatus &) = default ;
    DescribeInstanceSDGStatusResponseBodyDeploymentStatus(DescribeInstanceSDGStatusResponseBodyDeploymentStatus &&) = default ;
    DescribeInstanceSDGStatusResponseBodyDeploymentStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceSDGStatusResponseBodyDeploymentStatus() = default ;
    DescribeInstanceSDGStatusResponseBodyDeploymentStatus& operator=(const DescribeInstanceSDGStatusResponseBodyDeploymentStatus &) = default ;
    DescribeInstanceSDGStatusResponseBodyDeploymentStatus& operator=(DescribeInstanceSDGStatusResponseBodyDeploymentStatus &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->blockRwSplitSize_ != nullptr
        && this->cacheSize_ != nullptr && this->diskAccessProtocol_ != nullptr && this->diskType_ != nullptr && this->ensRegionId_ != nullptr && this->instanceId_ != nullptr
        && this->mountType_ != nullptr && this->phase_ != nullptr && this->SDGId_ != nullptr && this->status_ != nullptr && this->updateTime_ != nullptr; };
    // blockRwSplitSize Field Functions 
    bool hasBlockRwSplitSize() const { return this->blockRwSplitSize_ != nullptr;};
    void deleteBlockRwSplitSize() { this->blockRwSplitSize_ = nullptr;};
    inline int32_t blockRwSplitSize() const { DARABONBA_PTR_GET_DEFAULT(blockRwSplitSize_, 0) };
    inline DescribeInstanceSDGStatusResponseBodyDeploymentStatus& setBlockRwSplitSize(int32_t blockRwSplitSize) { DARABONBA_PTR_SET_VALUE(blockRwSplitSize_, blockRwSplitSize) };


    // cacheSize Field Functions 
    bool hasCacheSize() const { return this->cacheSize_ != nullptr;};
    void deleteCacheSize() { this->cacheSize_ = nullptr;};
    inline int32_t cacheSize() const { DARABONBA_PTR_GET_DEFAULT(cacheSize_, 0) };
    inline DescribeInstanceSDGStatusResponseBodyDeploymentStatus& setCacheSize(int32_t cacheSize) { DARABONBA_PTR_SET_VALUE(cacheSize_, cacheSize) };


    // diskAccessProtocol Field Functions 
    bool hasDiskAccessProtocol() const { return this->diskAccessProtocol_ != nullptr;};
    void deleteDiskAccessProtocol() { this->diskAccessProtocol_ = nullptr;};
    inline string diskAccessProtocol() const { DARABONBA_PTR_GET_DEFAULT(diskAccessProtocol_, "") };
    inline DescribeInstanceSDGStatusResponseBodyDeploymentStatus& setDiskAccessProtocol(string diskAccessProtocol) { DARABONBA_PTR_SET_VALUE(diskAccessProtocol_, diskAccessProtocol) };


    // diskType Field Functions 
    bool hasDiskType() const { return this->diskType_ != nullptr;};
    void deleteDiskType() { this->diskType_ = nullptr;};
    inline string diskType() const { DARABONBA_PTR_GET_DEFAULT(diskType_, "") };
    inline DescribeInstanceSDGStatusResponseBodyDeploymentStatus& setDiskType(string diskType) { DARABONBA_PTR_SET_VALUE(diskType_, diskType) };


    // ensRegionId Field Functions 
    bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
    void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
    inline string ensRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
    inline DescribeInstanceSDGStatusResponseBodyDeploymentStatus& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeInstanceSDGStatusResponseBodyDeploymentStatus& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // mountType Field Functions 
    bool hasMountType() const { return this->mountType_ != nullptr;};
    void deleteMountType() { this->mountType_ = nullptr;};
    inline string mountType() const { DARABONBA_PTR_GET_DEFAULT(mountType_, "") };
    inline DescribeInstanceSDGStatusResponseBodyDeploymentStatus& setMountType(string mountType) { DARABONBA_PTR_SET_VALUE(mountType_, mountType) };


    // phase Field Functions 
    bool hasPhase() const { return this->phase_ != nullptr;};
    void deletePhase() { this->phase_ = nullptr;};
    inline string phase() const { DARABONBA_PTR_GET_DEFAULT(phase_, "") };
    inline DescribeInstanceSDGStatusResponseBodyDeploymentStatus& setPhase(string phase) { DARABONBA_PTR_SET_VALUE(phase_, phase) };


    // SDGId Field Functions 
    bool hasSDGId() const { return this->SDGId_ != nullptr;};
    void deleteSDGId() { this->SDGId_ = nullptr;};
    inline string SDGId() const { DARABONBA_PTR_GET_DEFAULT(SDGId_, "") };
    inline DescribeInstanceSDGStatusResponseBodyDeploymentStatus& setSDGId(string SDGId) { DARABONBA_PTR_SET_VALUE(SDGId_, SDGId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeInstanceSDGStatusResponseBodyDeploymentStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline DescribeInstanceSDGStatusResponseBodyDeploymentStatus& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    std::shared_ptr<int32_t> blockRwSplitSize_ = nullptr;
    std::shared_ptr<int32_t> cacheSize_ = nullptr;
    std::shared_ptr<string> diskAccessProtocol_ = nullptr;
    std::shared_ptr<string> diskType_ = nullptr;
    // The ID of the edge node.
    std::shared_ptr<string> ensRegionId_ = nullptr;
    // The ID of the AIC instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The deployment type of the SDG.
    std::shared_ptr<string> mountType_ = nullptr;
    // Deployment Phase
    std::shared_ptr<string> phase_ = nullptr;
    // The ID of the SDG.
    std::shared_ptr<string> SDGId_ = nullptr;
    // The deployment status of the SDG.
    std::shared_ptr<string> status_ = nullptr;
    // The time when the status was last updated.
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
