// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AUTOSCALINGPOLICY_HPP_
#define ALIBABACLOUD_MODELS_AUTOSCALINGPOLICY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AutoScalingPolicyConstraints.hpp>
#include <vector>
#include <alibabacloud/models/ScalingRule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class AutoScalingPolicy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AutoScalingPolicy& obj) { 
      DARABONBA_PTR_TO_JSON(Constraints, constraints_);
      DARABONBA_PTR_TO_JSON(ScalingRules, scalingRules_);
    };
    friend void from_json(const Darabonba::Json& j, AutoScalingPolicy& obj) { 
      DARABONBA_PTR_FROM_JSON(Constraints, constraints_);
      DARABONBA_PTR_FROM_JSON(ScalingRules, scalingRules_);
    };
    AutoScalingPolicy() = default ;
    AutoScalingPolicy(const AutoScalingPolicy &) = default ;
    AutoScalingPolicy(AutoScalingPolicy &&) = default ;
    AutoScalingPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AutoScalingPolicy() = default ;
    AutoScalingPolicy& operator=(const AutoScalingPolicy &) = default ;
    AutoScalingPolicy& operator=(AutoScalingPolicy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->constraints_ != nullptr
        && this->scalingRules_ != nullptr; };
    // constraints Field Functions 
    bool hasConstraints() const { return this->constraints_ != nullptr;};
    void deleteConstraints() { this->constraints_ = nullptr;};
    inline const AutoScalingPolicyConstraints & constraints() const { DARABONBA_PTR_GET_CONST(constraints_, AutoScalingPolicyConstraints) };
    inline AutoScalingPolicyConstraints constraints() { DARABONBA_PTR_GET(constraints_, AutoScalingPolicyConstraints) };
    inline AutoScalingPolicy& setConstraints(const AutoScalingPolicyConstraints & constraints) { DARABONBA_PTR_SET_VALUE(constraints_, constraints) };
    inline AutoScalingPolicy& setConstraints(AutoScalingPolicyConstraints && constraints) { DARABONBA_PTR_SET_RVALUE(constraints_, constraints) };


    // scalingRules Field Functions 
    bool hasScalingRules() const { return this->scalingRules_ != nullptr;};
    void deleteScalingRules() { this->scalingRules_ = nullptr;};
    inline const vector<ScalingRule> & scalingRules() const { DARABONBA_PTR_GET_CONST(scalingRules_, vector<ScalingRule>) };
    inline vector<ScalingRule> scalingRules() { DARABONBA_PTR_GET(scalingRules_, vector<ScalingRule>) };
    inline AutoScalingPolicy& setScalingRules(const vector<ScalingRule> & scalingRules) { DARABONBA_PTR_SET_VALUE(scalingRules_, scalingRules) };
    inline AutoScalingPolicy& setScalingRules(vector<ScalingRule> && scalingRules) { DARABONBA_PTR_SET_RVALUE(scalingRules_, scalingRules) };


  protected:
    std::shared_ptr<AutoScalingPolicyConstraints> constraints_ = nullptr;
    std::shared_ptr<vector<ScalingRule>> scalingRules_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
