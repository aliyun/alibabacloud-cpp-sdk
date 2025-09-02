// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDIALARMRULERESPONSEBODYDIALARMRULE_HPP_
#define ALIBABACLOUD_MODELS_GETDIALARMRULERESPONSEBODYDIALARMRULE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDIAlarmRuleResponseBodyDIAlarmRuleNotificationSettings.hpp>
#include <vector>
#include <alibabacloud/models/GetDIAlarmRuleResponseBodyDIAlarmRuleTriggerConditions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetDIAlarmRuleResponseBodyDIAlarmRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDIAlarmRuleResponseBodyDIAlarmRule& obj) { 
      DARABONBA_PTR_TO_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_TO_JSON(CreatedUid, createdUid_);
      DARABONBA_PTR_TO_JSON(DIAlarmRuleId, DIAlarmRuleId_);
      DARABONBA_PTR_TO_JSON(DIJobId, DIJobId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(MetricType, metricType_);
      DARABONBA_PTR_TO_JSON(NotificationSettings, notificationSettings_);
      DARABONBA_PTR_TO_JSON(TriggerConditions, triggerConditions_);
      DARABONBA_PTR_TO_JSON(UpdatedTime, updatedTime_);
      DARABONBA_PTR_TO_JSON(UpdatedUid, updatedUid_);
    };
    friend void from_json(const Darabonba::Json& j, GetDIAlarmRuleResponseBodyDIAlarmRule& obj) { 
      DARABONBA_PTR_FROM_JSON(CreatedTime, createdTime_);
      DARABONBA_PTR_FROM_JSON(CreatedUid, createdUid_);
      DARABONBA_PTR_FROM_JSON(DIAlarmRuleId, DIAlarmRuleId_);
      DARABONBA_PTR_FROM_JSON(DIJobId, DIJobId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(MetricType, metricType_);
      DARABONBA_PTR_FROM_JSON(NotificationSettings, notificationSettings_);
      DARABONBA_PTR_FROM_JSON(TriggerConditions, triggerConditions_);
      DARABONBA_PTR_FROM_JSON(UpdatedTime, updatedTime_);
      DARABONBA_PTR_FROM_JSON(UpdatedUid, updatedUid_);
    };
    GetDIAlarmRuleResponseBodyDIAlarmRule() = default ;
    GetDIAlarmRuleResponseBodyDIAlarmRule(const GetDIAlarmRuleResponseBodyDIAlarmRule &) = default ;
    GetDIAlarmRuleResponseBodyDIAlarmRule(GetDIAlarmRuleResponseBodyDIAlarmRule &&) = default ;
    GetDIAlarmRuleResponseBodyDIAlarmRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDIAlarmRuleResponseBodyDIAlarmRule() = default ;
    GetDIAlarmRuleResponseBodyDIAlarmRule& operator=(const GetDIAlarmRuleResponseBodyDIAlarmRule &) = default ;
    GetDIAlarmRuleResponseBodyDIAlarmRule& operator=(GetDIAlarmRuleResponseBodyDIAlarmRule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createdTime_ != nullptr
        && this->createdUid_ != nullptr && this->DIAlarmRuleId_ != nullptr && this->DIJobId_ != nullptr && this->description_ != nullptr && this->enabled_ != nullptr
        && this->metricType_ != nullptr && this->notificationSettings_ != nullptr && this->triggerConditions_ != nullptr && this->updatedTime_ != nullptr && this->updatedUid_ != nullptr; };
    // createdTime Field Functions 
    bool hasCreatedTime() const { return this->createdTime_ != nullptr;};
    void deleteCreatedTime() { this->createdTime_ = nullptr;};
    inline int64_t createdTime() const { DARABONBA_PTR_GET_DEFAULT(createdTime_, 0L) };
    inline GetDIAlarmRuleResponseBodyDIAlarmRule& setCreatedTime(int64_t createdTime) { DARABONBA_PTR_SET_VALUE(createdTime_, createdTime) };


    // createdUid Field Functions 
    bool hasCreatedUid() const { return this->createdUid_ != nullptr;};
    void deleteCreatedUid() { this->createdUid_ = nullptr;};
    inline string createdUid() const { DARABONBA_PTR_GET_DEFAULT(createdUid_, "") };
    inline GetDIAlarmRuleResponseBodyDIAlarmRule& setCreatedUid(string createdUid) { DARABONBA_PTR_SET_VALUE(createdUid_, createdUid) };


    // DIAlarmRuleId Field Functions 
    bool hasDIAlarmRuleId() const { return this->DIAlarmRuleId_ != nullptr;};
    void deleteDIAlarmRuleId() { this->DIAlarmRuleId_ = nullptr;};
    inline int64_t DIAlarmRuleId() const { DARABONBA_PTR_GET_DEFAULT(DIAlarmRuleId_, 0L) };
    inline GetDIAlarmRuleResponseBodyDIAlarmRule& setDIAlarmRuleId(int64_t DIAlarmRuleId) { DARABONBA_PTR_SET_VALUE(DIAlarmRuleId_, DIAlarmRuleId) };


    // DIJobId Field Functions 
    bool hasDIJobId() const { return this->DIJobId_ != nullptr;};
    void deleteDIJobId() { this->DIJobId_ = nullptr;};
    inline int64_t DIJobId() const { DARABONBA_PTR_GET_DEFAULT(DIJobId_, 0L) };
    inline GetDIAlarmRuleResponseBodyDIAlarmRule& setDIJobId(int64_t DIJobId) { DARABONBA_PTR_SET_VALUE(DIJobId_, DIJobId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetDIAlarmRuleResponseBodyDIAlarmRule& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline GetDIAlarmRuleResponseBodyDIAlarmRule& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // metricType Field Functions 
    bool hasMetricType() const { return this->metricType_ != nullptr;};
    void deleteMetricType() { this->metricType_ = nullptr;};
    inline string metricType() const { DARABONBA_PTR_GET_DEFAULT(metricType_, "") };
    inline GetDIAlarmRuleResponseBodyDIAlarmRule& setMetricType(string metricType) { DARABONBA_PTR_SET_VALUE(metricType_, metricType) };


    // notificationSettings Field Functions 
    bool hasNotificationSettings() const { return this->notificationSettings_ != nullptr;};
    void deleteNotificationSettings() { this->notificationSettings_ = nullptr;};
    inline const Models::GetDIAlarmRuleResponseBodyDIAlarmRuleNotificationSettings & notificationSettings() const { DARABONBA_PTR_GET_CONST(notificationSettings_, Models::GetDIAlarmRuleResponseBodyDIAlarmRuleNotificationSettings) };
    inline Models::GetDIAlarmRuleResponseBodyDIAlarmRuleNotificationSettings notificationSettings() { DARABONBA_PTR_GET(notificationSettings_, Models::GetDIAlarmRuleResponseBodyDIAlarmRuleNotificationSettings) };
    inline GetDIAlarmRuleResponseBodyDIAlarmRule& setNotificationSettings(const Models::GetDIAlarmRuleResponseBodyDIAlarmRuleNotificationSettings & notificationSettings) { DARABONBA_PTR_SET_VALUE(notificationSettings_, notificationSettings) };
    inline GetDIAlarmRuleResponseBodyDIAlarmRule& setNotificationSettings(Models::GetDIAlarmRuleResponseBodyDIAlarmRuleNotificationSettings && notificationSettings) { DARABONBA_PTR_SET_RVALUE(notificationSettings_, notificationSettings) };


    // triggerConditions Field Functions 
    bool hasTriggerConditions() const { return this->triggerConditions_ != nullptr;};
    void deleteTriggerConditions() { this->triggerConditions_ = nullptr;};
    inline const vector<Models::GetDIAlarmRuleResponseBodyDIAlarmRuleTriggerConditions> & triggerConditions() const { DARABONBA_PTR_GET_CONST(triggerConditions_, vector<Models::GetDIAlarmRuleResponseBodyDIAlarmRuleTriggerConditions>) };
    inline vector<Models::GetDIAlarmRuleResponseBodyDIAlarmRuleTriggerConditions> triggerConditions() { DARABONBA_PTR_GET(triggerConditions_, vector<Models::GetDIAlarmRuleResponseBodyDIAlarmRuleTriggerConditions>) };
    inline GetDIAlarmRuleResponseBodyDIAlarmRule& setTriggerConditions(const vector<Models::GetDIAlarmRuleResponseBodyDIAlarmRuleTriggerConditions> & triggerConditions) { DARABONBA_PTR_SET_VALUE(triggerConditions_, triggerConditions) };
    inline GetDIAlarmRuleResponseBodyDIAlarmRule& setTriggerConditions(vector<Models::GetDIAlarmRuleResponseBodyDIAlarmRuleTriggerConditions> && triggerConditions) { DARABONBA_PTR_SET_RVALUE(triggerConditions_, triggerConditions) };


    // updatedTime Field Functions 
    bool hasUpdatedTime() const { return this->updatedTime_ != nullptr;};
    void deleteUpdatedTime() { this->updatedTime_ = nullptr;};
    inline int64_t updatedTime() const { DARABONBA_PTR_GET_DEFAULT(updatedTime_, 0L) };
    inline GetDIAlarmRuleResponseBodyDIAlarmRule& setUpdatedTime(int64_t updatedTime) { DARABONBA_PTR_SET_VALUE(updatedTime_, updatedTime) };


    // updatedUid Field Functions 
    bool hasUpdatedUid() const { return this->updatedUid_ != nullptr;};
    void deleteUpdatedUid() { this->updatedUid_ = nullptr;};
    inline string updatedUid() const { DARABONBA_PTR_GET_DEFAULT(updatedUid_, "") };
    inline GetDIAlarmRuleResponseBodyDIAlarmRule& setUpdatedUid(string updatedUid) { DARABONBA_PTR_SET_VALUE(updatedUid_, updatedUid) };


  protected:
    // The timestamp when the alert rule was created. Unit: seconds.
    std::shared_ptr<int64_t> createdTime_ = nullptr;
    // The ID of the user who creates the alert rule.
    std::shared_ptr<string> createdUid_ = nullptr;
    // The alert rule ID.
    std::shared_ptr<int64_t> DIAlarmRuleId_ = nullptr;
    // The ID of the task with which the alert rule is associated.
    std::shared_ptr<int64_t> DIJobId_ = nullptr;
    // The description of the alert rule.
    std::shared_ptr<string> description_ = nullptr;
    // Indicates whether the alert rule is enabled.
    std::shared_ptr<bool> enabled_ = nullptr;
    // The metric type in the alert rule. Valid values:
    // 
    // *   Heartbeat
    // *   FailoverCount
    // *   Delay
    std::shared_ptr<string> metricType_ = nullptr;
    // The alert notification settings.
    std::shared_ptr<Models::GetDIAlarmRuleResponseBodyDIAlarmRuleNotificationSettings> notificationSettings_ = nullptr;
    // The conditions that are used to trigger the alert rule.
    std::shared_ptr<vector<Models::GetDIAlarmRuleResponseBodyDIAlarmRuleTriggerConditions>> triggerConditions_ = nullptr;
    // The timestamp when the alert rule was last updated. Unit: seconds.
    std::shared_ptr<int64_t> updatedTime_ = nullptr;
    // The ID of the user who last updates the alert rule.
    std::shared_ptr<string> updatedUid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
