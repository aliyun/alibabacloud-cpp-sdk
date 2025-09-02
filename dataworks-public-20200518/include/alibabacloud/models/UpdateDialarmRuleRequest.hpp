// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDIALARMRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDIALARMRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateDIAlarmRuleRequestNotificationSettings.hpp>
#include <vector>
#include <alibabacloud/models/UpdateDIAlarmRuleRequestTriggerConditions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class UpdateDIAlarmRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDIAlarmRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DIAlarmRuleId, DIAlarmRuleId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(MetricType, metricType_);
      DARABONBA_PTR_TO_JSON(NotificationSettings, notificationSettings_);
      DARABONBA_PTR_TO_JSON(TriggerConditions, triggerConditions_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDIAlarmRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DIAlarmRuleId, DIAlarmRuleId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(MetricType, metricType_);
      DARABONBA_PTR_FROM_JSON(NotificationSettings, notificationSettings_);
      DARABONBA_PTR_FROM_JSON(TriggerConditions, triggerConditions_);
    };
    UpdateDIAlarmRuleRequest() = default ;
    UpdateDIAlarmRuleRequest(const UpdateDIAlarmRuleRequest &) = default ;
    UpdateDIAlarmRuleRequest(UpdateDIAlarmRuleRequest &&) = default ;
    UpdateDIAlarmRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDIAlarmRuleRequest() = default ;
    UpdateDIAlarmRuleRequest& operator=(const UpdateDIAlarmRuleRequest &) = default ;
    UpdateDIAlarmRuleRequest& operator=(UpdateDIAlarmRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DIAlarmRuleId_ != nullptr
        && this->description_ != nullptr && this->enabled_ != nullptr && this->metricType_ != nullptr && this->notificationSettings_ != nullptr && this->triggerConditions_ != nullptr; };
    // DIAlarmRuleId Field Functions 
    bool hasDIAlarmRuleId() const { return this->DIAlarmRuleId_ != nullptr;};
    void deleteDIAlarmRuleId() { this->DIAlarmRuleId_ = nullptr;};
    inline int64_t DIAlarmRuleId() const { DARABONBA_PTR_GET_DEFAULT(DIAlarmRuleId_, 0L) };
    inline UpdateDIAlarmRuleRequest& setDIAlarmRuleId(int64_t DIAlarmRuleId) { DARABONBA_PTR_SET_VALUE(DIAlarmRuleId_, DIAlarmRuleId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateDIAlarmRuleRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline UpdateDIAlarmRuleRequest& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // metricType Field Functions 
    bool hasMetricType() const { return this->metricType_ != nullptr;};
    void deleteMetricType() { this->metricType_ = nullptr;};
    inline string metricType() const { DARABONBA_PTR_GET_DEFAULT(metricType_, "") };
    inline UpdateDIAlarmRuleRequest& setMetricType(string metricType) { DARABONBA_PTR_SET_VALUE(metricType_, metricType) };


    // notificationSettings Field Functions 
    bool hasNotificationSettings() const { return this->notificationSettings_ != nullptr;};
    void deleteNotificationSettings() { this->notificationSettings_ = nullptr;};
    inline const UpdateDIAlarmRuleRequestNotificationSettings & notificationSettings() const { DARABONBA_PTR_GET_CONST(notificationSettings_, UpdateDIAlarmRuleRequestNotificationSettings) };
    inline UpdateDIAlarmRuleRequestNotificationSettings notificationSettings() { DARABONBA_PTR_GET(notificationSettings_, UpdateDIAlarmRuleRequestNotificationSettings) };
    inline UpdateDIAlarmRuleRequest& setNotificationSettings(const UpdateDIAlarmRuleRequestNotificationSettings & notificationSettings) { DARABONBA_PTR_SET_VALUE(notificationSettings_, notificationSettings) };
    inline UpdateDIAlarmRuleRequest& setNotificationSettings(UpdateDIAlarmRuleRequestNotificationSettings && notificationSettings) { DARABONBA_PTR_SET_RVALUE(notificationSettings_, notificationSettings) };


    // triggerConditions Field Functions 
    bool hasTriggerConditions() const { return this->triggerConditions_ != nullptr;};
    void deleteTriggerConditions() { this->triggerConditions_ = nullptr;};
    inline const vector<UpdateDIAlarmRuleRequestTriggerConditions> & triggerConditions() const { DARABONBA_PTR_GET_CONST(triggerConditions_, vector<UpdateDIAlarmRuleRequestTriggerConditions>) };
    inline vector<UpdateDIAlarmRuleRequestTriggerConditions> triggerConditions() { DARABONBA_PTR_GET(triggerConditions_, vector<UpdateDIAlarmRuleRequestTriggerConditions>) };
    inline UpdateDIAlarmRuleRequest& setTriggerConditions(const vector<UpdateDIAlarmRuleRequestTriggerConditions> & triggerConditions) { DARABONBA_PTR_SET_VALUE(triggerConditions_, triggerConditions) };
    inline UpdateDIAlarmRuleRequest& setTriggerConditions(vector<UpdateDIAlarmRuleRequestTriggerConditions> && triggerConditions) { DARABONBA_PTR_SET_RVALUE(triggerConditions_, triggerConditions) };


  protected:
    // The alert rule ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> DIAlarmRuleId_ = nullptr;
    // The description of the alert rule.
    std::shared_ptr<string> description_ = nullptr;
    // Specifies whether to enable the alert rule. By default, the alert rule is disabled.
    std::shared_ptr<bool> enabled_ = nullptr;
    // The metric type in the alert rule. Valid values:
    // 
    // *   Heartbeat
    // *   FailoverCount
    // *   Delay
    // 
    // This parameter is required.
    std::shared_ptr<string> metricType_ = nullptr;
    // The alert notification settings.
    // 
    // This parameter is required.
    std::shared_ptr<UpdateDIAlarmRuleRequestNotificationSettings> notificationSettings_ = nullptr;
    // The conditions that are used to trigger the alert rule.
    // 
    // This parameter is required.
    std::shared_ptr<vector<UpdateDIAlarmRuleRequestTriggerConditions>> triggerConditions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
