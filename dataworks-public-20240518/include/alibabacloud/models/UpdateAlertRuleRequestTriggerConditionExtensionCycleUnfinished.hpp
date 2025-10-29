// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEALERTRULEREQUESTTRIGGERCONDITIONEXTENSIONCYCLEUNFINISHED_HPP_
#define ALIBABACLOUD_MODELS_UPDATEALERTRULEREQUESTTRIGGERCONDITIONEXTENSIONCYCLEUNFINISHED_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateAlertRuleRequestTriggerConditionExtensionCycleUnfinishedCycleAndTime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class UpdateAlertRuleRequestTriggerConditionExtensionCycleUnfinished : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAlertRuleRequestTriggerConditionExtensionCycleUnfinished& obj) { 
      DARABONBA_PTR_TO_JSON(CycleAndTime, cycleAndTime_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAlertRuleRequestTriggerConditionExtensionCycleUnfinished& obj) { 
      DARABONBA_PTR_FROM_JSON(CycleAndTime, cycleAndTime_);
    };
    UpdateAlertRuleRequestTriggerConditionExtensionCycleUnfinished() = default ;
    UpdateAlertRuleRequestTriggerConditionExtensionCycleUnfinished(const UpdateAlertRuleRequestTriggerConditionExtensionCycleUnfinished &) = default ;
    UpdateAlertRuleRequestTriggerConditionExtensionCycleUnfinished(UpdateAlertRuleRequestTriggerConditionExtensionCycleUnfinished &&) = default ;
    UpdateAlertRuleRequestTriggerConditionExtensionCycleUnfinished(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAlertRuleRequestTriggerConditionExtensionCycleUnfinished() = default ;
    UpdateAlertRuleRequestTriggerConditionExtensionCycleUnfinished& operator=(const UpdateAlertRuleRequestTriggerConditionExtensionCycleUnfinished &) = default ;
    UpdateAlertRuleRequestTriggerConditionExtensionCycleUnfinished& operator=(UpdateAlertRuleRequestTriggerConditionExtensionCycleUnfinished &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cycleAndTime_ == nullptr; };
    // cycleAndTime Field Functions 
    bool hasCycleAndTime() const { return this->cycleAndTime_ != nullptr;};
    void deleteCycleAndTime() { this->cycleAndTime_ = nullptr;};
    inline const vector<Models::UpdateAlertRuleRequestTriggerConditionExtensionCycleUnfinishedCycleAndTime> & cycleAndTime() const { DARABONBA_PTR_GET_CONST(cycleAndTime_, vector<Models::UpdateAlertRuleRequestTriggerConditionExtensionCycleUnfinishedCycleAndTime>) };
    inline vector<Models::UpdateAlertRuleRequestTriggerConditionExtensionCycleUnfinishedCycleAndTime> cycleAndTime() { DARABONBA_PTR_GET(cycleAndTime_, vector<Models::UpdateAlertRuleRequestTriggerConditionExtensionCycleUnfinishedCycleAndTime>) };
    inline UpdateAlertRuleRequestTriggerConditionExtensionCycleUnfinished& setCycleAndTime(const vector<Models::UpdateAlertRuleRequestTriggerConditionExtensionCycleUnfinishedCycleAndTime> & cycleAndTime) { DARABONBA_PTR_SET_VALUE(cycleAndTime_, cycleAndTime) };
    inline UpdateAlertRuleRequestTriggerConditionExtensionCycleUnfinished& setCycleAndTime(vector<Models::UpdateAlertRuleRequestTriggerConditionExtensionCycleUnfinishedCycleAndTime> && cycleAndTime) { DARABONBA_PTR_SET_RVALUE(cycleAndTime_, cycleAndTime) };


  protected:
    // The configurations of the scheduling cycle and timeout period of the instance.
    std::shared_ptr<vector<Models::UpdateAlertRuleRequestTriggerConditionExtensionCycleUnfinishedCycleAndTime>> cycleAndTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
