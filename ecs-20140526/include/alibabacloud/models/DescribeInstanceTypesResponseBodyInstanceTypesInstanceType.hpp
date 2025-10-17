// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCETYPESRESPONSEBODYINSTANCETYPESINSTANCETYPE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCETYPESRESPONSEBODYINSTANCETYPESINSTANCETYPE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeAttributes.hpp>
#include <alibabacloud/models/DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeClock.hpp>
#include <alibabacloud/models/DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeCpuOptions.hpp>
#include <alibabacloud/models/DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeEnhancedNetwork.hpp>
#include <alibabacloud/models/DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeNetworkCards.hpp>
#include <alibabacloud/models/DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeNetworkInfo.hpp>
#include <alibabacloud/models/DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeSupportedBootModes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeInstanceTypesResponseBodyInstanceTypesInstanceType : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceTypesResponseBodyInstanceTypesInstanceType& obj) { 
      DARABONBA_PTR_TO_JSON(Attributes, attributes_);
      DARABONBA_PTR_TO_JSON(BaselineCredit, baselineCredit_);
      DARABONBA_PTR_TO_JSON(Clock, clock_);
      DARABONBA_PTR_TO_JSON(CpuArchitecture, cpuArchitecture_);
      DARABONBA_PTR_TO_JSON(CpuCoreCount, cpuCoreCount_);
      DARABONBA_PTR_TO_JSON(CpuOptions, cpuOptions_);
      DARABONBA_PTR_TO_JSON(CpuSpeedFrequency, cpuSpeedFrequency_);
      DARABONBA_PTR_TO_JSON(CpuTurboFrequency, cpuTurboFrequency_);
      DARABONBA_PTR_TO_JSON(DiskQuantity, diskQuantity_);
      DARABONBA_PTR_TO_JSON(EnhancedNetwork, enhancedNetwork_);
      DARABONBA_PTR_TO_JSON(EniIpv6AddressQuantity, eniIpv6AddressQuantity_);
      DARABONBA_PTR_TO_JSON(EniPrivateIpAddressQuantity, eniPrivateIpAddressQuantity_);
      DARABONBA_PTR_TO_JSON(EniQuantity, eniQuantity_);
      DARABONBA_PTR_TO_JSON(EniTotalQuantity, eniTotalQuantity_);
      DARABONBA_PTR_TO_JSON(EniTrunkSupported, eniTrunkSupported_);
      DARABONBA_PTR_TO_JSON(EriQuantity, eriQuantity_);
      DARABONBA_PTR_TO_JSON(GPUAmount, GPUAmount_);
      DARABONBA_PTR_TO_JSON(GPUMemorySize, GPUMemorySize_);
      DARABONBA_PTR_TO_JSON(GPUSpec, GPUSpec_);
      DARABONBA_PTR_TO_JSON(InitialCredit, initialCredit_);
      DARABONBA_PTR_TO_JSON(InstanceBandwidthRx, instanceBandwidthRx_);
      DARABONBA_PTR_TO_JSON(InstanceBandwidthTx, instanceBandwidthTx_);
      DARABONBA_PTR_TO_JSON(InstanceCategory, instanceCategory_);
      DARABONBA_PTR_TO_JSON(InstanceFamilyLevel, instanceFamilyLevel_);
      DARABONBA_PTR_TO_JSON(InstancePpsRx, instancePpsRx_);
      DARABONBA_PTR_TO_JSON(InstancePpsTx, instancePpsTx_);
      DARABONBA_PTR_TO_JSON(InstanceTypeFamily, instanceTypeFamily_);
      DARABONBA_PTR_TO_JSON(InstanceTypeId, instanceTypeId_);
      DARABONBA_PTR_TO_JSON(JumboFrameSupport, jumboFrameSupport_);
      DARABONBA_PTR_TO_JSON(LocalStorageAmount, localStorageAmount_);
      DARABONBA_PTR_TO_JSON(LocalStorageCapacity, localStorageCapacity_);
      DARABONBA_PTR_TO_JSON(LocalStorageCategory, localStorageCategory_);
      DARABONBA_PTR_TO_JSON(MaximumQueueNumberPerEni, maximumQueueNumberPerEni_);
      DARABONBA_PTR_TO_JSON(MemorySize, memorySize_);
      DARABONBA_PTR_TO_JSON(NetworkCardQuantity, networkCardQuantity_);
      DARABONBA_PTR_TO_JSON(NetworkCards, networkCards_);
      DARABONBA_PTR_TO_JSON(NetworkEncryptionSupport, networkEncryptionSupport_);
      DARABONBA_PTR_TO_JSON(NetworkInfo, networkInfo_);
      DARABONBA_PTR_TO_JSON(NvmeSupport, nvmeSupport_);
      DARABONBA_PTR_TO_JSON(PhysicalProcessorModel, physicalProcessorModel_);
      DARABONBA_PTR_TO_JSON(PrimaryEniQueueNumber, primaryEniQueueNumber_);
      DARABONBA_PTR_TO_JSON(QueuePairNumber, queuePairNumber_);
      DARABONBA_PTR_TO_JSON(SecondaryEniQueueNumber, secondaryEniQueueNumber_);
      DARABONBA_PTR_TO_JSON(SupportedBootModes, supportedBootModes_);
      DARABONBA_PTR_TO_JSON(TotalEniQueueQuantity, totalEniQueueQuantity_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceTypesResponseBodyInstanceTypesInstanceType& obj) { 
      DARABONBA_PTR_FROM_JSON(Attributes, attributes_);
      DARABONBA_PTR_FROM_JSON(BaselineCredit, baselineCredit_);
      DARABONBA_PTR_FROM_JSON(Clock, clock_);
      DARABONBA_PTR_FROM_JSON(CpuArchitecture, cpuArchitecture_);
      DARABONBA_PTR_FROM_JSON(CpuCoreCount, cpuCoreCount_);
      DARABONBA_PTR_FROM_JSON(CpuOptions, cpuOptions_);
      DARABONBA_PTR_FROM_JSON(CpuSpeedFrequency, cpuSpeedFrequency_);
      DARABONBA_PTR_FROM_JSON(CpuTurboFrequency, cpuTurboFrequency_);
      DARABONBA_PTR_FROM_JSON(DiskQuantity, diskQuantity_);
      DARABONBA_PTR_FROM_JSON(EnhancedNetwork, enhancedNetwork_);
      DARABONBA_PTR_FROM_JSON(EniIpv6AddressQuantity, eniIpv6AddressQuantity_);
      DARABONBA_PTR_FROM_JSON(EniPrivateIpAddressQuantity, eniPrivateIpAddressQuantity_);
      DARABONBA_PTR_FROM_JSON(EniQuantity, eniQuantity_);
      DARABONBA_PTR_FROM_JSON(EniTotalQuantity, eniTotalQuantity_);
      DARABONBA_PTR_FROM_JSON(EniTrunkSupported, eniTrunkSupported_);
      DARABONBA_PTR_FROM_JSON(EriQuantity, eriQuantity_);
      DARABONBA_PTR_FROM_JSON(GPUAmount, GPUAmount_);
      DARABONBA_PTR_FROM_JSON(GPUMemorySize, GPUMemorySize_);
      DARABONBA_PTR_FROM_JSON(GPUSpec, GPUSpec_);
      DARABONBA_PTR_FROM_JSON(InitialCredit, initialCredit_);
      DARABONBA_PTR_FROM_JSON(InstanceBandwidthRx, instanceBandwidthRx_);
      DARABONBA_PTR_FROM_JSON(InstanceBandwidthTx, instanceBandwidthTx_);
      DARABONBA_PTR_FROM_JSON(InstanceCategory, instanceCategory_);
      DARABONBA_PTR_FROM_JSON(InstanceFamilyLevel, instanceFamilyLevel_);
      DARABONBA_PTR_FROM_JSON(InstancePpsRx, instancePpsRx_);
      DARABONBA_PTR_FROM_JSON(InstancePpsTx, instancePpsTx_);
      DARABONBA_PTR_FROM_JSON(InstanceTypeFamily, instanceTypeFamily_);
      DARABONBA_PTR_FROM_JSON(InstanceTypeId, instanceTypeId_);
      DARABONBA_PTR_FROM_JSON(JumboFrameSupport, jumboFrameSupport_);
      DARABONBA_PTR_FROM_JSON(LocalStorageAmount, localStorageAmount_);
      DARABONBA_PTR_FROM_JSON(LocalStorageCapacity, localStorageCapacity_);
      DARABONBA_PTR_FROM_JSON(LocalStorageCategory, localStorageCategory_);
      DARABONBA_PTR_FROM_JSON(MaximumQueueNumberPerEni, maximumQueueNumberPerEni_);
      DARABONBA_PTR_FROM_JSON(MemorySize, memorySize_);
      DARABONBA_PTR_FROM_JSON(NetworkCardQuantity, networkCardQuantity_);
      DARABONBA_PTR_FROM_JSON(NetworkCards, networkCards_);
      DARABONBA_PTR_FROM_JSON(NetworkEncryptionSupport, networkEncryptionSupport_);
      DARABONBA_PTR_FROM_JSON(NetworkInfo, networkInfo_);
      DARABONBA_PTR_FROM_JSON(NvmeSupport, nvmeSupport_);
      DARABONBA_PTR_FROM_JSON(PhysicalProcessorModel, physicalProcessorModel_);
      DARABONBA_PTR_FROM_JSON(PrimaryEniQueueNumber, primaryEniQueueNumber_);
      DARABONBA_PTR_FROM_JSON(QueuePairNumber, queuePairNumber_);
      DARABONBA_PTR_FROM_JSON(SecondaryEniQueueNumber, secondaryEniQueueNumber_);
      DARABONBA_PTR_FROM_JSON(SupportedBootModes, supportedBootModes_);
      DARABONBA_PTR_FROM_JSON(TotalEniQueueQuantity, totalEniQueueQuantity_);
    };
    DescribeInstanceTypesResponseBodyInstanceTypesInstanceType() = default ;
    DescribeInstanceTypesResponseBodyInstanceTypesInstanceType(const DescribeInstanceTypesResponseBodyInstanceTypesInstanceType &) = default ;
    DescribeInstanceTypesResponseBodyInstanceTypesInstanceType(DescribeInstanceTypesResponseBodyInstanceTypesInstanceType &&) = default ;
    DescribeInstanceTypesResponseBodyInstanceTypesInstanceType(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceTypesResponseBodyInstanceTypesInstanceType() = default ;
    DescribeInstanceTypesResponseBodyInstanceTypesInstanceType& operator=(const DescribeInstanceTypesResponseBodyInstanceTypesInstanceType &) = default ;
    DescribeInstanceTypesResponseBodyInstanceTypesInstanceType& operator=(DescribeInstanceTypesResponseBodyInstanceTypesInstanceType &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attributes_ == nullptr
        && return this->baselineCredit_ == nullptr && return this->clock_ == nullptr && return this->cpuArchitecture_ == nullptr && return this->cpuCoreCount_ == nullptr && return this->cpuOptions_ == nullptr
        && return this->cpuSpeedFrequency_ == nullptr && return this->cpuTurboFrequency_ == nullptr && return this->diskQuantity_ == nullptr && return this->enhancedNetwork_ == nullptr && return this->eniIpv6AddressQuantity_ == nullptr
        && return this->eniPrivateIpAddressQuantity_ == nullptr && return this->eniQuantity_ == nullptr && return this->eniTotalQuantity_ == nullptr && return this->eniTrunkSupported_ == nullptr && return this->eriQuantity_ == nullptr
        && return this->GPUAmount_ == nullptr && return this->GPUMemorySize_ == nullptr && return this->GPUSpec_ == nullptr && return this->initialCredit_ == nullptr && return this->instanceBandwidthRx_ == nullptr
        && return this->instanceBandwidthTx_ == nullptr && return this->instanceCategory_ == nullptr && return this->instanceFamilyLevel_ == nullptr && return this->instancePpsRx_ == nullptr && return this->instancePpsTx_ == nullptr
        && return this->instanceTypeFamily_ == nullptr && return this->instanceTypeId_ == nullptr && return this->jumboFrameSupport_ == nullptr && return this->localStorageAmount_ == nullptr && return this->localStorageCapacity_ == nullptr
        && return this->localStorageCategory_ == nullptr && return this->maximumQueueNumberPerEni_ == nullptr && return this->memorySize_ == nullptr && return this->networkCardQuantity_ == nullptr && return this->networkCards_ == nullptr
        && return this->networkEncryptionSupport_ == nullptr && return this->networkInfo_ == nullptr && return this->nvmeSupport_ == nullptr && return this->physicalProcessorModel_ == nullptr && return this->primaryEniQueueNumber_ == nullptr
        && return this->queuePairNumber_ == nullptr && return this->secondaryEniQueueNumber_ == nullptr && return this->supportedBootModes_ == nullptr && return this->totalEniQueueQuantity_ == nullptr; };
    // attributes Field Functions 
    bool hasAttributes() const { return this->attributes_ != nullptr;};
    void deleteAttributes() { this->attributes_ = nullptr;};
    inline const Models::DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeAttributes & attributes() const { DARABONBA_PTR_GET_CONST(attributes_, Models::DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeAttributes) };
    inline Models::DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeAttributes attributes() { DARABONBA_PTR_GET(attributes_, Models::DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeAttributes) };
    inline DescribeInstanceTypesResponseBodyInstanceTypesInstanceType& setAttributes(const Models::DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeAttributes & attributes) { DARABONBA_PTR_SET_VALUE(attributes_, attributes) };
    inline DescribeInstanceTypesResponseBodyInstanceTypesInstanceType& setAttributes(Models::DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeAttributes && attributes) { DARABONBA_PTR_SET_RVALUE(attributes_, attributes) };


    // baselineCredit Field Functions 
    bool hasBaselineCredit() const { return this->baselineCredit_ != nullptr;};
    void deleteBaselineCredit() { this->baselineCredit_ = nullptr;};
    inline int32_t baselineCredit() const { DARABONBA_PTR_GET_DEFAULT(baselineCredit_, 0) };
    inline DescribeInstanceTypesResponseBodyInstanceTypesInstanceType& setBaselineCredit(int32_t baselineCredit) { DARABONBA_PTR_SET_VALUE(baselineCredit_, baselineCredit) };


    // clock Field Functions 
    bool hasClock() const { return this->clock_ != nullptr;};
    void deleteClock() { this->clock_ = nullptr;};
    inline const Models::DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeClock & clock() const { DARABONBA_PTR_GET_CONST(clock_, Models::DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeClock) };
    inline Models::DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeClock clock() { DARABONBA_PTR_GET(clock_, Models::DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeClock) };
    inline DescribeInstanceTypesResponseBodyInstanceTypesInstanceType& setClock(const Models::DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeClock & clock) { DARABONBA_PTR_SET_VALUE(clock_, clock) };
    inline DescribeInstanceTypesResponseBodyInstanceTypesInstanceType& setClock(Models::DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeClock && clock) { DARABONBA_PTR_SET_RVALUE(clock_, clock) };


    // cpuArchitecture Field Functions 
    bool hasCpuArchitecture() const { return this->cpuArchitecture_ != nullptr;};
    void deleteCpuArchitecture() { this->cpuArchitecture_ = nullptr;};
    inline string cpuArchitecture() const { DARABONBA_PTR_GET_DEFAULT(cpuArchitecture_, "") };
    inline DescribeInstanceTypesResponseBodyInstanceTypesInstanceType& setCpuArchitecture(string cpuArchitecture) { DARABONBA_PTR_SET_VALUE(cpuArchitecture_, cpuArchitecture) };


    // cpuCoreCount Field Functions 
    bool hasCpuCoreCount() const { return this->cpuCoreCount_ != nullptr;};
    void deleteCpuCoreCount() { this->cpuCoreCount_ = nullptr;};
    inline int32_t cpuCoreCount() const { DARABONBA_PTR_GET_DEFAULT(cpuCoreCount_, 0) };
    inline DescribeInstanceTypesResponseBodyInstanceTypesInstanceType& setCpuCoreCount(int32_t cpuCoreCount) { DARABONBA_PTR_SET_VALUE(cpuCoreCount_, cpuCoreCount) };


    // cpuOptions Field Functions 
    bool hasCpuOptions() const { return this->cpuOptions_ != nullptr;};
    void deleteCpuOptions() { this->cpuOptions_ = nullptr;};
    inline const Models::DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeCpuOptions & cpuOptions() const { DARABONBA_PTR_GET_CONST(cpuOptions_, Models::DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeCpuOptions) };
    inline Models::DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeCpuOptions cpuOptions() { DARABONBA_PTR_GET(cpuOptions_, Models::DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeCpuOptions) };
    inline DescribeInstanceTypesResponseBodyInstanceTypesInstanceType& setCpuOptions(const Models::DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeCpuOptions & cpuOptions) { DARABONBA_PTR_SET_VALUE(cpuOptions_, cpuOptions) };
    inline DescribeInstanceTypesResponseBodyInstanceTypesInstanceType& setCpuOptions(Models::DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeCpuOptions && cpuOptions) { DARABONBA_PTR_SET_RVALUE(cpuOptions_, cpuOptions) };


    // cpuSpeedFrequency Field Functions 
    bool hasCpuSpeedFrequency() const { return this->cpuSpeedFrequency_ != nullptr;};
    void deleteCpuSpeedFrequency() { this->cpuSpeedFrequency_ = nullptr;};
    inline float cpuSpeedFrequency() const { DARABONBA_PTR_GET_DEFAULT(cpuSpeedFrequency_, 0.0) };
    inline DescribeInstanceTypesResponseBodyInstanceTypesInstanceType& setCpuSpeedFrequency(float cpuSpeedFrequency) { DARABONBA_PTR_SET_VALUE(cpuSpeedFrequency_, cpuSpeedFrequency) };


    // cpuTurboFrequency Field Functions 
    bool hasCpuTurboFrequency() const { return this->cpuTurboFrequency_ != nullptr;};
    void deleteCpuTurboFrequency() { this->cpuTurboFrequency_ = nullptr;};
    inline float cpuTurboFrequency() const { DARABONBA_PTR_GET_DEFAULT(cpuTurboFrequency_, 0.0) };
    inline DescribeInstanceTypesResponseBodyInstanceTypesInstanceType& setCpuTurboFrequency(float cpuTurboFrequency) { DARABONBA_PTR_SET_VALUE(cpuTurboFrequency_, cpuTurboFrequency) };


    // diskQuantity Field Functions 
    bool hasDiskQuantity() const { return this->diskQuantity_ != nullptr;};
    void deleteDiskQuantity() { this->diskQuantity_ = nullptr;};
    inline int32_t diskQuantity() const { DARABONBA_PTR_GET_DEFAULT(diskQuantity_, 0) };
    inline DescribeInstanceTypesResponseBodyInstanceTypesInstanceType& setDiskQuantity(int32_t diskQuantity) { DARABONBA_PTR_SET_VALUE(diskQuantity_, diskQuantity) };


    // enhancedNetwork Field Functions 
    bool hasEnhancedNetwork() const { return this->enhancedNetwork_ != nullptr;};
    void deleteEnhancedNetwork() { this->enhancedNetwork_ = nullptr;};
    inline const Models::DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeEnhancedNetwork & enhancedNetwork() const { DARABONBA_PTR_GET_CONST(enhancedNetwork_, Models::DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeEnhancedNetwork) };
    inline Models::DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeEnhancedNetwork enhancedNetwork() { DARABONBA_PTR_GET(enhancedNetwork_, Models::DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeEnhancedNetwork) };
    inline DescribeInstanceTypesResponseBodyInstanceTypesInstanceType& setEnhancedNetwork(const Models::DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeEnhancedNetwork & enhancedNetwork) { DARABONBA_PTR_SET_VALUE(enhancedNetwork_, enhancedNetwork) };
    inline DescribeInstanceTypesResponseBodyInstanceTypesInstanceType& setEnhancedNetwork(Models::DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeEnhancedNetwork && enhancedNetwork) { DARABONBA_PTR_SET_RVALUE(enhancedNetwork_, enhancedNetwork) };


    // eniIpv6AddressQuantity Field Functions 
    bool hasEniIpv6AddressQuantity() const { return this->eniIpv6AddressQuantity_ != nullptr;};
    void deleteEniIpv6AddressQuantity() { this->eniIpv6AddressQuantity_ = nullptr;};
    inline int32_t eniIpv6AddressQuantity() const { DARABONBA_PTR_GET_DEFAULT(eniIpv6AddressQuantity_, 0) };
    inline DescribeInstanceTypesResponseBodyInstanceTypesInstanceType& setEniIpv6AddressQuantity(int32_t eniIpv6AddressQuantity) { DARABONBA_PTR_SET_VALUE(eniIpv6AddressQuantity_, eniIpv6AddressQuantity) };


    // eniPrivateIpAddressQuantity Field Functions 
    bool hasEniPrivateIpAddressQuantity() const { return this->eniPrivateIpAddressQuantity_ != nullptr;};
    void deleteEniPrivateIpAddressQuantity() { this->eniPrivateIpAddressQuantity_ = nullptr;};
    inline int32_t eniPrivateIpAddressQuantity() const { DARABONBA_PTR_GET_DEFAULT(eniPrivateIpAddressQuantity_, 0) };
    inline DescribeInstanceTypesResponseBodyInstanceTypesInstanceType& setEniPrivateIpAddressQuantity(int32_t eniPrivateIpAddressQuantity) { DARABONBA_PTR_SET_VALUE(eniPrivateIpAddressQuantity_, eniPrivateIpAddressQuantity) };


    // eniQuantity Field Functions 
    bool hasEniQuantity() const { return this->eniQuantity_ != nullptr;};
    void deleteEniQuantity() { this->eniQuantity_ = nullptr;};
    inline int32_t eniQuantity() const { DARABONBA_PTR_GET_DEFAULT(eniQuantity_, 0) };
    inline DescribeInstanceTypesResponseBodyInstanceTypesInstanceType& setEniQuantity(int32_t eniQuantity) { DARABONBA_PTR_SET_VALUE(eniQuantity_, eniQuantity) };


    // eniTotalQuantity Field Functions 
    bool hasEniTotalQuantity() const { return this->eniTotalQuantity_ != nullptr;};
    void deleteEniTotalQuantity() { this->eniTotalQuantity_ = nullptr;};
    inline int32_t eniTotalQuantity() const { DARABONBA_PTR_GET_DEFAULT(eniTotalQuantity_, 0) };
    inline DescribeInstanceTypesResponseBodyInstanceTypesInstanceType& setEniTotalQuantity(int32_t eniTotalQuantity) { DARABONBA_PTR_SET_VALUE(eniTotalQuantity_, eniTotalQuantity) };


    // eniTrunkSupported Field Functions 
    bool hasEniTrunkSupported() const { return this->eniTrunkSupported_ != nullptr;};
    void deleteEniTrunkSupported() { this->eniTrunkSupported_ = nullptr;};
    inline bool eniTrunkSupported() const { DARABONBA_PTR_GET_DEFAULT(eniTrunkSupported_, false) };
    inline DescribeInstanceTypesResponseBodyInstanceTypesInstanceType& setEniTrunkSupported(bool eniTrunkSupported) { DARABONBA_PTR_SET_VALUE(eniTrunkSupported_, eniTrunkSupported) };


    // eriQuantity Field Functions 
    bool hasEriQuantity() const { return this->eriQuantity_ != nullptr;};
    void deleteEriQuantity() { this->eriQuantity_ = nullptr;};
    inline int32_t eriQuantity() const { DARABONBA_PTR_GET_DEFAULT(eriQuantity_, 0) };
    inline DescribeInstanceTypesResponseBodyInstanceTypesInstanceType& setEriQuantity(int32_t eriQuantity) { DARABONBA_PTR_SET_VALUE(eriQuantity_, eriQuantity) };


    // GPUAmount Field Functions 
    bool hasGPUAmount() const { return this->GPUAmount_ != nullptr;};
    void deleteGPUAmount() { this->GPUAmount_ = nullptr;};
    inline int32_t GPUAmount() const { DARABONBA_PTR_GET_DEFAULT(GPUAmount_, 0) };
    inline DescribeInstanceTypesResponseBodyInstanceTypesInstanceType& setGPUAmount(int32_t GPUAmount) { DARABONBA_PTR_SET_VALUE(GPUAmount_, GPUAmount) };


    // GPUMemorySize Field Functions 
    bool hasGPUMemorySize() const { return this->GPUMemorySize_ != nullptr;};
    void deleteGPUMemorySize() { this->GPUMemorySize_ = nullptr;};
    inline float GPUMemorySize() const { DARABONBA_PTR_GET_DEFAULT(GPUMemorySize_, 0.0) };
    inline DescribeInstanceTypesResponseBodyInstanceTypesInstanceType& setGPUMemorySize(float GPUMemorySize) { DARABONBA_PTR_SET_VALUE(GPUMemorySize_, GPUMemorySize) };


    // GPUSpec Field Functions 
    bool hasGPUSpec() const { return this->GPUSpec_ != nullptr;};
    void deleteGPUSpec() { this->GPUSpec_ = nullptr;};
    inline string GPUSpec() const { DARABONBA_PTR_GET_DEFAULT(GPUSpec_, "") };
    inline DescribeInstanceTypesResponseBodyInstanceTypesInstanceType& setGPUSpec(string GPUSpec) { DARABONBA_PTR_SET_VALUE(GPUSpec_, GPUSpec) };


    // initialCredit Field Functions 
    bool hasInitialCredit() const { return this->initialCredit_ != nullptr;};
    void deleteInitialCredit() { this->initialCredit_ = nullptr;};
    inline int32_t initialCredit() const { DARABONBA_PTR_GET_DEFAULT(initialCredit_, 0) };
    inline DescribeInstanceTypesResponseBodyInstanceTypesInstanceType& setInitialCredit(int32_t initialCredit) { DARABONBA_PTR_SET_VALUE(initialCredit_, initialCredit) };


    // instanceBandwidthRx Field Functions 
    bool hasInstanceBandwidthRx() const { return this->instanceBandwidthRx_ != nullptr;};
    void deleteInstanceBandwidthRx() { this->instanceBandwidthRx_ = nullptr;};
    inline int32_t instanceBandwidthRx() const { DARABONBA_PTR_GET_DEFAULT(instanceBandwidthRx_, 0) };
    inline DescribeInstanceTypesResponseBodyInstanceTypesInstanceType& setInstanceBandwidthRx(int32_t instanceBandwidthRx) { DARABONBA_PTR_SET_VALUE(instanceBandwidthRx_, instanceBandwidthRx) };


    // instanceBandwidthTx Field Functions 
    bool hasInstanceBandwidthTx() const { return this->instanceBandwidthTx_ != nullptr;};
    void deleteInstanceBandwidthTx() { this->instanceBandwidthTx_ = nullptr;};
    inline int32_t instanceBandwidthTx() const { DARABONBA_PTR_GET_DEFAULT(instanceBandwidthTx_, 0) };
    inline DescribeInstanceTypesResponseBodyInstanceTypesInstanceType& setInstanceBandwidthTx(int32_t instanceBandwidthTx) { DARABONBA_PTR_SET_VALUE(instanceBandwidthTx_, instanceBandwidthTx) };


    // instanceCategory Field Functions 
    bool hasInstanceCategory() const { return this->instanceCategory_ != nullptr;};
    void deleteInstanceCategory() { this->instanceCategory_ = nullptr;};
    inline string instanceCategory() const { DARABONBA_PTR_GET_DEFAULT(instanceCategory_, "") };
    inline DescribeInstanceTypesResponseBodyInstanceTypesInstanceType& setInstanceCategory(string instanceCategory) { DARABONBA_PTR_SET_VALUE(instanceCategory_, instanceCategory) };


    // instanceFamilyLevel Field Functions 
    bool hasInstanceFamilyLevel() const { return this->instanceFamilyLevel_ != nullptr;};
    void deleteInstanceFamilyLevel() { this->instanceFamilyLevel_ = nullptr;};
    inline string instanceFamilyLevel() const { DARABONBA_PTR_GET_DEFAULT(instanceFamilyLevel_, "") };
    inline DescribeInstanceTypesResponseBodyInstanceTypesInstanceType& setInstanceFamilyLevel(string instanceFamilyLevel) { DARABONBA_PTR_SET_VALUE(instanceFamilyLevel_, instanceFamilyLevel) };


    // instancePpsRx Field Functions 
    bool hasInstancePpsRx() const { return this->instancePpsRx_ != nullptr;};
    void deleteInstancePpsRx() { this->instancePpsRx_ = nullptr;};
    inline int64_t instancePpsRx() const { DARABONBA_PTR_GET_DEFAULT(instancePpsRx_, 0L) };
    inline DescribeInstanceTypesResponseBodyInstanceTypesInstanceType& setInstancePpsRx(int64_t instancePpsRx) { DARABONBA_PTR_SET_VALUE(instancePpsRx_, instancePpsRx) };


    // instancePpsTx Field Functions 
    bool hasInstancePpsTx() const { return this->instancePpsTx_ != nullptr;};
    void deleteInstancePpsTx() { this->instancePpsTx_ = nullptr;};
    inline int64_t instancePpsTx() const { DARABONBA_PTR_GET_DEFAULT(instancePpsTx_, 0L) };
    inline DescribeInstanceTypesResponseBodyInstanceTypesInstanceType& setInstancePpsTx(int64_t instancePpsTx) { DARABONBA_PTR_SET_VALUE(instancePpsTx_, instancePpsTx) };


    // instanceTypeFamily Field Functions 
    bool hasInstanceTypeFamily() const { return this->instanceTypeFamily_ != nullptr;};
    void deleteInstanceTypeFamily() { this->instanceTypeFamily_ = nullptr;};
    inline string instanceTypeFamily() const { DARABONBA_PTR_GET_DEFAULT(instanceTypeFamily_, "") };
    inline DescribeInstanceTypesResponseBodyInstanceTypesInstanceType& setInstanceTypeFamily(string instanceTypeFamily) { DARABONBA_PTR_SET_VALUE(instanceTypeFamily_, instanceTypeFamily) };


    // instanceTypeId Field Functions 
    bool hasInstanceTypeId() const { return this->instanceTypeId_ != nullptr;};
    void deleteInstanceTypeId() { this->instanceTypeId_ = nullptr;};
    inline string instanceTypeId() const { DARABONBA_PTR_GET_DEFAULT(instanceTypeId_, "") };
    inline DescribeInstanceTypesResponseBodyInstanceTypesInstanceType& setInstanceTypeId(string instanceTypeId) { DARABONBA_PTR_SET_VALUE(instanceTypeId_, instanceTypeId) };


    // jumboFrameSupport Field Functions 
    bool hasJumboFrameSupport() const { return this->jumboFrameSupport_ != nullptr;};
    void deleteJumboFrameSupport() { this->jumboFrameSupport_ = nullptr;};
    inline bool jumboFrameSupport() const { DARABONBA_PTR_GET_DEFAULT(jumboFrameSupport_, false) };
    inline DescribeInstanceTypesResponseBodyInstanceTypesInstanceType& setJumboFrameSupport(bool jumboFrameSupport) { DARABONBA_PTR_SET_VALUE(jumboFrameSupport_, jumboFrameSupport) };


    // localStorageAmount Field Functions 
    bool hasLocalStorageAmount() const { return this->localStorageAmount_ != nullptr;};
    void deleteLocalStorageAmount() { this->localStorageAmount_ = nullptr;};
    inline int32_t localStorageAmount() const { DARABONBA_PTR_GET_DEFAULT(localStorageAmount_, 0) };
    inline DescribeInstanceTypesResponseBodyInstanceTypesInstanceType& setLocalStorageAmount(int32_t localStorageAmount) { DARABONBA_PTR_SET_VALUE(localStorageAmount_, localStorageAmount) };


    // localStorageCapacity Field Functions 
    bool hasLocalStorageCapacity() const { return this->localStorageCapacity_ != nullptr;};
    void deleteLocalStorageCapacity() { this->localStorageCapacity_ = nullptr;};
    inline int64_t localStorageCapacity() const { DARABONBA_PTR_GET_DEFAULT(localStorageCapacity_, 0L) };
    inline DescribeInstanceTypesResponseBodyInstanceTypesInstanceType& setLocalStorageCapacity(int64_t localStorageCapacity) { DARABONBA_PTR_SET_VALUE(localStorageCapacity_, localStorageCapacity) };


    // localStorageCategory Field Functions 
    bool hasLocalStorageCategory() const { return this->localStorageCategory_ != nullptr;};
    void deleteLocalStorageCategory() { this->localStorageCategory_ = nullptr;};
    inline string localStorageCategory() const { DARABONBA_PTR_GET_DEFAULT(localStorageCategory_, "") };
    inline DescribeInstanceTypesResponseBodyInstanceTypesInstanceType& setLocalStorageCategory(string localStorageCategory) { DARABONBA_PTR_SET_VALUE(localStorageCategory_, localStorageCategory) };


    // maximumQueueNumberPerEni Field Functions 
    bool hasMaximumQueueNumberPerEni() const { return this->maximumQueueNumberPerEni_ != nullptr;};
    void deleteMaximumQueueNumberPerEni() { this->maximumQueueNumberPerEni_ = nullptr;};
    inline int32_t maximumQueueNumberPerEni() const { DARABONBA_PTR_GET_DEFAULT(maximumQueueNumberPerEni_, 0) };
    inline DescribeInstanceTypesResponseBodyInstanceTypesInstanceType& setMaximumQueueNumberPerEni(int32_t maximumQueueNumberPerEni) { DARABONBA_PTR_SET_VALUE(maximumQueueNumberPerEni_, maximumQueueNumberPerEni) };


    // memorySize Field Functions 
    bool hasMemorySize() const { return this->memorySize_ != nullptr;};
    void deleteMemorySize() { this->memorySize_ = nullptr;};
    inline float memorySize() const { DARABONBA_PTR_GET_DEFAULT(memorySize_, 0.0) };
    inline DescribeInstanceTypesResponseBodyInstanceTypesInstanceType& setMemorySize(float memorySize) { DARABONBA_PTR_SET_VALUE(memorySize_, memorySize) };


    // networkCardQuantity Field Functions 
    bool hasNetworkCardQuantity() const { return this->networkCardQuantity_ != nullptr;};
    void deleteNetworkCardQuantity() { this->networkCardQuantity_ = nullptr;};
    inline int32_t networkCardQuantity() const { DARABONBA_PTR_GET_DEFAULT(networkCardQuantity_, 0) };
    inline DescribeInstanceTypesResponseBodyInstanceTypesInstanceType& setNetworkCardQuantity(int32_t networkCardQuantity) { DARABONBA_PTR_SET_VALUE(networkCardQuantity_, networkCardQuantity) };


    // networkCards Field Functions 
    bool hasNetworkCards() const { return this->networkCards_ != nullptr;};
    void deleteNetworkCards() { this->networkCards_ = nullptr;};
    inline const Models::DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeNetworkCards & networkCards() const { DARABONBA_PTR_GET_CONST(networkCards_, Models::DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeNetworkCards) };
    inline Models::DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeNetworkCards networkCards() { DARABONBA_PTR_GET(networkCards_, Models::DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeNetworkCards) };
    inline DescribeInstanceTypesResponseBodyInstanceTypesInstanceType& setNetworkCards(const Models::DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeNetworkCards & networkCards) { DARABONBA_PTR_SET_VALUE(networkCards_, networkCards) };
    inline DescribeInstanceTypesResponseBodyInstanceTypesInstanceType& setNetworkCards(Models::DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeNetworkCards && networkCards) { DARABONBA_PTR_SET_RVALUE(networkCards_, networkCards) };


    // networkEncryptionSupport Field Functions 
    bool hasNetworkEncryptionSupport() const { return this->networkEncryptionSupport_ != nullptr;};
    void deleteNetworkEncryptionSupport() { this->networkEncryptionSupport_ = nullptr;};
    inline bool networkEncryptionSupport() const { DARABONBA_PTR_GET_DEFAULT(networkEncryptionSupport_, false) };
    inline DescribeInstanceTypesResponseBodyInstanceTypesInstanceType& setNetworkEncryptionSupport(bool networkEncryptionSupport) { DARABONBA_PTR_SET_VALUE(networkEncryptionSupport_, networkEncryptionSupport) };


    // networkInfo Field Functions 
    bool hasNetworkInfo() const { return this->networkInfo_ != nullptr;};
    void deleteNetworkInfo() { this->networkInfo_ = nullptr;};
    inline const Models::DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeNetworkInfo & networkInfo() const { DARABONBA_PTR_GET_CONST(networkInfo_, Models::DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeNetworkInfo) };
    inline Models::DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeNetworkInfo networkInfo() { DARABONBA_PTR_GET(networkInfo_, Models::DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeNetworkInfo) };
    inline DescribeInstanceTypesResponseBodyInstanceTypesInstanceType& setNetworkInfo(const Models::DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeNetworkInfo & networkInfo) { DARABONBA_PTR_SET_VALUE(networkInfo_, networkInfo) };
    inline DescribeInstanceTypesResponseBodyInstanceTypesInstanceType& setNetworkInfo(Models::DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeNetworkInfo && networkInfo) { DARABONBA_PTR_SET_RVALUE(networkInfo_, networkInfo) };


    // nvmeSupport Field Functions 
    bool hasNvmeSupport() const { return this->nvmeSupport_ != nullptr;};
    void deleteNvmeSupport() { this->nvmeSupport_ = nullptr;};
    inline string nvmeSupport() const { DARABONBA_PTR_GET_DEFAULT(nvmeSupport_, "") };
    inline DescribeInstanceTypesResponseBodyInstanceTypesInstanceType& setNvmeSupport(string nvmeSupport) { DARABONBA_PTR_SET_VALUE(nvmeSupport_, nvmeSupport) };


    // physicalProcessorModel Field Functions 
    bool hasPhysicalProcessorModel() const { return this->physicalProcessorModel_ != nullptr;};
    void deletePhysicalProcessorModel() { this->physicalProcessorModel_ = nullptr;};
    inline string physicalProcessorModel() const { DARABONBA_PTR_GET_DEFAULT(physicalProcessorModel_, "") };
    inline DescribeInstanceTypesResponseBodyInstanceTypesInstanceType& setPhysicalProcessorModel(string physicalProcessorModel) { DARABONBA_PTR_SET_VALUE(physicalProcessorModel_, physicalProcessorModel) };


    // primaryEniQueueNumber Field Functions 
    bool hasPrimaryEniQueueNumber() const { return this->primaryEniQueueNumber_ != nullptr;};
    void deletePrimaryEniQueueNumber() { this->primaryEniQueueNumber_ = nullptr;};
    inline int32_t primaryEniQueueNumber() const { DARABONBA_PTR_GET_DEFAULT(primaryEniQueueNumber_, 0) };
    inline DescribeInstanceTypesResponseBodyInstanceTypesInstanceType& setPrimaryEniQueueNumber(int32_t primaryEniQueueNumber) { DARABONBA_PTR_SET_VALUE(primaryEniQueueNumber_, primaryEniQueueNumber) };


    // queuePairNumber Field Functions 
    bool hasQueuePairNumber() const { return this->queuePairNumber_ != nullptr;};
    void deleteQueuePairNumber() { this->queuePairNumber_ = nullptr;};
    inline int32_t queuePairNumber() const { DARABONBA_PTR_GET_DEFAULT(queuePairNumber_, 0) };
    inline DescribeInstanceTypesResponseBodyInstanceTypesInstanceType& setQueuePairNumber(int32_t queuePairNumber) { DARABONBA_PTR_SET_VALUE(queuePairNumber_, queuePairNumber) };


    // secondaryEniQueueNumber Field Functions 
    bool hasSecondaryEniQueueNumber() const { return this->secondaryEniQueueNumber_ != nullptr;};
    void deleteSecondaryEniQueueNumber() { this->secondaryEniQueueNumber_ = nullptr;};
    inline int32_t secondaryEniQueueNumber() const { DARABONBA_PTR_GET_DEFAULT(secondaryEniQueueNumber_, 0) };
    inline DescribeInstanceTypesResponseBodyInstanceTypesInstanceType& setSecondaryEniQueueNumber(int32_t secondaryEniQueueNumber) { DARABONBA_PTR_SET_VALUE(secondaryEniQueueNumber_, secondaryEniQueueNumber) };


    // supportedBootModes Field Functions 
    bool hasSupportedBootModes() const { return this->supportedBootModes_ != nullptr;};
    void deleteSupportedBootModes() { this->supportedBootModes_ = nullptr;};
    inline const Models::DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeSupportedBootModes & supportedBootModes() const { DARABONBA_PTR_GET_CONST(supportedBootModes_, Models::DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeSupportedBootModes) };
    inline Models::DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeSupportedBootModes supportedBootModes() { DARABONBA_PTR_GET(supportedBootModes_, Models::DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeSupportedBootModes) };
    inline DescribeInstanceTypesResponseBodyInstanceTypesInstanceType& setSupportedBootModes(const Models::DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeSupportedBootModes & supportedBootModes) { DARABONBA_PTR_SET_VALUE(supportedBootModes_, supportedBootModes) };
    inline DescribeInstanceTypesResponseBodyInstanceTypesInstanceType& setSupportedBootModes(Models::DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeSupportedBootModes && supportedBootModes) { DARABONBA_PTR_SET_RVALUE(supportedBootModes_, supportedBootModes) };


    // totalEniQueueQuantity Field Functions 
    bool hasTotalEniQueueQuantity() const { return this->totalEniQueueQuantity_ != nullptr;};
    void deleteTotalEniQueueQuantity() { this->totalEniQueueQuantity_ = nullptr;};
    inline int32_t totalEniQueueQuantity() const { DARABONBA_PTR_GET_DEFAULT(totalEniQueueQuantity_, 0) };
    inline DescribeInstanceTypesResponseBodyInstanceTypesInstanceType& setTotalEniQueueQuantity(int32_t totalEniQueueQuantity) { DARABONBA_PTR_SET_VALUE(totalEniQueueQuantity_, totalEniQueueQuantity) };


  protected:
    // The list of specification attributes.
    std::shared_ptr<Models::DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeAttributes> attributes_ = nullptr;
    // The baseline vCPU computing performance (overall baseline performance of all vCPUs) per t5 or t6 burstable instance.
    std::shared_ptr<int32_t> baselineCredit_ = nullptr;
    // The clock supported by the specification.
    std::shared_ptr<Models::DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeClock> clock_ = nullptr;
    // The CPU architecture. Valid values:
    // 
    // *   X86
    // *   ARM
    std::shared_ptr<string> cpuArchitecture_ = nullptr;
    // The number of vCPUs.
    std::shared_ptr<int32_t> cpuCoreCount_ = nullptr;
    // The CPU options.
    std::shared_ptr<Models::DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeCpuOptions> cpuOptions_ = nullptr;
    // The CPU base frequency. Unit: GHz.
    std::shared_ptr<float> cpuSpeedFrequency_ = nullptr;
    // The CPU turbo frequency. Unit: GHz.
    std::shared_ptr<float> cpuTurboFrequency_ = nullptr;
    // The maximum number of cloud disks per instance.
    std::shared_ptr<int32_t> diskQuantity_ = nullptr;
    // >  This parameter is not publicly available.
    std::shared_ptr<Models::DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeEnhancedNetwork> enhancedNetwork_ = nullptr;
    // The maximum number of IPv6 addresses per ENI.
    std::shared_ptr<int32_t> eniIpv6AddressQuantity_ = nullptr;
    // The maximum number of IPv4 addresses per ENI.
    std::shared_ptr<int32_t> eniPrivateIpAddressQuantity_ = nullptr;
    // The maximum number of ENIs per instance.
    std::shared_ptr<int32_t> eniQuantity_ = nullptr;
    // The maximum number of ENIs, including primary, secondary, and trunk ENIs.
    // 
    // >  This parameter is in invitational preview and is not publicly available.
    std::shared_ptr<int32_t> eniTotalQuantity_ = nullptr;
    // Indicates whether trunk ENIs are supported.
    // 
    // >  This parameter is in invitational preview and is not publicly available.
    std::shared_ptr<bool> eniTrunkSupported_ = nullptr;
    // The number of ERIs.
    // 
    // >  This parameter is in invitational preview and is not publicly available.
    std::shared_ptr<int32_t> eriQuantity_ = nullptr;
    // The number of GPUs.
    std::shared_ptr<int32_t> GPUAmount_ = nullptr;
    // The amount of GPU memory per GPU. Unit: GiB
    std::shared_ptr<float> GPUMemorySize_ = nullptr;
    // The GPU model.
    std::shared_ptr<string> GPUSpec_ = nullptr;
    // The initial vCPU credits per t5 or t6 burstable instance.
    std::shared_ptr<int32_t> initialCredit_ = nullptr;
    // The maximum inbound internal bandwidth. Unit: Kbit/s.
    std::shared_ptr<int32_t> instanceBandwidthRx_ = nullptr;
    // The maximum outbound internal bandwidth. Unit: Kbit/s.
    std::shared_ptr<int32_t> instanceBandwidthTx_ = nullptr;
    // The category of the instance type. Valid values:
    // 
    // *   General-purpose
    // *   Compute-optimized
    // *   Memory-optimized
    // *   Big data
    // *   Local SSDs
    // *   High Clock Speed
    // *   Enhanced
    // *   Shared
    // *   Compute-optimized with GPU
    // *   Visual Compute-optimized
    // *   Heterogeneous Service
    // *   Compute-optimized with FPGA
    // *   Compute-optimized with NPU
    // *   ECS Bare Metal
    // *   Super Computing Cluster
    // *   High Performance Compute
    std::shared_ptr<string> instanceCategory_ = nullptr;
    // The level of the instance family. Valid values:
    // 
    // *   EntryLevel: entry level (shared).
    // *   EnterpriseLevel: enterprise level.
    // *   CreditEntryLevel: credit-based entry level. For more information, see [Overview](https://help.aliyun.com/document_detail/59977.html).
    std::shared_ptr<string> instanceFamilyLevel_ = nullptr;
    // The inbound packet forwarding rate over the internal network. Unit: pps.
    std::shared_ptr<int64_t> instancePpsRx_ = nullptr;
    // The outbound packet forwarding rate over the internal network. Unit: pps.
    std::shared_ptr<int64_t> instancePpsTx_ = nullptr;
    // The instance family.
    std::shared_ptr<string> instanceTypeFamily_ = nullptr;
    // The ID of the instance type.
    std::shared_ptr<string> instanceTypeId_ = nullptr;
    // Indicates whether jumbo frames are supported.
    std::shared_ptr<bool> jumboFrameSupport_ = nullptr;
    // The number of local disks per instance.
    std::shared_ptr<int32_t> localStorageAmount_ = nullptr;
    // The capacity of each local disk. Unit: GiB
    std::shared_ptr<int64_t> localStorageCapacity_ = nullptr;
    // The category of local disks. For more information, see [Local disks](https://help.aliyun.com/document_detail/63138.html). Valid values:
    // 
    // *   local_hdd_pro: local SATA HDDs, which are attached to d1ne or d1 instances
    // *   local_ssd_pro: local NVMe SSDs, which are attached to i2, i2g, i1, ga1, or gn5 instances
    std::shared_ptr<string> localStorageCategory_ = nullptr;
    // The maximum number of queues per ENI, including primary and secondary ENIs.
    std::shared_ptr<int32_t> maximumQueueNumberPerEni_ = nullptr;
    // The memory size. Unit: GiB
    std::shared_ptr<float> memorySize_ = nullptr;
    // The maximum number of network cards that the instance type supports.
    std::shared_ptr<int32_t> networkCardQuantity_ = nullptr;
    // The information about the network cards.
    std::shared_ptr<Models::DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeNetworkCards> networkCards_ = nullptr;
    // Indicates whether to allow network traffic transmitted over virtual private clouds (VPCs) to be encrypted. Valid values:
    // 
    // *   true
    // *   false
    // 
    // >  This parameter is in invitational preview and is not publicly available.
    std::shared_ptr<bool> networkEncryptionSupport_ = nullptr;
    std::shared_ptr<Models::DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeNetworkInfo> networkInfo_ = nullptr;
    // Indicates whether cloud disks can be attached by using the NVMe protocol. Valid values:
    // 
    // *   required: Cloud disks can be attached by using the NVMe protocol.
    // *   unsupported: Cloud disks cannot be attached by using the NVMe protocol.
    std::shared_ptr<string> nvmeSupport_ = nullptr;
    // The CPU model.
    std::shared_ptr<string> physicalProcessorModel_ = nullptr;
    // The default number of queues per primary ENI.
    std::shared_ptr<int32_t> primaryEniQueueNumber_ = nullptr;
    // The maximum number of QPs per instance, which varies based on the instance type.
    // 
    // *   For enterprise-level CPU-based instance types, the value of `QueuePairNumber` is the maximum number of QPs per instance.
    // *   For GPU-accelerated instance types, the maximum number of QPs per instance is calculated by using the following formula: Value of `QueuePairNumber` × Value of NetworkCardQuantity.
    std::shared_ptr<int32_t> queuePairNumber_ = nullptr;
    // The default number of queues per secondary ENI.
    std::shared_ptr<int32_t> secondaryEniQueueNumber_ = nullptr;
    // The boot modes supported by the instance type.
    std::shared_ptr<Models::DescribeInstanceTypesResponseBodyInstanceTypesInstanceTypeSupportedBootModes> supportedBootModes_ = nullptr;
    // The maximum number of queues on ENIs that the instance type supports.
    std::shared_ptr<int32_t> totalEniQueueQuantity_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
