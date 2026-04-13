// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCALINGACTIVITY_HPP_
#define ALIBABACLOUD_MODELS_SCALINGACTIVITY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Milvus20231012
{
namespace Models
{
  class ScalingActivity : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ScalingActivity& obj) { 
      DARABONBA_PTR_TO_JSON(componentTypes, componentTypes_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(policyType, policyType_);
      DARABONBA_PTR_TO_JSON(scalingActivityId, scalingActivityId_);
      DARABONBA_PTR_TO_JSON(scalingActivityState, scalingActivityState_);
      DARABONBA_PTR_TO_JSON(scalingPolicyId, scalingPolicyId_);
      DARABONBA_PTR_TO_JSON(scalingRuleDetail, scalingRuleDetail_);
      DARABONBA_PTR_TO_JSON(scalingRuleId, scalingRuleId_);
      DARABONBA_PTR_TO_JSON(scalingRuleName, scalingRuleName_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
      DARABONBA_PTR_TO_JSON(timeZone, timeZone_);
    };
    friend void from_json(const Darabonba::Json& j, ScalingActivity& obj) { 
      DARABONBA_PTR_FROM_JSON(componentTypes, componentTypes_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(policyType, policyType_);
      DARABONBA_PTR_FROM_JSON(scalingActivityId, scalingActivityId_);
      DARABONBA_PTR_FROM_JSON(scalingActivityState, scalingActivityState_);
      DARABONBA_PTR_FROM_JSON(scalingPolicyId, scalingPolicyId_);
      DARABONBA_PTR_FROM_JSON(scalingRuleDetail, scalingRuleDetail_);
      DARABONBA_PTR_FROM_JSON(scalingRuleId, scalingRuleId_);
      DARABONBA_PTR_FROM_JSON(scalingRuleName, scalingRuleName_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
      DARABONBA_PTR_FROM_JSON(timeZone, timeZone_);
    };
    ScalingActivity() = default ;
    ScalingActivity(const ScalingActivity &) = default ;
    ScalingActivity(ScalingActivity &&) = default ;
    ScalingActivity(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ScalingActivity() = default ;
    ScalingActivity& operator=(const ScalingActivity &) = default ;
    ScalingActivity& operator=(ScalingActivity &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->componentTypes_ == nullptr
        && this->description_ == nullptr && this->endTime_ == nullptr && this->instanceId_ == nullptr && this->policyType_ == nullptr && this->scalingActivityId_ == nullptr
        && this->scalingActivityState_ == nullptr && this->scalingPolicyId_ == nullptr && this->scalingRuleDetail_ == nullptr && this->scalingRuleId_ == nullptr && this->scalingRuleName_ == nullptr
        && this->startTime_ == nullptr && this->timeZone_ == nullptr; };
    // componentTypes Field Functions 
    bool hasComponentTypes() const { return this->componentTypes_ != nullptr;};
    void deleteComponentTypes() { this->componentTypes_ = nullptr;};
    inline string getComponentTypes() const { DARABONBA_PTR_GET_DEFAULT(componentTypes_, "") };
    inline ScalingActivity& setComponentTypes(string componentTypes) { DARABONBA_PTR_SET_VALUE(componentTypes_, componentTypes) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ScalingActivity& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline ScalingActivity& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ScalingActivity& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // policyType Field Functions 
    bool hasPolicyType() const { return this->policyType_ != nullptr;};
    void deletePolicyType() { this->policyType_ = nullptr;};
    inline string getPolicyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
    inline ScalingActivity& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


    // scalingActivityId Field Functions 
    bool hasScalingActivityId() const { return this->scalingActivityId_ != nullptr;};
    void deleteScalingActivityId() { this->scalingActivityId_ = nullptr;};
    inline string getScalingActivityId() const { DARABONBA_PTR_GET_DEFAULT(scalingActivityId_, "") };
    inline ScalingActivity& setScalingActivityId(string scalingActivityId) { DARABONBA_PTR_SET_VALUE(scalingActivityId_, scalingActivityId) };


    // scalingActivityState Field Functions 
    bool hasScalingActivityState() const { return this->scalingActivityState_ != nullptr;};
    void deleteScalingActivityState() { this->scalingActivityState_ = nullptr;};
    inline string getScalingActivityState() const { DARABONBA_PTR_GET_DEFAULT(scalingActivityState_, "") };
    inline ScalingActivity& setScalingActivityState(string scalingActivityState) { DARABONBA_PTR_SET_VALUE(scalingActivityState_, scalingActivityState) };


    // scalingPolicyId Field Functions 
    bool hasScalingPolicyId() const { return this->scalingPolicyId_ != nullptr;};
    void deleteScalingPolicyId() { this->scalingPolicyId_ = nullptr;};
    inline string getScalingPolicyId() const { DARABONBA_PTR_GET_DEFAULT(scalingPolicyId_, "") };
    inline ScalingActivity& setScalingPolicyId(string scalingPolicyId) { DARABONBA_PTR_SET_VALUE(scalingPolicyId_, scalingPolicyId) };


    // scalingRuleDetail Field Functions 
    bool hasScalingRuleDetail() const { return this->scalingRuleDetail_ != nullptr;};
    void deleteScalingRuleDetail() { this->scalingRuleDetail_ = nullptr;};
    inline string getScalingRuleDetail() const { DARABONBA_PTR_GET_DEFAULT(scalingRuleDetail_, "") };
    inline ScalingActivity& setScalingRuleDetail(string scalingRuleDetail) { DARABONBA_PTR_SET_VALUE(scalingRuleDetail_, scalingRuleDetail) };


    // scalingRuleId Field Functions 
    bool hasScalingRuleId() const { return this->scalingRuleId_ != nullptr;};
    void deleteScalingRuleId() { this->scalingRuleId_ = nullptr;};
    inline string getScalingRuleId() const { DARABONBA_PTR_GET_DEFAULT(scalingRuleId_, "") };
    inline ScalingActivity& setScalingRuleId(string scalingRuleId) { DARABONBA_PTR_SET_VALUE(scalingRuleId_, scalingRuleId) };


    // scalingRuleName Field Functions 
    bool hasScalingRuleName() const { return this->scalingRuleName_ != nullptr;};
    void deleteScalingRuleName() { this->scalingRuleName_ = nullptr;};
    inline string getScalingRuleName() const { DARABONBA_PTR_GET_DEFAULT(scalingRuleName_, "") };
    inline ScalingActivity& setScalingRuleName(string scalingRuleName) { DARABONBA_PTR_SET_VALUE(scalingRuleName_, scalingRuleName) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ScalingActivity& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // timeZone Field Functions 
    bool hasTimeZone() const { return this->timeZone_ != nullptr;};
    void deleteTimeZone() { this->timeZone_ = nullptr;};
    inline string getTimeZone() const { DARABONBA_PTR_GET_DEFAULT(timeZone_, "") };
    inline ScalingActivity& setTimeZone(string timeZone) { DARABONBA_PTR_SET_VALUE(timeZone_, timeZone) };


  protected:
    shared_ptr<string> componentTypes_ {};
    shared_ptr<string> description_ {};
    shared_ptr<string> endTime_ {};
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> policyType_ {};
    shared_ptr<string> scalingActivityId_ {};
    shared_ptr<string> scalingActivityState_ {};
    shared_ptr<string> scalingPolicyId_ {};
    shared_ptr<string> scalingRuleDetail_ {};
    shared_ptr<string> scalingRuleId_ {};
    shared_ptr<string> scalingRuleName_ {};
    shared_ptr<string> startTime_ {};
    shared_ptr<string> timeZone_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Milvus20231012
#endif
