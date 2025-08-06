// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCETYPESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCETYPESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeInstanceTypesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceTypesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CpuArchitecture, cpuArchitecture_);
      DARABONBA_PTR_TO_JSON(CpuArchitectures, cpuArchitectures_);
      DARABONBA_PTR_TO_JSON(GPUSpec, GPUSpec_);
      DARABONBA_PTR_TO_JSON(GpuSpecs, gpuSpecs_);
      DARABONBA_PTR_TO_JSON(InstanceCategories, instanceCategories_);
      DARABONBA_PTR_TO_JSON(InstanceCategory, instanceCategory_);
      DARABONBA_PTR_TO_JSON(InstanceFamilyLevel, instanceFamilyLevel_);
      DARABONBA_PTR_TO_JSON(InstanceTypeFamilies, instanceTypeFamilies_);
      DARABONBA_PTR_TO_JSON(InstanceTypeFamily, instanceTypeFamily_);
      DARABONBA_PTR_TO_JSON(InstanceTypes, instanceTypes_);
      DARABONBA_PTR_TO_JSON(LocalStorageCategories, localStorageCategories_);
      DARABONBA_PTR_TO_JSON(LocalStorageCategory, localStorageCategory_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(MaximumCpuCoreCount, maximumCpuCoreCount_);
      DARABONBA_PTR_TO_JSON(MaximumCpuSpeedFrequency, maximumCpuSpeedFrequency_);
      DARABONBA_PTR_TO_JSON(MaximumCpuTurboFrequency, maximumCpuTurboFrequency_);
      DARABONBA_PTR_TO_JSON(MaximumGPUAmount, maximumGPUAmount_);
      DARABONBA_PTR_TO_JSON(MaximumMemorySize, maximumMemorySize_);
      DARABONBA_PTR_TO_JSON(MinimumBaselineCredit, minimumBaselineCredit_);
      DARABONBA_PTR_TO_JSON(MinimumCpuCoreCount, minimumCpuCoreCount_);
      DARABONBA_PTR_TO_JSON(MinimumCpuSpeedFrequency, minimumCpuSpeedFrequency_);
      DARABONBA_PTR_TO_JSON(MinimumCpuTurboFrequency, minimumCpuTurboFrequency_);
      DARABONBA_PTR_TO_JSON(MinimumDiskQuantity, minimumDiskQuantity_);
      DARABONBA_PTR_TO_JSON(MinimumEniIpv6AddressQuantity, minimumEniIpv6AddressQuantity_);
      DARABONBA_PTR_TO_JSON(MinimumEniPrivateIpAddressQuantity, minimumEniPrivateIpAddressQuantity_);
      DARABONBA_PTR_TO_JSON(MinimumEniQuantity, minimumEniQuantity_);
      DARABONBA_PTR_TO_JSON(MinimumEriQuantity, minimumEriQuantity_);
      DARABONBA_PTR_TO_JSON(MinimumGPUAmount, minimumGPUAmount_);
      DARABONBA_PTR_TO_JSON(MinimumInitialCredit, minimumInitialCredit_);
      DARABONBA_PTR_TO_JSON(MinimumInstanceBandwidthRx, minimumInstanceBandwidthRx_);
      DARABONBA_PTR_TO_JSON(MinimumInstanceBandwidthTx, minimumInstanceBandwidthTx_);
      DARABONBA_PTR_TO_JSON(MinimumInstancePpsRx, minimumInstancePpsRx_);
      DARABONBA_PTR_TO_JSON(MinimumInstancePpsTx, minimumInstancePpsTx_);
      DARABONBA_PTR_TO_JSON(MinimumLocalStorageAmount, minimumLocalStorageAmount_);
      DARABONBA_PTR_TO_JSON(MinimumLocalStorageCapacity, minimumLocalStorageCapacity_);
      DARABONBA_PTR_TO_JSON(MinimumMemorySize, minimumMemorySize_);
      DARABONBA_PTR_TO_JSON(MinimumPrimaryEniQueueNumber, minimumPrimaryEniQueueNumber_);
      DARABONBA_PTR_TO_JSON(MinimumQueuePairNumber, minimumQueuePairNumber_);
      DARABONBA_PTR_TO_JSON(MinimumSecondaryEniQueueNumber, minimumSecondaryEniQueueNumber_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(NvmeSupport, nvmeSupport_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PhysicalProcessorModel, physicalProcessorModel_);
      DARABONBA_PTR_TO_JSON(PhysicalProcessorModels, physicalProcessorModels_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceTypesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CpuArchitecture, cpuArchitecture_);
      DARABONBA_PTR_FROM_JSON(CpuArchitectures, cpuArchitectures_);
      DARABONBA_PTR_FROM_JSON(GPUSpec, GPUSpec_);
      DARABONBA_PTR_FROM_JSON(GpuSpecs, gpuSpecs_);
      DARABONBA_PTR_FROM_JSON(InstanceCategories, instanceCategories_);
      DARABONBA_PTR_FROM_JSON(InstanceCategory, instanceCategory_);
      DARABONBA_PTR_FROM_JSON(InstanceFamilyLevel, instanceFamilyLevel_);
      DARABONBA_PTR_FROM_JSON(InstanceTypeFamilies, instanceTypeFamilies_);
      DARABONBA_PTR_FROM_JSON(InstanceTypeFamily, instanceTypeFamily_);
      DARABONBA_PTR_FROM_JSON(InstanceTypes, instanceTypes_);
      DARABONBA_PTR_FROM_JSON(LocalStorageCategories, localStorageCategories_);
      DARABONBA_PTR_FROM_JSON(LocalStorageCategory, localStorageCategory_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(MaximumCpuCoreCount, maximumCpuCoreCount_);
      DARABONBA_PTR_FROM_JSON(MaximumCpuSpeedFrequency, maximumCpuSpeedFrequency_);
      DARABONBA_PTR_FROM_JSON(MaximumCpuTurboFrequency, maximumCpuTurboFrequency_);
      DARABONBA_PTR_FROM_JSON(MaximumGPUAmount, maximumGPUAmount_);
      DARABONBA_PTR_FROM_JSON(MaximumMemorySize, maximumMemorySize_);
      DARABONBA_PTR_FROM_JSON(MinimumBaselineCredit, minimumBaselineCredit_);
      DARABONBA_PTR_FROM_JSON(MinimumCpuCoreCount, minimumCpuCoreCount_);
      DARABONBA_PTR_FROM_JSON(MinimumCpuSpeedFrequency, minimumCpuSpeedFrequency_);
      DARABONBA_PTR_FROM_JSON(MinimumCpuTurboFrequency, minimumCpuTurboFrequency_);
      DARABONBA_PTR_FROM_JSON(MinimumDiskQuantity, minimumDiskQuantity_);
      DARABONBA_PTR_FROM_JSON(MinimumEniIpv6AddressQuantity, minimumEniIpv6AddressQuantity_);
      DARABONBA_PTR_FROM_JSON(MinimumEniPrivateIpAddressQuantity, minimumEniPrivateIpAddressQuantity_);
      DARABONBA_PTR_FROM_JSON(MinimumEniQuantity, minimumEniQuantity_);
      DARABONBA_PTR_FROM_JSON(MinimumEriQuantity, minimumEriQuantity_);
      DARABONBA_PTR_FROM_JSON(MinimumGPUAmount, minimumGPUAmount_);
      DARABONBA_PTR_FROM_JSON(MinimumInitialCredit, minimumInitialCredit_);
      DARABONBA_PTR_FROM_JSON(MinimumInstanceBandwidthRx, minimumInstanceBandwidthRx_);
      DARABONBA_PTR_FROM_JSON(MinimumInstanceBandwidthTx, minimumInstanceBandwidthTx_);
      DARABONBA_PTR_FROM_JSON(MinimumInstancePpsRx, minimumInstancePpsRx_);
      DARABONBA_PTR_FROM_JSON(MinimumInstancePpsTx, minimumInstancePpsTx_);
      DARABONBA_PTR_FROM_JSON(MinimumLocalStorageAmount, minimumLocalStorageAmount_);
      DARABONBA_PTR_FROM_JSON(MinimumLocalStorageCapacity, minimumLocalStorageCapacity_);
      DARABONBA_PTR_FROM_JSON(MinimumMemorySize, minimumMemorySize_);
      DARABONBA_PTR_FROM_JSON(MinimumPrimaryEniQueueNumber, minimumPrimaryEniQueueNumber_);
      DARABONBA_PTR_FROM_JSON(MinimumQueuePairNumber, minimumQueuePairNumber_);
      DARABONBA_PTR_FROM_JSON(MinimumSecondaryEniQueueNumber, minimumSecondaryEniQueueNumber_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(NvmeSupport, nvmeSupport_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PhysicalProcessorModel, physicalProcessorModel_);
      DARABONBA_PTR_FROM_JSON(PhysicalProcessorModels, physicalProcessorModels_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    DescribeInstanceTypesRequest() = default ;
    DescribeInstanceTypesRequest(const DescribeInstanceTypesRequest &) = default ;
    DescribeInstanceTypesRequest(DescribeInstanceTypesRequest &&) = default ;
    DescribeInstanceTypesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceTypesRequest() = default ;
    DescribeInstanceTypesRequest& operator=(const DescribeInstanceTypesRequest &) = default ;
    DescribeInstanceTypesRequest& operator=(DescribeInstanceTypesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cpuArchitecture_ != nullptr
        && this->cpuArchitectures_ != nullptr && this->GPUSpec_ != nullptr && this->gpuSpecs_ != nullptr && this->instanceCategories_ != nullptr && this->instanceCategory_ != nullptr
        && this->instanceFamilyLevel_ != nullptr && this->instanceTypeFamilies_ != nullptr && this->instanceTypeFamily_ != nullptr && this->instanceTypes_ != nullptr && this->localStorageCategories_ != nullptr
        && this->localStorageCategory_ != nullptr && this->maxResults_ != nullptr && this->maximumCpuCoreCount_ != nullptr && this->maximumCpuSpeedFrequency_ != nullptr && this->maximumCpuTurboFrequency_ != nullptr
        && this->maximumGPUAmount_ != nullptr && this->maximumMemorySize_ != nullptr && this->minimumBaselineCredit_ != nullptr && this->minimumCpuCoreCount_ != nullptr && this->minimumCpuSpeedFrequency_ != nullptr
        && this->minimumCpuTurboFrequency_ != nullptr && this->minimumDiskQuantity_ != nullptr && this->minimumEniIpv6AddressQuantity_ != nullptr && this->minimumEniPrivateIpAddressQuantity_ != nullptr && this->minimumEniQuantity_ != nullptr
        && this->minimumEriQuantity_ != nullptr && this->minimumGPUAmount_ != nullptr && this->minimumInitialCredit_ != nullptr && this->minimumInstanceBandwidthRx_ != nullptr && this->minimumInstanceBandwidthTx_ != nullptr
        && this->minimumInstancePpsRx_ != nullptr && this->minimumInstancePpsTx_ != nullptr && this->minimumLocalStorageAmount_ != nullptr && this->minimumLocalStorageCapacity_ != nullptr && this->minimumMemorySize_ != nullptr
        && this->minimumPrimaryEniQueueNumber_ != nullptr && this->minimumQueuePairNumber_ != nullptr && this->minimumSecondaryEniQueueNumber_ != nullptr && this->nextToken_ != nullptr && this->nvmeSupport_ != nullptr
        && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->physicalProcessorModel_ != nullptr && this->physicalProcessorModels_ != nullptr && this->resourceOwnerAccount_ != nullptr
        && this->resourceOwnerId_ != nullptr; };
    // cpuArchitecture Field Functions 
    bool hasCpuArchitecture() const { return this->cpuArchitecture_ != nullptr;};
    void deleteCpuArchitecture() { this->cpuArchitecture_ = nullptr;};
    inline string cpuArchitecture() const { DARABONBA_PTR_GET_DEFAULT(cpuArchitecture_, "") };
    inline DescribeInstanceTypesRequest& setCpuArchitecture(string cpuArchitecture) { DARABONBA_PTR_SET_VALUE(cpuArchitecture_, cpuArchitecture) };


    // cpuArchitectures Field Functions 
    bool hasCpuArchitectures() const { return this->cpuArchitectures_ != nullptr;};
    void deleteCpuArchitectures() { this->cpuArchitectures_ = nullptr;};
    inline const vector<string> & cpuArchitectures() const { DARABONBA_PTR_GET_CONST(cpuArchitectures_, vector<string>) };
    inline vector<string> cpuArchitectures() { DARABONBA_PTR_GET(cpuArchitectures_, vector<string>) };
    inline DescribeInstanceTypesRequest& setCpuArchitectures(const vector<string> & cpuArchitectures) { DARABONBA_PTR_SET_VALUE(cpuArchitectures_, cpuArchitectures) };
    inline DescribeInstanceTypesRequest& setCpuArchitectures(vector<string> && cpuArchitectures) { DARABONBA_PTR_SET_RVALUE(cpuArchitectures_, cpuArchitectures) };


    // GPUSpec Field Functions 
    bool hasGPUSpec() const { return this->GPUSpec_ != nullptr;};
    void deleteGPUSpec() { this->GPUSpec_ = nullptr;};
    inline string GPUSpec() const { DARABONBA_PTR_GET_DEFAULT(GPUSpec_, "") };
    inline DescribeInstanceTypesRequest& setGPUSpec(string GPUSpec) { DARABONBA_PTR_SET_VALUE(GPUSpec_, GPUSpec) };


    // gpuSpecs Field Functions 
    bool hasGpuSpecs() const { return this->gpuSpecs_ != nullptr;};
    void deleteGpuSpecs() { this->gpuSpecs_ = nullptr;};
    inline const vector<string> & gpuSpecs() const { DARABONBA_PTR_GET_CONST(gpuSpecs_, vector<string>) };
    inline vector<string> gpuSpecs() { DARABONBA_PTR_GET(gpuSpecs_, vector<string>) };
    inline DescribeInstanceTypesRequest& setGpuSpecs(const vector<string> & gpuSpecs) { DARABONBA_PTR_SET_VALUE(gpuSpecs_, gpuSpecs) };
    inline DescribeInstanceTypesRequest& setGpuSpecs(vector<string> && gpuSpecs) { DARABONBA_PTR_SET_RVALUE(gpuSpecs_, gpuSpecs) };


    // instanceCategories Field Functions 
    bool hasInstanceCategories() const { return this->instanceCategories_ != nullptr;};
    void deleteInstanceCategories() { this->instanceCategories_ = nullptr;};
    inline const vector<string> & instanceCategories() const { DARABONBA_PTR_GET_CONST(instanceCategories_, vector<string>) };
    inline vector<string> instanceCategories() { DARABONBA_PTR_GET(instanceCategories_, vector<string>) };
    inline DescribeInstanceTypesRequest& setInstanceCategories(const vector<string> & instanceCategories) { DARABONBA_PTR_SET_VALUE(instanceCategories_, instanceCategories) };
    inline DescribeInstanceTypesRequest& setInstanceCategories(vector<string> && instanceCategories) { DARABONBA_PTR_SET_RVALUE(instanceCategories_, instanceCategories) };


    // instanceCategory Field Functions 
    bool hasInstanceCategory() const { return this->instanceCategory_ != nullptr;};
    void deleteInstanceCategory() { this->instanceCategory_ = nullptr;};
    inline string instanceCategory() const { DARABONBA_PTR_GET_DEFAULT(instanceCategory_, "") };
    inline DescribeInstanceTypesRequest& setInstanceCategory(string instanceCategory) { DARABONBA_PTR_SET_VALUE(instanceCategory_, instanceCategory) };


    // instanceFamilyLevel Field Functions 
    bool hasInstanceFamilyLevel() const { return this->instanceFamilyLevel_ != nullptr;};
    void deleteInstanceFamilyLevel() { this->instanceFamilyLevel_ = nullptr;};
    inline string instanceFamilyLevel() const { DARABONBA_PTR_GET_DEFAULT(instanceFamilyLevel_, "") };
    inline DescribeInstanceTypesRequest& setInstanceFamilyLevel(string instanceFamilyLevel) { DARABONBA_PTR_SET_VALUE(instanceFamilyLevel_, instanceFamilyLevel) };


    // instanceTypeFamilies Field Functions 
    bool hasInstanceTypeFamilies() const { return this->instanceTypeFamilies_ != nullptr;};
    void deleteInstanceTypeFamilies() { this->instanceTypeFamilies_ = nullptr;};
    inline const vector<string> & instanceTypeFamilies() const { DARABONBA_PTR_GET_CONST(instanceTypeFamilies_, vector<string>) };
    inline vector<string> instanceTypeFamilies() { DARABONBA_PTR_GET(instanceTypeFamilies_, vector<string>) };
    inline DescribeInstanceTypesRequest& setInstanceTypeFamilies(const vector<string> & instanceTypeFamilies) { DARABONBA_PTR_SET_VALUE(instanceTypeFamilies_, instanceTypeFamilies) };
    inline DescribeInstanceTypesRequest& setInstanceTypeFamilies(vector<string> && instanceTypeFamilies) { DARABONBA_PTR_SET_RVALUE(instanceTypeFamilies_, instanceTypeFamilies) };


    // instanceTypeFamily Field Functions 
    bool hasInstanceTypeFamily() const { return this->instanceTypeFamily_ != nullptr;};
    void deleteInstanceTypeFamily() { this->instanceTypeFamily_ = nullptr;};
    inline string instanceTypeFamily() const { DARABONBA_PTR_GET_DEFAULT(instanceTypeFamily_, "") };
    inline DescribeInstanceTypesRequest& setInstanceTypeFamily(string instanceTypeFamily) { DARABONBA_PTR_SET_VALUE(instanceTypeFamily_, instanceTypeFamily) };


    // instanceTypes Field Functions 
    bool hasInstanceTypes() const { return this->instanceTypes_ != nullptr;};
    void deleteInstanceTypes() { this->instanceTypes_ = nullptr;};
    inline const vector<string> & instanceTypes() const { DARABONBA_PTR_GET_CONST(instanceTypes_, vector<string>) };
    inline vector<string> instanceTypes() { DARABONBA_PTR_GET(instanceTypes_, vector<string>) };
    inline DescribeInstanceTypesRequest& setInstanceTypes(const vector<string> & instanceTypes) { DARABONBA_PTR_SET_VALUE(instanceTypes_, instanceTypes) };
    inline DescribeInstanceTypesRequest& setInstanceTypes(vector<string> && instanceTypes) { DARABONBA_PTR_SET_RVALUE(instanceTypes_, instanceTypes) };


    // localStorageCategories Field Functions 
    bool hasLocalStorageCategories() const { return this->localStorageCategories_ != nullptr;};
    void deleteLocalStorageCategories() { this->localStorageCategories_ = nullptr;};
    inline const vector<string> & localStorageCategories() const { DARABONBA_PTR_GET_CONST(localStorageCategories_, vector<string>) };
    inline vector<string> localStorageCategories() { DARABONBA_PTR_GET(localStorageCategories_, vector<string>) };
    inline DescribeInstanceTypesRequest& setLocalStorageCategories(const vector<string> & localStorageCategories) { DARABONBA_PTR_SET_VALUE(localStorageCategories_, localStorageCategories) };
    inline DescribeInstanceTypesRequest& setLocalStorageCategories(vector<string> && localStorageCategories) { DARABONBA_PTR_SET_RVALUE(localStorageCategories_, localStorageCategories) };


    // localStorageCategory Field Functions 
    bool hasLocalStorageCategory() const { return this->localStorageCategory_ != nullptr;};
    void deleteLocalStorageCategory() { this->localStorageCategory_ = nullptr;};
    inline string localStorageCategory() const { DARABONBA_PTR_GET_DEFAULT(localStorageCategory_, "") };
    inline DescribeInstanceTypesRequest& setLocalStorageCategory(string localStorageCategory) { DARABONBA_PTR_SET_VALUE(localStorageCategory_, localStorageCategory) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline DescribeInstanceTypesRequest& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // maximumCpuCoreCount Field Functions 
    bool hasMaximumCpuCoreCount() const { return this->maximumCpuCoreCount_ != nullptr;};
    void deleteMaximumCpuCoreCount() { this->maximumCpuCoreCount_ = nullptr;};
    inline int32_t maximumCpuCoreCount() const { DARABONBA_PTR_GET_DEFAULT(maximumCpuCoreCount_, 0) };
    inline DescribeInstanceTypesRequest& setMaximumCpuCoreCount(int32_t maximumCpuCoreCount) { DARABONBA_PTR_SET_VALUE(maximumCpuCoreCount_, maximumCpuCoreCount) };


    // maximumCpuSpeedFrequency Field Functions 
    bool hasMaximumCpuSpeedFrequency() const { return this->maximumCpuSpeedFrequency_ != nullptr;};
    void deleteMaximumCpuSpeedFrequency() { this->maximumCpuSpeedFrequency_ = nullptr;};
    inline float maximumCpuSpeedFrequency() const { DARABONBA_PTR_GET_DEFAULT(maximumCpuSpeedFrequency_, 0.0) };
    inline DescribeInstanceTypesRequest& setMaximumCpuSpeedFrequency(float maximumCpuSpeedFrequency) { DARABONBA_PTR_SET_VALUE(maximumCpuSpeedFrequency_, maximumCpuSpeedFrequency) };


    // maximumCpuTurboFrequency Field Functions 
    bool hasMaximumCpuTurboFrequency() const { return this->maximumCpuTurboFrequency_ != nullptr;};
    void deleteMaximumCpuTurboFrequency() { this->maximumCpuTurboFrequency_ = nullptr;};
    inline float maximumCpuTurboFrequency() const { DARABONBA_PTR_GET_DEFAULT(maximumCpuTurboFrequency_, 0.0) };
    inline DescribeInstanceTypesRequest& setMaximumCpuTurboFrequency(float maximumCpuTurboFrequency) { DARABONBA_PTR_SET_VALUE(maximumCpuTurboFrequency_, maximumCpuTurboFrequency) };


    // maximumGPUAmount Field Functions 
    bool hasMaximumGPUAmount() const { return this->maximumGPUAmount_ != nullptr;};
    void deleteMaximumGPUAmount() { this->maximumGPUAmount_ = nullptr;};
    inline int32_t maximumGPUAmount() const { DARABONBA_PTR_GET_DEFAULT(maximumGPUAmount_, 0) };
    inline DescribeInstanceTypesRequest& setMaximumGPUAmount(int32_t maximumGPUAmount) { DARABONBA_PTR_SET_VALUE(maximumGPUAmount_, maximumGPUAmount) };


    // maximumMemorySize Field Functions 
    bool hasMaximumMemorySize() const { return this->maximumMemorySize_ != nullptr;};
    void deleteMaximumMemorySize() { this->maximumMemorySize_ = nullptr;};
    inline float maximumMemorySize() const { DARABONBA_PTR_GET_DEFAULT(maximumMemorySize_, 0.0) };
    inline DescribeInstanceTypesRequest& setMaximumMemorySize(float maximumMemorySize) { DARABONBA_PTR_SET_VALUE(maximumMemorySize_, maximumMemorySize) };


    // minimumBaselineCredit Field Functions 
    bool hasMinimumBaselineCredit() const { return this->minimumBaselineCredit_ != nullptr;};
    void deleteMinimumBaselineCredit() { this->minimumBaselineCredit_ = nullptr;};
    inline int32_t minimumBaselineCredit() const { DARABONBA_PTR_GET_DEFAULT(minimumBaselineCredit_, 0) };
    inline DescribeInstanceTypesRequest& setMinimumBaselineCredit(int32_t minimumBaselineCredit) { DARABONBA_PTR_SET_VALUE(minimumBaselineCredit_, minimumBaselineCredit) };


    // minimumCpuCoreCount Field Functions 
    bool hasMinimumCpuCoreCount() const { return this->minimumCpuCoreCount_ != nullptr;};
    void deleteMinimumCpuCoreCount() { this->minimumCpuCoreCount_ = nullptr;};
    inline int32_t minimumCpuCoreCount() const { DARABONBA_PTR_GET_DEFAULT(minimumCpuCoreCount_, 0) };
    inline DescribeInstanceTypesRequest& setMinimumCpuCoreCount(int32_t minimumCpuCoreCount) { DARABONBA_PTR_SET_VALUE(minimumCpuCoreCount_, minimumCpuCoreCount) };


    // minimumCpuSpeedFrequency Field Functions 
    bool hasMinimumCpuSpeedFrequency() const { return this->minimumCpuSpeedFrequency_ != nullptr;};
    void deleteMinimumCpuSpeedFrequency() { this->minimumCpuSpeedFrequency_ = nullptr;};
    inline float minimumCpuSpeedFrequency() const { DARABONBA_PTR_GET_DEFAULT(minimumCpuSpeedFrequency_, 0.0) };
    inline DescribeInstanceTypesRequest& setMinimumCpuSpeedFrequency(float minimumCpuSpeedFrequency) { DARABONBA_PTR_SET_VALUE(minimumCpuSpeedFrequency_, minimumCpuSpeedFrequency) };


    // minimumCpuTurboFrequency Field Functions 
    bool hasMinimumCpuTurboFrequency() const { return this->minimumCpuTurboFrequency_ != nullptr;};
    void deleteMinimumCpuTurboFrequency() { this->minimumCpuTurboFrequency_ = nullptr;};
    inline float minimumCpuTurboFrequency() const { DARABONBA_PTR_GET_DEFAULT(minimumCpuTurboFrequency_, 0.0) };
    inline DescribeInstanceTypesRequest& setMinimumCpuTurboFrequency(float minimumCpuTurboFrequency) { DARABONBA_PTR_SET_VALUE(minimumCpuTurboFrequency_, minimumCpuTurboFrequency) };


    // minimumDiskQuantity Field Functions 
    bool hasMinimumDiskQuantity() const { return this->minimumDiskQuantity_ != nullptr;};
    void deleteMinimumDiskQuantity() { this->minimumDiskQuantity_ = nullptr;};
    inline int32_t minimumDiskQuantity() const { DARABONBA_PTR_GET_DEFAULT(minimumDiskQuantity_, 0) };
    inline DescribeInstanceTypesRequest& setMinimumDiskQuantity(int32_t minimumDiskQuantity) { DARABONBA_PTR_SET_VALUE(minimumDiskQuantity_, minimumDiskQuantity) };


    // minimumEniIpv6AddressQuantity Field Functions 
    bool hasMinimumEniIpv6AddressQuantity() const { return this->minimumEniIpv6AddressQuantity_ != nullptr;};
    void deleteMinimumEniIpv6AddressQuantity() { this->minimumEniIpv6AddressQuantity_ = nullptr;};
    inline int32_t minimumEniIpv6AddressQuantity() const { DARABONBA_PTR_GET_DEFAULT(minimumEniIpv6AddressQuantity_, 0) };
    inline DescribeInstanceTypesRequest& setMinimumEniIpv6AddressQuantity(int32_t minimumEniIpv6AddressQuantity) { DARABONBA_PTR_SET_VALUE(minimumEniIpv6AddressQuantity_, minimumEniIpv6AddressQuantity) };


    // minimumEniPrivateIpAddressQuantity Field Functions 
    bool hasMinimumEniPrivateIpAddressQuantity() const { return this->minimumEniPrivateIpAddressQuantity_ != nullptr;};
    void deleteMinimumEniPrivateIpAddressQuantity() { this->minimumEniPrivateIpAddressQuantity_ = nullptr;};
    inline int32_t minimumEniPrivateIpAddressQuantity() const { DARABONBA_PTR_GET_DEFAULT(minimumEniPrivateIpAddressQuantity_, 0) };
    inline DescribeInstanceTypesRequest& setMinimumEniPrivateIpAddressQuantity(int32_t minimumEniPrivateIpAddressQuantity) { DARABONBA_PTR_SET_VALUE(minimumEniPrivateIpAddressQuantity_, minimumEniPrivateIpAddressQuantity) };


    // minimumEniQuantity Field Functions 
    bool hasMinimumEniQuantity() const { return this->minimumEniQuantity_ != nullptr;};
    void deleteMinimumEniQuantity() { this->minimumEniQuantity_ = nullptr;};
    inline int32_t minimumEniQuantity() const { DARABONBA_PTR_GET_DEFAULT(minimumEniQuantity_, 0) };
    inline DescribeInstanceTypesRequest& setMinimumEniQuantity(int32_t minimumEniQuantity) { DARABONBA_PTR_SET_VALUE(minimumEniQuantity_, minimumEniQuantity) };


    // minimumEriQuantity Field Functions 
    bool hasMinimumEriQuantity() const { return this->minimumEriQuantity_ != nullptr;};
    void deleteMinimumEriQuantity() { this->minimumEriQuantity_ = nullptr;};
    inline int32_t minimumEriQuantity() const { DARABONBA_PTR_GET_DEFAULT(minimumEriQuantity_, 0) };
    inline DescribeInstanceTypesRequest& setMinimumEriQuantity(int32_t minimumEriQuantity) { DARABONBA_PTR_SET_VALUE(minimumEriQuantity_, minimumEriQuantity) };


    // minimumGPUAmount Field Functions 
    bool hasMinimumGPUAmount() const { return this->minimumGPUAmount_ != nullptr;};
    void deleteMinimumGPUAmount() { this->minimumGPUAmount_ = nullptr;};
    inline int32_t minimumGPUAmount() const { DARABONBA_PTR_GET_DEFAULT(minimumGPUAmount_, 0) };
    inline DescribeInstanceTypesRequest& setMinimumGPUAmount(int32_t minimumGPUAmount) { DARABONBA_PTR_SET_VALUE(minimumGPUAmount_, minimumGPUAmount) };


    // minimumInitialCredit Field Functions 
    bool hasMinimumInitialCredit() const { return this->minimumInitialCredit_ != nullptr;};
    void deleteMinimumInitialCredit() { this->minimumInitialCredit_ = nullptr;};
    inline int32_t minimumInitialCredit() const { DARABONBA_PTR_GET_DEFAULT(minimumInitialCredit_, 0) };
    inline DescribeInstanceTypesRequest& setMinimumInitialCredit(int32_t minimumInitialCredit) { DARABONBA_PTR_SET_VALUE(minimumInitialCredit_, minimumInitialCredit) };


    // minimumInstanceBandwidthRx Field Functions 
    bool hasMinimumInstanceBandwidthRx() const { return this->minimumInstanceBandwidthRx_ != nullptr;};
    void deleteMinimumInstanceBandwidthRx() { this->minimumInstanceBandwidthRx_ = nullptr;};
    inline int32_t minimumInstanceBandwidthRx() const { DARABONBA_PTR_GET_DEFAULT(minimumInstanceBandwidthRx_, 0) };
    inline DescribeInstanceTypesRequest& setMinimumInstanceBandwidthRx(int32_t minimumInstanceBandwidthRx) { DARABONBA_PTR_SET_VALUE(minimumInstanceBandwidthRx_, minimumInstanceBandwidthRx) };


    // minimumInstanceBandwidthTx Field Functions 
    bool hasMinimumInstanceBandwidthTx() const { return this->minimumInstanceBandwidthTx_ != nullptr;};
    void deleteMinimumInstanceBandwidthTx() { this->minimumInstanceBandwidthTx_ = nullptr;};
    inline int32_t minimumInstanceBandwidthTx() const { DARABONBA_PTR_GET_DEFAULT(minimumInstanceBandwidthTx_, 0) };
    inline DescribeInstanceTypesRequest& setMinimumInstanceBandwidthTx(int32_t minimumInstanceBandwidthTx) { DARABONBA_PTR_SET_VALUE(minimumInstanceBandwidthTx_, minimumInstanceBandwidthTx) };


    // minimumInstancePpsRx Field Functions 
    bool hasMinimumInstancePpsRx() const { return this->minimumInstancePpsRx_ != nullptr;};
    void deleteMinimumInstancePpsRx() { this->minimumInstancePpsRx_ = nullptr;};
    inline int64_t minimumInstancePpsRx() const { DARABONBA_PTR_GET_DEFAULT(minimumInstancePpsRx_, 0L) };
    inline DescribeInstanceTypesRequest& setMinimumInstancePpsRx(int64_t minimumInstancePpsRx) { DARABONBA_PTR_SET_VALUE(minimumInstancePpsRx_, minimumInstancePpsRx) };


    // minimumInstancePpsTx Field Functions 
    bool hasMinimumInstancePpsTx() const { return this->minimumInstancePpsTx_ != nullptr;};
    void deleteMinimumInstancePpsTx() { this->minimumInstancePpsTx_ = nullptr;};
    inline int64_t minimumInstancePpsTx() const { DARABONBA_PTR_GET_DEFAULT(minimumInstancePpsTx_, 0L) };
    inline DescribeInstanceTypesRequest& setMinimumInstancePpsTx(int64_t minimumInstancePpsTx) { DARABONBA_PTR_SET_VALUE(minimumInstancePpsTx_, minimumInstancePpsTx) };


    // minimumLocalStorageAmount Field Functions 
    bool hasMinimumLocalStorageAmount() const { return this->minimumLocalStorageAmount_ != nullptr;};
    void deleteMinimumLocalStorageAmount() { this->minimumLocalStorageAmount_ = nullptr;};
    inline int32_t minimumLocalStorageAmount() const { DARABONBA_PTR_GET_DEFAULT(minimumLocalStorageAmount_, 0) };
    inline DescribeInstanceTypesRequest& setMinimumLocalStorageAmount(int32_t minimumLocalStorageAmount) { DARABONBA_PTR_SET_VALUE(minimumLocalStorageAmount_, minimumLocalStorageAmount) };


    // minimumLocalStorageCapacity Field Functions 
    bool hasMinimumLocalStorageCapacity() const { return this->minimumLocalStorageCapacity_ != nullptr;};
    void deleteMinimumLocalStorageCapacity() { this->minimumLocalStorageCapacity_ = nullptr;};
    inline int64_t minimumLocalStorageCapacity() const { DARABONBA_PTR_GET_DEFAULT(minimumLocalStorageCapacity_, 0L) };
    inline DescribeInstanceTypesRequest& setMinimumLocalStorageCapacity(int64_t minimumLocalStorageCapacity) { DARABONBA_PTR_SET_VALUE(minimumLocalStorageCapacity_, minimumLocalStorageCapacity) };


    // minimumMemorySize Field Functions 
    bool hasMinimumMemorySize() const { return this->minimumMemorySize_ != nullptr;};
    void deleteMinimumMemorySize() { this->minimumMemorySize_ = nullptr;};
    inline float minimumMemorySize() const { DARABONBA_PTR_GET_DEFAULT(minimumMemorySize_, 0.0) };
    inline DescribeInstanceTypesRequest& setMinimumMemorySize(float minimumMemorySize) { DARABONBA_PTR_SET_VALUE(minimumMemorySize_, minimumMemorySize) };


    // minimumPrimaryEniQueueNumber Field Functions 
    bool hasMinimumPrimaryEniQueueNumber() const { return this->minimumPrimaryEniQueueNumber_ != nullptr;};
    void deleteMinimumPrimaryEniQueueNumber() { this->minimumPrimaryEniQueueNumber_ = nullptr;};
    inline int32_t minimumPrimaryEniQueueNumber() const { DARABONBA_PTR_GET_DEFAULT(minimumPrimaryEniQueueNumber_, 0) };
    inline DescribeInstanceTypesRequest& setMinimumPrimaryEniQueueNumber(int32_t minimumPrimaryEniQueueNumber) { DARABONBA_PTR_SET_VALUE(minimumPrimaryEniQueueNumber_, minimumPrimaryEniQueueNumber) };


    // minimumQueuePairNumber Field Functions 
    bool hasMinimumQueuePairNumber() const { return this->minimumQueuePairNumber_ != nullptr;};
    void deleteMinimumQueuePairNumber() { this->minimumQueuePairNumber_ = nullptr;};
    inline int32_t minimumQueuePairNumber() const { DARABONBA_PTR_GET_DEFAULT(minimumQueuePairNumber_, 0) };
    inline DescribeInstanceTypesRequest& setMinimumQueuePairNumber(int32_t minimumQueuePairNumber) { DARABONBA_PTR_SET_VALUE(minimumQueuePairNumber_, minimumQueuePairNumber) };


    // minimumSecondaryEniQueueNumber Field Functions 
    bool hasMinimumSecondaryEniQueueNumber() const { return this->minimumSecondaryEniQueueNumber_ != nullptr;};
    void deleteMinimumSecondaryEniQueueNumber() { this->minimumSecondaryEniQueueNumber_ = nullptr;};
    inline int32_t minimumSecondaryEniQueueNumber() const { DARABONBA_PTR_GET_DEFAULT(minimumSecondaryEniQueueNumber_, 0) };
    inline DescribeInstanceTypesRequest& setMinimumSecondaryEniQueueNumber(int32_t minimumSecondaryEniQueueNumber) { DARABONBA_PTR_SET_VALUE(minimumSecondaryEniQueueNumber_, minimumSecondaryEniQueueNumber) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeInstanceTypesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // nvmeSupport Field Functions 
    bool hasNvmeSupport() const { return this->nvmeSupport_ != nullptr;};
    void deleteNvmeSupport() { this->nvmeSupport_ = nullptr;};
    inline string nvmeSupport() const { DARABONBA_PTR_GET_DEFAULT(nvmeSupport_, "") };
    inline DescribeInstanceTypesRequest& setNvmeSupport(string nvmeSupport) { DARABONBA_PTR_SET_VALUE(nvmeSupport_, nvmeSupport) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline DescribeInstanceTypesRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeInstanceTypesRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // physicalProcessorModel Field Functions 
    bool hasPhysicalProcessorModel() const { return this->physicalProcessorModel_ != nullptr;};
    void deletePhysicalProcessorModel() { this->physicalProcessorModel_ = nullptr;};
    inline string physicalProcessorModel() const { DARABONBA_PTR_GET_DEFAULT(physicalProcessorModel_, "") };
    inline DescribeInstanceTypesRequest& setPhysicalProcessorModel(string physicalProcessorModel) { DARABONBA_PTR_SET_VALUE(physicalProcessorModel_, physicalProcessorModel) };


    // physicalProcessorModels Field Functions 
    bool hasPhysicalProcessorModels() const { return this->physicalProcessorModels_ != nullptr;};
    void deletePhysicalProcessorModels() { this->physicalProcessorModels_ = nullptr;};
    inline const vector<string> & physicalProcessorModels() const { DARABONBA_PTR_GET_CONST(physicalProcessorModels_, vector<string>) };
    inline vector<string> physicalProcessorModels() { DARABONBA_PTR_GET(physicalProcessorModels_, vector<string>) };
    inline DescribeInstanceTypesRequest& setPhysicalProcessorModels(const vector<string> & physicalProcessorModels) { DARABONBA_PTR_SET_VALUE(physicalProcessorModels_, physicalProcessorModels) };
    inline DescribeInstanceTypesRequest& setPhysicalProcessorModels(vector<string> && physicalProcessorModels) { DARABONBA_PTR_SET_RVALUE(physicalProcessorModels_, physicalProcessorModels) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DescribeInstanceTypesRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribeInstanceTypesRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The CPU architecture. Valid values:
    // 
    // *   X86
    // *   ARM
    std::shared_ptr<string> cpuArchitecture_ = nullptr;
    // The CPU architectures of instance types. You can specify 1 or 2 CPU architectures.
    std::shared_ptr<vector<string>> cpuArchitectures_ = nullptr;
    // The GPU model.
    // 
    // >  Fuzzy match is supported. For example, if an instance type provides NVIDIA V100 GPUs and you set this parameter to NVIDIA, information about the instance type is queried.
    std::shared_ptr<string> GPUSpec_ = nullptr;
    // The GPU models of instance types. You can specify 1 to 10 GPU models.
    std::shared_ptr<vector<string>> gpuSpecs_ = nullptr;
    // The categories of instance types. You can specify 1 to 10 categories of instance types.
    std::shared_ptr<vector<string>> instanceCategories_ = nullptr;
    // The category of the instance type. Valid values:
    // 
    // *   General-purpose: general-purpose instance type
    // *   Compute-optimized: compute-optimized instance type
    // *   Memory-optimized: memory-optimized instance type
    // *   Big data: big data instance type
    // *   Local SSDs: instance type with local SSDs
    // *   High Clock Speed: instance type with high clock speeds
    // *   Enhanced: enhanced instance type
    // *   Shared: shared instance type
    // *   Compute-optimized with GPU: GPU-accelerated compute-optimized instance type
    // *   Visual Compute-optimized: visual compute-optimized instance type
    // *   Heterogeneous Service: heterogeneous service instance type
    // *   Compute-optimized with FPGA: FPGA-accelerated compute-optimized instance type
    // *   Compute-optimized with NPU: NPU-accelerated compute-optimized instance type
    // *   ECS Bare Metal: ECS Bare Metal Instance type
    // *   Super Computing Cluster: Super Computing Cluster (SCC) instance type
    // *   High Performance Compute: high-performance computing instance type
    std::shared_ptr<string> instanceCategory_ = nullptr;
    // The level of the instance family. Valid values:
    // 
    // *   EntryLevel: entry level (shared)
    // *   EnterpriseLevel: enterprise level
    // *   CreditEntryLevel: credit-based entry level
    std::shared_ptr<string> instanceFamilyLevel_ = nullptr;
    // The instance families. You can specify 1 to 10 instance families.
    std::shared_ptr<vector<string>> instanceTypeFamilies_ = nullptr;
    // The instance family to which the instance type belongs. For information about the valid values of this parameter, see [DescribeInstanceTypeFamilies](https://help.aliyun.com/document_detail/25621.html).
    // 
    // For more information about instance families, see [Instance families](https://help.aliyun.com/document_detail/25378.html).
    std::shared_ptr<string> instanceTypeFamily_ = nullptr;
    // The instance types. You can specify 1 to 10 instance types. If this parameter is empty, information about all instance types is queried.
    std::shared_ptr<vector<string>> instanceTypes_ = nullptr;
    // The categories of local disks used by instance types. You can specify 1 or 2 categories of local disks.
    std::shared_ptr<vector<string>> localStorageCategories_ = nullptr;
    // The category of local disks. For more information, see [Local disks](~~63138#section_n2w_8yc_5u1~~). Valid values:
    // 
    // *   local_hdd_pro: local Serial Advanced Technology Attachment (SATA) HDDs, which are attached to d1ne or d1 instances.
    // *   local_ssd_pro: local Non-Volatile Memory Express (NVMe) SSDs, which are attached to i2, i2g, i1, ga1, or gn5 instances.
    // 
    // Valid values:
    // 
    // *   local_hdd_pro
    // *   local_ssd_pro
    std::shared_ptr<string> localStorageCategory_ = nullptr;
    // The maximum number of entries per page. Valid values: 1 to 1600.
    // 
    // Default value: 1600.
    std::shared_ptr<int64_t> maxResults_ = nullptr;
    // The maximum number of vCPUs. The value must be a positive integer.
    // 
    // >  If an instance type has more vCPUs than the specified value, information about the instance type is not queried.
    std::shared_ptr<int32_t> maximumCpuCoreCount_ = nullptr;
    // The maximum clock speed.
    // 
    // >  If an instance type uses processors that have a higher clock speed than the specified value, information about the instance type is not queried.
    std::shared_ptr<float> maximumCpuSpeedFrequency_ = nullptr;
    // The maximum turbo frequency.
    // 
    // >  If an instance type uses processors that deliver a higher turbo frequency than the specified value, information about the instance type is not queried.
    std::shared_ptr<float> maximumCpuTurboFrequency_ = nullptr;
    // The maximum number of GPUs. The value must be a positive integer.
    // 
    // >  If an instance type provides more GPUs than the specified value, information about the instance type is not queried.
    std::shared_ptr<int32_t> maximumGPUAmount_ = nullptr;
    // The maximum memory size. Unit: GiB.
    // 
    // >  If the memory size of an instance type is larger than the specified value, information about the instance type is not queried.
    std::shared_ptr<float> maximumMemorySize_ = nullptr;
    // The minimum baseline CPU performance (overall baseline performance of all vCPUs) of a t5 or t6 burstable instance.
    // 
    // >  If a t5 or t6 instance type provides baseline CPU performance lower than the specified value, information about the instance type is not queried.
    std::shared_ptr<int32_t> minimumBaselineCredit_ = nullptr;
    // The minimum number of vCPUs. The value must be a positive integer.
    // 
    // >  If an instance type has fewer vCPUs than the specified value, information about the instance type is not queried.
    std::shared_ptr<int32_t> minimumCpuCoreCount_ = nullptr;
    // The minimum clock speed.
    // 
    // >  If an instance type uses processors that have a lower clock speed than the specified value, information about the instance type is not queried.
    std::shared_ptr<float> minimumCpuSpeedFrequency_ = nullptr;
    // The minimum turbo frequency.
    // 
    // >  If an instance type uses processors that deliver a lower turbo frequency than the specified value, information about the instance type is not queried.
    std::shared_ptr<float> minimumCpuTurboFrequency_ = nullptr;
    // The minimum number of cloud disks per instance.
    // 
    // >  If an instance type supports fewer cloud disks than the specified value, information about the instance type is not queried.
    std::shared_ptr<int32_t> minimumDiskQuantity_ = nullptr;
    // The minimum number of IPv6 addresses per ENI.
    // 
    // >  If an instance type supports fewer IPv6 addresses per ENI than the specified value, information about the instance type is not queried.
    std::shared_ptr<int32_t> minimumEniIpv6AddressQuantity_ = nullptr;
    // The minimum number of IPv4 addresses per ENI.
    // 
    // >  If an instance type supports fewer IPv4 addresses per ENI than the specified value, information about the instance type is not queried.
    std::shared_ptr<int32_t> minimumEniPrivateIpAddressQuantity_ = nullptr;
    // The minimum number of elastic network interfaces (ENIs) per instance.
    // 
    // >  If an instance type supports fewer ENIs than the specified value, information about the instance type is not queried.
    std::shared_ptr<int32_t> minimumEniQuantity_ = nullptr;
    // The minimum number of ERIs per instance.
    // 
    // >  If an instance type supports fewer ERIs than the specified value, information about the instance type is not queried.
    std::shared_ptr<int32_t> minimumEriQuantity_ = nullptr;
    // The minimum number of GPUs. The value must be a positive integer.
    // 
    // >  If an instance type provides fewer GPUs than the specified value, information about the instance type is not queried.
    std::shared_ptr<int32_t> minimumGPUAmount_ = nullptr;
    // The minimum initial CPU credits of a t5 or t6 burstable instance.
    // 
    // >  If a t5 or t6 instance type provides less initial vCPU credits than the specified value, information about the instance type is not queried.
    std::shared_ptr<int32_t> minimumInitialCredit_ = nullptr;
    // The minimum inbound internal bandwidth. Unit: Kbit/s.
    // 
    // >  If an instance type provides an inbound internal bandwidth that is lower than the specified value, information about the instance type is not queried.
    std::shared_ptr<int32_t> minimumInstanceBandwidthRx_ = nullptr;
    // The minimum outbound internal bandwidth. Unit: Kbit/s.
    // 
    // >  If an instance type provides an outbound internal bandwidth that is lower than the specified value, information about the instance type is not queried.
    std::shared_ptr<int32_t> minimumInstanceBandwidthTx_ = nullptr;
    // The minimum inbound packet forwarding rate over the internal network. Unit: pps.
    // 
    // >  If an instance type provides an inbound packet forwarding rate over the internal network that is lower than the specified value, information about the instance type is not queried.
    std::shared_ptr<int64_t> minimumInstancePpsRx_ = nullptr;
    // The minimum outbound packet forwarding rate over the internal network. Unit: pps.
    // 
    // >  If an instance type provides an outbound packet forwarding rate over the internal network that is lower than the specified value, information about the instance type is not queried.
    std::shared_ptr<int64_t> minimumInstancePpsTx_ = nullptr;
    // The minimum number of local disks per instance.
    // 
    // >  If an instance type supports fewer local disks than the specified value, information about the instance type is not queried.
    std::shared_ptr<int32_t> minimumLocalStorageAmount_ = nullptr;
    // The capacity of each local disk attached per instance. Unit: GiB.
    std::shared_ptr<int64_t> minimumLocalStorageCapacity_ = nullptr;
    // The minimum memory size. Unit: GiB.
    // 
    // >  If the memory size of an instance type is smaller than the specified value, information about the instance type is not queried.
    std::shared_ptr<float> minimumMemorySize_ = nullptr;
    // The minimum default number of queues per primary network interface controller (NIC).
    // 
    // >  If an instance type supports fewer queues per primary NIC than the specified value, information about the instance type is not queried.
    std::shared_ptr<int32_t> minimumPrimaryEniQueueNumber_ = nullptr;
    // The minimum number of queue pair (QP) queues per elastic RDMA interface (ERI).
    // 
    // >  If an instance type supports fewer QP queues per ERI than the specified value, information about the instance type is not queried.
    std::shared_ptr<int32_t> minimumQueuePairNumber_ = nullptr;
    // The minimum default number of queues per secondary NIC.
    // 
    // >  If an instance type supports fewer queues per secondary NIC than the specified value, information about the instance type is not queried.
    std::shared_ptr<int32_t> minimumSecondaryEniQueueNumber_ = nullptr;
    // The query token. Set the value to the NextToken value returned in the previous call to the DescribeInstanceTypes operation. You do not need to specify this parameter for the first request.
    std::shared_ptr<string> nextToken_ = nullptr;
    // Specifies whether cloud disks can be attached by using the NVMe protocol. Valid values:
    // 
    // *   required: Cloud disks can be attached by using the NVMe protocol.
    // *   unsupported: Cloud disks cannot be attached by using the NVMe protocol.
    std::shared_ptr<string> nvmeSupport_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The CPU model.
    // 
    // >  Fuzzy match is supported. For example, if an instance type uses Intel Xeon (Ice Lake) Platinum 8369B processors and you set this parameter to Intel, information about the instance type is queried.
    std::shared_ptr<string> physicalProcessorModel_ = nullptr;
    // The CPU models of instance types. You can specify 1 to 10 CPU models.
    std::shared_ptr<vector<string>> physicalProcessorModels_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
