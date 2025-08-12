// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ALERTRULECONDITIONCOMPOSITEESCALATION_HPP_
#define ALIBABACLOUD_MODELS_ALERTRULECONDITIONCOMPOSITEESCALATION_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AlertRuleConditionCompositeEscalationEscalations.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class AlertRuleConditionCompositeEscalation : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AlertRuleConditionCompositeEscalation& obj) { 
      DARABONBA_PTR_TO_JSON(escalations, escalations_);
      DARABONBA_PTR_TO_JSON(level, level_);
      DARABONBA_PTR_TO_JSON(relation, relation_);
      DARABONBA_PTR_TO_JSON(times, times_);
    };
    friend void from_json(const Darabonba::Json& j, AlertRuleConditionCompositeEscalation& obj) { 
      DARABONBA_PTR_FROM_JSON(escalations, escalations_);
      DARABONBA_PTR_FROM_JSON(level, level_);
      DARABONBA_PTR_FROM_JSON(relation, relation_);
      DARABONBA_PTR_FROM_JSON(times, times_);
    };
    AlertRuleConditionCompositeEscalation() = default ;
    AlertRuleConditionCompositeEscalation(const AlertRuleConditionCompositeEscalation &) = default ;
    AlertRuleConditionCompositeEscalation(AlertRuleConditionCompositeEscalation &&) = default ;
    AlertRuleConditionCompositeEscalation(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AlertRuleConditionCompositeEscalation() = default ;
    AlertRuleConditionCompositeEscalation& operator=(const AlertRuleConditionCompositeEscalation &) = default ;
    AlertRuleConditionCompositeEscalation& operator=(AlertRuleConditionCompositeEscalation &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->escalations_ != nullptr
        && this->level_ != nullptr && this->relation_ != nullptr && this->times_ != nullptr; };
    // escalations Field Functions 
    bool hasEscalations() const { return this->escalations_ != nullptr;};
    void deleteEscalations() { this->escalations_ = nullptr;};
    inline const vector<Models::AlertRuleConditionCompositeEscalationEscalations> & escalations() const { DARABONBA_PTR_GET_CONST(escalations_, vector<Models::AlertRuleConditionCompositeEscalationEscalations>) };
    inline vector<Models::AlertRuleConditionCompositeEscalationEscalations> escalations() { DARABONBA_PTR_GET(escalations_, vector<Models::AlertRuleConditionCompositeEscalationEscalations>) };
    inline AlertRuleConditionCompositeEscalation& setEscalations(const vector<Models::AlertRuleConditionCompositeEscalationEscalations> & escalations) { DARABONBA_PTR_SET_VALUE(escalations_, escalations) };
    inline AlertRuleConditionCompositeEscalation& setEscalations(vector<Models::AlertRuleConditionCompositeEscalationEscalations> && escalations) { DARABONBA_PTR_SET_RVALUE(escalations_, escalations) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string level() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline AlertRuleConditionCompositeEscalation& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // relation Field Functions 
    bool hasRelation() const { return this->relation_ != nullptr;};
    void deleteRelation() { this->relation_ = nullptr;};
    inline string relation() const { DARABONBA_PTR_GET_DEFAULT(relation_, "") };
    inline AlertRuleConditionCompositeEscalation& setRelation(string relation) { DARABONBA_PTR_SET_VALUE(relation_, relation) };


    // times Field Functions 
    bool hasTimes() const { return this->times_ != nullptr;};
    void deleteTimes() { this->times_ = nullptr;};
    inline int32_t times() const { DARABONBA_PTR_GET_DEFAULT(times_, 0) };
    inline AlertRuleConditionCompositeEscalation& setTimes(int32_t times) { DARABONBA_PTR_SET_VALUE(times_, times) };


  protected:
    std::shared_ptr<vector<Models::AlertRuleConditionCompositeEscalationEscalations>> escalations_ = nullptr;
    std::shared_ptr<string> level_ = nullptr;
    std::shared_ptr<string> relation_ = nullptr;
    std::shared_ptr<int32_t> times_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
