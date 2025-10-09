// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALERTRULESRESPONSEBODYPAGINGINFOALERTRULESTRIGGERCONDITIONEXTENSIONCYCLEUNFINISHED_HPP_
#define ALIBABACLOUD_MODELS_LISTALERTRULESRESPONSEBODYPAGINGINFOALERTRULESTRIGGERCONDITIONEXTENSIONCYCLEUNFINISHED_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtensionCycleUnfinishedCycleAndTime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtensionCycleUnfinished : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtensionCycleUnfinished& obj) { 
      DARABONBA_PTR_TO_JSON(CycleAndTime, cycleAndTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtensionCycleUnfinished& obj) { 
      DARABONBA_PTR_FROM_JSON(CycleAndTime, cycleAndTime_);
    };
    ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtensionCycleUnfinished() = default ;
    ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtensionCycleUnfinished(const ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtensionCycleUnfinished &) = default ;
    ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtensionCycleUnfinished(ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtensionCycleUnfinished &&) = default ;
    ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtensionCycleUnfinished(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtensionCycleUnfinished() = default ;
    ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtensionCycleUnfinished& operator=(const ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtensionCycleUnfinished &) = default ;
    ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtensionCycleUnfinished& operator=(ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtensionCycleUnfinished &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cycleAndTime_ != nullptr; };
    // cycleAndTime Field Functions 
    bool hasCycleAndTime() const { return this->cycleAndTime_ != nullptr;};
    void deleteCycleAndTime() { this->cycleAndTime_ = nullptr;};
    inline const vector<Models::ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtensionCycleUnfinishedCycleAndTime> & cycleAndTime() const { DARABONBA_PTR_GET_CONST(cycleAndTime_, vector<Models::ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtensionCycleUnfinishedCycleAndTime>) };
    inline vector<Models::ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtensionCycleUnfinishedCycleAndTime> cycleAndTime() { DARABONBA_PTR_GET(cycleAndTime_, vector<Models::ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtensionCycleUnfinishedCycleAndTime>) };
    inline ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtensionCycleUnfinished& setCycleAndTime(const vector<Models::ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtensionCycleUnfinishedCycleAndTime> & cycleAndTime) { DARABONBA_PTR_SET_VALUE(cycleAndTime_, cycleAndTime) };
    inline ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtensionCycleUnfinished& setCycleAndTime(vector<Models::ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtensionCycleUnfinishedCycleAndTime> && cycleAndTime) { DARABONBA_PTR_SET_RVALUE(cycleAndTime_, cycleAndTime) };


  protected:
    // The configurations of the scheduling cycle and timeout period of the instance.
    std::shared_ptr<vector<Models::ListAlertRulesResponseBodyPagingInfoAlertRulesTriggerConditionExtensionCycleUnfinishedCycleAndTime>> cycleAndTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
