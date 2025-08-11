// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSCALINGGROUPREQUESTLAUNCHTEMPLATEOVERRIDES_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSCALINGGROUPREQUESTLAUNCHTEMPLATEOVERRIDES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class ModifyScalingGroupRequestLaunchTemplateOverrides : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyScalingGroupRequestLaunchTemplateOverrides& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(SpotPriceLimit, spotPriceLimit_);
      DARABONBA_PTR_TO_JSON(WeightedCapacity, weightedCapacity_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyScalingGroupRequestLaunchTemplateOverrides& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(SpotPriceLimit, spotPriceLimit_);
      DARABONBA_PTR_FROM_JSON(WeightedCapacity, weightedCapacity_);
    };
    ModifyScalingGroupRequestLaunchTemplateOverrides() = default ;
    ModifyScalingGroupRequestLaunchTemplateOverrides(const ModifyScalingGroupRequestLaunchTemplateOverrides &) = default ;
    ModifyScalingGroupRequestLaunchTemplateOverrides(ModifyScalingGroupRequestLaunchTemplateOverrides &&) = default ;
    ModifyScalingGroupRequestLaunchTemplateOverrides(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyScalingGroupRequestLaunchTemplateOverrides() = default ;
    ModifyScalingGroupRequestLaunchTemplateOverrides& operator=(const ModifyScalingGroupRequestLaunchTemplateOverrides &) = default ;
    ModifyScalingGroupRequestLaunchTemplateOverrides& operator=(ModifyScalingGroupRequestLaunchTemplateOverrides &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceType_ != nullptr
        && this->spotPriceLimit_ != nullptr && this->weightedCapacity_ != nullptr; };
    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline ModifyScalingGroupRequestLaunchTemplateOverrides& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // spotPriceLimit Field Functions 
    bool hasSpotPriceLimit() const { return this->spotPriceLimit_ != nullptr;};
    void deleteSpotPriceLimit() { this->spotPriceLimit_ = nullptr;};
    inline float spotPriceLimit() const { DARABONBA_PTR_GET_DEFAULT(spotPriceLimit_, 0.0) };
    inline ModifyScalingGroupRequestLaunchTemplateOverrides& setSpotPriceLimit(float spotPriceLimit) { DARABONBA_PTR_SET_VALUE(spotPriceLimit_, spotPriceLimit) };


    // weightedCapacity Field Functions 
    bool hasWeightedCapacity() const { return this->weightedCapacity_ != nullptr;};
    void deleteWeightedCapacity() { this->weightedCapacity_ = nullptr;};
    inline int32_t weightedCapacity() const { DARABONBA_PTR_GET_DEFAULT(weightedCapacity_, 0) };
    inline ModifyScalingGroupRequestLaunchTemplateOverrides& setWeightedCapacity(int32_t weightedCapacity) { DARABONBA_PTR_SET_VALUE(weightedCapacity_, weightedCapacity) };


  protected:
    // The instance type. The instance type that you specify by using the InstanceType parameter overwrites the instance type that is specified in the launch template.
    // 
    // If you want Auto Scaling to scale instances in the scaling group based on the instance type weight, you must specify both the InstanceType and WeightedCapacity parameters.
    // 
    // > This parameter takes effect only after you specify the LaunchTemplateId parameter.
    // 
    // You can use the InstanceType parameter to specify only instance types that are available for purchase.
    std::shared_ptr<string> instanceType_ = nullptr;
    std::shared_ptr<float> spotPriceLimit_ = nullptr;
    // The weight of the instance type. The weight specifies the capacity of a single instance of the specified instance type in the scaling group. If you want Auto Scaling to scale instances in the scaling group based on the weighted capacity of instances, you must specify the WeightedCapacity parameter after you specify the InstanceType parameter.
    // 
    // A higher weight specifies that a smaller number of instances of the specified instance type are required to meet the expected capacity.
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
    // > The capacity of the scaling group cannot exceed the sum of the maximum number of instances that is specified by the MaxSize parameter and the maximum weight of the instance type.
    // 
    // Valid values of the WeightedCapacity parameter: 1 to 500.
    std::shared_ptr<int32_t> weightedCapacity_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
