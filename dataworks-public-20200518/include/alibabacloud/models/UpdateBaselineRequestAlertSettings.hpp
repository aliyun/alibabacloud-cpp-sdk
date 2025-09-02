// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEBASELINEREQUESTALERTSETTINGS_HPP_
#define ALIBABACLOUD_MODELS_UPDATEBASELINEREQUESTALERTSETTINGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateBaselineRequestAlertSettingsDingRobots.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class UpdateBaselineRequestAlertSettings : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateBaselineRequestAlertSettings& obj) { 
      DARABONBA_PTR_TO_JSON(AlertInterval, alertInterval_);
      DARABONBA_PTR_TO_JSON(AlertMaximum, alertMaximum_);
      DARABONBA_PTR_TO_JSON(AlertMethods, alertMethods_);
      DARABONBA_PTR_TO_JSON(AlertRecipient, alertRecipient_);
      DARABONBA_PTR_TO_JSON(AlertRecipientType, alertRecipientType_);
      DARABONBA_PTR_TO_JSON(AlertType, alertType_);
      DARABONBA_PTR_TO_JSON(BaselineAlertEnabled, baselineAlertEnabled_);
      DARABONBA_PTR_TO_JSON(DingRobots, dingRobots_);
      DARABONBA_PTR_TO_JSON(SilenceEndTime, silenceEndTime_);
      DARABONBA_PTR_TO_JSON(SilenceStartTime, silenceStartTime_);
      DARABONBA_PTR_TO_JSON(TopicTypes, topicTypes_);
      DARABONBA_PTR_TO_JSON(Webhooks, webhooks_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateBaselineRequestAlertSettings& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertInterval, alertInterval_);
      DARABONBA_PTR_FROM_JSON(AlertMaximum, alertMaximum_);
      DARABONBA_PTR_FROM_JSON(AlertMethods, alertMethods_);
      DARABONBA_PTR_FROM_JSON(AlertRecipient, alertRecipient_);
      DARABONBA_PTR_FROM_JSON(AlertRecipientType, alertRecipientType_);
      DARABONBA_PTR_FROM_JSON(AlertType, alertType_);
      DARABONBA_PTR_FROM_JSON(BaselineAlertEnabled, baselineAlertEnabled_);
      DARABONBA_PTR_FROM_JSON(DingRobots, dingRobots_);
      DARABONBA_PTR_FROM_JSON(SilenceEndTime, silenceEndTime_);
      DARABONBA_PTR_FROM_JSON(SilenceStartTime, silenceStartTime_);
      DARABONBA_PTR_FROM_JSON(TopicTypes, topicTypes_);
      DARABONBA_PTR_FROM_JSON(Webhooks, webhooks_);
    };
    UpdateBaselineRequestAlertSettings() = default ;
    UpdateBaselineRequestAlertSettings(const UpdateBaselineRequestAlertSettings &) = default ;
    UpdateBaselineRequestAlertSettings(UpdateBaselineRequestAlertSettings &&) = default ;
    UpdateBaselineRequestAlertSettings(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateBaselineRequestAlertSettings() = default ;
    UpdateBaselineRequestAlertSettings& operator=(const UpdateBaselineRequestAlertSettings &) = default ;
    UpdateBaselineRequestAlertSettings& operator=(UpdateBaselineRequestAlertSettings &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alertInterval_ != nullptr
        && this->alertMaximum_ != nullptr && this->alertMethods_ != nullptr && this->alertRecipient_ != nullptr && this->alertRecipientType_ != nullptr && this->alertType_ != nullptr
        && this->baselineAlertEnabled_ != nullptr && this->dingRobots_ != nullptr && this->silenceEndTime_ != nullptr && this->silenceStartTime_ != nullptr && this->topicTypes_ != nullptr
        && this->webhooks_ != nullptr; };
    // alertInterval Field Functions 
    bool hasAlertInterval() const { return this->alertInterval_ != nullptr;};
    void deleteAlertInterval() { this->alertInterval_ = nullptr;};
    inline int32_t alertInterval() const { DARABONBA_PTR_GET_DEFAULT(alertInterval_, 0) };
    inline UpdateBaselineRequestAlertSettings& setAlertInterval(int32_t alertInterval) { DARABONBA_PTR_SET_VALUE(alertInterval_, alertInterval) };


    // alertMaximum Field Functions 
    bool hasAlertMaximum() const { return this->alertMaximum_ != nullptr;};
    void deleteAlertMaximum() { this->alertMaximum_ = nullptr;};
    inline int32_t alertMaximum() const { DARABONBA_PTR_GET_DEFAULT(alertMaximum_, 0) };
    inline UpdateBaselineRequestAlertSettings& setAlertMaximum(int32_t alertMaximum) { DARABONBA_PTR_SET_VALUE(alertMaximum_, alertMaximum) };


    // alertMethods Field Functions 
    bool hasAlertMethods() const { return this->alertMethods_ != nullptr;};
    void deleteAlertMethods() { this->alertMethods_ = nullptr;};
    inline const vector<string> & alertMethods() const { DARABONBA_PTR_GET_CONST(alertMethods_, vector<string>) };
    inline vector<string> alertMethods() { DARABONBA_PTR_GET(alertMethods_, vector<string>) };
    inline UpdateBaselineRequestAlertSettings& setAlertMethods(const vector<string> & alertMethods) { DARABONBA_PTR_SET_VALUE(alertMethods_, alertMethods) };
    inline UpdateBaselineRequestAlertSettings& setAlertMethods(vector<string> && alertMethods) { DARABONBA_PTR_SET_RVALUE(alertMethods_, alertMethods) };


    // alertRecipient Field Functions 
    bool hasAlertRecipient() const { return this->alertRecipient_ != nullptr;};
    void deleteAlertRecipient() { this->alertRecipient_ = nullptr;};
    inline string alertRecipient() const { DARABONBA_PTR_GET_DEFAULT(alertRecipient_, "") };
    inline UpdateBaselineRequestAlertSettings& setAlertRecipient(string alertRecipient) { DARABONBA_PTR_SET_VALUE(alertRecipient_, alertRecipient) };


    // alertRecipientType Field Functions 
    bool hasAlertRecipientType() const { return this->alertRecipientType_ != nullptr;};
    void deleteAlertRecipientType() { this->alertRecipientType_ = nullptr;};
    inline string alertRecipientType() const { DARABONBA_PTR_GET_DEFAULT(alertRecipientType_, "") };
    inline UpdateBaselineRequestAlertSettings& setAlertRecipientType(string alertRecipientType) { DARABONBA_PTR_SET_VALUE(alertRecipientType_, alertRecipientType) };


    // alertType Field Functions 
    bool hasAlertType() const { return this->alertType_ != nullptr;};
    void deleteAlertType() { this->alertType_ = nullptr;};
    inline string alertType() const { DARABONBA_PTR_GET_DEFAULT(alertType_, "") };
    inline UpdateBaselineRequestAlertSettings& setAlertType(string alertType) { DARABONBA_PTR_SET_VALUE(alertType_, alertType) };


    // baselineAlertEnabled Field Functions 
    bool hasBaselineAlertEnabled() const { return this->baselineAlertEnabled_ != nullptr;};
    void deleteBaselineAlertEnabled() { this->baselineAlertEnabled_ = nullptr;};
    inline bool baselineAlertEnabled() const { DARABONBA_PTR_GET_DEFAULT(baselineAlertEnabled_, false) };
    inline UpdateBaselineRequestAlertSettings& setBaselineAlertEnabled(bool baselineAlertEnabled) { DARABONBA_PTR_SET_VALUE(baselineAlertEnabled_, baselineAlertEnabled) };


    // dingRobots Field Functions 
    bool hasDingRobots() const { return this->dingRobots_ != nullptr;};
    void deleteDingRobots() { this->dingRobots_ = nullptr;};
    inline const vector<Models::UpdateBaselineRequestAlertSettingsDingRobots> & dingRobots() const { DARABONBA_PTR_GET_CONST(dingRobots_, vector<Models::UpdateBaselineRequestAlertSettingsDingRobots>) };
    inline vector<Models::UpdateBaselineRequestAlertSettingsDingRobots> dingRobots() { DARABONBA_PTR_GET(dingRobots_, vector<Models::UpdateBaselineRequestAlertSettingsDingRobots>) };
    inline UpdateBaselineRequestAlertSettings& setDingRobots(const vector<Models::UpdateBaselineRequestAlertSettingsDingRobots> & dingRobots) { DARABONBA_PTR_SET_VALUE(dingRobots_, dingRobots) };
    inline UpdateBaselineRequestAlertSettings& setDingRobots(vector<Models::UpdateBaselineRequestAlertSettingsDingRobots> && dingRobots) { DARABONBA_PTR_SET_RVALUE(dingRobots_, dingRobots) };


    // silenceEndTime Field Functions 
    bool hasSilenceEndTime() const { return this->silenceEndTime_ != nullptr;};
    void deleteSilenceEndTime() { this->silenceEndTime_ = nullptr;};
    inline string silenceEndTime() const { DARABONBA_PTR_GET_DEFAULT(silenceEndTime_, "") };
    inline UpdateBaselineRequestAlertSettings& setSilenceEndTime(string silenceEndTime) { DARABONBA_PTR_SET_VALUE(silenceEndTime_, silenceEndTime) };


    // silenceStartTime Field Functions 
    bool hasSilenceStartTime() const { return this->silenceStartTime_ != nullptr;};
    void deleteSilenceStartTime() { this->silenceStartTime_ = nullptr;};
    inline string silenceStartTime() const { DARABONBA_PTR_GET_DEFAULT(silenceStartTime_, "") };
    inline UpdateBaselineRequestAlertSettings& setSilenceStartTime(string silenceStartTime) { DARABONBA_PTR_SET_VALUE(silenceStartTime_, silenceStartTime) };


    // topicTypes Field Functions 
    bool hasTopicTypes() const { return this->topicTypes_ != nullptr;};
    void deleteTopicTypes() { this->topicTypes_ = nullptr;};
    inline const vector<string> & topicTypes() const { DARABONBA_PTR_GET_CONST(topicTypes_, vector<string>) };
    inline vector<string> topicTypes() { DARABONBA_PTR_GET(topicTypes_, vector<string>) };
    inline UpdateBaselineRequestAlertSettings& setTopicTypes(const vector<string> & topicTypes) { DARABONBA_PTR_SET_VALUE(topicTypes_, topicTypes) };
    inline UpdateBaselineRequestAlertSettings& setTopicTypes(vector<string> && topicTypes) { DARABONBA_PTR_SET_RVALUE(topicTypes_, topicTypes) };


    // webhooks Field Functions 
    bool hasWebhooks() const { return this->webhooks_ != nullptr;};
    void deleteWebhooks() { this->webhooks_ = nullptr;};
    inline const vector<string> & webhooks() const { DARABONBA_PTR_GET_CONST(webhooks_, vector<string>) };
    inline vector<string> webhooks() { DARABONBA_PTR_GET(webhooks_, vector<string>) };
    inline UpdateBaselineRequestAlertSettings& setWebhooks(const vector<string> & webhooks) { DARABONBA_PTR_SET_VALUE(webhooks_, webhooks) };
    inline UpdateBaselineRequestAlertSettings& setWebhooks(vector<string> && webhooks) { DARABONBA_PTR_SET_RVALUE(webhooks_, webhooks) };


  protected:
    // The interval at which an event alert notification is sent. Unit: minutes. Minimum value: 5. Maximum value: 1,440.
    std::shared_ptr<int32_t> alertInterval_ = nullptr;
    // The maximum number of times an event alert notification is sent. Maximum value: 24.
    std::shared_ptr<int32_t> alertMaximum_ = nullptr;
    // The alert notification methods. Valid values: MAIL, SMS, PHONE, DINGROBOTS, and Webhooks. The value MAIL indicates that alert notifications are sent by email. The value SMS indicates that alert notifications are sent by text message. The value PHONE indicates that alert notifications are sent by phone call. You can use this notification method only in DataWorks Professional Edition or a more advanced edition. The value DINGROBOTS indicates that alert notifications are sent by using a DingTalk chatbot. You can use this notification method only if the RobotUrls parameter is configured. The value Webhooks indicates that alert notifications are sent by WeCom or Lark. You can use this notification method only if the Webhooks parameter is configured.
    std::shared_ptr<vector<string>> alertMethods_ = nullptr;
    // The details of the alert recipient. If you set AlertRecipientType to OWNER, leave this parameter empty. If you set AlertRecipientType to SHIFT_SCHEDULE, set this parameter to the name of the shift schedule. If you set AlertRecipientType to OTHER, set this parameter to the employee IDs of specified personnel.
    std::shared_ptr<string> alertRecipient_ = nullptr;
    // The type of the alert recipient. Valid values: OWNER, OTHER, and SHIFT_SCHEDULE. The value OWNER indicates the node owner. The value OTHER indicates specified personnel. The value SHIFT_SCHEDULE indicates personnel in a shift schedule.
    std::shared_ptr<string> alertRecipientType_ = nullptr;
    // The type of the alert. Valid values: BASELINE and TOPIC. The value BASELINE indicates a baseline alert. The value TOPIC indicates an event alert.
    std::shared_ptr<string> alertType_ = nullptr;
    // Specifies whether to enable the baseline alerting feature. This feature is specific to baselines. Valid values: true and false.
    std::shared_ptr<bool> baselineAlertEnabled_ = nullptr;
    // The DingTalk chatbots.
    std::shared_ptr<vector<Models::UpdateBaselineRequestAlertSettingsDingRobots>> dingRobots_ = nullptr;
    // The end time of silence.
    std::shared_ptr<string> silenceEndTime_ = nullptr;
    // The start time of silence.
    std::shared_ptr<string> silenceStartTime_ = nullptr;
    // The types of event alerts, which are event-specific configurations.
    std::shared_ptr<vector<string>> topicTypes_ = nullptr;
    // The webhook URLs.
    std::shared_ptr<vector<string>> webhooks_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
