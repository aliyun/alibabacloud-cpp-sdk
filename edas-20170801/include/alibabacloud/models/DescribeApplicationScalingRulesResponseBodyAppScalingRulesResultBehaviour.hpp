// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONSCALINGRULESRESPONSEBODYAPPSCALINGRULESRESULTBEHAVIOUR_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONSCALINGRULESRESPONSEBODYAPPSCALINGRULESRESULTBEHAVIOUR_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeApplicationScalingRulesResponseBodyAppScalingRulesResultBehaviourScaleDown.hpp>
#include <alibabacloud/models/DescribeApplicationScalingRulesResponseBodyAppScalingRulesResultBehaviourScaleUp.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class DescribeApplicationScalingRulesResponseBodyAppScalingRulesResultBehaviour : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApplicationScalingRulesResponseBodyAppScalingRulesResultBehaviour& obj) { 
      DARABONBA_PTR_TO_JSON(ScaleDown, scaleDown_);
      DARABONBA_PTR_TO_JSON(ScaleUp, scaleUp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApplicationScalingRulesResponseBodyAppScalingRulesResultBehaviour& obj) { 
      DARABONBA_PTR_FROM_JSON(ScaleDown, scaleDown_);
      DARABONBA_PTR_FROM_JSON(ScaleUp, scaleUp_);
    };
    DescribeApplicationScalingRulesResponseBodyAppScalingRulesResultBehaviour() = default ;
    DescribeApplicationScalingRulesResponseBodyAppScalingRulesResultBehaviour(const DescribeApplicationScalingRulesResponseBodyAppScalingRulesResultBehaviour &) = default ;
    DescribeApplicationScalingRulesResponseBodyAppScalingRulesResultBehaviour(DescribeApplicationScalingRulesResponseBodyAppScalingRulesResultBehaviour &&) = default ;
    DescribeApplicationScalingRulesResponseBodyAppScalingRulesResultBehaviour(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApplicationScalingRulesResponseBodyAppScalingRulesResultBehaviour() = default ;
    DescribeApplicationScalingRulesResponseBodyAppScalingRulesResultBehaviour& operator=(const DescribeApplicationScalingRulesResponseBodyAppScalingRulesResultBehaviour &) = default ;
    DescribeApplicationScalingRulesResponseBodyAppScalingRulesResultBehaviour& operator=(DescribeApplicationScalingRulesResponseBodyAppScalingRulesResultBehaviour &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->scaleDown_ == nullptr
        && return this->scaleUp_ == nullptr; };
    // scaleDown Field Functions 
    bool hasScaleDown() const { return this->scaleDown_ != nullptr;};
    void deleteScaleDown() { this->scaleDown_ = nullptr;};
    inline const Models::DescribeApplicationScalingRulesResponseBodyAppScalingRulesResultBehaviourScaleDown & scaleDown() const { DARABONBA_PTR_GET_CONST(scaleDown_, Models::DescribeApplicationScalingRulesResponseBodyAppScalingRulesResultBehaviourScaleDown) };
    inline Models::DescribeApplicationScalingRulesResponseBodyAppScalingRulesResultBehaviourScaleDown scaleDown() { DARABONBA_PTR_GET(scaleDown_, Models::DescribeApplicationScalingRulesResponseBodyAppScalingRulesResultBehaviourScaleDown) };
    inline DescribeApplicationScalingRulesResponseBodyAppScalingRulesResultBehaviour& setScaleDown(const Models::DescribeApplicationScalingRulesResponseBodyAppScalingRulesResultBehaviourScaleDown & scaleDown) { DARABONBA_PTR_SET_VALUE(scaleDown_, scaleDown) };
    inline DescribeApplicationScalingRulesResponseBodyAppScalingRulesResultBehaviour& setScaleDown(Models::DescribeApplicationScalingRulesResponseBodyAppScalingRulesResultBehaviourScaleDown && scaleDown) { DARABONBA_PTR_SET_RVALUE(scaleDown_, scaleDown) };


    // scaleUp Field Functions 
    bool hasScaleUp() const { return this->scaleUp_ != nullptr;};
    void deleteScaleUp() { this->scaleUp_ = nullptr;};
    inline const Models::DescribeApplicationScalingRulesResponseBodyAppScalingRulesResultBehaviourScaleUp & scaleUp() const { DARABONBA_PTR_GET_CONST(scaleUp_, Models::DescribeApplicationScalingRulesResponseBodyAppScalingRulesResultBehaviourScaleUp) };
    inline Models::DescribeApplicationScalingRulesResponseBodyAppScalingRulesResultBehaviourScaleUp scaleUp() { DARABONBA_PTR_GET(scaleUp_, Models::DescribeApplicationScalingRulesResponseBodyAppScalingRulesResultBehaviourScaleUp) };
    inline DescribeApplicationScalingRulesResponseBodyAppScalingRulesResultBehaviour& setScaleUp(const Models::DescribeApplicationScalingRulesResponseBodyAppScalingRulesResultBehaviourScaleUp & scaleUp) { DARABONBA_PTR_SET_VALUE(scaleUp_, scaleUp) };
    inline DescribeApplicationScalingRulesResponseBodyAppScalingRulesResultBehaviour& setScaleUp(Models::DescribeApplicationScalingRulesResponseBodyAppScalingRulesResultBehaviourScaleUp && scaleUp) { DARABONBA_PTR_SET_RVALUE(scaleUp_, scaleUp) };


  protected:
    std::shared_ptr<Models::DescribeApplicationScalingRulesResponseBodyAppScalingRulesResultBehaviourScaleDown> scaleDown_ = nullptr;
    std::shared_ptr<Models::DescribeApplicationScalingRulesResponseBodyAppScalingRulesResultBehaviourScaleUp> scaleUp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
