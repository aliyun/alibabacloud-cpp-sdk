// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREMINDERRESPONSEBODYMODELREMINDRESPONSES_HPP_
#define ALIBABACLOUD_MODELS_GETREMINDERRESPONSEBODYMODELREMINDRESPONSES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetReminderResponseBodyModelRemindResponsesRecurrenceRule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieiap_1_0
{
namespace Models
{
  class GetReminderResponseBodyModelRemindResponses : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetReminderResponseBodyModelRemindResponses& obj) { 
      DARABONBA_PTR_TO_JSON(ActionTopic, actionTopic_);
      DARABONBA_PTR_TO_JSON(DayDesc, dayDesc_);
      DARABONBA_PTR_TO_JSON(RecurrenceRule, recurrenceRule_);
      DARABONBA_PTR_TO_JSON(RemindId, remindId_);
      DARABONBA_PTR_TO_JSON(RemindTime, remindTime_);
      DARABONBA_PTR_TO_JSON(RepeatCount, repeatCount_);
      DARABONBA_PTR_TO_JSON(Week, week_);
    };
    friend void from_json(const Darabonba::Json& j, GetReminderResponseBodyModelRemindResponses& obj) { 
      DARABONBA_PTR_FROM_JSON(ActionTopic, actionTopic_);
      DARABONBA_PTR_FROM_JSON(DayDesc, dayDesc_);
      DARABONBA_PTR_FROM_JSON(RecurrenceRule, recurrenceRule_);
      DARABONBA_PTR_FROM_JSON(RemindId, remindId_);
      DARABONBA_PTR_FROM_JSON(RemindTime, remindTime_);
      DARABONBA_PTR_FROM_JSON(RepeatCount, repeatCount_);
      DARABONBA_PTR_FROM_JSON(Week, week_);
    };
    GetReminderResponseBodyModelRemindResponses() = default ;
    GetReminderResponseBodyModelRemindResponses(const GetReminderResponseBodyModelRemindResponses &) = default ;
    GetReminderResponseBodyModelRemindResponses(GetReminderResponseBodyModelRemindResponses &&) = default ;
    GetReminderResponseBodyModelRemindResponses(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetReminderResponseBodyModelRemindResponses() = default ;
    GetReminderResponseBodyModelRemindResponses& operator=(const GetReminderResponseBodyModelRemindResponses &) = default ;
    GetReminderResponseBodyModelRemindResponses& operator=(GetReminderResponseBodyModelRemindResponses &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->actionTopic_ != nullptr
        && this->dayDesc_ != nullptr && this->recurrenceRule_ != nullptr && this->remindId_ != nullptr && this->remindTime_ != nullptr && this->repeatCount_ != nullptr
        && this->week_ != nullptr; };
    // actionTopic Field Functions 
    bool hasActionTopic() const { return this->actionTopic_ != nullptr;};
    void deleteActionTopic() { this->actionTopic_ = nullptr;};
    inline string actionTopic() const { DARABONBA_PTR_GET_DEFAULT(actionTopic_, "") };
    inline GetReminderResponseBodyModelRemindResponses& setActionTopic(string actionTopic) { DARABONBA_PTR_SET_VALUE(actionTopic_, actionTopic) };


    // dayDesc Field Functions 
    bool hasDayDesc() const { return this->dayDesc_ != nullptr;};
    void deleteDayDesc() { this->dayDesc_ = nullptr;};
    inline string dayDesc() const { DARABONBA_PTR_GET_DEFAULT(dayDesc_, "") };
    inline GetReminderResponseBodyModelRemindResponses& setDayDesc(string dayDesc) { DARABONBA_PTR_SET_VALUE(dayDesc_, dayDesc) };


    // recurrenceRule Field Functions 
    bool hasRecurrenceRule() const { return this->recurrenceRule_ != nullptr;};
    void deleteRecurrenceRule() { this->recurrenceRule_ = nullptr;};
    inline const Models::GetReminderResponseBodyModelRemindResponsesRecurrenceRule & recurrenceRule() const { DARABONBA_PTR_GET_CONST(recurrenceRule_, Models::GetReminderResponseBodyModelRemindResponsesRecurrenceRule) };
    inline Models::GetReminderResponseBodyModelRemindResponsesRecurrenceRule recurrenceRule() { DARABONBA_PTR_GET(recurrenceRule_, Models::GetReminderResponseBodyModelRemindResponsesRecurrenceRule) };
    inline GetReminderResponseBodyModelRemindResponses& setRecurrenceRule(const Models::GetReminderResponseBodyModelRemindResponsesRecurrenceRule & recurrenceRule) { DARABONBA_PTR_SET_VALUE(recurrenceRule_, recurrenceRule) };
    inline GetReminderResponseBodyModelRemindResponses& setRecurrenceRule(Models::GetReminderResponseBodyModelRemindResponsesRecurrenceRule && recurrenceRule) { DARABONBA_PTR_SET_RVALUE(recurrenceRule_, recurrenceRule) };


    // remindId Field Functions 
    bool hasRemindId() const { return this->remindId_ != nullptr;};
    void deleteRemindId() { this->remindId_ = nullptr;};
    inline int64_t remindId() const { DARABONBA_PTR_GET_DEFAULT(remindId_, 0L) };
    inline GetReminderResponseBodyModelRemindResponses& setRemindId(int64_t remindId) { DARABONBA_PTR_SET_VALUE(remindId_, remindId) };


    // remindTime Field Functions 
    bool hasRemindTime() const { return this->remindTime_ != nullptr;};
    void deleteRemindTime() { this->remindTime_ = nullptr;};
    inline string remindTime() const { DARABONBA_PTR_GET_DEFAULT(remindTime_, "") };
    inline GetReminderResponseBodyModelRemindResponses& setRemindTime(string remindTime) { DARABONBA_PTR_SET_VALUE(remindTime_, remindTime) };


    // repeatCount Field Functions 
    bool hasRepeatCount() const { return this->repeatCount_ != nullptr;};
    void deleteRepeatCount() { this->repeatCount_ = nullptr;};
    inline int32_t repeatCount() const { DARABONBA_PTR_GET_DEFAULT(repeatCount_, 0) };
    inline GetReminderResponseBodyModelRemindResponses& setRepeatCount(int32_t repeatCount) { DARABONBA_PTR_SET_VALUE(repeatCount_, repeatCount) };


    // week Field Functions 
    bool hasWeek() const { return this->week_ != nullptr;};
    void deleteWeek() { this->week_ = nullptr;};
    inline string week() const { DARABONBA_PTR_GET_DEFAULT(week_, "") };
    inline GetReminderResponseBodyModelRemindResponses& setWeek(string week) { DARABONBA_PTR_SET_VALUE(week_, week) };


  protected:
    std::shared_ptr<string> actionTopic_ = nullptr;
    std::shared_ptr<string> dayDesc_ = nullptr;
    std::shared_ptr<Models::GetReminderResponseBodyModelRemindResponsesRecurrenceRule> recurrenceRule_ = nullptr;
    std::shared_ptr<int64_t> remindId_ = nullptr;
    std::shared_ptr<string> remindTime_ = nullptr;
    std::shared_ptr<int32_t> repeatCount_ = nullptr;
    std::shared_ptr<string> week_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieiap_1_0
#endif
