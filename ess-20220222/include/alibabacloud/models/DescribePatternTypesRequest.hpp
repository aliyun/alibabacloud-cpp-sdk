// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPATTERNTYPESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPATTERNTYPESREQUEST_HPP_
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
  class DescribePatternTypesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePatternTypesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Architecture, architecture_);
      DARABONBA_PTR_TO_JSON(BurstablePerformance, burstablePerformance_);
      DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
      DARABONBA_PTR_TO_JSON(Cores, cores_);
      DARABONBA_PTR_TO_JSON(CoresList, coresList_);
      DARABONBA_PTR_TO_JSON(CpuArchitectures, cpuArchitectures_);
      DARABONBA_PTR_TO_JSON(ExcludedInstanceType, excludedInstanceType_);
      DARABONBA_PTR_TO_JSON(GpuSpecs, gpuSpecs_);
      DARABONBA_PTR_TO_JSON(InstanceCategories, instanceCategories_);
      DARABONBA_PTR_TO_JSON(InstanceFamilyLevel, instanceFamilyLevel_);
      DARABONBA_PTR_TO_JSON(InstanceTypeFamilies, instanceTypeFamilies_);
      DARABONBA_PTR_TO_JSON(MaxPrice, maxPrice_);
      DARABONBA_PTR_TO_JSON(MaximumCpuCoreCount, maximumCpuCoreCount_);
      DARABONBA_PTR_TO_JSON(MaximumGpuAmount, maximumGpuAmount_);
      DARABONBA_PTR_TO_JSON(MaximumMemorySize, maximumMemorySize_);
      DARABONBA_PTR_TO_JSON(Memory, memory_);
      DARABONBA_PTR_TO_JSON(MemoryList, memoryList_);
      DARABONBA_PTR_TO_JSON(MinimumBaselineCredit, minimumBaselineCredit_);
      DARABONBA_PTR_TO_JSON(MinimumCpuCoreCount, minimumCpuCoreCount_);
      DARABONBA_PTR_TO_JSON(MinimumEniIpv6AddressQuantity, minimumEniIpv6AddressQuantity_);
      DARABONBA_PTR_TO_JSON(MinimumEniPrivateIpAddressQuantity, minimumEniPrivateIpAddressQuantity_);
      DARABONBA_PTR_TO_JSON(MinimumEniQuantity, minimumEniQuantity_);
      DARABONBA_PTR_TO_JSON(MinimumGpuAmount, minimumGpuAmount_);
      DARABONBA_PTR_TO_JSON(MinimumInitialCredit, minimumInitialCredit_);
      DARABONBA_PTR_TO_JSON(MinimumMemorySize, minimumMemorySize_);
      DARABONBA_PTR_TO_JSON(PhysicalProcessorModels, physicalProcessorModels_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SpotStrategy, spotStrategy_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePatternTypesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Architecture, architecture_);
      DARABONBA_PTR_FROM_JSON(BurstablePerformance, burstablePerformance_);
      DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
      DARABONBA_PTR_FROM_JSON(Cores, cores_);
      DARABONBA_PTR_FROM_JSON(CoresList, coresList_);
      DARABONBA_PTR_FROM_JSON(CpuArchitectures, cpuArchitectures_);
      DARABONBA_PTR_FROM_JSON(ExcludedInstanceType, excludedInstanceType_);
      DARABONBA_PTR_FROM_JSON(GpuSpecs, gpuSpecs_);
      DARABONBA_PTR_FROM_JSON(InstanceCategories, instanceCategories_);
      DARABONBA_PTR_FROM_JSON(InstanceFamilyLevel, instanceFamilyLevel_);
      DARABONBA_PTR_FROM_JSON(InstanceTypeFamilies, instanceTypeFamilies_);
      DARABONBA_PTR_FROM_JSON(MaxPrice, maxPrice_);
      DARABONBA_PTR_FROM_JSON(MaximumCpuCoreCount, maximumCpuCoreCount_);
      DARABONBA_PTR_FROM_JSON(MaximumGpuAmount, maximumGpuAmount_);
      DARABONBA_PTR_FROM_JSON(MaximumMemorySize, maximumMemorySize_);
      DARABONBA_PTR_FROM_JSON(Memory, memory_);
      DARABONBA_PTR_FROM_JSON(MemoryList, memoryList_);
      DARABONBA_PTR_FROM_JSON(MinimumBaselineCredit, minimumBaselineCredit_);
      DARABONBA_PTR_FROM_JSON(MinimumCpuCoreCount, minimumCpuCoreCount_);
      DARABONBA_PTR_FROM_JSON(MinimumEniIpv6AddressQuantity, minimumEniIpv6AddressQuantity_);
      DARABONBA_PTR_FROM_JSON(MinimumEniPrivateIpAddressQuantity, minimumEniPrivateIpAddressQuantity_);
      DARABONBA_PTR_FROM_JSON(MinimumEniQuantity, minimumEniQuantity_);
      DARABONBA_PTR_FROM_JSON(MinimumGpuAmount, minimumGpuAmount_);
      DARABONBA_PTR_FROM_JSON(MinimumInitialCredit, minimumInitialCredit_);
      DARABONBA_PTR_FROM_JSON(MinimumMemorySize, minimumMemorySize_);
      DARABONBA_PTR_FROM_JSON(PhysicalProcessorModels, physicalProcessorModels_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SpotStrategy, spotStrategy_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribePatternTypesRequest() = default ;
    DescribePatternTypesRequest(const DescribePatternTypesRequest &) = default ;
    DescribePatternTypesRequest(DescribePatternTypesRequest &&) = default ;
    DescribePatternTypesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePatternTypesRequest() = default ;
    DescribePatternTypesRequest& operator=(const DescribePatternTypesRequest &) = default ;
    DescribePatternTypesRequest& operator=(DescribePatternTypesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->architecture_ == nullptr
        && return this->burstablePerformance_ == nullptr && return this->channelId_ == nullptr && return this->cores_ == nullptr && return this->coresList_ == nullptr && return this->cpuArchitectures_ == nullptr
        && return this->excludedInstanceType_ == nullptr && return this->gpuSpecs_ == nullptr && return this->instanceCategories_ == nullptr && return this->instanceFamilyLevel_ == nullptr && return this->instanceTypeFamilies_ == nullptr
        && return this->maxPrice_ == nullptr && return this->maximumCpuCoreCount_ == nullptr && return this->maximumGpuAmount_ == nullptr && return this->maximumMemorySize_ == nullptr && return this->memory_ == nullptr
        && return this->memoryList_ == nullptr && return this->minimumBaselineCredit_ == nullptr && return this->minimumCpuCoreCount_ == nullptr && return this->minimumEniIpv6AddressQuantity_ == nullptr && return this->minimumEniPrivateIpAddressQuantity_ == nullptr
        && return this->minimumEniQuantity_ == nullptr && return this->minimumGpuAmount_ == nullptr && return this->minimumInitialCredit_ == nullptr && return this->minimumMemorySize_ == nullptr && return this->physicalProcessorModels_ == nullptr
        && return this->regionId_ == nullptr && return this->spotStrategy_ == nullptr && return this->vSwitchId_ == nullptr && return this->zoneId_ == nullptr; };
    // architecture Field Functions 
    bool hasArchitecture() const { return this->architecture_ != nullptr;};
    void deleteArchitecture() { this->architecture_ = nullptr;};
    inline const vector<string> & architecture() const { DARABONBA_PTR_GET_CONST(architecture_, vector<string>) };
    inline vector<string> architecture() { DARABONBA_PTR_GET(architecture_, vector<string>) };
    inline DescribePatternTypesRequest& setArchitecture(const vector<string> & architecture) { DARABONBA_PTR_SET_VALUE(architecture_, architecture) };
    inline DescribePatternTypesRequest& setArchitecture(vector<string> && architecture) { DARABONBA_PTR_SET_RVALUE(architecture_, architecture) };


    // burstablePerformance Field Functions 
    bool hasBurstablePerformance() const { return this->burstablePerformance_ != nullptr;};
    void deleteBurstablePerformance() { this->burstablePerformance_ = nullptr;};
    inline string burstablePerformance() const { DARABONBA_PTR_GET_DEFAULT(burstablePerformance_, "") };
    inline DescribePatternTypesRequest& setBurstablePerformance(string burstablePerformance) { DARABONBA_PTR_SET_VALUE(burstablePerformance_, burstablePerformance) };


    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline int64_t channelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, 0L) };
    inline DescribePatternTypesRequest& setChannelId(int64_t channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // cores Field Functions 
    bool hasCores() const { return this->cores_ != nullptr;};
    void deleteCores() { this->cores_ = nullptr;};
    inline int32_t cores() const { DARABONBA_PTR_GET_DEFAULT(cores_, 0) };
    inline DescribePatternTypesRequest& setCores(int32_t cores) { DARABONBA_PTR_SET_VALUE(cores_, cores) };


    // coresList Field Functions 
    bool hasCoresList() const { return this->coresList_ != nullptr;};
    void deleteCoresList() { this->coresList_ = nullptr;};
    inline const vector<int32_t> & coresList() const { DARABONBA_PTR_GET_CONST(coresList_, vector<int32_t>) };
    inline vector<int32_t> coresList() { DARABONBA_PTR_GET(coresList_, vector<int32_t>) };
    inline DescribePatternTypesRequest& setCoresList(const vector<int32_t> & coresList) { DARABONBA_PTR_SET_VALUE(coresList_, coresList) };
    inline DescribePatternTypesRequest& setCoresList(vector<int32_t> && coresList) { DARABONBA_PTR_SET_RVALUE(coresList_, coresList) };


    // cpuArchitectures Field Functions 
    bool hasCpuArchitectures() const { return this->cpuArchitectures_ != nullptr;};
    void deleteCpuArchitectures() { this->cpuArchitectures_ = nullptr;};
    inline const vector<string> & cpuArchitectures() const { DARABONBA_PTR_GET_CONST(cpuArchitectures_, vector<string>) };
    inline vector<string> cpuArchitectures() { DARABONBA_PTR_GET(cpuArchitectures_, vector<string>) };
    inline DescribePatternTypesRequest& setCpuArchitectures(const vector<string> & cpuArchitectures) { DARABONBA_PTR_SET_VALUE(cpuArchitectures_, cpuArchitectures) };
    inline DescribePatternTypesRequest& setCpuArchitectures(vector<string> && cpuArchitectures) { DARABONBA_PTR_SET_RVALUE(cpuArchitectures_, cpuArchitectures) };


    // excludedInstanceType Field Functions 
    bool hasExcludedInstanceType() const { return this->excludedInstanceType_ != nullptr;};
    void deleteExcludedInstanceType() { this->excludedInstanceType_ = nullptr;};
    inline const vector<string> & excludedInstanceType() const { DARABONBA_PTR_GET_CONST(excludedInstanceType_, vector<string>) };
    inline vector<string> excludedInstanceType() { DARABONBA_PTR_GET(excludedInstanceType_, vector<string>) };
    inline DescribePatternTypesRequest& setExcludedInstanceType(const vector<string> & excludedInstanceType) { DARABONBA_PTR_SET_VALUE(excludedInstanceType_, excludedInstanceType) };
    inline DescribePatternTypesRequest& setExcludedInstanceType(vector<string> && excludedInstanceType) { DARABONBA_PTR_SET_RVALUE(excludedInstanceType_, excludedInstanceType) };


    // gpuSpecs Field Functions 
    bool hasGpuSpecs() const { return this->gpuSpecs_ != nullptr;};
    void deleteGpuSpecs() { this->gpuSpecs_ = nullptr;};
    inline const vector<string> & gpuSpecs() const { DARABONBA_PTR_GET_CONST(gpuSpecs_, vector<string>) };
    inline vector<string> gpuSpecs() { DARABONBA_PTR_GET(gpuSpecs_, vector<string>) };
    inline DescribePatternTypesRequest& setGpuSpecs(const vector<string> & gpuSpecs) { DARABONBA_PTR_SET_VALUE(gpuSpecs_, gpuSpecs) };
    inline DescribePatternTypesRequest& setGpuSpecs(vector<string> && gpuSpecs) { DARABONBA_PTR_SET_RVALUE(gpuSpecs_, gpuSpecs) };


    // instanceCategories Field Functions 
    bool hasInstanceCategories() const { return this->instanceCategories_ != nullptr;};
    void deleteInstanceCategories() { this->instanceCategories_ = nullptr;};
    inline const vector<string> & instanceCategories() const { DARABONBA_PTR_GET_CONST(instanceCategories_, vector<string>) };
    inline vector<string> instanceCategories() { DARABONBA_PTR_GET(instanceCategories_, vector<string>) };
    inline DescribePatternTypesRequest& setInstanceCategories(const vector<string> & instanceCategories) { DARABONBA_PTR_SET_VALUE(instanceCategories_, instanceCategories) };
    inline DescribePatternTypesRequest& setInstanceCategories(vector<string> && instanceCategories) { DARABONBA_PTR_SET_RVALUE(instanceCategories_, instanceCategories) };


    // instanceFamilyLevel Field Functions 
    bool hasInstanceFamilyLevel() const { return this->instanceFamilyLevel_ != nullptr;};
    void deleteInstanceFamilyLevel() { this->instanceFamilyLevel_ = nullptr;};
    inline string instanceFamilyLevel() const { DARABONBA_PTR_GET_DEFAULT(instanceFamilyLevel_, "") };
    inline DescribePatternTypesRequest& setInstanceFamilyLevel(string instanceFamilyLevel) { DARABONBA_PTR_SET_VALUE(instanceFamilyLevel_, instanceFamilyLevel) };


    // instanceTypeFamilies Field Functions 
    bool hasInstanceTypeFamilies() const { return this->instanceTypeFamilies_ != nullptr;};
    void deleteInstanceTypeFamilies() { this->instanceTypeFamilies_ = nullptr;};
    inline const vector<string> & instanceTypeFamilies() const { DARABONBA_PTR_GET_CONST(instanceTypeFamilies_, vector<string>) };
    inline vector<string> instanceTypeFamilies() { DARABONBA_PTR_GET(instanceTypeFamilies_, vector<string>) };
    inline DescribePatternTypesRequest& setInstanceTypeFamilies(const vector<string> & instanceTypeFamilies) { DARABONBA_PTR_SET_VALUE(instanceTypeFamilies_, instanceTypeFamilies) };
    inline DescribePatternTypesRequest& setInstanceTypeFamilies(vector<string> && instanceTypeFamilies) { DARABONBA_PTR_SET_RVALUE(instanceTypeFamilies_, instanceTypeFamilies) };


    // maxPrice Field Functions 
    bool hasMaxPrice() const { return this->maxPrice_ != nullptr;};
    void deleteMaxPrice() { this->maxPrice_ = nullptr;};
    inline float maxPrice() const { DARABONBA_PTR_GET_DEFAULT(maxPrice_, 0.0) };
    inline DescribePatternTypesRequest& setMaxPrice(float maxPrice) { DARABONBA_PTR_SET_VALUE(maxPrice_, maxPrice) };


    // maximumCpuCoreCount Field Functions 
    bool hasMaximumCpuCoreCount() const { return this->maximumCpuCoreCount_ != nullptr;};
    void deleteMaximumCpuCoreCount() { this->maximumCpuCoreCount_ = nullptr;};
    inline int32_t maximumCpuCoreCount() const { DARABONBA_PTR_GET_DEFAULT(maximumCpuCoreCount_, 0) };
    inline DescribePatternTypesRequest& setMaximumCpuCoreCount(int32_t maximumCpuCoreCount) { DARABONBA_PTR_SET_VALUE(maximumCpuCoreCount_, maximumCpuCoreCount) };


    // maximumGpuAmount Field Functions 
    bool hasMaximumGpuAmount() const { return this->maximumGpuAmount_ != nullptr;};
    void deleteMaximumGpuAmount() { this->maximumGpuAmount_ = nullptr;};
    inline int32_t maximumGpuAmount() const { DARABONBA_PTR_GET_DEFAULT(maximumGpuAmount_, 0) };
    inline DescribePatternTypesRequest& setMaximumGpuAmount(int32_t maximumGpuAmount) { DARABONBA_PTR_SET_VALUE(maximumGpuAmount_, maximumGpuAmount) };


    // maximumMemorySize Field Functions 
    bool hasMaximumMemorySize() const { return this->maximumMemorySize_ != nullptr;};
    void deleteMaximumMemorySize() { this->maximumMemorySize_ = nullptr;};
    inline float maximumMemorySize() const { DARABONBA_PTR_GET_DEFAULT(maximumMemorySize_, 0.0) };
    inline DescribePatternTypesRequest& setMaximumMemorySize(float maximumMemorySize) { DARABONBA_PTR_SET_VALUE(maximumMemorySize_, maximumMemorySize) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline float memory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0.0) };
    inline DescribePatternTypesRequest& setMemory(float memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // memoryList Field Functions 
    bool hasMemoryList() const { return this->memoryList_ != nullptr;};
    void deleteMemoryList() { this->memoryList_ = nullptr;};
    inline const vector<float> & memoryList() const { DARABONBA_PTR_GET_CONST(memoryList_, vector<float>) };
    inline vector<float> memoryList() { DARABONBA_PTR_GET(memoryList_, vector<float>) };
    inline DescribePatternTypesRequest& setMemoryList(const vector<float> & memoryList) { DARABONBA_PTR_SET_VALUE(memoryList_, memoryList) };
    inline DescribePatternTypesRequest& setMemoryList(vector<float> && memoryList) { DARABONBA_PTR_SET_RVALUE(memoryList_, memoryList) };


    // minimumBaselineCredit Field Functions 
    bool hasMinimumBaselineCredit() const { return this->minimumBaselineCredit_ != nullptr;};
    void deleteMinimumBaselineCredit() { this->minimumBaselineCredit_ = nullptr;};
    inline int32_t minimumBaselineCredit() const { DARABONBA_PTR_GET_DEFAULT(minimumBaselineCredit_, 0) };
    inline DescribePatternTypesRequest& setMinimumBaselineCredit(int32_t minimumBaselineCredit) { DARABONBA_PTR_SET_VALUE(minimumBaselineCredit_, minimumBaselineCredit) };


    // minimumCpuCoreCount Field Functions 
    bool hasMinimumCpuCoreCount() const { return this->minimumCpuCoreCount_ != nullptr;};
    void deleteMinimumCpuCoreCount() { this->minimumCpuCoreCount_ = nullptr;};
    inline int32_t minimumCpuCoreCount() const { DARABONBA_PTR_GET_DEFAULT(minimumCpuCoreCount_, 0) };
    inline DescribePatternTypesRequest& setMinimumCpuCoreCount(int32_t minimumCpuCoreCount) { DARABONBA_PTR_SET_VALUE(minimumCpuCoreCount_, minimumCpuCoreCount) };


    // minimumEniIpv6AddressQuantity Field Functions 
    bool hasMinimumEniIpv6AddressQuantity() const { return this->minimumEniIpv6AddressQuantity_ != nullptr;};
    void deleteMinimumEniIpv6AddressQuantity() { this->minimumEniIpv6AddressQuantity_ = nullptr;};
    inline int32_t minimumEniIpv6AddressQuantity() const { DARABONBA_PTR_GET_DEFAULT(minimumEniIpv6AddressQuantity_, 0) };
    inline DescribePatternTypesRequest& setMinimumEniIpv6AddressQuantity(int32_t minimumEniIpv6AddressQuantity) { DARABONBA_PTR_SET_VALUE(minimumEniIpv6AddressQuantity_, minimumEniIpv6AddressQuantity) };


    // minimumEniPrivateIpAddressQuantity Field Functions 
    bool hasMinimumEniPrivateIpAddressQuantity() const { return this->minimumEniPrivateIpAddressQuantity_ != nullptr;};
    void deleteMinimumEniPrivateIpAddressQuantity() { this->minimumEniPrivateIpAddressQuantity_ = nullptr;};
    inline int32_t minimumEniPrivateIpAddressQuantity() const { DARABONBA_PTR_GET_DEFAULT(minimumEniPrivateIpAddressQuantity_, 0) };
    inline DescribePatternTypesRequest& setMinimumEniPrivateIpAddressQuantity(int32_t minimumEniPrivateIpAddressQuantity) { DARABONBA_PTR_SET_VALUE(minimumEniPrivateIpAddressQuantity_, minimumEniPrivateIpAddressQuantity) };


    // minimumEniQuantity Field Functions 
    bool hasMinimumEniQuantity() const { return this->minimumEniQuantity_ != nullptr;};
    void deleteMinimumEniQuantity() { this->minimumEniQuantity_ = nullptr;};
    inline int32_t minimumEniQuantity() const { DARABONBA_PTR_GET_DEFAULT(minimumEniQuantity_, 0) };
    inline DescribePatternTypesRequest& setMinimumEniQuantity(int32_t minimumEniQuantity) { DARABONBA_PTR_SET_VALUE(minimumEniQuantity_, minimumEniQuantity) };


    // minimumGpuAmount Field Functions 
    bool hasMinimumGpuAmount() const { return this->minimumGpuAmount_ != nullptr;};
    void deleteMinimumGpuAmount() { this->minimumGpuAmount_ = nullptr;};
    inline int32_t minimumGpuAmount() const { DARABONBA_PTR_GET_DEFAULT(minimumGpuAmount_, 0) };
    inline DescribePatternTypesRequest& setMinimumGpuAmount(int32_t minimumGpuAmount) { DARABONBA_PTR_SET_VALUE(minimumGpuAmount_, minimumGpuAmount) };


    // minimumInitialCredit Field Functions 
    bool hasMinimumInitialCredit() const { return this->minimumInitialCredit_ != nullptr;};
    void deleteMinimumInitialCredit() { this->minimumInitialCredit_ = nullptr;};
    inline int32_t minimumInitialCredit() const { DARABONBA_PTR_GET_DEFAULT(minimumInitialCredit_, 0) };
    inline DescribePatternTypesRequest& setMinimumInitialCredit(int32_t minimumInitialCredit) { DARABONBA_PTR_SET_VALUE(minimumInitialCredit_, minimumInitialCredit) };


    // minimumMemorySize Field Functions 
    bool hasMinimumMemorySize() const { return this->minimumMemorySize_ != nullptr;};
    void deleteMinimumMemorySize() { this->minimumMemorySize_ = nullptr;};
    inline float minimumMemorySize() const { DARABONBA_PTR_GET_DEFAULT(minimumMemorySize_, 0.0) };
    inline DescribePatternTypesRequest& setMinimumMemorySize(float minimumMemorySize) { DARABONBA_PTR_SET_VALUE(minimumMemorySize_, minimumMemorySize) };


    // physicalProcessorModels Field Functions 
    bool hasPhysicalProcessorModels() const { return this->physicalProcessorModels_ != nullptr;};
    void deletePhysicalProcessorModels() { this->physicalProcessorModels_ = nullptr;};
    inline const vector<string> & physicalProcessorModels() const { DARABONBA_PTR_GET_CONST(physicalProcessorModels_, vector<string>) };
    inline vector<string> physicalProcessorModels() { DARABONBA_PTR_GET(physicalProcessorModels_, vector<string>) };
    inline DescribePatternTypesRequest& setPhysicalProcessorModels(const vector<string> & physicalProcessorModels) { DARABONBA_PTR_SET_VALUE(physicalProcessorModels_, physicalProcessorModels) };
    inline DescribePatternTypesRequest& setPhysicalProcessorModels(vector<string> && physicalProcessorModels) { DARABONBA_PTR_SET_RVALUE(physicalProcessorModels_, physicalProcessorModels) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribePatternTypesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // spotStrategy Field Functions 
    bool hasSpotStrategy() const { return this->spotStrategy_ != nullptr;};
    void deleteSpotStrategy() { this->spotStrategy_ = nullptr;};
    inline string spotStrategy() const { DARABONBA_PTR_GET_DEFAULT(spotStrategy_, "") };
    inline DescribePatternTypesRequest& setSpotStrategy(string spotStrategy) { DARABONBA_PTR_SET_VALUE(spotStrategy_, spotStrategy) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline const vector<string> & vSwitchId() const { DARABONBA_PTR_GET_CONST(vSwitchId_, vector<string>) };
    inline vector<string> vSwitchId() { DARABONBA_PTR_GET(vSwitchId_, vector<string>) };
    inline DescribePatternTypesRequest& setVSwitchId(const vector<string> & vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };
    inline DescribePatternTypesRequest& setVSwitchId(vector<string> && vSwitchId) { DARABONBA_PTR_SET_RVALUE(vSwitchId_, vSwitchId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline const vector<string> & zoneId() const { DARABONBA_PTR_GET_CONST(zoneId_, vector<string>) };
    inline vector<string> zoneId() { DARABONBA_PTR_GET(zoneId_, vector<string>) };
    inline DescribePatternTypesRequest& setZoneId(const vector<string> & zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };
    inline DescribePatternTypesRequest& setZoneId(vector<string> && zoneId) { DARABONBA_PTR_SET_RVALUE(zoneId_, zoneId) };


  protected:
    // The architecture types of the instance types. Valid values:
    // 
    // *   X86: x86 architecture.
    // *   Heterogeneous: heterogeneous computing, such as GPU-accelerated or FPGA-accelerated.
    // *   BareMetal: ECS Bare Metal Instance.
    // *   Arm: Arm.
    // 
    // By default, all values are selected.
    std::shared_ptr<vector<string>> architecture_ = nullptr;
    // Specifies whether to include burstable instance types. Valid values:
    // 
    // *   Exclude: does not include burstable instance types.
    // *   Include: includes burstable instance types.
    // *   Required: includes only burstable instance types.
    // 
    // Default value: Include.
    std::shared_ptr<string> burstablePerformance_ = nullptr;
    // The channel ID. This parameter is not for public use.
    std::shared_ptr<int64_t> channelId_ = nullptr;
    // The number of vCPUs that you want to assign to the instance type.
    std::shared_ptr<int32_t> cores_ = nullptr;
    // The number of vCPUs that you want to assign to the instance type. You can specify multiple vCPUs.
    std::shared_ptr<vector<int32_t>> coresList_ = nullptr;
    // The CPU architectures of the instance types. Valid values:
    // 
    // >  You can specify 1 to 2 CPU architectures.
    // 
    // *   x86
    // *   Arm
    std::shared_ptr<vector<string>> cpuArchitectures_ = nullptr;
    std::shared_ptr<vector<string>> excludedInstanceType_ = nullptr;
    // The GPU models.
    std::shared_ptr<vector<string>> gpuSpecs_ = nullptr;
    // The classifications of the instance types. Valid values:
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
    // The level of the instance family. Valid values:
    // 
    // *   EntryLevel: entry level
    // *   EnterpriseLevel: enterprise level
    // *   CreditEntryLevel: credit-based entry level For more information, see [Burstable instance families](https://help.aliyun.com/document_detail/59977.html).
    std::shared_ptr<string> instanceFamilyLevel_ = nullptr;
    // The instance families that you want to query. You can query 1 to 10 instance families in each call.
    std::shared_ptr<vector<string>> instanceTypeFamilies_ = nullptr;
    // The maximum hourly price for pay-as-you-go or preemptible instances.
    std::shared_ptr<float> maxPrice_ = nullptr;
    // The maximum number of vCPUs per instance type.
    std::shared_ptr<int32_t> maximumCpuCoreCount_ = nullptr;
    // The maximum number of GPUs per instance. The value must be a positive integer.
    std::shared_ptr<int32_t> maximumGpuAmount_ = nullptr;
    // The maximum memory size per instance. Unit: GiB.
    std::shared_ptr<float> maximumMemorySize_ = nullptr;
    // The memory size that you want to assign to the instance type. Unit: GiB.
    std::shared_ptr<float> memory_ = nullptr;
    // The memory size that you want to assign to the instance type. Unit: GiB. You can specify multiple memory sizes.
    std::shared_ptr<vector<float>> memoryList_ = nullptr;
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
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The preemption policy that you want to apply to pay-as-you-go instances. Valid values:
    // 
    // *   NoSpot: The instances are created as regular pay-as-you-go instances.
    // *   SpotWithPriceLimit: The instances are created as preemptible instances that have a user-defined maximum hourly price.
    // *   SpotAsPriceGo: The instances are created as preemptible instances for which the market price at the time of purchase is automatically used as the bidding price.
    // 
    // Default value: NoSpot.
    std::shared_ptr<string> spotStrategy_ = nullptr;
    // The IDs of the vSwitches.
    std::shared_ptr<vector<string>> vSwitchId_ = nullptr;
    // The zone IDs. If you pass vSwitch IDs to the system, this parameter does not take effect.
    std::shared_ptr<vector<string>> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
