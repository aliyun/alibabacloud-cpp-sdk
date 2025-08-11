// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSCALINGCONFIGURATIONREQUESTCUSTOMPRIORITIES_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSCALINGCONFIGURATIONREQUESTCUSTOMPRIORITIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class ModifyScalingConfigurationRequestCustomPriorities : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyScalingConfigurationRequestCustomPriorities& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(VswitchId, vswitchId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyScalingConfigurationRequestCustomPriorities& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(VswitchId, vswitchId_);
    };
    ModifyScalingConfigurationRequestCustomPriorities() = default ;
    ModifyScalingConfigurationRequestCustomPriorities(const ModifyScalingConfigurationRequestCustomPriorities &) = default ;
    ModifyScalingConfigurationRequestCustomPriorities(ModifyScalingConfigurationRequestCustomPriorities &&) = default ;
    ModifyScalingConfigurationRequestCustomPriorities(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyScalingConfigurationRequestCustomPriorities() = default ;
    ModifyScalingConfigurationRequestCustomPriorities& operator=(const ModifyScalingConfigurationRequestCustomPriorities &) = default ;
    ModifyScalingConfigurationRequestCustomPriorities& operator=(ModifyScalingConfigurationRequestCustomPriorities &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceType_ != nullptr
        && this->vswitchId_ != nullptr; };
    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline ModifyScalingConfigurationRequestCustomPriorities& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // vswitchId Field Functions 
    bool hasVswitchId() const { return this->vswitchId_ != nullptr;};
    void deleteVswitchId() { this->vswitchId_ = nullptr;};
    inline string vswitchId() const { DARABONBA_PTR_GET_DEFAULT(vswitchId_, "") };
    inline ModifyScalingConfigurationRequestCustomPriorities& setVswitchId(string vswitchId) { DARABONBA_PTR_SET_VALUE(vswitchId_, vswitchId) };


  protected:
    // The ECS instance type.
    // 
    // >  The ECS instance type must be included in the instance types specified in the scaling configuration.
    std::shared_ptr<string> instanceType_ = nullptr;
    // The vSwitch ID.
    // 
    // >  The vSwitch must be included in the vSwitch list of the scaling group.
    std::shared_ptr<string> vswitchId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
