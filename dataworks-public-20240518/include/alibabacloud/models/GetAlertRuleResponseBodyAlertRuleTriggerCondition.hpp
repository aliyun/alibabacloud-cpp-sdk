// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETALERTRULERESPONSEBODYALERTRULETRIGGERCONDITION_HPP_
#define ALIBABACLOUD_MODELS_GETALERTRULERESPONSEBODYALERTRULETRIGGERCONDITION_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetAlertRuleResponseBodyAlertRuleTriggerConditionExtension.hpp>
#include <alibabacloud/models/GetAlertRuleResponseBodyAlertRuleTriggerConditionTarget.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetAlertRuleResponseBodyAlertRuleTriggerCondition : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAlertRuleResponseBodyAlertRuleTriggerCondition& obj) { 
      DARABONBA_PTR_TO_JSON(Extension, extension_);
      DARABONBA_PTR_TO_JSON(Target, target_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetAlertRuleResponseBodyAlertRuleTriggerCondition& obj) { 
      DARABONBA_PTR_FROM_JSON(Extension, extension_);
      DARABONBA_PTR_FROM_JSON(Target, target_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetAlertRuleResponseBodyAlertRuleTriggerCondition() = default ;
    GetAlertRuleResponseBodyAlertRuleTriggerCondition(const GetAlertRuleResponseBodyAlertRuleTriggerCondition &) = default ;
    GetAlertRuleResponseBodyAlertRuleTriggerCondition(GetAlertRuleResponseBodyAlertRuleTriggerCondition &&) = default ;
    GetAlertRuleResponseBodyAlertRuleTriggerCondition(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAlertRuleResponseBodyAlertRuleTriggerCondition() = default ;
    GetAlertRuleResponseBodyAlertRuleTriggerCondition& operator=(const GetAlertRuleResponseBodyAlertRuleTriggerCondition &) = default ;
    GetAlertRuleResponseBodyAlertRuleTriggerCondition& operator=(GetAlertRuleResponseBodyAlertRuleTriggerCondition &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->extension_ == nullptr
        && return this->target_ == nullptr && return this->type_ == nullptr; };
    // extension Field Functions 
    bool hasExtension() const { return this->extension_ != nullptr;};
    void deleteExtension() { this->extension_ = nullptr;};
    inline const Models::GetAlertRuleResponseBodyAlertRuleTriggerConditionExtension & extension() const { DARABONBA_PTR_GET_CONST(extension_, Models::GetAlertRuleResponseBodyAlertRuleTriggerConditionExtension) };
    inline Models::GetAlertRuleResponseBodyAlertRuleTriggerConditionExtension extension() { DARABONBA_PTR_GET(extension_, Models::GetAlertRuleResponseBodyAlertRuleTriggerConditionExtension) };
    inline GetAlertRuleResponseBodyAlertRuleTriggerCondition& setExtension(const Models::GetAlertRuleResponseBodyAlertRuleTriggerConditionExtension & extension) { DARABONBA_PTR_SET_VALUE(extension_, extension) };
    inline GetAlertRuleResponseBodyAlertRuleTriggerCondition& setExtension(Models::GetAlertRuleResponseBodyAlertRuleTriggerConditionExtension && extension) { DARABONBA_PTR_SET_RVALUE(extension_, extension) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline const Models::GetAlertRuleResponseBodyAlertRuleTriggerConditionTarget & target() const { DARABONBA_PTR_GET_CONST(target_, Models::GetAlertRuleResponseBodyAlertRuleTriggerConditionTarget) };
    inline Models::GetAlertRuleResponseBodyAlertRuleTriggerConditionTarget target() { DARABONBA_PTR_GET(target_, Models::GetAlertRuleResponseBodyAlertRuleTriggerConditionTarget) };
    inline GetAlertRuleResponseBodyAlertRuleTriggerCondition& setTarget(const Models::GetAlertRuleResponseBodyAlertRuleTriggerConditionTarget & target) { DARABONBA_PTR_SET_VALUE(target_, target) };
    inline GetAlertRuleResponseBodyAlertRuleTriggerCondition& setTarget(Models::GetAlertRuleResponseBodyAlertRuleTriggerConditionTarget && target) { DARABONBA_PTR_SET_RVALUE(target_, target) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetAlertRuleResponseBodyAlertRuleTriggerCondition& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The extended information about the rule. This parameter is required for specific types of alerts.
    std::shared_ptr<Models::GetAlertRuleResponseBodyAlertRuleTriggerConditionExtension> extension_ = nullptr;
    // The monitored objects.
    std::shared_ptr<Models::GetAlertRuleResponseBodyAlertRuleTriggerConditionTarget> target_ = nullptr;
    // The alert type. Valid values:
    // 
    // *   Finished: An instance is successfully run.
    // *   UnFinished: An instance does not finish running before a specified point in time.
    // *   Error: An error occurs on an instance.
    // *   CycleUnfinished: An instance does not finish running as expected within a specific cycle.
    // *   Timeout: An instance times out.
    // *   InstanceTransferComplete: An instance is generated by the auto triggered node.
    // *   InstanceTransferFluctuate: The number of generated instances fluctuates.
    // *   ExhaustedError: An error persists after an instance is automatically rerun.
    // *   InstanceKeyword: An instance with errors contains specified keywords.
    // *   InstanceErrorCount: The number of instances on which an error occurs reaches a specified threshold.
    // *   InstanceErrorPercentage: The proportion of instances on which an error occurs in the workspace to the total number of instances reaches a specified threshold.
    // *   ResourceGroupPercentage: The usage rate of the resource group reaches a specified threshold.
    // *   ResourceGroupWaitCount: The number of instances that are waiting for resources in the resource group reaches a specified threshold.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
