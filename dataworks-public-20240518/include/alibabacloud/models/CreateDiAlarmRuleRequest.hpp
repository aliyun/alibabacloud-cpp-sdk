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
namespace DataworksPublic20240518
{
namespace Models
{
  class CreateDIAlarmRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDIAlarmRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DIJobId, DIJobId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(MetricType, metricType_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NotificationSettings, notificationSettings_);
      DARABONBA_PTR_TO_JSON(TriggerConditions, triggerConditions_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDIAlarmRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DIJobId, DIJobId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(MetricType, metricType_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
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
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && return this->DIJobId_ == nullptr && return this->description_ == nullptr && return this->enabled_ == nullptr && return this->metricType_ == nullptr && return this->name_ == nullptr
        && return this->notificationSettings_ == nullptr && return this->triggerConditions_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateDIAlarmRuleRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


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


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateDIAlarmRuleRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


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
    std::shared_ptr<CreateDIAlarmRuleRequestNotificationSettings> notificationSettings_ = nullptr;
    // The conditions that can trigger the alert rule.
    // 
    // This parameter is required.
    std::shared_ptr<vector<CreateDIAlarmRuleRequestTriggerConditions>> triggerConditions_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
