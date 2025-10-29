// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDIALARMRULESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDIALARMRULESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class CreateDIAlarmRuleShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDIAlarmRuleShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DIJobId, DIJobId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(MetricType, metricType_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NotificationSettings, notificationSettingsShrink_);
      DARABONBA_PTR_TO_JSON(TriggerConditions, triggerConditionsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDIAlarmRuleShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DIJobId, DIJobId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(MetricType, metricType_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NotificationSettings, notificationSettingsShrink_);
      DARABONBA_PTR_FROM_JSON(TriggerConditions, triggerConditionsShrink_);
    };
    CreateDIAlarmRuleShrinkRequest() = default ;
    CreateDIAlarmRuleShrinkRequest(const CreateDIAlarmRuleShrinkRequest &) = default ;
    CreateDIAlarmRuleShrinkRequest(CreateDIAlarmRuleShrinkRequest &&) = default ;
    CreateDIAlarmRuleShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDIAlarmRuleShrinkRequest() = default ;
    CreateDIAlarmRuleShrinkRequest& operator=(const CreateDIAlarmRuleShrinkRequest &) = default ;
    CreateDIAlarmRuleShrinkRequest& operator=(CreateDIAlarmRuleShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && return this->DIJobId_ == nullptr && return this->description_ == nullptr && return this->enabled_ == nullptr && return this->metricType_ == nullptr && return this->name_ == nullptr
        && return this->notificationSettingsShrink_ == nullptr && return this->triggerConditionsShrink_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateDIAlarmRuleShrinkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // DIJobId Field Functions 
    bool hasDIJobId() const { return this->DIJobId_ != nullptr;};
    void deleteDIJobId() { this->DIJobId_ = nullptr;};
    inline int64_t DIJobId() const { DARABONBA_PTR_GET_DEFAULT(DIJobId_, 0L) };
    inline CreateDIAlarmRuleShrinkRequest& setDIJobId(int64_t DIJobId) { DARABONBA_PTR_SET_VALUE(DIJobId_, DIJobId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateDIAlarmRuleShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline CreateDIAlarmRuleShrinkRequest& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // metricType Field Functions 
    bool hasMetricType() const { return this->metricType_ != nullptr;};
    void deleteMetricType() { this->metricType_ = nullptr;};
    inline string metricType() const { DARABONBA_PTR_GET_DEFAULT(metricType_, "") };
    inline CreateDIAlarmRuleShrinkRequest& setMetricType(string metricType) { DARABONBA_PTR_SET_VALUE(metricType_, metricType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateDIAlarmRuleShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // notificationSettingsShrink Field Functions 
    bool hasNotificationSettingsShrink() const { return this->notificationSettingsShrink_ != nullptr;};
    void deleteNotificationSettingsShrink() { this->notificationSettingsShrink_ = nullptr;};
    inline string notificationSettingsShrink() const { DARABONBA_PTR_GET_DEFAULT(notificationSettingsShrink_, "") };
    inline CreateDIAlarmRuleShrinkRequest& setNotificationSettingsShrink(string notificationSettingsShrink) { DARABONBA_PTR_SET_VALUE(notificationSettingsShrink_, notificationSettingsShrink) };


    // triggerConditionsShrink Field Functions 
    bool hasTriggerConditionsShrink() const { return this->triggerConditionsShrink_ != nullptr;};
    void deleteTriggerConditionsShrink() { this->triggerConditionsShrink_ = nullptr;};
    inline string triggerConditionsShrink() const { DARABONBA_PTR_GET_DEFAULT(triggerConditionsShrink_, "") };
    inline CreateDIAlarmRuleShrinkRequest& setTriggerConditionsShrink(string triggerConditionsShrink) { DARABONBA_PTR_SET_VALUE(triggerConditionsShrink_, triggerConditionsShrink) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The ID of the synchronization task with which the alert rule is associated.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> DIJobId_ = nullptr;
    // The description of the alert rule.
    std::shared_ptr<string> description_ = nullptr;
    // Specifies whether to enable the alert rule. By default, the alert rule is disabled.
    std::shared_ptr<bool> enabled_ = nullptr;
    // The metric type in the alert rule. Valid values:
    // 
    // *   Heartbeat
    // *   FailoverCount
    // *   Delay
    // *   DdlReport
    // *   ResourceUtilization
    // 
    // This parameter is required.
    std::shared_ptr<string> metricType_ = nullptr;
    // The name of the alert rule.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The alert notification settings.
    // 
    // This parameter is required.
    std::shared_ptr<string> notificationSettingsShrink_ = nullptr;
    // The conditions that can trigger the alert rule.
    // 
    // This parameter is required.
    std::shared_ptr<string> triggerConditionsShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
