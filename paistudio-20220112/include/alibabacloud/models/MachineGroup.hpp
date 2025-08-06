// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MACHINEGROUP_HPP_
#define ALIBABACLOUD_MODELS_MACHINEGROUP_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class MachineGroup : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MachineGroup& obj) { 
      DARABONBA_PTR_TO_JSON(Cpu, cpu_);
      DARABONBA_PTR_TO_JSON(CreatorID, creatorID_);
      DARABONBA_PTR_TO_JSON(DefaultDriver, defaultDriver_);
      DARABONBA_PTR_TO_JSON(DiskCapacity, diskCapacity_);
      DARABONBA_PTR_TO_JSON(DiskPL, diskPL_);
      DARABONBA_PTR_TO_JSON(EcsCount, ecsCount_);
      DARABONBA_PTR_TO_JSON(EcsSpec, ecsSpec_);
      DARABONBA_PTR_TO_JSON(GmtCreatedTime, gmtCreatedTime_);
      DARABONBA_PTR_TO_JSON(GmtExpiredTime, gmtExpiredTime_);
      DARABONBA_PTR_TO_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_TO_JSON(GmtStartedTime, gmtStartedTime_);
      DARABONBA_PTR_TO_JSON(Gpu, gpu_);
      DARABONBA_PTR_TO_JSON(GpuMemory, gpuMemory_);
      DARABONBA_PTR_TO_JSON(GpuType, gpuType_);
      DARABONBA_PTR_TO_JSON(MachineGroupID, machineGroupID_);
      DARABONBA_PTR_TO_JSON(Memory, memory_);
      DARABONBA_PTR_TO_JSON(OrderInstanceId, orderInstanceId_);
      DARABONBA_PTR_TO_JSON(PaymentDuration, paymentDuration_);
      DARABONBA_PTR_TO_JSON(PaymentDurationUnit, paymentDurationUnit_);
      DARABONBA_PTR_TO_JSON(PaymentType, paymentType_);
      DARABONBA_PTR_TO_JSON(ReasonCode, reasonCode_);
      DARABONBA_PTR_TO_JSON(ReasonMessage, reasonMessage_);
      DARABONBA_PTR_TO_JSON(ResourceGroupID, resourceGroupID_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SupportedDrivers, supportedDrivers_);
    };
    friend void from_json(const Darabonba::Json& j, MachineGroup& obj) { 
      DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(CreatorID, creatorID_);
      DARABONBA_PTR_FROM_JSON(DefaultDriver, defaultDriver_);
      DARABONBA_PTR_FROM_JSON(DiskCapacity, diskCapacity_);
      DARABONBA_PTR_FROM_JSON(DiskPL, diskPL_);
      DARABONBA_PTR_FROM_JSON(EcsCount, ecsCount_);
      DARABONBA_PTR_FROM_JSON(EcsSpec, ecsSpec_);
      DARABONBA_PTR_FROM_JSON(GmtCreatedTime, gmtCreatedTime_);
      DARABONBA_PTR_FROM_JSON(GmtExpiredTime, gmtExpiredTime_);
      DARABONBA_PTR_FROM_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_FROM_JSON(GmtStartedTime, gmtStartedTime_);
      DARABONBA_PTR_FROM_JSON(Gpu, gpu_);
      DARABONBA_PTR_FROM_JSON(GpuMemory, gpuMemory_);
      DARABONBA_PTR_FROM_JSON(GpuType, gpuType_);
      DARABONBA_PTR_FROM_JSON(MachineGroupID, machineGroupID_);
      DARABONBA_PTR_FROM_JSON(Memory, memory_);
      DARABONBA_PTR_FROM_JSON(OrderInstanceId, orderInstanceId_);
      DARABONBA_PTR_FROM_JSON(PaymentDuration, paymentDuration_);
      DARABONBA_PTR_FROM_JSON(PaymentDurationUnit, paymentDurationUnit_);
      DARABONBA_PTR_FROM_JSON(PaymentType, paymentType_);
      DARABONBA_PTR_FROM_JSON(ReasonCode, reasonCode_);
      DARABONBA_PTR_FROM_JSON(ReasonMessage, reasonMessage_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupID, resourceGroupID_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SupportedDrivers, supportedDrivers_);
    };
    MachineGroup() = default ;
    MachineGroup(const MachineGroup &) = default ;
    MachineGroup(MachineGroup &&) = default ;
    MachineGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MachineGroup() = default ;
    MachineGroup& operator=(const MachineGroup &) = default ;
    MachineGroup& operator=(MachineGroup &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cpu_ != nullptr
        && this->creatorID_ != nullptr && this->defaultDriver_ != nullptr && this->diskCapacity_ != nullptr && this->diskPL_ != nullptr && this->ecsCount_ != nullptr
        && this->ecsSpec_ != nullptr && this->gmtCreatedTime_ != nullptr && this->gmtExpiredTime_ != nullptr && this->gmtModifiedTime_ != nullptr && this->gmtStartedTime_ != nullptr
        && this->gpu_ != nullptr && this->gpuMemory_ != nullptr && this->gpuType_ != nullptr && this->machineGroupID_ != nullptr && this->memory_ != nullptr
        && this->orderInstanceId_ != nullptr && this->paymentDuration_ != nullptr && this->paymentDurationUnit_ != nullptr && this->paymentType_ != nullptr && this->reasonCode_ != nullptr
        && this->reasonMessage_ != nullptr && this->resourceGroupID_ != nullptr && this->resourceType_ != nullptr && this->status_ != nullptr && this->supportedDrivers_ != nullptr; };
    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline int64_t cpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0L) };
    inline MachineGroup& setCpu(int64_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // creatorID Field Functions 
    bool hasCreatorID() const { return this->creatorID_ != nullptr;};
    void deleteCreatorID() { this->creatorID_ = nullptr;};
    inline string creatorID() const { DARABONBA_PTR_GET_DEFAULT(creatorID_, "") };
    inline MachineGroup& setCreatorID(string creatorID) { DARABONBA_PTR_SET_VALUE(creatorID_, creatorID) };


    // defaultDriver Field Functions 
    bool hasDefaultDriver() const { return this->defaultDriver_ != nullptr;};
    void deleteDefaultDriver() { this->defaultDriver_ = nullptr;};
    inline string defaultDriver() const { DARABONBA_PTR_GET_DEFAULT(defaultDriver_, "") };
    inline MachineGroup& setDefaultDriver(string defaultDriver) { DARABONBA_PTR_SET_VALUE(defaultDriver_, defaultDriver) };


    // diskCapacity Field Functions 
    bool hasDiskCapacity() const { return this->diskCapacity_ != nullptr;};
    void deleteDiskCapacity() { this->diskCapacity_ = nullptr;};
    inline int64_t diskCapacity() const { DARABONBA_PTR_GET_DEFAULT(diskCapacity_, 0L) };
    inline MachineGroup& setDiskCapacity(int64_t diskCapacity) { DARABONBA_PTR_SET_VALUE(diskCapacity_, diskCapacity) };


    // diskPL Field Functions 
    bool hasDiskPL() const { return this->diskPL_ != nullptr;};
    void deleteDiskPL() { this->diskPL_ = nullptr;};
    inline string diskPL() const { DARABONBA_PTR_GET_DEFAULT(diskPL_, "") };
    inline MachineGroup& setDiskPL(string diskPL) { DARABONBA_PTR_SET_VALUE(diskPL_, diskPL) };


    // ecsCount Field Functions 
    bool hasEcsCount() const { return this->ecsCount_ != nullptr;};
    void deleteEcsCount() { this->ecsCount_ = nullptr;};
    inline int64_t ecsCount() const { DARABONBA_PTR_GET_DEFAULT(ecsCount_, 0L) };
    inline MachineGroup& setEcsCount(int64_t ecsCount) { DARABONBA_PTR_SET_VALUE(ecsCount_, ecsCount) };


    // ecsSpec Field Functions 
    bool hasEcsSpec() const { return this->ecsSpec_ != nullptr;};
    void deleteEcsSpec() { this->ecsSpec_ = nullptr;};
    inline string ecsSpec() const { DARABONBA_PTR_GET_DEFAULT(ecsSpec_, "") };
    inline MachineGroup& setEcsSpec(string ecsSpec) { DARABONBA_PTR_SET_VALUE(ecsSpec_, ecsSpec) };


    // gmtCreatedTime Field Functions 
    bool hasGmtCreatedTime() const { return this->gmtCreatedTime_ != nullptr;};
    void deleteGmtCreatedTime() { this->gmtCreatedTime_ = nullptr;};
    inline string gmtCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreatedTime_, "") };
    inline MachineGroup& setGmtCreatedTime(string gmtCreatedTime) { DARABONBA_PTR_SET_VALUE(gmtCreatedTime_, gmtCreatedTime) };


    // gmtExpiredTime Field Functions 
    bool hasGmtExpiredTime() const { return this->gmtExpiredTime_ != nullptr;};
    void deleteGmtExpiredTime() { this->gmtExpiredTime_ = nullptr;};
    inline string gmtExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(gmtExpiredTime_, "") };
    inline MachineGroup& setGmtExpiredTime(string gmtExpiredTime) { DARABONBA_PTR_SET_VALUE(gmtExpiredTime_, gmtExpiredTime) };


    // gmtModifiedTime Field Functions 
    bool hasGmtModifiedTime() const { return this->gmtModifiedTime_ != nullptr;};
    void deleteGmtModifiedTime() { this->gmtModifiedTime_ = nullptr;};
    inline string gmtModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedTime_, "") };
    inline MachineGroup& setGmtModifiedTime(string gmtModifiedTime) { DARABONBA_PTR_SET_VALUE(gmtModifiedTime_, gmtModifiedTime) };


    // gmtStartedTime Field Functions 
    bool hasGmtStartedTime() const { return this->gmtStartedTime_ != nullptr;};
    void deleteGmtStartedTime() { this->gmtStartedTime_ = nullptr;};
    inline string gmtStartedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtStartedTime_, "") };
    inline MachineGroup& setGmtStartedTime(string gmtStartedTime) { DARABONBA_PTR_SET_VALUE(gmtStartedTime_, gmtStartedTime) };


    // gpu Field Functions 
    bool hasGpu() const { return this->gpu_ != nullptr;};
    void deleteGpu() { this->gpu_ = nullptr;};
    inline int64_t gpu() const { DARABONBA_PTR_GET_DEFAULT(gpu_, 0L) };
    inline MachineGroup& setGpu(int64_t gpu) { DARABONBA_PTR_SET_VALUE(gpu_, gpu) };


    // gpuMemory Field Functions 
    bool hasGpuMemory() const { return this->gpuMemory_ != nullptr;};
    void deleteGpuMemory() { this->gpuMemory_ = nullptr;};
    inline int64_t gpuMemory() const { DARABONBA_PTR_GET_DEFAULT(gpuMemory_, 0L) };
    inline MachineGroup& setGpuMemory(int64_t gpuMemory) { DARABONBA_PTR_SET_VALUE(gpuMemory_, gpuMemory) };


    // gpuType Field Functions 
    bool hasGpuType() const { return this->gpuType_ != nullptr;};
    void deleteGpuType() { this->gpuType_ = nullptr;};
    inline string gpuType() const { DARABONBA_PTR_GET_DEFAULT(gpuType_, "") };
    inline MachineGroup& setGpuType(string gpuType) { DARABONBA_PTR_SET_VALUE(gpuType_, gpuType) };


    // machineGroupID Field Functions 
    bool hasMachineGroupID() const { return this->machineGroupID_ != nullptr;};
    void deleteMachineGroupID() { this->machineGroupID_ = nullptr;};
    inline string machineGroupID() const { DARABONBA_PTR_GET_DEFAULT(machineGroupID_, "") };
    inline MachineGroup& setMachineGroupID(string machineGroupID) { DARABONBA_PTR_SET_VALUE(machineGroupID_, machineGroupID) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline int64_t memory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0L) };
    inline MachineGroup& setMemory(int64_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // orderInstanceId Field Functions 
    bool hasOrderInstanceId() const { return this->orderInstanceId_ != nullptr;};
    void deleteOrderInstanceId() { this->orderInstanceId_ = nullptr;};
    inline string orderInstanceId() const { DARABONBA_PTR_GET_DEFAULT(orderInstanceId_, "") };
    inline MachineGroup& setOrderInstanceId(string orderInstanceId) { DARABONBA_PTR_SET_VALUE(orderInstanceId_, orderInstanceId) };


    // paymentDuration Field Functions 
    bool hasPaymentDuration() const { return this->paymentDuration_ != nullptr;};
    void deletePaymentDuration() { this->paymentDuration_ = nullptr;};
    inline string paymentDuration() const { DARABONBA_PTR_GET_DEFAULT(paymentDuration_, "") };
    inline MachineGroup& setPaymentDuration(string paymentDuration) { DARABONBA_PTR_SET_VALUE(paymentDuration_, paymentDuration) };


    // paymentDurationUnit Field Functions 
    bool hasPaymentDurationUnit() const { return this->paymentDurationUnit_ != nullptr;};
    void deletePaymentDurationUnit() { this->paymentDurationUnit_ = nullptr;};
    inline string paymentDurationUnit() const { DARABONBA_PTR_GET_DEFAULT(paymentDurationUnit_, "") };
    inline MachineGroup& setPaymentDurationUnit(string paymentDurationUnit) { DARABONBA_PTR_SET_VALUE(paymentDurationUnit_, paymentDurationUnit) };


    // paymentType Field Functions 
    bool hasPaymentType() const { return this->paymentType_ != nullptr;};
    void deletePaymentType() { this->paymentType_ = nullptr;};
    inline string paymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, "") };
    inline MachineGroup& setPaymentType(string paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


    // reasonCode Field Functions 
    bool hasReasonCode() const { return this->reasonCode_ != nullptr;};
    void deleteReasonCode() { this->reasonCode_ = nullptr;};
    inline string reasonCode() const { DARABONBA_PTR_GET_DEFAULT(reasonCode_, "") };
    inline MachineGroup& setReasonCode(string reasonCode) { DARABONBA_PTR_SET_VALUE(reasonCode_, reasonCode) };


    // reasonMessage Field Functions 
    bool hasReasonMessage() const { return this->reasonMessage_ != nullptr;};
    void deleteReasonMessage() { this->reasonMessage_ = nullptr;};
    inline string reasonMessage() const { DARABONBA_PTR_GET_DEFAULT(reasonMessage_, "") };
    inline MachineGroup& setReasonMessage(string reasonMessage) { DARABONBA_PTR_SET_VALUE(reasonMessage_, reasonMessage) };


    // resourceGroupID Field Functions 
    bool hasResourceGroupID() const { return this->resourceGroupID_ != nullptr;};
    void deleteResourceGroupID() { this->resourceGroupID_ = nullptr;};
    inline string resourceGroupID() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupID_, "") };
    inline MachineGroup& setResourceGroupID(string resourceGroupID) { DARABONBA_PTR_SET_VALUE(resourceGroupID_, resourceGroupID) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline MachineGroup& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline MachineGroup& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // supportedDrivers Field Functions 
    bool hasSupportedDrivers() const { return this->supportedDrivers_ != nullptr;};
    void deleteSupportedDrivers() { this->supportedDrivers_ = nullptr;};
    inline const vector<string> & supportedDrivers() const { DARABONBA_PTR_GET_CONST(supportedDrivers_, vector<string>) };
    inline vector<string> supportedDrivers() { DARABONBA_PTR_GET(supportedDrivers_, vector<string>) };
    inline MachineGroup& setSupportedDrivers(const vector<string> & supportedDrivers) { DARABONBA_PTR_SET_VALUE(supportedDrivers_, supportedDrivers) };
    inline MachineGroup& setSupportedDrivers(vector<string> && supportedDrivers) { DARABONBA_PTR_SET_RVALUE(supportedDrivers_, supportedDrivers) };


  protected:
    std::shared_ptr<int64_t> cpu_ = nullptr;
    std::shared_ptr<string> creatorID_ = nullptr;
    std::shared_ptr<string> defaultDriver_ = nullptr;
    std::shared_ptr<int64_t> diskCapacity_ = nullptr;
    std::shared_ptr<string> diskPL_ = nullptr;
    std::shared_ptr<int64_t> ecsCount_ = nullptr;
    std::shared_ptr<string> ecsSpec_ = nullptr;
    std::shared_ptr<string> gmtCreatedTime_ = nullptr;
    std::shared_ptr<string> gmtExpiredTime_ = nullptr;
    std::shared_ptr<string> gmtModifiedTime_ = nullptr;
    std::shared_ptr<string> gmtStartedTime_ = nullptr;
    std::shared_ptr<int64_t> gpu_ = nullptr;
    std::shared_ptr<int64_t> gpuMemory_ = nullptr;
    std::shared_ptr<string> gpuType_ = nullptr;
    std::shared_ptr<string> machineGroupID_ = nullptr;
    std::shared_ptr<int64_t> memory_ = nullptr;
    std::shared_ptr<string> orderInstanceId_ = nullptr;
    std::shared_ptr<string> paymentDuration_ = nullptr;
    std::shared_ptr<string> paymentDurationUnit_ = nullptr;
    std::shared_ptr<string> paymentType_ = nullptr;
    std::shared_ptr<string> reasonCode_ = nullptr;
    std::shared_ptr<string> reasonMessage_ = nullptr;
    std::shared_ptr<string> resourceGroupID_ = nullptr;
    std::shared_ptr<string> resourceType_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<vector<string>> supportedDrivers_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
