// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDEDICATEDCLUSTERRESPONSEBODYDEDICATEDCLUSTERSTATUSLISTDEDICATEDCLUSTERSTATUS_HPP_
#define ALIBABACLOUD_MODELS_LISTDEDICATEDCLUSTERRESPONSEBODYDEDICATEDCLUSTERSTATUSLISTDEDICATEDCLUSTERSTATUS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class ListDedicatedClusterResponseBodyDedicatedClusterStatusListDedicatedClusterStatus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDedicatedClusterResponseBodyDedicatedClusterStatusListDedicatedClusterStatus& obj) { 
      DARABONBA_PTR_TO_JSON(CpuUtilization, cpuUtilization_);
      DARABONBA_PTR_TO_JSON(DedicatedClusterId, dedicatedClusterId_);
      DARABONBA_PTR_TO_JSON(DedicatedClusterName, dedicatedClusterName_);
      DARABONBA_PTR_TO_JSON(DiskUtilization, diskUtilization_);
      DARABONBA_PTR_TO_JSON(DtsInstanceID, dtsInstanceID_);
      DARABONBA_PTR_TO_JSON(Du, du_);
      DARABONBA_PTR_TO_JSON(DuUtilization, duUtilization_);
      DARABONBA_PTR_TO_JSON(GmtCreated, gmtCreated_);
      DARABONBA_PTR_TO_JSON(MemUtilization, memUtilization_);
      DARABONBA_PTR_TO_JSON(NodeCount, nodeCount_);
      DARABONBA_PTR_TO_JSON(OversoldDu, oversoldDu_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(TotalCpuCore, totalCpuCore_);
      DARABONBA_PTR_TO_JSON(TotalDiskGBSize, totalDiskGBSize_);
      DARABONBA_PTR_TO_JSON(TotalMemGBSize, totalMemGBSize_);
      DARABONBA_PTR_TO_JSON(UsedCpuCore, usedCpuCore_);
      DARABONBA_PTR_TO_JSON(UsedDiskGBSize, usedDiskGBSize_);
      DARABONBA_PTR_TO_JSON(UsedDu, usedDu_);
      DARABONBA_PTR_TO_JSON(UsedMemGBSize, usedMemGBSize_);
    };
    friend void from_json(const Darabonba::Json& j, ListDedicatedClusterResponseBodyDedicatedClusterStatusListDedicatedClusterStatus& obj) { 
      DARABONBA_PTR_FROM_JSON(CpuUtilization, cpuUtilization_);
      DARABONBA_PTR_FROM_JSON(DedicatedClusterId, dedicatedClusterId_);
      DARABONBA_PTR_FROM_JSON(DedicatedClusterName, dedicatedClusterName_);
      DARABONBA_PTR_FROM_JSON(DiskUtilization, diskUtilization_);
      DARABONBA_PTR_FROM_JSON(DtsInstanceID, dtsInstanceID_);
      DARABONBA_PTR_FROM_JSON(Du, du_);
      DARABONBA_PTR_FROM_JSON(DuUtilization, duUtilization_);
      DARABONBA_PTR_FROM_JSON(GmtCreated, gmtCreated_);
      DARABONBA_PTR_FROM_JSON(MemUtilization, memUtilization_);
      DARABONBA_PTR_FROM_JSON(NodeCount, nodeCount_);
      DARABONBA_PTR_FROM_JSON(OversoldDu, oversoldDu_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(TotalCpuCore, totalCpuCore_);
      DARABONBA_PTR_FROM_JSON(TotalDiskGBSize, totalDiskGBSize_);
      DARABONBA_PTR_FROM_JSON(TotalMemGBSize, totalMemGBSize_);
      DARABONBA_PTR_FROM_JSON(UsedCpuCore, usedCpuCore_);
      DARABONBA_PTR_FROM_JSON(UsedDiskGBSize, usedDiskGBSize_);
      DARABONBA_PTR_FROM_JSON(UsedDu, usedDu_);
      DARABONBA_PTR_FROM_JSON(UsedMemGBSize, usedMemGBSize_);
    };
    ListDedicatedClusterResponseBodyDedicatedClusterStatusListDedicatedClusterStatus() = default ;
    ListDedicatedClusterResponseBodyDedicatedClusterStatusListDedicatedClusterStatus(const ListDedicatedClusterResponseBodyDedicatedClusterStatusListDedicatedClusterStatus &) = default ;
    ListDedicatedClusterResponseBodyDedicatedClusterStatusListDedicatedClusterStatus(ListDedicatedClusterResponseBodyDedicatedClusterStatusListDedicatedClusterStatus &&) = default ;
    ListDedicatedClusterResponseBodyDedicatedClusterStatusListDedicatedClusterStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDedicatedClusterResponseBodyDedicatedClusterStatusListDedicatedClusterStatus() = default ;
    ListDedicatedClusterResponseBodyDedicatedClusterStatusListDedicatedClusterStatus& operator=(const ListDedicatedClusterResponseBodyDedicatedClusterStatusListDedicatedClusterStatus &) = default ;
    ListDedicatedClusterResponseBodyDedicatedClusterStatusListDedicatedClusterStatus& operator=(ListDedicatedClusterResponseBodyDedicatedClusterStatusListDedicatedClusterStatus &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cpuUtilization_ == nullptr
        && return this->dedicatedClusterId_ == nullptr && return this->dedicatedClusterName_ == nullptr && return this->diskUtilization_ == nullptr && return this->dtsInstanceID_ == nullptr && return this->du_ == nullptr
        && return this->duUtilization_ == nullptr && return this->gmtCreated_ == nullptr && return this->memUtilization_ == nullptr && return this->nodeCount_ == nullptr && return this->oversoldDu_ == nullptr
        && return this->regionId_ == nullptr && return this->state_ == nullptr && return this->totalCpuCore_ == nullptr && return this->totalDiskGBSize_ == nullptr && return this->totalMemGBSize_ == nullptr
        && return this->usedCpuCore_ == nullptr && return this->usedDiskGBSize_ == nullptr && return this->usedDu_ == nullptr && return this->usedMemGBSize_ == nullptr; };
    // cpuUtilization Field Functions 
    bool hasCpuUtilization() const { return this->cpuUtilization_ != nullptr;};
    void deleteCpuUtilization() { this->cpuUtilization_ = nullptr;};
    inline int64_t cpuUtilization() const { DARABONBA_PTR_GET_DEFAULT(cpuUtilization_, 0L) };
    inline ListDedicatedClusterResponseBodyDedicatedClusterStatusListDedicatedClusterStatus& setCpuUtilization(int64_t cpuUtilization) { DARABONBA_PTR_SET_VALUE(cpuUtilization_, cpuUtilization) };


    // dedicatedClusterId Field Functions 
    bool hasDedicatedClusterId() const { return this->dedicatedClusterId_ != nullptr;};
    void deleteDedicatedClusterId() { this->dedicatedClusterId_ = nullptr;};
    inline string dedicatedClusterId() const { DARABONBA_PTR_GET_DEFAULT(dedicatedClusterId_, "") };
    inline ListDedicatedClusterResponseBodyDedicatedClusterStatusListDedicatedClusterStatus& setDedicatedClusterId(string dedicatedClusterId) { DARABONBA_PTR_SET_VALUE(dedicatedClusterId_, dedicatedClusterId) };


    // dedicatedClusterName Field Functions 
    bool hasDedicatedClusterName() const { return this->dedicatedClusterName_ != nullptr;};
    void deleteDedicatedClusterName() { this->dedicatedClusterName_ = nullptr;};
    inline string dedicatedClusterName() const { DARABONBA_PTR_GET_DEFAULT(dedicatedClusterName_, "") };
    inline ListDedicatedClusterResponseBodyDedicatedClusterStatusListDedicatedClusterStatus& setDedicatedClusterName(string dedicatedClusterName) { DARABONBA_PTR_SET_VALUE(dedicatedClusterName_, dedicatedClusterName) };


    // diskUtilization Field Functions 
    bool hasDiskUtilization() const { return this->diskUtilization_ != nullptr;};
    void deleteDiskUtilization() { this->diskUtilization_ = nullptr;};
    inline int64_t diskUtilization() const { DARABONBA_PTR_GET_DEFAULT(diskUtilization_, 0L) };
    inline ListDedicatedClusterResponseBodyDedicatedClusterStatusListDedicatedClusterStatus& setDiskUtilization(int64_t diskUtilization) { DARABONBA_PTR_SET_VALUE(diskUtilization_, diskUtilization) };


    // dtsInstanceID Field Functions 
    bool hasDtsInstanceID() const { return this->dtsInstanceID_ != nullptr;};
    void deleteDtsInstanceID() { this->dtsInstanceID_ = nullptr;};
    inline string dtsInstanceID() const { DARABONBA_PTR_GET_DEFAULT(dtsInstanceID_, "") };
    inline ListDedicatedClusterResponseBodyDedicatedClusterStatusListDedicatedClusterStatus& setDtsInstanceID(string dtsInstanceID) { DARABONBA_PTR_SET_VALUE(dtsInstanceID_, dtsInstanceID) };


    // du Field Functions 
    bool hasDu() const { return this->du_ != nullptr;};
    void deleteDu() { this->du_ = nullptr;};
    inline int64_t du() const { DARABONBA_PTR_GET_DEFAULT(du_, 0L) };
    inline ListDedicatedClusterResponseBodyDedicatedClusterStatusListDedicatedClusterStatus& setDu(int64_t du) { DARABONBA_PTR_SET_VALUE(du_, du) };


    // duUtilization Field Functions 
    bool hasDuUtilization() const { return this->duUtilization_ != nullptr;};
    void deleteDuUtilization() { this->duUtilization_ = nullptr;};
    inline int64_t duUtilization() const { DARABONBA_PTR_GET_DEFAULT(duUtilization_, 0L) };
    inline ListDedicatedClusterResponseBodyDedicatedClusterStatusListDedicatedClusterStatus& setDuUtilization(int64_t duUtilization) { DARABONBA_PTR_SET_VALUE(duUtilization_, duUtilization) };


    // gmtCreated Field Functions 
    bool hasGmtCreated() const { return this->gmtCreated_ != nullptr;};
    void deleteGmtCreated() { this->gmtCreated_ = nullptr;};
    inline int64_t gmtCreated() const { DARABONBA_PTR_GET_DEFAULT(gmtCreated_, 0L) };
    inline ListDedicatedClusterResponseBodyDedicatedClusterStatusListDedicatedClusterStatus& setGmtCreated(int64_t gmtCreated) { DARABONBA_PTR_SET_VALUE(gmtCreated_, gmtCreated) };


    // memUtilization Field Functions 
    bool hasMemUtilization() const { return this->memUtilization_ != nullptr;};
    void deleteMemUtilization() { this->memUtilization_ = nullptr;};
    inline int64_t memUtilization() const { DARABONBA_PTR_GET_DEFAULT(memUtilization_, 0L) };
    inline ListDedicatedClusterResponseBodyDedicatedClusterStatusListDedicatedClusterStatus& setMemUtilization(int64_t memUtilization) { DARABONBA_PTR_SET_VALUE(memUtilization_, memUtilization) };


    // nodeCount Field Functions 
    bool hasNodeCount() const { return this->nodeCount_ != nullptr;};
    void deleteNodeCount() { this->nodeCount_ = nullptr;};
    inline int64_t nodeCount() const { DARABONBA_PTR_GET_DEFAULT(nodeCount_, 0L) };
    inline ListDedicatedClusterResponseBodyDedicatedClusterStatusListDedicatedClusterStatus& setNodeCount(int64_t nodeCount) { DARABONBA_PTR_SET_VALUE(nodeCount_, nodeCount) };


    // oversoldDu Field Functions 
    bool hasOversoldDu() const { return this->oversoldDu_ != nullptr;};
    void deleteOversoldDu() { this->oversoldDu_ = nullptr;};
    inline int64_t oversoldDu() const { DARABONBA_PTR_GET_DEFAULT(oversoldDu_, 0L) };
    inline ListDedicatedClusterResponseBodyDedicatedClusterStatusListDedicatedClusterStatus& setOversoldDu(int64_t oversoldDu) { DARABONBA_PTR_SET_VALUE(oversoldDu_, oversoldDu) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListDedicatedClusterResponseBodyDedicatedClusterStatusListDedicatedClusterStatus& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline ListDedicatedClusterResponseBodyDedicatedClusterStatusListDedicatedClusterStatus& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // totalCpuCore Field Functions 
    bool hasTotalCpuCore() const { return this->totalCpuCore_ != nullptr;};
    void deleteTotalCpuCore() { this->totalCpuCore_ = nullptr;};
    inline int64_t totalCpuCore() const { DARABONBA_PTR_GET_DEFAULT(totalCpuCore_, 0L) };
    inline ListDedicatedClusterResponseBodyDedicatedClusterStatusListDedicatedClusterStatus& setTotalCpuCore(int64_t totalCpuCore) { DARABONBA_PTR_SET_VALUE(totalCpuCore_, totalCpuCore) };


    // totalDiskGBSize Field Functions 
    bool hasTotalDiskGBSize() const { return this->totalDiskGBSize_ != nullptr;};
    void deleteTotalDiskGBSize() { this->totalDiskGBSize_ = nullptr;};
    inline int64_t totalDiskGBSize() const { DARABONBA_PTR_GET_DEFAULT(totalDiskGBSize_, 0L) };
    inline ListDedicatedClusterResponseBodyDedicatedClusterStatusListDedicatedClusterStatus& setTotalDiskGBSize(int64_t totalDiskGBSize) { DARABONBA_PTR_SET_VALUE(totalDiskGBSize_, totalDiskGBSize) };


    // totalMemGBSize Field Functions 
    bool hasTotalMemGBSize() const { return this->totalMemGBSize_ != nullptr;};
    void deleteTotalMemGBSize() { this->totalMemGBSize_ = nullptr;};
    inline int64_t totalMemGBSize() const { DARABONBA_PTR_GET_DEFAULT(totalMemGBSize_, 0L) };
    inline ListDedicatedClusterResponseBodyDedicatedClusterStatusListDedicatedClusterStatus& setTotalMemGBSize(int64_t totalMemGBSize) { DARABONBA_PTR_SET_VALUE(totalMemGBSize_, totalMemGBSize) };


    // usedCpuCore Field Functions 
    bool hasUsedCpuCore() const { return this->usedCpuCore_ != nullptr;};
    void deleteUsedCpuCore() { this->usedCpuCore_ = nullptr;};
    inline int64_t usedCpuCore() const { DARABONBA_PTR_GET_DEFAULT(usedCpuCore_, 0L) };
    inline ListDedicatedClusterResponseBodyDedicatedClusterStatusListDedicatedClusterStatus& setUsedCpuCore(int64_t usedCpuCore) { DARABONBA_PTR_SET_VALUE(usedCpuCore_, usedCpuCore) };


    // usedDiskGBSize Field Functions 
    bool hasUsedDiskGBSize() const { return this->usedDiskGBSize_ != nullptr;};
    void deleteUsedDiskGBSize() { this->usedDiskGBSize_ = nullptr;};
    inline int64_t usedDiskGBSize() const { DARABONBA_PTR_GET_DEFAULT(usedDiskGBSize_, 0L) };
    inline ListDedicatedClusterResponseBodyDedicatedClusterStatusListDedicatedClusterStatus& setUsedDiskGBSize(int64_t usedDiskGBSize) { DARABONBA_PTR_SET_VALUE(usedDiskGBSize_, usedDiskGBSize) };


    // usedDu Field Functions 
    bool hasUsedDu() const { return this->usedDu_ != nullptr;};
    void deleteUsedDu() { this->usedDu_ = nullptr;};
    inline int64_t usedDu() const { DARABONBA_PTR_GET_DEFAULT(usedDu_, 0L) };
    inline ListDedicatedClusterResponseBodyDedicatedClusterStatusListDedicatedClusterStatus& setUsedDu(int64_t usedDu) { DARABONBA_PTR_SET_VALUE(usedDu_, usedDu) };


    // usedMemGBSize Field Functions 
    bool hasUsedMemGBSize() const { return this->usedMemGBSize_ != nullptr;};
    void deleteUsedMemGBSize() { this->usedMemGBSize_ = nullptr;};
    inline int64_t usedMemGBSize() const { DARABONBA_PTR_GET_DEFAULT(usedMemGBSize_, 0L) };
    inline ListDedicatedClusterResponseBodyDedicatedClusterStatusListDedicatedClusterStatus& setUsedMemGBSize(int64_t usedMemGBSize) { DARABONBA_PTR_SET_VALUE(usedMemGBSize_, usedMemGBSize) };


  protected:
    // The CPU utilization, in percentage.
    std::shared_ptr<int64_t> cpuUtilization_ = nullptr;
    // The ID of the cluster.
    std::shared_ptr<string> dedicatedClusterId_ = nullptr;
    // The name of the cluster.
    std::shared_ptr<string> dedicatedClusterName_ = nullptr;
    // The disk usage.
    std::shared_ptr<int64_t> diskUtilization_ = nullptr;
    // The ID of the DTS instance.
    std::shared_ptr<string> dtsInstanceID_ = nullptr;
    // The number of DTS units (DUs).
    std::shared_ptr<int64_t> du_ = nullptr;
    // The DU usage, in percentage.
    std::shared_ptr<int64_t> duUtilization_ = nullptr;
    // The time when the cluster was created.
    std::shared_ptr<int64_t> gmtCreated_ = nullptr;
    // The memory usage.
    std::shared_ptr<int64_t> memUtilization_ = nullptr;
    // The number of nodes in the cluster.
    std::shared_ptr<int64_t> nodeCount_ = nullptr;
    // The number of over-provisioned DUs.
    std::shared_ptr<int64_t> oversoldDu_ = nullptr;
    // The ID of the region in which the DTS instance resides.
    std::shared_ptr<string> regionId_ = nullptr;
    // The status of the cluster. Valid values:
    // 
    // *   **init**: The cluster is being initialized.
    // *   **schedule**: The cluster is pending scheduling.
    // *   **running**: The cluster is running.
    // *   **upgrade**: The cluster is being upgraded.
    // *   **downgrade**: The cluster is being downgraded.
    // *   **locked**: The cluster is locked.
    // *   **releasing**: The cluster is being released.
    // *   **released**: The cluster is released.
    std::shared_ptr<string> state_ = nullptr;
    // The total number of CPU cores.
    std::shared_ptr<int64_t> totalCpuCore_ = nullptr;
    // The total disk capacity. Unit: GB.
    std::shared_ptr<int64_t> totalDiskGBSize_ = nullptr;
    // The total memory capacity. Unit: GB.
    std::shared_ptr<int64_t> totalMemGBSize_ = nullptr;
    // The number of used CPU cores.
    std::shared_ptr<int64_t> usedCpuCore_ = nullptr;
    // The used disk capacity. Unit: GB.
    std::shared_ptr<int64_t> usedDiskGBSize_ = nullptr;
    // The number of used DUs.
    std::shared_ptr<int64_t> usedDu_ = nullptr;
    // The used memory capacity. Unit: GB.
    std::shared_ptr<int64_t> usedMemGBSize_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
