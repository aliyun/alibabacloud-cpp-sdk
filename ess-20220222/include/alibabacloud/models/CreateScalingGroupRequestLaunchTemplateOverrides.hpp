// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESCALINGGROUPREQUESTLAUNCHTEMPLATEOVERRIDES_HPP_
#define ALIBABACLOUD_MODELS_CREATESCALINGGROUPREQUESTLAUNCHTEMPLATEOVERRIDES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class CreateScalingGroupRequestLaunchTemplateOverrides : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateScalingGroupRequestLaunchTemplateOverrides& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(SpotPriceLimit, spotPriceLimit_);
      DARABONBA_PTR_TO_JSON(WeightedCapacity, weightedCapacity_);
    };
    friend void from_json(const Darabonba::Json& j, CreateScalingGroupRequestLaunchTemplateOverrides& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(SpotPriceLimit, spotPriceLimit_);
      DARABONBA_PTR_FROM_JSON(WeightedCapacity, weightedCapacity_);
    };
    CreateScalingGroupRequestLaunchTemplateOverrides() = default ;
    CreateScalingGroupRequestLaunchTemplateOverrides(const CreateScalingGroupRequestLaunchTemplateOverrides &) = default ;
    CreateScalingGroupRequestLaunchTemplateOverrides(CreateScalingGroupRequestLaunchTemplateOverrides &&) = default ;
    CreateScalingGroupRequestLaunchTemplateOverrides(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateScalingGroupRequestLaunchTemplateOverrides() = default ;
    CreateScalingGroupRequestLaunchTemplateOverrides& operator=(const CreateScalingGroupRequestLaunchTemplateOverrides &) = default ;
    CreateScalingGroupRequestLaunchTemplateOverrides& operator=(CreateScalingGroupRequestLaunchTemplateOverrides &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceType_ == nullptr
        && return this->spotPriceLimit_ == nullptr && return this->weightedCapacity_ == nullptr; };
    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline CreateScalingGroupRequestLaunchTemplateOverrides& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // spotPriceLimit Field Functions 
    bool hasSpotPriceLimit() const { return this->spotPriceLimit_ != nullptr;};
    void deleteSpotPriceLimit() { this->spotPriceLimit_ = nullptr;};
    inline float spotPriceLimit() const { DARABONBA_PTR_GET_DEFAULT(spotPriceLimit_, 0.0) };
    inline CreateScalingGroupRequestLaunchTemplateOverrides& setSpotPriceLimit(float spotPriceLimit) { DARABONBA_PTR_SET_VALUE(spotPriceLimit_, spotPriceLimit) };


    // weightedCapacity Field Functions 
    bool hasWeightedCapacity() const { return this->weightedCapacity_ != nullptr;};
    void deleteWeightedCapacity() { this->weightedCapacity_ = nullptr;};
    inline int32_t weightedCapacity() const { DARABONBA_PTR_GET_DEFAULT(weightedCapacity_, 0) };
    inline CreateScalingGroupRequestLaunchTemplateOverrides& setWeightedCapacity(int32_t weightedCapacity) { DARABONBA_PTR_SET_VALUE(weightedCapacity_, weightedCapacity) };


  protected:
    // The instance type that you want to use to override the instance type that is specified in the launch template.
    // 
    // If you want to scale instances based on the weighted capacities of the instances, you must specify both the InstanceType and WeightedCapacity parameters.
    // 
    // > This parameter is available only if you specify the LaunchTemplateId parameter.
    // 
    // You can use the InstanceType parameter to specify only instance types that are available for purchase.
    std::shared_ptr<string> instanceType_ = nullptr;
    // The maximum bid price of the instance type that is specified by the `InstanceType` parameter. You can specify 1 to 10 instance types by using the Extended Configurations feature of the launch template.
    // 
    // > This parameter is available only if you specify the `LaunchTemplateId` parameter.
    std::shared_ptr<float> spotPriceLimit_ = nullptr;
    // The weight of the instance type. The weight specifies the capacity of an instance of the specified instance type in the scaling group. If you want to scale instances based on the weighted capacities of the instances, you must specify the WeightedCapacity parameter after you specify the InstanceType parameter.
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
    // > The capacity of the scaling group cannot exceed the sum of the maximum number of instances that is specified by the MaxSize parameter and the maximum weight of the instance types.
    // 
    // Valid values of the WeightedCapacity parameter: 1 to 500.
    std::shared_ptr<int32_t> weightedCapacity_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
