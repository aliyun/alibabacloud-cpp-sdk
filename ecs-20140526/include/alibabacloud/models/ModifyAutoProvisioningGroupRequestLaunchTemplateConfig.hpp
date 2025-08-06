// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAUTOPROVISIONINGGROUPREQUESTLAUNCHTEMPLATECONFIG_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAUTOPROVISIONINGGROUPREQUESTLAUNCHTEMPLATECONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class ModifyAutoProvisioningGroupRequestLaunchTemplateConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAutoProvisioningGroupRequestLaunchTemplateConfig& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(MaxPrice, maxPrice_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(WeightedCapacity, weightedCapacity_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAutoProvisioningGroupRequestLaunchTemplateConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(MaxPrice, maxPrice_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(WeightedCapacity, weightedCapacity_);
    };
    ModifyAutoProvisioningGroupRequestLaunchTemplateConfig() = default ;
    ModifyAutoProvisioningGroupRequestLaunchTemplateConfig(const ModifyAutoProvisioningGroupRequestLaunchTemplateConfig &) = default ;
    ModifyAutoProvisioningGroupRequestLaunchTemplateConfig(ModifyAutoProvisioningGroupRequestLaunchTemplateConfig &&) = default ;
    ModifyAutoProvisioningGroupRequestLaunchTemplateConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAutoProvisioningGroupRequestLaunchTemplateConfig() = default ;
    ModifyAutoProvisioningGroupRequestLaunchTemplateConfig& operator=(const ModifyAutoProvisioningGroupRequestLaunchTemplateConfig &) = default ;
    ModifyAutoProvisioningGroupRequestLaunchTemplateConfig& operator=(ModifyAutoProvisioningGroupRequestLaunchTemplateConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceType_ != nullptr
        && this->maxPrice_ != nullptr && this->priority_ != nullptr && this->vSwitchId_ != nullptr && this->weightedCapacity_ != nullptr; };
    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline ModifyAutoProvisioningGroupRequestLaunchTemplateConfig& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // maxPrice Field Functions 
    bool hasMaxPrice() const { return this->maxPrice_ != nullptr;};
    void deleteMaxPrice() { this->maxPrice_ = nullptr;};
    inline double maxPrice() const { DARABONBA_PTR_GET_DEFAULT(maxPrice_, 0.0) };
    inline ModifyAutoProvisioningGroupRequestLaunchTemplateConfig& setMaxPrice(double maxPrice) { DARABONBA_PTR_SET_VALUE(maxPrice_, maxPrice) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t priority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline ModifyAutoProvisioningGroupRequestLaunchTemplateConfig& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline ModifyAutoProvisioningGroupRequestLaunchTemplateConfig& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // weightedCapacity Field Functions 
    bool hasWeightedCapacity() const { return this->weightedCapacity_ != nullptr;};
    void deleteWeightedCapacity() { this->weightedCapacity_ = nullptr;};
    inline double weightedCapacity() const { DARABONBA_PTR_GET_DEFAULT(weightedCapacity_, 0.0) };
    inline ModifyAutoProvisioningGroupRequestLaunchTemplateConfig& setWeightedCapacity(double weightedCapacity) { DARABONBA_PTR_SET_VALUE(weightedCapacity_, weightedCapacity) };


  protected:
    // The instance type in extended configuration N. Valid values of N: 1 to 20. For more information about the valid values of this parameter, see [Instance families](https://help.aliyun.com/document_detail/25378.html).
    std::shared_ptr<string> instanceType_ = nullptr;
    // The maximum price of spot instances in extended configuration N.
    std::shared_ptr<double> maxPrice_ = nullptr;
    // The priority of extended configuration N. A value of 0 indicates the highest priority. The value must be greater than 0.
    std::shared_ptr<int32_t> priority_ = nullptr;
    // The ID of the vSwitch in extended configuration N. The zone of the instances created from the extended configuration is determined by the vSwitch.
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // The weight of the instance type specified in the extended configuration. A greater weight indicates that a single instance has more computing power and fewer instances are required. The value must be greater than 0.
    // 
    // The weight is calculated based on the computing power of the instance type and the minimum computing power of a single instance in the cluster that can created by the auto-provisioning group. For example, assume that the minimum computing power of a single instance is 8 vCPUs and 60 GiB of memory.
    // 
    // *   For an instance type with 8 vCPUs and 60 GiB of memory, you can set the weight to 1.
    // *   For an instance type with 16 vCPUs and 120 GiB of memory, you can set the weight to 2.
    std::shared_ptr<double> weightedCapacity_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
