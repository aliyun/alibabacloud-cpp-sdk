// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDIALARMRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDIALARMRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateDIAlarmRuleRequestNotificationSettings.hpp>
#include <vector>
#include <alibabacloud/models/CreateDIAlarmRuleRequestTriggerConditions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class CreateDIAlarmRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDIAlarmRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DIJobId, DIJobId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(MetricType, metricType_);
      DARABONBA_PTR_TO_JSON(NotificationSettings, notificationSettings_);
      DARABONBA_PTR_TO_JSON(TriggerConditions, triggerConditions_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDIAlarmRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DIJobId, DIJobId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(MetricType, metricType_);
      DARABONBA_PTR_FROM_JSON(NotificationSettings, notificationSettings_);
      DARABONBA_PTR_FROM_JSON(TriggerConditions, triggerConditions_);
    };
    CreateDIAlarmRuleRequest() = default ;
    CreateDIAlarmRuleRequest(const CreateDIAlarmRuleRequest &) = default ;
    CreateDIAlarmRuleRequest(CreateDIAlarmRuleRequest &&) = default ;
    CreateDIAlarmRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDIAlarmRuleRequest() = default ;
    CreateDIAlarmRuleRequest& operator=(const CreateDIAlarmRuleRequest &) = default ;
    CreateDIAlarmRuleRequest& operator=(CreateDIAlarmRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DIJobId_ != nullptr
        && this->description_ != nullptr && this->enabled_ != nullptr && this->metricType_ != nullptr && this->notificationSettings_ != nullptr && this->triggerConditions_ != nullptr; };
    // DIJobId Field Functions 
    bool hasDIJobId() const { return this->DIJobId_ != nullptr;};
    void deleteDIJobId() { this->DIJobId_ = nullptr;};
    inline int64_t DIJobId() const { DARABONBA_PTR_GET_DEFAULT(DIJobId_, 0L) };
    inline CreateDIAlarmRuleRequest& setDIJobId(int64_t DIJobId) { DARABONBA_PTR_SET_VALUE(DIJobId_, DIJobId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateDIAlarmRuleRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline CreateDIAlarmRuleRequest& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // metricType Field Functions 
    bool hasMetricType() const { return this->metricType_ != nullptr;};
    void deleteMetricType() { this->metricType_ = nullptr;};
    inline string metricType() const { DARABONBA_PTR_GET_DEFAULT(metricType_, "") };
    inline CreateDIAlarmRuleRequest& setMetricType(string metricType) { DARABONBA_PTR_SET_VALUE(metricType_, metricType) };


    // notificationSettings Field Functions 
    bool hasNotificationSettings() const { return this->notificationSettings_ != nullptr;};
    void deleteNotificationSettings() { this->notificationSettings_ = nullptr;};
    inline const CreateDIAlarmRuleRequestNotificationSettings & notificationSettings() const { DARABONBA_PTR_GET_CONST(notificationSettings_, CreateDIAlarmRuleRequestNotificationSettings) };
    inline CreateDIAlarmRuleRequestNotificationSettings notificationSettings() { DARABONBA_PTR_GET(notificationSettings_, CreateDIAlarmRuleRequestNotificationSettings) };
    inline CreateDIAlarmRuleRequest& setNotificationSettings(const CreateDIAlarmRuleRequestNotificationSettings & notificationSettings) { DARABONBA_PTR_SET_VALUE(notificationSettings_, notificationSettings) };
    inline CreateDIAlarmRuleRequest& setNotificationSettings(CreateDIAlarmRuleRequestNotificationSettings && notificationSettings) { DARABONBA_PTR_SET_RVALUE(notificationSettings_, notificationSettings) };


    // triggerConditions Field Functions 
    bool hasTriggerConditions() const { return this->triggerConditions_ != nullptr;};
    void deleteTriggerConditions() { this->triggerConditions_ = nullptr;};
    inline const vector<CreateDIAlarmRuleRequestTriggerConditions> & triggerConditions() const { DARABONBA_PTR_GET_CONST(triggerConditions_, vector<CreateDIAlarmRuleRequestTriggerConditions>) };
    inline vector<CreateDIAlarmRuleRequestTriggerConditions> triggerConditions() { DARABONBA_PTR_GET(triggerConditions_, vector<CreateDIAlarmRuleRequestTriggerConditions>) };
    inline CreateDIAlarmRuleRequest& setTriggerConditions(const vector<CreateDIAlarmRuleRequestTriggerConditions> & triggerConditions) { DARABONBA_PTR_SET_VALUE(triggerConditions_, triggerConditions) };
    inline CreateDIAlarmRuleRequest& setTriggerConditions(vector<CreateDIAlarmRuleRequestTriggerConditions> && triggerConditions) { DARABONBA_PTR_SET_RVALUE(triggerConditions_, triggerConditions) };


  protected:
    // The ID of the task with which the alert rule is associated.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> DIJobId_ = nullptr;
    // The description of the task.
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
    std::shared_ptr<CreateDIAlarmRuleRequestNotificationSettings> notificationSettings_ = nullptr;
    // The conditions that are used to trigger the alert rule.
    // 
    // This parameter is required.
    std::shared_ptr<vector<CreateDIAlarmRuleRequestTriggerConditions>> triggerConditions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
