// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDIALARMRULEREQUESTTRIGGERCONDITIONS_HPP_
#define ALIBABACLOUD_MODELS_CREATEDIALARMRULEREQUESTTRIGGERCONDITIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class CreateDIAlarmRuleRequestTriggerConditions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDIAlarmRuleRequestTriggerConditions& obj) { 
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(Severity, severity_);
      DARABONBA_PTR_TO_JSON(Threshold, threshold_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDIAlarmRuleRequestTriggerConditions& obj) { 
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(Severity, severity_);
      DARABONBA_PTR_FROM_JSON(Threshold, threshold_);
    };
    CreateDIAlarmRuleRequestTriggerConditions() = default ;
    CreateDIAlarmRuleRequestTriggerConditions(const CreateDIAlarmRuleRequestTriggerConditions &) = default ;
    CreateDIAlarmRuleRequestTriggerConditions(CreateDIAlarmRuleRequestTriggerConditions &&) = default ;
    CreateDIAlarmRuleRequestTriggerConditions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDIAlarmRuleRequestTriggerConditions() = default ;
    CreateDIAlarmRuleRequestTriggerConditions& operator=(const CreateDIAlarmRuleRequestTriggerConditions &) = default ;
    CreateDIAlarmRuleRequestTriggerConditions& operator=(CreateDIAlarmRuleRequestTriggerConditions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->duration_ != nullptr
        && this->severity_ != nullptr && this->threshold_ != nullptr; };
    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int64_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0L) };
    inline CreateDIAlarmRuleRequestTriggerConditions& setDuration(int64_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // severity Field Functions 
    bool hasSeverity() const { return this->severity_ != nullptr;};
    void deleteSeverity() { this->severity_ = nullptr;};
    inline string severity() const { DARABONBA_PTR_GET_DEFAULT(severity_, "") };
    inline CreateDIAlarmRuleRequestTriggerConditions& setSeverity(string severity) { DARABONBA_PTR_SET_VALUE(severity_, severity) };


    // threshold Field Functions 
    bool hasThreshold() const { return this->threshold_ != nullptr;};
    void deleteThreshold() { this->threshold_ = nullptr;};
    inline int64_t threshold() const { DARABONBA_PTR_GET_DEFAULT(threshold_, 0L) };
    inline CreateDIAlarmRuleRequestTriggerConditions& setThreshold(int64_t threshold) { DARABONBA_PTR_SET_VALUE(threshold_, threshold) };


  protected:
    // The time interval for alert calculation. Unit: minutes.
    std::shared_ptr<int64_t> duration_ = nullptr;
    // The severity level. Valid values:
    // 
    // *   Warning
    // *   Critical
    std::shared_ptr<string> severity_ = nullptr;
    // The alert threshold.
    // 
    // *   If the alert rule is for task status, you do not need to specify a threshold.
    // *   If the alert rule is for failovers, specify the number of failovers.
    // *   If the alert rule is for latency, the threshold is the latency duration, in seconds.
    std::shared_ptr<int64_t> threshold_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
