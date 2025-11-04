// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESCALINGCONFIGURATIONREQUESTINSTANCETYPEOVERRIDES_HPP_
#define ALIBABACLOUD_MODELS_CREATESCALINGCONFIGURATIONREQUESTINSTANCETYPEOVERRIDES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class CreateScalingConfigurationRequestInstanceTypeOverrides : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateScalingConfigurationRequestInstanceTypeOverrides& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(WeightedCapacity, weightedCapacity_);
    };
    friend void from_json(const Darabonba::Json& j, CreateScalingConfigurationRequestInstanceTypeOverrides& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(WeightedCapacity, weightedCapacity_);
    };
    CreateScalingConfigurationRequestInstanceTypeOverrides() = default ;
    CreateScalingConfigurationRequestInstanceTypeOverrides(const CreateScalingConfigurationRequestInstanceTypeOverrides &) = default ;
    CreateScalingConfigurationRequestInstanceTypeOverrides(CreateScalingConfigurationRequestInstanceTypeOverrides &&) = default ;
    CreateScalingConfigurationRequestInstanceTypeOverrides(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateScalingConfigurationRequestInstanceTypeOverrides() = default ;
    CreateScalingConfigurationRequestInstanceTypeOverrides& operator=(const CreateScalingConfigurationRequestInstanceTypeOverrides &) = default ;
    CreateScalingConfigurationRequestInstanceTypeOverrides& operator=(CreateScalingConfigurationRequestInstanceTypeOverrides &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceType_ == nullptr
        && return this->weightedCapacity_ == nullptr; };
    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline CreateScalingConfigurationRequestInstanceTypeOverrides& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // weightedCapacity Field Functions 
    bool hasWeightedCapacity() const { return this->weightedCapacity_ != nullptr;};
    void deleteWeightedCapacity() { this->weightedCapacity_ = nullptr;};
    inline int32_t weightedCapacity() const { DARABONBA_PTR_GET_DEFAULT(weightedCapacity_, 0) };
    inline CreateScalingConfigurationRequestInstanceTypeOverrides& setWeightedCapacity(int32_t weightedCapacity) { DARABONBA_PTR_SET_VALUE(weightedCapacity_, weightedCapacity) };


  protected:
    // Instance type N that you want to use to override the instance type that is specified in the launch template.
    // 
    // If you want to trigger scale-outs based on the weighted capacities of instances, specify InstanceType and WeightedCapacity at the same time. You can specify N instance types by using the Extended Configurations feature. Valid values of N: 1 to 10.
    // 
    // > This parameter takes effect only if you specify LaunchTemplateId.
    // 
    // You can specify an instance type that is available for purchase as the value of InstanceType.
    std::shared_ptr<string> instanceType_ = nullptr;
    // The weight of instance type N. If you want to trigger scale-outs based on the weighted capacities of instances, you must specify WeightedCapacity after you specify InstanceType.
    // 
    // The weight of an instance type specifies the capacity of an instance of the instance type in the scaling group. A higher weight specifies that a smaller number of instances of the specified instance type is required to meet the expected capacity requirement.
    // 
    // Performance metrics, such as the number of vCPUs and the memory size of each instance type, may vary. You can specify different weights for different instance types based on your business requirements.
    // 
    // Example:
    // 
    // *   Current capacity: 0
    // *   Expected capacity: 6
    // *   Capacity of ecs.c5.xlarge: 4
    // 
    // To meet the expected capacity requirement, Auto Scaling must create and add two ecs.c5.xlarge instances.
    // 
    // > The capacity of the scaling group cannot exceed the sum of the maximum number of instances that is specified by MaxSize and the maximum weight of the instance types.
    // 
    // Valid values of WeightedCapacity: 1 to 500.
    std::shared_ptr<int32_t> weightedCapacity_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
