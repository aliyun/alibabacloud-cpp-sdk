// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDIALARMRULESRESPONSEBODYPAGINGINFODIJOBALARMRULES_HPP_
#define ALIBABACLOUD_MODELS_LISTDIALARMRULESRESPONSEBODYPAGINGINFODIJOBALARMRULES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListDIAlarmRulesResponseBodyPagingInfoDIJobAlarmRulesNotificationSettings.hpp>
#include <vector>
#include <alibabacloud/models/ListDIAlarmRulesResponseBodyPagingInfoDIJobAlarmRulesTriggerConditions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListDIAlarmRulesResponseBodyPagingInfoDIJobAlarmRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDIAlarmRulesResponseBodyPagingInfoDIJobAlarmRules& obj) { 
      DARABONBA_PTR_TO_JSON(DIAlarmRuleId, DIAlarmRuleId_);
      DARABONBA_PTR_TO_JSON(DIJobId, DIJobId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(MetricType, metricType_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NotificationSettings, notificationSettings_);
      DARABONBA_PTR_TO_JSON(TriggerConditions, triggerConditions_);
    };
    friend void from_json(const Darabonba::Json& j, ListDIAlarmRulesResponseBodyPagingInfoDIJobAlarmRules& obj) { 
      DARABONBA_PTR_FROM_JSON(DIAlarmRuleId, DIAlarmRuleId_);
      DARABONBA_PTR_FROM_JSON(DIJobId, DIJobId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(MetricType, metricType_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NotificationSettings, notificationSettings_);
      DARABONBA_PTR_FROM_JSON(TriggerConditions, triggerConditions_);
    };
    ListDIAlarmRulesResponseBodyPagingInfoDIJobAlarmRules() = default ;
    ListDIAlarmRulesResponseBodyPagingInfoDIJobAlarmRules(const ListDIAlarmRulesResponseBodyPagingInfoDIJobAlarmRules &) = default ;
    ListDIAlarmRulesResponseBodyPagingInfoDIJobAlarmRules(ListDIAlarmRulesResponseBodyPagingInfoDIJobAlarmRules &&) = default ;
    ListDIAlarmRulesResponseBodyPagingInfoDIJobAlarmRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDIAlarmRulesResponseBodyPagingInfoDIJobAlarmRules() = default ;
    ListDIAlarmRulesResponseBodyPagingInfoDIJobAlarmRules& operator=(const ListDIAlarmRulesResponseBodyPagingInfoDIJobAlarmRules &) = default ;
    ListDIAlarmRulesResponseBodyPagingInfoDIJobAlarmRules& operator=(ListDIAlarmRulesResponseBodyPagingInfoDIJobAlarmRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DIAlarmRuleId_ != nullptr
        && this->DIJobId_ != nullptr && this->description_ != nullptr && this->enabled_ != nullptr && this->id_ != nullptr && this->metricType_ != nullptr
        && this->name_ != nullptr && this->notificationSettings_ != nullptr && this->triggerConditions_ != nullptr; };
    // DIAlarmRuleId Field Functions 
    bool hasDIAlarmRuleId() const { return this->DIAlarmRuleId_ != nullptr;};
    void deleteDIAlarmRuleId() { this->DIAlarmRuleId_ = nullptr;};
    inline int64_t DIAlarmRuleId() const { DARABONBA_PTR_GET_DEFAULT(DIAlarmRuleId_, 0L) };
    inline ListDIAlarmRulesResponseBodyPagingInfoDIJobAlarmRules& setDIAlarmRuleId(int64_t DIAlarmRuleId) { DARABONBA_PTR_SET_VALUE(DIAlarmRuleId_, DIAlarmRuleId) };


    // DIJobId Field Functions 
    bool hasDIJobId() const { return this->DIJobId_ != nullptr;};
    void deleteDIJobId() { this->DIJobId_ = nullptr;};
    inline int64_t DIJobId() const { DARABONBA_PTR_GET_DEFAULT(DIJobId_, 0L) };
    inline ListDIAlarmRulesResponseBodyPagingInfoDIJobAlarmRules& setDIJobId(int64_t DIJobId) { DARABONBA_PTR_SET_VALUE(DIJobId_, DIJobId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListDIAlarmRulesResponseBodyPagingInfoDIJobAlarmRules& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline ListDIAlarmRulesResponseBodyPagingInfoDIJobAlarmRules& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline ListDIAlarmRulesResponseBodyPagingInfoDIJobAlarmRules& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // metricType Field Functions 
    bool hasMetricType() const { return this->metricType_ != nullptr;};
    void deleteMetricType() { this->metricType_ = nullptr;};
    inline string metricType() const { DARABONBA_PTR_GET_DEFAULT(metricType_, "") };
    inline ListDIAlarmRulesResponseBodyPagingInfoDIJobAlarmRules& setMetricType(string metricType) { DARABONBA_PTR_SET_VALUE(metricType_, metricType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListDIAlarmRulesResponseBodyPagingInfoDIJobAlarmRules& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // notificationSettings Field Functions 
    bool hasNotificationSettings() const { return this->notificationSettings_ != nullptr;};
    void deleteNotificationSettings() { this->notificationSettings_ = nullptr;};
    inline const Models::ListDIAlarmRulesResponseBodyPagingInfoDIJobAlarmRulesNotificationSettings & notificationSettings() const { DARABONBA_PTR_GET_CONST(notificationSettings_, Models::ListDIAlarmRulesResponseBodyPagingInfoDIJobAlarmRulesNotificationSettings) };
    inline Models::ListDIAlarmRulesResponseBodyPagingInfoDIJobAlarmRulesNotificationSettings notificationSettings() { DARABONBA_PTR_GET(notificationSettings_, Models::ListDIAlarmRulesResponseBodyPagingInfoDIJobAlarmRulesNotificationSettings) };
    inline ListDIAlarmRulesResponseBodyPagingInfoDIJobAlarmRules& setNotificationSettings(const Models::ListDIAlarmRulesResponseBodyPagingInfoDIJobAlarmRulesNotificationSettings & notificationSettings) { DARABONBA_PTR_SET_VALUE(notificationSettings_, notificationSettings) };
    inline ListDIAlarmRulesResponseBodyPagingInfoDIJobAlarmRules& setNotificationSettings(Models::ListDIAlarmRulesResponseBodyPagingInfoDIJobAlarmRulesNotificationSettings && notificationSettings) { DARABONBA_PTR_SET_RVALUE(notificationSettings_, notificationSettings) };


    // triggerConditions Field Functions 
    bool hasTriggerConditions() const { return this->triggerConditions_ != nullptr;};
    void deleteTriggerConditions() { this->triggerConditions_ = nullptr;};
    inline const vector<Models::ListDIAlarmRulesResponseBodyPagingInfoDIJobAlarmRulesTriggerConditions> & triggerConditions() const { DARABONBA_PTR_GET_CONST(triggerConditions_, vector<Models::ListDIAlarmRulesResponseBodyPagingInfoDIJobAlarmRulesTriggerConditions>) };
    inline vector<Models::ListDIAlarmRulesResponseBodyPagingInfoDIJobAlarmRulesTriggerConditions> triggerConditions() { DARABONBA_PTR_GET(triggerConditions_, vector<Models::ListDIAlarmRulesResponseBodyPagingInfoDIJobAlarmRulesTriggerConditions>) };
    inline ListDIAlarmRulesResponseBodyPagingInfoDIJobAlarmRules& setTriggerConditions(const vector<Models::ListDIAlarmRulesResponseBodyPagingInfoDIJobAlarmRulesTriggerConditions> & triggerConditions) { DARABONBA_PTR_SET_VALUE(triggerConditions_, triggerConditions) };
    inline ListDIAlarmRulesResponseBodyPagingInfoDIJobAlarmRules& setTriggerConditions(vector<Models::ListDIAlarmRulesResponseBodyPagingInfoDIJobAlarmRulesTriggerConditions> && triggerConditions) { DARABONBA_PTR_SET_RVALUE(triggerConditions_, triggerConditions) };


  protected:
    // This parameter is deprecated. Use the Id parameter instead.
    std::shared_ptr<int64_t> DIAlarmRuleId_ = nullptr;
    // The ID of the synchronization task.
    std::shared_ptr<int64_t> DIJobId_ = nullptr;
    // The description of the alert rule.
    std::shared_ptr<string> description_ = nullptr;
    // Indicates whether the alert rule is enabled. Valid values: True and False.
    std::shared_ptr<bool> enabled_ = nullptr;
    // The ID of the alert rule.
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
    // The alert notification method and recipient settings.
    std::shared_ptr<Models::ListDIAlarmRulesResponseBodyPagingInfoDIJobAlarmRulesNotificationSettings> notificationSettings_ = nullptr;
    // The conditions that are used to trigger the alert rule.
    std::shared_ptr<vector<Models::ListDIAlarmRulesResponseBodyPagingInfoDIJobAlarmRulesTriggerConditions>> triggerConditions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
