// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAPPLICATIONSCALINGRULERESPONSEBODYAPPSCALINGRULEBEHAVIOUR_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAPPLICATIONSCALINGRULERESPONSEBODYAPPSCALINGRULEBEHAVIOUR_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateApplicationScalingRuleResponseBodyAppScalingRuleBehaviourScaleDown.hpp>
#include <alibabacloud/models/UpdateApplicationScalingRuleResponseBodyAppScalingRuleBehaviourScaleUp.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class UpdateApplicationScalingRuleResponseBodyAppScalingRuleBehaviour : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateApplicationScalingRuleResponseBodyAppScalingRuleBehaviour& obj) { 
      DARABONBA_PTR_TO_JSON(ScaleDown, scaleDown_);
      DARABONBA_PTR_TO_JSON(ScaleUp, scaleUp_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateApplicationScalingRuleResponseBodyAppScalingRuleBehaviour& obj) { 
      DARABONBA_PTR_FROM_JSON(ScaleDown, scaleDown_);
      DARABONBA_PTR_FROM_JSON(ScaleUp, scaleUp_);
    };
    UpdateApplicationScalingRuleResponseBodyAppScalingRuleBehaviour() = default ;
    UpdateApplicationScalingRuleResponseBodyAppScalingRuleBehaviour(const UpdateApplicationScalingRuleResponseBodyAppScalingRuleBehaviour &) = default ;
    UpdateApplicationScalingRuleResponseBodyAppScalingRuleBehaviour(UpdateApplicationScalingRuleResponseBodyAppScalingRuleBehaviour &&) = default ;
    UpdateApplicationScalingRuleResponseBodyAppScalingRuleBehaviour(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateApplicationScalingRuleResponseBodyAppScalingRuleBehaviour() = default ;
    UpdateApplicationScalingRuleResponseBodyAppScalingRuleBehaviour& operator=(const UpdateApplicationScalingRuleResponseBodyAppScalingRuleBehaviour &) = default ;
    UpdateApplicationScalingRuleResponseBodyAppScalingRuleBehaviour& operator=(UpdateApplicationScalingRuleResponseBodyAppScalingRuleBehaviour &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->scaleDown_ == nullptr
        && return this->scaleUp_ == nullptr; };
    // scaleDown Field Functions 
    bool hasScaleDown() const { return this->scaleDown_ != nullptr;};
    void deleteScaleDown() { this->scaleDown_ = nullptr;};
    inline const Models::UpdateApplicationScalingRuleResponseBodyAppScalingRuleBehaviourScaleDown & scaleDown() const { DARABONBA_PTR_GET_CONST(scaleDown_, Models::UpdateApplicationScalingRuleResponseBodyAppScalingRuleBehaviourScaleDown) };
    inline Models::UpdateApplicationScalingRuleResponseBodyAppScalingRuleBehaviourScaleDown scaleDown() { DARABONBA_PTR_GET(scaleDown_, Models::UpdateApplicationScalingRuleResponseBodyAppScalingRuleBehaviourScaleDown) };
    inline UpdateApplicationScalingRuleResponseBodyAppScalingRuleBehaviour& setScaleDown(const Models::UpdateApplicationScalingRuleResponseBodyAppScalingRuleBehaviourScaleDown & scaleDown) { DARABONBA_PTR_SET_VALUE(scaleDown_, scaleDown) };
    inline UpdateApplicationScalingRuleResponseBodyAppScalingRuleBehaviour& setScaleDown(Models::UpdateApplicationScalingRuleResponseBodyAppScalingRuleBehaviourScaleDown && scaleDown) { DARABONBA_PTR_SET_RVALUE(scaleDown_, scaleDown) };


    // scaleUp Field Functions 
    bool hasScaleUp() const { return this->scaleUp_ != nullptr;};
    void deleteScaleUp() { this->scaleUp_ = nullptr;};
    inline const Models::UpdateApplicationScalingRuleResponseBodyAppScalingRuleBehaviourScaleUp & scaleUp() const { DARABONBA_PTR_GET_CONST(scaleUp_, Models::UpdateApplicationScalingRuleResponseBodyAppScalingRuleBehaviourScaleUp) };
    inline Models::UpdateApplicationScalingRuleResponseBodyAppScalingRuleBehaviourScaleUp scaleUp() { DARABONBA_PTR_GET(scaleUp_, Models::UpdateApplicationScalingRuleResponseBodyAppScalingRuleBehaviourScaleUp) };
    inline UpdateApplicationScalingRuleResponseBodyAppScalingRuleBehaviour& setScaleUp(const Models::UpdateApplicationScalingRuleResponseBodyAppScalingRuleBehaviourScaleUp & scaleUp) { DARABONBA_PTR_SET_VALUE(scaleUp_, scaleUp) };
    inline UpdateApplicationScalingRuleResponseBodyAppScalingRuleBehaviour& setScaleUp(Models::UpdateApplicationScalingRuleResponseBodyAppScalingRuleBehaviourScaleUp && scaleUp) { DARABONBA_PTR_SET_RVALUE(scaleUp_, scaleUp) };


  protected:
    std::shared_ptr<Models::UpdateApplicationScalingRuleResponseBodyAppScalingRuleBehaviourScaleDown> scaleDown_ = nullptr;
    std::shared_ptr<Models::UpdateApplicationScalingRuleResponseBodyAppScalingRuleBehaviourScaleUp> scaleUp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
