// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISABLEAPPLICATIONSCALINGRULERESPONSEBODYAPPSCALINGRULETRIGGER_HPP_
#define ALIBABACLOUD_MODELS_DISABLEAPPLICATIONSCALINGRULERESPONSEBODYAPPSCALINGRULETRIGGER_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DisableApplicationScalingRuleResponseBodyAppScalingRuleTriggerTriggers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class DisableApplicationScalingRuleResponseBodyAppScalingRuleTrigger : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DisableApplicationScalingRuleResponseBodyAppScalingRuleTrigger& obj) { 
      DARABONBA_PTR_TO_JSON(MaxReplicas, maxReplicas_);
      DARABONBA_PTR_TO_JSON(MinReplicas, minReplicas_);
      DARABONBA_PTR_TO_JSON(Triggers, triggers_);
    };
    friend void from_json(const Darabonba::Json& j, DisableApplicationScalingRuleResponseBodyAppScalingRuleTrigger& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxReplicas, maxReplicas_);
      DARABONBA_PTR_FROM_JSON(MinReplicas, minReplicas_);
      DARABONBA_PTR_FROM_JSON(Triggers, triggers_);
    };
    DisableApplicationScalingRuleResponseBodyAppScalingRuleTrigger() = default ;
    DisableApplicationScalingRuleResponseBodyAppScalingRuleTrigger(const DisableApplicationScalingRuleResponseBodyAppScalingRuleTrigger &) = default ;
    DisableApplicationScalingRuleResponseBodyAppScalingRuleTrigger(DisableApplicationScalingRuleResponseBodyAppScalingRuleTrigger &&) = default ;
    DisableApplicationScalingRuleResponseBodyAppScalingRuleTrigger(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DisableApplicationScalingRuleResponseBodyAppScalingRuleTrigger() = default ;
    DisableApplicationScalingRuleResponseBodyAppScalingRuleTrigger& operator=(const DisableApplicationScalingRuleResponseBodyAppScalingRuleTrigger &) = default ;
    DisableApplicationScalingRuleResponseBodyAppScalingRuleTrigger& operator=(DisableApplicationScalingRuleResponseBodyAppScalingRuleTrigger &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxReplicas_ == nullptr
        && return this->minReplicas_ == nullptr && return this->triggers_ == nullptr; };
    // maxReplicas Field Functions 
    bool hasMaxReplicas() const { return this->maxReplicas_ != nullptr;};
    void deleteMaxReplicas() { this->maxReplicas_ = nullptr;};
    inline int32_t maxReplicas() const { DARABONBA_PTR_GET_DEFAULT(maxReplicas_, 0) };
    inline DisableApplicationScalingRuleResponseBodyAppScalingRuleTrigger& setMaxReplicas(int32_t maxReplicas) { DARABONBA_PTR_SET_VALUE(maxReplicas_, maxReplicas) };


    // minReplicas Field Functions 
    bool hasMinReplicas() const { return this->minReplicas_ != nullptr;};
    void deleteMinReplicas() { this->minReplicas_ = nullptr;};
    inline int32_t minReplicas() const { DARABONBA_PTR_GET_DEFAULT(minReplicas_, 0) };
    inline DisableApplicationScalingRuleResponseBodyAppScalingRuleTrigger& setMinReplicas(int32_t minReplicas) { DARABONBA_PTR_SET_VALUE(minReplicas_, minReplicas) };


    // triggers Field Functions 
    bool hasTriggers() const { return this->triggers_ != nullptr;};
    void deleteTriggers() { this->triggers_ = nullptr;};
    inline const vector<Models::DisableApplicationScalingRuleResponseBodyAppScalingRuleTriggerTriggers> & triggers() const { DARABONBA_PTR_GET_CONST(triggers_, vector<Models::DisableApplicationScalingRuleResponseBodyAppScalingRuleTriggerTriggers>) };
    inline vector<Models::DisableApplicationScalingRuleResponseBodyAppScalingRuleTriggerTriggers> triggers() { DARABONBA_PTR_GET(triggers_, vector<Models::DisableApplicationScalingRuleResponseBodyAppScalingRuleTriggerTriggers>) };
    inline DisableApplicationScalingRuleResponseBodyAppScalingRuleTrigger& setTriggers(const vector<Models::DisableApplicationScalingRuleResponseBodyAppScalingRuleTriggerTriggers> & triggers) { DARABONBA_PTR_SET_VALUE(triggers_, triggers) };
    inline DisableApplicationScalingRuleResponseBodyAppScalingRuleTrigger& setTriggers(vector<Models::DisableApplicationScalingRuleResponseBodyAppScalingRuleTriggerTriggers> && triggers) { DARABONBA_PTR_SET_RVALUE(triggers_, triggers) };


  protected:
    // The maximum number of replicas. The upper limit is 1000.
    std::shared_ptr<int32_t> maxReplicas_ = nullptr;
    // The minimum number of replicas. The lower limit is 0.
    std::shared_ptr<int32_t> minReplicas_ = nullptr;
    // The information about the trigger.
    std::shared_ptr<vector<Models::DisableApplicationScalingRuleResponseBodyAppScalingRuleTriggerTriggers>> triggers_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
