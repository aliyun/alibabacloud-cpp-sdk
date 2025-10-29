// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETALERTRULERESPONSEBODYALERTRULE_HPP_
#define ALIBABACLOUD_MODELS_GETALERTRULERESPONSEBODYALERTRULE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetAlertRuleResponseBodyAlertRuleNotification.hpp>
#include <alibabacloud/models/GetAlertRuleResponseBodyAlertRuleTriggerCondition.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class GetAlertRuleResponseBodyAlertRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAlertRuleResponseBodyAlertRule& obj) { 
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Notification, notification_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(TriggerCondition, triggerCondition_);
    };
    friend void from_json(const Darabonba::Json& j, GetAlertRuleResponseBodyAlertRule& obj) { 
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Notification, notification_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(TriggerCondition, triggerCondition_);
    };
    GetAlertRuleResponseBodyAlertRule() = default ;
    GetAlertRuleResponseBodyAlertRule(const GetAlertRuleResponseBodyAlertRule &) = default ;
    GetAlertRuleResponseBodyAlertRule(GetAlertRuleResponseBodyAlertRule &&) = default ;
    GetAlertRuleResponseBodyAlertRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAlertRuleResponseBodyAlertRule() = default ;
    GetAlertRuleResponseBodyAlertRule& operator=(const GetAlertRuleResponseBodyAlertRule &) = default ;
    GetAlertRuleResponseBodyAlertRule& operator=(GetAlertRuleResponseBodyAlertRule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enabled_ == nullptr
        && return this->id_ == nullptr && return this->name_ == nullptr && return this->notification_ == nullptr && return this->owner_ == nullptr && return this->triggerCondition_ == nullptr; };
    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline GetAlertRuleResponseBodyAlertRule& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetAlertRuleResponseBodyAlertRule& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetAlertRuleResponseBodyAlertRule& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // notification Field Functions 
    bool hasNotification() const { return this->notification_ != nullptr;};
    void deleteNotification() { this->notification_ = nullptr;};
    inline const Models::GetAlertRuleResponseBodyAlertRuleNotification & notification() const { DARABONBA_PTR_GET_CONST(notification_, Models::GetAlertRuleResponseBodyAlertRuleNotification) };
    inline Models::GetAlertRuleResponseBodyAlertRuleNotification notification() { DARABONBA_PTR_GET(notification_, Models::GetAlertRuleResponseBodyAlertRuleNotification) };
    inline GetAlertRuleResponseBodyAlertRule& setNotification(const Models::GetAlertRuleResponseBodyAlertRuleNotification & notification) { DARABONBA_PTR_SET_VALUE(notification_, notification) };
    inline GetAlertRuleResponseBodyAlertRule& setNotification(Models::GetAlertRuleResponseBodyAlertRuleNotification && notification) { DARABONBA_PTR_SET_RVALUE(notification_, notification) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline GetAlertRuleResponseBodyAlertRule& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // triggerCondition Field Functions 
    bool hasTriggerCondition() const { return this->triggerCondition_ != nullptr;};
    void deleteTriggerCondition() { this->triggerCondition_ = nullptr;};
    inline const Models::GetAlertRuleResponseBodyAlertRuleTriggerCondition & triggerCondition() const { DARABONBA_PTR_GET_CONST(triggerCondition_, Models::GetAlertRuleResponseBodyAlertRuleTriggerCondition) };
    inline Models::GetAlertRuleResponseBodyAlertRuleTriggerCondition triggerCondition() { DARABONBA_PTR_GET(triggerCondition_, Models::GetAlertRuleResponseBodyAlertRuleTriggerCondition) };
    inline GetAlertRuleResponseBodyAlertRule& setTriggerCondition(const Models::GetAlertRuleResponseBodyAlertRuleTriggerCondition & triggerCondition) { DARABONBA_PTR_SET_VALUE(triggerCondition_, triggerCondition) };
    inline GetAlertRuleResponseBodyAlertRule& setTriggerCondition(Models::GetAlertRuleResponseBodyAlertRuleTriggerCondition && triggerCondition) { DARABONBA_PTR_SET_RVALUE(triggerCondition_, triggerCondition) };


  protected:
    // Indicates whether the rule is enabled.
    std::shared_ptr<bool> enabled_ = nullptr;
    // The rule ID.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The name of the rule.
    std::shared_ptr<string> name_ = nullptr;
    // The configuration for the alert notification.
    std::shared_ptr<Models::GetAlertRuleResponseBodyAlertRuleNotification> notification_ = nullptr;
    // The ID of the Alibaba Cloud account used by the owner of the rule.
    std::shared_ptr<string> owner_ = nullptr;
    // The alert triggering condition.
    std::shared_ptr<Models::GetAlertRuleResponseBodyAlertRuleTriggerCondition> triggerCondition_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
