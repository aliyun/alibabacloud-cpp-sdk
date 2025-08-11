// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSCALINGCONFIGURATIONREQUESTINSTANCETYPEOVERRIDES_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSCALINGCONFIGURATIONREQUESTINSTANCETYPEOVERRIDES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class ModifyScalingConfigurationRequestInstanceTypeOverrides : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyScalingConfigurationRequestInstanceTypeOverrides& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(WeightedCapacity, weightedCapacity_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyScalingConfigurationRequestInstanceTypeOverrides& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(WeightedCapacity, weightedCapacity_);
    };
    ModifyScalingConfigurationRequestInstanceTypeOverrides() = default ;
    ModifyScalingConfigurationRequestInstanceTypeOverrides(const ModifyScalingConfigurationRequestInstanceTypeOverrides &) = default ;
    ModifyScalingConfigurationRequestInstanceTypeOverrides(ModifyScalingConfigurationRequestInstanceTypeOverrides &&) = default ;
    ModifyScalingConfigurationRequestInstanceTypeOverrides(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyScalingConfigurationRequestInstanceTypeOverrides() = default ;
    ModifyScalingConfigurationRequestInstanceTypeOverrides& operator=(const ModifyScalingConfigurationRequestInstanceTypeOverrides &) = default ;
    ModifyScalingConfigurationRequestInstanceTypeOverrides& operator=(ModifyScalingConfigurationRequestInstanceTypeOverrides &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceType_ != nullptr
        && this->weightedCapacity_ != nullptr; };
    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline ModifyScalingConfigurationRequestInstanceTypeOverrides& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // weightedCapacity Field Functions 
    bool hasWeightedCapacity() const { return this->weightedCapacity_ != nullptr;};
    void deleteWeightedCapacity() { this->weightedCapacity_ = nullptr;};
    inline int32_t weightedCapacity() const { DARABONBA_PTR_GET_DEFAULT(weightedCapacity_, 0) };
    inline ModifyScalingConfigurationRequestInstanceTypeOverrides& setWeightedCapacity(int32_t weightedCapacity) { DARABONBA_PTR_SET_VALUE(weightedCapacity_, weightedCapacity) };


  protected:
    // The instance type. If you want to specify the capacity of instance types in the scaling configuration, specify InstanceType and WeightedCapacity at the same time.
    // 
    // You can use InstanceType to specify multiple instance types and WeightedCapacity to specify the weights of the instance types.
    // 
    // > If you specify InstanceType, you cannot specify InstanceTypes.
    // 
    // You can use InstanceType to specify only instance types that are available for purchase.
    std::shared_ptr<string> instanceType_ = nullptr;
    // The weight of the instance type. The weight specifies the capacity of an instance of the specified instance type in the scaling group. If you want Auto Scaling to scale instances in the scaling group based on the weighted capacity of the instances, specify WeightedCapacity after you specify InstanceType.
    // 
    // A higher weight specifies that a smaller number of instances of the specified instance type are required to meet the expected capacity requirement.
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
