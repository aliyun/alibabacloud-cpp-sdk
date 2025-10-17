// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEDICATEDHOSTTYPESRESPONSEBODYDEDICATEDHOSTTYPESDEDICATEDHOSTTYPE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEDICATEDHOSTTYPESRESPONSEBODYDEDICATEDHOSTTYPESDEDICATEDHOSTTYPE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDedicatedHostTypesResponseBodyDedicatedHostTypesDedicatedHostTypeSupportedInstanceTypeFamilies.hpp>
#include <alibabacloud/models/DescribeDedicatedHostTypesResponseBodyDedicatedHostTypesDedicatedHostTypeSupportedInstanceTypesList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeDedicatedHostTypesResponseBodyDedicatedHostTypesDedicatedHostType : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDedicatedHostTypesResponseBodyDedicatedHostTypesDedicatedHostType& obj) { 
      DARABONBA_PTR_TO_JSON(Cores, cores_);
      DARABONBA_PTR_TO_JSON(CpuOverCommitRatioRange, cpuOverCommitRatioRange_);
      DARABONBA_PTR_TO_JSON(DedicatedHostType, dedicatedHostType_);
      DARABONBA_PTR_TO_JSON(GPUSpec, GPUSpec_);
      DARABONBA_PTR_TO_JSON(LocalStorageAmount, localStorageAmount_);
      DARABONBA_PTR_TO_JSON(LocalStorageCapacity, localStorageCapacity_);
      DARABONBA_PTR_TO_JSON(LocalStorageCategory, localStorageCategory_);
      DARABONBA_PTR_TO_JSON(MemorySize, memorySize_);
      DARABONBA_PTR_TO_JSON(PhysicalGpus, physicalGpus_);
      DARABONBA_PTR_TO_JSON(Sockets, sockets_);
      DARABONBA_PTR_TO_JSON(SupportCpuOverCommitRatio, supportCpuOverCommitRatio_);
      DARABONBA_PTR_TO_JSON(SupportedInstanceTypeFamilies, supportedInstanceTypeFamilies_);
      DARABONBA_PTR_TO_JSON(SupportedInstanceTypesList, supportedInstanceTypesList_);
      DARABONBA_PTR_TO_JSON(TotalVcpus, totalVcpus_);
      DARABONBA_PTR_TO_JSON(TotalVgpus, totalVgpus_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDedicatedHostTypesResponseBodyDedicatedHostTypesDedicatedHostType& obj) { 
      DARABONBA_PTR_FROM_JSON(Cores, cores_);
      DARABONBA_PTR_FROM_JSON(CpuOverCommitRatioRange, cpuOverCommitRatioRange_);
      DARABONBA_PTR_FROM_JSON(DedicatedHostType, dedicatedHostType_);
      DARABONBA_PTR_FROM_JSON(GPUSpec, GPUSpec_);
      DARABONBA_PTR_FROM_JSON(LocalStorageAmount, localStorageAmount_);
      DARABONBA_PTR_FROM_JSON(LocalStorageCapacity, localStorageCapacity_);
      DARABONBA_PTR_FROM_JSON(LocalStorageCategory, localStorageCategory_);
      DARABONBA_PTR_FROM_JSON(MemorySize, memorySize_);
      DARABONBA_PTR_FROM_JSON(PhysicalGpus, physicalGpus_);
      DARABONBA_PTR_FROM_JSON(Sockets, sockets_);
      DARABONBA_PTR_FROM_JSON(SupportCpuOverCommitRatio, supportCpuOverCommitRatio_);
      DARABONBA_PTR_FROM_JSON(SupportedInstanceTypeFamilies, supportedInstanceTypeFamilies_);
      DARABONBA_PTR_FROM_JSON(SupportedInstanceTypesList, supportedInstanceTypesList_);
      DARABONBA_PTR_FROM_JSON(TotalVcpus, totalVcpus_);
      DARABONBA_PTR_FROM_JSON(TotalVgpus, totalVgpus_);
    };
    DescribeDedicatedHostTypesResponseBodyDedicatedHostTypesDedicatedHostType() = default ;
    DescribeDedicatedHostTypesResponseBodyDedicatedHostTypesDedicatedHostType(const DescribeDedicatedHostTypesResponseBodyDedicatedHostTypesDedicatedHostType &) = default ;
    DescribeDedicatedHostTypesResponseBodyDedicatedHostTypesDedicatedHostType(DescribeDedicatedHostTypesResponseBodyDedicatedHostTypesDedicatedHostType &&) = default ;
    DescribeDedicatedHostTypesResponseBodyDedicatedHostTypesDedicatedHostType(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDedicatedHostTypesResponseBodyDedicatedHostTypesDedicatedHostType() = default ;
    DescribeDedicatedHostTypesResponseBodyDedicatedHostTypesDedicatedHostType& operator=(const DescribeDedicatedHostTypesResponseBodyDedicatedHostTypesDedicatedHostType &) = default ;
    DescribeDedicatedHostTypesResponseBodyDedicatedHostTypesDedicatedHostType& operator=(DescribeDedicatedHostTypesResponseBodyDedicatedHostTypesDedicatedHostType &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cores_ == nullptr
        && return this->cpuOverCommitRatioRange_ == nullptr && return this->dedicatedHostType_ == nullptr && return this->GPUSpec_ == nullptr && return this->localStorageAmount_ == nullptr && return this->localStorageCapacity_ == nullptr
        && return this->localStorageCategory_ == nullptr && return this->memorySize_ == nullptr && return this->physicalGpus_ == nullptr && return this->sockets_ == nullptr && return this->supportCpuOverCommitRatio_ == nullptr
        && return this->supportedInstanceTypeFamilies_ == nullptr && return this->supportedInstanceTypesList_ == nullptr && return this->totalVcpus_ == nullptr && return this->totalVgpus_ == nullptr; };
    // cores Field Functions 
    bool hasCores() const { return this->cores_ != nullptr;};
    void deleteCores() { this->cores_ = nullptr;};
    inline int32_t cores() const { DARABONBA_PTR_GET_DEFAULT(cores_, 0) };
    inline DescribeDedicatedHostTypesResponseBodyDedicatedHostTypesDedicatedHostType& setCores(int32_t cores) { DARABONBA_PTR_SET_VALUE(cores_, cores) };


    // cpuOverCommitRatioRange Field Functions 
    bool hasCpuOverCommitRatioRange() const { return this->cpuOverCommitRatioRange_ != nullptr;};
    void deleteCpuOverCommitRatioRange() { this->cpuOverCommitRatioRange_ = nullptr;};
    inline string cpuOverCommitRatioRange() const { DARABONBA_PTR_GET_DEFAULT(cpuOverCommitRatioRange_, "") };
    inline DescribeDedicatedHostTypesResponseBodyDedicatedHostTypesDedicatedHostType& setCpuOverCommitRatioRange(string cpuOverCommitRatioRange) { DARABONBA_PTR_SET_VALUE(cpuOverCommitRatioRange_, cpuOverCommitRatioRange) };


    // dedicatedHostType Field Functions 
    bool hasDedicatedHostType() const { return this->dedicatedHostType_ != nullptr;};
    void deleteDedicatedHostType() { this->dedicatedHostType_ = nullptr;};
    inline string dedicatedHostType() const { DARABONBA_PTR_GET_DEFAULT(dedicatedHostType_, "") };
    inline DescribeDedicatedHostTypesResponseBodyDedicatedHostTypesDedicatedHostType& setDedicatedHostType(string dedicatedHostType) { DARABONBA_PTR_SET_VALUE(dedicatedHostType_, dedicatedHostType) };


    // GPUSpec Field Functions 
    bool hasGPUSpec() const { return this->GPUSpec_ != nullptr;};
    void deleteGPUSpec() { this->GPUSpec_ = nullptr;};
    inline string GPUSpec() const { DARABONBA_PTR_GET_DEFAULT(GPUSpec_, "") };
    inline DescribeDedicatedHostTypesResponseBodyDedicatedHostTypesDedicatedHostType& setGPUSpec(string GPUSpec) { DARABONBA_PTR_SET_VALUE(GPUSpec_, GPUSpec) };


    // localStorageAmount Field Functions 
    bool hasLocalStorageAmount() const { return this->localStorageAmount_ != nullptr;};
    void deleteLocalStorageAmount() { this->localStorageAmount_ = nullptr;};
    inline int32_t localStorageAmount() const { DARABONBA_PTR_GET_DEFAULT(localStorageAmount_, 0) };
    inline DescribeDedicatedHostTypesResponseBodyDedicatedHostTypesDedicatedHostType& setLocalStorageAmount(int32_t localStorageAmount) { DARABONBA_PTR_SET_VALUE(localStorageAmount_, localStorageAmount) };


    // localStorageCapacity Field Functions 
    bool hasLocalStorageCapacity() const { return this->localStorageCapacity_ != nullptr;};
    void deleteLocalStorageCapacity() { this->localStorageCapacity_ = nullptr;};
    inline int64_t localStorageCapacity() const { DARABONBA_PTR_GET_DEFAULT(localStorageCapacity_, 0L) };
    inline DescribeDedicatedHostTypesResponseBodyDedicatedHostTypesDedicatedHostType& setLocalStorageCapacity(int64_t localStorageCapacity) { DARABONBA_PTR_SET_VALUE(localStorageCapacity_, localStorageCapacity) };


    // localStorageCategory Field Functions 
    bool hasLocalStorageCategory() const { return this->localStorageCategory_ != nullptr;};
    void deleteLocalStorageCategory() { this->localStorageCategory_ = nullptr;};
    inline string localStorageCategory() const { DARABONBA_PTR_GET_DEFAULT(localStorageCategory_, "") };
    inline DescribeDedicatedHostTypesResponseBodyDedicatedHostTypesDedicatedHostType& setLocalStorageCategory(string localStorageCategory) { DARABONBA_PTR_SET_VALUE(localStorageCategory_, localStorageCategory) };


    // memorySize Field Functions 
    bool hasMemorySize() const { return this->memorySize_ != nullptr;};
    void deleteMemorySize() { this->memorySize_ = nullptr;};
    inline float memorySize() const { DARABONBA_PTR_GET_DEFAULT(memorySize_, 0.0) };
    inline DescribeDedicatedHostTypesResponseBodyDedicatedHostTypesDedicatedHostType& setMemorySize(float memorySize) { DARABONBA_PTR_SET_VALUE(memorySize_, memorySize) };


    // physicalGpus Field Functions 
    bool hasPhysicalGpus() const { return this->physicalGpus_ != nullptr;};
    void deletePhysicalGpus() { this->physicalGpus_ = nullptr;};
    inline int32_t physicalGpus() const { DARABONBA_PTR_GET_DEFAULT(physicalGpus_, 0) };
    inline DescribeDedicatedHostTypesResponseBodyDedicatedHostTypesDedicatedHostType& setPhysicalGpus(int32_t physicalGpus) { DARABONBA_PTR_SET_VALUE(physicalGpus_, physicalGpus) };


    // sockets Field Functions 
    bool hasSockets() const { return this->sockets_ != nullptr;};
    void deleteSockets() { this->sockets_ = nullptr;};
    inline int32_t sockets() const { DARABONBA_PTR_GET_DEFAULT(sockets_, 0) };
    inline DescribeDedicatedHostTypesResponseBodyDedicatedHostTypesDedicatedHostType& setSockets(int32_t sockets) { DARABONBA_PTR_SET_VALUE(sockets_, sockets) };


    // supportCpuOverCommitRatio Field Functions 
    bool hasSupportCpuOverCommitRatio() const { return this->supportCpuOverCommitRatio_ != nullptr;};
    void deleteSupportCpuOverCommitRatio() { this->supportCpuOverCommitRatio_ = nullptr;};
    inline bool supportCpuOverCommitRatio() const { DARABONBA_PTR_GET_DEFAULT(supportCpuOverCommitRatio_, false) };
    inline DescribeDedicatedHostTypesResponseBodyDedicatedHostTypesDedicatedHostType& setSupportCpuOverCommitRatio(bool supportCpuOverCommitRatio) { DARABONBA_PTR_SET_VALUE(supportCpuOverCommitRatio_, supportCpuOverCommitRatio) };


    // supportedInstanceTypeFamilies Field Functions 
    bool hasSupportedInstanceTypeFamilies() const { return this->supportedInstanceTypeFamilies_ != nullptr;};
    void deleteSupportedInstanceTypeFamilies() { this->supportedInstanceTypeFamilies_ = nullptr;};
    inline const Models::DescribeDedicatedHostTypesResponseBodyDedicatedHostTypesDedicatedHostTypeSupportedInstanceTypeFamilies & supportedInstanceTypeFamilies() const { DARABONBA_PTR_GET_CONST(supportedInstanceTypeFamilies_, Models::DescribeDedicatedHostTypesResponseBodyDedicatedHostTypesDedicatedHostTypeSupportedInstanceTypeFamilies) };
    inline Models::DescribeDedicatedHostTypesResponseBodyDedicatedHostTypesDedicatedHostTypeSupportedInstanceTypeFamilies supportedInstanceTypeFamilies() { DARABONBA_PTR_GET(supportedInstanceTypeFamilies_, Models::DescribeDedicatedHostTypesResponseBodyDedicatedHostTypesDedicatedHostTypeSupportedInstanceTypeFamilies) };
    inline DescribeDedicatedHostTypesResponseBodyDedicatedHostTypesDedicatedHostType& setSupportedInstanceTypeFamilies(const Models::DescribeDedicatedHostTypesResponseBodyDedicatedHostTypesDedicatedHostTypeSupportedInstanceTypeFamilies & supportedInstanceTypeFamilies) { DARABONBA_PTR_SET_VALUE(supportedInstanceTypeFamilies_, supportedInstanceTypeFamilies) };
    inline DescribeDedicatedHostTypesResponseBodyDedicatedHostTypesDedicatedHostType& setSupportedInstanceTypeFamilies(Models::DescribeDedicatedHostTypesResponseBodyDedicatedHostTypesDedicatedHostTypeSupportedInstanceTypeFamilies && supportedInstanceTypeFamilies) { DARABONBA_PTR_SET_RVALUE(supportedInstanceTypeFamilies_, supportedInstanceTypeFamilies) };


    // supportedInstanceTypesList Field Functions 
    bool hasSupportedInstanceTypesList() const { return this->supportedInstanceTypesList_ != nullptr;};
    void deleteSupportedInstanceTypesList() { this->supportedInstanceTypesList_ = nullptr;};
    inline const Models::DescribeDedicatedHostTypesResponseBodyDedicatedHostTypesDedicatedHostTypeSupportedInstanceTypesList & supportedInstanceTypesList() const { DARABONBA_PTR_GET_CONST(supportedInstanceTypesList_, Models::DescribeDedicatedHostTypesResponseBodyDedicatedHostTypesDedicatedHostTypeSupportedInstanceTypesList) };
    inline Models::DescribeDedicatedHostTypesResponseBodyDedicatedHostTypesDedicatedHostTypeSupportedInstanceTypesList supportedInstanceTypesList() { DARABONBA_PTR_GET(supportedInstanceTypesList_, Models::DescribeDedicatedHostTypesResponseBodyDedicatedHostTypesDedicatedHostTypeSupportedInstanceTypesList) };
    inline DescribeDedicatedHostTypesResponseBodyDedicatedHostTypesDedicatedHostType& setSupportedInstanceTypesList(const Models::DescribeDedicatedHostTypesResponseBodyDedicatedHostTypesDedicatedHostTypeSupportedInstanceTypesList & supportedInstanceTypesList) { DARABONBA_PTR_SET_VALUE(supportedInstanceTypesList_, supportedInstanceTypesList) };
    inline DescribeDedicatedHostTypesResponseBodyDedicatedHostTypesDedicatedHostType& setSupportedInstanceTypesList(Models::DescribeDedicatedHostTypesResponseBodyDedicatedHostTypesDedicatedHostTypeSupportedInstanceTypesList && supportedInstanceTypesList) { DARABONBA_PTR_SET_RVALUE(supportedInstanceTypesList_, supportedInstanceTypesList) };


    // totalVcpus Field Functions 
    bool hasTotalVcpus() const { return this->totalVcpus_ != nullptr;};
    void deleteTotalVcpus() { this->totalVcpus_ = nullptr;};
    inline int32_t totalVcpus() const { DARABONBA_PTR_GET_DEFAULT(totalVcpus_, 0) };
    inline DescribeDedicatedHostTypesResponseBodyDedicatedHostTypesDedicatedHostType& setTotalVcpus(int32_t totalVcpus) { DARABONBA_PTR_SET_VALUE(totalVcpus_, totalVcpus) };


    // totalVgpus Field Functions 
    bool hasTotalVgpus() const { return this->totalVgpus_ != nullptr;};
    void deleteTotalVgpus() { this->totalVgpus_ = nullptr;};
    inline int32_t totalVgpus() const { DARABONBA_PTR_GET_DEFAULT(totalVgpus_, 0) };
    inline DescribeDedicatedHostTypesResponseBodyDedicatedHostTypesDedicatedHostType& setTotalVgpus(int32_t totalVgpus) { DARABONBA_PTR_SET_VALUE(totalVgpus_, totalVgpus) };


  protected:
    // The number of cores per physical CPU.
    std::shared_ptr<int32_t> cores_ = nullptr;
    // The supported CPU overcommit ratio range.
    std::shared_ptr<string> cpuOverCommitRatioRange_ = nullptr;
    // The dedicated host type.
    std::shared_ptr<string> dedicatedHostType_ = nullptr;
    // The GPU model.
    std::shared_ptr<string> GPUSpec_ = nullptr;
    // The number of local disks on a dedicated host.
    std::shared_ptr<int32_t> localStorageAmount_ = nullptr;
    // The capacity of a local disk. Unit: GiB.
    std::shared_ptr<int64_t> localStorageCapacity_ = nullptr;
    // The category of local disks.
    std::shared_ptr<string> localStorageCategory_ = nullptr;
    // The memory size. Unit: GiB.
    std::shared_ptr<float> memorySize_ = nullptr;
    // The number of physical GPUs.
    std::shared_ptr<int32_t> physicalGpus_ = nullptr;
    // The number of physical CPUs.
    std::shared_ptr<int32_t> sockets_ = nullptr;
    // Indicates whether the CPU overcommit ratio settings are supported.
    std::shared_ptr<bool> supportCpuOverCommitRatio_ = nullptr;
    // The ECS instance families supported by the dedicated host type.
    std::shared_ptr<Models::DescribeDedicatedHostTypesResponseBodyDedicatedHostTypesDedicatedHostTypeSupportedInstanceTypeFamilies> supportedInstanceTypeFamilies_ = nullptr;
    // The ECS instance types supported by the dedicated host type.
    std::shared_ptr<Models::DescribeDedicatedHostTypesResponseBodyDedicatedHostTypesDedicatedHostTypeSupportedInstanceTypesList> supportedInstanceTypesList_ = nullptr;
    // The total number of vCPUs.
    std::shared_ptr<int32_t> totalVcpus_ = nullptr;
    // The total number of vGPUs.
    std::shared_ptr<int32_t> totalVgpus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
