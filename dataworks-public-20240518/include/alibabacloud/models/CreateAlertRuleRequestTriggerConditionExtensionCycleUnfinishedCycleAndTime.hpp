// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEALERTRULEREQUESTTRIGGERCONDITIONEXTENSIONCYCLEUNFINISHEDCYCLEANDTIME_HPP_
#define ALIBABACLOUD_MODELS_CREATEALERTRULEREQUESTTRIGGERCONDITIONEXTENSIONCYCLEUNFINISHEDCYCLEANDTIME_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class CreateAlertRuleRequestTriggerConditionExtensionCycleUnfinishedCycleAndTime : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAlertRuleRequestTriggerConditionExtensionCycleUnfinishedCycleAndTime& obj) { 
      DARABONBA_PTR_TO_JSON(CycleId, cycleId_);
      DARABONBA_PTR_TO_JSON(Time, time_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAlertRuleRequestTriggerConditionExtensionCycleUnfinishedCycleAndTime& obj) { 
      DARABONBA_PTR_FROM_JSON(CycleId, cycleId_);
      DARABONBA_PTR_FROM_JSON(Time, time_);
    };
    CreateAlertRuleRequestTriggerConditionExtensionCycleUnfinishedCycleAndTime() = default ;
    CreateAlertRuleRequestTriggerConditionExtensionCycleUnfinishedCycleAndTime(const CreateAlertRuleRequestTriggerConditionExtensionCycleUnfinishedCycleAndTime &) = default ;
    CreateAlertRuleRequestTriggerConditionExtensionCycleUnfinishedCycleAndTime(CreateAlertRuleRequestTriggerConditionExtensionCycleUnfinishedCycleAndTime &&) = default ;
    CreateAlertRuleRequestTriggerConditionExtensionCycleUnfinishedCycleAndTime(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAlertRuleRequestTriggerConditionExtensionCycleUnfinishedCycleAndTime() = default ;
    CreateAlertRuleRequestTriggerConditionExtensionCycleUnfinishedCycleAndTime& operator=(const CreateAlertRuleRequestTriggerConditionExtensionCycleUnfinishedCycleAndTime &) = default ;
    CreateAlertRuleRequestTriggerConditionExtensionCycleUnfinishedCycleAndTime& operator=(CreateAlertRuleRequestTriggerConditionExtensionCycleUnfinishedCycleAndTime &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cycleId_ == nullptr
        && return this->time_ == nullptr; };
    // cycleId Field Functions 
    bool hasCycleId() const { return this->cycleId_ != nullptr;};
    void deleteCycleId() { this->cycleId_ = nullptr;};
    inline int32_t cycleId() const { DARABONBA_PTR_GET_DEFAULT(cycleId_, 0) };
    inline CreateAlertRuleRequestTriggerConditionExtensionCycleUnfinishedCycleAndTime& setCycleId(int32_t cycleId) { DARABONBA_PTR_SET_VALUE(cycleId_, cycleId) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline string time() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
    inline CreateAlertRuleRequestTriggerConditionExtensionCycleUnfinishedCycleAndTime& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


  protected:
    // The ID of the scheduling cycle of the instance. Valid values: [1,288].
    std::shared_ptr<int32_t> cycleId_ = nullptr;
    // The latest completion time of the instance within the scheduling cycle. The time is in the hh:mm format. Valid values of hh: [0,47]. Valid values of mm: [0,59].
    std::shared_ptr<string> time_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
