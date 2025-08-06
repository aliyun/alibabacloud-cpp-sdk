// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAUTOPROVISIONINGGROUPSHRINKREQUESTLAUNCHTEMPLATECONFIG_HPP_
#define ALIBABACLOUD_MODELS_CREATEAUTOPROVISIONINGGROUPSHRINKREQUESTLAUNCHTEMPLATECONFIG_HPP_
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
  class CreateAutoProvisioningGroupShrinkRequestLaunchTemplateConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAutoProvisioningGroupShrinkRequestLaunchTemplateConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Architectures, architectures_);
      DARABONBA_PTR_TO_JSON(BurstablePerformance, burstablePerformance_);
      DARABONBA_PTR_TO_JSON(Cores, cores_);
      DARABONBA_PTR_TO_JSON(ExcludedInstanceTypes, excludedInstanceTypes_);
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(InstanceFamilyLevel, instanceFamilyLevel_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(MaxPrice, maxPrice_);
      DARABONBA_PTR_TO_JSON(MaxQuantity, maxQuantity_);
      DARABONBA_PTR_TO_JSON(Memories, memories_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(WeightedCapacity, weightedCapacity_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAutoProvisioningGroupShrinkRequestLaunchTemplateConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Architectures, architectures_);
      DARABONBA_PTR_FROM_JSON(BurstablePerformance, burstablePerformance_);
      DARABONBA_PTR_FROM_JSON(Cores, cores_);
      DARABONBA_PTR_FROM_JSON(ExcludedInstanceTypes, excludedInstanceTypes_);
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(InstanceFamilyLevel, instanceFamilyLevel_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(MaxPrice, maxPrice_);
      DARABONBA_PTR_FROM_JSON(MaxQuantity, maxQuantity_);
      DARABONBA_PTR_FROM_JSON(Memories, memories_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(WeightedCapacity, weightedCapacity_);
    };
    CreateAutoProvisioningGroupShrinkRequestLaunchTemplateConfig() = default ;
    CreateAutoProvisioningGroupShrinkRequestLaunchTemplateConfig(const CreateAutoProvisioningGroupShrinkRequestLaunchTemplateConfig &) = default ;
    CreateAutoProvisioningGroupShrinkRequestLaunchTemplateConfig(CreateAutoProvisioningGroupShrinkRequestLaunchTemplateConfig &&) = default ;
    CreateAutoProvisioningGroupShrinkRequestLaunchTemplateConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAutoProvisioningGroupShrinkRequestLaunchTemplateConfig() = default ;
    CreateAutoProvisioningGroupShrinkRequestLaunchTemplateConfig& operator=(const CreateAutoProvisioningGroupShrinkRequestLaunchTemplateConfig &) = default ;
    CreateAutoProvisioningGroupShrinkRequestLaunchTemplateConfig& operator=(CreateAutoProvisioningGroupShrinkRequestLaunchTemplateConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->architectures_ != nullptr
        && this->burstablePerformance_ != nullptr && this->cores_ != nullptr && this->excludedInstanceTypes_ != nullptr && this->imageId_ != nullptr && this->instanceFamilyLevel_ != nullptr
        && this->instanceType_ != nullptr && this->maxPrice_ != nullptr && this->maxQuantity_ != nullptr && this->memories_ != nullptr && this->priority_ != nullptr
        && this->vSwitchId_ != nullptr && this->weightedCapacity_ != nullptr; };
    // architectures Field Functions 
    bool hasArchitectures() const { return this->architectures_ != nullptr;};
    void deleteArchitectures() { this->architectures_ = nullptr;};
    inline const vector<string> & architectures() const { DARABONBA_PTR_GET_CONST(architectures_, vector<string>) };
    inline vector<string> architectures() { DARABONBA_PTR_GET(architectures_, vector<string>) };
    inline CreateAutoProvisioningGroupShrinkRequestLaunchTemplateConfig& setArchitectures(const vector<string> & architectures) { DARABONBA_PTR_SET_VALUE(architectures_, architectures) };
    inline CreateAutoProvisioningGroupShrinkRequestLaunchTemplateConfig& setArchitectures(vector<string> && architectures) { DARABONBA_PTR_SET_RVALUE(architectures_, architectures) };


    // burstablePerformance Field Functions 
    bool hasBurstablePerformance() const { return this->burstablePerformance_ != nullptr;};
    void deleteBurstablePerformance() { this->burstablePerformance_ = nullptr;};
    inline string burstablePerformance() const { DARABONBA_PTR_GET_DEFAULT(burstablePerformance_, "") };
    inline CreateAutoProvisioningGroupShrinkRequestLaunchTemplateConfig& setBurstablePerformance(string burstablePerformance) { DARABONBA_PTR_SET_VALUE(burstablePerformance_, burstablePerformance) };


    // cores Field Functions 
    bool hasCores() const { return this->cores_ != nullptr;};
    void deleteCores() { this->cores_ = nullptr;};
    inline const vector<int32_t> & cores() const { DARABONBA_PTR_GET_CONST(cores_, vector<int32_t>) };
    inline vector<int32_t> cores() { DARABONBA_PTR_GET(cores_, vector<int32_t>) };
    inline CreateAutoProvisioningGroupShrinkRequestLaunchTemplateConfig& setCores(const vector<int32_t> & cores) { DARABONBA_PTR_SET_VALUE(cores_, cores) };
    inline CreateAutoProvisioningGroupShrinkRequestLaunchTemplateConfig& setCores(vector<int32_t> && cores) { DARABONBA_PTR_SET_RVALUE(cores_, cores) };


    // excludedInstanceTypes Field Functions 
    bool hasExcludedInstanceTypes() const { return this->excludedInstanceTypes_ != nullptr;};
    void deleteExcludedInstanceTypes() { this->excludedInstanceTypes_ = nullptr;};
    inline const vector<string> & excludedInstanceTypes() const { DARABONBA_PTR_GET_CONST(excludedInstanceTypes_, vector<string>) };
    inline vector<string> excludedInstanceTypes() { DARABONBA_PTR_GET(excludedInstanceTypes_, vector<string>) };
    inline CreateAutoProvisioningGroupShrinkRequestLaunchTemplateConfig& setExcludedInstanceTypes(const vector<string> & excludedInstanceTypes) { DARABONBA_PTR_SET_VALUE(excludedInstanceTypes_, excludedInstanceTypes) };
    inline CreateAutoProvisioningGroupShrinkRequestLaunchTemplateConfig& setExcludedInstanceTypes(vector<string> && excludedInstanceTypes) { DARABONBA_PTR_SET_RVALUE(excludedInstanceTypes_, excludedInstanceTypes) };


    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline CreateAutoProvisioningGroupShrinkRequestLaunchTemplateConfig& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // instanceFamilyLevel Field Functions 
    bool hasInstanceFamilyLevel() const { return this->instanceFamilyLevel_ != nullptr;};
    void deleteInstanceFamilyLevel() { this->instanceFamilyLevel_ = nullptr;};
    inline string instanceFamilyLevel() const { DARABONBA_PTR_GET_DEFAULT(instanceFamilyLevel_, "") };
    inline CreateAutoProvisioningGroupShrinkRequestLaunchTemplateConfig& setInstanceFamilyLevel(string instanceFamilyLevel) { DARABONBA_PTR_SET_VALUE(instanceFamilyLevel_, instanceFamilyLevel) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline CreateAutoProvisioningGroupShrinkRequestLaunchTemplateConfig& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // maxPrice Field Functions 
    bool hasMaxPrice() const { return this->maxPrice_ != nullptr;};
    void deleteMaxPrice() { this->maxPrice_ = nullptr;};
    inline double maxPrice() const { DARABONBA_PTR_GET_DEFAULT(maxPrice_, 0.0) };
    inline CreateAutoProvisioningGroupShrinkRequestLaunchTemplateConfig& setMaxPrice(double maxPrice) { DARABONBA_PTR_SET_VALUE(maxPrice_, maxPrice) };


    // maxQuantity Field Functions 
    bool hasMaxQuantity() const { return this->maxQuantity_ != nullptr;};
    void deleteMaxQuantity() { this->maxQuantity_ = nullptr;};
    inline int32_t maxQuantity() const { DARABONBA_PTR_GET_DEFAULT(maxQuantity_, 0) };
    inline CreateAutoProvisioningGroupShrinkRequestLaunchTemplateConfig& setMaxQuantity(int32_t maxQuantity) { DARABONBA_PTR_SET_VALUE(maxQuantity_, maxQuantity) };


    // memories Field Functions 
    bool hasMemories() const { return this->memories_ != nullptr;};
    void deleteMemories() { this->memories_ = nullptr;};
    inline const vector<float> & memories() const { DARABONBA_PTR_GET_CONST(memories_, vector<float>) };
    inline vector<float> memories() { DARABONBA_PTR_GET(memories_, vector<float>) };
    inline CreateAutoProvisioningGroupShrinkRequestLaunchTemplateConfig& setMemories(const vector<float> & memories) { DARABONBA_PTR_SET_VALUE(memories_, memories) };
    inline CreateAutoProvisioningGroupShrinkRequestLaunchTemplateConfig& setMemories(vector<float> && memories) { DARABONBA_PTR_SET_RVALUE(memories_, memories) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline CreateAutoProvisioningGroupShrinkRequestLaunchTemplateConfig& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline CreateAutoProvisioningGroupShrinkRequestLaunchTemplateConfig& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // weightedCapacity Field Functions 
    bool hasWeightedCapacity() const { return this->weightedCapacity_ != nullptr;};
    void deleteWeightedCapacity() { this->weightedCapacity_ = nullptr;};
    inline double weightedCapacity() const { DARABONBA_PTR_GET_DEFAULT(weightedCapacity_, 0.0) };
    inline CreateAutoProvisioningGroupShrinkRequestLaunchTemplateConfig& setWeightedCapacity(double weightedCapacity) { DARABONBA_PTR_SET_VALUE(weightedCapacity_, weightedCapacity) };


  protected:
    // The architectures of the instance types.
    std::shared_ptr<vector<string>> architectures_ = nullptr;
    // Specifies whether to include burstable instance types. Valid values:
    // 
    // *   Exclude: excludes burstable instance types.
    // *   Include: includes burstable instance types.
    // *   Required: includes only burstable instance types.
    // 
    // Default value: Include.
    std::shared_ptr<string> burstablePerformance_ = nullptr;
    // The numbers of vCPUs of instance types.
    std::shared_ptr<vector<int32_t>> cores_ = nullptr;
    // The instance types that you want to exclude.
    std::shared_ptr<vector<string>> excludedInstanceTypes_ = nullptr;
    // The ID of the image. You can use this parameter to specify the image that is used by the current resource pool. If you do not specify this parameter, the image that is configured in `LaunchConfiguration.ImageId` or the launch template is used by default. You can call the [DescribeImages](https://help.aliyun.com/document_detail/25534.html) operation to query the available images. Note: This parameter is supported only when `AutoProvisioningGroupType` is set to instant.
    std::shared_ptr<string> imageId_ = nullptr;
    // The instance family level of the instance type in extended configuration N. This parameter is used to filter instance types. Valid values of Nextended configuration N, Valid values:
    // 
    // *   EntryLevel: entry level (shared instance types). Instance types of this level are the most cost-effective but may not ensure stable computing performance. Instance types of this level are suitable for scenarios in which the CPU utilization is low. For more information, see [Shared instance families](https://help.aliyun.com/document_detail/108489.html).
    // *   EnterpriseLevel: enterprise level. Instance types of this level provide stable performance and dedicated resources and are suitable for business scenarios that require high stability. For more information, see [Overview of instance families](https://help.aliyun.com/document_detail/25378.html).
    // *   CreditEntryLevel: credit entry level. This value is valid only for burstable instances. CPU credits are used to ensure computing performance. Instance types of this level are suitable for scenarios in which the CPU utilization is low but may fluctuate in specific cases. For information about burstable instances, see [Overview](https://help.aliyun.com/document_detail/59977.html).
    // 
    // Valid values of N: 1 to 10.
    std::shared_ptr<string> instanceFamilyLevel_ = nullptr;
    // The instance type in extended configuration N. Valid values of N: 1 to 20. For information about the valid values of this parameter, see [Overview of instance families](https://help.aliyun.com/document_detail/25378.html).
    std::shared_ptr<string> instanceType_ = nullptr;
    // The maximum price of spot instances in extended configuration N.
    // 
    // >  If you specify one or more `LaunchTemplateConfig.N.*` parameters, you must also specify `LaunchTemplateConfig.N.MaxPrice`.
    std::shared_ptr<double> maxPrice_ = nullptr;
    // >  This parameter is in invitational preview and is not publicly available.
    std::shared_ptr<int32_t> maxQuantity_ = nullptr;
    // The memory sizes of instance types.
    std::shared_ptr<vector<float>> memories_ = nullptr;
    // The priority of extended configuration N. A value of 0 indicates the highest priority. Valid values: 0 to ∞.
    std::shared_ptr<int32_t> priority_ = nullptr;
    // The ID of the vSwitch in extended configuration N. The zone of the ECS instances created from the extended configuration is determined by the vSwitch.
    // 
    // >  If you specify one or more `LaunchTemplateConfig.N.*` parameters, you must also specify `LaunchTemplateConfig.N.VSwitchId`.
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // The weight of the instance type in extended configuration N. A greater weight indicates that a single instance has more computing power and fewer instances are required. The value must be greater than 0.
    // 
    // The weight is calculated based on the computing power of the specified instance type and the minimum computing power of a single instance in the cluster to be created by the auto provisioning group. For example, assume that the minimum computing power of a single instance is 8 vCPUs and 60 GiB of memory.
    // 
    // *   For an instance type with 8 vCPUs and 60 GiB of memory, you can set the weight to 1.
    // *   For an instance type with 16 vCPUs and 120 GiB of memory, you can set the weight to 2.
    std::shared_ptr<double> weightedCapacity_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
