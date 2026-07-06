// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSCHEDULEDSCALINGRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSCHEDULEDSCALINGRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alikafka20190916
{
namespace Models
{
  class ModifyScheduledScalingRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyScheduledScalingRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyScheduledScalingRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
    };
    ModifyScheduledScalingRuleRequest() = default ;
    ModifyScheduledScalingRuleRequest(const ModifyScheduledScalingRuleRequest &) = default ;
    ModifyScheduledScalingRuleRequest(ModifyScheduledScalingRuleRequest &&) = default ;
    ModifyScheduledScalingRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyScheduledScalingRuleRequest() = default ;
    ModifyScheduledScalingRuleRequest& operator=(const ModifyScheduledScalingRuleRequest &) = default ;
    ModifyScheduledScalingRuleRequest& operator=(ModifyScheduledScalingRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enable_ == nullptr
        && this->instanceId_ == nullptr && this->regionId_ == nullptr && this->ruleName_ == nullptr; };
    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline ModifyScheduledScalingRuleRequest& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyScheduledScalingRuleRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyScheduledScalingRuleRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline ModifyScheduledScalingRuleRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


  protected:
    // Enable or disable the scheduled task policy. Valid values:
    // 
    // - **true**: Enable.
    // 
    // - **false**: Disable.
    // 
    // > For a one-time scheduling policy type, the start execution time must be more than 30 minutes later than the current time for the policy to be enabled.
    // 
    // This parameter is required.
    shared_ptr<bool> enable_ {};
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The region ID of the instance.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The policy name.
    // 
    // This parameter is required.
    shared_ptr<string> ruleName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alikafka20190916
#endif
