// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCALINGGROUPSRESPONSEBODYSCALINGGROUPSLAUNCHTEMPLATEOVERRIDES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCALINGGROUPSRESPONSEBODYSCALINGGROUPSLAUNCHTEMPLATEOVERRIDES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class DescribeScalingGroupsResponseBodyScalingGroupsLaunchTemplateOverrides : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeScalingGroupsResponseBodyScalingGroupsLaunchTemplateOverrides& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(SpotPriceLimit, spotPriceLimit_);
      DARABONBA_PTR_TO_JSON(WeightedCapacity, weightedCapacity_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeScalingGroupsResponseBodyScalingGroupsLaunchTemplateOverrides& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(SpotPriceLimit, spotPriceLimit_);
      DARABONBA_PTR_FROM_JSON(WeightedCapacity, weightedCapacity_);
    };
    DescribeScalingGroupsResponseBodyScalingGroupsLaunchTemplateOverrides() = default ;
    DescribeScalingGroupsResponseBodyScalingGroupsLaunchTemplateOverrides(const DescribeScalingGroupsResponseBodyScalingGroupsLaunchTemplateOverrides &) = default ;
    DescribeScalingGroupsResponseBodyScalingGroupsLaunchTemplateOverrides(DescribeScalingGroupsResponseBodyScalingGroupsLaunchTemplateOverrides &&) = default ;
    DescribeScalingGroupsResponseBodyScalingGroupsLaunchTemplateOverrides(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeScalingGroupsResponseBodyScalingGroupsLaunchTemplateOverrides() = default ;
    DescribeScalingGroupsResponseBodyScalingGroupsLaunchTemplateOverrides& operator=(const DescribeScalingGroupsResponseBodyScalingGroupsLaunchTemplateOverrides &) = default ;
    DescribeScalingGroupsResponseBodyScalingGroupsLaunchTemplateOverrides& operator=(DescribeScalingGroupsResponseBodyScalingGroupsLaunchTemplateOverrides &&) = default ;
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
    inline DescribeScalingGroupsResponseBodyScalingGroupsLaunchTemplateOverrides& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // spotPriceLimit Field Functions 
    bool hasSpotPriceLimit() const { return this->spotPriceLimit_ != nullptr;};
    void deleteSpotPriceLimit() { this->spotPriceLimit_ = nullptr;};
    inline float spotPriceLimit() const { DARABONBA_PTR_GET_DEFAULT(spotPriceLimit_, 0.0) };
    inline DescribeScalingGroupsResponseBodyScalingGroupsLaunchTemplateOverrides& setSpotPriceLimit(float spotPriceLimit) { DARABONBA_PTR_SET_VALUE(spotPriceLimit_, spotPriceLimit) };


    // weightedCapacity Field Functions 
    bool hasWeightedCapacity() const { return this->weightedCapacity_ != nullptr;};
    void deleteWeightedCapacity() { this->weightedCapacity_ = nullptr;};
    inline int32_t weightedCapacity() const { DARABONBA_PTR_GET_DEFAULT(weightedCapacity_, 0) };
    inline DescribeScalingGroupsResponseBodyScalingGroupsLaunchTemplateOverrides& setWeightedCapacity(int32_t weightedCapacity) { DARABONBA_PTR_SET_VALUE(weightedCapacity_, weightedCapacity) };


  protected:
    // The instance type. The instance type that is specified by this parameter overrides the instance type that is specified in the launch template.
    std::shared_ptr<string> instanceType_ = nullptr;
    // The maximum bid price of the instance type that is specified by `LaunchTemplateOverride.InstanceType`.
    // 
    // >  This parameter takes effect only if you use `LaunchTemplateId` to specify a launch template.
    std::shared_ptr<float> spotPriceLimit_ = nullptr;
    // The weight of the instance type. The value of this parameter indicates the capacity of a single instance of the specified instance type in the scaling group. A higher weight indicates that a smaller number of instances of the specified instance type are required to meet the expected capacity.
    std::shared_ptr<int32_t> weightedCapacity_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
