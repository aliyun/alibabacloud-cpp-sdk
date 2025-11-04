// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCALINGCONFIGURATIONSRESPONSEBODYSCALINGCONFIGURATIONSCUSTOMPRIORITIES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCALINGCONFIGURATIONSRESPONSEBODYSCALINGCONFIGURATIONSCUSTOMPRIORITIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class DescribeScalingConfigurationsResponseBodyScalingConfigurationsCustomPriorities : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeScalingConfigurationsResponseBodyScalingConfigurationsCustomPriorities& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(VswitchId, vswitchId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeScalingConfigurationsResponseBodyScalingConfigurationsCustomPriorities& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(VswitchId, vswitchId_);
    };
    DescribeScalingConfigurationsResponseBodyScalingConfigurationsCustomPriorities() = default ;
    DescribeScalingConfigurationsResponseBodyScalingConfigurationsCustomPriorities(const DescribeScalingConfigurationsResponseBodyScalingConfigurationsCustomPriorities &) = default ;
    DescribeScalingConfigurationsResponseBodyScalingConfigurationsCustomPriorities(DescribeScalingConfigurationsResponseBodyScalingConfigurationsCustomPriorities &&) = default ;
    DescribeScalingConfigurationsResponseBodyScalingConfigurationsCustomPriorities(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeScalingConfigurationsResponseBodyScalingConfigurationsCustomPriorities() = default ;
    DescribeScalingConfigurationsResponseBodyScalingConfigurationsCustomPriorities& operator=(const DescribeScalingConfigurationsResponseBodyScalingConfigurationsCustomPriorities &) = default ;
    DescribeScalingConfigurationsResponseBodyScalingConfigurationsCustomPriorities& operator=(DescribeScalingConfigurationsResponseBodyScalingConfigurationsCustomPriorities &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceType_ == nullptr
        && return this->vswitchId_ == nullptr; };
    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurationsCustomPriorities& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // vswitchId Field Functions 
    bool hasVswitchId() const { return this->vswitchId_ != nullptr;};
    void deleteVswitchId() { this->vswitchId_ = nullptr;};
    inline string vswitchId() const { DARABONBA_PTR_GET_DEFAULT(vswitchId_, "") };
    inline DescribeScalingConfigurationsResponseBodyScalingConfigurationsCustomPriorities& setVswitchId(string vswitchId) { DARABONBA_PTR_SET_VALUE(vswitchId_, vswitchId) };


  protected:
    // The ECS instance type.
    std::shared_ptr<string> instanceType_ = nullptr;
    // The vSwitch ID.
    std::shared_ptr<string> vswitchId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
