// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEALERTRULEREQUESTTRIGGERCONDITIONEXTENSIONCYCLEUNFINISHED_HPP_
#define ALIBABACLOUD_MODELS_CREATEALERTRULEREQUESTTRIGGERCONDITIONEXTENSIONCYCLEUNFINISHED_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateAlertRuleRequestTriggerConditionExtensionCycleUnfinishedCycleAndTime.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class CreateAlertRuleRequestTriggerConditionExtensionCycleUnfinished : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAlertRuleRequestTriggerConditionExtensionCycleUnfinished& obj) { 
      DARABONBA_PTR_TO_JSON(CycleAndTime, cycleAndTime_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAlertRuleRequestTriggerConditionExtensionCycleUnfinished& obj) { 
      DARABONBA_PTR_FROM_JSON(CycleAndTime, cycleAndTime_);
    };
    CreateAlertRuleRequestTriggerConditionExtensionCycleUnfinished() = default ;
    CreateAlertRuleRequestTriggerConditionExtensionCycleUnfinished(const CreateAlertRuleRequestTriggerConditionExtensionCycleUnfinished &) = default ;
    CreateAlertRuleRequestTriggerConditionExtensionCycleUnfinished(CreateAlertRuleRequestTriggerConditionExtensionCycleUnfinished &&) = default ;
    CreateAlertRuleRequestTriggerConditionExtensionCycleUnfinished(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAlertRuleRequestTriggerConditionExtensionCycleUnfinished() = default ;
    CreateAlertRuleRequestTriggerConditionExtensionCycleUnfinished& operator=(const CreateAlertRuleRequestTriggerConditionExtensionCycleUnfinished &) = default ;
    CreateAlertRuleRequestTriggerConditionExtensionCycleUnfinished& operator=(CreateAlertRuleRequestTriggerConditionExtensionCycleUnfinished &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cycleAndTime_ == nullptr; };
    // cycleAndTime Field Functions 
    bool hasCycleAndTime() const { return this->cycleAndTime_ != nullptr;};
    void deleteCycleAndTime() { this->cycleAndTime_ = nullptr;};
    inline const vector<Models::CreateAlertRuleRequestTriggerConditionExtensionCycleUnfinishedCycleAndTime> & cycleAndTime() const { DARABONBA_PTR_GET_CONST(cycleAndTime_, vector<Models::CreateAlertRuleRequestTriggerConditionExtensionCycleUnfinishedCycleAndTime>) };
    inline vector<Models::CreateAlertRuleRequestTriggerConditionExtensionCycleUnfinishedCycleAndTime> cycleAndTime() { DARABONBA_PTR_GET(cycleAndTime_, vector<Models::CreateAlertRuleRequestTriggerConditionExtensionCycleUnfinishedCycleAndTime>) };
    inline CreateAlertRuleRequestTriggerConditionExtensionCycleUnfinished& setCycleAndTime(const vector<Models::CreateAlertRuleRequestTriggerConditionExtensionCycleUnfinishedCycleAndTime> & cycleAndTime) { DARABONBA_PTR_SET_VALUE(cycleAndTime_, cycleAndTime) };
    inline CreateAlertRuleRequestTriggerConditionExtensionCycleUnfinished& setCycleAndTime(vector<Models::CreateAlertRuleRequestTriggerConditionExtensionCycleUnfinishedCycleAndTime> && cycleAndTime) { DARABONBA_PTR_SET_RVALUE(cycleAndTime_, cycleAndTime) };


  protected:
    // The configurations of the scheduling cycle and timeout period of the instance.
    std::shared_ptr<vector<Models::CreateAlertRuleRequestTriggerConditionExtensionCycleUnfinishedCycleAndTime>> cycleAndTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
