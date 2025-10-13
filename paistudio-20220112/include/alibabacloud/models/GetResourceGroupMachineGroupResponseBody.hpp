// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCEGROUPMACHINEGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCEGROUPMACHINEGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetResourceGroupMachineGroupResponseBodyTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class GetResourceGroupMachineGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourceGroupMachineGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AllocatableCpu, allocatableCpu_);
      DARABONBA_PTR_TO_JSON(AllocatableMemory, allocatableMemory_);
      DARABONBA_PTR_TO_JSON(Cpu, cpu_);
      DARABONBA_PTR_TO_JSON(DefaultDriver, defaultDriver_);
      DARABONBA_PTR_TO_JSON(EcsCount, ecsCount_);
      DARABONBA_PTR_TO_JSON(EcsSpec, ecsSpec_);
      DARABONBA_PTR_TO_JSON(GmtCreatedTime, gmtCreatedTime_);
      DARABONBA_PTR_TO_JSON(GmtExpiredTime, gmtExpiredTime_);
      DARABONBA_PTR_TO_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_TO_JSON(GmtStartedTime, gmtStartedTime_);
      DARABONBA_PTR_TO_JSON(Gpu, gpu_);
      DARABONBA_PTR_TO_JSON(GpuType, gpuType_);
      DARABONBA_PTR_TO_JSON(MachineGroupID, machineGroupID_);
      DARABONBA_PTR_TO_JSON(Memory, memory_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PaymentDuration, paymentDuration_);
      DARABONBA_PTR_TO_JSON(PaymentDurationUnit, paymentDurationUnit_);
      DARABONBA_PTR_TO_JSON(PaymentType, paymentType_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupID, resourceGroupID_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SupportedDrivers, supportedDrivers_);
      DARABONBA_PTR_TO_JSON(SystemReservedCpu, systemReservedCpu_);
      DARABONBA_PTR_TO_JSON(SystemReservedMemory, systemReservedMemory_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourceGroupMachineGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AllocatableCpu, allocatableCpu_);
      DARABONBA_PTR_FROM_JSON(AllocatableMemory, allocatableMemory_);
      DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(DefaultDriver, defaultDriver_);
      DARABONBA_PTR_FROM_JSON(EcsCount, ecsCount_);
      DARABONBA_PTR_FROM_JSON(EcsSpec, ecsSpec_);
      DARABONBA_PTR_FROM_JSON(GmtCreatedTime, gmtCreatedTime_);
      DARABONBA_PTR_FROM_JSON(GmtExpiredTime, gmtExpiredTime_);
      DARABONBA_PTR_FROM_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_FROM_JSON(GmtStartedTime, gmtStartedTime_);
      DARABONBA_PTR_FROM_JSON(Gpu, gpu_);
      DARABONBA_PTR_FROM_JSON(GpuType, gpuType_);
      DARABONBA_PTR_FROM_JSON(MachineGroupID, machineGroupID_);
      DARABONBA_PTR_FROM_JSON(Memory, memory_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PaymentDuration, paymentDuration_);
      DARABONBA_PTR_FROM_JSON(PaymentDurationUnit, paymentDurationUnit_);
      DARABONBA_PTR_FROM_JSON(PaymentType, paymentType_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupID, resourceGroupID_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SupportedDrivers, supportedDrivers_);
      DARABONBA_PTR_FROM_JSON(SystemReservedCpu, systemReservedCpu_);
      DARABONBA_PTR_FROM_JSON(SystemReservedMemory, systemReservedMemory_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    GetResourceGroupMachineGroupResponseBody() = default ;
    GetResourceGroupMachineGroupResponseBody(const GetResourceGroupMachineGroupResponseBody &) = default ;
    GetResourceGroupMachineGroupResponseBody(GetResourceGroupMachineGroupResponseBody &&) = default ;
    GetResourceGroupMachineGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourceGroupMachineGroupResponseBody() = default ;
    GetResourceGroupMachineGroupResponseBody& operator=(const GetResourceGroupMachineGroupResponseBody &) = default ;
    GetResourceGroupMachineGroupResponseBody& operator=(GetResourceGroupMachineGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->allocatableCpu_ == nullptr
        && return this->allocatableMemory_ == nullptr && return this->cpu_ == nullptr && return this->defaultDriver_ == nullptr && return this->ecsCount_ == nullptr && return this->ecsSpec_ == nullptr
        && return this->gmtCreatedTime_ == nullptr && return this->gmtExpiredTime_ == nullptr && return this->gmtModifiedTime_ == nullptr && return this->gmtStartedTime_ == nullptr && return this->gpu_ == nullptr
        && return this->gpuType_ == nullptr && return this->machineGroupID_ == nullptr && return this->memory_ == nullptr && return this->name_ == nullptr && return this->paymentDuration_ == nullptr
        && return this->paymentDurationUnit_ == nullptr && return this->paymentType_ == nullptr && return this->requestId_ == nullptr && return this->resourceGroupID_ == nullptr && return this->status_ == nullptr
        && return this->supportedDrivers_ == nullptr && return this->systemReservedCpu_ == nullptr && return this->systemReservedMemory_ == nullptr && return this->tags_ == nullptr; };
    // allocatableCpu Field Functions 
    bool hasAllocatableCpu() const { return this->allocatableCpu_ != nullptr;};
    void deleteAllocatableCpu() { this->allocatableCpu_ = nullptr;};
    inline string allocatableCpu() const { DARABONBA_PTR_GET_DEFAULT(allocatableCpu_, "") };
    inline GetResourceGroupMachineGroupResponseBody& setAllocatableCpu(string allocatableCpu) { DARABONBA_PTR_SET_VALUE(allocatableCpu_, allocatableCpu) };


    // allocatableMemory Field Functions 
    bool hasAllocatableMemory() const { return this->allocatableMemory_ != nullptr;};
    void deleteAllocatableMemory() { this->allocatableMemory_ = nullptr;};
    inline string allocatableMemory() const { DARABONBA_PTR_GET_DEFAULT(allocatableMemory_, "") };
    inline GetResourceGroupMachineGroupResponseBody& setAllocatableMemory(string allocatableMemory) { DARABONBA_PTR_SET_VALUE(allocatableMemory_, allocatableMemory) };


    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline string cpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, "") };
    inline GetResourceGroupMachineGroupResponseBody& setCpu(string cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // defaultDriver Field Functions 
    bool hasDefaultDriver() const { return this->defaultDriver_ != nullptr;};
    void deleteDefaultDriver() { this->defaultDriver_ = nullptr;};
    inline string defaultDriver() const { DARABONBA_PTR_GET_DEFAULT(defaultDriver_, "") };
    inline GetResourceGroupMachineGroupResponseBody& setDefaultDriver(string defaultDriver) { DARABONBA_PTR_SET_VALUE(defaultDriver_, defaultDriver) };


    // ecsCount Field Functions 
    bool hasEcsCount() const { return this->ecsCount_ != nullptr;};
    void deleteEcsCount() { this->ecsCount_ = nullptr;};
    inline int64_t ecsCount() const { DARABONBA_PTR_GET_DEFAULT(ecsCount_, 0L) };
    inline GetResourceGroupMachineGroupResponseBody& setEcsCount(int64_t ecsCount) { DARABONBA_PTR_SET_VALUE(ecsCount_, ecsCount) };


    // ecsSpec Field Functions 
    bool hasEcsSpec() const { return this->ecsSpec_ != nullptr;};
    void deleteEcsSpec() { this->ecsSpec_ = nullptr;};
    inline string ecsSpec() const { DARABONBA_PTR_GET_DEFAULT(ecsSpec_, "") };
    inline GetResourceGroupMachineGroupResponseBody& setEcsSpec(string ecsSpec) { DARABONBA_PTR_SET_VALUE(ecsSpec_, ecsSpec) };


    // gmtCreatedTime Field Functions 
    bool hasGmtCreatedTime() const { return this->gmtCreatedTime_ != nullptr;};
    void deleteGmtCreatedTime() { this->gmtCreatedTime_ = nullptr;};
    inline string gmtCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreatedTime_, "") };
    inline GetResourceGroupMachineGroupResponseBody& setGmtCreatedTime(string gmtCreatedTime) { DARABONBA_PTR_SET_VALUE(gmtCreatedTime_, gmtCreatedTime) };


    // gmtExpiredTime Field Functions 
    bool hasGmtExpiredTime() const { return this->gmtExpiredTime_ != nullptr;};
    void deleteGmtExpiredTime() { this->gmtExpiredTime_ = nullptr;};
    inline string gmtExpiredTime() const { DARABONBA_PTR_GET_DEFAULT(gmtExpiredTime_, "") };
    inline GetResourceGroupMachineGroupResponseBody& setGmtExpiredTime(string gmtExpiredTime) { DARABONBA_PTR_SET_VALUE(gmtExpiredTime_, gmtExpiredTime) };


    // gmtModifiedTime Field Functions 
    bool hasGmtModifiedTime() const { return this->gmtModifiedTime_ != nullptr;};
    void deleteGmtModifiedTime() { this->gmtModifiedTime_ = nullptr;};
    inline string gmtModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedTime_, "") };
    inline GetResourceGroupMachineGroupResponseBody& setGmtModifiedTime(string gmtModifiedTime) { DARABONBA_PTR_SET_VALUE(gmtModifiedTime_, gmtModifiedTime) };


    // gmtStartedTime Field Functions 
    bool hasGmtStartedTime() const { return this->gmtStartedTime_ != nullptr;};
    void deleteGmtStartedTime() { this->gmtStartedTime_ = nullptr;};
    inline string gmtStartedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtStartedTime_, "") };
    inline GetResourceGroupMachineGroupResponseBody& setGmtStartedTime(string gmtStartedTime) { DARABONBA_PTR_SET_VALUE(gmtStartedTime_, gmtStartedTime) };


    // gpu Field Functions 
    bool hasGpu() const { return this->gpu_ != nullptr;};
    void deleteGpu() { this->gpu_ = nullptr;};
    inline string gpu() const { DARABONBA_PTR_GET_DEFAULT(gpu_, "") };
    inline GetResourceGroupMachineGroupResponseBody& setGpu(string gpu) { DARABONBA_PTR_SET_VALUE(gpu_, gpu) };


    // gpuType Field Functions 
    bool hasGpuType() const { return this->gpuType_ != nullptr;};
    void deleteGpuType() { this->gpuType_ = nullptr;};
    inline string gpuType() const { DARABONBA_PTR_GET_DEFAULT(gpuType_, "") };
    inline GetResourceGroupMachineGroupResponseBody& setGpuType(string gpuType) { DARABONBA_PTR_SET_VALUE(gpuType_, gpuType) };


    // machineGroupID Field Functions 
    bool hasMachineGroupID() const { return this->machineGroupID_ != nullptr;};
    void deleteMachineGroupID() { this->machineGroupID_ = nullptr;};
    inline string machineGroupID() const { DARABONBA_PTR_GET_DEFAULT(machineGroupID_, "") };
    inline GetResourceGroupMachineGroupResponseBody& setMachineGroupID(string machineGroupID) { DARABONBA_PTR_SET_VALUE(machineGroupID_, machineGroupID) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline string memory() const { DARABONBA_PTR_GET_DEFAULT(memory_, "") };
    inline GetResourceGroupMachineGroupResponseBody& setMemory(string memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetResourceGroupMachineGroupResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // paymentDuration Field Functions 
    bool hasPaymentDuration() const { return this->paymentDuration_ != nullptr;};
    void deletePaymentDuration() { this->paymentDuration_ = nullptr;};
    inline string paymentDuration() const { DARABONBA_PTR_GET_DEFAULT(paymentDuration_, "") };
    inline GetResourceGroupMachineGroupResponseBody& setPaymentDuration(string paymentDuration) { DARABONBA_PTR_SET_VALUE(paymentDuration_, paymentDuration) };


    // paymentDurationUnit Field Functions 
    bool hasPaymentDurationUnit() const { return this->paymentDurationUnit_ != nullptr;};
    void deletePaymentDurationUnit() { this->paymentDurationUnit_ = nullptr;};
    inline string paymentDurationUnit() const { DARABONBA_PTR_GET_DEFAULT(paymentDurationUnit_, "") };
    inline GetResourceGroupMachineGroupResponseBody& setPaymentDurationUnit(string paymentDurationUnit) { DARABONBA_PTR_SET_VALUE(paymentDurationUnit_, paymentDurationUnit) };


    // paymentType Field Functions 
    bool hasPaymentType() const { return this->paymentType_ != nullptr;};
    void deletePaymentType() { this->paymentType_ = nullptr;};
    inline string paymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, "") };
    inline GetResourceGroupMachineGroupResponseBody& setPaymentType(string paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetResourceGroupMachineGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupID Field Functions 
    bool hasResourceGroupID() const { return this->resourceGroupID_ != nullptr;};
    void deleteResourceGroupID() { this->resourceGroupID_ = nullptr;};
    inline string resourceGroupID() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupID_, "") };
    inline GetResourceGroupMachineGroupResponseBody& setResourceGroupID(string resourceGroupID) { DARABONBA_PTR_SET_VALUE(resourceGroupID_, resourceGroupID) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetResourceGroupMachineGroupResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // supportedDrivers Field Functions 
    bool hasSupportedDrivers() const { return this->supportedDrivers_ != nullptr;};
    void deleteSupportedDrivers() { this->supportedDrivers_ = nullptr;};
    inline const vector<string> & supportedDrivers() const { DARABONBA_PTR_GET_CONST(supportedDrivers_, vector<string>) };
    inline vector<string> supportedDrivers() { DARABONBA_PTR_GET(supportedDrivers_, vector<string>) };
    inline GetResourceGroupMachineGroupResponseBody& setSupportedDrivers(const vector<string> & supportedDrivers) { DARABONBA_PTR_SET_VALUE(supportedDrivers_, supportedDrivers) };
    inline GetResourceGroupMachineGroupResponseBody& setSupportedDrivers(vector<string> && supportedDrivers) { DARABONBA_PTR_SET_RVALUE(supportedDrivers_, supportedDrivers) };


    // systemReservedCpu Field Functions 
    bool hasSystemReservedCpu() const { return this->systemReservedCpu_ != nullptr;};
    void deleteSystemReservedCpu() { this->systemReservedCpu_ = nullptr;};
    inline string systemReservedCpu() const { DARABONBA_PTR_GET_DEFAULT(systemReservedCpu_, "") };
    inline GetResourceGroupMachineGroupResponseBody& setSystemReservedCpu(string systemReservedCpu) { DARABONBA_PTR_SET_VALUE(systemReservedCpu_, systemReservedCpu) };


    // systemReservedMemory Field Functions 
    bool hasSystemReservedMemory() const { return this->systemReservedMemory_ != nullptr;};
    void deleteSystemReservedMemory() { this->systemReservedMemory_ = nullptr;};
    inline string systemReservedMemory() const { DARABONBA_PTR_GET_DEFAULT(systemReservedMemory_, "") };
    inline GetResourceGroupMachineGroupResponseBody& setSystemReservedMemory(string systemReservedMemory) { DARABONBA_PTR_SET_VALUE(systemReservedMemory_, systemReservedMemory) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<GetResourceGroupMachineGroupResponseBodyTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<GetResourceGroupMachineGroupResponseBodyTags>) };
    inline vector<GetResourceGroupMachineGroupResponseBodyTags> tags() { DARABONBA_PTR_GET(tags_, vector<GetResourceGroupMachineGroupResponseBodyTags>) };
    inline GetResourceGroupMachineGroupResponseBody& setTags(const vector<GetResourceGroupMachineGroupResponseBodyTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline GetResourceGroupMachineGroupResponseBody& setTags(vector<GetResourceGroupMachineGroupResponseBodyTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    std::shared_ptr<string> allocatableCpu_ = nullptr;
    std::shared_ptr<string> allocatableMemory_ = nullptr;
    std::shared_ptr<string> cpu_ = nullptr;
    std::shared_ptr<string> defaultDriver_ = nullptr;
    std::shared_ptr<int64_t> ecsCount_ = nullptr;
    std::shared_ptr<string> ecsSpec_ = nullptr;
    std::shared_ptr<string> gmtCreatedTime_ = nullptr;
    std::shared_ptr<string> gmtExpiredTime_ = nullptr;
    std::shared_ptr<string> gmtModifiedTime_ = nullptr;
    std::shared_ptr<string> gmtStartedTime_ = nullptr;
    std::shared_ptr<string> gpu_ = nullptr;
    std::shared_ptr<string> gpuType_ = nullptr;
    std::shared_ptr<string> machineGroupID_ = nullptr;
    std::shared_ptr<string> memory_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> paymentDuration_ = nullptr;
    std::shared_ptr<string> paymentDurationUnit_ = nullptr;
    std::shared_ptr<string> paymentType_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> resourceGroupID_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<vector<string>> supportedDrivers_ = nullptr;
    std::shared_ptr<string> systemReservedCpu_ = nullptr;
    std::shared_ptr<string> systemReservedMemory_ = nullptr;
    std::shared_ptr<vector<GetResourceGroupMachineGroupResponseBodyTags>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
