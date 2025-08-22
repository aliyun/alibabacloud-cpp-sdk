// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHALERTHISTORIESRESPONSEBODYPAGEBEANALARMHISTORIES_HPP_
#define ALIBABACLOUD_MODELS_SEARCHALERTHISTORIESRESPONSEBODYPAGEBEANALARMHISTORIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class SearchAlertHistoriesResponseBodyPageBeanAlarmHistories : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchAlertHistoriesResponseBodyPageBeanAlarmHistories& obj) { 
      DARABONBA_PTR_TO_JSON(AlarmContent, alarmContent_);
      DARABONBA_PTR_TO_JSON(AlarmResponseCode, alarmResponseCode_);
      DARABONBA_PTR_TO_JSON(AlarmSources, alarmSources_);
      DARABONBA_PTR_TO_JSON(AlarmTime, alarmTime_);
      DARABONBA_PTR_TO_JSON(AlarmType, alarmType_);
      DARABONBA_PTR_TO_JSON(Emails, emails_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Phones, phones_);
      DARABONBA_PTR_TO_JSON(StrategyId, strategyId_);
      DARABONBA_PTR_TO_JSON(Target, target_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, SearchAlertHistoriesResponseBodyPageBeanAlarmHistories& obj) { 
      DARABONBA_PTR_FROM_JSON(AlarmContent, alarmContent_);
      DARABONBA_PTR_FROM_JSON(AlarmResponseCode, alarmResponseCode_);
      DARABONBA_PTR_FROM_JSON(AlarmSources, alarmSources_);
      DARABONBA_PTR_FROM_JSON(AlarmTime, alarmTime_);
      DARABONBA_PTR_FROM_JSON(AlarmType, alarmType_);
      DARABONBA_PTR_FROM_JSON(Emails, emails_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Phones, phones_);
      DARABONBA_PTR_FROM_JSON(StrategyId, strategyId_);
      DARABONBA_PTR_FROM_JSON(Target, target_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    SearchAlertHistoriesResponseBodyPageBeanAlarmHistories() = default ;
    SearchAlertHistoriesResponseBodyPageBeanAlarmHistories(const SearchAlertHistoriesResponseBodyPageBeanAlarmHistories &) = default ;
    SearchAlertHistoriesResponseBodyPageBeanAlarmHistories(SearchAlertHistoriesResponseBodyPageBeanAlarmHistories &&) = default ;
    SearchAlertHistoriesResponseBodyPageBeanAlarmHistories(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchAlertHistoriesResponseBodyPageBeanAlarmHistories() = default ;
    SearchAlertHistoriesResponseBodyPageBeanAlarmHistories& operator=(const SearchAlertHistoriesResponseBodyPageBeanAlarmHistories &) = default ;
    SearchAlertHistoriesResponseBodyPageBeanAlarmHistories& operator=(SearchAlertHistoriesResponseBodyPageBeanAlarmHistories &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alarmContent_ != nullptr
        && this->alarmResponseCode_ != nullptr && this->alarmSources_ != nullptr && this->alarmTime_ != nullptr && this->alarmType_ != nullptr && this->emails_ != nullptr
        && this->id_ != nullptr && this->phones_ != nullptr && this->strategyId_ != nullptr && this->target_ != nullptr && this->userId_ != nullptr; };
    // alarmContent Field Functions 
    bool hasAlarmContent() const { return this->alarmContent_ != nullptr;};
    void deleteAlarmContent() { this->alarmContent_ = nullptr;};
    inline string alarmContent() const { DARABONBA_PTR_GET_DEFAULT(alarmContent_, "") };
    inline SearchAlertHistoriesResponseBodyPageBeanAlarmHistories& setAlarmContent(string alarmContent) { DARABONBA_PTR_SET_VALUE(alarmContent_, alarmContent) };


    // alarmResponseCode Field Functions 
    bool hasAlarmResponseCode() const { return this->alarmResponseCode_ != nullptr;};
    void deleteAlarmResponseCode() { this->alarmResponseCode_ = nullptr;};
    inline int32_t alarmResponseCode() const { DARABONBA_PTR_GET_DEFAULT(alarmResponseCode_, 0) };
    inline SearchAlertHistoriesResponseBodyPageBeanAlarmHistories& setAlarmResponseCode(int32_t alarmResponseCode) { DARABONBA_PTR_SET_VALUE(alarmResponseCode_, alarmResponseCode) };


    // alarmSources Field Functions 
    bool hasAlarmSources() const { return this->alarmSources_ != nullptr;};
    void deleteAlarmSources() { this->alarmSources_ = nullptr;};
    inline string alarmSources() const { DARABONBA_PTR_GET_DEFAULT(alarmSources_, "") };
    inline SearchAlertHistoriesResponseBodyPageBeanAlarmHistories& setAlarmSources(string alarmSources) { DARABONBA_PTR_SET_VALUE(alarmSources_, alarmSources) };


    // alarmTime Field Functions 
    bool hasAlarmTime() const { return this->alarmTime_ != nullptr;};
    void deleteAlarmTime() { this->alarmTime_ = nullptr;};
    inline int64_t alarmTime() const { DARABONBA_PTR_GET_DEFAULT(alarmTime_, 0L) };
    inline SearchAlertHistoriesResponseBodyPageBeanAlarmHistories& setAlarmTime(int64_t alarmTime) { DARABONBA_PTR_SET_VALUE(alarmTime_, alarmTime) };


    // alarmType Field Functions 
    bool hasAlarmType() const { return this->alarmType_ != nullptr;};
    void deleteAlarmType() { this->alarmType_ = nullptr;};
    inline int32_t alarmType() const { DARABONBA_PTR_GET_DEFAULT(alarmType_, 0) };
    inline SearchAlertHistoriesResponseBodyPageBeanAlarmHistories& setAlarmType(int32_t alarmType) { DARABONBA_PTR_SET_VALUE(alarmType_, alarmType) };


    // emails Field Functions 
    bool hasEmails() const { return this->emails_ != nullptr;};
    void deleteEmails() { this->emails_ = nullptr;};
    inline string emails() const { DARABONBA_PTR_GET_DEFAULT(emails_, "") };
    inline SearchAlertHistoriesResponseBodyPageBeanAlarmHistories& setEmails(string emails) { DARABONBA_PTR_SET_VALUE(emails_, emails) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline SearchAlertHistoriesResponseBodyPageBeanAlarmHistories& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // phones Field Functions 
    bool hasPhones() const { return this->phones_ != nullptr;};
    void deletePhones() { this->phones_ = nullptr;};
    inline string phones() const { DARABONBA_PTR_GET_DEFAULT(phones_, "") };
    inline SearchAlertHistoriesResponseBodyPageBeanAlarmHistories& setPhones(string phones) { DARABONBA_PTR_SET_VALUE(phones_, phones) };


    // strategyId Field Functions 
    bool hasStrategyId() const { return this->strategyId_ != nullptr;};
    void deleteStrategyId() { this->strategyId_ = nullptr;};
    inline string strategyId() const { DARABONBA_PTR_GET_DEFAULT(strategyId_, "") };
    inline SearchAlertHistoriesResponseBodyPageBeanAlarmHistories& setStrategyId(string strategyId) { DARABONBA_PTR_SET_VALUE(strategyId_, strategyId) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline string target() const { DARABONBA_PTR_GET_DEFAULT(target_, "") };
    inline SearchAlertHistoriesResponseBodyPageBeanAlarmHistories& setTarget(string target) { DARABONBA_PTR_SET_VALUE(target_, target) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline SearchAlertHistoriesResponseBodyPageBeanAlarmHistories& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The content of the alert notification.
    std::shared_ptr<string> alarmContent_ = nullptr;
    // The response code returned after the alert notification was sent.
    std::shared_ptr<int32_t> alarmResponseCode_ = nullptr;
    // The webhook URL, such as the webhook URL of a DingTalk chatbot.
    std::shared_ptr<string> alarmSources_ = nullptr;
    // The time when the alert notification was sent.
    std::shared_ptr<int64_t> alarmTime_ = nullptr;
    // The type of the alert rule. Default value: 4. Valid values:
    // 
    // *   `1`: a custom alert rule that is used to monitor drill-down data sets
    // *   `3`: a custom alert rule that is used to monitor tiled data sets
    // *   `4`: an alert rule that is used to monitor web pages, including the default alert rule for browser monitoring
    // *   `5`: an alert rule that is used to monitor applications, including the default alert rule for application monitoring
    // *   `6`: the default alert rule for browser monitoring
    // *   `7`: the default alert rule for application monitoring
    // *   `8`: a Tracing Analysis alert rule
    // *   `101`: a Prometheus alert rule
    std::shared_ptr<int32_t> alarmType_ = nullptr;
    // The email address of the alert contact.
    std::shared_ptr<string> emails_ = nullptr;
    // The ID of the alert notification.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The mobile phone number of the alert contact.
    std::shared_ptr<string> phones_ = nullptr;
    // The internal fields.
    std::shared_ptr<string> strategyId_ = nullptr;
    // The internal fields.
    std::shared_ptr<string> target_ = nullptr;
    // The ID of the user.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
