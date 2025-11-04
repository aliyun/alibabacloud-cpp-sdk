// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCALINGCONFIGURATIONSRESPONSEBODYSCALINGCONFIGURATIONSINSTANCEPATTERNINFOS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCALINGCONFIGURATIONSRESPONSEBODYSCALINGCONFIGURATIONSINSTANCEPATTERNINFOS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class DescribeScalingConfigurationsResponseBodyScalingConfigurationsInstancePatternInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeScalingConfigurationsResponseBodyScalingConfigurationsInstancePatternInfos& obj) { 
      DARABONBA_PTR_TO_JSON(Architectures, architectures_);
      DARABONBA_PTR_TO_JSON(BurstablePerformance, burstablePerformance_);
      DARABONBA_PTR_TO_JSON(Cores, cores_);
      DARABONBA_PTR_TO_JSON(CpuArchitectures, cpuArchitectures_);
      DARABONBA_PTR_TO_JSON(ExcludedInstanceTypes, excludedInstanceTypes_);
      DARABONBA_PTR_TO_JSON(GpuSpecs, gpuSpecs_);
      DARABONBA_PTR_TO_JSON(InstanceCategories, instanceCategories_);
      DARABONBA_PTR_TO_JSON(InstanceFamilyLevel, instanceFamilyLevel_);
      DARABONBA_PTR_TO_JSON(InstanceTypeFamilies, instanceTypeFamilies_);
      DARABONBA_PTR_TO_JSON(MaxPrice, maxPrice_);
      DARABONBA_PTR_TO_JSON(MaximumCpuCoreCount, maximumCpuCoreCount_);
      DARABONBA_PTR_TO_JSON(MaximumGpuAmount, maximumGpuAmount_);
      DARABONBA_PTR_TO_JSON(MaximumMemorySize, maximumMemorySize_);
      DARABONBA_PTR_TO_JSON(Memory, memory_);
      DARABONBA_PTR_TO_JSON(MinimumBaselineCredit, minimumBaselineCredit_);
      DARABONBA_PTR_TO_JSON(MinimumCpuCoreCount, minimumCpuCoreCount_);
      DARABONBA_PTR_TO_JSON(MinimumEniIpv6AddressQuantity, minimumEniIpv6AddressQuantity_);
      DARABONBA_PTR_TO_JSON(MinimumEniPrivateIpAddressQuantity, minimumEniPrivateIpAddressQuantity_);
      DARABONBA_PTR_TO_JSON(MinimumEniQuantity, minimumEniQuantity_);
      DARABONBA_PTR_TO_JSON(MinimumGpuAmount, minimumGpuAmount_);
      DARABONBA_PTR_TO_JSON(MinimumInitialCredit, minimumInitialCredit_);
      DARABONBA_PTR_TO_JSON(MinimumMemorySize, minimumMemorySize_);
      DARABONBA_PTR_TO_JSON(PhysicalProcessorModels, physicalProcessorModels_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeScalingConfigurationsResponseBodyScalingConfigurationsInstancePatternInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(Architectures, architectures_);
      DARABONBA_PTR_FROM_JSON(BurstablePerformance, burstablePerformance_);
      DARABONBA_PTR_FROM_JSON(Cores, cores_);
      DARABONBA_PTR_FROM_JSON(CpuArchitectures, cpuArchitectures_);
      DARABONBA_PTR_FROM_JSON(ExcludedInstanceTypes, excludedInstanceTypes_);
      DARABONBA_PTR_FROM_JSON(GpuSpecs, gpuSpecs_);
      DARABONBA_PTR_FROM_JSON(InstanceCategories, instanceCategories_);
      DARABONBA_PTR_FROM_JSON(InstanceFamilyLevel, instanceFamilyLevel_);
      DARABONBA_PTR_FROM_JSON(InstanceTypeFamilies, instanceTypeFamilies_);
      DARABONBA_PTR_FROM_JSON(MaxPrice, maxPrice_);
      DARABONBA_PTR_FROM_JSON(MaximumCpuCoreCount, maximumCpuCoreCount_);
      DARABONBA_PTR_FROM_JSON(MaximumGpuAmount, maximumGpuAmount_);
      DARABONBA_PTR_FROM_JSON(MaximumMemorySize, maximumMemorySize_);
      DARABONBA_PTR_FROM_JSON(Memory, memory_);
      DARABONBA_PTR_FROM_JSON(MinimumBaselineCredit, minimumBaselineCredit_);
      DARABONBA_PTR_FROM_JSON(MinimumCpuCoreCount, minimumCpuCoreCount_);
      DARABONBA_PTR_FROM_JSON(MinimumEniIpv6AddressQuantity, minimumEniIpv6AddressQuantity_);
      DARABONBA_PTR_FROM_JSON(MinimumEniPrivateIpAddressQuantity, minimumEniPrivateIpAddressQuantity_);
      DARABONBA_PTR_FROM_JSON(MinimumEniQuantity, minimumEniQuantity_);
      DARABONBA_PTR_FROM_JSON(MinimumGpuAmount, minimumGpuAmount_);
      DARABONBA_PTR_FROM_JSON(MinimumInitialCredit, minimumInitialCredit_);
      DARABONBA_PTR_FROM_JSON(MinimumMemorySize, minimumMemorySize_);
      DARABONBA_PTR_FROM_JSON(PhysicalProcessorModels, physicalProcessorModels_);
    };
    DescribeScalingConfigurationsResponseBodyScalingConfigurationsInstancePatternInfos() = default ;
    DescribeScalingConfigurationsResponseBodyScalingConfigurationsInstancePatternInfos(const DescribeScalingConfigurationsResponseBodyScalingConfigurationsInstancePatternInfos &) = default ;
    DescribeScalingConfigurationsResponseBodyScalingConfigurationsInstancePatternInfos(DescribeScalingConfigurationsResponseBodyScalingConfigurationsInstancePatternInfos &&) = default ;
    DescribeScalingConfigurationsResponseBodyScalingConfigurationsInstancePatternInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeScalingConfigurationsResponseBodyScalingConfigurationsInstancePatternInfos() = default ;
    DescribeScalingConfigurationsResponseBodyScalingConfigurationsInstancePatternInfos& operator=(const DescribeScalingConfigurationsResponseBodyScalingConfigurationsInstancePatternInfos &) = default ;
    DescribeScalingConfigurationsResponseBodyScalingConfigurationsInstancePatternInfos& operator=(DescribeScalingConfigurationsResponseBodyScalingConfigurationsInstancePatternInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->architectures_ == nullptr
        && return this->burstablePerformance_ == nullptr && return this->cores_ == nullptr && return this->cpuArchitectures_ == nullptr && return this->excludedInstanceTypes_ == nullptr && return this->gpuSpecs_ == nullptr
        && return this->instanceCategories_ == nullptr && return this->instanceFamilyLevel_ == nullptr && return this->instanceTypeFamilies_ == nullptr && return this->maxPrice_ == nullptr && return this->maximumCpuCoreCount_ == nullptr
        && return this->maximumGpuAmount_ == nullptr && return this->maximumMemorySize_ == nullptr && return this->memory_ == nullptr && return this->minimumBaselineCredit_ == nullptr && return this->minimumCpuCoreCount_ == nullptr
        && return this->minimumEniIpv6AddressQuantity_ == nullptr && return this->minimumEniPrivateIpAddressQuantity_ == nullptr && return this->minimumEniQuantity_ == nullptr && return this->minimumGpuAmount_ == nullptr && return this->minimumInitialCredit_ == nullptr
        && return this->minimumMemorySize_ == nullptr && return this->physicalProcessorModels_ == nullptr; };
    // architectures Field Functions 
    bool hasArchitectures() const { return this->architectures_ != nullptr;};
    void deleteArchitectures() { this->architectures_ = nullptr;};
    inline const vector<string> & architectures() const { DARABONBA_PTR_GET_CONST(architectures_, vector<string>) };
    inline vector<string> architectures() { DARABONBA_PTR_GET(architectures_, vector<string>) };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurationsInstancePatternInfos& setArchitectures(const vector<string> & architectures) { DARABONBA_PTR_SET_VALUE(architectures_, architectures) };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurationsInstancePatternInfos& setArchitectures(vector<string> && architectures) { DARABONBA_PTR_SET_RVALUE(architectures_, architectures) };


    // burstablePerformance Field Functions 
    bool hasBurstablePerformance() const { return this->burstablePerformance_ != nullptr;};
    void deleteBurstablePerformance() { this->burstablePerformance_ = nullptr;};
    inline string burstablePerformance() const { DARABONBA_PTR_GET_DEFAULT(burstablePerformance_, "") };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurationsInstancePatternInfos& setBurstablePerformance(string burstablePerformance) { DARABONBA_PTR_SET_VALUE(burstablePerformance_, burstablePerformance) };


    // cores Field Functions 
    bool hasCores() const { return this->cores_ != nullptr;};
    void deleteCores() { this->cores_ = nullptr;};
    inline int32_t cores() const { DARABONBA_PTR_GET_DEFAULT(cores_, 0) };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurationsInstancePatternInfos& setCores(int32_t cores) { DARABONBA_PTR_SET_VALUE(cores_, cores) };


    // cpuArchitectures Field Functions 
    bool hasCpuArchitectures() const { return this->cpuArchitectures_ != nullptr;};
    void deleteCpuArchitectures() { this->cpuArchitectures_ = nullptr;};
    inline const vector<string> & cpuArchitectures() const { DARABONBA_PTR_GET_CONST(cpuArchitectures_, vector<string>) };
    inline vector<string> cpuArchitectures() { DARABONBA_PTR_GET(cpuArchitectures_, vector<string>) };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurationsInstancePatternInfos& setCpuArchitectures(const vector<string> & cpuArchitectures) { DARABONBA_PTR_SET_VALUE(cpuArchitectures_, cpuArchitectures) };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurationsInstancePatternInfos& setCpuArchitectures(vector<string> && cpuArchitectures) { DARABONBA_PTR_SET_RVALUE(cpuArchitectures_, cpuArchitectures) };


    // excludedInstanceTypes Field Functions 
    bool hasExcludedInstanceTypes() const { return this->excludedInstanceTypes_ != nullptr;};
    void deleteExcludedInstanceTypes() { this->excludedInstanceTypes_ = nullptr;};
    inline const vector<string> & excludedInstanceTypes() const { DARABONBA_PTR_GET_CONST(excludedInstanceTypes_, vector<string>) };
    inline vector<string> excludedInstanceTypes() { DARABONBA_PTR_GET(excludedInstanceTypes_, vector<string>) };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurationsInstancePatternInfos& setExcludedInstanceTypes(const vector<string> & excludedInstanceTypes) { DARABONBA_PTR_SET_VALUE(excludedInstanceTypes_, excludedInstanceTypes) };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurationsInstancePatternInfos& setExcludedInstanceTypes(vector<string> && excludedInstanceTypes) { DARABONBA_PTR_SET_RVALUE(excludedInstanceTypes_, excludedInstanceTypes) };


    // gpuSpecs Field Functions 
    bool hasGpuSpecs() const { return this->gpuSpecs_ != nullptr;};
    void deleteGpuSpecs() { this->gpuSpecs_ = nullptr;};
    inline const vector<string> & gpuSpecs() const { DARABONBA_PTR_GET_CONST(gpuSpecs_, vector<string>) };
    inline vector<string> gpuSpecs() { DARABONBA_PTR_GET(gpuSpecs_, vector<string>) };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurationsInstancePatternInfos& setGpuSpecs(const vector<string> & gpuSpecs) { DARABONBA_PTR_SET_VALUE(gpuSpecs_, gpuSpecs) };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurationsInstancePatternInfos& setGpuSpecs(vector<string> && gpuSpecs) { DARABONBA_PTR_SET_RVALUE(gpuSpecs_, gpuSpecs) };


    // instanceCategories Field Functions 
    bool hasInstanceCategories() const { return this->instanceCategories_ != nullptr;};
    void deleteInstanceCategories() { this->instanceCategories_ = nullptr;};
    inline const vector<string> & instanceCategories() const { DARABONBA_PTR_GET_CONST(instanceCategories_, vector<string>) };
    inline vector<string> instanceCategories() { DARABONBA_PTR_GET(instanceCategories_, vector<string>) };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurationsInstancePatternInfos& setInstanceCategories(const vector<string> & instanceCategories) { DARABONBA_PTR_SET_VALUE(instanceCategories_, instanceCategories) };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurationsInstancePatternInfos& setInstanceCategories(vector<string> && instanceCategories) { DARABONBA_PTR_SET_RVALUE(instanceCategories_, instanceCategories) };


    // instanceFamilyLevel Field Functions 
    bool hasInstanceFamilyLevel() const { return this->instanceFamilyLevel_ != nullptr;};
    void deleteInstanceFamilyLevel() { this->instanceFamilyLevel_ = nullptr;};
    inline string instanceFamilyLevel() const { DARABONBA_PTR_GET_DEFAULT(instanceFamilyLevel_, "") };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurationsInstancePatternInfos& setInstanceFamilyLevel(string instanceFamilyLevel) { DARABONBA_PTR_SET_VALUE(instanceFamilyLevel_, instanceFamilyLevel) };


    // instanceTypeFamilies Field Functions 
    bool hasInstanceTypeFamilies() const { return this->instanceTypeFamilies_ != nullptr;};
    void deleteInstanceTypeFamilies() { this->instanceTypeFamilies_ = nullptr;};
    inline const vector<string> & instanceTypeFamilies() const { DARABONBA_PTR_GET_CONST(instanceTypeFamilies_, vector<string>) };
    inline vector<string> instanceTypeFamilies() { DARABONBA_PTR_GET(instanceTypeFamilies_, vector<string>) };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurationsInstancePatternInfos& setInstanceTypeFamilies(const vector<string> & instanceTypeFamilies) { DARABONBA_PTR_SET_VALUE(instanceTypeFamilies_, instanceTypeFamilies) };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurationsInstancePatternInfos& setInstanceTypeFamilies(vector<string> && instanceTypeFamilies) { DARABONBA_PTR_SET_RVALUE(instanceTypeFamilies_, instanceTypeFamilies) };


    // maxPrice Field Functions 
    bool hasMaxPrice() const { return this->maxPrice_ != nullptr;};
    void deleteMaxPrice() { this->maxPrice_ = nullptr;};
    inline float maxPrice() const { DARABONBA_PTR_GET_DEFAULT(maxPrice_, 0.0) };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurationsInstancePatternInfos& setMaxPrice(float maxPrice) { DARABONBA_PTR_SET_VALUE(maxPrice_, maxPrice) };


    // maximumCpuCoreCount Field Functions 
    bool hasMaximumCpuCoreCount() const { return this->maximumCpuCoreCount_ != nullptr;};
    void deleteMaximumCpuCoreCount() { this->maximumCpuCoreCount_ = nullptr;};
    inline int32_t maximumCpuCoreCount() const { DARABONBA_PTR_GET_DEFAULT(maximumCpuCoreCount_, 0) };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurationsInstancePatternInfos& setMaximumCpuCoreCount(int32_t maximumCpuCoreCount) { DARABONBA_PTR_SET_VALUE(maximumCpuCoreCount_, maximumCpuCoreCount) };


    // maximumGpuAmount Field Functions 
    bool hasMaximumGpuAmount() const { return this->maximumGpuAmount_ != nullptr;};
    void deleteMaximumGpuAmount() { this->maximumGpuAmount_ = nullptr;};
    inline int32_t maximumGpuAmount() const { DARABONBA_PTR_GET_DEFAULT(maximumGpuAmount_, 0) };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurationsInstancePatternInfos& setMaximumGpuAmount(int32_t maximumGpuAmount) { DARABONBA_PTR_SET_VALUE(maximumGpuAmount_, maximumGpuAmount) };


    // maximumMemorySize Field Functions 
    bool hasMaximumMemorySize() const { return this->maximumMemorySize_ != nullptr;};
    void deleteMaximumMemorySize() { this->maximumMemorySize_ = nullptr;};
    inline float maximumMemorySize() const { DARABONBA_PTR_GET_DEFAULT(maximumMemorySize_, 0.0) };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurationsInstancePatternInfos& setMaximumMemorySize(float maximumMemorySize) { DARABONBA_PTR_SET_VALUE(maximumMemorySize_, maximumMemorySize) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline float memory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0.0) };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurationsInstancePatternInfos& setMemory(float memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // minimumBaselineCredit Field Functions 
    bool hasMinimumBaselineCredit() const { return this->minimumBaselineCredit_ != nullptr;};
    void deleteMinimumBaselineCredit() { this->minimumBaselineCredit_ = nullptr;};
    inline int32_t minimumBaselineCredit() const { DARABONBA_PTR_GET_DEFAULT(minimumBaselineCredit_, 0) };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurationsInstancePatternInfos& setMinimumBaselineCredit(int32_t minimumBaselineCredit) { DARABONBA_PTR_SET_VALUE(minimumBaselineCredit_, minimumBaselineCredit) };


    // minimumCpuCoreCount Field Functions 
    bool hasMinimumCpuCoreCount() const { return this->minimumCpuCoreCount_ != nullptr;};
    void deleteMinimumCpuCoreCount() { this->minimumCpuCoreCount_ = nullptr;};
    inline int32_t minimumCpuCoreCount() const { DARABONBA_PTR_GET_DEFAULT(minimumCpuCoreCount_, 0) };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurationsInstancePatternInfos& setMinimumCpuCoreCount(int32_t minimumCpuCoreCount) { DARABONBA_PTR_SET_VALUE(minimumCpuCoreCount_, minimumCpuCoreCount) };


    // minimumEniIpv6AddressQuantity Field Functions 
    bool hasMinimumEniIpv6AddressQuantity() const { return this->minimumEniIpv6AddressQuantity_ != nullptr;};
    void deleteMinimumEniIpv6AddressQuantity() { this->minimumEniIpv6AddressQuantity_ = nullptr;};
    inline int32_t minimumEniIpv6AddressQuantity() const { DARABONBA_PTR_GET_DEFAULT(minimumEniIpv6AddressQuantity_, 0) };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurationsInstancePatternInfos& setMinimumEniIpv6AddressQuantity(int32_t minimumEniIpv6AddressQuantity) { DARABONBA_PTR_SET_VALUE(minimumEniIpv6AddressQuantity_, minimumEniIpv6AddressQuantity) };


    // minimumEniPrivateIpAddressQuantity Field Functions 
    bool hasMinimumEniPrivateIpAddressQuantity() const { return this->minimumEniPrivateIpAddressQuantity_ != nullptr;};
    void deleteMinimumEniPrivateIpAddressQuantity() { this->minimumEniPrivateIpAddressQuantity_ = nullptr;};
    inline int32_t minimumEniPrivateIpAddressQuantity() const { DARABONBA_PTR_GET_DEFAULT(minimumEniPrivateIpAddressQuantity_, 0) };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurationsInstancePatternInfos& setMinimumEniPrivateIpAddressQuantity(int32_t minimumEniPrivateIpAddressQuantity) { DARABONBA_PTR_SET_VALUE(minimumEniPrivateIpAddressQuantity_, minimumEniPrivateIpAddressQuantity) };


    // minimumEniQuantity Field Functions 
    bool hasMinimumEniQuantity() const { return this->minimumEniQuantity_ != nullptr;};
    void deleteMinimumEniQuantity() { this->minimumEniQuantity_ = nullptr;};
    inline int32_t minimumEniQuantity() const { DARABONBA_PTR_GET_DEFAULT(minimumEniQuantity_, 0) };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurationsInstancePatternInfos& setMinimumEniQuantity(int32_t minimumEniQuantity) { DARABONBA_PTR_SET_VALUE(minimumEniQuantity_, minimumEniQuantity) };


    // minimumGpuAmount Field Functions 
    bool hasMinimumGpuAmount() const { return this->minimumGpuAmount_ != nullptr;};
    void deleteMinimumGpuAmount() { this->minimumGpuAmount_ = nullptr;};
    inline int32_t minimumGpuAmount() const { DARABONBA_PTR_GET_DEFAULT(minimumGpuAmount_, 0) };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurationsInstancePatternInfos& setMinimumGpuAmount(int32_t minimumGpuAmount) { DARABONBA_PTR_SET_VALUE(minimumGpuAmount_, minimumGpuAmount) };


    // minimumInitialCredit Field Functions 
    bool hasMinimumInitialCredit() const { return this->minimumInitialCredit_ != nullptr;};
    void deleteMinimumInitialCredit() { this->minimumInitialCredit_ = nullptr;};
    inline int32_t minimumInitialCredit() const { DARABONBA_PTR_GET_DEFAULT(minimumInitialCredit_, 0) };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurationsInstancePatternInfos& setMinimumInitialCredit(int32_t minimumInitialCredit) { DARABONBA_PTR_SET_VALUE(minimumInitialCredit_, minimumInitialCredit) };


    // minimumMemorySize Field Functions 
    bool hasMinimumMemorySize() const { return this->minimumMemorySize_ != nullptr;};
    void deleteMinimumMemorySize() { this->minimumMemorySize_ = nullptr;};
    inline float minimumMemorySize() const { DARABONBA_PTR_GET_DEFAULT(minimumMemorySize_, 0.0) };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurationsInstancePatternInfos& setMinimumMemorySize(float minimumMemorySize) { DARABONBA_PTR_SET_VALUE(minimumMemorySize_, minimumMemorySize) };


    // physicalProcessorModels Field Functions 
    bool hasPhysicalProcessorModels() const { return this->physicalProcessorModels_ != nullptr;};
    void deletePhysicalProcessorModels() { this->physicalProcessorModels_ = nullptr;};
    inline const vector<string> & physicalProcessorModels() const { DARABONBA_PTR_GET_CONST(physicalProcessorModels_, vector<string>) };
    inline vector<string> physicalProcessorModels() { DARABONBA_PTR_GET(physicalProcessorModels_, vector<string>) };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurationsInstancePatternInfos& setPhysicalProcessorModels(const vector<string> & physicalProcessorModels) { DARABONBA_PTR_SET_VALUE(physicalProcessorModels_, physicalProcessorModels) };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurationsInstancePatternInfos& setPhysicalProcessorModels(vector<string> && physicalProcessorModels) { DARABONBA_PTR_SET_RVALUE(physicalProcessorModels_, physicalProcessorModels) };


  protected:
    // The architectures of instance types. Valid values:
    // 
    // *   X86: x86.
    // *   Heterogeneous: heterogeneous computing, such as GPU-accelerated or FPGA-accelerated.
    // *   BareMetal: ECS Bare Metal Instance.
    // *   Arm: Arm.
    std::shared_ptr<vector<string>> architectures_ = nullptr;
    // Indicates whether burstable instance types are included. Valid values:
    // 
    // *   Exclude: Burstable instance types are not included.
    // *   Include: Burstable instance types are included.
    // *   Required: Only burstable instance types are included.
    std::shared_ptr<string> burstablePerformance_ = nullptr;
    // The number of vCPUs of the instance type.
    std::shared_ptr<int32_t> cores_ = nullptr;
    // The CPU architectures of the instance types. Valid values:
    // 
    // >  You can specify 1 to 2 CPU architectures.
    // 
    // *   x86
    // *   Arm
    std::shared_ptr<vector<string>> cpuArchitectures_ = nullptr;
    // The instance types that are excluded. You can use wildcard characters, such as an asterisk (\\*), to exclude an instance type or an instance family. Examples:
    // 
    // *   ecs.c6.large: The ecs.c6.large instance type is excluded.
    // *   ecs.c6.\\*: The c6 instance family is excluded.
    std::shared_ptr<vector<string>> excludedInstanceTypes_ = nullptr;
    // The GPU models.
    std::shared_ptr<vector<string>> gpuSpecs_ = nullptr;
    // The categories of ECS instances. Valid values:
    // 
    // >  Up to 10 categories of ECS instances are supported.
    // 
    // *   General-purpose: general-purpose instance type.
    // *   Compute-optimized: compute-optimized instance type.
    // *   Memory-optimized: memory-optimized instance type.
    // *   Big data: big data instance type.
    // *   Local SSDs: instance type with local SSDs.
    // *   High Clock Speed: instance type with high clock speeds.
    // *   Enhanced: enhanced instance type.
    // *   Shared: shared instance type.
    // *   Compute-optimized with GPU: GPU-accelerated compute-optimized instance type.
    // *   Visual Compute-optimized: visual compute-optimized instance type.
    // *   Heterogeneous Service: heterogeneous service instance type.
    // *   Compute-optimized with FPGA: FPGA-accelerated compute-optimized instance type.
    // *   Compute-optimized with NPU: NPU-accelerated compute-optimized instance type.
    // *   ECS Bare Metal: ECS Bare Metal Instance type.
    // *   High Performance Compute: HPC-optimized instance type.
    std::shared_ptr<vector<string>> instanceCategories_ = nullptr;
    // The level of the instance family.
    // 
    // *   EntryLevel: entry level (shared instance types). Instance types of this level are the most cost-effective but may not provide stable computing performance. Instance types of this level are suitable for scenarios in which the CPU utilization is low. For more information, see [Shared instance families](https://help.aliyun.com/document_detail/108489.html).
    // *   EnterpriseLevel: enterprise level. Instance types of this level provide stable performance and dedicated resources, and are suitable for scenarios that require high stability. For more information, see [Overview of instance families](https://help.aliyun.com/document_detail/25378.html).
    // *   CreditEntryLevel: credit entry level (burstable instance types). CPU credits are used to ensure computing performance. Instance types of this level are suitable for scenarios in which the CPU utilization is low but may fluctuate in specific cases. For more information, see [Overview of burstable instances](https://help.aliyun.com/document_detail/59977.html).
    std::shared_ptr<string> instanceFamilyLevel_ = nullptr;
    // The instance families that are queried. You can query 1 to 10 instance families in each call.
    std::shared_ptr<vector<string>> instanceTypeFamilies_ = nullptr;
    // The maximum hourly price for the pay-as-you-go or preemptible instances.
    std::shared_ptr<float> maxPrice_ = nullptr;
    // The maximum number of vCPUs per instance type.
    // 
    // >  The value of MaximumCpuCoreCount cannot exceed four times the value of MinimumCpuCoreCount.
    std::shared_ptr<int32_t> maximumCpuCoreCount_ = nullptr;
    // The maximum number of GPUs per instance. The value must be a positive integer.
    std::shared_ptr<int32_t> maximumGpuAmount_ = nullptr;
    // The maximum memory size per instance. Unit: GiB.
    std::shared_ptr<float> maximumMemorySize_ = nullptr;
    // The memory size of the instance type. Unit: GiB.
    std::shared_ptr<float> memory_ = nullptr;
    // The baseline vCPU computing performance (overall baseline performance of all vCPUs) per t5 or t6 burstable instance.
    std::shared_ptr<int32_t> minimumBaselineCredit_ = nullptr;
    // The minimum number of vCPUs per instance type.
    std::shared_ptr<int32_t> minimumCpuCoreCount_ = nullptr;
    // The minimum number of IPv6 addresses per ENI.
    std::shared_ptr<int32_t> minimumEniIpv6AddressQuantity_ = nullptr;
    // The minimum number of IPv4 addresses per ENI.
    std::shared_ptr<int32_t> minimumEniPrivateIpAddressQuantity_ = nullptr;
    // The minimum number of elastic network interfaces (ENIs) per instance.
    std::shared_ptr<int32_t> minimumEniQuantity_ = nullptr;
    // The minimum number of GPUs per instance. The value must be a positive integer.
    std::shared_ptr<int32_t> minimumGpuAmount_ = nullptr;
    // The initial vCPU credits per t5 or t6 burstable instance.
    std::shared_ptr<int32_t> minimumInitialCredit_ = nullptr;
    // The minimum memory size per instance. Unit: GiB.
    std::shared_ptr<float> minimumMemorySize_ = nullptr;
    // The processor models of the instance types. You can specify 1 to 10 processor models.
    std::shared_ptr<vector<string>> physicalProcessorModels_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
