// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENABLESCALINGGROUPREQUESTLAUNCHTEMPLATEOVERRIDES_HPP_
#define ALIBABACLOUD_MODELS_ENABLESCALINGGROUPREQUESTLAUNCHTEMPLATEOVERRIDES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class EnableScalingGroupRequestLaunchTemplateOverrides : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnableScalingGroupRequestLaunchTemplateOverrides& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(WeightedCapacity, weightedCapacity_);
    };
    friend void from_json(const Darabonba::Json& j, EnableScalingGroupRequestLaunchTemplateOverrides& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(WeightedCapacity, weightedCapacity_);
    };
    EnableScalingGroupRequestLaunchTemplateOverrides() = default ;
    EnableScalingGroupRequestLaunchTemplateOverrides(const EnableScalingGroupRequestLaunchTemplateOverrides &) = default ;
    EnableScalingGroupRequestLaunchTemplateOverrides(EnableScalingGroupRequestLaunchTemplateOverrides &&) = default ;
    EnableScalingGroupRequestLaunchTemplateOverrides(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnableScalingGroupRequestLaunchTemplateOverrides() = default ;
    EnableScalingGroupRequestLaunchTemplateOverrides& operator=(const EnableScalingGroupRequestLaunchTemplateOverrides &) = default ;
    EnableScalingGroupRequestLaunchTemplateOverrides& operator=(EnableScalingGroupRequestLaunchTemplateOverrides &&) = default ;
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
    inline EnableScalingGroupRequestLaunchTemplateOverrides& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // weightedCapacity Field Functions 
    bool hasWeightedCapacity() const { return this->weightedCapacity_ != nullptr;};
    void deleteWeightedCapacity() { this->weightedCapacity_ = nullptr;};
    inline int32_t weightedCapacity() const { DARABONBA_PTR_GET_DEFAULT(weightedCapacity_, 0) };
    inline EnableScalingGroupRequestLaunchTemplateOverrides& setWeightedCapacity(int32_t weightedCapacity) { DARABONBA_PTR_SET_VALUE(weightedCapacity_, weightedCapacity) };


  protected:
    // The instance type. If you want to scale instances based on instance type weights in the scaling group, you must specify `LaunchTemplateOverrides.WeightedCapacity` after you specify this parameter.
    // 
    // The instance type specified by using this parameter overwrites the instance type of the launch template.
    // 
    // >  This parameter takes effect only if you specify LaunchTemplateId.
    // 
    // You can use this parameter to specify any instance types that are available for purchase.
    std::shared_ptr<string> instanceType_ = nullptr;
    // The weight of the instance type. If you want to scale instances based on instance type weights in the scaling group, you must specify this parameter after you specify `LaunchTemplateOverrides.InstanceType`.
    // 
    // The weight specifies the capacity of an instance of the specified instance type in the scaling group. A higher weight specifies that a smaller number of instances of the specified instance type are required to meet the expected capacity requirement.
    // 
    // Performance metrics such as the number of vCPUs and the memory size of each instance type may vary. You can specify different weights for different instance types based on your business requirements.
    // 
    // Example:
    // 
    // *   Current capacity: 0
    // *   Expected capacity: 6
    // *   Capacity of ecs.c5.xlarge: 4
    // 
    // To reach the expected capacity, Auto Scaling must scale out two instances of ecs.c5.xlarge.
    // 
    // >  The total capacity of the scaling group is constrained and cannot surpass the combined total of the maximum group size defined by MaxSize and the highest weight assigned to any instance type.
    // 
    // Valid values of WeightedCapacity: 1 to 500.
    std::shared_ptr<int32_t> weightedCapacity_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
