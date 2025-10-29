// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDIALARMRULESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDIALARMRULESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class UpdateDIAlarmRuleShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDIAlarmRuleShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DIAlarmRuleId, DIAlarmRuleId_);
      DARABONBA_PTR_TO_JSON(DIJobId, DIJobId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(MetricType, metricType_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NotificationSettings, notificationSettingsShrink_);
      DARABONBA_PTR_TO_JSON(TriggerConditions, triggerConditionsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDIAlarmRuleShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DIAlarmRuleId, DIAlarmRuleId_);
      DARABONBA_PTR_FROM_JSON(DIJobId, DIJobId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(MetricType, metricType_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NotificationSettings, notificationSettingsShrink_);
      DARABONBA_PTR_FROM_JSON(TriggerConditions, triggerConditionsShrink_);
    };
    UpdateDIAlarmRuleShrinkRequest() = default ;
    UpdateDIAlarmRuleShrinkRequest(const UpdateDIAlarmRuleShrinkRequest &) = default ;
    UpdateDIAlarmRuleShrinkRequest(UpdateDIAlarmRuleShrinkRequest &&) = default ;
    UpdateDIAlarmRuleShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDIAlarmRuleShrinkRequest() = default ;
    UpdateDIAlarmRuleShrinkRequest& operator=(const UpdateDIAlarmRuleShrinkRequest &) = default ;
    UpdateDIAlarmRuleShrinkRequest& operator=(UpdateDIAlarmRuleShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DIAlarmRuleId_ == nullptr
        && return this->DIJobId_ == nullptr && return this->description_ == nullptr && return this->enabled_ == nullptr && return this->id_ == nullptr && return this->metricType_ == nullptr
        && return this->name_ == nullptr && return this->notificationSettingsShrink_ == nullptr && return this->triggerConditionsShrink_ == nullptr; };
    // DIAlarmRuleId Field Functions 
    bool hasDIAlarmRuleId() const { return this->DIAlarmRuleId_ != nullptr;};
    void deleteDIAlarmRuleId() { this->DIAlarmRuleId_ = nullptr;};
    inline int64_t DIAlarmRuleId() const { DARABONBA_PTR_GET_DEFAULT(DIAlarmRuleId_, 0L) };
    inline UpdateDIAlarmRuleShrinkRequest& setDIAlarmRuleId(int64_t DIAlarmRuleId) { DARABONBA_PTR_SET_VALUE(DIAlarmRuleId_, DIAlarmRuleId) };


    // DIJobId Field Functions 
    bool hasDIJobId() const { return this->DIJobId_ != nullptr;};
    void deleteDIJobId() { this->DIJobId_ = nullptr;};
    inline int64_t DIJobId() const { DARABONBA_PTR_GET_DEFAULT(DIJobId_, 0L) };
    inline UpdateDIAlarmRuleShrinkRequest& setDIJobId(int64_t DIJobId) { DARABONBA_PTR_SET_VALUE(DIJobId_, DIJobId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateDIAlarmRuleShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline UpdateDIAlarmRuleShrinkRequest& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline UpdateDIAlarmRuleShrinkRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // metricType Field Functions 
    bool hasMetricType() const { return this->metricType_ != nullptr;};
    void deleteMetricType() { this->metricType_ = nullptr;};
    inline string metricType() const { DARABONBA_PTR_GET_DEFAULT(metricType_, "") };
    inline UpdateDIAlarmRuleShrinkRequest& setMetricType(string metricType) { DARABONBA_PTR_SET_VALUE(metricType_, metricType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateDIAlarmRuleShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // notificationSettingsShrink Field Functions 
    bool hasNotificationSettingsShrink() const { return this->notificationSettingsShrink_ != nullptr;};
    void deleteNotificationSettingsShrink() { this->notificationSettingsShrink_ = nullptr;};
    inline string notificationSettingsShrink() const { DARABONBA_PTR_GET_DEFAULT(notificationSettingsShrink_, "") };
    inline UpdateDIAlarmRuleShrinkRequest& setNotificationSettingsShrink(string notificationSettingsShrink) { DARABONBA_PTR_SET_VALUE(notificationSettingsShrink_, notificationSettingsShrink) };


    // triggerConditionsShrink Field Functions 
    bool hasTriggerConditionsShrink() const { return this->triggerConditionsShrink_ != nullptr;};
    void deleteTriggerConditionsShrink() { this->triggerConditionsShrink_ = nullptr;};
    inline string triggerConditionsShrink() const { DARABONBA_PTR_GET_DEFAULT(triggerConditionsShrink_, "") };
    inline UpdateDIAlarmRuleShrinkRequest& setTriggerConditionsShrink(string triggerConditionsShrink) { DARABONBA_PTR_SET_VALUE(triggerConditionsShrink_, triggerConditionsShrink) };


  protected:
    // This parameter is deprecated. Use the Id parameter instead.
    std::shared_ptr<int64_t> DIAlarmRuleId_ = nullptr;
    // The ID of the synchronization task.
    std::shared_ptr<int64_t> DIJobId_ = nullptr;
    // The description of the alert rule.
    std::shared_ptr<string> description_ = nullptr;
    // Specifies whether to enable the alert rule. By default, the alert rule is disabled.
    std::shared_ptr<bool> enabled_ = nullptr;
    // The alert rule Id
    std::shared_ptr<int64_t> id_ = nullptr;
    // The metric type in the alert rule. Valid values:
    // 
    // *   Heartbeat
    // *   FailoverCount
    // *   Delay
    // *   DdlReport
    // *   ResourceUtilization
    std::shared_ptr<string> metricType_ = nullptr;
    // The name of the alert rule.
    std::shared_ptr<string> name_ = nullptr;
    // The alert notification settings.
    std::shared_ptr<string> notificationSettingsShrink_ = nullptr;
    // The conditions that can trigger the alert rule.
    std::shared_ptr<string> triggerConditionsShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
