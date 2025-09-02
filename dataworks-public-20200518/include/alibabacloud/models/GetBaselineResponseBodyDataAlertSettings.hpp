// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBASELINERESPONSEBODYDATAALERTSETTINGS_HPP_
#define ALIBABACLOUD_MODELS_GETBASELINERESPONSEBODYDATAALERTSETTINGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetBaselineResponseBodyDataAlertSettingsDingRobots.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetBaselineResponseBodyDataAlertSettings : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBaselineResponseBodyDataAlertSettings& obj) { 
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
    friend void from_json(const Darabonba::Json& j, GetBaselineResponseBodyDataAlertSettings& obj) { 
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
    GetBaselineResponseBodyDataAlertSettings() = default ;
    GetBaselineResponseBodyDataAlertSettings(const GetBaselineResponseBodyDataAlertSettings &) = default ;
    GetBaselineResponseBodyDataAlertSettings(GetBaselineResponseBodyDataAlertSettings &&) = default ;
    GetBaselineResponseBodyDataAlertSettings(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBaselineResponseBodyDataAlertSettings() = default ;
    GetBaselineResponseBodyDataAlertSettings& operator=(const GetBaselineResponseBodyDataAlertSettings &) = default ;
    GetBaselineResponseBodyDataAlertSettings& operator=(GetBaselineResponseBodyDataAlertSettings &&) = default ;
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
    inline GetBaselineResponseBodyDataAlertSettings& setAlertInterval(int32_t alertInterval) { DARABONBA_PTR_SET_VALUE(alertInterval_, alertInterval) };


    // alertMaximum Field Functions 
    bool hasAlertMaximum() const { return this->alertMaximum_ != nullptr;};
    void deleteAlertMaximum() { this->alertMaximum_ = nullptr;};
    inline int32_t alertMaximum() const { DARABONBA_PTR_GET_DEFAULT(alertMaximum_, 0) };
    inline GetBaselineResponseBodyDataAlertSettings& setAlertMaximum(int32_t alertMaximum) { DARABONBA_PTR_SET_VALUE(alertMaximum_, alertMaximum) };


    // alertMethods Field Functions 
    bool hasAlertMethods() const { return this->alertMethods_ != nullptr;};
    void deleteAlertMethods() { this->alertMethods_ = nullptr;};
    inline const vector<string> & alertMethods() const { DARABONBA_PTR_GET_CONST(alertMethods_, vector<string>) };
    inline vector<string> alertMethods() { DARABONBA_PTR_GET(alertMethods_, vector<string>) };
    inline GetBaselineResponseBodyDataAlertSettings& setAlertMethods(const vector<string> & alertMethods) { DARABONBA_PTR_SET_VALUE(alertMethods_, alertMethods) };
    inline GetBaselineResponseBodyDataAlertSettings& setAlertMethods(vector<string> && alertMethods) { DARABONBA_PTR_SET_RVALUE(alertMethods_, alertMethods) };


    // alertRecipient Field Functions 
    bool hasAlertRecipient() const { return this->alertRecipient_ != nullptr;};
    void deleteAlertRecipient() { this->alertRecipient_ = nullptr;};
    inline string alertRecipient() const { DARABONBA_PTR_GET_DEFAULT(alertRecipient_, "") };
    inline GetBaselineResponseBodyDataAlertSettings& setAlertRecipient(string alertRecipient) { DARABONBA_PTR_SET_VALUE(alertRecipient_, alertRecipient) };


    // alertRecipientType Field Functions 
    bool hasAlertRecipientType() const { return this->alertRecipientType_ != nullptr;};
    void deleteAlertRecipientType() { this->alertRecipientType_ = nullptr;};
    inline string alertRecipientType() const { DARABONBA_PTR_GET_DEFAULT(alertRecipientType_, "") };
    inline GetBaselineResponseBodyDataAlertSettings& setAlertRecipientType(string alertRecipientType) { DARABONBA_PTR_SET_VALUE(alertRecipientType_, alertRecipientType) };


    // alertType Field Functions 
    bool hasAlertType() const { return this->alertType_ != nullptr;};
    void deleteAlertType() { this->alertType_ = nullptr;};
    inline string alertType() const { DARABONBA_PTR_GET_DEFAULT(alertType_, "") };
    inline GetBaselineResponseBodyDataAlertSettings& setAlertType(string alertType) { DARABONBA_PTR_SET_VALUE(alertType_, alertType) };


    // baselineAlertEnabled Field Functions 
    bool hasBaselineAlertEnabled() const { return this->baselineAlertEnabled_ != nullptr;};
    void deleteBaselineAlertEnabled() { this->baselineAlertEnabled_ = nullptr;};
    inline bool baselineAlertEnabled() const { DARABONBA_PTR_GET_DEFAULT(baselineAlertEnabled_, false) };
    inline GetBaselineResponseBodyDataAlertSettings& setBaselineAlertEnabled(bool baselineAlertEnabled) { DARABONBA_PTR_SET_VALUE(baselineAlertEnabled_, baselineAlertEnabled) };


    // dingRobots Field Functions 
    bool hasDingRobots() const { return this->dingRobots_ != nullptr;};
    void deleteDingRobots() { this->dingRobots_ = nullptr;};
    inline const vector<Models::GetBaselineResponseBodyDataAlertSettingsDingRobots> & dingRobots() const { DARABONBA_PTR_GET_CONST(dingRobots_, vector<Models::GetBaselineResponseBodyDataAlertSettingsDingRobots>) };
    inline vector<Models::GetBaselineResponseBodyDataAlertSettingsDingRobots> dingRobots() { DARABONBA_PTR_GET(dingRobots_, vector<Models::GetBaselineResponseBodyDataAlertSettingsDingRobots>) };
    inline GetBaselineResponseBodyDataAlertSettings& setDingRobots(const vector<Models::GetBaselineResponseBodyDataAlertSettingsDingRobots> & dingRobots) { DARABONBA_PTR_SET_VALUE(dingRobots_, dingRobots) };
    inline GetBaselineResponseBodyDataAlertSettings& setDingRobots(vector<Models::GetBaselineResponseBodyDataAlertSettingsDingRobots> && dingRobots) { DARABONBA_PTR_SET_RVALUE(dingRobots_, dingRobots) };


    // silenceEndTime Field Functions 
    bool hasSilenceEndTime() const { return this->silenceEndTime_ != nullptr;};
    void deleteSilenceEndTime() { this->silenceEndTime_ = nullptr;};
    inline string silenceEndTime() const { DARABONBA_PTR_GET_DEFAULT(silenceEndTime_, "") };
    inline GetBaselineResponseBodyDataAlertSettings& setSilenceEndTime(string silenceEndTime) { DARABONBA_PTR_SET_VALUE(silenceEndTime_, silenceEndTime) };


    // silenceStartTime Field Functions 
    bool hasSilenceStartTime() const { return this->silenceStartTime_ != nullptr;};
    void deleteSilenceStartTime() { this->silenceStartTime_ = nullptr;};
    inline string silenceStartTime() const { DARABONBA_PTR_GET_DEFAULT(silenceStartTime_, "") };
    inline GetBaselineResponseBodyDataAlertSettings& setSilenceStartTime(string silenceStartTime) { DARABONBA_PTR_SET_VALUE(silenceStartTime_, silenceStartTime) };


    // topicTypes Field Functions 
    bool hasTopicTypes() const { return this->topicTypes_ != nullptr;};
    void deleteTopicTypes() { this->topicTypes_ = nullptr;};
    inline const vector<string> & topicTypes() const { DARABONBA_PTR_GET_CONST(topicTypes_, vector<string>) };
    inline vector<string> topicTypes() { DARABONBA_PTR_GET(topicTypes_, vector<string>) };
    inline GetBaselineResponseBodyDataAlertSettings& setTopicTypes(const vector<string> & topicTypes) { DARABONBA_PTR_SET_VALUE(topicTypes_, topicTypes) };
    inline GetBaselineResponseBodyDataAlertSettings& setTopicTypes(vector<string> && topicTypes) { DARABONBA_PTR_SET_RVALUE(topicTypes_, topicTypes) };


    // webhooks Field Functions 
    bool hasWebhooks() const { return this->webhooks_ != nullptr;};
    void deleteWebhooks() { this->webhooks_ = nullptr;};
    inline const vector<string> & webhooks() const { DARABONBA_PTR_GET_CONST(webhooks_, vector<string>) };
    inline vector<string> webhooks() { DARABONBA_PTR_GET(webhooks_, vector<string>) };
    inline GetBaselineResponseBodyDataAlertSettings& setWebhooks(const vector<string> & webhooks) { DARABONBA_PTR_SET_VALUE(webhooks_, webhooks) };
    inline GetBaselineResponseBodyDataAlertSettings& setWebhooks(vector<string> && webhooks) { DARABONBA_PTR_SET_RVALUE(webhooks_, webhooks) };


  protected:
    // The event alert interval, in seconds.
    std::shared_ptr<int32_t> alertInterval_ = nullptr;
    // The maximum number of event alerts.
    std::shared_ptr<int32_t> alertMaximum_ = nullptr;
    // Alert method list
    std::shared_ptr<vector<string>> alertMethods_ = nullptr;
    // Alert recipient details.
    // 
    // AlertRecipientType is OWNER: empty
    // AlertRecipientType is SHIFT_SCHEDULE: duty table uid
    // AlertRecipientType is OTHER: uid list, multiple UIDs are in English, split
    std::shared_ptr<string> alertRecipient_ = nullptr;
    // The type of alert recipient.
    // 
    // - OWNER: task owner
    // - OTHER: designated person
    // - SHIFT: SCHEDULE-duty table
    std::shared_ptr<string> alertRecipientType_ = nullptr;
    // Alert type
    // 
    // - BASELINE: baseline
    // - TOPIC: event
    std::shared_ptr<string> alertType_ = nullptr;
    // The baseline alarm switch.
    // 
    // - true
    // - false
    std::shared_ptr<bool> baselineAlertEnabled_ = nullptr;
    // DingTalk robot list.
    std::shared_ptr<vector<Models::GetBaselineResponseBodyDataAlertSettingsDingRobots>> dingRobots_ = nullptr;
    // The end time of the silence. The format is HH:mm:ss.
    std::shared_ptr<string> silenceEndTime_ = nullptr;
    // The start time of the silence. Format: HH:mm:ss
    std::shared_ptr<string> silenceStartTime_ = nullptr;
    // The list of Event Alert types.
    std::shared_ptr<vector<string>> topicTypes_ = nullptr;
    // webhook list.
    std::shared_ptr<vector<string>> webhooks_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
