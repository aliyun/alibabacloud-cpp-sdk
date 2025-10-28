// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAPPLICATIONSCALINGRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAPPLICATIONSCALINGRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class UpdateApplicationScalingRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateApplicationScalingRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(ScalingBehaviour, scalingBehaviour_);
      DARABONBA_PTR_TO_JSON(ScalingRuleEnable, scalingRuleEnable_);
      DARABONBA_PTR_TO_JSON(ScalingRuleMetric, scalingRuleMetric_);
      DARABONBA_PTR_TO_JSON(ScalingRuleName, scalingRuleName_);
      DARABONBA_PTR_TO_JSON(ScalingRuleTimer, scalingRuleTimer_);
      DARABONBA_PTR_TO_JSON(ScalingRuleTrigger, scalingRuleTrigger_);
      DARABONBA_PTR_TO_JSON(ScalingRuleType, scalingRuleType_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateApplicationScalingRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(ScalingBehaviour, scalingBehaviour_);
      DARABONBA_PTR_FROM_JSON(ScalingRuleEnable, scalingRuleEnable_);
      DARABONBA_PTR_FROM_JSON(ScalingRuleMetric, scalingRuleMetric_);
      DARABONBA_PTR_FROM_JSON(ScalingRuleName, scalingRuleName_);
      DARABONBA_PTR_FROM_JSON(ScalingRuleTimer, scalingRuleTimer_);
      DARABONBA_PTR_FROM_JSON(ScalingRuleTrigger, scalingRuleTrigger_);
      DARABONBA_PTR_FROM_JSON(ScalingRuleType, scalingRuleType_);
    };
    UpdateApplicationScalingRuleRequest() = default ;
    UpdateApplicationScalingRuleRequest(const UpdateApplicationScalingRuleRequest &) = default ;
    UpdateApplicationScalingRuleRequest(UpdateApplicationScalingRuleRequest &&) = default ;
    UpdateApplicationScalingRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateApplicationScalingRuleRequest() = default ;
    UpdateApplicationScalingRuleRequest& operator=(const UpdateApplicationScalingRuleRequest &) = default ;
    UpdateApplicationScalingRuleRequest& operator=(UpdateApplicationScalingRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->scalingBehaviour_ == nullptr && return this->scalingRuleEnable_ == nullptr && return this->scalingRuleMetric_ == nullptr && return this->scalingRuleName_ == nullptr && return this->scalingRuleTimer_ == nullptr
        && return this->scalingRuleTrigger_ == nullptr && return this->scalingRuleType_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline UpdateApplicationScalingRuleRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // scalingBehaviour Field Functions 
    bool hasScalingBehaviour() const { return this->scalingBehaviour_ != nullptr;};
    void deleteScalingBehaviour() { this->scalingBehaviour_ = nullptr;};
    inline string scalingBehaviour() const { DARABONBA_PTR_GET_DEFAULT(scalingBehaviour_, "") };
    inline UpdateApplicationScalingRuleRequest& setScalingBehaviour(string scalingBehaviour) { DARABONBA_PTR_SET_VALUE(scalingBehaviour_, scalingBehaviour) };


    // scalingRuleEnable Field Functions 
    bool hasScalingRuleEnable() const { return this->scalingRuleEnable_ != nullptr;};
    void deleteScalingRuleEnable() { this->scalingRuleEnable_ = nullptr;};
    inline bool scalingRuleEnable() const { DARABONBA_PTR_GET_DEFAULT(scalingRuleEnable_, false) };
    inline UpdateApplicationScalingRuleRequest& setScalingRuleEnable(bool scalingRuleEnable) { DARABONBA_PTR_SET_VALUE(scalingRuleEnable_, scalingRuleEnable) };


    // scalingRuleMetric Field Functions 
    bool hasScalingRuleMetric() const { return this->scalingRuleMetric_ != nullptr;};
    void deleteScalingRuleMetric() { this->scalingRuleMetric_ = nullptr;};
    inline string scalingRuleMetric() const { DARABONBA_PTR_GET_DEFAULT(scalingRuleMetric_, "") };
    inline UpdateApplicationScalingRuleRequest& setScalingRuleMetric(string scalingRuleMetric) { DARABONBA_PTR_SET_VALUE(scalingRuleMetric_, scalingRuleMetric) };


    // scalingRuleName Field Functions 
    bool hasScalingRuleName() const { return this->scalingRuleName_ != nullptr;};
    void deleteScalingRuleName() { this->scalingRuleName_ = nullptr;};
    inline string scalingRuleName() const { DARABONBA_PTR_GET_DEFAULT(scalingRuleName_, "") };
    inline UpdateApplicationScalingRuleRequest& setScalingRuleName(string scalingRuleName) { DARABONBA_PTR_SET_VALUE(scalingRuleName_, scalingRuleName) };


    // scalingRuleTimer Field Functions 
    bool hasScalingRuleTimer() const { return this->scalingRuleTimer_ != nullptr;};
    void deleteScalingRuleTimer() { this->scalingRuleTimer_ = nullptr;};
    inline string scalingRuleTimer() const { DARABONBA_PTR_GET_DEFAULT(scalingRuleTimer_, "") };
    inline UpdateApplicationScalingRuleRequest& setScalingRuleTimer(string scalingRuleTimer) { DARABONBA_PTR_SET_VALUE(scalingRuleTimer_, scalingRuleTimer) };


    // scalingRuleTrigger Field Functions 
    bool hasScalingRuleTrigger() const { return this->scalingRuleTrigger_ != nullptr;};
    void deleteScalingRuleTrigger() { this->scalingRuleTrigger_ = nullptr;};
    inline string scalingRuleTrigger() const { DARABONBA_PTR_GET_DEFAULT(scalingRuleTrigger_, "") };
    inline UpdateApplicationScalingRuleRequest& setScalingRuleTrigger(string scalingRuleTrigger) { DARABONBA_PTR_SET_VALUE(scalingRuleTrigger_, scalingRuleTrigger) };


    // scalingRuleType Field Functions 
    bool hasScalingRuleType() const { return this->scalingRuleType_ != nullptr;};
    void deleteScalingRuleType() { this->scalingRuleType_ = nullptr;};
    inline string scalingRuleType() const { DARABONBA_PTR_GET_DEFAULT(scalingRuleType_, "") };
    inline UpdateApplicationScalingRuleRequest& setScalingRuleType(string scalingRuleType) { DARABONBA_PTR_SET_VALUE(scalingRuleType_, scalingRuleType) };


  protected:
    // The ID of the application. You can call the ListApplication operation to query the application ID. For more information, see [ListApplication](https://help.aliyun.com/document_detail/149390.html).
    std::shared_ptr<string> appId_ = nullptr;
    // The behavior of the auto scaling. See the example for the data structure.
    std::shared_ptr<string> scalingBehaviour_ = nullptr;
    // Specifies whether to enable the auto scaling policy. Valid values:
    // 
    // *   **true**: enables the auto scaling policy.
    // *   **false**: disables the auto scaling policy.
    std::shared_ptr<bool> scalingRuleEnable_ = nullptr;
    // This parameter is deprecated.
    std::shared_ptr<string> scalingRuleMetric_ = nullptr;
    // The name of the auto scaling policy.
    std::shared_ptr<string> scalingRuleName_ = nullptr;
    // This parameter is deprecated.
    std::shared_ptr<string> scalingRuleTimer_ = nullptr;
    // The trigger policy for the auto scaling policy. Set this parameter in the JSON format by using the ScalingRuleTriggerDTO class. For more information, see Additional description of request parameters.
    std::shared_ptr<string> scalingRuleTrigger_ = nullptr;
    // The type of the auto scaling policy.
    // 
    // *   Set the value to trigger.
    std::shared_ptr<string> scalingRuleType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
