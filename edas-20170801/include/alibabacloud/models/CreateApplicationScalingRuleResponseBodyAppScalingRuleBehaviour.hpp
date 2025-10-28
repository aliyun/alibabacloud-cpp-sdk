// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPLICATIONSCALINGRULERESPONSEBODYAPPSCALINGRULEBEHAVIOUR_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPLICATIONSCALINGRULERESPONSEBODYAPPSCALINGRULEBEHAVIOUR_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateApplicationScalingRuleResponseBodyAppScalingRuleBehaviourScaleDown.hpp>
#include <alibabacloud/models/CreateApplicationScalingRuleResponseBodyAppScalingRuleBehaviourScaleUp.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class CreateApplicationScalingRuleResponseBodyAppScalingRuleBehaviour : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateApplicationScalingRuleResponseBodyAppScalingRuleBehaviour& obj) { 
      DARABONBA_PTR_TO_JSON(ScaleDown, scaleDown_);
      DARABONBA_PTR_TO_JSON(ScaleUp, scaleUp_);
    };
    friend void from_json(const Darabonba::Json& j, CreateApplicationScalingRuleResponseBodyAppScalingRuleBehaviour& obj) { 
      DARABONBA_PTR_FROM_JSON(ScaleDown, scaleDown_);
      DARABONBA_PTR_FROM_JSON(ScaleUp, scaleUp_);
    };
    CreateApplicationScalingRuleResponseBodyAppScalingRuleBehaviour() = default ;
    CreateApplicationScalingRuleResponseBodyAppScalingRuleBehaviour(const CreateApplicationScalingRuleResponseBodyAppScalingRuleBehaviour &) = default ;
    CreateApplicationScalingRuleResponseBodyAppScalingRuleBehaviour(CreateApplicationScalingRuleResponseBodyAppScalingRuleBehaviour &&) = default ;
    CreateApplicationScalingRuleResponseBodyAppScalingRuleBehaviour(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateApplicationScalingRuleResponseBodyAppScalingRuleBehaviour() = default ;
    CreateApplicationScalingRuleResponseBodyAppScalingRuleBehaviour& operator=(const CreateApplicationScalingRuleResponseBodyAppScalingRuleBehaviour &) = default ;
    CreateApplicationScalingRuleResponseBodyAppScalingRuleBehaviour& operator=(CreateApplicationScalingRuleResponseBodyAppScalingRuleBehaviour &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->scaleDown_ == nullptr
        && return this->scaleUp_ == nullptr; };
    // scaleDown Field Functions 
    bool hasScaleDown() const { return this->scaleDown_ != nullptr;};
    void deleteScaleDown() { this->scaleDown_ = nullptr;};
    inline const Models::CreateApplicationScalingRuleResponseBodyAppScalingRuleBehaviourScaleDown & scaleDown() const { DARABONBA_PTR_GET_CONST(scaleDown_, Models::CreateApplicationScalingRuleResponseBodyAppScalingRuleBehaviourScaleDown) };
    inline Models::CreateApplicationScalingRuleResponseBodyAppScalingRuleBehaviourScaleDown scaleDown() { DARABONBA_PTR_GET(scaleDown_, Models::CreateApplicationScalingRuleResponseBodyAppScalingRuleBehaviourScaleDown) };
    inline CreateApplicationScalingRuleResponseBodyAppScalingRuleBehaviour& setScaleDown(const Models::CreateApplicationScalingRuleResponseBodyAppScalingRuleBehaviourScaleDown & scaleDown) { DARABONBA_PTR_SET_VALUE(scaleDown_, scaleDown) };
    inline CreateApplicationScalingRuleResponseBodyAppScalingRuleBehaviour& setScaleDown(Models::CreateApplicationScalingRuleResponseBodyAppScalingRuleBehaviourScaleDown && scaleDown) { DARABONBA_PTR_SET_RVALUE(scaleDown_, scaleDown) };


    // scaleUp Field Functions 
    bool hasScaleUp() const { return this->scaleUp_ != nullptr;};
    void deleteScaleUp() { this->scaleUp_ = nullptr;};
    inline const Models::CreateApplicationScalingRuleResponseBodyAppScalingRuleBehaviourScaleUp & scaleUp() const { DARABONBA_PTR_GET_CONST(scaleUp_, Models::CreateApplicationScalingRuleResponseBodyAppScalingRuleBehaviourScaleUp) };
    inline Models::CreateApplicationScalingRuleResponseBodyAppScalingRuleBehaviourScaleUp scaleUp() { DARABONBA_PTR_GET(scaleUp_, Models::CreateApplicationScalingRuleResponseBodyAppScalingRuleBehaviourScaleUp) };
    inline CreateApplicationScalingRuleResponseBodyAppScalingRuleBehaviour& setScaleUp(const Models::CreateApplicationScalingRuleResponseBodyAppScalingRuleBehaviourScaleUp & scaleUp) { DARABONBA_PTR_SET_VALUE(scaleUp_, scaleUp) };
    inline CreateApplicationScalingRuleResponseBodyAppScalingRuleBehaviour& setScaleUp(Models::CreateApplicationScalingRuleResponseBodyAppScalingRuleBehaviourScaleUp && scaleUp) { DARABONBA_PTR_SET_RVALUE(scaleUp_, scaleUp) };


  protected:
    // The behavior configurations of the scale-in.
    std::shared_ptr<Models::CreateApplicationScalingRuleResponseBodyAppScalingRuleBehaviourScaleDown> scaleDown_ = nullptr;
    // The behavior configurations of the scale-out.
    std::shared_ptr<Models::CreateApplicationScalingRuleResponseBodyAppScalingRuleBehaviourScaleUp> scaleUp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
