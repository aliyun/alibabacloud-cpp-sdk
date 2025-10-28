// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAPPLICATIONSCALINGRULERESPONSEBODYAPPSCALINGRULEBEHAVIOURSCALEDOWN_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAPPLICATIONSCALINGRULERESPONSEBODYAPPSCALINGRULEBEHAVIOURSCALEDOWN_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateApplicationScalingRuleResponseBodyAppScalingRuleBehaviourScaleDownPolicies.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class UpdateApplicationScalingRuleResponseBodyAppScalingRuleBehaviourScaleDown : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateApplicationScalingRuleResponseBodyAppScalingRuleBehaviourScaleDown& obj) { 
      DARABONBA_PTR_TO_JSON(Policies, policies_);
      DARABONBA_PTR_TO_JSON(SelectPolicy, selectPolicy_);
      DARABONBA_PTR_TO_JSON(StabilizationWindowSeconds, stabilizationWindowSeconds_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateApplicationScalingRuleResponseBodyAppScalingRuleBehaviourScaleDown& obj) { 
      DARABONBA_PTR_FROM_JSON(Policies, policies_);
      DARABONBA_PTR_FROM_JSON(SelectPolicy, selectPolicy_);
      DARABONBA_PTR_FROM_JSON(StabilizationWindowSeconds, stabilizationWindowSeconds_);
    };
    UpdateApplicationScalingRuleResponseBodyAppScalingRuleBehaviourScaleDown() = default ;
    UpdateApplicationScalingRuleResponseBodyAppScalingRuleBehaviourScaleDown(const UpdateApplicationScalingRuleResponseBodyAppScalingRuleBehaviourScaleDown &) = default ;
    UpdateApplicationScalingRuleResponseBodyAppScalingRuleBehaviourScaleDown(UpdateApplicationScalingRuleResponseBodyAppScalingRuleBehaviourScaleDown &&) = default ;
    UpdateApplicationScalingRuleResponseBodyAppScalingRuleBehaviourScaleDown(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateApplicationScalingRuleResponseBodyAppScalingRuleBehaviourScaleDown() = default ;
    UpdateApplicationScalingRuleResponseBodyAppScalingRuleBehaviourScaleDown& operator=(const UpdateApplicationScalingRuleResponseBodyAppScalingRuleBehaviourScaleDown &) = default ;
    UpdateApplicationScalingRuleResponseBodyAppScalingRuleBehaviourScaleDown& operator=(UpdateApplicationScalingRuleResponseBodyAppScalingRuleBehaviourScaleDown &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->policies_ == nullptr
        && return this->selectPolicy_ == nullptr && return this->stabilizationWindowSeconds_ == nullptr; };
    // policies Field Functions 
    bool hasPolicies() const { return this->policies_ != nullptr;};
    void deletePolicies() { this->policies_ = nullptr;};
    inline const vector<Models::UpdateApplicationScalingRuleResponseBodyAppScalingRuleBehaviourScaleDownPolicies> & policies() const { DARABONBA_PTR_GET_CONST(policies_, vector<Models::UpdateApplicationScalingRuleResponseBodyAppScalingRuleBehaviourScaleDownPolicies>) };
    inline vector<Models::UpdateApplicationScalingRuleResponseBodyAppScalingRuleBehaviourScaleDownPolicies> policies() { DARABONBA_PTR_GET(policies_, vector<Models::UpdateApplicationScalingRuleResponseBodyAppScalingRuleBehaviourScaleDownPolicies>) };
    inline UpdateApplicationScalingRuleResponseBodyAppScalingRuleBehaviourScaleDown& setPolicies(const vector<Models::UpdateApplicationScalingRuleResponseBodyAppScalingRuleBehaviourScaleDownPolicies> & policies) { DARABONBA_PTR_SET_VALUE(policies_, policies) };
    inline UpdateApplicationScalingRuleResponseBodyAppScalingRuleBehaviourScaleDown& setPolicies(vector<Models::UpdateApplicationScalingRuleResponseBodyAppScalingRuleBehaviourScaleDownPolicies> && policies) { DARABONBA_PTR_SET_RVALUE(policies_, policies) };


    // selectPolicy Field Functions 
    bool hasSelectPolicy() const { return this->selectPolicy_ != nullptr;};
    void deleteSelectPolicy() { this->selectPolicy_ = nullptr;};
    inline string selectPolicy() const { DARABONBA_PTR_GET_DEFAULT(selectPolicy_, "") };
    inline UpdateApplicationScalingRuleResponseBodyAppScalingRuleBehaviourScaleDown& setSelectPolicy(string selectPolicy) { DARABONBA_PTR_SET_VALUE(selectPolicy_, selectPolicy) };


    // stabilizationWindowSeconds Field Functions 
    bool hasStabilizationWindowSeconds() const { return this->stabilizationWindowSeconds_ != nullptr;};
    void deleteStabilizationWindowSeconds() { this->stabilizationWindowSeconds_ = nullptr;};
    inline int32_t stabilizationWindowSeconds() const { DARABONBA_PTR_GET_DEFAULT(stabilizationWindowSeconds_, 0) };
    inline UpdateApplicationScalingRuleResponseBodyAppScalingRuleBehaviourScaleDown& setStabilizationWindowSeconds(int32_t stabilizationWindowSeconds) { DARABONBA_PTR_SET_VALUE(stabilizationWindowSeconds_, stabilizationWindowSeconds) };


  protected:
    // The configuration of the policy.
    std::shared_ptr<vector<Models::UpdateApplicationScalingRuleResponseBodyAppScalingRuleBehaviourScaleDownPolicies>> policies_ = nullptr;
    // The step size policy for the scale-in. Valid values: Max, Min, and Disable.
    std::shared_ptr<string> selectPolicy_ = nullptr;
    // The cooldown time of the scale-in. Valid values: 0 to 3600. Unit: seconds. Default value: 300.
    std::shared_ptr<int32_t> stabilizationWindowSeconds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
